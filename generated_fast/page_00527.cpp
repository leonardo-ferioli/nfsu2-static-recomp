#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x527,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x527,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_527(u8* __restrict R,Cpu& c);
u32 page_527(Cpu& c){return body_527(c.regs.data(),c);}
__attribute__((noinline)) u32 body_527(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x527001:goto L527001;
case 0x527004:c.instructions+=1;goto B527004;
case 0x527006:goto L527006;
case 0x527008:c.instructions+=2;goto B527008;
case 0x52700b:c.instructions+=1;goto B52700b;
case 0x527010:goto L527010;
case 0x527013:c.instructions+=1;goto B527013;
case 0x527016:goto L527016;
case 0x527019:c.instructions+=3;goto B527019;
case 0x52701c:c.instructions+=2;goto B52701c;
case 0x52701e:c.instructions+=1;goto B52701e;
case 0x527020:goto L527020;
case 0x527023:c.instructions+=2;goto B527023;
case 0x527025:c.instructions+=1;goto B527025;
case 0x527027:goto L527027;
case 0x527030:goto L527030;
case 0x527035:c.instructions+=1;goto B527035;
case 0x52703a:goto L52703a;
case 0x52703d:c.instructions+=3;goto B52703d;
case 0x527040:c.instructions+=2;goto B527040;
case 0x527042:c.instructions+=1;goto B527042;
case 0x527044:goto L527044;
case 0x527047:c.instructions+=2;goto B527047;
case 0x527049:c.instructions+=1;goto B527049;
case 0x52704b:goto L52704b;
case 0x52704d:goto L52704d;
case 0x52704f:c.instructions+=1;goto B52704f;
case 0x527051:goto L527051;
case 0x527054:c.instructions+=1;goto B527054;
case 0x527056:goto L527056;
case 0x527058:c.instructions+=2;goto B527058;
case 0x52705b:c.instructions+=1;goto B52705b;
case 0x527060:goto L527060;
case 0x527063:c.instructions+=1;goto B527063;
case 0x527066:goto L527066;
case 0x527069:goto L527069;
case 0x52706c:c.instructions+=2;goto B52706c;
case 0x52706e:c.instructions+=1;goto B52706e;
case 0x527070:goto L527070;
case 0x527073:c.instructions+=2;goto B527073;
case 0x527075:c.instructions+=1;goto B527075;
case 0x527077:goto L527077;
case 0x527080:goto L527080;
case 0x527085:c.instructions+=1;goto B527085;
case 0x52708a:goto L52708a;
case 0x52708d:c.instructions+=3;goto B52708d;
case 0x527090:c.instructions+=2;goto B527090;
case 0x527092:c.instructions+=1;goto B527092;
case 0x527094:goto L527094;
case 0x527097:c.instructions+=2;goto B527097;
case 0x527099:c.instructions+=1;goto B527099;
case 0x52709b:goto L52709b;
case 0x52709d:goto L52709d;
case 0x52709f:c.instructions+=1;goto B52709f;
case 0x5270a1:goto L5270a1;
case 0x5270a4:c.instructions+=1;goto B5270a4;
case 0x5270a6:goto L5270a6;
case 0x5270a8:c.instructions+=2;goto B5270a8;
case 0x5270ab:c.instructions+=1;goto B5270ab;
case 0x5270b0:goto L5270b0;
case 0x5270b3:c.instructions+=1;goto B5270b3;
case 0x5270b6:goto L5270b6;
case 0x5270b9:goto L5270b9;
case 0x5270bc:c.instructions+=2;goto B5270bc;
case 0x5270be:c.instructions+=1;goto B5270be;
case 0x5270c0:goto L5270c0;
case 0x5270c3:c.instructions+=2;goto B5270c3;
case 0x5270c5:c.instructions+=1;goto B5270c5;
case 0x5270c7:goto L5270c7;
case 0x5270d0:goto L5270d0;
case 0x5270d5:c.instructions+=1;goto B5270d5;
case 0x5270da:goto L5270da;
case 0x5270dd:c.instructions+=3;goto B5270dd;
case 0x5270e0:c.instructions+=2;goto B5270e0;
case 0x5270e2:c.instructions+=1;goto B5270e2;
case 0x5270e4:goto L5270e4;
case 0x5270e7:c.instructions+=2;goto B5270e7;
case 0x5270e9:c.instructions+=1;goto B5270e9;
case 0x5270eb:goto L5270eb;
case 0x5270ed:goto L5270ed;
case 0x5270ef:c.instructions+=1;goto B5270ef;
case 0x5270f1:goto L5270f1;
case 0x5270f4:c.instructions+=1;goto B5270f4;
case 0x5270f6:goto L5270f6;
case 0x5270f8:c.instructions+=2;goto B5270f8;
case 0x5270fb:c.instructions+=1;goto B5270fb;
case 0x527100:goto L527100;
case 0x527103:c.instructions+=1;goto B527103;
case 0x527106:goto L527106;
case 0x527109:goto L527109;
case 0x52710c:c.instructions+=2;goto B52710c;
case 0x52710e:c.instructions+=1;goto B52710e;
case 0x527110:goto L527110;
case 0x527113:c.instructions+=2;goto B527113;
case 0x527115:c.instructions+=1;goto B527115;
case 0x527117:goto L527117;
case 0x527120:goto L527120;
case 0x527125:c.instructions+=1;goto B527125;
case 0x52712a:goto L52712a;
case 0x52712d:c.instructions+=3;goto B52712d;
case 0x527130:c.instructions+=2;goto B527130;
case 0x527132:c.instructions+=1;goto B527132;
case 0x527134:goto L527134;
case 0x527137:c.instructions+=2;goto B527137;
case 0x527139:c.instructions+=1;goto B527139;
case 0x52713b:goto L52713b;
case 0x52713c:c.instructions+=4;goto B52713c;
case 0x52713d:c.instructions+=3;goto B52713d;
case 0x52713e:c.instructions+=2;goto B52713e;
case 0x52713f:c.instructions+=1;goto B52713f;
case 0x527140:goto L527140;
case 0x527142:c.instructions+=1;goto B527142;
case 0x527144:goto L527144;
case 0x527147:c.instructions+=1;goto B527147;
case 0x527149:goto L527149;
case 0x52714b:c.instructions+=2;goto B52714b;
case 0x52714e:c.instructions+=1;goto B52714e;
case 0x527153:goto L527153;
case 0x527156:c.instructions+=1;goto B527156;
case 0x527159:goto L527159;
case 0x52715c:goto L52715c;
case 0x52715d:c.instructions+=4;goto B52715d;
case 0x52715e:c.instructions+=3;goto B52715e;
case 0x52715f:c.instructions+=2;goto B52715f;
case 0x527160:c.instructions+=1;goto B527160;
case 0x527170:goto L527170;
case 0x527173:c.instructions+=9;goto B527173;
case 0x527174:c.instructions+=8;goto B527174;
case 0x527176:c.instructions+=7;goto B527176;
case 0x527179:c.instructions+=6;goto B527179;
case 0x52717d:c.instructions+=5;goto B52717d;
case 0x52717e:c.instructions+=4;goto B52717e;
case 0x527182:c.instructions+=3;goto B527182;
case 0x527183:c.instructions+=2;goto B527183;
case 0x527184:c.instructions+=1;goto B527184;
case 0x527189:goto L527189;
case 0x52718d:c.instructions+=10;goto B52718d;
case 0x527193:c.instructions+=9;goto B527193;
case 0x527196:c.instructions+=8;goto B527196;
case 0x527199:c.instructions+=7;goto B527199;
case 0x52719d:c.instructions+=6;goto B52719d;
case 0x5271a1:c.instructions+=5;goto B5271a1;
case 0x5271a4:c.instructions+=4;goto B5271a4;
case 0x5271aa:c.instructions+=3;goto B5271aa;
case 0x5271ad:c.instructions+=2;goto B5271ad;
case 0x5271ae:c.instructions+=1;goto B5271ae;
case 0x5271b3:goto L5271b3;
case 0x5271b6:c.instructions+=7;goto B5271b6;
case 0x5271bc:c.instructions+=6;goto B5271bc;
case 0x5271bf:c.instructions+=5;goto B5271bf;
case 0x5271c5:c.instructions+=4;goto B5271c5;
case 0x5271c7:c.instructions+=3;goto B5271c7;
case 0x5271c9:c.instructions+=2;goto B5271c9;
case 0x5271cc:c.instructions+=1;goto B5271cc;
case 0x5271ce:goto L5271ce;
case 0x5271d0:c.instructions+=2;goto B5271d0;
case 0x5271d8:c.instructions+=1;goto B5271d8;
case 0x5271da:goto L5271da;
case 0x5271de:goto L5271de;
case 0x5271e1:c.instructions+=6;goto B5271e1;
case 0x5271e4:c.instructions+=5;goto B5271e4;
case 0x5271e8:c.instructions+=4;goto B5271e8;
case 0x5271ee:c.instructions+=3;goto B5271ee;
case 0x5271f0:c.instructions+=2;goto B5271f0;
case 0x5271f3:c.instructions+=1;goto B5271f3;
case 0x5271f5:goto L5271f5;
case 0x5271f8:c.instructions+=2;goto B5271f8;
case 0x5271f9:c.instructions+=1;goto B5271f9;
case 0x5271fe:goto L5271fe;
case 0x527201:c.instructions+=1;goto B527201;
case 0x527203:goto L527203;
case 0x527207:c.instructions+=4;goto B527207;
case 0x52720d:c.instructions+=3;goto B52720d;
case 0x52720f:c.instructions+=2;goto B52720f;
case 0x527212:c.instructions+=1;goto B527212;
case 0x527214:goto L527214;
case 0x527217:c.instructions+=2;goto B527217;
case 0x527218:c.instructions+=1;goto B527218;
case 0x52721d:goto L52721d;
case 0x527220:c.instructions+=4;goto B527220;
case 0x527222:c.instructions+=3;goto B527222;
case 0x527227:c.instructions+=2;goto B527227;
case 0x527228:c.instructions+=1;goto B527228;
case 0x52722a:goto L52722a;
case 0x52722e:c.instructions+=4;goto B52722e;
case 0x527234:c.instructions+=3;goto B527234;
case 0x527236:c.instructions+=2;goto B527236;
case 0x527239:c.instructions+=1;goto B527239;
case 0x52723b:goto L52723b;
case 0x52723e:c.instructions+=2;goto B52723e;
case 0x52723f:c.instructions+=1;goto B52723f;
case 0x527244:goto L527244;
case 0x527247:c.instructions+=3;goto B527247;
case 0x527249:c.instructions+=2;goto B527249;
case 0x52724e:c.instructions+=1;goto B52724e;
case 0x52724f:goto L52724f;
case 0x527254:goto L527254;
case 0x527257:goto L527257;
case 0x52725a:c.instructions+=7;goto B52725a;
case 0x52725e:c.instructions+=6;goto B52725e;
case 0x527261:c.instructions+=5;goto B527261;
case 0x527265:c.instructions+=4;goto B527265;
case 0x527267:c.instructions+=3;goto B527267;
case 0x527269:c.instructions+=2;goto B527269;
case 0x52726c:c.instructions+=1;goto B52726c;
case 0x52726e:goto L52726e;
case 0x527270:c.instructions+=1;goto B527270;
case 0x527274:goto L527274;
case 0x527277:c.instructions+=6;goto B527277;
case 0x52727b:c.instructions+=5;goto B52727b;
case 0x527281:c.instructions+=4;goto B527281;
case 0x527285:c.instructions+=3;goto B527285;
case 0x527287:c.instructions+=2;goto B527287;
case 0x52728a:c.instructions+=1;goto B52728a;
case 0x52728c:goto L52728c;
case 0x527292:c.instructions+=1;goto B527292;
case 0x527294:goto L527294;
case 0x527298:c.instructions+=5;goto B527298;
case 0x52729c:c.instructions+=4;goto B52729c;
case 0x5272a2:c.instructions+=3;goto B5272a2;
case 0x5272a4:c.instructions+=2;goto B5272a4;
case 0x5272a7:c.instructions+=1;goto B5272a7;
case 0x5272a9:goto L5272a9;
case 0x5272ab:c.instructions+=1;goto B5272ab;
case 0x5272b1:goto L5272b1;
case 0x5272b5:c.instructions+=6;goto B5272b5;
case 0x5272b8:c.instructions+=5;goto B5272b8;
case 0x5272b9:c.instructions+=4;goto B5272b9;
case 0x5272ba:c.instructions+=3;goto B5272ba;
case 0x5272bd:c.instructions+=2;goto B5272bd;
case 0x5272be:c.instructions+=1;goto B5272be;
case 0x5272c3:goto L5272c3;
case 0x5272c7:c.instructions+=13;goto B5272c7;
case 0x5272cd:c.instructions+=12;goto B5272cd;
case 0x5272d0:c.instructions+=11;goto B5272d0;
case 0x5272d4:c.instructions+=10;goto B5272d4;
case 0x5272d8:c.instructions+=9;goto B5272d8;
case 0x5272dc:c.instructions+=8;goto B5272dc;
case 0x5272dd:c.instructions+=7;goto B5272dd;
case 0x5272e0:c.instructions+=6;goto B5272e0;
case 0x5272e1:c.instructions+=5;goto B5272e1;
case 0x5272e4:c.instructions+=4;goto B5272e4;
case 0x5272ea:c.instructions+=3;goto B5272ea;
case 0x5272ed:c.instructions+=2;goto B5272ed;
case 0x5272ee:c.instructions+=1;goto B5272ee;
case 0x5272f3:goto L5272f3;
case 0x5272f6:c.instructions+=6;goto B5272f6;
case 0x5272fa:c.instructions+=5;goto B5272fa;
case 0x5272fb:c.instructions+=4;goto B5272fb;
case 0x5272ff:c.instructions+=3;goto B5272ff;
case 0x527300:c.instructions+=2;goto B527300;
case 0x527301:c.instructions+=1;goto B527301;
case 0x527306:goto L527306;
case 0x52730a:c.instructions+=9;goto B52730a;
case 0x52730d:c.instructions+=8;goto B52730d;
case 0x527310:c.instructions+=7;goto B527310;
case 0x527312:c.instructions+=6;goto B527312;
case 0x527316:c.instructions+=5;goto B527316;
case 0x52731a:c.instructions+=4;goto B52731a;
case 0x52731e:c.instructions+=3;goto B52731e;
case 0x52731f:c.instructions+=2;goto B52731f;
case 0x527320:c.instructions+=1;goto B527320;
case 0x527325:goto L527325;
case 0x527329:c.instructions+=5;goto B527329;
case 0x52732c:c.instructions+=4;goto B52732c;
case 0x52732d:c.instructions+=3;goto B52732d;
case 0x52732e:c.instructions+=2;goto B52732e;
case 0x52732f:c.instructions+=1;goto B52732f;
case 0x527334:goto L527334;
case 0x527338:c.instructions+=11;goto B527338;
case 0x52733e:c.instructions+=10;goto B52733e;
case 0x527341:c.instructions+=9;goto B527341;
case 0x527345:c.instructions+=8;goto B527345;
case 0x527346:c.instructions+=7;goto B527346;
case 0x52734c:c.instructions+=6;goto B52734c;
case 0x52734f:c.instructions+=5;goto B52734f;
case 0x527351:c.instructions+=4;goto B527351;
case 0x527355:c.instructions+=3;goto B527355;
case 0x527358:c.instructions+=2;goto B527358;
case 0x52735c:c.instructions+=1;goto B52735c;
case 0x52735e:goto L52735e;
case 0x527364:c.instructions+=4;goto B527364;
case 0x527367:c.instructions+=3;goto B527367;
case 0x52736a:c.instructions+=2;goto B52736a;
case 0x52736b:c.instructions+=1;goto B52736b;
case 0x527370:goto L527370;
case 0x527373:c.instructions+=3;goto B527373;
case 0x527374:c.instructions+=2;goto B527374;
case 0x527377:c.instructions+=1;goto B527377;
case 0x527378:goto L527378;
case 0x52737c:c.instructions+=5;goto B52737c;
case 0x52737f:c.instructions+=4;goto B52737f;
case 0x527385:c.instructions+=3;goto B527385;
case 0x527388:c.instructions+=2;goto B527388;
case 0x527389:c.instructions+=1;goto B527389;
case 0x52738e:goto L52738e;
case 0x527391:c.instructions+=3;goto B527391;
case 0x527392:c.instructions+=2;goto B527392;
case 0x527395:c.instructions+=1;goto B527395;
case 0x5273a0:goto L5273a0;
case 0x5273a3:c.instructions+=9;goto B5273a3;
case 0x5273a4:c.instructions+=8;goto B5273a4;
case 0x5273a5:c.instructions+=7;goto B5273a5;
case 0x5273a7:c.instructions+=6;goto B5273a7;
case 0x5273aa:c.instructions+=5;goto B5273aa;
case 0x5273ad:c.instructions+=4;goto B5273ad;
case 0x5273b3:c.instructions+=3;goto B5273b3;
case 0x5273b5:c.instructions+=2;goto B5273b5;
case 0x5273b8:c.instructions+=1;goto B5273b8;
case 0x5273ba:goto L5273ba;
case 0x5273bc:c.instructions+=1;goto B5273bc;
case 0x5273c2:goto L5273c2;
case 0x5273c8:c.instructions+=24;goto B5273c8;
case 0x5273cb:c.instructions+=23;goto B5273cb;
case 0x5273cf:c.instructions+=22;goto B5273cf;
case 0x5273d2:c.instructions+=21;goto B5273d2;
case 0x5273d6:c.instructions+=20;goto B5273d6;
case 0x5273d7:c.instructions+=19;goto B5273d7;
case 0x5273db:c.instructions+=18;goto B5273db;
case 0x5273dc:c.instructions+=17;goto B5273dc;
case 0x5273dd:c.instructions+=16;goto B5273dd;
case 0x5273e0:c.instructions+=15;goto B5273e0;
case 0x5273e3:c.instructions+=14;goto B5273e3;
case 0x5273e5:c.instructions+=13;goto B5273e5;
case 0x5273e9:c.instructions+=12;goto B5273e9;
case 0x5273ec:c.instructions+=11;goto B5273ec;
case 0x5273ef:c.instructions+=10;goto B5273ef;
case 0x5273f1:c.instructions+=9;goto B5273f1;
case 0x5273f5:c.instructions+=8;goto B5273f5;
case 0x5273f8:c.instructions+=7;goto B5273f8;
case 0x5273fb:c.instructions+=6;goto B5273fb;
case 0x5273fd:c.instructions+=5;goto B5273fd;
case 0x527401:c.instructions+=4;goto B527401;
case 0x527404:c.instructions+=3;goto B527404;
case 0x527408:c.instructions+=2;goto B527408;
case 0x52740a:c.instructions+=1;goto B52740a;
case 0x52740f:goto L52740f;
case 0x527413:c.instructions+=10;goto B527413;
case 0x527416:c.instructions+=9;goto B527416;
case 0x52741a:c.instructions+=8;goto B52741a;
case 0x52741e:c.instructions+=7;goto B52741e;
case 0x527422:c.instructions+=6;goto B527422;
case 0x527426:c.instructions+=5;goto B527426;
case 0x52742a:c.instructions+=4;goto B52742a;
case 0x52742e:c.instructions+=3;goto B52742e;
case 0x52742f:c.instructions+=2;goto B52742f;
case 0x527430:c.instructions+=1;goto B527430;
case 0x527435:goto L527435;
case 0x527439:c.instructions+=9;goto B527439;
case 0x52743f:c.instructions+=8;goto B52743f;
case 0x527443:c.instructions+=7;goto B527443;
case 0x527446:c.instructions+=6;goto B527446;
case 0x52744a:c.instructions+=5;goto B52744a;
case 0x52744e:c.instructions+=4;goto B52744e;
case 0x52744f:c.instructions+=3;goto B52744f;
case 0x527450:c.instructions+=2;goto B527450;
case 0x527451:c.instructions+=1;goto B527451;
case 0x527456:goto L527456;
case 0x527459:c.instructions+=3;goto B527459;
case 0x52745c:c.instructions+=2;goto B52745c;
case 0x52745e:c.instructions+=1;goto B52745e;
case 0x527460:goto L527460;
case 0x527461:c.instructions+=3;goto B527461;
case 0x527464:c.instructions+=2;goto B527464;
case 0x527466:c.instructions+=1;goto B527466;
case 0x527468:goto L527468;
case 0x527470:goto L527470;
case 0x527475:c.instructions+=1;goto B527475;
case 0x52747a:goto L52747a;
case 0x52747d:c.instructions+=3;goto B52747d;
case 0x527480:c.instructions+=2;goto B527480;
case 0x527482:c.instructions+=1;goto B527482;
case 0x527484:goto L527484;
case 0x527487:c.instructions+=2;goto B527487;
case 0x527489:c.instructions+=1;goto B527489;
case 0x52748b:goto L52748b;
case 0x52748d:goto L52748d;
case 0x52748f:c.instructions+=1;goto B52748f;
case 0x527491:goto L527491;
case 0x527494:c.instructions+=1;goto B527494;
case 0x527496:goto L527496;
case 0x527498:c.instructions+=2;goto B527498;
case 0x52749b:c.instructions+=1;goto B52749b;
case 0x5274a0:goto L5274a0;
case 0x5274a3:c.instructions+=1;goto B5274a3;
case 0x5274aa:goto L5274aa;
case 0x5274b1:goto L5274b1;
case 0x5274b2:goto L5274b2;
case 0x5274b6:c.instructions+=9;goto B5274b6;
case 0x5274b7:c.instructions+=8;goto B5274b7;
case 0x5274bb:c.instructions+=7;goto B5274bb;
case 0x5274be:c.instructions+=6;goto B5274be;
case 0x5274c2:c.instructions+=5;goto B5274c2;
case 0x5274c6:c.instructions+=4;goto B5274c6;
case 0x5274ca:c.instructions+=3;goto B5274ca;
case 0x5274cd:c.instructions+=2;goto B5274cd;
case 0x5274ce:c.instructions+=1;goto B5274ce;
case 0x5274d3:goto L5274d3;
case 0x5274d7:c.instructions+=6;goto B5274d7;
case 0x5274db:c.instructions+=5;goto B5274db;
case 0x5274de:c.instructions+=4;goto B5274de;
case 0x5274df:c.instructions+=3;goto B5274df;
case 0x5274e0:c.instructions+=2;goto B5274e0;
case 0x5274e1:c.instructions+=1;goto B5274e1;
case 0x5274e6:goto L5274e6;
case 0x5274ea:c.instructions+=9;goto B5274ea;
case 0x5274f0:c.instructions+=8;goto B5274f0;
case 0x5274f3:c.instructions+=7;goto B5274f3;
case 0x5274f6:c.instructions+=6;goto B5274f6;
case 0x5274fa:c.instructions+=5;goto B5274fa;
case 0x5274fe:c.instructions+=4;goto B5274fe;
case 0x527504:c.instructions+=3;goto B527504;
case 0x527507:c.instructions+=2;goto B527507;
case 0x527508:c.instructions+=1;goto B527508;
case 0x52750d:goto L52750d;
case 0x527510:c.instructions+=4;goto B527510;
case 0x527511:c.instructions+=3;goto B527511;
case 0x527512:c.instructions+=2;goto B527512;
case 0x527515:c.instructions+=1;goto B527515;
case 0x527520:goto L527520;
case 0x527525:c.instructions+=2;goto B527525;
case 0x527527:c.instructions+=1;goto B527527;
case 0x527529:goto L527529;
case 0x52752d:c.instructions+=2;goto B52752d;
case 0x52752f:c.instructions+=1;goto B52752f;
case 0x527531:goto L527531;
case 0x527532:c.instructions+=3;goto B527532;
case 0x527533:c.instructions+=2;goto B527533;
case 0x527539:c.instructions+=1;goto B527539;
case 0x527540:goto L527540;
case 0x527541:c.instructions+=2;goto B527541;
case 0x527544:c.instructions+=1;goto B527544;
case 0x527546:goto L527546;
case 0x527548:goto L527548;
case 0x52754e:c.instructions+=1;goto B52754e;
case 0x527550:goto L527550;
case 0x527552:c.instructions+=3;goto B527552;
case 0x527554:c.instructions+=2;goto B527554;
case 0x527559:c.instructions+=1;goto B527559;
case 0x527560:goto L527560;
case 0x527562:c.instructions+=1;goto B527562;
case 0x527564:goto L527564;
case 0x527567:c.instructions+=3;goto B527567;
case 0x527568:c.instructions+=2;goto B527568;
case 0x52756e:c.instructions+=1;goto B52756e;
case 0x527570:goto L527570;
case 0x527572:goto L527572;
case 0x527575:c.instructions+=3;goto B527575;
case 0x52757a:c.instructions+=2;goto B52757a;
case 0x52757c:c.instructions+=1;goto B52757c;
case 0x52757e:goto L52757e;
case 0x527581:c.instructions+=2;goto B527581;
case 0x527582:c.instructions+=1;goto B527582;
case 0x527587:goto L527587;
case 0x52758a:c.instructions+=2;goto B52758a;
case 0x52758c:c.instructions+=1;goto B52758c;
case 0x52758e:goto L52758e;
case 0x527590:goto L527590;
case 0x527596:c.instructions+=1;goto B527596;
case 0x527598:goto L527598;
case 0x52759a:c.instructions+=1;goto B52759a;
case 0x52759c:goto L52759c;
case 0x52759d:c.instructions+=1;goto B52759d;
case 0x5275a2:goto L5275a2;
case 0x5275a5:goto L5275a5;
case 0x5275a6:c.instructions+=1;goto B5275a6;
case 0x5275a7:goto L5275a7;
case 0x5275b0:goto L5275b0;
case 0x5275b4:c.instructions+=20;goto B5275b4;
case 0x5275b8:c.instructions+=19;goto B5275b8;
case 0x5275b9:c.instructions+=18;goto B5275b9;
case 0x5275bb:c.instructions+=17;goto B5275bb;
case 0x5275bf:c.instructions+=16;goto B5275bf;
case 0x5275c2:c.instructions+=15;goto B5275c2;
case 0x5275c6:c.instructions+=14;goto B5275c6;
case 0x5275c9:c.instructions+=13;goto B5275c9;
case 0x5275cd:c.instructions+=12;goto B5275cd;
case 0x5275d0:c.instructions+=11;goto B5275d0;
case 0x5275d3:c.instructions+=10;goto B5275d3;
case 0x5275d7:c.instructions+=9;goto B5275d7;
case 0x5275da:c.instructions+=8;goto B5275da;
case 0x5275de:c.instructions+=7;goto B5275de;
case 0x5275df:c.instructions+=6;goto B5275df;
case 0x5275e3:c.instructions+=5;goto B5275e3;
case 0x5275e6:c.instructions+=4;goto B5275e6;
case 0x5275e9:c.instructions+=3;goto B5275e9;
case 0x5275ea:c.instructions+=2;goto B5275ea;
case 0x5275eb:c.instructions+=1;goto B5275eb;
case 0x5275f0:goto L5275f0;
case 0x5275f6:c.instructions+=6;goto B5275f6;
case 0x5275f8:c.instructions+=5;goto B5275f8;
case 0x5275fb:c.instructions+=4;goto B5275fb;
case 0x5275ff:c.instructions+=3;goto B5275ff;
case 0x527605:c.instructions+=2;goto B527605;
case 0x527606:c.instructions+=1;goto B527606;
case 0x527610:goto L527610;
case 0x527611:c.instructions+=5;goto B527611;
case 0x527612:c.instructions+=4;goto B527612;
case 0x527614:c.instructions+=3;goto B527614;
case 0x527617:c.instructions+=2;goto B527617;
case 0x527619:c.instructions+=1;goto B527619;
case 0x52761b:goto L52761b;
case 0x527620:c.instructions+=1;goto B527620;
case 0x527625:goto L527625;
case 0x527628:c.instructions+=2;goto B527628;
case 0x52762a:c.instructions+=1;goto B52762a;
case 0x52762c:goto L52762c;
case 0x52762f:c.instructions+=2;goto B52762f;
case 0x527631:c.instructions+=1;goto B527631;
case 0x527633:goto L527633;
case 0x527636:c.instructions+=1;goto B527636;
case 0x527638:goto L527638;
case 0x52763b:c.instructions+=2;goto B52763b;
case 0x52763e:c.instructions+=1;goto B52763e;
case 0x527640:goto L527640;
case 0x527643:c.instructions+=4;goto B527643;
case 0x527645:c.instructions+=3;goto B527645;
case 0x52764a:c.instructions+=2;goto B52764a;
case 0x52764b:c.instructions+=1;goto B52764b;
case 0x527650:goto L527650;
case 0x527653:goto L527653;
case 0x527654:c.instructions+=2;goto B527654;
case 0x527655:c.instructions+=1;goto B527655;
case 0x527660:goto L527660;
case 0x527661:c.instructions+=5;goto B527661;
case 0x527662:c.instructions+=4;goto B527662;
case 0x527664:c.instructions+=3;goto B527664;
case 0x527667:c.instructions+=2;goto B527667;
case 0x527669:c.instructions+=1;goto B527669;
case 0x52766b:goto L52766b;
case 0x527670:c.instructions+=1;goto B527670;
case 0x527675:goto L527675;
case 0x527678:c.instructions+=2;goto B527678;
case 0x52767a:c.instructions+=1;goto B52767a;
case 0x52767c:goto L52767c;
case 0x52767f:c.instructions+=2;goto B52767f;
case 0x527681:c.instructions+=1;goto B527681;
case 0x527683:goto L527683;
case 0x527686:c.instructions+=1;goto B527686;
case 0x527688:goto L527688;
case 0x52768b:c.instructions+=2;goto B52768b;
case 0x52768e:c.instructions+=1;goto B52768e;
case 0x527690:goto L527690;
case 0x527693:c.instructions+=4;goto B527693;
case 0x527695:c.instructions+=3;goto B527695;
case 0x52769a:c.instructions+=2;goto B52769a;
case 0x52769b:c.instructions+=1;goto B52769b;
case 0x5276a0:goto L5276a0;
case 0x5276a3:goto L5276a3;
case 0x5276a4:c.instructions+=2;goto B5276a4;
case 0x5276a5:c.instructions+=1;goto B5276a5;
case 0x5276b0:goto L5276b0;
case 0x5276b1:c.instructions+=4;goto B5276b1;
case 0x5276b3:c.instructions+=3;goto B5276b3;
case 0x5276b8:c.instructions+=2;goto B5276b8;
case 0x5276ba:c.instructions+=1;goto B5276ba;
case 0x5276bf:goto L5276bf;
case 0x5276c3:c.instructions+=2;goto B5276c3;
case 0x5276c4:c.instructions+=1;goto B5276c4;
case 0x5276d0:goto L5276d0;
case 0x5276d3:c.instructions+=2;goto B5276d3;
case 0x5276d5:c.instructions+=1;goto B5276d5;
case 0x5276d7:goto L5276d7;
case 0x5276d8:c.instructions+=8;goto B5276d8;
case 0x5276db:c.instructions+=7;goto B5276db;
case 0x5276de:c.instructions+=6;goto B5276de;
case 0x5276e0:c.instructions+=5;goto B5276e0;
case 0x5276e2:c.instructions+=4;goto B5276e2;
case 0x5276e5:c.instructions+=3;goto B5276e5;
case 0x5276e7:c.instructions+=2;goto B5276e7;
case 0x5276e8:c.instructions+=1;goto B5276e8;
case 0x5276e9:goto L5276e9;
case 0x5276ea:c.instructions+=8;goto B5276ea;
case 0x5276ed:c.instructions+=7;goto B5276ed;
case 0x5276ef:c.instructions+=6;goto B5276ef;
case 0x5276f1:c.instructions+=5;goto B5276f1;
case 0x5276f3:c.instructions+=4;goto B5276f3;
case 0x5276f6:c.instructions+=3;goto B5276f6;
case 0x5276f8:c.instructions+=2;goto B5276f8;
case 0x5276f9:c.instructions+=1;goto B5276f9;
case 0x527700:goto L527700;
case 0x527703:c.instructions+=2;goto B527703;
case 0x527705:c.instructions+=1;goto B527705;
case 0x527707:goto L527707;
case 0x527708:c.instructions+=8;goto B527708;
case 0x52770b:c.instructions+=7;goto B52770b;
case 0x52770e:c.instructions+=6;goto B52770e;
case 0x527710:c.instructions+=5;goto B527710;
case 0x527712:c.instructions+=4;goto B527712;
case 0x527715:c.instructions+=3;goto B527715;
case 0x527717:c.instructions+=2;goto B527717;
case 0x527718:c.instructions+=1;goto B527718;
case 0x527719:goto L527719;
case 0x52771a:c.instructions+=8;goto B52771a;
case 0x52771d:c.instructions+=7;goto B52771d;
case 0x52771f:c.instructions+=6;goto B52771f;
case 0x527721:c.instructions+=5;goto B527721;
case 0x527723:c.instructions+=4;goto B527723;
case 0x527726:c.instructions+=3;goto B527726;
case 0x527728:c.instructions+=2;goto B527728;
case 0x527729:c.instructions+=1;goto B527729;
case 0x527730:goto L527730;
case 0x527733:c.instructions+=3;goto B527733;
case 0x527735:c.instructions+=2;goto B527735;
case 0x527737:c.instructions+=1;goto B527737;
case 0x527739:goto L527739;
case 0x52773e:goto L52773e;
case 0x52773f:goto L52773f;
case 0x527744:goto L527744;
case 0x527750:goto L527750;
case 0x527753:c.instructions+=3;goto B527753;
case 0x527755:c.instructions+=2;goto B527755;
case 0x527757:c.instructions+=1;goto B527757;
case 0x527759:goto L527759;
case 0x52775e:goto L52775e;
case 0x52775f:goto L52775f;
case 0x527764:goto L527764;
case 0x527770:goto L527770;
case 0x527776:c.instructions+=1;goto B527776;
case 0x527780:goto L527780;
case 0x527781:c.instructions+=12;goto B527781;
case 0x527785:c.instructions+=11;goto B527785;
case 0x527786:c.instructions+=10;goto B527786;
case 0x527787:c.instructions+=9;goto B527787;
case 0x52778d:c.instructions+=8;goto B52778d;
case 0x527791:c.instructions+=7;goto B527791;
case 0x527794:c.instructions+=6;goto B527794;
case 0x527795:c.instructions+=5;goto B527795;
case 0x527797:c.instructions+=4;goto B527797;
case 0x527799:c.instructions+=3;goto B527799;
case 0x52779a:c.instructions+=2;goto B52779a;
case 0x52779e:c.instructions+=1;goto B52779e;
case 0x5277a0:goto L5277a0;
case 0x5277a6:goto L5277a6;
case 0x5277a8:c.instructions+=1;goto B5277a8;
case 0x5277aa:goto L5277aa;
case 0x5277ac:c.instructions+=1;goto B5277ac;
case 0x5277ae:goto L5277ae;
case 0x5277b0:c.instructions+=1;goto B5277b0;
case 0x5277b2:goto L5277b2;
case 0x5277b4:goto L5277b4;
case 0x5277b8:c.instructions+=2;goto B5277b8;
case 0x5277bb:c.instructions+=1;goto B5277bb;
case 0x5277bd:goto L5277bd;
case 0x5277c1:c.instructions+=3;goto B5277c1;
case 0x5277c3:c.instructions+=2;goto B5277c3;
case 0x5277c9:c.instructions+=1;goto B5277c9;
case 0x5277d0:goto L5277d0;
case 0x5277d2:c.instructions+=2;goto B5277d2;
case 0x5277d4:c.instructions+=1;goto B5277d4;
case 0x5277d6:goto L5277d6;
case 0x5277d9:c.instructions+=2;goto B5277d9;
case 0x5277dc:c.instructions+=1;goto B5277dc;
case 0x5277de:goto L5277de;
case 0x5277df:c.instructions+=3;goto B5277df;
case 0x5277e2:c.instructions+=2;goto B5277e2;
case 0x5277e5:c.instructions+=1;goto B5277e5;
case 0x5277e7:goto L5277e7;
case 0x5277e8:c.instructions+=3;goto B5277e8;
case 0x5277ee:c.instructions+=2;goto B5277ee;
case 0x5277f0:c.instructions+=1;goto B5277f0;
case 0x5277f2:goto L5277f2;
case 0x5277f4:goto L5277f4;
case 0x5277f5:c.instructions+=5;goto B5277f5;
case 0x5277f6:c.instructions+=4;goto B5277f6;
case 0x5277f7:c.instructions+=3;goto B5277f7;
case 0x5277f8:c.instructions+=2;goto B5277f8;
case 0x5277f9:c.instructions+=1;goto B5277f9;
case 0x527800:goto L527800;
case 0x527801:c.instructions+=12;goto B527801;
case 0x527802:c.instructions+=11;goto B527802;
case 0x527806:c.instructions+=10;goto B527806;
case 0x527807:c.instructions+=9;goto B527807;
case 0x52780b:c.instructions+=8;goto B52780b;
case 0x52780d:c.instructions+=7;goto B52780d;
case 0x52780e:c.instructions+=6;goto B52780e;
case 0x527810:c.instructions+=5;goto B527810;
case 0x527813:c.instructions+=4;goto B527813;
case 0x527816:c.instructions+=3;goto B527816;
case 0x527819:c.instructions+=2;goto B527819;
case 0x52781c:c.instructions+=1;goto B52781c;
case 0x527821:goto L527821;
case 0x527823:c.instructions+=1;goto B527823;
case 0x527825:goto L527825;
case 0x527827:c.instructions+=5;goto B527827;
case 0x527828:c.instructions+=4;goto B527828;
case 0x52782b:c.instructions+=3;goto B52782b;
case 0x52782c:c.instructions+=2;goto B52782c;
case 0x52782d:c.instructions+=1;goto B52782d;
case 0x527830:goto L527830;
case 0x527832:c.instructions+=1;goto B527832;
case 0x527834:goto L527834;
case 0x527837:c.instructions+=2;goto B527837;
case 0x527838:c.instructions+=1;goto B527838;
case 0x52783d:goto L52783d;
case 0x527840:c.instructions+=2;goto B527840;
case 0x527842:c.instructions+=1;goto B527842;
case 0x527844:goto L527844;
case 0x527846:c.instructions+=5;goto B527846;
case 0x527847:c.instructions+=4;goto B527847;
case 0x52784a:c.instructions+=3;goto B52784a;
case 0x52784b:c.instructions+=2;goto B52784b;
case 0x52784c:c.instructions+=1;goto B52784c;
case 0x52784f:goto L52784f;
case 0x527850:c.instructions+=1;goto B527850;
case 0x527855:goto L527855;
case 0x527858:c.instructions+=2;goto B527858;
case 0x52785a:c.instructions+=1;goto B52785a;
case 0x52785c:goto L52785c;
case 0x52785e:c.instructions+=5;goto B52785e;
case 0x52785f:c.instructions+=4;goto B52785f;
case 0x527862:c.instructions+=3;goto B527862;
case 0x527863:c.instructions+=2;goto B527863;
case 0x527864:c.instructions+=1;goto B527864;
case 0x527867:goto L527867;
case 0x527869:c.instructions+=1;goto B527869;
case 0x52786b:goto L52786b;
case 0x52786e:c.instructions+=2;goto B52786e;
case 0x52786f:c.instructions+=1;goto B52786f;
case 0x527874:goto L527874;
case 0x527877:c.instructions+=2;goto B527877;
case 0x527879:c.instructions+=1;goto B527879;
case 0x52787b:goto L52787b;
case 0x52787e:c.instructions+=1;goto B52787e;
case 0x527880:goto L527880;
case 0x527881:c.instructions+=3;goto B527881;
case 0x527882:c.instructions+=2;goto B527882;
case 0x527883:c.instructions+=1;goto B527883;
case 0x527890:goto L527890;
case 0x527891:c.instructions+=4;goto B527891;
case 0x527893:c.instructions+=3;goto B527893;
case 0x527895:c.instructions+=2;goto B527895;
case 0x52789a:c.instructions+=1;goto B52789a;
case 0x52789f:goto L52789f;
case 0x5278a1:c.instructions+=2;goto B5278a1;
case 0x5278a3:c.instructions+=1;goto B5278a3;
case 0x5278a5:goto L5278a5;
case 0x5278ab:c.instructions+=2;goto B5278ab;
case 0x5278ad:c.instructions+=1;goto B5278ad;
case 0x5278af:goto L5278af;
case 0x5278b1:c.instructions+=2;goto B5278b1;
case 0x5278b3:c.instructions+=1;goto B5278b3;
case 0x5278b6:goto L5278b6;
case 0x5278bc:c.instructions+=2;goto B5278bc;
case 0x5278c2:c.instructions+=1;goto B5278c2;
case 0x5278c4:goto L5278c4;
case 0x5278ca:c.instructions+=4;goto B5278ca;
case 0x5278cc:c.instructions+=3;goto B5278cc;
case 0x5278cf:c.instructions+=2;goto B5278cf;
case 0x5278d1:c.instructions+=1;goto B5278d1;
case 0x5278d3:goto L5278d3;
case 0x5278d4:c.instructions+=3;goto B5278d4;
case 0x5278d6:c.instructions+=2;goto B5278d6;
case 0x5278db:c.instructions+=1;goto B5278db;
case 0x5278e0:goto L5278e0;
case 0x5278e2:c.instructions+=2;goto B5278e2;
case 0x5278e4:c.instructions+=1;goto B5278e4;
case 0x5278e6:goto L5278e6;
case 0x5278e8:c.instructions+=2;goto B5278e8;
case 0x5278e9:c.instructions+=1;goto B5278e9;
case 0x5278ea:goto L5278ea;
case 0x5278ec:c.instructions+=2;goto B5278ec;
case 0x5278ed:c.instructions+=1;goto B5278ed;
case 0x5278f0:goto L5278f0;
case 0x5278f1:c.instructions+=4;goto B5278f1;
case 0x5278f3:c.instructions+=3;goto B5278f3;
case 0x5278f9:c.instructions+=2;goto B5278f9;
case 0x5278fb:c.instructions+=1;goto B5278fb;
case 0x5278fd:goto L5278fd;
case 0x527903:c.instructions+=2;goto B527903;
case 0x527905:c.instructions+=1;goto B527905;
case 0x527907:goto L527907;
case 0x527908:c.instructions+=1;goto B527908;
case 0x52790d:goto L52790d;
case 0x52790f:c.instructions+=1;goto B52790f;
case 0x527911:goto L527911;
case 0x527917:c.instructions+=2;goto B527917;
case 0x527919:c.instructions+=1;goto B527919;
case 0x52791b:goto L52791b;
case 0x52791c:c.instructions+=2;goto B52791c;
case 0x527922:c.instructions+=1;goto B527922;
case 0x527927:goto L527927;
case 0x527929:c.instructions+=1;goto B527929;
case 0x52792b:goto L52792b;
case 0x527931:c.instructions+=2;goto B527931;
case 0x527933:c.instructions+=1;goto B527933;
case 0x527935:goto L527935;
case 0x527936:c.instructions+=2;goto B527936;
case 0x52793c:c.instructions+=1;goto B52793c;
case 0x527941:goto L527941;
case 0x527943:c.instructions+=1;goto B527943;
case 0x527945:goto L527945;
case 0x52794b:c.instructions+=2;goto B52794b;
case 0x52794d:c.instructions+=1;goto B52794d;
case 0x52794f:goto L52794f;
case 0x527950:c.instructions+=2;goto B527950;
case 0x527956:c.instructions+=1;goto B527956;
case 0x52795b:goto L52795b;
case 0x52795d:c.instructions+=1;goto B52795d;
case 0x52795f:goto L52795f;
case 0x527961:c.instructions+=2;goto B527961;
case 0x527962:c.instructions+=1;goto B527962;
case 0x527963:goto L527963;
case 0x527965:c.instructions+=2;goto B527965;
case 0x527966:c.instructions+=1;goto B527966;
case 0x527970:goto L527970;
case 0x527971:c.instructions+=11;goto B527971;
case 0x527973:c.instructions+=10;goto B527973;
case 0x527974:c.instructions+=9;goto B527974;
case 0x52797a:c.instructions+=8;goto B52797a;
case 0x52797b:c.instructions+=7;goto B52797b;
case 0x52797e:c.instructions+=6;goto B52797e;
case 0x527981:c.instructions+=5;goto B527981;
case 0x527982:c.instructions+=4;goto B527982;
case 0x527984:c.instructions+=3;goto B527984;
case 0x527985:c.instructions+=2;goto B527985;
case 0x527987:c.instructions+=1;goto B527987;
case 0x52798c:goto L52798c;
case 0x527992:c.instructions+=4;goto B527992;
case 0x527995:c.instructions+=3;goto B527995;
case 0x527997:c.instructions+=2;goto B527997;
case 0x527999:c.instructions+=1;goto B527999;
case 0x52799b:goto L52799b;
case 0x5279a0:goto L5279a0;
case 0x5279a7:c.instructions+=1;goto B5279a7;
case 0x5279a9:goto L5279a9;
case 0x5279aa:c.instructions+=2;goto B5279aa;
case 0x5279ac:c.instructions+=1;goto B5279ac;
case 0x5279ae:goto L5279ae;
case 0x5279b0:goto L5279b0;
case 0x5279b7:c.instructions+=2;goto B5279b7;
case 0x5279b9:c.instructions+=1;goto B5279b9;
case 0x5279bb:goto L5279bb;
case 0x5279bf:c.instructions+=1;goto B5279bf;
case 0x5279c5:goto L5279c5;
case 0x5279c9:c.instructions+=3;goto B5279c9;
case 0x5279cb:c.instructions+=2;goto B5279cb;
case 0x5279ce:c.instructions+=1;goto B5279ce;
case 0x5279d0:goto L5279d0;
case 0x5279d7:goto L5279d7;
case 0x5279da:c.instructions+=1;goto B5279da;
case 0x5279df:goto L5279df;
case 0x5279e3:c.instructions+=2;goto B5279e3;
case 0x5279e5:c.instructions+=1;goto B5279e5;
case 0x5279e7:goto L5279e7;
case 0x5279ea:c.instructions+=1;goto B5279ea;
case 0x5279ef:goto L5279ef;
case 0x5279f1:goto L5279f1;
case 0x5279f5:c.instructions+=3;goto B5279f5;
case 0x5279f8:c.instructions+=2;goto B5279f8;
case 0x5279fe:c.instructions+=1;goto B5279fe;
case 0x527a00:goto L527a00;
case 0x527a03:c.instructions+=1;goto B527a03;
case 0x527a08:goto L527a08;
case 0x527a0c:c.instructions+=1;goto B527a0c;
case 0x527a0e:goto L527a0e;
case 0x527a10:goto L527a10;
case 0x527a12:goto L527a12;
case 0x527a17:c.instructions+=2;goto B527a17;
case 0x527a19:c.instructions+=1;goto B527a19;
case 0x527a1b:goto L527a1b;
case 0x527a20:c.instructions+=3;goto B527a20;
case 0x527a21:c.instructions+=2;goto B527a21;
case 0x527a26:c.instructions+=1;goto B527a26;
case 0x527a2b:goto L527a2b;
case 0x527a2d:c.instructions+=2;goto B527a2d;
case 0x527a2f:c.instructions+=1;goto B527a2f;
case 0x527a32:goto L527a32;
case 0x527a38:c.instructions+=2;goto B527a38;
case 0x527a3e:c.instructions+=1;goto B527a3e;
case 0x527a40:goto L527a40;
case 0x527a46:c.instructions+=4;goto B527a46;
case 0x527a48:c.instructions+=3;goto B527a48;
case 0x527a4b:c.instructions+=2;goto B527a4b;
case 0x527a4d:c.instructions+=1;goto B527a4d;
case 0x527a4f:goto L527a4f;
case 0x527a52:c.instructions+=3;goto B527a52;
case 0x527a58:c.instructions+=2;goto B527a58;
case 0x527a59:c.instructions+=1;goto B527a59;
case 0x527a5e:goto L527a5e;
case 0x527a61:c.instructions+=2;goto B527a61;
case 0x527a66:c.instructions+=1;goto B527a66;
case 0x527a68:goto L527a68;
case 0x527a6a:c.instructions+=1;goto B527a6a;
case 0x527a6c:goto L527a6c;
case 0x527a6e:c.instructions+=1;goto B527a6e;
case 0x527a70:goto L527a70;
case 0x527a74:c.instructions+=1;goto B527a74;
case 0x527a76:goto L527a76;
case 0x527a77:c.instructions+=2;goto B527a77;
case 0x527a7a:c.instructions+=1;goto B527a7a;
case 0x527a7c:goto L527a7c;
case 0x527a7d:c.instructions+=4;goto B527a7d;
case 0x527a7e:c.instructions+=3;goto B527a7e;
case 0x527a7f:c.instructions+=2;goto B527a7f;
case 0x527a80:c.instructions+=1;goto B527a80;
case 0x527a83:goto L527a83;
case 0x527a86:goto L527a86;
case 0x527a87:c.instructions+=4;goto B527a87;
case 0x527a88:c.instructions+=3;goto B527a88;
case 0x527a89:c.instructions+=2;goto B527a89;
case 0x527a8a:c.instructions+=1;goto B527a8a;
case 0x527aa0:goto L527aa0;
case 0x527aa1:c.instructions+=7;goto B527aa1;
case 0x527aa3:c.instructions+=6;goto B527aa3;
case 0x527aa8:c.instructions+=5;goto B527aa8;
case 0x527aae:c.instructions+=4;goto B527aae;
case 0x527aaf:c.instructions+=3;goto B527aaf;
case 0x527ab5:c.instructions+=2;goto B527ab5;
case 0x527ab7:c.instructions+=1;goto B527ab7;
case 0x527ab9:goto L527ab9;
case 0x527abb:c.instructions+=3;goto B527abb;
case 0x527abc:c.instructions+=2;goto B527abc;
case 0x527abd:c.instructions+=1;goto B527abd;
case 0x527ac0:goto L527ac0;
case 0x527ac3:c.instructions+=2;goto B527ac3;
case 0x527ac6:c.instructions+=1;goto B527ac6;
case 0x527acc:goto L527acc;
case 0x527ad3:goto L527ad3;
case 0x527ad7:c.instructions+=3;goto B527ad7;
case 0x527ad8:c.instructions+=2;goto B527ad8;
case 0x527ad9:c.instructions+=1;goto B527ad9;
case 0x527adc:goto L527adc;
case 0x527ae0:c.instructions+=3;goto B527ae0;
case 0x527ae1:c.instructions+=2;goto B527ae1;
case 0x527ae2:c.instructions+=1;goto B527ae2;
case 0x527ae5:goto L527ae5;
case 0x527ae9:c.instructions+=3;goto B527ae9;
case 0x527aea:c.instructions+=2;goto B527aea;
case 0x527aeb:c.instructions+=1;goto B527aeb;
case 0x527aee:goto L527aee;
case 0x527af2:c.instructions+=3;goto B527af2;
case 0x527af3:c.instructions+=2;goto B527af3;
case 0x527af4:c.instructions+=1;goto B527af4;
case 0x527af7:goto L527af7;
case 0x527afb:c.instructions+=3;goto B527afb;
case 0x527afc:c.instructions+=2;goto B527afc;
case 0x527afd:c.instructions+=1;goto B527afd;
case 0x527b00:goto L527b00;
case 0x527b05:c.instructions+=2;goto B527b05;
case 0x527b07:c.instructions+=1;goto B527b07;
case 0x527b09:goto L527b09;
case 0x527b0f:c.instructions+=3;goto B527b0f;
case 0x527b10:c.instructions+=2;goto B527b10;
case 0x527b15:c.instructions+=1;goto B527b15;
case 0x527b1a:goto L527b1a;
case 0x527b1c:c.instructions+=1;goto B527b1c;
case 0x527b21:goto L527b21;
case 0x527b23:c.instructions+=1;goto B527b23;
case 0x527b25:goto L527b25;
case 0x527b29:c.instructions+=3;goto B527b29;
case 0x527b2a:c.instructions+=2;goto B527b2a;
case 0x527b2b:c.instructions+=1;goto B527b2b;
case 0x527b2e:goto L527b2e;
case 0x527b30:c.instructions+=2;goto B527b30;
case 0x527b32:c.instructions+=1;goto B527b32;
case 0x527b37:goto L527b37;
case 0x527b38:c.instructions+=2;goto B527b38;
case 0x527b39:c.instructions+=1;goto B527b39;
case 0x527b3c:goto L527b3c;
case 0x527b3e:c.instructions+=2;goto B527b3e;
case 0x527b40:c.instructions+=1;goto B527b40;
case 0x527b45:goto L527b45;
case 0x527b46:c.instructions+=2;goto B527b46;
case 0x527b47:c.instructions+=1;goto B527b47;
case 0x527b4a:goto L527b4a;
case 0x527b4c:c.instructions+=2;goto B527b4c;
case 0x527b4e:c.instructions+=1;goto B527b4e;
case 0x527b53:goto L527b53;
case 0x527b54:c.instructions+=2;goto B527b54;
case 0x527b55:c.instructions+=1;goto B527b55;
case 0x527b58:goto L527b58;
case 0x527b5a:c.instructions+=2;goto B527b5a;
case 0x527b5c:c.instructions+=1;goto B527b5c;
case 0x527b61:goto L527b61;
case 0x527b62:c.instructions+=2;goto B527b62;
case 0x527b63:c.instructions+=1;goto B527b63;
case 0x527b66:goto L527b66;
case 0x527b68:c.instructions+=2;goto B527b68;
case 0x527b6a:c.instructions+=1;goto B527b6a;
case 0x527b6f:goto L527b6f;
case 0x527b70:c.instructions+=2;goto B527b70;
case 0x527b71:c.instructions+=1;goto B527b71;
case 0x527b74:goto L527b74;
case 0x527b77:c.instructions+=3;goto B527b77;
case 0x527b78:c.instructions+=2;goto B527b78;
case 0x527b79:c.instructions+=1;goto B527b79;
case 0x527bb0:goto L527bb0;
case 0x527bb1:c.instructions+=6;goto B527bb1;
case 0x527bb3:c.instructions+=5;goto B527bb3;
case 0x527bb9:c.instructions+=4;goto B527bb9;
case 0x527bbe:c.instructions+=3;goto B527bbe;
case 0x527bc0:c.instructions+=2;goto B527bc0;
case 0x527bc3:c.instructions+=1;goto B527bc3;
case 0x527bc5:goto L527bc5;
case 0x527bca:c.instructions+=3;goto B527bca;
case 0x527bcb:c.instructions+=2;goto B527bcb;
case 0x527bd0:c.instructions+=1;goto B527bd0;
case 0x527bd5:goto L527bd5;
case 0x527bd7:c.instructions+=2;goto B527bd7;
case 0x527bd9:c.instructions+=1;goto B527bd9;
case 0x527bdc:goto L527bdc;
case 0x527be2:c.instructions+=2;goto B527be2;
case 0x527be8:c.instructions+=1;goto B527be8;
case 0x527bea:goto L527bea;
case 0x527bf0:c.instructions+=5;goto B527bf0;
case 0x527bf2:c.instructions+=4;goto B527bf2;
case 0x527bf5:c.instructions+=3;goto B527bf5;
case 0x527bf7:c.instructions+=2;goto B527bf7;
case 0x527bfb:c.instructions+=1;goto B527bfb;
case 0x527bfd:goto L527bfd;
case 0x527c01:goto L527c01;
case 0x527c02:c.instructions+=5;goto B527c02;
case 0x527c03:c.instructions+=4;goto B527c03;
case 0x527c04:c.instructions+=3;goto B527c04;
case 0x527c06:c.instructions+=2;goto B527c06;
case 0x527c0b:c.instructions+=1;goto B527c0b;
case 0x527c11:goto L527c11;
case 0x527c13:goto L527c13;
case 0x527c18:c.instructions+=5;goto B527c18;
case 0x527c1a:c.instructions+=4;goto B527c1a;
case 0x527c1c:c.instructions+=3;goto B527c1c;
case 0x527c1e:c.instructions+=2;goto B527c1e;
case 0x527c21:c.instructions+=1;goto B527c21;
case 0x527c27:goto L527c27;
case 0x527c2c:c.instructions+=2;goto B527c2c;
case 0x527c2f:c.instructions+=1;goto B527c2f;
case 0x527c30:goto L527c30;
case 0x527c32:c.instructions+=1;goto B527c32;
case 0x527c34:goto L527c34;
case 0x527c3a:c.instructions+=1;goto B527c3a;
case 0x527c3c:goto L527c3c;
case 0x527c3f:c.instructions+=1;goto B527c3f;
case 0x527c41:goto L527c41;
case 0x527c43:goto L527c43;
case 0x527c46:c.instructions+=3;goto B527c46;
case 0x527c48:c.instructions+=2;goto B527c48;
case 0x527c4d:c.instructions+=1;goto B527c4d;
case 0x527c50:goto L527c50;
case 0x527c52:c.instructions+=2;goto B527c52;
case 0x527c54:c.instructions+=1;goto B527c54;
case 0x527c56:goto L527c56;
case 0x527c59:c.instructions+=2;goto B527c59;
case 0x527c5c:c.instructions+=1;goto B527c5c;
case 0x527c5e:goto L527c5e;
case 0x527c5f:c.instructions+=3;goto B527c5f;
case 0x527c62:c.instructions+=2;goto B527c62;
case 0x527c65:c.instructions+=1;goto B527c65;
case 0x527c67:goto L527c67;
case 0x527c6b:c.instructions+=2;goto B527c6b;
case 0x527c71:c.instructions+=1;goto B527c71;
case 0x527c73:goto L527c73;
case 0x527c77:c.instructions+=1;goto B527c77;
case 0x527c79:goto L527c79;
case 0x527c7c:c.instructions+=2;goto B527c7c;
case 0x527c7e:c.instructions+=1;goto B527c7e;
case 0x527c80:goto L527c80;
case 0x527c83:c.instructions+=3;goto B527c83;
case 0x527c84:c.instructions+=2;goto B527c84;
case 0x527c89:c.instructions+=1;goto B527c89;
case 0x527c8e:goto L527c8e;
case 0x527c90:c.instructions+=1;goto B527c90;
case 0x527c92:goto L527c92;
case 0x527c98:c.instructions+=1;goto B527c98;
case 0x527c9a:goto L527c9a;
case 0x527c9d:c.instructions+=4;goto B527c9d;
case 0x527ca0:c.instructions+=3;goto B527ca0;
case 0x527ca1:c.instructions+=2;goto B527ca1;
case 0x527ca2:c.instructions+=1;goto B527ca2;
case 0x527ca7:goto L527ca7;
case 0x527ca9:c.instructions+=1;goto B527ca9;
case 0x527cab:goto L527cab;
case 0x527caf:c.instructions+=1;goto B527caf;
case 0x527cb1:goto L527cb1;
case 0x527cb4:c.instructions+=2;goto B527cb4;
case 0x527cb6:c.instructions+=1;goto B527cb6;
case 0x527cb8:goto L527cb8;
case 0x527cbf:c.instructions+=1;goto B527cbf;
case 0x527cc0:goto L527cc0;
case 0x527cc3:goto L527cc3;
case 0x527cc6:c.instructions+=7;goto B527cc6;
case 0x527ccb:c.instructions+=6;goto B527ccb;
case 0x527ccc:c.instructions+=5;goto B527ccc;
case 0x527cd2:c.instructions+=4;goto B527cd2;
case 0x527cd4:c.instructions+=3;goto B527cd4;
case 0x527cd7:c.instructions+=2;goto B527cd7;
case 0x527cda:c.instructions+=1;goto B527cda;
case 0x527ce0:goto L527ce0;
case 0x527ce2:c.instructions+=1;goto B527ce2;
case 0x527ce4:goto L527ce4;
case 0x527ce6:c.instructions+=2;goto B527ce6;
case 0x527ce8:c.instructions+=1;goto B527ce8;
case 0x527cea:goto L527cea;
case 0x527cf0:goto L527cf0;
case 0x527cf1:c.instructions+=1;goto B527cf1;
case 0x527cf6:goto L527cf6;
case 0x527cfd:c.instructions+=8;goto B527cfd;
case 0x527d04:c.instructions+=7;goto B527d04;
case 0x527d0b:c.instructions+=6;goto B527d0b;
case 0x527d0e:c.instructions+=5;goto B527d0e;
case 0x527d15:c.instructions+=4;goto B527d15;
case 0x527d16:c.instructions+=3;goto B527d16;
case 0x527d18:c.instructions+=2;goto B527d18;
case 0x527d1a:c.instructions+=1;goto B527d1a;
case 0x527d1c:goto L527d1c;
case 0x527d22:c.instructions+=6;goto B527d22;
case 0x527d23:c.instructions+=5;goto B527d23;
case 0x527d24:c.instructions+=4;goto B527d24;
case 0x527d25:c.instructions+=3;goto B527d25;
case 0x527d27:c.instructions+=2;goto B527d27;
case 0x527d28:c.instructions+=1;goto B527d28;
case 0x527d30:goto L527d30;
case 0x527d36:c.instructions+=9;goto B527d36;
case 0x527d38:c.instructions+=8;goto B527d38;
case 0x527d39:c.instructions+=7;goto B527d39;
case 0x527d3a:c.instructions+=6;goto B527d3a;
case 0x527d3b:c.instructions+=5;goto B527d3b;
case 0x527d41:c.instructions+=4;goto B527d41;
case 0x527d43:c.instructions+=3;goto B527d43;
case 0x527d48:c.instructions+=2;goto B527d48;
case 0x527d4a:c.instructions+=1;goto B527d4a;
case 0x527d4e:goto L527d4e;
case 0x527d50:goto L527d50;
case 0x527d55:c.instructions+=1;goto B527d55;
case 0x527d5b:goto L527d5b;
case 0x527d5d:goto L527d5d;
case 0x527d62:c.instructions+=1;goto B527d62;
case 0x527d64:goto L527d64;
case 0x527d66:goto L527d66;
case 0x527d6c:c.instructions+=8;goto B527d6c;
case 0x527d6e:c.instructions+=7;goto B527d6e;
case 0x527d71:c.instructions+=6;goto B527d71;
case 0x527d74:c.instructions+=5;goto B527d74;
case 0x527d77:c.instructions+=4;goto B527d77;
case 0x527d7d:c.instructions+=3;goto B527d7d;
case 0x527d7f:c.instructions+=2;goto B527d7f;
case 0x527d83:c.instructions+=1;goto B527d83;
case 0x527d85:goto L527d85;
case 0x527d8b:c.instructions+=2;goto B527d8b;
case 0x527d8d:c.instructions+=1;goto B527d8d;
case 0x527d93:goto L527d93;
case 0x527d99:c.instructions+=2;goto B527d99;
case 0x527d9b:c.instructions+=1;goto B527d9b;
case 0x527da1:goto L527da1;
case 0x527da3:c.instructions+=1;goto B527da3;
case 0x527da5:goto L527da5;
case 0x527dab:c.instructions+=2;goto B527dab;
case 0x527dad:c.instructions+=1;goto B527dad;
case 0x527daf:goto L527daf;
case 0x527db6:c.instructions+=1;goto B527db6;
case 0x527dbc:goto L527dbc;
case 0x527dbe:c.instructions+=1;goto B527dbe;
case 0x527dc0:goto L527dc0;
case 0x527dc6:c.instructions+=2;goto B527dc6;
case 0x527dc8:c.instructions+=1;goto B527dc8;
case 0x527dce:goto L527dce;
case 0x527dd1:c.instructions+=1;goto B527dd1;
case 0x527dd3:goto L527dd3;
case 0x527dd9:c.instructions+=2;goto B527dd9;
case 0x527ddb:c.instructions+=1;goto B527ddb;
case 0x527ddd:goto L527ddd;
case 0x527de2:c.instructions+=1;goto B527de2;
case 0x527de7:goto L527de7;
case 0x527de9:c.instructions+=2;goto B527de9;
case 0x527dec:c.instructions+=1;goto B527dec;
case 0x527df2:goto L527df2;
case 0x527df5:c.instructions+=4;goto B527df5;
case 0x527df9:c.instructions+=3;goto B527df9;
case 0x527dfa:c.instructions+=2;goto B527dfa;
case 0x527dfc:c.instructions+=1;goto B527dfc;
case 0x527e01:goto L527e01;
case 0x527e03:c.instructions+=1;goto B527e03;
case 0x527e05:goto L527e05;
case 0x527e08:c.instructions+=3;goto B527e08;
case 0x527e09:c.instructions+=2;goto B527e09;
case 0x527e0b:c.instructions+=1;goto B527e0b;
case 0x527e10:goto L527e10;
case 0x527e12:c.instructions+=1;goto B527e12;
case 0x527e14:goto L527e14;
case 0x527e15:c.instructions+=2;goto B527e15;
case 0x527e17:c.instructions+=1;goto B527e17;
case 0x527e1c:goto L527e1c;
case 0x527e1d:c.instructions+=4;goto B527e1d;
case 0x527e1e:c.instructions+=3;goto B527e1e;
case 0x527e1f:c.instructions+=2;goto B527e1f;
case 0x527e25:c.instructions+=1;goto B527e25;
case 0x527e26:goto L527e26;
case 0x527e2a:c.instructions+=4;goto B527e2a;
case 0x527e30:c.instructions+=3;goto B527e30;
case 0x527e33:c.instructions+=2;goto B527e33;
case 0x527e34:c.instructions+=1;goto B527e34;
case 0x527e39:goto L527e39;
case 0x527e3b:c.instructions+=1;goto B527e3b;
case 0x527e41:goto L527e41;
case 0x527e47:c.instructions+=3;goto B527e47;
case 0x527e49:c.instructions+=2;goto B527e49;
case 0x527e4b:c.instructions+=1;goto B527e4b;
case 0x527e4d:goto L527e4d;
case 0x527e51:c.instructions+=1;goto B527e51;
case 0x527e53:goto L527e53;
case 0x527e55:c.instructions+=1;goto B527e55;
case 0x527e57:goto L527e57;
case 0x527e59:c.instructions+=1;goto B527e59;
case 0x527e5b:goto L527e5b;
case 0x527e61:c.instructions+=2;goto B527e61;
case 0x527e63:c.instructions+=1;goto B527e63;
case 0x527e65:goto L527e65;
case 0x527e67:goto L527e67;
case 0x527e6d:c.instructions+=4;goto B527e6d;
case 0x527e71:c.instructions+=3;goto B527e71;
case 0x527e73:c.instructions+=2;goto B527e73;
case 0x527e77:c.instructions+=1;goto B527e77;
case 0x527e79:goto L527e79;
case 0x527e7f:c.instructions+=5;goto B527e7f;
case 0x527e80:c.instructions+=4;goto B527e80;
case 0x527e87:c.instructions+=3;goto B527e87;
case 0x527e88:c.instructions+=2;goto B527e88;
case 0x527e8e:c.instructions+=1;goto B527e8e;
case 0x527e93:goto L527e93;
case 0x527e99:goto L527e99;
case 0x527e9a:c.instructions+=3;goto B527e9a;
case 0x527e9d:c.instructions+=2;goto B527e9d;
case 0x527e9f:c.instructions+=1;goto B527e9f;
case 0x527ea1:goto L527ea1;
case 0x527ea6:c.instructions+=2;goto B527ea6;
case 0x527ea8:c.instructions+=1;goto B527ea8;
case 0x527eaa:goto L527eaa;
case 0x527eaf:c.instructions+=3;goto B527eaf;
case 0x527eb0:c.instructions+=2;goto B527eb0;
case 0x527eb5:c.instructions+=1;goto B527eb5;
case 0x527eba:goto L527eba;
case 0x527ebc:c.instructions+=2;goto B527ebc;
case 0x527ebe:c.instructions+=1;goto B527ebe;
case 0x527ec1:goto L527ec1;
case 0x527ec7:c.instructions+=2;goto B527ec7;
case 0x527ecd:c.instructions+=1;goto B527ecd;
case 0x527ecf:goto L527ecf;
case 0x527ed5:c.instructions+=4;goto B527ed5;
case 0x527ed7:c.instructions+=3;goto B527ed7;
case 0x527eda:c.instructions+=2;goto B527eda;
case 0x527edc:c.instructions+=1;goto B527edc;
case 0x527ede:goto L527ede;
case 0x527ee0:c.instructions+=1;goto B527ee0;
case 0x527ee2:goto L527ee2;
case 0x527ee4:goto L527ee4;
case 0x527ee6:c.instructions+=1;goto B527ee6;
case 0x527ef0:goto L527ef0;
case 0x527ef7:c.instructions+=2;goto B527ef7;
case 0x527ef9:c.instructions+=1;goto B527ef9;
case 0x527efb:goto L527efb;
case 0x527eff:c.instructions+=3;goto B527eff;
case 0x527f03:c.instructions+=2;goto B527f03;
case 0x527f09:c.instructions+=1;goto B527f09;
case 0x527f0b:goto L527f0b;
case 0x527f0f:c.instructions+=1;goto B527f0f;
case 0x527f11:goto L527f11;
case 0x527f13:c.instructions+=1;goto B527f13;
case 0x527f15:goto L527f15;
case 0x527f18:c.instructions+=3;goto B527f18;
case 0x527f19:c.instructions+=2;goto B527f19;
case 0x527f1e:c.instructions+=1;goto B527f1e;
case 0x527f23:goto L527f23;
case 0x527f25:c.instructions+=1;goto B527f25;
case 0x527f27:goto L527f27;
case 0x527f2b:c.instructions+=3;goto B527f2b;
case 0x527f2c:c.instructions+=2;goto B527f2c;
case 0x527f32:c.instructions+=1;goto B527f32;
case 0x527f37:goto L527f37;
case 0x527f38:c.instructions+=2;goto B527f38;
case 0x527f3b:c.instructions+=1;goto B527f3b;
case 0x527f3d:goto L527f3d;
case 0x527f3f:c.instructions+=6;goto B527f3f;
case 0x527f40:c.instructions+=5;goto B527f40;
case 0x527f44:c.instructions+=4;goto B527f44;
case 0x527f4a:c.instructions+=3;goto B527f4a;
case 0x527f4b:c.instructions+=2;goto B527f4b;
case 0x527f4d:c.instructions+=1;goto B527f4d;
case 0x527f52:goto L527f52;
case 0x527f53:c.instructions+=3;goto B527f53;
case 0x527f55:c.instructions+=2;goto B527f55;
case 0x527f57:c.instructions+=1;goto B527f57;
case 0x527f5c:goto L527f5c;
case 0x527f60:c.instructions+=3;goto B527f60;
case 0x527f64:c.instructions+=2;goto B527f64;
case 0x527f67:c.instructions+=1;goto B527f67;
case 0x527f69:goto L527f69;
case 0x527f6b:c.instructions+=1;goto B527f6b;
case 0x527f71:goto L527f71;
case 0x527f72:c.instructions+=2;goto B527f72;
case 0x527f74:c.instructions+=1;goto B527f74;
case 0x527f79:goto L527f79;
case 0x527f7b:c.instructions+=1;goto B527f7b;
case 0x527f81:goto L527f81;
case 0x527f85:c.instructions+=1;goto B527f85;
case 0x527f87:goto L527f87;
case 0x527f8c:c.instructions+=1;goto B527f8c;
case 0x527f8e:goto L527f8e;
case 0x527f92:c.instructions+=1;goto B527f92;
case 0x527f94:goto L527f94;
case 0x527f99:c.instructions+=1;goto B527f99;
case 0x527f9b:goto L527f9b;
case 0x527f9f:c.instructions+=2;goto B527f9f;
case 0x527fa2:c.instructions+=1;goto B527fa2;
case 0x527fa4:goto L527fa4;
case 0x527fab:goto L527fab;
case 0x527fb0:c.instructions+=1;goto B527fb0;
case 0x527fb2:goto L527fb2;
case 0x527fb7:c.instructions+=1;goto B527fb7;
case 0x527fb9:goto L527fb9;
case 0x527fbe:c.instructions+=1;goto B527fbe;
case 0x527fc0:goto L527fc0;
case 0x527fc5:c.instructions+=1;goto B527fc5;
case 0x527fc7:goto L527fc7;
case 0x527fc9:goto L527fc9;
case 0x527fd0:c.instructions+=2;goto B527fd0;
case 0x527fd2:c.instructions+=1;goto B527fd2;
case 0x527fd8:goto L527fd8;
case 0x527fdb:c.instructions+=1;goto B527fdb;
case 0x527fdd:goto L527fdd;
case 0x527fde:c.instructions+=3;goto B527fde;
case 0x527fe1:c.instructions+=2;goto B527fe1;
case 0x527fe4:c.instructions+=1;goto B527fe4;
case 0x527fe6:goto L527fe6;
case 0x527fe8:goto L527fe8;
case 0x527fec:c.instructions+=2;goto B527fec;
case 0x527ff2:c.instructions+=1;goto B527ff2;
case 0x527ff9:goto L527ff9;
case 0x527ffd:c.instructions+=1;goto B527ffd;
default:missing_instruction(c.pc);}
B527001:L527001:{c.instructions+=2;NFSU2_TR(0x527001);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B527004:{NFSU2_TR(0x527004);
if(r1(R+518)){{goto L527016;}}
}
B527006:L527006:{c.instructions+=3;NFSU2_TR(0x527006);
__builtin_memmove((R+4),(R+28),4);
}
B527008:{NFSU2_TR(0x527008);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52700b:{NFSU2_TR(0x52700b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527010ull));
TAIL_STATIC(0x517720u,517);
}
B527010:L527010:{c.instructions+=2;NFSU2_TR(0x527010);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B527013:{NFSU2_TR(0x527013);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527016:L527016:{c.instructions+=4;NFSU2_TR(0x527016);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527019:{NFSU2_TR(0x527019);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52701c:{NFSU2_TR(0x52701c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52701e:{NFSU2_TR(0x52701e);
if(r1(R+518)){{goto L527069;}}
}
B527020:L527020:{c.instructions+=3;NFSU2_TR(0x527020);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B527023:{NFSU2_TR(0x527023);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B527025:{NFSU2_TR(0x527025);
if(r1(R+518)){{goto L527069;}}
}
B527027:L527027:{c.instructions+=1;NFSU2_TR(0x527027);
{goto L527030;}
}
B527030:L527030:{c.instructions+=2;NFSU2_TR(0x527030);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527035:{NFSU2_TR(0x527035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52703aull));
TAIL_STATIC(0x505450u,505);
}
B52703a:L52703a:{c.instructions+=4;NFSU2_TR(0x52703a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52703d:{NFSU2_TR(0x52703d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B527040:{NFSU2_TR(0x527040);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B527042:{NFSU2_TR(0x527042);
if(r1(R+518)){{goto L52704d;}}
}
B527044:L527044:{c.instructions+=3;NFSU2_TR(0x527044);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B527047:{NFSU2_TR(0x527047);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B527049:{NFSU2_TR(0x527049);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527030u);}goto L527030;}}
}
B52704b:L52704b:{c.instructions+=1;NFSU2_TR(0x52704b);
{goto L527069;}
}
B52704d:L52704d:{c.instructions+=2;NFSU2_TR(0x52704d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52704f:{NFSU2_TR(0x52704f);
if(r1(R+518)){{goto L527069;}}
}
B527051:L527051:{c.instructions+=2;NFSU2_TR(0x527051);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B527054:{NFSU2_TR(0x527054);
if(r1(R+518)){{goto L527066;}}
}
B527056:L527056:{c.instructions+=3;NFSU2_TR(0x527056);
__builtin_memmove((R+4),(R+28),4);
}
B527058:{NFSU2_TR(0x527058);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52705b:{NFSU2_TR(0x52705b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527060ull));
TAIL_STATIC(0x517720u,517);
}
B527060:L527060:{c.instructions+=2;NFSU2_TR(0x527060);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B527063:{NFSU2_TR(0x527063);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527066:L527066:{c.instructions+=1;NFSU2_TR(0x527066);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527069:L527069:{c.instructions+=3;NFSU2_TR(0x527069);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52706c:{NFSU2_TR(0x52706c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52706e:{NFSU2_TR(0x52706e);
if(r1(R+518)){{goto L5270b9;}}
}
B527070:L527070:{c.instructions+=3;NFSU2_TR(0x527070);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B527073:{NFSU2_TR(0x527073);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B527075:{NFSU2_TR(0x527075);
if(r1(R+518)){{goto L5270b9;}}
}
B527077:L527077:{c.instructions+=1;NFSU2_TR(0x527077);
{goto L527080;}
}
B527080:L527080:{c.instructions+=2;NFSU2_TR(0x527080);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527085:{NFSU2_TR(0x527085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52708aull));
TAIL_STATIC(0x505450u,505);
}
B52708a:L52708a:{c.instructions+=4;NFSU2_TR(0x52708a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52708d:{NFSU2_TR(0x52708d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B527090:{NFSU2_TR(0x527090);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B527092:{NFSU2_TR(0x527092);
if(r1(R+518)){{goto L52709d;}}
}
B527094:L527094:{c.instructions+=3;NFSU2_TR(0x527094);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B527097:{NFSU2_TR(0x527097);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B527099:{NFSU2_TR(0x527099);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527080u);}goto L527080;}}
}
B52709b:L52709b:{c.instructions+=1;NFSU2_TR(0x52709b);
{goto L5270b9;}
}
B52709d:L52709d:{c.instructions+=2;NFSU2_TR(0x52709d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52709f:{NFSU2_TR(0x52709f);
if(r1(R+518)){{goto L5270b9;}}
}
B5270a1:L5270a1:{c.instructions+=2;NFSU2_TR(0x5270a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5270a4:{NFSU2_TR(0x5270a4);
if(r1(R+518)){{goto L5270b6;}}
}
B5270a6:L5270a6:{c.instructions+=3;NFSU2_TR(0x5270a6);
__builtin_memmove((R+4),(R+28),4);
}
B5270a8:{NFSU2_TR(0x5270a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5270ab:{NFSU2_TR(0x5270ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5270b0ull));
TAIL_STATIC(0x517720u,517);
}
B5270b0:L5270b0:{c.instructions+=2;NFSU2_TR(0x5270b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5270b3:{NFSU2_TR(0x5270b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5270b6:L5270b6:{c.instructions+=1;NFSU2_TR(0x5270b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5270b9:L5270b9:{c.instructions+=3;NFSU2_TR(0x5270b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5270bc:{NFSU2_TR(0x5270bc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5270be:{NFSU2_TR(0x5270be);
if(r1(R+518)){{goto L527109;}}
}
B5270c0:L5270c0:{c.instructions+=3;NFSU2_TR(0x5270c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5270c3:{NFSU2_TR(0x5270c3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5270c5:{NFSU2_TR(0x5270c5);
if(r1(R+518)){{goto L527109;}}
}
B5270c7:L5270c7:{c.instructions+=1;NFSU2_TR(0x5270c7);
{goto L5270d0;}
}
B5270d0:L5270d0:{c.instructions+=2;NFSU2_TR(0x5270d0);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5270d5:{NFSU2_TR(0x5270d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5270daull));
TAIL_STATIC(0x505450u,505);
}
B5270da:L5270da:{c.instructions+=4;NFSU2_TR(0x5270da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5270dd:{NFSU2_TR(0x5270dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5270e0:{NFSU2_TR(0x5270e0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5270e2:{NFSU2_TR(0x5270e2);
if(r1(R+518)){{goto L5270ed;}}
}
B5270e4:L5270e4:{c.instructions+=3;NFSU2_TR(0x5270e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5270e7:{NFSU2_TR(0x5270e7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5270e9:{NFSU2_TR(0x5270e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5270d0u);}goto L5270d0;}}
}
B5270eb:L5270eb:{c.instructions+=1;NFSU2_TR(0x5270eb);
{goto L527109;}
}
B5270ed:L5270ed:{c.instructions+=2;NFSU2_TR(0x5270ed);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5270ef:{NFSU2_TR(0x5270ef);
if(r1(R+518)){{goto L527109;}}
}
B5270f1:L5270f1:{c.instructions+=2;NFSU2_TR(0x5270f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5270f4:{NFSU2_TR(0x5270f4);
if(r1(R+518)){{goto L527106;}}
}
B5270f6:L5270f6:{c.instructions+=3;NFSU2_TR(0x5270f6);
__builtin_memmove((R+4),(R+28),4);
}
B5270f8:{NFSU2_TR(0x5270f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5270fb:{NFSU2_TR(0x5270fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527100ull));
TAIL_STATIC(0x517720u,517);
}
B527100:L527100:{c.instructions+=2;NFSU2_TR(0x527100);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B527103:{NFSU2_TR(0x527103);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527106:L527106:{c.instructions+=1;NFSU2_TR(0x527106);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527109:L527109:{c.instructions+=3;NFSU2_TR(0x527109);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52710c:{NFSU2_TR(0x52710c);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B52710e:{NFSU2_TR(0x52710e);
if(r1(R+518)){{goto L52715c;}}
}
B527110:L527110:{c.instructions+=3;NFSU2_TR(0x527110);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B527113:{NFSU2_TR(0x527113);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B527115:{NFSU2_TR(0x527115);
if(r1(R+518)){{goto L52715c;}}
}
B527117:L527117:{c.instructions+=1;NFSU2_TR(0x527117);
{goto L527120;}
}
B527120:L527120:{c.instructions+=2;NFSU2_TR(0x527120);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527125:{NFSU2_TR(0x527125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52712aull));
TAIL_STATIC(0x505450u,505);
}
B52712a:L52712a:{c.instructions+=4;NFSU2_TR(0x52712a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52712d:{NFSU2_TR(0x52712d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B527130:{NFSU2_TR(0x527130);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B527132:{NFSU2_TR(0x527132);
if(r1(R+518)){{goto L527140;}}
}
B527134:L527134:{c.instructions+=3;NFSU2_TR(0x527134);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B527137:{NFSU2_TR(0x527137);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B527139:{NFSU2_TR(0x527139);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527120u);}goto L527120;}}
}
B52713b:L52713b:{c.instructions+=5;NFSU2_TR(0x52713b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52713c:{NFSU2_TR(0x52713c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52713d:{NFSU2_TR(0x52713d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52713e:{NFSU2_TR(0x52713e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52713f:{NFSU2_TR(0x52713f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527140:L527140:{c.instructions+=2;NFSU2_TR(0x527140);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B527142:{NFSU2_TR(0x527142);
if(r1(R+518)){{goto L52715c;}}
}
B527144:L527144:{c.instructions+=2;NFSU2_TR(0x527144);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B527147:{NFSU2_TR(0x527147);
if(r1(R+518)){{goto L527159;}}
}
B527149:L527149:{c.instructions+=3;NFSU2_TR(0x527149);
__builtin_memmove((R+4),(R+28),4);
}
B52714b:{NFSU2_TR(0x52714b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52714e:{NFSU2_TR(0x52714e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527153ull));
TAIL_STATIC(0x517720u,517);
}
B527153:L527153:{c.instructions+=2;NFSU2_TR(0x527153);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B527156:{NFSU2_TR(0x527156);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527159:L527159:{c.instructions+=1;NFSU2_TR(0x527159);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52715c:L52715c:{c.instructions+=5;NFSU2_TR(0x52715c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52715d:{NFSU2_TR(0x52715d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52715e:{NFSU2_TR(0x52715e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52715f:{NFSU2_TR(0x52715f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B527160:{NFSU2_TR(0x527160);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527170:L527170:{c.instructions+=10;NFSU2_TR(0x527170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B527173:{NFSU2_TR(0x527173);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527174:{NFSU2_TR(0x527174);
__builtin_memmove((R+24),(R+4),4);
}
B527176:{NFSU2_TR(0x527176);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B527179:{NFSU2_TR(0x527179);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52717d:{NFSU2_TR(0x52717d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52717e:{NFSU2_TR(0x52717e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B527182:{NFSU2_TR(0x527182);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527183:{NFSU2_TR(0x527183);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527184:{NFSU2_TR(0x527184);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527189ull));
TAIL_STATIC(0x51d070u,51d);
}
B527189:L527189:{c.instructions+=11;NFSU2_TR(0x527189);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52718d:{NFSU2_TR(0x52718d);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B527193:{NFSU2_TR(0x527193);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527196:{NFSU2_TR(0x527196);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B527199:{NFSU2_TR(0x527199);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52719d:{NFSU2_TR(0x52719d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5271a1:{NFSU2_TR(0x5271a1);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5271a4:{NFSU2_TR(0x5271a4);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5271aa:{NFSU2_TR(0x5271aa);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5271ad:{NFSU2_TR(0x5271ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5271ae:{NFSU2_TR(0x5271ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5271b3ull));
TAIL_STATIC(0x51d380u,51d);
}
B5271b3:L5271b3:{c.instructions+=8;NFSU2_TR(0x5271b3);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5271b6:{NFSU2_TR(0x5271b6);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5271bc:{NFSU2_TR(0x5271bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5271bf:{NFSU2_TR(0x5271bf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5271c5:{NFSU2_TR(0x5271c5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5271c7:{NFSU2_TR(0x5271c7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5271c9:{NFSU2_TR(0x5271c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5271cc:{NFSU2_TR(0x5271cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5271da;}}
}
B5271ce:L5271ce:{c.instructions+=3;NFSU2_TR(0x5271ce);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5271d0:{NFSU2_TR(0x5271d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5271d8:{NFSU2_TR(0x5271d8);
{goto L5271de;}
}
B5271da:L5271da:{c.instructions+=1;NFSU2_TR(0x5271da);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5271de:L5271de:{c.instructions+=7;NFSU2_TR(0x5271de);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5271e1:{NFSU2_TR(0x5271e1);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5271e4:{NFSU2_TR(0x5271e4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5271e8:{NFSU2_TR(0x5271e8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5271ee:{NFSU2_TR(0x5271ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5271f0:{NFSU2_TR(0x5271f0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5271f3:{NFSU2_TR(0x5271f3);
if(r1(R+514)){{goto L527203;}}
}
B5271f5:L5271f5:{c.instructions+=3;NFSU2_TR(0x5271f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5271f8:{NFSU2_TR(0x5271f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5271f9:{NFSU2_TR(0x5271f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5271feull));
TAIL_STATIC(0x50ca00u,50c);
}
B5271fe:L5271fe:{c.instructions+=2;NFSU2_TR(0x5271fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B527201:{NFSU2_TR(0x527201);
{goto L527257;}
}
B527203:L527203:{c.instructions+=5;NFSU2_TR(0x527203);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B527207:{NFSU2_TR(0x527207);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52720d:{NFSU2_TR(0x52720d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52720f:{NFSU2_TR(0x52720f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527212:{NFSU2_TR(0x527212);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52722a;}}
}
B527214:L527214:{c.instructions+=3;NFSU2_TR(0x527214);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B527217:{NFSU2_TR(0x527217);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527218:{NFSU2_TR(0x527218);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52721dull));
TAIL_STATIC(0x50ca50u,50c);
}
B52721d:L52721d:{c.instructions+=5;NFSU2_TR(0x52721d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527220:{NFSU2_TR(0x527220);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527222:{NFSU2_TR(0x527222);
u8 U[4];
w4(U+0,u32(0x79b8b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527227:{NFSU2_TR(0x527227);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527228:{NFSU2_TR(0x527228);
{goto L52724f;}
}
B52722a:L52722a:{c.instructions+=5;NFSU2_TR(0x52722a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52722e:{NFSU2_TR(0x52722e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B527234:{NFSU2_TR(0x527234);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B527236:{NFSU2_TR(0x527236);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B527239:{NFSU2_TR(0x527239);
if(r1(R+514)){{goto L527257;}}
}
B52723b:L52723b:{c.instructions+=3;NFSU2_TR(0x52723b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52723e:{NFSU2_TR(0x52723e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52723f:{NFSU2_TR(0x52723f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527244ull));
TAIL_STATIC(0x50ca50u,50c);
}
B527244:L527244:{c.instructions+=4;NFSU2_TR(0x527244);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B527247:{NFSU2_TR(0x527247);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527249:{NFSU2_TR(0x527249);
u8 U[4];
w4(U+0,u32(0x79b8acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52724e:{NFSU2_TR(0x52724e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52724f:L52724f:{c.instructions+=1;NFSU2_TR(0x52724f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527254ull));
TAIL_STATIC(0x51cf70u,51c);
}
B527254:L527254:{c.instructions+=1;NFSU2_TR(0x527254);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B527257:L527257:{c.instructions+=8;NFSU2_TR(0x527257);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52725a:{NFSU2_TR(0x52725a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52725e:{NFSU2_TR(0x52725e);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B527261:{NFSU2_TR(0x527261);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B527265:{NFSU2_TR(0x527265);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B527267:{NFSU2_TR(0x527267);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B527269:{NFSU2_TR(0x527269);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52726c:{NFSU2_TR(0x52726c);
if(r1(R+514)){{goto L527274;}}
}
B52726e:L52726e:{c.instructions+=2;NFSU2_TR(0x52726e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B527270:{NFSU2_TR(0x527270);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B527274:L527274:{c.instructions+=7;NFSU2_TR(0x527274);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B527277:{NFSU2_TR(0x527277);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52727b:{NFSU2_TR(0x52727b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B527281:{NFSU2_TR(0x527281);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B527285:{NFSU2_TR(0x527285);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B527287:{NFSU2_TR(0x527287);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52728a:{NFSU2_TR(0x52728a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527294;}}
}
B52728c:L52728c:{c.instructions+=2;NFSU2_TR(0x52728c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B527292:{NFSU2_TR(0x527292);
{goto L5272b1;}
}
B527294:L527294:{c.instructions+=6;NFSU2_TR(0x527294);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B527298:{NFSU2_TR(0x527298);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52729c:{NFSU2_TR(0x52729c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5272a2:{NFSU2_TR(0x5272a2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5272a4:{NFSU2_TR(0x5272a4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5272a7:{NFSU2_TR(0x5272a7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5272b1;}}
}
B5272a9:L5272a9:{c.instructions+=2;NFSU2_TR(0x5272a9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5272ab:{NFSU2_TR(0x5272ab);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5272b1:L5272b1:{c.instructions+=7;NFSU2_TR(0x5272b1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5272b5:{NFSU2_TR(0x5272b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5272b8:{NFSU2_TR(0x5272b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5272b9:{NFSU2_TR(0x5272b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5272ba:{NFSU2_TR(0x5272ba);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5272bd:{NFSU2_TR(0x5272bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5272be:{NFSU2_TR(0x5272be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5272c3ull));
TAIL_STATIC(0x495590u,495);
}
B5272c3:L5272c3:{c.instructions+=14;NFSU2_TR(0x5272c3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5272c7:{NFSU2_TR(0x5272c7);
{u32 ea_=u32(u32(7897616u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5272cd:{NFSU2_TR(0x5272cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5272d0:{NFSU2_TR(0x5272d0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5272d4:{NFSU2_TR(0x5272d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5272d8:{NFSU2_TR(0x5272d8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5272dc:{NFSU2_TR(0x5272dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5272dd:{NFSU2_TR(0x5272dd);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5272e0:{NFSU2_TR(0x5272e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5272e1:{NFSU2_TR(0x5272e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5272e4:{NFSU2_TR(0x5272e4);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5272ea:{NFSU2_TR(0x5272ea);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5272ed:{NFSU2_TR(0x5272ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5272ee:{NFSU2_TR(0x5272ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5272f3ull));
TAIL_STATIC(0x51d380u,51d);
}
B5272f3:L5272f3:{c.instructions+=7;NFSU2_TR(0x5272f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5272f6:{NFSU2_TR(0x5272f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5272fa:{NFSU2_TR(0x5272fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5272fb:{NFSU2_TR(0x5272fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5272ff:{NFSU2_TR(0x5272ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527300:{NFSU2_TR(0x527300);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527301:{NFSU2_TR(0x527301);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527306ull));
TAIL_STATIC(0x51d170u,51d);
}
B527306:L527306:{c.instructions+=10;NFSU2_TR(0x527306);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52730a:{NFSU2_TR(0x52730a);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B52730d:{NFSU2_TR(0x52730d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527310:{NFSU2_TR(0x527310);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B527312:{NFSU2_TR(0x527312);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B527316:{NFSU2_TR(0x527316);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52731a:{NFSU2_TR(0x52731a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52731e:{NFSU2_TR(0x52731e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52731f:{NFSU2_TR(0x52731f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527320:{NFSU2_TR(0x527320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527325ull));
TAIL_STATIC(0x495590u,495);
}
B527325:L527325:{c.instructions+=6;NFSU2_TR(0x527325);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B527329:{NFSU2_TR(0x527329);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52732c:{NFSU2_TR(0x52732c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52732d:{NFSU2_TR(0x52732d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52732e:{NFSU2_TR(0x52732e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52732f:{NFSU2_TR(0x52732f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527334ull));
TAIL_STATIC(0x51d380u,51d);
}
B527334:L527334:{c.instructions+=12;NFSU2_TR(0x527334);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B527338:{NFSU2_TR(0x527338);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52733e:{NFSU2_TR(0x52733e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B527341:{NFSU2_TR(0x527341);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B527345:{NFSU2_TR(0x527345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B527346:{NFSU2_TR(0x527346);
{u32 ea_=u32(u32(7897632u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52734c:{NFSU2_TR(0x52734c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B52734f:{NFSU2_TR(0x52734f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B527351:{NFSU2_TR(0x527351);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B527355:{NFSU2_TR(0x527355);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B527358:{NFSU2_TR(0x527358);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52735c:{NFSU2_TR(0x52735c);
if(r1(R+514)){{goto L527378;}}
}
B52735e:L52735e:{c.instructions+=5;NFSU2_TR(0x52735e);
{u32 ea_=u32(u32(7897616u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B527364:{NFSU2_TR(0x527364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527367:{NFSU2_TR(0x527367);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52736a:{NFSU2_TR(0x52736a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52736b:{NFSU2_TR(0x52736b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527370ull));
TAIL_STATIC(0x51d380u,51d);
}
B527370:L527370:{c.instructions+=4;NFSU2_TR(0x527370);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B527373:{NFSU2_TR(0x527373);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527374:{NFSU2_TR(0x527374);
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
B527377:{NFSU2_TR(0x527377);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527378:L527378:{c.instructions+=6;NFSU2_TR(0x527378);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52737c:{NFSU2_TR(0x52737c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52737f:{NFSU2_TR(0x52737f);
{u32 ea_=u32(u32(7897616u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B527385:{NFSU2_TR(0x527385);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B527388:{NFSU2_TR(0x527388);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527389:{NFSU2_TR(0x527389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52738eull));
TAIL_STATIC(0x51d380u,51d);
}
B52738e:L52738e:{c.instructions+=4;NFSU2_TR(0x52738e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B527391:{NFSU2_TR(0x527391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527392:{NFSU2_TR(0x527392);
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
B527395:{NFSU2_TR(0x527395);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5273a0:L5273a0:{c.instructions+=10;NFSU2_TR(0x5273a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5273a3:{NFSU2_TR(0x5273a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5273a4:{NFSU2_TR(0x5273a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5273a5:{NFSU2_TR(0x5273a5);
__builtin_memmove((R+24),(R+4),4);
}
B5273a7:{NFSU2_TR(0x5273a7);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5273aa:{NFSU2_TR(0x5273aa);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5273ad:{NFSU2_TR(0x5273ad);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5273b3:{NFSU2_TR(0x5273b3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5273b5:{NFSU2_TR(0x5273b5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5273b8:{NFSU2_TR(0x5273b8);
if(r1(R+514)){{goto L5273c2;}}
}
B5273ba:L5273ba:{c.instructions+=2;NFSU2_TR(0x5273ba);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5273bc:{NFSU2_TR(0x5273bc);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5273c2:L5273c2:{c.instructions+=25;NFSU2_TR(0x5273c2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5273c8:{NFSU2_TR(0x5273c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5273cb:{NFSU2_TR(0x5273cb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5273cf:{NFSU2_TR(0x5273cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5273d2:{NFSU2_TR(0x5273d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5273d6:{NFSU2_TR(0x5273d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5273d7:{NFSU2_TR(0x5273d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5273db:{NFSU2_TR(0x5273db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5273dc:{NFSU2_TR(0x5273dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5273dd:{NFSU2_TR(0x5273dd);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5273e0:{NFSU2_TR(0x5273e0);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5273e3:{NFSU2_TR(0x5273e3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5273e5:{NFSU2_TR(0x5273e5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5273e9:{NFSU2_TR(0x5273e9);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5273ec:{NFSU2_TR(0x5273ec);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5273ef:{NFSU2_TR(0x5273ef);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5273f1:{NFSU2_TR(0x5273f1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5273f5:{NFSU2_TR(0x5273f5);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5273f8:{NFSU2_TR(0x5273f8);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5273fb:{NFSU2_TR(0x5273fb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5273fd:{NFSU2_TR(0x5273fd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B527401:{NFSU2_TR(0x527401);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B527404:{NFSU2_TR(0x527404);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B527408:{NFSU2_TR(0x527408);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52740a:{NFSU2_TR(0x52740a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52740full));
TAIL_STATIC(0x51d070u,51d);
}
B52740f:L52740f:{c.instructions+=11;NFSU2_TR(0x52740f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B527413:{NFSU2_TR(0x527413);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B527416:{NFSU2_TR(0x527416);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52741a:{NFSU2_TR(0x52741a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52741e:{NFSU2_TR(0x52741e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B527422:{NFSU2_TR(0x527422);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B527426:{NFSU2_TR(0x527426);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52742a:{NFSU2_TR(0x52742a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52742e:{NFSU2_TR(0x52742e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52742f:{NFSU2_TR(0x52742f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527430:{NFSU2_TR(0x527430);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527435ull));
TAIL_STATIC(0x495590u,495);
}
B527435:L527435:{c.instructions+=10;NFSU2_TR(0x527435);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B527439:{NFSU2_TR(0x527439);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52743f:{NFSU2_TR(0x52743f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B527443:{NFSU2_TR(0x527443);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B527446:{NFSU2_TR(0x527446);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52744a:{NFSU2_TR(0x52744a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52744e:{NFSU2_TR(0x52744e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52744f:{NFSU2_TR(0x52744f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527450:{NFSU2_TR(0x527450);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527451:{NFSU2_TR(0x527451);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527456ull));
TAIL_STATIC(0x51d380u,51d);
}
B527456:L527456:{c.instructions+=4;NFSU2_TR(0x527456);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B527459:{NFSU2_TR(0x527459);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B52745c:{NFSU2_TR(0x52745c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52745e:{NFSU2_TR(0x52745e);
if(r1(R+518)){{goto L5274b2;}}
}
B527460:L527460:{c.instructions+=4;NFSU2_TR(0x527460);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527461:{NFSU2_TR(0x527461);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B527464:{NFSU2_TR(0x527464);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527466:{NFSU2_TR(0x527466);
if(r1(R+518)){{goto L5274b1;}}
}
B527468:L527468:{c.instructions+=1;NFSU2_TR(0x527468);
{goto L527470;}
}
B527470:L527470:{c.instructions+=2;NFSU2_TR(0x527470);
u8 U[4];
w4(U+0,u32(0x79b8b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527475:{NFSU2_TR(0x527475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52747aull));
TAIL_STATIC(0x505450u,505);
}
B52747a:L52747a:{c.instructions+=4;NFSU2_TR(0x52747a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52747d:{NFSU2_TR(0x52747d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B527480:{NFSU2_TR(0x527480);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B527482:{NFSU2_TR(0x527482);
if(r1(R+518)){{goto L52748d;}}
}
B527484:L527484:{c.instructions+=3;NFSU2_TR(0x527484);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B527487:{NFSU2_TR(0x527487);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527489:{NFSU2_TR(0x527489);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527470u);}goto L527470;}}
}
B52748b:L52748b:{c.instructions+=1;NFSU2_TR(0x52748b);
{goto L5274b1;}
}
B52748d:L52748d:{c.instructions+=2;NFSU2_TR(0x52748d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52748f:{NFSU2_TR(0x52748f);
if(r1(R+518)){{goto L5274b1;}}
}
B527491:L527491:{c.instructions+=2;NFSU2_TR(0x527491);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B527494:{NFSU2_TR(0x527494);
if(r1(R+518)){{goto L5274aa;}}
}
B527496:L527496:{c.instructions+=3;NFSU2_TR(0x527496);
__builtin_memmove((R+4),(R+12),4);
}
B527498:{NFSU2_TR(0x527498);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52749b:{NFSU2_TR(0x52749b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5274a0ull));
TAIL_STATIC(0x517720u,517);
}
B5274a0:L5274a0:{c.instructions+=2;NFSU2_TR(0x5274a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5274a3:{NFSU2_TR(0x5274a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5274aa:L5274aa:{c.instructions+=1;NFSU2_TR(0x5274aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5274b1:L5274b1:{c.instructions+=1;NFSU2_TR(0x5274b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5274b2:L5274b2:{c.instructions+=10;NFSU2_TR(0x5274b2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5274b6:{NFSU2_TR(0x5274b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5274b7:{NFSU2_TR(0x5274b7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5274bb:{NFSU2_TR(0x5274bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5274be:{NFSU2_TR(0x5274be);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5274c2:{NFSU2_TR(0x5274c2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5274c6:{NFSU2_TR(0x5274c6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5274ca:{NFSU2_TR(0x5274ca);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5274cd:{NFSU2_TR(0x5274cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5274ce:{NFSU2_TR(0x5274ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5274d3ull));
TAIL_STATIC(0x495590u,495);
}
B5274d3:L5274d3:{c.instructions+=7;NFSU2_TR(0x5274d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5274d7:{NFSU2_TR(0x5274d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5274db:{NFSU2_TR(0x5274db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5274de:{NFSU2_TR(0x5274de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5274df:{NFSU2_TR(0x5274df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5274e0:{NFSU2_TR(0x5274e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5274e1:{NFSU2_TR(0x5274e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5274e6ull));
TAIL_STATIC(0x51d380u,51d);
}
B5274e6:L5274e6:{c.instructions+=10;NFSU2_TR(0x5274e6);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5274ea:{NFSU2_TR(0x5274ea);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5274f0:{NFSU2_TR(0x5274f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5274f3:{NFSU2_TR(0x5274f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5274f6:{NFSU2_TR(0x5274f6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5274fa:{NFSU2_TR(0x5274fa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5274fe:{NFSU2_TR(0x5274fe);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B527504:{NFSU2_TR(0x527504);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B527507:{NFSU2_TR(0x527507);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527508:{NFSU2_TR(0x527508);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52750dull));
TAIL_STATIC(0x51d380u,51d);
}
B52750d:L52750d:{c.instructions+=5;NFSU2_TR(0x52750d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B527510:{NFSU2_TR(0x527510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527511:{NFSU2_TR(0x527511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B527512:{NFSU2_TR(0x527512);
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
B527515:{NFSU2_TR(0x527515);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527520:L527520:{c.instructions+=3;NFSU2_TR(0x527520);
__builtin_memmove((R+0),gp(0x8383c8),4);
}
B527525:{NFSU2_TR(0x527525);
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
B527527:{NFSU2_TR(0x527527);
if(r1(R+518)){{goto L5275a7;}}
}
B527529:L527529:{c.instructions+=3;NFSU2_TR(0x527529);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52752d:{NFSU2_TR(0x52752d);
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
B52752f:{NFSU2_TR(0x52752f);
if(r1(R+518)){{goto L5275a7;}}
}
B527531:L527531:{c.instructions+=4;NFSU2_TR(0x527531);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527532:{NFSU2_TR(0x527532);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527533:{NFSU2_TR(0x527533);
__builtin_memmove((R+24),gp(0x7f70d0),4);
}
B527539:{NFSU2_TR(0x527539);
__builtin_memmove((R+16),(R+16),4);
}
B527540:L527540:{c.instructions+=3;NFSU2_TR(0x527540);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B527541:{NFSU2_TR(0x527541);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B527544:{NFSU2_TR(0x527544);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L527548;}}
}
B527546:L527546:{c.instructions+=1;NFSU2_TR(0x527546);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B527548:L527548:{c.instructions+=2;NFSU2_TR(0x527548);
u8 U[14];
__builtin_memmove((U+6),gp(0x7f70d0),4);
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
B52754e:{NFSU2_TR(0x52754e);
if(r1(R+518)){{goto L5275a5;}}
}
B527550:L527550:{c.instructions+=4;NFSU2_TR(0x527550);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B527552:{NFSU2_TR(0x527552);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B527554:{NFSU2_TR(0x527554);
w4(R+4,u32(0x7f7020ull));
}
B527559:{NFSU2_TR(0x527559);
__builtin_memmove((R+16),(R+16),4);
}
B527560:L527560:{c.instructions+=2;NFSU2_TR(0x527560);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B527562:{NFSU2_TR(0x527562);
if(r1(R+518)){{goto L527572;}}
}
B527564:L527564:{c.instructions+=4;NFSU2_TR(0x527564);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B527567:{NFSU2_TR(0x527567);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B527568:{NFSU2_TR(0x527568);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7f70d0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7f70d0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52756e:{NFSU2_TR(0x52756e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527560u);}goto L527560;}}
}
B527570:L527570:{c.instructions+=1;NFSU2_TR(0x527570);
{goto L52758e;}
}
B527572:L527572:{c.instructions+=4;NFSU2_TR(0x527572);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B527575:{NFSU2_TR(0x527575);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7f7020ull))));
}
B52757a:{NFSU2_TR(0x52757a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52757c:{NFSU2_TR(0x52757c);
if(r1(R+518)){{goto L52758e;}}
}
B52757e:L52757e:{c.instructions+=3;NFSU2_TR(0x52757e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527581:{NFSU2_TR(0x527581);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527582:{NFSU2_TR(0x527582);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527587ull));
TAIL_STATIC(0x57cac0u,57c);
}
B527587:L527587:{c.instructions+=3;NFSU2_TR(0x527587);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52758a:{NFSU2_TR(0x52758a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52758c:{NFSU2_TR(0x52758c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527590;}}
}
B52758e:L52758e:{c.instructions+=1;NFSU2_TR(0x52758e);
w1(R+12,u8(0x1ull));
}
B527590:L527590:{c.instructions+=2;NFSU2_TR(0x527590);
u8 U[8];
__builtin_memmove((U+0),gp(0x7f70d4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B527596:{NFSU2_TR(0x527596);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527540u);}goto L527540;}}
}
B527598:L527598:{c.instructions+=2;NFSU2_TR(0x527598);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52759a:{NFSU2_TR(0x52759a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527540u);}goto L527540;}}
}
B52759c:L52759c:{c.instructions+=2;NFSU2_TR(0x52759c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52759d:{NFSU2_TR(0x52759d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5275a2ull));
TAIL_STATIC(0x512360u,512);
}
B5275a2:L5275a2:{c.instructions+=1;NFSU2_TR(0x5275a2);
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
B5275a5:L5275a5:{c.instructions+=2;NFSU2_TR(0x5275a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5275a6:{NFSU2_TR(0x5275a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5275a7:L5275a7:{c.instructions+=1;NFSU2_TR(0x5275a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5275b0:L5275b0:{c.instructions+=21;NFSU2_TR(0x5275b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5275b4:{NFSU2_TR(0x5275b4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5275b8:{NFSU2_TR(0x5275b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5275b9:{NFSU2_TR(0x5275b9);
__builtin_memmove((R+24),(R+4),4);
}
B5275bb:{NFSU2_TR(0x5275bb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5275bf:{NFSU2_TR(0x5275bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5275c2:{NFSU2_TR(0x5275c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5275c6:{NFSU2_TR(0x5275c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5275c9:{NFSU2_TR(0x5275c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5275cd:{NFSU2_TR(0x5275cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5275d0:{NFSU2_TR(0x5275d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5275d3:{NFSU2_TR(0x5275d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5275d7:{NFSU2_TR(0x5275d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5275da:{NFSU2_TR(0x5275da);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5275de:{NFSU2_TR(0x5275de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5275df:{NFSU2_TR(0x5275df);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5275e3:{NFSU2_TR(0x5275e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5275e6:{NFSU2_TR(0x5275e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5275e9:{NFSU2_TR(0x5275e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5275ea:{NFSU2_TR(0x5275ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5275eb:{NFSU2_TR(0x5275eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5275f0ull));
TAIL_STATIC(0x51d730u,51d);
}
B5275f0:L5275f0:{c.instructions+=7;NFSU2_TR(0x5275f0);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5275f6:{NFSU2_TR(0x5275f6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5275f8:{NFSU2_TR(0x5275f8);
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
B5275fb:{NFSU2_TR(0x5275fb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5275ff:{NFSU2_TR(0x5275ff);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B527605:{NFSU2_TR(0x527605);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527606:{NFSU2_TR(0x527606);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527610:L527610:{c.instructions+=6;NFSU2_TR(0x527610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527611:{NFSU2_TR(0x527611);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527612:{NFSU2_TR(0x527612);
__builtin_memmove((R+28),(R+4),4);
}
B527614:{NFSU2_TR(0x527614);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B527617:{NFSU2_TR(0x527617);
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
B527619:{NFSU2_TR(0x527619);
if(r1(R+518)){{goto L527653;}}
}
B52761b:L52761b:{c.instructions+=2;NFSU2_TR(0x52761b);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527620:{NFSU2_TR(0x527620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527625ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B527625:L527625:{c.instructions+=3;NFSU2_TR(0x527625);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B527628:{NFSU2_TR(0x527628);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52762a:{NFSU2_TR(0x52762a);
if(r1(R+518)){{goto L527640;}}
}
B52762c:L52762c:{c.instructions+=3;NFSU2_TR(0x52762c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52762f:{NFSU2_TR(0x52762f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527631:{NFSU2_TR(0x527631);
if(r1(R+518)){{goto L527640;}}
}
B527633:L527633:{c.instructions+=2;NFSU2_TR(0x527633);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B527636:{NFSU2_TR(0x527636);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527640;}}
}
B527638:L527638:{c.instructions+=3;NFSU2_TR(0x527638);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52763b:{NFSU2_TR(0x52763b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B52763e:{NFSU2_TR(0x52763e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L527653;}}
}
B527640:L527640:{c.instructions+=5;NFSU2_TR(0x527640);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B527643:{NFSU2_TR(0x527643);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527645:{NFSU2_TR(0x527645);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52764a:{NFSU2_TR(0x52764a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52764b:{NFSU2_TR(0x52764b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527650ull));
TAIL_STATIC(0x51cf70u,51c);
}
B527650:L527650:{c.instructions+=1;NFSU2_TR(0x527650);
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
B527653:L527653:{c.instructions+=3;NFSU2_TR(0x527653);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B527654:{NFSU2_TR(0x527654);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527655:{NFSU2_TR(0x527655);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527660:L527660:{c.instructions+=6;NFSU2_TR(0x527660);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527661:{NFSU2_TR(0x527661);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527662:{NFSU2_TR(0x527662);
__builtin_memmove((R+28),(R+4),4);
}
B527664:{NFSU2_TR(0x527664);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B527667:{NFSU2_TR(0x527667);
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
B527669:{NFSU2_TR(0x527669);
if(r1(R+518)){{goto L5276a3;}}
}
B52766b:L52766b:{c.instructions+=2;NFSU2_TR(0x52766b);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527670:{NFSU2_TR(0x527670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527675ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B527675:L527675:{c.instructions+=3;NFSU2_TR(0x527675);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B527678:{NFSU2_TR(0x527678);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52767a:{NFSU2_TR(0x52767a);
if(r1(R+518)){{goto L527690;}}
}
B52767c:L52767c:{c.instructions+=3;NFSU2_TR(0x52767c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52767f:{NFSU2_TR(0x52767f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527681:{NFSU2_TR(0x527681);
if(r1(R+518)){{goto L527690;}}
}
B527683:L527683:{c.instructions+=2;NFSU2_TR(0x527683);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B527686:{NFSU2_TR(0x527686);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527690;}}
}
B527688:L527688:{c.instructions+=3;NFSU2_TR(0x527688);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52768b:{NFSU2_TR(0x52768b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B52768e:{NFSU2_TR(0x52768e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5276a3;}}
}
B527690:L527690:{c.instructions+=5;NFSU2_TR(0x527690);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B527693:{NFSU2_TR(0x527693);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527695:{NFSU2_TR(0x527695);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52769a:{NFSU2_TR(0x52769a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52769b:{NFSU2_TR(0x52769b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5276a0ull));
TAIL_STATIC(0x51cf70u,51c);
}
B5276a0:L5276a0:{c.instructions+=1;NFSU2_TR(0x5276a0);
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
B5276a3:L5276a3:{c.instructions+=3;NFSU2_TR(0x5276a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5276a4:{NFSU2_TR(0x5276a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5276a5:{NFSU2_TR(0x5276a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5276b0:L5276b0:{c.instructions+=5;NFSU2_TR(0x5276b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5276b1:{NFSU2_TR(0x5276b1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5276b3:{NFSU2_TR(0x5276b3);
u8 U[4];
w4(U+0,u32(0x79b8c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5276b8:{NFSU2_TR(0x5276b8);
__builtin_memmove((R+24),(R+4),4);
}
B5276ba:{NFSU2_TR(0x5276ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5276bfull));
TAIL_STATIC(0x51ee80u,51e);
}
B5276bf:L5276bf:{c.instructions+=3;NFSU2_TR(0x5276bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5276c3:{NFSU2_TR(0x5276c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5276c4:{NFSU2_TR(0x5276c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5276d0:L5276d0:{c.instructions+=3;NFSU2_TR(0x5276d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5276d3:{NFSU2_TR(0x5276d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5276d5:{NFSU2_TR(0x5276d5);
if(r1(R+518)){{goto L5276e9;}}
}
B5276d7:L5276d7:{c.instructions+=9;NFSU2_TR(0x5276d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5276d8:{NFSU2_TR(0x5276d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5276db:{NFSU2_TR(0x5276db);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5276de:{NFSU2_TR(0x5276de);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5276e0:{NFSU2_TR(0x5276e0);
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
B5276e2:{NFSU2_TR(0x5276e2);
__builtin_memmove((R+8),(R+518),1);
}
B5276e5:{NFSU2_TR(0x5276e5);
__builtin_memmove((R+0),(R+8),1);
}
B5276e7:{NFSU2_TR(0x5276e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5276e8:{NFSU2_TR(0x5276e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5276e9:L5276e9:{c.instructions+=9;NFSU2_TR(0x5276e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5276ea:{NFSU2_TR(0x5276ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5276ed:{NFSU2_TR(0x5276ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5276ef:{NFSU2_TR(0x5276ef);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5276f1:{NFSU2_TR(0x5276f1);
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
B5276f3:{NFSU2_TR(0x5276f3);
__builtin_memmove((R+8),(R+518),1);
}
B5276f6:{NFSU2_TR(0x5276f6);
__builtin_memmove((R+0),(R+8),1);
}
B5276f8:{NFSU2_TR(0x5276f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5276f9:{NFSU2_TR(0x5276f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527700:L527700:{c.instructions+=3;NFSU2_TR(0x527700);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527703:{NFSU2_TR(0x527703);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527705:{NFSU2_TR(0x527705);
if(r1(R+518)){{goto L527719;}}
}
B527707:L527707:{c.instructions+=9;NFSU2_TR(0x527707);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527708:{NFSU2_TR(0x527708);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52770b:{NFSU2_TR(0x52770b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B52770e:{NFSU2_TR(0x52770e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B527710:{NFSU2_TR(0x527710);
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
B527712:{NFSU2_TR(0x527712);
__builtin_memmove((R+8),(R+518),1);
}
B527715:{NFSU2_TR(0x527715);
__builtin_memmove((R+0),(R+8),1);
}
B527717:{NFSU2_TR(0x527717);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527718:{NFSU2_TR(0x527718);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527719:L527719:{c.instructions+=9;NFSU2_TR(0x527719);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52771a:{NFSU2_TR(0x52771a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52771d:{NFSU2_TR(0x52771d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52771f:{NFSU2_TR(0x52771f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B527721:{NFSU2_TR(0x527721);
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
B527723:{NFSU2_TR(0x527723);
__builtin_memmove((R+8),(R+518),1);
}
B527726:{NFSU2_TR(0x527726);
__builtin_memmove((R+0),(R+8),1);
}
B527728:{NFSU2_TR(0x527728);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527729:{NFSU2_TR(0x527729);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527730:L527730:{c.instructions+=4;NFSU2_TR(0x527730);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B527733:{NFSU2_TR(0x527733);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527735:{NFSU2_TR(0x527735);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527737:{NFSU2_TR(0x527737);
if(r1(R+518)){{goto L52773f;}}
}
B527739:L527739:{c.instructions+=1;NFSU2_TR(0x527739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52773eull));
TAIL_STATIC(0x51fac0u,51f);
}
B52773e:L52773e:{c.instructions+=1;NFSU2_TR(0x52773e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52773f:L52773f:{c.instructions+=1;NFSU2_TR(0x52773f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527744ull));
TAIL_STATIC(0x51f9f0u,51f);
}
B527744:L527744:{c.instructions+=1;NFSU2_TR(0x527744);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527750:L527750:{c.instructions+=4;NFSU2_TR(0x527750);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B527753:{NFSU2_TR(0x527753);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527755:{NFSU2_TR(0x527755);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527757:{NFSU2_TR(0x527757);
if(r1(R+518)){{goto L52775f;}}
}
B527759:L527759:{c.instructions+=1;NFSU2_TR(0x527759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52775eull));
TAIL_STATIC(0x51fac0u,51f);
}
B52775e:L52775e:{c.instructions+=1;NFSU2_TR(0x52775e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52775f:L52775f:{c.instructions+=1;NFSU2_TR(0x52775f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527764ull));
TAIL_STATIC(0x51f9f0u,51f);
}
B527764:L527764:{c.instructions+=1;NFSU2_TR(0x527764);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527770:L527770:{c.instructions+=2;NFSU2_TR(0x527770);
u8 U[4];
w4(U+0,u32(0x79afdcull));
s4(u32(r4(R+4)),r4(U+0));
}
B527776:{NFSU2_TR(0x527776);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527780:L527780:{c.instructions+=13;NFSU2_TR(0x527780);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527781:{NFSU2_TR(0x527781);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527785:{NFSU2_TR(0x527785);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527786:{NFSU2_TR(0x527786);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527787:{NFSU2_TR(0x527787);
__builtin_memmove((R+20),gp(0x8383e4),4);
}
B52778d:{NFSU2_TR(0x52778d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527791:{NFSU2_TR(0x527791);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B527794:{NFSU2_TR(0x527794);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527795:{NFSU2_TR(0x527795);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B527797:{NFSU2_TR(0x527797);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527799:{NFSU2_TR(0x527799);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52779a:{NFSU2_TR(0x52779a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52779e:{NFSU2_TR(0x52779e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5277f2;}}
}
B5277a0:L5277a0:{c.instructions+=1;NFSU2_TR(0x5277a0);
__builtin_memmove((R+4),gp(0x8383e0),4);
}
B5277a6:L5277a6:{c.instructions+=2;NFSU2_TR(0x5277a6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5277a8:{NFSU2_TR(0x5277a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5277b2;}}
}
B5277aa:L5277aa:{c.instructions+=2;NFSU2_TR(0x5277aa);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5277ac:{NFSU2_TR(0x5277ac);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5277b2;}}
}
B5277ae:L5277ae:{c.instructions+=2;NFSU2_TR(0x5277ae);
__builtin_memmove((R+0),(R+4),4);
}
B5277b0:{NFSU2_TR(0x5277b0);
{goto L5277b4;}
}
B5277b2:L5277b2:{c.instructions+=1;NFSU2_TR(0x5277b2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5277b4:L5277b4:{c.instructions+=3;NFSU2_TR(0x5277b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5277b8:{NFSU2_TR(0x5277b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5277bb:{NFSU2_TR(0x5277bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5277e7;}}
}
B5277bd:L5277bd:{c.instructions+=4;NFSU2_TR(0x5277bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5277c1:{NFSU2_TR(0x5277c1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5277c3:{NFSU2_TR(0x5277c3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x71c8ull))));
}
B5277c9:{NFSU2_TR(0x5277c9);
__builtin_memmove((R+16),(R+16),4);
}
B5277d0:L5277d0:{c.instructions+=3;NFSU2_TR(0x5277d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5277d2:{NFSU2_TR(0x5277d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5277d4:{NFSU2_TR(0x5277d4);
if(r1(R+518)){{goto L5277de;}}
}
B5277d6:L5277d6:{c.instructions+=3;NFSU2_TR(0x5277d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5277d9:{NFSU2_TR(0x5277d9);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5277dc:{NFSU2_TR(0x5277dc);
if(r1(R+518)){{goto L5277f4;}}
}
B5277de:L5277de:{c.instructions+=4;NFSU2_TR(0x5277de);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5277df:{NFSU2_TR(0x5277df);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5277e2:{NFSU2_TR(0x5277e2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5277e5:{NFSU2_TR(0x5277e5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5277d0u);}goto L5277d0;}}
}
B5277e7:L5277e7:{c.instructions+=4;NFSU2_TR(0x5277e7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5277e8:{NFSU2_TR(0x5277e8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x88ull))));
}
B5277ee:{NFSU2_TR(0x5277ee);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5277f0:{NFSU2_TR(0x5277f0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5277a6u);}goto L5277a6;}}
}
B5277f2:L5277f2:{c.instructions+=1;NFSU2_TR(0x5277f2);
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
B5277f4:L5277f4:{c.instructions+=6;NFSU2_TR(0x5277f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5277f5:{NFSU2_TR(0x5277f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5277f6:{NFSU2_TR(0x5277f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5277f7:{NFSU2_TR(0x5277f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5277f8:{NFSU2_TR(0x5277f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5277f9:{NFSU2_TR(0x5277f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527800:L527800:{c.instructions+=13;NFSU2_TR(0x527800);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527801:{NFSU2_TR(0x527801);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527802:{NFSU2_TR(0x527802);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B527806:{NFSU2_TR(0x527806);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527807:{NFSU2_TR(0x527807);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52780b:{NFSU2_TR(0x52780b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B52780d:{NFSU2_TR(0x52780d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52780e:{NFSU2_TR(0x52780e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B527810:{NFSU2_TR(0x527810);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527813:{NFSU2_TR(0x527813);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527816:{NFSU2_TR(0x527816);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527819:{NFSU2_TR(0x527819);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52781c:{NFSU2_TR(0x52781c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527821ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527780u);}goto L527780;}
}
B527821:L527821:{c.instructions+=2;NFSU2_TR(0x527821);
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
B527823:{NFSU2_TR(0x527823);
if(r1(R+518)){{goto L527830;}}
}
B527825:L527825:{c.instructions+=6;NFSU2_TR(0x527825);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B527827:{NFSU2_TR(0x527827);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B527828:{NFSU2_TR(0x527828);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52782b:{NFSU2_TR(0x52782b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52782c:{NFSU2_TR(0x52782c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52782d:{NFSU2_TR(0x52782d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527830:L527830:{c.instructions+=2;NFSU2_TR(0x527830);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B527832:{NFSU2_TR(0x527832);
if(r1(R+518)){{goto L52784f;}}
}
B527834:L527834:{c.instructions+=3;NFSU2_TR(0x527834);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527837:{NFSU2_TR(0x527837);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527838:{NFSU2_TR(0x527838);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52783dull));
TAIL_STATIC(0x4ffe60u,4ff);
}
B52783d:L52783d:{c.instructions+=3;NFSU2_TR(0x52783d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B527840:{NFSU2_TR(0x527840);
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
B527842:{NFSU2_TR(0x527842);
if(r1(R+518)){{goto L52784f;}}
}
B527844:L527844:{c.instructions+=6;NFSU2_TR(0x527844);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B527846:{NFSU2_TR(0x527846);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B527847:{NFSU2_TR(0x527847);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52784a:{NFSU2_TR(0x52784a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52784b:{NFSU2_TR(0x52784b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52784c:{NFSU2_TR(0x52784c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52784f:L52784f:{c.instructions+=2;NFSU2_TR(0x52784f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527850:{NFSU2_TR(0x527850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527855ull));
TAIL_STATIC(0x4fffc0u,4ff);
}
B527855:L527855:{c.instructions+=3;NFSU2_TR(0x527855);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B527858:{NFSU2_TR(0x527858);
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
B52785a:{NFSU2_TR(0x52785a);
if(r1(R+518)){{goto L527867;}}
}
B52785c:L52785c:{c.instructions+=6;NFSU2_TR(0x52785c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B52785e:{NFSU2_TR(0x52785e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52785f:{NFSU2_TR(0x52785f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527862:{NFSU2_TR(0x527862);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527863:{NFSU2_TR(0x527863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B527864:{NFSU2_TR(0x527864);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527867:L527867:{c.instructions+=2;NFSU2_TR(0x527867);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B527869:{NFSU2_TR(0x527869);
if(r1(R+518)){{goto L527880;}}
}
B52786b:L52786b:{c.instructions+=3;NFSU2_TR(0x52786b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52786e:{NFSU2_TR(0x52786e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52786f:{NFSU2_TR(0x52786f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527874ull));
TAIL_STATIC(0x512a10u,512);
}
B527874:L527874:{c.instructions+=3;NFSU2_TR(0x527874);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B527877:{NFSU2_TR(0x527877);
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
B527879:{NFSU2_TR(0x527879);
if(r1(R+518)){{goto L527880;}}
}
B52787b:L52787b:{c.instructions+=2;NFSU2_TR(0x52787b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52787e:{NFSU2_TR(0x52787e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B527880:L527880:{c.instructions+=4;NFSU2_TR(0x527880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B527881:{NFSU2_TR(0x527881);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527882:{NFSU2_TR(0x527882);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B527883:{NFSU2_TR(0x527883);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527890:L527890:{c.instructions+=5;NFSU2_TR(0x527890);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527891:{NFSU2_TR(0x527891);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527893:{NFSU2_TR(0x527893);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527895:{NFSU2_TR(0x527895);
w4(R+4,u32(0x83ad90ull));
}
B52789a:{NFSU2_TR(0x52789a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52789full));
TAIL_STATIC(0x5162d0u,516);
}
B52789f:L52789f:{c.instructions+=3;NFSU2_TR(0x52789f);
__builtin_memmove((R+24),(R+0),4);
}
B5278a1:{NFSU2_TR(0x5278a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5278a3:{NFSU2_TR(0x5278a3);
if(r1(R+518)){{goto L5278e6;}}
}
B5278a5:L5278a5:{c.instructions+=3;NFSU2_TR(0x5278a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7f5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5278ab:{NFSU2_TR(0x5278ab);
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
B5278ad:{NFSU2_TR(0x5278ad);
if(r1(R+518)){{goto L5278d3;}}
}
B5278af:L5278af:{c.instructions+=3;NFSU2_TR(0x5278af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5278b1:{NFSU2_TR(0x5278b1);
__builtin_memmove((R+4),(R+24),4);
}
B5278b3:{NFSU2_TR(0x5278b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5278b6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5278b6:L5278b6:{c.instructions+=3;NFSU2_TR(0x5278b6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5278bc:{NFSU2_TR(0x5278bc);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8a1ccc))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5278c2:{NFSU2_TR(0x5278c2);
if(r1(R+518)){{goto L5278d3;}}
}
B5278c4:L5278c4:{c.instructions+=5;NFSU2_TR(0x5278c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5278ca:{NFSU2_TR(0x5278ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5278cc:{NFSU2_TR(0x5278cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5278cf:{NFSU2_TR(0x5278cf);
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
B5278d1:{NFSU2_TR(0x5278d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5278ea;}}
}
B5278d3:L5278d3:{c.instructions+=4;NFSU2_TR(0x5278d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5278d4:{NFSU2_TR(0x5278d4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5278d6:{NFSU2_TR(0x5278d6);
w4(R+4,u32(0x83ad90ull));
}
B5278db:{NFSU2_TR(0x5278db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5278e0ull));
TAIL_STATIC(0x5162d0u,516);
}
B5278e0:L5278e0:{c.instructions+=3;NFSU2_TR(0x5278e0);
__builtin_memmove((R+24),(R+0),4);
}
B5278e2:{NFSU2_TR(0x5278e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5278e4:{NFSU2_TR(0x5278e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5278a5u);}goto L5278a5;}}
}
B5278e6:L5278e6:{c.instructions+=3;NFSU2_TR(0x5278e6);
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
B5278e8:{NFSU2_TR(0x5278e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5278e9:{NFSU2_TR(0x5278e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5278ea:L5278ea:{c.instructions+=3;NFSU2_TR(0x5278ea);
w1(R+0,u8(0x1ull));
}
B5278ec:{NFSU2_TR(0x5278ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5278ed:{NFSU2_TR(0x5278ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5278f0:L5278f0:{c.instructions+=5;NFSU2_TR(0x5278f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5278f1:{NFSU2_TR(0x5278f1);
__builtin_memmove((R+24),(R+4),4);
}
B5278f3:{NFSU2_TR(0x5278f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5278f9:{NFSU2_TR(0x5278f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5278fb:{NFSU2_TR(0x5278fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527963;}}
}
B5278fd:L5278fd:{c.instructions+=3;NFSU2_TR(0x5278fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8724ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527903:{NFSU2_TR(0x527903);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527905:{NFSU2_TR(0x527905);
if(r1(R+518)){{goto L527911;}}
}
B527907:L527907:{c.instructions+=2;NFSU2_TR(0x527907);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527908:{NFSU2_TR(0x527908);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52790dull));
TAIL_STATIC(0x513110u,513);
}
B52790d:L52790d:{c.instructions+=2;NFSU2_TR(0x52790d);
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
B52790f:{NFSU2_TR(0x52790f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52795f;}}
}
B527911:L527911:{c.instructions+=3;NFSU2_TR(0x527911);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x871cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527917:{NFSU2_TR(0x527917);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527919:{NFSU2_TR(0x527919);
if(r1(R+518)){{goto L52792b;}}
}
B52791b:L52791b:{c.instructions+=3;NFSU2_TR(0x52791b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52791c:{NFSU2_TR(0x52791c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7148ull))));
__builtin_memmove((R+4),(U+0),4);
}
B527922:{NFSU2_TR(0x527922);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527927ull));
TAIL_STATIC(0x5007e0u,500);
}
B527927:L527927:{c.instructions+=2;NFSU2_TR(0x527927);
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
B527929:{NFSU2_TR(0x527929);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52795f;}}
}
B52792b:L52792b:{c.instructions+=3;NFSU2_TR(0x52792b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8728ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527931:{NFSU2_TR(0x527931);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527933:{NFSU2_TR(0x527933);
if(r1(R+518)){{goto L527945;}}
}
B527935:L527935:{c.instructions+=3;NFSU2_TR(0x527935);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527936:{NFSU2_TR(0x527936);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52793c:{NFSU2_TR(0x52793c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527941ull));
TAIL_STATIC(0x501150u,501);
}
B527941:L527941:{c.instructions+=2;NFSU2_TR(0x527941);
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
B527943:{NFSU2_TR(0x527943);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52795f;}}
}
B527945:L527945:{c.instructions+=3;NFSU2_TR(0x527945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8720ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52794b:{NFSU2_TR(0x52794b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52794d:{NFSU2_TR(0x52794d);
if(r1(R+518)){{goto L527963;}}
}
B52794f:L52794f:{c.instructions+=3;NFSU2_TR(0x52794f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527950:{NFSU2_TR(0x527950);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7148ull))));
__builtin_memmove((R+4),(U+0),4);
}
B527956:{NFSU2_TR(0x527956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52795bull));
TAIL_STATIC(0x5135a0u,513);
}
B52795b:L52795b:{c.instructions+=2;NFSU2_TR(0x52795b);
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
B52795d:{NFSU2_TR(0x52795d);
if(r1(R+518)){{goto L527963;}}
}
B52795f:L52795f:{c.instructions+=3;NFSU2_TR(0x52795f);
w1(R+0,u8(0x1ull));
}
B527961:{NFSU2_TR(0x527961);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527962:{NFSU2_TR(0x527962);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527963:L527963:{c.instructions+=3;NFSU2_TR(0x527963);
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
B527965:{NFSU2_TR(0x527965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527966:{NFSU2_TR(0x527966);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527970:L527970:{c.instructions+=12;NFSU2_TR(0x527970);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527971:{NFSU2_TR(0x527971);
__builtin_memmove((R+20),(R+16),4);
}
B527973:{NFSU2_TR(0x527973);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527974:{NFSU2_TR(0x527974);
__builtin_memmove((R+12),gp(0x838428),4);
}
B52797a:{NFSU2_TR(0x52797a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52797b:{NFSU2_TR(0x52797b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52797e:{NFSU2_TR(0x52797e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B527981:{NFSU2_TR(0x527981);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527982:{NFSU2_TR(0x527982);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B527984:{NFSU2_TR(0x527984);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527985:{NFSU2_TR(0x527985);
__builtin_memmove((R+28),(R+4),4);
}
B527987:{NFSU2_TR(0x527987);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52798cull));
TAIL_STATIC(0x43db50u,43d);
}
B52798c:L52798c:{c.instructions+=5;NFSU2_TR(0x52798c);
__builtin_memmove((R+8),gp(0x86283c),4);
}
B527992:{NFSU2_TR(0x527992);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B527995:{NFSU2_TR(0x527995);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B527997:{NFSU2_TR(0x527997);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527999:{NFSU2_TR(0x527999);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5279c5;}}
}
B52799b:L52799b:{c.instructions+=1;NFSU2_TR(0x52799b);
{goto L5279a0;}
}
B5279a0:L5279a0:{c.instructions+=2;NFSU2_TR(0x5279a0);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B5279a7:{NFSU2_TR(0x5279a7);
if(r1(R+518)){{goto L5279b0;}}
}
B5279a9:L5279a9:{c.instructions+=3;NFSU2_TR(0x5279a9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5279aa:{NFSU2_TR(0x5279aa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5279ac:{NFSU2_TR(0x5279ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5279a0u);}goto L5279a0;}}
}
B5279ae:L5279ae:{c.instructions+=1;NFSU2_TR(0x5279ae);
{goto L5279c5;}
}
B5279b0:L5279b0:{c.instructions+=3;NFSU2_TR(0x5279b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5279b7:{NFSU2_TR(0x5279b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5279b9:{NFSU2_TR(0x5279b9);
if(r1(R+518)){{goto L5279c5;}}
}
B5279bb:L5279bb:{c.instructions+=2;NFSU2_TR(0x5279bb);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5279bf:{NFSU2_TR(0x5279bf);
if(r1(R+518)){{goto L527a86;}}
}
B5279c5:L5279c5:{c.instructions+=4;NFSU2_TR(0x5279c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5279c9:{NFSU2_TR(0x5279c9);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5279cb:{NFSU2_TR(0x5279cb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5279ce:{NFSU2_TR(0x5279ce);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L527a12;}}
}
B5279d0:L5279d0:{c.instructions+=1;NFSU2_TR(0x5279d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x527a90ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5279d7:L5279d7:{c.instructions+=2;NFSU2_TR(0x5279d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5279da:{NFSU2_TR(0x5279da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5279dfull));
TAIL_STATIC(0x5004d0u,500);
}
B5279df:L5279df:{c.instructions+=3;NFSU2_TR(0x5279df);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5279e3:{NFSU2_TR(0x5279e3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5279e5:{NFSU2_TR(0x5279e5);
{goto L527a0e;}
}
B5279e7:L5279e7:{c.instructions+=2;NFSU2_TR(0x5279e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5279ea:{NFSU2_TR(0x5279ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5279efull));
TAIL_STATIC(0x500520u,500);
}
B5279ef:L5279ef:{c.instructions+=1;NFSU2_TR(0x5279ef);
{goto L527a08;}
}
B5279f1:L5279f1:{c.instructions+=4;NFSU2_TR(0x5279f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5279f5:{NFSU2_TR(0x5279f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5279f8:{NFSU2_TR(0x5279f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5279fe:{NFSU2_TR(0x5279fe);
{goto L527a0e;}
}
B527a00:L527a00:{c.instructions+=2;NFSU2_TR(0x527a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B527a03:{NFSU2_TR(0x527a03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527a08ull));
TAIL_STATIC(0x5005a0u,500);
}
B527a08:L527a08:{c.instructions+=2;NFSU2_TR(0x527a08);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B527a0c:{NFSU2_TR(0x527a0c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B527a0e:L527a0e:{c.instructions+=1;NFSU2_TR(0x527a0e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L527a12;}}
}
B527a10:L527a10:{c.instructions+=1;NFSU2_TR(0x527a10);
w1(R+12,u8(0x1ull));
}
B527a12:L527a12:{c.instructions+=3;NFSU2_TR(0x527a12);
__builtin_memmove((R+0),gp(0x86347d),1);
}
B527a17:{NFSU2_TR(0x527a17);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527a19:{NFSU2_TR(0x527a19);
if(r1(R+518)){{goto L527a68;}}
}
B527a1b:L527a1b:{c.instructions+=4;NFSU2_TR(0x527a1b);
__builtin_memmove((R+0),gp(0x863480),4);
}
B527a20:{NFSU2_TR(0x527a20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527a21:{NFSU2_TR(0x527a21);
w4(R+4,u32(0x83ad90ull));
}
B527a26:{NFSU2_TR(0x527a26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527a2bull));
TAIL_STATIC(0x503680u,503);
}
B527a2b:L527a2b:{c.instructions+=3;NFSU2_TR(0x527a2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B527a2d:{NFSU2_TR(0x527a2d);
__builtin_memmove((R+4),(R+0),4);
}
B527a2f:{NFSU2_TR(0x527a2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527a32ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B527a32:L527a32:{c.instructions+=3;NFSU2_TR(0x527a32);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B527a38:{NFSU2_TR(0x527a38);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8a1ccc))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B527a3e:{NFSU2_TR(0x527a3e);
if(r1(R+518)){{goto L527a68;}}
}
B527a40:L527a40:{c.instructions+=5;NFSU2_TR(0x527a40);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B527a46:{NFSU2_TR(0x527a46);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527a48:{NFSU2_TR(0x527a48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B527a4b:{NFSU2_TR(0x527a4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527a4d:{NFSU2_TR(0x527a4d);
if(r1(R+518)){{goto L527a68;}}
}
B527a4f:L527a4f:{c.instructions+=4;NFSU2_TR(0x527a4f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B527a52:{NFSU2_TR(0x527a52);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x838428))));
}
B527a58:{NFSU2_TR(0x527a58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527a59:{NFSU2_TR(0x527a59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527a5eull));
TAIL_STATIC(0x43db50u,43d);
}
B527a5e:L527a5e:{c.instructions+=3;NFSU2_TR(0x527a5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B527a61:{NFSU2_TR(0x527a61);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xdd15316eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xdd15316eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xdd15316eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B527a66:{NFSU2_TR(0x527a66);
if(r1(R+518)){{goto L527a86;}}
}
B527a68:L527a68:{c.instructions+=2;NFSU2_TR(0x527a68);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B527a6a:{NFSU2_TR(0x527a6a);
if(r1(R+518)){{goto L527a86;}}
}
B527a6c:L527a6c:{c.instructions+=2;NFSU2_TR(0x527a6c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B527a6e:{NFSU2_TR(0x527a6e);
__builtin_memmove((R+28),(R+28),4);
}
B527a70:L527a70:{c.instructions+=2;NFSU2_TR(0x527a70);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0x0ull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B527a74:{NFSU2_TR(0x527a74);
if(r1(R+518)){{goto L527a83;}}
}
B527a76:L527a76:{c.instructions+=3;NFSU2_TR(0x527a76);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B527a77:{NFSU2_TR(0x527a77);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B527a7a:{NFSU2_TR(0x527a7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527a70u);}goto L527a70;}}
}
B527a7c:L527a7c:{c.instructions+=5;NFSU2_TR(0x527a7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B527a7d:{NFSU2_TR(0x527a7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527a7e:{NFSU2_TR(0x527a7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B527a7f:{NFSU2_TR(0x527a7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B527a80:{NFSU2_TR(0x527a80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527a83:L527a83:{c.instructions+=1;NFSU2_TR(0x527a83);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B527a86:L527a86:{c.instructions+=5;NFSU2_TR(0x527a86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B527a87:{NFSU2_TR(0x527a87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527a88:{NFSU2_TR(0x527a88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B527a89:{NFSU2_TR(0x527a89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B527a8a:{NFSU2_TR(0x527a8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527aa0:L527aa0:{c.instructions+=8;NFSU2_TR(0x527aa0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527aa1:{NFSU2_TR(0x527aa1);
__builtin_memmove((R+20),(R+16),4);
}
B527aa3:{NFSU2_TR(0x527aa3);
__builtin_memmove((R+0),gp(0x862838),4);
}
B527aa8:{NFSU2_TR(0x527aa8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B527aae:{NFSU2_TR(0x527aae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527aaf:{NFSU2_TR(0x527aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x862118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B527ab5:{NFSU2_TR(0x527ab5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527ab7:{NFSU2_TR(0x527ab7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527ac0;}}
}
B527ab9:L527ab9:{c.instructions+=4;NFSU2_TR(0x527ab9);
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
B527abb:{NFSU2_TR(0x527abb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527abc:{NFSU2_TR(0x527abc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B527abd:{NFSU2_TR(0x527abd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527ac0:L527ac0:{c.instructions+=3;NFSU2_TR(0x527ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527ac3:{NFSU2_TR(0x527ac3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B527ac6:{NFSU2_TR(0x527ac6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L527b74;}}
}
B527acc:L527acc:{c.instructions+=1;NFSU2_TR(0x527acc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x527b7cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B527ad3:L527ad3:{c.instructions+=4;NFSU2_TR(0x527ad3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B527ad7:{NFSU2_TR(0x527ad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527ad8:{NFSU2_TR(0x527ad8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B527ad9:{NFSU2_TR(0x527ad9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527adc:L527adc:{c.instructions+=4;NFSU2_TR(0x527adc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B527ae0:{NFSU2_TR(0x527ae0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527ae1:{NFSU2_TR(0x527ae1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B527ae2:{NFSU2_TR(0x527ae2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527ae5:L527ae5:{c.instructions+=4;NFSU2_TR(0x527ae5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B527ae9:{NFSU2_TR(0x527ae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527aea:{NFSU2_TR(0x527aea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B527aeb:{NFSU2_TR(0x527aeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527aee:L527aee:{c.instructions+=4;NFSU2_TR(0x527aee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B527af2:{NFSU2_TR(0x527af2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527af3:{NFSU2_TR(0x527af3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B527af4:{NFSU2_TR(0x527af4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527af7:L527af7:{c.instructions+=4;NFSU2_TR(0x527af7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x32ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B527afb:{NFSU2_TR(0x527afb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527afc:{NFSU2_TR(0x527afc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B527afd:{NFSU2_TR(0x527afd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527b00:L527b00:{c.instructions+=3;NFSU2_TR(0x527b00);
__builtin_memmove((R+0),gp(0x86347d),1);
}
B527b05:{NFSU2_TR(0x527b05);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527b07:{NFSU2_TR(0x527b07);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527ab9u);}goto L527ab9;}}
}
B527b09:L527b09:{c.instructions+=4;NFSU2_TR(0x527b09);
__builtin_memmove((R+4),gp(0x863480),4);
}
B527b0f:{NFSU2_TR(0x527b0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527b10:{NFSU2_TR(0x527b10);
w4(R+4,u32(0x83ad90ull));
}
B527b15:{NFSU2_TR(0x527b15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527b1aull));
TAIL_STATIC(0x503680u,503);
}
B527b1a:L527b1a:{c.instructions+=2;NFSU2_TR(0x527b1a);
__builtin_memmove((R+4),(R+0),4);
}
B527b1c:{NFSU2_TR(0x527b1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527b21ull));
TAIL_STATIC(0x5037f0u,503);
}
B527b21:L527b21:{c.instructions+=2;NFSU2_TR(0x527b21);
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
B527b23:{NFSU2_TR(0x527b23);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527ab9u);}goto L527ab9;}}
}
B527b25:L527b25:{c.instructions+=4;NFSU2_TR(0x527b25);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B527b29:{NFSU2_TR(0x527b29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527b2a:{NFSU2_TR(0x527b2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B527b2b:{NFSU2_TR(0x527b2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527b2e:L527b2e:{c.instructions+=3;NFSU2_TR(0x527b2e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527b30:{NFSU2_TR(0x527b30);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527b32:{NFSU2_TR(0x527b32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527b37ull));
TAIL_STATIC(0x5137c0u,513);
}
B527b37:L527b37:{c.instructions+=3;NFSU2_TR(0x527b37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527b38:{NFSU2_TR(0x527b38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B527b39:{NFSU2_TR(0x527b39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527b3c:L527b3c:{c.instructions+=3;NFSU2_TR(0x527b3c);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527b3e:{NFSU2_TR(0x527b3e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527b40:{NFSU2_TR(0x527b40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527b45ull));
TAIL_STATIC(0x5137c0u,513);
}
B527b45:L527b45:{c.instructions+=3;NFSU2_TR(0x527b45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527b46:{NFSU2_TR(0x527b46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B527b47:{NFSU2_TR(0x527b47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527b4a:L527b4a:{c.instructions+=3;NFSU2_TR(0x527b4a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527b4c:{NFSU2_TR(0x527b4c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527b4e:{NFSU2_TR(0x527b4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527b53ull));
TAIL_STATIC(0x5137c0u,513);
}
B527b53:L527b53:{c.instructions+=3;NFSU2_TR(0x527b53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527b54:{NFSU2_TR(0x527b54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B527b55:{NFSU2_TR(0x527b55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527b58:L527b58:{c.instructions+=3;NFSU2_TR(0x527b58);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527b5a:{NFSU2_TR(0x527b5a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527b5c:{NFSU2_TR(0x527b5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527b61ull));
TAIL_STATIC(0x5137c0u,513);
}
B527b61:L527b61:{c.instructions+=3;NFSU2_TR(0x527b61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527b62:{NFSU2_TR(0x527b62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B527b63:{NFSU2_TR(0x527b63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527b66:L527b66:{c.instructions+=3;NFSU2_TR(0x527b66);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527b68:{NFSU2_TR(0x527b68);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527b6a:{NFSU2_TR(0x527b6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527b6full));
TAIL_STATIC(0x5137c0u,513);
}
B527b6f:L527b6f:{c.instructions+=3;NFSU2_TR(0x527b6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527b70:{NFSU2_TR(0x527b70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B527b71:{NFSU2_TR(0x527b71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527b74:L527b74:{c.instructions+=4;NFSU2_TR(0x527b74);
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
B527b77:{NFSU2_TR(0x527b77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527b78:{NFSU2_TR(0x527b78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B527b79:{NFSU2_TR(0x527b79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527bb0:L527bb0:{c.instructions+=7;NFSU2_TR(0x527bb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527bb1:{NFSU2_TR(0x527bb1);
__builtin_memmove((R+20),(R+16),4);
}
B527bb3:{NFSU2_TR(0x527bb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x90ull))));
}
B527bb9:{NFSU2_TR(0x527bb9);
__builtin_memmove((R+0),gp(0x86347d),1);
}
B527bbe:{NFSU2_TR(0x527bbe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527bc0:{NFSU2_TR(0x527bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527bc3:{NFSU2_TR(0x527bc3);
if(r1(R+518)){{goto L527bfd;}}
}
B527bc5:L527bc5:{c.instructions+=4;NFSU2_TR(0x527bc5);
__builtin_memmove((R+0),gp(0x863480),4);
}
B527bca:{NFSU2_TR(0x527bca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527bcb:{NFSU2_TR(0x527bcb);
w4(R+4,u32(0x83ad90ull));
}
B527bd0:{NFSU2_TR(0x527bd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527bd5ull));
TAIL_STATIC(0x503680u,503);
}
B527bd5:L527bd5:{c.instructions+=3;NFSU2_TR(0x527bd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B527bd7:{NFSU2_TR(0x527bd7);
__builtin_memmove((R+4),(R+0),4);
}
B527bd9:{NFSU2_TR(0x527bd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527bdcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B527bdc:L527bdc:{c.instructions+=3;NFSU2_TR(0x527bdc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B527be2:{NFSU2_TR(0x527be2);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8a1ccc))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B527be8:{NFSU2_TR(0x527be8);
if(r1(R+518)){{goto L527bfd;}}
}
B527bea:L527bea:{c.instructions+=6;NFSU2_TR(0x527bea);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B527bf0:{NFSU2_TR(0x527bf0);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527bf2:{NFSU2_TR(0x527bf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B527bf5:{NFSU2_TR(0x527bf5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527bf7:{NFSU2_TR(0x527bf7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B527bfb:{NFSU2_TR(0x527bfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527c01;}}
}
B527bfd:L527bfd:{c.instructions+=1;NFSU2_TR(0x527bfd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B527c01:L527c01:{c.instructions+=6;NFSU2_TR(0x527c01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527c02:{NFSU2_TR(0x527c02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527c03:{NFSU2_TR(0x527c03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527c04:{NFSU2_TR(0x527c04);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B527c06:{NFSU2_TR(0x527c06);
w4(R+4,u32(0x20ull));
}
B527c0b:{NFSU2_TR(0x527c0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((R+28),(U+0),4);
}
B527c11:L527c11:{c.instructions+=1;NFSU2_TR(0x527c11);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L527c13;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527c11u);}goto L527c11;}
}
B527c13:L527c13:{c.instructions+=6;NFSU2_TR(0x527c13);
__builtin_memmove((R+0),gp(0x8383e4),4);
}
B527c18:{NFSU2_TR(0x527c18);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B527c1a:{NFSU2_TR(0x527c1a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B527c1c:{NFSU2_TR(0x527c1c);
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
B527c1e:{NFSU2_TR(0x527c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527c21:{NFSU2_TR(0x527c21);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L527d1c;}}
}
B527c27:L527c27:{c.instructions+=3;NFSU2_TR(0x527c27);
__builtin_memmove((R+0),gp(0x8383e0),4);
}
B527c2c:{NFSU2_TR(0x527c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527c2f:{NFSU2_TR(0x527c2f);
}
B527c30:L527c30:{c.instructions+=2;NFSU2_TR(0x527c30);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B527c32:{NFSU2_TR(0x527c32);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L527c41;}}
}
B527c34:L527c34:{c.instructions+=2;NFSU2_TR(0x527c34);
u8 U[8];
__builtin_memmove((U+0),gp(0x8383e4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B527c3a:{NFSU2_TR(0x527c3a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L527c41;}}
}
B527c3c:L527c3c:{c.instructions+=2;NFSU2_TR(0x527c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B527c3f:{NFSU2_TR(0x527c3f);
{goto L527c43;}
}
B527c41:L527c41:{c.instructions+=1;NFSU2_TR(0x527c41);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B527c43:L527c43:{c.instructions+=4;NFSU2_TR(0x527c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527c46:{NFSU2_TR(0x527c46);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B527c48:{NFSU2_TR(0x527c48);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B527c4d:{NFSU2_TR(0x527c4d);
__builtin_memmove((R+4),(R+4),4);
}
B527c50:L527c50:{c.instructions+=3;NFSU2_TR(0x527c50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B527c52:{NFSU2_TR(0x527c52);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527c54:{NFSU2_TR(0x527c54);
if(r1(R+518)){{goto L527c5e;}}
}
B527c56:L527c56:{c.instructions+=3;NFSU2_TR(0x527c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B527c59:{NFSU2_TR(0x527c59);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B527c5c:{NFSU2_TR(0x527c5c);
if(r1(R+518)){{goto L527cc3;}}
}
B527c5e:L527c5e:{c.instructions+=4;NFSU2_TR(0x527c5e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B527c5f:{NFSU2_TR(0x527c5f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B527c62:{NFSU2_TR(0x527c62);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B527c65:{NFSU2_TR(0x527c65);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527c50u);}goto L527c50;}}
}
B527c67:L527c67:{c.instructions+=3;NFSU2_TR(0x527c67);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B527c6b:{NFSU2_TR(0x527c6b);
u8 U[8];
__builtin_memmove((U+0),gp(0x862838),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B527c71:{NFSU2_TR(0x527c71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527cc3;}}
}
B527c73:L527c73:{c.instructions+=2;NFSU2_TR(0x527c73);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B527c77:{NFSU2_TR(0x527c77);
if(r1(R+518)){{goto L527cc3;}}
}
B527c79:L527c79:{c.instructions+=3;NFSU2_TR(0x527c79);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B527c7c:{NFSU2_TR(0x527c7c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527c7e:{NFSU2_TR(0x527c7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527cc3;}}
}
B527c80:L527c80:{c.instructions+=4;NFSU2_TR(0x527c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B527c83:{NFSU2_TR(0x527c83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527c84:{NFSU2_TR(0x527c84);
w4(R+4,u32(0x85ad40ull));
}
B527c89:{NFSU2_TR(0x527c89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527c8eull));
TAIL_STATIC(0x500b80u,500);
}
B527c8e:L527c8e:{c.instructions+=2;NFSU2_TR(0x527c8e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527c90:{NFSU2_TR(0x527c90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527cc0;}}
}
B527c92:L527c92:{c.instructions+=2;NFSU2_TR(0x527c92);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4cce3e1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B527c98:{NFSU2_TR(0x527c98);
if(r1(R+518)){{goto L527cc0;}}
}
B527c9a:L527c9a:{c.instructions+=5;NFSU2_TR(0x527c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527c9d:{NFSU2_TR(0x527c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B527ca0:{NFSU2_TR(0x527ca0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527ca1:{NFSU2_TR(0x527ca1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527ca2:{NFSU2_TR(0x527ca2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527ca7ull));
TAIL_STATIC(0x513600u,513);
}
B527ca7:L527ca7:{c.instructions+=2;NFSU2_TR(0x527ca7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527ca9:{NFSU2_TR(0x527ca9);
if(r1(R+518)){{goto L527cc0;}}
}
B527cab:L527cab:{c.instructions+=2;NFSU2_TR(0x527cab);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B527caf:{NFSU2_TR(0x527caf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527cb8;}}
}
B527cb1:L527cb1:{c.instructions+=3;NFSU2_TR(0x527cb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B527cb4:{NFSU2_TR(0x527cb4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527cb6:{NFSU2_TR(0x527cb6);
if(r1(R+518)){{goto L527cc0;}}
}
B527cb8:L527cb8:{c.instructions+=2;NFSU2_TR(0x527cb8);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff70ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B527cbf:{NFSU2_TR(0x527cbf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B527cc0:L527cc0:{c.instructions+=1;NFSU2_TR(0x527cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B527cc3:L527cc3:{c.instructions+=8;NFSU2_TR(0x527cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B527cc6:{NFSU2_TR(0x527cc6);
__builtin_memmove((R+0),gp(0x8383e4),4);
}
B527ccb:{NFSU2_TR(0x527ccb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B527ccc:{NFSU2_TR(0x527ccc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x88ull))));
}
B527cd2:{NFSU2_TR(0x527cd2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B527cd4:{NFSU2_TR(0x527cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527cd7:{NFSU2_TR(0x527cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527cda:{NFSU2_TR(0x527cda);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527c30u);}goto L527c30;}}
}
B527ce0:L527ce0:{c.instructions+=2;NFSU2_TR(0x527ce0);
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
B527ce2:{NFSU2_TR(0x527ce2);
if(r1(R+518)){{goto L527d1c;}}
}
B527ce4:L527ce4:{c.instructions+=3;NFSU2_TR(0x527ce4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B527ce6:{NFSU2_TR(0x527ce6);
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
B527ce8:{NFSU2_TR(0x527ce8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L527d1c;}}
}
B527cea:L527cea:{c.instructions+=1;NFSU2_TR(0x527cea);
__builtin_memmove((R+12),(R+12),4);
}
B527cf0:L527cf0:{c.instructions+=2;NFSU2_TR(0x527cf0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527cf1:{NFSU2_TR(0x527cf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527cf6ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B527cf6:L527cf6:{c.instructions+=9;NFSU2_TR(0x527cf6);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff70ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B527cfd:{NFSU2_TR(0x527cfd);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff70ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B527d04:{NFSU2_TR(0x527d04);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff70ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B527d0b:{NFSU2_TR(0x527d0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B527d0e:{NFSU2_TR(0x527d0e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff70ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B527d15:{NFSU2_TR(0x527d15);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B527d16:{NFSU2_TR(0x527d16);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B527d18:{NFSU2_TR(0x527d18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B527d1a:{NFSU2_TR(0x527d1a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527cf0u);}goto L527cf0;}}
}
B527d1c:L527d1c:{c.instructions+=7;NFSU2_TR(0x527d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527d22:{NFSU2_TR(0x527d22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B527d23:{NFSU2_TR(0x527d23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527d24:{NFSU2_TR(0x527d24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B527d25:{NFSU2_TR(0x527d25);
__builtin_memmove((R+16),(R+20),4);
}
B527d27:{NFSU2_TR(0x527d27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B527d28:{NFSU2_TR(0x527d28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527d30:L527d30:{c.instructions+=10;NFSU2_TR(0x527d30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1a0ull))));
}
B527d36:{NFSU2_TR(0x527d36);
__builtin_memmove((R+8),(R+4),4);
}
B527d38:{NFSU2_TR(0x527d38);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527d39:{NFSU2_TR(0x527d39);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527d3a:{NFSU2_TR(0x527d3a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527d3b:{NFSU2_TR(0x527d3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7148ull))));
__builtin_memmove((R+12),(U+0),4);
}
B527d41:{NFSU2_TR(0x527d41);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B527d43:{NFSU2_TR(0x527d43);
w4(R+4,u32(0x64ull));
}
B527d48:{NFSU2_TR(0x527d48);
__builtin_memmove((R+24),(R+12),4);
}
B527d4a:{NFSU2_TR(0x527d4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B527d4e:L527d4e:{c.instructions+=1;NFSU2_TR(0x527d4e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L527d50;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527d4eu);}goto L527d4e;}
}
B527d50:L527d50:{c.instructions+=2;NFSU2_TR(0x527d50);
w4(R+4,u32(0x40ull));
}
B527d55:{NFSU2_TR(0x527d55);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B527d5b:L527d5b:{c.instructions+=1;NFSU2_TR(0x527d5b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L527d5d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527d5bu);}goto L527d5b;}
}
B527d5d:L527d5d:{c.instructions+=2;NFSU2_TR(0x527d5d);
w4(R+4,u32(0x20ull));
}
B527d62:{NFSU2_TR(0x527d62);
__builtin_memmove((R+28),(R+12),4);
}
B527d64:L527d64:{c.instructions+=1;NFSU2_TR(0x527d64);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L527d66;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527d64u);}goto L527d64;}
}
B527d66:L527d66:{c.instructions+=9;NFSU2_TR(0x527d66);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x180ull))));
__builtin_memmove((R+4),(U+0),4);
}
B527d6c:{NFSU2_TR(0x527d6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B527d6e:{NFSU2_TR(0x527d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527d71:{NFSU2_TR(0x527d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527d74:{NFSU2_TR(0x527d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527d77:{NFSU2_TR(0x527d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527d7d:{NFSU2_TR(0x527d7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527d7f:{NFSU2_TR(0x527d7f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527d83:{NFSU2_TR(0x527d83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527d93;}}
}
B527d85:L527d85:{c.instructions+=3;NFSU2_TR(0x527d85);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x873full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B527d8b:{NFSU2_TR(0x527d8b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527d8d:{NFSU2_TR(0x527d8d);
if(r1(R+518)){TAIL_STATIC(0x5282e5u,528);}
}
B527d93:L527d93:{c.instructions+=3;NFSU2_TR(0x527d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B527d99:{NFSU2_TR(0x527d99);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527d9b:{NFSU2_TR(0x527d9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5282e5u,528);}
}
B527da1:L527da1:{c.instructions+=2;NFSU2_TR(0x527da1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527da3:{NFSU2_TR(0x527da3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527dce;}}
}
B527da5:L527da5:{c.instructions+=3;NFSU2_TR(0x527da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8738ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B527dab:{NFSU2_TR(0x527dab);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527dad:{NFSU2_TR(0x527dad);
if(r1(R+518)){{goto L527dbc;}}
}
B527daf:L527daf:{c.instructions+=2;NFSU2_TR(0x527daf);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdd60e403ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B527db6:{NFSU2_TR(0x527db6);
if(r1(R+518)){TAIL_STATIC(0x5282e5u,528);}
}
B527dbc:L527dbc:{c.instructions+=2;NFSU2_TR(0x527dbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527dbe:{NFSU2_TR(0x527dbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527dce;}}
}
B527dc0:L527dc0:{c.instructions+=3;NFSU2_TR(0x527dc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x873eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B527dc6:{NFSU2_TR(0x527dc6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527dc8:{NFSU2_TR(0x527dc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5282e5u,528);}
}
B527dce:L527dce:{c.instructions+=2;NFSU2_TR(0x527dce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B527dd1:{NFSU2_TR(0x527dd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527e26;}}
}
B527dd3:L527dd3:{c.instructions+=3;NFSU2_TR(0x527dd3);
__builtin_memmove((R+24),gp(0x8641fc),4);
}
B527dd9:{NFSU2_TR(0x527dd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527ddb:{NFSU2_TR(0x527ddb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527df2;}}
}
B527ddd:L527ddd:{c.instructions+=2;NFSU2_TR(0x527ddd);
u8 U[4];
w4(U+0,u32(0x4cce3e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527de2:{NFSU2_TR(0x527de2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527de7ull));
TAIL_STATIC(0x4ffc90u,4ff);
}
B527de7:L527de7:{c.instructions+=3;NFSU2_TR(0x527de7);
__builtin_memmove((R+24),(R+0),4);
}
B527de9:{NFSU2_TR(0x527de9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B527dec:{NFSU2_TR(0x527dec);
__builtin_memmove(gp(0x8641fc),(R+24),4);
}
B527df2:L527df2:{c.instructions+=5;NFSU2_TR(0x527df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B527df5:{NFSU2_TR(0x527df5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B527df9:{NFSU2_TR(0x527df9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527dfa:{NFSU2_TR(0x527dfa);
__builtin_memmove((R+4),(R+28),4);
}
B527dfc:{NFSU2_TR(0x527dfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527e01ull));
TAIL_STATIC(0x500b80u,500);
}
B527e01:L527e01:{c.instructions+=2;NFSU2_TR(0x527e01);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527e03:{NFSU2_TR(0x527e03);
if(r1(R+518)){{goto L527e26;}}
}
B527e05:L527e05:{c.instructions+=4;NFSU2_TR(0x527e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527e08:{NFSU2_TR(0x527e08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527e09:{NFSU2_TR(0x527e09);
__builtin_memmove((R+4),(R+28),4);
}
B527e0b:{NFSU2_TR(0x527e0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527e10ull));
TAIL_STATIC(0x500b80u,500);
}
B527e10:L527e10:{c.instructions+=2;NFSU2_TR(0x527e10);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527e12:{NFSU2_TR(0x527e12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527e26;}}
}
B527e14:L527e14:{c.instructions+=3;NFSU2_TR(0x527e14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527e15:{NFSU2_TR(0x527e15);
__builtin_memmove((R+4),(R+12),4);
}
B527e17:{NFSU2_TR(0x527e17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527e1cull));
TAIL_STATIC(0x5007a0u,500);
}
B527e1c:L527e1c:{c.instructions+=5;NFSU2_TR(0x527e1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B527e1d:{NFSU2_TR(0x527e1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B527e1e:{NFSU2_TR(0x527e1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B527e1f:{NFSU2_TR(0x527e1f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1a0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1a0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1a0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B527e25:{NFSU2_TR(0x527e25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B527e26:L527e26:{c.instructions+=5;NFSU2_TR(0x527e26);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B527e2a:{NFSU2_TR(0x527e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B527e30:{NFSU2_TR(0x527e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527e33:{NFSU2_TR(0x527e33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527e34:{NFSU2_TR(0x527e34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527e39ull));
TAIL_STATIC(0x500b80u,500);
}
B527e39:L527e39:{c.instructions+=2;NFSU2_TR(0x527e39);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527e3b:{NFSU2_TR(0x527e3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5282e5u,528);}
}
B527e41:L527e41:{c.instructions+=4;NFSU2_TR(0x527e41);
__builtin_memmove((R+8),gp(0x838420),4);
}
B527e47:{NFSU2_TR(0x527e47);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B527e49:{NFSU2_TR(0x527e49);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527e4b:{NFSU2_TR(0x527e4b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L527ea1;}}
}
B527e4d:L527e4d:{c.instructions+=2;NFSU2_TR(0x527e4d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B527e51:{NFSU2_TR(0x527e51);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B527e53:L527e53:{c.instructions+=2;NFSU2_TR(0x527e53);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B527e55:{NFSU2_TR(0x527e55);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L527e65;}}
}
B527e57:L527e57:{c.instructions+=2;NFSU2_TR(0x527e57);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B527e59:{NFSU2_TR(0x527e59);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L527e65;}}
}
B527e5b:L527e5b:{c.instructions+=3;NFSU2_TR(0x527e5b);
__builtin_memmove((R+4),gp(0x838424),4);
}
B527e61:{NFSU2_TR(0x527e61);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B527e63:{NFSU2_TR(0x527e63);
{goto L527e67;}
}
B527e65:L527e65:{c.instructions+=1;NFSU2_TR(0x527e65);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B527e67:L527e67:{c.instructions+=5;NFSU2_TR(0x527e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527e6d:{NFSU2_TR(0x527e6d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B527e71:{NFSU2_TR(0x527e71);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B527e73:{NFSU2_TR(0x527e73);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B527e77:{NFSU2_TR(0x527e77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527e99;}}
}
B527e79:L527e79:{c.instructions+=6;NFSU2_TR(0x527e79);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B527e7f:{NFSU2_TR(0x527e7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527e80:{NFSU2_TR(0x527e80);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B527e87:{NFSU2_TR(0x527e87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527e88:{NFSU2_TR(0x527e88);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7148ull))));
__builtin_memmove((R+4),(U+0),4);
}
B527e8e:{NFSU2_TR(0x527e8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527e93ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527970u);}goto L527970;}
}
B527e93:L527e93:{c.instructions+=1;NFSU2_TR(0x527e93);
__builtin_memmove((R+8),gp(0x838420),4);
}
B527e99:L527e99:{c.instructions+=4;NFSU2_TR(0x527e99);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B527e9a:{NFSU2_TR(0x527e9a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B527e9d:{NFSU2_TR(0x527e9d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B527e9f:{NFSU2_TR(0x527e9f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527e53u);}goto L527e53;}}
}
B527ea1:L527ea1:{c.instructions+=3;NFSU2_TR(0x527ea1);
__builtin_memmove((R+0),gp(0x86347d),1);
}
B527ea6:{NFSU2_TR(0x527ea6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527ea8:{NFSU2_TR(0x527ea8);
if(r1(R+518)){{goto L527ee2;}}
}
B527eaa:L527eaa:{c.instructions+=4;NFSU2_TR(0x527eaa);
__builtin_memmove((R+0),gp(0x863480),4);
}
B527eaf:{NFSU2_TR(0x527eaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527eb0:{NFSU2_TR(0x527eb0);
w4(R+4,u32(0x83ad90ull));
}
B527eb5:{NFSU2_TR(0x527eb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527ebaull));
TAIL_STATIC(0x503680u,503);
}
B527eba:L527eba:{c.instructions+=3;NFSU2_TR(0x527eba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B527ebc:{NFSU2_TR(0x527ebc);
__builtin_memmove((R+4),(R+0),4);
}
B527ebe:{NFSU2_TR(0x527ebe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527ec1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B527ec1:L527ec1:{c.instructions+=3;NFSU2_TR(0x527ec1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B527ec7:{NFSU2_TR(0x527ec7);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8a1ccc))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B527ecd:{NFSU2_TR(0x527ecd);
if(r1(R+518)){{goto L527ee2;}}
}
B527ecf:L527ecf:{c.instructions+=5;NFSU2_TR(0x527ecf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B527ed5:{NFSU2_TR(0x527ed5);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527ed7:{NFSU2_TR(0x527ed7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B527eda:{NFSU2_TR(0x527eda);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527edc:{NFSU2_TR(0x527edc);
if(r1(R+518)){{goto L527ee2;}}
}
B527ede:L527ede:{c.instructions+=2;NFSU2_TR(0x527ede);
w1(R+12,u8(0x1ull));
}
B527ee0:{NFSU2_TR(0x527ee0);
{goto L527ee4;}
}
B527ee2:L527ee2:{c.instructions+=1;NFSU2_TR(0x527ee2);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B527ee4:L527ee4:{c.instructions+=2;NFSU2_TR(0x527ee4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B527ee6:{NFSU2_TR(0x527ee6);
{goto L527ef0;}
}
B527ef0:L527ef0:{c.instructions+=3;NFSU2_TR(0x527ef0);
u8 U[16];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B527ef7:{NFSU2_TR(0x527ef7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527ef9:{NFSU2_TR(0x527ef9);
if(r1(R+518)){{goto L527f37;}}
}
B527efb:L527efb:{c.instructions+=4;NFSU2_TR(0x527efb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B527eff:{NFSU2_TR(0x527eff);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B527f03:{NFSU2_TR(0x527f03);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B527f09:{NFSU2_TR(0x527f09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527f37;}}
}
B527f0b:L527f0b:{c.instructions+=2;NFSU2_TR(0x527f0b);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B527f0f:{NFSU2_TR(0x527f0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527f15;}}
}
B527f11:L527f11:{c.instructions+=2;NFSU2_TR(0x527f11);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527f13:{NFSU2_TR(0x527f13);
if(r1(R+518)){{goto L527f37;}}
}
B527f15:L527f15:{c.instructions+=4;NFSU2_TR(0x527f15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B527f18:{NFSU2_TR(0x527f18);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527f19:{NFSU2_TR(0x527f19);
w4(R+4,u32(0x85ad40ull));
}
B527f1e:{NFSU2_TR(0x527f1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527f23ull));
TAIL_STATIC(0x500b80u,500);
}
B527f23:L527f23:{c.instructions+=2;NFSU2_TR(0x527f23);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B527f25:{NFSU2_TR(0x527f25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527f37;}}
}
B527f27:L527f27:{c.instructions+=4;NFSU2_TR(0x527f27);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B527f2b:{NFSU2_TR(0x527f2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527f2c:{NFSU2_TR(0x527f2c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7148ull))));
}
B527f32:{NFSU2_TR(0x527f32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527f37ull));
TAIL_STATIC(0x5007a0u,500);
}
B527f37:L527f37:{c.instructions+=3;NFSU2_TR(0x527f37);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B527f38:{NFSU2_TR(0x527f38);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B527f3b:{NFSU2_TR(0x527f3b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527ef0u);}goto L527ef0;}}
}
B527f3d:L527f3d:{c.instructions+=7;NFSU2_TR(0x527f3d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B527f3f:{NFSU2_TR(0x527f3f);
}
B527f40:{NFSU2_TR(0x527f40);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B527f44:{NFSU2_TR(0x527f44);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x7148ull))));
}
B527f4a:{NFSU2_TR(0x527f4a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527f4b:{NFSU2_TR(0x527f4b);
__builtin_memmove((R+4),(R+28),4);
}
B527f4d:{NFSU2_TR(0x527f4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527f52ull));
TAIL_STATIC(0x513770u,513);
}
B527f52:L527f52:{c.instructions+=4;NFSU2_TR(0x527f52);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527f53:{NFSU2_TR(0x527f53);
__builtin_memmove((R+4),(R+28),4);
}
B527f55:{NFSU2_TR(0x527f55);
__builtin_memmove((R+24),(R+0),4);
}
B527f57:{NFSU2_TR(0x527f57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527f5cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527aa0u);}goto L527aa0;}
}
B527f5c:L527f5c:{c.instructions+=4;NFSU2_TR(0x527f5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B527f60:{NFSU2_TR(0x527f60);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B527f64:{NFSU2_TR(0x527f64);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B527f67:{NFSU2_TR(0x527f67);
if(r1(R+518)){{goto L527f71;}}
}
B527f69:L527f69:{c.instructions+=2;NFSU2_TR(0x527f69);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B527f6b:{NFSU2_TR(0x527f6b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x528012u,528);}
}
B527f71:L527f71:{c.instructions+=3;NFSU2_TR(0x527f71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B527f72:{NFSU2_TR(0x527f72);
__builtin_memmove((R+4),(R+28),4);
}
B527f74:{NFSU2_TR(0x527f74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x527f79ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527bb0u);}goto L527bb0;}
}
B527f79:L527f79:{c.instructions+=2;NFSU2_TR(0x527f79);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B527f7b:{NFSU2_TR(0x527f7b);
if(r1(R+518)){TAIL_STATIC(0x528012u,528);}
}
B527f81:L527f81:{c.instructions+=2;NFSU2_TR(0x527f81);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B527f85:{NFSU2_TR(0x527f85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527f8e;}}
}
B527f87:L527f87:{c.instructions+=2;NFSU2_TR(0x527f87);
w4(R+4,u32(0x7ull));
}
B527f8c:{NFSU2_TR(0x527f8c);
{goto L527fc9;}
}
B527f8e:L527f8e:{c.instructions+=2;NFSU2_TR(0x527f8e);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B527f92:{NFSU2_TR(0x527f92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L527f9b;}}
}
B527f94:L527f94:{c.instructions+=2;NFSU2_TR(0x527f94);
w4(R+4,u32(0x5ull));
}
B527f99:{NFSU2_TR(0x527f99);
{goto L527fc9;}
}
B527f9b:L527f9b:{c.instructions+=3;NFSU2_TR(0x527f9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B527f9f:{NFSU2_TR(0x527f9f);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B527fa2:{NFSU2_TR(0x527fa2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L527fc7;}}
}
B527fa4:L527fa4:{c.instructions+=1;NFSU2_TR(0x527fa4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5282f0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B527fab:L527fab:{c.instructions+=2;NFSU2_TR(0x527fab);
w4(R+4,u32(0x4ull));
}
B527fb0:{NFSU2_TR(0x527fb0);
{goto L527fc9;}
}
B527fb2:L527fb2:{c.instructions+=2;NFSU2_TR(0x527fb2);
w4(R+4,u32(0x2ull));
}
B527fb7:{NFSU2_TR(0x527fb7);
{goto L527fc9;}
}
B527fb9:L527fb9:{c.instructions+=2;NFSU2_TR(0x527fb9);
w4(R+4,u32(0x1ull));
}
B527fbe:{NFSU2_TR(0x527fbe);
{goto L527fc9;}
}
B527fc0:L527fc0:{c.instructions+=2;NFSU2_TR(0x527fc0);
w4(R+4,u32(0x3ull));
}
B527fc5:{NFSU2_TR(0x527fc5);
{goto L527fc9;}
}
B527fc7:L527fc7:{c.instructions+=1;NFSU2_TR(0x527fc7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B527fc9:L527fc9:{c.instructions+=3;NFSU2_TR(0x527fc9);
u8 U[13];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))+u32(u8(0x1ull))));
s1(u32(r4(U+8)),r1(U+12));
}
B527fd0:{NFSU2_TR(0x527fd0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B527fd2:{NFSU2_TR(0x527fd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B527fd8:L527fd8:{c.instructions+=2;NFSU2_TR(0x527fd8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B527fdb:{NFSU2_TR(0x527fdb);
if(r1(R+518)){{goto L527fe8;}}
}
B527fdd:L527fdd:{c.instructions+=4;NFSU2_TR(0x527fdd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B527fde:{NFSU2_TR(0x527fde);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B527fe1:{NFSU2_TR(0x527fe1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B527fe4:{NFSU2_TR(0x527fe4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x527fd8u);}goto L527fd8;}}
}
B527fe6:L527fe6:{c.instructions+=1;NFSU2_TR(0x527fe6);
{goto L527ff9;}
}
B527fe8:L527fe8:{c.instructions+=3;NFSU2_TR(0x527fe8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B527fec:{NFSU2_TR(0x527fec);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x7148ull))));
}
B527ff2:{NFSU2_TR(0x527ff2);
u8 U[16];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B527ff9:L527ff9:{c.instructions+=2;NFSU2_TR(0x527ff9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B527ffd:{NFSU2_TR(0x527ffd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x7148ull))));
TAIL_STATIC(0x528003u,528);
}
XIT:NFSU2_TR_EXIT(0x527,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
