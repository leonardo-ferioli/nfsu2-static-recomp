#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_758(u8* __restrict R,Cpu& c);
u32 body_75a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x759,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x759,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_759(u8* __restrict R,Cpu& c);
u32 page_759(Cpu& c){return body_759(c.regs.data(),c);}
__attribute__((noinline)) u32 body_759(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x759002:goto L759002;
case 0x759006:c.instructions+=5;goto B759006;
case 0x75900c:c.instructions+=4;goto B75900c;
case 0x75900f:c.instructions+=3;goto B75900f;
case 0x759013:c.instructions+=2;goto B759013;
case 0x759015:c.instructions+=1;goto B759015;
case 0x75901a:goto L75901a;
case 0x75901c:c.instructions+=1;goto B75901c;
case 0x759022:goto L759022;
case 0x759027:c.instructions+=1;goto B759027;
case 0x75902d:goto L75902d;
case 0x759031:c.instructions+=2;goto B759031;
case 0x759034:c.instructions+=1;goto B759034;
case 0x75903a:goto L75903a;
case 0x759040:c.instructions+=1;goto B759040;
case 0x759046:goto L759046;
case 0x75904a:c.instructions+=8;goto B75904a;
case 0x75904d:c.instructions+=7;goto B75904d;
case 0x759053:c.instructions+=6;goto B759053;
case 0x759059:c.instructions+=5;goto B759059;
case 0x75905a:c.instructions+=4;goto B75905a;
case 0x75905d:c.instructions+=3;goto B75905d;
case 0x75905f:c.instructions+=2;goto B75905f;
case 0x759062:c.instructions+=1;goto B759062;
case 0x759064:goto L759064;
case 0x759066:goto L759066;
case 0x759068:c.instructions+=2;goto B759068;
case 0x75906c:c.instructions+=1;goto B75906c;
case 0x75906f:goto L75906f;
case 0x759071:goto L759071;
case 0x759075:c.instructions+=3;goto B759075;
case 0x759079:c.instructions+=2;goto B759079;
case 0x75907d:c.instructions+=1;goto B75907d;
case 0x759082:goto L759082;
case 0x759084:c.instructions+=1;goto B759084;
case 0x75908a:goto L75908a;
case 0x75908f:c.instructions+=1;goto B75908f;
case 0x759095:goto L759095;
case 0x759099:c.instructions+=4;goto B759099;
case 0x75909c:c.instructions+=3;goto B75909c;
case 0x7590a0:c.instructions+=2;goto B7590a0;
case 0x7590a2:c.instructions+=1;goto B7590a2;
case 0x7590a7:goto L7590a7;
case 0x7590a9:c.instructions+=1;goto B7590a9;
case 0x7590af:goto L7590af;
case 0x7590b4:c.instructions+=1;goto B7590b4;
case 0x7590ba:goto L7590ba;
case 0x7590be:c.instructions+=3;goto B7590be;
case 0x7590bf:c.instructions+=2;goto B7590bf;
case 0x7590c0:c.instructions+=1;goto B7590c0;
case 0x7590c5:goto L7590c5;
case 0x7590c9:c.instructions+=6;goto B7590c9;
case 0x7590cd:c.instructions+=5;goto B7590cd;
case 0x7590d3:c.instructions+=4;goto B7590d3;
case 0x7590d6:c.instructions+=3;goto B7590d6;
case 0x7590da:c.instructions+=2;goto B7590da;
case 0x7590dc:c.instructions+=1;goto B7590dc;
case 0x7590e1:goto L7590e1;
case 0x7590e3:c.instructions+=1;goto B7590e3;
case 0x7590e9:goto L7590e9;
case 0x7590ee:c.instructions+=1;goto B7590ee;
case 0x7590f4:goto L7590f4;
case 0x7590f8:c.instructions+=3;goto B7590f8;
case 0x7590fb:c.instructions+=2;goto B7590fb;
case 0x7590fd:c.instructions+=1;goto B7590fd;
case 0x759103:goto L759103;
case 0x759104:c.instructions+=2;goto B759104;
case 0x75910a:c.instructions+=1;goto B75910a;
case 0x759110:goto L759110;
case 0x759114:c.instructions+=5;goto B759114;
case 0x75911a:c.instructions+=4;goto B75911a;
case 0x75911c:c.instructions+=3;goto B75911c;
case 0x75911f:c.instructions+=2;goto B75911f;
case 0x759122:c.instructions+=1;goto B759122;
case 0x759128:goto L759128;
case 0x75912a:goto L75912a;
case 0x75912c:c.instructions+=1;goto B75912c;
case 0x75912f:goto L75912f;
case 0x759131:goto L759131;
case 0x759138:c.instructions+=1;goto B759138;
case 0x75913e:goto L75913e;
case 0x759144:c.instructions+=5;goto B759144;
case 0x75914b:c.instructions+=4;goto B75914b;
case 0x75914f:c.instructions+=3;goto B75914f;
case 0x759153:c.instructions+=2;goto B759153;
case 0x759155:c.instructions+=1;goto B759155;
case 0x75915a:goto L75915a;
case 0x75915c:c.instructions+=1;goto B75915c;
case 0x759162:goto L759162;
case 0x759167:c.instructions+=1;goto B759167;
case 0x75916d:goto L75916d;
case 0x759171:c.instructions+=1;goto B759171;
case 0x759176:goto L759176;
case 0x759178:c.instructions+=1;goto B759178;
case 0x75917e:goto L75917e;
case 0x759183:c.instructions+=1;goto B759183;
case 0x759189:goto L759189;
case 0x75918d:c.instructions+=2;goto B75918d;
case 0x759190:c.instructions+=1;goto B759190;
case 0x759196:goto L759196;
case 0x75919c:c.instructions+=1;goto B75919c;
case 0x7591a2:goto L7591a2;
case 0x7591a5:c.instructions+=2;goto B7591a5;
case 0x7591ab:c.instructions+=1;goto B7591ab;
case 0x7591ad:goto L7591ad;
case 0x7591b0:c.instructions+=4;goto B7591b0;
case 0x7591b6:c.instructions+=3;goto B7591b6;
case 0x7591b9:c.instructions+=2;goto B7591b9;
case 0x7591bc:c.instructions+=1;goto B7591bc;
case 0x7591be:goto L7591be;
case 0x7591c4:c.instructions+=2;goto B7591c4;
case 0x7591c6:c.instructions+=1;goto B7591c6;
case 0x7591c8:goto L7591c8;
case 0x7591ca:c.instructions+=1;goto B7591ca;
case 0x7591cd:goto L7591cd;
case 0x7591cf:goto L7591cf;
case 0x7591d1:c.instructions+=1;goto B7591d1;
case 0x7591d4:goto L7591d4;
case 0x7591d6:goto L7591d6;
case 0x7591d8:c.instructions+=5;goto B7591d8;
case 0x7591de:c.instructions+=4;goto B7591de;
case 0x7591e5:c.instructions+=3;goto B7591e5;
case 0x7591e9:c.instructions+=2;goto B7591e9;
case 0x7591ed:c.instructions+=1;goto B7591ed;
case 0x7591f2:goto L7591f2;
case 0x7591f4:c.instructions+=1;goto B7591f4;
case 0x7591fa:goto L7591fa;
case 0x7591ff:c.instructions+=1;goto B7591ff;
case 0x759201:goto L759201;
case 0x759205:c.instructions+=2;goto B759205;
case 0x759208:c.instructions+=1;goto B759208;
case 0x75920a:goto L75920a;
case 0x759210:c.instructions+=1;goto B759210;
case 0x759212:goto L759212;
case 0x759215:c.instructions+=2;goto B759215;
case 0x75921b:c.instructions+=1;goto B75921b;
case 0x75921d:goto L75921d;
case 0x759220:c.instructions+=5;goto B759220;
case 0x759221:c.instructions+=4;goto B759221;
case 0x759224:c.instructions+=3;goto B759224;
case 0x759226:c.instructions+=2;goto B759226;
case 0x759229:c.instructions+=1;goto B759229;
case 0x75922f:goto L75922f;
case 0x759231:goto L759231;
case 0x759233:goto L759233;
case 0x759236:goto L759236;
case 0x759238:goto L759238;
case 0x75923c:c.instructions+=2;goto B75923c;
case 0x759242:c.instructions+=1;goto B759242;
case 0x759245:goto L759245;
case 0x759247:c.instructions+=4;goto B759247;
case 0x759249:c.instructions+=3;goto B759249;
case 0x75924b:c.instructions+=2;goto B75924b;
case 0x75924d:c.instructions+=1;goto B75924d;
case 0x75924f:goto L75924f;
case 0x759251:c.instructions+=1;goto B759251;
case 0x759253:goto L759253;
case 0x759256:c.instructions+=4;goto B759256;
case 0x759259:c.instructions+=3;goto B759259;
case 0x75925b:c.instructions+=2;goto B75925b;
case 0x75925d:c.instructions+=1;goto B75925d;
case 0x75925f:goto L75925f;
case 0x759262:c.instructions+=3;goto B759262;
case 0x759265:c.instructions+=2;goto B759265;
case 0x759267:c.instructions+=1;goto B759267;
case 0x759269:goto L759269;
case 0x75926b:c.instructions+=1;goto B75926b;
case 0x75926d:goto L75926d;
case 0x759273:c.instructions+=3;goto B759273;
case 0x759275:c.instructions+=2;goto B759275;
case 0x759278:c.instructions+=1;goto B759278;
case 0x75927a:goto L75927a;
case 0x75927c:goto L75927c;
case 0x75927e:c.instructions+=1;goto B75927e;
case 0x759280:goto L759280;
case 0x759281:c.instructions+=6;goto B759281;
case 0x759282:c.instructions+=5;goto B759282;
case 0x759283:c.instructions+=4;goto B759283;
case 0x759288:c.instructions+=3;goto B759288;
case 0x759289:c.instructions+=2;goto B759289;
case 0x75928d:c.instructions+=1;goto B75928d;
case 0x759292:goto L759292;
case 0x759295:c.instructions+=1;goto B759295;
case 0x759296:goto L759296;
case 0x759297:c.instructions+=6;goto B759297;
case 0x759298:c.instructions+=5;goto B759298;
case 0x759299:c.instructions+=4;goto B759299;
case 0x75929e:c.instructions+=3;goto B75929e;
case 0x75929f:c.instructions+=2;goto B75929f;
case 0x7592a3:c.instructions+=1;goto B7592a3;
case 0x7592a8:goto L7592a8;
case 0x7592ab:c.instructions+=1;goto B7592ab;
case 0x7592ac:goto L7592ac;
case 0x7592ad:c.instructions+=6;goto B7592ad;
case 0x7592ae:c.instructions+=5;goto B7592ae;
case 0x7592af:c.instructions+=4;goto B7592af;
case 0x7592b4:c.instructions+=3;goto B7592b4;
case 0x7592b5:c.instructions+=2;goto B7592b5;
case 0x7592b9:c.instructions+=1;goto B7592b9;
case 0x7592be:goto L7592be;
case 0x7592c1:c.instructions+=1;goto B7592c1;
case 0x7592c2:goto L7592c2;
case 0x7592c4:c.instructions+=1;goto B7592c4;
case 0x7592c7:goto L7592c7;
case 0x7592c9:c.instructions+=1;goto B7592c9;
case 0x7592cb:goto L7592cb;
case 0x7592cc:c.instructions+=6;goto B7592cc;
case 0x7592cd:c.instructions+=5;goto B7592cd;
case 0x7592ce:c.instructions+=4;goto B7592ce;
case 0x7592d3:c.instructions+=3;goto B7592d3;
case 0x7592d4:c.instructions+=2;goto B7592d4;
case 0x7592d8:c.instructions+=1;goto B7592d8;
case 0x7592dd:goto L7592dd;
case 0x7592e0:c.instructions+=1;goto B7592e0;
case 0x7592e1:goto L7592e1;
case 0x7592e6:c.instructions+=3;goto B7592e6;
case 0x7592e8:c.instructions+=2;goto B7592e8;
case 0x7592ed:c.instructions+=1;goto B7592ed;
case 0x7592f3:goto L7592f3;
case 0x7592f6:goto L7592f6;
case 0x7592f8:goto L7592f8;
case 0x7592fa:c.instructions+=3;goto B7592fa;
case 0x7592fc:c.instructions+=2;goto B7592fc;
case 0x7592fe:c.instructions+=1;goto B7592fe;
case 0x759300:goto L759300;
case 0x759302:c.instructions+=1;goto B759302;
case 0x759304:goto L759304;
case 0x759307:c.instructions+=3;goto B759307;
case 0x759309:c.instructions+=2;goto B759309;
case 0x75930c:c.instructions+=1;goto B75930c;
case 0x75930e:goto L75930e;
case 0x759311:c.instructions+=3;goto B759311;
case 0x759314:c.instructions+=2;goto B759314;
case 0x759316:c.instructions+=1;goto B759316;
case 0x759318:goto L759318;
case 0x75931a:c.instructions+=1;goto B75931a;
case 0x75931c:goto L75931c;
case 0x75931e:c.instructions+=1;goto B75931e;
case 0x759321:goto L759321;
case 0x759323:c.instructions+=1;goto B759323;
case 0x759329:goto L759329;
case 0x75932c:c.instructions+=2;goto B75932c;
case 0x75932f:c.instructions+=1;goto B75932f;
case 0x759330:goto L759330;
case 0x759332:c.instructions+=3;goto B759332;
case 0x759334:c.instructions+=2;goto B759334;
case 0x759336:c.instructions+=1;goto B759336;
case 0x759338:goto L759338;
case 0x75933a:c.instructions+=1;goto B75933a;
case 0x75933c:goto L75933c;
case 0x75933f:c.instructions+=3;goto B75933f;
case 0x759341:c.instructions+=2;goto B759341;
case 0x759344:c.instructions+=1;goto B759344;
case 0x759346:goto L759346;
case 0x759349:c.instructions+=3;goto B759349;
case 0x75934c:c.instructions+=2;goto B75934c;
case 0x75934e:c.instructions+=1;goto B75934e;
case 0x759350:goto L759350;
case 0x759352:c.instructions+=1;goto B759352;
case 0x759354:goto L759354;
case 0x759356:c.instructions+=1;goto B759356;
case 0x759359:goto L759359;
case 0x75935b:c.instructions+=1;goto B75935b;
case 0x759361:goto L759361;
case 0x759364:c.instructions+=1;goto B759364;
case 0x759367:goto L759367;
case 0x759369:c.instructions+=3;goto B759369;
case 0x75936b:c.instructions+=2;goto B75936b;
case 0x75936d:c.instructions+=1;goto B75936d;
case 0x75936f:goto L75936f;
case 0x759371:c.instructions+=1;goto B759371;
case 0x759373:goto L759373;
case 0x759376:c.instructions+=3;goto B759376;
case 0x759378:c.instructions+=2;goto B759378;
case 0x75937b:c.instructions+=1;goto B75937b;
case 0x75937d:goto L75937d;
case 0x759380:c.instructions+=3;goto B759380;
case 0x759383:c.instructions+=2;goto B759383;
case 0x759385:c.instructions+=1;goto B759385;
case 0x759387:goto L759387;
case 0x759389:c.instructions+=1;goto B759389;
case 0x75938b:goto L75938b;
case 0x75938d:c.instructions+=1;goto B75938d;
case 0x759390:goto L759390;
case 0x759392:c.instructions+=1;goto B759392;
case 0x759394:goto L759394;
case 0x759397:c.instructions+=2;goto B759397;
case 0x75939a:c.instructions+=1;goto B75939a;
case 0x7593a0:goto L7593a0;
case 0x7593a2:c.instructions+=3;goto B7593a2;
case 0x7593a4:c.instructions+=2;goto B7593a4;
case 0x7593a6:c.instructions+=1;goto B7593a6;
case 0x7593a8:goto L7593a8;
case 0x7593aa:c.instructions+=1;goto B7593aa;
case 0x7593ac:goto L7593ac;
case 0x7593af:c.instructions+=3;goto B7593af;
case 0x7593b1:c.instructions+=2;goto B7593b1;
case 0x7593b4:c.instructions+=1;goto B7593b4;
case 0x7593b6:goto L7593b6;
case 0x7593b9:c.instructions+=3;goto B7593b9;
case 0x7593bc:c.instructions+=2;goto B7593bc;
case 0x7593be:c.instructions+=1;goto B7593be;
case 0x7593c0:goto L7593c0;
case 0x7593c2:c.instructions+=1;goto B7593c2;
case 0x7593c4:goto L7593c4;
case 0x7593c6:c.instructions+=1;goto B7593c6;
case 0x7593c9:goto L7593c9;
case 0x7593cb:c.instructions+=1;goto B7593cb;
case 0x7593cd:goto L7593cd;
case 0x7593d0:c.instructions+=1;goto B7593d0;
case 0x7593d6:goto L7593d6;
case 0x7593d8:c.instructions+=3;goto B7593d8;
case 0x7593da:c.instructions+=2;goto B7593da;
case 0x7593dc:c.instructions+=1;goto B7593dc;
case 0x7593de:goto L7593de;
case 0x7593e0:c.instructions+=1;goto B7593e0;
case 0x7593e2:goto L7593e2;
case 0x7593e5:c.instructions+=3;goto B7593e5;
case 0x7593e7:c.instructions+=2;goto B7593e7;
case 0x7593ea:c.instructions+=1;goto B7593ea;
case 0x7593ec:goto L7593ec;
case 0x7593ef:c.instructions+=3;goto B7593ef;
case 0x7593f2:c.instructions+=2;goto B7593f2;
case 0x7593f4:c.instructions+=1;goto B7593f4;
case 0x7593f6:goto L7593f6;
case 0x7593f8:c.instructions+=1;goto B7593f8;
case 0x7593fa:goto L7593fa;
case 0x7593fc:c.instructions+=1;goto B7593fc;
case 0x7593ff:goto L7593ff;
case 0x759401:c.instructions+=1;goto B759401;
case 0x759403:goto L759403;
case 0x759406:c.instructions+=3;goto B759406;
case 0x759409:c.instructions+=2;goto B759409;
case 0x75940b:c.instructions+=1;goto B75940b;
case 0x759411:goto L759411;
case 0x759412:c.instructions+=6;goto B759412;
case 0x759413:c.instructions+=5;goto B759413;
case 0x759414:c.instructions+=4;goto B759414;
case 0x759419:c.instructions+=3;goto B759419;
case 0x75941a:c.instructions+=2;goto B75941a;
case 0x75941e:c.instructions+=1;goto B75941e;
case 0x759423:goto L759423;
case 0x759426:c.instructions+=1;goto B759426;
case 0x759427:goto L759427;
case 0x75942a:c.instructions+=1;goto B75942a;
case 0x75942c:goto L75942c;
case 0x75942d:c.instructions+=6;goto B75942d;
case 0x75942e:c.instructions+=5;goto B75942e;
case 0x75942f:c.instructions+=4;goto B75942f;
case 0x759434:c.instructions+=3;goto B759434;
case 0x759435:c.instructions+=2;goto B759435;
case 0x759439:c.instructions+=1;goto B759439;
case 0x75943e:goto L75943e;
case 0x759441:c.instructions+=1;goto B759441;
case 0x759442:goto L759442;
case 0x759445:c.instructions+=2;goto B759445;
case 0x75944b:c.instructions+=1;goto B75944b;
case 0x75944d:goto L75944d;
case 0x75944e:c.instructions+=6;goto B75944e;
case 0x75944f:c.instructions+=5;goto B75944f;
case 0x759450:c.instructions+=4;goto B759450;
case 0x759455:c.instructions+=3;goto B759455;
case 0x759456:c.instructions+=2;goto B759456;
case 0x75945a:c.instructions+=1;goto B75945a;
case 0x75945f:goto L75945f;
case 0x759462:c.instructions+=1;goto B759462;
case 0x759463:goto L759463;
case 0x759469:c.instructions+=2;goto B759469;
case 0x75946c:c.instructions+=1;goto B75946c;
case 0x75946e:goto L75946e;
case 0x75946f:c.instructions+=1;goto B75946f;
case 0x759471:goto L759471;
case 0x759473:c.instructions+=1;goto B759473;
case 0x759475:goto L759475;
case 0x759479:c.instructions+=6;goto B759479;
case 0x75947d:c.instructions+=5;goto B75947d;
case 0x759481:c.instructions+=4;goto B759481;
case 0x759482:c.instructions+=3;goto B759482;
case 0x759483:c.instructions+=2;goto B759483;
case 0x759484:c.instructions+=1;goto B759484;
case 0x759489:goto L759489;
case 0x75948e:c.instructions+=1;goto B75948e;
case 0x759490:goto L759490;
case 0x759494:c.instructions+=6;goto B759494;
case 0x759498:c.instructions+=5;goto B759498;
case 0x75949c:c.instructions+=4;goto B75949c;
case 0x75949d:c.instructions+=3;goto B75949d;
case 0x75949e:c.instructions+=2;goto B75949e;
case 0x75949f:c.instructions+=1;goto B75949f;
case 0x7594a4:goto L7594a4;
case 0x7594a9:goto L7594a9;
case 0x7594ac:goto L7594ac;
case 0x7594b2:c.instructions+=7;goto B7594b2;
case 0x7594b6:c.instructions+=6;goto B7594b6;
case 0x7594b7:c.instructions+=5;goto B7594b7;
case 0x7594bd:c.instructions+=4;goto B7594bd;
case 0x7594be:c.instructions+=3;goto B7594be;
case 0x7594bf:c.instructions+=2;goto B7594bf;
case 0x7594c1:c.instructions+=1;goto B7594c1;
case 0x7594c6:goto L7594c6;
case 0x7594c9:c.instructions+=4;goto B7594c9;
case 0x7594cb:c.instructions+=3;goto B7594cb;
case 0x7594cd:c.instructions+=2;goto B7594cd;
case 0x7594d1:c.instructions+=1;goto B7594d1;
case 0x7594d5:goto L7594d5;
case 0x7594d7:goto L7594d7;
case 0x7594d9:c.instructions+=9;goto B7594d9;
case 0x7594dc:c.instructions+=8;goto B7594dc;
case 0x7594dd:c.instructions+=7;goto B7594dd;
case 0x7594de:c.instructions+=6;goto B7594de;
case 0x7594df:c.instructions+=5;goto B7594df;
case 0x7594e0:c.instructions+=4;goto B7594e0;
case 0x7594e1:c.instructions+=3;goto B7594e1;
case 0x7594e4:c.instructions+=2;goto B7594e4;
case 0x7594e8:c.instructions+=1;goto B7594e8;
case 0x7594ed:goto L7594ed;
case 0x7594f0:c.instructions+=1;goto B7594f0;
case 0x7594f1:goto L7594f1;
case 0x7594f2:c.instructions+=6;goto B7594f2;
case 0x7594f3:c.instructions+=5;goto B7594f3;
case 0x7594f4:c.instructions+=4;goto B7594f4;
case 0x7594f9:c.instructions+=3;goto B7594f9;
case 0x7594fa:c.instructions+=2;goto B7594fa;
case 0x7594fe:c.instructions+=1;goto B7594fe;
case 0x759503:goto L759503;
case 0x759506:c.instructions+=1;goto B759506;
case 0x759507:goto L759507;
case 0x759508:c.instructions+=6;goto B759508;
case 0x759509:c.instructions+=5;goto B759509;
case 0x75950a:c.instructions+=4;goto B75950a;
case 0x75950f:c.instructions+=3;goto B75950f;
case 0x759510:c.instructions+=2;goto B759510;
case 0x759514:c.instructions+=1;goto B759514;
case 0x759519:goto L759519;
case 0x75951c:c.instructions+=1;goto B75951c;
case 0x75951d:goto L75951d;
case 0x75951e:c.instructions+=6;goto B75951e;
case 0x75951f:c.instructions+=5;goto B75951f;
case 0x759520:c.instructions+=4;goto B759520;
case 0x759525:c.instructions+=3;goto B759525;
case 0x759526:c.instructions+=2;goto B759526;
case 0x75952a:c.instructions+=1;goto B75952a;
case 0x75952f:goto L75952f;
case 0x759532:c.instructions+=1;goto B759532;
case 0x759533:goto L759533;
case 0x759534:c.instructions+=6;goto B759534;
case 0x759535:c.instructions+=5;goto B759535;
case 0x759536:c.instructions+=4;goto B759536;
case 0x75953b:c.instructions+=3;goto B75953b;
case 0x75953c:c.instructions+=2;goto B75953c;
case 0x759540:c.instructions+=1;goto B759540;
case 0x759545:goto L759545;
case 0x759548:c.instructions+=1;goto B759548;
case 0x759549:goto L759549;
case 0x75954a:c.instructions+=6;goto B75954a;
case 0x75954b:c.instructions+=5;goto B75954b;
case 0x75954c:c.instructions+=4;goto B75954c;
case 0x759551:c.instructions+=3;goto B759551;
case 0x759552:c.instructions+=2;goto B759552;
case 0x759556:c.instructions+=1;goto B759556;
case 0x75955b:goto L75955b;
case 0x75955e:c.instructions+=1;goto B75955e;
case 0x75955f:goto L75955f;
case 0x759560:c.instructions+=6;goto B759560;
case 0x759561:c.instructions+=5;goto B759561;
case 0x759562:c.instructions+=4;goto B759562;
case 0x759567:c.instructions+=3;goto B759567;
case 0x759568:c.instructions+=2;goto B759568;
case 0x75956c:c.instructions+=1;goto B75956c;
case 0x759571:goto L759571;
case 0x759574:c.instructions+=1;goto B759574;
case 0x759575:goto L759575;
case 0x759576:c.instructions+=6;goto B759576;
case 0x759577:c.instructions+=5;goto B759577;
case 0x759578:c.instructions+=4;goto B759578;
case 0x75957d:c.instructions+=3;goto B75957d;
case 0x75957e:c.instructions+=2;goto B75957e;
case 0x759582:c.instructions+=1;goto B759582;
case 0x759587:goto L759587;
case 0x75958a:c.instructions+=1;goto B75958a;
case 0x75958b:goto L75958b;
case 0x75958c:c.instructions+=6;goto B75958c;
case 0x75958d:c.instructions+=5;goto B75958d;
case 0x75958e:c.instructions+=4;goto B75958e;
case 0x759593:c.instructions+=3;goto B759593;
case 0x759594:c.instructions+=2;goto B759594;
case 0x759598:c.instructions+=1;goto B759598;
case 0x75959d:goto L75959d;
case 0x7595a0:c.instructions+=1;goto B7595a0;
case 0x7595a1:goto L7595a1;
case 0x7595a2:c.instructions+=6;goto B7595a2;
case 0x7595a3:c.instructions+=5;goto B7595a3;
case 0x7595a4:c.instructions+=4;goto B7595a4;
case 0x7595a9:c.instructions+=3;goto B7595a9;
case 0x7595aa:c.instructions+=2;goto B7595aa;
case 0x7595ae:c.instructions+=1;goto B7595ae;
case 0x7595b3:goto L7595b3;
case 0x7595b6:c.instructions+=1;goto B7595b6;
case 0x7595b7:goto L7595b7;
case 0x7595b8:c.instructions+=6;goto B7595b8;
case 0x7595b9:c.instructions+=5;goto B7595b9;
case 0x7595ba:c.instructions+=4;goto B7595ba;
case 0x7595bf:c.instructions+=3;goto B7595bf;
case 0x7595c0:c.instructions+=2;goto B7595c0;
case 0x7595c4:c.instructions+=1;goto B7595c4;
case 0x7595c9:goto L7595c9;
case 0x7595cc:c.instructions+=1;goto B7595cc;
case 0x7595cd:goto L7595cd;
case 0x7595ce:c.instructions+=6;goto B7595ce;
case 0x7595cf:c.instructions+=5;goto B7595cf;
case 0x7595d0:c.instructions+=4;goto B7595d0;
case 0x7595d5:c.instructions+=3;goto B7595d5;
case 0x7595d6:c.instructions+=2;goto B7595d6;
case 0x7595da:c.instructions+=1;goto B7595da;
case 0x7595df:goto L7595df;
case 0x7595e2:c.instructions+=1;goto B7595e2;
case 0x7595e3:goto L7595e3;
case 0x7595e4:c.instructions+=6;goto B7595e4;
case 0x7595e5:c.instructions+=5;goto B7595e5;
case 0x7595e6:c.instructions+=4;goto B7595e6;
case 0x7595eb:c.instructions+=3;goto B7595eb;
case 0x7595ec:c.instructions+=2;goto B7595ec;
case 0x7595f0:c.instructions+=1;goto B7595f0;
case 0x7595f5:goto L7595f5;
case 0x7595f8:c.instructions+=1;goto B7595f8;
case 0x7595f9:goto L7595f9;
case 0x7595fa:c.instructions+=6;goto B7595fa;
case 0x7595fb:c.instructions+=5;goto B7595fb;
case 0x7595fc:c.instructions+=4;goto B7595fc;
case 0x759601:c.instructions+=3;goto B759601;
case 0x759602:c.instructions+=2;goto B759602;
case 0x759606:c.instructions+=1;goto B759606;
case 0x75960b:goto L75960b;
case 0x75960e:c.instructions+=1;goto B75960e;
case 0x75960f:goto L75960f;
case 0x759610:c.instructions+=6;goto B759610;
case 0x759611:c.instructions+=5;goto B759611;
case 0x759612:c.instructions+=4;goto B759612;
case 0x759617:c.instructions+=3;goto B759617;
case 0x759618:c.instructions+=2;goto B759618;
case 0x75961c:c.instructions+=1;goto B75961c;
case 0x759621:goto L759621;
case 0x759624:c.instructions+=1;goto B759624;
case 0x759625:goto L759625;
case 0x759626:c.instructions+=6;goto B759626;
case 0x759627:c.instructions+=5;goto B759627;
case 0x759628:c.instructions+=4;goto B759628;
case 0x75962d:c.instructions+=3;goto B75962d;
case 0x75962e:c.instructions+=2;goto B75962e;
case 0x759632:c.instructions+=1;goto B759632;
case 0x759637:goto L759637;
case 0x75963a:c.instructions+=1;goto B75963a;
case 0x75963b:goto L75963b;
case 0x75963c:c.instructions+=6;goto B75963c;
case 0x75963d:c.instructions+=5;goto B75963d;
case 0x75963e:c.instructions+=4;goto B75963e;
case 0x759643:c.instructions+=3;goto B759643;
case 0x759644:c.instructions+=2;goto B759644;
case 0x759648:c.instructions+=1;goto B759648;
case 0x75964d:goto L75964d;
case 0x759650:c.instructions+=1;goto B759650;
case 0x759651:goto L759651;
case 0x759655:c.instructions+=6;goto B759655;
case 0x759656:c.instructions+=5;goto B759656;
case 0x759657:c.instructions+=4;goto B759657;
case 0x759658:c.instructions+=3;goto B759658;
case 0x75965b:c.instructions+=2;goto B75965b;
case 0x75965c:c.instructions+=1;goto B75965c;
case 0x759661:goto L759661;
case 0x759664:c.instructions+=1;goto B759664;
case 0x759670:goto L759670;
case 0x759675:c.instructions+=1;goto B759675;
case 0x75967a:goto L75967a;
case 0x75967c:c.instructions+=3;goto B75967c;
case 0x75967f:c.instructions+=2;goto B75967f;
case 0x759681:c.instructions+=1;goto B759681;
case 0x759683:goto L759683;
case 0x759684:c.instructions+=3;goto B759684;
case 0x759689:c.instructions+=2;goto B759689;
case 0x75968b:c.instructions+=1;goto B75968b;
case 0x75968d:goto L75968d;
case 0x75968f:goto L75968f;
case 0x759690:goto L759690;
case 0x759692:c.instructions+=1;goto B759692;
case 0x7596a0:goto L7596a0;
case 0x7596a1:c.instructions+=4;goto B7596a1;
case 0x7596a5:c.instructions+=3;goto B7596a5;
case 0x7596a7:c.instructions+=2;goto B7596a7;
case 0x7596a8:c.instructions+=1;goto B7596a8;
case 0x7596ad:goto L7596ad;
case 0x7596ae:c.instructions+=1;goto B7596ae;
case 0x7596b3:goto L7596b3;
case 0x7596b6:c.instructions+=2;goto B7596b6;
case 0x7596b7:c.instructions+=1;goto B7596b7;
case 0x7596c0:goto L7596c0;
case 0x7596c4:c.instructions+=2;goto B7596c4;
case 0x7596c6:c.instructions+=1;goto B7596c6;
case 0x7596c8:goto L7596c8;
case 0x7596ca:c.instructions+=1;goto B7596ca;
case 0x7596cb:goto L7596cb;
case 0x7596cf:c.instructions+=10;goto B7596cf;
case 0x7596d1:c.instructions+=9;goto B7596d1;
case 0x7596d2:c.instructions+=8;goto B7596d2;
case 0x7596d3:c.instructions+=7;goto B7596d3;
case 0x7596d7:c.instructions+=6;goto B7596d7;
case 0x7596d8:c.instructions+=5;goto B7596d8;
case 0x7596dc:c.instructions+=4;goto B7596dc;
case 0x7596dd:c.instructions+=3;goto B7596dd;
case 0x7596de:c.instructions+=2;goto B7596de;
case 0x7596df:c.instructions+=1;goto B7596df;
case 0x7596e4:goto L7596e4;
case 0x7596e6:c.instructions+=3;goto B7596e6;
case 0x7596e9:c.instructions+=2;goto B7596e9;
case 0x7596eb:c.instructions+=1;goto B7596eb;
case 0x7596ed:goto L7596ed;
case 0x7596f2:c.instructions+=1;goto B7596f2;
case 0x7596f7:goto L7596f7;
case 0x7596f9:c.instructions+=3;goto B7596f9;
case 0x7596fc:c.instructions+=2;goto B7596fc;
case 0x7596fe:c.instructions+=1;goto B7596fe;
case 0x759700:goto L759700;
case 0x759701:c.instructions+=3;goto B759701;
case 0x759703:c.instructions+=2;goto B759703;
case 0x759708:c.instructions+=1;goto B759708;
case 0x75970a:goto L75970a;
case 0x75970c:goto L75970c;
case 0x75970e:c.instructions+=4;goto B75970e;
case 0x759711:c.instructions+=3;goto B759711;
case 0x759713:c.instructions+=2;goto B759713;
case 0x759716:c.instructions+=1;goto B759716;
case 0x75971c:goto L75971c;
case 0x75971e:goto L75971e;
case 0x759720:c.instructions+=1;goto B759720;
case 0x759723:goto L759723;
case 0x759725:goto L759725;
case 0x759726:c.instructions+=6;goto B759726;
case 0x759727:c.instructions+=5;goto B759727;
case 0x759728:c.instructions+=4;goto B759728;
case 0x759732:c.instructions+=3;goto B759732;
case 0x759734:c.instructions+=2;goto B759734;
case 0x759735:c.instructions+=1;goto B759735;
case 0x759736:goto L759736;
case 0x759737:c.instructions+=1;goto B759737;
case 0x75973c:goto L75973c;
case 0x75973f:goto L75973f;
case 0x759740:c.instructions+=4;goto B759740;
case 0x759741:c.instructions+=3;goto B759741;
case 0x759743:c.instructions+=2;goto B759743;
case 0x759744:c.instructions+=1;goto B759744;
case 0x759750:goto L759750;
case 0x759754:c.instructions+=6;goto B759754;
case 0x759755:c.instructions+=5;goto B759755;
case 0x759756:c.instructions+=4;goto B759756;
case 0x75975a:c.instructions+=3;goto B75975a;
case 0x75975b:c.instructions+=2;goto B75975b;
case 0x75975c:c.instructions+=1;goto B75975c;
case 0x759761:goto L759761;
case 0x759763:c.instructions+=3;goto B759763;
case 0x759766:c.instructions+=2;goto B759766;
case 0x759768:c.instructions+=1;goto B759768;
case 0x75976e:goto L75976e;
case 0x75976f:c.instructions+=3;goto B75976f;
case 0x759771:c.instructions+=2;goto B759771;
case 0x759773:c.instructions+=1;goto B759773;
case 0x759778:goto L759778;
case 0x75977b:c.instructions+=3;goto B75977b;
case 0x75977d:c.instructions+=2;goto B75977d;
case 0x75977f:c.instructions+=1;goto B75977f;
case 0x759781:goto L759781;
case 0x759782:c.instructions+=3;goto B759782;
case 0x759787:c.instructions+=2;goto B759787;
case 0x759788:c.instructions+=1;goto B759788;
case 0x759789:goto L759789;
case 0x75978a:c.instructions+=10;goto B75978a;
case 0x75978e:c.instructions+=9;goto B75978e;
case 0x759790:c.instructions+=8;goto B759790;
case 0x759796:c.instructions+=7;goto B759796;
case 0x759797:c.instructions+=6;goto B759797;
case 0x75979c:c.instructions+=5;goto B75979c;
case 0x7597a3:c.instructions+=4;goto B7597a3;
case 0x7597a9:c.instructions+=3;goto B7597a9;
case 0x7597af:c.instructions+=2;goto B7597af;
case 0x7597b5:c.instructions+=1;goto B7597b5;
case 0x7597b7:goto L7597b7;
case 0x7597bc:goto L7597bc;
case 0x7597c0:c.instructions+=1;goto B7597c0;
case 0x7597c2:goto L7597c2;
case 0x7597c8:c.instructions+=5;goto B7597c8;
case 0x7597ca:c.instructions+=4;goto B7597ca;
case 0x7597cc:c.instructions+=3;goto B7597cc;
case 0x7597d1:c.instructions+=2;goto B7597d1;
case 0x7597d4:c.instructions+=1;goto B7597d4;
case 0x7597d8:goto L7597d8;
case 0x7597db:c.instructions+=3;goto B7597db;
case 0x7597dd:c.instructions+=2;goto B7597dd;
case 0x7597df:c.instructions+=1;goto B7597df;
case 0x7597e1:goto L7597e1;
case 0x7597e3:c.instructions+=1;goto B7597e3;
case 0x7597e5:goto L7597e5;
case 0x7597eb:c.instructions+=1;goto B7597eb;
case 0x7597ed:goto L7597ed;
case 0x7597f1:c.instructions+=4;goto B7597f1;
case 0x7597f5:c.instructions+=3;goto B7597f5;
case 0x7597f6:c.instructions+=2;goto B7597f6;
case 0x7597f8:c.instructions+=1;goto B7597f8;
case 0x7597fa:goto L7597fa;
case 0x7597fe:c.instructions+=4;goto B7597fe;
case 0x759801:c.instructions+=3;goto B759801;
case 0x759802:c.instructions+=2;goto B759802;
case 0x759803:c.instructions+=1;goto B759803;
case 0x759808:goto L759808;
case 0x75980f:c.instructions+=10;goto B75980f;
case 0x759816:c.instructions+=9;goto B759816;
case 0x759818:c.instructions+=8;goto B759818;
case 0x75981e:c.instructions+=7;goto B75981e;
case 0x759821:c.instructions+=6;goto B759821;
case 0x759827:c.instructions+=5;goto B759827;
case 0x75982a:c.instructions+=4;goto B75982a;
case 0x75982c:c.instructions+=3;goto B75982c;
case 0x75982f:c.instructions+=2;goto B75982f;
case 0x759831:c.instructions+=1;goto B759831;
case 0x759833:goto L759833;
case 0x759837:c.instructions+=7;goto B759837;
case 0x75983d:c.instructions+=6;goto B75983d;
case 0x759840:c.instructions+=5;goto B759840;
case 0x759846:c.instructions+=4;goto B759846;
case 0x759849:c.instructions+=3;goto B759849;
case 0x75984f:c.instructions+=2;goto B75984f;
case 0x759852:c.instructions+=1;goto B759852;
case 0x759858:goto L759858;
case 0x75985c:c.instructions+=1;goto B75985c;
case 0x75985e:goto L75985e;
case 0x759862:c.instructions+=2;goto B759862;
case 0x759863:c.instructions+=1;goto B759863;
case 0x759868:goto L759868;
case 0x75986b:c.instructions+=3;goto B75986b;
case 0x75986c:c.instructions+=2;goto B75986c;
case 0x759872:c.instructions+=1;goto B759872;
case 0x759877:goto L759877;
case 0x75987a:c.instructions+=1;goto B75987a;
case 0x75987c:goto L75987c;
case 0x759880:c.instructions+=3;goto B759880;
case 0x759882:c.instructions+=2;goto B759882;
case 0x759885:c.instructions+=1;goto B759885;
case 0x75988b:goto L75988b;
case 0x759892:c.instructions+=12;goto B759892;
case 0x759894:c.instructions+=11;goto B759894;
case 0x75989a:c.instructions+=10;goto B75989a;
case 0x7598a0:c.instructions+=9;goto B7598a0;
case 0x7598a7:c.instructions+=8;goto B7598a7;
case 0x7598a8:c.instructions+=7;goto B7598a8;
case 0x7598a9:c.instructions+=6;goto B7598a9;
case 0x7598af:c.instructions+=5;goto B7598af;
case 0x7598b2:c.instructions+=4;goto B7598b2;
case 0x7598b4:c.instructions+=3;goto B7598b4;
case 0x7598b7:c.instructions+=2;goto B7598b7;
case 0x7598b9:c.instructions+=1;goto B7598b9;
case 0x7598bb:goto L7598bb;
case 0x7598c0:c.instructions+=2;goto B7598c0;
case 0x7598c1:c.instructions+=1;goto B7598c1;
case 0x7598c6:goto L7598c6;
case 0x7598c9:c.instructions+=6;goto B7598c9;
case 0x7598cc:c.instructions+=5;goto B7598cc;
case 0x7598d6:c.instructions+=4;goto B7598d6;
case 0x7598d7:c.instructions+=3;goto B7598d7;
case 0x7598d9:c.instructions+=2;goto B7598d9;
case 0x7598da:c.instructions+=1;goto B7598da;
case 0x7598db:goto L7598db;
case 0x7598e5:c.instructions+=1;goto B7598e5;
case 0x7598e7:goto L7598e7;
case 0x7598e8:c.instructions+=2;goto B7598e8;
case 0x7598e9:c.instructions+=1;goto B7598e9;
case 0x7598f0:goto L7598f0;
case 0x7598f4:c.instructions+=7;goto B7598f4;
case 0x7598fa:c.instructions+=6;goto B7598fa;
case 0x7598fc:c.instructions+=5;goto B7598fc;
case 0x7598fe:c.instructions+=4;goto B7598fe;
case 0x759901:c.instructions+=3;goto B759901;
case 0x759902:c.instructions+=2;goto B759902;
case 0x759903:c.instructions+=1;goto B759903;
case 0x759908:goto L759908;
case 0x75990b:c.instructions+=2;goto B75990b;
case 0x75990d:c.instructions+=1;goto B75990d;
case 0x759910:goto L759910;
case 0x759911:c.instructions+=14;goto B759911;
case 0x759913:c.instructions+=13;goto B759913;
case 0x759916:c.instructions+=12;goto B759916;
case 0x75991c:c.instructions+=11;goto B75991c;
case 0x759921:c.instructions+=10;goto B759921;
case 0x759922:c.instructions+=9;goto B759922;
case 0x759923:c.instructions+=8;goto B759923;
case 0x759926:c.instructions+=7;goto B759926;
case 0x759928:c.instructions+=6;goto B759928;
case 0x75992e:c.instructions+=5;goto B75992e;
case 0x75992f:c.instructions+=4;goto B75992f;
case 0x759931:c.instructions+=3;goto B759931;
case 0x759933:c.instructions+=2;goto B759933;
case 0x75993a:c.instructions+=1;goto B75993a;
case 0x759940:goto L759940;
case 0x759946:c.instructions+=2;goto B759946;
case 0x759949:c.instructions+=1;goto B759949;
case 0x75994f:goto L75994f;
case 0x759952:c.instructions+=1;goto B759952;
case 0x759958:goto L759958;
case 0x75995a:c.instructions+=3;goto B75995a;
case 0x75995d:c.instructions+=2;goto B75995d;
case 0x75995f:c.instructions+=1;goto B75995f;
case 0x759961:goto L759961;
case 0x759962:c.instructions+=8;goto B759962;
case 0x759963:c.instructions+=7;goto B759963;
case 0x759964:c.instructions+=6;goto B759964;
case 0x759966:c.instructions+=5;goto B759966;
case 0x759967:c.instructions+=4;goto B759967;
case 0x75996b:c.instructions+=3;goto B75996b;
case 0x75996c:c.instructions+=2;goto B75996c;
case 0x75996d:c.instructions+=1;goto B75996d;
case 0x759972:goto L759972;
case 0x759975:c.instructions+=2;goto B759975;
case 0x759977:c.instructions+=1;goto B759977;
case 0x759979:goto L759979;
case 0x75997b:goto L75997b;
case 0x75997d:c.instructions+=2;goto B75997d;
case 0x759980:c.instructions+=1;goto B759980;
case 0x759982:goto L759982;
case 0x759985:c.instructions+=1;goto B759985;
case 0x759987:goto L759987;
case 0x75998d:c.instructions+=2;goto B75998d;
case 0x759990:c.instructions+=1;goto B759990;
case 0x759992:goto L759992;
case 0x759994:c.instructions+=10;goto B759994;
case 0x759995:c.instructions+=9;goto B759995;
case 0x759996:c.instructions+=8;goto B759996;
case 0x759997:c.instructions+=7;goto B759997;
case 0x75999c:c.instructions+=6;goto B75999c;
case 0x75999e:c.instructions+=5;goto B75999e;
case 0x75999f:c.instructions+=4;goto B75999f;
case 0x7599a6:c.instructions+=3;goto B7599a6;
case 0x7599a7:c.instructions+=2;goto B7599a7;
case 0x7599a8:c.instructions+=1;goto B7599a8;
case 0x7599ad:goto L7599ad;
case 0x7599b0:c.instructions+=2;goto B7599b0;
case 0x7599b2:c.instructions+=1;goto B7599b2;
case 0x7599b4:goto L7599b4;
case 0x7599ba:c.instructions+=4;goto B7599ba;
case 0x7599bc:c.instructions+=3;goto B7599bc;
case 0x7599c2:c.instructions+=2;goto B7599c2;
case 0x7599c8:c.instructions+=1;goto B7599c8;
case 0x7599ca:goto L7599ca;
case 0x7599cc:goto L7599cc;
case 0x7599d6:goto L7599d6;
case 0x7599dd:c.instructions+=1;goto B7599dd;
case 0x7599df:goto L7599df;
case 0x7599e6:c.instructions+=6;goto B7599e6;
case 0x7599e8:c.instructions+=5;goto B7599e8;
case 0x7599ee:c.instructions+=4;goto B7599ee;
case 0x7599f0:c.instructions+=3;goto B7599f0;
case 0x7599f5:c.instructions+=2;goto B7599f5;
case 0x7599fb:c.instructions+=1;goto B7599fb;
case 0x7599fd:goto L7599fd;
case 0x759a04:c.instructions+=4;goto B759a04;
case 0x759a09:c.instructions+=3;goto B759a09;
case 0x759a0d:c.instructions+=2;goto B759a0d;
case 0x759a13:c.instructions+=1;goto B759a13;
case 0x759a15:goto L759a15;
case 0x759a1a:c.instructions+=2;goto B759a1a;
case 0x759a1d:c.instructions+=1;goto B759a1d;
case 0x759a23:goto L759a23;
case 0x759a29:c.instructions+=3;goto B759a29;
case 0x759a2f:c.instructions+=2;goto B759a2f;
case 0x759a31:c.instructions+=1;goto B759a31;
case 0x759a33:goto L759a33;
case 0x759a34:c.instructions+=9;goto B759a34;
case 0x759a35:c.instructions+=8;goto B759a35;
case 0x759a37:c.instructions+=7;goto B759a37;
case 0x759a38:c.instructions+=6;goto B759a38;
case 0x759a39:c.instructions+=5;goto B759a39;
case 0x759a40:c.instructions+=4;goto B759a40;
case 0x759a42:c.instructions+=3;goto B759a42;
case 0x759a43:c.instructions+=2;goto B759a43;
case 0x759a44:c.instructions+=1;goto B759a44;
case 0x759a49:goto L759a49;
case 0x759a4c:c.instructions+=2;goto B759a4c;
case 0x759a4e:c.instructions+=1;goto B759a4e;
case 0x759a50:goto L759a50;
case 0x759a56:c.instructions+=1;goto B759a56;
case 0x759a58:goto L759a58;
case 0x759a5a:goto L759a5a;
case 0x759a64:goto L759a64;
case 0x759a6b:c.instructions+=1;goto B759a6b;
case 0x759a6d:goto L759a6d;
case 0x759a70:c.instructions+=2;goto B759a70;
case 0x759a71:c.instructions+=1;goto B759a71;
case 0x759a74:goto L759a74;
case 0x759a77:c.instructions+=2;goto B759a77;
case 0x759a79:c.instructions+=1;goto B759a79;
case 0x759a7b:goto L759a7b;
case 0x759a7e:c.instructions+=2;goto B759a7e;
case 0x759a81:c.instructions+=1;goto B759a81;
case 0x759a83:goto L759a83;
case 0x759a8d:c.instructions+=1;goto B759a8d;
case 0x759a8f:goto L759a8f;
case 0x759a99:c.instructions+=8;goto B759a99;
case 0x759a9c:c.instructions+=7;goto B759a9c;
case 0x759aa2:c.instructions+=6;goto B759aa2;
case 0x759aa5:c.instructions+=5;goto B759aa5;
case 0x759aab:c.instructions+=4;goto B759aab;
case 0x759aae:c.instructions+=3;goto B759aae;
case 0x759ab4:c.instructions+=2;goto B759ab4;
case 0x759ab7:c.instructions+=1;goto B759ab7;
case 0x759abd:goto L759abd;
case 0x759abe:c.instructions+=1;goto B759abe;
case 0x759ac1:goto L759ac1;
case 0x759ac4:c.instructions+=1;goto B759ac4;
case 0x759ac7:goto L759ac7;
case 0x759ace:c.instructions+=1;goto B759ace;
case 0x759ad0:goto L759ad0;
case 0x759ad2:c.instructions+=5;goto B759ad2;
case 0x759ad4:c.instructions+=4;goto B759ad4;
case 0x759ada:c.instructions+=3;goto B759ada;
case 0x759adb:c.instructions+=2;goto B759adb;
case 0x759adc:c.instructions+=1;goto B759adc;
case 0x759ae1:goto L759ae1;
case 0x759ae4:c.instructions+=1;goto B759ae4;
case 0x759aee:goto L759aee;
case 0x759af5:c.instructions+=1;goto B759af5;
case 0x759af7:goto L759af7;
case 0x759af9:c.instructions+=5;goto B759af9;
case 0x759afa:c.instructions+=4;goto B759afa;
case 0x759afb:c.instructions+=3;goto B759afb;
case 0x759b00:c.instructions+=2;goto B759b00;
case 0x759b01:c.instructions+=1;goto B759b01;
case 0x759b06:goto L759b06;
case 0x759b09:c.instructions+=2;goto B759b09;
case 0x759b0b:c.instructions+=1;goto B759b0b;
case 0x759b0d:goto L759b0d;
case 0x759b0f:c.instructions+=7;goto B759b0f;
case 0x759b11:c.instructions+=6;goto B759b11;
case 0x759b13:c.instructions+=5;goto B759b13;
case 0x759b16:c.instructions+=4;goto B759b16;
case 0x759b19:c.instructions+=3;goto B759b19;
case 0x759b1f:c.instructions+=2;goto B759b1f;
case 0x759b25:c.instructions+=1;goto B759b25;
case 0x759b27:goto L759b27;
case 0x759b29:goto L759b29;
case 0x759b33:c.instructions+=1;goto B759b33;
case 0x759b3d:goto L759b3d;
case 0x759b44:c.instructions+=1;goto B759b44;
case 0x759b4a:goto L759b4a;
case 0x759b51:c.instructions+=24;goto B759b51;
case 0x759b57:c.instructions+=23;goto B759b57;
case 0x759b59:c.instructions+=22;goto B759b59;
case 0x759b5d:c.instructions+=21;goto B759b5d;
case 0x759b61:c.instructions+=20;goto B759b61;
case 0x759b66:c.instructions+=19;goto B759b66;
case 0x759b6b:c.instructions+=18;goto B759b6b;
case 0x759b6f:c.instructions+=17;goto B759b6f;
case 0x759b73:c.instructions+=16;goto B759b73;
case 0x759b77:c.instructions+=15;goto B759b77;
case 0x759b7b:c.instructions+=14;goto B759b7b;
case 0x759b7f:c.instructions+=13;goto B759b7f;
case 0x759b84:c.instructions+=12;goto B759b84;
case 0x759b89:c.instructions+=11;goto B759b89;
case 0x759b8e:c.instructions+=10;goto B759b8e;
case 0x759b94:c.instructions+=9;goto B759b94;
case 0x759b97:c.instructions+=8;goto B759b97;
case 0x759b9b:c.instructions+=7;goto B759b9b;
case 0x759ba1:c.instructions+=6;goto B759ba1;
case 0x759ba5:c.instructions+=5;goto B759ba5;
case 0x759bab:c.instructions+=4;goto B759bab;
case 0x759bad:c.instructions+=3;goto B759bad;
case 0x759bb0:c.instructions+=2;goto B759bb0;
case 0x759bb6:c.instructions+=1;goto B759bb6;
case 0x759bba:goto L759bba;
case 0x759bbc:goto L759bbc;
case 0x759bbe:c.instructions+=1;goto B759bbe;
case 0x759bc1:goto L759bc1;
case 0x759bc3:goto L759bc3;
case 0x759bc9:c.instructions+=7;goto B759bc9;
case 0x759bcc:c.instructions+=6;goto B759bcc;
case 0x759bcf:c.instructions+=5;goto B759bcf;
case 0x759bd0:c.instructions+=4;goto B759bd0;
case 0x759bd4:c.instructions+=3;goto B759bd4;
case 0x759bd5:c.instructions+=2;goto B759bd5;
case 0x759bd6:c.instructions+=1;goto B759bd6;
case 0x759bdb:goto L759bdb;
case 0x759bde:c.instructions+=1;goto B759bde;
case 0x759be8:goto L759be8;
case 0x759bef:c.instructions+=1;goto B759bef;
case 0x759bf5:goto L759bf5;
case 0x759bfb:c.instructions+=2;goto B759bfb;
case 0x759c01:c.instructions+=1;goto B759c01;
case 0x759c07:goto L759c07;
case 0x759c0a:c.instructions+=1;goto B759c0a;
case 0x759c10:goto L759c10;
case 0x759c11:c.instructions+=1;goto B759c11;
case 0x759c16:goto L759c16;
case 0x759c18:c.instructions+=18;goto B759c18;
case 0x759c1b:c.instructions+=17;goto B759c1b;
case 0x759c1d:c.instructions+=16;goto B759c1d;
case 0x759c20:c.instructions+=15;goto B759c20;
case 0x759c23:c.instructions+=14;goto B759c23;
case 0x759c26:c.instructions+=13;goto B759c26;
case 0x759c29:c.instructions+=12;goto B759c29;
case 0x759c2d:c.instructions+=11;goto B759c2d;
case 0x759c2f:c.instructions+=10;goto B759c2f;
case 0x759c32:c.instructions+=9;goto B759c32;
case 0x759c33:c.instructions+=8;goto B759c33;
case 0x759c34:c.instructions+=7;goto B759c34;
case 0x759c38:c.instructions+=6;goto B759c38;
case 0x759c3b:c.instructions+=5;goto B759c3b;
case 0x759c41:c.instructions+=4;goto B759c41;
case 0x759c42:c.instructions+=3;goto B759c42;
case 0x759c43:c.instructions+=2;goto B759c43;
case 0x759c47:c.instructions+=1;goto B759c47;
case 0x759c4c:goto L759c4c;
case 0x759c4f:c.instructions+=2;goto B759c4f;
case 0x759c51:c.instructions+=1;goto B759c51;
case 0x759c53:goto L759c53;
case 0x759c5d:c.instructions+=1;goto B759c5d;
case 0x759c5f:goto L759c5f;
case 0x759c63:c.instructions+=14;goto B759c63;
case 0x759c65:c.instructions+=13;goto B759c65;
case 0x759c68:c.instructions+=12;goto B759c68;
case 0x759c6e:c.instructions+=11;goto B759c6e;
case 0x759c71:c.instructions+=10;goto B759c71;
case 0x759c74:c.instructions+=9;goto B759c74;
case 0x759c78:c.instructions+=8;goto B759c78;
case 0x759c7b:c.instructions+=7;goto B759c7b;
case 0x759c7f:c.instructions+=6;goto B759c7f;
case 0x759c85:c.instructions+=5;goto B759c85;
case 0x759c87:c.instructions+=4;goto B759c87;
case 0x759c8a:c.instructions+=3;goto B759c8a;
case 0x759c8d:c.instructions+=2;goto B759c8d;
case 0x759c90:c.instructions+=1;goto B759c90;
case 0x759c96:goto L759c96;
case 0x759c98:goto L759c98;
case 0x759c9a:c.instructions+=1;goto B759c9a;
case 0x759c9d:goto L759c9d;
case 0x759c9f:goto L759c9f;
case 0x759ca2:c.instructions+=4;goto B759ca2;
case 0x759cac:c.instructions+=3;goto B759cac;
case 0x759cae:c.instructions+=2;goto B759cae;
case 0x759cb4:c.instructions+=1;goto B759cb4;
case 0x759cba:goto L759cba;
case 0x759cc1:c.instructions+=1;goto B759cc1;
case 0x759cc7:goto L759cc7;
case 0x759cce:c.instructions+=8;goto B759cce;
case 0x759cd1:c.instructions+=7;goto B759cd1;
case 0x759cd7:c.instructions+=6;goto B759cd7;
case 0x759cd8:c.instructions+=5;goto B759cd8;
case 0x759cd9:c.instructions+=4;goto B759cd9;
case 0x759cdf:c.instructions+=3;goto B759cdf;
case 0x759ce0:c.instructions+=2;goto B759ce0;
case 0x759ce6:c.instructions+=1;goto B759ce6;
case 0x759ceb:goto L759ceb;
case 0x759cef:c.instructions+=2;goto B759cef;
case 0x759cf0:c.instructions+=1;goto B759cf0;
case 0x759cf5:goto L759cf5;
case 0x759cfb:c.instructions+=5;goto B759cfb;
case 0x759cfc:c.instructions+=4;goto B759cfc;
case 0x759d00:c.instructions+=3;goto B759d00;
case 0x759d01:c.instructions+=2;goto B759d01;
case 0x759d02:c.instructions+=1;goto B759d02;
case 0x759d07:goto L759d07;
case 0x759d09:c.instructions+=4;goto B759d09;
case 0x759d0d:c.instructions+=3;goto B759d0d;
case 0x759d12:c.instructions+=2;goto B759d12;
case 0x759d13:c.instructions+=1;goto B759d13;
case 0x759d18:goto L759d18;
case 0x759d1e:c.instructions+=6;goto B759d1e;
case 0x759d1f:c.instructions+=5;goto B759d1f;
case 0x759d25:c.instructions+=4;goto B759d25;
case 0x759d26:c.instructions+=3;goto B759d26;
case 0x759d2a:c.instructions+=2;goto B759d2a;
case 0x759d2b:c.instructions+=1;goto B759d2b;
case 0x759d30:goto L759d30;
case 0x759d36:c.instructions+=6;goto B759d36;
case 0x759d37:c.instructions+=5;goto B759d37;
case 0x759d3d:c.instructions+=4;goto B759d3d;
case 0x759d3e:c.instructions+=3;goto B759d3e;
case 0x759d42:c.instructions+=2;goto B759d42;
case 0x759d43:c.instructions+=1;goto B759d43;
case 0x759d48:goto L759d48;
case 0x759d4b:c.instructions+=7;goto B759d4b;
case 0x759d51:c.instructions+=6;goto B759d51;
case 0x759d53:c.instructions+=5;goto B759d53;
case 0x759d54:c.instructions+=4;goto B759d54;
case 0x759d58:c.instructions+=3;goto B759d58;
case 0x759d59:c.instructions+=2;goto B759d59;
case 0x759d63:c.instructions+=1;goto B759d63;
case 0x759d68:goto L759d68;
case 0x759d6e:c.instructions+=6;goto B759d6e;
case 0x759d70:c.instructions+=5;goto B759d70;
case 0x759d71:c.instructions+=4;goto B759d71;
case 0x759d77:c.instructions+=3;goto B759d77;
case 0x759d78:c.instructions+=2;goto B759d78;
case 0x759d79:c.instructions+=1;goto B759d79;
case 0x759d7e:goto L759d7e;
case 0x759d84:c.instructions+=10;goto B759d84;
case 0x759d8a:c.instructions+=9;goto B759d8a;
case 0x759d8b:c.instructions+=8;goto B759d8b;
case 0x759d91:c.instructions+=7;goto B759d91;
case 0x759d92:c.instructions+=6;goto B759d92;
case 0x759d93:c.instructions+=5;goto B759d93;
case 0x759d99:c.instructions+=4;goto B759d99;
case 0x759d9a:c.instructions+=3;goto B759d9a;
case 0x759da1:c.instructions+=2;goto B759da1;
case 0x759da2:c.instructions+=1;goto B759da2;
case 0x759da7:goto L759da7;
case 0x759dad:c.instructions+=5;goto B759dad;
case 0x759dae:c.instructions+=4;goto B759dae;
case 0x759db5:c.instructions+=3;goto B759db5;
case 0x759db6:c.instructions+=2;goto B759db6;
case 0x759db7:c.instructions+=1;goto B759db7;
case 0x759dbc:goto L759dbc;
case 0x759dc3:c.instructions+=2;goto B759dc3;
case 0x759dc4:c.instructions+=1;goto B759dc4;
case 0x759dc9:goto L759dc9;
case 0x759dcc:c.instructions+=22;goto B759dcc;
case 0x759dce:c.instructions+=21;goto B759dce;
case 0x759dd2:c.instructions+=20;goto B759dd2;
case 0x759dd6:c.instructions+=19;goto B759dd6;
case 0x759ddb:c.instructions+=18;goto B759ddb;
case 0x759ddf:c.instructions+=17;goto B759ddf;
case 0x759de4:c.instructions+=16;goto B759de4;
case 0x759dea:c.instructions+=15;goto B759dea;
case 0x759dee:c.instructions+=14;goto B759dee;
case 0x759df4:c.instructions+=13;goto B759df4;
case 0x759df8:c.instructions+=12;goto B759df8;
case 0x759dfe:c.instructions+=11;goto B759dfe;
case 0x759e02:c.instructions+=10;goto B759e02;
case 0x759e08:c.instructions+=9;goto B759e08;
case 0x759e0b:c.instructions+=8;goto B759e0b;
case 0x759e0f:c.instructions+=7;goto B759e0f;
case 0x759e15:c.instructions+=6;goto B759e15;
case 0x759e19:c.instructions+=5;goto B759e19;
case 0x759e1f:c.instructions+=4;goto B759e1f;
case 0x759e21:c.instructions+=3;goto B759e21;
case 0x759e24:c.instructions+=2;goto B759e24;
case 0x759e2b:c.instructions+=1;goto B759e2b;
case 0x759e2f:goto L759e2f;
case 0x759e31:goto L759e31;
case 0x759e33:c.instructions+=1;goto B759e33;
case 0x759e36:goto L759e36;
case 0x759e38:goto L759e38;
case 0x759e3e:c.instructions+=7;goto B759e3e;
case 0x759e41:c.instructions+=6;goto B759e41;
case 0x759e44:c.instructions+=5;goto B759e44;
case 0x759e45:c.instructions+=4;goto B759e45;
case 0x759e49:c.instructions+=3;goto B759e49;
case 0x759e4a:c.instructions+=2;goto B759e4a;
case 0x759e4b:c.instructions+=1;goto B759e4b;
case 0x759e50:goto L759e50;
case 0x759e53:c.instructions+=1;goto B759e53;
case 0x759e5d:goto L759e5d;
case 0x759e64:c.instructions+=2;goto B759e64;
case 0x759e69:c.instructions+=1;goto B759e69;
case 0x759e6b:goto L759e6b;
case 0x759e71:c.instructions+=2;goto B759e71;
case 0x759e77:c.instructions+=1;goto B759e77;
case 0x759e79:goto L759e79;
case 0x759e7c:c.instructions+=1;goto B759e7c;
case 0x759e7e:goto L759e7e;
case 0x759e7f:c.instructions+=1;goto B759e7f;
case 0x759e84:goto L759e84;
case 0x759e87:c.instructions+=4;goto B759e87;
case 0x759e89:c.instructions+=3;goto B759e89;
case 0x759e8f:c.instructions+=2;goto B759e8f;
case 0x759e95:c.instructions+=1;goto B759e95;
case 0x759e9b:goto L759e9b;
case 0x759ea1:c.instructions+=1;goto B759ea1;
case 0x759ea7:goto L759ea7;
case 0x759eab:c.instructions+=2;goto B759eab;
case 0x759eac:c.instructions+=1;goto B759eac;
case 0x759eb1:goto L759eb1;
case 0x759eb7:c.instructions+=6;goto B759eb7;
case 0x759eb8:c.instructions+=5;goto B759eb8;
case 0x759ebe:c.instructions+=4;goto B759ebe;
case 0x759ebf:c.instructions+=3;goto B759ebf;
case 0x759ec3:c.instructions+=2;goto B759ec3;
case 0x759ec4:c.instructions+=1;goto B759ec4;
case 0x759ec9:goto L759ec9;
case 0x759ecb:c.instructions+=4;goto B759ecb;
case 0x759ecf:c.instructions+=3;goto B759ecf;
case 0x759ed4:c.instructions+=2;goto B759ed4;
case 0x759ed5:c.instructions+=1;goto B759ed5;
case 0x759eda:goto L759eda;
case 0x759ee0:c.instructions+=6;goto B759ee0;
case 0x759ee1:c.instructions+=5;goto B759ee1;
case 0x759ee7:c.instructions+=4;goto B759ee7;
case 0x759ee8:c.instructions+=3;goto B759ee8;
case 0x759eec:c.instructions+=2;goto B759eec;
case 0x759eed:c.instructions+=1;goto B759eed;
case 0x759ef2:goto L759ef2;
case 0x759ef8:c.instructions+=6;goto B759ef8;
case 0x759ef9:c.instructions+=5;goto B759ef9;
case 0x759eff:c.instructions+=4;goto B759eff;
case 0x759f03:c.instructions+=3;goto B759f03;
case 0x759f04:c.instructions+=2;goto B759f04;
case 0x759f05:c.instructions+=1;goto B759f05;
case 0x759f0a:goto L759f0a;
case 0x759f0c:c.instructions+=6;goto B759f0c;
case 0x759f12:c.instructions+=5;goto B759f12;
case 0x759f16:c.instructions+=4;goto B759f16;
case 0x759f17:c.instructions+=3;goto B759f17;
case 0x759f18:c.instructions+=2;goto B759f18;
case 0x759f22:c.instructions+=1;goto B759f22;
case 0x759f27:goto L759f27;
case 0x759f2d:c.instructions+=7;goto B759f2d;
case 0x759f30:c.instructions+=6;goto B759f30;
case 0x759f32:c.instructions+=5;goto B759f32;
case 0x759f33:c.instructions+=4;goto B759f33;
case 0x759f39:c.instructions+=3;goto B759f39;
case 0x759f3a:c.instructions+=2;goto B759f3a;
case 0x759f3b:c.instructions+=1;goto B759f3b;
case 0x759f40:goto L759f40;
case 0x759f48:c.instructions+=4;goto B759f48;
case 0x759f4e:c.instructions+=3;goto B759f4e;
case 0x759f50:c.instructions+=2;goto B759f50;
case 0x759f53:c.instructions+=1;goto B759f53;
case 0x759f5a:goto L759f5a;
case 0x759f5c:goto L759f5c;
case 0x759f5e:c.instructions+=1;goto B759f5e;
case 0x759f61:goto L759f61;
case 0x759f63:goto L759f63;
case 0x759f69:c.instructions+=7;goto B759f69;
case 0x759f6c:c.instructions+=6;goto B759f6c;
case 0x759f6d:c.instructions+=5;goto B759f6d;
case 0x759f6e:c.instructions+=4;goto B759f6e;
case 0x759f75:c.instructions+=3;goto B759f75;
case 0x759f76:c.instructions+=2;goto B759f76;
case 0x759f77:c.instructions+=1;goto B759f77;
case 0x759f7c:goto L759f7c;
case 0x759f7f:c.instructions+=1;goto B759f7f;
case 0x759f89:goto L759f89;
case 0x759f90:c.instructions+=1;goto B759f90;
case 0x759f92:goto L759f92;
case 0x759f98:c.instructions+=2;goto B759f98;
case 0x759f9e:c.instructions+=1;goto B759f9e;
case 0x759fa0:goto L759fa0;
case 0x759fa3:c.instructions+=1;goto B759fa3;
case 0x759fa5:goto L759fa5;
case 0x759fa6:c.instructions+=1;goto B759fa6;
case 0x759fab:goto L759fab;
case 0x759fae:c.instructions+=4;goto B759fae;
case 0x759fb0:c.instructions+=3;goto B759fb0;
case 0x759fb6:c.instructions+=2;goto B759fb6;
case 0x759fbc:c.instructions+=1;goto B759fbc;
case 0x759fc6:goto L759fc6;
case 0x759fcd:c.instructions+=1;goto B759fcd;
case 0x759fd2:goto L759fd2;
case 0x759fd3:c.instructions+=5;goto B759fd3;
case 0x759fd4:c.instructions+=4;goto B759fd4;
case 0x759fd5:c.instructions+=3;goto B759fd5;
case 0x759fd7:c.instructions+=2;goto B759fd7;
case 0x759fd8:c.instructions+=1;goto B759fd8;
case 0x759fe0:goto L759fe0;
case 0x759fe1:c.instructions+=10;goto B759fe1;
case 0x759fe5:c.instructions+=9;goto B759fe5;
case 0x759fe6:c.instructions+=8;goto B759fe6;
case 0x759fe7:c.instructions+=7;goto B759fe7;
case 0x759feb:c.instructions+=6;goto B759feb;
case 0x759fec:c.instructions+=5;goto B759fec;
case 0x759ff0:c.instructions+=4;goto B759ff0;
case 0x759ff6:c.instructions+=3;goto B759ff6;
case 0x759ff9:c.instructions+=2;goto B759ff9;
case 0x759ffb:c.instructions+=1;goto B759ffb;
case 0x759ffd:goto L759ffd;
case 0x759fff:c.instructions+=1;goto B759fff;
default:missing_instruction(c.pc);}
B759002:L759002:{c.instructions+=6;NFSU2_TR(0x759002);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B759006:{NFSU2_TR(0x759006);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x270ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75900c:{NFSU2_TR(0x75900c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75900f:{NFSU2_TR(0x75900f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B759013:{NFSU2_TR(0x759013);
__builtin_memmove((R+0),(R+20),4);
}
B759015:{NFSU2_TR(0x759015);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75901aull));
TAIL_STATIC(0x758850u,758);
}
B75901a:L75901a:{c.instructions+=2;NFSU2_TR(0x75901a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75901c:{NFSU2_TR(0x75901c);
if(r1(R+518)){{goto L759533;}}
}
B759022:L759022:{c.instructions+=2;NFSU2_TR(0x759022);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B759027:{NFSU2_TR(0x759027);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759533;}}
}
B75902d:L75902d:{c.instructions+=3;NFSU2_TR(0x75902d);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759031:{NFSU2_TR(0x759031);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B759034:{NFSU2_TR(0x759034);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L759533;}}
}
B75903a:L75903a:{c.instructions+=2;NFSU2_TR(0x75903a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x100ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B759040:{NFSU2_TR(0x759040);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L759533;}}
}
B759046:L759046:{c.instructions+=9;NFSU2_TR(0x759046);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75904a:{NFSU2_TR(0x75904a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B75904d:{NFSU2_TR(0x75904d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759053:{NFSU2_TR(0x759053);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2b8ull))));
}
B759059:{NFSU2_TR(0x759059);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B75905a:{NFSU2_TR(0x75905a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75905d:{NFSU2_TR(0x75905d);
__builtin_memmove((R+0),(R+4),4);
}
B75905f:{NFSU2_TR(0x75905f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B759062:{NFSU2_TR(0x759062);
__builtin_memmove((R+28),(R+12),4);
}
B759064:L759064:{c.instructions+=1;NFSU2_TR(0x759064);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L759066;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x759064u);}goto L759064;}
}
B759066:L759066:{c.instructions+=3;NFSU2_TR(0x759066);
__builtin_memmove((R+4),(R+0),4);
}
B759068:{NFSU2_TR(0x759068);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75906c:{NFSU2_TR(0x75906c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75906f:L75906f:{c.instructions+=1;NFSU2_TR(0x75906f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L759071;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75906fu);}goto L75906f;}
}
B759071:L759071:{c.instructions+=4;NFSU2_TR(0x759071);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B759075:{NFSU2_TR(0x759075);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B759079:{NFSU2_TR(0x759079);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75907d:{NFSU2_TR(0x75907d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759082ull));
TAIL_STATIC(0x758850u,758);
}
B759082:L759082:{c.instructions+=2;NFSU2_TR(0x759082);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B759084:{NFSU2_TR(0x759084);
if(r1(R+518)){{goto L75951d;}}
}
B75908a:L75908a:{c.instructions+=2;NFSU2_TR(0x75908a);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x30ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75908f:{NFSU2_TR(0x75908f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75951d;}}
}
B759095:L759095:{c.instructions+=5;NFSU2_TR(0x759095);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759099:{NFSU2_TR(0x759099);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B75909c:{NFSU2_TR(0x75909c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7590a0:{NFSU2_TR(0x7590a0);
__builtin_memmove((R+28),(R+20),4);
}
B7590a2:{NFSU2_TR(0x7590a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7590a7ull));
TAIL_STATIC(0x758850u,758);
}
B7590a7:L7590a7:{c.instructions+=2;NFSU2_TR(0x7590a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7590a9:{NFSU2_TR(0x7590a9);
if(r1(R+518)){{goto L759507;}}
}
B7590af:L7590af:{c.instructions+=2;NFSU2_TR(0x7590af);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7590b4:{NFSU2_TR(0x7590b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759507;}}
}
B7590ba:L7590ba:{c.instructions+=4;NFSU2_TR(0x7590ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7590be:{NFSU2_TR(0x7590be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7590bf:{NFSU2_TR(0x7590bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7590c0:{NFSU2_TR(0x7590c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7590c5ull));
TAIL_STATIC(0x7588c0u,758);
}
B7590c5:L7590c5:{c.instructions+=7;NFSU2_TR(0x7590c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7590c9:{NFSU2_TR(0x7590c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7590cd:{NFSU2_TR(0x7590cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7590d3:{NFSU2_TR(0x7590d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7590d6:{NFSU2_TR(0x7590d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7590da:{NFSU2_TR(0x7590da);
__builtin_memmove((R+0),(R+20),4);
}
B7590dc:{NFSU2_TR(0x7590dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7590e1ull));
TAIL_STATIC(0x758850u,758);
}
B7590e1:L7590e1:{c.instructions+=2;NFSU2_TR(0x7590e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7590e3:{NFSU2_TR(0x7590e3);
if(r1(R+518)){{goto L7594f1;}}
}
B7590e9:L7590e9:{c.instructions+=2;NFSU2_TR(0x7590e9);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7590ee:{NFSU2_TR(0x7590ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7594f1;}}
}
B7590f4:L7590f4:{c.instructions+=4;NFSU2_TR(0x7590f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7590f8:{NFSU2_TR(0x7590f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B7590fb:{NFSU2_TR(0x7590fb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7590fd:{NFSU2_TR(0x7590fd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7594f1;}}
}
B759103:L759103:{c.instructions+=3;NFSU2_TR(0x759103);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B759104:{NFSU2_TR(0x759104);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x80ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75910a:{NFSU2_TR(0x75910a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L7594f1;}}
}
B759110:L759110:{c.instructions+=6;NFSU2_TR(0x759110);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B759114:{NFSU2_TR(0x759114);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75911a:{NFSU2_TR(0x75911a);
__builtin_memmove((R+8),(R+4),4);
}
B75911c:{NFSU2_TR(0x75911c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75911f:{NFSU2_TR(0x75911f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759122:{NFSU2_TR(0x759122);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1f0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B759128:L759128:{c.instructions+=1;NFSU2_TR(0x759128);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75912a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x759128u);}goto L759128;}
}
B75912a:L75912a:{c.instructions+=2;NFSU2_TR(0x75912a);
__builtin_memmove((R+4),(R+8),4);
}
B75912c:{NFSU2_TR(0x75912c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75912f:L75912f:{c.instructions+=1;NFSU2_TR(0x75912f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L759131;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75912fu);}goto L75912f;}
}
B759131:L759131:{c.instructions+=2;NFSU2_TR(0x759131);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B759138:{NFSU2_TR(0x759138);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759238;}}
}
B75913e:L75913e:{c.instructions+=6;NFSU2_TR(0x75913e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759144:{NFSU2_TR(0x759144);
u8 U[12];
w4(U+0,u32(u32(u32(0x2b8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75914b:{NFSU2_TR(0x75914b);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B75914f:{NFSU2_TR(0x75914f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B759153:{NFSU2_TR(0x759153);
__builtin_memmove((R+0),(R+12),4);
}
B759155:{NFSU2_TR(0x759155);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75915aull));
TAIL_STATIC(0x758850u,758);
}
B75915a:L75915a:{c.instructions+=2;NFSU2_TR(0x75915a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75915c:{NFSU2_TR(0x75915c);
if(r1(R+518)){{goto L7592ac;}}
}
B759162:L759162:{c.instructions+=2;NFSU2_TR(0x759162);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x30ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B759167:{NFSU2_TR(0x759167);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7592ac;}}
}
B75916d:L75916d:{c.instructions+=2;NFSU2_TR(0x75916d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B759171:{NFSU2_TR(0x759171);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759176ull));
TAIL_STATIC(0x758850u,758);
}
B759176:L759176:{c.instructions+=2;NFSU2_TR(0x759176);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B759178:{NFSU2_TR(0x759178);
if(r1(R+518)){{goto L759296;}}
}
B75917e:L75917e:{c.instructions+=2;NFSU2_TR(0x75917e);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B759183:{NFSU2_TR(0x759183);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759296;}}
}
B759189:L759189:{c.instructions+=3;NFSU2_TR(0x759189);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75918d:{NFSU2_TR(0x75918d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B759190:{NFSU2_TR(0x759190);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L759296;}}
}
B759196:L759196:{c.instructions+=2;NFSU2_TR(0x759196);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x81ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x81ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75919c:{NFSU2_TR(0x75919c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L759296;}}
}
B7591a2:L7591a2:{c.instructions+=3;NFSU2_TR(0x7591a2);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7591a5:{NFSU2_TR(0x7591a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3bcull))));
__builtin_memmove((R+28),(U+0),4);
}
B7591ab:{NFSU2_TR(0x7591ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7591be;}}
}
B7591ad:L7591ad:{c.instructions+=5;NFSU2_TR(0x7591ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B7591b0:{NFSU2_TR(0x7591b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7591b6:{NFSU2_TR(0x7591b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B7591b9:{NFSU2_TR(0x7591b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7591bc:{NFSU2_TR(0x7591bc);
{goto L7591c8;}
}
B7591be:L7591be:{c.instructions+=3;NFSU2_TR(0x7591be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7591c4:{NFSU2_TR(0x7591c4);
__builtin_memmove((R+4),(R+8),4);
}
B7591c6:{NFSU2_TR(0x7591c6);
__builtin_memmove((R+24),(R+0),4);
}
B7591c8:L7591c8:{c.instructions+=2;NFSU2_TR(0x7591c8);
__builtin_memmove((R+12),(R+4),4);
}
B7591ca:{NFSU2_TR(0x7591ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7591cd:L7591cd:{c.instructions+=1;NFSU2_TR(0x7591cd);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7591cf;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7591cdu);}goto L7591cd;}
}
B7591cf:L7591cf:{c.instructions+=2;NFSU2_TR(0x7591cf);
__builtin_memmove((R+4),(R+12),4);
}
B7591d1:{NFSU2_TR(0x7591d1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7591d4:L7591d4:{c.instructions+=1;NFSU2_TR(0x7591d4);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7591d6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7591d4u);}goto L7591d4;}
}
B7591d6:L7591d6:{c.instructions+=6;NFSU2_TR(0x7591d6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7591d8:{NFSU2_TR(0x7591d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7591de:{NFSU2_TR(0x7591de);
u8 U[12];
w4(U+0,u32(u32(u32(0x2b8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B7591e5:{NFSU2_TR(0x7591e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B7591e9:{NFSU2_TR(0x7591e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7591ed:{NFSU2_TR(0x7591ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7591f2ull));
TAIL_STATIC(0x758850u,758);
}
B7591f2:L7591f2:{c.instructions+=2;NFSU2_TR(0x7591f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7591f4:{NFSU2_TR(0x7591f4);
if(r1(R+518)){{goto L759280;}}
}
B7591fa:L7591fa:{c.instructions+=2;NFSU2_TR(0x7591fa);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7591ff:{NFSU2_TR(0x7591ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759280;}}
}
B759201:L759201:{c.instructions+=3;NFSU2_TR(0x759201);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759205:{NFSU2_TR(0x759205);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B759208:{NFSU2_TR(0x759208);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L759280;}}
}
B75920a:L75920a:{c.instructions+=2;NFSU2_TR(0x75920a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x81ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x81ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B759210:{NFSU2_TR(0x759210);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L759280;}}
}
B759212:L759212:{c.instructions+=3;NFSU2_TR(0x759212);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B759215:{NFSU2_TR(0x759215);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x444ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75921b:{NFSU2_TR(0x75921b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75926d;}}
}
B75921d:L75921d:{c.instructions+=6;NFSU2_TR(0x75921d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B759220:{NFSU2_TR(0x759220);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B759221:{NFSU2_TR(0x759221);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759224:{NFSU2_TR(0x759224);
__builtin_memmove((R+0),(R+4),4);
}
B759226:{NFSU2_TR(0x759226);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B759229:{NFSU2_TR(0x759229);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x440ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75922f:L75922f:{c.instructions+=1;NFSU2_TR(0x75922f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L759231;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75922fu);}goto L75922f;}
}
B759231:L759231:{c.instructions+=1;NFSU2_TR(0x759231);
__builtin_memmove((R+4),(R+0),4);
}
B759233:L759233:{c.instructions+=1;NFSU2_TR(0x759233);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B759236:L759236:{c.instructions+=1;NFSU2_TR(0x759236);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L759238;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x759236u);}goto L759236;}
}
B759238:L759238:{c.instructions+=3;NFSU2_TR(0x759238);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75923c:{NFSU2_TR(0x75923c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x164ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759242:{NFSU2_TR(0x759242);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B759245:L759245:{c.instructions+=5;NFSU2_TR(0x759245);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B759247:{NFSU2_TR(0x759247);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B759249:{NFSU2_TR(0x759249);
__builtin_memmove((R+4),(R+8),1);
}
B75924b:{NFSU2_TR(0x75924b);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(R+8))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75924d:{NFSU2_TR(0x75924d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7592c2;}}
}
B75924f:L75924f:{c.instructions+=2;NFSU2_TR(0x75924f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B759251:{NFSU2_TR(0x759251);
if(r1(R+518)){{goto L759269;}}
}
B759253:L759253:{c.instructions+=5;NFSU2_TR(0x759253);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B759256:{NFSU2_TR(0x759256);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B759259:{NFSU2_TR(0x759259);
__builtin_memmove((R+4),(R+8),1);
}
B75925b:{NFSU2_TR(0x75925b);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(R+8))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75925d:{NFSU2_TR(0x75925d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7592c2;}}
}
B75925f:L75925f:{c.instructions+=4;NFSU2_TR(0x75925f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B759262:{NFSU2_TR(0x759262);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B759265:{NFSU2_TR(0x759265);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B759267:{NFSU2_TR(0x759267);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x759245u);}goto L759245;}}
}
B759269:L759269:{c.instructions+=2;NFSU2_TR(0x759269);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75926b:{NFSU2_TR(0x75926b);
{goto L7592c7;}
}
B75926d:L75926d:{c.instructions+=4;NFSU2_TR(0x75926d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x440ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759273:{NFSU2_TR(0x759273);
__builtin_memmove((R+8),(R+4),4);
}
B759275:{NFSU2_TR(0x759275);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B759278:{NFSU2_TR(0x759278);
__builtin_memmove((R+24),(R+0),4);
}
B75927a:L75927a:{c.instructions+=1;NFSU2_TR(0x75927a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75927c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75927au);}goto L75927a;}
}
B75927c:L75927c:{c.instructions+=2;NFSU2_TR(0x75927c);
__builtin_memmove((R+4),(R+8),4);
}
B75927e:{NFSU2_TR(0x75927e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x759233u);}goto L759233;}
}
B759280:L759280:{c.instructions+=7;NFSU2_TR(0x759280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B759281:{NFSU2_TR(0x759281);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759282:{NFSU2_TR(0x759282);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B759283:{NFSU2_TR(0x759283);
w4(R+0,u32(0xffffffe9ull));
}
B759288:{NFSU2_TR(0x759288);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B759289:{NFSU2_TR(0x759289);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75928d:{NFSU2_TR(0x75928d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759292ull));
TAIL_STATIC(0x76115eu,761);
}
B759292:L759292:{c.instructions+=2;NFSU2_TR(0x759292);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B759295:{NFSU2_TR(0x759295);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B759296:L759296:{c.instructions+=7;NFSU2_TR(0x759296);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B759297:{NFSU2_TR(0x759297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759298:{NFSU2_TR(0x759298);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B759299:{NFSU2_TR(0x759299);
w4(R+0,u32(0xffffffeaull));
}
B75929e:{NFSU2_TR(0x75929e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75929f:{NFSU2_TR(0x75929f);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7592a3:{NFSU2_TR(0x7592a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7592a8ull));
TAIL_STATIC(0x76115eu,761);
}
B7592a8:L7592a8:{c.instructions+=2;NFSU2_TR(0x7592a8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7592ab:{NFSU2_TR(0x7592ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7592ac:L7592ac:{c.instructions+=7;NFSU2_TR(0x7592ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7592ad:{NFSU2_TR(0x7592ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7592ae:{NFSU2_TR(0x7592ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7592af:{NFSU2_TR(0x7592af);
w4(R+0,u32(0xffffffebull));
}
B7592b4:{NFSU2_TR(0x7592b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7592b5:{NFSU2_TR(0x7592b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7592b9:{NFSU2_TR(0x7592b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7592beull));
TAIL_STATIC(0x76115eu,761);
}
B7592be:L7592be:{c.instructions+=2;NFSU2_TR(0x7592be);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7592c1:{NFSU2_TR(0x7592c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7592c2:L7592c2:{c.instructions+=2;NFSU2_TR(0x7592c2);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B7592c4:{NFSU2_TR(0x7592c4);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B7592c7:L7592c7:{c.instructions+=2;NFSU2_TR(0x7592c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7592c9:{NFSU2_TR(0x7592c9);
if(r1(R+518)){{goto L7592e1;}}
}
B7592cb:L7592cb:{c.instructions+=7;NFSU2_TR(0x7592cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7592cc:{NFSU2_TR(0x7592cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7592cd:{NFSU2_TR(0x7592cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7592ce:{NFSU2_TR(0x7592ce);
w4(R+0,u32(0xffffffe8ull));
}
B7592d3:{NFSU2_TR(0x7592d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7592d4:{NFSU2_TR(0x7592d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7592d8:{NFSU2_TR(0x7592d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7592ddull));
TAIL_STATIC(0x76115eu,761);
}
B7592dd:L7592dd:{c.instructions+=2;NFSU2_TR(0x7592dd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7592e0:{NFSU2_TR(0x7592e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7592e1:L7592e1:{c.instructions+=4;NFSU2_TR(0x7592e1);
__builtin_memmove((R+0),gp(0x7d3828),4);
}
B7592e6:{NFSU2_TR(0x7592e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7592e8:{NFSU2_TR(0x7592e8);
w4(R+28,u32(0x7d3828ull));
}
B7592ed:{NFSU2_TR(0x7592ed);
if(r1(R+518)){{goto L75942c;}}
}
B7592f3:L7592f3:{c.instructions+=1;NFSU2_TR(0x7592f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7592f6:L7592f6:{c.instructions+=1;NFSU2_TR(0x7592f6);
__builtin_memmove((R+24),(R+8),4);
}
B7592f8:L7592f8:{c.instructions+=4;NFSU2_TR(0x7592f8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B7592fa:{NFSU2_TR(0x7592fa);
__builtin_memmove((R+4),(R+12),1);
}
B7592fc:{NFSU2_TR(0x7592fc);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7592fe:{NFSU2_TR(0x7592fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75931c;}}
}
B759300:L759300:{c.instructions+=2;NFSU2_TR(0x759300);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B759302:{NFSU2_TR(0x759302);
if(r1(R+518)){{goto L759318;}}
}
B759304:L759304:{c.instructions+=4;NFSU2_TR(0x759304);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B759307:{NFSU2_TR(0x759307);
__builtin_memmove((R+4),(R+12),1);
}
B759309:{NFSU2_TR(0x759309);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B75930c:{NFSU2_TR(0x75930c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75931c;}}
}
B75930e:L75930e:{c.instructions+=4;NFSU2_TR(0x75930e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B759311:{NFSU2_TR(0x759311);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B759314:{NFSU2_TR(0x759314);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B759316:{NFSU2_TR(0x759316);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7592f8u);}goto L7592f8;}}
}
B759318:L759318:{c.instructions+=2;NFSU2_TR(0x759318);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75931a:{NFSU2_TR(0x75931a);
{goto L759321;}
}
B75931c:L75931c:{c.instructions+=2;NFSU2_TR(0x75931c);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B75931e:{NFSU2_TR(0x75931e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B759321:L759321:{c.instructions+=2;NFSU2_TR(0x759321);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B759323:{NFSU2_TR(0x759323);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759403;}}
}
B759329:L759329:{c.instructions+=3;NFSU2_TR(0x759329);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75932c:{NFSU2_TR(0x75932c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75932f:{NFSU2_TR(0x75932f);
}
B759330:L759330:{c.instructions+=4;NFSU2_TR(0x759330);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B759332:{NFSU2_TR(0x759332);
__builtin_memmove((R+4),(R+12),1);
}
B759334:{NFSU2_TR(0x759334);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B759336:{NFSU2_TR(0x759336);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759354;}}
}
B759338:L759338:{c.instructions+=2;NFSU2_TR(0x759338);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75933a:{NFSU2_TR(0x75933a);
if(r1(R+518)){{goto L759350;}}
}
B75933c:L75933c:{c.instructions+=4;NFSU2_TR(0x75933c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B75933f:{NFSU2_TR(0x75933f);
__builtin_memmove((R+4),(R+12),1);
}
B759341:{NFSU2_TR(0x759341);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B759344:{NFSU2_TR(0x759344);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759354;}}
}
B759346:L759346:{c.instructions+=4;NFSU2_TR(0x759346);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B759349:{NFSU2_TR(0x759349);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B75934c:{NFSU2_TR(0x75934c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75934e:{NFSU2_TR(0x75934e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x759330u);}goto L759330;}}
}
B759350:L759350:{c.instructions+=2;NFSU2_TR(0x759350);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B759352:{NFSU2_TR(0x759352);
{goto L759359;}
}
B759354:L759354:{c.instructions+=2;NFSU2_TR(0x759354);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B759356:{NFSU2_TR(0x759356);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B759359:L759359:{c.instructions+=2;NFSU2_TR(0x759359);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75935b:{NFSU2_TR(0x75935b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759403;}}
}
B759361:L759361:{c.instructions+=2;NFSU2_TR(0x759361);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759364:{NFSU2_TR(0x759364);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759367:L759367:{c.instructions+=4;NFSU2_TR(0x759367);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B759369:{NFSU2_TR(0x759369);
__builtin_memmove((R+4),(R+12),1);
}
B75936b:{NFSU2_TR(0x75936b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B75936d:{NFSU2_TR(0x75936d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75938b;}}
}
B75936f:L75936f:{c.instructions+=2;NFSU2_TR(0x75936f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B759371:{NFSU2_TR(0x759371);
if(r1(R+518)){{goto L759387;}}
}
B759373:L759373:{c.instructions+=4;NFSU2_TR(0x759373);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B759376:{NFSU2_TR(0x759376);
__builtin_memmove((R+4),(R+12),1);
}
B759378:{NFSU2_TR(0x759378);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B75937b:{NFSU2_TR(0x75937b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75938b;}}
}
B75937d:L75937d:{c.instructions+=4;NFSU2_TR(0x75937d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B759380:{NFSU2_TR(0x759380);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B759383:{NFSU2_TR(0x759383);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B759385:{NFSU2_TR(0x759385);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x759367u);}goto L759367;}}
}
B759387:L759387:{c.instructions+=2;NFSU2_TR(0x759387);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B759389:{NFSU2_TR(0x759389);
{goto L759390;}
}
B75938b:L75938b:{c.instructions+=2;NFSU2_TR(0x75938b);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B75938d:{NFSU2_TR(0x75938d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B759390:L759390:{c.instructions+=2;NFSU2_TR(0x759390);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B759392:{NFSU2_TR(0x759392);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759403;}}
}
B759394:L759394:{c.instructions+=3;NFSU2_TR(0x759394);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759397:{NFSU2_TR(0x759397);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75939a:{NFSU2_TR(0x75939a);
__builtin_memmove((R+12),(R+12),4);
}
B7593a0:L7593a0:{c.instructions+=4;NFSU2_TR(0x7593a0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B7593a2:{NFSU2_TR(0x7593a2);
__builtin_memmove((R+4),(R+12),1);
}
B7593a4:{NFSU2_TR(0x7593a4);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7593a6:{NFSU2_TR(0x7593a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7593c4;}}
}
B7593a8:L7593a8:{c.instructions+=2;NFSU2_TR(0x7593a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7593aa:{NFSU2_TR(0x7593aa);
if(r1(R+518)){{goto L7593c0;}}
}
B7593ac:L7593ac:{c.instructions+=4;NFSU2_TR(0x7593ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7593af:{NFSU2_TR(0x7593af);
__builtin_memmove((R+4),(R+12),1);
}
B7593b1:{NFSU2_TR(0x7593b1);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7593b4:{NFSU2_TR(0x7593b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7593c4;}}
}
B7593b6:L7593b6:{c.instructions+=4;NFSU2_TR(0x7593b6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B7593b9:{NFSU2_TR(0x7593b9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B7593bc:{NFSU2_TR(0x7593bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7593be:{NFSU2_TR(0x7593be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7593a0u);}goto L7593a0;}}
}
B7593c0:L7593c0:{c.instructions+=2;NFSU2_TR(0x7593c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7593c2:{NFSU2_TR(0x7593c2);
{goto L7593c9;}
}
B7593c4:L7593c4:{c.instructions+=2;NFSU2_TR(0x7593c4);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B7593c6:{NFSU2_TR(0x7593c6);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B7593c9:L7593c9:{c.instructions+=2;NFSU2_TR(0x7593c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7593cb:{NFSU2_TR(0x7593cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759403;}}
}
B7593cd:L7593cd:{c.instructions+=2;NFSU2_TR(0x7593cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7593d0:{NFSU2_TR(0x7593d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7593d6:L7593d6:{c.instructions+=4;NFSU2_TR(0x7593d6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B7593d8:{NFSU2_TR(0x7593d8);
__builtin_memmove((R+4),(R+12),1);
}
B7593da:{NFSU2_TR(0x7593da);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7593dc:{NFSU2_TR(0x7593dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7593fa;}}
}
B7593de:L7593de:{c.instructions+=2;NFSU2_TR(0x7593de);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7593e0:{NFSU2_TR(0x7593e0);
if(r1(R+518)){{goto L7593f6;}}
}
B7593e2:L7593e2:{c.instructions+=4;NFSU2_TR(0x7593e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7593e5:{NFSU2_TR(0x7593e5);
__builtin_memmove((R+4),(R+12),1);
}
B7593e7:{NFSU2_TR(0x7593e7);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7593ea:{NFSU2_TR(0x7593ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7593fa;}}
}
B7593ec:L7593ec:{c.instructions+=4;NFSU2_TR(0x7593ec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B7593ef:{NFSU2_TR(0x7593ef);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B7593f2:{NFSU2_TR(0x7593f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7593f4:{NFSU2_TR(0x7593f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7593d6u);}goto L7593d6;}}
}
B7593f6:L7593f6:{c.instructions+=2;NFSU2_TR(0x7593f6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7593f8:{NFSU2_TR(0x7593f8);
{goto L7593ff;}
}
B7593fa:L7593fa:{c.instructions+=2;NFSU2_TR(0x7593fa);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B7593fc:{NFSU2_TR(0x7593fc);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B7593ff:L7593ff:{c.instructions+=2;NFSU2_TR(0x7593ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B759401:{NFSU2_TR(0x759401);
if(r1(R+518)){{goto L759427;}}
}
B759403:L759403:{c.instructions+=4;NFSU2_TR(0x759403);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759406:{NFSU2_TR(0x759406);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x24ull))));
}
B759409:{NFSU2_TR(0x759409);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75940b:{NFSU2_TR(0x75940b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7592f6u);}goto L7592f6;}}
}
B759411:L759411:{c.instructions+=7;NFSU2_TR(0x759411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B759412:{NFSU2_TR(0x759412);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759413:{NFSU2_TR(0x759413);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B759414:{NFSU2_TR(0x759414);
w4(R+0,u32(0xffffffe7ull));
}
B759419:{NFSU2_TR(0x759419);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75941a:{NFSU2_TR(0x75941a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75941e:{NFSU2_TR(0x75941e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759423ull));
TAIL_STATIC(0x76115eu,761);
}
B759423:L759423:{c.instructions+=2;NFSU2_TR(0x759423);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B759426:{NFSU2_TR(0x759426);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B759427:L759427:{c.instructions+=2;NFSU2_TR(0x759427);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B75942a:{NFSU2_TR(0x75942a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759442;}}
}
B75942c:L75942c:{c.instructions+=7;NFSU2_TR(0x75942c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75942d:{NFSU2_TR(0x75942d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75942e:{NFSU2_TR(0x75942e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75942f:{NFSU2_TR(0x75942f);
w4(R+0,u32(0xffffffe7ull));
}
B759434:{NFSU2_TR(0x759434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B759435:{NFSU2_TR(0x759435);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759439:{NFSU2_TR(0x759439);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75943eull));
TAIL_STATIC(0x76115eu,761);
}
B75943e:L75943e:{c.instructions+=2;NFSU2_TR(0x75943e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B759441:{NFSU2_TR(0x759441);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B759442:L759442:{c.instructions+=3;NFSU2_TR(0x759442);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759445:{NFSU2_TR(0x759445);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75944b:{NFSU2_TR(0x75944b);
if(r1(R+518)){{goto L759463;}}
}
B75944d:L75944d:{c.instructions+=7;NFSU2_TR(0x75944d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75944e:{NFSU2_TR(0x75944e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75944f:{NFSU2_TR(0x75944f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B759450:{NFSU2_TR(0x759450);
w4(R+0,u32(0xffffffe6ull));
}
B759455:{NFSU2_TR(0x759455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B759456:{NFSU2_TR(0x759456);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75945a:{NFSU2_TR(0x75945a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75945full));
TAIL_STATIC(0x76115eu,761);
}
B75945f:L75945f:{c.instructions+=2;NFSU2_TR(0x75945f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B759462:{NFSU2_TR(0x759462);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B759463:L759463:{c.instructions+=3;NFSU2_TR(0x759463);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759469:{NFSU2_TR(0x759469);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B75946c:{NFSU2_TR(0x75946c);
if(r1(R+518)){{goto L759490;}}
}
B75946e:L75946e:{c.instructions+=2;NFSU2_TR(0x75946e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B75946f:{NFSU2_TR(0x75946f);
if(r1(R+518)){{goto L759475;}}
}
B759471:L759471:{c.instructions+=2;NFSU2_TR(0x759471);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B759473:{NFSU2_TR(0x759473);
{goto L7594ac;}
}
B759475:L759475:{c.instructions+=7;NFSU2_TR(0x759475);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B759479:{NFSU2_TR(0x759479);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75947d:{NFSU2_TR(0x75947d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B759481:{NFSU2_TR(0x759481);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759482:{NFSU2_TR(0x759482);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759483:{NFSU2_TR(0x759483);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759484:{NFSU2_TR(0x759484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759489ull));
TAIL_STATIC(0x758770u,758);
}
B759489:L759489:{c.instructions+=2;NFSU2_TR(0x759489);
w4(R+24,u32(0x14ull));
}
B75948e:{NFSU2_TR(0x75948e);
{goto L7594a9;}
}
B759490:L759490:{c.instructions+=7;NFSU2_TR(0x759490);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B759494:{NFSU2_TR(0x759494);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759498:{NFSU2_TR(0x759498);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75949c:{NFSU2_TR(0x75949c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75949d:{NFSU2_TR(0x75949d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75949e:{NFSU2_TR(0x75949e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75949f:{NFSU2_TR(0x75949f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7594a4ull));
TAIL_STATIC(0x758720u,758);
}
B7594a4:L7594a4:{c.instructions+=1;NFSU2_TR(0x7594a4);
w4(R+24,u32(0x10ull));
}
B7594a9:L7594a9:{c.instructions+=1;NFSU2_TR(0x7594a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7594ac:L7594ac:{c.instructions+=8;NFSU2_TR(0x7594ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7594b2:{NFSU2_TR(0x7594b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7594b6:{NFSU2_TR(0x7594b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7594b7:{NFSU2_TR(0x7594b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1f0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7594bd:{NFSU2_TR(0x7594bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7594be:{NFSU2_TR(0x7594be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7594bf:{NFSU2_TR(0x7594bf);
__builtin_memmove((R+4),(R+24),4);
}
B7594c1:{NFSU2_TR(0x7594c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7594c6ull));
TAIL_STATIC(0x7587c0u,758);
}
B7594c6:L7594c6:{c.instructions+=5;NFSU2_TR(0x7594c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7594c9:{NFSU2_TR(0x7594c9);
__builtin_memmove((R+4),(R+24),4);
}
B7594cb:{NFSU2_TR(0x7594cb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B7594cd:{NFSU2_TR(0x7594cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B7594d1:{NFSU2_TR(0x7594d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B7594d5:L7594d5:{c.instructions+=1;NFSU2_TR(0x7594d5);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7594d7;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7594d5u);}goto L7594d5;}}
}
B7594d7:L7594d7:{c.instructions+=10;NFSU2_TR(0x7594d7);
__builtin_memmove((R+0),(R+8),4);
}
B7594d9:{NFSU2_TR(0x7594d9);
__builtin_memmove((R+0),(R+518),1);
}
B7594dc:{NFSU2_TR(0x7594dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7594dd:{NFSU2_TR(0x7594dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7594de:{NFSU2_TR(0x7594de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7594df:{NFSU2_TR(0x7594df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7594e0:{NFSU2_TR(0x7594e0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B7594e1:{NFSU2_TR(0x7594e1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe5ull))));
}
B7594e4:{NFSU2_TR(0x7594e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7594e8:{NFSU2_TR(0x7594e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7594edull));
TAIL_STATIC(0x76115eu,761);
}
B7594ed:L7594ed:{c.instructions+=2;NFSU2_TR(0x7594ed);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7594f0:{NFSU2_TR(0x7594f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7594f1:L7594f1:{c.instructions+=7;NFSU2_TR(0x7594f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7594f2:{NFSU2_TR(0x7594f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7594f3:{NFSU2_TR(0x7594f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7594f4:{NFSU2_TR(0x7594f4);
w4(R+0,u32(0xffffffecull));
}
B7594f9:{NFSU2_TR(0x7594f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7594fa:{NFSU2_TR(0x7594fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7594fe:{NFSU2_TR(0x7594fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759503ull));
TAIL_STATIC(0x76115eu,761);
}
B759503:L759503:{c.instructions+=2;NFSU2_TR(0x759503);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B759506:{NFSU2_TR(0x759506);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B759507:L759507:{c.instructions+=7;NFSU2_TR(0x759507);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B759508:{NFSU2_TR(0x759508);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759509:{NFSU2_TR(0x759509);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75950a:{NFSU2_TR(0x75950a);
w4(R+0,u32(0xffffffedull));
}
B75950f:{NFSU2_TR(0x75950f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B759510:{NFSU2_TR(0x759510);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759514:{NFSU2_TR(0x759514);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759519ull));
TAIL_STATIC(0x76115eu,761);
}
B759519:L759519:{c.instructions+=2;NFSU2_TR(0x759519);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75951c:{NFSU2_TR(0x75951c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75951d:L75951d:{c.instructions+=7;NFSU2_TR(0x75951d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75951e:{NFSU2_TR(0x75951e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75951f:{NFSU2_TR(0x75951f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B759520:{NFSU2_TR(0x759520);
w4(R+0,u32(0xffffffeeull));
}
B759525:{NFSU2_TR(0x759525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B759526:{NFSU2_TR(0x759526);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75952a:{NFSU2_TR(0x75952a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75952full));
TAIL_STATIC(0x76115eu,761);
}
B75952f:L75952f:{c.instructions+=2;NFSU2_TR(0x75952f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B759532:{NFSU2_TR(0x759532);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B759533:L759533:{c.instructions+=7;NFSU2_TR(0x759533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B759534:{NFSU2_TR(0x759534);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759535:{NFSU2_TR(0x759535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B759536:{NFSU2_TR(0x759536);
w4(R+0,u32(0xfffffff0ull));
}
B75953b:{NFSU2_TR(0x75953b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75953c:{NFSU2_TR(0x75953c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759540:{NFSU2_TR(0x759540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759545ull));
TAIL_STATIC(0x76115eu,761);
}
B759545:L759545:{c.instructions+=2;NFSU2_TR(0x759545);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B759548:{NFSU2_TR(0x759548);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B759549:L759549:{c.instructions+=7;NFSU2_TR(0x759549);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75954a:{NFSU2_TR(0x75954a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75954b:{NFSU2_TR(0x75954b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75954c:{NFSU2_TR(0x75954c);
w4(R+0,u32(0xfffffff1ull));
}
B759551:{NFSU2_TR(0x759551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B759552:{NFSU2_TR(0x759552);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759556:{NFSU2_TR(0x759556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75955bull));
TAIL_STATIC(0x76115eu,761);
}
B75955b:L75955b:{c.instructions+=2;NFSU2_TR(0x75955b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75955e:{NFSU2_TR(0x75955e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75955f:L75955f:{c.instructions+=7;NFSU2_TR(0x75955f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B759560:{NFSU2_TR(0x759560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759561:{NFSU2_TR(0x759561);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B759562:{NFSU2_TR(0x759562);
w4(R+0,u32(0xfffffff2ull));
}
B759567:{NFSU2_TR(0x759567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B759568:{NFSU2_TR(0x759568);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75956c:{NFSU2_TR(0x75956c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759571ull));
TAIL_STATIC(0x76115eu,761);
}
B759571:L759571:{c.instructions+=2;NFSU2_TR(0x759571);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B759574:{NFSU2_TR(0x759574);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B759575:L759575:{c.instructions+=7;NFSU2_TR(0x759575);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B759576:{NFSU2_TR(0x759576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759577:{NFSU2_TR(0x759577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B759578:{NFSU2_TR(0x759578);
w4(R+0,u32(0xfffffff3ull));
}
B75957d:{NFSU2_TR(0x75957d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75957e:{NFSU2_TR(0x75957e);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759582:{NFSU2_TR(0x759582);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759587ull));
TAIL_STATIC(0x76115eu,761);
}
B759587:L759587:{c.instructions+=2;NFSU2_TR(0x759587);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75958a:{NFSU2_TR(0x75958a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75958b:L75958b:{c.instructions+=7;NFSU2_TR(0x75958b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75958c:{NFSU2_TR(0x75958c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75958d:{NFSU2_TR(0x75958d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75958e:{NFSU2_TR(0x75958e);
w4(R+0,u32(0xfffffff4ull));
}
B759593:{NFSU2_TR(0x759593);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B759594:{NFSU2_TR(0x759594);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759598:{NFSU2_TR(0x759598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75959dull));
TAIL_STATIC(0x76115eu,761);
}
B75959d:L75959d:{c.instructions+=2;NFSU2_TR(0x75959d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7595a0:{NFSU2_TR(0x7595a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7595a1:L7595a1:{c.instructions+=7;NFSU2_TR(0x7595a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7595a2:{NFSU2_TR(0x7595a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7595a3:{NFSU2_TR(0x7595a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7595a4:{NFSU2_TR(0x7595a4);
w4(R+0,u32(0xfffffff5ull));
}
B7595a9:{NFSU2_TR(0x7595a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7595aa:{NFSU2_TR(0x7595aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7595ae:{NFSU2_TR(0x7595ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7595b3ull));
TAIL_STATIC(0x76115eu,761);
}
B7595b3:L7595b3:{c.instructions+=2;NFSU2_TR(0x7595b3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7595b6:{NFSU2_TR(0x7595b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7595b7:L7595b7:{c.instructions+=7;NFSU2_TR(0x7595b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7595b8:{NFSU2_TR(0x7595b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7595b9:{NFSU2_TR(0x7595b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7595ba:{NFSU2_TR(0x7595ba);
w4(R+0,u32(0xfffffff6ull));
}
B7595bf:{NFSU2_TR(0x7595bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7595c0:{NFSU2_TR(0x7595c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7595c4:{NFSU2_TR(0x7595c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7595c9ull));
TAIL_STATIC(0x76115eu,761);
}
B7595c9:L7595c9:{c.instructions+=2;NFSU2_TR(0x7595c9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7595cc:{NFSU2_TR(0x7595cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7595cd:L7595cd:{c.instructions+=7;NFSU2_TR(0x7595cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7595ce:{NFSU2_TR(0x7595ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7595cf:{NFSU2_TR(0x7595cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7595d0:{NFSU2_TR(0x7595d0);
w4(R+0,u32(0xfffffff7ull));
}
B7595d5:{NFSU2_TR(0x7595d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7595d6:{NFSU2_TR(0x7595d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7595da:{NFSU2_TR(0x7595da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7595dfull));
TAIL_STATIC(0x76115eu,761);
}
B7595df:L7595df:{c.instructions+=2;NFSU2_TR(0x7595df);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7595e2:{NFSU2_TR(0x7595e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7595e3:L7595e3:{c.instructions+=7;NFSU2_TR(0x7595e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7595e4:{NFSU2_TR(0x7595e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7595e5:{NFSU2_TR(0x7595e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7595e6:{NFSU2_TR(0x7595e6);
w4(R+0,u32(0xfffffff8ull));
}
B7595eb:{NFSU2_TR(0x7595eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7595ec:{NFSU2_TR(0x7595ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7595f0:{NFSU2_TR(0x7595f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7595f5ull));
TAIL_STATIC(0x76115eu,761);
}
B7595f5:L7595f5:{c.instructions+=2;NFSU2_TR(0x7595f5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7595f8:{NFSU2_TR(0x7595f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7595f9:L7595f9:{c.instructions+=7;NFSU2_TR(0x7595f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7595fa:{NFSU2_TR(0x7595fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7595fb:{NFSU2_TR(0x7595fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7595fc:{NFSU2_TR(0x7595fc);
w4(R+0,u32(0xfffffffaull));
}
B759601:{NFSU2_TR(0x759601);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B759602:{NFSU2_TR(0x759602);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759606:{NFSU2_TR(0x759606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75960bull));
TAIL_STATIC(0x76115eu,761);
}
B75960b:L75960b:{c.instructions+=2;NFSU2_TR(0x75960b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75960e:{NFSU2_TR(0x75960e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75960f:L75960f:{c.instructions+=7;NFSU2_TR(0x75960f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B759610:{NFSU2_TR(0x759610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759611:{NFSU2_TR(0x759611);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B759612:{NFSU2_TR(0x759612);
w4(R+0,u32(0xfffffffbull));
}
B759617:{NFSU2_TR(0x759617);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B759618:{NFSU2_TR(0x759618);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75961c:{NFSU2_TR(0x75961c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759621ull));
TAIL_STATIC(0x76115eu,761);
}
B759621:L759621:{c.instructions+=2;NFSU2_TR(0x759621);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B759624:{NFSU2_TR(0x759624);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B759625:L759625:{c.instructions+=7;NFSU2_TR(0x759625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B759626:{NFSU2_TR(0x759626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759627:{NFSU2_TR(0x759627);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B759628:{NFSU2_TR(0x759628);
w4(R+0,u32(0xfffffffcull));
}
B75962d:{NFSU2_TR(0x75962d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75962e:{NFSU2_TR(0x75962e);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759632:{NFSU2_TR(0x759632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759637ull));
TAIL_STATIC(0x76115eu,761);
}
B759637:L759637:{c.instructions+=2;NFSU2_TR(0x759637);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75963a:{NFSU2_TR(0x75963a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75963b:L75963b:{c.instructions+=7;NFSU2_TR(0x75963b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75963c:{NFSU2_TR(0x75963c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75963d:{NFSU2_TR(0x75963d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75963e:{NFSU2_TR(0x75963e);
w4(R+0,u32(0xfffffffeull));
}
B759643:{NFSU2_TR(0x759643);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B759644:{NFSU2_TR(0x759644);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759648:{NFSU2_TR(0x759648);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75964dull));
TAIL_STATIC(0x76115eu,761);
}
B75964d:L75964d:{c.instructions+=2;NFSU2_TR(0x75964d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B759650:{NFSU2_TR(0x759650);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B759651:L759651:{c.instructions+=7;NFSU2_TR(0x759651);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759655:{NFSU2_TR(0x759655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B759656:{NFSU2_TR(0x759656);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759657:{NFSU2_TR(0x759657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B759658:{NFSU2_TR(0x759658);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B75965b:{NFSU2_TR(0x75965b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75965c:{NFSU2_TR(0x75965c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759661ull));
TAIL_STATIC(0x76115eu,761);
}
B759661:L759661:{c.instructions+=2;NFSU2_TR(0x759661);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B759664:{NFSU2_TR(0x759664);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B759670:L759670:{c.instructions+=2;NFSU2_TR(0x759670);
u8 U[4];
w4(U+0,u32(0x124ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759675:{NFSU2_TR(0x759675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75967aull));
TAIL_STATIC(0x5832f0u,583);
}
B75967a:L75967a:{c.instructions+=4;NFSU2_TR(0x75967a);
__builtin_memmove((R+8),(R+0),4);
}
B75967c:{NFSU2_TR(0x75967c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75967f:{NFSU2_TR(0x75967f);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B759681:{NFSU2_TR(0x759681);
if(r1(R+518)){{goto L759690;}}
}
B759683:L759683:{c.instructions+=4;NFSU2_TR(0x759683);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759684:{NFSU2_TR(0x759684);
w4(R+4,u32(0x49ull));
}
B759689:{NFSU2_TR(0x759689);
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
B75968b:{NFSU2_TR(0x75968b);
__builtin_memmove((R+28),(R+8),4);
}
B75968d:L75968d:{c.instructions+=1;NFSU2_TR(0x75968d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L75968f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75968du);}goto L75968d;}
}
B75968f:L75968f:{c.instructions+=1;NFSU2_TR(0x75968f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B759690:L759690:{c.instructions+=2;NFSU2_TR(0x759690);
__builtin_memmove((R+0),(R+8),4);
}
B759692:{NFSU2_TR(0x759692);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7596a0:L7596a0:{c.instructions+=5;NFSU2_TR(0x7596a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7596a1:{NFSU2_TR(0x7596a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7596a5:{NFSU2_TR(0x7596a5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7596a7:{NFSU2_TR(0x7596a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7596a8:{NFSU2_TR(0x7596a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7596adull));
TAIL_STATIC(0x7582b0u,758);
}
B7596ad:L7596ad:{c.instructions+=2;NFSU2_TR(0x7596ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7596ae:{NFSU2_TR(0x7596ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7596b3ull));
TAIL_STATIC(0x598ec0u,598);
}
B7596b3:L7596b3:{c.instructions+=3;NFSU2_TR(0x7596b3);
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
B7596b6:{NFSU2_TR(0x7596b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7596b7:{NFSU2_TR(0x7596b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7596c0:L7596c0:{c.instructions+=3;NFSU2_TR(0x7596c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7596c4:{NFSU2_TR(0x7596c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7596c6:{NFSU2_TR(0x7596c6);
if(r1(R+518)){{goto L7596cb;}}
}
B7596c8:L7596c8:{c.instructions+=2;NFSU2_TR(0x7596c8);
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
B7596ca:{NFSU2_TR(0x7596ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7596cb:L7596cb:{c.instructions+=11;NFSU2_TR(0x7596cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7596cf:{NFSU2_TR(0x7596cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7596d1:{NFSU2_TR(0x7596d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7596d2:{NFSU2_TR(0x7596d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7596d3:{NFSU2_TR(0x7596d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7596d7:{NFSU2_TR(0x7596d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7596d8:{NFSU2_TR(0x7596d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7596dc:{NFSU2_TR(0x7596dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7596dd:{NFSU2_TR(0x7596dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7596de:{NFSU2_TR(0x7596de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7596df:{NFSU2_TR(0x7596df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7596e4ull));
TAIL_STATIC(0x74a500u,74a);
}
B7596e4:L7596e4:{c.instructions+=4;NFSU2_TR(0x7596e4);
__builtin_memmove((R+12),(R+0),4);
}
B7596e6:{NFSU2_TR(0x7596e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7596e9:{NFSU2_TR(0x7596e9);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7596eb:{NFSU2_TR(0x7596eb);
if(r1(R+518)){{goto L75973f;}}
}
B7596ed:L7596ed:{c.instructions+=2;NFSU2_TR(0x7596ed);
u8 U[4];
w4(U+0,u32(0x124ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7596f2:{NFSU2_TR(0x7596f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7596f7ull));
TAIL_STATIC(0x5832f0u,583);
}
B7596f7:L7596f7:{c.instructions+=4;NFSU2_TR(0x7596f7);
__builtin_memmove((R+8),(R+0),4);
}
B7596f9:{NFSU2_TR(0x7596f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7596fc:{NFSU2_TR(0x7596fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7596fe:{NFSU2_TR(0x7596fe);
if(r1(R+518)){{goto L759736;}}
}
B759700:L759700:{c.instructions+=4;NFSU2_TR(0x759700);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759701:{NFSU2_TR(0x759701);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B759703:{NFSU2_TR(0x759703);
w4(R+4,u32(0x49ull));
}
B759708:{NFSU2_TR(0x759708);
__builtin_memmove((R+28),(R+8),4);
}
B75970a:L75970a:{c.instructions+=1;NFSU2_TR(0x75970a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L75970c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75970au);}goto L75970a;}
}
B75970c:L75970c:{c.instructions+=5;NFSU2_TR(0x75970c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B75970e:{NFSU2_TR(0x75970e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B759711:{NFSU2_TR(0x759711);
__builtin_memmove((R+0),(R+4),4);
}
B759713:{NFSU2_TR(0x759713);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B759716:{NFSU2_TR(0x759716);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x108ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75971c:L75971c:{c.instructions+=1;NFSU2_TR(0x75971c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75971e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75971cu);}goto L75971c;}
}
B75971e:L75971e:{c.instructions+=2;NFSU2_TR(0x75971e);
__builtin_memmove((R+4),(R+0),4);
}
B759720:{NFSU2_TR(0x759720);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B759723:L759723:{c.instructions+=1;NFSU2_TR(0x759723);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L759725;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x759723u);}goto L759723;}
}
B759725:L759725:{c.instructions+=7;NFSU2_TR(0x759725);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B759726:{NFSU2_TR(0x759726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759727:{NFSU2_TR(0x759727);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B759728:{NFSU2_TR(0x759728);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x118ull))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B759732:{NFSU2_TR(0x759732);
__builtin_memmove((R+0),(R+8),4);
}
B759734:{NFSU2_TR(0x759734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B759735:{NFSU2_TR(0x759735);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B759736:L759736:{c.instructions+=2;NFSU2_TR(0x759736);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759737:{NFSU2_TR(0x759737);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75973cull));
TAIL_STATIC(0x74a2d0u,74a);
}
B75973c:L75973c:{c.instructions+=1;NFSU2_TR(0x75973c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75973f:L75973f:{c.instructions+=5;NFSU2_TR(0x75973f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759740:{NFSU2_TR(0x759740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B759741:{NFSU2_TR(0x759741);
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
B759743:{NFSU2_TR(0x759743);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B759744:{NFSU2_TR(0x759744);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B759750:L759750:{c.instructions+=7;NFSU2_TR(0x759750);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759754:{NFSU2_TR(0x759754);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759755:{NFSU2_TR(0x759755);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759756:{NFSU2_TR(0x759756);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75975a:{NFSU2_TR(0x75975a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75975b:{NFSU2_TR(0x75975b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75975c:{NFSU2_TR(0x75975c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759761ull));
TAIL_STATIC(0x7582b0u,758);
}
B759761:L759761:{c.instructions+=4;NFSU2_TR(0x759761);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B759763:{NFSU2_TR(0x759763);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B759766:{NFSU2_TR(0x759766);
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
B759768:{NFSU2_TR(0x759768);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7598e7;}}
}
B75976e:L75976e:{c.instructions+=4;NFSU2_TR(0x75976e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75976f:{NFSU2_TR(0x75976f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759771:{NFSU2_TR(0x759771);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759773:{NFSU2_TR(0x759773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759778ull));
TAIL_STATIC(0x74a220u,74a);
}
B759778:L759778:{c.instructions+=4;NFSU2_TR(0x759778);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75977b:{NFSU2_TR(0x75977b);
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
B75977d:{NFSU2_TR(0x75977d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B75977f:{NFSU2_TR(0x75977f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759789;}}
}
B759781:L759781:{c.instructions+=4;NFSU2_TR(0x759781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759782:{NFSU2_TR(0x759782);
w4(R+0,u32(0xfffffff7ull));
}
B759787:{NFSU2_TR(0x759787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B759788:{NFSU2_TR(0x759788);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B759789:L759789:{c.instructions+=11;NFSU2_TR(0x759789);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75978a:{NFSU2_TR(0x75978a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75978e:{NFSU2_TR(0x75978e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B759790:{NFSU2_TR(0x759790);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((R+4),(U+0),4);
}
B759796:{NFSU2_TR(0x759796);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759797:{NFSU2_TR(0x759797);
u8 U[2];
w2(U+0,u16(0x2ull));
s2(u32(r4(R+4)),r2(U+0));
}
B75979c:{NFSU2_TR(0x75979c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10aull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7597a3:{NFSU2_TR(0x7597a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7597a9:{NFSU2_TR(0x7597a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7597af:{NFSU2_TR(0x7597af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7597b5:{NFSU2_TR(0x7597b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7597bc;}}
}
B7597b7:L7597b7:{c.instructions+=1;NFSU2_TR(0x7597b7);
w4(R+20,u32(0x783fe5ull));
}
B7597bc:L7597bc:{c.instructions+=2;NFSU2_TR(0x7597bc);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7597c0:{NFSU2_TR(0x7597c0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7597d8;}}
}
B7597c2:L7597c2:{c.instructions+=6;NFSU2_TR(0x7597c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7597c8:{NFSU2_TR(0x7597c8);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B7597ca:{NFSU2_TR(0x7597ca);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B7597cc:{NFSU2_TR(0x7597cc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x16bull))));
}
B7597d1:{NFSU2_TR(0x7597d1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B7597d4:{NFSU2_TR(0x7597d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7597d8:L7597d8:{c.instructions+=4;NFSU2_TR(0x7597d8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7597db:{NFSU2_TR(0x7597db);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7597dd:{NFSU2_TR(0x7597dd);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7597df:{NFSU2_TR(0x7597df);
if(r1(R+518)){{goto L7597fa;}}
}
B7597e1:L7597e1:{c.instructions+=2;NFSU2_TR(0x7597e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7597e3:{NFSU2_TR(0x7597e3);
if(r1(R+518)){{goto L7597fa;}}
}
B7597e5:L7597e5:{c.instructions+=2;NFSU2_TR(0x7597e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xffull))));
}
B7597eb:{NFSU2_TR(0x7597eb);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7597fa;}}
}
B7597ed:L7597ed:{c.instructions+=5;NFSU2_TR(0x7597ed);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B7597f1:{NFSU2_TR(0x7597f1);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B7597f5:{NFSU2_TR(0x7597f5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7597f6:{NFSU2_TR(0x7597f6);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7597f8:{NFSU2_TR(0x7597f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7597e1u);}goto L7597e1;}}
}
B7597fa:L7597fa:{c.instructions+=5;NFSU2_TR(0x7597fa);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B7597fe:{NFSU2_TR(0x7597fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B759801:{NFSU2_TR(0x759801);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759802:{NFSU2_TR(0x759802);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759803:{NFSU2_TR(0x759803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759808ull));
TAIL_STATIC(0x742ee0u,742);
}
B759808:L759808:{c.instructions+=11;NFSU2_TR(0x759808);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B75980f:{NFSU2_TR(0x75980f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B759816:{NFSU2_TR(0x759816);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B759818:{NFSU2_TR(0x759818);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B75981e:{NFSU2_TR(0x75981e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B759821:{NFSU2_TR(0x759821);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B759827:{NFSU2_TR(0x759827);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75982a:{NFSU2_TR(0x75982a);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B75982c:{NFSU2_TR(0x75982c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75982f:{NFSU2_TR(0x75982f);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B759831:{NFSU2_TR(0x759831);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759858;}}
}
B759833:L759833:{c.instructions+=8;NFSU2_TR(0x759833);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759837:{NFSU2_TR(0x759837);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75983d:{NFSU2_TR(0x75983d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B759840:{NFSU2_TR(0x759840);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759846:{NFSU2_TR(0x759846);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B759849:{NFSU2_TR(0x759849);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75984f:{NFSU2_TR(0x75984f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B759852:{NFSU2_TR(0x759852);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759858:L759858:{c.instructions+=2;NFSU2_TR(0x759858);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+12),(U+8),1);
w1(R+512,u8((r1(U+12))<(u8(0x3aull))));
w1(R+523,sborrow<u8>(r1(U+12),u8(0x3aull)));
w1(U+13,u8(u32(r1(U+12))-u32(u8(0x3aull))));
w1(R+519,u8(s8(r1(U+13))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
w1(U+9,u8(u32(r1(U+13))&u32(u8(0xffull))));
w1(U+10,u8(__builtin_popcountll(u64(r1(U+9)))));
w1(U+11,u8(u32(r1(U+10))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+11))==(u8(0x0ull))));
}
B75985c:{NFSU2_TR(0x75985c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75987c;}}
}
B75985e:L75985e:{c.instructions+=3;NFSU2_TR(0x75985e);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B759862:{NFSU2_TR(0x759862);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759863:{NFSU2_TR(0x759863);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759868ull));
TAIL_STATIC(0x75d65bu,75d);
}
B759868:L759868:{c.instructions+=4;NFSU2_TR(0x759868);
u8 U[47];
w4(U+39,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B75986b:{NFSU2_TR(0x75986b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75986c:{NFSU2_TR(0x75986c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759872:{NFSU2_TR(0x759872);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759877ull));
TAIL_STATIC(0x75d65bu,75d);
}
B759877:L759877:{c.instructions+=2;NFSU2_TR(0x759877);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75987a:{NFSU2_TR(0x75987a);
{goto L75988b;}
}
B75987c:L75987c:{c.instructions+=4;NFSU2_TR(0x75987c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759880:{NFSU2_TR(0x759880);
__builtin_memmove((R+4),(R+0),4);
}
B759882:{NFSU2_TR(0x759882);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B759885:{NFSU2_TR(0x759885);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10aull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75988b:L75988b:{c.instructions+=13;NFSU2_TR(0x75988b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B759892:{NFSU2_TR(0x759892);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B759894:{NFSU2_TR(0x759894);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+9),(U+4),1);
}
B75989a:{NFSU2_TR(0x75989a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7598a0:{NFSU2_TR(0x7598a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7598a7:{NFSU2_TR(0x7598a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7598a8:{NFSU2_TR(0x7598a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7598a9:{NFSU2_TR(0x7598a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7598af:{NFSU2_TR(0x7598af);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B7598b2:{NFSU2_TR(0x7598b2);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B7598b4:{NFSU2_TR(0x7598b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B7598b7:{NFSU2_TR(0x7598b7);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B7598b9:{NFSU2_TR(0x7598b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7598db;}}
}
B7598bb:L7598bb:{c.instructions+=3;NFSU2_TR(0x7598bb);
u8 U[4];
w4(U+0,u32(0x7530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7598c0:{NFSU2_TR(0x7598c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7598c1:{NFSU2_TR(0x7598c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7598c6ull));
TAIL_STATIC(0x74aa10u,74a);
}
B7598c6:L7598c6:{c.instructions+=7;NFSU2_TR(0x7598c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7598c9:{NFSU2_TR(0x7598c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7598cc:{NFSU2_TR(0x7598cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7598d6:{NFSU2_TR(0x7598d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7598d7:{NFSU2_TR(0x7598d7);
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
B7598d9:{NFSU2_TR(0x7598d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7598da:{NFSU2_TR(0x7598da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7598db:L7598db:{c.instructions+=2;NFSU2_TR(0x7598db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7598e5:{NFSU2_TR(0x7598e5);
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
B7598e7:L7598e7:{c.instructions+=3;NFSU2_TR(0x7598e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7598e8:{NFSU2_TR(0x7598e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7598e9:{NFSU2_TR(0x7598e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7598f0:L7598f0:{c.instructions+=8;NFSU2_TR(0x7598f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7598f4:{NFSU2_TR(0x7598f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7598fa:{NFSU2_TR(0x7598fa);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7598fc:{NFSU2_TR(0x7598fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7598fe:{NFSU2_TR(0x7598fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B759901:{NFSU2_TR(0x759901);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759902:{NFSU2_TR(0x759902);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759903:{NFSU2_TR(0x759903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759908ull));
TAIL_STATIC(0x7582b0u,758);
}
B759908:L759908:{c.instructions+=3;NFSU2_TR(0x759908);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75990b:{NFSU2_TR(0x75990b);
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
B75990d:{NFSU2_TR(0x75990d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B759910:L759910:{c.instructions+=15;NFSU2_TR(0x759910);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759911:{NFSU2_TR(0x759911);
__builtin_memmove((R+20),(R+16),4);
}
B759913:{NFSU2_TR(0x759913);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B759916:{NFSU2_TR(0x759916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x984ull))));
}
B75991c:{NFSU2_TR(0x75991c);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B759921:{NFSU2_TR(0x759921);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759922:{NFSU2_TR(0x759922);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759923:{NFSU2_TR(0x759923);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B759926:{NFSU2_TR(0x759926);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B759928:{NFSU2_TR(0x759928);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75992e:{NFSU2_TR(0x75992e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75992f:{NFSU2_TR(0x75992f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B759931:{NFSU2_TR(0x759931);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B759933:{NFSU2_TR(0x759933);
u8 U[8];
w4(U+0,u32(u32(u32(0x98cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75993a:{NFSU2_TR(0x75993a);
if(r1(R+518)){{goto L759a64;}}
}
B759940:L759940:{c.instructions+=3;NFSU2_TR(0x759940);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759946:{NFSU2_TR(0x759946);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B759949:{NFSU2_TR(0x759949);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L759a64;}}
}
B75994f:L75994f:{c.instructions+=2;NFSU2_TR(0x75994f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B759952:{NFSU2_TR(0x759952);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L759a64;}}
}
B759958:L759958:{c.instructions+=4;NFSU2_TR(0x759958);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B75995a:{NFSU2_TR(0x75995a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75995d:{NFSU2_TR(0x75995d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75995f:{NFSU2_TR(0x75995f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L759987;}}
}
B759961:L759961:{c.instructions+=9;NFSU2_TR(0x759961);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759962:{NFSU2_TR(0x759962);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759963:{NFSU2_TR(0x759963);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759964:{NFSU2_TR(0x759964);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B759966:{NFSU2_TR(0x759966);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759967:{NFSU2_TR(0x759967);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B75996b:{NFSU2_TR(0x75996b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75996c:{NFSU2_TR(0x75996c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75996d:{NFSU2_TR(0x75996d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759972ull));
TAIL_STATIC(0x74a5c0u,74a);
}
B759972:L759972:{c.instructions+=3;NFSU2_TR(0x759972);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B759975:{NFSU2_TR(0x759975);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B759977:{NFSU2_TR(0x759977);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75997b;}}
}
B759979:L759979:{c.instructions+=1;NFSU2_TR(0x759979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+12)),r4(U+0));
}
B75997b:L75997b:{c.instructions+=3;NFSU2_TR(0x75997b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B75997d:{NFSU2_TR(0x75997d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B759980:{NFSU2_TR(0x759980);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759987;}}
}
B759982:L759982:{c.instructions+=2;NFSU2_TR(0x759982);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759985:{NFSU2_TR(0x759985);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B759987:L759987:{c.instructions+=3;NFSU2_TR(0x759987);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75998d:{NFSU2_TR(0x75998d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B759990:{NFSU2_TR(0x759990);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7599d6;}}
}
B759992:L759992:{c.instructions+=11;NFSU2_TR(0x759992);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B759994:{NFSU2_TR(0x759994);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759995:{NFSU2_TR(0x759995);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759996:{NFSU2_TR(0x759996);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759997:{NFSU2_TR(0x759997);
w4(R+8,u32(0x4ull));
}
B75999c:{NFSU2_TR(0x75999c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B75999e:{NFSU2_TR(0x75999e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75999f:{NFSU2_TR(0x75999f);
u8 U[12];
w4(U+0,u32(u32(u32(0x4018ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7599a6:{NFSU2_TR(0x7599a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7599a7:{NFSU2_TR(0x7599a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7599a8:{NFSU2_TR(0x7599a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7599adull));
TAIL_STATIC(0x74a6d0u,74a);
}
B7599ad:L7599ad:{c.instructions+=3;NFSU2_TR(0x7599ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B7599b0:{NFSU2_TR(0x7599b0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7599b2:{NFSU2_TR(0x7599b2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7599ca;}}
}
B7599b4:L7599b4:{c.instructions+=5;NFSU2_TR(0x7599b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7599ba:{NFSU2_TR(0x7599ba);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7599bc:{NFSU2_TR(0x7599bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7599c2:{NFSU2_TR(0x7599c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7599c8:{NFSU2_TR(0x7599c8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7599ca:L7599ca:{c.instructions+=1;NFSU2_TR(0x7599ca);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7599d6;}}
}
B7599cc:L7599cc:{c.instructions+=1;NFSU2_TR(0x7599cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7599d6:L7599d6:{c.instructions+=2;NFSU2_TR(0x7599d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7599dd:{NFSU2_TR(0x7599dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759a23;}}
}
B7599df:L7599df:{c.instructions+=7;NFSU2_TR(0x7599df);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4019ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7599e6:{NFSU2_TR(0x7599e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7599e8:{NFSU2_TR(0x7599e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4018ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+1),(U+4),1);
}
B7599ee:{NFSU2_TR(0x7599ee);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B7599f0:{NFSU2_TR(0x7599f0);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7599f5:{NFSU2_TR(0x7599f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7599fb:{NFSU2_TR(0x7599fb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L759a15;}}
}
B7599fd:L7599fd:{c.instructions+=5;NFSU2_TR(0x7599fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x401aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B759a04:{NFSU2_TR(0x759a04);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3fffull))));
}
B759a09:{NFSU2_TR(0x759a09);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B759a0d:{NFSU2_TR(0x759a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759a13:{NFSU2_TR(0x759a13);
{goto L759a23;}
}
B759a15:L759a15:{c.instructions+=3;NFSU2_TR(0x759a15);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffull))));
}
B759a1a:{NFSU2_TR(0x759a1a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B759a1d:{NFSU2_TR(0x759a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759a23:L759a23:{c.instructions+=4;NFSU2_TR(0x759a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759a29:{NFSU2_TR(0x759a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759a2f:{NFSU2_TR(0x759a2f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B759a31:{NFSU2_TR(0x759a31);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L759a64;}}
}
B759a33:L759a33:{c.instructions+=10;NFSU2_TR(0x759a33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759a34:{NFSU2_TR(0x759a34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759a35:{NFSU2_TR(0x759a35);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B759a37:{NFSU2_TR(0x759a37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759a38:{NFSU2_TR(0x759a38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759a39:{NFSU2_TR(0x759a39);
u8 U[12];
w4(U+0,u32(u32(u32(0x4018ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B759a40:{NFSU2_TR(0x759a40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B759a42:{NFSU2_TR(0x759a42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759a43:{NFSU2_TR(0x759a43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759a44:{NFSU2_TR(0x759a44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759a49ull));
TAIL_STATIC(0x74a6d0u,74a);
}
B759a49:L759a49:{c.instructions+=3;NFSU2_TR(0x759a49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B759a4c:{NFSU2_TR(0x759a4c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B759a4e:{NFSU2_TR(0x759a4e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L759a58;}}
}
B759a50:L759a50:{c.instructions+=2;NFSU2_TR(0x759a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B759a56:{NFSU2_TR(0x759a56);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B759a58:L759a58:{c.instructions+=1;NFSU2_TR(0x759a58);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L759a64;}}
}
B759a5a:L759a5a:{c.instructions+=1;NFSU2_TR(0x759a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B759a64:L759a64:{c.instructions+=2;NFSU2_TR(0x759a64);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B759a6b:{NFSU2_TR(0x759a6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759ac7;}}
}
B759a6d:L759a6d:{c.instructions+=3;NFSU2_TR(0x759a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759a70:{NFSU2_TR(0x759a70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759a71:{NFSU2_TR(0x759a71);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759a74ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B759a74:L759a74:{c.instructions+=3;NFSU2_TR(0x759a74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B759a77:{NFSU2_TR(0x759a77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B759a79:{NFSU2_TR(0x759a79);
if(r1(R+518)){{goto L759ac7;}}
}
B759a7b:L759a7b:{c.instructions+=3;NFSU2_TR(0x759a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759a7e:{NFSU2_TR(0x759a7e);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B759a81:{NFSU2_TR(0x759a81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759a8f;}}
}
B759a83:L759a83:{c.instructions+=2;NFSU2_TR(0x759a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x1001ull));
s4(u32(r4(U+0)),r4(U+4));
}
B759a8d:{NFSU2_TR(0x759a8d);
{goto L759abd;}
}
B759a8f:L759a8f:{c.instructions+=9;NFSU2_TR(0x759a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B759a99:{NFSU2_TR(0x759a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759a9c:{NFSU2_TR(0x759a9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759aa2:{NFSU2_TR(0x759aa2);
u8 U[46];
w4(U+38,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B759aa5:{NFSU2_TR(0x759aa5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759aab:{NFSU2_TR(0x759aab);
u8 U[46];
w4(U+38,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B759aae:{NFSU2_TR(0x759aae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759ab4:{NFSU2_TR(0x759ab4);
u8 U[48];
w4(U+40,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B759ab7:{NFSU2_TR(0x759ab7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759abd:L759abd:{c.instructions+=2;NFSU2_TR(0x759abd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759abe:{NFSU2_TR(0x759abe);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759ac1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B759ac1:L759ac1:{c.instructions+=2;NFSU2_TR(0x759ac1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B759ac4:{NFSU2_TR(0x759ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759ac7:L759ac7:{c.instructions+=2;NFSU2_TR(0x759ac7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B759ace:{NFSU2_TR(0x759ace);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759aee;}}
}
B759ad0:L759ad0:{c.instructions+=6;NFSU2_TR(0x759ad0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B759ad2:{NFSU2_TR(0x759ad2);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759ad4:{NFSU2_TR(0x759ad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((R+8),(U+0),4);
}
B759ada:{NFSU2_TR(0x759ada);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759adb:{NFSU2_TR(0x759adb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759adc:{NFSU2_TR(0x759adc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759ae1ull));
TAIL_STATIC(0x74a3f0u,74a);
}
B759ae1:L759ae1:{c.instructions+=2;NFSU2_TR(0x759ae1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B759ae4:{NFSU2_TR(0x759ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B759aee:L759aee:{c.instructions+=2;NFSU2_TR(0x759aee);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B759af5:{NFSU2_TR(0x759af5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759b3d;}}
}
B759af7:L759af7:{c.instructions+=6;NFSU2_TR(0x759af7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B759af9:{NFSU2_TR(0x759af9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759afa:{NFSU2_TR(0x759afa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759afb:{NFSU2_TR(0x759afb);
u8 U[4];
w4(U+0,u32(0x73746174ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759b00:{NFSU2_TR(0x759b00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759b01:{NFSU2_TR(0x759b01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759b06ull));
TAIL_STATIC(0x74a760u,74a);
}
B759b06:L759b06:{c.instructions+=3;NFSU2_TR(0x759b06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B759b09:{NFSU2_TR(0x759b09);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B759b0b:{NFSU2_TR(0x759b0b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L759b27;}}
}
B759b0d:L759b0d:{c.instructions+=8;NFSU2_TR(0x759b0d);
__builtin_memmove((R+8),(R+12),4);
}
B759b0f:{NFSU2_TR(0x759b0f);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B759b11:{NFSU2_TR(0x759b11);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B759b13:{NFSU2_TR(0x759b13);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff6ull))));
}
B759b16:{NFSU2_TR(0x759b16);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B759b19:{NFSU2_TR(0x759b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759b1f:{NFSU2_TR(0x759b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759b25:{NFSU2_TR(0x759b25);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B759b27:L759b27:{c.instructions+=1;NFSU2_TR(0x759b27);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L759b3d;}}
}
B759b29:L759b29:{c.instructions+=2;NFSU2_TR(0x759b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x1002ull));
s4(u32(r4(U+0)),r4(U+4));
}
B759b33:{NFSU2_TR(0x759b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B759b3d:L759b3d:{c.instructions+=2;NFSU2_TR(0x759b3d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B759b44:{NFSU2_TR(0x759b44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759be8;}}
}
B759b4a:L759b4a:{c.instructions+=25;NFSU2_TR(0x759b4a);
__builtin_memmove((R+4),gp(0x7d36a0),2);
}
B759b51:{NFSU2_TR(0x759b51);
__builtin_memmove((R+8),gp(0x7d36a2),1);
}
B759b57:{NFSU2_TR(0x759b57);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B759b59:{NFSU2_TR(0x759b59);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759b5d:{NFSU2_TR(0x759b5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759b61:{NFSU2_TR(0x759b61);
u8 U[6];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B759b66:{NFSU2_TR(0x759b66);
u8 U[6];
w4(U+0,u32(u32(u32(0x79ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B759b6b:{NFSU2_TR(0x759b6b);
u8 U[5];
w4(U+0,u32(u32(u32(0x71ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759b6f:{NFSU2_TR(0x759b6f);
u8 U[5];
w4(U+0,u32(u32(u32(0x73ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759b73:{NFSU2_TR(0x759b73);
u8 U[5];
w4(U+0,u32(u32(u32(0x75ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759b77:{NFSU2_TR(0x759b77);
u8 U[5];
w4(U+0,u32(u32(u32(0x76ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759b7b:{NFSU2_TR(0x759b7b);
u8 U[5];
w4(U+0,u32(u32(u32(0x7bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759b7f:{NFSU2_TR(0x759b7f);
u8 U[5];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B759b84:{NFSU2_TR(0x759b84);
u8 U[5];
w4(U+0,u32(u32(u32(0x72ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B759b89:{NFSU2_TR(0x759b89);
u8 U[5];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B759b8e:{NFSU2_TR(0x759b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759b94:{NFSU2_TR(0x759b94);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B759b97:{NFSU2_TR(0x759b97);
u8 U[5];
w4(U+0,u32(u32(u32(0x77ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759b9b:{NFSU2_TR(0x759b9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B759ba1:{NFSU2_TR(0x759ba1);
u8 U[5];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759ba5:{NFSU2_TR(0x759ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759bab:{NFSU2_TR(0x759bab);
__builtin_memmove((R+8),(R+4),4);
}
B759bad:{NFSU2_TR(0x759bad);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B759bb0:{NFSU2_TR(0x759bb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81b8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759bb6:{NFSU2_TR(0x759bb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B759bba:L759bba:{c.instructions+=1;NFSU2_TR(0x759bba);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L759bbc;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x759bbau);}goto L759bba;}
}
B759bbc:L759bbc:{c.instructions+=2;NFSU2_TR(0x759bbc);
__builtin_memmove((R+4),(R+8),4);
}
B759bbe:{NFSU2_TR(0x759bbe);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B759bc1:L759bc1:{c.instructions+=1;NFSU2_TR(0x759bc1);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L759bc3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x759bc1u);}goto L759bc1;}
}
B759bc3:L759bc3:{c.instructions+=8;NFSU2_TR(0x759bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759bc9:{NFSU2_TR(0x759bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B759bcc:{NFSU2_TR(0x759bcc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B759bcf:{NFSU2_TR(0x759bcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759bd0:{NFSU2_TR(0x759bd0);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B759bd4:{NFSU2_TR(0x759bd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759bd5:{NFSU2_TR(0x759bd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759bd6:{NFSU2_TR(0x759bd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759bdbull));
TAIL_STATIC(0x7583e0u,758);
}
B759bdb:L759bdb:{c.instructions+=2;NFSU2_TR(0x759bdb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B759bde:{NFSU2_TR(0x759bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B759be8:L759be8:{c.instructions+=2;NFSU2_TR(0x759be8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B759bef:{NFSU2_TR(0x759bef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759cba;}}
}
B759bf5:L759bf5:{c.instructions+=3;NFSU2_TR(0x759bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759bfb:{NFSU2_TR(0x759bfb);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B759c01:{NFSU2_TR(0x759c01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759cba;}}
}
B759c07:L759c07:{c.instructions+=2;NFSU2_TR(0x759c07);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B759c0a:{NFSU2_TR(0x759c0a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L759cba;}}
}
B759c10:L759c10:{c.instructions+=2;NFSU2_TR(0x759c10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759c11:{NFSU2_TR(0x759c11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759c16ull));
TAIL_STATIC(0x7585e0u,758);
}
B759c16:L759c16:{c.instructions+=19;NFSU2_TR(0x759c16);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B759c18:{NFSU2_TR(0x759c18);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+9),(U+4),1);
}
B759c1b:{NFSU2_TR(0x759c1b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B759c1d:{NFSU2_TR(0x759c1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B759c20:{NFSU2_TR(0x759c20);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
__builtin_memmove((R+28),(U+0),4);
}
B759c23:{NFSU2_TR(0x759c23);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B759c26:{NFSU2_TR(0x759c26);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B759c29:{NFSU2_TR(0x759c29);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759c2d:{NFSU2_TR(0x759c2d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B759c2f:{NFSU2_TR(0x759c2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+9),(U+4),1);
}
B759c32:{NFSU2_TR(0x759c32);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759c33:{NFSU2_TR(0x759c33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759c34:{NFSU2_TR(0x759c34);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759c38:{NFSU2_TR(0x759c38);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B759c3b:{NFSU2_TR(0x759c3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81f4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B759c41:{NFSU2_TR(0x759c41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759c42:{NFSU2_TR(0x759c42);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759c43:{NFSU2_TR(0x759c43);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759c47:{NFSU2_TR(0x759c47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759c4cull));
TAIL_STATIC(0x758910u,758);
}
B759c4c:L759c4c:{c.instructions+=3;NFSU2_TR(0x759c4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B759c4f:{NFSU2_TR(0x759c4f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B759c51:{NFSU2_TR(0x759c51);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L759c5f;}}
}
B759c53:L759c53:{c.instructions+=2;NFSU2_TR(0x759c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x1003ull));
s4(u32(r4(U+0)),r4(U+4));
}
B759c5d:{NFSU2_TR(0x759c5d);
{goto L759cba;}
}
B759c5f:L759c5f:{c.instructions+=15;NFSU2_TR(0x759c5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B759c63:{NFSU2_TR(0x759c63);
__builtin_memmove((R+8),(R+28),4);
}
B759c65:{NFSU2_TR(0x759c65);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+0),(U+0),2);
}
B759c68:{NFSU2_TR(0x759c68);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8020ull))));
__builtin_memmove((R+4),(U+0),4);
}
B759c6e:{NFSU2_TR(0x759c6e);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B759c71:{NFSU2_TR(0x759c71);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B759c74:{NFSU2_TR(0x759c74);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759c78:{NFSU2_TR(0x759c78);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759c7b:{NFSU2_TR(0x759c7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759c7f:{NFSU2_TR(0x759c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81d0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759c85:{NFSU2_TR(0x759c85);
__builtin_memmove((R+8),(R+4),4);
}
B759c87:{NFSU2_TR(0x759c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B759c8a:{NFSU2_TR(0x759c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759c8d:{NFSU2_TR(0x759c8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B759c90:{NFSU2_TR(0x759c90);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81d4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B759c96:L759c96:{c.instructions+=1;NFSU2_TR(0x759c96);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L759c98;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x759c96u);}goto L759c96;}
}
B759c98:L759c98:{c.instructions+=2;NFSU2_TR(0x759c98);
__builtin_memmove((R+4),(R+8),4);
}
B759c9a:{NFSU2_TR(0x759c9a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B759c9d:L759c9d:{c.instructions+=1;NFSU2_TR(0x759c9d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L759c9f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x759c9du);}goto L759c9d;}
}
B759c9f:L759c9f:{c.instructions+=5;NFSU2_TR(0x759c9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B759ca2:{NFSU2_TR(0x759ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B759cac:{NFSU2_TR(0x759cac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B759cae:{NFSU2_TR(0x759cae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759cb4:{NFSU2_TR(0x759cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759cba:L759cba:{c.instructions+=2;NFSU2_TR(0x759cba);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B759cc1:{NFSU2_TR(0x759cc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759e5d;}}
}
B759cc7:L759cc7:{c.instructions+=9;NFSU2_TR(0x759cc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8022ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B759cce:{NFSU2_TR(0x759cce);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B759cd1:{NFSU2_TR(0x759cd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x86bcull))));
__builtin_memmove((R+28),(U+0),4);
}
B759cd7:{NFSU2_TR(0x759cd7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759cd8:{NFSU2_TR(0x759cd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759cd9:{NFSU2_TR(0x759cd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8028ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759cdf:{NFSU2_TR(0x759cdf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759ce0:{NFSU2_TR(0x759ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8024ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759ce6:{NFSU2_TR(0x759ce6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759cebull));
TAIL_STATIC(0x758220u,758);
}
B759ceb:L759ceb:{c.instructions+=3;NFSU2_TR(0x759ceb);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B759cef:{NFSU2_TR(0x759cef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759cf0:{NFSU2_TR(0x759cf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759cf5ull));
TAIL_STATIC(0x75aeb0u,75a);
}
B759cf5:L759cf5:{c.instructions+=6;NFSU2_TR(0x759cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8024ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B759cfb:{NFSU2_TR(0x759cfb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759cfc:{NFSU2_TR(0x759cfc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B759d00:{NFSU2_TR(0x759d00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d01:{NFSU2_TR(0x759d01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d02:{NFSU2_TR(0x759d02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759d07ull));
TAIL_STATIC(0x75aee0u,75a);
}
B759d07:L759d07:{c.instructions+=5;NFSU2_TR(0x759d07);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d09:{NFSU2_TR(0x759d09);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B759d0d:{NFSU2_TR(0x759d0d);
u8 U[4];
w4(U+0,u32(0x7980ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d12:{NFSU2_TR(0x759d12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d13:{NFSU2_TR(0x759d13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759d18ull));
TAIL_STATIC(0x75aee0u,75a);
}
B759d18:L759d18:{c.instructions+=7;NFSU2_TR(0x759d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B759d1e:{NFSU2_TR(0x759d1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d1f:{NFSU2_TR(0x759d1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81b8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B759d25:{NFSU2_TR(0x759d25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d26:{NFSU2_TR(0x759d26);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B759d2a:{NFSU2_TR(0x759d2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d2b:{NFSU2_TR(0x759d2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759d30ull));
TAIL_STATIC(0x75aee0u,75a);
}
B759d30:L759d30:{c.instructions+=7;NFSU2_TR(0x759d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B759d36:{NFSU2_TR(0x759d36);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d37:{NFSU2_TR(0x759d37);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81d4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B759d3d:{NFSU2_TR(0x759d3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d3e:{NFSU2_TR(0x759d3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B759d42:{NFSU2_TR(0x759d42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d43:{NFSU2_TR(0x759d43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759d48ull));
TAIL_STATIC(0x75aee0u,75a);
}
B759d48:L759d48:{c.instructions+=8;NFSU2_TR(0x759d48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B759d4b:{NFSU2_TR(0x759d4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80acull))));
__builtin_memmove((R+0),(U+0),4);
}
B759d51:{NFSU2_TR(0x759d51);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d53:{NFSU2_TR(0x759d53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d54:{NFSU2_TR(0x759d54);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B759d58:{NFSU2_TR(0x759d58);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d59:{NFSU2_TR(0x759d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80a8ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B759d63:{NFSU2_TR(0x759d63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759d68ull));
TAIL_STATIC(0x75af40u,75a);
}
B759d68:L759d68:{c.instructions+=7;NFSU2_TR(0x759d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759d6e:{NFSU2_TR(0x759d6e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d70:{NFSU2_TR(0x759d70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d71:{NFSU2_TR(0x759d71);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80acull))));
__builtin_memmove((R+0),(U+0),4);
}
B759d77:{NFSU2_TR(0x759d77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d78:{NFSU2_TR(0x759d78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d79:{NFSU2_TR(0x759d79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759d7eull));
TAIL_STATIC(0x75a430u,75a);
}
B759d7e:L759d7e:{c.instructions+=11;NFSU2_TR(0x759d7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8634ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759d84:{NFSU2_TR(0x759d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x85acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759d8a:{NFSU2_TR(0x759d8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d8b:{NFSU2_TR(0x759d8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8638ull))));
__builtin_memmove((R+8),(U+0),4);
}
B759d91:{NFSU2_TR(0x759d91);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d92:{NFSU2_TR(0x759d92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d93:{NFSU2_TR(0x759d93);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x85b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B759d99:{NFSU2_TR(0x759d99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759d9a:{NFSU2_TR(0x759d9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x49cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B759da1:{NFSU2_TR(0x759da1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759da2:{NFSU2_TR(0x759da2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759da7ull));
TAIL_STATIC(0x75bab0u,75b);
}
B759da7:L759da7:{c.instructions+=6;NFSU2_TR(0x759da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8024ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759dad:{NFSU2_TR(0x759dad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759dae:{NFSU2_TR(0x759dae);
u8 U[4];
w4(U+0,u32(u32(u32(0x4a4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B759db5:{NFSU2_TR(0x759db5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759db6:{NFSU2_TR(0x759db6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759db7:{NFSU2_TR(0x759db7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759dbcull));
TAIL_STATIC(0x75bb10u,75b);
}
B759dbc:L759dbc:{c.instructions+=3;NFSU2_TR(0x759dbc);
u8 U[4];
w4(U+0,u32(u32(u32(0x4acull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B759dc3:{NFSU2_TR(0x759dc3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759dc4:{NFSU2_TR(0x759dc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759dc9ull));
TAIL_STATIC(0x75bbd0u,75b);
}
B759dc9:L759dc9:{c.instructions+=23;NFSU2_TR(0x759dc9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B759dcc:{NFSU2_TR(0x759dcc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B759dce:{NFSU2_TR(0x759dce);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759dd2:{NFSU2_TR(0x759dd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759dd6:{NFSU2_TR(0x759dd6);
u8 U[6];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B759ddb:{NFSU2_TR(0x759ddb);
u8 U[5];
w4(U+0,u32(u32(u32(0x7aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759ddf:{NFSU2_TR(0x759ddf);
u8 U[5];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B759de4:{NFSU2_TR(0x759de4);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B759dea:{NFSU2_TR(0x759dea);
u8 U[5];
w4(U+0,u32(u32(u32(0x71ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759dee:{NFSU2_TR(0x759dee);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8021ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B759df4:{NFSU2_TR(0x759df4);
u8 U[5];
w4(U+0,u32(u32(u32(0x72ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759df8:{NFSU2_TR(0x759df8);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8022ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B759dfe:{NFSU2_TR(0x759dfe);
u8 U[5];
w4(U+0,u32(u32(u32(0x73ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759e02:{NFSU2_TR(0x759e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x85acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759e08:{NFSU2_TR(0x759e08);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B759e0b:{NFSU2_TR(0x759e0b);
u8 U[5];
w4(U+0,u32(u32(u32(0x76ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759e0f:{NFSU2_TR(0x759e0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x85acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B759e15:{NFSU2_TR(0x759e15);
u8 U[5];
w4(U+0,u32(u32(u32(0x77ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B759e19:{NFSU2_TR(0x759e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x85acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759e1f:{NFSU2_TR(0x759e1f);
__builtin_memmove((R+0),(R+4),4);
}
B759e21:{NFSU2_TR(0x759e21);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B759e24:{NFSU2_TR(0x759e24);
u8 U[4];
w4(U+0,u32(u32(u32(0x470ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B759e2b:{NFSU2_TR(0x759e2b);
u8 U[4];
w4(U+0,u32(u32(u32(0x7aull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B759e2f:L759e2f:{c.instructions+=1;NFSU2_TR(0x759e2f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L759e31;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x759e2fu);}goto L759e2f;}
}
B759e31:L759e31:{c.instructions+=2;NFSU2_TR(0x759e31);
__builtin_memmove((R+4),(R+0),4);
}
B759e33:{NFSU2_TR(0x759e33);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B759e36:L759e36:{c.instructions+=1;NFSU2_TR(0x759e36);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L759e38;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x759e36u);}goto L759e36;}
}
B759e38:L759e38:{c.instructions+=8;NFSU2_TR(0x759e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x85acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759e3e:{NFSU2_TR(0x759e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B759e41:{NFSU2_TR(0x759e41);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xaull))));
}
B759e44:{NFSU2_TR(0x759e44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759e45:{NFSU2_TR(0x759e45);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B759e49:{NFSU2_TR(0x759e49);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759e4a:{NFSU2_TR(0x759e4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759e4b:{NFSU2_TR(0x759e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759e50ull));
TAIL_STATIC(0x7583e0u,758);
}
B759e50:L759e50:{c.instructions+=2;NFSU2_TR(0x759e50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B759e53:{NFSU2_TR(0x759e53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B759e5d:L759e5d:{c.instructions+=3;NFSU2_TR(0x759e5d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B759e64:{NFSU2_TR(0x759e64);
w4(R+28,u32(0xeull));
}
B759e69:{NFSU2_TR(0x759e69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759e9b;}}
}
B759e6b:L759e6b:{c.instructions+=3;NFSU2_TR(0x759e6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759e71:{NFSU2_TR(0x759e71);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B759e77:{NFSU2_TR(0x759e77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759e9b;}}
}
B759e79:L759e79:{c.instructions+=2;NFSU2_TR(0x759e79);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B759e7c:{NFSU2_TR(0x759e7c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L759e9b;}}
}
B759e7e:L759e7e:{c.instructions+=2;NFSU2_TR(0x759e7e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759e7f:{NFSU2_TR(0x759e7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759e84ull));
TAIL_STATIC(0x7585e0u,758);
}
B759e84:L759e84:{c.instructions+=5;NFSU2_TR(0x759e84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B759e87:{NFSU2_TR(0x759e87);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B759e89:{NFSU2_TR(0x759e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759e8f:{NFSU2_TR(0x759e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759e95:{NFSU2_TR(0x759e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759e9b:L759e9b:{c.instructions+=2;NFSU2_TR(0x759e9b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B759ea1:{NFSU2_TR(0x759ea1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759f89;}}
}
B759ea7:L759ea7:{c.instructions+=3;NFSU2_TR(0x759ea7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B759eab:{NFSU2_TR(0x759eab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759eac:{NFSU2_TR(0x759eac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759eb1ull));
TAIL_STATIC(0x75aeb0u,75a);
}
B759eb1:L759eb1:{c.instructions+=7;NFSU2_TR(0x759eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8024ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759eb7:{NFSU2_TR(0x759eb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759eb8:{NFSU2_TR(0x759eb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8028ull))));
__builtin_memmove((R+8),(U+0),4);
}
B759ebe:{NFSU2_TR(0x759ebe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759ebf:{NFSU2_TR(0x759ebf);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B759ec3:{NFSU2_TR(0x759ec3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759ec4:{NFSU2_TR(0x759ec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759ec9ull));
TAIL_STATIC(0x75aee0u,75a);
}
B759ec9:L759ec9:{c.instructions+=5;NFSU2_TR(0x759ec9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759ecb:{NFSU2_TR(0x759ecb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B759ecf:{NFSU2_TR(0x759ecf);
u8 U[4];
w4(U+0,u32(0x7d397cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759ed4:{NFSU2_TR(0x759ed4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759ed5:{NFSU2_TR(0x759ed5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759edaull));
TAIL_STATIC(0x75aee0u,75a);
}
B759eda:L759eda:{c.instructions+=7;NFSU2_TR(0x759eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B759ee0:{NFSU2_TR(0x759ee0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759ee1:{NFSU2_TR(0x759ee1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81b8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B759ee7:{NFSU2_TR(0x759ee7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759ee8:{NFSU2_TR(0x759ee8);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B759eec:{NFSU2_TR(0x759eec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759eed:{NFSU2_TR(0x759eed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759ef2ull));
TAIL_STATIC(0x75aee0u,75a);
}
B759ef2:L759ef2:{c.instructions+=7;NFSU2_TR(0x759ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B759ef8:{NFSU2_TR(0x759ef8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759ef9:{NFSU2_TR(0x759ef9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81d4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759eff:{NFSU2_TR(0x759eff);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B759f03:{NFSU2_TR(0x759f03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759f04:{NFSU2_TR(0x759f04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759f05:{NFSU2_TR(0x759f05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759f0aull));
TAIL_STATIC(0x75aee0u,75a);
}
B759f0a:L759f0a:{c.instructions+=7;NFSU2_TR(0x759f0a);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759f0c:{NFSU2_TR(0x759f0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8130ull))));
__builtin_memmove((R+28),(U+0),4);
}
B759f12:{NFSU2_TR(0x759f12);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B759f16:{NFSU2_TR(0x759f16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759f17:{NFSU2_TR(0x759f17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759f18:{NFSU2_TR(0x759f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x812cull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B759f22:{NFSU2_TR(0x759f22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759f27ull));
TAIL_STATIC(0x75af40u,75a);
}
B759f27:L759f27:{c.instructions+=8;NFSU2_TR(0x759f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x812cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B759f2d:{NFSU2_TR(0x759f2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B759f30:{NFSU2_TR(0x759f30);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759f32:{NFSU2_TR(0x759f32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759f33:{NFSU2_TR(0x759f33);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x87beull))));
__builtin_memmove((R+0),(U+0),4);
}
B759f39:{NFSU2_TR(0x759f39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759f3a:{NFSU2_TR(0x759f3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759f3b:{NFSU2_TR(0x759f3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759f40ull));
TAIL_STATIC(0x75a430u,75a);
}
B759f40:L759f40:{c.instructions+=5;NFSU2_TR(0x759f40);
u8 U[5];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B759f48:{NFSU2_TR(0x759f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759f4e:{NFSU2_TR(0x759f4e);
__builtin_memmove((R+8),(R+4),4);
}
B759f50:{NFSU2_TR(0x759f50);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B759f53:{NFSU2_TR(0x759f53);
u8 U[4];
w4(U+0,u32(u32(u32(0x81ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B759f5a:L759f5a:{c.instructions+=1;NFSU2_TR(0x759f5a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L759f5c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x759f5au);}goto L759f5a;}
}
B759f5c:L759f5c:{c.instructions+=2;NFSU2_TR(0x759f5c);
__builtin_memmove((R+4),(R+8),4);
}
B759f5e:{NFSU2_TR(0x759f5e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B759f61:L759f61:{c.instructions+=1;NFSU2_TR(0x759f61);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L759f63;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x759f61u);}goto L759f61;}
}
B759f63:L759f63:{c.instructions+=8;NFSU2_TR(0x759f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x81d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759f69:{NFSU2_TR(0x759f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B759f6c:{NFSU2_TR(0x759f6c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B759f6d:{NFSU2_TR(0x759f6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759f6e:{NFSU2_TR(0x759f6e);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B759f75:{NFSU2_TR(0x759f75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759f76:{NFSU2_TR(0x759f76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759f77:{NFSU2_TR(0x759f77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759f7cull));
TAIL_STATIC(0x7583e0u,758);
}
B759f7c:L759f7c:{c.instructions+=2;NFSU2_TR(0x759f7c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B759f7f:{NFSU2_TR(0x759f7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B759f89:L759f89:{c.instructions+=2;NFSU2_TR(0x759f89);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B759f90:{NFSU2_TR(0x759f90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759fc6;}}
}
B759f92:L759f92:{c.instructions+=3;NFSU2_TR(0x759f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B759f98:{NFSU2_TR(0x759f98);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B759f9e:{NFSU2_TR(0x759f9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L759fc6;}}
}
B759fa0:L759fa0:{c.instructions+=2;NFSU2_TR(0x759fa0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B759fa3:{NFSU2_TR(0x759fa3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L759fc6;}}
}
B759fa5:L759fa5:{c.instructions+=2;NFSU2_TR(0x759fa5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759fa6:{NFSU2_TR(0x759fa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759fabull));
TAIL_STATIC(0x7585e0u,758);
}
B759fab:L759fab:{c.instructions+=5;NFSU2_TR(0x759fab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B759fae:{NFSU2_TR(0x759fae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B759fb0:{NFSU2_TR(0x759fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759fb6:{NFSU2_TR(0x759fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B759fbc:{NFSU2_TR(0x759fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B759fc6:L759fc6:{c.instructions+=2;NFSU2_TR(0x759fc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x98cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B759fcd:{NFSU2_TR(0x759fcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759fd2ull));
TAIL_STATIC(0x76115eu,761);
}
B759fd2:L759fd2:{c.instructions+=6;NFSU2_TR(0x759fd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B759fd3:{NFSU2_TR(0x759fd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B759fd4:{NFSU2_TR(0x759fd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B759fd5:{NFSU2_TR(0x759fd5);
__builtin_memmove((R+16),(R+20),4);
}
B759fd7:{NFSU2_TR(0x759fd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B759fd8:{NFSU2_TR(0x759fd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B759fe0:L759fe0:{c.instructions+=11;NFSU2_TR(0x759fe0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759fe1:{NFSU2_TR(0x759fe1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B759fe5:{NFSU2_TR(0x759fe5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759fe6:{NFSU2_TR(0x759fe6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759fe7:{NFSU2_TR(0x759fe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B759feb:{NFSU2_TR(0x759feb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B759fec:{NFSU2_TR(0x759fec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B759ff0:{NFSU2_TR(0x759ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B759ff6:{NFSU2_TR(0x759ff6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B759ff9:{NFSU2_TR(0x759ff9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B759ffb:{NFSU2_TR(0x759ffb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x75a00du,75a);}
}
B759ffd:L759ffd:{c.instructions+=2;NFSU2_TR(0x759ffd);
__builtin_memmove((R+4),(R+12),4);
}
B759fff:{NFSU2_TR(0x759fff);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
TAIL_STATIC(0x75a002u,75a);
}
XIT:NFSU2_TR_EXIT(0x759,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
