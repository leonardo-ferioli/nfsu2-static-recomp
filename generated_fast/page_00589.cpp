#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_585(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_588(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_5ff(u8* __restrict R,Cpu& c);
u32 body_609(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x589,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x589,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_589(u8* __restrict R,Cpu& c);
u32 page_589(Cpu& c){return body_589(c.regs.data(),c);}
__attribute__((noinline)) u32 body_589(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x589001:goto L589001;
case 0x589004:c.instructions+=18;goto B589004;
case 0x589007:c.instructions+=17;goto B589007;
case 0x58900d:c.instructions+=16;goto B58900d;
case 0x589013:c.instructions+=15;goto B589013;
case 0x589019:c.instructions+=14;goto B589019;
case 0x58901e:c.instructions+=13;goto B58901e;
case 0x589023:c.instructions+=12;goto B589023;
case 0x589028:c.instructions+=11;goto B589028;
case 0x58902e:c.instructions+=10;goto B58902e;
case 0x589035:c.instructions+=9;goto B589035;
case 0x58903f:c.instructions+=8;goto B58903f;
case 0x589049:c.instructions+=7;goto B589049;
case 0x58904f:c.instructions+=6;goto B58904f;
case 0x589055:c.instructions+=5;goto B589055;
case 0x58905b:c.instructions+=4;goto B58905b;
case 0x589061:c.instructions+=3;goto B589061;
case 0x589067:c.instructions+=2;goto B589067;
case 0x589068:c.instructions+=1;goto B589068;
case 0x589070:goto L589070;
case 0x589075:c.instructions+=2;goto B589075;
case 0x589077:c.instructions+=1;goto B589077;
case 0x589079:goto L589079;
case 0x58907b:goto L58907b;
case 0x589080:goto L589080;
case 0x589085:c.instructions+=2;goto B589085;
case 0x589088:c.instructions+=1;goto B589088;
case 0x58908a:goto L58908a;
case 0x58908f:c.instructions+=2;goto B58908f;
case 0x589091:c.instructions+=1;goto B589091;
case 0x589093:goto L589093;
case 0x589095:goto L589095;
case 0x58909c:c.instructions+=1;goto B58909c;
case 0x5890a1:goto L5890a1;
case 0x5890a3:c.instructions+=3;goto B5890a3;
case 0x5890a4:c.instructions+=2;goto B5890a4;
case 0x5890a9:c.instructions+=1;goto B5890a9;
case 0x5890ae:goto L5890ae;
case 0x5890b5:c.instructions+=1;goto B5890b5;
case 0x5890c0:goto L5890c0;
case 0x5890c5:c.instructions+=4;goto B5890c5;
case 0x5890c7:c.instructions+=3;goto B5890c7;
case 0x5890c8:c.instructions+=2;goto B5890c8;
case 0x5890cd:c.instructions+=1;goto B5890cd;
case 0x5890d2:goto L5890d2;
case 0x5890e0:goto L5890e0;
case 0x5890e5:c.instructions+=3;goto B5890e5;
case 0x5890e8:c.instructions+=2;goto B5890e8;
case 0x5890ea:c.instructions+=1;goto B5890ea;
case 0x5890f0:goto L5890f0;
case 0x5890f5:c.instructions+=10;goto B5890f5;
case 0x5890f6:c.instructions+=9;goto B5890f6;
case 0x5890f7:c.instructions+=8;goto B5890f7;
case 0x5890fb:c.instructions+=7;goto B5890fb;
case 0x5890fc:c.instructions+=6;goto B5890fc;
case 0x5890fd:c.instructions+=5;goto B5890fd;
case 0x589101:c.instructions+=4;goto B589101;
case 0x589102:c.instructions+=3;goto B589102;
case 0x589104:c.instructions+=2;goto B589104;
case 0x58910c:c.instructions+=1;goto B58910c;
case 0x589111:goto L589111;
case 0x589115:c.instructions+=8;goto B589115;
case 0x58911a:c.instructions+=7;goto B58911a;
case 0x58911c:c.instructions+=6;goto B58911c;
case 0x589120:c.instructions+=5;goto B589120;
case 0x589121:c.instructions+=4;goto B589121;
case 0x589123:c.instructions+=3;goto B589123;
case 0x589126:c.instructions+=2;goto B589126;
case 0x58912e:c.instructions+=1;goto B58912e;
case 0x589133:goto L589133;
case 0x589137:c.instructions+=7;goto B589137;
case 0x589139:c.instructions+=6;goto B589139;
case 0x58913d:c.instructions+=5;goto B58913d;
case 0x58913e:c.instructions+=4;goto B58913e;
case 0x589140:c.instructions+=3;goto B589140;
case 0x589144:c.instructions+=2;goto B589144;
case 0x58914c:c.instructions+=1;goto B58914c;
case 0x589151:goto L589151;
case 0x589152:c.instructions+=2;goto B589152;
case 0x589157:c.instructions+=1;goto B589157;
case 0x58915c:goto L58915c;
case 0x58915e:c.instructions+=2;goto B58915e;
case 0x589160:c.instructions+=1;goto B589160;
case 0x589162:goto L589162;
case 0x589166:c.instructions+=4;goto B589166;
case 0x58916c:c.instructions+=3;goto B58916c;
case 0x58916e:c.instructions+=2;goto B58916e;
case 0x589171:c.instructions+=1;goto B589171;
case 0x589173:goto L589173;
case 0x589177:c.instructions+=9;goto B589177;
case 0x589179:c.instructions+=8;goto B589179;
case 0x58917f:c.instructions+=7;goto B58917f;
case 0x589184:c.instructions+=6;goto B589184;
case 0x589185:c.instructions+=5;goto B589185;
case 0x589186:c.instructions+=4;goto B589186;
case 0x589187:c.instructions+=3;goto B589187;
case 0x589188:c.instructions+=2;goto B589188;
case 0x58918d:c.instructions+=1;goto B58918d;
case 0x589192:goto L589192;
case 0x589198:c.instructions+=1;goto B589198;
case 0x58919a:goto L58919a;
case 0x58919b:c.instructions+=1;goto B58919b;
case 0x5891a0:goto L5891a0;
case 0x5891a3:goto L5891a3;
case 0x5891a4:c.instructions+=2;goto B5891a4;
case 0x5891a5:c.instructions+=1;goto B5891a5;
case 0x5891a6:goto L5891a6;
case 0x5891a9:c.instructions+=1;goto B5891a9;
case 0x5891b0:goto L5891b0;
case 0x5891b3:c.instructions+=10;goto B5891b3;
case 0x5891b4:c.instructions+=9;goto B5891b4;
case 0x5891b8:c.instructions+=8;goto B5891b8;
case 0x5891b9:c.instructions+=7;goto B5891b9;
case 0x5891bb:c.instructions+=6;goto B5891bb;
case 0x5891bf:c.instructions+=5;goto B5891bf;
case 0x5891c1:c.instructions+=4;goto B5891c1;
case 0x5891c2:c.instructions+=3;goto B5891c2;
case 0x5891c4:c.instructions+=2;goto B5891c4;
case 0x5891c8:c.instructions+=1;goto B5891c8;
case 0x5891cd:goto L5891cd;
case 0x5891d1:c.instructions+=7;goto B5891d1;
case 0x5891d3:c.instructions+=6;goto B5891d3;
case 0x5891d7:c.instructions+=5;goto B5891d7;
case 0x5891db:c.instructions+=4;goto B5891db;
case 0x5891dc:c.instructions+=3;goto B5891dc;
case 0x5891de:c.instructions+=2;goto B5891de;
case 0x5891e2:c.instructions+=1;goto B5891e2;
case 0x5891e7:goto L5891e7;
case 0x5891eb:c.instructions+=6;goto B5891eb;
case 0x5891f1:c.instructions+=5;goto B5891f1;
case 0x5891f5:c.instructions+=4;goto B5891f5;
case 0x5891f9:c.instructions+=3;goto B5891f9;
case 0x5891fb:c.instructions+=2;goto B5891fb;
case 0x5891fe:c.instructions+=1;goto B5891fe;
case 0x589204:goto L589204;
case 0x589208:c.instructions+=4;goto B589208;
case 0x589209:c.instructions+=3;goto B589209;
case 0x58920a:c.instructions+=2;goto B58920a;
case 0x58920f:c.instructions+=1;goto B58920f;
case 0x589214:goto L589214;
case 0x58921a:c.instructions+=8;goto B58921a;
case 0x58921d:c.instructions+=7;goto B58921d;
case 0x589223:c.instructions+=6;goto B589223;
case 0x589227:c.instructions+=5;goto B589227;
case 0x58922d:c.instructions+=4;goto B58922d;
case 0x589233:c.instructions+=3;goto B589233;
case 0x589235:c.instructions+=2;goto B589235;
case 0x58923b:c.instructions+=1;goto B58923b;
case 0x589240:goto L589240;
case 0x589244:c.instructions+=12;goto B589244;
case 0x58924a:c.instructions+=11;goto B58924a;
case 0x58924e:c.instructions+=10;goto B58924e;
case 0x589254:c.instructions+=9;goto B589254;
case 0x58925a:c.instructions+=8;goto B58925a;
case 0x58925e:c.instructions+=7;goto B58925e;
case 0x589260:c.instructions+=6;goto B589260;
case 0x589262:c.instructions+=5;goto B589262;
case 0x589266:c.instructions+=4;goto B589266;
case 0x58926c:c.instructions+=3;goto B58926c;
case 0x58926e:c.instructions+=2;goto B58926e;
case 0x589271:c.instructions+=1;goto B589271;
case 0x589273:goto L589273;
case 0x589275:c.instructions+=4;goto B589275;
case 0x589279:c.instructions+=3;goto B589279;
case 0x58927f:c.instructions+=2;goto B58927f;
case 0x589285:c.instructions+=1;goto B589285;
case 0x58928a:goto L58928a;
case 0x589290:c.instructions+=6;goto B589290;
case 0x589291:c.instructions+=5;goto B589291;
case 0x589296:c.instructions+=4;goto B589296;
case 0x58929d:c.instructions+=3;goto B58929d;
case 0x58929e:c.instructions+=2;goto B58929e;
case 0x5892a1:c.instructions+=1;goto B5892a1;
case 0x5892a2:goto L5892a2;
case 0x5892a8:c.instructions+=3;goto B5892a8;
case 0x5892aa:c.instructions+=2;goto B5892aa;
case 0x5892ad:c.instructions+=1;goto B5892ad;
case 0x5892af:goto L5892af;
case 0x5892b4:c.instructions+=1;goto B5892b4;
case 0x5892b6:goto L5892b6;
case 0x5892b9:goto L5892b9;
case 0x5892bf:c.instructions+=1;goto B5892bf;
case 0x5892c1:goto L5892c1;
case 0x5892c5:c.instructions+=4;goto B5892c5;
case 0x5892cb:c.instructions+=3;goto B5892cb;
case 0x5892cd:c.instructions+=2;goto B5892cd;
case 0x5892d0:c.instructions+=1;goto B5892d0;
case 0x5892d2:goto L5892d2;
case 0x5892d7:c.instructions+=4;goto B5892d7;
case 0x5892d8:c.instructions+=3;goto B5892d8;
case 0x5892db:c.instructions+=2;goto B5892db;
case 0x5892e0:c.instructions+=1;goto B5892e0;
case 0x5892e2:goto L5892e2;
case 0x5892e6:c.instructions+=2;goto B5892e6;
case 0x5892e7:c.instructions+=1;goto B5892e7;
case 0x5892ec:goto L5892ec;
case 0x5892f1:c.instructions+=3;goto B5892f1;
case 0x5892f4:c.instructions+=2;goto B5892f4;
case 0x5892f5:c.instructions+=1;goto B5892f5;
case 0x5892fa:goto L5892fa;
case 0x589300:goto L589300;
case 0x589306:goto L589306;
case 0x589307:c.instructions+=3;goto B589307;
case 0x589308:c.instructions+=2;goto B589308;
case 0x58930b:c.instructions+=1;goto B58930b;
case 0x589310:goto L589310;
case 0x589311:c.instructions+=21;goto B589311;
case 0x589313:c.instructions+=20;goto B589313;
case 0x589316:c.instructions+=19;goto B589316;
case 0x589318:c.instructions+=18;goto B589318;
case 0x58931d:c.instructions+=17;goto B58931d;
case 0x589323:c.instructions+=16;goto B589323;
case 0x589324:c.instructions+=15;goto B589324;
case 0x58932b:c.instructions+=14;goto B58932b;
case 0x589331:c.instructions+=13;goto B589331;
case 0x589332:c.instructions+=12;goto B589332;
case 0x589333:c.instructions+=11;goto B589333;
case 0x589339:c.instructions+=10;goto B589339;
case 0x58933a:c.instructions+=9;goto B58933a;
case 0x58933c:c.instructions+=8;goto B58933c;
case 0x58933e:c.instructions+=7;goto B58933e;
case 0x58933f:c.instructions+=6;goto B58933f;
case 0x589343:c.instructions+=5;goto B589343;
case 0x589347:c.instructions+=4;goto B589347;
case 0x58934e:c.instructions+=3;goto B58934e;
case 0x589355:c.instructions+=2;goto B589355;
case 0x58935d:c.instructions+=1;goto B58935d;
case 0x589362:goto L589362;
case 0x589366:c.instructions+=4;goto B589366;
case 0x589367:c.instructions+=3;goto B589367;
case 0x589368:c.instructions+=2;goto B589368;
case 0x58936d:c.instructions+=1;goto B58936d;
case 0x589372:goto L589372;
case 0x589376:c.instructions+=10;goto B589376;
case 0x58937a:c.instructions+=9;goto B58937a;
case 0x58937e:c.instructions+=8;goto B58937e;
case 0x589382:c.instructions+=7;goto B589382;
case 0x589386:c.instructions+=6;goto B589386;
case 0x589387:c.instructions+=5;goto B589387;
case 0x58938b:c.instructions+=4;goto B58938b;
case 0x58938c:c.instructions+=3;goto B58938c;
case 0x58938e:c.instructions+=2;goto B58938e;
case 0x589395:c.instructions+=1;goto B589395;
case 0x58939a:goto L58939a;
case 0x58939e:c.instructions+=3;goto B58939e;
case 0x5893a1:c.instructions+=2;goto B5893a1;
case 0x5893a5:c.instructions+=1;goto B5893a5;
case 0x5893aa:goto L5893aa;
case 0x5893ac:c.instructions+=2;goto B5893ac;
case 0x5893ae:c.instructions+=1;goto B5893ae;
case 0x5893b0:goto L5893b0;
case 0x5893b2:c.instructions+=4;goto B5893b2;
case 0x5893b5:c.instructions+=3;goto B5893b5;
case 0x5893b6:c.instructions+=2;goto B5893b6;
case 0x5893b8:c.instructions+=1;goto B5893b8;
case 0x5893bd:goto L5893bd;
case 0x5893c1:c.instructions+=7;goto B5893c1;
case 0x5893c3:c.instructions+=6;goto B5893c3;
case 0x5893c6:c.instructions+=5;goto B5893c6;
case 0x5893c9:c.instructions+=4;goto B5893c9;
case 0x5893cb:c.instructions+=3;goto B5893cb;
case 0x5893cd:c.instructions+=2;goto B5893cd;
case 0x5893d0:c.instructions+=1;goto B5893d0;
case 0x5893d2:goto L5893d2;
case 0x5893d3:c.instructions+=1;goto B5893d3;
case 0x5893d8:goto L5893d8;
case 0x5893db:goto L5893db;
case 0x5893df:c.instructions+=2;goto B5893df;
case 0x5893e1:c.instructions+=1;goto B5893e1;
case 0x5893e3:goto L5893e3;
case 0x5893e7:c.instructions+=3;goto B5893e7;
case 0x5893e9:c.instructions+=2;goto B5893e9;
case 0x5893f4:c.instructions+=1;goto B5893f4;
case 0x5893f6:goto L5893f6;
case 0x5893f8:c.instructions+=6;goto B5893f8;
case 0x5893fa:c.instructions+=5;goto B5893fa;
case 0x5893fd:c.instructions+=4;goto B5893fd;
case 0x5893ff:c.instructions+=3;goto B5893ff;
case 0x589400:c.instructions+=2;goto B589400;
case 0x589403:c.instructions+=1;goto B589403;
case 0x589408:goto L589408;
case 0x58940c:c.instructions+=4;goto B58940c;
case 0x589410:c.instructions+=3;goto B589410;
case 0x589413:c.instructions+=2;goto B589413;
case 0x589415:c.instructions+=1;goto B589415;
case 0x589417:goto L589417;
case 0x58941e:c.instructions+=7;goto B58941e;
case 0x58941f:c.instructions+=6;goto B58941f;
case 0x589420:c.instructions+=5;goto B589420;
case 0x589427:c.instructions+=4;goto B589427;
case 0x589428:c.instructions+=3;goto B589428;
case 0x58942a:c.instructions+=2;goto B58942a;
case 0x58942b:c.instructions+=1;goto B58942b;
case 0x589430:goto L589430;
case 0x589431:c.instructions+=21;goto B589431;
case 0x589433:c.instructions+=20;goto B589433;
case 0x589436:c.instructions+=19;goto B589436;
case 0x589438:c.instructions+=18;goto B589438;
case 0x58943d:c.instructions+=17;goto B58943d;
case 0x589443:c.instructions+=16;goto B589443;
case 0x589444:c.instructions+=15;goto B589444;
case 0x58944b:c.instructions+=14;goto B58944b;
case 0x58944e:c.instructions+=13;goto B58944e;
case 0x58944f:c.instructions+=12;goto B58944f;
case 0x589453:c.instructions+=11;goto B589453;
case 0x589457:c.instructions+=10;goto B589457;
case 0x589458:c.instructions+=9;goto B589458;
case 0x58945c:c.instructions+=8;goto B58945c;
case 0x589460:c.instructions+=7;goto B589460;
case 0x589463:c.instructions+=6;goto B589463;
case 0x589467:c.instructions+=5;goto B589467;
case 0x589468:c.instructions+=4;goto B589468;
case 0x589469:c.instructions+=3;goto B589469;
case 0x58946b:c.instructions+=2;goto B58946b;
case 0x589473:c.instructions+=1;goto B589473;
case 0x589478:goto L589478;
case 0x58947c:c.instructions+=3;goto B58947c;
case 0x58947f:c.instructions+=2;goto B58947f;
case 0x589483:c.instructions+=1;goto B589483;
case 0x589488:goto L589488;
case 0x58948a:c.instructions+=2;goto B58948a;
case 0x58948c:c.instructions+=1;goto B58948c;
case 0x58948e:goto L58948e;
case 0x589490:goto L589490;
case 0x589492:c.instructions+=4;goto B589492;
case 0x589495:c.instructions+=3;goto B589495;
case 0x589496:c.instructions+=2;goto B589496;
case 0x589498:c.instructions+=1;goto B589498;
case 0x58949d:goto L58949d;
case 0x5894a1:c.instructions+=7;goto B5894a1;
case 0x5894a3:c.instructions+=6;goto B5894a3;
case 0x5894a6:c.instructions+=5;goto B5894a6;
case 0x5894a9:c.instructions+=4;goto B5894a9;
case 0x5894ab:c.instructions+=3;goto B5894ab;
case 0x5894ad:c.instructions+=2;goto B5894ad;
case 0x5894b0:c.instructions+=1;goto B5894b0;
case 0x5894b2:goto L5894b2;
case 0x5894b3:c.instructions+=1;goto B5894b3;
case 0x5894b8:goto L5894b8;
case 0x5894bb:goto L5894bb;
case 0x5894bf:c.instructions+=2;goto B5894bf;
case 0x5894c1:c.instructions+=1;goto B5894c1;
case 0x5894c3:goto L5894c3;
case 0x5894c7:c.instructions+=3;goto B5894c7;
case 0x5894c9:c.instructions+=2;goto B5894c9;
case 0x5894d1:c.instructions+=1;goto B5894d1;
case 0x5894d3:goto L5894d3;
case 0x5894d5:c.instructions+=6;goto B5894d5;
case 0x5894d7:c.instructions+=5;goto B5894d7;
case 0x5894da:c.instructions+=4;goto B5894da;
case 0x5894dc:c.instructions+=3;goto B5894dc;
case 0x5894dd:c.instructions+=2;goto B5894dd;
case 0x5894e0:c.instructions+=1;goto B5894e0;
case 0x5894e5:goto L5894e5;
case 0x5894e9:c.instructions+=4;goto B5894e9;
case 0x5894ed:c.instructions+=3;goto B5894ed;
case 0x5894f0:c.instructions+=2;goto B5894f0;
case 0x5894f2:c.instructions+=1;goto B5894f2;
case 0x5894f4:goto L5894f4;
case 0x5894f8:c.instructions+=6;goto B5894f8;
case 0x5894f9:c.instructions+=5;goto B5894f9;
case 0x589500:c.instructions+=4;goto B589500;
case 0x589501:c.instructions+=3;goto B589501;
case 0x589503:c.instructions+=2;goto B589503;
case 0x589504:c.instructions+=1;goto B589504;
case 0x589510:goto L589510;
case 0x589511:c.instructions+=6;goto B589511;
case 0x589515:c.instructions+=5;goto B589515;
case 0x589517:c.instructions+=4;goto B589517;
case 0x58951b:c.instructions+=3;goto B58951b;
case 0x58951c:c.instructions+=2;goto B58951c;
case 0x589524:c.instructions+=1;goto B589524;
case 0x589529:goto L589529;
case 0x58952f:c.instructions+=5;goto B58952f;
case 0x589531:c.instructions+=4;goto B589531;
case 0x589532:c.instructions+=3;goto B589532;
case 0x589537:c.instructions+=2;goto B589537;
case 0x58953e:c.instructions+=1;goto B58953e;
case 0x589543:goto L589543;
case 0x589546:c.instructions+=1;goto B589546;
case 0x589550:goto L589550;
case 0x589551:c.instructions+=5;goto B589551;
case 0x589557:c.instructions+=4;goto B589557;
case 0x58955d:c.instructions+=3;goto B58955d;
case 0x58955f:c.instructions+=2;goto B58955f;
case 0x589562:c.instructions+=1;goto B589562;
case 0x589564:goto L589564;
case 0x58956a:c.instructions+=6;goto B58956a;
case 0x58956f:c.instructions+=5;goto B58956f;
case 0x589571:c.instructions+=4;goto B589571;
case 0x589575:c.instructions+=3;goto B589575;
case 0x589579:c.instructions+=2;goto B589579;
case 0x58957f:c.instructions+=1;goto B58957f;
case 0x589584:goto L589584;
case 0x589588:c.instructions+=7;goto B589588;
case 0x58958c:c.instructions+=6;goto B58958c;
case 0x589592:c.instructions+=5;goto B589592;
case 0x589598:c.instructions+=4;goto B589598;
case 0x58959a:c.instructions+=3;goto B58959a;
case 0x58959c:c.instructions+=2;goto B58959c;
case 0x58959f:c.instructions+=1;goto B58959f;
case 0x5895a1:goto L5895a1;
case 0x5895a3:c.instructions+=1;goto B5895a3;
case 0x5895a8:goto L5895a8;
case 0x5895ae:c.instructions+=2;goto B5895ae;
case 0x5895b1:c.instructions+=1;goto B5895b1;
case 0x5895b7:goto L5895b7;
case 0x5895b8:c.instructions+=1;goto B5895b8;
case 0x5895c0:goto L5895c0;
case 0x5895c3:c.instructions+=6;goto B5895c3;
case 0x5895c4:c.instructions+=5;goto B5895c4;
case 0x5895c5:c.instructions+=4;goto B5895c5;
case 0x5895c7:c.instructions+=3;goto B5895c7;
case 0x5895c9:c.instructions+=2;goto B5895c9;
case 0x5895ce:c.instructions+=1;goto B5895ce;
case 0x5895d0:goto L5895d0;
case 0x5895d4:c.instructions+=2;goto B5895d4;
case 0x5895d7:c.instructions+=1;goto B5895d7;
case 0x5895d9:goto L5895d9;
case 0x5895dc:c.instructions+=2;goto B5895dc;
case 0x5895e1:c.instructions+=1;goto B5895e1;
case 0x5895e3:goto L5895e3;
case 0x5895e5:goto L5895e5;
case 0x5895e7:goto L5895e7;
case 0x5895ee:c.instructions+=1;goto B5895ee;
case 0x5895f4:goto L5895f4;
case 0x5895f6:c.instructions+=1;goto B5895f6;
case 0x5895fc:goto L5895fc;
case 0x5895fd:c.instructions+=8;goto B5895fd;
case 0x5895fe:c.instructions+=7;goto B5895fe;
case 0x589602:c.instructions+=6;goto B589602;
case 0x589604:c.instructions+=5;goto B589604;
case 0x589608:c.instructions+=4;goto B589608;
case 0x589609:c.instructions+=3;goto B589609;
case 0x58960b:c.instructions+=2;goto B58960b;
case 0x58960f:c.instructions+=1;goto B58960f;
case 0x589614:goto L589614;
case 0x589619:c.instructions+=7;goto B589619;
case 0x58961d:c.instructions+=6;goto B58961d;
case 0x58961e:c.instructions+=5;goto B58961e;
case 0x589622:c.instructions+=4;goto B589622;
case 0x589623:c.instructions+=3;goto B589623;
case 0x589625:c.instructions+=2;goto B589625;
case 0x589629:c.instructions+=1;goto B589629;
case 0x58962e:goto L58962e;
case 0x589630:c.instructions+=5;goto B589630;
case 0x589634:c.instructions+=4;goto B589634;
case 0x589635:c.instructions+=3;goto B589635;
case 0x589637:c.instructions+=2;goto B589637;
case 0x58963b:c.instructions+=1;goto B58963b;
case 0x589640:goto L589640;
case 0x589644:c.instructions+=7;goto B589644;
case 0x589646:c.instructions+=6;goto B589646;
case 0x58964a:c.instructions+=5;goto B58964a;
case 0x58964b:c.instructions+=4;goto B58964b;
case 0x58964d:c.instructions+=3;goto B58964d;
case 0x589651:c.instructions+=2;goto B589651;
case 0x589655:c.instructions+=1;goto B589655;
case 0x58965a:goto L58965a;
case 0x58965c:c.instructions+=4;goto B58965c;
case 0x589661:c.instructions+=3;goto B589661;
case 0x589662:c.instructions+=2;goto B589662;
case 0x589667:c.instructions+=1;goto B589667;
case 0x58966c:goto L58966c;
case 0x58966e:c.instructions+=2;goto B58966e;
case 0x589670:c.instructions+=1;goto B589670;
case 0x589672:goto L589672;
case 0x589676:c.instructions+=4;goto B589676;
case 0x58967c:c.instructions+=3;goto B58967c;
case 0x58967e:c.instructions+=2;goto B58967e;
case 0x589681:c.instructions+=1;goto B589681;
case 0x589683:goto L589683;
case 0x589687:c.instructions+=7;goto B589687;
case 0x589688:c.instructions+=6;goto B589688;
case 0x589689:c.instructions+=5;goto B589689;
case 0x58968a:c.instructions+=4;goto B58968a;
case 0x589690:c.instructions+=3;goto B589690;
case 0x589691:c.instructions+=2;goto B589691;
case 0x589696:c.instructions+=1;goto B589696;
case 0x58969b:goto L58969b;
case 0x5896a0:c.instructions+=1;goto B5896a0;
case 0x5896a5:goto L5896a5;
case 0x5896a8:c.instructions+=2;goto B5896a8;
case 0x5896ab:c.instructions+=1;goto B5896ab;
case 0x5896ad:goto L5896ad;
case 0x5896af:c.instructions+=1;goto B5896af;
case 0x5896b1:goto L5896b1;
case 0x5896b5:c.instructions+=1;goto B5896b5;
case 0x5896b7:goto L5896b7;
case 0x5896ba:c.instructions+=1;goto B5896ba;
case 0x5896bc:goto L5896bc;
case 0x5896be:c.instructions+=4;goto B5896be;
case 0x5896bf:c.instructions+=3;goto B5896bf;
case 0x5896c1:c.instructions+=2;goto B5896c1;
case 0x5896c2:c.instructions+=1;goto B5896c2;
case 0x5896c7:goto L5896c7;
case 0x5896ca:goto L5896ca;
case 0x5896cd:c.instructions+=2;goto B5896cd;
case 0x5896d3:c.instructions+=1;goto B5896d3;
case 0x5896d5:goto L5896d5;
case 0x5896d9:c.instructions+=5;goto B5896d9;
case 0x5896dd:c.instructions+=4;goto B5896dd;
case 0x5896de:c.instructions+=3;goto B5896de;
case 0x5896df:c.instructions+=2;goto B5896df;
case 0x5896e0:c.instructions+=1;goto B5896e0;
case 0x5896e5:goto L5896e5;
case 0x5896e8:goto L5896e8;
case 0x5896e9:c.instructions+=1;goto B5896e9;
case 0x5896ea:goto L5896ea;
case 0x5896eb:c.instructions+=3;goto B5896eb;
case 0x5896ec:c.instructions+=2;goto B5896ec;
case 0x5896ef:c.instructions+=1;goto B5896ef;
case 0x5896f0:goto L5896f0;
case 0x5896f1:c.instructions+=4;goto B5896f1;
case 0x5896f5:c.instructions+=3;goto B5896f5;
case 0x5896f6:c.instructions+=2;goto B5896f6;
case 0x5896fb:c.instructions+=1;goto B5896fb;
case 0x589700:goto L589700;
case 0x589704:c.instructions+=5;goto B589704;
case 0x589706:c.instructions+=4;goto B589706;
case 0x589707:c.instructions+=3;goto B589707;
case 0x589709:c.instructions+=2;goto B589709;
case 0x58970a:c.instructions+=1;goto B58970a;
case 0x58970f:goto L58970f;
case 0x589712:c.instructions+=2;goto B589712;
case 0x589713:c.instructions+=1;goto B589713;
case 0x589720:goto L589720;
case 0x589721:c.instructions+=4;goto B589721;
case 0x589725:c.instructions+=3;goto B589725;
case 0x589726:c.instructions+=2;goto B589726;
case 0x58972b:c.instructions+=1;goto B58972b;
case 0x589730:goto L589730;
case 0x589734:c.instructions+=5;goto B589734;
case 0x589736:c.instructions+=4;goto B589736;
case 0x589737:c.instructions+=3;goto B589737;
case 0x589739:c.instructions+=2;goto B589739;
case 0x58973a:c.instructions+=1;goto B58973a;
case 0x58973f:goto L58973f;
case 0x589742:c.instructions+=2;goto B589742;
case 0x589743:c.instructions+=1;goto B589743;
case 0x589750:goto L589750;
case 0x589756:c.instructions+=9;goto B589756;
case 0x589758:c.instructions+=8;goto B589758;
case 0x58975a:c.instructions+=7;goto B58975a;
case 0x58975c:c.instructions+=6;goto B58975c;
case 0x589760:c.instructions+=5;goto B589760;
case 0x589764:c.instructions+=4;goto B589764;
case 0x58976b:c.instructions+=3;goto B58976b;
case 0x589772:c.instructions+=2;goto B589772;
case 0x58977a:c.instructions+=1;goto B58977a;
case 0x58977f:goto L58977f;
case 0x589787:c.instructions+=4;goto B589787;
case 0x589789:c.instructions+=3;goto B589789;
case 0x58978a:c.instructions+=2;goto B58978a;
case 0x58978e:c.instructions+=1;goto B58978e;
case 0x589793:goto L589793;
case 0x58979a:c.instructions+=4;goto B58979a;
case 0x58979c:c.instructions+=3;goto B58979c;
case 0x58979d:c.instructions+=2;goto B58979d;
case 0x5897a1:c.instructions+=1;goto B5897a1;
case 0x5897a6:goto L5897a6;
case 0x5897a8:c.instructions+=4;goto B5897a8;
case 0x5897ac:c.instructions+=3;goto B5897ac;
case 0x5897ad:c.instructions+=2;goto B5897ad;
case 0x5897af:c.instructions+=1;goto B5897af;
case 0x5897b4:goto L5897b4;
case 0x5897ba:c.instructions+=1;goto B5897ba;
case 0x5897c0:goto L5897c0;
case 0x5897c6:c.instructions+=9;goto B5897c6;
case 0x5897c8:c.instructions+=8;goto B5897c8;
case 0x5897ca:c.instructions+=7;goto B5897ca;
case 0x5897cc:c.instructions+=6;goto B5897cc;
case 0x5897d0:c.instructions+=5;goto B5897d0;
case 0x5897d4:c.instructions+=4;goto B5897d4;
case 0x5897db:c.instructions+=3;goto B5897db;
case 0x5897e2:c.instructions+=2;goto B5897e2;
case 0x5897ea:c.instructions+=1;goto B5897ea;
case 0x5897ef:goto L5897ef;
case 0x5897f7:c.instructions+=4;goto B5897f7;
case 0x5897f9:c.instructions+=3;goto B5897f9;
case 0x5897fa:c.instructions+=2;goto B5897fa;
case 0x5897fe:c.instructions+=1;goto B5897fe;
case 0x589803:goto L589803;
case 0x58980a:c.instructions+=4;goto B58980a;
case 0x58980c:c.instructions+=3;goto B58980c;
case 0x58980d:c.instructions+=2;goto B58980d;
case 0x589811:c.instructions+=1;goto B589811;
case 0x589816:goto L589816;
case 0x589818:c.instructions+=4;goto B589818;
case 0x58981c:c.instructions+=3;goto B58981c;
case 0x58981d:c.instructions+=2;goto B58981d;
case 0x58981f:c.instructions+=1;goto B58981f;
case 0x589824:goto L589824;
case 0x58982a:c.instructions+=1;goto B58982a;
case 0x589830:goto L589830;
case 0x589836:c.instructions+=9;goto B589836;
case 0x589838:c.instructions+=8;goto B589838;
case 0x58983a:c.instructions+=7;goto B58983a;
case 0x58983c:c.instructions+=6;goto B58983c;
case 0x589840:c.instructions+=5;goto B589840;
case 0x589844:c.instructions+=4;goto B589844;
case 0x58984b:c.instructions+=3;goto B58984b;
case 0x589852:c.instructions+=2;goto B589852;
case 0x58985a:c.instructions+=1;goto B58985a;
case 0x58985f:goto L58985f;
case 0x589866:c.instructions+=4;goto B589866;
case 0x589868:c.instructions+=3;goto B589868;
case 0x589869:c.instructions+=2;goto B589869;
case 0x58986d:c.instructions+=1;goto B58986d;
case 0x589872:goto L589872;
case 0x589874:c.instructions+=4;goto B589874;
case 0x589878:c.instructions+=3;goto B589878;
case 0x589879:c.instructions+=2;goto B589879;
case 0x58987b:c.instructions+=1;goto B58987b;
case 0x589880:goto L589880;
case 0x589886:c.instructions+=1;goto B589886;
case 0x589890:goto L589890;
case 0x589896:c.instructions+=9;goto B589896;
case 0x589898:c.instructions+=8;goto B589898;
case 0x58989a:c.instructions+=7;goto B58989a;
case 0x58989c:c.instructions+=6;goto B58989c;
case 0x5898a0:c.instructions+=5;goto B5898a0;
case 0x5898a4:c.instructions+=4;goto B5898a4;
case 0x5898ab:c.instructions+=3;goto B5898ab;
case 0x5898b2:c.instructions+=2;goto B5898b2;
case 0x5898ba:c.instructions+=1;goto B5898ba;
case 0x5898bf:goto L5898bf;
case 0x5898c6:c.instructions+=4;goto B5898c6;
case 0x5898c8:c.instructions+=3;goto B5898c8;
case 0x5898c9:c.instructions+=2;goto B5898c9;
case 0x5898cd:c.instructions+=1;goto B5898cd;
case 0x5898d2:goto L5898d2;
case 0x5898da:c.instructions+=4;goto B5898da;
case 0x5898dc:c.instructions+=3;goto B5898dc;
case 0x5898dd:c.instructions+=2;goto B5898dd;
case 0x5898e1:c.instructions+=1;goto B5898e1;
case 0x5898e6:goto L5898e6;
case 0x5898ed:c.instructions+=6;goto B5898ed;
case 0x5898ef:c.instructions+=5;goto B5898ef;
case 0x5898f3:c.instructions+=4;goto B5898f3;
case 0x5898f4:c.instructions+=3;goto B5898f4;
case 0x5898f6:c.instructions+=2;goto B5898f6;
case 0x5898f7:c.instructions+=1;goto B5898f7;
case 0x5898fc:goto L5898fc;
case 0x589902:c.instructions+=1;goto B589902;
case 0x589910:goto L589910;
case 0x589916:c.instructions+=10;goto B589916;
case 0x589918:c.instructions+=9;goto B589918;
case 0x58991a:c.instructions+=8;goto B58991a;
case 0x58991c:c.instructions+=7;goto B58991c;
case 0x589920:c.instructions+=6;goto B589920;
case 0x58992a:c.instructions+=5;goto B58992a;
case 0x58992e:c.instructions+=4;goto B58992e;
case 0x589935:c.instructions+=3;goto B589935;
case 0x58993c:c.instructions+=2;goto B58993c;
case 0x589944:c.instructions+=1;goto B589944;
case 0x589949:goto L589949;
case 0x58994b:c.instructions+=3;goto B58994b;
case 0x58994d:c.instructions+=2;goto B58994d;
case 0x589951:c.instructions+=1;goto B589951;
case 0x589956:goto L589956;
case 0x589958:c.instructions+=4;goto B589958;
case 0x58995c:c.instructions+=3;goto B58995c;
case 0x58995d:c.instructions+=2;goto B58995d;
case 0x58995f:c.instructions+=1;goto B58995f;
case 0x589964:goto L589964;
case 0x58996a:c.instructions+=1;goto B58996a;
case 0x589970:goto L589970;
case 0x589976:c.instructions+=10;goto B589976;
case 0x589978:c.instructions+=9;goto B589978;
case 0x58997a:c.instructions+=8;goto B58997a;
case 0x58997c:c.instructions+=7;goto B58997c;
case 0x589980:c.instructions+=6;goto B589980;
case 0x58998a:c.instructions+=5;goto B58998a;
case 0x58998e:c.instructions+=4;goto B58998e;
case 0x589995:c.instructions+=3;goto B589995;
case 0x58999c:c.instructions+=2;goto B58999c;
case 0x5899a4:c.instructions+=1;goto B5899a4;
case 0x5899a9:goto L5899a9;
case 0x5899ab:c.instructions+=3;goto B5899ab;
case 0x5899ad:c.instructions+=2;goto B5899ad;
case 0x5899b1:c.instructions+=1;goto B5899b1;
case 0x5899b6:goto L5899b6;
case 0x5899b8:c.instructions+=4;goto B5899b8;
case 0x5899bc:c.instructions+=3;goto B5899bc;
case 0x5899bd:c.instructions+=2;goto B5899bd;
case 0x5899bf:c.instructions+=1;goto B5899bf;
case 0x5899c4:goto L5899c4;
case 0x5899ca:c.instructions+=1;goto B5899ca;
case 0x5899d0:goto L5899d0;
case 0x5899d6:c.instructions+=10;goto B5899d6;
case 0x5899d8:c.instructions+=9;goto B5899d8;
case 0x5899da:c.instructions+=8;goto B5899da;
case 0x5899dc:c.instructions+=7;goto B5899dc;
case 0x5899e0:c.instructions+=6;goto B5899e0;
case 0x5899ea:c.instructions+=5;goto B5899ea;
case 0x5899ee:c.instructions+=4;goto B5899ee;
case 0x5899f5:c.instructions+=3;goto B5899f5;
case 0x5899fc:c.instructions+=2;goto B5899fc;
case 0x589a04:c.instructions+=1;goto B589a04;
case 0x589a09:goto L589a09;
case 0x589a0b:c.instructions+=3;goto B589a0b;
case 0x589a0d:c.instructions+=2;goto B589a0d;
case 0x589a11:c.instructions+=1;goto B589a11;
case 0x589a16:goto L589a16;
case 0x589a18:c.instructions+=4;goto B589a18;
case 0x589a1c:c.instructions+=3;goto B589a1c;
case 0x589a1d:c.instructions+=2;goto B589a1d;
case 0x589a1f:c.instructions+=1;goto B589a1f;
case 0x589a24:goto L589a24;
case 0x589a2a:c.instructions+=1;goto B589a2a;
case 0x589a30:goto L589a30;
case 0x589a32:c.instructions+=19;goto B589a32;
case 0x589a37:c.instructions+=18;goto B589a37;
case 0x589a3d:c.instructions+=17;goto B589a3d;
case 0x589a3e:c.instructions+=16;goto B589a3e;
case 0x589a45:c.instructions+=15;goto B589a45;
case 0x589a48:c.instructions+=14;goto B589a48;
case 0x589a49:c.instructions+=13;goto B589a49;
case 0x589a4a:c.instructions+=12;goto B589a4a;
case 0x589a4e:c.instructions+=11;goto B589a4e;
case 0x589a52:c.instructions+=10;goto B589a52;
case 0x589a53:c.instructions+=9;goto B589a53;
case 0x589a57:c.instructions+=8;goto B589a57;
case 0x589a5b:c.instructions+=7;goto B589a5b;
case 0x589a5f:c.instructions+=6;goto B589a5f;
case 0x589a63:c.instructions+=5;goto B589a63;
case 0x589a64:c.instructions+=4;goto B589a64;
case 0x589a65:c.instructions+=3;goto B589a65;
case 0x589a67:c.instructions+=2;goto B589a67;
case 0x589a6f:c.instructions+=1;goto B589a6f;
case 0x589a74:goto L589a74;
case 0x589a78:c.instructions+=4;goto B589a78;
case 0x589a7b:c.instructions+=3;goto B589a7b;
case 0x589a7f:c.instructions+=2;goto B589a7f;
case 0x589a81:c.instructions+=1;goto B589a81;
case 0x589a86:goto L589a86;
case 0x589a88:c.instructions+=2;goto B589a88;
case 0x589a8a:c.instructions+=1;goto B589a8a;
case 0x589a8c:goto L589a8c;
case 0x589a8d:c.instructions+=1;goto B589a8d;
case 0x589a90:goto L589a90;
case 0x589a95:goto L589a95;
case 0x589a98:c.instructions+=2;goto B589a98;
case 0x589a9b:c.instructions+=1;goto B589a9b;
case 0x589a9d:goto L589a9d;
case 0x589a9f:c.instructions+=1;goto B589a9f;
case 0x589aa1:goto L589aa1;
case 0x589aa3:c.instructions+=5;goto B589aa3;
case 0x589aa6:c.instructions+=4;goto B589aa6;
case 0x589aa7:c.instructions+=3;goto B589aa7;
case 0x589aa9:c.instructions+=2;goto B589aa9;
case 0x589aaa:c.instructions+=1;goto B589aaa;
case 0x589aaf:goto L589aaf;
case 0x589ab3:c.instructions+=1;goto B589ab3;
case 0x589ab6:goto L589ab6;
case 0x589ab9:c.instructions+=2;goto B589ab9;
case 0x589abf:c.instructions+=1;goto B589abf;
case 0x589ac1:goto L589ac1;
case 0x589ac3:c.instructions+=5;goto B589ac3;
case 0x589ac5:c.instructions+=4;goto B589ac5;
case 0x589ac8:c.instructions+=3;goto B589ac8;
case 0x589aca:c.instructions+=2;goto B589aca;
case 0x589acd:c.instructions+=1;goto B589acd;
case 0x589acf:goto L589acf;
case 0x589ad0:c.instructions+=1;goto B589ad0;
case 0x589ad5:goto L589ad5;
case 0x589ad8:goto L589ad8;
case 0x589adc:c.instructions+=3;goto B589adc;
case 0x589ade:c.instructions+=2;goto B589ade;
case 0x589ae0:c.instructions+=1;goto B589ae0;
case 0x589ae2:goto L589ae2;
case 0x589ae3:goto L589ae3;
case 0x589ae7:c.instructions+=3;goto B589ae7;
case 0x589ae9:c.instructions+=2;goto B589ae9;
case 0x589af1:c.instructions+=1;goto B589af1;
case 0x589af3:goto L589af3;
case 0x589af5:c.instructions+=6;goto B589af5;
case 0x589af7:c.instructions+=5;goto B589af7;
case 0x589afa:c.instructions+=4;goto B589afa;
case 0x589afc:c.instructions+=3;goto B589afc;
case 0x589afd:c.instructions+=2;goto B589afd;
case 0x589b00:c.instructions+=1;goto B589b00;
case 0x589b05:goto L589b05;
case 0x589b09:c.instructions+=4;goto B589b09;
case 0x589b0d:c.instructions+=3;goto B589b0d;
case 0x589b10:c.instructions+=2;goto B589b10;
case 0x589b12:c.instructions+=1;goto B589b12;
case 0x589b14:goto L589b14;
case 0x589b18:c.instructions+=6;goto B589b18;
case 0x589b19:c.instructions+=5;goto B589b19;
case 0x589b1a:c.instructions+=4;goto B589b1a;
case 0x589b1b:c.instructions+=3;goto B589b1b;
case 0x589b22:c.instructions+=2;goto B589b22;
case 0x589b25:c.instructions+=1;goto B589b25;
case 0x589b30:goto L589b30;
case 0x589b36:c.instructions+=11;goto B589b36;
case 0x589b37:c.instructions+=10;goto B589b37;
case 0x589b38:c.instructions+=9;goto B589b38;
case 0x589b39:c.instructions+=8;goto B589b39;
case 0x589b3b:c.instructions+=7;goto B589b3b;
case 0x589b3d:c.instructions+=6;goto B589b3d;
case 0x589b41:c.instructions+=5;goto B589b41;
case 0x589b46:c.instructions+=4;goto B589b46;
case 0x589b51:c.instructions+=3;goto B589b51;
case 0x589b5c:c.instructions+=2;goto B589b5c;
case 0x589b64:c.instructions+=1;goto B589b64;
case 0x589b69:goto L589b69;
case 0x589b70:c.instructions+=4;goto B589b70;
case 0x589b76:c.instructions+=3;goto B589b76;
case 0x589b7c:c.instructions+=2;goto B589b7c;
case 0x589b80:c.instructions+=1;goto B589b80;
case 0x589b85:goto L589b85;
case 0x589b89:c.instructions+=5;goto B589b89;
case 0x589b8d:c.instructions+=4;goto B589b8d;
case 0x589b91:c.instructions+=3;goto B589b91;
case 0x589b93:c.instructions+=2;goto B589b93;
case 0x589b96:c.instructions+=1;goto B589b96;
case 0x589b98:goto L589b98;
case 0x589b9e:goto L589b9e;
case 0x589ba0:c.instructions+=1;goto B589ba0;
case 0x589ba5:goto L589ba5;
case 0x589ba7:c.instructions+=2;goto B589ba7;
case 0x589ba9:c.instructions+=1;goto B589ba9;
case 0x589bab:goto L589bab;
case 0x589bb0:goto L589bb0;
case 0x589bb4:c.instructions+=4;goto B589bb4;
case 0x589bb6:c.instructions+=3;goto B589bb6;
case 0x589bb7:c.instructions+=2;goto B589bb7;
case 0x589bbb:c.instructions+=1;goto B589bbb;
case 0x589bc0:goto L589bc0;
case 0x589bc1:c.instructions+=2;goto B589bc1;
case 0x589bc3:c.instructions+=1;goto B589bc3;
case 0x589bc5:goto L589bc5;
case 0x589bc7:c.instructions+=4;goto B589bc7;
case 0x589bcb:c.instructions+=3;goto B589bcb;
case 0x589bcc:c.instructions+=2;goto B589bcc;
case 0x589bce:c.instructions+=1;goto B589bce;
case 0x589bd3:goto L589bd3;
case 0x589bd6:c.instructions+=5;goto B589bd6;
case 0x589bd7:c.instructions+=4;goto B589bd7;
case 0x589bd8:c.instructions+=3;goto B589bd8;
case 0x589bd9:c.instructions+=2;goto B589bd9;
case 0x589bdf:c.instructions+=1;goto B589bdf;
case 0x589be0:goto L589be0;
case 0x589be6:c.instructions+=11;goto B589be6;
case 0x589be7:c.instructions+=10;goto B589be7;
case 0x589be8:c.instructions+=9;goto B589be8;
case 0x589be9:c.instructions+=8;goto B589be9;
case 0x589beb:c.instructions+=7;goto B589beb;
case 0x589bed:c.instructions+=6;goto B589bed;
case 0x589bf1:c.instructions+=5;goto B589bf1;
case 0x589bf6:c.instructions+=4;goto B589bf6;
case 0x589c01:c.instructions+=3;goto B589c01;
case 0x589c0c:c.instructions+=2;goto B589c0c;
case 0x589c14:c.instructions+=1;goto B589c14;
case 0x589c19:goto L589c19;
case 0x589c20:c.instructions+=4;goto B589c20;
case 0x589c26:c.instructions+=3;goto B589c26;
case 0x589c2c:c.instructions+=2;goto B589c2c;
case 0x589c30:c.instructions+=1;goto B589c30;
case 0x589c35:goto L589c35;
case 0x589c39:c.instructions+=5;goto B589c39;
case 0x589c3d:c.instructions+=4;goto B589c3d;
case 0x589c41:c.instructions+=3;goto B589c41;
case 0x589c43:c.instructions+=2;goto B589c43;
case 0x589c46:c.instructions+=1;goto B589c46;
case 0x589c48:goto L589c48;
case 0x589c4e:goto L589c4e;
case 0x589c50:c.instructions+=1;goto B589c50;
case 0x589c55:goto L589c55;
case 0x589c57:c.instructions+=2;goto B589c57;
case 0x589c59:c.instructions+=1;goto B589c59;
case 0x589c5b:goto L589c5b;
case 0x589c60:goto L589c60;
case 0x589c64:c.instructions+=4;goto B589c64;
case 0x589c66:c.instructions+=3;goto B589c66;
case 0x589c67:c.instructions+=2;goto B589c67;
case 0x589c6b:c.instructions+=1;goto B589c6b;
case 0x589c70:goto L589c70;
case 0x589c71:c.instructions+=2;goto B589c71;
case 0x589c73:c.instructions+=1;goto B589c73;
case 0x589c75:goto L589c75;
case 0x589c77:c.instructions+=4;goto B589c77;
case 0x589c7b:c.instructions+=3;goto B589c7b;
case 0x589c7c:c.instructions+=2;goto B589c7c;
case 0x589c7e:c.instructions+=1;goto B589c7e;
case 0x589c83:goto L589c83;
case 0x589c86:c.instructions+=5;goto B589c86;
case 0x589c87:c.instructions+=4;goto B589c87;
case 0x589c88:c.instructions+=3;goto B589c88;
case 0x589c89:c.instructions+=2;goto B589c89;
case 0x589c8f:c.instructions+=1;goto B589c8f;
case 0x589c90:goto L589c90;
case 0x589c96:c.instructions+=11;goto B589c96;
case 0x589c97:c.instructions+=10;goto B589c97;
case 0x589c98:c.instructions+=9;goto B589c98;
case 0x589c99:c.instructions+=8;goto B589c99;
case 0x589c9b:c.instructions+=7;goto B589c9b;
case 0x589c9d:c.instructions+=6;goto B589c9d;
case 0x589ca1:c.instructions+=5;goto B589ca1;
case 0x589ca6:c.instructions+=4;goto B589ca6;
case 0x589cb1:c.instructions+=3;goto B589cb1;
case 0x589cbc:c.instructions+=2;goto B589cbc;
case 0x589cc4:c.instructions+=1;goto B589cc4;
case 0x589cc9:goto L589cc9;
case 0x589cce:c.instructions+=6;goto B589cce;
case 0x589ccf:c.instructions+=5;goto B589ccf;
case 0x589cd1:c.instructions+=4;goto B589cd1;
case 0x589cd2:c.instructions+=3;goto B589cd2;
case 0x589cd6:c.instructions+=2;goto B589cd6;
case 0x589cdb:c.instructions+=1;goto B589cdb;
case 0x589ce0:goto L589ce0;
case 0x589ce7:c.instructions+=4;goto B589ce7;
case 0x589ced:c.instructions+=3;goto B589ced;
case 0x589cf3:c.instructions+=2;goto B589cf3;
case 0x589cf7:c.instructions+=1;goto B589cf7;
case 0x589cfc:goto L589cfc;
case 0x589d00:c.instructions+=5;goto B589d00;
case 0x589d04:c.instructions+=4;goto B589d04;
case 0x589d08:c.instructions+=3;goto B589d08;
case 0x589d0a:c.instructions+=2;goto B589d0a;
case 0x589d0d:c.instructions+=1;goto B589d0d;
case 0x589d0f:goto L589d0f;
case 0x589d15:goto L589d15;
case 0x589d17:c.instructions+=1;goto B589d17;
case 0x589d1c:goto L589d1c;
case 0x589d1e:c.instructions+=2;goto B589d1e;
case 0x589d20:c.instructions+=1;goto B589d20;
case 0x589d22:goto L589d22;
case 0x589d26:c.instructions+=4;goto B589d26;
case 0x589d28:c.instructions+=3;goto B589d28;
case 0x589d29:c.instructions+=2;goto B589d29;
case 0x589d2d:c.instructions+=1;goto B589d2d;
case 0x589d32:goto L589d32;
case 0x589d33:c.instructions+=2;goto B589d33;
case 0x589d35:c.instructions+=1;goto B589d35;
case 0x589d37:goto L589d37;
case 0x589d39:c.instructions+=4;goto B589d39;
case 0x589d3d:c.instructions+=3;goto B589d3d;
case 0x589d3e:c.instructions+=2;goto B589d3e;
case 0x589d40:c.instructions+=1;goto B589d40;
case 0x589d45:goto L589d45;
case 0x589d48:c.instructions+=5;goto B589d48;
case 0x589d49:c.instructions+=4;goto B589d49;
case 0x589d4a:c.instructions+=3;goto B589d4a;
case 0x589d4b:c.instructions+=2;goto B589d4b;
case 0x589d51:c.instructions+=1;goto B589d51;
case 0x589d60:goto L589d60;
case 0x589d61:c.instructions+=13;goto B589d61;
case 0x589d63:c.instructions+=12;goto B589d63;
case 0x589d66:c.instructions+=11;goto B589d66;
case 0x589d68:c.instructions+=10;goto B589d68;
case 0x589d6d:c.instructions+=9;goto B589d6d;
case 0x589d73:c.instructions+=8;goto B589d73;
case 0x589d74:c.instructions+=7;goto B589d74;
case 0x589d7b:c.instructions+=6;goto B589d7b;
case 0x589d81:c.instructions+=5;goto B589d81;
case 0x589d88:c.instructions+=4;goto B589d88;
case 0x589d89:c.instructions+=3;goto B589d89;
case 0x589d8a:c.instructions+=2;goto B589d8a;
case 0x589d8b:c.instructions+=1;goto B589d8b;
case 0x589d8d:goto L589d8d;
case 0x589d92:c.instructions+=3;goto B589d92;
case 0x589d94:c.instructions+=2;goto B589d94;
case 0x589d99:c.instructions+=1;goto B589d99;
case 0x589da0:goto L589da0;
case 0x589da2:goto L589da2;
case 0x589da5:c.instructions+=4;goto B589da5;
case 0x589dac:c.instructions+=3;goto B589dac;
case 0x589dae:c.instructions+=2;goto B589dae;
case 0x589db0:c.instructions+=1;goto B589db0;
case 0x589db2:goto L589db2;
case 0x589db4:c.instructions+=1;goto B589db4;
case 0x589db9:goto L589db9;
case 0x589dbc:c.instructions+=2;goto B589dbc;
case 0x589dbe:c.instructions+=1;goto B589dbe;
case 0x589dc0:goto L589dc0;
case 0x589dc2:c.instructions+=2;goto B589dc2;
case 0x589dc5:c.instructions+=1;goto B589dc5;
case 0x589dc7:goto L589dc7;
case 0x589dc9:goto L589dc9;
case 0x589dd0:goto L589dd0;
case 0x589dd7:c.instructions+=4;goto B589dd7;
case 0x589dda:c.instructions+=3;goto B589dda;
case 0x589ddb:c.instructions+=2;goto B589ddb;
case 0x589ddc:c.instructions+=1;goto B589ddc;
case 0x589de1:goto L589de1;
case 0x589de4:c.instructions+=2;goto B589de4;
case 0x589de6:c.instructions+=1;goto B589de6;
case 0x589dec:goto L589dec;
case 0x589df3:c.instructions+=8;goto B589df3;
case 0x589dfa:c.instructions+=7;goto B589dfa;
case 0x589dfb:c.instructions+=6;goto B589dfb;
case 0x589dff:c.instructions+=5;goto B589dff;
case 0x589e00:c.instructions+=4;goto B589e00;
case 0x589e05:c.instructions+=3;goto B589e05;
case 0x589e0c:c.instructions+=2;goto B589e0c;
case 0x589e13:c.instructions+=1;goto B589e13;
case 0x589e18:goto L589e18;
case 0x589e1b:c.instructions+=4;goto B589e1b;
case 0x589e1f:c.instructions+=3;goto B589e1f;
case 0x589e20:c.instructions+=2;goto B589e20;
case 0x589e25:c.instructions+=1;goto B589e25;
case 0x589e2a:goto L589e2a;
case 0x589e31:c.instructions+=2;goto B589e31;
case 0x589e33:c.instructions+=1;goto B589e33;
case 0x589e35:goto L589e35;
case 0x589e37:c.instructions+=2;goto B589e37;
case 0x589e39:c.instructions+=1;goto B589e39;
case 0x589e3b:goto L589e3b;
case 0x589e40:goto L589e40;
case 0x589e42:c.instructions+=5;goto B589e42;
case 0x589e45:c.instructions+=4;goto B589e45;
case 0x589e47:c.instructions+=3;goto B589e47;
case 0x589e48:c.instructions+=2;goto B589e48;
case 0x589e4b:c.instructions+=1;goto B589e4b;
case 0x589e50:goto L589e50;
case 0x589e52:c.instructions+=3;goto B589e52;
case 0x589e55:c.instructions+=2;goto B589e55;
case 0x589e57:c.instructions+=1;goto B589e57;
case 0x589e59:goto L589e59;
case 0x589e5a:c.instructions+=1;goto B589e5a;
case 0x589e5f:goto L589e5f;
case 0x589e62:goto L589e62;
case 0x589e66:c.instructions+=12;goto B589e66;
case 0x589e6a:c.instructions+=11;goto B589e6a;
case 0x589e71:c.instructions+=10;goto B589e71;
case 0x589e75:c.instructions+=9;goto B589e75;
case 0x589e79:c.instructions+=8;goto B589e79;
case 0x589e7d:c.instructions+=7;goto B589e7d;
case 0x589e7e:c.instructions+=6;goto B589e7e;
case 0x589e82:c.instructions+=5;goto B589e82;
case 0x589e83:c.instructions+=4;goto B589e83;
case 0x589e85:c.instructions+=3;goto B589e85;
case 0x589e8c:c.instructions+=2;goto B589e8c;
case 0x589e93:c.instructions+=1;goto B589e93;
case 0x589e98:goto L589e98;
case 0x589e9c:c.instructions+=3;goto B589e9c;
case 0x589e9f:c.instructions+=2;goto B589e9f;
case 0x589ea3:c.instructions+=1;goto B589ea3;
case 0x589ea8:goto L589ea8;
case 0x589eaa:c.instructions+=2;goto B589eaa;
case 0x589eac:c.instructions+=1;goto B589eac;
case 0x589eae:goto L589eae;
case 0x589eb0:goto L589eb0;
case 0x589eb2:c.instructions+=5;goto B589eb2;
case 0x589eb5:c.instructions+=4;goto B589eb5;
case 0x589eb6:c.instructions+=3;goto B589eb6;
case 0x589eb8:c.instructions+=2;goto B589eb8;
case 0x589eb9:c.instructions+=1;goto B589eb9;
case 0x589ebe:goto L589ebe;
case 0x589ec2:c.instructions+=7;goto B589ec2;
case 0x589ec4:c.instructions+=6;goto B589ec4;
case 0x589ec7:c.instructions+=5;goto B589ec7;
case 0x589eca:c.instructions+=4;goto B589eca;
case 0x589ecc:c.instructions+=3;goto B589ecc;
case 0x589ece:c.instructions+=2;goto B589ece;
case 0x589ed1:c.instructions+=1;goto B589ed1;
case 0x589ed3:goto L589ed3;
case 0x589ed4:c.instructions+=1;goto B589ed4;
case 0x589ed9:goto L589ed9;
case 0x589edc:goto L589edc;
case 0x589ee0:c.instructions+=2;goto B589ee0;
case 0x589ee2:c.instructions+=1;goto B589ee2;
case 0x589ee4:goto L589ee4;
case 0x589ee8:c.instructions+=3;goto B589ee8;
case 0x589eea:c.instructions+=2;goto B589eea;
case 0x589ef5:c.instructions+=1;goto B589ef5;
case 0x589ef7:goto L589ef7;
case 0x589ef9:c.instructions+=6;goto B589ef9;
case 0x589efb:c.instructions+=5;goto B589efb;
case 0x589efe:c.instructions+=4;goto B589efe;
case 0x589f00:c.instructions+=3;goto B589f00;
case 0x589f01:c.instructions+=2;goto B589f01;
case 0x589f04:c.instructions+=1;goto B589f04;
case 0x589f09:goto L589f09;
case 0x589f0d:c.instructions+=4;goto B589f0d;
case 0x589f11:c.instructions+=3;goto B589f11;
case 0x589f14:c.instructions+=2;goto B589f14;
case 0x589f16:c.instructions+=1;goto B589f16;
case 0x589f18:goto L589f18;
case 0x589f1f:c.instructions+=7;goto B589f1f;
case 0x589f20:c.instructions+=6;goto B589f20;
case 0x589f21:c.instructions+=5;goto B589f21;
case 0x589f28:c.instructions+=4;goto B589f28;
case 0x589f29:c.instructions+=3;goto B589f29;
case 0x589f2b:c.instructions+=2;goto B589f2b;
case 0x589f2c:c.instructions+=1;goto B589f2c;
case 0x589f30:goto L589f30;
case 0x589f36:c.instructions+=5;goto B589f36;
case 0x589f37:c.instructions+=4;goto B589f37;
case 0x589f3e:c.instructions+=3;goto B589f3e;
case 0x589f3f:c.instructions+=2;goto B589f3f;
case 0x589f44:c.instructions+=1;goto B589f44;
case 0x589f49:goto L589f49;
case 0x589f4b:c.instructions+=8;goto B589f4b;
case 0x589f4d:c.instructions+=7;goto B589f4d;
case 0x589f4f:c.instructions+=6;goto B589f4f;
case 0x589f53:c.instructions+=5;goto B589f53;
case 0x589f57:c.instructions+=4;goto B589f57;
case 0x589f5e:c.instructions+=3;goto B589f5e;
case 0x589f65:c.instructions+=2;goto B589f65;
case 0x589f6d:c.instructions+=1;goto B589f6d;
case 0x589f72:goto L589f72;
case 0x589f74:c.instructions+=3;goto B589f74;
case 0x589f75:c.instructions+=2;goto B589f75;
case 0x589f79:c.instructions+=1;goto B589f79;
case 0x589f7e:goto L589f7e;
case 0x589f85:c.instructions+=6;goto B589f85;
case 0x589f87:c.instructions+=5;goto B589f87;
case 0x589f8b:c.instructions+=4;goto B589f8b;
case 0x589f8c:c.instructions+=3;goto B589f8c;
case 0x589f8e:c.instructions+=2;goto B589f8e;
case 0x589f8f:c.instructions+=1;goto B589f8f;
case 0x589f94:goto L589f94;
case 0x589f97:c.instructions+=3;goto B589f97;
case 0x589f98:c.instructions+=2;goto B589f98;
case 0x589f9e:c.instructions+=1;goto B589f9e;
case 0x589fa0:goto L589fa0;
case 0x589fa1:c.instructions+=21;goto B589fa1;
case 0x589fa3:c.instructions+=20;goto B589fa3;
case 0x589fa6:c.instructions+=19;goto B589fa6;
case 0x589fa8:c.instructions+=18;goto B589fa8;
case 0x589fad:c.instructions+=17;goto B589fad;
case 0x589fb3:c.instructions+=16;goto B589fb3;
case 0x589fb4:c.instructions+=15;goto B589fb4;
case 0x589fbb:c.instructions+=14;goto B589fbb;
case 0x589fc1:c.instructions+=13;goto B589fc1;
case 0x589fc2:c.instructions+=12;goto B589fc2;
case 0x589fc3:c.instructions+=11;goto B589fc3;
case 0x589fc6:c.instructions+=10;goto B589fc6;
case 0x589fc7:c.instructions+=9;goto B589fc7;
case 0x589fc9:c.instructions+=8;goto B589fc9;
case 0x589fcb:c.instructions+=7;goto B589fcb;
case 0x589fcc:c.instructions+=6;goto B589fcc;
case 0x589fd0:c.instructions+=5;goto B589fd0;
case 0x589fd5:c.instructions+=4;goto B589fd5;
case 0x589fdc:c.instructions+=3;goto B589fdc;
case 0x589fe3:c.instructions+=2;goto B589fe3;
case 0x589feb:c.instructions+=1;goto B589feb;
case 0x589ff0:goto L589ff0;
case 0x589ff4:c.instructions+=4;goto B589ff4;
case 0x589ff5:c.instructions+=3;goto B589ff5;
case 0x589ff6:c.instructions+=2;goto B589ff6;
case 0x589ffb:c.instructions+=1;goto B589ffb;
default:missing_instruction(c.pc);}
B589001:L589001:{c.instructions+=19;NFSU2_TR(0x589001);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B589004:{NFSU2_TR(0x589004);
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
B589007:{NFSU2_TR(0x589007);
__builtin_memmove(gp(0x8667e4),(R+12),4);
}
B58900d:{NFSU2_TR(0x58900d);
__builtin_memmove(gp(0x8667ec),(R+12),4);
}
B589013:{NFSU2_TR(0x589013);
__builtin_memmove(gp(0x8669f8),(R+12),1);
}
B589019:{NFSU2_TR(0x589019);
__builtin_memmove(gp(0x7fbe58),(R+0),4);
}
B58901e:{NFSU2_TR(0x58901e);
__builtin_memmove(gp(0x7fbe5c),(R+0),4);
}
B589023:{NFSU2_TR(0x589023);
__builtin_memmove(gp(0x7fbe64),(R+0),4);
}
B589028:{NFSU2_TR(0x589028);
__builtin_memmove(gp(0x8669ec),(R+12),4);
}
B58902e:{NFSU2_TR(0x58902e);
__builtin_memmove(gp(0x8669f0),(R+12),2);
}
B589035:{NFSU2_TR(0x589035);
s4(0x7fbe60,u32(0xbf800000ull));
}
B58903f:{NFSU2_TR(0x58903f);
s4(0x866a0c,u32(0x0ull));
}
B589049:{NFSU2_TR(0x589049);
__builtin_memmove(gp(0x8669fc),(R+12),4);
}
B58904f:{NFSU2_TR(0x58904f);
__builtin_memmove(gp(0x866a00),(R+12),4);
}
B589055:{NFSU2_TR(0x589055);
__builtin_memmove(gp(0x866a04),(R+12),4);
}
B58905b:{NFSU2_TR(0x58905b);
__builtin_memmove(gp(0x866a10),(R+12),4);
}
B589061:{NFSU2_TR(0x589061);
__builtin_memmove(gp(0x8669f4),(R+12),4);
}
B589067:{NFSU2_TR(0x589067);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B589068:{NFSU2_TR(0x589068);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589070:L589070:{c.instructions+=3;NFSU2_TR(0x589070);
__builtin_memmove((R+0),gp(0x86675c),4);
}
B589075:{NFSU2_TR(0x589075);
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
B589077:{NFSU2_TR(0x589077);
if(r1(R+518)){{goto L58907b;}}
}
B589079:L589079:{c.instructions+=1;NFSU2_TR(0x589079);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58907bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58907b:L58907b:{c.instructions+=1;NFSU2_TR(0x58907b);
TAIL_STATIC(0x588fb0u,588);
}
B589080:L589080:{c.instructions+=3;NFSU2_TR(0x589080);
__builtin_memmove((R+0),gp(0x7fbe64),4);
}
B589085:{NFSU2_TR(0x589085);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B589088:{NFSU2_TR(0x589088);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5890a1;}}
}
B58908a:L58908a:{c.instructions+=3;NFSU2_TR(0x58908a);
__builtin_memmove((R+0),gp(0x86675c),4);
}
B58908f:{NFSU2_TR(0x58908f);
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
B589091:{NFSU2_TR(0x589091);
if(r1(R+518)){{goto L5890ae;}}
}
B589093:L589093:{c.instructions+=1;NFSU2_TR(0x589093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589095ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B589095:L589095:{c.instructions+=2;NFSU2_TR(0x589095);
s1(0x8669f8,u8(0x0ull));
}
B58909c:{NFSU2_TR(0x58909c);
TAIL_STATIC(0x588fb0u,588);
}
B5890a1:L5890a1:{c.instructions+=4;NFSU2_TR(0x5890a1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5890a3:{NFSU2_TR(0x5890a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5890a4:{NFSU2_TR(0x5890a4);
w4(R+4,u32(0x89cf48ull));
}
B5890a9:{NFSU2_TR(0x5890a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5890aeull));
TAIL_STATIC(0x6099c0u,609);
}
B5890ae:L5890ae:{c.instructions+=2;NFSU2_TR(0x5890ae);
s1(0x8669f8,u8(0x0ull));
}
B5890b5:{NFSU2_TR(0x5890b5);
TAIL_STATIC(0x588fb0u,588);
}
B5890c0:L5890c0:{c.instructions+=5;NFSU2_TR(0x5890c0);
__builtin_memmove((R+0),gp(0x7fbe64),4);
}
B5890c5:{NFSU2_TR(0x5890c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5890c7:{NFSU2_TR(0x5890c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5890c8:{NFSU2_TR(0x5890c8);
w4(R+4,u32(0x89cf48ull));
}
B5890cd:{NFSU2_TR(0x5890cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5890d2ull));
TAIL_STATIC(0x6099c0u,609);
}
B5890d2:L5890d2:{c.instructions+=1;NFSU2_TR(0x5890d2);
TAIL_STATIC(0x588fb0u,588);
}
B5890e0:L5890e0:{c.instructions+=4;NFSU2_TR(0x5890e0);
__builtin_memmove((R+0),gp(0x890080),4);
}
B5890e5:{NFSU2_TR(0x5890e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5890e8:{NFSU2_TR(0x5890e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5890ea:{NFSU2_TR(0x5890ea);
if(r1(R+518)){{goto L5891a6;}}
}
B5890f0:L5890f0:{c.instructions+=11;NFSU2_TR(0x5890f0);
__builtin_memmove((R+0),gp(0x8691b4),4);
}
B5890f5:{NFSU2_TR(0x5890f5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5890f6:{NFSU2_TR(0x5890f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5890f7:{NFSU2_TR(0x5890f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5890fb:{NFSU2_TR(0x5890fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5890fc:{NFSU2_TR(0x5890fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5890fd:{NFSU2_TR(0x5890fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589101:{NFSU2_TR(0x589101);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589102:{NFSU2_TR(0x589102);
__builtin_memmove((R+4),(R+24),4);
}
B589104:{NFSU2_TR(0x589104);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58910c:{NFSU2_TR(0x58910c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589111ull));
TAIL_STATIC(0x581d90u,581);
}
B589111:L589111:{c.instructions+=9;NFSU2_TR(0x589111);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B589115:{NFSU2_TR(0x589115);
__builtin_memmove((R+0),gp(0x8691b8),4);
}
B58911a:{NFSU2_TR(0x58911a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58911c:{NFSU2_TR(0x58911c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589120:{NFSU2_TR(0x589120);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589121:{NFSU2_TR(0x589121);
__builtin_memmove((R+4),(R+24),4);
}
B589123:{NFSU2_TR(0x589123);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B589126:{NFSU2_TR(0x589126);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58912e:{NFSU2_TR(0x58912e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589133ull));
TAIL_STATIC(0x581d90u,581);
}
B589133:L589133:{c.instructions+=8;NFSU2_TR(0x589133);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B589137:{NFSU2_TR(0x589137);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589139:{NFSU2_TR(0x589139);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58913d:{NFSU2_TR(0x58913d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58913e:{NFSU2_TR(0x58913e);
__builtin_memmove((R+4),(R+24),4);
}
B589140:{NFSU2_TR(0x589140);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589144:{NFSU2_TR(0x589144);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58914c:{NFSU2_TR(0x58914c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589151ull));
TAIL_STATIC(0x581d90u,581);
}
B589151:L589151:{c.instructions+=3;NFSU2_TR(0x589151);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589152:{NFSU2_TR(0x589152);
w4(R+4,u32(0x89cf48ull));
}
B589157:{NFSU2_TR(0x589157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58915cull));
TAIL_STATIC(0x5f0220u,5f0);
}
B58915c:L58915c:{c.instructions+=3;NFSU2_TR(0x58915c);
__builtin_memmove((R+4),(R+0),4);
}
B58915e:{NFSU2_TR(0x58915e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B589160:{NFSU2_TR(0x589160);
if(r1(R+518)){{goto L5891a3;}}
}
B589162:L589162:{c.instructions+=5;NFSU2_TR(0x589162);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B589166:{NFSU2_TR(0x589166);
{u32 ea_=u32(r4(R+4)+u32(620u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B58916c:{NFSU2_TR(0x58916c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58916e:{NFSU2_TR(0x58916e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B589171:{NFSU2_TR(0x589171);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5891a3;}}
}
B589173:L589173:{c.instructions+=10;NFSU2_TR(0x589173);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B589177:{NFSU2_TR(0x589177);
__builtin_memmove((R+0),(R+20),4);
}
B589179:{NFSU2_TR(0x589179);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x26cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58917f:{NFSU2_TR(0x58917f);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B589184:{NFSU2_TR(0x589184);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589185:{NFSU2_TR(0x589185);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589186:{NFSU2_TR(0x589186);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589187:{NFSU2_TR(0x589187);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589188:{NFSU2_TR(0x589188);
w4(R+4,u32(0x89cf48ull));
}
B58918d:{NFSU2_TR(0x58918d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589192ull));
TAIL_STATIC(0x5f9840u,5f9);
}
B589192:L589192:{c.instructions+=2;NFSU2_TR(0x589192);
u8 U[8];
__builtin_memmove((U+0),gp(0x7fbe64),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B589198:{NFSU2_TR(0x589198);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5891a3;}}
}
B58919a:L58919a:{c.instructions+=2;NFSU2_TR(0x58919a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58919b:{NFSU2_TR(0x58919b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5891a0ull));
TAIL_STATIC(0x587960u,587);
}
B5891a0:L5891a0:{c.instructions+=1;NFSU2_TR(0x5891a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5891a3:L5891a3:{c.instructions+=3;NFSU2_TR(0x5891a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5891a4:{NFSU2_TR(0x5891a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5891a5:{NFSU2_TR(0x5891a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5891a6:L5891a6:{c.instructions+=2;NFSU2_TR(0x5891a6);
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
B5891a9:{NFSU2_TR(0x5891a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5891b0:L5891b0:{c.instructions+=11;NFSU2_TR(0x5891b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5891b3:{NFSU2_TR(0x5891b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5891b4:{NFSU2_TR(0x5891b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5891b8:{NFSU2_TR(0x5891b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5891b9:{NFSU2_TR(0x5891b9);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5891bb:{NFSU2_TR(0x5891bb);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5891bf:{NFSU2_TR(0x5891bf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5891c1:{NFSU2_TR(0x5891c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5891c2:{NFSU2_TR(0x5891c2);
__builtin_memmove((R+4),(R+24),4);
}
B5891c4:{NFSU2_TR(0x5891c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5891c8:{NFSU2_TR(0x5891c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5891cdull));
TAIL_STATIC(0x581d90u,581);
}
B5891cd:L5891cd:{c.instructions+=8;NFSU2_TR(0x5891cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5891d1:{NFSU2_TR(0x5891d1);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5891d3:{NFSU2_TR(0x5891d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5891d7:{NFSU2_TR(0x5891d7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5891db:{NFSU2_TR(0x5891db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5891dc:{NFSU2_TR(0x5891dc);
__builtin_memmove((R+4),(R+24),4);
}
B5891de:{NFSU2_TR(0x5891de);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5891e2:{NFSU2_TR(0x5891e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5891e7ull));
TAIL_STATIC(0x581d90u,581);
}
B5891e7:L5891e7:{c.instructions+=7;NFSU2_TR(0x5891e7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5891eb:{NFSU2_TR(0x5891eb);
{u32 ea_=u32(u32(8371808u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5891f1:{NFSU2_TR(0x5891f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5891f5:{NFSU2_TR(0x5891f5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5891f9:{NFSU2_TR(0x5891f9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5891fb:{NFSU2_TR(0x5891fb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5891fe:{NFSU2_TR(0x5891fe);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L589306;}}
}
B589204:L589204:{c.instructions+=5;NFSU2_TR(0x589204);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B589208:{NFSU2_TR(0x589208);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589209:{NFSU2_TR(0x589209);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58920a:{NFSU2_TR(0x58920a);
__builtin_memmove(gp(0x7fbe60),(R+0),4);
}
B58920f:{NFSU2_TR(0x58920f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589214ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5890e0u);}goto L5890e0;}
}
B589214:L589214:{c.instructions+=9;NFSU2_TR(0x589214);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58921a:{NFSU2_TR(0x58921a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58921d:{NFSU2_TR(0x58921d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B589223:{NFSU2_TR(0x589223);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B589227:{NFSU2_TR(0x589227);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58922d:{NFSU2_TR(0x58922d);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B589233:{NFSU2_TR(0x589233);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B589235:{NFSU2_TR(0x589235);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B58923b:{NFSU2_TR(0x58923b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589240ull));
TAIL_STATIC(0x75bed4u,75b);
}
B589240:L589240:{c.instructions+=13;NFSU2_TR(0x589240);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B589244:{NFSU2_TR(0x589244);
__builtin_memmove(gp(0x8669f0),(R+0),2);
}
B58924a:{NFSU2_TR(0x58924a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B58924e:{NFSU2_TR(0x58924e);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B589254:{NFSU2_TR(0x589254);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58925a:{NFSU2_TR(0x58925a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B58925e:{NFSU2_TR(0x58925e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B589260:{NFSU2_TR(0x589260);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B589262:{NFSU2_TR(0x589262);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B589266:{NFSU2_TR(0x589266);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B58926c:{NFSU2_TR(0x58926c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58926e:{NFSU2_TR(0x58926e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B589271:{NFSU2_TR(0x589271);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5892a2;}}
}
B589273:L589273:{c.instructions+=5;NFSU2_TR(0x589273);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B589275:{NFSU2_TR(0x589275);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B589279:{NFSU2_TR(0x589279);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58927f:{NFSU2_TR(0x58927f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B589285:{NFSU2_TR(0x589285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58928aull));
TAIL_STATIC(0x75bed4u,75b);
}
B58928a:L58928a:{c.instructions+=7;NFSU2_TR(0x58928a);
__builtin_memmove(gp(0x866a00),(R+28),4);
}
B589290:{NFSU2_TR(0x589290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B589291:{NFSU2_TR(0x589291);
__builtin_memmove(gp(0x869234),(R+0),4);
}
B589296:{NFSU2_TR(0x589296);
s1(0x866758,u8(0x1ull));
}
B58929d:{NFSU2_TR(0x58929d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58929e:{NFSU2_TR(0x58929e);
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
B5892a1:{NFSU2_TR(0x5892a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5892a2:L5892a2:{c.instructions+=4;NFSU2_TR(0x5892a2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5892a8:{NFSU2_TR(0x5892a8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5892aa:{NFSU2_TR(0x5892aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5892ad:{NFSU2_TR(0x5892ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5892b6;}}
}
B5892af:L5892af:{c.instructions+=2;NFSU2_TR(0x5892af);
w4(R+24,u32(0x1ull));
}
B5892b4:{NFSU2_TR(0x5892b4);
{goto L5892b9;}
}
B5892b6:L5892b6:{c.instructions+=1;NFSU2_TR(0x5892b6);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B5892b9:L5892b9:{c.instructions+=2;NFSU2_TR(0x5892b9);
u8 U[8];
__builtin_memmove((U+0),gp(0x866a04),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5892bf:{NFSU2_TR(0x5892bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5892fa;}}
}
B5892c1:L5892c1:{c.instructions+=5;NFSU2_TR(0x5892c1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5892c5:{NFSU2_TR(0x5892c5);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5892cb:{NFSU2_TR(0x5892cb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5892cd:{NFSU2_TR(0x5892cd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5892d0:{NFSU2_TR(0x5892d0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5892fa;}}
}
B5892d2:L5892d2:{c.instructions+=5;NFSU2_TR(0x5892d2);
__builtin_memmove((R+0),gp(0x866a00),4);
}
B5892d7:{NFSU2_TR(0x5892d7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5892d8:{NFSU2_TR(0x5892d8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5892db:{NFSU2_TR(0x5892db);
__builtin_memmove(gp(0x866a00),(R+0),4);
}
B5892e0:{NFSU2_TR(0x5892e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L589300;}}
}
B5892e2:L5892e2:{c.instructions+=3;NFSU2_TR(0x5892e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5892e6:{NFSU2_TR(0x5892e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5892e7:{NFSU2_TR(0x5892e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5892ecull));
TAIL_STATIC(0x5836e0u,583);
}
B5892ec:L5892ec:{c.instructions+=4;NFSU2_TR(0x5892ec);
__builtin_memmove((R+0),gp(0x8669fc),4);
}
B5892f1:{NFSU2_TR(0x5892f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5892f4:{NFSU2_TR(0x5892f4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5892f5:{NFSU2_TR(0x5892f5);
__builtin_memmove(gp(0x8669fc),(R+0),4);
}
B5892fa:L5892fa:{c.instructions+=1;NFSU2_TR(0x5892fa);
__builtin_memmove(gp(0x866a00),(R+28),4);
}
B589300:L589300:{c.instructions+=1;NFSU2_TR(0x589300);
__builtin_memmove(gp(0x866a04),(R+24),4);
}
B589306:L589306:{c.instructions+=4;NFSU2_TR(0x589306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B589307:{NFSU2_TR(0x589307);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B589308:{NFSU2_TR(0x589308);
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
B58930b:{NFSU2_TR(0x58930b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589310:L589310:{c.instructions+=22;NFSU2_TR(0x589310);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589311:{NFSU2_TR(0x589311);
__builtin_memmove((R+20),(R+16),4);
}
B589313:{NFSU2_TR(0x589313);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B589316:{NFSU2_TR(0x589316);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589318:{NFSU2_TR(0x589318);
u8 U[4];
w4(U+0,u32(0x7789fbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58931d:{NFSU2_TR(0x58931d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B589323:{NFSU2_TR(0x589323);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589324:{NFSU2_TR(0x589324);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58932b:{NFSU2_TR(0x58932b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x420ull))));
}
B589331:{NFSU2_TR(0x589331);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589332:{NFSU2_TR(0x589332);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589333:{NFSU2_TR(0x589333);
__builtin_memmove((R+24),gp(0x7fbe5c),4);
}
B589339:{NFSU2_TR(0x589339);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58933a:{NFSU2_TR(0x58933a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B58933c:{NFSU2_TR(0x58933c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58933e:{NFSU2_TR(0x58933e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58933f:{NFSU2_TR(0x58933f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589343:{NFSU2_TR(0x589343);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B589347:{NFSU2_TR(0x589347);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58934e:{NFSU2_TR(0x58934e);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589355:{NFSU2_TR(0x589355);
u8 U[5];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58935d:{NFSU2_TR(0x58935d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589362ull));
TAIL_STATIC(0x581d00u,581);
}
B589362:L589362:{c.instructions+=5;NFSU2_TR(0x589362);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B589366:{NFSU2_TR(0x589366);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589367:{NFSU2_TR(0x589367);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589368:{NFSU2_TR(0x589368);
w4(R+4,u32(0x89cf48ull));
}
B58936d:{NFSU2_TR(0x58936d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589372ull));
TAIL_STATIC(0x5fe570u,5fe);
}
B589372:L589372:{c.instructions+=11;NFSU2_TR(0x589372);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589376:{NFSU2_TR(0x589376);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58937a:{NFSU2_TR(0x58937a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58937e:{NFSU2_TR(0x58937e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589382:{NFSU2_TR(0x589382);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B589386:{NFSU2_TR(0x589386);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589387:{NFSU2_TR(0x589387);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58938b:{NFSU2_TR(0x58938b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58938c:{NFSU2_TR(0x58938c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58938e:{NFSU2_TR(0x58938e);
u8 U[8];
w4(U+0,u32(u32(u32(0x440ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589395:{NFSU2_TR(0x589395);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58939aull));
TAIL_STATIC(0x587db0u,587);
}
B58939a:L58939a:{c.instructions+=4;NFSU2_TR(0x58939a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58939e:{NFSU2_TR(0x58939e);
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
B5893a1:{NFSU2_TR(0x5893a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5893a5:{NFSU2_TR(0x5893a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5893aaull));
TAIL_STATIC(0x502fd0u,502);
}
B5893aa:L5893aa:{c.instructions+=3;NFSU2_TR(0x5893aa);
__builtin_memmove((R+28),(R+0),4);
}
B5893ac:{NFSU2_TR(0x5893ac);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5893ae:{NFSU2_TR(0x5893ae);
if(r1(R+518)){{goto L5893e3;}}
}
B5893b0:L5893b0:{c.instructions+=5;NFSU2_TR(0x5893b0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5893b2:{NFSU2_TR(0x5893b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5893b5:{NFSU2_TR(0x5893b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5893b6:{NFSU2_TR(0x5893b6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5893b8:{NFSU2_TR(0x5893b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5893bdull));
TAIL_STATIC(0x585d50u,585);
}
B5893bd:L5893bd:{c.instructions+=8;NFSU2_TR(0x5893bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5893c1:{NFSU2_TR(0x5893c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5893c3:{NFSU2_TR(0x5893c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5893c6:{NFSU2_TR(0x5893c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5893c9:{NFSU2_TR(0x5893c9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5893cb:{NFSU2_TR(0x5893cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5893cd:{NFSU2_TR(0x5893cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5893d0:{NFSU2_TR(0x5893d0);
if(r1(R+518)){{goto L5893db;}}
}
B5893d2:L5893d2:{c.instructions+=2;NFSU2_TR(0x5893d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5893d3:{NFSU2_TR(0x5893d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5893d8ull));
TAIL_STATIC(0x575630u,575);
}
B5893d8:L5893d8:{c.instructions+=1;NFSU2_TR(0x5893d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5893db:L5893db:{c.instructions+=3;NFSU2_TR(0x5893db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5893df:{NFSU2_TR(0x5893df);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5893e1:{NFSU2_TR(0x5893e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5893b0u);}goto L5893b0;}}
}
B5893e3:L5893e3:{c.instructions+=4;NFSU2_TR(0x5893e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5893e7:{NFSU2_TR(0x5893e7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5893e9:{NFSU2_TR(0x5893e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x434ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5893f4:{NFSU2_TR(0x5893f4);
if(r1(R+518)){{goto L589417;}}
}
B5893f6:L5893f6:{c.instructions+=7;NFSU2_TR(0x5893f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5893f8:{NFSU2_TR(0x5893f8);
__builtin_memmove((R+4),(R+24),4);
}
B5893fa:{NFSU2_TR(0x5893fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5893fd:{NFSU2_TR(0x5893fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5893ff:{NFSU2_TR(0x5893ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589400:{NFSU2_TR(0x589400);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589403:{NFSU2_TR(0x589403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589408ull));
TAIL_STATIC(0x575630u,575);
}
B589408:L589408:{c.instructions+=5;NFSU2_TR(0x589408);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58940c:{NFSU2_TR(0x58940c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589410:{NFSU2_TR(0x589410);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B589413:{NFSU2_TR(0x589413);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B589415:{NFSU2_TR(0x589415);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5893f6u);}goto L5893f6;}}
}
B589417:L589417:{c.instructions+=8;NFSU2_TR(0x589417);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58941e:{NFSU2_TR(0x58941e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58941f:{NFSU2_TR(0x58941f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B589420:{NFSU2_TR(0x589420);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589427:{NFSU2_TR(0x589427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B589428:{NFSU2_TR(0x589428);
__builtin_memmove((R+16),(R+20),4);
}
B58942a:{NFSU2_TR(0x58942a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58942b:{NFSU2_TR(0x58942b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589430:L589430:{c.instructions+=22;NFSU2_TR(0x589430);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589431:{NFSU2_TR(0x589431);
__builtin_memmove((R+20),(R+16),4);
}
B589433:{NFSU2_TR(0x589433);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B589436:{NFSU2_TR(0x589436);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589438:{NFSU2_TR(0x589438);
u8 U[4];
w4(U+0,u32(0x778a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58943d:{NFSU2_TR(0x58943d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B589443:{NFSU2_TR(0x589443);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589444:{NFSU2_TR(0x589444);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58944b:{NFSU2_TR(0x58944b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B58944e:{NFSU2_TR(0x58944e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58944f:{NFSU2_TR(0x58944f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B589453:{NFSU2_TR(0x589453);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589457:{NFSU2_TR(0x589457);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589458:{NFSU2_TR(0x589458);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58945c:{NFSU2_TR(0x58945c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589460:{NFSU2_TR(0x589460);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B589463:{NFSU2_TR(0x589463);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B589467:{NFSU2_TR(0x589467);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589468:{NFSU2_TR(0x589468);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589469:{NFSU2_TR(0x589469);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58946b:{NFSU2_TR(0x58946b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B589473:{NFSU2_TR(0x589473);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589478ull));
TAIL_STATIC(0x587db0u,587);
}
B589478:L589478:{c.instructions+=4;NFSU2_TR(0x589478);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58947c:{NFSU2_TR(0x58947c);
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
B58947f:{NFSU2_TR(0x58947f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589483:{NFSU2_TR(0x589483);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589488ull));
TAIL_STATIC(0x502fd0u,502);
}
B589488:L589488:{c.instructions+=3;NFSU2_TR(0x589488);
__builtin_memmove((R+28),(R+0),4);
}
B58948a:{NFSU2_TR(0x58948a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58948c:{NFSU2_TR(0x58948c);
if(r1(R+518)){{goto L5894c3;}}
}
B58948e:L58948e:{c.instructions+=1;NFSU2_TR(0x58948e);
__builtin_memmove((R+28),(R+28),4);
}
B589490:L589490:{c.instructions+=5;NFSU2_TR(0x589490);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589492:{NFSU2_TR(0x589492);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B589495:{NFSU2_TR(0x589495);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589496:{NFSU2_TR(0x589496);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589498:{NFSU2_TR(0x589498);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58949dull));
TAIL_STATIC(0x585d50u,585);
}
B58949d:L58949d:{c.instructions+=8;NFSU2_TR(0x58949d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5894a1:{NFSU2_TR(0x5894a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5894a3:{NFSU2_TR(0x5894a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5894a6:{NFSU2_TR(0x5894a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5894a9:{NFSU2_TR(0x5894a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5894ab:{NFSU2_TR(0x5894ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5894ad:{NFSU2_TR(0x5894ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5894b0:{NFSU2_TR(0x5894b0);
if(r1(R+518)){{goto L5894bb;}}
}
B5894b2:L5894b2:{c.instructions+=2;NFSU2_TR(0x5894b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5894b3:{NFSU2_TR(0x5894b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5894b8ull));
TAIL_STATIC(0x575630u,575);
}
B5894b8:L5894b8:{c.instructions+=1;NFSU2_TR(0x5894b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5894bb:L5894bb:{c.instructions+=3;NFSU2_TR(0x5894bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5894bf:{NFSU2_TR(0x5894bf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5894c1:{NFSU2_TR(0x5894c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x589490u);}goto L589490;}}
}
B5894c3:L5894c3:{c.instructions+=4;NFSU2_TR(0x5894c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5894c7:{NFSU2_TR(0x5894c7);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5894c9:{NFSU2_TR(0x5894c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5894d1:{NFSU2_TR(0x5894d1);
if(r1(R+518)){{goto L5894f4;}}
}
B5894d3:L5894d3:{c.instructions+=7;NFSU2_TR(0x5894d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5894d5:{NFSU2_TR(0x5894d5);
__builtin_memmove((R+4),(R+24),4);
}
B5894d7:{NFSU2_TR(0x5894d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5894da:{NFSU2_TR(0x5894da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5894dc:{NFSU2_TR(0x5894dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5894dd:{NFSU2_TR(0x5894dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5894e0:{NFSU2_TR(0x5894e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5894e5ull));
TAIL_STATIC(0x575630u,575);
}
B5894e5:L5894e5:{c.instructions+=5;NFSU2_TR(0x5894e5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5894e9:{NFSU2_TR(0x5894e9);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5894ed:{NFSU2_TR(0x5894ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5894f0:{NFSU2_TR(0x5894f0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5894f2:{NFSU2_TR(0x5894f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5894d3u);}goto L5894d3;}}
}
B5894f4:L5894f4:{c.instructions+=7;NFSU2_TR(0x5894f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5894f8:{NFSU2_TR(0x5894f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5894f9:{NFSU2_TR(0x5894f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589500:{NFSU2_TR(0x589500);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B589501:{NFSU2_TR(0x589501);
__builtin_memmove((R+16),(R+20),4);
}
B589503:{NFSU2_TR(0x589503);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B589504:{NFSU2_TR(0x589504);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589510:L589510:{c.instructions+=7;NFSU2_TR(0x589510);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589511:{NFSU2_TR(0x589511);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B589515:{NFSU2_TR(0x589515);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589517:{NFSU2_TR(0x589517);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58951b:{NFSU2_TR(0x58951b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58951c:{NFSU2_TR(0x58951c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B589524:{NFSU2_TR(0x589524);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589529ull));
TAIL_STATIC(0x581d90u,581);
}
B589529:L589529:{c.instructions+=6;NFSU2_TR(0x589529);
__builtin_memmove((R+4),gp(0x7fbe64),4);
}
B58952f:{NFSU2_TR(0x58952f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589531:{NFSU2_TR(0x589531);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589532:{NFSU2_TR(0x589532);
w4(R+4,u32(0x89cf48ull));
}
B589537:{NFSU2_TR(0x589537);
s1(0x8669f8,u8(0x0ull));
}
B58953e:{NFSU2_TR(0x58953e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589543ull));
TAIL_STATIC(0x6099c0u,609);
}
B589543:L589543:{c.instructions+=2;NFSU2_TR(0x589543);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B589546:{NFSU2_TR(0x589546);
TAIL_STATIC(0x588fb0u,588);
}
B589550:L589550:{c.instructions+=6;NFSU2_TR(0x589550);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589551:{NFSU2_TR(0x589551);
{u32 ea_=u32(u32(7999048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B589557:{NFSU2_TR(0x589557);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B58955d:{NFSU2_TR(0x58955d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58955f:{NFSU2_TR(0x58955f);
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
B589562:{NFSU2_TR(0x589562);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5895b7;}}
}
B589564:L589564:{c.instructions+=7;NFSU2_TR(0x589564);
__builtin_memmove((R+4),gp(0x8693c0),4);
}
B58956a:{NFSU2_TR(0x58956a);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B58956f:{NFSU2_TR(0x58956f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B589571:{NFSU2_TR(0x589571);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B589575:{NFSU2_TR(0x589575);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B589579:{NFSU2_TR(0x589579);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58957f:{NFSU2_TR(0x58957f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589584ull));
TAIL_STATIC(0x75bed4u,75b);
}
B589584:L589584:{c.instructions+=8;NFSU2_TR(0x589584);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B589588:{NFSU2_TR(0x589588);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58958c:{NFSU2_TR(0x58958c);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B589592:{NFSU2_TR(0x589592);
{u32 ea_=u32(u32(7999048u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B589598:{NFSU2_TR(0x589598);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B58959a:{NFSU2_TR(0x58959a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58959c:{NFSU2_TR(0x58959c);
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
B58959f:{NFSU2_TR(0x58959f);
if(r1(R+514)){{goto L5895b7;}}
}
B5895a1:L5895a1:{c.instructions+=2;NFSU2_TR(0x5895a1);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5895a3:{NFSU2_TR(0x5895a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5895a8ull));
TAIL_STATIC(0x5883e0u,588);
}
B5895a8:L5895a8:{c.instructions+=3;NFSU2_TR(0x5895a8);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B5895ae:{NFSU2_TR(0x5895ae);
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
B5895b1:{NFSU2_TR(0x5895b1);
__builtin_memmove(gp(0x8693c0),(R+4),4);
}
B5895b7:L5895b7:{c.instructions+=2;NFSU2_TR(0x5895b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5895b8:{NFSU2_TR(0x5895b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5895c0:L5895c0:{c.instructions+=7;NFSU2_TR(0x5895c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5895c3:{NFSU2_TR(0x5895c3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5895c4:{NFSU2_TR(0x5895c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5895c5:{NFSU2_TR(0x5895c5);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5895c7:{NFSU2_TR(0x5895c7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5895c9:{NFSU2_TR(0x5895c9);
w4(R+0,u32(0x8693c8ull));
}
B5895ce:{NFSU2_TR(0x5895ce);
__builtin_memmove((R+28),(R+28),4);
}
B5895d0:L5895d0:{c.instructions+=3;NFSU2_TR(0x5895d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5895d4:{NFSU2_TR(0x5895d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5895d7:{NFSU2_TR(0x5895d7);
if(r1(R+518)){{goto L5895e5;}}
}
B5895d9:L5895d9:{c.instructions+=3;NFSU2_TR(0x5895d9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B5895dc:{NFSU2_TR(0x5895dc);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x869468ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x869468ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5895e1:{NFSU2_TR(0x5895e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5895d0u);}goto L5895d0;}}
}
B5895e3:L5895e3:{c.instructions+=1;NFSU2_TR(0x5895e3);
{goto L5895e7;}
}
B5895e5:L5895e5:{c.instructions+=1;NFSU2_TR(0x5895e5);
__builtin_memmove((R+28),(R+0),4);
}
B5895e7:L5895e7:{c.instructions+=2;NFSU2_TR(0x5895e7);
u8 U[8];
__builtin_memmove((U+0),gp(0x866a14),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5895ee:{NFSU2_TR(0x5895ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5896ea;}}
}
B5895f4:L5895f4:{c.instructions+=2;NFSU2_TR(0x5895f4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5895f6:{NFSU2_TR(0x5895f6);
if(r1(R+518)){{goto L5896ea;}}
}
B5895fc:L5895fc:{c.instructions+=9;NFSU2_TR(0x5895fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5895fd:{NFSU2_TR(0x5895fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5895fe:{NFSU2_TR(0x5895fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B589602:{NFSU2_TR(0x589602);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589604:{NFSU2_TR(0x589604);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B589608:{NFSU2_TR(0x589608);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589609:{NFSU2_TR(0x589609);
__builtin_memmove((R+4),(R+24),4);
}
B58960b:{NFSU2_TR(0x58960b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58960f:{NFSU2_TR(0x58960f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589614ull));
TAIL_STATIC(0x581d90u,581);
}
B589614:L589614:{c.instructions+=8;NFSU2_TR(0x589614);
__builtin_memmove((R+0),gp(0x8691b4),4);
}
B589619:{NFSU2_TR(0x589619);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58961d:{NFSU2_TR(0x58961d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58961e:{NFSU2_TR(0x58961e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589622:{NFSU2_TR(0x589622);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589623:{NFSU2_TR(0x589623);
__builtin_memmove((R+4),(R+24),4);
}
B589625:{NFSU2_TR(0x589625);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589629:{NFSU2_TR(0x589629);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58962eull));
TAIL_STATIC(0x581d90u,581);
}
B58962e:L58962e:{c.instructions+=6;NFSU2_TR(0x58962e);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589630:{NFSU2_TR(0x589630);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B589634:{NFSU2_TR(0x589634);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589635:{NFSU2_TR(0x589635);
__builtin_memmove((R+4),(R+24),4);
}
B589637:{NFSU2_TR(0x589637);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58963b:{NFSU2_TR(0x58963b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589640ull));
TAIL_STATIC(0x581d90u,581);
}
B589640:L589640:{c.instructions+=8;NFSU2_TR(0x589640);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B589644:{NFSU2_TR(0x589644);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589646:{NFSU2_TR(0x589646);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58964a:{NFSU2_TR(0x58964a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58964b:{NFSU2_TR(0x58964b);
__builtin_memmove((R+4),(R+24),4);
}
B58964d:{NFSU2_TR(0x58964d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589651:{NFSU2_TR(0x589651);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589655:{NFSU2_TR(0x589655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58965aull));
TAIL_STATIC(0x581d90u,581);
}
B58965a:L58965a:{c.instructions+=5;NFSU2_TR(0x58965a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B58965c:{NFSU2_TR(0x58965c);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B589661:{NFSU2_TR(0x589661);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589662:{NFSU2_TR(0x589662);
w4(R+4,u32(0x89cf48ull));
}
B589667:{NFSU2_TR(0x589667);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58966cull));
TAIL_STATIC(0x5f0220u,5f0);
}
B58966c:L58966c:{c.instructions+=3;NFSU2_TR(0x58966c);
__builtin_memmove((R+4),(R+0),4);
}
B58966e:{NFSU2_TR(0x58966e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B589670:{NFSU2_TR(0x589670);
if(r1(R+518)){{goto L5896e8;}}
}
B589672:L589672:{c.instructions+=5;NFSU2_TR(0x589672);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B589676:{NFSU2_TR(0x589676);
{u32 ea_=u32(r4(R+4)+u32(620u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B58967c:{NFSU2_TR(0x58967c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58967e:{NFSU2_TR(0x58967e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B589681:{NFSU2_TR(0x589681);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5896e8;}}
}
B589683:L589683:{c.instructions+=8;NFSU2_TR(0x589683);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B589687:{NFSU2_TR(0x589687);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589688:{NFSU2_TR(0x589688);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589689:{NFSU2_TR(0x589689);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58968a:{NFSU2_TR(0x58968a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x26cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589690:{NFSU2_TR(0x589690);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589691:{NFSU2_TR(0x589691);
w4(R+4,u32(0x89cf48ull));
}
B589696:{NFSU2_TR(0x589696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58969bull));
TAIL_STATIC(0x5f9840u,5f9);
}
B58969b:L58969b:{c.instructions+=2;NFSU2_TR(0x58969b);
w4(R+28,u32(0x8693c8ull));
}
B5896a0:{NFSU2_TR(0x5896a0);
w4(R+12,u32(0x5ull));
}
B5896a5:L5896a5:{c.instructions+=3;NFSU2_TR(0x5896a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5896a8:{NFSU2_TR(0x5896a8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5896ab:{NFSU2_TR(0x5896ab);
if(r1(R+518)){{goto L5896ca;}}
}
B5896ad:L5896ad:{c.instructions+=2;NFSU2_TR(0x5896ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5896af:{NFSU2_TR(0x5896af);
if(r1(R+518)){{goto L5896ca;}}
}
B5896b1:L5896b1:{c.instructions+=2;NFSU2_TR(0x5896b1);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5896b5:{NFSU2_TR(0x5896b5);
if(r1(R+518)){{goto L5896ca;}}
}
B5896b7:L5896b7:{c.instructions+=2;NFSU2_TR(0x5896b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5896ba:{NFSU2_TR(0x5896ba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5896ca;}}
}
B5896bc:L5896bc:{c.instructions+=5;NFSU2_TR(0x5896bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5896be:{NFSU2_TR(0x5896be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5896bf:{NFSU2_TR(0x5896bf);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5896c1:{NFSU2_TR(0x5896c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5896c2:{NFSU2_TR(0x5896c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5896c7ull));
TAIL_STATIC(0x586120u,586);
}
B5896c7:L5896c7:{c.instructions+=1;NFSU2_TR(0x5896c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5896ca:L5896ca:{c.instructions+=3;NFSU2_TR(0x5896ca);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B5896cd:{NFSU2_TR(0x5896cd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x869468ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x869468ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5896d3:{NFSU2_TR(0x5896d3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5896a5u);}goto L5896a5;}}
}
B5896d5:L5896d5:{c.instructions+=6;NFSU2_TR(0x5896d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5896d9:{NFSU2_TR(0x5896d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5896dd:{NFSU2_TR(0x5896dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5896de:{NFSU2_TR(0x5896de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5896df:{NFSU2_TR(0x5896df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5896e0:{NFSU2_TR(0x5896e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5896e5ull));
TAIL_STATIC(0x588220u,588);
}
B5896e5:L5896e5:{c.instructions+=1;NFSU2_TR(0x5896e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5896e8:L5896e8:{c.instructions+=2;NFSU2_TR(0x5896e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5896e9:{NFSU2_TR(0x5896e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5896ea:L5896ea:{c.instructions+=4;NFSU2_TR(0x5896ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5896eb:{NFSU2_TR(0x5896eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5896ec:{NFSU2_TR(0x5896ec);
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
B5896ef:{NFSU2_TR(0x5896ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5896f0:L5896f0:{c.instructions+=5;NFSU2_TR(0x5896f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5896f1:{NFSU2_TR(0x5896f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5896f5:{NFSU2_TR(0x5896f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5896f6:{NFSU2_TR(0x5896f6);
w4(R+4,u32(0x89cf48ull));
}
B5896fb:{NFSU2_TR(0x5896fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589700ull));
TAIL_STATIC(0x5ff000u,5ff);
}
B589700:L589700:{c.instructions+=6;NFSU2_TR(0x589700);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B589704:{NFSU2_TR(0x589704);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589706:{NFSU2_TR(0x589706);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589707:{NFSU2_TR(0x589707);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589709:{NFSU2_TR(0x589709);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58970a:{NFSU2_TR(0x58970a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58970full));
TAIL_STATIC(0x588350u,588);
}
B58970f:L58970f:{c.instructions+=3;NFSU2_TR(0x58970f);
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
B589712:{NFSU2_TR(0x589712);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B589713:{NFSU2_TR(0x589713);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589720:L589720:{c.instructions+=5;NFSU2_TR(0x589720);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589721:{NFSU2_TR(0x589721);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B589725:{NFSU2_TR(0x589725);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589726:{NFSU2_TR(0x589726);
w4(R+4,u32(0x89cf48ull));
}
B58972b:{NFSU2_TR(0x58972b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589730ull));
TAIL_STATIC(0x5f9bd0u,5f9);
}
B589730:L589730:{c.instructions+=6;NFSU2_TR(0x589730);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B589734:{NFSU2_TR(0x589734);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589736:{NFSU2_TR(0x589736);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589737:{NFSU2_TR(0x589737);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589739:{NFSU2_TR(0x589739);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58973a:{NFSU2_TR(0x58973a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58973full));
TAIL_STATIC(0x588350u,588);
}
B58973f:L58973f:{c.instructions+=3;NFSU2_TR(0x58973f);
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
B589742:{NFSU2_TR(0x589742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B589743:{NFSU2_TR(0x589743);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589750:L589750:{c.instructions+=10;NFSU2_TR(0x589750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B589756:{NFSU2_TR(0x589756);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B589758:{NFSU2_TR(0x589758);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58975a:{NFSU2_TR(0x58975a);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58975c:{NFSU2_TR(0x58975c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589760:{NFSU2_TR(0x589760);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B589764:{NFSU2_TR(0x589764);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58976b:{NFSU2_TR(0x58976b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589772:{NFSU2_TR(0x589772);
u8 U[5];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58977a:{NFSU2_TR(0x58977a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58977full));
TAIL_STATIC(0x581d00u,581);
}
B58977f:L58977f:{c.instructions+=5;NFSU2_TR(0x58977f);
u8 U[5];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B589787:{NFSU2_TR(0x589787);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589789:{NFSU2_TR(0x589789);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58978a:{NFSU2_TR(0x58978a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58978e:{NFSU2_TR(0x58978e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589793ull));
TAIL_STATIC(0x581d00u,581);
}
B589793:L589793:{c.instructions+=5;NFSU2_TR(0x589793);
u8 U[8];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58979a:{NFSU2_TR(0x58979a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58979c:{NFSU2_TR(0x58979c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58979d:{NFSU2_TR(0x58979d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5897a1:{NFSU2_TR(0x5897a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5897a6ull));
TAIL_STATIC(0x581d00u,581);
}
B5897a6:L5897a6:{c.instructions+=5;NFSU2_TR(0x5897a6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5897a8:{NFSU2_TR(0x5897a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5897ac:{NFSU2_TR(0x5897ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5897ad:{NFSU2_TR(0x5897ad);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5897af:{NFSU2_TR(0x5897af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5897b4ull));
TAIL_STATIC(0x5883a0u,588);
}
B5897b4:L5897b4:{c.instructions+=2;NFSU2_TR(0x5897b4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x418ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x418ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x418ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5897ba:{NFSU2_TR(0x5897ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5897c0:L5897c0:{c.instructions+=10;NFSU2_TR(0x5897c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B5897c6:{NFSU2_TR(0x5897c6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5897c8:{NFSU2_TR(0x5897c8);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5897ca:{NFSU2_TR(0x5897ca);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5897cc:{NFSU2_TR(0x5897cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5897d0:{NFSU2_TR(0x5897d0);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5897d4:{NFSU2_TR(0x5897d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5897db:{NFSU2_TR(0x5897db);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5897e2:{NFSU2_TR(0x5897e2);
u8 U[5];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5897ea:{NFSU2_TR(0x5897ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5897efull));
TAIL_STATIC(0x581d00u,581);
}
B5897ef:L5897ef:{c.instructions+=5;NFSU2_TR(0x5897ef);
u8 U[5];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5897f7:{NFSU2_TR(0x5897f7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5897f9:{NFSU2_TR(0x5897f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5897fa:{NFSU2_TR(0x5897fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5897fe:{NFSU2_TR(0x5897fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589803ull));
TAIL_STATIC(0x581d00u,581);
}
B589803:L589803:{c.instructions+=5;NFSU2_TR(0x589803);
u8 U[8];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58980a:{NFSU2_TR(0x58980a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58980c:{NFSU2_TR(0x58980c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58980d:{NFSU2_TR(0x58980d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589811:{NFSU2_TR(0x589811);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589816ull));
TAIL_STATIC(0x581d00u,581);
}
B589816:L589816:{c.instructions+=5;NFSU2_TR(0x589816);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589818:{NFSU2_TR(0x589818);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58981c:{NFSU2_TR(0x58981c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58981d:{NFSU2_TR(0x58981d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58981f:{NFSU2_TR(0x58981f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589824ull));
TAIL_STATIC(0x5883a0u,588);
}
B589824:L589824:{c.instructions+=2;NFSU2_TR(0x589824);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x418ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x418ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x418ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58982a:{NFSU2_TR(0x58982a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589830:L589830:{c.instructions+=10;NFSU2_TR(0x589830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B589836:{NFSU2_TR(0x589836);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B589838:{NFSU2_TR(0x589838);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58983a:{NFSU2_TR(0x58983a);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58983c:{NFSU2_TR(0x58983c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589840:{NFSU2_TR(0x589840);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B589844:{NFSU2_TR(0x589844);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58984b:{NFSU2_TR(0x58984b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589852:{NFSU2_TR(0x589852);
u8 U[5];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58985a:{NFSU2_TR(0x58985a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58985full));
TAIL_STATIC(0x581d00u,581);
}
B58985f:L58985f:{c.instructions+=5;NFSU2_TR(0x58985f);
w4(R+0,u32(m1(0x866a18)));
}
B589866:{NFSU2_TR(0x589866);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589868:{NFSU2_TR(0x589868);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589869:{NFSU2_TR(0x589869);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58986d:{NFSU2_TR(0x58986d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589872ull));
TAIL_STATIC(0x581d00u,581);
}
B589872:L589872:{c.instructions+=5;NFSU2_TR(0x589872);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589874:{NFSU2_TR(0x589874);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589878:{NFSU2_TR(0x589878);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589879:{NFSU2_TR(0x589879);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58987b:{NFSU2_TR(0x58987b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589880ull));
TAIL_STATIC(0x5883a0u,588);
}
B589880:L589880:{c.instructions+=2;NFSU2_TR(0x589880);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x418ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x418ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x418ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B589886:{NFSU2_TR(0x589886);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589890:L589890:{c.instructions+=10;NFSU2_TR(0x589890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B589896:{NFSU2_TR(0x589896);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B589898:{NFSU2_TR(0x589898);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58989a:{NFSU2_TR(0x58989a);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58989c:{NFSU2_TR(0x58989c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5898a0:{NFSU2_TR(0x5898a0);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5898a4:{NFSU2_TR(0x5898a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5898ab:{NFSU2_TR(0x5898ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5898b2:{NFSU2_TR(0x5898b2);
u8 U[5];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5898ba:{NFSU2_TR(0x5898ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5898bfull));
TAIL_STATIC(0x581d00u,581);
}
B5898bf:L5898bf:{c.instructions+=5;NFSU2_TR(0x5898bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5898c6:{NFSU2_TR(0x5898c6);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5898c8:{NFSU2_TR(0x5898c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5898c9:{NFSU2_TR(0x5898c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5898cd:{NFSU2_TR(0x5898cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5898d2ull));
TAIL_STATIC(0x581d00u,581);
}
B5898d2:L5898d2:{c.instructions+=5;NFSU2_TR(0x5898d2);
u8 U[5];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5898da:{NFSU2_TR(0x5898da);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5898dc:{NFSU2_TR(0x5898dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5898dd:{NFSU2_TR(0x5898dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5898e1:{NFSU2_TR(0x5898e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5898e6ull));
TAIL_STATIC(0x581d00u,581);
}
B5898e6:L5898e6:{c.instructions+=7;NFSU2_TR(0x5898e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5898ed:{NFSU2_TR(0x5898ed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5898ef:{NFSU2_TR(0x5898ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5898f3:{NFSU2_TR(0x5898f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5898f4:{NFSU2_TR(0x5898f4);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5898f6:{NFSU2_TR(0x5898f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5898f7:{NFSU2_TR(0x5898f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5898fcull));
TAIL_STATIC(0x588350u,588);
}
B5898fc:L5898fc:{c.instructions+=2;NFSU2_TR(0x5898fc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x41cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x41cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x41cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B589902:{NFSU2_TR(0x589902);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589910:L589910:{c.instructions+=11;NFSU2_TR(0x589910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B589916:{NFSU2_TR(0x589916);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B589918:{NFSU2_TR(0x589918);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58991a:{NFSU2_TR(0x58991a);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58991c:{NFSU2_TR(0x58991c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589920:{NFSU2_TR(0x589920);
s4(0x866a14,u32(0x3ull));
}
B58992a:{NFSU2_TR(0x58992a);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58992e:{NFSU2_TR(0x58992e);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589935:{NFSU2_TR(0x589935);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58993c:{NFSU2_TR(0x58993c);
u8 U[5];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B589944:{NFSU2_TR(0x589944);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589949ull));
TAIL_STATIC(0x581d00u,581);
}
B589949:L589949:{c.instructions+=4;NFSU2_TR(0x589949);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58994b:{NFSU2_TR(0x58994b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58994d:{NFSU2_TR(0x58994d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589951:{NFSU2_TR(0x589951);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589956ull));
TAIL_STATIC(0x581d00u,581);
}
B589956:L589956:{c.instructions+=5;NFSU2_TR(0x589956);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589958:{NFSU2_TR(0x589958);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58995c:{NFSU2_TR(0x58995c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58995d:{NFSU2_TR(0x58995d);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58995f:{NFSU2_TR(0x58995f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589964ull));
TAIL_STATIC(0x5883a0u,588);
}
B589964:L589964:{c.instructions+=2;NFSU2_TR(0x589964);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x418ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x418ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x418ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58996a:{NFSU2_TR(0x58996a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589970:L589970:{c.instructions+=11;NFSU2_TR(0x589970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B589976:{NFSU2_TR(0x589976);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B589978:{NFSU2_TR(0x589978);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58997a:{NFSU2_TR(0x58997a);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58997c:{NFSU2_TR(0x58997c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589980:{NFSU2_TR(0x589980);
s4(0x866a14,u32(0x4ull));
}
B58998a:{NFSU2_TR(0x58998a);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58998e:{NFSU2_TR(0x58998e);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589995:{NFSU2_TR(0x589995);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58999c:{NFSU2_TR(0x58999c);
u8 U[5];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5899a4:{NFSU2_TR(0x5899a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5899a9ull));
TAIL_STATIC(0x581d00u,581);
}
B5899a9:L5899a9:{c.instructions+=4;NFSU2_TR(0x5899a9);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5899ab:{NFSU2_TR(0x5899ab);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5899ad:{NFSU2_TR(0x5899ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5899b1:{NFSU2_TR(0x5899b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5899b6ull));
TAIL_STATIC(0x581d00u,581);
}
B5899b6:L5899b6:{c.instructions+=5;NFSU2_TR(0x5899b6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5899b8:{NFSU2_TR(0x5899b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5899bc:{NFSU2_TR(0x5899bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5899bd:{NFSU2_TR(0x5899bd);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5899bf:{NFSU2_TR(0x5899bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5899c4ull));
TAIL_STATIC(0x5883a0u,588);
}
B5899c4:L5899c4:{c.instructions+=2;NFSU2_TR(0x5899c4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x418ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x418ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x418ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5899ca:{NFSU2_TR(0x5899ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5899d0:L5899d0:{c.instructions+=11;NFSU2_TR(0x5899d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B5899d6:{NFSU2_TR(0x5899d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5899d8:{NFSU2_TR(0x5899d8);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5899da:{NFSU2_TR(0x5899da);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5899dc:{NFSU2_TR(0x5899dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5899e0:{NFSU2_TR(0x5899e0);
s4(0x866a14,u32(0x2ull));
}
B5899ea:{NFSU2_TR(0x5899ea);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5899ee:{NFSU2_TR(0x5899ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5899f5:{NFSU2_TR(0x5899f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5899fc:{NFSU2_TR(0x5899fc);
u8 U[5];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B589a04:{NFSU2_TR(0x589a04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589a09ull));
TAIL_STATIC(0x581d00u,581);
}
B589a09:L589a09:{c.instructions+=4;NFSU2_TR(0x589a09);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589a0b:{NFSU2_TR(0x589a0b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589a0d:{NFSU2_TR(0x589a0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589a11:{NFSU2_TR(0x589a11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589a16ull));
TAIL_STATIC(0x581d00u,581);
}
B589a16:L589a16:{c.instructions+=5;NFSU2_TR(0x589a16);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589a18:{NFSU2_TR(0x589a18);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B589a1c:{NFSU2_TR(0x589a1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589a1d:{NFSU2_TR(0x589a1d);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589a1f:{NFSU2_TR(0x589a1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589a24ull));
TAIL_STATIC(0x5883a0u,588);
}
B589a24:L589a24:{c.instructions+=2;NFSU2_TR(0x589a24);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x418ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x418ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x418ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B589a2a:{NFSU2_TR(0x589a2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589a30:L589a30:{c.instructions+=20;NFSU2_TR(0x589a30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589a32:{NFSU2_TR(0x589a32);
u8 U[4];
w4(U+0,u32(0x778a38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589a37:{NFSU2_TR(0x589a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B589a3d:{NFSU2_TR(0x589a3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589a3e:{NFSU2_TR(0x589a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589a45:{NFSU2_TR(0x589a45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B589a48:{NFSU2_TR(0x589a48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589a49:{NFSU2_TR(0x589a49);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589a4a:{NFSU2_TR(0x589a4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B589a4e:{NFSU2_TR(0x589a4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589a52:{NFSU2_TR(0x589a52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589a53:{NFSU2_TR(0x589a53);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589a57:{NFSU2_TR(0x589a57);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589a5b:{NFSU2_TR(0x589a5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B589a5f:{NFSU2_TR(0x589a5f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B589a63:{NFSU2_TR(0x589a63);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589a64:{NFSU2_TR(0x589a64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589a65:{NFSU2_TR(0x589a65);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589a67:{NFSU2_TR(0x589a67);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B589a6f:{NFSU2_TR(0x589a6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589a74ull));
TAIL_STATIC(0x587db0u,587);
}
B589a74:L589a74:{c.instructions+=5;NFSU2_TR(0x589a74);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B589a78:{NFSU2_TR(0x589a78);
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
B589a7b:{NFSU2_TR(0x589a7b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589a7f:{NFSU2_TR(0x589a7f);
__builtin_memmove((R+12),(R+28),4);
}
B589a81:{NFSU2_TR(0x589a81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589a86ull));
TAIL_STATIC(0x502fd0u,502);
}
B589a86:L589a86:{c.instructions+=3;NFSU2_TR(0x589a86);
__builtin_memmove((R+20),(R+0),4);
}
B589a88:{NFSU2_TR(0x589a88);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B589a8a:{NFSU2_TR(0x589a8a);
if(r1(R+518)){{goto L589ae3;}}
}
B589a8c:L589a8c:{c.instructions+=2;NFSU2_TR(0x589a8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589a8d:{NFSU2_TR(0x589a8d);
__builtin_memmove((R+4),(R+4),4);
}
B589a90:L589a90:{c.instructions+=1;NFSU2_TR(0x589a90);
w4(R+24,u32(0x8693c8ull));
}
B589a95:L589a95:{c.instructions+=3;NFSU2_TR(0x589a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B589a98:{NFSU2_TR(0x589a98);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B589a9b:{NFSU2_TR(0x589a9b);
if(r1(R+518)){{goto L589ab6;}}
}
B589a9d:L589a9d:{c.instructions+=2;NFSU2_TR(0x589a9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B589a9f:{NFSU2_TR(0x589a9f);
if(r1(R+518)){{goto L589ab6;}}
}
B589aa1:L589aa1:{c.instructions+=6;NFSU2_TR(0x589aa1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589aa3:{NFSU2_TR(0x589aa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B589aa6:{NFSU2_TR(0x589aa6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589aa7:{NFSU2_TR(0x589aa7);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589aa9:{NFSU2_TR(0x589aa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589aaa:{NFSU2_TR(0x589aaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589aafull));
TAIL_STATIC(0x586120u,586);
}
B589aaf:L589aaf:{c.instructions+=2;NFSU2_TR(0x589aaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B589ab3:{NFSU2_TR(0x589ab3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B589ab6:L589ab6:{c.instructions+=3;NFSU2_TR(0x589ab6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B589ab9:{NFSU2_TR(0x589ab9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x869468ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x869468ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B589abf:{NFSU2_TR(0x589abf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x589a95u);}goto L589a95;}}
}
B589ac1:L589ac1:{c.instructions+=6;NFSU2_TR(0x589ac1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B589ac3:{NFSU2_TR(0x589ac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B589ac5:{NFSU2_TR(0x589ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B589ac8:{NFSU2_TR(0x589ac8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B589aca:{NFSU2_TR(0x589aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589acd:{NFSU2_TR(0x589acd);
if(r1(R+518)){{goto L589ad8;}}
}
B589acf:L589acf:{c.instructions+=2;NFSU2_TR(0x589acf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589ad0:{NFSU2_TR(0x589ad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589ad5ull));
TAIL_STATIC(0x575630u,575);
}
B589ad5:L589ad5:{c.instructions+=1;NFSU2_TR(0x589ad5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B589ad8:L589ad8:{c.instructions+=4;NFSU2_TR(0x589ad8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B589adc:{NFSU2_TR(0x589adc);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B589ade:{NFSU2_TR(0x589ade);
__builtin_memmove((R+12),(R+28),4);
}
B589ae0:{NFSU2_TR(0x589ae0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x589a90u);}goto L589a90;}}
}
B589ae2:L589ae2:{c.instructions+=1;NFSU2_TR(0x589ae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B589ae3:L589ae3:{c.instructions+=4;NFSU2_TR(0x589ae3);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B589ae7:{NFSU2_TR(0x589ae7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B589ae9:{NFSU2_TR(0x589ae9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B589af1:{NFSU2_TR(0x589af1);
if(r1(R+518)){{goto L589b14;}}
}
B589af3:L589af3:{c.instructions+=7;NFSU2_TR(0x589af3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B589af5:{NFSU2_TR(0x589af5);
__builtin_memmove((R+4),(R+28),4);
}
B589af7:{NFSU2_TR(0x589af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B589afa:{NFSU2_TR(0x589afa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B589afc:{NFSU2_TR(0x589afc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589afd:{NFSU2_TR(0x589afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589b00:{NFSU2_TR(0x589b00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589b05ull));
TAIL_STATIC(0x575630u,575);
}
B589b05:L589b05:{c.instructions+=5;NFSU2_TR(0x589b05);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B589b09:{NFSU2_TR(0x589b09);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B589b0d:{NFSU2_TR(0x589b0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B589b10:{NFSU2_TR(0x589b10);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B589b12:{NFSU2_TR(0x589b12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x589af3u);}goto L589af3;}}
}
B589b14:L589b14:{c.instructions+=7;NFSU2_TR(0x589b14);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B589b18:{NFSU2_TR(0x589b18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B589b19:{NFSU2_TR(0x589b19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B589b1a:{NFSU2_TR(0x589b1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B589b1b:{NFSU2_TR(0x589b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589b22:{NFSU2_TR(0x589b22);
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
B589b25:{NFSU2_TR(0x589b25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589b30:L589b30:{c.instructions+=12;NFSU2_TR(0x589b30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x414ull))));
}
B589b36:{NFSU2_TR(0x589b36);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589b37:{NFSU2_TR(0x589b37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589b38:{NFSU2_TR(0x589b38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589b39:{NFSU2_TR(0x589b39);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589b3b:{NFSU2_TR(0x589b3b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589b3d:{NFSU2_TR(0x589b3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589b41:{NFSU2_TR(0x589b41);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B589b46:{NFSU2_TR(0x589b46);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B589b51:{NFSU2_TR(0x589b51);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B589b5c:{NFSU2_TR(0x589b5c);
u8 U[5];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B589b64:{NFSU2_TR(0x589b64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589b69ull));
TAIL_STATIC(0x581d00u,581);
}
B589b69:L589b69:{c.instructions+=5;NFSU2_TR(0x589b69);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B589b70:{NFSU2_TR(0x589b70);
{u32 ea_=u32(r4(R+20)+u32(1024u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B589b76:{NFSU2_TR(0x589b76);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B589b7c:{NFSU2_TR(0x589b7c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B589b80:{NFSU2_TR(0x589b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589b85ull));
TAIL_STATIC(0x75bed4u,75b);
}
B589b85:L589b85:{c.instructions+=6;NFSU2_TR(0x589b85);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589b89:{NFSU2_TR(0x589b89);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B589b8d:{NFSU2_TR(0x589b8d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B589b91:{NFSU2_TR(0x589b91);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B589b93:{NFSU2_TR(0x589b93);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B589b96:{NFSU2_TR(0x589b96);
if(r1(R+514)){{goto L589b9e;}}
}
B589b98:L589b98:{c.instructions+=1;NFSU2_TR(0x589b98);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B589b9e:L589b9e:{c.instructions+=2;NFSU2_TR(0x589b9e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B589ba0:{NFSU2_TR(0x589ba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589ba5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B589ba5:L589ba5:{c.instructions+=3;NFSU2_TR(0x589ba5);
__builtin_memmove((R+28),(R+0),4);
}
B589ba7:{NFSU2_TR(0x589ba7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B589ba9:{NFSU2_TR(0x589ba9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L589bc5;}}
}
B589bab:L589bab:{c.instructions+=1;NFSU2_TR(0x589bab);
{goto L589bb0;}
}
B589bb0:L589bb0:{c.instructions+=5;NFSU2_TR(0x589bb0);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B589bb4:{NFSU2_TR(0x589bb4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589bb6:{NFSU2_TR(0x589bb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589bb7:{NFSU2_TR(0x589bb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589bbb:{NFSU2_TR(0x589bbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589bc0ull));
TAIL_STATIC(0x581d00u,581);
}
B589bc0:L589bc0:{c.instructions+=3;NFSU2_TR(0x589bc0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B589bc1:{NFSU2_TR(0x589bc1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B589bc3:{NFSU2_TR(0x589bc3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x589bb0u);}goto L589bb0;}}
}
B589bc5:L589bc5:{c.instructions+=5;NFSU2_TR(0x589bc5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589bc7:{NFSU2_TR(0x589bc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589bcb:{NFSU2_TR(0x589bcb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589bcc:{NFSU2_TR(0x589bcc);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589bce:{NFSU2_TR(0x589bce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589bd3ull));
TAIL_STATIC(0x5883a0u,588);
}
B589bd3:L589bd3:{c.instructions+=6;NFSU2_TR(0x589bd3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B589bd6:{NFSU2_TR(0x589bd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B589bd7:{NFSU2_TR(0x589bd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B589bd8:{NFSU2_TR(0x589bd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B589bd9:{NFSU2_TR(0x589bd9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B589bdf:{NFSU2_TR(0x589bdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589be0:L589be0:{c.instructions+=12;NFSU2_TR(0x589be0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x414ull))));
}
B589be6:{NFSU2_TR(0x589be6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589be7:{NFSU2_TR(0x589be7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589be8:{NFSU2_TR(0x589be8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589be9:{NFSU2_TR(0x589be9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589beb:{NFSU2_TR(0x589beb);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589bed:{NFSU2_TR(0x589bed);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589bf1:{NFSU2_TR(0x589bf1);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B589bf6:{NFSU2_TR(0x589bf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B589c01:{NFSU2_TR(0x589c01);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B589c0c:{NFSU2_TR(0x589c0c);
u8 U[5];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B589c14:{NFSU2_TR(0x589c14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589c19ull));
TAIL_STATIC(0x581d00u,581);
}
B589c19:L589c19:{c.instructions+=5;NFSU2_TR(0x589c19);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B589c20:{NFSU2_TR(0x589c20);
{u32 ea_=u32(r4(R+20)+u32(1024u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B589c26:{NFSU2_TR(0x589c26);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B589c2c:{NFSU2_TR(0x589c2c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B589c30:{NFSU2_TR(0x589c30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589c35ull));
TAIL_STATIC(0x75bed4u,75b);
}
B589c35:L589c35:{c.instructions+=6;NFSU2_TR(0x589c35);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589c39:{NFSU2_TR(0x589c39);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B589c3d:{NFSU2_TR(0x589c3d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B589c41:{NFSU2_TR(0x589c41);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B589c43:{NFSU2_TR(0x589c43);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B589c46:{NFSU2_TR(0x589c46);
if(r1(R+514)){{goto L589c4e;}}
}
B589c48:L589c48:{c.instructions+=1;NFSU2_TR(0x589c48);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B589c4e:L589c4e:{c.instructions+=2;NFSU2_TR(0x589c4e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B589c50:{NFSU2_TR(0x589c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589c55ull));
TAIL_STATIC(0x75bed4u,75b);
}
B589c55:L589c55:{c.instructions+=3;NFSU2_TR(0x589c55);
__builtin_memmove((R+28),(R+0),4);
}
B589c57:{NFSU2_TR(0x589c57);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B589c59:{NFSU2_TR(0x589c59);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L589c75;}}
}
B589c5b:L589c5b:{c.instructions+=1;NFSU2_TR(0x589c5b);
{goto L589c60;}
}
B589c60:L589c60:{c.instructions+=5;NFSU2_TR(0x589c60);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B589c64:{NFSU2_TR(0x589c64);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589c66:{NFSU2_TR(0x589c66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589c67:{NFSU2_TR(0x589c67);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589c6b:{NFSU2_TR(0x589c6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589c70ull));
TAIL_STATIC(0x581d00u,581);
}
B589c70:L589c70:{c.instructions+=3;NFSU2_TR(0x589c70);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B589c71:{NFSU2_TR(0x589c71);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B589c73:{NFSU2_TR(0x589c73);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x589c60u);}goto L589c60;}}
}
B589c75:L589c75:{c.instructions+=5;NFSU2_TR(0x589c75);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589c77:{NFSU2_TR(0x589c77);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589c7b:{NFSU2_TR(0x589c7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589c7c:{NFSU2_TR(0x589c7c);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589c7e:{NFSU2_TR(0x589c7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589c83ull));
TAIL_STATIC(0x5883a0u,588);
}
B589c83:L589c83:{c.instructions+=6;NFSU2_TR(0x589c83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B589c86:{NFSU2_TR(0x589c86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B589c87:{NFSU2_TR(0x589c87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B589c88:{NFSU2_TR(0x589c88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B589c89:{NFSU2_TR(0x589c89);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B589c8f:{NFSU2_TR(0x589c8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589c90:L589c90:{c.instructions+=12;NFSU2_TR(0x589c90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x414ull))));
}
B589c96:{NFSU2_TR(0x589c96);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589c97:{NFSU2_TR(0x589c97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589c98:{NFSU2_TR(0x589c98);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589c99:{NFSU2_TR(0x589c99);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589c9b:{NFSU2_TR(0x589c9b);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589c9d:{NFSU2_TR(0x589c9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589ca1:{NFSU2_TR(0x589ca1);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B589ca6:{NFSU2_TR(0x589ca6);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B589cb1:{NFSU2_TR(0x589cb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B589cbc:{NFSU2_TR(0x589cbc);
u8 U[5];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B589cc4:{NFSU2_TR(0x589cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589cc9ull));
TAIL_STATIC(0x581d00u,581);
}
B589cc9:L589cc9:{c.instructions+=7;NFSU2_TR(0x589cc9);
__builtin_memmove((R+0),gp(0x866a1c),4);
}
B589cce:{NFSU2_TR(0x589cce);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B589ccf:{NFSU2_TR(0x589ccf);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589cd1:{NFSU2_TR(0x589cd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589cd2:{NFSU2_TR(0x589cd2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589cd6:{NFSU2_TR(0x589cd6);
__builtin_memmove(gp(0x866a1c),(R+0),4);
}
B589cdb:{NFSU2_TR(0x589cdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589ce0ull));
TAIL_STATIC(0x581d00u,581);
}
B589ce0:L589ce0:{c.instructions+=5;NFSU2_TR(0x589ce0);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B589ce7:{NFSU2_TR(0x589ce7);
{u32 ea_=u32(r4(R+20)+u32(1024u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B589ced:{NFSU2_TR(0x589ced);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B589cf3:{NFSU2_TR(0x589cf3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B589cf7:{NFSU2_TR(0x589cf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589cfcull));
TAIL_STATIC(0x75bed4u,75b);
}
B589cfc:L589cfc:{c.instructions+=6;NFSU2_TR(0x589cfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589d00:{NFSU2_TR(0x589d00);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B589d04:{NFSU2_TR(0x589d04);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B589d08:{NFSU2_TR(0x589d08);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B589d0a:{NFSU2_TR(0x589d0a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B589d0d:{NFSU2_TR(0x589d0d);
if(r1(R+514)){{goto L589d15;}}
}
B589d0f:L589d0f:{c.instructions+=1;NFSU2_TR(0x589d0f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B589d15:L589d15:{c.instructions+=2;NFSU2_TR(0x589d15);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B589d17:{NFSU2_TR(0x589d17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589d1cull));
TAIL_STATIC(0x75bed4u,75b);
}
B589d1c:L589d1c:{c.instructions+=3;NFSU2_TR(0x589d1c);
__builtin_memmove((R+28),(R+0),4);
}
B589d1e:{NFSU2_TR(0x589d1e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B589d20:{NFSU2_TR(0x589d20);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L589d37;}}
}
B589d22:L589d22:{c.instructions+=5;NFSU2_TR(0x589d22);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B589d26:{NFSU2_TR(0x589d26);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589d28:{NFSU2_TR(0x589d28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589d29:{NFSU2_TR(0x589d29);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589d2d:{NFSU2_TR(0x589d2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589d32ull));
TAIL_STATIC(0x581d00u,581);
}
B589d32:L589d32:{c.instructions+=3;NFSU2_TR(0x589d32);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B589d33:{NFSU2_TR(0x589d33);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B589d35:{NFSU2_TR(0x589d35);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x589d22u);}goto L589d22;}}
}
B589d37:L589d37:{c.instructions+=5;NFSU2_TR(0x589d37);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589d39:{NFSU2_TR(0x589d39);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589d3d:{NFSU2_TR(0x589d3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589d3e:{NFSU2_TR(0x589d3e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589d40:{NFSU2_TR(0x589d40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589d45ull));
TAIL_STATIC(0x5883a0u,588);
}
B589d45:L589d45:{c.instructions+=6;NFSU2_TR(0x589d45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B589d48:{NFSU2_TR(0x589d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B589d49:{NFSU2_TR(0x589d49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B589d4a:{NFSU2_TR(0x589d4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B589d4b:{NFSU2_TR(0x589d4b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B589d51:{NFSU2_TR(0x589d51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589d60:L589d60:{c.instructions+=14;NFSU2_TR(0x589d60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589d61:{NFSU2_TR(0x589d61);
__builtin_memmove((R+20),(R+16),4);
}
B589d63:{NFSU2_TR(0x589d63);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B589d66:{NFSU2_TR(0x589d66);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589d68:{NFSU2_TR(0x589d68);
u8 U[4];
w4(U+0,u32(0x7789fbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589d6d:{NFSU2_TR(0x589d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B589d73:{NFSU2_TR(0x589d73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589d74:{NFSU2_TR(0x589d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589d7b:{NFSU2_TR(0x589d7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x420ull))));
}
B589d81:{NFSU2_TR(0x589d81);
u8 U[2];
__builtin_memmove((U+0),gp(0x7fbec8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B589d88:{NFSU2_TR(0x589d88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589d89:{NFSU2_TR(0x589d89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589d8a:{NFSU2_TR(0x589d8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589d8b:{NFSU2_TR(0x589d8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L589da2;}}
}
B589d8d:L589d8d:{c.instructions+=4;NFSU2_TR(0x589d8d);
w4(R+4,u32(0x6ull));
}
B589d92:{NFSU2_TR(0x589d92);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B589d94:{NFSU2_TR(0x589d94);
w4(R+28,u32(0x86a36cull));
}
B589d99:{NFSU2_TR(0x589d99);
s1(0x7fbec8,u8(0x0ull));
}
B589da0:L589da0:{c.instructions+=1;NFSU2_TR(0x589da0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L589da2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x589da0u);}goto L589da0;}
}
B589da2:L589da2:{c.instructions+=5;NFSU2_TR(0x589da2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B589da5:{NFSU2_TR(0x589da5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86a36cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B589dac:{NFSU2_TR(0x589dac);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B589dae:{NFSU2_TR(0x589dae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B589db0:{NFSU2_TR(0x589db0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L589dd0;}}
}
B589db2:L589db2:{c.instructions+=2;NFSU2_TR(0x589db2);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589db4:{NFSU2_TR(0x589db4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589db9ull));
TAIL_STATIC(0x575620u,575);
}
B589db9:L589db9:{c.instructions+=3;NFSU2_TR(0x589db9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B589dbc:{NFSU2_TR(0x589dbc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B589dbe:{NFSU2_TR(0x589dbe);
if(r1(R+518)){{goto L589dc7;}}
}
B589dc0:L589dc0:{c.instructions+=3;NFSU2_TR(0x589dc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B589dc2:{NFSU2_TR(0x589dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589dc5:{NFSU2_TR(0x589dc5);
{goto L589dc9;}
}
B589dc7:L589dc7:{c.instructions+=1;NFSU2_TR(0x589dc7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B589dc9:L589dc9:{c.instructions+=1;NFSU2_TR(0x589dc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86a36cull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B589dd0:L589dd0:{c.instructions+=5;NFSU2_TR(0x589dd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86a36cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B589dd7:{NFSU2_TR(0x589dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B589dda:{NFSU2_TR(0x589dda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589ddb:{NFSU2_TR(0x589ddb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589ddc:{NFSU2_TR(0x589ddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589de1ull));
TAIL_STATIC(0x585e80u,585);
}
B589de1:L589de1:{c.instructions+=3;NFSU2_TR(0x589de1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B589de4:{NFSU2_TR(0x589de4);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B589de6:{NFSU2_TR(0x589de6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L589f18;}}
}
B589dec:L589dec:{c.instructions+=9;NFSU2_TR(0x589dec);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86a36cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B589df3:{NFSU2_TR(0x589df3);
u8 U[5];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B589dfa:{NFSU2_TR(0x589dfa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589dfb:{NFSU2_TR(0x589dfb);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B589dff:{NFSU2_TR(0x589dff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589e00:{NFSU2_TR(0x589e00);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B589e05:{NFSU2_TR(0x589e05);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589e0c:{NFSU2_TR(0x589e0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589e13:{NFSU2_TR(0x589e13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589e18ull));
TAIL_STATIC(0x588010u,588);
}
B589e18:L589e18:{c.instructions+=5;NFSU2_TR(0x589e18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B589e1b:{NFSU2_TR(0x589e1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589e1f:{NFSU2_TR(0x589e1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589e20:{NFSU2_TR(0x589e20);
w4(R+4,u32(0x89cf48ull));
}
B589e25:{NFSU2_TR(0x589e25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589e2aull));
TAIL_STATIC(0x609b80u,609);
}
B589e2a:L589e2a:{c.instructions+=3;NFSU2_TR(0x589e2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86a36cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B589e31:{NFSU2_TR(0x589e31);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B589e33:{NFSU2_TR(0x589e33);
if(r1(R+518)){{goto L589e62;}}
}
B589e35:L589e35:{c.instructions+=3;NFSU2_TR(0x589e35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B589e37:{NFSU2_TR(0x589e37);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B589e39:{NFSU2_TR(0x589e39);
if(r1(R+518)){{goto L589e59;}}
}
B589e3b:L589e3b:{c.instructions+=1;NFSU2_TR(0x589e3b);
{goto L589e40;}
}
B589e40:L589e40:{c.instructions+=6;NFSU2_TR(0x589e40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B589e42:{NFSU2_TR(0x589e42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B589e45:{NFSU2_TR(0x589e45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B589e47:{NFSU2_TR(0x589e47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589e48:{NFSU2_TR(0x589e48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589e4b:{NFSU2_TR(0x589e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589e50ull));
TAIL_STATIC(0x575630u,575);
}
B589e50:L589e50:{c.instructions+=4;NFSU2_TR(0x589e50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B589e52:{NFSU2_TR(0x589e52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B589e55:{NFSU2_TR(0x589e55);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B589e57:{NFSU2_TR(0x589e57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x589e40u);}goto L589e40;}}
}
B589e59:L589e59:{c.instructions+=2;NFSU2_TR(0x589e59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589e5a:{NFSU2_TR(0x589e5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589e5full));
TAIL_STATIC(0x575630u,575);
}
B589e5f:L589e5f:{c.instructions+=1;NFSU2_TR(0x589e5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B589e62:L589e62:{c.instructions+=13;NFSU2_TR(0x589e62);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B589e66:{NFSU2_TR(0x589e66);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B589e6a:{NFSU2_TR(0x589e6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86a36cull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B589e71:{NFSU2_TR(0x589e71);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589e75:{NFSU2_TR(0x589e75);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589e79:{NFSU2_TR(0x589e79);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589e7d:{NFSU2_TR(0x589e7d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589e7e:{NFSU2_TR(0x589e7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B589e82:{NFSU2_TR(0x589e82);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589e83:{NFSU2_TR(0x589e83);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589e85:{NFSU2_TR(0x589e85);
u8 U[8];
w4(U+0,u32(u32(u32(0x440ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589e8c:{NFSU2_TR(0x589e8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589e93:{NFSU2_TR(0x589e93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589e98ull));
TAIL_STATIC(0x587db0u,587);
}
B589e98:L589e98:{c.instructions+=4;NFSU2_TR(0x589e98);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B589e9c:{NFSU2_TR(0x589e9c);
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
B589e9f:{NFSU2_TR(0x589e9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589ea3:{NFSU2_TR(0x589ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589ea8ull));
TAIL_STATIC(0x502fd0u,502);
}
B589ea8:L589ea8:{c.instructions+=3;NFSU2_TR(0x589ea8);
__builtin_memmove((R+12),(R+0),4);
}
B589eaa:{NFSU2_TR(0x589eaa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B589eac:{NFSU2_TR(0x589eac);
if(r1(R+518)){{goto L589ee4;}}
}
B589eae:L589eae:{c.instructions+=1;NFSU2_TR(0x589eae);
__builtin_memmove((R+28),(R+28),4);
}
B589eb0:L589eb0:{c.instructions+=6;NFSU2_TR(0x589eb0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589eb2:{NFSU2_TR(0x589eb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B589eb5:{NFSU2_TR(0x589eb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589eb6:{NFSU2_TR(0x589eb6);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589eb8:{NFSU2_TR(0x589eb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589eb9:{NFSU2_TR(0x589eb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589ebeull));
TAIL_STATIC(0x588350u,588);
}
B589ebe:L589ebe:{c.instructions+=8;NFSU2_TR(0x589ebe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B589ec2:{NFSU2_TR(0x589ec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B589ec4:{NFSU2_TR(0x589ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B589ec7:{NFSU2_TR(0x589ec7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B589eca:{NFSU2_TR(0x589eca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B589ecc:{NFSU2_TR(0x589ecc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B589ece:{NFSU2_TR(0x589ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589ed1:{NFSU2_TR(0x589ed1);
if(r1(R+518)){{goto L589edc;}}
}
B589ed3:L589ed3:{c.instructions+=2;NFSU2_TR(0x589ed3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589ed4:{NFSU2_TR(0x589ed4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589ed9ull));
TAIL_STATIC(0x575630u,575);
}
B589ed9:L589ed9:{c.instructions+=1;NFSU2_TR(0x589ed9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B589edc:L589edc:{c.instructions+=3;NFSU2_TR(0x589edc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B589ee0:{NFSU2_TR(0x589ee0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B589ee2:{NFSU2_TR(0x589ee2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x589eb0u);}goto L589eb0;}}
}
B589ee4:L589ee4:{c.instructions+=4;NFSU2_TR(0x589ee4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589ee8:{NFSU2_TR(0x589ee8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B589eea:{NFSU2_TR(0x589eea);
u8 U[8];
w4(U+0,u32(u32(u32(0x434ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B589ef5:{NFSU2_TR(0x589ef5);
if(r1(R+518)){{goto L589f18;}}
}
B589ef7:L589ef7:{c.instructions+=7;NFSU2_TR(0x589ef7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B589ef9:{NFSU2_TR(0x589ef9);
__builtin_memmove((R+4),(R+24),4);
}
B589efb:{NFSU2_TR(0x589efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B589efe:{NFSU2_TR(0x589efe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B589f00:{NFSU2_TR(0x589f00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589f01:{NFSU2_TR(0x589f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589f04:{NFSU2_TR(0x589f04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589f09ull));
TAIL_STATIC(0x575630u,575);
}
B589f09:L589f09:{c.instructions+=5;NFSU2_TR(0x589f09);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B589f0d:{NFSU2_TR(0x589f0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B589f11:{NFSU2_TR(0x589f11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B589f14:{NFSU2_TR(0x589f14);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B589f16:{NFSU2_TR(0x589f16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x589ef7u);}goto L589ef7;}}
}
B589f18:L589f18:{c.instructions+=8;NFSU2_TR(0x589f18);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B589f1f:{NFSU2_TR(0x589f1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B589f20:{NFSU2_TR(0x589f20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B589f21:{NFSU2_TR(0x589f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589f28:{NFSU2_TR(0x589f28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B589f29:{NFSU2_TR(0x589f29);
__builtin_memmove((R+16),(R+20),4);
}
B589f2b:{NFSU2_TR(0x589f2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B589f2c:{NFSU2_TR(0x589f2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589f30:L589f30:{c.instructions+=6;NFSU2_TR(0x589f30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B589f36:{NFSU2_TR(0x589f36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589f37:{NFSU2_TR(0x589f37);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B589f3e:{NFSU2_TR(0x589f3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589f3f:{NFSU2_TR(0x589f3f);
w4(R+4,u32(0x89cf48ull));
}
B589f44:{NFSU2_TR(0x589f44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589f49ull));
TAIL_STATIC(0x5f07e0u,5f0);
}
B589f49:L589f49:{c.instructions+=9;NFSU2_TR(0x589f49);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B589f4b:{NFSU2_TR(0x589f4b);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589f4d:{NFSU2_TR(0x589f4d);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589f4f:{NFSU2_TR(0x589f4f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589f53:{NFSU2_TR(0x589f53);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B589f57:{NFSU2_TR(0x589f57);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589f5e:{NFSU2_TR(0x589f5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589f65:{NFSU2_TR(0x589f65);
u8 U[5];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B589f6d:{NFSU2_TR(0x589f6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589f72ull));
TAIL_STATIC(0x581d00u,581);
}
B589f72:L589f72:{c.instructions+=4;NFSU2_TR(0x589f72);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589f74:{NFSU2_TR(0x589f74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589f75:{NFSU2_TR(0x589f75);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589f79:{NFSU2_TR(0x589f79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589f7eull));
TAIL_STATIC(0x581d00u,581);
}
B589f7e:L589f7e:{c.instructions+=7;NFSU2_TR(0x589f7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B589f85:{NFSU2_TR(0x589f85);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589f87:{NFSU2_TR(0x589f87);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B589f8b:{NFSU2_TR(0x589f8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589f8c:{NFSU2_TR(0x589f8c);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589f8e:{NFSU2_TR(0x589f8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589f8f:{NFSU2_TR(0x589f8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589f94ull));
TAIL_STATIC(0x588350u,588);
}
B589f94:L589f94:{c.instructions+=4;NFSU2_TR(0x589f94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B589f97:{NFSU2_TR(0x589f97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B589f98:{NFSU2_TR(0x589f98);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B589f9e:{NFSU2_TR(0x589f9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B589fa0:L589fa0:{c.instructions+=22;NFSU2_TR(0x589fa0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589fa1:{NFSU2_TR(0x589fa1);
__builtin_memmove((R+20),(R+16),4);
}
B589fa3:{NFSU2_TR(0x589fa3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B589fa6:{NFSU2_TR(0x589fa6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589fa8:{NFSU2_TR(0x589fa8);
u8 U[4];
w4(U+0,u32(0x7789fbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589fad:{NFSU2_TR(0x589fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B589fb3:{NFSU2_TR(0x589fb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589fb4:{NFSU2_TR(0x589fb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589fbb:{NFSU2_TR(0x589fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x420ull))));
}
B589fc1:{NFSU2_TR(0x589fc1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589fc2:{NFSU2_TR(0x589fc2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589fc3:{NFSU2_TR(0x589fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B589fc6:{NFSU2_TR(0x589fc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589fc7:{NFSU2_TR(0x589fc7);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589fc9:{NFSU2_TR(0x589fc9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B589fcb:{NFSU2_TR(0x589fcb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589fcc:{NFSU2_TR(0x589fcc);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B589fd0:{NFSU2_TR(0x589fd0);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B589fd5:{NFSU2_TR(0x589fd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589fdc:{NFSU2_TR(0x589fdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B589fe3:{NFSU2_TR(0x589fe3);
u8 U[5];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B589feb:{NFSU2_TR(0x589feb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589ff0ull));
TAIL_STATIC(0x581d00u,581);
}
B589ff0:L589ff0:{c.instructions+=5;NFSU2_TR(0x589ff0);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B589ff4:{NFSU2_TR(0x589ff4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589ff5:{NFSU2_TR(0x589ff5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B589ff6:{NFSU2_TR(0x589ff6);
w4(R+4,u32(0x89cf48ull));
}
B589ffb:{NFSU2_TR(0x589ffb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a000ull));
TAIL_STATIC(0x5fe570u,5fe);
}
XIT:NFSU2_TR_EXIT(0x589,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
