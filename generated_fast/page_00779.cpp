#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_40b(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_436(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_486(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_5ae(u8* __restrict R,Cpu& c);
u32 body_5af(u8* __restrict R,Cpu& c);
u32 body_5c8(u8* __restrict R,Cpu& c);
u32 body_5ca(u8* __restrict R,Cpu& c);
u32 body_5cf(u8* __restrict R,Cpu& c);
u32 body_5d2(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_5ff(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x779,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x779,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_779(u8* __restrict R,Cpu& c);
u32 page_779(Cpu& c){return body_779(c.regs.data(),c);}
__attribute__((noinline)) u32 body_779(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x779002:goto L779002;
case 0x779005:c.instructions+=2;goto B779005;
case 0x77900b:c.instructions+=1;goto B77900b;
case 0x779010:goto L779010;
case 0x779013:c.instructions+=2;goto B779013;
case 0x779019:c.instructions+=1;goto B779019;
case 0x77901e:goto L77901e;
case 0x779023:c.instructions+=1;goto B779023;
case 0x779030:goto L779030;
case 0x779033:c.instructions+=2;goto B779033;
case 0x779034:c.instructions+=1;goto B779034;
case 0x779039:goto L779039;
case 0x77903a:c.instructions+=1;goto B77903a;
case 0x77903b:goto L77903b;
case 0x779040:c.instructions+=1;goto B779040;
case 0x779050:goto L779050;
case 0x779053:c.instructions+=2;goto B779053;
case 0x779054:c.instructions+=1;goto B779054;
case 0x779059:goto L779059;
case 0x77905a:c.instructions+=1;goto B77905a;
case 0x77905b:goto L77905b;
case 0x779060:c.instructions+=1;goto B779060;
case 0x779070:goto L779070;
case 0x779073:c.instructions+=1;goto B779073;
case 0x779078:goto L779078;
case 0x77907b:c.instructions+=2;goto B77907b;
case 0x77907e:c.instructions+=1;goto B77907e;
case 0x779083:goto L779083;
case 0x779086:c.instructions+=2;goto B779086;
case 0x779087:c.instructions+=1;goto B779087;
case 0x77908c:goto L77908c;
case 0x77908d:c.instructions+=1;goto B77908d;
case 0x77908e:goto L77908e;
case 0x779091:c.instructions+=2;goto B779091;
case 0x779092:c.instructions+=1;goto B779092;
case 0x779097:goto L779097;
case 0x779098:c.instructions+=1;goto B779098;
case 0x779099:goto L779099;
case 0x77909c:c.instructions+=2;goto B77909c;
case 0x77909d:c.instructions+=1;goto B77909d;
case 0x7790a2:goto L7790a2;
case 0x7790a3:c.instructions+=1;goto B7790a3;
case 0x7790a4:goto L7790a4;
case 0x7790a7:c.instructions+=2;goto B7790a7;
case 0x7790a8:c.instructions+=1;goto B7790a8;
case 0x7790ad:goto L7790ad;
case 0x7790ae:c.instructions+=1;goto B7790ae;
case 0x7790af:goto L7790af;
case 0x7790b2:c.instructions+=2;goto B7790b2;
case 0x7790b3:c.instructions+=1;goto B7790b3;
case 0x7790b8:goto L7790b8;
case 0x7790b9:c.instructions+=1;goto B7790b9;
case 0x7790ba:goto L7790ba;
case 0x7790bf:c.instructions+=1;goto B7790bf;
case 0x7790d0:goto L7790d0;
case 0x7790d3:c.instructions+=1;goto B7790d3;
case 0x7790d8:goto L7790d8;
case 0x7790db:c.instructions+=2;goto B7790db;
case 0x7790de:c.instructions+=1;goto B7790de;
case 0x7790e3:goto L7790e3;
case 0x7790e6:c.instructions+=2;goto B7790e6;
case 0x7790e7:c.instructions+=1;goto B7790e7;
case 0x7790ec:goto L7790ec;
case 0x7790ed:c.instructions+=1;goto B7790ed;
case 0x7790ee:goto L7790ee;
case 0x7790f1:c.instructions+=2;goto B7790f1;
case 0x7790f2:c.instructions+=1;goto B7790f2;
case 0x7790f7:goto L7790f7;
case 0x7790f8:c.instructions+=1;goto B7790f8;
case 0x7790f9:goto L7790f9;
case 0x7790fc:c.instructions+=2;goto B7790fc;
case 0x7790fd:c.instructions+=1;goto B7790fd;
case 0x779102:goto L779102;
case 0x779103:c.instructions+=1;goto B779103;
case 0x779104:goto L779104;
case 0x779109:c.instructions+=1;goto B779109;
case 0x779110:goto L779110;
case 0x779113:c.instructions+=1;goto B779113;
case 0x779118:goto L779118;
case 0x77911b:c.instructions+=2;goto B77911b;
case 0x77911c:c.instructions+=1;goto B77911c;
case 0x779121:goto L779121;
case 0x779122:c.instructions+=1;goto B779122;
case 0x779123:goto L779123;
case 0x779126:c.instructions+=2;goto B779126;
case 0x779127:c.instructions+=1;goto B779127;
case 0x77912c:goto L77912c;
case 0x77912d:c.instructions+=1;goto B77912d;
case 0x77912e:goto L77912e;
case 0x779131:c.instructions+=2;goto B779131;
case 0x779132:c.instructions+=1;goto B779132;
case 0x779137:goto L779137;
case 0x779138:c.instructions+=1;goto B779138;
case 0x779139:goto L779139;
case 0x77913e:c.instructions+=1;goto B77913e;
case 0x779150:goto L779150;
case 0x779153:c.instructions+=2;goto B779153;
case 0x779154:c.instructions+=1;goto B779154;
case 0x779159:goto L779159;
case 0x77915a:c.instructions+=1;goto B77915a;
case 0x77915b:goto L77915b;
case 0x77915e:c.instructions+=2;goto B77915e;
case 0x77915f:c.instructions+=1;goto B77915f;
case 0x779164:goto L779164;
case 0x779165:c.instructions+=1;goto B779165;
case 0x779166:goto L779166;
case 0x779169:c.instructions+=2;goto B779169;
case 0x77916a:c.instructions+=1;goto B77916a;
case 0x77916f:goto L77916f;
case 0x779170:c.instructions+=1;goto B779170;
case 0x779171:goto L779171;
case 0x779174:c.instructions+=2;goto B779174;
case 0x779175:c.instructions+=1;goto B779175;
case 0x77917a:goto L77917a;
case 0x77917b:c.instructions+=1;goto B77917b;
case 0x77917c:goto L77917c;
case 0x779181:c.instructions+=1;goto B779181;
case 0x779190:goto L779190;
case 0x779193:c.instructions+=2;goto B779193;
case 0x779199:c.instructions+=1;goto B779199;
case 0x77919e:goto L77919e;
case 0x7791a1:c.instructions+=2;goto B7791a1;
case 0x7791a7:c.instructions+=1;goto B7791a7;
case 0x7791ac:goto L7791ac;
case 0x7791af:c.instructions+=2;goto B7791af;
case 0x7791b5:c.instructions+=1;goto B7791b5;
case 0x7791ba:goto L7791ba;
case 0x7791bd:c.instructions+=2;goto B7791bd;
case 0x7791c3:c.instructions+=1;goto B7791c3;
case 0x7791c8:goto L7791c8;
case 0x7791cb:c.instructions+=2;goto B7791cb;
case 0x7791d1:c.instructions+=1;goto B7791d1;
case 0x7791d6:goto L7791d6;
case 0x7791d9:c.instructions+=2;goto B7791d9;
case 0x7791df:c.instructions+=1;goto B7791df;
case 0x7791e4:goto L7791e4;
case 0x7791e9:c.instructions+=1;goto B7791e9;
case 0x7791f0:goto L7791f0;
case 0x7791f5:c.instructions+=1;goto B7791f5;
case 0x779200:goto L779200;
case 0x779205:c.instructions+=1;goto B779205;
case 0x779210:goto L779210;
case 0x779213:c.instructions+=2;goto B779213;
case 0x779214:c.instructions+=1;goto B779214;
case 0x779219:goto L779219;
case 0x77921a:c.instructions+=1;goto B77921a;
case 0x77921b:goto L77921b;
case 0x779220:c.instructions+=1;goto B779220;
case 0x779230:goto L779230;
case 0x779233:c.instructions+=1;goto B779233;
case 0x779238:goto L779238;
case 0x77923d:c.instructions+=1;goto B77923d;
case 0x779250:goto L779250;
case 0x779253:c.instructions+=1;goto B779253;
case 0x779258:goto L779258;
case 0x77925d:c.instructions+=1;goto B77925d;
case 0x779270:goto L779270;
case 0x779275:c.instructions+=1;goto B779275;
case 0x779280:goto L779280;
case 0x779283:c.instructions+=2;goto B779283;
case 0x779286:c.instructions+=1;goto B779286;
case 0x77928b:goto L77928b;
case 0x779290:c.instructions+=1;goto B779290;
case 0x7792a0:goto L7792a0;
case 0x7792a3:c.instructions+=2;goto B7792a3;
case 0x7792a4:c.instructions+=1;goto B7792a4;
case 0x7792a9:goto L7792a9;
case 0x7792aa:c.instructions+=1;goto B7792aa;
case 0x7792ab:goto L7792ab;
case 0x7792ae:c.instructions+=2;goto B7792ae;
case 0x7792af:c.instructions+=1;goto B7792af;
case 0x7792b4:goto L7792b4;
case 0x7792b5:c.instructions+=1;goto B7792b5;
case 0x7792b6:goto L7792b6;
case 0x7792b9:c.instructions+=2;goto B7792b9;
case 0x7792ba:c.instructions+=1;goto B7792ba;
case 0x7792bf:goto L7792bf;
case 0x7792c0:c.instructions+=1;goto B7792c0;
case 0x7792c1:goto L7792c1;
case 0x7792c4:c.instructions+=2;goto B7792c4;
case 0x7792c5:c.instructions+=1;goto B7792c5;
case 0x7792ca:goto L7792ca;
case 0x7792cb:c.instructions+=1;goto B7792cb;
case 0x7792cc:goto L7792cc;
case 0x7792cf:c.instructions+=2;goto B7792cf;
case 0x7792d0:c.instructions+=1;goto B7792d0;
case 0x7792d5:goto L7792d5;
case 0x7792d6:c.instructions+=1;goto B7792d6;
case 0x7792d7:goto L7792d7;
case 0x7792da:c.instructions+=2;goto B7792da;
case 0x7792db:c.instructions+=1;goto B7792db;
case 0x7792e0:goto L7792e0;
case 0x7792e1:c.instructions+=1;goto B7792e1;
case 0x7792e2:goto L7792e2;
case 0x7792e5:c.instructions+=2;goto B7792e5;
case 0x7792e6:c.instructions+=1;goto B7792e6;
case 0x7792eb:goto L7792eb;
case 0x7792ec:c.instructions+=1;goto B7792ec;
case 0x7792ed:goto L7792ed;
case 0x7792f0:c.instructions+=2;goto B7792f0;
case 0x7792f1:c.instructions+=1;goto B7792f1;
case 0x7792f6:goto L7792f6;
case 0x7792f7:c.instructions+=1;goto B7792f7;
case 0x7792f8:goto L7792f8;
case 0x7792fd:c.instructions+=1;goto B7792fd;
case 0x779310:goto L779310;
case 0x779313:c.instructions+=2;goto B779313;
case 0x779314:c.instructions+=1;goto B779314;
case 0x779319:goto L779319;
case 0x77931a:c.instructions+=1;goto B77931a;
case 0x77931b:goto L77931b;
case 0x779320:c.instructions+=1;goto B779320;
case 0x779330:goto L779330;
case 0x779332:c.instructions+=4;goto B779332;
case 0x779337:c.instructions+=3;goto B779337;
case 0x77933a:c.instructions+=2;goto B77933a;
case 0x77933b:c.instructions+=1;goto B77933b;
case 0x779340:goto L779340;
case 0x779343:c.instructions+=1;goto B779343;
case 0x779344:goto L779344;
case 0x779349:c.instructions+=1;goto B779349;
case 0x779350:goto L779350;
case 0x779356:c.instructions+=1;goto B779356;
case 0x77935b:goto L77935b;
case 0x779360:c.instructions+=1;goto B779360;
case 0x779370:goto L779370;
case 0x779375:c.instructions+=6;goto B779375;
case 0x779377:c.instructions+=5;goto B779377;
case 0x779379:c.instructions+=4;goto B779379;
case 0x77937c:c.instructions+=3;goto B77937c;
case 0x779381:c.instructions+=2;goto B779381;
case 0x779382:c.instructions+=1;goto B779382;
case 0x779387:goto L779387;
case 0x779388:goto L779388;
case 0x77938d:c.instructions+=1;goto B77938d;
case 0x7793a0:goto L7793a0;
case 0x7793a3:c.instructions+=2;goto B7793a3;
case 0x7793a4:c.instructions+=1;goto B7793a4;
case 0x7793a9:goto L7793a9;
case 0x7793aa:c.instructions+=1;goto B7793aa;
case 0x7793ab:goto L7793ab;
case 0x7793b0:c.instructions+=1;goto B7793b0;
case 0x7793c0:goto L7793c0;
case 0x7793c3:c.instructions+=2;goto B7793c3;
case 0x7793c4:c.instructions+=1;goto B7793c4;
case 0x7793c9:goto L7793c9;
case 0x7793ca:c.instructions+=1;goto B7793ca;
case 0x7793cb:goto L7793cb;
case 0x7793d0:c.instructions+=1;goto B7793d0;
case 0x7793e0:goto L7793e0;
case 0x7793e5:c.instructions+=5;goto B7793e5;
case 0x7793ea:c.instructions+=4;goto B7793ea;
case 0x7793ec:c.instructions+=3;goto B7793ec;
case 0x7793ef:c.instructions+=2;goto B7793ef;
case 0x7793f0:c.instructions+=1;goto B7793f0;
case 0x7793f5:goto L7793f5;
case 0x7793f6:goto L7793f6;
case 0x7793fb:c.instructions+=1;goto B7793fb;
case 0x779400:goto L779400;
case 0x779402:c.instructions+=4;goto B779402;
case 0x779407:c.instructions+=3;goto B779407;
case 0x77940a:c.instructions+=2;goto B77940a;
case 0x77940b:c.instructions+=1;goto B77940b;
case 0x779410:goto L779410;
case 0x779413:c.instructions+=1;goto B779413;
case 0x779414:goto L779414;
case 0x779419:c.instructions+=1;goto B779419;
case 0x779420:goto L779420;
case 0x779423:c.instructions+=2;goto B779423;
case 0x779429:c.instructions+=1;goto B779429;
case 0x77942e:goto L77942e;
case 0x779433:c.instructions+=1;goto B779433;
case 0x779440:goto L779440;
case 0x779443:c.instructions+=2;goto B779443;
case 0x779446:c.instructions+=1;goto B779446;
case 0x77944b:goto L77944b;
case 0x779450:c.instructions+=1;goto B779450;
case 0x779460:goto L779460;
case 0x779463:c.instructions+=2;goto B779463;
case 0x779464:c.instructions+=1;goto B779464;
case 0x779469:goto L779469;
case 0x77946a:c.instructions+=1;goto B77946a;
case 0x77946b:goto L77946b;
case 0x779470:c.instructions+=1;goto B779470;
case 0x779480:goto L779480;
case 0x779483:c.instructions+=2;goto B779483;
case 0x779486:c.instructions+=1;goto B779486;
case 0x77948b:goto L77948b;
case 0x77948e:c.instructions+=2;goto B77948e;
case 0x779491:c.instructions+=1;goto B779491;
case 0x779496:goto L779496;
case 0x77949b:c.instructions+=6;goto B77949b;
case 0x7794a0:c.instructions+=5;goto B7794a0;
case 0x7794a2:c.instructions+=4;goto B7794a2;
case 0x7794a5:c.instructions+=3;goto B7794a5;
case 0x7794a8:c.instructions+=2;goto B7794a8;
case 0x7794a9:c.instructions+=1;goto B7794a9;
case 0x7794ae:goto L7794ae;
case 0x7794af:goto L7794af;
case 0x7794b4:c.instructions+=1;goto B7794b4;
case 0x7794c0:goto L7794c0;
case 0x7794c3:c.instructions+=2;goto B7794c3;
case 0x7794c6:c.instructions+=1;goto B7794c6;
case 0x7794cb:goto L7794cb;
case 0x7794ce:c.instructions+=2;goto B7794ce;
case 0x7794d1:c.instructions+=1;goto B7794d1;
case 0x7794d6:goto L7794d6;
case 0x7794db:c.instructions+=6;goto B7794db;
case 0x7794e0:c.instructions+=5;goto B7794e0;
case 0x7794e2:c.instructions+=4;goto B7794e2;
case 0x7794e5:c.instructions+=3;goto B7794e5;
case 0x7794e8:c.instructions+=2;goto B7794e8;
case 0x7794e9:c.instructions+=1;goto B7794e9;
case 0x7794ee:goto L7794ee;
case 0x7794ef:goto L7794ef;
case 0x7794f4:c.instructions+=1;goto B7794f4;
case 0x779500:goto L779500;
case 0x779502:c.instructions+=4;goto B779502;
case 0x779507:c.instructions+=3;goto B779507;
case 0x77950a:c.instructions+=2;goto B77950a;
case 0x77950b:c.instructions+=1;goto B77950b;
case 0x779510:goto L779510;
case 0x779513:c.instructions+=1;goto B779513;
case 0x779514:goto L779514;
case 0x779519:c.instructions+=1;goto B779519;
case 0x779520:goto L779520;
case 0x779523:c.instructions+=1;goto B779523;
case 0x779528:goto L779528;
case 0x77952b:c.instructions+=1;goto B77952b;
case 0x779530:goto L779530;
case 0x779535:c.instructions+=1;goto B779535;
case 0x779540:goto L779540;
case 0x779542:c.instructions+=4;goto B779542;
case 0x779547:c.instructions+=3;goto B779547;
case 0x77954a:c.instructions+=2;goto B77954a;
case 0x77954b:c.instructions+=1;goto B77954b;
case 0x779550:goto L779550;
case 0x779553:c.instructions+=1;goto B779553;
case 0x779554:goto L779554;
case 0x779559:c.instructions+=1;goto B779559;
case 0x779560:goto L779560;
case 0x779563:c.instructions+=2;goto B779563;
case 0x779566:c.instructions+=1;goto B779566;
case 0x77956b:goto L77956b;
case 0x779570:c.instructions+=1;goto B779570;
case 0x779580:goto L779580;
case 0x779583:c.instructions+=1;goto B779583;
case 0x779588:goto L779588;
case 0x77958b:c.instructions+=2;goto B77958b;
case 0x77958e:c.instructions+=1;goto B77958e;
case 0x779593:goto L779593;
case 0x779598:c.instructions+=1;goto B779598;
case 0x7795a0:goto L7795a0;
case 0x7795a3:c.instructions+=1;goto B7795a3;
case 0x7795a8:goto L7795a8;
case 0x7795ab:c.instructions+=2;goto B7795ab;
case 0x7795ae:c.instructions+=1;goto B7795ae;
case 0x7795b3:goto L7795b3;
case 0x7795b6:c.instructions+=2;goto B7795b6;
case 0x7795b9:c.instructions+=1;goto B7795b9;
case 0x7795be:goto L7795be;
case 0x7795c1:c.instructions+=2;goto B7795c1;
case 0x7795c4:c.instructions+=1;goto B7795c4;
case 0x7795c9:goto L7795c9;
case 0x7795cc:c.instructions+=2;goto B7795cc;
case 0x7795cf:c.instructions+=1;goto B7795cf;
case 0x7795d4:goto L7795d4;
case 0x7795d7:c.instructions+=2;goto B7795d7;
case 0x7795da:c.instructions+=1;goto B7795da;
case 0x7795df:goto L7795df;
case 0x7795e2:c.instructions+=2;goto B7795e2;
case 0x7795e5:c.instructions+=1;goto B7795e5;
case 0x7795ea:goto L7795ea;
case 0x7795ed:c.instructions+=2;goto B7795ed;
case 0x7795f0:c.instructions+=1;goto B7795f0;
case 0x7795f5:goto L7795f5;
case 0x7795f8:c.instructions+=2;goto B7795f8;
case 0x7795fb:c.instructions+=1;goto B7795fb;
case 0x779600:goto L779600;
case 0x779605:c.instructions+=1;goto B779605;
case 0x779610:goto L779610;
case 0x779613:c.instructions+=2;goto B779613;
case 0x779614:c.instructions+=1;goto B779614;
case 0x779619:goto L779619;
case 0x77961a:c.instructions+=1;goto B77961a;
case 0x77961b:goto L77961b;
case 0x779620:c.instructions+=1;goto B779620;
case 0x779630:goto L779630;
case 0x779633:c.instructions+=2;goto B779633;
case 0x779636:c.instructions+=1;goto B779636;
case 0x77963b:goto L77963b;
case 0x779640:c.instructions+=1;goto B779640;
case 0x779650:goto L779650;
case 0x779653:c.instructions+=2;goto B779653;
case 0x779654:c.instructions+=1;goto B779654;
case 0x779659:goto L779659;
case 0x77965a:c.instructions+=1;goto B77965a;
case 0x77965b:goto L77965b;
case 0x779660:c.instructions+=1;goto B779660;
case 0x779670:goto L779670;
case 0x779676:c.instructions+=1;goto B779676;
case 0x77967b:goto L77967b;
case 0x779680:c.instructions+=1;goto B779680;
case 0x779690:goto L779690;
case 0x779696:c.instructions+=1;goto B779696;
case 0x77969b:goto L77969b;
case 0x7796a1:c.instructions+=1;goto B7796a1;
case 0x7796a6:goto L7796a6;
case 0x7796ab:c.instructions+=1;goto B7796ab;
case 0x7796b0:goto L7796b0;
case 0x7796b3:c.instructions+=1;goto B7796b3;
case 0x7796b8:goto L7796b8;
case 0x7796ba:c.instructions+=4;goto B7796ba;
case 0x7796bf:c.instructions+=3;goto B7796bf;
case 0x7796c2:c.instructions+=2;goto B7796c2;
case 0x7796c3:c.instructions+=1;goto B7796c3;
case 0x7796c8:goto L7796c8;
case 0x7796cb:c.instructions+=1;goto B7796cb;
case 0x7796cc:goto L7796cc;
case 0x7796d1:c.instructions+=1;goto B7796d1;
case 0x7796e0:goto L7796e0;
case 0x7796e3:c.instructions+=1;goto B7796e3;
case 0x7796e8:goto L7796e8;
case 0x7796ed:c.instructions+=1;goto B7796ed;
case 0x779700:goto L779700;
case 0x779702:c.instructions+=4;goto B779702;
case 0x779707:c.instructions+=3;goto B779707;
case 0x77970a:c.instructions+=2;goto B77970a;
case 0x77970b:c.instructions+=1;goto B77970b;
case 0x779710:goto L779710;
case 0x779713:c.instructions+=1;goto B779713;
case 0x779714:goto L779714;
case 0x779716:c.instructions+=4;goto B779716;
case 0x77971b:c.instructions+=3;goto B77971b;
case 0x77971e:c.instructions+=2;goto B77971e;
case 0x77971f:c.instructions+=1;goto B77971f;
case 0x779724:goto L779724;
case 0x779727:c.instructions+=1;goto B779727;
case 0x779728:goto L779728;
case 0x77972a:c.instructions+=4;goto B77972a;
case 0x77972f:c.instructions+=3;goto B77972f;
case 0x779732:c.instructions+=2;goto B779732;
case 0x779733:c.instructions+=1;goto B779733;
case 0x779738:goto L779738;
case 0x77973b:c.instructions+=1;goto B77973b;
case 0x77973c:goto L77973c;
case 0x77973e:c.instructions+=4;goto B77973e;
case 0x779743:c.instructions+=3;goto B779743;
case 0x779746:c.instructions+=2;goto B779746;
case 0x779747:c.instructions+=1;goto B779747;
case 0x77974c:goto L77974c;
case 0x77974f:c.instructions+=1;goto B77974f;
case 0x779750:goto L779750;
case 0x779752:c.instructions+=4;goto B779752;
case 0x779757:c.instructions+=3;goto B779757;
case 0x77975a:c.instructions+=2;goto B77975a;
case 0x77975b:c.instructions+=1;goto B77975b;
case 0x779760:goto L779760;
case 0x779763:c.instructions+=1;goto B779763;
case 0x779764:goto L779764;
case 0x779766:c.instructions+=4;goto B779766;
case 0x77976b:c.instructions+=3;goto B77976b;
case 0x77976e:c.instructions+=2;goto B77976e;
case 0x77976f:c.instructions+=1;goto B77976f;
case 0x779774:goto L779774;
case 0x779777:c.instructions+=1;goto B779777;
case 0x779778:goto L779778;
case 0x77977d:c.instructions+=1;goto B77977d;
case 0x779790:goto L779790;
case 0x779792:c.instructions+=4;goto B779792;
case 0x779797:c.instructions+=3;goto B779797;
case 0x77979a:c.instructions+=2;goto B77979a;
case 0x77979b:c.instructions+=1;goto B77979b;
case 0x7797a0:goto L7797a0;
case 0x7797a3:c.instructions+=1;goto B7797a3;
case 0x7797a4:goto L7797a4;
case 0x7797a9:c.instructions+=1;goto B7797a9;
case 0x7797b0:goto L7797b0;
case 0x7797b3:c.instructions+=2;goto B7797b3;
case 0x7797b9:c.instructions+=1;goto B7797b9;
case 0x7797be:goto L7797be;
case 0x7797c1:c.instructions+=2;goto B7797c1;
case 0x7797c7:c.instructions+=1;goto B7797c7;
case 0x7797cc:goto L7797cc;
case 0x7797cf:c.instructions+=2;goto B7797cf;
case 0x7797d5:c.instructions+=1;goto B7797d5;
case 0x7797da:goto L7797da;
case 0x7797dd:c.instructions+=2;goto B7797dd;
case 0x7797e3:c.instructions+=1;goto B7797e3;
case 0x7797e8:goto L7797e8;
case 0x7797eb:c.instructions+=2;goto B7797eb;
case 0x7797f1:c.instructions+=1;goto B7797f1;
case 0x7797f6:goto L7797f6;
case 0x7797f9:c.instructions+=2;goto B7797f9;
case 0x7797ff:c.instructions+=1;goto B7797ff;
case 0x779804:goto L779804;
case 0x779807:c.instructions+=2;goto B779807;
case 0x77980d:c.instructions+=1;goto B77980d;
case 0x779812:goto L779812;
case 0x779815:c.instructions+=2;goto B779815;
case 0x77981b:c.instructions+=1;goto B77981b;
case 0x779820:goto L779820;
case 0x779823:c.instructions+=2;goto B779823;
case 0x779829:c.instructions+=1;goto B779829;
case 0x77982e:goto L77982e;
case 0x779831:c.instructions+=2;goto B779831;
case 0x779837:c.instructions+=1;goto B779837;
case 0x77983c:goto L77983c;
case 0x77983f:c.instructions+=2;goto B77983f;
case 0x779845:c.instructions+=1;goto B779845;
case 0x77984a:goto L77984a;
case 0x77984d:c.instructions+=2;goto B77984d;
case 0x779853:c.instructions+=1;goto B779853;
case 0x779858:goto L779858;
case 0x77985b:c.instructions+=2;goto B77985b;
case 0x779861:c.instructions+=1;goto B779861;
case 0x779866:goto L779866;
case 0x779869:c.instructions+=2;goto B779869;
case 0x77986f:c.instructions+=1;goto B77986f;
case 0x779874:goto L779874;
case 0x779877:c.instructions+=2;goto B779877;
case 0x77987d:c.instructions+=1;goto B77987d;
case 0x779882:goto L779882;
case 0x779885:c.instructions+=2;goto B779885;
case 0x77988b:c.instructions+=1;goto B77988b;
case 0x779890:goto L779890;
case 0x779893:c.instructions+=2;goto B779893;
case 0x779899:c.instructions+=1;goto B779899;
case 0x77989e:goto L77989e;
case 0x7798a1:c.instructions+=2;goto B7798a1;
case 0x7798a7:c.instructions+=1;goto B7798a7;
case 0x7798ac:goto L7798ac;
case 0x7798b1:c.instructions+=1;goto B7798b1;
case 0x7798c0:goto L7798c0;
case 0x7798c6:c.instructions+=1;goto B7798c6;
case 0x7798cb:goto L7798cb;
case 0x7798d1:c.instructions+=1;goto B7798d1;
case 0x7798d6:goto L7798d6;
case 0x7798db:c.instructions+=1;goto B7798db;
case 0x7798e0:goto L7798e0;
case 0x7798e3:c.instructions+=2;goto B7798e3;
case 0x7798e9:c.instructions+=1;goto B7798e9;
case 0x7798ee:goto L7798ee;
case 0x7798f1:c.instructions+=2;goto B7798f1;
case 0x7798f7:c.instructions+=1;goto B7798f7;
case 0x7798fc:goto L7798fc;
case 0x7798fe:c.instructions+=4;goto B7798fe;
case 0x779903:c.instructions+=3;goto B779903;
case 0x779906:c.instructions+=2;goto B779906;
case 0x779907:c.instructions+=1;goto B779907;
case 0x77990c:goto L77990c;
case 0x77990f:c.instructions+=1;goto B77990f;
case 0x779910:goto L779910;
case 0x779913:c.instructions+=2;goto B779913;
case 0x779914:c.instructions+=1;goto B779914;
case 0x779919:goto L779919;
case 0x77991a:c.instructions+=1;goto B77991a;
case 0x77991b:goto L77991b;
case 0x779920:c.instructions+=1;goto B779920;
case 0x779930:goto L779930;
case 0x779933:c.instructions+=2;goto B779933;
case 0x779939:c.instructions+=1;goto B779939;
case 0x77993e:goto L77993e;
case 0x779941:c.instructions+=2;goto B779941;
case 0x779947:c.instructions+=1;goto B779947;
case 0x77994c:goto L77994c;
case 0x779951:c.instructions+=1;goto B779951;
case 0x779960:goto L779960;
case 0x779962:c.instructions+=4;goto B779962;
case 0x779967:c.instructions+=3;goto B779967;
case 0x77996a:c.instructions+=2;goto B77996a;
case 0x77996b:c.instructions+=1;goto B77996b;
case 0x779970:goto L779970;
case 0x779973:c.instructions+=1;goto B779973;
case 0x779974:goto L779974;
case 0x779979:c.instructions+=1;goto B779979;
case 0x779980:goto L779980;
case 0x779982:c.instructions+=4;goto B779982;
case 0x779987:c.instructions+=3;goto B779987;
case 0x77998d:c.instructions+=2;goto B77998d;
case 0x77998e:c.instructions+=1;goto B77998e;
case 0x779993:goto L779993;
case 0x779996:c.instructions+=1;goto B779996;
case 0x779997:goto L779997;
case 0x779999:c.instructions+=4;goto B779999;
case 0x77999e:c.instructions+=3;goto B77999e;
case 0x7799a4:c.instructions+=2;goto B7799a4;
case 0x7799a5:c.instructions+=1;goto B7799a5;
case 0x7799aa:goto L7799aa;
case 0x7799ad:c.instructions+=1;goto B7799ad;
case 0x7799ae:goto L7799ae;
case 0x7799b0:c.instructions+=4;goto B7799b0;
case 0x7799b5:c.instructions+=3;goto B7799b5;
case 0x7799bb:c.instructions+=2;goto B7799bb;
case 0x7799bc:c.instructions+=1;goto B7799bc;
case 0x7799c1:goto L7799c1;
case 0x7799c4:c.instructions+=1;goto B7799c4;
case 0x7799c5:goto L7799c5;
case 0x7799c7:c.instructions+=4;goto B7799c7;
case 0x7799cc:c.instructions+=3;goto B7799cc;
case 0x7799d2:c.instructions+=2;goto B7799d2;
case 0x7799d3:c.instructions+=1;goto B7799d3;
case 0x7799d8:goto L7799d8;
case 0x7799db:c.instructions+=1;goto B7799db;
case 0x7799dc:goto L7799dc;
case 0x7799de:c.instructions+=4;goto B7799de;
case 0x7799e3:c.instructions+=3;goto B7799e3;
case 0x7799e9:c.instructions+=2;goto B7799e9;
case 0x7799ea:c.instructions+=1;goto B7799ea;
case 0x7799ef:goto L7799ef;
case 0x7799f2:c.instructions+=1;goto B7799f2;
case 0x7799f3:goto L7799f3;
case 0x7799f5:c.instructions+=4;goto B7799f5;
case 0x7799fa:c.instructions+=3;goto B7799fa;
case 0x779a00:c.instructions+=2;goto B779a00;
case 0x779a01:c.instructions+=1;goto B779a01;
case 0x779a06:goto L779a06;
case 0x779a09:c.instructions+=1;goto B779a09;
case 0x779a0a:goto L779a0a;
case 0x779a0c:c.instructions+=4;goto B779a0c;
case 0x779a11:c.instructions+=3;goto B779a11;
case 0x779a17:c.instructions+=2;goto B779a17;
case 0x779a18:c.instructions+=1;goto B779a18;
case 0x779a1d:goto L779a1d;
case 0x779a20:c.instructions+=1;goto B779a20;
case 0x779a21:goto L779a21;
case 0x779a27:c.instructions+=1;goto B779a27;
case 0x779a2c:goto L779a2c;
case 0x779a32:c.instructions+=1;goto B779a32;
case 0x779a37:goto L779a37;
case 0x779a39:c.instructions+=4;goto B779a39;
case 0x779a3e:c.instructions+=3;goto B779a3e;
case 0x779a44:c.instructions+=2;goto B779a44;
case 0x779a45:c.instructions+=1;goto B779a45;
case 0x779a4a:goto L779a4a;
case 0x779a4d:c.instructions+=1;goto B779a4d;
case 0x779a4e:goto L779a4e;
case 0x779a50:c.instructions+=4;goto B779a50;
case 0x779a55:c.instructions+=3;goto B779a55;
case 0x779a5b:c.instructions+=2;goto B779a5b;
case 0x779a5c:c.instructions+=1;goto B779a5c;
case 0x779a61:goto L779a61;
case 0x779a64:c.instructions+=1;goto B779a64;
case 0x779a65:goto L779a65;
case 0x779a6b:c.instructions+=1;goto B779a6b;
case 0x779a70:goto L779a70;
case 0x779a72:c.instructions+=4;goto B779a72;
case 0x779a77:c.instructions+=3;goto B779a77;
case 0x779a7d:c.instructions+=2;goto B779a7d;
case 0x779a7e:c.instructions+=1;goto B779a7e;
case 0x779a83:goto L779a83;
case 0x779a86:c.instructions+=1;goto B779a86;
case 0x779a87:goto L779a87;
case 0x779a89:c.instructions+=4;goto B779a89;
case 0x779a8e:c.instructions+=3;goto B779a8e;
case 0x779a94:c.instructions+=2;goto B779a94;
case 0x779a95:c.instructions+=1;goto B779a95;
case 0x779a9a:goto L779a9a;
case 0x779a9d:c.instructions+=1;goto B779a9d;
case 0x779a9e:goto L779a9e;
case 0x779aa0:c.instructions+=4;goto B779aa0;
case 0x779aa5:c.instructions+=3;goto B779aa5;
case 0x779aab:c.instructions+=2;goto B779aab;
case 0x779aac:c.instructions+=1;goto B779aac;
case 0x779ab1:goto L779ab1;
case 0x779ab4:c.instructions+=1;goto B779ab4;
case 0x779ab5:goto L779ab5;
case 0x779ab7:c.instructions+=4;goto B779ab7;
case 0x779abc:c.instructions+=3;goto B779abc;
case 0x779ac2:c.instructions+=2;goto B779ac2;
case 0x779ac3:c.instructions+=1;goto B779ac3;
case 0x779ac8:goto L779ac8;
case 0x779acb:c.instructions+=1;goto B779acb;
case 0x779acc:goto L779acc;
case 0x779ad1:c.instructions+=1;goto B779ad1;
case 0x779ae0:goto L779ae0;
case 0x779ae2:c.instructions+=4;goto B779ae2;
case 0x779ae7:c.instructions+=3;goto B779ae7;
case 0x779aea:c.instructions+=2;goto B779aea;
case 0x779aeb:c.instructions+=1;goto B779aeb;
case 0x779af0:goto L779af0;
case 0x779af3:c.instructions+=1;goto B779af3;
case 0x779af4:goto L779af4;
case 0x779af6:c.instructions+=4;goto B779af6;
case 0x779afb:c.instructions+=3;goto B779afb;
case 0x779afe:c.instructions+=2;goto B779afe;
case 0x779aff:c.instructions+=1;goto B779aff;
case 0x779b04:goto L779b04;
case 0x779b07:c.instructions+=1;goto B779b07;
case 0x779b08:goto L779b08;
case 0x779b0d:c.instructions+=1;goto B779b0d;
case 0x779b20:goto L779b20;
case 0x779b23:c.instructions+=2;goto B779b23;
case 0x779b29:c.instructions+=1;goto B779b29;
case 0x779b2e:goto L779b2e;
case 0x779b31:c.instructions+=2;goto B779b31;
case 0x779b37:c.instructions+=1;goto B779b37;
case 0x779b3c:goto L779b3c;
case 0x779b41:c.instructions+=1;goto B779b41;
case 0x779b50:goto L779b50;
case 0x779b52:c.instructions+=4;goto B779b52;
case 0x779b57:c.instructions+=3;goto B779b57;
case 0x779b5a:c.instructions+=2;goto B779b5a;
case 0x779b5b:c.instructions+=1;goto B779b5b;
case 0x779b60:goto L779b60;
case 0x779b63:c.instructions+=1;goto B779b63;
case 0x779b64:goto L779b64;
case 0x779b66:c.instructions+=4;goto B779b66;
case 0x779b6b:c.instructions+=3;goto B779b6b;
case 0x779b6e:c.instructions+=2;goto B779b6e;
case 0x779b6f:c.instructions+=1;goto B779b6f;
case 0x779b74:goto L779b74;
case 0x779b77:c.instructions+=1;goto B779b77;
case 0x779b78:goto L779b78;
case 0x779b7b:c.instructions+=2;goto B779b7b;
case 0x779b7c:c.instructions+=1;goto B779b7c;
case 0x779b81:goto L779b81;
case 0x779b82:c.instructions+=1;goto B779b82;
case 0x779b83:goto L779b83;
case 0x779b85:c.instructions+=4;goto B779b85;
case 0x779b8a:c.instructions+=3;goto B779b8a;
case 0x779b8d:c.instructions+=2;goto B779b8d;
case 0x779b8e:c.instructions+=1;goto B779b8e;
case 0x779b93:goto L779b93;
case 0x779b96:c.instructions+=1;goto B779b96;
case 0x779b97:goto L779b97;
case 0x779b9a:c.instructions+=2;goto B779b9a;
case 0x779b9b:c.instructions+=1;goto B779b9b;
case 0x779ba0:goto L779ba0;
case 0x779ba1:c.instructions+=1;goto B779ba1;
case 0x779ba2:goto L779ba2;
case 0x779ba7:c.instructions+=1;goto B779ba7;
case 0x779bb0:goto L779bb0;
case 0x779bb6:c.instructions+=1;goto B779bb6;
case 0x779bbb:goto L779bbb;
case 0x779bc0:c.instructions+=1;goto B779bc0;
case 0x779bd0:goto L779bd0;
case 0x779bd2:c.instructions+=4;goto B779bd2;
case 0x779bd7:c.instructions+=3;goto B779bd7;
case 0x779bda:c.instructions+=2;goto B779bda;
case 0x779bdb:c.instructions+=1;goto B779bdb;
case 0x779be0:goto L779be0;
case 0x779be3:c.instructions+=1;goto B779be3;
case 0x779be4:goto L779be4;
case 0x779be6:c.instructions+=4;goto B779be6;
case 0x779beb:c.instructions+=3;goto B779beb;
case 0x779bee:c.instructions+=2;goto B779bee;
case 0x779bef:c.instructions+=1;goto B779bef;
case 0x779bf4:goto L779bf4;
case 0x779bf7:c.instructions+=1;goto B779bf7;
case 0x779bf8:goto L779bf8;
case 0x779bfa:c.instructions+=4;goto B779bfa;
case 0x779bff:c.instructions+=3;goto B779bff;
case 0x779c02:c.instructions+=2;goto B779c02;
case 0x779c03:c.instructions+=1;goto B779c03;
case 0x779c08:goto L779c08;
case 0x779c0b:c.instructions+=1;goto B779c0b;
case 0x779c0c:goto L779c0c;
case 0x779c11:c.instructions+=1;goto B779c11;
case 0x779c20:goto L779c20;
case 0x779c22:c.instructions+=4;goto B779c22;
case 0x779c27:c.instructions+=3;goto B779c27;
case 0x779c2a:c.instructions+=2;goto B779c2a;
case 0x779c2b:c.instructions+=1;goto B779c2b;
case 0x779c30:goto L779c30;
case 0x779c33:c.instructions+=1;goto B779c33;
case 0x779c34:goto L779c34;
case 0x779c37:c.instructions+=2;goto B779c37;
case 0x779c38:c.instructions+=1;goto B779c38;
case 0x779c3d:goto L779c3d;
case 0x779c3e:c.instructions+=1;goto B779c3e;
case 0x779c3f:goto L779c3f;
case 0x779c44:c.instructions+=1;goto B779c44;
case 0x779c50:goto L779c50;
case 0x779c52:c.instructions+=4;goto B779c52;
case 0x779c57:c.instructions+=3;goto B779c57;
case 0x779c5a:c.instructions+=2;goto B779c5a;
case 0x779c5b:c.instructions+=1;goto B779c5b;
case 0x779c60:goto L779c60;
case 0x779c63:c.instructions+=1;goto B779c63;
case 0x779c64:goto L779c64;
case 0x779c66:c.instructions+=4;goto B779c66;
case 0x779c6b:c.instructions+=3;goto B779c6b;
case 0x779c6e:c.instructions+=2;goto B779c6e;
case 0x779c6f:c.instructions+=1;goto B779c6f;
case 0x779c74:goto L779c74;
case 0x779c77:c.instructions+=1;goto B779c77;
case 0x779c78:goto L779c78;
case 0x779c7a:c.instructions+=4;goto B779c7a;
case 0x779c7f:c.instructions+=3;goto B779c7f;
case 0x779c82:c.instructions+=2;goto B779c82;
case 0x779c83:c.instructions+=1;goto B779c83;
case 0x779c88:goto L779c88;
case 0x779c8b:c.instructions+=1;goto B779c8b;
case 0x779c8c:goto L779c8c;
case 0x779c8e:c.instructions+=4;goto B779c8e;
case 0x779c93:c.instructions+=3;goto B779c93;
case 0x779c96:c.instructions+=2;goto B779c96;
case 0x779c97:c.instructions+=1;goto B779c97;
case 0x779c9c:goto L779c9c;
case 0x779c9f:c.instructions+=1;goto B779c9f;
case 0x779ca0:goto L779ca0;
case 0x779ca5:c.instructions+=1;goto B779ca5;
case 0x779cb0:goto L779cb0;
case 0x779cb5:c.instructions+=6;goto B779cb5;
case 0x779cb7:c.instructions+=5;goto B779cb7;
case 0x779cbc:c.instructions+=4;goto B779cbc;
case 0x779cbf:c.instructions+=3;goto B779cbf;
case 0x779cc2:c.instructions+=2;goto B779cc2;
case 0x779cc3:c.instructions+=1;goto B779cc3;
case 0x779cc8:goto L779cc8;
case 0x779cc9:goto L779cc9;
case 0x779ccc:c.instructions+=2;goto B779ccc;
case 0x779cd2:c.instructions+=1;goto B779cd2;
case 0x779cd7:goto L779cd7;
case 0x779cdc:c.instructions+=1;goto B779cdc;
case 0x779cf0:goto L779cf0;
case 0x779cf3:c.instructions+=1;goto B779cf3;
case 0x779cf8:goto L779cf8;
case 0x779cfb:c.instructions+=2;goto B779cfb;
case 0x779cfe:c.instructions+=1;goto B779cfe;
case 0x779d03:goto L779d03;
case 0x779d06:c.instructions+=2;goto B779d06;
case 0x779d0c:c.instructions+=1;goto B779d0c;
case 0x779d11:goto L779d11;
case 0x779d14:c.instructions+=2;goto B779d14;
case 0x779d1a:c.instructions+=1;goto B779d1a;
case 0x779d1f:goto L779d1f;
case 0x779d22:c.instructions+=2;goto B779d22;
case 0x779d28:c.instructions+=1;goto B779d28;
case 0x779d2d:goto L779d2d;
case 0x779d32:c.instructions+=1;goto B779d32;
case 0x779d40:goto L779d40;
case 0x779d43:c.instructions+=1;goto B779d43;
case 0x779d48:goto L779d48;
case 0x779d4b:c.instructions+=2;goto B779d4b;
case 0x779d4e:c.instructions+=1;goto B779d4e;
case 0x779d53:goto L779d53;
case 0x779d58:c.instructions+=6;goto B779d58;
case 0x779d5a:c.instructions+=5;goto B779d5a;
case 0x779d5c:c.instructions+=4;goto B779d5c;
case 0x779d5f:c.instructions+=3;goto B779d5f;
case 0x779d64:c.instructions+=2;goto B779d64;
case 0x779d65:c.instructions+=1;goto B779d65;
case 0x779d6a:goto L779d6a;
case 0x779d6b:goto L779d6b;
case 0x779d70:c.instructions+=6;goto B779d70;
case 0x779d72:c.instructions+=5;goto B779d72;
case 0x779d74:c.instructions+=4;goto B779d74;
case 0x779d77:c.instructions+=3;goto B779d77;
case 0x779d7c:c.instructions+=2;goto B779d7c;
case 0x779d7d:c.instructions+=1;goto B779d7d;
case 0x779d82:goto L779d82;
case 0x779d83:goto L779d83;
case 0x779d86:c.instructions+=2;goto B779d86;
case 0x779d8c:c.instructions+=1;goto B779d8c;
case 0x779d91:goto L779d91;
case 0x779d94:c.instructions+=2;goto B779d94;
case 0x779d9a:c.instructions+=1;goto B779d9a;
case 0x779d9f:goto L779d9f;
case 0x779da2:c.instructions+=2;goto B779da2;
case 0x779da8:c.instructions+=1;goto B779da8;
case 0x779dad:goto L779dad;
case 0x779daf:c.instructions+=4;goto B779daf;
case 0x779db4:c.instructions+=3;goto B779db4;
case 0x779db7:c.instructions+=2;goto B779db7;
case 0x779db8:c.instructions+=1;goto B779db8;
case 0x779dbd:goto L779dbd;
case 0x779dc0:c.instructions+=1;goto B779dc0;
case 0x779dc1:goto L779dc1;
case 0x779dc3:c.instructions+=4;goto B779dc3;
case 0x779dc8:c.instructions+=3;goto B779dc8;
case 0x779dcb:c.instructions+=2;goto B779dcb;
case 0x779dcc:c.instructions+=1;goto B779dcc;
case 0x779dd1:goto L779dd1;
case 0x779dd4:c.instructions+=1;goto B779dd4;
case 0x779dd5:goto L779dd5;
case 0x779dda:c.instructions+=1;goto B779dda;
case 0x779de0:goto L779de0;
case 0x779de3:c.instructions+=1;goto B779de3;
case 0x779de8:goto L779de8;
case 0x779deb:c.instructions+=2;goto B779deb;
case 0x779dee:c.instructions+=1;goto B779dee;
case 0x779df3:goto L779df3;
case 0x779df8:c.instructions+=6;goto B779df8;
case 0x779dfa:c.instructions+=5;goto B779dfa;
case 0x779dfc:c.instructions+=4;goto B779dfc;
case 0x779dff:c.instructions+=3;goto B779dff;
case 0x779e04:c.instructions+=2;goto B779e04;
case 0x779e05:c.instructions+=1;goto B779e05;
case 0x779e0a:goto L779e0a;
case 0x779e0b:goto L779e0b;
case 0x779e10:c.instructions+=6;goto B779e10;
case 0x779e12:c.instructions+=5;goto B779e12;
case 0x779e14:c.instructions+=4;goto B779e14;
case 0x779e17:c.instructions+=3;goto B779e17;
case 0x779e1c:c.instructions+=2;goto B779e1c;
case 0x779e1d:c.instructions+=1;goto B779e1d;
case 0x779e22:goto L779e22;
case 0x779e23:goto L779e23;
case 0x779e26:c.instructions+=2;goto B779e26;
case 0x779e2c:c.instructions+=1;goto B779e2c;
case 0x779e31:goto L779e31;
case 0x779e34:c.instructions+=2;goto B779e34;
case 0x779e3a:c.instructions+=1;goto B779e3a;
case 0x779e3f:goto L779e3f;
case 0x779e42:c.instructions+=2;goto B779e42;
case 0x779e48:c.instructions+=1;goto B779e48;
case 0x779e4d:goto L779e4d;
case 0x779e52:c.instructions+=1;goto B779e52;
case 0x779e60:goto L779e60;
case 0x779e63:c.instructions+=1;goto B779e63;
case 0x779e68:goto L779e68;
case 0x779e6d:c.instructions+=1;goto B779e6d;
case 0x779e80:goto L779e80;
case 0x779e86:c.instructions+=1;goto B779e86;
case 0x779e8b:goto L779e8b;
case 0x779e90:c.instructions+=1;goto B779e90;
case 0x779ea0:goto L779ea0;
case 0x779ea3:c.instructions+=2;goto B779ea3;
case 0x779ea4:c.instructions+=1;goto B779ea4;
case 0x779ea9:goto L779ea9;
case 0x779eaa:c.instructions+=1;goto B779eaa;
case 0x779eab:goto L779eab;
case 0x779ead:c.instructions+=4;goto B779ead;
case 0x779eb2:c.instructions+=3;goto B779eb2;
case 0x779eb5:c.instructions+=2;goto B779eb5;
case 0x779eb6:c.instructions+=1;goto B779eb6;
case 0x779ebb:goto L779ebb;
case 0x779ebe:c.instructions+=1;goto B779ebe;
case 0x779ebf:goto L779ebf;
case 0x779ec4:c.instructions+=1;goto B779ec4;
case 0x779ed0:goto L779ed0;
case 0x779ed6:c.instructions+=1;goto B779ed6;
case 0x779edb:goto L779edb;
case 0x779ee0:c.instructions+=1;goto B779ee0;
case 0x779ef0:goto L779ef0;
case 0x779ef3:c.instructions+=2;goto B779ef3;
case 0x779ef6:c.instructions+=1;goto B779ef6;
case 0x779efb:goto L779efb;
case 0x779f00:c.instructions+=1;goto B779f00;
case 0x779f10:goto L779f10;
case 0x779f13:c.instructions+=2;goto B779f13;
case 0x779f19:c.instructions+=1;goto B779f19;
case 0x779f1e:goto L779f1e;
case 0x779f21:c.instructions+=2;goto B779f21;
case 0x779f27:c.instructions+=1;goto B779f27;
case 0x779f2c:goto L779f2c;
case 0x779f2e:c.instructions+=4;goto B779f2e;
case 0x779f33:c.instructions+=3;goto B779f33;
case 0x779f36:c.instructions+=2;goto B779f36;
case 0x779f37:c.instructions+=1;goto B779f37;
case 0x779f3c:goto L779f3c;
case 0x779f3f:c.instructions+=1;goto B779f3f;
case 0x779f40:goto L779f40;
case 0x779f42:c.instructions+=4;goto B779f42;
case 0x779f47:c.instructions+=3;goto B779f47;
case 0x779f4a:c.instructions+=2;goto B779f4a;
case 0x779f4b:c.instructions+=1;goto B779f4b;
case 0x779f50:goto L779f50;
case 0x779f53:c.instructions+=1;goto B779f53;
case 0x779f54:goto L779f54;
case 0x779f56:c.instructions+=4;goto B779f56;
case 0x779f5b:c.instructions+=3;goto B779f5b;
case 0x779f5e:c.instructions+=2;goto B779f5e;
case 0x779f5f:c.instructions+=1;goto B779f5f;
case 0x779f64:goto L779f64;
case 0x779f67:c.instructions+=1;goto B779f67;
case 0x779f68:goto L779f68;
case 0x779f6d:c.instructions+=1;goto B779f6d;
case 0x779f80:goto L779f80;
case 0x779f82:c.instructions+=4;goto B779f82;
case 0x779f87:c.instructions+=3;goto B779f87;
case 0x779f8a:c.instructions+=2;goto B779f8a;
case 0x779f8b:c.instructions+=1;goto B779f8b;
case 0x779f90:goto L779f90;
case 0x779f93:c.instructions+=1;goto B779f93;
case 0x779f94:goto L779f94;
case 0x779f99:c.instructions+=1;goto B779f99;
case 0x779fa0:goto L779fa0;
case 0x779fa3:c.instructions+=2;goto B779fa3;
case 0x779fa6:c.instructions+=1;goto B779fa6;
case 0x779fab:goto L779fab;
case 0x779fae:c.instructions+=2;goto B779fae;
case 0x779fb1:c.instructions+=1;goto B779fb1;
case 0x779fb6:goto L779fb6;
case 0x779fbb:c.instructions+=1;goto B779fbb;
case 0x779fc0:goto L779fc0;
case 0x779fc6:c.instructions+=1;goto B779fc6;
case 0x779fcb:goto L779fcb;
case 0x779fd0:c.instructions+=1;goto B779fd0;
case 0x779fe0:goto L779fe0;
case 0x779fe2:c.instructions+=4;goto B779fe2;
case 0x779fe7:c.instructions+=3;goto B779fe7;
case 0x779fea:c.instructions+=2;goto B779fea;
case 0x779feb:c.instructions+=1;goto B779feb;
case 0x779ff0:goto L779ff0;
case 0x779ff3:c.instructions+=1;goto B779ff3;
case 0x779ff4:goto L779ff4;
case 0x779ff9:c.instructions+=1;goto B779ff9;
default:missing_instruction(c.pc);}
B779002:L779002:{c.instructions+=3;NFSU2_TR(0x779002);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779005:{NFSU2_TR(0x779005);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4f4ull))));
}
B77900b:{NFSU2_TR(0x77900b);
TAIL_STATIC(0x4835c0u,483);
}
B779010:L779010:{c.instructions+=3;NFSU2_TR(0x779010);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779013:{NFSU2_TR(0x779013);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4fcull))));
}
B779019:{NFSU2_TR(0x779019);
TAIL_STATIC(0x4835c0u,483);
}
B77901e:L77901e:{c.instructions+=2;NFSU2_TR(0x77901e);
w4(R+0,u32(0x7e4658ull));
}
B779023:{NFSU2_TR(0x779023);
TAIL_STATIC(0x75bfd2u,75b);
}
B779030:L779030:{c.instructions+=3;NFSU2_TR(0x779030);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779033:{NFSU2_TR(0x779033);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779034:{NFSU2_TR(0x779034);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779039ull));
TAIL_STATIC(0x592ae0u,592);
}
B779039:L779039:{c.instructions+=2;NFSU2_TR(0x779039);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77903a:{NFSU2_TR(0x77903a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77903b:L77903b:{c.instructions+=2;NFSU2_TR(0x77903b);
w4(R+0,u32(0x7e467cull));
}
B779040:{NFSU2_TR(0x779040);
TAIL_STATIC(0x75bfd2u,75b);
}
B779050:L779050:{c.instructions+=3;NFSU2_TR(0x779050);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779053:{NFSU2_TR(0x779053);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779054:{NFSU2_TR(0x779054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779059ull));
TAIL_STATIC(0x592dd0u,592);
}
B779059:L779059:{c.instructions+=2;NFSU2_TR(0x779059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77905a:{NFSU2_TR(0x77905a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77905b:L77905b:{c.instructions+=2;NFSU2_TR(0x77905b);
w4(R+0,u32(0x7e46a0ull));
}
B779060:{NFSU2_TR(0x779060);
TAIL_STATIC(0x75bfd2u,75b);
}
B779070:L779070:{c.instructions+=2;NFSU2_TR(0x779070);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779073:{NFSU2_TR(0x779073);
TAIL_STATIC(0x401fd0u,401);
}
B779078:L779078:{c.instructions+=3;NFSU2_TR(0x779078);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77907b:{NFSU2_TR(0x77907b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B77907e:{NFSU2_TR(0x77907e);
TAIL_STATIC(0x5ae1f0u,5ae);
}
B779083:L779083:{c.instructions+=3;NFSU2_TR(0x779083);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779086:{NFSU2_TR(0x779086);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779087:{NFSU2_TR(0x779087);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77908cull));
TAIL_STATIC(0x591360u,591);
}
B77908c:L77908c:{c.instructions+=2;NFSU2_TR(0x77908c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77908d:{NFSU2_TR(0x77908d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77908e:L77908e:{c.instructions+=3;NFSU2_TR(0x77908e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779091:{NFSU2_TR(0x779091);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779092:{NFSU2_TR(0x779092);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779097ull));
TAIL_STATIC(0x5913b0u,591);
}
B779097:L779097:{c.instructions+=2;NFSU2_TR(0x779097);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779098:{NFSU2_TR(0x779098);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779099:L779099:{c.instructions+=3;NFSU2_TR(0x779099);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77909c:{NFSU2_TR(0x77909c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77909d:{NFSU2_TR(0x77909d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7790a2ull));
TAIL_STATIC(0x598ef0u,598);
}
B7790a2:L7790a2:{c.instructions+=2;NFSU2_TR(0x7790a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7790a3:{NFSU2_TR(0x7790a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7790a4:L7790a4:{c.instructions+=3;NFSU2_TR(0x7790a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7790a7:{NFSU2_TR(0x7790a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7790a8:{NFSU2_TR(0x7790a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7790adull));
TAIL_STATIC(0x592a80u,592);
}
B7790ad:L7790ad:{c.instructions+=2;NFSU2_TR(0x7790ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7790ae:{NFSU2_TR(0x7790ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7790af:L7790af:{c.instructions+=3;NFSU2_TR(0x7790af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7790b2:{NFSU2_TR(0x7790b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7790b3:{NFSU2_TR(0x7790b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7790b8ull));
TAIL_STATIC(0x592aa0u,592);
}
B7790b8:L7790b8:{c.instructions+=2;NFSU2_TR(0x7790b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7790b9:{NFSU2_TR(0x7790b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7790ba:L7790ba:{c.instructions+=2;NFSU2_TR(0x7790ba);
w4(R+0,u32(0x7e46f4ull));
}
B7790bf:{NFSU2_TR(0x7790bf);
TAIL_STATIC(0x75bfd2u,75b);
}
B7790d0:L7790d0:{c.instructions+=2;NFSU2_TR(0x7790d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7790d3:{NFSU2_TR(0x7790d3);
TAIL_STATIC(0x401fd0u,401);
}
B7790d8:L7790d8:{c.instructions+=3;NFSU2_TR(0x7790d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7790db:{NFSU2_TR(0x7790db);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B7790de:{NFSU2_TR(0x7790de);
TAIL_STATIC(0x5ae1f0u,5ae);
}
B7790e3:L7790e3:{c.instructions+=3;NFSU2_TR(0x7790e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7790e6:{NFSU2_TR(0x7790e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7790e7:{NFSU2_TR(0x7790e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7790ecull));
TAIL_STATIC(0x591360u,591);
}
B7790ec:L7790ec:{c.instructions+=2;NFSU2_TR(0x7790ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7790ed:{NFSU2_TR(0x7790ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7790ee:L7790ee:{c.instructions+=3;NFSU2_TR(0x7790ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7790f1:{NFSU2_TR(0x7790f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7790f2:{NFSU2_TR(0x7790f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7790f7ull));
TAIL_STATIC(0x592db0u,592);
}
B7790f7:L7790f7:{c.instructions+=2;NFSU2_TR(0x7790f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7790f8:{NFSU2_TR(0x7790f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7790f9:L7790f9:{c.instructions+=3;NFSU2_TR(0x7790f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7790fc:{NFSU2_TR(0x7790fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7790fd:{NFSU2_TR(0x7790fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779102ull));
TAIL_STATIC(0x5913b0u,591);
}
B779102:L779102:{c.instructions+=2;NFSU2_TR(0x779102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779103:{NFSU2_TR(0x779103);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779104:L779104:{c.instructions+=2;NFSU2_TR(0x779104);
w4(R+0,u32(0x7e4738ull));
}
B779109:{NFSU2_TR(0x779109);
TAIL_STATIC(0x75bfd2u,75b);
}
B779110:L779110:{c.instructions+=2;NFSU2_TR(0x779110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779113:{NFSU2_TR(0x779113);
TAIL_STATIC(0x5aff60u,5af);
}
B779118:L779118:{c.instructions+=3;NFSU2_TR(0x779118);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77911b:{NFSU2_TR(0x77911b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77911c:{NFSU2_TR(0x77911c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779121ull));
TAIL_STATIC(0x591360u,591);
}
B779121:L779121:{c.instructions+=2;NFSU2_TR(0x779121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779122:{NFSU2_TR(0x779122);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779123:L779123:{c.instructions+=3;NFSU2_TR(0x779123);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779126:{NFSU2_TR(0x779126);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779127:{NFSU2_TR(0x779127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77912cull));
TAIL_STATIC(0x598ec0u,598);
}
B77912c:L77912c:{c.instructions+=2;NFSU2_TR(0x77912c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77912d:{NFSU2_TR(0x77912d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77912e:L77912e:{c.instructions+=3;NFSU2_TR(0x77912e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779131:{NFSU2_TR(0x779131);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779132:{NFSU2_TR(0x779132);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779137ull));
TAIL_STATIC(0x5913b0u,591);
}
B779137:L779137:{c.instructions+=2;NFSU2_TR(0x779137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779138:{NFSU2_TR(0x779138);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779139:L779139:{c.instructions+=2;NFSU2_TR(0x779139);
w4(R+0,u32(0x7e4774ull));
}
B77913e:{NFSU2_TR(0x77913e);
TAIL_STATIC(0x75bfd2u,75b);
}
B779150:L779150:{c.instructions+=3;NFSU2_TR(0x779150);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779153:{NFSU2_TR(0x779153);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779154:{NFSU2_TR(0x779154);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779159ull));
TAIL_STATIC(0x575630u,575);
}
B779159:L779159:{c.instructions+=2;NFSU2_TR(0x779159);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77915a:{NFSU2_TR(0x77915a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77915b:L77915b:{c.instructions+=3;NFSU2_TR(0x77915b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77915e:{NFSU2_TR(0x77915e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77915f:{NFSU2_TR(0x77915f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779164ull));
TAIL_STATIC(0x575630u,575);
}
B779164:L779164:{c.instructions+=2;NFSU2_TR(0x779164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779165:{NFSU2_TR(0x779165);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779166:L779166:{c.instructions+=3;NFSU2_TR(0x779166);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779169:{NFSU2_TR(0x779169);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77916a:{NFSU2_TR(0x77916a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77916full));
TAIL_STATIC(0x575630u,575);
}
B77916f:L77916f:{c.instructions+=2;NFSU2_TR(0x77916f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779170:{NFSU2_TR(0x779170);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779171:L779171:{c.instructions+=3;NFSU2_TR(0x779171);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779174:{NFSU2_TR(0x779174);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779175:{NFSU2_TR(0x779175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77917aull));
TAIL_STATIC(0x575630u,575);
}
B77917a:L77917a:{c.instructions+=2;NFSU2_TR(0x77917a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77917b:{NFSU2_TR(0x77917b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77917c:L77917c:{c.instructions+=2;NFSU2_TR(0x77917c);
w4(R+0,u32(0x7e47b0ull));
}
B779181:{NFSU2_TR(0x779181);
TAIL_STATIC(0x75bfd2u,75b);
}
B779190:L779190:{c.instructions+=3;NFSU2_TR(0x779190);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779193:{NFSU2_TR(0x779193);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2224ull))));
}
B779199:{NFSU2_TR(0x779199);
TAIL_STATIC(0x5c8650u,5c8);
}
B77919e:L77919e:{c.instructions+=3;NFSU2_TR(0x77919e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7791a1:{NFSU2_TR(0x7791a1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2448ull))));
}
B7791a7:{NFSU2_TR(0x7791a7);
TAIL_STATIC(0x5ca4a0u,5ca);
}
B7791ac:L7791ac:{c.instructions+=3;NFSU2_TR(0x7791ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7791af:{NFSU2_TR(0x7791af);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2498ull))));
}
B7791b5:{NFSU2_TR(0x7791b5);
TAIL_STATIC(0x5ca4a0u,5ca);
}
B7791ba:L7791ba:{c.instructions+=3;NFSU2_TR(0x7791ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7791bd:{NFSU2_TR(0x7791bd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24e8ull))));
}
B7791c3:{NFSU2_TR(0x7791c3);
TAIL_STATIC(0x5ca4a0u,5ca);
}
B7791c8:L7791c8:{c.instructions+=3;NFSU2_TR(0x7791c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7791cb:{NFSU2_TR(0x7791cb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2538ull))));
}
B7791d1:{NFSU2_TR(0x7791d1);
TAIL_STATIC(0x5ca4a0u,5ca);
}
B7791d6:L7791d6:{c.instructions+=3;NFSU2_TR(0x7791d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7791d9:{NFSU2_TR(0x7791d9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2588ull))));
}
B7791df:{NFSU2_TR(0x7791df);
TAIL_STATIC(0x5ca4a0u,5ca);
}
B7791e4:L7791e4:{c.instructions+=2;NFSU2_TR(0x7791e4);
w4(R+0,u32(0x7e47fcull));
}
B7791e9:{NFSU2_TR(0x7791e9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7791f0:L7791f0:{c.instructions+=2;NFSU2_TR(0x7791f0);
w4(R+0,u32(0x7e4880ull));
}
B7791f5:{NFSU2_TR(0x7791f5);
TAIL_STATIC(0x75bfd2u,75b);
}
B779200:L779200:{c.instructions+=2;NFSU2_TR(0x779200);
w4(R+0,u32(0x7e48d0ull));
}
B779205:{NFSU2_TR(0x779205);
TAIL_STATIC(0x75bfd2u,75b);
}
B779210:L779210:{c.instructions+=3;NFSU2_TR(0x779210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779213:{NFSU2_TR(0x779213);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779214:{NFSU2_TR(0x779214);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779219ull));
TAIL_STATIC(0x575630u,575);
}
B779219:L779219:{c.instructions+=2;NFSU2_TR(0x779219);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77921a:{NFSU2_TR(0x77921a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77921b:L77921b:{c.instructions+=2;NFSU2_TR(0x77921b);
w4(R+0,u32(0x7e4a58ull));
}
B779220:{NFSU2_TR(0x779220);
TAIL_STATIC(0x75bfd2u,75b);
}
B779230:L779230:{c.instructions+=2;NFSU2_TR(0x779230);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779233:{NFSU2_TR(0x779233);
TAIL_STATIC(0x75d994u,75d);
}
B779238:L779238:{c.instructions+=2;NFSU2_TR(0x779238);
w4(R+0,u32(0x7e4968ull));
}
B77923d:{NFSU2_TR(0x77923d);
TAIL_STATIC(0x75bfd2u,75b);
}
B779250:L779250:{c.instructions+=2;NFSU2_TR(0x779250);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779253:{NFSU2_TR(0x779253);
TAIL_STATIC(0x5cf000u,5cf);
}
B779258:L779258:{c.instructions+=2;NFSU2_TR(0x779258);
w4(R+0,u32(0x7e498cull));
}
B77925d:{NFSU2_TR(0x77925d);
TAIL_STATIC(0x75bfd2u,75b);
}
B779270:L779270:{c.instructions+=2;NFSU2_TR(0x779270);
w4(R+0,u32(0x7e4a10ull));
}
B779275:{NFSU2_TR(0x779275);
TAIL_STATIC(0x75bfd2u,75b);
}
B779280:L779280:{c.instructions+=3;NFSU2_TR(0x779280);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779283:{NFSU2_TR(0x779283);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B779286:{NFSU2_TR(0x779286);
TAIL_STATIC(0x5cfac0u,5cf);
}
B77928b:L77928b:{c.instructions+=2;NFSU2_TR(0x77928b);
w4(R+0,u32(0x7e4a34ull));
}
B779290:{NFSU2_TR(0x779290);
TAIL_STATIC(0x75bfd2u,75b);
}
B7792a0:L7792a0:{c.instructions+=3;NFSU2_TR(0x7792a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7792a3:{NFSU2_TR(0x7792a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7792a4:{NFSU2_TR(0x7792a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7792a9ull));
TAIL_STATIC(0x575630u,575);
}
B7792a9:L7792a9:{c.instructions+=2;NFSU2_TR(0x7792a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7792aa:{NFSU2_TR(0x7792aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7792ab:L7792ab:{c.instructions+=3;NFSU2_TR(0x7792ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7792ae:{NFSU2_TR(0x7792ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7792af:{NFSU2_TR(0x7792af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7792b4ull));
TAIL_STATIC(0x575630u,575);
}
B7792b4:L7792b4:{c.instructions+=2;NFSU2_TR(0x7792b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7792b5:{NFSU2_TR(0x7792b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7792b6:L7792b6:{c.instructions+=3;NFSU2_TR(0x7792b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7792b9:{NFSU2_TR(0x7792b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7792ba:{NFSU2_TR(0x7792ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7792bfull));
TAIL_STATIC(0x575630u,575);
}
B7792bf:L7792bf:{c.instructions+=2;NFSU2_TR(0x7792bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7792c0:{NFSU2_TR(0x7792c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7792c1:L7792c1:{c.instructions+=3;NFSU2_TR(0x7792c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7792c4:{NFSU2_TR(0x7792c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7792c5:{NFSU2_TR(0x7792c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7792caull));
TAIL_STATIC(0x575630u,575);
}
B7792ca:L7792ca:{c.instructions+=2;NFSU2_TR(0x7792ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7792cb:{NFSU2_TR(0x7792cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7792cc:L7792cc:{c.instructions+=3;NFSU2_TR(0x7792cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7792cf:{NFSU2_TR(0x7792cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7792d0:{NFSU2_TR(0x7792d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7792d5ull));
TAIL_STATIC(0x575630u,575);
}
B7792d5:L7792d5:{c.instructions+=2;NFSU2_TR(0x7792d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7792d6:{NFSU2_TR(0x7792d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7792d7:L7792d7:{c.instructions+=3;NFSU2_TR(0x7792d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7792da:{NFSU2_TR(0x7792da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7792db:{NFSU2_TR(0x7792db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7792e0ull));
TAIL_STATIC(0x575630u,575);
}
B7792e0:L7792e0:{c.instructions+=2;NFSU2_TR(0x7792e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7792e1:{NFSU2_TR(0x7792e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7792e2:L7792e2:{c.instructions+=3;NFSU2_TR(0x7792e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7792e5:{NFSU2_TR(0x7792e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7792e6:{NFSU2_TR(0x7792e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7792ebull));
TAIL_STATIC(0x575630u,575);
}
B7792eb:L7792eb:{c.instructions+=2;NFSU2_TR(0x7792eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7792ec:{NFSU2_TR(0x7792ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7792ed:L7792ed:{c.instructions+=3;NFSU2_TR(0x7792ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7792f0:{NFSU2_TR(0x7792f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7792f1:{NFSU2_TR(0x7792f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7792f6ull));
TAIL_STATIC(0x575630u,575);
}
B7792f6:L7792f6:{c.instructions+=2;NFSU2_TR(0x7792f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7792f7:{NFSU2_TR(0x7792f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7792f8:L7792f8:{c.instructions+=2;NFSU2_TR(0x7792f8);
w4(R+0,u32(0x7e4ab4ull));
}
B7792fd:{NFSU2_TR(0x7792fd);
TAIL_STATIC(0x75bfd2u,75b);
}
B779310:L779310:{c.instructions+=3;NFSU2_TR(0x779310);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779313:{NFSU2_TR(0x779313);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779314:{NFSU2_TR(0x779314);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779319ull));
TAIL_STATIC(0x575630u,575);
}
B779319:L779319:{c.instructions+=2;NFSU2_TR(0x779319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77931a:{NFSU2_TR(0x77931a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77931b:L77931b:{c.instructions+=2;NFSU2_TR(0x77931b);
w4(R+0,u32(0x7e4ad8ull));
}
B779320:{NFSU2_TR(0x779320);
TAIL_STATIC(0x75bfd2u,75b);
}
B779330:L779330:{c.instructions+=5;NFSU2_TR(0x779330);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779332:{NFSU2_TR(0x779332);
u8 U[4];
w4(U+0,u32(0x7a5214ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779337:{NFSU2_TR(0x779337);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77933a:{NFSU2_TR(0x77933a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77933b:{NFSU2_TR(0x77933b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779340ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779340:L779340:{c.instructions+=2;NFSU2_TR(0x779340);
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
B779343:{NFSU2_TR(0x779343);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779344:L779344:{c.instructions+=2;NFSU2_TR(0x779344);
w4(R+0,u32(0x7e4afcull));
}
B779349:{NFSU2_TR(0x779349);
TAIL_STATIC(0x75bfd2u,75b);
}
B779350:L779350:{c.instructions+=2;NFSU2_TR(0x779350);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779356:{NFSU2_TR(0x779356);
TAIL_STATIC(0x43e060u,43e);
}
B77935b:L77935b:{c.instructions+=2;NFSU2_TR(0x77935b);
w4(R+0,u32(0x7e4b20ull));
}
B779360:{NFSU2_TR(0x779360);
TAIL_STATIC(0x75bfd2u,75b);
}
B779370:L779370:{c.instructions+=7;NFSU2_TR(0x779370);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779375:{NFSU2_TR(0x779375);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779377:{NFSU2_TR(0x779377);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779379:{NFSU2_TR(0x779379);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77937c:{NFSU2_TR(0x77937c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2084ull))));
}
B779381:{NFSU2_TR(0x779381);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779382:{NFSU2_TR(0x779382);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779387ull));
TAIL_STATIC(0x75c401u,75c);
}
B779387:L779387:{c.instructions+=1;NFSU2_TR(0x779387);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779388:L779388:{c.instructions+=2;NFSU2_TR(0x779388);
w4(R+0,u32(0x7e4b44ull));
}
B77938d:{NFSU2_TR(0x77938d);
TAIL_STATIC(0x75bfd2u,75b);
}
B7793a0:L7793a0:{c.instructions+=3;NFSU2_TR(0x7793a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7793a3:{NFSU2_TR(0x7793a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7793a4:{NFSU2_TR(0x7793a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7793a9ull));
TAIL_STATIC(0x486ef0u,486);
}
B7793a9:L7793a9:{c.instructions+=2;NFSU2_TR(0x7793a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7793aa:{NFSU2_TR(0x7793aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7793ab:L7793ab:{c.instructions+=2;NFSU2_TR(0x7793ab);
w4(R+0,u32(0x7e4b68ull));
}
B7793b0:{NFSU2_TR(0x7793b0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7793c0:L7793c0:{c.instructions+=3;NFSU2_TR(0x7793c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7793c3:{NFSU2_TR(0x7793c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7793c4:{NFSU2_TR(0x7793c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7793c9ull));
TAIL_STATIC(0x486ef0u,486);
}
B7793c9:L7793c9:{c.instructions+=2;NFSU2_TR(0x7793c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7793ca:{NFSU2_TR(0x7793ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7793cb:L7793cb:{c.instructions+=2;NFSU2_TR(0x7793cb);
w4(R+0,u32(0x7e4b8cull));
}
B7793d0:{NFSU2_TR(0x7793d0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7793e0:L7793e0:{c.instructions+=6;NFSU2_TR(0x7793e0);
u8 U[4];
w4(U+0,u32(0x4367c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7793e5:{NFSU2_TR(0x7793e5);
u8 U[4];
w4(U+0,u32(0xcbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7793ea:{NFSU2_TR(0x7793ea);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7793ec:{NFSU2_TR(0x7793ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7793ef:{NFSU2_TR(0x7793ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7793f0:{NFSU2_TR(0x7793f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7793f5ull));
TAIL_STATIC(0x75c401u,75c);
}
B7793f5:L7793f5:{c.instructions+=1;NFSU2_TR(0x7793f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7793f6:L7793f6:{c.instructions+=2;NFSU2_TR(0x7793f6);
w4(R+0,u32(0x7e4bb0ull));
}
B7793fb:{NFSU2_TR(0x7793fb);
TAIL_STATIC(0x75bfd2u,75b);
}
B779400:L779400:{c.instructions+=5;NFSU2_TR(0x779400);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779402:{NFSU2_TR(0x779402);
u8 U[4];
w4(U+0,u32(0x7a52b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779407:{NFSU2_TR(0x779407);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77940a:{NFSU2_TR(0x77940a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77940b:{NFSU2_TR(0x77940b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779410ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779410:L779410:{c.instructions+=2;NFSU2_TR(0x779410);
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
B779413:{NFSU2_TR(0x779413);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779414:L779414:{c.instructions+=2;NFSU2_TR(0x779414);
w4(R+0,u32(0x7e4bd4ull));
}
B779419:{NFSU2_TR(0x779419);
TAIL_STATIC(0x75bfd2u,75b);
}
B779420:L779420:{c.instructions+=3;NFSU2_TR(0x779420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779423:{NFSU2_TR(0x779423);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4a0ull))));
}
B779429:{NFSU2_TR(0x779429);
TAIL_STATIC(0x5e0800u,5e0);
}
B77942e:L77942e:{c.instructions+=2;NFSU2_TR(0x77942e);
w4(R+0,u32(0x7e4bf8ull));
}
B779433:{NFSU2_TR(0x779433);
TAIL_STATIC(0x75bfd2u,75b);
}
B779440:L779440:{c.instructions+=3;NFSU2_TR(0x779440);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779443:{NFSU2_TR(0x779443);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B779446:{NFSU2_TR(0x779446);
TAIL_STATIC(0x4835c0u,483);
}
B77944b:L77944b:{c.instructions+=2;NFSU2_TR(0x77944b);
w4(R+0,u32(0x7e4c1cull));
}
B779450:{NFSU2_TR(0x779450);
TAIL_STATIC(0x75bfd2u,75b);
}
B779460:L779460:{c.instructions+=3;NFSU2_TR(0x779460);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779463:{NFSU2_TR(0x779463);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779464:{NFSU2_TR(0x779464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779469ull));
TAIL_STATIC(0x5d7d30u,5d7);
}
B779469:L779469:{c.instructions+=2;NFSU2_TR(0x779469);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77946a:{NFSU2_TR(0x77946a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77946b:L77946b:{c.instructions+=2;NFSU2_TR(0x77946b);
w4(R+0,u32(0x7e4c40ull));
}
B779470:{NFSU2_TR(0x779470);
TAIL_STATIC(0x75bfd2u,75b);
}
B779480:L779480:{c.instructions+=3;NFSU2_TR(0x779480);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779483:{NFSU2_TR(0x779483);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B779486:{NFSU2_TR(0x779486);
TAIL_STATIC(0x4def30u,4de);
}
B77948b:L77948b:{c.instructions+=3;NFSU2_TR(0x77948b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77948e:{NFSU2_TR(0x77948e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B779491:{NFSU2_TR(0x779491);
TAIL_STATIC(0x4def30u,4de);
}
B779496:L779496:{c.instructions+=7;NFSU2_TR(0x779496);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77949b:{NFSU2_TR(0x77949b);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7794a0:{NFSU2_TR(0x7794a0);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7794a2:{NFSU2_TR(0x7794a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7794a5:{NFSU2_TR(0x7794a5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B7794a8:{NFSU2_TR(0x7794a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7794a9:{NFSU2_TR(0x7794a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7794aeull));
TAIL_STATIC(0x75c401u,75c);
}
B7794ae:L7794ae:{c.instructions+=1;NFSU2_TR(0x7794ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7794af:L7794af:{c.instructions+=2;NFSU2_TR(0x7794af);
w4(R+0,u32(0x7e4c74ull));
}
B7794b4:{NFSU2_TR(0x7794b4);
TAIL_STATIC(0x75bfd2u,75b);
}
B7794c0:L7794c0:{c.instructions+=3;NFSU2_TR(0x7794c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7794c3:{NFSU2_TR(0x7794c3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B7794c6:{NFSU2_TR(0x7794c6);
TAIL_STATIC(0x4def30u,4de);
}
B7794cb:L7794cb:{c.instructions+=3;NFSU2_TR(0x7794cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7794ce:{NFSU2_TR(0x7794ce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B7794d1:{NFSU2_TR(0x7794d1);
TAIL_STATIC(0x4def30u,4de);
}
B7794d6:L7794d6:{c.instructions+=7;NFSU2_TR(0x7794d6);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7794db:{NFSU2_TR(0x7794db);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7794e0:{NFSU2_TR(0x7794e0);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7794e2:{NFSU2_TR(0x7794e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7794e5:{NFSU2_TR(0x7794e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B7794e8:{NFSU2_TR(0x7794e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7794e9:{NFSU2_TR(0x7794e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7794eeull));
TAIL_STATIC(0x75c401u,75c);
}
B7794ee:L7794ee:{c.instructions+=1;NFSU2_TR(0x7794ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7794ef:L7794ef:{c.instructions+=2;NFSU2_TR(0x7794ef);
w4(R+0,u32(0x7e4ca8ull));
}
B7794f4:{NFSU2_TR(0x7794f4);
TAIL_STATIC(0x75bfd2u,75b);
}
B779500:L779500:{c.instructions+=5;NFSU2_TR(0x779500);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779502:{NFSU2_TR(0x779502);
u8 U[4];
w4(U+0,u32(0x7a52d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779507:{NFSU2_TR(0x779507);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77950a:{NFSU2_TR(0x77950a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77950b:{NFSU2_TR(0x77950b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779510ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779510:L779510:{c.instructions+=2;NFSU2_TR(0x779510);
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
B779513:{NFSU2_TR(0x779513);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779514:L779514:{c.instructions+=2;NFSU2_TR(0x779514);
w4(R+0,u32(0x7e4cccull));
}
B779519:{NFSU2_TR(0x779519);
TAIL_STATIC(0x75bfd2u,75b);
}
B779520:L779520:{c.instructions+=2;NFSU2_TR(0x779520);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779523:{NFSU2_TR(0x779523);
TAIL_STATIC(0x5e0870u,5e0);
}
B779528:L779528:{c.instructions+=2;NFSU2_TR(0x779528);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77952b:{NFSU2_TR(0x77952b);
TAIL_STATIC(0x5e0870u,5e0);
}
B779530:L779530:{c.instructions+=2;NFSU2_TR(0x779530);
w4(R+0,u32(0x7e4cf8ull));
}
B779535:{NFSU2_TR(0x779535);
TAIL_STATIC(0x75bfd2u,75b);
}
B779540:L779540:{c.instructions+=5;NFSU2_TR(0x779540);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779542:{NFSU2_TR(0x779542);
u8 U[4];
w4(U+0,u32(0x7a52f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779547:{NFSU2_TR(0x779547);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77954a:{NFSU2_TR(0x77954a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77954b:{NFSU2_TR(0x77954b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779550ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779550:L779550:{c.instructions+=2;NFSU2_TR(0x779550);
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
B779553:{NFSU2_TR(0x779553);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779554:L779554:{c.instructions+=2;NFSU2_TR(0x779554);
w4(R+0,u32(0x7e4d1cull));
}
B779559:{NFSU2_TR(0x779559);
TAIL_STATIC(0x75bfd2u,75b);
}
B779560:L779560:{c.instructions+=3;NFSU2_TR(0x779560);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779563:{NFSU2_TR(0x779563);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B779566:{NFSU2_TR(0x779566);
TAIL_STATIC(0x4835c0u,483);
}
B77956b:L77956b:{c.instructions+=2;NFSU2_TR(0x77956b);
w4(R+0,u32(0x7e4d40ull));
}
B779570:{NFSU2_TR(0x779570);
TAIL_STATIC(0x75bfd2u,75b);
}
B779580:L779580:{c.instructions+=2;NFSU2_TR(0x779580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779583:{NFSU2_TR(0x779583);
TAIL_STATIC(0x4def30u,4de);
}
B779588:L779588:{c.instructions+=3;NFSU2_TR(0x779588);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77958b:{NFSU2_TR(0x77958b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B77958e:{NFSU2_TR(0x77958e);
TAIL_STATIC(0x4def30u,4de);
}
B779593:L779593:{c.instructions+=2;NFSU2_TR(0x779593);
w4(R+0,u32(0x7e4d6cull));
}
B779598:{NFSU2_TR(0x779598);
TAIL_STATIC(0x75bfd2u,75b);
}
B7795a0:L7795a0:{c.instructions+=2;NFSU2_TR(0x7795a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7795a3:{NFSU2_TR(0x7795a3);
TAIL_STATIC(0x4def30u,4de);
}
B7795a8:L7795a8:{c.instructions+=3;NFSU2_TR(0x7795a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7795ab:{NFSU2_TR(0x7795ab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B7795ae:{NFSU2_TR(0x7795ae);
TAIL_STATIC(0x4def30u,4de);
}
B7795b3:L7795b3:{c.instructions+=3;NFSU2_TR(0x7795b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7795b6:{NFSU2_TR(0x7795b6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B7795b9:{NFSU2_TR(0x7795b9);
TAIL_STATIC(0x4def30u,4de);
}
B7795be:L7795be:{c.instructions+=3;NFSU2_TR(0x7795be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7795c1:{NFSU2_TR(0x7795c1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B7795c4:{NFSU2_TR(0x7795c4);
TAIL_STATIC(0x4def30u,4de);
}
B7795c9:L7795c9:{c.instructions+=3;NFSU2_TR(0x7795c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7795cc:{NFSU2_TR(0x7795cc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B7795cf:{NFSU2_TR(0x7795cf);
TAIL_STATIC(0x4def30u,4de);
}
B7795d4:L7795d4:{c.instructions+=3;NFSU2_TR(0x7795d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7795d7:{NFSU2_TR(0x7795d7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B7795da:{NFSU2_TR(0x7795da);
TAIL_STATIC(0x4def30u,4de);
}
B7795df:L7795df:{c.instructions+=3;NFSU2_TR(0x7795df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7795e2:{NFSU2_TR(0x7795e2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B7795e5:{NFSU2_TR(0x7795e5);
TAIL_STATIC(0x4def30u,4de);
}
B7795ea:L7795ea:{c.instructions+=3;NFSU2_TR(0x7795ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7795ed:{NFSU2_TR(0x7795ed);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x38ull))));
}
B7795f0:{NFSU2_TR(0x7795f0);
TAIL_STATIC(0x4def30u,4de);
}
B7795f5:L7795f5:{c.instructions+=3;NFSU2_TR(0x7795f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7795f8:{NFSU2_TR(0x7795f8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B7795fb:{NFSU2_TR(0x7795fb);
TAIL_STATIC(0x4def30u,4de);
}
B779600:L779600:{c.instructions+=2;NFSU2_TR(0x779600);
w4(R+0,u32(0x7e4dd0ull));
}
B779605:{NFSU2_TR(0x779605);
TAIL_STATIC(0x75bfd2u,75b);
}
B779610:L779610:{c.instructions+=3;NFSU2_TR(0x779610);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779613:{NFSU2_TR(0x779613);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779614:{NFSU2_TR(0x779614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779619ull));
TAIL_STATIC(0x5d2e20u,5d2);
}
B779619:L779619:{c.instructions+=2;NFSU2_TR(0x779619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77961a:{NFSU2_TR(0x77961a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77961b:L77961b:{c.instructions+=2;NFSU2_TR(0x77961b);
w4(R+0,u32(0x7e4df4ull));
}
B779620:{NFSU2_TR(0x779620);
TAIL_STATIC(0x75bfd2u,75b);
}
B779630:L779630:{c.instructions+=3;NFSU2_TR(0x779630);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779633:{NFSU2_TR(0x779633);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B779636:{NFSU2_TR(0x779636);
TAIL_STATIC(0x5dc590u,5dc);
}
B77963b:L77963b:{c.instructions+=2;NFSU2_TR(0x77963b);
w4(R+0,u32(0x7e4e18ull));
}
B779640:{NFSU2_TR(0x779640);
TAIL_STATIC(0x75bfd2u,75b);
}
B779650:L779650:{c.instructions+=3;NFSU2_TR(0x779650);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779653:{NFSU2_TR(0x779653);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779654:{NFSU2_TR(0x779654);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779659ull));
TAIL_STATIC(0x5d2e40u,5d2);
}
B779659:L779659:{c.instructions+=2;NFSU2_TR(0x779659);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77965a:{NFSU2_TR(0x77965a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77965b:L77965b:{c.instructions+=2;NFSU2_TR(0x77965b);
w4(R+0,u32(0x7e4e3cull));
}
B779660:{NFSU2_TR(0x779660);
TAIL_STATIC(0x75bfd2u,75b);
}
B779670:L779670:{c.instructions+=2;NFSU2_TR(0x779670);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779676:{NFSU2_TR(0x779676);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B77967b:L77967b:{c.instructions+=2;NFSU2_TR(0x77967b);
w4(R+0,u32(0x7e4e60ull));
}
B779680:{NFSU2_TR(0x779680);
TAIL_STATIC(0x75bfd2u,75b);
}
B779690:L779690:{c.instructions+=2;NFSU2_TR(0x779690);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffca4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779696:{NFSU2_TR(0x779696);
TAIL_STATIC(0x4022c0u,402);
}
B77969b:L77969b:{c.instructions+=2;NFSU2_TR(0x77969b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7796a1:{NFSU2_TR(0x7796a1);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B7796a6:L7796a6:{c.instructions+=2;NFSU2_TR(0x7796a6);
w4(R+0,u32(0x7e4e94ull));
}
B7796ab:{NFSU2_TR(0x7796ab);
TAIL_STATIC(0x75bfd2u,75b);
}
B7796b0:L7796b0:{c.instructions+=2;NFSU2_TR(0x7796b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7796b3:{NFSU2_TR(0x7796b3);
TAIL_STATIC(0x4047e0u,404);
}
B7796b8:L7796b8:{c.instructions+=5;NFSU2_TR(0x7796b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7796ba:{NFSU2_TR(0x7796ba);
u8 U[4];
w4(U+0,u32(0x785b54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7796bf:{NFSU2_TR(0x7796bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7796c2:{NFSU2_TR(0x7796c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7796c3:{NFSU2_TR(0x7796c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7796c8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7796c8:L7796c8:{c.instructions+=2;NFSU2_TR(0x7796c8);
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
B7796cb:{NFSU2_TR(0x7796cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7796cc:L7796cc:{c.instructions+=2;NFSU2_TR(0x7796cc);
w4(R+0,u32(0x7e4ec0ull));
}
B7796d1:{NFSU2_TR(0x7796d1);
TAIL_STATIC(0x75bfd2u,75b);
}
B7796e0:L7796e0:{c.instructions+=2;NFSU2_TR(0x7796e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7796e3:{NFSU2_TR(0x7796e3);
TAIL_STATIC(0x4047e0u,404);
}
B7796e8:L7796e8:{c.instructions+=2;NFSU2_TR(0x7796e8);
w4(R+0,u32(0x7e4ee4ull));
}
B7796ed:{NFSU2_TR(0x7796ed);
TAIL_STATIC(0x75bfd2u,75b);
}
B779700:L779700:{c.instructions+=5;NFSU2_TR(0x779700);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779702:{NFSU2_TR(0x779702);
u8 U[4];
w4(U+0,u32(0x7a5d24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779707:{NFSU2_TR(0x779707);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77970a:{NFSU2_TR(0x77970a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77970b:{NFSU2_TR(0x77970b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779710ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779710:L779710:{c.instructions+=2;NFSU2_TR(0x779710);
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
B779713:{NFSU2_TR(0x779713);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779714:L779714:{c.instructions+=5;NFSU2_TR(0x779714);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779716:{NFSU2_TR(0x779716);
u8 U[4];
w4(U+0,u32(0x785298ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77971b:{NFSU2_TR(0x77971b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77971e:{NFSU2_TR(0x77971e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77971f:{NFSU2_TR(0x77971f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779724ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779724:L779724:{c.instructions+=2;NFSU2_TR(0x779724);
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
B779727:{NFSU2_TR(0x779727);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779728:L779728:{c.instructions+=5;NFSU2_TR(0x779728);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77972a:{NFSU2_TR(0x77972a);
u8 U[4];
w4(U+0,u32(0x785bb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77972f:{NFSU2_TR(0x77972f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779732:{NFSU2_TR(0x779732);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779733:{NFSU2_TR(0x779733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779738ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779738:L779738:{c.instructions+=2;NFSU2_TR(0x779738);
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
B77973b:{NFSU2_TR(0x77973b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77973c:L77973c:{c.instructions+=5;NFSU2_TR(0x77973c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77973e:{NFSU2_TR(0x77973e);
u8 U[4];
w4(U+0,u32(0x785b84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779743:{NFSU2_TR(0x779743);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779746:{NFSU2_TR(0x779746);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779747:{NFSU2_TR(0x779747);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77974cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77974c:L77974c:{c.instructions+=2;NFSU2_TR(0x77974c);
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
B77974f:{NFSU2_TR(0x77974f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779750:L779750:{c.instructions+=5;NFSU2_TR(0x779750);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779752:{NFSU2_TR(0x779752);
u8 U[4];
w4(U+0,u32(0x785b98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779757:{NFSU2_TR(0x779757);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77975a:{NFSU2_TR(0x77975a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77975b:{NFSU2_TR(0x77975b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779760ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779760:L779760:{c.instructions+=2;NFSU2_TR(0x779760);
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
B779763:{NFSU2_TR(0x779763);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779764:L779764:{c.instructions+=5;NFSU2_TR(0x779764);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779766:{NFSU2_TR(0x779766);
u8 U[4];
w4(U+0,u32(0x7a5d10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77976b:{NFSU2_TR(0x77976b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77976e:{NFSU2_TR(0x77976e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77976f:{NFSU2_TR(0x77976f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779774ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779774:L779774:{c.instructions+=2;NFSU2_TR(0x779774);
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
B779777:{NFSU2_TR(0x779777);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779778:L779778:{c.instructions+=2;NFSU2_TR(0x779778);
w4(R+0,u32(0x7e4f30ull));
}
B77977d:{NFSU2_TR(0x77977d);
TAIL_STATIC(0x75bfd2u,75b);
}
B779790:L779790:{c.instructions+=5;NFSU2_TR(0x779790);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779792:{NFSU2_TR(0x779792);
u8 U[4];
w4(U+0,u32(0x7a5ea0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779797:{NFSU2_TR(0x779797);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77979a:{NFSU2_TR(0x77979a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77979b:{NFSU2_TR(0x77979b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7797a0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7797a0:L7797a0:{c.instructions+=2;NFSU2_TR(0x7797a0);
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
B7797a3:{NFSU2_TR(0x7797a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7797a4:L7797a4:{c.instructions+=2;NFSU2_TR(0x7797a4);
w4(R+0,u32(0x7e4f54ull));
}
B7797a9:{NFSU2_TR(0x7797a9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7797b0:L7797b0:{c.instructions+=3;NFSU2_TR(0x7797b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7797b3:{NFSU2_TR(0x7797b3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x11cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x11cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x11cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7797b9:{NFSU2_TR(0x7797b9);
TAIL_STATIC(0x4022c0u,402);
}
B7797be:L7797be:{c.instructions+=3;NFSU2_TR(0x7797be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7797c1:{NFSU2_TR(0x7797c1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x260ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x260ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x260ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7797c7:{NFSU2_TR(0x7797c7);
TAIL_STATIC(0x4022c0u,402);
}
B7797cc:L7797cc:{c.instructions+=3;NFSU2_TR(0x7797cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7797cf:{NFSU2_TR(0x7797cf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x3a4ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x3a4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3a4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7797d5:{NFSU2_TR(0x7797d5);
TAIL_STATIC(0x4022c0u,402);
}
B7797da:L7797da:{c.instructions+=3;NFSU2_TR(0x7797da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7797dd:{NFSU2_TR(0x7797dd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x4e8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x4e8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4e8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7797e3:{NFSU2_TR(0x7797e3);
TAIL_STATIC(0x4022c0u,402);
}
B7797e8:L7797e8:{c.instructions+=3;NFSU2_TR(0x7797e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7797eb:{NFSU2_TR(0x7797eb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x62cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x62cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x62cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7797f1:{NFSU2_TR(0x7797f1);
TAIL_STATIC(0x4022c0u,402);
}
B7797f6:L7797f6:{c.instructions+=3;NFSU2_TR(0x7797f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7797f9:{NFSU2_TR(0x7797f9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x770ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x770ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x770ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7797ff:{NFSU2_TR(0x7797ff);
TAIL_STATIC(0x4022c0u,402);
}
B779804:L779804:{c.instructions+=3;NFSU2_TR(0x779804);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779807:{NFSU2_TR(0x779807);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8bcull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8bcull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8bcull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77980d:{NFSU2_TR(0x77980d);
TAIL_STATIC(0x4022c0u,402);
}
B779812:L779812:{c.instructions+=3;NFSU2_TR(0x779812);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779815:{NFSU2_TR(0x779815);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xa08ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xa08ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xa08ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77981b:{NFSU2_TR(0x77981b);
TAIL_STATIC(0x4022c0u,402);
}
B779820:L779820:{c.instructions+=3;NFSU2_TR(0x779820);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779823:{NFSU2_TR(0x779823);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xb54ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xb54ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xb54ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779829:{NFSU2_TR(0x779829);
TAIL_STATIC(0x4022c0u,402);
}
B77982e:L77982e:{c.instructions+=3;NFSU2_TR(0x77982e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779831:{NFSU2_TR(0x779831);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xca0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xca0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xca0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779837:{NFSU2_TR(0x779837);
TAIL_STATIC(0x4022c0u,402);
}
B77983c:L77983c:{c.instructions+=3;NFSU2_TR(0x77983c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77983f:{NFSU2_TR(0x77983f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xdecull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xdecull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xdecull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779845:{NFSU2_TR(0x779845);
TAIL_STATIC(0x4022c0u,402);
}
B77984a:L77984a:{c.instructions+=3;NFSU2_TR(0x77984a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77984d:{NFSU2_TR(0x77984d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xf38ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xf38ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xf38ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779853:{NFSU2_TR(0x779853);
TAIL_STATIC(0x4022c0u,402);
}
B779858:L779858:{c.instructions+=3;NFSU2_TR(0x779858);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77985b:{NFSU2_TR(0x77985b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x1084ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x1084ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1084ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779861:{NFSU2_TR(0x779861);
TAIL_STATIC(0x4022c0u,402);
}
B779866:L779866:{c.instructions+=3;NFSU2_TR(0x779866);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779869:{NFSU2_TR(0x779869);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x11d0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x11d0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x11d0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77986f:{NFSU2_TR(0x77986f);
TAIL_STATIC(0x4022c0u,402);
}
B779874:L779874:{c.instructions+=3;NFSU2_TR(0x779874);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779877:{NFSU2_TR(0x779877);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x131cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x131cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x131cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77987d:{NFSU2_TR(0x77987d);
TAIL_STATIC(0x4022c0u,402);
}
B779882:L779882:{c.instructions+=3;NFSU2_TR(0x779882);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779885:{NFSU2_TR(0x779885);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x1468ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x1468ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1468ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77988b:{NFSU2_TR(0x77988b);
TAIL_STATIC(0x4022c0u,402);
}
B779890:L779890:{c.instructions+=3;NFSU2_TR(0x779890);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779893:{NFSU2_TR(0x779893);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x15b4ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x15b4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x15b4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779899:{NFSU2_TR(0x779899);
TAIL_STATIC(0x4022c0u,402);
}
B77989e:L77989e:{c.instructions+=3;NFSU2_TR(0x77989e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7798a1:{NFSU2_TR(0x7798a1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x1700ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x1700ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1700ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7798a7:{NFSU2_TR(0x7798a7);
TAIL_STATIC(0x4022c0u,402);
}
B7798ac:L7798ac:{c.instructions+=2;NFSU2_TR(0x7798ac);
w4(R+0,u32(0x7e5248ull));
}
B7798b1:{NFSU2_TR(0x7798b1);
TAIL_STATIC(0x75bfd2u,75b);
}
B7798c0:L7798c0:{c.instructions+=2;NFSU2_TR(0x7798c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B7798c6:{NFSU2_TR(0x7798c6);
TAIL_STATIC(0x43e060u,43e);
}
B7798cb:L7798cb:{c.instructions+=2;NFSU2_TR(0x7798cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7798d1:{NFSU2_TR(0x7798d1);
TAIL_STATIC(0x43e060u,43e);
}
B7798d6:L7798d6:{c.instructions+=2;NFSU2_TR(0x7798d6);
w4(R+0,u32(0x7e4f80ull));
}
B7798db:{NFSU2_TR(0x7798db);
TAIL_STATIC(0x75bfd2u,75b);
}
B7798e0:L7798e0:{c.instructions+=3;NFSU2_TR(0x7798e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7798e3:{NFSU2_TR(0x7798e3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2d4ull))));
}
B7798e9:{NFSU2_TR(0x7798e9);
TAIL_STATIC(0x411740u,411);
}
B7798ee:L7798ee:{c.instructions+=3;NFSU2_TR(0x7798ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7798f1:{NFSU2_TR(0x7798f1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x64cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x64cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7798f7:{NFSU2_TR(0x7798f7);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B7798fc:L7798fc:{c.instructions+=5;NFSU2_TR(0x7798fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7798fe:{NFSU2_TR(0x7798fe);
u8 U[4];
w4(U+0,u32(0x7a610cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779903:{NFSU2_TR(0x779903);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779906:{NFSU2_TR(0x779906);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779907:{NFSU2_TR(0x779907);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77990cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77990c:L77990c:{c.instructions+=2;NFSU2_TR(0x77990c);
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
B77990f:{NFSU2_TR(0x77990f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779910:L779910:{c.instructions+=3;NFSU2_TR(0x779910);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779913:{NFSU2_TR(0x779913);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779914:{NFSU2_TR(0x779914);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779919ull));
TAIL_STATIC(0x575630u,575);
}
B779919:L779919:{c.instructions+=2;NFSU2_TR(0x779919);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77991a:{NFSU2_TR(0x77991a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77991b:L77991b:{c.instructions+=2;NFSU2_TR(0x77991b);
w4(R+0,u32(0x7e4fbcull));
}
B779920:{NFSU2_TR(0x779920);
TAIL_STATIC(0x75bfd2u,75b);
}
B779930:L779930:{c.instructions+=3;NFSU2_TR(0x779930);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779933:{NFSU2_TR(0x779933);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2d4ull))));
}
B779939:{NFSU2_TR(0x779939);
TAIL_STATIC(0x411740u,411);
}
B77993e:L77993e:{c.instructions+=3;NFSU2_TR(0x77993e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779941:{NFSU2_TR(0x779941);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x64cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x64cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779947:{NFSU2_TR(0x779947);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B77994c:L77994c:{c.instructions+=2;NFSU2_TR(0x77994c);
w4(R+0,u32(0x7e4fe8ull));
}
B779951:{NFSU2_TR(0x779951);
TAIL_STATIC(0x75bfd2u,75b);
}
B779960:L779960:{c.instructions+=5;NFSU2_TR(0x779960);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779962:{NFSU2_TR(0x779962);
u8 U[4];
w4(U+0,u32(0x7a61c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779967:{NFSU2_TR(0x779967);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77996a:{NFSU2_TR(0x77996a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77996b:{NFSU2_TR(0x77996b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779970ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779970:L779970:{c.instructions+=2;NFSU2_TR(0x779970);
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
B779973:{NFSU2_TR(0x779973);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779974:L779974:{c.instructions+=2;NFSU2_TR(0x779974);
w4(R+0,u32(0x7e500cull));
}
B779979:{NFSU2_TR(0x779979);
TAIL_STATIC(0x75bfd2u,75b);
}
B779980:L779980:{c.instructions+=5;NFSU2_TR(0x779980);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779982:{NFSU2_TR(0x779982);
u8 U[4];
w4(U+0,u32(0x7a629cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779987:{NFSU2_TR(0x779987);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff47cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77998d:{NFSU2_TR(0x77998d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77998e:{NFSU2_TR(0x77998e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779993ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779993:L779993:{c.instructions+=2;NFSU2_TR(0x779993);
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
B779996:{NFSU2_TR(0x779996);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779997:L779997:{c.instructions+=5;NFSU2_TR(0x779997);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779999:{NFSU2_TR(0x779999);
u8 U[4];
w4(U+0,u32(0x7a6280ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77999e:{NFSU2_TR(0x77999e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff47cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7799a4:{NFSU2_TR(0x7799a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7799a5:{NFSU2_TR(0x7799a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7799aaull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7799aa:L7799aa:{c.instructions+=2;NFSU2_TR(0x7799aa);
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
B7799ad:{NFSU2_TR(0x7799ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7799ae:L7799ae:{c.instructions+=5;NFSU2_TR(0x7799ae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7799b0:{NFSU2_TR(0x7799b0);
u8 U[4];
w4(U+0,u32(0x7a6270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7799b5:{NFSU2_TR(0x7799b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff47cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7799bb:{NFSU2_TR(0x7799bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7799bc:{NFSU2_TR(0x7799bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7799c1ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7799c1:L7799c1:{c.instructions+=2;NFSU2_TR(0x7799c1);
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
B7799c4:{NFSU2_TR(0x7799c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7799c5:L7799c5:{c.instructions+=5;NFSU2_TR(0x7799c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7799c7:{NFSU2_TR(0x7799c7);
u8 U[4];
w4(U+0,u32(0x7a6258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7799cc:{NFSU2_TR(0x7799cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff47cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7799d2:{NFSU2_TR(0x7799d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7799d3:{NFSU2_TR(0x7799d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7799d8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7799d8:L7799d8:{c.instructions+=2;NFSU2_TR(0x7799d8);
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
B7799db:{NFSU2_TR(0x7799db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7799dc:L7799dc:{c.instructions+=5;NFSU2_TR(0x7799dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7799de:{NFSU2_TR(0x7799de);
u8 U[4];
w4(U+0,u32(0x7a6244ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7799e3:{NFSU2_TR(0x7799e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff484ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7799e9:{NFSU2_TR(0x7799e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7799ea:{NFSU2_TR(0x7799ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7799efull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7799ef:L7799ef:{c.instructions+=2;NFSU2_TR(0x7799ef);
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
B7799f2:{NFSU2_TR(0x7799f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7799f3:L7799f3:{c.instructions+=5;NFSU2_TR(0x7799f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7799f5:{NFSU2_TR(0x7799f5);
u8 U[4];
w4(U+0,u32(0x7a6230ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7799fa:{NFSU2_TR(0x7799fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff47cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779a00:{NFSU2_TR(0x779a00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779a01:{NFSU2_TR(0x779a01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779a06ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779a06:L779a06:{c.instructions+=2;NFSU2_TR(0x779a06);
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
B779a09:{NFSU2_TR(0x779a09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779a0a:L779a0a:{c.instructions+=5;NFSU2_TR(0x779a0a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779a0c:{NFSU2_TR(0x779a0c);
u8 U[4];
w4(U+0,u32(0x7a621cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779a11:{NFSU2_TR(0x779a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff47cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779a17:{NFSU2_TR(0x779a17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779a18:{NFSU2_TR(0x779a18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779a1dull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779a1d:L779a1d:{c.instructions+=2;NFSU2_TR(0x779a1d);
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
B779a20:{NFSU2_TR(0x779a20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779a21:L779a21:{c.instructions+=2;NFSU2_TR(0x779a21);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff514ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779a27:{NFSU2_TR(0x779a27);
TAIL_STATIC(0x4022c0u,402);
}
B779a2c:L779a2c:{c.instructions+=2;NFSU2_TR(0x779a2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff788ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779a32:{NFSU2_TR(0x779a32);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B779a37:L779a37:{c.instructions+=5;NFSU2_TR(0x779a37);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779a39:{NFSU2_TR(0x779a39);
u8 U[4];
w4(U+0,u32(0x7a6244ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779a3e:{NFSU2_TR(0x779a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff4acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779a44:{NFSU2_TR(0x779a44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779a45:{NFSU2_TR(0x779a45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779a4aull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779a4a:L779a4a:{c.instructions+=2;NFSU2_TR(0x779a4a);
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
B779a4d:{NFSU2_TR(0x779a4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779a4e:L779a4e:{c.instructions+=5;NFSU2_TR(0x779a4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779a50:{NFSU2_TR(0x779a50);
u8 U[4];
w4(U+0,u32(0x7a6208ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779a55:{NFSU2_TR(0x779a55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff47cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779a5b:{NFSU2_TR(0x779a5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779a5c:{NFSU2_TR(0x779a5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779a61ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779a61:L779a61:{c.instructions+=2;NFSU2_TR(0x779a61);
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
B779a64:{NFSU2_TR(0x779a64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779a65:L779a65:{c.instructions+=2;NFSU2_TR(0x779a65);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779a6b:{NFSU2_TR(0x779a6b);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B779a70:L779a70:{c.instructions+=5;NFSU2_TR(0x779a70);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779a72:{NFSU2_TR(0x779a72);
u8 U[4];
w4(U+0,u32(0x7a6244ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779a77:{NFSU2_TR(0x779a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff4acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779a7d:{NFSU2_TR(0x779a7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779a7e:{NFSU2_TR(0x779a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779a83ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779a83:L779a83:{c.instructions+=2;NFSU2_TR(0x779a83);
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
B779a86:{NFSU2_TR(0x779a86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779a87:L779a87:{c.instructions+=5;NFSU2_TR(0x779a87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779a89:{NFSU2_TR(0x779a89);
u8 U[4];
w4(U+0,u32(0x7a6208ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779a8e:{NFSU2_TR(0x779a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff47cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779a94:{NFSU2_TR(0x779a94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779a95:{NFSU2_TR(0x779a95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779a9aull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779a9a:L779a9a:{c.instructions+=2;NFSU2_TR(0x779a9a);
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
B779a9d:{NFSU2_TR(0x779a9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779a9e:L779a9e:{c.instructions+=5;NFSU2_TR(0x779a9e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779aa0:{NFSU2_TR(0x779aa0);
u8 U[4];
w4(U+0,u32(0x7a61f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779aa5:{NFSU2_TR(0x779aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff47cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779aab:{NFSU2_TR(0x779aab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779aac:{NFSU2_TR(0x779aac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779ab1ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779ab1:L779ab1:{c.instructions+=2;NFSU2_TR(0x779ab1);
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
B779ab4:{NFSU2_TR(0x779ab4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779ab5:L779ab5:{c.instructions+=5;NFSU2_TR(0x779ab5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779ab7:{NFSU2_TR(0x779ab7);
u8 U[4];
w4(U+0,u32(0x7a61e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779abc:{NFSU2_TR(0x779abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff47cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779ac2:{NFSU2_TR(0x779ac2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779ac3:{NFSU2_TR(0x779ac3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779ac8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779ac8:L779ac8:{c.instructions+=2;NFSU2_TR(0x779ac8);
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
B779acb:{NFSU2_TR(0x779acb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779acc:L779acc:{c.instructions+=2;NFSU2_TR(0x779acc);
w4(R+0,u32(0x7e50a8ull));
}
B779ad1:{NFSU2_TR(0x779ad1);
TAIL_STATIC(0x75bfd2u,75b);
}
B779ae0:L779ae0:{c.instructions+=5;NFSU2_TR(0x779ae0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779ae2:{NFSU2_TR(0x779ae2);
u8 U[4];
w4(U+0,u32(0x7a62e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779ae7:{NFSU2_TR(0x779ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779aea:{NFSU2_TR(0x779aea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779aeb:{NFSU2_TR(0x779aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779af0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779af0:L779af0:{c.instructions+=2;NFSU2_TR(0x779af0);
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
B779af3:{NFSU2_TR(0x779af3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779af4:L779af4:{c.instructions+=5;NFSU2_TR(0x779af4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779af6:{NFSU2_TR(0x779af6);
u8 U[4];
w4(U+0,u32(0x7a62dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779afb:{NFSU2_TR(0x779afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779afe:{NFSU2_TR(0x779afe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779aff:{NFSU2_TR(0x779aff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779b04ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779b04:L779b04:{c.instructions+=2;NFSU2_TR(0x779b04);
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
B779b07:{NFSU2_TR(0x779b07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779b08:L779b08:{c.instructions+=2;NFSU2_TR(0x779b08);
w4(R+0,u32(0x7e50d4ull));
}
B779b0d:{NFSU2_TR(0x779b0d);
TAIL_STATIC(0x75bfd2u,75b);
}
B779b20:L779b20:{c.instructions+=3;NFSU2_TR(0x779b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779b23:{NFSU2_TR(0x779b23);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x5c4ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x5c4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5c4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779b29:{NFSU2_TR(0x779b29);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B779b2e:L779b2e:{c.instructions+=3;NFSU2_TR(0x779b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779b31:{NFSU2_TR(0x779b31);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8d8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8d8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8d8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779b37:{NFSU2_TR(0x779b37);
TAIL_STATIC(0x4022c0u,402);
}
B779b3c:L779b3c:{c.instructions+=2;NFSU2_TR(0x779b3c);
w4(R+0,u32(0x7e5100ull));
}
B779b41:{NFSU2_TR(0x779b41);
TAIL_STATIC(0x75bfd2u,75b);
}
B779b50:L779b50:{c.instructions+=5;NFSU2_TR(0x779b50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779b52:{NFSU2_TR(0x779b52);
u8 U[4];
w4(U+0,u32(0x7a2094ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779b57:{NFSU2_TR(0x779b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779b5a:{NFSU2_TR(0x779b5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779b5b:{NFSU2_TR(0x779b5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779b60ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779b60:L779b60:{c.instructions+=2;NFSU2_TR(0x779b60);
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
B779b63:{NFSU2_TR(0x779b63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779b64:L779b64:{c.instructions+=5;NFSU2_TR(0x779b64);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779b66:{NFSU2_TR(0x779b66);
u8 U[4];
w4(U+0,u32(0x78458cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779b6b:{NFSU2_TR(0x779b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779b6e:{NFSU2_TR(0x779b6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779b6f:{NFSU2_TR(0x779b6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779b74ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779b74:L779b74:{c.instructions+=2;NFSU2_TR(0x779b74);
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
B779b77:{NFSU2_TR(0x779b77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779b78:L779b78:{c.instructions+=3;NFSU2_TR(0x779b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779b7b:{NFSU2_TR(0x779b7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779b7c:{NFSU2_TR(0x779b7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779b81ull));
TAIL_STATIC(0x5eb840u,5eb);
}
B779b81:L779b81:{c.instructions+=2;NFSU2_TR(0x779b81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779b82:{NFSU2_TR(0x779b82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779b83:L779b83:{c.instructions+=5;NFSU2_TR(0x779b83);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779b85:{NFSU2_TR(0x779b85);
u8 U[4];
w4(U+0,u32(0x7a1f1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779b8a:{NFSU2_TR(0x779b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779b8d:{NFSU2_TR(0x779b8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779b8e:{NFSU2_TR(0x779b8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779b93ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779b93:L779b93:{c.instructions+=2;NFSU2_TR(0x779b93);
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
B779b96:{NFSU2_TR(0x779b96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779b97:L779b97:{c.instructions+=3;NFSU2_TR(0x779b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779b9a:{NFSU2_TR(0x779b9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779b9b:{NFSU2_TR(0x779b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779ba0ull));
TAIL_STATIC(0x598ec0u,598);
}
B779ba0:L779ba0:{c.instructions+=2;NFSU2_TR(0x779ba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779ba1:{NFSU2_TR(0x779ba1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779ba2:L779ba2:{c.instructions+=2;NFSU2_TR(0x779ba2);
w4(R+0,u32(0x7e5144ull));
}
B779ba7:{NFSU2_TR(0x779ba7);
TAIL_STATIC(0x75bfd2u,75b);
}
B779bb0:L779bb0:{c.instructions+=2;NFSU2_TR(0x779bb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779bb6:{NFSU2_TR(0x779bb6);
TAIL_STATIC(0x4022c0u,402);
}
B779bbb:L779bbb:{c.instructions+=2;NFSU2_TR(0x779bbb);
w4(R+0,u32(0x7e5168ull));
}
B779bc0:{NFSU2_TR(0x779bc0);
TAIL_STATIC(0x75bfd2u,75b);
}
B779bd0:L779bd0:{c.instructions+=5;NFSU2_TR(0x779bd0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779bd2:{NFSU2_TR(0x779bd2);
u8 U[4];
w4(U+0,u32(0x7a6324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779bd7:{NFSU2_TR(0x779bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779bda:{NFSU2_TR(0x779bda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779bdb:{NFSU2_TR(0x779bdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779be0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779be0:L779be0:{c.instructions+=2;NFSU2_TR(0x779be0);
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
B779be3:{NFSU2_TR(0x779be3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779be4:L779be4:{c.instructions+=5;NFSU2_TR(0x779be4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779be6:{NFSU2_TR(0x779be6);
u8 U[4];
w4(U+0,u32(0x79dc04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779beb:{NFSU2_TR(0x779beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779bee:{NFSU2_TR(0x779bee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779bef:{NFSU2_TR(0x779bef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779bf4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779bf4:L779bf4:{c.instructions+=2;NFSU2_TR(0x779bf4);
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
B779bf7:{NFSU2_TR(0x779bf7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779bf8:L779bf8:{c.instructions+=5;NFSU2_TR(0x779bf8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779bfa:{NFSU2_TR(0x779bfa);
u8 U[4];
w4(U+0,u32(0x7a6314ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779bff:{NFSU2_TR(0x779bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779c02:{NFSU2_TR(0x779c02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c03:{NFSU2_TR(0x779c03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779c08ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779c08:L779c08:{c.instructions+=2;NFSU2_TR(0x779c08);
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
B779c0b:{NFSU2_TR(0x779c0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779c0c:L779c0c:{c.instructions+=2;NFSU2_TR(0x779c0c);
w4(R+0,u32(0x7e519cull));
}
B779c11:{NFSU2_TR(0x779c11);
TAIL_STATIC(0x75bfd2u,75b);
}
B779c20:L779c20:{c.instructions+=5;NFSU2_TR(0x779c20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c22:{NFSU2_TR(0x779c22);
u8 U[4];
w4(U+0,u32(0x7a5d24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c27:{NFSU2_TR(0x779c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779c2a:{NFSU2_TR(0x779c2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c2b:{NFSU2_TR(0x779c2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779c30ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779c30:L779c30:{c.instructions+=2;NFSU2_TR(0x779c30);
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
B779c33:{NFSU2_TR(0x779c33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779c34:L779c34:{c.instructions+=3;NFSU2_TR(0x779c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779c37:{NFSU2_TR(0x779c37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c38:{NFSU2_TR(0x779c38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779c3dull));
TAIL_STATIC(0x5ea1b0u,5ea);
}
B779c3d:L779c3d:{c.instructions+=2;NFSU2_TR(0x779c3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779c3e:{NFSU2_TR(0x779c3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779c3f:L779c3f:{c.instructions+=2;NFSU2_TR(0x779c3f);
w4(R+0,u32(0x7e529cull));
}
B779c44:{NFSU2_TR(0x779c44);
TAIL_STATIC(0x75bfd2u,75b);
}
B779c50:L779c50:{c.instructions+=5;NFSU2_TR(0x779c50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c52:{NFSU2_TR(0x779c52);
u8 U[4];
w4(U+0,u32(0x7a6324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c57:{NFSU2_TR(0x779c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779c5a:{NFSU2_TR(0x779c5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c5b:{NFSU2_TR(0x779c5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779c60ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779c60:L779c60:{c.instructions+=2;NFSU2_TR(0x779c60);
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
B779c63:{NFSU2_TR(0x779c63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779c64:L779c64:{c.instructions+=5;NFSU2_TR(0x779c64);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c66:{NFSU2_TR(0x779c66);
u8 U[4];
w4(U+0,u32(0x79dc04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c6b:{NFSU2_TR(0x779c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779c6e:{NFSU2_TR(0x779c6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c6f:{NFSU2_TR(0x779c6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779c74ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779c74:L779c74:{c.instructions+=2;NFSU2_TR(0x779c74);
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
B779c77:{NFSU2_TR(0x779c77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779c78:L779c78:{c.instructions+=5;NFSU2_TR(0x779c78);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c7a:{NFSU2_TR(0x779c7a);
u8 U[4];
w4(U+0,u32(0x7a6314ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c7f:{NFSU2_TR(0x779c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779c82:{NFSU2_TR(0x779c82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c83:{NFSU2_TR(0x779c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779c88ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779c88:L779c88:{c.instructions+=2;NFSU2_TR(0x779c88);
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
B779c8b:{NFSU2_TR(0x779c8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779c8c:L779c8c:{c.instructions+=5;NFSU2_TR(0x779c8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c8e:{NFSU2_TR(0x779c8e);
u8 U[4];
w4(U+0,u32(0x7a63b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c93:{NFSU2_TR(0x779c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779c96:{NFSU2_TR(0x779c96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779c97:{NFSU2_TR(0x779c97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779c9cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779c9c:L779c9c:{c.instructions+=2;NFSU2_TR(0x779c9c);
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
B779c9f:{NFSU2_TR(0x779c9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779ca0:L779ca0:{c.instructions+=2;NFSU2_TR(0x779ca0);
w4(R+0,u32(0x7e52d8ull));
}
B779ca5:{NFSU2_TR(0x779ca5);
TAIL_STATIC(0x75bfd2u,75b);
}
B779cb0:L779cb0:{c.instructions+=7;NFSU2_TR(0x779cb0);
u8 U[4];
w4(U+0,u32(0x5fc290ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779cb5:{NFSU2_TR(0x779cb5);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779cb7:{NFSU2_TR(0x779cb7);
u8 U[4];
w4(U+0,u32(0x1f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779cbc:{NFSU2_TR(0x779cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779cbf:{NFSU2_TR(0x779cbf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B779cc2:{NFSU2_TR(0x779cc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779cc3:{NFSU2_TR(0x779cc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779cc8ull));
TAIL_STATIC(0x75c401u,75c);
}
B779cc8:L779cc8:{c.instructions+=1;NFSU2_TR(0x779cc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779cc9:L779cc9:{c.instructions+=3;NFSU2_TR(0x779cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779ccc:{NFSU2_TR(0x779ccc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xc40ull))));
}
B779cd2:{NFSU2_TR(0x779cd2);
TAIL_STATIC(0x40bdf0u,40b);
}
B779cd7:L779cd7:{c.instructions+=2;NFSU2_TR(0x779cd7);
w4(R+0,u32(0x7e5304ull));
}
B779cdc:{NFSU2_TR(0x779cdc);
TAIL_STATIC(0x75bfd2u,75b);
}
B779cf0:L779cf0:{c.instructions+=2;NFSU2_TR(0x779cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779cf3:{NFSU2_TR(0x779cf3);
TAIL_STATIC(0x5ef5b0u,5ef);
}
B779cf8:L779cf8:{c.instructions+=3;NFSU2_TR(0x779cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779cfb:{NFSU2_TR(0x779cfb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B779cfe:{NFSU2_TR(0x779cfe);
TAIL_STATIC(0x5fa730u,5fa);
}
B779d03:L779d03:{c.instructions+=3;NFSU2_TR(0x779d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779d06:{NFSU2_TR(0x779d06);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x190ull))));
}
B779d0c:{NFSU2_TR(0x779d0c);
TAIL_STATIC(0x5768e0u,576);
}
B779d11:L779d11:{c.instructions+=3;NFSU2_TR(0x779d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779d14:{NFSU2_TR(0x779d14);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1d0ull))));
}
B779d1a:{NFSU2_TR(0x779d1a);
TAIL_STATIC(0x5768e0u,576);
}
B779d1f:L779d1f:{c.instructions+=3;NFSU2_TR(0x779d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779d22:{NFSU2_TR(0x779d22);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1f8ull))));
}
B779d28:{NFSU2_TR(0x779d28);
TAIL_STATIC(0x5768e0u,576);
}
B779d2d:L779d2d:{c.instructions+=2;NFSU2_TR(0x779d2d);
w4(R+0,u32(0x7e5348ull));
}
B779d32:{NFSU2_TR(0x779d32);
TAIL_STATIC(0x75bfd2u,75b);
}
B779d40:L779d40:{c.instructions+=2;NFSU2_TR(0x779d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779d43:{NFSU2_TR(0x779d43);
TAIL_STATIC(0x5ff3b0u,5ff);
}
B779d48:L779d48:{c.instructions+=3;NFSU2_TR(0x779d48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779d4b:{NFSU2_TR(0x779d4b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B779d4e:{NFSU2_TR(0x779d4e);
TAIL_STATIC(0x5fa6f0u,5fa);
}
B779d53:L779d53:{c.instructions+=7;NFSU2_TR(0x779d53);
u8 U[4];
w4(U+0,u32(0x405330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779d58:{NFSU2_TR(0x779d58);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779d5a:{NFSU2_TR(0x779d5a);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779d5c:{NFSU2_TR(0x779d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779d5f:{NFSU2_TR(0x779d5f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
}
B779d64:{NFSU2_TR(0x779d64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779d65:{NFSU2_TR(0x779d65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779d6aull));
TAIL_STATIC(0x75c401u,75c);
}
B779d6a:L779d6a:{c.instructions+=1;NFSU2_TR(0x779d6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779d6b:L779d6b:{c.instructions+=7;NFSU2_TR(0x779d6b);
u8 U[4];
w4(U+0,u32(0x405330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779d70:{NFSU2_TR(0x779d70);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779d72:{NFSU2_TR(0x779d72);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779d74:{NFSU2_TR(0x779d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779d77:{NFSU2_TR(0x779d77);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x770ull))));
}
B779d7c:{NFSU2_TR(0x779d7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779d7d:{NFSU2_TR(0x779d7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779d82ull));
TAIL_STATIC(0x75c401u,75c);
}
B779d82:L779d82:{c.instructions+=1;NFSU2_TR(0x779d82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779d83:L779d83:{c.instructions+=3;NFSU2_TR(0x779d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779d86:{NFSU2_TR(0x779d86);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x1080ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x1080ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1080ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779d8c:{NFSU2_TR(0x779d8c);
TAIL_STATIC(0x4022c0u,402);
}
B779d91:L779d91:{c.instructions+=3;NFSU2_TR(0x779d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779d94:{NFSU2_TR(0x779d94);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x1250ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x1250ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1250ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779d9a:{NFSU2_TR(0x779d9a);
TAIL_STATIC(0x4022c0u,402);
}
B779d9f:L779d9f:{c.instructions+=3;NFSU2_TR(0x779d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779da2:{NFSU2_TR(0x779da2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x1420ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x1420ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1420ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779da8:{NFSU2_TR(0x779da8);
TAIL_STATIC(0x4022c0u,402);
}
B779dad:L779dad:{c.instructions+=5;NFSU2_TR(0x779dad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779daf:{NFSU2_TR(0x779daf);
u8 U[4];
w4(U+0,u32(0x7851acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779db4:{NFSU2_TR(0x779db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779db7:{NFSU2_TR(0x779db7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779db8:{NFSU2_TR(0x779db8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779dbdull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779dbd:L779dbd:{c.instructions+=2;NFSU2_TR(0x779dbd);
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
B779dc0:{NFSU2_TR(0x779dc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779dc1:L779dc1:{c.instructions+=5;NFSU2_TR(0x779dc1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779dc3:{NFSU2_TR(0x779dc3);
u8 U[4];
w4(U+0,u32(0x7a63e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779dc8:{NFSU2_TR(0x779dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779dcb:{NFSU2_TR(0x779dcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779dcc:{NFSU2_TR(0x779dcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779dd1ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779dd1:L779dd1:{c.instructions+=2;NFSU2_TR(0x779dd1);
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
B779dd4:{NFSU2_TR(0x779dd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779dd5:L779dd5:{c.instructions+=2;NFSU2_TR(0x779dd5);
w4(R+0,u32(0x7e53acull));
}
B779dda:{NFSU2_TR(0x779dda);
TAIL_STATIC(0x75bfd2u,75b);
}
B779de0:L779de0:{c.instructions+=2;NFSU2_TR(0x779de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779de3:{NFSU2_TR(0x779de3);
TAIL_STATIC(0x5ff3b0u,5ff);
}
B779de8:L779de8:{c.instructions+=3;NFSU2_TR(0x779de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779deb:{NFSU2_TR(0x779deb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B779dee:{NFSU2_TR(0x779dee);
TAIL_STATIC(0x5fa6f0u,5fa);
}
B779df3:L779df3:{c.instructions+=7;NFSU2_TR(0x779df3);
u8 U[4];
w4(U+0,u32(0x405330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779df8:{NFSU2_TR(0x779df8);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779dfa:{NFSU2_TR(0x779dfa);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779dfc:{NFSU2_TR(0x779dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779dff:{NFSU2_TR(0x779dff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
}
B779e04:{NFSU2_TR(0x779e04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779e05:{NFSU2_TR(0x779e05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779e0aull));
TAIL_STATIC(0x75c401u,75c);
}
B779e0a:L779e0a:{c.instructions+=1;NFSU2_TR(0x779e0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779e0b:L779e0b:{c.instructions+=7;NFSU2_TR(0x779e0b);
u8 U[4];
w4(U+0,u32(0x405330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779e10:{NFSU2_TR(0x779e10);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779e12:{NFSU2_TR(0x779e12);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779e14:{NFSU2_TR(0x779e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779e17:{NFSU2_TR(0x779e17);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x770ull))));
}
B779e1c:{NFSU2_TR(0x779e1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779e1d:{NFSU2_TR(0x779e1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779e22ull));
TAIL_STATIC(0x75c401u,75c);
}
B779e22:L779e22:{c.instructions+=1;NFSU2_TR(0x779e22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779e23:L779e23:{c.instructions+=3;NFSU2_TR(0x779e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779e26:{NFSU2_TR(0x779e26);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x1080ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x1080ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1080ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779e2c:{NFSU2_TR(0x779e2c);
TAIL_STATIC(0x4022c0u,402);
}
B779e31:L779e31:{c.instructions+=3;NFSU2_TR(0x779e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779e34:{NFSU2_TR(0x779e34);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x1250ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x1250ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1250ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779e3a:{NFSU2_TR(0x779e3a);
TAIL_STATIC(0x4022c0u,402);
}
B779e3f:L779e3f:{c.instructions+=3;NFSU2_TR(0x779e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779e42:{NFSU2_TR(0x779e42);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x1420ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x1420ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1420ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779e48:{NFSU2_TR(0x779e48);
TAIL_STATIC(0x4022c0u,402);
}
B779e4d:L779e4d:{c.instructions+=2;NFSU2_TR(0x779e4d);
w4(R+0,u32(0x7e5400ull));
}
B779e52:{NFSU2_TR(0x779e52);
TAIL_STATIC(0x75bfd2u,75b);
}
B779e60:L779e60:{c.instructions+=2;NFSU2_TR(0x779e60);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779e63:{NFSU2_TR(0x779e63);
TAIL_STATIC(0x5ff430u,5ff);
}
B779e68:L779e68:{c.instructions+=2;NFSU2_TR(0x779e68);
w4(R+0,u32(0x7e5424ull));
}
B779e6d:{NFSU2_TR(0x779e6d);
TAIL_STATIC(0x75bfd2u,75b);
}
B779e80:L779e80:{c.instructions+=2;NFSU2_TR(0x779e80);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779e86:{NFSU2_TR(0x779e86);
TAIL_STATIC(0x43e060u,43e);
}
B779e8b:L779e8b:{c.instructions+=2;NFSU2_TR(0x779e8b);
w4(R+0,u32(0x7e5448ull));
}
B779e90:{NFSU2_TR(0x779e90);
TAIL_STATIC(0x75bfd2u,75b);
}
B779ea0:L779ea0:{c.instructions+=3;NFSU2_TR(0x779ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779ea3:{NFSU2_TR(0x779ea3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779ea4:{NFSU2_TR(0x779ea4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779ea9ull));
TAIL_STATIC(0x5ea1b0u,5ea);
}
B779ea9:L779ea9:{c.instructions+=2;NFSU2_TR(0x779ea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779eaa:{NFSU2_TR(0x779eaa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779eab:L779eab:{c.instructions+=5;NFSU2_TR(0x779eab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779ead:{NFSU2_TR(0x779ead);
u8 U[4];
w4(U+0,u32(0x7a6428ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779eb2:{NFSU2_TR(0x779eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779eb5:{NFSU2_TR(0x779eb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779eb6:{NFSU2_TR(0x779eb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779ebbull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779ebb:L779ebb:{c.instructions+=2;NFSU2_TR(0x779ebb);
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
B779ebe:{NFSU2_TR(0x779ebe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779ebf:L779ebf:{c.instructions+=2;NFSU2_TR(0x779ebf);
w4(R+0,u32(0x7e5474ull));
}
B779ec4:{NFSU2_TR(0x779ec4);
TAIL_STATIC(0x75bfd2u,75b);
}
B779ed0:L779ed0:{c.instructions+=2;NFSU2_TR(0x779ed0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779ed6:{NFSU2_TR(0x779ed6);
TAIL_STATIC(0x50f7d0u,50f);
}
B779edb:L779edb:{c.instructions+=2;NFSU2_TR(0x779edb);
w4(R+0,u32(0x7e5498ull));
}
B779ee0:{NFSU2_TR(0x779ee0);
TAIL_STATIC(0x75bfd2u,75b);
}
B779ef0:L779ef0:{c.instructions+=3;NFSU2_TR(0x779ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779ef3:{NFSU2_TR(0x779ef3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B779ef6:{NFSU2_TR(0x779ef6);
TAIL_STATIC(0x5ff3f0u,5ff);
}
B779efb:L779efb:{c.instructions+=2;NFSU2_TR(0x779efb);
w4(R+0,u32(0x7e54bcull));
}
B779f00:{NFSU2_TR(0x779f00);
TAIL_STATIC(0x75bfd2u,75b);
}
B779f10:L779f10:{c.instructions+=3;NFSU2_TR(0x779f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779f13:{NFSU2_TR(0x779f13);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x5c4ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x5c4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5c4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779f19:{NFSU2_TR(0x779f19);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B779f1e:L779f1e:{c.instructions+=3;NFSU2_TR(0x779f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779f21:{NFSU2_TR(0x779f21);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8d8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8d8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8d8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B779f27:{NFSU2_TR(0x779f27);
TAIL_STATIC(0x4022c0u,402);
}
B779f2c:L779f2c:{c.instructions+=5;NFSU2_TR(0x779f2c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779f2e:{NFSU2_TR(0x779f2e);
u8 U[4];
w4(U+0,u32(0x7a5d24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779f33:{NFSU2_TR(0x779f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779f36:{NFSU2_TR(0x779f36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779f37:{NFSU2_TR(0x779f37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779f3cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779f3c:L779f3c:{c.instructions+=2;NFSU2_TR(0x779f3c);
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
B779f3f:{NFSU2_TR(0x779f3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779f40:L779f40:{c.instructions+=5;NFSU2_TR(0x779f40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779f42:{NFSU2_TR(0x779f42);
u8 U[4];
w4(U+0,u32(0x7a6498ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779f47:{NFSU2_TR(0x779f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779f4a:{NFSU2_TR(0x779f4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779f4b:{NFSU2_TR(0x779f4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779f50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779f50:L779f50:{c.instructions+=2;NFSU2_TR(0x779f50);
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
B779f53:{NFSU2_TR(0x779f53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779f54:L779f54:{c.instructions+=5;NFSU2_TR(0x779f54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779f56:{NFSU2_TR(0x779f56);
u8 U[4];
w4(U+0,u32(0x7a648cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779f5b:{NFSU2_TR(0x779f5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779f5e:{NFSU2_TR(0x779f5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779f5f:{NFSU2_TR(0x779f5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779f64ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779f64:L779f64:{c.instructions+=2;NFSU2_TR(0x779f64);
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
B779f67:{NFSU2_TR(0x779f67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779f68:L779f68:{c.instructions+=2;NFSU2_TR(0x779f68);
w4(R+0,u32(0x7e5500ull));
}
B779f6d:{NFSU2_TR(0x779f6d);
TAIL_STATIC(0x75bfd2u,75b);
}
B779f80:L779f80:{c.instructions+=5;NFSU2_TR(0x779f80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779f82:{NFSU2_TR(0x779f82);
u8 U[4];
w4(U+0,u32(0x7a6508ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779f87:{NFSU2_TR(0x779f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779f8a:{NFSU2_TR(0x779f8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779f8b:{NFSU2_TR(0x779f8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779f90ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779f90:L779f90:{c.instructions+=2;NFSU2_TR(0x779f90);
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
B779f93:{NFSU2_TR(0x779f93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779f94:L779f94:{c.instructions+=2;NFSU2_TR(0x779f94);
w4(R+0,u32(0x7e5524ull));
}
B779f99:{NFSU2_TR(0x779f99);
TAIL_STATIC(0x75bfd2u,75b);
}
B779fa0:L779fa0:{c.instructions+=3;NFSU2_TR(0x779fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779fa3:{NFSU2_TR(0x779fa3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B779fa6:{NFSU2_TR(0x779fa6);
TAIL_STATIC(0x4367c0u,436);
}
B779fab:L779fab:{c.instructions+=3;NFSU2_TR(0x779fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B779fae:{NFSU2_TR(0x779fae);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B779fb1:{NFSU2_TR(0x779fb1);
TAIL_STATIC(0x4835c0u,483);
}
B779fb6:L779fb6:{c.instructions+=2;NFSU2_TR(0x779fb6);
w4(R+0,u32(0x7e5550ull));
}
B779fbb:{NFSU2_TR(0x779fbb);
TAIL_STATIC(0x75bfd2u,75b);
}
B779fc0:L779fc0:{c.instructions+=2;NFSU2_TR(0x779fc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B779fc6:{NFSU2_TR(0x779fc6);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B779fcb:L779fcb:{c.instructions+=2;NFSU2_TR(0x779fcb);
w4(R+0,u32(0x7e5574ull));
}
B779fd0:{NFSU2_TR(0x779fd0);
TAIL_STATIC(0x75bfd2u,75b);
}
B779fe0:L779fe0:{c.instructions+=5;NFSU2_TR(0x779fe0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779fe2:{NFSU2_TR(0x779fe2);
u8 U[4];
w4(U+0,u32(0x7a6558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779fe7:{NFSU2_TR(0x779fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B779fea:{NFSU2_TR(0x779fea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B779feb:{NFSU2_TR(0x779feb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x779ff0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B779ff0:L779ff0:{c.instructions+=2;NFSU2_TR(0x779ff0);
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
B779ff3:{NFSU2_TR(0x779ff3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B779ff4:L779ff4:{c.instructions+=2;NFSU2_TR(0x779ff4);
w4(R+0,u32(0x7e5598ull));
}
B779ff9:{NFSU2_TR(0x779ff9);
TAIL_STATIC(0x75bfd2u,75b);
}
XIT:NFSU2_TR_EXIT(0x779,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
