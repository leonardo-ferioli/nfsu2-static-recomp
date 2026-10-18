#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_520(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52f(u8* __restrict R,Cpu& c);
u32 body_533(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53a(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x539,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x539,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_539(u8* __restrict R,Cpu& c);
u32 page_539(Cpu& c){return body_539(c.regs.data(),c);}
__attribute__((noinline)) u32 body_539(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x539002:goto L539002;
case 0x539003:c.instructions+=2;goto B539003;
case 0x539007:c.instructions+=1;goto B539007;
case 0x53900c:goto L53900c;
case 0x539010:c.instructions+=6;goto B539010;
case 0x539011:c.instructions+=5;goto B539011;
case 0x539012:c.instructions+=4;goto B539012;
case 0x539019:c.instructions+=3;goto B539019;
case 0x53901a:c.instructions+=2;goto B53901a;
case 0x53901e:c.instructions+=1;goto B53901e;
case 0x539023:goto L539023;
case 0x539027:c.instructions+=3;goto B539027;
case 0x539029:c.instructions+=2;goto B539029;
case 0x53902f:c.instructions+=1;goto B53902f;
case 0x539031:goto L539031;
case 0x539032:c.instructions+=2;goto B539032;
case 0x539035:c.instructions+=1;goto B539035;
case 0x539036:goto L539036;
case 0x539038:goto L539038;
case 0x53903a:c.instructions+=5;goto B53903a;
case 0x53903b:c.instructions+=4;goto B53903b;
case 0x539040:c.instructions+=3;goto B539040;
case 0x539042:c.instructions+=2;goto B539042;
case 0x539044:c.instructions+=1;goto B539044;
case 0x539046:goto L539046;
case 0x539048:c.instructions+=5;goto B539048;
case 0x539049:c.instructions+=4;goto B539049;
case 0x53904e:c.instructions+=3;goto B53904e;
case 0x539050:c.instructions+=2;goto B539050;
case 0x539052:c.instructions+=1;goto B539052;
case 0x539054:goto L539054;
case 0x539058:c.instructions+=6;goto B539058;
case 0x539059:c.instructions+=5;goto B539059;
case 0x53905a:c.instructions+=4;goto B53905a;
case 0x539061:c.instructions+=3;goto B539061;
case 0x539062:c.instructions+=2;goto B539062;
case 0x539066:c.instructions+=1;goto B539066;
case 0x53906b:goto L53906b;
case 0x53906f:c.instructions+=6;goto B53906f;
case 0x539070:c.instructions+=5;goto B539070;
case 0x539071:c.instructions+=4;goto B539071;
case 0x539078:c.instructions+=3;goto B539078;
case 0x539079:c.instructions+=2;goto B539079;
case 0x53907d:c.instructions+=1;goto B53907d;
case 0x539082:goto L539082;
case 0x539086:c.instructions+=2;goto B539086;
case 0x53908c:c.instructions+=1;goto B53908c;
case 0x53908e:goto L53908e;
case 0x539092:c.instructions+=1;goto B539092;
case 0x539096:goto L539096;
case 0x53909a:c.instructions+=5;goto B53909a;
case 0x53909b:c.instructions+=4;goto B53909b;
case 0x53909c:c.instructions+=3;goto B53909c;
case 0x53909d:c.instructions+=2;goto B53909d;
case 0x5390a1:c.instructions+=1;goto B5390a1;
case 0x5390a6:goto L5390a6;
case 0x5390a7:c.instructions+=3;goto B5390a7;
case 0x5390a8:c.instructions+=2;goto B5390a8;
case 0x5390a9:c.instructions+=1;goto B5390a9;
case 0x5390e0:goto L5390e0;
case 0x5390e1:c.instructions+=5;goto B5390e1;
case 0x5390e3:c.instructions+=4;goto B5390e3;
case 0x5390e6:c.instructions+=3;goto B5390e6;
case 0x5390e9:c.instructions+=2;goto B5390e9;
case 0x5390eb:c.instructions+=1;goto B5390eb;
case 0x5390f1:goto L5390f1;
case 0x5390f7:c.instructions+=2;goto B5390f7;
case 0x5390f9:c.instructions+=1;goto B5390f9;
case 0x5390fb:goto L5390fb;
case 0x5390fd:c.instructions+=1;goto B5390fd;
case 0x539102:goto L539102;
case 0x539103:c.instructions+=1;goto B539103;
case 0x539106:goto L539106;
case 0x53910a:c.instructions+=6;goto B53910a;
case 0x53910b:c.instructions+=5;goto B53910b;
case 0x53910c:c.instructions+=4;goto B53910c;
case 0x53910f:c.instructions+=3;goto B53910f;
case 0x539112:c.instructions+=2;goto B539112;
case 0x539114:c.instructions+=1;goto B539114;
case 0x53911a:goto L53911a;
case 0x53911c:c.instructions+=1;goto B53911c;
case 0x53911e:goto L53911e;
case 0x539121:c.instructions+=2;goto B539121;
case 0x539123:c.instructions+=1;goto B539123;
case 0x539125:goto L539125;
case 0x539128:c.instructions+=1;goto B539128;
case 0x53912a:goto L53912a;
case 0x53912c:goto L53912c;
case 0x53912e:c.instructions+=1;goto B53912e;
case 0x539130:goto L539130;
case 0x539133:c.instructions+=2;goto B539133;
case 0x539135:c.instructions+=1;goto B539135;
case 0x539137:goto L539137;
case 0x539138:c.instructions+=4;goto B539138;
case 0x53913b:c.instructions+=3;goto B53913b;
case 0x53913c:c.instructions+=2;goto B53913c;
case 0x53913e:c.instructions+=1;goto B53913e;
case 0x539143:goto L539143;
case 0x539146:c.instructions+=1;goto B539146;
case 0x53914b:goto L53914b;
case 0x53914d:c.instructions+=1;goto B53914d;
case 0x539153:goto L539153;
case 0x539156:c.instructions+=2;goto B539156;
case 0x539158:c.instructions+=1;goto B539158;
case 0x53915a:goto L53915a;
case 0x53915d:c.instructions+=1;goto B53915d;
case 0x53915f:goto L53915f;
case 0x539161:goto L539161;
case 0x539163:c.instructions+=1;goto B539163;
case 0x539165:goto L539165;
case 0x53916b:c.instructions+=2;goto B53916b;
case 0x53916c:c.instructions+=1;goto B53916c;
case 0x539170:goto L539170;
case 0x539173:c.instructions+=2;goto B539173;
case 0x539175:c.instructions+=1;goto B539175;
case 0x539177:goto L539177;
case 0x53917a:c.instructions+=1;goto B53917a;
case 0x53917c:goto L53917c;
case 0x53917e:goto L53917e;
case 0x539184:c.instructions+=3;goto B539184;
case 0x539185:c.instructions+=2;goto B539185;
case 0x539187:c.instructions+=1;goto B539187;
case 0x539189:goto L539189;
case 0x53918b:goto L53918b;
case 0x53918d:c.instructions+=2;goto B53918d;
case 0x539193:c.instructions+=1;goto B539193;
case 0x539195:goto L539195;
case 0x539198:c.instructions+=2;goto B539198;
case 0x53919a:c.instructions+=1;goto B53919a;
case 0x53919c:goto L53919c;
case 0x53919e:c.instructions+=1;goto B53919e;
case 0x5391a0:goto L5391a0;
case 0x5391a3:c.instructions+=1;goto B5391a3;
case 0x5391a5:goto L5391a5;
case 0x5391a7:goto L5391a7;
case 0x5391a9:c.instructions+=1;goto B5391a9;
case 0x5391ab:goto L5391ab;
case 0x5391ae:c.instructions+=3;goto B5391ae;
case 0x5391af:c.instructions+=2;goto B5391af;
case 0x5391b1:c.instructions+=1;goto B5391b1;
case 0x5391b6:goto L5391b6;
case 0x5391b8:c.instructions+=5;goto B5391b8;
case 0x5391be:c.instructions+=4;goto B5391be;
case 0x5391bf:c.instructions+=3;goto B5391bf;
case 0x5391c1:c.instructions+=2;goto B5391c1;
case 0x5391c3:c.instructions+=1;goto B5391c3;
case 0x5391c8:goto L5391c8;
case 0x5391ca:c.instructions+=1;goto B5391ca;
case 0x5391cc:goto L5391cc;
case 0x5391d0:goto L5391d0;
case 0x5391d3:c.instructions+=3;goto B5391d3;
case 0x5391d6:c.instructions+=2;goto B5391d6;
case 0x5391d8:c.instructions+=1;goto B5391d8;
case 0x5391da:goto L5391da;
case 0x5391dd:c.instructions+=1;goto B5391dd;
case 0x5391df:goto L5391df;
case 0x5391e1:goto L5391e1;
case 0x5391e3:c.instructions+=2;goto B5391e3;
case 0x5391e6:c.instructions+=1;goto B5391e6;
case 0x5391eb:goto L5391eb;
case 0x5391ee:c.instructions+=3;goto B5391ee;
case 0x5391ef:c.instructions+=2;goto B5391ef;
case 0x5391f1:c.instructions+=1;goto B5391f1;
case 0x5391f6:goto L5391f6;
case 0x5391f8:c.instructions+=5;goto B5391f8;
case 0x5391fe:c.instructions+=4;goto B5391fe;
case 0x5391ff:c.instructions+=3;goto B5391ff;
case 0x539201:c.instructions+=2;goto B539201;
case 0x539203:c.instructions+=1;goto B539203;
case 0x539208:goto L539208;
case 0x53920a:c.instructions+=1;goto B53920a;
case 0x53920c:goto L53920c;
case 0x539212:c.instructions+=2;goto B539212;
case 0x539214:c.instructions+=1;goto B539214;
case 0x53921a:goto L53921a;
case 0x53921b:c.instructions+=1;goto B53921b;
case 0x539220:goto L539220;
case 0x539223:c.instructions+=1;goto B539223;
case 0x539228:goto L539228;
case 0x53922a:c.instructions+=1;goto B53922a;
case 0x53922c:goto L53922c;
case 0x53922f:c.instructions+=2;goto B53922f;
case 0x539231:c.instructions+=1;goto B539231;
case 0x539233:goto L539233;
case 0x539236:c.instructions+=1;goto B539236;
case 0x53923b:goto L53923b;
case 0x53923d:c.instructions+=1;goto B53923d;
case 0x539242:goto L539242;
case 0x539244:c.instructions+=2;goto B539244;
case 0x539246:c.instructions+=1;goto B539246;
case 0x539248:goto L539248;
case 0x53924b:c.instructions+=1;goto B53924b;
case 0x53924d:goto L53924d;
case 0x53924f:goto L53924f;
case 0x539251:c.instructions+=1;goto B539251;
case 0x539253:goto L539253;
case 0x539256:c.instructions+=2;goto B539256;
case 0x539258:c.instructions+=1;goto B539258;
case 0x53925a:goto L53925a;
case 0x53925d:c.instructions+=1;goto B53925d;
case 0x53925f:goto L53925f;
case 0x539261:goto L539261;
case 0x539267:c.instructions+=3;goto B539267;
case 0x539268:c.instructions+=2;goto B539268;
case 0x53926b:c.instructions+=1;goto B53926b;
case 0x53926d:goto L53926d;
case 0x539272:goto L539272;
case 0x539274:c.instructions+=2;goto B539274;
case 0x53927a:c.instructions+=1;goto B53927a;
case 0x53927c:goto L53927c;
case 0x53927f:c.instructions+=2;goto B53927f;
case 0x539281:c.instructions+=1;goto B539281;
case 0x539283:goto L539283;
case 0x539285:c.instructions+=1;goto B539285;
case 0x539287:goto L539287;
case 0x53928a:c.instructions+=1;goto B53928a;
case 0x53928c:goto L53928c;
case 0x53928e:goto L53928e;
case 0x539290:c.instructions+=1;goto B539290;
case 0x539292:goto L539292;
case 0x539293:c.instructions+=2;goto B539293;
case 0x539295:c.instructions+=1;goto B539295;
case 0x53929a:goto L53929a;
case 0x53929d:c.instructions+=4;goto B53929d;
case 0x53929e:c.instructions+=3;goto B53929e;
case 0x5392a0:c.instructions+=2;goto B5392a0;
case 0x5392a2:c.instructions+=1;goto B5392a2;
case 0x5392a7:goto L5392a7;
case 0x5392a9:c.instructions+=1;goto B5392a9;
case 0x5392ab:goto L5392ab;
case 0x5392b0:goto L5392b0;
case 0x5392b3:c.instructions+=3;goto B5392b3;
case 0x5392b6:c.instructions+=2;goto B5392b6;
case 0x5392b8:c.instructions+=1;goto B5392b8;
case 0x5392ba:goto L5392ba;
case 0x5392bd:c.instructions+=1;goto B5392bd;
case 0x5392bf:goto L5392bf;
case 0x5392c1:goto L5392c1;
case 0x5392c3:c.instructions+=2;goto B5392c3;
case 0x5392c6:c.instructions+=1;goto B5392c6;
case 0x5392cb:goto L5392cb;
case 0x5392cc:c.instructions+=2;goto B5392cc;
case 0x5392ce:c.instructions+=1;goto B5392ce;
case 0x5392d3:goto L5392d3;
case 0x5392d5:c.instructions+=4;goto B5392d5;
case 0x5392d8:c.instructions+=3;goto B5392d8;
case 0x5392d9:c.instructions+=2;goto B5392d9;
case 0x5392db:c.instructions+=1;goto B5392db;
case 0x5392e0:goto L5392e0;
case 0x5392e2:c.instructions+=1;goto B5392e2;
case 0x5392e4:goto L5392e4;
case 0x5392e7:c.instructions+=2;goto B5392e7;
case 0x5392e9:c.instructions+=1;goto B5392e9;
case 0x5392eb:goto L5392eb;
case 0x5392ed:c.instructions+=1;goto B5392ed;
case 0x5392ef:goto L5392ef;
case 0x5392f1:c.instructions+=1;goto B5392f1;
case 0x5392f4:goto L5392f4;
case 0x5392f6:c.instructions+=1;goto B5392f6;
case 0x5392f8:goto L5392f8;
case 0x5392fb:c.instructions+=4;goto B5392fb;
case 0x5392fd:c.instructions+=3;goto B5392fd;
case 0x5392fe:c.instructions+=2;goto B5392fe;
case 0x539300:c.instructions+=1;goto B539300;
case 0x539303:goto L539303;
case 0x539309:c.instructions+=3;goto B539309;
case 0x53930b:c.instructions+=2;goto B53930b;
case 0x53930e:c.instructions+=1;goto B53930e;
case 0x539310:goto L539310;
case 0x539312:c.instructions+=1;goto B539312;
case 0x539314:goto L539314;
case 0x539315:c.instructions+=2;goto B539315;
case 0x539317:c.instructions+=1;goto B539317;
case 0x53931c:goto L53931c;
case 0x539322:c.instructions+=6;goto B539322;
case 0x539323:c.instructions+=5;goto B539323;
case 0x539324:c.instructions+=4;goto B539324;
case 0x539325:c.instructions+=3;goto B539325;
case 0x539327:c.instructions+=2;goto B539327;
case 0x53932a:c.instructions+=1;goto B53932a;
case 0x53932f:goto L53932f;
case 0x539335:c.instructions+=2;goto B539335;
case 0x539337:c.instructions+=1;goto B539337;
case 0x539339:goto L539339;
case 0x53933f:c.instructions+=2;goto B53933f;
case 0x539341:c.instructions+=1;goto B539341;
case 0x539343:goto L539343;
case 0x539345:c.instructions+=2;goto B539345;
case 0x539346:c.instructions+=1;goto B539346;
case 0x539348:goto L539348;
case 0x53934d:goto L53934d;
case 0x539350:c.instructions+=4;goto B539350;
case 0x539351:c.instructions+=3;goto B539351;
case 0x539352:c.instructions+=2;goto B539352;
case 0x539353:c.instructions+=1;goto B539353;
case 0x539356:goto L539356;
case 0x53935b:goto L53935b;
case 0x53935e:goto L53935e;
case 0x53935f:c.instructions+=1;goto B53935f;
case 0x539360:goto L539360;
case 0x539361:c.instructions+=1;goto B539361;
case 0x539370:goto L539370;
case 0x539373:c.instructions+=7;goto B539373;
case 0x539374:c.instructions+=6;goto B539374;
case 0x539375:c.instructions+=5;goto B539375;
case 0x539377:c.instructions+=4;goto B539377;
case 0x53937a:c.instructions+=3;goto B53937a;
case 0x53937d:c.instructions+=2;goto B53937d;
case 0x53937f:c.instructions+=1;goto B53937f;
case 0x539385:goto L539385;
case 0x53938b:c.instructions+=2;goto B53938b;
case 0x53938d:c.instructions+=1;goto B53938d;
case 0x53938f:goto L53938f;
case 0x539394:goto L539394;
case 0x539395:c.instructions+=3;goto B539395;
case 0x539396:c.instructions+=2;goto B539396;
case 0x539399:c.instructions+=1;goto B539399;
case 0x53939c:goto L53939c;
case 0x53939f:c.instructions+=8;goto B53939f;
case 0x5393a0:c.instructions+=7;goto B5393a0;
case 0x5393a1:c.instructions+=6;goto B5393a1;
case 0x5393a4:c.instructions+=5;goto B5393a4;
case 0x5393a6:c.instructions+=4;goto B5393a6;
case 0x5393a7:c.instructions+=3;goto B5393a7;
case 0x5393a9:c.instructions+=2;goto B5393a9;
case 0x5393ad:c.instructions+=1;goto B5393ad;
case 0x5393b2:goto L5393b2;
case 0x5393b6:c.instructions+=4;goto B5393b6;
case 0x5393b7:c.instructions+=3;goto B5393b7;
case 0x5393b9:c.instructions+=2;goto B5393b9;
case 0x5393bb:c.instructions+=1;goto B5393bb;
case 0x5393c0:goto L5393c0;
case 0x5393c4:c.instructions+=4;goto B5393c4;
case 0x5393c9:c.instructions+=3;goto B5393c9;
case 0x5393cb:c.instructions+=2;goto B5393cb;
case 0x5393cf:c.instructions+=1;goto B5393cf;
case 0x5393d5:goto L5393d5;
case 0x5393db:c.instructions+=2;goto B5393db;
case 0x5393dd:c.instructions+=1;goto B5393dd;
case 0x5393e1:goto L5393e1;
case 0x5393e3:c.instructions+=1;goto B5393e3;
case 0x5393e5:goto L5393e5;
case 0x5393e8:c.instructions+=2;goto B5393e8;
case 0x5393ea:c.instructions+=1;goto B5393ea;
case 0x5393ec:goto L5393ec;
case 0x5393ef:c.instructions+=1;goto B5393ef;
case 0x5393f1:goto L5393f1;
case 0x5393f3:goto L5393f3;
case 0x5393f5:c.instructions+=1;goto B5393f5;
case 0x5393f7:goto L5393f7;
case 0x5393fa:c.instructions+=2;goto B5393fa;
case 0x5393fc:c.instructions+=1;goto B5393fc;
case 0x5393fe:goto L5393fe;
case 0x539400:c.instructions+=1;goto B539400;
case 0x539402:goto L539402;
case 0x539405:c.instructions+=1;goto B539405;
case 0x539407:goto L539407;
case 0x539409:goto L539409;
case 0x53940b:c.instructions+=1;goto B53940b;
case 0x53940d:goto L53940d;
case 0x539410:c.instructions+=2;goto B539410;
case 0x539412:c.instructions+=1;goto B539412;
case 0x539414:goto L539414;
case 0x539417:c.instructions+=2;goto B539417;
case 0x539419:c.instructions+=1;goto B539419;
case 0x53941b:goto L53941b;
case 0x53941e:c.instructions+=1;goto B53941e;
case 0x539420:goto L539420;
case 0x539422:goto L539422;
case 0x539428:c.instructions+=6;goto B539428;
case 0x53942e:c.instructions+=5;goto B53942e;
case 0x53942f:c.instructions+=4;goto B53942f;
case 0x539430:c.instructions+=3;goto B539430;
case 0x539432:c.instructions+=2;goto B539432;
case 0x539438:c.instructions+=1;goto B539438;
case 0x53943a:goto L53943a;
case 0x539440:c.instructions+=1;goto B539440;
case 0x539442:goto L539442;
case 0x539445:c.instructions+=2;goto B539445;
case 0x539447:c.instructions+=1;goto B539447;
case 0x539449:goto L539449;
case 0x53944c:c.instructions+=1;goto B53944c;
case 0x53944e:goto L53944e;
case 0x539450:goto L539450;
case 0x539454:goto L539454;
case 0x539456:c.instructions+=1;goto B539456;
case 0x539458:goto L539458;
case 0x53945b:c.instructions+=2;goto B53945b;
case 0x53945d:c.instructions+=1;goto B53945d;
case 0x53945f:goto L53945f;
case 0x539461:goto L539461;
case 0x539467:c.instructions+=4;goto B539467;
case 0x53946a:c.instructions+=3;goto B53946a;
case 0x53946c:c.instructions+=2;goto B53946c;
case 0x53946e:c.instructions+=1;goto B53946e;
case 0x539470:goto L539470;
case 0x539472:c.instructions+=1;goto B539472;
case 0x539474:goto L539474;
case 0x539477:c.instructions+=4;goto B539477;
case 0x53947a:c.instructions+=3;goto B53947a;
case 0x53947b:c.instructions+=2;goto B53947b;
case 0x53947c:c.instructions+=1;goto B53947c;
case 0x539481:goto L539481;
case 0x539482:c.instructions+=2;goto B539482;
case 0x539484:c.instructions+=1;goto B539484;
case 0x539489:goto L539489;
case 0x53948f:c.instructions+=5;goto B53948f;
case 0x539491:c.instructions+=4;goto B539491;
case 0x539493:c.instructions+=3;goto B539493;
case 0x539497:c.instructions+=2;goto B539497;
case 0x539499:c.instructions+=1;goto B539499;
case 0x53949f:goto L53949f;
case 0x5394a1:c.instructions+=3;goto B5394a1;
case 0x5394a3:c.instructions+=2;goto B5394a3;
case 0x5394a5:c.instructions+=1;goto B5394a5;
case 0x5394ab:goto L5394ab;
case 0x5394b0:goto L5394b0;
case 0x5394b4:c.instructions+=3;goto B5394b4;
case 0x5394b7:c.instructions+=2;goto B5394b7;
case 0x5394b9:c.instructions+=1;goto B5394b9;
case 0x5394bb:goto L5394bb;
case 0x5394be:c.instructions+=2;goto B5394be;
case 0x5394c2:c.instructions+=1;goto B5394c2;
case 0x5394c4:goto L5394c4;
case 0x5394c8:goto L5394c8;
case 0x5394c9:c.instructions+=1;goto B5394c9;
case 0x5394cb:goto L5394cb;
case 0x5394d0:goto L5394d0;
case 0x5394d2:c.instructions+=1;goto B5394d2;
case 0x5394d4:goto L5394d4;
case 0x5394d7:c.instructions+=2;goto B5394d7;
case 0x5394d9:c.instructions+=1;goto B5394d9;
case 0x5394db:goto L5394db;
case 0x5394de:c.instructions+=1;goto B5394de;
case 0x5394e0:goto L5394e0;
case 0x5394e2:goto L5394e2;
case 0x5394e4:c.instructions+=1;goto B5394e4;
case 0x5394e6:goto L5394e6;
case 0x5394e9:c.instructions+=2;goto B5394e9;
case 0x5394eb:c.instructions+=1;goto B5394eb;
case 0x5394ed:goto L5394ed;
case 0x5394ef:c.instructions+=1;goto B5394ef;
case 0x5394f1:goto L5394f1;
case 0x5394f4:c.instructions+=1;goto B5394f4;
case 0x5394f6:goto L5394f6;
case 0x5394f8:goto L5394f8;
case 0x5394fa:c.instructions+=1;goto B5394fa;
case 0x5394fc:goto L5394fc;
case 0x5394ff:c.instructions+=2;goto B5394ff;
case 0x539501:c.instructions+=1;goto B539501;
case 0x539503:goto L539503;
case 0x539506:c.instructions+=2;goto B539506;
case 0x539508:c.instructions+=1;goto B539508;
case 0x53950a:goto L53950a;
case 0x53950d:c.instructions+=1;goto B53950d;
case 0x53950f:goto L53950f;
case 0x539511:goto L539511;
case 0x539517:c.instructions+=5;goto B539517;
case 0x539518:c.instructions+=4;goto B539518;
case 0x53951a:c.instructions+=3;goto B53951a;
case 0x53951c:c.instructions+=2;goto B53951c;
case 0x539522:c.instructions+=1;goto B539522;
case 0x539524:goto L539524;
case 0x53952a:c.instructions+=3;goto B53952a;
case 0x53952b:c.instructions+=2;goto B53952b;
case 0x539531:c.instructions+=1;goto B539531;
case 0x539533:goto L539533;
case 0x539536:c.instructions+=2;goto B539536;
case 0x539538:c.instructions+=1;goto B539538;
case 0x53953a:goto L53953a;
case 0x53953d:c.instructions+=1;goto B53953d;
case 0x53953f:goto L53953f;
case 0x539541:goto L539541;
case 0x539547:c.instructions+=6;goto B539547;
case 0x53954d:c.instructions+=5;goto B53954d;
case 0x53954f:c.instructions+=4;goto B53954f;
case 0x539550:c.instructions+=3;goto B539550;
case 0x539551:c.instructions+=2;goto B539551;
case 0x539553:c.instructions+=1;goto B539553;
case 0x539558:goto L539558;
case 0x53955a:c.instructions+=1;goto B53955a;
case 0x53955c:goto L53955c;
case 0x53955f:c.instructions+=2;goto B53955f;
case 0x539563:c.instructions+=1;goto B539563;
case 0x539565:goto L539565;
case 0x53956d:goto L53956d;
case 0x53956f:c.instructions+=1;goto B53956f;
case 0x539571:goto L539571;
case 0x539574:c.instructions+=2;goto B539574;
case 0x539576:c.instructions+=1;goto B539576;
case 0x539578:goto L539578;
case 0x53957d:c.instructions+=1;goto B53957d;
case 0x539582:goto L539582;
case 0x539585:c.instructions+=5;goto B539585;
case 0x539588:c.instructions+=4;goto B539588;
case 0x539589:c.instructions+=3;goto B539589;
case 0x53958a:c.instructions+=2;goto B53958a;
case 0x53958c:c.instructions+=1;goto B53958c;
case 0x539591:goto L539591;
case 0x539594:goto L539594;
case 0x539595:c.instructions+=2;goto B539595;
case 0x539597:c.instructions+=1;goto B539597;
case 0x53959c:goto L53959c;
case 0x5395a0:c.instructions+=1;goto B5395a0;
case 0x5395a2:goto L5395a2;
case 0x5395a6:goto L5395a6;
case 0x5395aa:c.instructions+=2;goto B5395aa;
case 0x5395ad:c.instructions+=1;goto B5395ad;
case 0x5395af:goto L5395af;
case 0x5395b1:c.instructions+=2;goto B5395b1;
case 0x5395b4:c.instructions+=1;goto B5395b4;
case 0x5395b9:goto L5395b9;
case 0x5395bc:c.instructions+=2;goto B5395bc;
case 0x5395be:c.instructions+=1;goto B5395be;
case 0x5395c0:goto L5395c0;
case 0x5395c2:c.instructions+=1;goto B5395c2;
case 0x5395c4:goto L5395c4;
case 0x5395c6:c.instructions+=1;goto B5395c6;
case 0x5395c9:goto L5395c9;
case 0x5395cb:c.instructions+=1;goto B5395cb;
case 0x5395cd:goto L5395cd;
case 0x5395d0:c.instructions+=4;goto B5395d0;
case 0x5395d2:c.instructions+=3;goto B5395d2;
case 0x5395d3:c.instructions+=2;goto B5395d3;
case 0x5395d5:c.instructions+=1;goto B5395d5;
case 0x5395d8:goto L5395d8;
case 0x5395de:c.instructions+=3;goto B5395de;
case 0x5395e0:c.instructions+=2;goto B5395e0;
case 0x5395e3:c.instructions+=1;goto B5395e3;
case 0x5395e5:goto L5395e5;
case 0x5395e7:c.instructions+=1;goto B5395e7;
case 0x5395e9:goto L5395e9;
case 0x5395ea:c.instructions+=2;goto B5395ea;
case 0x5395ec:c.instructions+=1;goto B5395ec;
case 0x5395f1:goto L5395f1;
case 0x5395f7:c.instructions+=6;goto B5395f7;
case 0x5395f8:c.instructions+=5;goto B5395f8;
case 0x5395f9:c.instructions+=4;goto B5395f9;
case 0x5395fa:c.instructions+=3;goto B5395fa;
case 0x5395fc:c.instructions+=2;goto B5395fc;
case 0x5395ff:c.instructions+=1;goto B5395ff;
case 0x539604:goto L539604;
case 0x53960a:c.instructions+=2;goto B53960a;
case 0x53960c:c.instructions+=1;goto B53960c;
case 0x53960e:goto L53960e;
case 0x539614:c.instructions+=2;goto B539614;
case 0x539616:c.instructions+=1;goto B539616;
case 0x539618:goto L539618;
case 0x53961a:c.instructions+=2;goto B53961a;
case 0x53961b:c.instructions+=1;goto B53961b;
case 0x53961d:goto L53961d;
case 0x539622:goto L539622;
case 0x539625:c.instructions+=6;goto B539625;
case 0x539626:c.instructions+=5;goto B539626;
case 0x539627:c.instructions+=4;goto B539627;
case 0x539628:c.instructions+=3;goto B539628;
case 0x539629:c.instructions+=2;goto B539629;
case 0x53962c:c.instructions+=1;goto B53962c;
case 0x53962f:goto L53962f;
case 0x539634:goto L539634;
case 0x539637:goto L539637;
case 0x539638:c.instructions+=1;goto B539638;
case 0x539639:goto L539639;
case 0x53963a:c.instructions+=3;goto B53963a;
case 0x53963b:c.instructions+=2;goto B53963b;
case 0x53963e:c.instructions+=1;goto B53963e;
case 0x539650:goto L539650;
case 0x539651:c.instructions+=4;goto B539651;
case 0x539653:c.instructions+=3;goto B539653;
case 0x539659:c.instructions+=2;goto B539659;
case 0x53965b:c.instructions+=1;goto B53965b;
case 0x539661:goto L539661;
case 0x539662:c.instructions+=6;goto B539662;
case 0x539665:c.instructions+=5;goto B539665;
case 0x539667:c.instructions+=4;goto B539667;
case 0x539668:c.instructions+=3;goto B539668;
case 0x53966b:c.instructions+=2;goto B53966b;
case 0x53966c:c.instructions+=1;goto B53966c;
case 0x53966e:goto L53966e;
case 0x539671:c.instructions+=1;goto B539671;
case 0x539673:goto L539673;
case 0x539675:goto L539675;
case 0x539679:c.instructions+=3;goto B539679;
case 0x53967b:c.instructions+=2;goto B53967b;
case 0x539680:c.instructions+=1;goto B539680;
case 0x539682:goto L539682;
case 0x539684:c.instructions+=1;goto B539684;
case 0x539686:goto L539686;
case 0x539689:c.instructions+=1;goto B539689;
case 0x53968b:goto L53968b;
case 0x53968d:goto L53968d;
case 0x53968f:c.instructions+=1;goto B53968f;
case 0x539695:goto L539695;
case 0x539697:c.instructions+=1;goto B539697;
case 0x539699:goto L539699;
case 0x53969c:c.instructions+=3;goto B53969c;
case 0x53969d:c.instructions+=2;goto B53969d;
case 0x53969f:c.instructions+=1;goto B53969f;
case 0x5396a1:goto L5396a1;
case 0x5396a4:c.instructions+=1;goto B5396a4;
case 0x5396a6:goto L5396a6;
case 0x5396a8:c.instructions+=1;goto B5396a8;
case 0x5396aa:goto L5396aa;
case 0x5396ac:c.instructions+=1;goto B5396ac;
case 0x5396ae:goto L5396ae;
case 0x5396b1:c.instructions+=2;goto B5396b1;
case 0x5396b3:c.instructions+=1;goto B5396b3;
case 0x5396b5:goto L5396b5;
case 0x5396b8:c.instructions+=4;goto B5396b8;
case 0x5396bb:c.instructions+=3;goto B5396bb;
case 0x5396bd:c.instructions+=2;goto B5396bd;
case 0x5396be:c.instructions+=1;goto B5396be;
case 0x5396c1:goto L5396c1;
case 0x5396c8:c.instructions+=2;goto B5396c8;
case 0x5396ce:c.instructions+=1;goto B5396ce;
case 0x5396d3:goto L5396d3;
case 0x5396d6:c.instructions+=2;goto B5396d6;
case 0x5396d8:c.instructions+=1;goto B5396d8;
case 0x5396da:goto L5396da;
case 0x5396dd:c.instructions+=2;goto B5396dd;
case 0x5396df:c.instructions+=1;goto B5396df;
case 0x5396e1:goto L5396e1;
case 0x5396e3:c.instructions+=1;goto B5396e3;
case 0x5396e6:goto L5396e6;
case 0x5396ed:goto L5396ed;
case 0x5396f3:c.instructions+=3;goto B5396f3;
case 0x5396f5:c.instructions+=2;goto B5396f5;
case 0x5396f8:c.instructions+=1;goto B5396f8;
case 0x5396fe:goto L5396fe;
case 0x539700:c.instructions+=1;goto B539700;
case 0x539706:goto L539706;
case 0x539709:c.instructions+=4;goto B539709;
case 0x53970c:c.instructions+=3;goto B53970c;
case 0x53970d:c.instructions+=2;goto B53970d;
case 0x53970e:c.instructions+=1;goto B53970e;
case 0x539713:goto L539713;
case 0x539718:goto L539718;
case 0x53971a:c.instructions+=2;goto B53971a;
case 0x539724:c.instructions+=1;goto B539724;
case 0x539726:goto L539726;
case 0x539729:c.instructions+=2;goto B539729;
case 0x53972b:c.instructions+=1;goto B53972b;
case 0x53972d:goto L53972d;
case 0x539730:goto L539730;
case 0x539733:c.instructions+=2;goto B539733;
case 0x539735:c.instructions+=1;goto B539735;
case 0x539737:goto L539737;
case 0x539739:c.instructions+=1;goto B539739;
case 0x53973b:goto L53973b;
case 0x53973e:c.instructions+=1;goto B53973e;
case 0x539740:goto L539740;
case 0x539742:c.instructions+=1;goto B539742;
case 0x539744:goto L539744;
case 0x539746:goto L539746;
case 0x539748:c.instructions+=1;goto B539748;
case 0x53974a:goto L53974a;
case 0x53974d:c.instructions+=2;goto B53974d;
case 0x53974f:c.instructions+=1;goto B53974f;
case 0x539751:goto L539751;
case 0x539754:c.instructions+=1;goto B539754;
case 0x539756:goto L539756;
case 0x539758:goto L539758;
case 0x53975e:c.instructions+=4;goto B53975e;
case 0x53975f:c.instructions+=3;goto B53975f;
case 0x539761:c.instructions+=2;goto B539761;
case 0x539767:c.instructions+=1;goto B539767;
case 0x539769:goto L539769;
case 0x53976b:c.instructions+=1;goto B53976b;
case 0x53976d:goto L53976d;
case 0x539770:c.instructions+=1;goto B539770;
case 0x539772:goto L539772;
case 0x539774:goto L539774;
case 0x539776:c.instructions+=1;goto B539776;
case 0x539778:goto L539778;
case 0x53977b:c.instructions+=4;goto B53977b;
case 0x53977e:c.instructions+=3;goto B53977e;
case 0x539780:c.instructions+=2;goto B539780;
case 0x539781:c.instructions+=1;goto B539781;
case 0x539784:goto L539784;
case 0x53978b:c.instructions+=1;goto B53978b;
case 0x53978d:goto L53978d;
case 0x53978f:c.instructions+=1;goto B53978f;
case 0x539791:goto L539791;
case 0x539794:c.instructions+=1;goto B539794;
case 0x539796:goto L539796;
case 0x539798:goto L539798;
case 0x53979b:goto L53979b;
case 0x53979d:c.instructions+=1;goto B53979d;
case 0x5397a2:goto L5397a2;
case 0x5397a8:c.instructions+=5;goto B5397a8;
case 0x5397aa:c.instructions+=4;goto B5397aa;
case 0x5397ab:c.instructions+=3;goto B5397ab;
case 0x5397ac:c.instructions+=2;goto B5397ac;
case 0x5397ad:c.instructions+=1;goto B5397ad;
case 0x5397af:goto L5397af;
case 0x5397b2:c.instructions+=3;goto B5397b2;
case 0x5397b3:c.instructions+=2;goto B5397b3;
case 0x5397b5:c.instructions+=1;goto B5397b5;
case 0x5397ba:goto L5397ba;
case 0x5397c0:c.instructions+=6;goto B5397c0;
case 0x5397c1:c.instructions+=5;goto B5397c1;
case 0x5397c2:c.instructions+=4;goto B5397c2;
case 0x5397c3:c.instructions+=3;goto B5397c3;
case 0x5397c5:c.instructions+=2;goto B5397c5;
case 0x5397c8:c.instructions+=1;goto B5397c8;
case 0x5397cd:goto L5397cd;
case 0x5397ce:c.instructions+=1;goto B5397ce;
case 0x5397e0:goto L5397e0;
case 0x5397e3:c.instructions+=7;goto B5397e3;
case 0x5397e4:c.instructions+=6;goto B5397e4;
case 0x5397e5:c.instructions+=5;goto B5397e5;
case 0x5397e7:c.instructions+=4;goto B5397e7;
case 0x5397e9:c.instructions+=3;goto B5397e9;
case 0x5397eb:c.instructions+=2;goto B5397eb;
case 0x5397ed:c.instructions+=1;goto B5397ed;
case 0x5397f3:goto L5397f3;
case 0x5397f6:c.instructions+=1;goto B5397f6;
case 0x5397fc:goto L5397fc;
case 0x5397fd:c.instructions+=5;goto B5397fd;
case 0x5397fe:c.instructions+=4;goto B5397fe;
case 0x539802:c.instructions+=3;goto B539802;
case 0x539806:c.instructions+=2;goto B539806;
case 0x539809:c.instructions+=1;goto B539809;
case 0x539810:goto L539810;
case 0x539813:c.instructions+=6;goto B539813;
case 0x539814:c.instructions+=5;goto B539814;
case 0x539817:c.instructions+=4;goto B539817;
case 0x539818:c.instructions+=3;goto B539818;
case 0x53981c:c.instructions+=2;goto B53981c;
case 0x53981d:c.instructions+=1;goto B53981d;
case 0x539822:goto L539822;
case 0x539826:c.instructions+=8;goto B539826;
case 0x539829:c.instructions+=7;goto B539829;
case 0x53982b:c.instructions+=6;goto B53982b;
case 0x53982e:c.instructions+=5;goto B53982e;
case 0x539831:c.instructions+=4;goto B539831;
case 0x539833:c.instructions+=3;goto B539833;
case 0x539837:c.instructions+=2;goto B539837;
case 0x53983b:c.instructions+=1;goto B53983b;
case 0x53983d:goto L53983d;
case 0x53983f:c.instructions+=1;goto B53983f;
case 0x539841:goto L539841;
case 0x539844:c.instructions+=2;goto B539844;
case 0x539846:c.instructions+=1;goto B539846;
case 0x539848:goto L539848;
case 0x53984a:c.instructions+=1;goto B53984a;
case 0x53984c:goto L53984c;
case 0x53984e:goto L53984e;
case 0x539851:c.instructions+=5;goto B539851;
case 0x539853:c.instructions+=4;goto B539853;
case 0x539856:c.instructions+=3;goto B539856;
case 0x539857:c.instructions+=2;goto B539857;
case 0x539859:c.instructions+=1;goto B539859;
case 0x53985b:goto L53985b;
case 0x53985e:c.instructions+=7;goto B53985e;
case 0x539861:c.instructions+=6;goto B539861;
case 0x539862:c.instructions+=5;goto B539862;
case 0x539863:c.instructions+=4;goto B539863;
case 0x539865:c.instructions+=3;goto B539865;
case 0x539868:c.instructions+=2;goto B539868;
case 0x539869:c.instructions+=1;goto B539869;
case 0x53986b:goto L53986b;
case 0x53986d:c.instructions+=1;goto B53986d;
case 0x53986f:goto L53986f;
case 0x539870:goto L539870;
case 0x539873:c.instructions+=2;goto B539873;
case 0x539875:c.instructions+=1;goto B539875;
case 0x539877:goto L539877;
case 0x539879:c.instructions+=1;goto B539879;
case 0x53987b:goto L53987b;
case 0x53987d:goto L53987d;
case 0x539880:c.instructions+=5;goto B539880;
case 0x539882:c.instructions+=4;goto B539882;
case 0x539885:c.instructions+=3;goto B539885;
case 0x539886:c.instructions+=2;goto B539886;
case 0x539888:c.instructions+=1;goto B539888;
case 0x53988a:goto L53988a;
case 0x53988c:c.instructions+=5;goto B53988c;
case 0x539890:c.instructions+=4;goto B539890;
case 0x539891:c.instructions+=3;goto B539891;
case 0x539892:c.instructions+=2;goto B539892;
case 0x539895:c.instructions+=1;goto B539895;
case 0x539896:goto L539896;
case 0x53989b:goto L53989b;
case 0x53989e:c.instructions+=5;goto B53989e;
case 0x5398a0:c.instructions+=4;goto B5398a0;
case 0x5398a3:c.instructions+=3;goto B5398a3;
case 0x5398a6:c.instructions+=2;goto B5398a6;
case 0x5398a8:c.instructions+=1;goto B5398a8;
case 0x5398ae:goto L5398ae;
case 0x5398af:c.instructions+=1;goto B5398af;
case 0x5398b0:goto L5398b0;
case 0x5398b1:c.instructions+=3;goto B5398b1;
case 0x5398b2:c.instructions+=2;goto B5398b2;
case 0x5398b5:c.instructions+=1;goto B5398b5;
case 0x5398c0:goto L5398c0;
case 0x5398c2:c.instructions+=3;goto B5398c2;
case 0x5398c5:c.instructions+=2;goto B5398c5;
case 0x5398c7:c.instructions+=1;goto B5398c7;
case 0x5398c9:goto L5398c9;
case 0x5398cc:c.instructions+=7;goto B5398cc;
case 0x5398cd:c.instructions+=6;goto B5398cd;
case 0x5398ce:c.instructions+=5;goto B5398ce;
case 0x5398d1:c.instructions+=4;goto B5398d1;
case 0x5398d4:c.instructions+=3;goto B5398d4;
case 0x5398d5:c.instructions+=2;goto B5398d5;
case 0x5398d6:c.instructions+=1;goto B5398d6;
case 0x5398db:goto L5398db;
case 0x5398e0:goto L5398e0;
case 0x5398e2:c.instructions+=11;goto B5398e2;
case 0x5398e7:c.instructions+=10;goto B5398e7;
case 0x5398ed:c.instructions+=9;goto B5398ed;
case 0x5398ee:c.instructions+=8;goto B5398ee;
case 0x5398f5:c.instructions+=7;goto B5398f5;
case 0x5398f6:c.instructions+=6;goto B5398f6;
case 0x5398f7:c.instructions+=5;goto B5398f7;
case 0x5398f9:c.instructions+=4;goto B5398f9;
case 0x5398fd:c.instructions+=3;goto B5398fd;
case 0x539903:c.instructions+=2;goto B539903;
case 0x53990b:c.instructions+=1;goto B53990b;
case 0x539910:goto L539910;
case 0x539916:c.instructions+=2;goto B539916;
case 0x53991b:c.instructions+=1;goto B53991b;
case 0x539920:goto L539920;
case 0x539923:c.instructions+=4;goto B539923;
case 0x539926:c.instructions+=3;goto B539926;
case 0x539928:c.instructions+=2;goto B539928;
case 0x539930:c.instructions+=1;goto B539930;
case 0x539932:goto L539932;
case 0x539934:c.instructions+=5;goto B539934;
case 0x539937:c.instructions+=4;goto B539937;
case 0x539939:c.instructions+=3;goto B539939;
case 0x53993a:c.instructions+=2;goto B53993a;
case 0x53993d:c.instructions+=1;goto B53993d;
case 0x539942:goto L539942;
case 0x539944:c.instructions+=3;goto B539944;
case 0x539947:c.instructions+=2;goto B539947;
case 0x539949:c.instructions+=1;goto B539949;
case 0x53994b:goto L53994b;
case 0x53994f:c.instructions+=4;goto B53994f;
case 0x539950:c.instructions+=3;goto B539950;
case 0x539957:c.instructions+=2;goto B539957;
case 0x53995a:c.instructions+=1;goto B53995a;
case 0x539960:goto L539960;
case 0x539961:c.instructions+=10;goto B539961;
case 0x539963:c.instructions+=9;goto B539963;
case 0x539966:c.instructions+=8;goto B539966;
case 0x539967:c.instructions+=7;goto B539967;
case 0x53996a:c.instructions+=6;goto B53996a;
case 0x53996b:c.instructions+=5;goto B53996b;
case 0x53996c:c.instructions+=4;goto B53996c;
case 0x53996e:c.instructions+=3;goto B53996e;
case 0x53996f:c.instructions+=2;goto B53996f;
case 0x539972:c.instructions+=1;goto B539972;
case 0x539977:goto L539977;
case 0x53997d:c.instructions+=3;goto B53997d;
case 0x53997f:c.instructions+=2;goto B53997f;
case 0x539982:c.instructions+=1;goto B539982;
case 0x539985:goto L539985;
case 0x539987:c.instructions+=6;goto B539987;
case 0x539988:c.instructions+=5;goto B539988;
case 0x539989:c.instructions+=4;goto B539989;
case 0x53998a:c.instructions+=3;goto B53998a;
case 0x53998f:c.instructions+=2;goto B53998f;
case 0x539992:c.instructions+=1;goto B539992;
case 0x539997:goto L539997;
case 0x539999:c.instructions+=2;goto B539999;
case 0x53999b:c.instructions+=1;goto B53999b;
case 0x5399a1:goto L5399a1;
case 0x5399a4:c.instructions+=1;goto B5399a4;
case 0x5399a6:goto L5399a6;
case 0x5399a9:c.instructions+=3;goto B5399a9;
case 0x5399ac:c.instructions+=2;goto B5399ac;
case 0x5399af:c.instructions+=1;goto B5399af;
case 0x5399b1:goto L5399b1;
case 0x5399b4:c.instructions+=1;goto B5399b4;
case 0x5399b6:goto L5399b6;
case 0x5399bc:c.instructions+=2;goto B5399bc;
case 0x5399be:c.instructions+=1;goto B5399be;
case 0x5399c1:goto L5399c1;
case 0x5399c7:c.instructions+=6;goto B5399c7;
case 0x5399cd:c.instructions+=5;goto B5399cd;
case 0x5399d5:c.instructions+=4;goto B5399d5;
case 0x5399d7:c.instructions+=3;goto B5399d7;
case 0x5399dc:c.instructions+=2;goto B5399dc;
case 0x5399de:c.instructions+=1;goto B5399de;
case 0x5399e3:goto L5399e3;
case 0x5399e6:c.instructions+=2;goto B5399e6;
case 0x5399e8:c.instructions+=1;goto B5399e8;
case 0x5399ea:goto L5399ea;
case 0x5399ec:c.instructions+=3;goto B5399ec;
case 0x5399f1:c.instructions+=2;goto B5399f1;
case 0x5399f3:c.instructions+=1;goto B5399f3;
case 0x5399f8:goto L5399f8;
case 0x5399fd:c.instructions+=2;goto B5399fd;
case 0x5399ff:c.instructions+=1;goto B5399ff;
case 0x539a04:goto L539a04;
case 0x539a07:c.instructions+=1;goto B539a07;
case 0x539a09:goto L539a09;
case 0x539a0b:goto L539a0b;
case 0x539a10:c.instructions+=4;goto B539a10;
case 0x539a11:c.instructions+=3;goto B539a11;
case 0x539a12:c.instructions+=2;goto B539a12;
case 0x539a13:c.instructions+=1;goto B539a13;
case 0x539a18:goto L539a18;
case 0x539a19:c.instructions+=1;goto B539a19;
case 0x539a1e:goto L539a1e;
case 0x539a21:c.instructions+=2;goto B539a21;
case 0x539a23:c.instructions+=1;goto B539a23;
case 0x539a25:goto L539a25;
case 0x539a28:c.instructions+=4;goto B539a28;
case 0x539a29:c.instructions+=3;goto B539a29;
case 0x539a2b:c.instructions+=2;goto B539a2b;
case 0x539a2e:c.instructions+=1;goto B539a2e;
case 0x539a33:goto L539a33;
case 0x539a36:c.instructions+=2;goto B539a36;
case 0x539a38:c.instructions+=1;goto B539a38;
case 0x539a3a:goto L539a3a;
case 0x539a3d:c.instructions+=2;goto B539a3d;
case 0x539a44:c.instructions+=1;goto B539a44;
case 0x539a46:goto L539a46;
case 0x539a48:goto L539a48;
case 0x539a4b:c.instructions+=5;goto B539a4b;
case 0x539a4e:c.instructions+=4;goto B539a4e;
case 0x539a50:c.instructions+=3;goto B539a50;
case 0x539a53:c.instructions+=2;goto B539a53;
case 0x539a56:c.instructions+=1;goto B539a56;
case 0x539a58:goto L539a58;
case 0x539a5b:c.instructions+=7;goto B539a5b;
case 0x539a5d:c.instructions+=6;goto B539a5d;
case 0x539a5f:c.instructions+=5;goto B539a5f;
case 0x539a60:c.instructions+=4;goto B539a60;
case 0x539a61:c.instructions+=3;goto B539a61;
case 0x539a62:c.instructions+=2;goto B539a62;
case 0x539a67:c.instructions+=1;goto B539a67;
case 0x539a6c:goto L539a6c;
case 0x539a6e:c.instructions+=2;goto B539a6e;
case 0x539a70:c.instructions+=1;goto B539a70;
case 0x539a76:goto L539a76;
case 0x539a79:c.instructions+=6;goto B539a79;
case 0x539a7a:c.instructions+=5;goto B539a7a;
case 0x539a7b:c.instructions+=4;goto B539a7b;
case 0x539a7c:c.instructions+=3;goto B539a7c;
case 0x539a7e:c.instructions+=2;goto B539a7e;
case 0x539a7f:c.instructions+=1;goto B539a7f;
case 0x539a80:goto L539a80;
case 0x539a82:c.instructions+=6;goto B539a82;
case 0x539a83:c.instructions+=5;goto B539a83;
case 0x539a84:c.instructions+=4;goto B539a84;
case 0x539a85:c.instructions+=3;goto B539a85;
case 0x539a87:c.instructions+=2;goto B539a87;
case 0x539a88:c.instructions+=1;goto B539a88;
case 0x539a90:goto L539a90;
case 0x539a91:c.instructions+=6;goto B539a91;
case 0x539a93:c.instructions+=5;goto B539a93;
case 0x539a94:c.instructions+=4;goto B539a94;
case 0x539a95:c.instructions+=3;goto B539a95;
case 0x539a96:c.instructions+=2;goto B539a96;
case 0x539a9b:c.instructions+=1;goto B539a9b;
case 0x539aa0:goto L539aa0;
case 0x539aa2:c.instructions+=3;goto B539aa2;
case 0x539aa8:c.instructions+=2;goto B539aa8;
case 0x539aaa:c.instructions+=1;goto B539aaa;
case 0x539aac:goto L539aac;
case 0x539aaf:c.instructions+=5;goto B539aaf;
case 0x539ab2:c.instructions+=4;goto B539ab2;
case 0x539ab8:c.instructions+=3;goto B539ab8;
case 0x539aba:c.instructions+=2;goto B539aba;
case 0x539abc:c.instructions+=1;goto B539abc;
case 0x539ac2:goto L539ac2;
case 0x539ac5:c.instructions+=2;goto B539ac5;
case 0x539ac7:c.instructions+=1;goto B539ac7;
case 0x539acc:goto L539acc;
case 0x539acf:c.instructions+=2;goto B539acf;
case 0x539ad1:c.instructions+=1;goto B539ad1;
case 0x539ad3:goto L539ad3;
case 0x539ad6:c.instructions+=2;goto B539ad6;
case 0x539add:c.instructions+=1;goto B539add;
case 0x539adf:goto L539adf;
case 0x539ae1:goto L539ae1;
case 0x539ae4:c.instructions+=9;goto B539ae4;
case 0x539ae7:c.instructions+=8;goto B539ae7;
case 0x539ae9:c.instructions+=7;goto B539ae9;
case 0x539aec:c.instructions+=6;goto B539aec;
case 0x539aef:c.instructions+=5;goto B539aef;
case 0x539af1:c.instructions+=4;goto B539af1;
case 0x539af7:c.instructions+=3;goto B539af7;
case 0x539af8:c.instructions+=2;goto B539af8;
case 0x539afa:c.instructions+=1;goto B539afa;
case 0x539afc:goto L539afc;
case 0x539afd:c.instructions+=4;goto B539afd;
case 0x539afe:c.instructions+=3;goto B539afe;
case 0x539aff:c.instructions+=2;goto B539aff;
case 0x539b00:c.instructions+=1;goto B539b00;
case 0x539b01:goto L539b01;
case 0x539b04:c.instructions+=5;goto B539b04;
case 0x539b07:c.instructions+=4;goto B539b07;
case 0x539b0d:c.instructions+=3;goto B539b0d;
case 0x539b0f:c.instructions+=2;goto B539b0f;
case 0x539b11:c.instructions+=1;goto B539b11;
case 0x539b13:goto L539b13;
case 0x539b16:c.instructions+=2;goto B539b16;
case 0x539b18:c.instructions+=1;goto B539b18;
case 0x539b1d:goto L539b1d;
case 0x539b20:c.instructions+=2;goto B539b20;
case 0x539b22:c.instructions+=1;goto B539b22;
case 0x539b24:goto L539b24;
case 0x539b27:c.instructions+=2;goto B539b27;
case 0x539b2e:c.instructions+=1;goto B539b2e;
case 0x539b30:goto L539b30;
case 0x539b32:goto L539b32;
case 0x539b35:c.instructions+=8;goto B539b35;
case 0x539b38:c.instructions+=7;goto B539b38;
case 0x539b3a:c.instructions+=6;goto B539b3a;
case 0x539b3d:c.instructions+=5;goto B539b3d;
case 0x539b40:c.instructions+=4;goto B539b40;
case 0x539b42:c.instructions+=3;goto B539b42;
case 0x539b48:c.instructions+=2;goto B539b48;
case 0x539b4a:c.instructions+=1;goto B539b4a;
case 0x539b4c:goto L539b4c;
case 0x539b52:c.instructions+=1;goto B539b52;
case 0x539b54:goto L539b54;
case 0x539b57:goto L539b57;
case 0x539b5a:c.instructions+=5;goto B539b5a;
case 0x539b5c:c.instructions+=4;goto B539b5c;
case 0x539b62:c.instructions+=3;goto B539b62;
case 0x539b63:c.instructions+=2;goto B539b63;
case 0x539b65:c.instructions+=1;goto B539b65;
case 0x539b67:goto L539b67;
case 0x539b68:c.instructions+=4;goto B539b68;
case 0x539b69:c.instructions+=3;goto B539b69;
case 0x539b6a:c.instructions+=2;goto B539b6a;
case 0x539b6b:c.instructions+=1;goto B539b6b;
case 0x539b70:goto L539b70;
case 0x539b71:c.instructions+=5;goto B539b71;
case 0x539b73:c.instructions+=4;goto B539b73;
case 0x539b74:c.instructions+=3;goto B539b74;
case 0x539b77:c.instructions+=2;goto B539b77;
case 0x539b79:c.instructions+=1;goto B539b79;
case 0x539b7b:goto L539b7b;
case 0x539b7d:c.instructions+=3;goto B539b7d;
case 0x539b7e:c.instructions+=2;goto B539b7e;
case 0x539b7f:c.instructions+=1;goto B539b7f;
case 0x539b80:goto L539b80;
case 0x539b86:c.instructions+=9;goto B539b86;
case 0x539b89:c.instructions+=8;goto B539b89;
case 0x539b8a:c.instructions+=7;goto B539b8a;
case 0x539b8d:c.instructions+=6;goto B539b8d;
case 0x539b8e:c.instructions+=5;goto B539b8e;
case 0x539b91:c.instructions+=4;goto B539b91;
case 0x539b97:c.instructions+=3;goto B539b97;
case 0x539b99:c.instructions+=2;goto B539b99;
case 0x539b9b:c.instructions+=1;goto B539b9b;
case 0x539b9d:goto L539b9d;
case 0x539ba3:c.instructions+=2;goto B539ba3;
case 0x539baa:c.instructions+=1;goto B539baa;
case 0x539bac:goto L539bac;
case 0x539bb3:goto L539bb3;
case 0x539bb5:c.instructions+=3;goto B539bb5;
case 0x539bba:c.instructions+=2;goto B539bba;
case 0x539bbc:c.instructions+=1;goto B539bbc;
case 0x539bc1:goto L539bc1;
case 0x539bc3:c.instructions+=1;goto B539bc3;
case 0x539bc5:goto L539bc5;
case 0x539bcc:c.instructions+=4;goto B539bcc;
case 0x539bce:c.instructions+=3;goto B539bce;
case 0x539bd3:c.instructions+=2;goto B539bd3;
case 0x539bd5:c.instructions+=1;goto B539bd5;
case 0x539bda:goto L539bda;
case 0x539bdd:c.instructions+=2;goto B539bdd;
case 0x539bdf:c.instructions+=1;goto B539bdf;
case 0x539be1:goto L539be1;
case 0x539be7:c.instructions+=4;goto B539be7;
case 0x539be8:c.instructions+=3;goto B539be8;
case 0x539be9:c.instructions+=2;goto B539be9;
case 0x539beb:c.instructions+=1;goto B539beb;
case 0x539bf0:goto L539bf0;
case 0x539bf1:c.instructions+=1;goto B539bf1;
case 0x539bf6:goto L539bf6;
case 0x539bf9:c.instructions+=2;goto B539bf9;
case 0x539bfb:c.instructions+=1;goto B539bfb;
case 0x539bfd:goto L539bfd;
case 0x539c00:c.instructions+=7;goto B539c00;
case 0x539c01:c.instructions+=6;goto B539c01;
case 0x539c06:c.instructions+=5;goto B539c06;
case 0x539c07:c.instructions+=4;goto B539c07;
case 0x539c09:c.instructions+=3;goto B539c09;
case 0x539c0a:c.instructions+=2;goto B539c0a;
case 0x539c0b:c.instructions+=1;goto B539c0b;
case 0x539c0c:goto L539c0c;
case 0x539c0f:c.instructions+=7;goto B539c0f;
case 0x539c10:c.instructions+=6;goto B539c10;
case 0x539c12:c.instructions+=5;goto B539c12;
case 0x539c13:c.instructions+=4;goto B539c13;
case 0x539c15:c.instructions+=3;goto B539c15;
case 0x539c16:c.instructions+=2;goto B539c16;
case 0x539c17:c.instructions+=1;goto B539c17;
case 0x539c20:goto L539c20;
case 0x539c21:c.instructions+=2;goto B539c21;
case 0x539c22:c.instructions+=1;goto B539c22;
case 0x539c27:goto L539c27;
case 0x539c2c:goto L539c2c;
case 0x539c31:goto L539c31;
case 0x539c33:c.instructions+=2;goto B539c33;
case 0x539c36:c.instructions+=1;goto B539c36;
case 0x539c38:goto L539c38;
case 0x539c3d:c.instructions+=3;goto B539c3d;
case 0x539c3e:c.instructions+=2;goto B539c3e;
case 0x539c43:c.instructions+=1;goto B539c43;
case 0x539c48:goto L539c48;
case 0x539c4a:c.instructions+=1;goto B539c4a;
case 0x539c4c:goto L539c4c;
case 0x539c52:c.instructions+=1;goto B539c52;
case 0x539c54:goto L539c54;
case 0x539c56:c.instructions+=1;goto B539c56;
case 0x539c58:goto L539c58;
case 0x539c59:c.instructions+=2;goto B539c59;
case 0x539c5c:c.instructions+=1;goto B539c5c;
case 0x539c5e:goto L539c5e;
case 0x539c60:goto L539c60;
case 0x539c62:c.instructions+=3;goto B539c62;
case 0x539c63:c.instructions+=2;goto B539c63;
case 0x539c64:c.instructions+=1;goto B539c64;
case 0x539c65:goto L539c65;
case 0x539c67:c.instructions+=4;goto B539c67;
case 0x539c69:c.instructions+=3;goto B539c69;
case 0x539c6a:c.instructions+=2;goto B539c6a;
case 0x539c6b:c.instructions+=1;goto B539c6b;
case 0x539c6c:goto L539c6c;
case 0x539c6d:c.instructions+=3;goto B539c6d;
case 0x539c6e:c.instructions+=2;goto B539c6e;
case 0x539c70:c.instructions+=1;goto B539c70;
case 0x539c75:goto L539c75;
case 0x539c7b:c.instructions+=4;goto B539c7b;
case 0x539c7d:c.instructions+=3;goto B539c7d;
case 0x539c80:c.instructions+=2;goto B539c80;
case 0x539c84:c.instructions+=1;goto B539c84;
case 0x539c87:goto L539c87;
case 0x539c89:c.instructions+=6;goto B539c89;
case 0x539c8b:c.instructions+=5;goto B539c8b;
case 0x539c8d:c.instructions+=4;goto B539c8d;
case 0x539c8f:c.instructions+=3;goto B539c8f;
case 0x539c90:c.instructions+=2;goto B539c90;
case 0x539c95:c.instructions+=1;goto B539c95;
case 0x539c9a:goto L539c9a;
case 0x539c9c:c.instructions+=2;goto B539c9c;
case 0x539c9e:c.instructions+=1;goto B539c9e;
case 0x539ca0:goto L539ca0;
case 0x539ca4:c.instructions+=2;goto B539ca4;
case 0x539ca8:c.instructions+=1;goto B539ca8;
case 0x539caa:goto L539caa;
case 0x539cb0:c.instructions+=4;goto B539cb0;
case 0x539cb1:c.instructions+=3;goto B539cb1;
case 0x539cb2:c.instructions+=2;goto B539cb2;
case 0x539cb4:c.instructions+=1;goto B539cb4;
case 0x539cb9:goto L539cb9;
case 0x539cba:c.instructions+=1;goto B539cba;
case 0x539cbf:goto L539cbf;
case 0x539cc2:c.instructions+=2;goto B539cc2;
case 0x539cc4:c.instructions+=1;goto B539cc4;
case 0x539cc6:goto L539cc6;
case 0x539cc8:c.instructions+=1;goto B539cc8;
case 0x539cca:goto L539cca;
case 0x539ccc:goto L539ccc;
case 0x539cce:c.instructions+=6;goto B539cce;
case 0x539cd0:c.instructions+=5;goto B539cd0;
case 0x539cd2:c.instructions+=4;goto B539cd2;
case 0x539cd3:c.instructions+=3;goto B539cd3;
case 0x539cd4:c.instructions+=2;goto B539cd4;
case 0x539cd9:c.instructions+=1;goto B539cd9;
case 0x539cde:goto L539cde;
case 0x539ce0:c.instructions+=2;goto B539ce0;
case 0x539ce2:c.instructions+=1;goto B539ce2;
case 0x539ce4:goto L539ce4;
case 0x539ce5:c.instructions+=5;goto B539ce5;
case 0x539ce6:c.instructions+=4;goto B539ce6;
case 0x539ce8:c.instructions+=3;goto B539ce8;
case 0x539ce9:c.instructions+=2;goto B539ce9;
case 0x539cea:c.instructions+=1;goto B539cea;
case 0x539ceb:goto L539ceb;
case 0x539cec:c.instructions+=5;goto B539cec;
case 0x539ced:c.instructions+=4;goto B539ced;
case 0x539cef:c.instructions+=3;goto B539cef;
case 0x539cf0:c.instructions+=2;goto B539cf0;
case 0x539cf1:c.instructions+=1;goto B539cf1;
case 0x539d00:goto L539d00;
case 0x539d01:c.instructions+=17;goto B539d01;
case 0x539d03:c.instructions+=16;goto B539d03;
case 0x539d05:c.instructions+=15;goto B539d05;
case 0x539d0a:c.instructions+=14;goto B539d0a;
case 0x539d10:c.instructions+=13;goto B539d10;
case 0x539d11:c.instructions+=12;goto B539d11;
case 0x539d18:c.instructions+=11;goto B539d18;
case 0x539d1b:c.instructions+=10;goto B539d1b;
case 0x539d1c:c.instructions+=9;goto B539d1c;
case 0x539d1f:c.instructions+=8;goto B539d1f;
case 0x539d22:c.instructions+=7;goto B539d22;
case 0x539d23:c.instructions+=6;goto B539d23;
case 0x539d26:c.instructions+=5;goto B539d26;
case 0x539d29:c.instructions+=4;goto B539d29;
case 0x539d2c:c.instructions+=3;goto B539d2c;
case 0x539d31:c.instructions+=2;goto B539d31;
case 0x539d38:c.instructions+=1;goto B539d38;
case 0x539d3e:goto L539d3e;
case 0x539d40:c.instructions+=1;goto B539d40;
case 0x539d45:goto L539d45;
case 0x539d4b:c.instructions+=4;goto B539d4b;
case 0x539d4c:c.instructions+=3;goto B539d4c;
case 0x539d4d:c.instructions+=2;goto B539d4d;
case 0x539d4f:c.instructions+=1;goto B539d4f;
case 0x539d54:goto L539d54;
case 0x539d55:c.instructions+=1;goto B539d55;
case 0x539d5a:goto L539d5a;
case 0x539d5d:c.instructions+=4;goto B539d5d;
case 0x539d5f:c.instructions+=3;goto B539d5f;
case 0x539d60:c.instructions+=2;goto B539d60;
case 0x539d63:c.instructions+=1;goto B539d63;
case 0x539d65:goto L539d65;
case 0x539d67:c.instructions+=1;goto B539d67;
case 0x539d69:goto L539d69;
case 0x539d6c:c.instructions+=4;goto B539d6c;
case 0x539d6f:c.instructions+=3;goto B539d6f;
case 0x539d71:c.instructions+=2;goto B539d71;
case 0x539d78:c.instructions+=1;goto B539d78;
case 0x539d7a:goto L539d7a;
case 0x539d80:goto L539d80;
case 0x539d82:c.instructions+=6;goto B539d82;
case 0x539d84:c.instructions+=5;goto B539d84;
case 0x539d87:c.instructions+=4;goto B539d87;
case 0x539d89:c.instructions+=3;goto B539d89;
case 0x539d8a:c.instructions+=2;goto B539d8a;
case 0x539d8d:c.instructions+=1;goto B539d8d;
case 0x539d92:goto L539d92;
case 0x539d95:c.instructions+=4;goto B539d95;
case 0x539d98:c.instructions+=3;goto B539d98;
case 0x539d9b:c.instructions+=2;goto B539d9b;
case 0x539d9d:c.instructions+=1;goto B539d9d;
case 0x539d9f:goto L539d9f;
case 0x539da0:c.instructions+=7;goto B539da0;
case 0x539da2:c.instructions+=6;goto B539da2;
case 0x539da3:c.instructions+=5;goto B539da3;
case 0x539da6:c.instructions+=4;goto B539da6;
case 0x539dad:c.instructions+=3;goto B539dad;
case 0x539daf:c.instructions+=2;goto B539daf;
case 0x539db0:c.instructions+=1;goto B539db0;
case 0x539db1:goto L539db1;
case 0x539db3:c.instructions+=4;goto B539db3;
case 0x539db6:c.instructions+=3;goto B539db6;
case 0x539db7:c.instructions+=2;goto B539db7;
case 0x539dbc:c.instructions+=1;goto B539dbc;
case 0x539dc1:goto L539dc1;
case 0x539dc4:c.instructions+=7;goto B539dc4;
case 0x539dc6:c.instructions+=6;goto B539dc6;
case 0x539dc9:c.instructions+=5;goto B539dc9;
case 0x539dcc:c.instructions+=4;goto B539dcc;
case 0x539dcf:c.instructions+=3;goto B539dcf;
case 0x539dd1:c.instructions+=2;goto B539dd1;
case 0x539dd8:c.instructions+=1;goto B539dd8;
case 0x539dde:goto L539dde;
case 0x539de0:goto L539de0;
case 0x539de2:c.instructions+=6;goto B539de2;
case 0x539de4:c.instructions+=5;goto B539de4;
case 0x539de7:c.instructions+=4;goto B539de7;
case 0x539de9:c.instructions+=3;goto B539de9;
case 0x539dea:c.instructions+=2;goto B539dea;
case 0x539ded:c.instructions+=1;goto B539ded;
case 0x539df2:goto L539df2;
case 0x539df5:c.instructions+=4;goto B539df5;
case 0x539df8:c.instructions+=3;goto B539df8;
case 0x539dfb:c.instructions+=2;goto B539dfb;
case 0x539dfd:c.instructions+=1;goto B539dfd;
case 0x539dff:goto L539dff;
case 0x539e00:c.instructions+=7;goto B539e00;
case 0x539e02:c.instructions+=6;goto B539e02;
case 0x539e03:c.instructions+=5;goto B539e03;
case 0x539e06:c.instructions+=4;goto B539e06;
case 0x539e0d:c.instructions+=3;goto B539e0d;
case 0x539e0f:c.instructions+=2;goto B539e0f;
case 0x539e10:c.instructions+=1;goto B539e10;
case 0x539e11:goto L539e11;
case 0x539e16:c.instructions+=1;goto B539e16;
case 0x539e18:goto L539e18;
case 0x539e1d:c.instructions+=4;goto B539e1d;
case 0x539e1e:c.instructions+=3;goto B539e1e;
case 0x539e20:c.instructions+=2;goto B539e20;
case 0x539e22:c.instructions+=1;goto B539e22;
case 0x539e27:goto L539e27;
case 0x539e28:c.instructions+=1;goto B539e28;
case 0x539e2d:goto L539e2d;
case 0x539e30:c.instructions+=2;goto B539e30;
case 0x539e32:c.instructions+=1;goto B539e32;
case 0x539e34:goto L539e34;
case 0x539e36:c.instructions+=4;goto B539e36;
case 0x539e39:c.instructions+=3;goto B539e39;
case 0x539e3a:c.instructions+=2;goto B539e3a;
case 0x539e3f:c.instructions+=1;goto B539e3f;
case 0x539e44:goto L539e44;
case 0x539e47:c.instructions+=2;goto B539e47;
case 0x539e4a:c.instructions+=1;goto B539e4a;
case 0x539e4f:goto L539e4f;
case 0x539e54:c.instructions+=1;goto B539e54;
case 0x539e56:goto L539e56;
case 0x539e58:c.instructions+=3;goto B539e58;
case 0x539e59:c.instructions+=2;goto B539e59;
case 0x539e5e:c.instructions+=1;goto B539e5e;
case 0x539e63:goto L539e63;
case 0x539e65:c.instructions+=1;goto B539e65;
case 0x539e67:goto L539e67;
case 0x539e6d:c.instructions+=4;goto B539e6d;
case 0x539e6e:c.instructions+=3;goto B539e6e;
case 0x539e6f:c.instructions+=2;goto B539e6f;
case 0x539e71:c.instructions+=1;goto B539e71;
case 0x539e76:goto L539e76;
case 0x539e77:c.instructions+=1;goto B539e77;
case 0x539e7c:goto L539e7c;
case 0x539e7f:c.instructions+=2;goto B539e7f;
case 0x539e81:c.instructions+=1;goto B539e81;
case 0x539e83:goto L539e83;
case 0x539e86:c.instructions+=2;goto B539e86;
case 0x539e8d:c.instructions+=1;goto B539e8d;
case 0x539e92:goto L539e92;
case 0x539e93:c.instructions+=7;goto B539e93;
case 0x539e95:c.instructions+=6;goto B539e95;
case 0x539e96:c.instructions+=5;goto B539e96;
case 0x539e99:c.instructions+=4;goto B539e99;
case 0x539ea0:c.instructions+=3;goto B539ea0;
case 0x539ea2:c.instructions+=2;goto B539ea2;
case 0x539ea3:c.instructions+=1;goto B539ea3;
case 0x539ea4:goto L539ea4;
case 0x539ea6:c.instructions+=4;goto B539ea6;
case 0x539ea9:c.instructions+=3;goto B539ea9;
case 0x539eaa:c.instructions+=2;goto B539eaa;
case 0x539eaf:c.instructions+=1;goto B539eaf;
case 0x539eb4:goto L539eb4;
case 0x539eb7:c.instructions+=2;goto B539eb7;
case 0x539eba:c.instructions+=1;goto B539eba;
case 0x539ebc:goto L539ebc;
case 0x539ebf:c.instructions+=2;goto B539ebf;
case 0x539ec5:c.instructions+=1;goto B539ec5;
case 0x539ec7:goto L539ec7;
case 0x539ece:c.instructions+=1;goto B539ece;
case 0x539ed5:goto L539ed5;
case 0x539eda:c.instructions+=1;goto B539eda;
case 0x539edc:goto L539edc;
case 0x539ede:goto L539ede;
case 0x539ee0:c.instructions+=4;goto B539ee0;
case 0x539ee3:c.instructions+=3;goto B539ee3;
case 0x539ee4:c.instructions+=2;goto B539ee4;
case 0x539ee5:c.instructions+=1;goto B539ee5;
case 0x539eea:goto L539eea;
case 0x539eed:c.instructions+=1;goto B539eed;
case 0x539eef:goto L539eef;
case 0x539ef2:c.instructions+=3;goto B539ef2;
case 0x539ef9:c.instructions+=2;goto B539ef9;
case 0x539efc:c.instructions+=1;goto B539efc;
case 0x539f01:goto L539f01;
case 0x539f04:c.instructions+=7;goto B539f04;
case 0x539f05:c.instructions+=6;goto B539f05;
case 0x539f07:c.instructions+=5;goto B539f07;
case 0x539f08:c.instructions+=4;goto B539f08;
case 0x539f0f:c.instructions+=3;goto B539f0f;
case 0x539f11:c.instructions+=2;goto B539f11;
case 0x539f12:c.instructions+=1;goto B539f12;
case 0x539fb0:goto L539fb0;
case 0x539fb5:c.instructions+=1;goto B539fb5;
case 0x539fba:goto L539fba;
case 0x539fbd:c.instructions+=2;goto B539fbd;
case 0x539fbf:c.instructions+=1;goto B539fbf;
case 0x539fc1:goto L539fc1;
case 0x539fc6:c.instructions+=1;goto B539fc6;
case 0x539fcb:goto L539fcb;
case 0x539fce:c.instructions+=2;goto B539fce;
case 0x539fd0:c.instructions+=1;goto B539fd0;
case 0x539fd2:goto L539fd2;
case 0x539fd7:c.instructions+=1;goto B539fd7;
case 0x539fdc:goto L539fdc;
case 0x539fdf:c.instructions+=2;goto B539fdf;
case 0x539fe1:c.instructions+=1;goto B539fe1;
case 0x539fe3:goto L539fe3;
case 0x539fe8:c.instructions+=1;goto B539fe8;
case 0x539fe9:goto L539fe9;
case 0x539feb:c.instructions+=1;goto B539feb;
case 0x539ff0:goto L539ff0;
case 0x539ff3:c.instructions+=7;goto B539ff3;
case 0x539ff4:c.instructions+=6;goto B539ff4;
case 0x539ff5:c.instructions+=5;goto B539ff5;
case 0x539ff7:c.instructions+=4;goto B539ff7;
case 0x539ffa:c.instructions+=3;goto B539ffa;
case 0x539ffb:c.instructions+=2;goto B539ffb;
case 0x539ffe:c.instructions+=1;goto B539ffe;
default:missing_instruction(c.pc);}
B539002:L539002:{c.instructions+=3;NFSU2_TR(0x539002);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539003:{NFSU2_TR(0x539003);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539007:{NFSU2_TR(0x539007);
TAIL_STATIC(0x538d80u,538);
}
B53900c:L53900c:{c.instructions+=7;NFSU2_TR(0x53900c);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B539010:{NFSU2_TR(0x539010);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B539011:{NFSU2_TR(0x539011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539012:{NFSU2_TR(0x539012);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
w4(U+4,u32(0x1eull));
s4(u32(r4(U+0)),r4(U+4));
}
B539019:{NFSU2_TR(0x539019);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53901a:{NFSU2_TR(0x53901a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53901e:{NFSU2_TR(0x53901e);
TAIL_STATIC(0x538d80u,538);
}
B539023:L539023:{c.instructions+=4;NFSU2_TR(0x539023);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B539027:{NFSU2_TR(0x539027);
__builtin_memmove((R+8),(R+24),4);
}
B539029:{NFSU2_TR(0x539029);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B53902f:{NFSU2_TR(0x53902f);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L539036;}}
}
B539031:L539031:{c.instructions+=3;NFSU2_TR(0x539031);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B539032:{NFSU2_TR(0x539032);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffffcull))));
}
B539035:{NFSU2_TR(0x539035);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B539036:L539036:{c.instructions+=1;NFSU2_TR(0x539036);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53906b;}}
}
B539038:L539038:{c.instructions+=6;NFSU2_TR(0x539038);
__builtin_memmove((R+0),(R+24),4);
}
B53903a:{NFSU2_TR(0x53903a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B53903b:{NFSU2_TR(0x53903b);
w4(R+12,u32(0x64ull));
}
B539040:{NFSU2_TR(0x539040);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x539040);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x539040);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B539042:{NFSU2_TR(0x539042);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539044:{NFSU2_TR(0x539044);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539054;}}
}
B539046:L539046:{c.instructions+=6;NFSU2_TR(0x539046);
__builtin_memmove((R+0),(R+24),4);
}
B539048:{NFSU2_TR(0x539048);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B539049:{NFSU2_TR(0x539049);
w4(R+24,u32(0x190ull));
}
B53904e:{NFSU2_TR(0x53904e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x53904e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x53904e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B539050:{NFSU2_TR(0x539050);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539052:{NFSU2_TR(0x539052);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53906b;}}
}
B539054:L539054:{c.instructions+=7;NFSU2_TR(0x539054);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B539058:{NFSU2_TR(0x539058);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B539059:{NFSU2_TR(0x539059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53905a:{NFSU2_TR(0x53905a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
w4(U+4,u32(0x1dull));
s4(u32(r4(U+0)),r4(U+4));
}
B539061:{NFSU2_TR(0x539061);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539062:{NFSU2_TR(0x539062);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539066:{NFSU2_TR(0x539066);
TAIL_STATIC(0x538d80u,538);
}
B53906b:L53906b:{c.instructions+=7;NFSU2_TR(0x53906b);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B53906f:{NFSU2_TR(0x53906f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B539070:{NFSU2_TR(0x539070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539071:{NFSU2_TR(0x539071);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
w4(U+4,u32(0x1cull));
s4(u32(r4(U+0)),r4(U+4));
}
B539078:{NFSU2_TR(0x539078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539079:{NFSU2_TR(0x539079);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53907d:{NFSU2_TR(0x53907d);
TAIL_STATIC(0x538d80u,538);
}
B539082:L539082:{c.instructions+=3;NFSU2_TR(0x539082);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B539086:{NFSU2_TR(0x539086);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x76cull))));
}
B53908c:{NFSU2_TR(0x53908c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L539096;}}
}
B53908e:L53908e:{c.instructions+=2;NFSU2_TR(0x53908e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x76ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B539092:{NFSU2_TR(0x539092);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B539096:L539096:{c.instructions+=6;NFSU2_TR(0x539096);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B53909a:{NFSU2_TR(0x53909a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53909b:{NFSU2_TR(0x53909b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53909c:{NFSU2_TR(0x53909c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53909d:{NFSU2_TR(0x53909d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5390a1:{NFSU2_TR(0x5390a1);
TAIL_STATIC(0x538d80u,538);
}
B5390a6:L5390a6:{c.instructions+=4;NFSU2_TR(0x5390a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5390a7:{NFSU2_TR(0x5390a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5390a8:{NFSU2_TR(0x5390a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5390a9:{NFSU2_TR(0x5390a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5390e0:L5390e0:{c.instructions+=6;NFSU2_TR(0x5390e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5390e1:{NFSU2_TR(0x5390e1);
__builtin_memmove((R+24),(R+4),4);
}
B5390e3:{NFSU2_TR(0x5390e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5390e6:{NFSU2_TR(0x5390e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5390e9:{NFSU2_TR(0x5390e9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5390eb:{NFSU2_TR(0x5390eb);
if(r1(R+518)){{goto L539360;}}
}
B5390f1:L5390f1:{c.instructions+=3;NFSU2_TR(0x5390f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x147ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5390f7:{NFSU2_TR(0x5390f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5390f9:{NFSU2_TR(0x5390f9);
if(r1(R+518)){{goto L539106;}}
}
B5390fb:L5390fb:{c.instructions+=2;NFSU2_TR(0x5390fb);
__builtin_memmove((R+4),(R+24),4);
}
B5390fd:{NFSU2_TR(0x5390fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539102ull));
TAIL_STATIC(0x52fea0u,52f);
}
B539102:L539102:{c.instructions+=2;NFSU2_TR(0x539102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539103:{NFSU2_TR(0x539103);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539106:L539106:{c.instructions+=7;NFSU2_TR(0x539106);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53910a:{NFSU2_TR(0x53910a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53910b:{NFSU2_TR(0x53910b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53910c:{NFSU2_TR(0x53910c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53910f:{NFSU2_TR(0x53910f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B539112:{NFSU2_TR(0x539112);
__builtin_memmove((R+4),(R+28),4);
}
B539114:{NFSU2_TR(0x539114);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539228;}}
}
B53911a:L53911a:{c.instructions+=2;NFSU2_TR(0x53911a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53911c:{NFSU2_TR(0x53911c);
if(r1(R+518)){{goto L53914b;}}
}
B53911e:L53911e:{c.instructions+=3;NFSU2_TR(0x53911e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539121:{NFSU2_TR(0x539121);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539123:{NFSU2_TR(0x539123);
if(r1(R+518)){{goto L53912a;}}
}
B539125:L539125:{c.instructions+=2;NFSU2_TR(0x539125);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B539128:{NFSU2_TR(0x539128);
{goto L53912c;}
}
B53912a:L53912a:{c.instructions+=1;NFSU2_TR(0x53912a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53912c:L53912c:{c.instructions+=2;NFSU2_TR(0x53912c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53912e:{NFSU2_TR(0x53912e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53914b;}}
}
B539130:L539130:{c.instructions+=3;NFSU2_TR(0x539130);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539133:{NFSU2_TR(0x539133);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539135:{NFSU2_TR(0x539135);
if(r1(R+518)){{goto L53914b;}}
}
B539137:L539137:{c.instructions+=5;NFSU2_TR(0x539137);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539138:{NFSU2_TR(0x539138);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53913b:{NFSU2_TR(0x53913b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53913c:{NFSU2_TR(0x53913c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B53913e:{NFSU2_TR(0x53913e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539143ull));
TAIL_STATIC(0x52cec0u,52c);
}
B539143:L539143:{c.instructions+=2;NFSU2_TR(0x539143);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B539146:{NFSU2_TR(0x539146);
{goto L5392e4;}
}
B53914b:L53914b:{c.instructions+=2;NFSU2_TR(0x53914b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53914d:{NFSU2_TR(0x53914d);
if(r1(R+518)){{goto L53920c;}}
}
B539153:L539153:{c.instructions+=3;NFSU2_TR(0x539153);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B539156:{NFSU2_TR(0x539156);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539158:{NFSU2_TR(0x539158);
if(r1(R+518)){{goto L53915f;}}
}
B53915a:L53915a:{c.instructions+=2;NFSU2_TR(0x53915a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B53915d:{NFSU2_TR(0x53915d);
{goto L539161;}
}
B53915f:L53915f:{c.instructions+=1;NFSU2_TR(0x53915f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B539161:L539161:{c.instructions+=2;NFSU2_TR(0x539161);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B539163:{NFSU2_TR(0x539163);
if(r1(R+518)){{goto L5391ab;}}
}
B539165:L539165:{c.instructions+=3;NFSU2_TR(0x539165);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53916b:{NFSU2_TR(0x53916b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B53916c:{NFSU2_TR(0x53916c);
__builtin_memmove((R+16),(R+16),4);
}
B539170:L539170:{c.instructions+=3;NFSU2_TR(0x539170);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B539173:{NFSU2_TR(0x539173);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539175:{NFSU2_TR(0x539175);
if(r1(R+518)){{goto L53917c;}}
}
B539177:L539177:{c.instructions+=2;NFSU2_TR(0x539177);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B53917a:{NFSU2_TR(0x53917a);
{goto L53917e;}
}
B53917c:L53917c:{c.instructions+=1;NFSU2_TR(0x53917c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B53917e:L53917e:{c.instructions+=4;NFSU2_TR(0x53917e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539184:{NFSU2_TR(0x539184);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B539185:{NFSU2_TR(0x539185);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B539187:{NFSU2_TR(0x539187);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L53918b;}}
}
B539189:L539189:{c.instructions+=1;NFSU2_TR(0x539189);
__builtin_memmove((R+0),(R+4),4);
}
B53918b:L53918b:{c.instructions+=3;NFSU2_TR(0x53918b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53918d:{NFSU2_TR(0x53918d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539193:{NFSU2_TR(0x539193);
if(r1(R+518)){{goto L5391ab;}}
}
B539195:L539195:{c.instructions+=3;NFSU2_TR(0x539195);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B539198:{NFSU2_TR(0x539198);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53919a:{NFSU2_TR(0x53919a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5391ab;}}
}
B53919c:L53919c:{c.instructions+=2;NFSU2_TR(0x53919c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53919e:{NFSU2_TR(0x53919e);
if(r1(R+518)){{goto L5391a5;}}
}
B5391a0:L5391a0:{c.instructions+=2;NFSU2_TR(0x5391a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5391a3:{NFSU2_TR(0x5391a3);
{goto L5391a7;}
}
B5391a5:L5391a5:{c.instructions+=1;NFSU2_TR(0x5391a5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5391a7:L5391a7:{c.instructions+=2;NFSU2_TR(0x5391a7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5391a9:{NFSU2_TR(0x5391a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539170u);}goto L539170;}}
}
B5391ab:L5391ab:{c.instructions+=4;NFSU2_TR(0x5391ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5391ae:{NFSU2_TR(0x5391ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5391af:{NFSU2_TR(0x5391af);
__builtin_memmove((R+4),(R+24),4);
}
B5391b1:{NFSU2_TR(0x5391b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5391b6ull));
TAIL_STATIC(0x520020u,520);
}
B5391b6:L5391b6:{c.instructions+=6;NFSU2_TR(0x5391b6);
__builtin_memmove((R+12),(R+0),4);
}
B5391b8:{NFSU2_TR(0x5391b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5391be:{NFSU2_TR(0x5391be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5391bf:{NFSU2_TR(0x5391bf);
__builtin_memmove((R+4),(R+24),4);
}
B5391c1:{NFSU2_TR(0x5391c1);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B5391c3:{NFSU2_TR(0x5391c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5391c8ull));
TAIL_STATIC(0x520020u,520);
}
B5391c8:L5391c8:{c.instructions+=2;NFSU2_TR(0x5391c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5391ca:{NFSU2_TR(0x5391ca);
if(r1(R+512)){{goto L53920c;}}
}
B5391cc:L5391cc:{c.instructions+=1;NFSU2_TR(0x5391cc);
__builtin_memmove((R+16),(R+16),4);
}
B5391d0:L5391d0:{c.instructions+=4;NFSU2_TR(0x5391d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5391d3:{NFSU2_TR(0x5391d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5391d6:{NFSU2_TR(0x5391d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5391d8:{NFSU2_TR(0x5391d8);
if(r1(R+518)){{goto L5391df;}}
}
B5391da:L5391da:{c.instructions+=2;NFSU2_TR(0x5391da);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5391dd:{NFSU2_TR(0x5391dd);
{goto L5391e1;}
}
B5391df:L5391df:{c.instructions+=1;NFSU2_TR(0x5391df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5391e1:L5391e1:{c.instructions+=3;NFSU2_TR(0x5391e1);
__builtin_memmove((R+4),(R+24),4);
}
B5391e3:{NFSU2_TR(0x5391e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5391e6:{NFSU2_TR(0x5391e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5391ebull));
TAIL_STATIC(0x52fdb0u,52f);
}
B5391eb:L5391eb:{c.instructions+=4;NFSU2_TR(0x5391eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5391ee:{NFSU2_TR(0x5391ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5391ef:{NFSU2_TR(0x5391ef);
__builtin_memmove((R+4),(R+24),4);
}
B5391f1:{NFSU2_TR(0x5391f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5391f6ull));
TAIL_STATIC(0x520020u,520);
}
B5391f6:L5391f6:{c.instructions+=6;NFSU2_TR(0x5391f6);
__builtin_memmove((R+12),(R+0),4);
}
B5391f8:{NFSU2_TR(0x5391f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5391fe:{NFSU2_TR(0x5391fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5391ff:{NFSU2_TR(0x5391ff);
__builtin_memmove((R+4),(R+24),4);
}
B539201:{NFSU2_TR(0x539201);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B539203:{NFSU2_TR(0x539203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539208ull));
TAIL_STATIC(0x520020u,520);
}
B539208:L539208:{c.instructions+=2;NFSU2_TR(0x539208);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B53920a:{NFSU2_TR(0x53920a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5391d0u);}goto L5391d0;}}
}
B53920c:L53920c:{c.instructions+=3;NFSU2_TR(0x53920c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539212:{NFSU2_TR(0x539212);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539214:{NFSU2_TR(0x539214);
if(r1(R+518)){{goto L5392e4;}}
}
B53921a:L53921a:{c.instructions+=2;NFSU2_TR(0x53921a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53921b:{NFSU2_TR(0x53921b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539220ull));
TAIL_STATIC(0x50ca50u,50c);
}
B539220:L539220:{c.instructions+=2;NFSU2_TR(0x539220);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B539223:{NFSU2_TR(0x539223);
{goto L5392e4;}
}
B539228:L539228:{c.instructions+=2;NFSU2_TR(0x539228);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53922a:{NFSU2_TR(0x53922a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539242;}}
}
B53922c:L53922c:{c.instructions+=3;NFSU2_TR(0x53922c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53922f:{NFSU2_TR(0x53922f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539231:{NFSU2_TR(0x539231);
if(r1(R+518)){{goto L53923b;}}
}
B539233:L539233:{c.instructions+=2;NFSU2_TR(0x539233);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B539236:{NFSU2_TR(0x539236);
{goto L5392e4;}
}
B53923b:L53923b:{c.instructions+=2;NFSU2_TR(0x53923b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B53923d:{NFSU2_TR(0x53923d);
{goto L5392e4;}
}
B539242:L539242:{c.instructions+=3;NFSU2_TR(0x539242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B539244:{NFSU2_TR(0x539244);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539246:{NFSU2_TR(0x539246);
if(r1(R+518)){{goto L53924d;}}
}
B539248:L539248:{c.instructions+=2;NFSU2_TR(0x539248);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B53924b:{NFSU2_TR(0x53924b);
{goto L53924f;}
}
B53924d:L53924d:{c.instructions+=1;NFSU2_TR(0x53924d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53924f:L53924f:{c.instructions+=2;NFSU2_TR(0x53924f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B539251:{NFSU2_TR(0x539251);
if(r1(R+518)){{goto L539292;}}
}
B539253:L539253:{c.instructions+=3;NFSU2_TR(0x539253);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B539256:{NFSU2_TR(0x539256);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539258:{NFSU2_TR(0x539258);
if(r1(R+518)){{goto L53925f;}}
}
B53925a:L53925a:{c.instructions+=2;NFSU2_TR(0x53925a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B53925d:{NFSU2_TR(0x53925d);
{goto L539261;}
}
B53925f:L53925f:{c.instructions+=1;NFSU2_TR(0x53925f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B539261:L539261:{c.instructions+=4;NFSU2_TR(0x539261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539267:{NFSU2_TR(0x539267);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B539268:{NFSU2_TR(0x539268);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53926b:{NFSU2_TR(0x53926b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L539272;}}
}
B53926d:L53926d:{c.instructions+=1;NFSU2_TR(0x53926d);
w4(R+0,u32(0x1ull));
}
B539272:L539272:{c.instructions+=3;NFSU2_TR(0x539272);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539274:{NFSU2_TR(0x539274);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53927a:{NFSU2_TR(0x53927a);
if(r1(R+518)){{goto L539292;}}
}
B53927c:L53927c:{c.instructions+=3;NFSU2_TR(0x53927c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53927f:{NFSU2_TR(0x53927f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539281:{NFSU2_TR(0x539281);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539292;}}
}
B539283:L539283:{c.instructions+=2;NFSU2_TR(0x539283);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539285:{NFSU2_TR(0x539285);
if(r1(R+518)){{goto L53928c;}}
}
B539287:L539287:{c.instructions+=2;NFSU2_TR(0x539287);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B53928a:{NFSU2_TR(0x53928a);
{goto L53928e;}
}
B53928c:L53928c:{c.instructions+=1;NFSU2_TR(0x53928c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53928e:L53928e:{c.instructions+=2;NFSU2_TR(0x53928e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B539290:{NFSU2_TR(0x539290);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539253u);}goto L539253;}}
}
B539292:L539292:{c.instructions+=3;NFSU2_TR(0x539292);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539293:{NFSU2_TR(0x539293);
__builtin_memmove((R+4),(R+24),4);
}
B539295:{NFSU2_TR(0x539295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53929aull));
TAIL_STATIC(0x520020u,520);
}
B53929a:L53929a:{c.instructions+=5;NFSU2_TR(0x53929a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53929d:{NFSU2_TR(0x53929d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53929e:{NFSU2_TR(0x53929e);
__builtin_memmove((R+4),(R+24),4);
}
B5392a0:{NFSU2_TR(0x5392a0);
__builtin_memmove((R+12),(R+0),4);
}
B5392a2:{NFSU2_TR(0x5392a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5392a7ull));
TAIL_STATIC(0x520020u,520);
}
B5392a7:L5392a7:{c.instructions+=2;NFSU2_TR(0x5392a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B5392a9:{NFSU2_TR(0x5392a9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5392e4;}}
}
B5392ab:L5392ab:{c.instructions+=1;NFSU2_TR(0x5392ab);
{goto L5392b0;}
}
B5392b0:L5392b0:{c.instructions+=4;NFSU2_TR(0x5392b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5392b3:{NFSU2_TR(0x5392b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5392b6:{NFSU2_TR(0x5392b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5392b8:{NFSU2_TR(0x5392b8);
if(r1(R+518)){{goto L5392bf;}}
}
B5392ba:L5392ba:{c.instructions+=2;NFSU2_TR(0x5392ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5392bd:{NFSU2_TR(0x5392bd);
{goto L5392c1;}
}
B5392bf:L5392bf:{c.instructions+=1;NFSU2_TR(0x5392bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5392c1:L5392c1:{c.instructions+=3;NFSU2_TR(0x5392c1);
__builtin_memmove((R+4),(R+24),4);
}
B5392c3:{NFSU2_TR(0x5392c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5392c6:{NFSU2_TR(0x5392c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5392cbull));
TAIL_STATIC(0x52fdb0u,52f);
}
B5392cb:L5392cb:{c.instructions+=3;NFSU2_TR(0x5392cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5392cc:{NFSU2_TR(0x5392cc);
__builtin_memmove((R+4),(R+24),4);
}
B5392ce:{NFSU2_TR(0x5392ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5392d3ull));
TAIL_STATIC(0x520020u,520);
}
B5392d3:L5392d3:{c.instructions+=5;NFSU2_TR(0x5392d3);
__builtin_memmove((R+12),(R+0),4);
}
B5392d5:{NFSU2_TR(0x5392d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5392d8:{NFSU2_TR(0x5392d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5392d9:{NFSU2_TR(0x5392d9);
__builtin_memmove((R+4),(R+24),4);
}
B5392db:{NFSU2_TR(0x5392db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5392e0ull));
TAIL_STATIC(0x520020u,520);
}
B5392e0:L5392e0:{c.instructions+=2;NFSU2_TR(0x5392e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B5392e2:{NFSU2_TR(0x5392e2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5392b0u);}goto L5392b0;}}
}
B5392e4:L5392e4:{c.instructions+=3;NFSU2_TR(0x5392e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5392e7:{NFSU2_TR(0x5392e7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5392e9:{NFSU2_TR(0x5392e9);
if(r1(R+518)){{goto L53932f;}}
}
B5392eb:L5392eb:{c.instructions+=2;NFSU2_TR(0x5392eb);
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
B5392ed:{NFSU2_TR(0x5392ed);
if(r1(R+518)){{goto L5392f4;}}
}
B5392ef:L5392ef:{c.instructions+=2;NFSU2_TR(0x5392ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5392f1:{NFSU2_TR(0x5392f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5392f4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5392f4:L5392f4:{c.instructions+=2;NFSU2_TR(0x5392f4);
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
B5392f6:{NFSU2_TR(0x5392f6);
if(r1(R+518)){{goto L539303;}}
}
B5392f8:L5392f8:{c.instructions+=5;NFSU2_TR(0x5392f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5392fb:{NFSU2_TR(0x5392fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5392fd:{NFSU2_TR(0x5392fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5392fe:{NFSU2_TR(0x5392fe);
__builtin_memmove((R+4),(R+28),4);
}
B539300:{NFSU2_TR(0x539300);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539303ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B539303:L539303:{c.instructions+=4;NFSU2_TR(0x539303);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x146ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B539309:{NFSU2_TR(0x539309);
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
B53930b:{NFSU2_TR(0x53930b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53930e:{NFSU2_TR(0x53930e);
if(r1(R+518)){{goto L53935e;}}
}
B539310:L539310:{c.instructions+=2;NFSU2_TR(0x539310);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539312:{NFSU2_TR(0x539312);
if(r1(R+518)){{goto L53932f;}}
}
B539314:L539314:{c.instructions+=3;NFSU2_TR(0x539314);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539315:{NFSU2_TR(0x539315);
__builtin_memmove((R+4),(R+24),4);
}
B539317:{NFSU2_TR(0x539317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53931cull));
TAIL_STATIC(0x520020u,520);
}
B53931c:L53931c:{c.instructions+=7;NFSU2_TR(0x53931c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B539322:{NFSU2_TR(0x539322);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539323:{NFSU2_TR(0x539323);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B539324:{NFSU2_TR(0x539324);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539325:{NFSU2_TR(0x539325);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539327:{NFSU2_TR(0x539327);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B53932a:{NFSU2_TR(0x53932a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53932full));
TAIL_STATIC(0x538080u,538);
}
B53932f:L53932f:{c.instructions+=3;NFSU2_TR(0x53932f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x146ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B539335:{NFSU2_TR(0x539335);
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
B539337:{NFSU2_TR(0x539337);
if(r1(R+518)){{goto L53935e;}}
}
B539339:L539339:{c.instructions+=3;NFSU2_TR(0x539339);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53933f:{NFSU2_TR(0x53933f);
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
B539341:{NFSU2_TR(0x539341);
if(r1(R+518)){{goto L53935e;}}
}
B539343:L539343:{c.instructions+=3;NFSU2_TR(0x539343);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539345:{NFSU2_TR(0x539345);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539346:{NFSU2_TR(0x539346);
if(r1(R+518)){{goto L539356;}}
}
B539348:L539348:{c.instructions+=1;NFSU2_TR(0x539348);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53934dull));
TAIL_STATIC(0x50ca50u,50c);
}
B53934d:L53934d:{c.instructions+=5;NFSU2_TR(0x53934d);
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
B539350:{NFSU2_TR(0x539350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B539351:{NFSU2_TR(0x539351);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539352:{NFSU2_TR(0x539352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539353:{NFSU2_TR(0x539353);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539356:L539356:{c.instructions+=1;NFSU2_TR(0x539356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53935bull));
TAIL_STATIC(0x50ca00u,50c);
}
B53935b:L53935b:{c.instructions+=1;NFSU2_TR(0x53935b);
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
B53935e:L53935e:{c.instructions+=2;NFSU2_TR(0x53935e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53935f:{NFSU2_TR(0x53935f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539360:L539360:{c.instructions+=2;NFSU2_TR(0x539360);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539361:{NFSU2_TR(0x539361);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539370:L539370:{c.instructions+=8;NFSU2_TR(0x539370);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B539373:{NFSU2_TR(0x539373);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539374:{NFSU2_TR(0x539374);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539375:{NFSU2_TR(0x539375);
__builtin_memmove((R+24),(R+4),4);
}
B539377:{NFSU2_TR(0x539377);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53937a:{NFSU2_TR(0x53937a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+20),(U+0),4);
}
B53937d:{NFSU2_TR(0x53937d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53937f:{NFSU2_TR(0x53937f);
if(r1(R+518)){{goto L539639;}}
}
B539385:L539385:{c.instructions+=3;NFSU2_TR(0x539385);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x147ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53938b:{NFSU2_TR(0x53938b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53938d:{NFSU2_TR(0x53938d);
if(r1(R+518)){{goto L53939c;}}
}
B53938f:L53938f:{c.instructions+=1;NFSU2_TR(0x53938f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539394ull));
TAIL_STATIC(0x52fea0u,52f);
}
B539394:L539394:{c.instructions+=4;NFSU2_TR(0x539394);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539395:{NFSU2_TR(0x539395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B539396:{NFSU2_TR(0x539396);
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
B539399:{NFSU2_TR(0x539399);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53939c:L53939c:{c.instructions+=9;NFSU2_TR(0x53939c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53939f:{NFSU2_TR(0x53939f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5393a0:{NFSU2_TR(0x5393a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5393a1:{NFSU2_TR(0x5393a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5393a4:{NFSU2_TR(0x5393a4);
__builtin_memmove((R+4),(R+28),4);
}
B5393a6:{NFSU2_TR(0x5393a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5393a7:{NFSU2_TR(0x5393a7);
__builtin_memmove((R+4),(R+24),4);
}
B5393a9:{NFSU2_TR(0x5393a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5393ad:{NFSU2_TR(0x5393ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5393b2ull));
TAIL_STATIC(0x520020u,520);
}
B5393b2:L5393b2:{c.instructions+=5;NFSU2_TR(0x5393b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5393b6:{NFSU2_TR(0x5393b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5393b7:{NFSU2_TR(0x5393b7);
__builtin_memmove((R+4),(R+24),4);
}
B5393b9:{NFSU2_TR(0x5393b9);
__builtin_memmove((R+12),(R+0),4);
}
B5393bb:{NFSU2_TR(0x5393bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5393c0ull));
TAIL_STATIC(0x520020u,520);
}
B5393c0:L5393c0:{c.instructions+=5;NFSU2_TR(0x5393c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5393c4:{NFSU2_TR(0x5393c4);
w4(R+8,u32(0x1ull));
}
B5393c9:{NFSU2_TR(0x5393c9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5393cb:{NFSU2_TR(0x5393cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5393cf:{NFSU2_TR(0x5393cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5394d0;}}
}
B5393d5:L5393d5:{c.instructions+=3;NFSU2_TR(0x5393d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5393db:{NFSU2_TR(0x5393db);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B5393dd:{NFSU2_TR(0x5393dd);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5393e1:L5393e1:{c.instructions+=2;NFSU2_TR(0x5393e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5393e3:{NFSU2_TR(0x5393e3);
if(r1(R+518)){{goto L539442;}}
}
B5393e5:L5393e5:{c.instructions+=3;NFSU2_TR(0x5393e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5393e8:{NFSU2_TR(0x5393e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5393ea:{NFSU2_TR(0x5393ea);
if(r1(R+518)){{goto L5393f1;}}
}
B5393ec:L5393ec:{c.instructions+=2;NFSU2_TR(0x5393ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5393ef:{NFSU2_TR(0x5393ef);
{goto L5393f3;}
}
B5393f1:L5393f1:{c.instructions+=1;NFSU2_TR(0x5393f1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5393f3:L5393f3:{c.instructions+=2;NFSU2_TR(0x5393f3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5393f5:{NFSU2_TR(0x5393f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5393fe;}}
}
B5393f7:L5393f7:{c.instructions+=3;NFSU2_TR(0x5393f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5393fa:{NFSU2_TR(0x5393fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5393fc:{NFSU2_TR(0x5393fc);
if(r1(R+518)){{goto L539442;}}
}
B5393fe:L5393fe:{c.instructions+=2;NFSU2_TR(0x5393fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539400:{NFSU2_TR(0x539400);
if(r1(R+518)){{goto L539407;}}
}
B539402:L539402:{c.instructions+=2;NFSU2_TR(0x539402);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B539405:{NFSU2_TR(0x539405);
{goto L539409;}
}
B539407:L539407:{c.instructions+=1;NFSU2_TR(0x539407);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B539409:L539409:{c.instructions+=2;NFSU2_TR(0x539409);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53940b:{NFSU2_TR(0x53940b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539414;}}
}
B53940d:L53940d:{c.instructions+=3;NFSU2_TR(0x53940d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539410:{NFSU2_TR(0x539410);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539412:{NFSU2_TR(0x539412);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539461;}}
}
B539414:L539414:{c.instructions+=3;NFSU2_TR(0x539414);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B539417:{NFSU2_TR(0x539417);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539419:{NFSU2_TR(0x539419);
if(r1(R+518)){{goto L539420;}}
}
B53941b:L53941b:{c.instructions+=2;NFSU2_TR(0x53941b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B53941e:{NFSU2_TR(0x53941e);
{goto L539422;}
}
B539420:L539420:{c.instructions+=1;NFSU2_TR(0x539420);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B539422:L539422:{c.instructions+=7;NFSU2_TR(0x539422);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539428:{NFSU2_TR(0x539428);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53942e:{NFSU2_TR(0x53942e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B53942f:{NFSU2_TR(0x53942f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B539430:{NFSU2_TR(0x539430);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B539432:{NFSU2_TR(0x539432);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539438:{NFSU2_TR(0x539438);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L539454;}}
}
B53943a:L53943a:{c.instructions+=2;NFSU2_TR(0x53943a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539440:{NFSU2_TR(0x539440);
{goto L539454;}
}
B539442:L539442:{c.instructions+=3;NFSU2_TR(0x539442);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539445:{NFSU2_TR(0x539445);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539447:{NFSU2_TR(0x539447);
if(r1(R+518)){{goto L53944e;}}
}
B539449:L539449:{c.instructions+=2;NFSU2_TR(0x539449);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B53944c:{NFSU2_TR(0x53944c);
{goto L539450;}
}
B53944e:L53944e:{c.instructions+=1;NFSU2_TR(0x53944e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B539450:L539450:{c.instructions+=1;NFSU2_TR(0x539450);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539454:L539454:{c.instructions+=2;NFSU2_TR(0x539454);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539456:{NFSU2_TR(0x539456);
if(r1(R+518)){{goto L539481;}}
}
B539458:L539458:{c.instructions+=3;NFSU2_TR(0x539458);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53945b:{NFSU2_TR(0x53945b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53945d:{NFSU2_TR(0x53945d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5393e1u);}goto L5393e1;}}
}
B53945f:L53945f:{c.instructions+=1;NFSU2_TR(0x53945f);
{goto L539481;}
}
B539461:L539461:{c.instructions+=5;NFSU2_TR(0x539461);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B539467:{NFSU2_TR(0x539467);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53946a:{NFSU2_TR(0x53946a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B53946c:{NFSU2_TR(0x53946c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53946e:{NFSU2_TR(0x53946e);
if(r1(R+518)){{goto L539481;}}
}
B539470:L539470:{c.instructions+=2;NFSU2_TR(0x539470);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539472:{NFSU2_TR(0x539472);
if(r1(R+518)){{goto L539481;}}
}
B539474:L539474:{c.instructions+=5;NFSU2_TR(0x539474);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B539477:{NFSU2_TR(0x539477);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53947a:{NFSU2_TR(0x53947a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53947b:{NFSU2_TR(0x53947b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53947c:{NFSU2_TR(0x53947c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539481ull));
TAIL_STATIC(0x52ce40u,52c);
}
B539481:L539481:{c.instructions+=3;NFSU2_TR(0x539481);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539482:{NFSU2_TR(0x539482);
__builtin_memmove((R+4),(R+24),4);
}
B539484:{NFSU2_TR(0x539484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539489ull));
TAIL_STATIC(0x520020u,520);
}
B539489:L539489:{c.instructions+=6;NFSU2_TR(0x539489);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53948f:{NFSU2_TR(0x53948f);
__builtin_memmove((R+4),(R+0),4);
}
B539491:{NFSU2_TR(0x539491);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B539493:{NFSU2_TR(0x539493);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B539497:{NFSU2_TR(0x539497);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B539499:{NFSU2_TR(0x539499);
if(r1(R+512)){{goto L5395a6;}}
}
B53949f:L53949f:{c.instructions+=4;NFSU2_TR(0x53949f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B5394a1:{NFSU2_TR(0x5394a1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5394a3:{NFSU2_TR(0x5394a3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5394a5:{NFSU2_TR(0x5394a5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5395a6;}}
}
B5394ab:L5394ab:{c.instructions+=1;NFSU2_TR(0x5394ab);
{goto L5394b0;}
}
B5394b0:L5394b0:{c.instructions+=4;NFSU2_TR(0x5394b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5394b4:{NFSU2_TR(0x5394b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5394b7:{NFSU2_TR(0x5394b7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5394b9:{NFSU2_TR(0x5394b9);
if(r1(R+518)){{goto L5394c4;}}
}
B5394bb:L5394bb:{c.instructions+=3;NFSU2_TR(0x5394bb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5394be:{NFSU2_TR(0x5394be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5394c2:{NFSU2_TR(0x5394c2);
{goto L5394c8;}
}
B5394c4:L5394c4:{c.instructions+=1;NFSU2_TR(0x5394c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5394c8:L5394c8:{c.instructions+=2;NFSU2_TR(0x5394c8);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5394c9:{NFSU2_TR(0x5394c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5394b0u);}goto L5394b0;}}
}
B5394cb:L5394cb:{c.instructions+=1;NFSU2_TR(0x5394cb);
{goto L5395a6;}
}
B5394d0:L5394d0:{c.instructions+=2;NFSU2_TR(0x5394d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5394d2:{NFSU2_TR(0x5394d2);
if(r1(R+518)){{goto L539533;}}
}
B5394d4:L5394d4:{c.instructions+=3;NFSU2_TR(0x5394d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5394d7:{NFSU2_TR(0x5394d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5394d9:{NFSU2_TR(0x5394d9);
if(r1(R+518)){{goto L5394e0;}}
}
B5394db:L5394db:{c.instructions+=2;NFSU2_TR(0x5394db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5394de:{NFSU2_TR(0x5394de);
{goto L5394e2;}
}
B5394e0:L5394e0:{c.instructions+=1;NFSU2_TR(0x5394e0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5394e2:L5394e2:{c.instructions+=2;NFSU2_TR(0x5394e2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5394e4:{NFSU2_TR(0x5394e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5394ed;}}
}
B5394e6:L5394e6:{c.instructions+=3;NFSU2_TR(0x5394e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5394e9:{NFSU2_TR(0x5394e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5394eb:{NFSU2_TR(0x5394eb);
if(r1(R+518)){{goto L539533;}}
}
B5394ed:L5394ed:{c.instructions+=2;NFSU2_TR(0x5394ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5394ef:{NFSU2_TR(0x5394ef);
if(r1(R+518)){{goto L5394f6;}}
}
B5394f1:L5394f1:{c.instructions+=2;NFSU2_TR(0x5394f1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5394f4:{NFSU2_TR(0x5394f4);
{goto L5394f8;}
}
B5394f6:L5394f6:{c.instructions+=1;NFSU2_TR(0x5394f6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5394f8:L5394f8:{c.instructions+=2;NFSU2_TR(0x5394f8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5394fa:{NFSU2_TR(0x5394fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539503;}}
}
B5394fc:L5394fc:{c.instructions+=3;NFSU2_TR(0x5394fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5394ff:{NFSU2_TR(0x5394ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539501:{NFSU2_TR(0x539501);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539582;}}
}
B539503:L539503:{c.instructions+=3;NFSU2_TR(0x539503);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B539506:{NFSU2_TR(0x539506);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539508:{NFSU2_TR(0x539508);
if(r1(R+518)){{goto L53950f;}}
}
B53950a:L53950a:{c.instructions+=2;NFSU2_TR(0x53950a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B53950d:{NFSU2_TR(0x53950d);
{goto L539511;}
}
B53950f:L53950f:{c.instructions+=1;NFSU2_TR(0x53950f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B539511:L539511:{c.instructions+=6;NFSU2_TR(0x539511);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B539517:{NFSU2_TR(0x539517);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B539518:{NFSU2_TR(0x539518);
__builtin_memmove((R+0),(R+4),4);
}
B53951a:{NFSU2_TR(0x53951a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B53951c:{NFSU2_TR(0x53951c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539522:{NFSU2_TR(0x539522);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L53956d;}}
}
B539524:L539524:{c.instructions+=4;NFSU2_TR(0x539524);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53952a:{NFSU2_TR(0x53952a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B53952b:{NFSU2_TR(0x53952b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539531:{NFSU2_TR(0x539531);
{goto L53956d;}
}
B539533:L539533:{c.instructions+=3;NFSU2_TR(0x539533);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539536:{NFSU2_TR(0x539536);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539538:{NFSU2_TR(0x539538);
if(r1(R+518)){{goto L53953f;}}
}
B53953a:L53953a:{c.instructions+=2;NFSU2_TR(0x53953a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B53953d:{NFSU2_TR(0x53953d);
{goto L539541;}
}
B53953f:L53953f:{c.instructions+=1;NFSU2_TR(0x53953f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B539541:L539541:{c.instructions+=7;NFSU2_TR(0x539541);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B539547:{NFSU2_TR(0x539547);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53954d:{NFSU2_TR(0x53954d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B53954f:{NFSU2_TR(0x53954f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B539550:{NFSU2_TR(0x539550);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539551:{NFSU2_TR(0x539551);
__builtin_memmove((R+4),(R+20),4);
}
B539553:{NFSU2_TR(0x539553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539558ull));
TAIL_STATIC(0x43be60u,43b);
}
B539558:L539558:{c.instructions+=2;NFSU2_TR(0x539558);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53955a:{NFSU2_TR(0x53955a);
if(r1(R+518)){{goto L539565;}}
}
B53955c:L53955c:{c.instructions+=3;NFSU2_TR(0x53955c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B53955f:{NFSU2_TR(0x53955f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539563:{NFSU2_TR(0x539563);
{goto L53956d;}
}
B539565:L539565:{c.instructions+=1;NFSU2_TR(0x539565);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53956d:L53956d:{c.instructions+=2;NFSU2_TR(0x53956d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53956f:{NFSU2_TR(0x53956f);
if(r1(R+518)){{goto L539594;}}
}
B539571:L539571:{c.instructions+=3;NFSU2_TR(0x539571);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B539574:{NFSU2_TR(0x539574);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539576:{NFSU2_TR(0x539576);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539594;}}
}
B539578:L539578:{c.instructions+=2;NFSU2_TR(0x539578);
w4(R+8,u32(0x1ull));
}
B53957d:{NFSU2_TR(0x53957d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5394d0u);}goto L5394d0;}
}
B539582:L539582:{c.instructions+=6;NFSU2_TR(0x539582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B539585:{NFSU2_TR(0x539585);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539588:{NFSU2_TR(0x539588);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539589:{NFSU2_TR(0x539589);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53958a:{NFSU2_TR(0x53958a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B53958c:{NFSU2_TR(0x53958c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539591ull));
TAIL_STATIC(0x52cec0u,52c);
}
B539591:L539591:{c.instructions+=1;NFSU2_TR(0x539591);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B539594:L539594:{c.instructions+=3;NFSU2_TR(0x539594);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539595:{NFSU2_TR(0x539595);
__builtin_memmove((R+4),(R+24),4);
}
B539597:{NFSU2_TR(0x539597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53959cull));
TAIL_STATIC(0x520020u,520);
}
B53959c:L53959c:{c.instructions+=2;NFSU2_TR(0x53959c);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B5395a0:{NFSU2_TR(0x5395a0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5395a6;}}
}
B5395a2:L5395a2:{c.instructions+=1;NFSU2_TR(0x5395a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5395a6:L5395a6:{c.instructions+=3;NFSU2_TR(0x5395a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5395aa:{NFSU2_TR(0x5395aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5395ad:{NFSU2_TR(0x5395ad);
if(r1(R+518)){{goto L5395b9;}}
}
B5395af:L5395af:{c.instructions+=3;NFSU2_TR(0x5395af);
__builtin_memmove((R+4),(R+24),4);
}
B5395b1:{NFSU2_TR(0x5395b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5395b4:{NFSU2_TR(0x5395b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5395b9ull));
TAIL_STATIC(0x52fdb0u,52f);
}
B5395b9:L5395b9:{c.instructions+=3;NFSU2_TR(0x5395b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5395bc:{NFSU2_TR(0x5395bc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5395be:{NFSU2_TR(0x5395be);
if(r1(R+518)){{goto L539604;}}
}
B5395c0:L5395c0:{c.instructions+=2;NFSU2_TR(0x5395c0);
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
B5395c2:{NFSU2_TR(0x5395c2);
if(r1(R+518)){{goto L5395c9;}}
}
B5395c4:L5395c4:{c.instructions+=2;NFSU2_TR(0x5395c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5395c6:{NFSU2_TR(0x5395c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5395c9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5395c9:L5395c9:{c.instructions+=2;NFSU2_TR(0x5395c9);
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
B5395cb:{NFSU2_TR(0x5395cb);
if(r1(R+518)){{goto L5395d8;}}
}
B5395cd:L5395cd:{c.instructions+=5;NFSU2_TR(0x5395cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5395d0:{NFSU2_TR(0x5395d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5395d2:{NFSU2_TR(0x5395d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5395d3:{NFSU2_TR(0x5395d3);
__builtin_memmove((R+4),(R+28),4);
}
B5395d5:{NFSU2_TR(0x5395d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5395d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5395d8:L5395d8:{c.instructions+=4;NFSU2_TR(0x5395d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x146ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5395de:{NFSU2_TR(0x5395de);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5395e0:{NFSU2_TR(0x5395e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5395e3:{NFSU2_TR(0x5395e3);
if(r1(R+518)){{goto L539637;}}
}
B5395e5:L5395e5:{c.instructions+=2;NFSU2_TR(0x5395e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5395e7:{NFSU2_TR(0x5395e7);
if(r1(R+518)){{goto L539604;}}
}
B5395e9:L5395e9:{c.instructions+=3;NFSU2_TR(0x5395e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5395ea:{NFSU2_TR(0x5395ea);
__builtin_memmove((R+4),(R+24),4);
}
B5395ec:{NFSU2_TR(0x5395ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5395f1ull));
TAIL_STATIC(0x520020u,520);
}
B5395f1:L5395f1:{c.instructions+=7;NFSU2_TR(0x5395f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5395f7:{NFSU2_TR(0x5395f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5395f8:{NFSU2_TR(0x5395f8);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5395f9:{NFSU2_TR(0x5395f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5395fa:{NFSU2_TR(0x5395fa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5395fc:{NFSU2_TR(0x5395fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5395ff:{NFSU2_TR(0x5395ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539604ull));
TAIL_STATIC(0x538080u,538);
}
B539604:L539604:{c.instructions+=3;NFSU2_TR(0x539604);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x146ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53960a:{NFSU2_TR(0x53960a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53960c:{NFSU2_TR(0x53960c);
if(r1(R+518)){{goto L539637;}}
}
B53960e:L53960e:{c.instructions+=3;NFSU2_TR(0x53960e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B539614:{NFSU2_TR(0x539614);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539616:{NFSU2_TR(0x539616);
if(r1(R+518)){{goto L539637;}}
}
B539618:L539618:{c.instructions+=3;NFSU2_TR(0x539618);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53961a:{NFSU2_TR(0x53961a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53961b:{NFSU2_TR(0x53961b);
if(r1(R+518)){{goto L53962f;}}
}
B53961d:L53961d:{c.instructions+=1;NFSU2_TR(0x53961d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539622ull));
TAIL_STATIC(0x50ca50u,50c);
}
B539622:L539622:{c.instructions+=7;NFSU2_TR(0x539622);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B539625:{NFSU2_TR(0x539625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B539626:{NFSU2_TR(0x539626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539627:{NFSU2_TR(0x539627);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539628:{NFSU2_TR(0x539628);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B539629:{NFSU2_TR(0x539629);
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
B53962c:{NFSU2_TR(0x53962c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53962f:L53962f:{c.instructions+=1;NFSU2_TR(0x53962f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539634ull));
TAIL_STATIC(0x50ca00u,50c);
}
B539634:L539634:{c.instructions+=1;NFSU2_TR(0x539634);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B539637:L539637:{c.instructions+=2;NFSU2_TR(0x539637);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B539638:{NFSU2_TR(0x539638);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539639:L539639:{c.instructions+=4;NFSU2_TR(0x539639);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53963a:{NFSU2_TR(0x53963a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53963b:{NFSU2_TR(0x53963b);
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
B53963e:{NFSU2_TR(0x53963e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539650:L539650:{c.instructions+=5;NFSU2_TR(0x539650);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539651:{NFSU2_TR(0x539651);
__builtin_memmove((R+24),(R+4),4);
}
B539653:{NFSU2_TR(0x539653);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x145ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B539659:{NFSU2_TR(0x539659);
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
B53965b:{NFSU2_TR(0x53965b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5397cd;}}
}
B539661:L539661:{c.instructions+=7;NFSU2_TR(0x539661);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539662:{NFSU2_TR(0x539662);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B539665:{NFSU2_TR(0x539665);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539667:{NFSU2_TR(0x539667);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539668:{NFSU2_TR(0x539668);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+20),(U+0),4);
}
B53966b:{NFSU2_TR(0x53966b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53966c:{NFSU2_TR(0x53966c);
if(r1(R+518)){{goto L539673;}}
}
B53966e:L53966e:{c.instructions+=2;NFSU2_TR(0x53966e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B539671:{NFSU2_TR(0x539671);
{goto L539675;}
}
B539673:L539673:{c.instructions+=1;NFSU2_TR(0x539673);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B539675:L539675:{c.instructions+=4;NFSU2_TR(0x539675);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B539679:{NFSU2_TR(0x539679);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53967b:{NFSU2_TR(0x53967b);
w4(R+28,u32(0x1ull));
}
B539680:{NFSU2_TR(0x539680);
if(r1(R+518)){{goto L5396d3;}}
}
B539682:L539682:{c.instructions+=2;NFSU2_TR(0x539682);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539684:{NFSU2_TR(0x539684);
if(r1(R+518)){{goto L53968b;}}
}
B539686:L539686:{c.instructions+=2;NFSU2_TR(0x539686);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B539689:{NFSU2_TR(0x539689);
{goto L53968d;}
}
B53968b:L53968b:{c.instructions+=1;NFSU2_TR(0x53968b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53968d:L53968d:{c.instructions+=2;NFSU2_TR(0x53968d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53968f:{NFSU2_TR(0x53968f);
if(r1(R+518)){{goto L53979b;}}
}
B539695:L539695:{c.instructions+=2;NFSU2_TR(0x539695);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B539697:{NFSU2_TR(0x539697);
if(r1(R+518)){{goto L5396aa;}}
}
B539699:L539699:{c.instructions+=4;NFSU2_TR(0x539699);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53969c:{NFSU2_TR(0x53969c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B53969d:{NFSU2_TR(0x53969d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53969f:{NFSU2_TR(0x53969f);
if(r1(R+518)){{goto L5396a6;}}
}
B5396a1:L5396a1:{c.instructions+=2;NFSU2_TR(0x5396a1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B5396a4:{NFSU2_TR(0x5396a4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539682u);}goto L539682;}
}
B5396a6:L5396a6:{c.instructions+=2;NFSU2_TR(0x5396a6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5396a8:{NFSU2_TR(0x5396a8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539682u);}goto L539682;}
}
B5396aa:L5396aa:{c.instructions+=2;NFSU2_TR(0x5396aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5396ac:{NFSU2_TR(0x5396ac);
if(r1(R+518)){{goto L539718;}}
}
B5396ae:L5396ae:{c.instructions+=3;NFSU2_TR(0x5396ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5396b1:{NFSU2_TR(0x5396b1);
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
B5396b3:{NFSU2_TR(0x5396b3);
if(r1(R+518)){{goto L539718;}}
}
B5396b5:L5396b5:{c.instructions+=5;NFSU2_TR(0x5396b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5396b8:{NFSU2_TR(0x5396b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5396bb:{NFSU2_TR(0x5396bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5396bd:{NFSU2_TR(0x5396bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5396be:{NFSU2_TR(0x5396be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5396c1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5396c1:L5396c1:{c.instructions+=3;NFSU2_TR(0x5396c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x145ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5396c8:{NFSU2_TR(0x5396c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5396ce:{NFSU2_TR(0x5396ce);
{goto L53979b;}
}
B5396d3:L5396d3:{c.instructions+=3;NFSU2_TR(0x5396d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5396d6:{NFSU2_TR(0x5396d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5396d8:{NFSU2_TR(0x5396d8);
if(r1(R+518)){{goto L539718;}}
}
B5396da:L5396da:{c.instructions+=3;NFSU2_TR(0x5396da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5396dd:{NFSU2_TR(0x5396dd);
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
B5396df:{NFSU2_TR(0x5396df);
if(r1(R+518)){{goto L5396ed;}}
}
B5396e1:L5396e1:{c.instructions+=2;NFSU2_TR(0x5396e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5396e3:{NFSU2_TR(0x5396e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5396e6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5396e6:L5396e6:{c.instructions+=1;NFSU2_TR(0x5396e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5396ed:L5396ed:{c.instructions+=4;NFSU2_TR(0x5396ed);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B5396f3:{NFSU2_TR(0x5396f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5396f5:{NFSU2_TR(0x5396f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5396f8:{NFSU2_TR(0x5396f8);
if(r1(R+518)){{goto L53979b;}}
}
B5396fe:L5396fe:{c.instructions+=2;NFSU2_TR(0x5396fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539700:{NFSU2_TR(0x539700);
if(r1(R+518)){{goto L53979b;}}
}
B539706:L539706:{c.instructions+=5;NFSU2_TR(0x539706);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B539709:{NFSU2_TR(0x539709);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53970c:{NFSU2_TR(0x53970c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53970d:{NFSU2_TR(0x53970d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53970e:{NFSU2_TR(0x53970e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539713ull));
TAIL_STATIC(0x52ce40u,52c);
}
B539713:L539713:{c.instructions+=1;NFSU2_TR(0x539713);
{goto L53979b;}
}
B539718:L539718:{c.instructions+=3;NFSU2_TR(0x539718);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53971a:{NFSU2_TR(0x53971a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B539724:{NFSU2_TR(0x539724);
if(r1(R+518)){{goto L539740;}}
}
B539726:L539726:{c.instructions+=3;NFSU2_TR(0x539726);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B539729:{NFSU2_TR(0x539729);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53972b:{NFSU2_TR(0x53972b);
if(r1(R+518)){{goto L539769;}}
}
B53972d:L53972d:{c.instructions+=1;NFSU2_TR(0x53972d);
__builtin_memmove((R+4),(R+4),4);
}
B539730:L539730:{c.instructions+=3;NFSU2_TR(0x539730);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B539733:{NFSU2_TR(0x539733);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539735:{NFSU2_TR(0x539735);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539769;}}
}
B539737:L539737:{c.instructions+=2;NFSU2_TR(0x539737);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539739:{NFSU2_TR(0x539739);
if(r1(R+518)){{goto L539744;}}
}
B53973b:L53973b:{c.instructions+=2;NFSU2_TR(0x53973b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B53973e:{NFSU2_TR(0x53973e);
{goto L539746;}
}
B539740:L539740:{c.instructions+=2;NFSU2_TR(0x539740);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B539742:{NFSU2_TR(0x539742);
{goto L539769;}
}
B539744:L539744:{c.instructions+=1;NFSU2_TR(0x539744);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B539746:L539746:{c.instructions+=2;NFSU2_TR(0x539746);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B539748:{NFSU2_TR(0x539748);
if(r1(R+518)){{goto L539769;}}
}
B53974a:L53974a:{c.instructions+=3;NFSU2_TR(0x53974a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53974d:{NFSU2_TR(0x53974d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53974f:{NFSU2_TR(0x53974f);
if(r1(R+518)){{goto L539756;}}
}
B539751:L539751:{c.instructions+=2;NFSU2_TR(0x539751);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B539754:{NFSU2_TR(0x539754);
{goto L539758;}
}
B539756:L539756:{c.instructions+=1;NFSU2_TR(0x539756);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B539758:L539758:{c.instructions+=5;NFSU2_TR(0x539758);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53975e:{NFSU2_TR(0x53975e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B53975f:{NFSU2_TR(0x53975f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539761:{NFSU2_TR(0x539761);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539767:{NFSU2_TR(0x539767);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539730u);}goto L539730;}}
}
B539769:L539769:{c.instructions+=2;NFSU2_TR(0x539769);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53976b:{NFSU2_TR(0x53976b);
if(r1(R+518)){{goto L539772;}}
}
B53976d:L53976d:{c.instructions+=2;NFSU2_TR(0x53976d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B539770:{NFSU2_TR(0x539770);
{goto L539774;}
}
B539772:L539772:{c.instructions+=1;NFSU2_TR(0x539772);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B539774:L539774:{c.instructions+=2;NFSU2_TR(0x539774);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B539776:{NFSU2_TR(0x539776);
if(r1(R+518)){{goto L53978d;}}
}
B539778:L539778:{c.instructions+=5;NFSU2_TR(0x539778);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53977b:{NFSU2_TR(0x53977b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53977e:{NFSU2_TR(0x53977e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B539780:{NFSU2_TR(0x539780);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539781:{NFSU2_TR(0x539781);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539784ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B539784:L539784:{c.instructions+=2;NFSU2_TR(0x539784);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x145ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53978b:{NFSU2_TR(0x53978b);
{goto L53979b;}
}
B53978d:L53978d:{c.instructions+=2;NFSU2_TR(0x53978d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53978f:{NFSU2_TR(0x53978f);
if(r1(R+518)){{goto L539796;}}
}
B539791:L539791:{c.instructions+=2;NFSU2_TR(0x539791);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B539794:{NFSU2_TR(0x539794);
{goto L539798;}
}
B539796:L539796:{c.instructions+=1;NFSU2_TR(0x539796);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B539798:L539798:{c.instructions+=1;NFSU2_TR(0x539798);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53979b:L53979b:{c.instructions+=2;NFSU2_TR(0x53979b);
__builtin_memmove((R+4),(R+24),4);
}
B53979d:{NFSU2_TR(0x53979d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5397a2ull));
TAIL_STATIC(0x52fea0u,52f);
}
B5397a2:L5397a2:{c.instructions+=6;NFSU2_TR(0x5397a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x146ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5397a8:{NFSU2_TR(0x5397a8);
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
B5397aa:{NFSU2_TR(0x5397aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5397ab:{NFSU2_TR(0x5397ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5397ac:{NFSU2_TR(0x5397ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5397ad:{NFSU2_TR(0x5397ad);
if(r1(R+518)){{goto L5397cd;}}
}
B5397af:L5397af:{c.instructions+=4;NFSU2_TR(0x5397af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5397b2:{NFSU2_TR(0x5397b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5397b3:{NFSU2_TR(0x5397b3);
__builtin_memmove((R+4),(R+24),4);
}
B5397b5:{NFSU2_TR(0x5397b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5397baull));
TAIL_STATIC(0x520020u,520);
}
B5397ba:L5397ba:{c.instructions+=7;NFSU2_TR(0x5397ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5397c0:{NFSU2_TR(0x5397c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5397c1:{NFSU2_TR(0x5397c1);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5397c2:{NFSU2_TR(0x5397c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5397c3:{NFSU2_TR(0x5397c3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5397c5:{NFSU2_TR(0x5397c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5397c8:{NFSU2_TR(0x5397c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5397cdull));
TAIL_STATIC(0x538080u,538);
}
B5397cd:L5397cd:{c.instructions+=2;NFSU2_TR(0x5397cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5397ce:{NFSU2_TR(0x5397ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5397e0:L5397e0:{c.instructions+=8;NFSU2_TR(0x5397e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B5397e3:{NFSU2_TR(0x5397e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5397e4:{NFSU2_TR(0x5397e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5397e5:{NFSU2_TR(0x5397e5);
__builtin_memmove((R+28),(R+4),4);
}
B5397e7:{NFSU2_TR(0x5397e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5397e9:{NFSU2_TR(0x5397e9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5397eb:{NFSU2_TR(0x5397eb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5397ed:{NFSU2_TR(0x5397ed);
if(r1(R+518)){{goto L5398b0;}}
}
B5397f3:L5397f3:{c.instructions+=2;NFSU2_TR(0x5397f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5397f6:{NFSU2_TR(0x5397f6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5398b0;}}
}
B5397fc:L5397fc:{c.instructions+=6;NFSU2_TR(0x5397fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5397fd:{NFSU2_TR(0x5397fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5397fe:{NFSU2_TR(0x5397fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B539802:{NFSU2_TR(0x539802);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539806:{NFSU2_TR(0x539806);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B539809:{NFSU2_TR(0x539809);
__builtin_memmove((R+16),(R+16),4);
}
B539810:L539810:{c.instructions+=7;NFSU2_TR(0x539810);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539813:{NFSU2_TR(0x539813);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539814:{NFSU2_TR(0x539814);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B539817:{NFSU2_TR(0x539817);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539818:{NFSU2_TR(0x539818);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53981c:{NFSU2_TR(0x53981c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53981d:{NFSU2_TR(0x53981d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539822ull));
TAIL_STATIC(0x75c784u,75c);
}
B539822:L539822:{c.instructions+=9;NFSU2_TR(0x539822);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B539826:{NFSU2_TR(0x539826);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539829:{NFSU2_TR(0x539829);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B53982b:{NFSU2_TR(0x53982b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53982e:{NFSU2_TR(0x53982e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B539831:{NFSU2_TR(0x539831);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B539833:{NFSU2_TR(0x539833);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B539837:{NFSU2_TR(0x539837);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53983b:{NFSU2_TR(0x53983b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L53986b;}}
}
B53983d:L53983d:{c.instructions+=2;NFSU2_TR(0x53983d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53983f:{NFSU2_TR(0x53983f);
if(r1(R+518)){{goto L53985b;}}
}
B539841:L539841:{c.instructions+=3;NFSU2_TR(0x539841);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B539844:{NFSU2_TR(0x539844);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B539846:{NFSU2_TR(0x539846);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53984e;}}
}
B539848:L539848:{c.instructions+=2;NFSU2_TR(0x539848);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53984a:{NFSU2_TR(0x53984a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L53984e;}}
}
B53984c:L53984c:{c.instructions+=1;NFSU2_TR(0x53984c);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B53984e:L53984e:{c.instructions+=6;NFSU2_TR(0x53984e);
w4(R+0,u32(r1(R+0)));
}
B539851:{NFSU2_TR(0x539851);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B539853:{NFSU2_TR(0x539853);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B539856:{NFSU2_TR(0x539856);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B539857:{NFSU2_TR(0x539857);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539859:{NFSU2_TR(0x539859);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539841u);}goto L539841;}}
}
B53985b:L53985b:{c.instructions+=8;NFSU2_TR(0x53985b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53985e:{NFSU2_TR(0x53985e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B539861:{NFSU2_TR(0x539861);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539862:{NFSU2_TR(0x539862);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539863:{NFSU2_TR(0x539863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B539865:{NFSU2_TR(0x539865);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B539868:{NFSU2_TR(0x539868);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539869:{NFSU2_TR(0x539869);
{goto L539896;}
}
B53986b:L53986b:{c.instructions+=2;NFSU2_TR(0x53986b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53986d:{NFSU2_TR(0x53986d);
if(r1(R+518)){{goto L53988a;}}
}
B53986f:L53986f:{c.instructions+=1;NFSU2_TR(0x53986f);
}
B539870:L539870:{c.instructions+=3;NFSU2_TR(0x539870);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B539873:{NFSU2_TR(0x539873);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B539875:{NFSU2_TR(0x539875);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53987d;}}
}
B539877:L539877:{c.instructions+=2;NFSU2_TR(0x539877);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539879:{NFSU2_TR(0x539879);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L53987d;}}
}
B53987b:L53987b:{c.instructions+=1;NFSU2_TR(0x53987b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B53987d:L53987d:{c.instructions+=6;NFSU2_TR(0x53987d);
w4(R+0,u32(r1(R+0)));
}
B539880:{NFSU2_TR(0x539880);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B539882:{NFSU2_TR(0x539882);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B539885:{NFSU2_TR(0x539885);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B539886:{NFSU2_TR(0x539886);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539888:{NFSU2_TR(0x539888);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539870u);}goto L539870;}}
}
B53988a:L53988a:{c.instructions+=6;NFSU2_TR(0x53988a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53988c:{NFSU2_TR(0x53988c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B539890:{NFSU2_TR(0x539890);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539891:{NFSU2_TR(0x539891);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539892:{NFSU2_TR(0x539892);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B539895:{NFSU2_TR(0x539895);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539896:L539896:{c.instructions+=1;NFSU2_TR(0x539896);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53989bull));
TAIL_STATIC(0x537ad0u,537);
}
B53989b:L53989b:{c.instructions+=6;NFSU2_TR(0x53989b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53989e:{NFSU2_TR(0x53989e);
__builtin_memmove((R+24),(R+12),4);
}
B5398a0:{NFSU2_TR(0x5398a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5398a3:{NFSU2_TR(0x5398a3);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B5398a6:{NFSU2_TR(0x5398a6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5398a8:{NFSU2_TR(0x5398a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539810u);}goto L539810;}}
}
B5398ae:L5398ae:{c.instructions+=2;NFSU2_TR(0x5398ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5398af:{NFSU2_TR(0x5398af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5398b0:L5398b0:{c.instructions+=4;NFSU2_TR(0x5398b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5398b1:{NFSU2_TR(0x5398b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5398b2:{NFSU2_TR(0x5398b2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5398b5:{NFSU2_TR(0x5398b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5398c0:L5398c0:{c.instructions+=4;NFSU2_TR(0x5398c0);
__builtin_memmove((R+0),(R+4),4);
}
B5398c2:{NFSU2_TR(0x5398c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5398c5:{NFSU2_TR(0x5398c5);
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
B5398c7:{NFSU2_TR(0x5398c7);
if(r1(R+518)){{goto L5398db;}}
}
B5398c9:L5398c9:{c.instructions+=8;NFSU2_TR(0x5398c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5398cc:{NFSU2_TR(0x5398cc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5398cd:{NFSU2_TR(0x5398cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5398ce:{NFSU2_TR(0x5398ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5398d1:{NFSU2_TR(0x5398d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5398d4:{NFSU2_TR(0x5398d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5398d5:{NFSU2_TR(0x5398d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5398d6:{NFSU2_TR(0x5398d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5398dbull));
TAIL_STATIC(0x538080u,538);
}
B5398db:L5398db:{c.instructions+=1;NFSU2_TR(0x5398db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5398e0:L5398e0:{c.instructions+=12;NFSU2_TR(0x5398e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5398e2:{NFSU2_TR(0x5398e2);
u8 U[4];
w4(U+0,u32(0x7776f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5398e7:{NFSU2_TR(0x5398e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5398ed:{NFSU2_TR(0x5398ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5398ee:{NFSU2_TR(0x5398ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5398f5:{NFSU2_TR(0x5398f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5398f6:{NFSU2_TR(0x5398f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5398f7:{NFSU2_TR(0x5398f7);
__builtin_memmove((R+24),(R+4),4);
}
B5398f9:{NFSU2_TR(0x5398f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5398fd:{NFSU2_TR(0x5398fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B539903:{NFSU2_TR(0x539903);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53990b:{NFSU2_TR(0x53990b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539910ull));
TAIL_STATIC(0x4022c0u,402);
}
B539910:L539910:{c.instructions+=3;NFSU2_TR(0x539910);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3d4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B539916:{NFSU2_TR(0x539916);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53991b:{NFSU2_TR(0x53991b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539920ull));
TAIL_STATIC(0x4022c0u,402);
}
B539920:L539920:{c.instructions+=5;NFSU2_TR(0x539920);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539923:{NFSU2_TR(0x539923);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x48ull))));
}
B539926:{NFSU2_TR(0x539926);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B539928:{NFSU2_TR(0x539928);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B539930:{NFSU2_TR(0x539930);
if(r1(R+518)){{goto L53994b;}}
}
B539932:L539932:{c.instructions+=6;NFSU2_TR(0x539932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B539934:{NFSU2_TR(0x539934);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B539937:{NFSU2_TR(0x539937);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B539939:{NFSU2_TR(0x539939);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53993a:{NFSU2_TR(0x53993a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53993d:{NFSU2_TR(0x53993d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539942ull));
TAIL_STATIC(0x575630u,575);
}
B539942:L539942:{c.instructions+=4;NFSU2_TR(0x539942);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B539944:{NFSU2_TR(0x539944);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B539947:{NFSU2_TR(0x539947);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B539949:{NFSU2_TR(0x539949);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539932u);}goto L539932;}}
}
B53994b:L53994b:{c.instructions+=5;NFSU2_TR(0x53994b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53994f:{NFSU2_TR(0x53994f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539950:{NFSU2_TR(0x539950);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539957:{NFSU2_TR(0x539957);
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
B53995a:{NFSU2_TR(0x53995a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539960:L539960:{c.instructions+=11;NFSU2_TR(0x539960);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539961:{NFSU2_TR(0x539961);
__builtin_memmove((R+20),(R+16),4);
}
B539963:{NFSU2_TR(0x539963);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B539966:{NFSU2_TR(0x539966);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539967:{NFSU2_TR(0x539967);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B53996a:{NFSU2_TR(0x53996a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53996b:{NFSU2_TR(0x53996b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53996c:{NFSU2_TR(0x53996c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53996e:{NFSU2_TR(0x53996e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53996f:{NFSU2_TR(0x53996f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539972:{NFSU2_TR(0x539972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539977ull));
TAIL_STATIC(0x60fee0u,60f);
}
B539977:L539977:{c.instructions+=4;NFSU2_TR(0x539977);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B53997d:{NFSU2_TR(0x53997d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53997f:{NFSU2_TR(0x53997f);
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
B539982:{NFSU2_TR(0x539982);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539985ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B539985:L539985:{c.instructions+=7;NFSU2_TR(0x539985);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539987:{NFSU2_TR(0x539987);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539988:{NFSU2_TR(0x539988);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539989:{NFSU2_TR(0x539989);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53998a:{NFSU2_TR(0x53998a);
w4(R+4,u32(0x8a2b68ull));
}
B53998f:{NFSU2_TR(0x53998f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539992:{NFSU2_TR(0x539992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539997ull));
TAIL_STATIC(0x61ba30u,61b);
}
B539997:L539997:{c.instructions+=3;NFSU2_TR(0x539997);
__builtin_memmove((R+24),(R+0),4);
}
B539999:{NFSU2_TR(0x539999);
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
B53999b:{NFSU2_TR(0x53999b);
if(r1(R+518)){{goto L539a80;}}
}
B5399a1:L5399a1:{c.instructions+=2;NFSU2_TR(0x5399a1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5399a4:{NFSU2_TR(0x5399a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5399b1;}}
}
B5399a6:L5399a6:{c.instructions+=4;NFSU2_TR(0x5399a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5399a9:{NFSU2_TR(0x5399a9);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1full))));
}
B5399ac:{NFSU2_TR(0x5399ac);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5399af:{NFSU2_TR(0x5399af);
{goto L539a09;}
}
B5399b1:L5399b1:{c.instructions+=2;NFSU2_TR(0x5399b1);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x1dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5399b4:{NFSU2_TR(0x5399b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539a0b;}}
}
B5399b6:L5399b6:{c.instructions+=3;NFSU2_TR(0x5399b6);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B5399bc:{NFSU2_TR(0x5399bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5399be:{NFSU2_TR(0x5399be);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5399c1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5399c1:L5399c1:{c.instructions+=7;NFSU2_TR(0x5399c1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5399c7:{NFSU2_TR(0x5399c7);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B5399cd:{NFSU2_TR(0x5399cd);
u8 U[13];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+28,u32(s32(s8(r1(U+12)))));
}
B5399d5:{NFSU2_TR(0x5399d5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5399d7:{NFSU2_TR(0x5399d7);
u8 U[4];
w4(U+0,u32(0xce7d8db5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5399dc:{NFSU2_TR(0x5399dc);
__builtin_memmove((R+4),(R+24),4);
}
B5399de:{NFSU2_TR(0x5399de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5399e3ull));
TAIL_STATIC(0x61b500u,61b);
}
B5399e3:L5399e3:{c.instructions+=3;NFSU2_TR(0x5399e3);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B5399e6:{NFSU2_TR(0x5399e6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5399e8:{NFSU2_TR(0x5399e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539a58;}}
}
B5399ea:L5399ea:{c.instructions+=4;NFSU2_TR(0x5399ea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5399ec:{NFSU2_TR(0x5399ec);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5399f1:{NFSU2_TR(0x5399f1);
__builtin_memmove((R+4),(R+24),4);
}
B5399f3:{NFSU2_TR(0x5399f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5399f8ull));
TAIL_STATIC(0x61b500u,61b);
}
B5399f8:L5399f8:{c.instructions+=3;NFSU2_TR(0x5399f8);
u8 U[4];
w4(U+0,u32(0x79bde0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5399fd:{NFSU2_TR(0x5399fd);
__builtin_memmove((R+28),(R+0),4);
}
B5399ff:{NFSU2_TR(0x5399ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539a04ull));
TAIL_STATIC(0x43db50u,43d);
}
B539a04:L539a04:{c.instructions+=2;NFSU2_TR(0x539a04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B539a07:{NFSU2_TR(0x539a07);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B539a09:L539a09:{c.instructions+=1;NFSU2_TR(0x539a09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539a58;}}
}
B539a0b:L539a0b:{c.instructions+=5;NFSU2_TR(0x539a0b);
__builtin_memmove((R+0),gp(0x8389b0),4);
}
B539a10:{NFSU2_TR(0x539a10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539a11:{NFSU2_TR(0x539a11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539a12:{NFSU2_TR(0x539a12);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539a13:{NFSU2_TR(0x539a13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539a18ull));
TAIL_STATIC(0x50f0d0u,50f);
}
B539a18:L539a18:{c.instructions+=2;NFSU2_TR(0x539a18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539a19:{NFSU2_TR(0x539a19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539a1eull));
TAIL_STATIC(0x52a010u,52a);
}
B539a1e:L539a1e:{c.instructions+=3;NFSU2_TR(0x539a1e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B539a21:{NFSU2_TR(0x539a21);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539a23:{NFSU2_TR(0x539a23);
if(r1(R+518)){{goto L539a58;}}
}
B539a25:L539a25:{c.instructions+=5;NFSU2_TR(0x539a25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539a28:{NFSU2_TR(0x539a28);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B539a29:{NFSU2_TR(0x539a29);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539a2b:{NFSU2_TR(0x539a2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539a2e:{NFSU2_TR(0x539a2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539a33ull));
TAIL_STATIC(0x575620u,575);
}
B539a33:L539a33:{c.instructions+=3;NFSU2_TR(0x539a33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B539a36:{NFSU2_TR(0x539a36);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539a38:{NFSU2_TR(0x539a38);
if(r1(R+518)){{goto L539a46;}}
}
B539a3a:L539a3a:{c.instructions+=3;NFSU2_TR(0x539a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539a3d:{NFSU2_TR(0x539a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B539a44:{NFSU2_TR(0x539a44);
{goto L539a48;}
}
B539a46:L539a46:{c.instructions+=1;NFSU2_TR(0x539a46);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B539a48:L539a48:{c.instructions+=6;NFSU2_TR(0x539a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B539a4b:{NFSU2_TR(0x539a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B539a4e:{NFSU2_TR(0x539a4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B539a50:{NFSU2_TR(0x539a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539a53:{NFSU2_TR(0x539a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539a56:{NFSU2_TR(0x539a56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B539a58:L539a58:{c.instructions+=8;NFSU2_TR(0x539a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B539a5b:{NFSU2_TR(0x539a5b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539a5d:{NFSU2_TR(0x539a5d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539a5f:{NFSU2_TR(0x539a5f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539a60:{NFSU2_TR(0x539a60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539a61:{NFSU2_TR(0x539a61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539a62:{NFSU2_TR(0x539a62);
w4(R+4,u32(0x8a2b68ull));
}
B539a67:{NFSU2_TR(0x539a67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539a6cull));
TAIL_STATIC(0x61ba50u,61b);
}
B539a6c:L539a6c:{c.instructions+=3;NFSU2_TR(0x539a6c);
__builtin_memmove((R+24),(R+0),4);
}
B539a6e:{NFSU2_TR(0x539a6e);
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
B539a70:{NFSU2_TR(0x539a70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5399a1u);}goto L5399a1;}}
}
B539a76:L539a76:{c.instructions+=7;NFSU2_TR(0x539a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539a79:{NFSU2_TR(0x539a79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B539a7a:{NFSU2_TR(0x539a7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539a7b:{NFSU2_TR(0x539a7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539a7c:{NFSU2_TR(0x539a7c);
__builtin_memmove((R+16),(R+20),4);
}
B539a7e:{NFSU2_TR(0x539a7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B539a7f:{NFSU2_TR(0x539a7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539a80:L539a80:{c.instructions+=7;NFSU2_TR(0x539a80);
__builtin_memmove((R+0),(R+28),4);
}
B539a82:{NFSU2_TR(0x539a82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B539a83:{NFSU2_TR(0x539a83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539a84:{NFSU2_TR(0x539a84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539a85:{NFSU2_TR(0x539a85);
__builtin_memmove((R+16),(R+20),4);
}
B539a87:{NFSU2_TR(0x539a87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B539a88:{NFSU2_TR(0x539a88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539a90:L539a90:{c.instructions+=7;NFSU2_TR(0x539a90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539a91:{NFSU2_TR(0x539a91);
__builtin_memmove((R+20),(R+16),4);
}
B539a93:{NFSU2_TR(0x539a93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539a94:{NFSU2_TR(0x539a94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539a95:{NFSU2_TR(0x539a95);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539a96:{NFSU2_TR(0x539a96);
w4(R+4,u32(0x85b940ull));
}
B539a9b:{NFSU2_TR(0x539a9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539aa0ull));
TAIL_STATIC(0x533d20u,533);
}
B539aa0:L539aa0:{c.instructions+=4;NFSU2_TR(0x539aa0);
__builtin_memmove((R+24),(R+0),4);
}
B539aa2:{NFSU2_TR(0x539aa2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B539aa8:{NFSU2_TR(0x539aa8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539aaa:{NFSU2_TR(0x539aaa);
if(r1(R+518)){{goto L539b01;}}
}
B539aac:L539aac:{c.instructions+=6;NFSU2_TR(0x539aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539aaf:{NFSU2_TR(0x539aaf);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+0)),r1(U+0));
}
B539ab2:{NFSU2_TR(0x539ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539ab8:{NFSU2_TR(0x539ab8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B539aba:{NFSU2_TR(0x539aba);
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
B539abc:{NFSU2_TR(0x539abc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L539b67;}}
}
B539ac2:L539ac2:{c.instructions+=3;NFSU2_TR(0x539ac2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B539ac5:{NFSU2_TR(0x539ac5);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539ac7:{NFSU2_TR(0x539ac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539accull));
TAIL_STATIC(0x575620u,575);
}
B539acc:L539acc:{c.instructions+=3;NFSU2_TR(0x539acc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B539acf:{NFSU2_TR(0x539acf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539ad1:{NFSU2_TR(0x539ad1);
if(r1(R+518)){{goto L539adf;}}
}
B539ad3:L539ad3:{c.instructions+=3;NFSU2_TR(0x539ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539ad6:{NFSU2_TR(0x539ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B539add:{NFSU2_TR(0x539add);
{goto L539ae1;}
}
B539adf:L539adf:{c.instructions+=1;NFSU2_TR(0x539adf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B539ae1:L539ae1:{c.instructions+=10;NFSU2_TR(0x539ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B539ae4:{NFSU2_TR(0x539ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B539ae7:{NFSU2_TR(0x539ae7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B539ae9:{NFSU2_TR(0x539ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539aec:{NFSU2_TR(0x539aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539aef:{NFSU2_TR(0x539aef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B539af1:{NFSU2_TR(0x539af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539af7:{NFSU2_TR(0x539af7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B539af8:{NFSU2_TR(0x539af8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B539afa:{NFSU2_TR(0x539afa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539ac2u);}goto L539ac2;}}
}
B539afc:L539afc:{c.instructions+=5;NFSU2_TR(0x539afc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B539afd:{NFSU2_TR(0x539afd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539afe:{NFSU2_TR(0x539afe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539aff:{NFSU2_TR(0x539aff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B539b00:{NFSU2_TR(0x539b00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539b01:L539b01:{c.instructions+=6;NFSU2_TR(0x539b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B539b04:{NFSU2_TR(0x539b04);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B539b07:{NFSU2_TR(0x539b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539b0d:{NFSU2_TR(0x539b0d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B539b0f:{NFSU2_TR(0x539b0f);
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
B539b11:{NFSU2_TR(0x539b11);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L539b67;}}
}
B539b13:L539b13:{c.instructions+=3;NFSU2_TR(0x539b13);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B539b16:{NFSU2_TR(0x539b16);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539b18:{NFSU2_TR(0x539b18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539b1dull));
TAIL_STATIC(0x575620u,575);
}
B539b1d:L539b1d:{c.instructions+=3;NFSU2_TR(0x539b1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B539b20:{NFSU2_TR(0x539b20);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539b22:{NFSU2_TR(0x539b22);
if(r1(R+518)){{goto L539b30;}}
}
B539b24:L539b24:{c.instructions+=3;NFSU2_TR(0x539b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539b27:{NFSU2_TR(0x539b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B539b2e:{NFSU2_TR(0x539b2e);
{goto L539b32;}
}
B539b30:L539b30:{c.instructions+=1;NFSU2_TR(0x539b30);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B539b32:L539b32:{c.instructions+=9;NFSU2_TR(0x539b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B539b35:{NFSU2_TR(0x539b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B539b38:{NFSU2_TR(0x539b38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B539b3a:{NFSU2_TR(0x539b3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539b3d:{NFSU2_TR(0x539b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539b40:{NFSU2_TR(0x539b40);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B539b42:{NFSU2_TR(0x539b42);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B539b48:{NFSU2_TR(0x539b48);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539b4a:{NFSU2_TR(0x539b4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539b54;}}
}
B539b4c:L539b4c:{c.instructions+=2;NFSU2_TR(0x539b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539b52:{NFSU2_TR(0x539b52);
{goto L539b57;}
}
B539b54:L539b54:{c.instructions+=1;NFSU2_TR(0x539b54);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B539b57:L539b57:{c.instructions+=6;NFSU2_TR(0x539b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B539b5a:{NFSU2_TR(0x539b5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B539b5c:{NFSU2_TR(0x539b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539b62:{NFSU2_TR(0x539b62);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B539b63:{NFSU2_TR(0x539b63);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B539b65:{NFSU2_TR(0x539b65);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539b13u);}goto L539b13;}}
}
B539b67:L539b67:{c.instructions+=5;NFSU2_TR(0x539b67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B539b68:{NFSU2_TR(0x539b68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539b69:{NFSU2_TR(0x539b69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539b6a:{NFSU2_TR(0x539b6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B539b6b:{NFSU2_TR(0x539b6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539b70:L539b70:{c.instructions+=6;NFSU2_TR(0x539b70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539b71:{NFSU2_TR(0x539b71);
__builtin_memmove((R+20),(R+16),4);
}
B539b73:{NFSU2_TR(0x539b73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539b74:{NFSU2_TR(0x539b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B539b77:{NFSU2_TR(0x539b77);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539b79:{NFSU2_TR(0x539b79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539b80;}}
}
B539b7b:L539b7b:{c.instructions+=4;NFSU2_TR(0x539b7b);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B539b7d:{NFSU2_TR(0x539b7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B539b7e:{NFSU2_TR(0x539b7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B539b7f:{NFSU2_TR(0x539b7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539b80:L539b80:{c.instructions+=10;NFSU2_TR(0x539b80);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B539b86:{NFSU2_TR(0x539b86);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B539b89:{NFSU2_TR(0x539b89);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539b8a:{NFSU2_TR(0x539b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B539b8d:{NFSU2_TR(0x539b8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539b8e:{NFSU2_TR(0x539b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B539b91:{NFSU2_TR(0x539b91);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B539b97:{NFSU2_TR(0x539b97);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B539b99:{NFSU2_TR(0x539b99);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xe0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539b9b:{NFSU2_TR(0x539b9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539bac;}}
}
B539b9d:L539b9d:{c.instructions+=3;NFSU2_TR(0x539b9d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3b83203ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B539ba3:{NFSU2_TR(0x539ba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B539baa:{NFSU2_TR(0x539baa);
if(r1(R+518)){{goto L539bb3;}}
}
B539bac:L539bac:{c.instructions+=1;NFSU2_TR(0x539bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B539bb3:L539bb3:{c.instructions+=4;NFSU2_TR(0x539bb3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539bb5:{NFSU2_TR(0x539bb5);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539bba:{NFSU2_TR(0x539bba);
__builtin_memmove((R+4),(R+28),4);
}
B539bbc:{NFSU2_TR(0x539bbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539bc1ull));
TAIL_STATIC(0x61b500u,61b);
}
B539bc1:L539bc1:{c.instructions+=2;NFSU2_TR(0x539bc1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B539bc3:{NFSU2_TR(0x539bc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539c0c;}}
}
B539bc5:L539bc5:{c.instructions+=5;NFSU2_TR(0x539bc5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B539bcc:{NFSU2_TR(0x539bcc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539bce:{NFSU2_TR(0x539bce);
u8 U[4];
w4(U+0,u32(0xce7d8db5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539bd3:{NFSU2_TR(0x539bd3);
__builtin_memmove((R+4),(R+28),4);
}
B539bd5:{NFSU2_TR(0x539bd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539bdaull));
TAIL_STATIC(0x61b500u,61b);
}
B539bda:L539bda:{c.instructions+=3;NFSU2_TR(0x539bda);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B539bdd:{NFSU2_TR(0x539bdd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B539bdf:{NFSU2_TR(0x539bdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539c0c;}}
}
B539be1:L539be1:{c.instructions+=5;NFSU2_TR(0x539be1);
__builtin_memmove((R+4),gp(0x8389b0),4);
}
B539be7:{NFSU2_TR(0x539be7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539be8:{NFSU2_TR(0x539be8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539be9:{NFSU2_TR(0x539be9);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539beb:{NFSU2_TR(0x539beb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539bf0ull));
TAIL_STATIC(0x50f0d0u,50f);
}
B539bf0:L539bf0:{c.instructions+=2;NFSU2_TR(0x539bf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539bf1:{NFSU2_TR(0x539bf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539bf6ull));
TAIL_STATIC(0x52a010u,52a);
}
B539bf6:L539bf6:{c.instructions+=3;NFSU2_TR(0x539bf6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B539bf9:{NFSU2_TR(0x539bf9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539bfb:{NFSU2_TR(0x539bfb);
if(r1(R+518)){{goto L539c0c;}}
}
B539bfd:L539bfd:{c.instructions+=8;NFSU2_TR(0x539bfd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B539c00:{NFSU2_TR(0x539c00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539c01:{NFSU2_TR(0x539c01);
w4(R+0,u32(0x1ull));
}
B539c06:{NFSU2_TR(0x539c06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539c07:{NFSU2_TR(0x539c07);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+4))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B539c09:{NFSU2_TR(0x539c09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B539c0a:{NFSU2_TR(0x539c0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B539c0b:{NFSU2_TR(0x539c0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539c0c:L539c0c:{c.instructions+=8;NFSU2_TR(0x539c0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B539c0f:{NFSU2_TR(0x539c0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539c10:{NFSU2_TR(0x539c10);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B539c12:{NFSU2_TR(0x539c12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539c13:{NFSU2_TR(0x539c13);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+4))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B539c15:{NFSU2_TR(0x539c15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B539c16:{NFSU2_TR(0x539c16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B539c17:{NFSU2_TR(0x539c17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539c20:L539c20:{c.instructions+=3;NFSU2_TR(0x539c20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539c21:{NFSU2_TR(0x539c21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539c22:{NFSU2_TR(0x539c22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539c27ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B539c27:L539c27:{c.instructions+=1;NFSU2_TR(0x539c27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539c2cull));
TAIL_STATIC(0x43bdf0u,43b);
}
B539c2c:L539c2c:{c.instructions+=1;NFSU2_TR(0x539c2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539c31ull));
TAIL_STATIC(0x50f0d0u,50f);
}
B539c31:L539c31:{c.instructions+=3;NFSU2_TR(0x539c31);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B539c33:{NFSU2_TR(0x539c33);
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
B539c36:{NFSU2_TR(0x539c36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539c6c;}}
}
B539c38:L539c38:{c.instructions+=4;NFSU2_TR(0x539c38);
__builtin_memmove((R+0),gp(0x863480),4);
}
B539c3d:{NFSU2_TR(0x539c3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539c3e:{NFSU2_TR(0x539c3e);
w4(R+4,u32(0x83ad90ull));
}
B539c43:{NFSU2_TR(0x539c43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539c48ull));
TAIL_STATIC(0x503680u,503);
}
B539c48:L539c48:{c.instructions+=2;NFSU2_TR(0x539c48);
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
B539c4a:{NFSU2_TR(0x539c4a);
if(r1(R+518)){{goto L539c60;}}
}
B539c4c:L539c4c:{c.instructions+=2;NFSU2_TR(0x539c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539c52:{NFSU2_TR(0x539c52);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B539c54:L539c54:{c.instructions+=2;NFSU2_TR(0x539c54);
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
B539c56:{NFSU2_TR(0x539c56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539c65;}}
}
B539c58:L539c58:{c.instructions+=3;NFSU2_TR(0x539c58);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B539c59:{NFSU2_TR(0x539c59);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B539c5c:{NFSU2_TR(0x539c5c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539c54u);}goto L539c54;}}
}
B539c5e:L539c5e:{c.instructions+=1;NFSU2_TR(0x539c5e);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B539c60:L539c60:{c.instructions+=4;NFSU2_TR(0x539c60);
__builtin_memmove((R+0),(R+12),1);
}
B539c62:{NFSU2_TR(0x539c62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539c63:{NFSU2_TR(0x539c63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B539c64:{NFSU2_TR(0x539c64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539c65:L539c65:{c.instructions+=5;NFSU2_TR(0x539c65);
w1(R+12,u8(0x1ull));
}
B539c67:{NFSU2_TR(0x539c67);
__builtin_memmove((R+0),(R+12),1);
}
B539c69:{NFSU2_TR(0x539c69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539c6a:{NFSU2_TR(0x539c6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B539c6b:{NFSU2_TR(0x539c6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539c6c:L539c6c:{c.instructions+=4;NFSU2_TR(0x539c6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539c6d:{NFSU2_TR(0x539c6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539c6e:{NFSU2_TR(0x539c6e);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539c70:{NFSU2_TR(0x539c70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539c75ull));
TAIL_STATIC(0x60fee0u,60f);
}
B539c75:L539c75:{c.instructions+=5;NFSU2_TR(0x539c75);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B539c7b:{NFSU2_TR(0x539c7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B539c7d:{NFSU2_TR(0x539c7d);
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
B539c80:{NFSU2_TR(0x539c80);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539c84:{NFSU2_TR(0x539c84);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539c87ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B539c87:L539c87:{c.instructions+=7;NFSU2_TR(0x539c87);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539c89:{NFSU2_TR(0x539c89);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539c8b:{NFSU2_TR(0x539c8b);
__builtin_memmove((R+28),(R+0),4);
}
B539c8d:{NFSU2_TR(0x539c8d);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539c8f:{NFSU2_TR(0x539c8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539c90:{NFSU2_TR(0x539c90);
w4(R+4,u32(0x8a2b68ull));
}
B539c95:{NFSU2_TR(0x539c95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539c9aull));
TAIL_STATIC(0x61ba30u,61b);
}
B539c9a:L539c9a:{c.instructions+=3;NFSU2_TR(0x539c9a);
__builtin_memmove((R+24),(R+0),4);
}
B539c9c:{NFSU2_TR(0x539c9c);
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
B539c9e:{NFSU2_TR(0x539c9e);
if(r1(R+518)){{goto L539ce4;}}
}
B539ca0:L539ca0:{c.instructions+=3;NFSU2_TR(0x539ca0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B539ca4:{NFSU2_TR(0x539ca4);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B539ca8:{NFSU2_TR(0x539ca8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539ccc;}}
}
B539caa:L539caa:{c.instructions+=5;NFSU2_TR(0x539caa);
__builtin_memmove((R+4),gp(0x8389b0),4);
}
B539cb0:{NFSU2_TR(0x539cb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539cb1:{NFSU2_TR(0x539cb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539cb2:{NFSU2_TR(0x539cb2);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539cb4:{NFSU2_TR(0x539cb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539cb9ull));
TAIL_STATIC(0x50f0d0u,50f);
}
B539cb9:L539cb9:{c.instructions+=2;NFSU2_TR(0x539cb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539cba:{NFSU2_TR(0x539cba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539cbfull));
TAIL_STATIC(0x52a010u,52a);
}
B539cbf:L539cbf:{c.instructions+=3;NFSU2_TR(0x539cbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B539cc2:{NFSU2_TR(0x539cc2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539cc4:{NFSU2_TR(0x539cc4);
if(r1(R+518)){{goto L539ccc;}}
}
B539cc6:L539cc6:{c.instructions+=2;NFSU2_TR(0x539cc6);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539cc8:{NFSU2_TR(0x539cc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539ceb;}}
}
B539cca:L539cca:{c.instructions+=1;NFSU2_TR(0x539cca);
w1(R+12,u8(0x1ull));
}
B539ccc:L539ccc:{c.instructions+=7;NFSU2_TR(0x539ccc);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539cce:{NFSU2_TR(0x539cce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539cd0:{NFSU2_TR(0x539cd0);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539cd2:{NFSU2_TR(0x539cd2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539cd3:{NFSU2_TR(0x539cd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539cd4:{NFSU2_TR(0x539cd4);
w4(R+4,u32(0x8a2b68ull));
}
B539cd9:{NFSU2_TR(0x539cd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539cdeull));
TAIL_STATIC(0x61ba50u,61b);
}
B539cde:L539cde:{c.instructions+=3;NFSU2_TR(0x539cde);
__builtin_memmove((R+24),(R+0),4);
}
B539ce0:{NFSU2_TR(0x539ce0);
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
B539ce2:{NFSU2_TR(0x539ce2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539ca0u);}goto L539ca0;}}
}
B539ce4:L539ce4:{c.instructions+=6;NFSU2_TR(0x539ce4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B539ce5:{NFSU2_TR(0x539ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539ce6:{NFSU2_TR(0x539ce6);
w1(R+0,u8(0x1ull));
}
B539ce8:{NFSU2_TR(0x539ce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539ce9:{NFSU2_TR(0x539ce9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B539cea:{NFSU2_TR(0x539cea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539ceb:L539ceb:{c.instructions+=6;NFSU2_TR(0x539ceb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B539cec:{NFSU2_TR(0x539cec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539ced:{NFSU2_TR(0x539ced);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B539cef:{NFSU2_TR(0x539cef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539cf0:{NFSU2_TR(0x539cf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B539cf1:{NFSU2_TR(0x539cf1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539d00:L539d00:{c.instructions+=18;NFSU2_TR(0x539d00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539d01:{NFSU2_TR(0x539d01);
__builtin_memmove((R+20),(R+16),4);
}
B539d03:{NFSU2_TR(0x539d03);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539d05:{NFSU2_TR(0x539d05);
u8 U[4];
w4(U+0,u32(0x7775c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539d0a:{NFSU2_TR(0x539d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539d10:{NFSU2_TR(0x539d10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539d11:{NFSU2_TR(0x539d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539d18:{NFSU2_TR(0x539d18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B539d1b:{NFSU2_TR(0x539d1b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539d1c:{NFSU2_TR(0x539d1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B539d1f:{NFSU2_TR(0x539d1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B539d22:{NFSU2_TR(0x539d22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539d23:{NFSU2_TR(0x539d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539d26:{NFSU2_TR(0x539d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539d29:{NFSU2_TR(0x539d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539d2c:{NFSU2_TR(0x539d2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539d31:{NFSU2_TR(0x539d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B539d38:{NFSU2_TR(0x539d38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539e11;}}
}
B539d3e:L539d3e:{c.instructions+=2;NFSU2_TR(0x539d3e);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B539d40:{NFSU2_TR(0x539d40);
w4(R+24,u32(0x1ull));
}
B539d45:L539d45:{c.instructions+=5;NFSU2_TR(0x539d45);
__builtin_memmove((R+8),gp(0x8389b0),4);
}
B539d4b:{NFSU2_TR(0x539d4b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539d4c:{NFSU2_TR(0x539d4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539d4d:{NFSU2_TR(0x539d4d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539d4f:{NFSU2_TR(0x539d4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539d54ull));
TAIL_STATIC(0x50f0d0u,50f);
}
B539d54:L539d54:{c.instructions+=2;NFSU2_TR(0x539d54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539d55:{NFSU2_TR(0x539d55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539d5aull));
TAIL_STATIC(0x52a110u,52a);
}
B539d5a:L539d5a:{c.instructions+=5;NFSU2_TR(0x539d5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B539d5d:{NFSU2_TR(0x539d5d);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B539d5f:{NFSU2_TR(0x539d5f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B539d60:{NFSU2_TR(0x539d60);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B539d63:{NFSU2_TR(0x539d63);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539d45u);}goto L539d45;}}
}
B539d65:L539d65:{c.instructions+=2;NFSU2_TR(0x539d65);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539d67:{NFSU2_TR(0x539d67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539db1;}}
}
B539d69:L539d69:{c.instructions+=5;NFSU2_TR(0x539d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539d6c:{NFSU2_TR(0x539d6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B539d6f:{NFSU2_TR(0x539d6f);
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
B539d71:{NFSU2_TR(0x539d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B539d78:{NFSU2_TR(0x539d78);
if(r1(R+518)){{goto L539d9f;}}
}
B539d7a:L539d7a:{c.instructions+=1;NFSU2_TR(0x539d7a);
__builtin_memmove((R+12),(R+12),4);
}
B539d80:L539d80:{c.instructions+=7;NFSU2_TR(0x539d80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B539d82:{NFSU2_TR(0x539d82);
__builtin_memmove((R+8),(R+0),4);
}
B539d84:{NFSU2_TR(0x539d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539d87:{NFSU2_TR(0x539d87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B539d89:{NFSU2_TR(0x539d89);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539d8a:{NFSU2_TR(0x539d8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539d8d:{NFSU2_TR(0x539d8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539d92ull));
TAIL_STATIC(0x575630u,575);
}
B539d92:L539d92:{c.instructions+=5;NFSU2_TR(0x539d92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539d95:{NFSU2_TR(0x539d95);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B539d98:{NFSU2_TR(0x539d98);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B539d9b:{NFSU2_TR(0x539d9b);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B539d9d:{NFSU2_TR(0x539d9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539d80u);}goto L539d80;}}
}
B539d9f:L539d9f:{c.instructions+=8;NFSU2_TR(0x539d9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539da0:{NFSU2_TR(0x539da0);
w1(R+0,u8(0x1ull));
}
B539da2:{NFSU2_TR(0x539da2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539da3:{NFSU2_TR(0x539da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B539da6:{NFSU2_TR(0x539da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539dad:{NFSU2_TR(0x539dad);
__builtin_memmove((R+16),(R+20),4);
}
B539daf:{NFSU2_TR(0x539daf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B539db0:{NFSU2_TR(0x539db0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539db1:L539db1:{c.instructions+=5;NFSU2_TR(0x539db1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539db3:{NFSU2_TR(0x539db3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B539db6:{NFSU2_TR(0x539db6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539db7:{NFSU2_TR(0x539db7);
u8 U[4];
w4(U+0,u32(0xa2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539dbc:{NFSU2_TR(0x539dbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539dc1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539960u);}goto L539960;}
}
B539dc1:L539dc1:{c.instructions+=8;NFSU2_TR(0x539dc1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B539dc4:{NFSU2_TR(0x539dc4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539dc6:{NFSU2_TR(0x539dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539dc9:{NFSU2_TR(0x539dc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B539dcc:{NFSU2_TR(0x539dcc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+12),(U+1),1);
}
B539dcf:{NFSU2_TR(0x539dcf);
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
B539dd1:{NFSU2_TR(0x539dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B539dd8:{NFSU2_TR(0x539dd8);
if(r1(R+518)){{goto L539f01;}}
}
B539dde:L539dde:{c.instructions+=1;NFSU2_TR(0x539dde);
__builtin_memmove((R+28),(R+28),4);
}
B539de0:L539de0:{c.instructions+=7;NFSU2_TR(0x539de0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B539de2:{NFSU2_TR(0x539de2);
__builtin_memmove((R+8),(R+0),4);
}
B539de4:{NFSU2_TR(0x539de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539de7:{NFSU2_TR(0x539de7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B539de9:{NFSU2_TR(0x539de9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539dea:{NFSU2_TR(0x539dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539ded:{NFSU2_TR(0x539ded);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539df2ull));
TAIL_STATIC(0x575630u,575);
}
B539df2:L539df2:{c.instructions+=5;NFSU2_TR(0x539df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539df5:{NFSU2_TR(0x539df5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B539df8:{NFSU2_TR(0x539df8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B539dfb:{NFSU2_TR(0x539dfb);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B539dfd:{NFSU2_TR(0x539dfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539de0u);}goto L539de0;}}
}
B539dff:L539dff:{c.instructions+=8;NFSU2_TR(0x539dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539e00:{NFSU2_TR(0x539e00);
__builtin_memmove((R+0),(R+12),1);
}
B539e02:{NFSU2_TR(0x539e02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539e03:{NFSU2_TR(0x539e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B539e06:{NFSU2_TR(0x539e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539e0d:{NFSU2_TR(0x539e0d);
__builtin_memmove((R+16),(R+20),4);
}
B539e0f:{NFSU2_TR(0x539e0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B539e10:{NFSU2_TR(0x539e10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539e11:L539e11:{c.instructions+=2;NFSU2_TR(0x539e11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539e16:{NFSU2_TR(0x539e16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539e4f;}}
}
B539e18:L539e18:{c.instructions+=5;NFSU2_TR(0x539e18);
__builtin_memmove((R+0),gp(0x8389b0),4);
}
B539e1d:{NFSU2_TR(0x539e1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539e1e:{NFSU2_TR(0x539e1e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539e20:{NFSU2_TR(0x539e20);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539e22:{NFSU2_TR(0x539e22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539e27ull));
TAIL_STATIC(0x50f0d0u,50f);
}
B539e27:L539e27:{c.instructions+=2;NFSU2_TR(0x539e27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539e28:{NFSU2_TR(0x539e28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539e2dull));
TAIL_STATIC(0x52a110u,52a);
}
B539e2d:L539e2d:{c.instructions+=3;NFSU2_TR(0x539e2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B539e30:{NFSU2_TR(0x539e30);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539e32:{NFSU2_TR(0x539e32);
if(r1(R+518)){{goto L539e83;}}
}
B539e34:L539e34:{c.instructions+=5;NFSU2_TR(0x539e34);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539e36:{NFSU2_TR(0x539e36);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B539e39:{NFSU2_TR(0x539e39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539e3a:{NFSU2_TR(0x539e3a);
u8 U[4];
w4(U+0,u32(0x9bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539e3f:{NFSU2_TR(0x539e3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539e44ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539960u);}goto L539960;}
}
B539e44:L539e44:{c.instructions+=3;NFSU2_TR(0x539e44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B539e47:{NFSU2_TR(0x539e47);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B539e4a:{NFSU2_TR(0x539e4a);
{goto L539eef;}
}
B539e4f:L539e4f:{c.instructions+=2;NFSU2_TR(0x539e4f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9dull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9dull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9dull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B539e54:{NFSU2_TR(0x539e54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539ebc;}}
}
B539e56:L539e56:{c.instructions+=4;NFSU2_TR(0x539e56);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539e58:{NFSU2_TR(0x539e58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539e59:{NFSU2_TR(0x539e59);
w4(R+4,u32(0x838980ull));
}
B539e5e:{NFSU2_TR(0x539e5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539e63ull));
TAIL_STATIC(0x50ed20u,50e);
}
B539e63:L539e63:{c.instructions+=2;NFSU2_TR(0x539e63);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B539e65:{NFSU2_TR(0x539e65);
if(r1(R+518)){{goto L539e83;}}
}
B539e67:L539e67:{c.instructions+=5;NFSU2_TR(0x539e67);
__builtin_memmove((R+8),gp(0x8389b0),4);
}
B539e6d:{NFSU2_TR(0x539e6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539e6e:{NFSU2_TR(0x539e6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539e6f:{NFSU2_TR(0x539e6f);
u8 U[4];
w4(U+0,u32(0x22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539e71:{NFSU2_TR(0x539e71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539e76ull));
TAIL_STATIC(0x50f0d0u,50f);
}
B539e76:L539e76:{c.instructions+=2;NFSU2_TR(0x539e76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539e77:{NFSU2_TR(0x539e77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539e7cull));
TAIL_STATIC(0x52a010u,52a);
}
B539e7c:L539e7c:{c.instructions+=3;NFSU2_TR(0x539e7c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B539e7f:{NFSU2_TR(0x539e7f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539e81:{NFSU2_TR(0x539e81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L539ea4;}}
}
B539e83:L539e83:{c.instructions+=3;NFSU2_TR(0x539e83);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B539e86:{NFSU2_TR(0x539e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B539e8d:{NFSU2_TR(0x539e8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539e92ull));
TAIL_STATIC(0x4def30u,4de);
}
B539e92:L539e92:{c.instructions+=8;NFSU2_TR(0x539e92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539e93:{NFSU2_TR(0x539e93);
w1(R+0,u8(0x1ull));
}
B539e95:{NFSU2_TR(0x539e95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539e96:{NFSU2_TR(0x539e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B539e99:{NFSU2_TR(0x539e99);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539ea0:{NFSU2_TR(0x539ea0);
__builtin_memmove((R+16),(R+20),4);
}
B539ea2:{NFSU2_TR(0x539ea2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B539ea3:{NFSU2_TR(0x539ea3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539ea4:L539ea4:{c.instructions+=5;NFSU2_TR(0x539ea4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539ea6:{NFSU2_TR(0x539ea6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B539ea9:{NFSU2_TR(0x539ea9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539eaa:{NFSU2_TR(0x539eaa);
u8 U[4];
w4(U+0,u32(0x9dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539eaf:{NFSU2_TR(0x539eaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539eb4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539960u);}goto L539960;}
}
B539eb4:L539eb4:{c.instructions+=3;NFSU2_TR(0x539eb4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B539eb7:{NFSU2_TR(0x539eb7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B539eba:{NFSU2_TR(0x539eba);
{goto L539eef;}
}
B539ebc:L539ebc:{c.instructions+=3;NFSU2_TR(0x539ebc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B539ebf:{NFSU2_TR(0x539ebf);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x86ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x86ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x86ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B539ec5:{NFSU2_TR(0x539ec5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L539edc;}}
}
B539ec7:L539ec7:{c.instructions+=2;NFSU2_TR(0x539ec7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x539f1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B539ece:{NFSU2_TR(0x539ece);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x539f14ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B539ed5:L539ed5:{c.instructions+=2;NFSU2_TR(0x539ed5);
w4(R+24,u32(0x1ull));
}
B539eda:{NFSU2_TR(0x539eda);
{goto L539ede;}
}
B539edc:L539edc:{c.instructions+=1;NFSU2_TR(0x539edc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B539ede:L539ede:{c.instructions+=5;NFSU2_TR(0x539ede);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539ee0:{NFSU2_TR(0x539ee0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B539ee3:{NFSU2_TR(0x539ee3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539ee4:{NFSU2_TR(0x539ee4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539ee5:{NFSU2_TR(0x539ee5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539eeaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539960u);}goto L539960;}
}
B539eea:L539eea:{c.instructions+=2;NFSU2_TR(0x539eea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B539eed:{NFSU2_TR(0x539eed);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B539eef:L539eef:{c.instructions+=4;NFSU2_TR(0x539eef);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B539ef2:{NFSU2_TR(0x539ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B539ef9:{NFSU2_TR(0x539ef9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+12),(U+1),1);
}
B539efc:{NFSU2_TR(0x539efc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539f01ull));
TAIL_STATIC(0x4def30u,4de);
}
B539f01:L539f01:{c.instructions+=8;NFSU2_TR(0x539f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B539f04:{NFSU2_TR(0x539f04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B539f05:{NFSU2_TR(0x539f05);
__builtin_memmove((R+0),(R+12),1);
}
B539f07:{NFSU2_TR(0x539f07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B539f08:{NFSU2_TR(0x539f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B539f0f:{NFSU2_TR(0x539f0f);
__builtin_memmove((R+16),(R+20),4);
}
B539f11:{NFSU2_TR(0x539f11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B539f12:{NFSU2_TR(0x539f12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539fb0:L539fb0:{c.instructions+=2;NFSU2_TR(0x539fb0);
u8 U[4];
w4(U+0,u32(0x9aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539fb5:{NFSU2_TR(0x539fb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539fbaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539d00u);}goto L539d00;}
}
B539fba:L539fba:{c.instructions+=3;NFSU2_TR(0x539fba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B539fbd:{NFSU2_TR(0x539fbd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539fbf:{NFSU2_TR(0x539fbf);
if(r1(R+518)){{goto L539fe9;}}
}
B539fc1:L539fc1:{c.instructions+=2;NFSU2_TR(0x539fc1);
u8 U[4];
w4(U+0,u32(0x9dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539fc6:{NFSU2_TR(0x539fc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539fcbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539d00u);}goto L539d00;}
}
B539fcb:L539fcb:{c.instructions+=3;NFSU2_TR(0x539fcb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B539fce:{NFSU2_TR(0x539fce);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B539fd0:{NFSU2_TR(0x539fd0);
if(r1(R+518)){{goto L539fe9;}}
}
B539fd2:L539fd2:{c.instructions+=2;NFSU2_TR(0x539fd2);
u8 U[4];
w4(U+0,u32(0x9bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539fd7:{NFSU2_TR(0x539fd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x539fdcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x539d00u);}goto L539d00;}
}
B539fdc:L539fdc:{c.instructions+=3;NFSU2_TR(0x539fdc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B539fdf:{NFSU2_TR(0x539fdf);
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
B539fe1:{NFSU2_TR(0x539fe1);
if(r1(R+518)){{goto L539fe9;}}
}
B539fe3:L539fe3:{c.instructions+=2;NFSU2_TR(0x539fe3);
w4(R+0,u32(0x1ull));
}
B539fe8:{NFSU2_TR(0x539fe8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539fe9:L539fe9:{c.instructions+=2;NFSU2_TR(0x539fe9);
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
B539feb:{NFSU2_TR(0x539feb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B539ff0:L539ff0:{c.instructions+=8;NFSU2_TR(0x539ff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B539ff3:{NFSU2_TR(0x539ff3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539ff4:{NFSU2_TR(0x539ff4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539ff5:{NFSU2_TR(0x539ff5);
__builtin_memmove((R+24),(R+4),4);
}
B539ff7:{NFSU2_TR(0x539ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B539ffa:{NFSU2_TR(0x539ffa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B539ffb:{NFSU2_TR(0x539ffb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+28),(U+0),4);
}
B539ffe:{NFSU2_TR(0x539ffe);
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
TAIL_STATIC(0x53a000u,53a);
}
XIT:NFSU2_TR_EXIT(0x539,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
