#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40b(u8* __restrict R,Cpu& c);
u32 body_42b(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_594(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f7(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_5fc(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_602(u8* __restrict R,Cpu& c);
u32 body_605(u8* __restrict R,Cpu& c);
u32 body_606(u8* __restrict R,Cpu& c);
u32 body_608(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x607,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x607,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_607(u8* __restrict R,Cpu& c);
u32 page_607(Cpu& c){return body_607(c.regs.data(),c);}
__attribute__((noinline)) u32 body_607(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x607000:goto L607000;
case 0x607002:goto L607002;
case 0x607008:c.instructions+=4;goto B607008;
case 0x60700b:c.instructions+=3;goto B60700b;
case 0x60700e:c.instructions+=2;goto B60700e;
case 0x607014:c.instructions+=1;goto B607014;
case 0x607017:goto L607017;
case 0x60701d:c.instructions+=2;goto B60701d;
case 0x60701f:c.instructions+=1;goto B60701f;
case 0x607021:goto L607021;
case 0x607026:goto L607026;
case 0x60702c:c.instructions+=2;goto B60702c;
case 0x60702e:c.instructions+=1;goto B60702e;
case 0x607030:goto L607030;
case 0x607035:goto L607035;
case 0x607038:c.instructions+=3;goto B607038;
case 0x60703c:c.instructions+=2;goto B60703c;
case 0x60703e:c.instructions+=1;goto B60703e;
case 0x607044:goto L607044;
case 0x607046:c.instructions+=1;goto B607046;
case 0x60704b:goto L60704b;
case 0x607051:c.instructions+=4;goto B607051;
case 0x607054:c.instructions+=3;goto B607054;
case 0x60705a:c.instructions+=2;goto B60705a;
case 0x60705e:c.instructions+=1;goto B60705e;
case 0x607060:goto L607060;
case 0x607063:c.instructions+=1;goto B607063;
case 0x607065:goto L607065;
case 0x607068:c.instructions+=3;goto B607068;
case 0x60706d:c.instructions+=2;goto B60706d;
case 0x607070:c.instructions+=1;goto B607070;
case 0x607072:goto L607072;
case 0x607074:c.instructions+=1;goto B607074;
case 0x607076:goto L607076;
case 0x60707d:c.instructions+=1;goto B60707d;
case 0x60707f:goto L60707f;
case 0x607084:c.instructions+=2;goto B607084;
case 0x607086:c.instructions+=1;goto B607086;
case 0x607088:goto L607088;
case 0x60708a:c.instructions+=1;goto B60708a;
case 0x60708c:goto L60708c;
case 0x607093:c.instructions+=1;goto B607093;
case 0x607095:goto L607095;
case 0x60709a:c.instructions+=1;goto B60709a;
case 0x60709c:goto L60709c;
case 0x6070a1:goto L6070a1;
case 0x6070a6:c.instructions+=4;goto B6070a6;
case 0x6070ac:c.instructions+=3;goto B6070ac;
case 0x6070af:c.instructions+=2;goto B6070af;
case 0x6070b4:c.instructions+=1;goto B6070b4;
case 0x6070b6:goto L6070b6;
case 0x6070bd:c.instructions+=1;goto B6070bd;
case 0x6070bf:goto L6070bf;
case 0x6070c1:c.instructions+=1;goto B6070c1;
case 0x6070c3:goto L6070c3;
case 0x6070c5:c.instructions+=1;goto B6070c5;
case 0x6070c7:goto L6070c7;
case 0x6070ca:c.instructions+=1;goto B6070ca;
case 0x6070cc:goto L6070cc;
case 0x6070cf:c.instructions+=1;goto B6070cf;
case 0x6070d1:goto L6070d1;
case 0x6070d3:goto L6070d3;
case 0x6070d9:c.instructions+=2;goto B6070d9;
case 0x6070db:c.instructions+=1;goto B6070db;
case 0x6070dd:goto L6070dd;
case 0x6070df:c.instructions+=1;goto B6070df;
case 0x6070e1:goto L6070e1;
case 0x6070e3:c.instructions+=1;goto B6070e3;
case 0x6070e5:goto L6070e5;
case 0x6070e7:c.instructions+=1;goto B6070e7;
case 0x6070e9:goto L6070e9;
case 0x6070ee:goto L6070ee;
case 0x6070f0:c.instructions+=5;goto B6070f0;
case 0x6070f2:c.instructions+=4;goto B6070f2;
case 0x6070f4:c.instructions+=3;goto B6070f4;
case 0x6070f7:c.instructions+=2;goto B6070f7;
case 0x6070f8:c.instructions+=1;goto B6070f8;
case 0x6070fd:goto L6070fd;
case 0x6070ff:c.instructions+=2;goto B6070ff;
case 0x607101:c.instructions+=1;goto B607101;
case 0x607106:goto L607106;
case 0x607108:goto L607108;
case 0x60710c:goto L60710c;
case 0x607110:c.instructions+=1;goto B607110;
case 0x607112:goto L607112;
case 0x607115:c.instructions+=1;goto B607115;
case 0x60711a:goto L60711a;
case 0x60711e:c.instructions+=2;goto B60711e;
case 0x607120:c.instructions+=1;goto B607120;
case 0x607122:goto L607122;
case 0x607128:c.instructions+=5;goto B607128;
case 0x60712e:c.instructions+=4;goto B60712e;
case 0x607134:c.instructions+=3;goto B607134;
case 0x60713a:c.instructions+=2;goto B60713a;
case 0x607141:c.instructions+=1;goto B607141;
case 0x607148:goto L607148;
case 0x60714d:c.instructions+=2;goto B60714d;
case 0x60714f:c.instructions+=1;goto B60714f;
case 0x607151:goto L607151;
case 0x607153:c.instructions+=1;goto B607153;
case 0x607155:goto L607155;
case 0x607157:c.instructions+=1;goto B607157;
case 0x60715c:goto L60715c;
case 0x60715d:c.instructions+=5;goto B60715d;
case 0x60715e:c.instructions+=4;goto B60715e;
case 0x60715f:c.instructions+=3;goto B60715f;
case 0x607160:c.instructions+=2;goto B607160;
case 0x607161:c.instructions+=1;goto B607161;
case 0x607180:goto L607180;
case 0x607185:c.instructions+=7;goto B607185;
case 0x607188:c.instructions+=6;goto B607188;
case 0x60718b:c.instructions+=5;goto B60718b;
case 0x60718c:c.instructions+=4;goto B60718c;
case 0x60718d:c.instructions+=3;goto B60718d;
case 0x60718e:c.instructions+=2;goto B60718e;
case 0x607190:c.instructions+=1;goto B607190;
case 0x607192:goto L607192;
case 0x607197:c.instructions+=1;goto B607197;
case 0x60719c:goto L60719c;
case 0x60719e:c.instructions+=6;goto B60719e;
case 0x6071a8:c.instructions+=5;goto B6071a8;
case 0x6071ae:c.instructions+=4;goto B6071ae;
case 0x6071b3:c.instructions+=3;goto B6071b3;
case 0x6071b5:c.instructions+=2;goto B6071b5;
case 0x6071bb:c.instructions+=1;goto B6071bb;
case 0x6071bd:goto L6071bd;
case 0x6071c3:c.instructions+=1;goto B6071c3;
case 0x6071c5:goto L6071c5;
case 0x6071cb:c.instructions+=1;goto B6071cb;
case 0x6071cd:goto L6071cd;
case 0x6071d2:c.instructions+=2;goto B6071d2;
case 0x6071d5:c.instructions+=1;goto B6071d5;
case 0x6071db:goto L6071db;
case 0x6071dd:c.instructions+=1;goto B6071dd;
case 0x6071e2:goto L6071e2;
case 0x6071e7:c.instructions+=7;goto B6071e7;
case 0x6071ea:c.instructions+=6;goto B6071ea;
case 0x6071ed:c.instructions+=5;goto B6071ed;
case 0x6071ef:c.instructions+=4;goto B6071ef;
case 0x6071f1:c.instructions+=3;goto B6071f1;
case 0x6071f5:c.instructions+=2;goto B6071f5;
case 0x6071f9:c.instructions+=1;goto B6071f9;
case 0x6071fb:goto L6071fb;
case 0x6071fd:c.instructions+=1;goto B6071fd;
case 0x6071ff:goto L6071ff;
case 0x607204:goto L607204;
case 0x607207:c.instructions+=7;goto B607207;
case 0x60720a:c.instructions+=6;goto B60720a;
case 0x607210:c.instructions+=5;goto B607210;
case 0x607212:c.instructions+=4;goto B607212;
case 0x607216:c.instructions+=3;goto B607216;
case 0x607217:c.instructions+=2;goto B607217;
case 0x60721b:c.instructions+=1;goto B60721b;
case 0x607220:goto L607220;
case 0x607223:c.instructions+=10;goto B607223;
case 0x607225:c.instructions+=9;goto B607225;
case 0x60722b:c.instructions+=8;goto B60722b;
case 0x60722f:c.instructions+=7;goto B60722f;
case 0x607236:c.instructions+=6;goto B607236;
case 0x607239:c.instructions+=5;goto B607239;
case 0x60723a:c.instructions+=4;goto B60723a;
case 0x60723b:c.instructions+=3;goto B60723b;
case 0x60723d:c.instructions+=2;goto B60723d;
case 0x607240:c.instructions+=1;goto B607240;
case 0x607242:goto L607242;
case 0x607245:c.instructions+=3;goto B607245;
case 0x607247:c.instructions+=2;goto B607247;
case 0x607249:c.instructions+=1;goto B607249;
case 0x60724b:goto L60724b;
case 0x607251:goto L607251;
case 0x607253:c.instructions+=8;goto B607253;
case 0x607259:c.instructions+=7;goto B607259;
case 0x60725c:c.instructions+=6;goto B60725c;
case 0x607260:c.instructions+=5;goto B607260;
case 0x607263:c.instructions+=4;goto B607263;
case 0x607264:c.instructions+=3;goto B607264;
case 0x607267:c.instructions+=2;goto B607267;
case 0x607269:c.instructions+=1;goto B607269;
case 0x60726b:goto L60726b;
case 0x607271:c.instructions+=4;goto B607271;
case 0x607274:c.instructions+=3;goto B607274;
case 0x607279:c.instructions+=2;goto B607279;
case 0x60727b:c.instructions+=1;goto B60727b;
case 0x607280:goto L607280;
case 0x607285:c.instructions+=5;goto B607285;
case 0x607288:c.instructions+=4;goto B607288;
case 0x60728f:c.instructions+=3;goto B60728f;
case 0x607294:c.instructions+=2;goto B607294;
case 0x607296:c.instructions+=1;goto B607296;
case 0x60729c:goto L60729c;
case 0x6072a1:c.instructions+=2;goto B6072a1;
case 0x6072a3:c.instructions+=1;goto B6072a3;
case 0x6072a9:goto L6072a9;
case 0x6072ae:c.instructions+=2;goto B6072ae;
case 0x6072b0:c.instructions+=1;goto B6072b0;
case 0x6072b6:goto L6072b6;
case 0x6072bc:c.instructions+=1;goto B6072bc;
case 0x6072c1:goto L6072c1;
case 0x6072c8:c.instructions+=1;goto B6072c8;
case 0x6072ca:goto L6072ca;
case 0x6072cf:c.instructions+=2;goto B6072cf;
case 0x6072d1:c.instructions+=1;goto B6072d1;
case 0x6072d7:goto L6072d7;
case 0x6072db:c.instructions+=4;goto B6072db;
case 0x6072dd:c.instructions+=3;goto B6072dd;
case 0x6072e1:c.instructions+=2;goto B6072e1;
case 0x6072e8:c.instructions+=1;goto B6072e8;
case 0x6072ee:goto L6072ee;
case 0x6072f0:goto L6072f0;
case 0x6072f2:goto L6072f2;
case 0x6072f6:c.instructions+=2;goto B6072f6;
case 0x6072fb:c.instructions+=1;goto B6072fb;
case 0x607302:goto L607302;
case 0x607308:c.instructions+=7;goto B607308;
case 0x60730b:c.instructions+=6;goto B60730b;
case 0x60730e:c.instructions+=5;goto B60730e;
case 0x607310:c.instructions+=4;goto B607310;
case 0x607313:c.instructions+=3;goto B607313;
case 0x607316:c.instructions+=2;goto B607316;
case 0x607317:c.instructions+=1;goto B607317;
case 0x607319:goto L607319;
case 0x60731e:c.instructions+=2;goto B60731e;
case 0x607320:c.instructions+=1;goto B607320;
case 0x607322:goto L607322;
case 0x607328:c.instructions+=2;goto B607328;
case 0x60732c:c.instructions+=1;goto B60732c;
case 0x60732e:goto L60732e;
case 0x607336:goto L607336;
case 0x60733a:c.instructions+=2;goto B60733a;
case 0x60733c:c.instructions+=1;goto B60733c;
case 0x607342:goto L607342;
case 0x607347:c.instructions+=7;goto B607347;
case 0x60734a:c.instructions+=6;goto B60734a;
case 0x60734e:c.instructions+=5;goto B60734e;
case 0x607351:c.instructions+=4;goto B607351;
case 0x607353:c.instructions+=3;goto B607353;
case 0x607355:c.instructions+=2;goto B607355;
case 0x607359:c.instructions+=1;goto B607359;
case 0x60735f:goto L60735f;
case 0x607360:goto L607360;
case 0x607367:c.instructions+=4;goto B607367;
case 0x607369:c.instructions+=3;goto B607369;
case 0x60736c:c.instructions+=2;goto B60736c;
case 0x607370:c.instructions+=1;goto B607370;
case 0x607376:goto L607376;
case 0x60737a:c.instructions+=1;goto B60737a;
case 0x607380:goto L607380;
case 0x607382:c.instructions+=2;goto B607382;
case 0x607386:c.instructions+=1;goto B607386;
case 0x607388:goto L607388;
case 0x60738b:c.instructions+=2;goto B60738b;
case 0x60738f:c.instructions+=1;goto B60738f;
case 0x607391:goto L607391;
case 0x607399:goto L607399;
case 0x60739f:c.instructions+=7;goto B60739f;
case 0x6073a2:c.instructions+=6;goto B6073a2;
case 0x6073a5:c.instructions+=5;goto B6073a5;
case 0x6073ab:c.instructions+=4;goto B6073ab;
case 0x6073ad:c.instructions+=3;goto B6073ad;
case 0x6073b2:c.instructions+=2;goto B6073b2;
case 0x6073b4:c.instructions+=1;goto B6073b4;
case 0x6073b9:goto L6073b9;
case 0x6073bf:c.instructions+=5;goto B6073bf;
case 0x6073c1:c.instructions+=4;goto B6073c1;
case 0x6073c4:c.instructions+=3;goto B6073c4;
case 0x6073ca:c.instructions+=2;goto B6073ca;
case 0x6073cd:c.instructions+=1;goto B6073cd;
case 0x6073cf:goto L6073cf;
case 0x6073d4:goto L6073d4;
case 0x6073d9:c.instructions+=2;goto B6073d9;
case 0x6073db:c.instructions+=1;goto B6073db;
case 0x6073dd:goto L6073dd;
case 0x6073e2:c.instructions+=2;goto B6073e2;
case 0x6073e4:c.instructions+=1;goto B6073e4;
case 0x6073e6:goto L6073e6;
case 0x6073ea:c.instructions+=2;goto B6073ea;
case 0x6073f0:c.instructions+=1;goto B6073f0;
case 0x6073f2:goto L6073f2;
case 0x6073f4:c.instructions+=1;goto B6073f4;
case 0x6073f9:goto L6073f9;
case 0x6073fe:c.instructions+=2;goto B6073fe;
case 0x607400:c.instructions+=1;goto B607400;
case 0x607402:goto L607402;
case 0x607407:c.instructions+=2;goto B607407;
case 0x607409:c.instructions+=1;goto B607409;
case 0x60740b:goto L60740b;
case 0x607410:c.instructions+=2;goto B607410;
case 0x607412:c.instructions+=1;goto B607412;
case 0x607418:goto L607418;
case 0x60741b:c.instructions+=2;goto B60741b;
case 0x60741d:c.instructions+=1;goto B60741d;
case 0x60741f:goto L60741f;
case 0x607421:c.instructions+=1;goto B607421;
case 0x607426:goto L607426;
case 0x607429:goto L607429;
case 0x607430:c.instructions+=1;goto B607430;
case 0x607432:goto L607432;
case 0x607436:c.instructions+=2;goto B607436;
case 0x60743c:c.instructions+=1;goto B60743c;
case 0x60743e:goto L60743e;
case 0x607443:c.instructions+=5;goto B607443;
case 0x60744a:c.instructions+=4;goto B60744a;
case 0x60744e:c.instructions+=3;goto B60744e;
case 0x607450:c.instructions+=2;goto B607450;
case 0x607456:c.instructions+=1;goto B607456;
case 0x607458:goto L607458;
case 0x60745d:c.instructions+=2;goto B60745d;
case 0x60745f:c.instructions+=1;goto B60745f;
case 0x607461:goto L607461;
case 0x607465:c.instructions+=2;goto B607465;
case 0x607469:c.instructions+=1;goto B607469;
case 0x607470:goto L607470;
case 0x607476:goto L607476;
case 0x60747a:c.instructions+=8;goto B60747a;
case 0x60747e:c.instructions+=7;goto B60747e;
case 0x607482:c.instructions+=6;goto B607482;
case 0x607484:c.instructions+=5;goto B607484;
case 0x607486:c.instructions+=4;goto B607486;
case 0x607487:c.instructions+=3;goto B607487;
case 0x607488:c.instructions+=2;goto B607488;
case 0x60748d:c.instructions+=1;goto B60748d;
case 0x607492:goto L607492;
case 0x607494:c.instructions+=1;goto B607494;
case 0x607496:goto L607496;
case 0x60749c:c.instructions+=1;goto B60749c;
case 0x6074a1:goto L6074a1;
case 0x6074a6:c.instructions+=2;goto B6074a6;
case 0x6074a8:c.instructions+=1;goto B6074a8;
case 0x6074aa:goto L6074aa;
case 0x6074af:c.instructions+=2;goto B6074af;
case 0x6074b1:c.instructions+=1;goto B6074b1;
case 0x6074b3:goto L6074b3;
case 0x6074b8:c.instructions+=2;goto B6074b8;
case 0x6074ba:c.instructions+=1;goto B6074ba;
case 0x6074bc:goto L6074bc;
case 0x6074c1:c.instructions+=2;goto B6074c1;
case 0x6074c3:c.instructions+=1;goto B6074c3;
case 0x6074c5:goto L6074c5;
case 0x6074c9:c.instructions+=2;goto B6074c9;
case 0x6074cd:c.instructions+=1;goto B6074cd;
case 0x6074cf:goto L6074cf;
case 0x6074d3:c.instructions+=1;goto B6074d3;
case 0x6074d5:goto L6074d5;
case 0x6074d7:c.instructions+=3;goto B6074d7;
case 0x6074da:c.instructions+=2;goto B6074da;
case 0x6074e1:c.instructions+=1;goto B6074e1;
case 0x6074e3:goto L6074e3;
case 0x6074e7:c.instructions+=2;goto B6074e7;
case 0x6074e9:c.instructions+=1;goto B6074e9;
case 0x6074eb:goto L6074eb;
case 0x6074ed:goto L6074ed;
case 0x6074f0:c.instructions+=2;goto B6074f0;
case 0x6074f7:c.instructions+=1;goto B6074f7;
case 0x6074f9:goto L6074f9;
case 0x6074ff:c.instructions+=3;goto B6074ff;
case 0x607500:c.instructions+=2;goto B607500;
case 0x607501:c.instructions+=1;goto B607501;
case 0x607503:goto L607503;
case 0x607507:c.instructions+=3;goto B607507;
case 0x60750d:c.instructions+=2;goto B60750d;
case 0x60750f:c.instructions+=1;goto B60750f;
case 0x607511:goto L607511;
case 0x607516:goto L607516;
case 0x607519:c.instructions+=6;goto B607519;
case 0x60751f:c.instructions+=5;goto B60751f;
case 0x607526:c.instructions+=4;goto B607526;
case 0x60752a:c.instructions+=3;goto B60752a;
case 0x60752c:c.instructions+=2;goto B60752c;
case 0x607532:c.instructions+=1;goto B607532;
case 0x607534:goto L607534;
case 0x607539:goto L607539;
case 0x60753c:c.instructions+=3;goto B60753c;
case 0x607542:c.instructions+=2;goto B607542;
case 0x607543:c.instructions+=1;goto B607543;
case 0x607544:goto L607544;
case 0x607546:c.instructions+=1;goto B607546;
case 0x60754b:goto L60754b;
case 0x607551:c.instructions+=2;goto B607551;
case 0x607553:c.instructions+=1;goto B607553;
case 0x607555:goto L607555;
case 0x60755a:goto L60755a;
case 0x607560:c.instructions+=2;goto B607560;
case 0x607562:c.instructions+=1;goto B607562;
case 0x607564:goto L607564;
case 0x607569:goto L607569;
case 0x60756c:c.instructions+=5;goto B60756c;
case 0x607570:c.instructions+=4;goto B607570;
case 0x607571:c.instructions+=3;goto B607571;
case 0x607573:c.instructions+=2;goto B607573;
case 0x607576:c.instructions+=1;goto B607576;
case 0x60757c:goto L60757c;
case 0x60757e:c.instructions+=1;goto B60757e;
case 0x607583:goto L607583;
case 0x607589:c.instructions+=3;goto B607589;
case 0x60758c:c.instructions+=2;goto B60758c;
case 0x607590:c.instructions+=1;goto B607590;
case 0x607592:goto L607592;
case 0x607599:c.instructions+=1;goto B607599;
case 0x60759b:goto L60759b;
case 0x60759e:c.instructions+=2;goto B60759e;
case 0x6075a3:c.instructions+=1;goto B6075a3;
case 0x6075a5:goto L6075a5;
case 0x6075a9:c.instructions+=3;goto B6075a9;
case 0x6075ac:c.instructions+=2;goto B6075ac;
case 0x6075ae:c.instructions+=1;goto B6075ae;
case 0x6075b0:goto L6075b0;
case 0x6075b7:c.instructions+=1;goto B6075b7;
case 0x6075b9:goto L6075b9;
case 0x6075be:c.instructions+=2;goto B6075be;
case 0x6075c0:c.instructions+=1;goto B6075c0;
case 0x6075c2:goto L6075c2;
case 0x6075c6:c.instructions+=3;goto B6075c6;
case 0x6075c9:c.instructions+=2;goto B6075c9;
case 0x6075cb:c.instructions+=1;goto B6075cb;
case 0x6075cd:goto L6075cd;
case 0x6075d4:c.instructions+=1;goto B6075d4;
case 0x6075d6:goto L6075d6;
case 0x6075db:c.instructions+=1;goto B6075db;
case 0x6075dd:goto L6075dd;
case 0x6075e2:goto L6075e2;
case 0x6075e7:c.instructions+=4;goto B6075e7;
case 0x6075ed:c.instructions+=3;goto B6075ed;
case 0x6075f0:c.instructions+=2;goto B6075f0;
case 0x6075f5:c.instructions+=1;goto B6075f5;
case 0x6075f7:goto L6075f7;
case 0x6075fe:c.instructions+=1;goto B6075fe;
case 0x607600:goto L607600;
case 0x607602:c.instructions+=1;goto B607602;
case 0x607604:goto L607604;
case 0x607606:c.instructions+=1;goto B607606;
case 0x607608:goto L607608;
case 0x60760b:c.instructions+=1;goto B60760b;
case 0x60760d:goto L60760d;
case 0x607614:c.instructions+=1;goto B607614;
case 0x607616:goto L607616;
case 0x607618:goto L607618;
case 0x60761e:c.instructions+=2;goto B60761e;
case 0x607620:c.instructions+=1;goto B607620;
case 0x607622:goto L607622;
case 0x607624:c.instructions+=1;goto B607624;
case 0x607626:goto L607626;
case 0x607628:c.instructions+=1;goto B607628;
case 0x60762a:goto L60762a;
case 0x60762c:c.instructions+=1;goto B60762c;
case 0x60762e:goto L60762e;
case 0x607633:goto L607633;
case 0x607637:c.instructions+=5;goto B607637;
case 0x607639:c.instructions+=4;goto B607639;
case 0x60763b:c.instructions+=3;goto B60763b;
case 0x60763e:c.instructions+=2;goto B60763e;
case 0x60763f:c.instructions+=1;goto B60763f;
case 0x607644:goto L607644;
case 0x607646:c.instructions+=2;goto B607646;
case 0x607648:c.instructions+=1;goto B607648;
case 0x60764d:goto L60764d;
case 0x60764f:goto L60764f;
case 0x607653:goto L607653;
case 0x607657:c.instructions+=1;goto B607657;
case 0x607659:goto L607659;
case 0x60765c:c.instructions+=1;goto B60765c;
case 0x607661:goto L607661;
case 0x607667:c.instructions+=8;goto B607667;
case 0x60766d:c.instructions+=7;goto B60766d;
case 0x607673:c.instructions+=6;goto B607673;
case 0x607679:c.instructions+=5;goto B607679;
case 0x607680:c.instructions+=4;goto B607680;
case 0x607687:c.instructions+=3;goto B607687;
case 0x60768c:c.instructions+=2;goto B60768c;
case 0x60768e:c.instructions+=1;goto B60768e;
case 0x607690:goto L607690;
case 0x607694:c.instructions+=2;goto B607694;
case 0x607696:c.instructions+=1;goto B607696;
case 0x607698:goto L607698;
case 0x60769a:c.instructions+=1;goto B60769a;
case 0x60769f:goto L60769f;
case 0x6076a3:c.instructions+=3;goto B6076a3;
case 0x6076a7:c.instructions+=2;goto B6076a7;
case 0x6076a8:c.instructions+=1;goto B6076a8;
case 0x6076ac:goto L6076ac;
case 0x6076af:c.instructions+=4;goto B6076af;
case 0x6076b0:c.instructions+=3;goto B6076b0;
case 0x6076b2:c.instructions+=2;goto B6076b2;
case 0x6076b6:c.instructions+=1;goto B6076b6;
case 0x6076bc:goto L6076bc;
case 0x6076bd:c.instructions+=4;goto B6076bd;
case 0x6076be:c.instructions+=3;goto B6076be;
case 0x6076bf:c.instructions+=2;goto B6076bf;
case 0x6076c2:c.instructions+=1;goto B6076c2;
case 0x6076d0:goto L6076d0;
case 0x6076d1:c.instructions+=16;goto B6076d1;
case 0x6076d3:c.instructions+=15;goto B6076d3;
case 0x6076d6:c.instructions+=14;goto B6076d6;
case 0x6076d8:c.instructions+=13;goto B6076d8;
case 0x6076dd:c.instructions+=12;goto B6076dd;
case 0x6076e3:c.instructions+=11;goto B6076e3;
case 0x6076e4:c.instructions+=10;goto B6076e4;
case 0x6076eb:c.instructions+=9;goto B6076eb;
case 0x6076ee:c.instructions+=8;goto B6076ee;
case 0x6076ef:c.instructions+=7;goto B6076ef;
case 0x6076f0:c.instructions+=6;goto B6076f0;
case 0x6076f1:c.instructions+=5;goto B6076f1;
case 0x6076f2:c.instructions+=4;goto B6076f2;
case 0x6076f4:c.instructions+=3;goto B6076f4;
case 0x6076f8:c.instructions+=2;goto B6076f8;
case 0x6076fc:c.instructions+=1;goto B6076fc;
case 0x6076fe:goto L6076fe;
case 0x607703:goto L607703;
case 0x607706:c.instructions+=1;goto B607706;
case 0x607708:goto L607708;
case 0x60770d:goto L60770d;
case 0x60770f:c.instructions+=2;goto B60770f;
case 0x607711:c.instructions+=1;goto B607711;
case 0x607716:goto L607716;
case 0x60771a:c.instructions+=1;goto B60771a;
case 0x60771c:goto L60771c;
case 0x60771f:c.instructions+=6;goto B60771f;
case 0x607724:c.instructions+=5;goto B607724;
case 0x607726:c.instructions+=4;goto B607726;
case 0x607729:c.instructions+=3;goto B607729;
case 0x60772e:c.instructions+=2;goto B60772e;
case 0x607730:c.instructions+=1;goto B607730;
case 0x607735:goto L607735;
case 0x60773b:c.instructions+=2;goto B60773b;
case 0x60773d:c.instructions+=1;goto B60773d;
case 0x60773f:goto L60773f;
case 0x607741:c.instructions+=1;goto B607741;
case 0x607746:goto L607746;
case 0x60774d:goto L60774d;
case 0x607750:c.instructions+=3;goto B607750;
case 0x607752:c.instructions+=2;goto B607752;
case 0x607754:c.instructions+=1;goto B607754;
case 0x607756:goto L607756;
case 0x60775c:c.instructions+=1;goto B60775c;
case 0x607760:goto L607760;
case 0x607762:c.instructions+=2;goto B607762;
case 0x607767:c.instructions+=1;goto B607767;
case 0x607769:goto L607769;
case 0x60776e:c.instructions+=2;goto B60776e;
case 0x607770:c.instructions+=1;goto B607770;
case 0x607772:goto L607772;
case 0x607774:c.instructions+=1;goto B607774;
case 0x607779:goto L607779;
case 0x607780:c.instructions+=1;goto B607780;
case 0x607782:goto L607782;
case 0x607784:c.instructions+=3;goto B607784;
case 0x607787:c.instructions+=2;goto B607787;
case 0x60778b:c.instructions+=1;goto B60778b;
case 0x60778d:goto L60778d;
case 0x607792:c.instructions+=5;goto B607792;
case 0x607799:c.instructions+=4;goto B607799;
case 0x60779d:c.instructions+=3;goto B60779d;
case 0x6077a1:c.instructions+=2;goto B6077a1;
case 0x6077a4:c.instructions+=1;goto B6077a4;
case 0x6077a6:goto L6077a6;
case 0x6077a8:c.instructions+=1;goto B6077a8;
case 0x6077ab:goto L6077ab;
case 0x6077ae:c.instructions+=4;goto B6077ae;
case 0x6077af:c.instructions+=3;goto B6077af;
case 0x6077b2:c.instructions+=2;goto B6077b2;
case 0x6077b4:c.instructions+=1;goto B6077b4;
case 0x6077b6:goto L6077b6;
case 0x6077bb:c.instructions+=3;goto B6077bb;
case 0x6077bd:c.instructions+=2;goto B6077bd;
case 0x6077bf:c.instructions+=1;goto B6077bf;
case 0x6077c5:goto L6077c5;
case 0x6077c8:c.instructions+=1;goto B6077c8;
case 0x6077ce:goto L6077ce;
case 0x6077d4:c.instructions+=2;goto B6077d4;
case 0x6077d6:c.instructions+=1;goto B6077d6;
case 0x6077dc:goto L6077dc;
case 0x6077df:c.instructions+=2;goto B6077df;
case 0x6077e2:c.instructions+=1;goto B6077e2;
case 0x6077e8:goto L6077e8;
case 0x6077ee:c.instructions+=1;goto B6077ee;
case 0x6077f4:goto L6077f4;
case 0x6077f6:c.instructions+=2;goto B6077f6;
case 0x6077fb:c.instructions+=1;goto B6077fb;
case 0x6077fd:goto L6077fd;
case 0x6077ff:c.instructions+=1;goto B6077ff;
case 0x607801:goto L607801;
case 0x607803:c.instructions+=2;goto B607803;
case 0x607805:c.instructions+=1;goto B607805;
case 0x607807:goto L607807;
case 0x60780a:c.instructions+=2;goto B60780a;
case 0x60780c:c.instructions+=1;goto B60780c;
case 0x60780e:goto L60780e;
case 0x607811:c.instructions+=2;goto B607811;
case 0x607817:c.instructions+=1;goto B607817;
case 0x607819:goto L607819;
case 0x60781c:c.instructions+=4;goto B60781c;
case 0x60781d:c.instructions+=3;goto B60781d;
case 0x607820:c.instructions+=2;goto B607820;
case 0x607822:c.instructions+=1;goto B607822;
case 0x607824:goto L607824;
case 0x607826:goto L607826;
case 0x607829:c.instructions+=2;goto B607829;
case 0x60782e:c.instructions+=1;goto B60782e;
case 0x607830:goto L607830;
case 0x607832:c.instructions+=3;goto B607832;
case 0x607835:c.instructions+=2;goto B607835;
case 0x607838:c.instructions+=1;goto B607838;
case 0x60783b:goto L60783b;
case 0x60783c:c.instructions+=5;goto B60783c;
case 0x60783e:c.instructions+=4;goto B60783e;
case 0x60783f:c.instructions+=3;goto B60783f;
case 0x607840:c.instructions+=2;goto B607840;
case 0x607842:c.instructions+=1;goto B607842;
case 0x607847:goto L607847;
case 0x60784c:c.instructions+=2;goto B60784c;
case 0x60784e:c.instructions+=1;goto B60784e;
case 0x607850:goto L607850;
case 0x607855:c.instructions+=2;goto B607855;
case 0x607857:c.instructions+=1;goto B607857;
case 0x607859:goto L607859;
case 0x60785c:c.instructions+=1;goto B60785c;
case 0x60785e:goto L60785e;
case 0x607864:c.instructions+=1;goto B607864;
case 0x60786f:goto L60786f;
case 0x607875:goto L607875;
case 0x607878:c.instructions+=1;goto B607878;
case 0x60787e:goto L60787e;
case 0x607884:c.instructions+=4;goto B607884;
case 0x607886:c.instructions+=3;goto B607886;
case 0x607888:c.instructions+=2;goto B607888;
case 0x60788a:c.instructions+=1;goto B60788a;
case 0x60788c:goto L60788c;
case 0x607890:goto L607890;
case 0x607897:c.instructions+=4;goto B607897;
case 0x60789a:c.instructions+=3;goto B60789a;
case 0x60789d:c.instructions+=2;goto B60789d;
case 0x6078a2:c.instructions+=1;goto B6078a2;
case 0x6078a4:goto L6078a4;
case 0x6078a5:goto L6078a5;
case 0x6078a6:c.instructions+=2;goto B6078a6;
case 0x6078a8:c.instructions+=1;goto B6078a8;
case 0x6078aa:goto L6078aa;
case 0x6078ac:c.instructions+=1;goto B6078ac;
case 0x6078ae:goto L6078ae;
case 0x6078b1:c.instructions+=3;goto B6078b1;
case 0x6078b3:c.instructions+=2;goto B6078b3;
case 0x6078b5:c.instructions+=1;goto B6078b5;
case 0x6078b7:goto L6078b7;
case 0x6078bd:c.instructions+=1;goto B6078bd;
case 0x6078c0:goto L6078c0;
case 0x6078c2:c.instructions+=2;goto B6078c2;
case 0x6078c7:c.instructions+=1;goto B6078c7;
case 0x6078c9:goto L6078c9;
case 0x6078cb:c.instructions+=1;goto B6078cb;
case 0x6078cd:goto L6078cd;
case 0x6078d1:c.instructions+=7;goto B6078d1;
case 0x6078d3:c.instructions+=6;goto B6078d3;
case 0x6078d5:c.instructions+=5;goto B6078d5;
case 0x6078d8:c.instructions+=4;goto B6078d8;
case 0x6078db:c.instructions+=3;goto B6078db;
case 0x6078de:c.instructions+=2;goto B6078de;
case 0x6078e0:c.instructions+=1;goto B6078e0;
case 0x6078e2:goto L6078e2;
case 0x6078e5:c.instructions+=1;goto B6078e5;
case 0x6078e7:goto L6078e7;
case 0x6078e9:goto L6078e9;
case 0x6078ea:c.instructions+=7;goto B6078ea;
case 0x6078ec:c.instructions+=6;goto B6078ec;
case 0x6078ef:c.instructions+=5;goto B6078ef;
case 0x6078f1:c.instructions+=4;goto B6078f1;
case 0x6078f2:c.instructions+=3;goto B6078f2;
case 0x6078f3:c.instructions+=2;goto B6078f3;
case 0x6078f4:c.instructions+=1;goto B6078f4;
case 0x6078f9:goto L6078f9;
case 0x6078ff:goto L6078ff;
case 0x607902:c.instructions+=4;goto B607902;
case 0x607903:c.instructions+=3;goto B607903;
case 0x607906:c.instructions+=2;goto B607906;
case 0x607908:c.instructions+=1;goto B607908;
case 0x60790a:goto L60790a;
case 0x60790c:c.instructions+=2;goto B60790c;
case 0x607912:c.instructions+=1;goto B607912;
case 0x607918:goto L607918;
case 0x60791a:c.instructions+=1;goto B60791a;
case 0x60791f:goto L60791f;
case 0x607921:c.instructions+=1;goto B607921;
case 0x607926:goto L607926;
case 0x60792d:c.instructions+=1;goto B60792d;
case 0x607933:goto L607933;
case 0x607936:c.instructions+=2;goto B607936;
case 0x607938:c.instructions+=1;goto B607938;
case 0x60793e:goto L60793e;
case 0x607944:c.instructions+=3;goto B607944;
case 0x607949:c.instructions+=2;goto B607949;
case 0x60794d:c.instructions+=1;goto B60794d;
case 0x607950:goto L607950;
case 0x607954:c.instructions+=4;goto B607954;
case 0x607956:c.instructions+=3;goto B607956;
case 0x607959:c.instructions+=2;goto B607959;
case 0x60795b:c.instructions+=1;goto B60795b;
case 0x60795d:goto L60795d;
case 0x607961:c.instructions+=5;goto B607961;
case 0x607965:c.instructions+=4;goto B607965;
case 0x607968:c.instructions+=3;goto B607968;
case 0x60796a:c.instructions+=2;goto B60796a;
case 0x60796c:c.instructions+=1;goto B60796c;
case 0x60796e:goto L60796e;
case 0x607970:c.instructions+=2;goto B607970;
case 0x607972:c.instructions+=1;goto B607972;
case 0x607974:goto L607974;
case 0x607978:c.instructions+=2;goto B607978;
case 0x60797b:c.instructions+=1;goto B60797b;
case 0x607980:goto L607980;
case 0x607982:c.instructions+=2;goto B607982;
case 0x607987:c.instructions+=1;goto B607987;
case 0x607989:goto L607989;
case 0x60798f:c.instructions+=2;goto B60798f;
case 0x607991:c.instructions+=1;goto B607991;
case 0x607993:goto L607993;
case 0x607995:c.instructions+=2;goto B607995;
case 0x607997:c.instructions+=1;goto B607997;
case 0x607999:goto L607999;
case 0x60799c:c.instructions+=1;goto B60799c;
case 0x60799e:goto L60799e;
case 0x6079a0:goto L6079a0;
case 0x6079a2:c.instructions+=8;goto B6079a2;
case 0x6079a5:c.instructions+=7;goto B6079a5;
case 0x6079a7:c.instructions+=6;goto B6079a7;
case 0x6079aa:c.instructions+=5;goto B6079aa;
case 0x6079ab:c.instructions+=4;goto B6079ab;
case 0x6079ac:c.instructions+=3;goto B6079ac;
case 0x6079ad:c.instructions+=2;goto B6079ad;
case 0x6079af:c.instructions+=1;goto B6079af;
case 0x6079b4:goto L6079b4;
case 0x6079b7:c.instructions+=4;goto B6079b7;
case 0x6079b8:c.instructions+=3;goto B6079b8;
case 0x6079bb:c.instructions+=2;goto B6079bb;
case 0x6079bd:c.instructions+=1;goto B6079bd;
case 0x6079bf:goto L6079bf;
case 0x6079c3:c.instructions+=7;goto B6079c3;
case 0x6079c6:c.instructions+=6;goto B6079c6;
case 0x6079c9:c.instructions+=5;goto B6079c9;
case 0x6079ca:c.instructions+=4;goto B6079ca;
case 0x6079cd:c.instructions+=3;goto B6079cd;
case 0x6079cf:c.instructions+=2;goto B6079cf;
case 0x6079d3:c.instructions+=1;goto B6079d3;
case 0x6079d9:goto L6079d9;
case 0x6079de:c.instructions+=2;goto B6079de;
case 0x6079e0:c.instructions+=1;goto B6079e0;
case 0x6079e2:goto L6079e2;
case 0x6079e7:c.instructions+=2;goto B6079e7;
case 0x6079e9:c.instructions+=1;goto B6079e9;
case 0x6079ef:goto L6079ef;
case 0x6079f2:c.instructions+=3;goto B6079f2;
case 0x6079f4:c.instructions+=2;goto B6079f4;
case 0x6079f6:c.instructions+=1;goto B6079f6;
case 0x6079fc:goto L6079fc;
case 0x607a02:c.instructions+=1;goto B607a02;
case 0x607a06:goto L607a06;
case 0x607a08:c.instructions+=4;goto B607a08;
case 0x607a0a:c.instructions+=3;goto B607a0a;
case 0x607a10:c.instructions+=2;goto B607a10;
case 0x607a12:c.instructions+=1;goto B607a12;
case 0x607a14:goto L607a14;
case 0x607a19:c.instructions+=1;goto B607a19;
case 0x607a1b:goto L607a1b;
case 0x607a21:c.instructions+=2;goto B607a21;
case 0x607a23:c.instructions+=1;goto B607a23;
case 0x607a25:goto L607a25;
case 0x607a28:c.instructions+=3;goto B607a28;
case 0x607a2a:c.instructions+=2;goto B607a2a;
case 0x607a2c:c.instructions+=1;goto B607a2c;
case 0x607a2e:goto L607a2e;
case 0x607a35:goto L607a35;
case 0x607a37:c.instructions+=1;goto B607a37;
case 0x607a39:goto L607a39;
case 0x607a3b:c.instructions+=1;goto B607a3b;
case 0x607a3d:goto L607a3d;
case 0x607a3f:goto L607a3f;
case 0x607a43:c.instructions+=1;goto B607a43;
case 0x607a45:goto L607a45;
case 0x607a46:c.instructions+=3;goto B607a46;
case 0x607a49:c.instructions+=2;goto B607a49;
case 0x607a4b:c.instructions+=1;goto B607a4b;
case 0x607a4d:goto L607a4d;
case 0x607a52:goto L607a52;
case 0x607a54:c.instructions+=2;goto B607a54;
case 0x607a56:c.instructions+=1;goto B607a56;
case 0x607a58:goto L607a58;
case 0x607a5e:c.instructions+=1;goto B607a5e;
case 0x607a60:goto L607a60;
case 0x607a62:c.instructions+=3;goto B607a62;
case 0x607a66:c.instructions+=2;goto B607a66;
case 0x607a68:c.instructions+=1;goto B607a68;
case 0x607a6a:goto L607a6a;
case 0x607a6b:c.instructions+=3;goto B607a6b;
case 0x607a6e:c.instructions+=2;goto B607a6e;
case 0x607a70:c.instructions+=1;goto B607a70;
case 0x607a72:goto L607a72;
case 0x607a74:goto L607a74;
case 0x607a76:c.instructions+=1;goto B607a76;
case 0x607a7b:goto L607a7b;
case 0x607a7c:c.instructions+=1;goto B607a7c;
case 0x607a7e:goto L607a7e;
case 0x607a82:c.instructions+=1;goto B607a82;
case 0x607a88:goto L607a88;
case 0x607a8b:c.instructions+=2;goto B607a8b;
case 0x607a8e:c.instructions+=1;goto B607a8e;
case 0x607a93:goto L607a93;
case 0x607a95:c.instructions+=3;goto B607a95;
case 0x607a98:c.instructions+=2;goto B607a98;
case 0x607a9a:c.instructions+=1;goto B607a9a;
case 0x607a9c:goto L607a9c;
case 0x607aa1:c.instructions+=1;goto B607aa1;
case 0x607aa3:goto L607aa3;
case 0x607aa8:c.instructions+=2;goto B607aa8;
case 0x607aaa:c.instructions+=1;goto B607aaa;
case 0x607aac:goto L607aac;
case 0x607aaf:c.instructions+=3;goto B607aaf;
case 0x607ab1:c.instructions+=2;goto B607ab1;
case 0x607ab3:c.instructions+=1;goto B607ab3;
case 0x607ab5:goto L607ab5;
case 0x607abc:c.instructions+=1;goto B607abc;
case 0x607ac0:goto L607ac0;
case 0x607ac2:c.instructions+=1;goto B607ac2;
case 0x607ac4:goto L607ac4;
case 0x607ac6:c.instructions+=1;goto B607ac6;
case 0x607ac8:goto L607ac8;
case 0x607aca:goto L607aca;
case 0x607ace:c.instructions+=1;goto B607ace;
case 0x607ad0:goto L607ad0;
case 0x607ad1:c.instructions+=3;goto B607ad1;
case 0x607ad4:c.instructions+=2;goto B607ad4;
case 0x607ad6:c.instructions+=1;goto B607ad6;
case 0x607ad8:goto L607ad8;
case 0x607add:c.instructions+=1;goto B607add;
case 0x607ae0:goto L607ae0;
case 0x607ae2:c.instructions+=2;goto B607ae2;
case 0x607ae4:c.instructions+=1;goto B607ae4;
case 0x607ae6:goto L607ae6;
case 0x607aec:c.instructions+=1;goto B607aec;
case 0x607af0:goto L607af0;
case 0x607af2:c.instructions+=3;goto B607af2;
case 0x607af6:c.instructions+=2;goto B607af6;
case 0x607af8:c.instructions+=1;goto B607af8;
case 0x607afe:goto L607afe;
case 0x607aff:c.instructions+=3;goto B607aff;
case 0x607b02:c.instructions+=2;goto B607b02;
case 0x607b04:c.instructions+=1;goto B607b04;
case 0x607b06:goto L607b06;
case 0x607b08:goto L607b08;
case 0x607b0a:goto L607b0a;
case 0x607b0c:c.instructions+=4;goto B607b0c;
case 0x607b0d:c.instructions+=3;goto B607b0d;
case 0x607b0f:c.instructions+=2;goto B607b0f;
case 0x607b10:c.instructions+=1;goto B607b10;
case 0x607b15:goto L607b15;
case 0x607b19:c.instructions+=6;goto B607b19;
case 0x607b1c:c.instructions+=5;goto B607b1c;
case 0x607b1d:c.instructions+=4;goto B607b1d;
case 0x607b20:c.instructions+=3;goto B607b20;
case 0x607b22:c.instructions+=2;goto B607b22;
case 0x607b26:c.instructions+=1;goto B607b26;
case 0x607b2c:goto L607b2c;
case 0x607b33:c.instructions+=1;goto B607b33;
case 0x607b35:goto L607b35;
case 0x607b38:c.instructions+=3;goto B607b38;
case 0x607b3a:c.instructions+=2;goto B607b3a;
case 0x607b3c:c.instructions+=1;goto B607b3c;
case 0x607b3e:goto L607b3e;
case 0x607b44:goto L607b44;
case 0x607b46:c.instructions+=3;goto B607b46;
case 0x607b49:c.instructions+=2;goto B607b49;
case 0x607b4b:c.instructions+=1;goto B607b4b;
case 0x607b4d:goto L607b4d;
case 0x607b52:c.instructions+=1;goto B607b52;
case 0x607b54:goto L607b54;
case 0x607b5a:c.instructions+=2;goto B607b5a;
case 0x607b5c:c.instructions+=1;goto B607b5c;
case 0x607b5e:goto L607b5e;
case 0x607b64:c.instructions+=5;goto B607b64;
case 0x607b6b:c.instructions+=4;goto B607b6b;
case 0x607b6f:c.instructions+=3;goto B607b6f;
case 0x607b71:c.instructions+=2;goto B607b71;
case 0x607b73:c.instructions+=1;goto B607b73;
case 0x607b75:goto L607b75;
case 0x607b7a:c.instructions+=1;goto B607b7a;
case 0x607b7c:goto L607b7c;
case 0x607b82:c.instructions+=1;goto B607b82;
case 0x607b84:goto L607b84;
case 0x607b86:c.instructions+=5;goto B607b86;
case 0x607b88:c.instructions+=4;goto B607b88;
case 0x607b8a:c.instructions+=3;goto B607b8a;
case 0x607b8b:c.instructions+=2;goto B607b8b;
case 0x607b8d:c.instructions+=1;goto B607b8d;
case 0x607b92:goto L607b92;
case 0x607b95:c.instructions+=4;goto B607b95;
case 0x607b96:c.instructions+=3;goto B607b96;
case 0x607b99:c.instructions+=2;goto B607b99;
case 0x607b9b:c.instructions+=1;goto B607b9b;
case 0x607b9d:goto L607b9d;
case 0x607ba0:c.instructions+=4;goto B607ba0;
case 0x607ba6:c.instructions+=3;goto B607ba6;
case 0x607ba8:c.instructions+=2;goto B607ba8;
case 0x607bab:c.instructions+=1;goto B607bab;
case 0x607bb1:goto L607bb1;
case 0x607bb4:c.instructions+=2;goto B607bb4;
case 0x607bb6:c.instructions+=1;goto B607bb6;
case 0x607bbc:goto L607bbc;
case 0x607bc1:c.instructions+=1;goto B607bc1;
case 0x607bc7:goto L607bc7;
case 0x607bcd:c.instructions+=10;goto B607bcd;
case 0x607bd0:c.instructions+=9;goto B607bd0;
case 0x607bd2:c.instructions+=8;goto B607bd2;
case 0x607bd6:c.instructions+=7;goto B607bd6;
case 0x607bda:c.instructions+=6;goto B607bda;
case 0x607be0:c.instructions+=5;goto B607be0;
case 0x607be2:c.instructions+=4;goto B607be2;
case 0x607be4:c.instructions+=3;goto B607be4;
case 0x607be6:c.instructions+=2;goto B607be6;
case 0x607be9:c.instructions+=1;goto B607be9;
case 0x607bef:goto L607bef;
case 0x607bf2:c.instructions+=3;goto B607bf2;
case 0x607bf4:c.instructions+=2;goto B607bf4;
case 0x607bf6:c.instructions+=1;goto B607bf6;
case 0x607bfc:goto L607bfc;
case 0x607c02:c.instructions+=1;goto B607c02;
case 0x607c06:goto L607c06;
case 0x607c08:c.instructions+=2;goto B607c08;
case 0x607c0d:c.instructions+=1;goto B607c0d;
case 0x607c0f:goto L607c0f;
case 0x607c14:c.instructions+=2;goto B607c14;
case 0x607c16:c.instructions+=1;goto B607c16;
case 0x607c18:goto L607c18;
case 0x607c1b:c.instructions+=3;goto B607c1b;
case 0x607c1d:c.instructions+=2;goto B607c1d;
case 0x607c1f:c.instructions+=1;goto B607c1f;
case 0x607c21:goto L607c21;
case 0x607c28:goto L607c28;
case 0x607c2a:c.instructions+=1;goto B607c2a;
case 0x607c2c:goto L607c2c;
case 0x607c2e:c.instructions+=1;goto B607c2e;
case 0x607c30:goto L607c30;
case 0x607c31:c.instructions+=1;goto B607c31;
case 0x607c36:goto L607c36;
case 0x607c38:goto L607c38;
case 0x607c3c:c.instructions+=1;goto B607c3c;
case 0x607c3e:goto L607c3e;
case 0x607c3f:c.instructions+=3;goto B607c3f;
case 0x607c42:c.instructions+=2;goto B607c42;
case 0x607c44:c.instructions+=1;goto B607c44;
case 0x607c46:goto L607c46;
case 0x607c4b:c.instructions+=1;goto B607c4b;
case 0x607c50:goto L607c50;
case 0x607c52:c.instructions+=2;goto B607c52;
case 0x607c54:c.instructions+=1;goto B607c54;
case 0x607c56:goto L607c56;
case 0x607c5c:c.instructions+=1;goto B607c5c;
case 0x607c60:goto L607c60;
case 0x607c62:c.instructions+=3;goto B607c62;
case 0x607c66:c.instructions+=2;goto B607c66;
case 0x607c68:c.instructions+=1;goto B607c68;
case 0x607c6e:goto L607c6e;
case 0x607c6f:c.instructions+=3;goto B607c6f;
case 0x607c72:c.instructions+=2;goto B607c72;
case 0x607c74:c.instructions+=1;goto B607c74;
case 0x607c76:goto L607c76;
case 0x607c78:goto L607c78;
case 0x607c7a:c.instructions+=5;goto B607c7a;
case 0x607c7c:c.instructions+=4;goto B607c7c;
case 0x607c7d:c.instructions+=3;goto B607c7d;
case 0x607c7e:c.instructions+=2;goto B607c7e;
case 0x607c80:c.instructions+=1;goto B607c80;
case 0x607c85:goto L607c85;
case 0x607c89:c.instructions+=6;goto B607c89;
case 0x607c8c:c.instructions+=5;goto B607c8c;
case 0x607c8d:c.instructions+=4;goto B607c8d;
case 0x607c90:c.instructions+=3;goto B607c90;
case 0x607c92:c.instructions+=2;goto B607c92;
case 0x607c96:c.instructions+=1;goto B607c96;
case 0x607c9c:goto L607c9c;
case 0x607ca3:c.instructions+=1;goto B607ca3;
case 0x607ca9:goto L607ca9;
case 0x607cac:c.instructions+=7;goto B607cac;
case 0x607caf:c.instructions+=6;goto B607caf;
case 0x607cb1:c.instructions+=5;goto B607cb1;
case 0x607cb3:c.instructions+=4;goto B607cb3;
case 0x607cb9:c.instructions+=3;goto B607cb9;
case 0x607cbb:c.instructions+=2;goto B607cbb;
case 0x607cbf:c.instructions+=1;goto B607cbf;
case 0x607cc5:goto L607cc5;
case 0x607ccb:c.instructions+=2;goto B607ccb;
case 0x607ccd:c.instructions+=1;goto B607ccd;
case 0x607cd3:goto L607cd3;
case 0x607cd9:c.instructions+=2;goto B607cd9;
case 0x607cdb:c.instructions+=1;goto B607cdb;
case 0x607ce1:goto L607ce1;
case 0x607ce7:c.instructions+=3;goto B607ce7;
case 0x607ce9:c.instructions+=2;goto B607ce9;
case 0x607ced:c.instructions+=1;goto B607ced;
case 0x607cf3:goto L607cf3;
case 0x607cf8:c.instructions+=1;goto B607cf8;
case 0x607cfe:goto L607cfe;
case 0x607d01:c.instructions+=7;goto B607d01;
case 0x607d05:c.instructions+=6;goto B607d05;
case 0x607d0c:c.instructions+=5;goto B607d0c;
case 0x607d0f:c.instructions+=4;goto B607d0f;
case 0x607d14:c.instructions+=3;goto B607d14;
case 0x607d16:c.instructions+=2;goto B607d16;
case 0x607d1a:c.instructions+=1;goto B607d1a;
case 0x607d1c:goto L607d1c;
case 0x607d1f:c.instructions+=1;goto B607d1f;
case 0x607d25:goto L607d25;
case 0x607d2b:c.instructions+=3;goto B607d2b;
case 0x607d2d:c.instructions+=2;goto B607d2d;
case 0x607d2f:c.instructions+=1;goto B607d2f;
case 0x607d35:goto L607d35;
case 0x607d38:c.instructions+=1;goto B607d38;
case 0x607d3d:goto L607d3d;
case 0x607d3e:c.instructions+=1;goto B607d3e;
case 0x607d43:goto L607d43;
case 0x607d47:c.instructions+=1;goto B607d47;
case 0x607d50:goto L607d50;
case 0x607d57:c.instructions+=2;goto B607d57;
case 0x607d59:c.instructions+=1;goto B607d59;
case 0x607d5f:goto L607d5f;
case 0x607d64:c.instructions+=1;goto B607d64;
case 0x607d66:goto L607d66;
case 0x607d6b:c.instructions+=2;goto B607d6b;
case 0x607d6d:c.instructions+=1;goto B607d6d;
case 0x607d73:goto L607d73;
case 0x607d78:c.instructions+=3;goto B607d78;
case 0x607d7d:c.instructions+=2;goto B607d7d;
case 0x607d7f:c.instructions+=1;goto B607d7f;
case 0x607d81:goto L607d81;
case 0x607d88:c.instructions+=1;goto B607d88;
case 0x607d8a:goto L607d8a;
case 0x607d8c:c.instructions+=2;goto B607d8c;
case 0x607d8e:c.instructions+=1;goto B607d8e;
case 0x607d90:goto L607d90;
case 0x607d93:c.instructions+=1;goto B607d93;
case 0x607d95:goto L607d95;
case 0x607d97:goto L607d97;
case 0x607d9a:c.instructions+=4;goto B607d9a;
case 0x607d9c:c.instructions+=3;goto B607d9c;
case 0x607d9e:c.instructions+=2;goto B607d9e;
case 0x607da0:c.instructions+=1;goto B607da0;
case 0x607da2:goto L607da2;
case 0x607da5:c.instructions+=1;goto B607da5;
case 0x607da7:goto L607da7;
case 0x607da9:goto L607da9;
case 0x607dab:goto L607dab;
case 0x607dae:c.instructions+=6;goto B607dae;
case 0x607db2:c.instructions+=5;goto B607db2;
case 0x607db5:c.instructions+=4;goto B607db5;
case 0x607dba:c.instructions+=3;goto B607dba;
case 0x607dbc:c.instructions+=2;goto B607dbc;
case 0x607dc2:c.instructions+=1;goto B607dc2;
case 0x607dc4:goto L607dc4;
case 0x607dca:goto L607dca;
case 0x607dcc:c.instructions+=5;goto B607dcc;
case 0x607dce:c.instructions+=4;goto B607dce;
case 0x607dd0:c.instructions+=3;goto B607dd0;
case 0x607dd2:c.instructions+=2;goto B607dd2;
case 0x607dd5:c.instructions+=1;goto B607dd5;
case 0x607ddb:goto L607ddb;
case 0x607ddd:c.instructions+=5;goto B607ddd;
case 0x607ddf:c.instructions+=4;goto B607ddf;
case 0x607de0:c.instructions+=3;goto B607de0;
case 0x607de2:c.instructions+=2;goto B607de2;
case 0x607de6:c.instructions+=1;goto B607de6;
case 0x607de8:goto L607de8;
case 0x607deb:c.instructions+=1;goto B607deb;
case 0x607ded:goto L607ded;
case 0x607def:goto L607def;
case 0x607df3:c.instructions+=8;goto B607df3;
case 0x607df7:c.instructions+=7;goto B607df7;
case 0x607dfe:c.instructions+=6;goto B607dfe;
case 0x607e01:c.instructions+=5;goto B607e01;
case 0x607e03:c.instructions+=4;goto B607e03;
case 0x607e08:c.instructions+=3;goto B607e08;
case 0x607e0a:c.instructions+=2;goto B607e0a;
case 0x607e0e:c.instructions+=1;goto B607e0e;
case 0x607e10:goto L607e10;
case 0x607e13:c.instructions+=2;goto B607e13;
case 0x607e17:c.instructions+=1;goto B607e17;
case 0x607e19:goto L607e19;
case 0x607e21:goto L607e21;
case 0x607e25:c.instructions+=8;goto B607e25;
case 0x607e28:c.instructions+=7;goto B607e28;
case 0x607e2d:c.instructions+=6;goto B607e2d;
case 0x607e30:c.instructions+=5;goto B607e30;
case 0x607e32:c.instructions+=4;goto B607e32;
case 0x607e38:c.instructions+=3;goto B607e38;
case 0x607e3d:c.instructions+=2;goto B607e3d;
case 0x607e3f:c.instructions+=1;goto B607e3f;
case 0x607e44:goto L607e44;
case 0x607e47:c.instructions+=5;goto B607e47;
case 0x607e4a:c.instructions+=4;goto B607e4a;
case 0x607e50:c.instructions+=3;goto B607e50;
case 0x607e52:c.instructions+=2;goto B607e52;
case 0x607e58:c.instructions+=1;goto B607e58;
case 0x607e5a:goto L607e5a;
case 0x607e5f:goto L607e5f;
case 0x607e64:c.instructions+=2;goto B607e64;
case 0x607e66:c.instructions+=1;goto B607e66;
case 0x607e68:goto L607e68;
case 0x607e6d:c.instructions+=2;goto B607e6d;
case 0x607e6f:c.instructions+=1;goto B607e6f;
case 0x607e71:goto L607e71;
case 0x607e75:c.instructions+=4;goto B607e75;
case 0x607e79:c.instructions+=3;goto B607e79;
case 0x607e7f:c.instructions+=2;goto B607e7f;
case 0x607e81:c.instructions+=1;goto B607e81;
case 0x607e83:goto L607e83;
case 0x607e85:c.instructions+=1;goto B607e85;
case 0x607e8a:goto L607e8a;
case 0x607e8e:goto L607e8e;
case 0x607e93:c.instructions+=2;goto B607e93;
case 0x607e95:c.instructions+=1;goto B607e95;
case 0x607e97:goto L607e97;
case 0x607e9c:c.instructions+=2;goto B607e9c;
case 0x607e9e:c.instructions+=1;goto B607e9e;
case 0x607ea0:goto L607ea0;
case 0x607ea5:c.instructions+=2;goto B607ea5;
case 0x607ea7:c.instructions+=1;goto B607ea7;
case 0x607ead:goto L607ead;
case 0x607eb0:c.instructions+=2;goto B607eb0;
case 0x607eb2:c.instructions+=1;goto B607eb2;
case 0x607eb4:goto L607eb4;
case 0x607eb7:c.instructions+=3;goto B607eb7;
case 0x607eb9:c.instructions+=2;goto B607eb9;
case 0x607ebb:c.instructions+=1;goto B607ebb;
case 0x607ebd:goto L607ebd;
case 0x607ec4:goto L607ec4;
case 0x607ec6:c.instructions+=1;goto B607ec6;
case 0x607ec8:goto L607ec8;
case 0x607eca:c.instructions+=1;goto B607eca;
case 0x607ecc:goto L607ecc;
case 0x607ece:goto L607ece;
case 0x607ed1:c.instructions+=2;goto B607ed1;
case 0x607ed3:c.instructions+=1;goto B607ed3;
case 0x607ed5:goto L607ed5;
case 0x607ed6:c.instructions+=3;goto B607ed6;
case 0x607ed9:c.instructions+=2;goto B607ed9;
case 0x607edb:c.instructions+=1;goto B607edb;
case 0x607edd:goto L607edd;
case 0x607ee1:c.instructions+=1;goto B607ee1;
case 0x607ee6:goto L607ee6;
case 0x607ee8:c.instructions+=2;goto B607ee8;
case 0x607eea:c.instructions+=1;goto B607eea;
case 0x607eec:goto L607eec;
case 0x607ef2:goto L607ef2;
case 0x607ef4:c.instructions+=3;goto B607ef4;
case 0x607ef8:c.instructions+=2;goto B607ef8;
case 0x607efa:c.instructions+=1;goto B607efa;
case 0x607efc:goto L607efc;
case 0x607efd:c.instructions+=3;goto B607efd;
case 0x607f00:c.instructions+=2;goto B607f00;
case 0x607f02:c.instructions+=1;goto B607f02;
case 0x607f04:goto L607f04;
case 0x607f06:c.instructions+=1;goto B607f06;
case 0x607f0a:goto L607f0a;
case 0x607f0e:c.instructions+=1;goto B607f0e;
case 0x607f11:goto L607f11;
case 0x607f18:c.instructions+=1;goto B607f18;
case 0x607f1a:goto L607f1a;
case 0x607f1e:c.instructions+=4;goto B607f1e;
case 0x607f24:c.instructions+=3;goto B607f24;
case 0x607f27:c.instructions+=2;goto B607f27;
case 0x607f29:c.instructions+=1;goto B607f29;
case 0x607f2b:goto L607f2b;
case 0x607f30:c.instructions+=5;goto B607f30;
case 0x607f37:c.instructions+=4;goto B607f37;
case 0x607f3b:c.instructions+=3;goto B607f3b;
case 0x607f3d:c.instructions+=2;goto B607f3d;
case 0x607f3f:c.instructions+=1;goto B607f3f;
case 0x607f41:goto L607f41;
case 0x607f42:c.instructions+=1;goto B607f42;
case 0x607f44:goto L607f44;
case 0x607f49:c.instructions+=2;goto B607f49;
case 0x607f4b:c.instructions+=1;goto B607f4b;
case 0x607f4d:goto L607f4d;
case 0x607f51:c.instructions+=1;goto B607f51;
case 0x607f58:goto L607f58;
case 0x607f5c:c.instructions+=9;goto B607f5c;
case 0x607f62:c.instructions+=8;goto B607f62;
case 0x607f66:c.instructions+=7;goto B607f66;
case 0x607f6a:c.instructions+=6;goto B607f6a;
case 0x607f6c:c.instructions+=5;goto B607f6c;
case 0x607f6d:c.instructions+=4;goto B607f6d;
case 0x607f6e:c.instructions+=3;goto B607f6e;
case 0x607f6f:c.instructions+=2;goto B607f6f;
case 0x607f74:c.instructions+=1;goto B607f74;
case 0x607f79:goto L607f79;
case 0x607f7b:c.instructions+=1;goto B607f7b;
case 0x607f7d:goto L607f7d;
case 0x607f83:c.instructions+=1;goto B607f83;
case 0x607f88:goto L607f88;
case 0x607f8d:c.instructions+=2;goto B607f8d;
case 0x607f8f:c.instructions+=1;goto B607f8f;
case 0x607f91:goto L607f91;
case 0x607f96:c.instructions+=2;goto B607f96;
case 0x607f98:c.instructions+=1;goto B607f98;
case 0x607f9a:goto L607f9a;
case 0x607f9f:c.instructions+=2;goto B607f9f;
case 0x607fa1:c.instructions+=1;goto B607fa1;
case 0x607fa3:goto L607fa3;
case 0x607fa8:c.instructions+=2;goto B607fa8;
case 0x607faa:c.instructions+=1;goto B607faa;
case 0x607fac:goto L607fac;
case 0x607fb0:c.instructions+=2;goto B607fb0;
case 0x607fb4:c.instructions+=1;goto B607fb4;
case 0x607fb6:goto L607fb6;
case 0x607fba:c.instructions+=1;goto B607fba;
case 0x607fc0:goto L607fc0;
case 0x607fc3:c.instructions+=3;goto B607fc3;
case 0x607fc6:c.instructions+=2;goto B607fc6;
case 0x607fcd:c.instructions+=1;goto B607fcd;
case 0x607fd2:goto L607fd2;
case 0x607fd4:c.instructions+=1;goto B607fd4;
case 0x607fd6:goto L607fd6;
case 0x607fdc:goto L607fdc;
case 0x607fdf:c.instructions+=2;goto B607fdf;
case 0x607fe6:c.instructions+=1;goto B607fe6;
case 0x607fec:goto L607fec;
case 0x607ff0:c.instructions+=3;goto B607ff0;
case 0x607ff6:c.instructions+=2;goto B607ff6;
case 0x607ff7:c.instructions+=1;goto B607ff7;
case 0x607ffc:goto L607ffc;
default:missing_instruction(c.pc);}
B607000:L607000:{c.instructions+=1;NFSU2_TR(0x607000);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607017;}}
}
B607002:L607002:{c.instructions+=5;NFSU2_TR(0x607002);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607008:{NFSU2_TR(0x607008);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B60700b:{NFSU2_TR(0x60700b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B60700e:{NFSU2_TR(0x60700e);
__builtin_memmove((R+4),gp(0x89e7dc),4);
}
B607014:{NFSU2_TR(0x607014);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607017:L607017:{c.instructions+=3;NFSU2_TR(0x607017);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60701d:{NFSU2_TR(0x60701d);
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
B60701f:{NFSU2_TR(0x60701f);
if(r1(R+518)){{goto L607026;}}
}
B607021:L607021:{c.instructions+=1;NFSU2_TR(0x607021);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607026ull));
TAIL_STATIC(0x4022c0u,402);
}
B607026:L607026:{c.instructions+=3;NFSU2_TR(0x607026);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60702c:{NFSU2_TR(0x60702c);
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
B60702e:{NFSU2_TR(0x60702e);
if(r1(R+518)){{goto L607035;}}
}
B607030:L607030:{c.instructions+=1;NFSU2_TR(0x607030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607035ull));
TAIL_STATIC(0x4022c0u,402);
}
B607035:L607035:{c.instructions+=4;NFSU2_TR(0x607035);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B607038:{NFSU2_TR(0x607038);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60703c:{NFSU2_TR(0x60703c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60703e:{NFSU2_TR(0x60703e);
if(r1(R+518)){{goto L607108;}}
}
B607044:L607044:{c.instructions+=2;NFSU2_TR(0x607044);
__builtin_memmove((R+4),(R+28),4);
}
B607046:{NFSU2_TR(0x607046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60704bull));
TAIL_STATIC(0x5ea530u,5ea);
}
B60704b:L60704b:{c.instructions+=5;NFSU2_TR(0x60704b);
__builtin_memmove((R+8),gp(0x850078),4);
}
B607051:{NFSU2_TR(0x607051);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607054:{NFSU2_TR(0x607054);
__builtin_memmove((R+20),gp(0x83aab4),4);
}
B60705a:{NFSU2_TR(0x60705a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B60705e:{NFSU2_TR(0x60705e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6070a1;}}
}
B607060:L607060:{c.instructions+=2;NFSU2_TR(0x607060);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607063:{NFSU2_TR(0x607063);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6070a1;}}
}
B607065:L607065:{c.instructions+=4;NFSU2_TR(0x607065);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607068:{NFSU2_TR(0x607068);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x6ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B60706d:{NFSU2_TR(0x60706d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607070:{NFSU2_TR(0x607070);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607088;}}
}
B607072:L607072:{c.instructions+=2;NFSU2_TR(0x607072);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607074:{NFSU2_TR(0x607074);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60707f;}}
}
B607076:L607076:{c.instructions+=2;NFSU2_TR(0x607076);
s1(0x83abc8,u8(u32(m1(0x83abc8))+u32(u8(0xaull))));
}
B60707d:{NFSU2_TR(0x60707d);
{goto L6070a1;}
}
B60707f:L60707f:{c.instructions+=3;NFSU2_TR(0x60707f);
__builtin_memmove((R+0),gp(0x83abc9),1);
}
B607084:{NFSU2_TR(0x607084);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xaull))));
}
B607086:{NFSU2_TR(0x607086);
{goto L60709c;}
}
B607088:L607088:{c.instructions+=2;NFSU2_TR(0x607088);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60708a:{NFSU2_TR(0x60708a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607095;}}
}
B60708c:L60708c:{c.instructions+=2;NFSU2_TR(0x60708c);
s1(0x83abc8,u8(u32(m1(0x83abc8))+u32(u8(0x6ull))));
}
B607093:{NFSU2_TR(0x607093);
{goto L6070a1;}
}
B607095:L607095:{c.instructions+=2;NFSU2_TR(0x607095);
__builtin_memmove((R+0),gp(0x83abc9),1);
}
B60709a:{NFSU2_TR(0x60709a);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x6ull))));
}
B60709c:L60709c:{c.instructions+=1;NFSU2_TR(0x60709c);
__builtin_memmove(gp(0x83abc9),(R+0),1);
}
B6070a1:L6070a1:{c.instructions+=5;NFSU2_TR(0x6070a1);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B6070a6:{NFSU2_TR(0x6070a6);
__builtin_memmove((R+4),gp(0x866a14),4);
}
B6070ac:{NFSU2_TR(0x6070ac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6070af:{NFSU2_TR(0x6070af);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B6070b4:{NFSU2_TR(0x6070b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6070d3;}}
}
B6070b6:L6070b6:{c.instructions+=2;NFSU2_TR(0x6070b6);
u8 U[2];
__builtin_memmove((U+0),gp(0x89cf69),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6070bd:{NFSU2_TR(0x6070bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6070e9;}}
}
B6070bf:L6070bf:{c.instructions+=2;NFSU2_TR(0x6070bf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6070c1:{NFSU2_TR(0x6070c1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6070e9;}}
}
B6070c3:L6070c3:{c.instructions+=2;NFSU2_TR(0x6070c3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6070c5:{NFSU2_TR(0x6070c5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6070dd;}}
}
B6070c7:L6070c7:{c.instructions+=2;NFSU2_TR(0x6070c7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6070ca:{NFSU2_TR(0x6070ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60710c;}}
}
B6070cc:L6070cc:{c.instructions+=2;NFSU2_TR(0x6070cc);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6070cf:{NFSU2_TR(0x6070cf);
if(r1(R+518)){{goto L6070dd;}}
}
B6070d1:L6070d1:{c.instructions+=1;NFSU2_TR(0x6070d1);
{goto L60710c;}
}
B6070d3:L6070d3:{c.instructions+=3;NFSU2_TR(0x6070d3);
__builtin_memmove((R+8),gp(0x89cf69),1);
}
B6070d9:{NFSU2_TR(0x6070d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6070db:{NFSU2_TR(0x6070db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6070e9;}}
}
B6070dd:L6070dd:{c.instructions+=2;NFSU2_TR(0x6070dd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6070df:{NFSU2_TR(0x6070df);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6070e9;}}
}
B6070e1:L6070e1:{c.instructions+=2;NFSU2_TR(0x6070e1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6070e3:{NFSU2_TR(0x6070e3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6070e9;}}
}
B6070e5:L6070e5:{c.instructions+=2;NFSU2_TR(0x6070e5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6070e7:{NFSU2_TR(0x6070e7);
{goto L6070ee;}
}
B6070e9:L6070e9:{c.instructions+=1;NFSU2_TR(0x6070e9);
w4(R+0,u32(0x1ull));
}
B6070ee:L6070ee:{c.instructions+=6;NFSU2_TR(0x6070ee);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B6070f0:{NFSU2_TR(0x6070f0);
__builtin_memmove((R+4),(R+28),4);
}
B6070f2:{NFSU2_TR(0x6070f2);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6070f4:{NFSU2_TR(0x6070f4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x9ull))));
}
B6070f7:{NFSU2_TR(0x6070f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6070f8:{NFSU2_TR(0x6070f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6070fdull));
TAIL_STATIC(0x605c70u,605);
}
B6070fd:L6070fd:{c.instructions+=3;NFSU2_TR(0x6070fd);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6070ff:{NFSU2_TR(0x6070ff);
__builtin_memmove((R+4),(R+12),4);
}
B607101:{NFSU2_TR(0x607101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607106ull));
TAIL_STATIC(0x5eba30u,5eb);
}
B607106:L607106:{c.instructions+=1;NFSU2_TR(0x607106);
{goto L60710c;}
}
B607108:L607108:{c.instructions+=1;NFSU2_TR(0x607108);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B60710c:L60710c:{c.instructions+=2;NFSU2_TR(0x60710c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B607110:{NFSU2_TR(0x607110);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60711a;}}
}
B607112:L607112:{c.instructions+=2;NFSU2_TR(0x607112);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607115:{NFSU2_TR(0x607115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60711aull));
TAIL_STATIC(0x42b330u,42b);
}
B60711a:L60711a:{c.instructions+=3;NFSU2_TR(0x60711a);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60711e:{NFSU2_TR(0x60711e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607120:{NFSU2_TR(0x607120);
if(r1(R+518)){{goto L607148;}}
}
B607122:L607122:{c.instructions+=6;NFSU2_TR(0x607122);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B607128:{NFSU2_TR(0x607128);
__builtin_memmove((R+8),gp(0x7a55c0),4);
}
B60712e:{NFSU2_TR(0x60712e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x974ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607134:{NFSU2_TR(0x607134);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x978ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60713a:{NFSU2_TR(0x60713a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x998ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B607141:{NFSU2_TR(0x607141);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x999ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B607148:L607148:{c.instructions+=3;NFSU2_TR(0x607148);
__builtin_memmove((R+0),gp(0x8650b0),4);
}
B60714d:{NFSU2_TR(0x60714d);
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
B60714f:{NFSU2_TR(0x60714f);
if(r1(R+518)){{goto L60715c;}}
}
B607151:L607151:{c.instructions+=2;NFSU2_TR(0x607151);
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
B607153:{NFSU2_TR(0x607153);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60715c;}}
}
B607155:L607155:{c.instructions+=2;NFSU2_TR(0x607155);
__builtin_memmove((R+4),(R+24),4);
}
B607157:{NFSU2_TR(0x607157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60715cull));
TAIL_STATIC(0x5f8200u,5f8);
}
B60715c:L60715c:{c.instructions+=6;NFSU2_TR(0x60715c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60715d:{NFSU2_TR(0x60715d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60715e:{NFSU2_TR(0x60715e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60715f:{NFSU2_TR(0x60715f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B607160:{NFSU2_TR(0x607160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B607161:{NFSU2_TR(0x607161);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B607180:L607180:{c.instructions+=8;NFSU2_TR(0x607180);
__builtin_memmove((R+0),gp(0x850078),4);
}
B607185:{NFSU2_TR(0x607185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B607188:{NFSU2_TR(0x607188);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60718b:{NFSU2_TR(0x60718b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60718c:{NFSU2_TR(0x60718c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60718d:{NFSU2_TR(0x60718d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60718e:{NFSU2_TR(0x60718e);
__builtin_memmove((R+12),(R+4),4);
}
B607190:{NFSU2_TR(0x607190);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60719c;}}
}
B607192:L607192:{c.instructions+=2;NFSU2_TR(0x607192);
w4(R+4,u32(0x85ad40ull));
}
B607197:{NFSU2_TR(0x607197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60719cull));
TAIL_STATIC(0x532e30u,532);
}
B60719c:L60719c:{c.instructions+=7;NFSU2_TR(0x60719c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B60719e:{NFSU2_TR(0x60719e);
s4(0x89e7b0,u32(0x7ull));
}
B6071a8:{NFSU2_TR(0x6071a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6071ae:{NFSU2_TR(0x6071ae);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B6071b3:{NFSU2_TR(0x6071b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6071b5:{NFSU2_TR(0x6071b5);
__builtin_memmove(gp(0x89e7bc),(R+24),4);
}
B6071bb:{NFSU2_TR(0x6071bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6071db;}}
}
B6071bd:L6071bd:{c.instructions+=2;NFSU2_TR(0x6071bd);
u8 U[8];
__builtin_memmove((U+0),gp(0x8669f4),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+24)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6071c3:{NFSU2_TR(0x6071c3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6071db;}}
}
B6071c5:L6071c5:{c.instructions+=2;NFSU2_TR(0x6071c5);
u8 U[8];
__builtin_memmove((U+0),gp(0x866a14),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+24)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6071cb:{NFSU2_TR(0x6071cb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6071db;}}
}
B6071cd:L6071cd:{c.instructions+=3;NFSU2_TR(0x6071cd);
__builtin_memmove((R+0),gp(0x890080),4);
}
B6071d2:{NFSU2_TR(0x6071d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6071d5:{NFSU2_TR(0x6071d5);
__builtin_memmove(gp(0x89e7c0),(R+4),4);
}
B6071db:L6071db:{c.instructions+=2;NFSU2_TR(0x6071db);
__builtin_memmove((R+4),(R+12),4);
}
B6071dd:{NFSU2_TR(0x6071dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6071e2ull));
TAIL_STATIC(0x5fca90u,5fc);
}
B6071e2:L6071e2:{c.instructions+=8;NFSU2_TR(0x6071e2);
__builtin_memmove((R+0),gp(0x890080),4);
}
B6071e7:{NFSU2_TR(0x6071e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6071ea:{NFSU2_TR(0x6071ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6071ed:{NFSU2_TR(0x6071ed);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6071ef:{NFSU2_TR(0x6071ef);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6071f1:{NFSU2_TR(0x6071f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6071f5:{NFSU2_TR(0x6071f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6071f9:{NFSU2_TR(0x6071f9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L607242;}}
}
B6071fb:L6071fb:{c.instructions+=2;NFSU2_TR(0x6071fb);
__builtin_memmove((R+28),(R+4),4);
}
B6071fd:{NFSU2_TR(0x6071fd);
{goto L607204;}
}
B6071ff:L6071ff:{c.instructions+=1;NFSU2_TR(0x6071ff);
__builtin_memmove((R+0),gp(0x890080),4);
}
B607204:L607204:{c.instructions+=8;NFSU2_TR(0x607204);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607207:{NFSU2_TR(0x607207);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60720a:{NFSU2_TR(0x60720a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1f0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B607210:{NFSU2_TR(0x607210);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B607212:{NFSU2_TR(0x607212);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B607216:{NFSU2_TR(0x607216);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607217:{NFSU2_TR(0x607217);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B60721b:{NFSU2_TR(0x60721b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607220ull));
TAIL_STATIC(0x5fc2a0u,5fc);
}
B607220:L607220:{c.instructions+=11;NFSU2_TR(0x607220);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607223:{NFSU2_TR(0x607223);
__builtin_memmove((R+8),(R+0),4);
}
B607225:{NFSU2_TR(0x607225);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x1f0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B60722b:{NFSU2_TR(0x60722b);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B60722f:{NFSU2_TR(0x60722f);
u8 U[16];
w4(U+0,u32(u32(u32(0xbd0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B607236:{NFSU2_TR(0x607236);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B607239:{NFSU2_TR(0x607239);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B60723a:{NFSU2_TR(0x60723a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B60723b:{NFSU2_TR(0x60723b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60723d:{NFSU2_TR(0x60723d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607240:{NFSU2_TR(0x607240);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6071ffu);}goto L6071ff;}}
}
B607242:L607242:{c.instructions+=4;NFSU2_TR(0x607242);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607245:{NFSU2_TR(0x607245);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B607247:{NFSU2_TR(0x607247);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607249:{NFSU2_TR(0x607249);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60726b;}}
}
B60724b:L60724b:{c.instructions+=1;NFSU2_TR(0x60724b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B607251:L607251:{c.instructions+=9;NFSU2_TR(0x607251);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B607253:{NFSU2_TR(0x607253);
__builtin_memmove((R+24),gp(0x86518c),4);
}
B607259:{NFSU2_TR(0x607259);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60725c:{NFSU2_TR(0x60725c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B607260:{NFSU2_TR(0x607260);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607263:{NFSU2_TR(0x607263);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B607264:{NFSU2_TR(0x607264);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B607267:{NFSU2_TR(0x607267);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B607269:{NFSU2_TR(0x607269);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607251u);}goto L607251;}}
}
B60726b:L60726b:{c.instructions+=5;NFSU2_TR(0x60726b);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B607271:{NFSU2_TR(0x607271);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B607274:{NFSU2_TR(0x607274);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607279:{NFSU2_TR(0x607279);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60727b:{NFSU2_TR(0x60727b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607280ull));
TAIL_STATIC(0x577400u,577);
}
B607280:L607280:{c.instructions+=6;NFSU2_TR(0x607280);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B607285:{NFSU2_TR(0x607285);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607288:{NFSU2_TR(0x607288);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60728f:{NFSU2_TR(0x60728f);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B607294:{NFSU2_TR(0x607294);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607296:{NFSU2_TR(0x607296);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6076bc;}}
}
B60729c:L60729c:{c.instructions+=3;NFSU2_TR(0x60729c);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B6072a1:{NFSU2_TR(0x6072a1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6072a3:{NFSU2_TR(0x6072a3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6076bc;}}
}
B6072a9:L6072a9:{c.instructions+=3;NFSU2_TR(0x6072a9);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B6072ae:{NFSU2_TR(0x6072ae);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6072b0:{NFSU2_TR(0x6072b0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6076bc;}}
}
B6072b6:L6072b6:{c.instructions+=2;NFSU2_TR(0x6072b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6072bc:{NFSU2_TR(0x6072bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6072c1ull));
TAIL_STATIC(0x40be80u,40b);
}
B6072c1:L6072c1:{c.instructions+=2;NFSU2_TR(0x6072c1);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7c0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6072c8:{NFSU2_TR(0x6072c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6072d7;}}
}
B6072ca:L6072ca:{c.instructions+=3;NFSU2_TR(0x6072ca);
__builtin_memmove((R+0),gp(0x89e7c4),4);
}
B6072cf:{NFSU2_TR(0x6072cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6072d1:{NFSU2_TR(0x6072d1);
if(r1(R+518)){{goto L6076bc;}}
}
B6072d7:L6072d7:{c.instructions+=5;NFSU2_TR(0x6072d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6072db:{NFSU2_TR(0x6072db);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6072dd:{NFSU2_TR(0x6072dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6072e1:{NFSU2_TR(0x6072e1);
u8 U[12];
w4(U+0,u32(u32(u32(0xbd0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6072e8:{NFSU2_TR(0x6072e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6072ee:L6072ee:{c.instructions+=1;NFSU2_TR(0x6072ee);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6072f0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6072eeu);}goto L6072ee;}
}
B6072f0:L6072f0:{c.instructions+=1;NFSU2_TR(0x6072f0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L607319;}}
}
B6072f2:L6072f2:{c.instructions+=3;NFSU2_TR(0x6072f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6072f6:{NFSU2_TR(0x6072f6);
w4(R+0,u32(0x1cull));
}
B6072fb:{NFSU2_TR(0x6072fb);
u8 U[12];
w4(U+0,u32(u32(u32(0xbd0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B607302:L607302:{c.instructions+=8;NFSU2_TR(0x607302);
__builtin_memmove((R+24),gp(0x890080),4);
}
B607308:{NFSU2_TR(0x607308);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B60730b:{NFSU2_TR(0x60730b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60730e:{NFSU2_TR(0x60730e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B607310:{NFSU2_TR(0x607310);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B607313:{NFSU2_TR(0x607313);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B607316:{NFSU2_TR(0x607316);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B607317:{NFSU2_TR(0x607317);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607302u);}goto L607302;}}
}
B607319:L607319:{c.instructions+=3;NFSU2_TR(0x607319);
__builtin_memmove((R+0),gp(0x8900b4),4);
}
B60731e:{NFSU2_TR(0x60731e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607320:{NFSU2_TR(0x607320);
if(r1(R+518)){{goto L60732e;}}
}
B607322:L607322:{c.instructions+=3;NFSU2_TR(0x607322);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B607328:{NFSU2_TR(0x607328);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60732c:{NFSU2_TR(0x60732c);
{goto L607336;}
}
B60732e:L60732e:{c.instructions+=1;NFSU2_TR(0x60732e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B607336:L607336:{c.instructions+=3;NFSU2_TR(0x607336);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60733a:{NFSU2_TR(0x60733a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60733c:{NFSU2_TR(0x60733c);
if(r1(R+518)){{goto L6076bc;}}
}
B607342:L607342:{c.instructions+=8;NFSU2_TR(0x607342);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B607347:{NFSU2_TR(0x607347);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B60734a:{NFSU2_TR(0x60734a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60734e:{NFSU2_TR(0x60734e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607351:{NFSU2_TR(0x607351);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B607353:{NFSU2_TR(0x607353);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607355:{NFSU2_TR(0x607355);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607359:{NFSU2_TR(0x607359);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6076bc;}}
}
B60735f:L60735f:{c.instructions+=1;NFSU2_TR(0x60735f);
}
B607360:L607360:{c.instructions+=5;NFSU2_TR(0x607360);
u8 U[16];
w4(U+0,u32(u32(u32(0xbd0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B607367:{NFSU2_TR(0x607367);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B607369:{NFSU2_TR(0x607369);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60736c:{NFSU2_TR(0x60736c);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B607370:{NFSU2_TR(0x607370);
if(r1(R+518)){{goto L6076ac;}}
}
B607376:L607376:{c.instructions+=2;NFSU2_TR(0x607376);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60737a:{NFSU2_TR(0x60737a);
if(r1(R+518)){{goto L6076ac;}}
}
B607380:L607380:{c.instructions+=3;NFSU2_TR(0x607380);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607382:{NFSU2_TR(0x607382);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607386:{NFSU2_TR(0x607386);
if(r1(R+518)){{goto L607391;}}
}
B607388:L607388:{c.instructions+=3;NFSU2_TR(0x607388);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60738b:{NFSU2_TR(0x60738b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60738f:{NFSU2_TR(0x60738f);
{goto L607399;}
}
B607391:L607391:{c.instructions+=1;NFSU2_TR(0x607391);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B607399:L607399:{c.instructions+=8;NFSU2_TR(0x607399);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B60739f:{NFSU2_TR(0x60739f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6073a2:{NFSU2_TR(0x6073a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6073a5:{NFSU2_TR(0x6073a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6073ab:{NFSU2_TR(0x6073ab);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6073ad:{NFSU2_TR(0x6073ad);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6073b2:{NFSU2_TR(0x6073b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6073b4:{NFSU2_TR(0x6073b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6073b9ull));
TAIL_STATIC(0x577400u,577);
}
B6073b9:L6073b9:{c.instructions+=6;NFSU2_TR(0x6073b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6073bf:{NFSU2_TR(0x6073bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6073c1:{NFSU2_TR(0x6073c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6073c4:{NFSU2_TR(0x6073c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w2(U+4,u16(0x7ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6073ca:{NFSU2_TR(0x6073ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6073cd:{NFSU2_TR(0x6073cd);
if(r1(R+518)){{goto L6073f9;}}
}
B6073cf:L6073cf:{c.instructions+=1;NFSU2_TR(0x6073cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6073d4ull));
TAIL_STATIC(0x56d710u,56d);
}
B6073d4:L6073d4:{c.instructions+=3;NFSU2_TR(0x6073d4);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B6073d9:{NFSU2_TR(0x6073d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6073db:{NFSU2_TR(0x6073db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6073e6;}}
}
B6073dd:L6073dd:{c.instructions+=3;NFSU2_TR(0x6073dd);
__builtin_memmove((R+0),gp(0x890104),4);
}
B6073e2:{NFSU2_TR(0x6073e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6073e4:{NFSU2_TR(0x6073e4);
if(r1(R+518)){{goto L6073f9;}}
}
B6073e6:L6073e6:{c.instructions+=3;NFSU2_TR(0x6073e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B6073ea:{NFSU2_TR(0x6073ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6073f0:{NFSU2_TR(0x6073f0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6073f9;}}
}
B6073f2:L6073f2:{c.instructions+=2;NFSU2_TR(0x6073f2);
__builtin_memmove((R+4),(R+24),4);
}
B6073f4:{NFSU2_TR(0x6073f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6073f9ull));
TAIL_STATIC(0x5f7a00u,5f7);
}
B6073f9:L6073f9:{c.instructions+=3;NFSU2_TR(0x6073f9);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B6073fe:{NFSU2_TR(0x6073fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607400:{NFSU2_TR(0x607400);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607418;}}
}
B607402:L607402:{c.instructions+=3;NFSU2_TR(0x607402);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B607407:{NFSU2_TR(0x607407);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607409:{NFSU2_TR(0x607409);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L607418;}}
}
B60740b:L60740b:{c.instructions+=3;NFSU2_TR(0x60740b);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B607410:{NFSU2_TR(0x607410);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607412:{NFSU2_TR(0x607412);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6074e3;}}
}
B607418:L607418:{c.instructions+=3;NFSU2_TR(0x607418);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60741b:{NFSU2_TR(0x60741b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60741d:{NFSU2_TR(0x60741d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607429;}}
}
B60741f:L60741f:{c.instructions+=2;NFSU2_TR(0x60741f);
__builtin_memmove((R+4),(R+12),4);
}
B607421:{NFSU2_TR(0x607421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607426ull));
TAIL_STATIC(0x5eefb0u,5ee);
}
B607426:L607426:{c.instructions+=1;NFSU2_TR(0x607426);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B607429:L607429:{c.instructions+=2;NFSU2_TR(0x607429);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607430:{NFSU2_TR(0x607430);
if(r1(R+518)){{goto L607461;}}
}
B607432:L607432:{c.instructions+=3;NFSU2_TR(0x607432);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B607436:{NFSU2_TR(0x607436);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60743c:{NFSU2_TR(0x60743c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607458;}}
}
B60743e:L60743e:{c.instructions+=6;NFSU2_TR(0x60743e);
__builtin_memmove((R+0),gp(0x890118),4);
}
B607443:{NFSU2_TR(0x607443);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B60744a:{NFSU2_TR(0x60744a);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B60744e:{NFSU2_TR(0x60744e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+0))));
}
B607450:{NFSU2_TR(0x607450);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607456:{NFSU2_TR(0x607456);
{goto L607476;}
}
B607458:L607458:{c.instructions+=3;NFSU2_TR(0x607458);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B60745d:{NFSU2_TR(0x60745d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B60745f:{NFSU2_TR(0x60745f);
{goto L607470;}
}
B607461:L607461:{c.instructions+=3;NFSU2_TR(0x607461);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607465:{NFSU2_TR(0x607465);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B607469:{NFSU2_TR(0x607469);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89d028ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B607470:L607470:{c.instructions+=1;NFSU2_TR(0x607470);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607476:L607476:{c.instructions+=9;NFSU2_TR(0x607476);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B60747a:{NFSU2_TR(0x60747a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60747e:{NFSU2_TR(0x60747e);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B607482:{NFSU2_TR(0x607482);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607484:{NFSU2_TR(0x607484);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607486:{NFSU2_TR(0x607486);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607487:{NFSU2_TR(0x607487);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607488:{NFSU2_TR(0x607488);
w4(R+4,u32(0x89cf48ull));
}
B60748d:{NFSU2_TR(0x60748d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607492ull));
TAIL_STATIC(0x602000u,602);
}
B607492:L607492:{c.instructions+=2;NFSU2_TR(0x607492);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607494:{NFSU2_TR(0x607494);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6074a1;}}
}
B607496:L607496:{c.instructions+=2;NFSU2_TR(0x607496);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B60749c:{NFSU2_TR(0x60749c);
{goto L60769f;}
}
B6074a1:L6074a1:{c.instructions+=3;NFSU2_TR(0x6074a1);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B6074a6:{NFSU2_TR(0x6074a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6074a8:{NFSU2_TR(0x6074a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6074d5;}}
}
B6074aa:L6074aa:{c.instructions+=3;NFSU2_TR(0x6074aa);
__builtin_memmove((R+0),gp(0x890104),4);
}
B6074af:{NFSU2_TR(0x6074af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6074b1:{NFSU2_TR(0x6074b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6074d5;}}
}
B6074b3:L6074b3:{c.instructions+=3;NFSU2_TR(0x6074b3);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B6074b8:{NFSU2_TR(0x6074b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6074ba:{NFSU2_TR(0x6074ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6074d5;}}
}
B6074bc:L6074bc:{c.instructions+=3;NFSU2_TR(0x6074bc);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B6074c1:{NFSU2_TR(0x6074c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6074c3:{NFSU2_TR(0x6074c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6074d5;}}
}
B6074c5:L6074c5:{c.instructions+=3;NFSU2_TR(0x6074c5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6074c9:{NFSU2_TR(0x6074c9);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x9ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6074cd:{NFSU2_TR(0x6074cd);
if(r1(R+518)){{goto L6074d5;}}
}
B6074cf:L6074cf:{c.instructions+=2;NFSU2_TR(0x6074cf);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x8ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6074d3:{NFSU2_TR(0x6074d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60754b;}}
}
B6074d5:L6074d5:{c.instructions+=4;NFSU2_TR(0x6074d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6074d7:{NFSU2_TR(0x6074d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6074da:{NFSU2_TR(0x6074da);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x190ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6074e1:{NFSU2_TR(0x6074e1);
{goto L60754b;}
}
B6074e3:L6074e3:{c.instructions+=3;NFSU2_TR(0x6074e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6074e7:{NFSU2_TR(0x6074e7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6074e9:{NFSU2_TR(0x6074e9);
if(r1(R+518)){{goto L607503;}}
}
B6074eb:L6074eb:{c.instructions+=1;NFSU2_TR(0x6074eb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L60754b;}}
}
B6074ed:L6074ed:{c.instructions+=3;NFSU2_TR(0x6074ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6074f0:{NFSU2_TR(0x6074f0);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6074f7:{NFSU2_TR(0x6074f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60754b;}}
}
B6074f9:L6074f9:{c.instructions+=4;NFSU2_TR(0x6074f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6074ff:{NFSU2_TR(0x6074ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607500:{NFSU2_TR(0x607500);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607501:{NFSU2_TR(0x607501);
{goto L607544;}
}
B607503:L607503:{c.instructions+=4;NFSU2_TR(0x607503);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B607507:{NFSU2_TR(0x607507);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60750d:{NFSU2_TR(0x60750d);
__builtin_memmove((R+4),(R+12),4);
}
B60750f:{NFSU2_TR(0x60750f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607534;}}
}
B607511:L607511:{c.instructions+=1;NFSU2_TR(0x607511);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607516ull));
TAIL_STATIC(0x5eef70u,5ee);
}
B607516:L607516:{c.instructions+=7;NFSU2_TR(0x607516);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B607519:{NFSU2_TR(0x607519);
__builtin_memmove((R+8),gp(0x890118),4);
}
B60751f:{NFSU2_TR(0x60751f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B607526:{NFSU2_TR(0x607526);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B60752a:{NFSU2_TR(0x60752a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+0))));
}
B60752c:{NFSU2_TR(0x60752c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607532:{NFSU2_TR(0x607532);
{goto L60754b;}
}
B607534:L607534:{c.instructions+=1;NFSU2_TR(0x607534);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607539ull));
TAIL_STATIC(0x5eef70u,5ee);
}
B607539:L607539:{c.instructions+=4;NFSU2_TR(0x607539);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B60753c:{NFSU2_TR(0x60753c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B607542:{NFSU2_TR(0x607542);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607543:{NFSU2_TR(0x607543);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607544:L607544:{c.instructions+=2;NFSU2_TR(0x607544);
__builtin_memmove((R+4),(R+24),4);
}
B607546:{NFSU2_TR(0x607546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60754bull));
TAIL_STATIC(0x5f7ec0u,5f7);
}
B60754b:L60754b:{c.instructions+=3;NFSU2_TR(0x60754b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607551:{NFSU2_TR(0x607551);
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
B607553:{NFSU2_TR(0x607553);
if(r1(R+518)){{goto L60755a;}}
}
B607555:L607555:{c.instructions+=1;NFSU2_TR(0x607555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60755aull));
TAIL_STATIC(0x4022c0u,402);
}
B60755a:L60755a:{c.instructions+=3;NFSU2_TR(0x60755a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607560:{NFSU2_TR(0x607560);
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
B607562:{NFSU2_TR(0x607562);
if(r1(R+518)){{goto L607569;}}
}
B607564:L607564:{c.instructions+=1;NFSU2_TR(0x607564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607569ull));
TAIL_STATIC(0x4022c0u,402);
}
B607569:L607569:{c.instructions+=6;NFSU2_TR(0x607569);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60756c:{NFSU2_TR(0x60756c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607570:{NFSU2_TR(0x607570);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B607571:{NFSU2_TR(0x607571);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607573:{NFSU2_TR(0x607573);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607576:{NFSU2_TR(0x607576);
if(r1(R+518)){{goto L60764f;}}
}
B60757c:L60757c:{c.instructions+=2;NFSU2_TR(0x60757c);
__builtin_memmove((R+4),(R+0),4);
}
B60757e:{NFSU2_TR(0x60757e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607583ull));
TAIL_STATIC(0x5ea530u,5ea);
}
B607583:L607583:{c.instructions+=4;NFSU2_TR(0x607583);
__builtin_memmove((R+8),gp(0x850078),4);
}
B607589:{NFSU2_TR(0x607589);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60758c:{NFSU2_TR(0x60758c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B607590:{NFSU2_TR(0x607590);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6075e2;}}
}
B607592:L607592:{c.instructions+=2;NFSU2_TR(0x607592);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607599:{NFSU2_TR(0x607599);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6075e2;}}
}
B60759b:L60759b:{c.instructions+=3;NFSU2_TR(0x60759b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60759e:{NFSU2_TR(0x60759e);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x6ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6075a3:{NFSU2_TR(0x6075a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6075c2;}}
}
B6075a5:L6075a5:{c.instructions+=4;NFSU2_TR(0x6075a5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6075a9:{NFSU2_TR(0x6075a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6075ac:{NFSU2_TR(0x6075ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6075ae:{NFSU2_TR(0x6075ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6075b9;}}
}
B6075b0:L6075b0:{c.instructions+=2;NFSU2_TR(0x6075b0);
s1(0x83abc8,u8(u32(m1(0x83abc8))+u32(u8(0xaull))));
}
B6075b7:{NFSU2_TR(0x6075b7);
{goto L6075e2;}
}
B6075b9:L6075b9:{c.instructions+=3;NFSU2_TR(0x6075b9);
__builtin_memmove((R+0),gp(0x83abc9),1);
}
B6075be:{NFSU2_TR(0x6075be);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xaull))));
}
B6075c0:{NFSU2_TR(0x6075c0);
{goto L6075dd;}
}
B6075c2:L6075c2:{c.instructions+=4;NFSU2_TR(0x6075c2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6075c6:{NFSU2_TR(0x6075c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6075c9:{NFSU2_TR(0x6075c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6075cb:{NFSU2_TR(0x6075cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6075d6;}}
}
B6075cd:L6075cd:{c.instructions+=2;NFSU2_TR(0x6075cd);
s1(0x83abc8,u8(u32(m1(0x83abc8))+u32(u8(0x6ull))));
}
B6075d4:{NFSU2_TR(0x6075d4);
{goto L6075e2;}
}
B6075d6:L6075d6:{c.instructions+=2;NFSU2_TR(0x6075d6);
__builtin_memmove((R+0),gp(0x83abc9),1);
}
B6075db:{NFSU2_TR(0x6075db);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x6ull))));
}
B6075dd:L6075dd:{c.instructions+=1;NFSU2_TR(0x6075dd);
__builtin_memmove(gp(0x83abc9),(R+0),1);
}
B6075e2:L6075e2:{c.instructions+=5;NFSU2_TR(0x6075e2);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B6075e7:{NFSU2_TR(0x6075e7);
__builtin_memmove((R+4),gp(0x866a14),4);
}
B6075ed:{NFSU2_TR(0x6075ed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6075f0:{NFSU2_TR(0x6075f0);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B6075f5:{NFSU2_TR(0x6075f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607618;}}
}
B6075f7:L6075f7:{c.instructions+=2;NFSU2_TR(0x6075f7);
u8 U[2];
__builtin_memmove((U+0),gp(0x89cf69),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6075fe:{NFSU2_TR(0x6075fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60762e;}}
}
B607600:L607600:{c.instructions+=2;NFSU2_TR(0x607600);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607602:{NFSU2_TR(0x607602);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L60762e;}}
}
B607604:L607604:{c.instructions+=2;NFSU2_TR(0x607604);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607606:{NFSU2_TR(0x607606);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L607622;}}
}
B607608:L607608:{c.instructions+=2;NFSU2_TR(0x607608);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60760b:{NFSU2_TR(0x60760b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607653;}}
}
B60760d:L60760d:{c.instructions+=2;NFSU2_TR(0x60760d);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607614:{NFSU2_TR(0x607614);
if(r1(R+518)){{goto L607622;}}
}
B607616:L607616:{c.instructions+=1;NFSU2_TR(0x607616);
{goto L607653;}
}
B607618:L607618:{c.instructions+=3;NFSU2_TR(0x607618);
__builtin_memmove((R+8),gp(0x89cf69),1);
}
B60761e:{NFSU2_TR(0x60761e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607620:{NFSU2_TR(0x607620);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60762e;}}
}
B607622:L607622:{c.instructions+=2;NFSU2_TR(0x607622);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607624:{NFSU2_TR(0x607624);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L60762e;}}
}
B607626:L607626:{c.instructions+=2;NFSU2_TR(0x607626);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607628:{NFSU2_TR(0x607628);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L60762e;}}
}
B60762a:L60762a:{c.instructions+=2;NFSU2_TR(0x60762a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60762c:{NFSU2_TR(0x60762c);
{goto L607633;}
}
B60762e:L60762e:{c.instructions+=1;NFSU2_TR(0x60762e);
w4(R+0,u32(0x1ull));
}
B607633:L607633:{c.instructions+=6;NFSU2_TR(0x607633);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607637:{NFSU2_TR(0x607637);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B607639:{NFSU2_TR(0x607639);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B60763b:{NFSU2_TR(0x60763b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x9ull))));
}
B60763e:{NFSU2_TR(0x60763e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60763f:{NFSU2_TR(0x60763f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607644ull));
TAIL_STATIC(0x605c70u,605);
}
B607644:L607644:{c.instructions+=3;NFSU2_TR(0x607644);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607646:{NFSU2_TR(0x607646);
__builtin_memmove((R+4),(R+28),4);
}
B607648:{NFSU2_TR(0x607648);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60764dull));
TAIL_STATIC(0x5eba30u,5eb);
}
B60764d:L60764d:{c.instructions+=1;NFSU2_TR(0x60764d);
{goto L607653;}
}
B60764f:L60764f:{c.instructions+=1;NFSU2_TR(0x60764f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B607653:L607653:{c.instructions+=2;NFSU2_TR(0x607653);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B607657:{NFSU2_TR(0x607657);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607661;}}
}
B607659:L607659:{c.instructions+=2;NFSU2_TR(0x607659);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60765c:{NFSU2_TR(0x60765c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607661ull));
TAIL_STATIC(0x42b330u,42b);
}
B607661:L607661:{c.instructions+=9;NFSU2_TR(0x607661);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B607667:{NFSU2_TR(0x607667);
__builtin_memmove((R+8),gp(0x7a55c0),4);
}
B60766d:{NFSU2_TR(0x60766d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x974ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607673:{NFSU2_TR(0x607673);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x978ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607679:{NFSU2_TR(0x607679);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x998ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B607680:{NFSU2_TR(0x607680);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x999ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B607687:{NFSU2_TR(0x607687);
__builtin_memmove((R+0),gp(0x8650b0),4);
}
B60768c:{NFSU2_TR(0x60768c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60768e:{NFSU2_TR(0x60768e);
if(r1(R+518)){{goto L60769f;}}
}
B607690:L607690:{c.instructions+=3;NFSU2_TR(0x607690);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607694:{NFSU2_TR(0x607694);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607696:{NFSU2_TR(0x607696);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60769f;}}
}
B607698:L607698:{c.instructions+=2;NFSU2_TR(0x607698);
__builtin_memmove((R+4),(R+24),4);
}
B60769a:{NFSU2_TR(0x60769a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60769full));
TAIL_STATIC(0x5f8200u,5f8);
}
B60769f:L60769f:{c.instructions+=4;NFSU2_TR(0x60769f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6076a3:{NFSU2_TR(0x6076a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6076a7:{NFSU2_TR(0x6076a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6076a8:{NFSU2_TR(0x6076a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6076ac:L6076ac:{c.instructions+=5;NFSU2_TR(0x6076ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6076af:{NFSU2_TR(0x6076af);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6076b0:{NFSU2_TR(0x6076b0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6076b2:{NFSU2_TR(0x6076b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6076b6:{NFSU2_TR(0x6076b6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607360u);}goto L607360;}}
}
B6076bc:L6076bc:{c.instructions+=5;NFSU2_TR(0x6076bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6076bd:{NFSU2_TR(0x6076bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6076be:{NFSU2_TR(0x6076be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6076bf:{NFSU2_TR(0x6076bf);
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
B6076c2:{NFSU2_TR(0x6076c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6076d0:L6076d0:{c.instructions+=17;NFSU2_TR(0x6076d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6076d1:{NFSU2_TR(0x6076d1);
__builtin_memmove((R+20),(R+16),4);
}
B6076d3:{NFSU2_TR(0x6076d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B6076d6:{NFSU2_TR(0x6076d6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6076d8:{NFSU2_TR(0x6076d8);
u8 U[4];
w4(U+0,u32(0x77a084ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6076dd:{NFSU2_TR(0x6076dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6076e3:{NFSU2_TR(0x6076e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6076e4:{NFSU2_TR(0x6076e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6076eb:{NFSU2_TR(0x6076eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B6076ee:{NFSU2_TR(0x6076ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6076ef:{NFSU2_TR(0x6076ef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6076f0:{NFSU2_TR(0x6076f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6076f1:{NFSU2_TR(0x6076f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6076f2:{NFSU2_TR(0x6076f2);
__builtin_memmove((R+20),(R+4),4);
}
B6076f4:{NFSU2_TR(0x6076f4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6076f8:{NFSU2_TR(0x6076f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6076fc:{NFSU2_TR(0x6076fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607716;}}
}
B6076fe:L6076fe:{c.instructions+=1;NFSU2_TR(0x6076fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607703ull));
TAIL_STATIC(0x5eea40u,5ee);
}
B607703:L607703:{c.instructions+=2;NFSU2_TR(0x607703);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607706:{NFSU2_TR(0x607706);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607716;}}
}
B607708:L607708:{c.instructions+=1;NFSU2_TR(0x607708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60770dull));
TAIL_STATIC(0x4a3d30u,4a3);
}
B60770d:L60770d:{c.instructions+=3;NFSU2_TR(0x60770d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60770f:{NFSU2_TR(0x60770f);
__builtin_memmove((R+4),(R+20),4);
}
B607711:{NFSU2_TR(0x607711);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607716ull));
TAIL_STATIC(0x5fc900u,5fc);
}
B607716:L607716:{c.instructions+=2;NFSU2_TR(0x607716);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B60771a:{NFSU2_TR(0x60771a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607735;}}
}
B60771c:L60771c:{c.instructions+=7;NFSU2_TR(0x60771c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60771f:{NFSU2_TR(0x60771f);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B607724:{NFSU2_TR(0x607724);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B607726:{NFSU2_TR(0x607726);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B607729:{NFSU2_TR(0x607729);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60772e:{NFSU2_TR(0x60772e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B607730:{NFSU2_TR(0x607730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607735ull));
TAIL_STATIC(0x577400u,577);
}
B607735:L607735:{c.instructions+=3;NFSU2_TR(0x607735);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60773b:{NFSU2_TR(0x60773b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60773d:{NFSU2_TR(0x60773d);
if(r1(R+518)){{goto L60774d;}}
}
B60773f:L60773f:{c.instructions+=2;NFSU2_TR(0x60773f);
__builtin_memmove((R+4),(R+20),4);
}
B607741:{NFSU2_TR(0x607741);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607746ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607180u);}goto L607180;}
}
B607746:L607746:{c.instructions+=1;NFSU2_TR(0x607746);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc30ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60774d:L60774d:{c.instructions+=4;NFSU2_TR(0x60774d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607750:{NFSU2_TR(0x607750);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B607752:{NFSU2_TR(0x607752);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607754:{NFSU2_TR(0x607754);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6077b6;}}
}
B607756:L607756:{c.instructions+=2;NFSU2_TR(0x607756);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60775c:{NFSU2_TR(0x60775c);
__builtin_memmove((R+16),(R+16),4);
}
B607760:L607760:{c.instructions+=3;NFSU2_TR(0x607760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B607762:{NFSU2_TR(0x607762);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B607767:{NFSU2_TR(0x607767);
if(r1(R+518)){{goto L607772;}}
}
B607769:L607769:{c.instructions+=3;NFSU2_TR(0x607769);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B60776e:{NFSU2_TR(0x60776e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607770:{NFSU2_TR(0x607770);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6077ab;}}
}
B607772:L607772:{c.instructions+=2;NFSU2_TR(0x607772);
__builtin_memmove((R+4),(R+24),4);
}
B607774:{NFSU2_TR(0x607774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607779ull));
TAIL_STATIC(0x6016a0u,601);
}
B607779:L607779:{c.instructions+=2;NFSU2_TR(0x607779);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607780:{NFSU2_TR(0x607780);
if(r1(R+518)){{goto L6077ab;}}
}
B607782:L607782:{c.instructions+=4;NFSU2_TR(0x607782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B607784:{NFSU2_TR(0x607784);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607787:{NFSU2_TR(0x607787);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60778b:{NFSU2_TR(0x60778b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6077ab;}}
}
B60778d:L60778d:{c.instructions+=6;NFSU2_TR(0x60778d);
__builtin_memmove((R+0),gp(0x890118),4);
}
B607792:{NFSU2_TR(0x607792);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B607799:{NFSU2_TR(0x607799);
u8 U[16];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B60779d:{NFSU2_TR(0x60779d);
u8 U[12];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6077a1:{NFSU2_TR(0x6077a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6077a4:{NFSU2_TR(0x6077a4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6077ab;}}
}
B6077a6:L6077a6:{c.instructions+=2;NFSU2_TR(0x6077a6);
__builtin_memmove((R+0),(R+8),4);
}
B6077a8:{NFSU2_TR(0x6077a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6077ab:L6077ab:{c.instructions+=5;NFSU2_TR(0x6077ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6077ae:{NFSU2_TR(0x6077ae);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6077af:{NFSU2_TR(0x6077af);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6077b2:{NFSU2_TR(0x6077b2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6077b4:{NFSU2_TR(0x6077b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607760u);}goto L607760;}}
}
B6077b6:L6077b6:{c.instructions+=4;NFSU2_TR(0x6077b6);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B6077bb:{NFSU2_TR(0x6077bb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6077bd:{NFSU2_TR(0x6077bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6077bf:{NFSU2_TR(0x6077bf);
if(r1(R+518)){{goto L607926;}}
}
B6077c5:L6077c5:{c.instructions+=2;NFSU2_TR(0x6077c5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6077c8:{NFSU2_TR(0x6077c8);
if(r1(R+518)){{goto L607926;}}
}
B6077ce:L6077ce:{c.instructions+=3;NFSU2_TR(0x6077ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6077d4:{NFSU2_TR(0x6077d4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6077d6:{NFSU2_TR(0x6077d6);
if(r1(R+518)){{goto L607918;}}
}
B6077dc:L6077dc:{c.instructions+=3;NFSU2_TR(0x6077dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6077df:{NFSU2_TR(0x6077df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6077e2:{NFSU2_TR(0x6077e2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60786f;}}
}
B6077e8:L6077e8:{c.instructions+=2;NFSU2_TR(0x6077e8);
__builtin_memmove((R+12),gp(0x89e7b0),4);
}
B6077ee:{NFSU2_TR(0x6077ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6077f4:L6077f4:{c.instructions+=3;NFSU2_TR(0x6077f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6077f6:{NFSU2_TR(0x6077f6);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6077fb:{NFSU2_TR(0x6077fb);
if(r1(R+518)){{goto L607801;}}
}
B6077fd:L6077fd:{c.instructions+=2;NFSU2_TR(0x6077fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6077ff:{NFSU2_TR(0x6077ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607819;}}
}
B607801:L607801:{c.instructions+=3;NFSU2_TR(0x607801);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B607803:{NFSU2_TR(0x607803);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607805:{NFSU2_TR(0x607805);
if(r1(R+518)){{goto L607819;}}
}
B607807:L607807:{c.instructions+=3;NFSU2_TR(0x607807);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60780a:{NFSU2_TR(0x60780a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60780c:{NFSU2_TR(0x60780c);
if(r1(R+518)){{goto L607819;}}
}
B60780e:L60780e:{c.instructions+=3;NFSU2_TR(0x60780e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607811:{NFSU2_TR(0x607811);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B607817:{NFSU2_TR(0x607817);
if(r1(R+518)){{goto L607826;}}
}
B607819:L607819:{c.instructions+=5;NFSU2_TR(0x607819);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60781c:{NFSU2_TR(0x60781c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B60781d:{NFSU2_TR(0x60781d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B607820:{NFSU2_TR(0x607820);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B607822:{NFSU2_TR(0x607822);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6077f4u);}goto L6077f4;}}
}
B607824:L607824:{c.instructions+=1;NFSU2_TR(0x607824);
{goto L607875;}
}
B607826:L607826:{c.instructions+=3;NFSU2_TR(0x607826);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607829:{NFSU2_TR(0x607829);
w4(R+0,u32(0x1ull));
}
B60782e:{NFSU2_TR(0x60782e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60783b;}}
}
B607830:L607830:{c.instructions+=4;NFSU2_TR(0x607830);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B607832:{NFSU2_TR(0x607832);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607835:{NFSU2_TR(0x607835);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B607838:{NFSU2_TR(0x607838);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
}
B60783b:L60783b:{c.instructions+=6;NFSU2_TR(0x60783b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60783c:{NFSU2_TR(0x60783c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60783e:{NFSU2_TR(0x60783e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60783f:{NFSU2_TR(0x60783f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607840:{NFSU2_TR(0x607840);
__builtin_memmove((R+4),(R+20),4);
}
B607842:{NFSU2_TR(0x607842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607847ull));
TAIL_STATIC(0x606cb0u,606);
}
B607847:L607847:{c.instructions+=3;NFSU2_TR(0x607847);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B60784c:{NFSU2_TR(0x60784c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60784e:{NFSU2_TR(0x60784e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607859;}}
}
B607850:L607850:{c.instructions+=3;NFSU2_TR(0x607850);
__builtin_memmove((R+0),gp(0x890104),4);
}
B607855:{NFSU2_TR(0x607855);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607857:{NFSU2_TR(0x607857);
if(r1(R+518)){{goto L60786f;}}
}
B607859:L607859:{c.instructions+=2;NFSU2_TR(0x607859);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60785c:{NFSU2_TR(0x60785c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60786f;}}
}
B60785e:L60785e:{c.instructions+=2;NFSU2_TR(0x60785e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607864:{NFSU2_TR(0x607864);
u8 U[16];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x497423feull));
s4(u32(r4(U+8)),r4(U+12));
}
B60786f:L60786f:{c.instructions+=1;NFSU2_TR(0x60786f);
__builtin_memmove((R+12),gp(0x89e7b0),4);
}
B607875:L607875:{c.instructions+=2;NFSU2_TR(0x607875);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607878:{NFSU2_TR(0x607878);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60790a;}}
}
B60787e:L60787e:{c.instructions+=5;NFSU2_TR(0x60787e);
__builtin_memmove((R+8),gp(0x8900bc),4);
}
B607884:{NFSU2_TR(0x607884);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B607886:{NFSU2_TR(0x607886);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B607888:{NFSU2_TR(0x607888);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60788a:{NFSU2_TR(0x60788a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6078ae;}}
}
B60788c:L60788c:{c.instructions+=1;NFSU2_TR(0x60788c);
__builtin_memmove((R+16),(R+16),4);
}
B607890:L607890:{c.instructions+=5;NFSU2_TR(0x607890);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B607897:{NFSU2_TR(0x607897);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60789a:{NFSU2_TR(0x60789a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60789d:{NFSU2_TR(0x60789d);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6078a2:{NFSU2_TR(0x6078a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6078a5;}}
}
B6078a4:L6078a4:{c.instructions+=1;NFSU2_TR(0x6078a4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6078a5:L6078a5:{c.instructions+=3;NFSU2_TR(0x6078a5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6078a6:{NFSU2_TR(0x6078a6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6078a8:{NFSU2_TR(0x6078a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607890u);}goto L607890;}}
}
B6078aa:L6078aa:{c.instructions+=2;NFSU2_TR(0x6078aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6078ac:{NFSU2_TR(0x6078ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60790a;}}
}
B6078ae:L6078ae:{c.instructions+=4;NFSU2_TR(0x6078ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6078b1:{NFSU2_TR(0x6078b1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6078b3:{NFSU2_TR(0x6078b3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6078b5:{NFSU2_TR(0x6078b5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60790a;}}
}
B6078b7:L6078b7:{c.instructions+=2;NFSU2_TR(0x6078b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6078bd:{NFSU2_TR(0x6078bd);
__builtin_memmove((R+4),(R+4),4);
}
B6078c0:L6078c0:{c.instructions+=3;NFSU2_TR(0x6078c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6078c2:{NFSU2_TR(0x6078c2);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6078c7:{NFSU2_TR(0x6078c7);
if(r1(R+518)){{goto L6078cd;}}
}
B6078c9:L6078c9:{c.instructions+=2;NFSU2_TR(0x6078c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6078cb:{NFSU2_TR(0x6078cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6078ff;}}
}
B6078cd:L6078cd:{c.instructions+=8;NFSU2_TR(0x6078cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B6078d1:{NFSU2_TR(0x6078d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6078d3:{NFSU2_TR(0x6078d3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6078d5:{NFSU2_TR(0x6078d5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6078d8:{NFSU2_TR(0x6078d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6078db:{NFSU2_TR(0x6078db);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x6ull))));
}
B6078de:{NFSU2_TR(0x6078de);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6078e0:{NFSU2_TR(0x6078e0);
if(r1(R+518)){{goto L6078e7;}}
}
B6078e2:L6078e2:{c.instructions+=2;NFSU2_TR(0x6078e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6078e5:{NFSU2_TR(0x6078e5);
{goto L6078e9;}
}
B6078e7:L6078e7:{c.instructions+=1;NFSU2_TR(0x6078e7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6078e9:L6078e9:{c.instructions+=8;NFSU2_TR(0x6078e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6078ea:{NFSU2_TR(0x6078ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6078ec:{NFSU2_TR(0x6078ec);
__builtin_memmove((R+8),(R+518),1);
}
B6078ef:{NFSU2_TR(0x6078ef);
__builtin_memmove((R+4),(R+20),4);
}
B6078f1:{NFSU2_TR(0x6078f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6078f2:{NFSU2_TR(0x6078f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6078f3:{NFSU2_TR(0x6078f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6078f4:{NFSU2_TR(0x6078f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6078f9ull));
TAIL_STATIC(0x606cb0u,606);
}
B6078f9:L6078f9:{c.instructions+=1;NFSU2_TR(0x6078f9);
__builtin_memmove((R+12),gp(0x89e7b0),4);
}
B6078ff:L6078ff:{c.instructions+=5;NFSU2_TR(0x6078ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607902:{NFSU2_TR(0x607902);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B607903:{NFSU2_TR(0x607903);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B607906:{NFSU2_TR(0x607906);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B607908:{NFSU2_TR(0x607908);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6078c0u);}goto L6078c0;}}
}
B60790a:L60790a:{c.instructions+=3;NFSU2_TR(0x60790a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60790c:{NFSU2_TR(0x60790c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607912:{NFSU2_TR(0x607912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607918:L607918:{c.instructions+=2;NFSU2_TR(0x607918);
__builtin_memmove((R+4),(R+20),4);
}
B60791a:{NFSU2_TR(0x60791a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60791full));
TAIL_STATIC(0x5eec80u,5ee);
}
B60791f:L60791f:{c.instructions+=2;NFSU2_TR(0x60791f);
__builtin_memmove((R+4),(R+20),4);
}
B607921:{NFSU2_TR(0x607921);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607926ull));
TAIL_STATIC(0x5eed10u,5ee);
}
B607926:L607926:{c.instructions+=2;NFSU2_TR(0x607926);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60792d:{NFSU2_TR(0x60792d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6079d9;}}
}
B607933:L607933:{c.instructions+=3;NFSU2_TR(0x607933);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607936:{NFSU2_TR(0x607936);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607938:{NFSU2_TR(0x607938);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6079d9;}}
}
B60793e:L60793e:{c.instructions+=4;NFSU2_TR(0x60793e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B607944:{NFSU2_TR(0x607944);
w4(R+12,u32(0x1ull));
}
B607949:{NFSU2_TR(0x607949);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60794d:{NFSU2_TR(0x60794d);
__builtin_memmove((R+4),(R+4),4);
}
B607950:L607950:{c.instructions+=5;NFSU2_TR(0x607950);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607954:{NFSU2_TR(0x607954);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B607956:{NFSU2_TR(0x607956);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B607959:{NFSU2_TR(0x607959);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60795b:{NFSU2_TR(0x60795b);
if(r1(R+518)){{goto L6079bf;}}
}
B60795d:L60795d:{c.instructions+=6;NFSU2_TR(0x60795d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B607961:{NFSU2_TR(0x607961);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B607965:{NFSU2_TR(0x607965);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607968:{NFSU2_TR(0x607968);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B60796a:{NFSU2_TR(0x60796a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60796c:{NFSU2_TR(0x60796c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6079bf;}}
}
B60796e:L60796e:{c.instructions+=3;NFSU2_TR(0x60796e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B607970:{NFSU2_TR(0x607970);
__builtin_memmove((R+24),(R+12),4);
}
B607972:{NFSU2_TR(0x607972);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6079bf;}}
}
B607974:L607974:{c.instructions+=3;NFSU2_TR(0x607974);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B607978:{NFSU2_TR(0x607978);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B60797b:{NFSU2_TR(0x60797b);
{goto L607980;}
}
B607980:L607980:{c.instructions+=3;NFSU2_TR(0x607980);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B607982:{NFSU2_TR(0x607982);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B607987:{NFSU2_TR(0x607987);
if(r1(R+518)){{goto L607993;}}
}
B607989:L607989:{c.instructions+=3;NFSU2_TR(0x607989);
__builtin_memmove((R+4),gp(0x89e7b0),4);
}
B60798f:{NFSU2_TR(0x60798f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607991:{NFSU2_TR(0x607991);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6079b4;}}
}
B607993:L607993:{c.instructions+=3;NFSU2_TR(0x607993);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B607995:{NFSU2_TR(0x607995);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607997:{NFSU2_TR(0x607997);
if(r1(R+518)){{goto L60799e;}}
}
B607999:L607999:{c.instructions+=2;NFSU2_TR(0x607999);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60799c:{NFSU2_TR(0x60799c);
{goto L6079a0;}
}
B60799e:L60799e:{c.instructions+=1;NFSU2_TR(0x60799e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6079a0:L6079a0:{c.instructions+=9;NFSU2_TR(0x6079a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6079a2:{NFSU2_TR(0x6079a2);
__builtin_memmove((R+4),(R+518),1);
}
B6079a5:{NFSU2_TR(0x6079a5);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6079a7:{NFSU2_TR(0x6079a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6079aa:{NFSU2_TR(0x6079aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6079ab:{NFSU2_TR(0x6079ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6079ac:{NFSU2_TR(0x6079ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6079ad:{NFSU2_TR(0x6079ad);
__builtin_memmove((R+4),(R+20),4);
}
B6079af:{NFSU2_TR(0x6079af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6079b4ull));
TAIL_STATIC(0x606cb0u,606);
}
B6079b4:L6079b4:{c.instructions+=5;NFSU2_TR(0x6079b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6079b7:{NFSU2_TR(0x6079b7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6079b8:{NFSU2_TR(0x6079b8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6079bb:{NFSU2_TR(0x6079bb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6079bd:{NFSU2_TR(0x6079bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607980u);}goto L607980;}}
}
B6079bf:L6079bf:{c.instructions+=8;NFSU2_TR(0x6079bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6079c3:{NFSU2_TR(0x6079c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6079c6:{NFSU2_TR(0x6079c6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6079c9:{NFSU2_TR(0x6079c9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6079ca:{NFSU2_TR(0x6079ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6079cd:{NFSU2_TR(0x6079cd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6079cf:{NFSU2_TR(0x6079cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6079d3:{NFSU2_TR(0x6079d3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607950u);}goto L607950;}}
}
B6079d9:L6079d9:{c.instructions+=3;NFSU2_TR(0x6079d9);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B6079de:{NFSU2_TR(0x6079de);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6079e0:{NFSU2_TR(0x6079e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6079ef;}}
}
B6079e2:L6079e2:{c.instructions+=3;NFSU2_TR(0x6079e2);
__builtin_memmove((R+0),gp(0x890108),4);
}
B6079e7:{NFSU2_TR(0x6079e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6079e9:{NFSU2_TR(0x6079e9);
if(r1(R+518)){{goto L607b2c;}}
}
B6079ef:L6079ef:{c.instructions+=4;NFSU2_TR(0x6079ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6079f2:{NFSU2_TR(0x6079f2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6079f4:{NFSU2_TR(0x6079f4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6079f6:{NFSU2_TR(0x6079f6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L607b2c;}}
}
B6079fc:L6079fc:{c.instructions+=2;NFSU2_TR(0x6079fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B607a02:{NFSU2_TR(0x607a02);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607a06:L607a06:{c.instructions+=5;NFSU2_TR(0x607a06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B607a08:{NFSU2_TR(0x607a08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B607a0a:{NFSU2_TR(0x607a0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x964ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B607a10:{NFSU2_TR(0x607a10);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607a12:{NFSU2_TR(0x607a12);
if(r1(R+518)){{goto L607a7e;}}
}
B607a14:L607a14:{c.instructions+=2;NFSU2_TR(0x607a14);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B607a19:{NFSU2_TR(0x607a19);
if(r1(R+518)){{goto L607a25;}}
}
B607a1b:L607a1b:{c.instructions+=3;NFSU2_TR(0x607a1b);
__builtin_memmove((R+4),gp(0x89e7b0),4);
}
B607a21:{NFSU2_TR(0x607a21);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607a23:{NFSU2_TR(0x607a23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607a7e;}}
}
B607a25:L607a25:{c.instructions+=4;NFSU2_TR(0x607a25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B607a28:{NFSU2_TR(0x607a28);
__builtin_memmove((R+0),(R+24),4);
}
B607a2a:{NFSU2_TR(0x607a2a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607a2c:{NFSU2_TR(0x607a2c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L607a4d;}}
}
B607a2e:L607a2e:{c.instructions+=1;NFSU2_TR(0x607a2e);
u8 U[12];
w4(U+0,u32(u32(u32(0xbccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B607a35:L607a35:{c.instructions+=2;NFSU2_TR(0x607a35);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607a37:{NFSU2_TR(0x607a37);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L607a3d;}}
}
B607a39:L607a39:{c.instructions+=2;NFSU2_TR(0x607a39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B607a3b:{NFSU2_TR(0x607a3b);
{goto L607a3f;}
}
B607a3d:L607a3d:{c.instructions+=1;NFSU2_TR(0x607a3d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B607a3f:L607a3f:{c.instructions+=2;NFSU2_TR(0x607a3f);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B607a43:{NFSU2_TR(0x607a43);
if(r1(R+518)){{goto L607a74;}}
}
B607a45:L607a45:{c.instructions+=4;NFSU2_TR(0x607a45);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B607a46:{NFSU2_TR(0x607a46);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B607a49:{NFSU2_TR(0x607a49);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607a4b:{NFSU2_TR(0x607a4b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607a35u);}goto L607a35;}}
}
B607a4d:L607a4d:{c.instructions+=1;NFSU2_TR(0x607a4d);
w4(R+28,u32(0x1ull));
}
B607a52:L607a52:{c.instructions+=3;NFSU2_TR(0x607a52);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B607a54:{NFSU2_TR(0x607a54);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607a56:{NFSU2_TR(0x607a56);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L607a72;}}
}
B607a58:L607a58:{c.instructions+=2;NFSU2_TR(0x607a58);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B607a5e:{NFSU2_TR(0x607a5e);
__builtin_memmove((R+28),(R+28),4);
}
B607a60:L607a60:{c.instructions+=4;NFSU2_TR(0x607a60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B607a62:{NFSU2_TR(0x607a62);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B607a66:{NFSU2_TR(0x607a66);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607a68:{NFSU2_TR(0x607a68);
if(r1(R+518)){{goto L607a7b;}}
}
B607a6a:L607a6a:{c.instructions+=4;NFSU2_TR(0x607a6a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B607a6b:{NFSU2_TR(0x607a6b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B607a6e:{NFSU2_TR(0x607a6e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B607a70:{NFSU2_TR(0x607a70);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607a60u);}goto L607a60;}}
}
B607a72:L607a72:{c.instructions+=1;NFSU2_TR(0x607a72);
__builtin_memmove((R+0),(R+28),4);
}
B607a74:L607a74:{c.instructions+=2;NFSU2_TR(0x607a74);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607a76:{NFSU2_TR(0x607a76);
{goto L607b0a;}
}
B607a7b:L607a7b:{c.instructions+=2;NFSU2_TR(0x607a7b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B607a7c:{NFSU2_TR(0x607a7c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607a52u);}goto L607a52;}
}
B607a7e:L607a7e:{c.instructions+=2;NFSU2_TR(0x607a7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B607a82:{NFSU2_TR(0x607a82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607b15;}}
}
B607a88:L607a88:{c.instructions+=3;NFSU2_TR(0x607a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607a8b:{NFSU2_TR(0x607a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607a8e:{NFSU2_TR(0x607a8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607a93ull));
TAIL_STATIC(0x5942c0u,594);
}
B607a93:L607a93:{c.instructions+=4;NFSU2_TR(0x607a93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607a95:{NFSU2_TR(0x607a95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B607a98:{NFSU2_TR(0x607a98);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607a9a:{NFSU2_TR(0x607a9a);
if(r1(R+518)){{goto L607b15;}}
}
B607a9c:L607a9c:{c.instructions+=2;NFSU2_TR(0x607a9c);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B607aa1:{NFSU2_TR(0x607aa1);
if(r1(R+518)){{goto L607aac;}}
}
B607aa3:L607aa3:{c.instructions+=3;NFSU2_TR(0x607aa3);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B607aa8:{NFSU2_TR(0x607aa8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607aaa:{NFSU2_TR(0x607aaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607b15;}}
}
B607aac:L607aac:{c.instructions+=4;NFSU2_TR(0x607aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B607aaf:{NFSU2_TR(0x607aaf);
__builtin_memmove((R+0),(R+24),4);
}
B607ab1:{NFSU2_TR(0x607ab1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607ab3:{NFSU2_TR(0x607ab3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L607ad8;}}
}
B607ab5:L607ab5:{c.instructions+=2;NFSU2_TR(0x607ab5);
u8 U[12];
w4(U+0,u32(u32(u32(0xbccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B607abc:{NFSU2_TR(0x607abc);
__builtin_memmove((R+16),(R+16),4);
}
B607ac0:L607ac0:{c.instructions+=2;NFSU2_TR(0x607ac0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607ac2:{NFSU2_TR(0x607ac2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L607ac8;}}
}
B607ac4:L607ac4:{c.instructions+=2;NFSU2_TR(0x607ac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B607ac6:{NFSU2_TR(0x607ac6);
{goto L607aca;}
}
B607ac8:L607ac8:{c.instructions+=1;NFSU2_TR(0x607ac8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B607aca:L607aca:{c.instructions+=2;NFSU2_TR(0x607aca);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B607ace:{NFSU2_TR(0x607ace);
if(r1(R+518)){{goto L607b08;}}
}
B607ad0:L607ad0:{c.instructions+=4;NFSU2_TR(0x607ad0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B607ad1:{NFSU2_TR(0x607ad1);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B607ad4:{NFSU2_TR(0x607ad4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607ad6:{NFSU2_TR(0x607ad6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607ac0u);}goto L607ac0;}}
}
B607ad8:L607ad8:{c.instructions+=2;NFSU2_TR(0x607ad8);
w4(R+28,u32(0x1ull));
}
B607add:{NFSU2_TR(0x607add);
__builtin_memmove((R+4),(R+4),4);
}
B607ae0:L607ae0:{c.instructions+=3;NFSU2_TR(0x607ae0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B607ae2:{NFSU2_TR(0x607ae2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607ae4:{NFSU2_TR(0x607ae4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L607b06;}}
}
B607ae6:L607ae6:{c.instructions+=2;NFSU2_TR(0x607ae6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B607aec:{NFSU2_TR(0x607aec);
__builtin_memmove((R+16),(R+16),4);
}
B607af0:L607af0:{c.instructions+=4;NFSU2_TR(0x607af0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B607af2:{NFSU2_TR(0x607af2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B607af6:{NFSU2_TR(0x607af6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607af8:{NFSU2_TR(0x607af8);
if(r1(R+518)){{goto L607c30;}}
}
B607afe:L607afe:{c.instructions+=4;NFSU2_TR(0x607afe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B607aff:{NFSU2_TR(0x607aff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B607b02:{NFSU2_TR(0x607b02);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B607b04:{NFSU2_TR(0x607b04);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607af0u);}goto L607af0;}}
}
B607b06:L607b06:{c.instructions+=1;NFSU2_TR(0x607b06);
__builtin_memmove((R+0),(R+28),4);
}
B607b08:L607b08:{c.instructions+=1;NFSU2_TR(0x607b08);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607b0a:L607b0a:{c.instructions+=5;NFSU2_TR(0x607b0a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607b0c:{NFSU2_TR(0x607b0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607b0d:{NFSU2_TR(0x607b0d);
__builtin_memmove((R+4),(R+20),4);
}
B607b0f:{NFSU2_TR(0x607b0f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607b10:{NFSU2_TR(0x607b10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607b15ull));
TAIL_STATIC(0x606cb0u,606);
}
B607b15:L607b15:{c.instructions+=7;NFSU2_TR(0x607b15);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607b19:{NFSU2_TR(0x607b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607b1c:{NFSU2_TR(0x607b1c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B607b1d:{NFSU2_TR(0x607b1d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B607b20:{NFSU2_TR(0x607b20);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B607b22:{NFSU2_TR(0x607b22);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607b26:{NFSU2_TR(0x607b26);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607a06u);}goto L607a06;}}
}
B607b2c:L607b2c:{c.instructions+=2;NFSU2_TR(0x607b2c);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607b33:{NFSU2_TR(0x607b33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607b9d;}}
}
B607b35:L607b35:{c.instructions+=4;NFSU2_TR(0x607b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607b38:{NFSU2_TR(0x607b38);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B607b3a:{NFSU2_TR(0x607b3a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607b3c:{NFSU2_TR(0x607b3c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L607b9d;}}
}
B607b3e:L607b3e:{c.instructions+=1;NFSU2_TR(0x607b3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B607b44:L607b44:{c.instructions+=4;NFSU2_TR(0x607b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B607b46:{NFSU2_TR(0x607b46);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B607b49:{NFSU2_TR(0x607b49);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607b4b:{NFSU2_TR(0x607b4b);
if(r1(R+518)){{goto L607b92;}}
}
B607b4d:L607b4d:{c.instructions+=2;NFSU2_TR(0x607b4d);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B607b52:{NFSU2_TR(0x607b52);
if(r1(R+518)){{goto L607b5e;}}
}
B607b54:L607b54:{c.instructions+=3;NFSU2_TR(0x607b54);
__builtin_memmove((R+4),gp(0x89e7b0),4);
}
B607b5a:{NFSU2_TR(0x607b5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607b5c:{NFSU2_TR(0x607b5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607b92;}}
}
B607b5e:L607b5e:{c.instructions+=6;NFSU2_TR(0x607b5e);
__builtin_memmove((R+4),gp(0x890118),4);
}
B607b64:{NFSU2_TR(0x607b64);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B607b6b:{NFSU2_TR(0x607b6b);
u8 U[12];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B607b6f:{NFSU2_TR(0x607b6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B607b71:{NFSU2_TR(0x607b71);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607b73:{NFSU2_TR(0x607b73);
if(r1(R+518)){{goto L607b92;}}
}
B607b75:L607b75:{c.instructions+=2;NFSU2_TR(0x607b75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607b7a:{NFSU2_TR(0x607b7a);
if(r1(R+518)){{goto L607b92;}}
}
B607b7c:L607b7c:{c.instructions+=2;NFSU2_TR(0x607b7c);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e818),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607b82:{NFSU2_TR(0x607b82);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L607b92;}}
}
B607b84:L607b84:{c.instructions+=6;NFSU2_TR(0x607b84);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607b86:{NFSU2_TR(0x607b86);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607b88:{NFSU2_TR(0x607b88);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607b8a:{NFSU2_TR(0x607b8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607b8b:{NFSU2_TR(0x607b8b);
__builtin_memmove((R+4),(R+20),4);
}
B607b8d:{NFSU2_TR(0x607b8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607b92ull));
TAIL_STATIC(0x606cb0u,606);
}
B607b92:L607b92:{c.instructions+=5;NFSU2_TR(0x607b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607b95:{NFSU2_TR(0x607b95);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B607b96:{NFSU2_TR(0x607b96);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B607b99:{NFSU2_TR(0x607b99);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B607b9b:{NFSU2_TR(0x607b9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607b44u);}goto L607b44;}}
}
B607b9d:L607b9d:{c.instructions+=5;NFSU2_TR(0x607b9d);
{u32 ea_=u32(r4(R+20)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B607ba0:{NFSU2_TR(0x607ba0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B607ba6:{NFSU2_TR(0x607ba6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B607ba8:{NFSU2_TR(0x607ba8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607bab:{NFSU2_TR(0x607bab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607c9c;}}
}
B607bb1:L607bb1:{c.instructions+=3;NFSU2_TR(0x607bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607bb4:{NFSU2_TR(0x607bb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607bb6:{NFSU2_TR(0x607bb6);
if(r1(R+518)){{goto L607c9c;}}
}
B607bbc:L607bbc:{c.instructions+=2;NFSU2_TR(0x607bbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607bc1:{NFSU2_TR(0x607bc1);
if(r1(R+518)){{goto L607c9c;}}
}
B607bc7:L607bc7:{c.instructions+=11;NFSU2_TR(0x607bc7);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B607bcd:{NFSU2_TR(0x607bcd);
{u32 ea_=u32(r4(R+20)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B607bd0:{NFSU2_TR(0x607bd0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B607bd2:{NFSU2_TR(0x607bd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607bd6:{NFSU2_TR(0x607bd6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B607bda:{NFSU2_TR(0x607bda);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B607be0:{NFSU2_TR(0x607be0);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B607be2:{NFSU2_TR(0x607be2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B607be4:{NFSU2_TR(0x607be4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B607be6:{NFSU2_TR(0x607be6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607be9:{NFSU2_TR(0x607be9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607c9c;}}
}
B607bef:L607bef:{c.instructions+=4;NFSU2_TR(0x607bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607bf2:{NFSU2_TR(0x607bf2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B607bf4:{NFSU2_TR(0x607bf4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607bf6:{NFSU2_TR(0x607bf6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L607c9c;}}
}
B607bfc:L607bfc:{c.instructions+=2;NFSU2_TR(0x607bfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B607c02:{NFSU2_TR(0x607c02);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607c06:L607c06:{c.instructions+=3;NFSU2_TR(0x607c06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B607c08:{NFSU2_TR(0x607c08);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B607c0d:{NFSU2_TR(0x607c0d);
if(r1(R+518)){{goto L607c18;}}
}
B607c0f:L607c0f:{c.instructions+=3;NFSU2_TR(0x607c0f);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B607c14:{NFSU2_TR(0x607c14);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607c16:{NFSU2_TR(0x607c16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607c85;}}
}
B607c18:L607c18:{c.instructions+=4;NFSU2_TR(0x607c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B607c1b:{NFSU2_TR(0x607c1b);
__builtin_memmove((R+0),(R+24),4);
}
B607c1d:{NFSU2_TR(0x607c1d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607c1f:{NFSU2_TR(0x607c1f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L607c46;}}
}
B607c21:L607c21:{c.instructions+=1;NFSU2_TR(0x607c21);
u8 U[12];
w4(U+0,u32(u32(u32(0xbccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B607c28:L607c28:{c.instructions+=2;NFSU2_TR(0x607c28);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607c2a:{NFSU2_TR(0x607c2a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L607c36;}}
}
B607c2c:L607c2c:{c.instructions+=2;NFSU2_TR(0x607c2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B607c2e:{NFSU2_TR(0x607c2e);
{goto L607c38;}
}
B607c30:L607c30:{c.instructions+=2;NFSU2_TR(0x607c30);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B607c31:{NFSU2_TR(0x607c31);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607ae0u);}goto L607ae0;}
}
B607c36:L607c36:{c.instructions+=1;NFSU2_TR(0x607c36);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B607c38:L607c38:{c.instructions+=2;NFSU2_TR(0x607c38);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B607c3c:{NFSU2_TR(0x607c3c);
if(r1(R+518)){{goto L607c78;}}
}
B607c3e:L607c3e:{c.instructions+=4;NFSU2_TR(0x607c3e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B607c3f:{NFSU2_TR(0x607c3f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B607c42:{NFSU2_TR(0x607c42);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607c44:{NFSU2_TR(0x607c44);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607c28u);}goto L607c28;}}
}
B607c46:L607c46:{c.instructions+=2;NFSU2_TR(0x607c46);
w4(R+28,u32(0x1ull));
}
B607c4b:{NFSU2_TR(0x607c4b);
{goto L607c50;}
}
B607c50:L607c50:{c.instructions+=3;NFSU2_TR(0x607c50);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B607c52:{NFSU2_TR(0x607c52);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607c54:{NFSU2_TR(0x607c54);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L607c76;}}
}
B607c56:L607c56:{c.instructions+=2;NFSU2_TR(0x607c56);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B607c5c:{NFSU2_TR(0x607c5c);
__builtin_memmove((R+16),(R+16),4);
}
B607c60:L607c60:{c.instructions+=4;NFSU2_TR(0x607c60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B607c62:{NFSU2_TR(0x607c62);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B607c66:{NFSU2_TR(0x607c66);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607c68:{NFSU2_TR(0x607c68);
if(r1(R+518)){{goto L607d3d;}}
}
B607c6e:L607c6e:{c.instructions+=4;NFSU2_TR(0x607c6e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B607c6f:{NFSU2_TR(0x607c6f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B607c72:{NFSU2_TR(0x607c72);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B607c74:{NFSU2_TR(0x607c74);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607c60u);}goto L607c60;}}
}
B607c76:L607c76:{c.instructions+=1;NFSU2_TR(0x607c76);
__builtin_memmove((R+0),(R+28),4);
}
B607c78:L607c78:{c.instructions+=6;NFSU2_TR(0x607c78);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607c7a:{NFSU2_TR(0x607c7a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607c7c:{NFSU2_TR(0x607c7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607c7d:{NFSU2_TR(0x607c7d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607c7e:{NFSU2_TR(0x607c7e);
__builtin_memmove((R+4),(R+20),4);
}
B607c80:{NFSU2_TR(0x607c80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607c85ull));
TAIL_STATIC(0x606cb0u,606);
}
B607c85:L607c85:{c.instructions+=7;NFSU2_TR(0x607c85);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607c89:{NFSU2_TR(0x607c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607c8c:{NFSU2_TR(0x607c8c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B607c8d:{NFSU2_TR(0x607c8d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B607c90:{NFSU2_TR(0x607c90);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B607c92:{NFSU2_TR(0x607c92);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607c96:{NFSU2_TR(0x607c96);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607c06u);}goto L607c06;}}
}
B607c9c:L607c9c:{c.instructions+=2;NFSU2_TR(0x607c9c);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607ca3:{NFSU2_TR(0x607ca3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x608c01u,608);}
}
B607ca9:L607ca9:{c.instructions+=8;NFSU2_TR(0x607ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607cac:{NFSU2_TR(0x607cac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607caf:{NFSU2_TR(0x607caf);
__builtin_memmove((R+28),(R+0),4);
}
B607cb1:{NFSU2_TR(0x607cb1);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B607cb3:{NFSU2_TR(0x607cb3);
__builtin_memmove((R+4),gp(0x89cf69),1);
}
B607cb9:{NFSU2_TR(0x607cb9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607cbb:{NFSU2_TR(0x607cbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607cbf:{NFSU2_TR(0x607cbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x608a8fu,608);}
}
B607cc5:L607cc5:{c.instructions+=3;NFSU2_TR(0x607cc5);
__builtin_memmove((R+4),gp(0x8669f4),4);
}
B607ccb:{NFSU2_TR(0x607ccb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607ccd:{NFSU2_TR(0x607ccd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x608a8fu,608);}
}
B607cd3:L607cd3:{c.instructions+=3;NFSU2_TR(0x607cd3);
__builtin_memmove((R+4),gp(0x866a14),4);
}
B607cd9:{NFSU2_TR(0x607cd9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607cdb:{NFSU2_TR(0x607cdb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x608a8fu,608);}
}
B607ce1:L607ce1:{c.instructions+=4;NFSU2_TR(0x607ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B607ce7:{NFSU2_TR(0x607ce7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607ce9:{NFSU2_TR(0x607ce9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607ced:{NFSU2_TR(0x607ced);
if(r1(R+518)){TAIL_STATIC(0x608c58u,608);}
}
B607cf3:L607cf3:{c.instructions+=2;NFSU2_TR(0x607cf3);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B607cf8:{NFSU2_TR(0x607cf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x608c58u,608);}
}
B607cfe:L607cfe:{c.instructions+=8;NFSU2_TR(0x607cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607d01:{NFSU2_TR(0x607d01);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607d05:{NFSU2_TR(0x607d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B607d0c:{NFSU2_TR(0x607d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607d0f:{NFSU2_TR(0x607d0f);
w4(R+0,u32(0x1ull));
}
B607d14:{NFSU2_TR(0x607d14);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607d16:{NFSU2_TR(0x607d16);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607d1a:{NFSU2_TR(0x607d1a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L607d50;}}
}
B607d1c:L607d1c:{c.instructions+=2;NFSU2_TR(0x607d1c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B607d1f:{NFSU2_TR(0x607d1f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x608c58u,608);}
}
B607d25:L607d25:{c.instructions+=4;NFSU2_TR(0x607d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607d2b:{NFSU2_TR(0x607d2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B607d2d:{NFSU2_TR(0x607d2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607d2f:{NFSU2_TR(0x607d2f);
if(r1(R+518)){TAIL_STATIC(0x608a75u,608);}
}
B607d35:L607d35:{c.instructions+=2;NFSU2_TR(0x607d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607d38:{NFSU2_TR(0x607d38);
TAIL_STATIC(0x608a77u,608);
}
B607d3d:L607d3d:{c.instructions+=2;NFSU2_TR(0x607d3d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B607d3e:{NFSU2_TR(0x607d3e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607c50u);}goto L607c50;}
}
B607d43:L607d43:{c.instructions+=2;NFSU2_TR(0x607d43);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B607d47:{NFSU2_TR(0x607d47);
{goto L607d50;}
}
B607d50:L607d50:{c.instructions+=3;NFSU2_TR(0x607d50);
u8 U[16];
w4(U+0,u32(u32(u32(0xbd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B607d57:{NFSU2_TR(0x607d57);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607d59:{NFSU2_TR(0x607d59);
if(r1(R+518)){TAIL_STATIC(0x6082b4u,608);}
}
B607d5f:L607d5f:{c.instructions+=2;NFSU2_TR(0x607d5f);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B607d64:{NFSU2_TR(0x607d64);
if(r1(R+518)){{goto L607d73;}}
}
B607d66:L607d66:{c.instructions+=3;NFSU2_TR(0x607d66);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B607d6b:{NFSU2_TR(0x607d6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607d6d:{NFSU2_TR(0x607d6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6082b4u,608);}
}
B607d73:L607d73:{c.instructions+=4;NFSU2_TR(0x607d73);
__builtin_memmove((R+0),gp(0x850078),4);
}
B607d78:{NFSU2_TR(0x607d78);
w4(R+12,u32(0x4ull));
}
B607d7d:{NFSU2_TR(0x607d7d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607d7f:{NFSU2_TR(0x607d7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607dab;}}
}
B607d81:L607d81:{c.instructions+=2;NFSU2_TR(0x607d81);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607d88:{NFSU2_TR(0x607d88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607dab;}}
}
B607d8a:L607d8a:{c.instructions+=3;NFSU2_TR(0x607d8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B607d8c:{NFSU2_TR(0x607d8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607d8e:{NFSU2_TR(0x607d8e);
if(r1(R+518)){{goto L607d95;}}
}
B607d90:L607d90:{c.instructions+=2;NFSU2_TR(0x607d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607d93:{NFSU2_TR(0x607d93);
{goto L607d97;}
}
B607d95:L607d95:{c.instructions+=1;NFSU2_TR(0x607d95);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B607d97:L607d97:{c.instructions+=5;NFSU2_TR(0x607d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607d9a:{NFSU2_TR(0x607d9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B607d9c:{NFSU2_TR(0x607d9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B607d9e:{NFSU2_TR(0x607d9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607da0:{NFSU2_TR(0x607da0);
if(r1(R+518)){{goto L607da7;}}
}
B607da2:L607da2:{c.instructions+=2;NFSU2_TR(0x607da2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607da5:{NFSU2_TR(0x607da5);
{goto L607da9;}
}
B607da7:L607da7:{c.instructions+=1;NFSU2_TR(0x607da7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B607da9:L607da9:{c.instructions+=1;NFSU2_TR(0x607da9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B607dab:L607dab:{c.instructions+=7;NFSU2_TR(0x607dab);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B607dae:{NFSU2_TR(0x607dae);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B607db2:{NFSU2_TR(0x607db2);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B607db5:{NFSU2_TR(0x607db5);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B607dba:{NFSU2_TR(0x607dba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607dbc:{NFSU2_TR(0x607dbc);
{u32 ea_=u32(u32(8017580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B607dc2:{NFSU2_TR(0x607dc2);
if(r1(R+518)){{goto L607dca;}}
}
B607dc4:L607dc4:{c.instructions+=1;NFSU2_TR(0x607dc4);
{u32 ea_=u32(u32(8019784u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B607dca:L607dca:{c.instructions+=6;NFSU2_TR(0x607dca);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B607dcc:{NFSU2_TR(0x607dcc);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B607dce:{NFSU2_TR(0x607dce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B607dd0:{NFSU2_TR(0x607dd0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B607dd2:{NFSU2_TR(0x607dd2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607dd5:{NFSU2_TR(0x607dd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6082d1u,608);}
}
B607ddb:L607ddb:{c.instructions+=6;NFSU2_TR(0x607ddb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B607ddd:{NFSU2_TR(0x607ddd);
__builtin_memmove((R+12),(R+28),4);
}
B607ddf:{NFSU2_TR(0x607ddf);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B607de0:{NFSU2_TR(0x607de0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607de2:{NFSU2_TR(0x607de2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607de6:{NFSU2_TR(0x607de6);
if(r1(R+518)){{goto L607ded;}}
}
B607de8:L607de8:{c.instructions+=2;NFSU2_TR(0x607de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607deb:{NFSU2_TR(0x607deb);
{goto L607def;}
}
B607ded:L607ded:{c.instructions+=1;NFSU2_TR(0x607ded);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B607def:L607def:{c.instructions+=9;NFSU2_TR(0x607def);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607df3:{NFSU2_TR(0x607df3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B607df7:{NFSU2_TR(0x607df7);
u8 U[16];
w4(U+0,u32(u32(u32(0xbd0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B607dfe:{NFSU2_TR(0x607dfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+28),(U+0),4);
}
B607e01:{NFSU2_TR(0x607e01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607e03:{NFSU2_TR(0x607e03);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B607e08:{NFSU2_TR(0x607e08);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607e0a:{NFSU2_TR(0x607e0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607e0e:{NFSU2_TR(0x607e0e);
if(r1(R+518)){{goto L607e19;}}
}
B607e10:L607e10:{c.instructions+=3;NFSU2_TR(0x607e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607e13:{NFSU2_TR(0x607e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607e17:{NFSU2_TR(0x607e17);
{goto L607e21;}
}
B607e19:L607e19:{c.instructions+=1;NFSU2_TR(0x607e19);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B607e21:L607e21:{c.instructions+=9;NFSU2_TR(0x607e21);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B607e25:{NFSU2_TR(0x607e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607e28:{NFSU2_TR(0x607e28);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B607e2d:{NFSU2_TR(0x607e2d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B607e30:{NFSU2_TR(0x607e30);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B607e32:{NFSU2_TR(0x607e32);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x198ull))));
__builtin_memmove((R+4),(U+0),4);
}
B607e38:{NFSU2_TR(0x607e38);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607e3d:{NFSU2_TR(0x607e3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B607e3f:{NFSU2_TR(0x607e3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607e44ull));
TAIL_STATIC(0x577400u,577);
}
B607e44:L607e44:{c.instructions+=6;NFSU2_TR(0x607e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607e47:{NFSU2_TR(0x607e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607e4a:{NFSU2_TR(0x607e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B607e50:{NFSU2_TR(0x607e50);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607e52:{NFSU2_TR(0x607e52);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w2(U+4,u16(0x7ull));
s2(u32(r4(U+0)),r2(U+4));
}
B607e58:{NFSU2_TR(0x607e58);
if(r1(R+518)){{goto L607e8a;}}
}
B607e5a:L607e5a:{c.instructions+=1;NFSU2_TR(0x607e5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607e5full));
TAIL_STATIC(0x56d710u,56d);
}
B607e5f:L607e5f:{c.instructions+=3;NFSU2_TR(0x607e5f);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B607e64:{NFSU2_TR(0x607e64);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607e66:{NFSU2_TR(0x607e66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607e71;}}
}
B607e68:L607e68:{c.instructions+=3;NFSU2_TR(0x607e68);
__builtin_memmove((R+0),gp(0x890104),4);
}
B607e6d:{NFSU2_TR(0x607e6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607e6f:{NFSU2_TR(0x607e6f);
if(r1(R+518)){{goto L607e8a;}}
}
B607e71:L607e71:{c.instructions+=5;NFSU2_TR(0x607e71);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B607e75:{NFSU2_TR(0x607e75);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B607e79:{NFSU2_TR(0x607e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607e7f:{NFSU2_TR(0x607e7f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B607e81:{NFSU2_TR(0x607e81);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L607e8e;}}
}
B607e83:L607e83:{c.instructions+=2;NFSU2_TR(0x607e83);
__builtin_memmove((R+4),(R+20),4);
}
B607e85:{NFSU2_TR(0x607e85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607e8aull));
TAIL_STATIC(0x5f7a00u,5f7);
}
B607e8a:L607e8a:{c.instructions+=1;NFSU2_TR(0x607e8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B607e8e:L607e8e:{c.instructions+=3;NFSU2_TR(0x607e8e);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B607e93:{NFSU2_TR(0x607e93);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607e95:{NFSU2_TR(0x607e95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607ead;}}
}
B607e97:L607e97:{c.instructions+=3;NFSU2_TR(0x607e97);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B607e9c:{NFSU2_TR(0x607e9c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607e9e:{NFSU2_TR(0x607e9e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L607ead;}}
}
B607ea0:L607ea0:{c.instructions+=3;NFSU2_TR(0x607ea0);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B607ea5:{NFSU2_TR(0x607ea5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607ea7:{NFSU2_TR(0x607ea7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L607fd2;}}
}
B607ead:L607ead:{c.instructions+=3;NFSU2_TR(0x607ead);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B607eb0:{NFSU2_TR(0x607eb0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607eb2:{NFSU2_TR(0x607eb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607f11;}}
}
B607eb4:L607eb4:{c.instructions+=4;NFSU2_TR(0x607eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B607eb7:{NFSU2_TR(0x607eb7);
__builtin_memmove((R+0),(R+24),4);
}
B607eb9:{NFSU2_TR(0x607eb9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607ebb:{NFSU2_TR(0x607ebb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L607edd;}}
}
B607ebd:L607ebd:{c.instructions+=1;NFSU2_TR(0x607ebd);
u8 U[12];
w4(U+0,u32(u32(u32(0xbccull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B607ec4:L607ec4:{c.instructions+=2;NFSU2_TR(0x607ec4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607ec6:{NFSU2_TR(0x607ec6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L607ecc;}}
}
B607ec8:L607ec8:{c.instructions+=2;NFSU2_TR(0x607ec8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B607eca:{NFSU2_TR(0x607eca);
{goto L607ece;}
}
B607ecc:L607ecc:{c.instructions+=1;NFSU2_TR(0x607ecc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B607ece:L607ece:{c.instructions+=3;NFSU2_TR(0x607ece);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B607ed1:{NFSU2_TR(0x607ed1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607ed3:{NFSU2_TR(0x607ed3);
if(r1(R+518)){{goto L607f0a;}}
}
B607ed5:L607ed5:{c.instructions+=4;NFSU2_TR(0x607ed5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B607ed6:{NFSU2_TR(0x607ed6);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B607ed9:{NFSU2_TR(0x607ed9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607edb:{NFSU2_TR(0x607edb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607ec4u);}goto L607ec4;}}
}
B607edd:L607edd:{c.instructions+=2;NFSU2_TR(0x607edd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B607ee1:{NFSU2_TR(0x607ee1);
w4(R+28,u32(0x1ull));
}
B607ee6:L607ee6:{c.instructions+=3;NFSU2_TR(0x607ee6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B607ee8:{NFSU2_TR(0x607ee8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607eea:{NFSU2_TR(0x607eea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L607f04;}}
}
B607eec:L607eec:{c.instructions+=1;NFSU2_TR(0x607eec);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B607ef2:L607ef2:{c.instructions+=4;NFSU2_TR(0x607ef2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B607ef4:{NFSU2_TR(0x607ef4);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B607ef8:{NFSU2_TR(0x607ef8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607efa:{NFSU2_TR(0x607efa);
if(r1(R+518)){{goto L607f41;}}
}
B607efc:L607efc:{c.instructions+=4;NFSU2_TR(0x607efc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B607efd:{NFSU2_TR(0x607efd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B607f00:{NFSU2_TR(0x607f00);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B607f02:{NFSU2_TR(0x607f02);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607ef2u);}goto L607ef2;}}
}
B607f04:L607f04:{c.instructions+=2;NFSU2_TR(0x607f04);
__builtin_memmove((R+0),(R+28),4);
}
B607f06:{NFSU2_TR(0x607f06);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B607f0a:L607f0a:{c.instructions+=2;NFSU2_TR(0x607f0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B607f0e:{NFSU2_TR(0x607f0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B607f11:L607f11:{c.instructions+=2;NFSU2_TR(0x607f11);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607f18:{NFSU2_TR(0x607f18);
if(r1(R+518)){{goto L607f4d;}}
}
B607f1a:L607f1a:{c.instructions+=5;NFSU2_TR(0x607f1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B607f1e:{NFSU2_TR(0x607f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607f24:{NFSU2_TR(0x607f24);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B607f27:{NFSU2_TR(0x607f27);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607f29:{NFSU2_TR(0x607f29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607f44;}}
}
B607f2b:L607f2b:{c.instructions+=6;NFSU2_TR(0x607f2b);
__builtin_memmove((R+0),gp(0x890118),4);
}
B607f30:{NFSU2_TR(0x607f30);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B607f37:{NFSU2_TR(0x607f37);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B607f3b:{NFSU2_TR(0x607f3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B607f3d:{NFSU2_TR(0x607f3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B607f3f:{NFSU2_TR(0x607f3f);
{goto L607f58;}
}
B607f41:L607f41:{c.instructions+=2;NFSU2_TR(0x607f41);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B607f42:{NFSU2_TR(0x607f42);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x607ee6u);}goto L607ee6;}
}
B607f44:L607f44:{c.instructions+=3;NFSU2_TR(0x607f44);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B607f49:{NFSU2_TR(0x607f49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B607f4b:{NFSU2_TR(0x607f4b);
{goto L607f58;}
}
B607f4d:L607f4d:{c.instructions+=2;NFSU2_TR(0x607f4d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B607f51:{NFSU2_TR(0x607f51);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89d028ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B607f58:L607f58:{c.instructions+=10;NFSU2_TR(0x607f58);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B607f5c:{NFSU2_TR(0x607f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B607f62:{NFSU2_TR(0x607f62);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B607f66:{NFSU2_TR(0x607f66);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B607f6a:{NFSU2_TR(0x607f6a);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607f6c:{NFSU2_TR(0x607f6c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607f6d:{NFSU2_TR(0x607f6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607f6e:{NFSU2_TR(0x607f6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607f6f:{NFSU2_TR(0x607f6f);
w4(R+4,u32(0x89cf48ull));
}
B607f74:{NFSU2_TR(0x607f74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x607f79ull));
TAIL_STATIC(0x602000u,602);
}
B607f79:L607f79:{c.instructions+=2;NFSU2_TR(0x607f79);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607f7b:{NFSU2_TR(0x607f7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607f88;}}
}
B607f7d:L607f7d:{c.instructions+=2;NFSU2_TR(0x607f7d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B607f83:{NFSU2_TR(0x607f83);
TAIL_STATIC(0x60826fu,608);
}
B607f88:L607f88:{c.instructions+=3;NFSU2_TR(0x607f88);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B607f8d:{NFSU2_TR(0x607f8d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607f8f:{NFSU2_TR(0x607f8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607fc0;}}
}
B607f91:L607f91:{c.instructions+=3;NFSU2_TR(0x607f91);
__builtin_memmove((R+0),gp(0x890104),4);
}
B607f96:{NFSU2_TR(0x607f96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607f98:{NFSU2_TR(0x607f98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607fc0;}}
}
B607f9a:L607f9a:{c.instructions+=3;NFSU2_TR(0x607f9a);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B607f9f:{NFSU2_TR(0x607f9f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B607fa1:{NFSU2_TR(0x607fa1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607fc0;}}
}
B607fa3:L607fa3:{c.instructions+=3;NFSU2_TR(0x607fa3);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B607fa8:{NFSU2_TR(0x607fa8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607faa:{NFSU2_TR(0x607faa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L607fc0;}}
}
B607fac:L607fac:{c.instructions+=3;NFSU2_TR(0x607fac);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B607fb0:{NFSU2_TR(0x607fb0);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x9ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B607fb4:{NFSU2_TR(0x607fb4);
if(r1(R+518)){{goto L607fc0;}}
}
B607fb6:L607fb6:{c.instructions+=2;NFSU2_TR(0x607fb6);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x8ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B607fba:{NFSU2_TR(0x607fba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60809fu,608);}
}
B607fc0:L607fc0:{c.instructions+=4;NFSU2_TR(0x607fc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B607fc3:{NFSU2_TR(0x607fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607fc6:{NFSU2_TR(0x607fc6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x190ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B607fcd:{NFSU2_TR(0x607fcd);
TAIL_STATIC(0x60809fu,608);
}
B607fd2:L607fd2:{c.instructions+=2;NFSU2_TR(0x607fd2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B607fd4:{NFSU2_TR(0x607fd4);
if(r1(R+518)){{goto L607ffc;}}
}
B607fd6:L607fd6:{c.instructions+=1;NFSU2_TR(0x607fd6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x60809fu,608);}
}
B607fdc:L607fdc:{c.instructions+=3;NFSU2_TR(0x607fdc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B607fdf:{NFSU2_TR(0x607fdf);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B607fe6:{NFSU2_TR(0x607fe6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60809fu,608);}
}
B607fec:L607fec:{c.instructions+=4;NFSU2_TR(0x607fec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B607ff0:{NFSU2_TR(0x607ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B607ff6:{NFSU2_TR(0x607ff6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B607ff7:{NFSU2_TR(0x607ff7);
TAIL_STATIC(0x608097u,608);
}
B607ffc:L607ffc:{c.instructions+=1;NFSU2_TR(0x607ffc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
TAIL_STATIC(0x608000u,608);
}
XIT:NFSU2_TR_EXIT(0x607,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
