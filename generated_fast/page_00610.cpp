#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48c(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x610,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x610,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_610(u8* __restrict R,Cpu& c);
u32 page_610(Cpu& c){return body_610(c.regs.data(),c);}
__attribute__((noinline)) u32 body_610(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x610000:goto L610000;
case 0x610004:c.instructions+=3;goto B610004;
case 0x61000a:c.instructions+=2;goto B61000a;
case 0x61000d:c.instructions+=1;goto B61000d;
case 0x610010:goto L610010;
case 0x610014:c.instructions+=3;goto B610014;
case 0x61001a:c.instructions+=2;goto B61001a;
case 0x61001d:c.instructions+=1;goto B61001d;
case 0x610020:goto L610020;
case 0x610024:c.instructions+=2;goto B610024;
case 0x610029:c.instructions+=1;goto B610029;
case 0x61002b:goto L61002b;
case 0x61002d:goto L61002d;
case 0x610032:c.instructions+=1;goto B610032;
case 0x610034:goto L610034;
case 0x610036:goto L610036;
case 0x61003b:c.instructions+=1;goto B61003b;
case 0x61003d:goto L61003d;
case 0x610042:c.instructions+=1;goto B610042;
case 0x610044:goto L610044;
case 0x610049:c.instructions+=1;goto B610049;
case 0x61004b:goto L61004b;
case 0x610050:c.instructions+=1;goto B610050;
case 0x610052:goto L610052;
case 0x610057:c.instructions+=1;goto B610057;
case 0x610059:goto L610059;
case 0x61005e:c.instructions+=1;goto B61005e;
case 0x610060:goto L610060;
case 0x610065:c.instructions+=1;goto B610065;
case 0x610067:goto L610067;
case 0x610069:goto L610069;
case 0x61006e:c.instructions+=1;goto B61006e;
case 0x610070:goto L610070;
case 0x610075:c.instructions+=1;goto B610075;
case 0x610077:goto L610077;
case 0x61007c:c.instructions+=1;goto B61007c;
case 0x61007e:goto L61007e;
case 0x610083:c.instructions+=1;goto B610083;
case 0x610085:goto L610085;
case 0x61008a:c.instructions+=1;goto B61008a;
case 0x61008c:goto L61008c;
case 0x610091:goto L610091;
case 0x610093:goto L610093;
case 0x610095:c.instructions+=1;goto B610095;
case 0x610096:goto L610096;
case 0x61009b:c.instructions+=1;goto B61009b;
case 0x6100a0:goto L6100a0;
case 0x6100a4:c.instructions+=2;goto B6100a4;
case 0x6100a9:c.instructions+=1;goto B6100a9;
case 0x6100ab:goto L6100ab;
case 0x6100ad:goto L6100ad;
case 0x6100b2:c.instructions+=1;goto B6100b2;
case 0x6100b4:goto L6100b4;
case 0x6100b6:goto L6100b6;
case 0x6100bb:c.instructions+=1;goto B6100bb;
case 0x6100bd:goto L6100bd;
case 0x6100c2:c.instructions+=1;goto B6100c2;
case 0x6100c4:goto L6100c4;
case 0x6100c9:c.instructions+=1;goto B6100c9;
case 0x6100cb:goto L6100cb;
case 0x6100d0:c.instructions+=1;goto B6100d0;
case 0x6100d2:goto L6100d2;
case 0x6100d7:c.instructions+=1;goto B6100d7;
case 0x6100d9:goto L6100d9;
case 0x6100de:c.instructions+=1;goto B6100de;
case 0x6100e0:goto L6100e0;
case 0x6100e2:goto L6100e2;
case 0x6100e7:c.instructions+=1;goto B6100e7;
case 0x6100e9:goto L6100e9;
case 0x6100ee:c.instructions+=1;goto B6100ee;
case 0x6100f0:goto L6100f0;
case 0x6100f5:c.instructions+=1;goto B6100f5;
case 0x6100f7:goto L6100f7;
case 0x6100fc:c.instructions+=1;goto B6100fc;
case 0x6100fe:goto L6100fe;
case 0x610103:goto L610103;
case 0x610105:goto L610105;
case 0x610107:c.instructions+=1;goto B610107;
case 0x610108:goto L610108;
case 0x61010d:c.instructions+=1;goto B61010d;
case 0x610110:goto L610110;
case 0x610114:c.instructions+=4;goto B610114;
case 0x61011a:c.instructions+=3;goto B61011a;
case 0x610120:c.instructions+=2;goto B610120;
case 0x610122:c.instructions+=1;goto B610122;
case 0x610130:goto L610130;
case 0x610134:c.instructions+=4;goto B610134;
case 0x610135:c.instructions+=3;goto B610135;
case 0x61013b:c.instructions+=2;goto B61013b;
case 0x61013d:c.instructions+=1;goto B61013d;
case 0x610143:goto L610143;
case 0x610145:c.instructions+=1;goto B610145;
case 0x610147:goto L610147;
case 0x610148:c.instructions+=3;goto B610148;
case 0x61014e:c.instructions+=2;goto B61014e;
case 0x610151:c.instructions+=1;goto B610151;
case 0x610153:goto L610153;
case 0x610155:c.instructions+=2;goto B610155;
case 0x610156:c.instructions+=1;goto B610156;
case 0x610157:goto L610157;
case 0x61015d:c.instructions+=3;goto B61015d;
case 0x61015f:c.instructions+=2;goto B61015f;
case 0x610160:c.instructions+=1;goto B610160;
case 0x610170:goto L610170;
case 0x610176:c.instructions+=1;goto B610176;
case 0x610180:goto L610180;
case 0x610183:c.instructions+=2;goto B610183;
case 0x610186:c.instructions+=1;goto B610186;
case 0x610188:goto L610188;
case 0x610189:c.instructions+=1;goto B610189;
case 0x61018e:goto L61018e;
case 0x610191:c.instructions+=2;goto B610191;
case 0x610193:c.instructions+=1;goto B610193;
case 0x610195:goto L610195;
case 0x61019a:c.instructions+=1;goto B61019a;
case 0x61019b:goto L61019b;
case 0x61019d:c.instructions+=1;goto B61019d;
case 0x6101a0:goto L6101a0;
case 0x6101a6:c.instructions+=7;goto B6101a6;
case 0x6101a7:c.instructions+=6;goto B6101a7;
case 0x6101ad:c.instructions+=5;goto B6101ad;
case 0x6101ae:c.instructions+=4;goto B6101ae;
case 0x6101b0:c.instructions+=3;goto B6101b0;
case 0x6101b2:c.instructions+=2;goto B6101b2;
case 0x6101b3:c.instructions+=1;goto B6101b3;
case 0x6101b5:goto L6101b5;
case 0x6101b9:c.instructions+=3;goto B6101b9;
case 0x6101bd:c.instructions+=2;goto B6101bd;
case 0x6101bf:c.instructions+=1;goto B6101bf;
case 0x6101c0:goto L6101c0;
case 0x6101c2:c.instructions+=1;goto B6101c2;
case 0x6101c4:goto L6101c4;
case 0x6101c7:c.instructions+=1;goto B6101c7;
case 0x6101c9:goto L6101c9;
case 0x6101ca:c.instructions+=3;goto B6101ca;
case 0x6101cd:c.instructions+=2;goto B6101cd;
case 0x6101cf:c.instructions+=1;goto B6101cf;
case 0x6101d1:goto L6101d1;
case 0x6101d5:c.instructions+=3;goto B6101d5;
case 0x6101d7:c.instructions+=2;goto B6101d7;
case 0x6101d9:c.instructions+=1;goto B6101d9;
case 0x6101db:goto L6101db;
case 0x6101dc:c.instructions+=3;goto B6101dc;
case 0x6101dd:c.instructions+=2;goto B6101dd;
case 0x6101de:c.instructions+=1;goto B6101de;
case 0x6101e0:goto L6101e0;
case 0x6101e4:c.instructions+=6;goto B6101e4;
case 0x6101ea:c.instructions+=5;goto B6101ea;
case 0x6101eb:c.instructions+=4;goto B6101eb;
case 0x6101ec:c.instructions+=3;goto B6101ec;
case 0x6101f2:c.instructions+=2;goto B6101f2;
case 0x6101f3:c.instructions+=1;goto B6101f3;
case 0x6101f8:goto L6101f8;
case 0x6101fe:c.instructions+=5;goto B6101fe;
case 0x610202:c.instructions+=4;goto B610202;
case 0x610205:c.instructions+=3;goto B610205;
case 0x610207:c.instructions+=2;goto B610207;
case 0x610209:c.instructions+=1;goto B610209;
case 0x61020b:goto L61020b;
case 0x610211:goto L610211;
case 0x610213:c.instructions+=1;goto B610213;
case 0x610215:goto L610215;
case 0x610218:c.instructions+=1;goto B610218;
case 0x61021a:goto L61021a;
case 0x61021b:c.instructions+=3;goto B61021b;
case 0x61021e:c.instructions+=2;goto B61021e;
case 0x610220:c.instructions+=1;goto B610220;
case 0x610222:goto L610222;
case 0x610228:c.instructions+=6;goto B610228;
case 0x61022b:c.instructions+=5;goto B61022b;
case 0x61022e:c.instructions+=4;goto B61022e;
case 0x610234:c.instructions+=3;goto B610234;
case 0x610238:c.instructions+=2;goto B610238;
case 0x61023e:c.instructions+=1;goto B61023e;
case 0x610243:goto L610243;
case 0x610246:c.instructions+=1;goto B610246;
case 0x610248:goto L610248;
case 0x61024a:goto L61024a;
case 0x61024d:c.instructions+=2;goto B61024d;
case 0x610253:c.instructions+=1;goto B610253;
case 0x610255:goto L610255;
case 0x610256:c.instructions+=3;goto B610256;
case 0x610257:c.instructions+=2;goto B610257;
case 0x61025c:c.instructions+=1;goto B61025c;
case 0x61025d:goto L61025d;
case 0x61025e:c.instructions+=3;goto B61025e;
case 0x61025f:c.instructions+=2;goto B61025f;
case 0x610262:c.instructions+=1;goto B610262;
case 0x610270:goto L610270;
case 0x610274:c.instructions+=18;goto B610274;
case 0x610276:c.instructions+=17;goto B610276;
case 0x61027a:c.instructions+=16;goto B61027a;
case 0x61027c:c.instructions+=15;goto B61027c;
case 0x610280:c.instructions+=14;goto B610280;
case 0x610283:c.instructions+=13;goto B610283;
case 0x610284:c.instructions+=12;goto B610284;
case 0x610285:c.instructions+=11;goto B610285;
case 0x610288:c.instructions+=10;goto B610288;
case 0x61028a:c.instructions+=9;goto B61028a;
case 0x61028c:c.instructions+=8;goto B61028c;
case 0x61028f:c.instructions+=7;goto B61028f;
case 0x610293:c.instructions+=6;goto B610293;
case 0x61029a:c.instructions+=5;goto B61029a;
case 0x6102a0:c.instructions+=4;goto B6102a0;
case 0x6102a6:c.instructions+=3;goto B6102a6;
case 0x6102ac:c.instructions+=2;goto B6102ac;
case 0x6102b2:c.instructions+=1;goto B6102b2;
case 0x6102b7:goto L6102b7;
case 0x6102b9:goto L6102b9;
case 0x6102bf:c.instructions+=2;goto B6102bf;
case 0x6102c4:c.instructions+=1;goto B6102c4;
case 0x6102c9:goto L6102c9;
case 0x6102cb:goto L6102cb;
case 0x6102cd:c.instructions+=5;goto B6102cd;
case 0x6102cf:c.instructions+=4;goto B6102cf;
case 0x6102d0:c.instructions+=3;goto B6102d0;
case 0x6102d3:c.instructions+=2;goto B6102d3;
case 0x6102d9:c.instructions+=1;goto B6102d9;
case 0x6102de:goto L6102de;
case 0x6102df:c.instructions+=2;goto B6102df;
case 0x6102e0:c.instructions+=1;goto B6102e0;
case 0x6102f0:goto L6102f0;
case 0x6102f4:c.instructions+=2;goto B6102f4;
case 0x6102fb:c.instructions+=1;goto B6102fb;
case 0x610300:goto L610300;
case 0x610306:c.instructions+=1;goto B610306;
case 0x610310:goto L610310;
case 0x610312:c.instructions+=4;goto B610312;
case 0x610318:c.instructions+=3;goto B610318;
case 0x61031e:c.instructions+=2;goto B61031e;
case 0x610320:c.instructions+=1;goto B610320;
case 0x610322:goto L610322;
case 0x610324:c.instructions+=1;goto B610324;
case 0x610325:goto L610325;
case 0x610328:c.instructions+=2;goto B610328;
case 0x610329:c.instructions+=1;goto B610329;
case 0x61032e:goto L61032e;
case 0x61032f:c.instructions+=2;goto B61032f;
case 0x610334:c.instructions+=1;goto B610334;
case 0x610339:goto L610339;
case 0x61033c:c.instructions+=1;goto B61033c;
case 0x610340:goto L610340;
case 0x610341:c.instructions+=8;goto B610341;
case 0x610345:c.instructions+=7;goto B610345;
case 0x610347:c.instructions+=6;goto B610347;
case 0x610348:c.instructions+=5;goto B610348;
case 0x61034c:c.instructions+=4;goto B61034c;
case 0x61034d:c.instructions+=3;goto B61034d;
case 0x61034f:c.instructions+=2;goto B61034f;
case 0x610357:c.instructions+=1;goto B610357;
case 0x610359:goto L610359;
case 0x61035e:goto L61035e;
case 0x610362:c.instructions+=3;goto B610362;
case 0x610364:c.instructions+=2;goto B610364;
case 0x610366:c.instructions+=1;goto B610366;
case 0x610368:goto L610368;
case 0x61036e:c.instructions+=1;goto B61036e;
case 0x610370:goto L610370;
case 0x610373:c.instructions+=3;goto B610373;
case 0x610376:c.instructions+=2;goto B610376;
case 0x610379:c.instructions+=1;goto B610379;
case 0x61037b:goto L61037b;
case 0x61037f:c.instructions+=6;goto B61037f;
case 0x610382:c.instructions+=5;goto B610382;
case 0x610386:c.instructions+=4;goto B610386;
case 0x61038c:c.instructions+=3;goto B61038c;
case 0x61038e:c.instructions+=2;goto B61038e;
case 0x610391:c.instructions+=1;goto B610391;
case 0x610393:goto L610393;
case 0x610397:c.instructions+=5;goto B610397;
case 0x61039d:c.instructions+=4;goto B61039d;
case 0x6103a1:c.instructions+=3;goto B6103a1;
case 0x6103a3:c.instructions+=2;goto B6103a3;
case 0x6103a6:c.instructions+=1;goto B6103a6;
case 0x6103a8:goto L6103a8;
case 0x6103aa:c.instructions+=1;goto B6103aa;
case 0x6103b0:goto L6103b0;
case 0x6103b3:c.instructions+=6;goto B6103b3;
case 0x6103b5:c.instructions+=5;goto B6103b5;
case 0x6103b7:c.instructions+=4;goto B6103b7;
case 0x6103b9:c.instructions+=3;goto B6103b9;
case 0x6103bd:c.instructions+=2;goto B6103bd;
case 0x6103bf:c.instructions+=1;goto B6103bf;
case 0x6103c1:goto L6103c1;
case 0x6103c5:c.instructions+=6;goto B6103c5;
case 0x6103c9:c.instructions+=5;goto B6103c9;
case 0x6103ca:c.instructions+=4;goto B6103ca;
case 0x6103cb:c.instructions+=3;goto B6103cb;
case 0x6103cc:c.instructions+=2;goto B6103cc;
case 0x6103cf:c.instructions+=1;goto B6103cf;
case 0x6103d4:goto L6103d4;
case 0x6103d5:c.instructions+=3;goto B6103d5;
case 0x6103d6:c.instructions+=2;goto B6103d6;
case 0x6103d7:c.instructions+=1;goto B6103d7;
case 0x6103da:goto L6103da;
case 0x6103e0:c.instructions+=1;goto B6103e0;
case 0x6103f0:goto L6103f0;
case 0x6103f4:c.instructions+=2;goto B6103f4;
case 0x6103f7:c.instructions+=1;goto B6103f7;
case 0x6103fd:goto L6103fd;
case 0x610400:c.instructions+=1;goto B610400;
case 0x610406:goto L610406;
case 0x61040c:c.instructions+=2;goto B61040c;
case 0x61040e:c.instructions+=1;goto B61040e;
case 0x610414:goto L610414;
case 0x610417:c.instructions+=4;goto B610417;
case 0x61041a:c.instructions+=3;goto B61041a;
case 0x61041d:c.instructions+=2;goto B61041d;
case 0x61041f:c.instructions+=1;goto B61041f;
case 0x610425:goto L610425;
case 0x610426:c.instructions+=1;goto B610426;
case 0x61042c:goto L61042c;
case 0x61042d:c.instructions+=1;goto B61042d;
case 0x61042f:goto L61042f;
case 0x610430:c.instructions+=1;goto B610430;
case 0x610432:goto L610432;
case 0x610434:c.instructions+=6;goto B610434;
case 0x610439:c.instructions+=5;goto B610439;
case 0x61043b:c.instructions+=4;goto B61043b;
case 0x61043d:c.instructions+=3;goto B61043d;
case 0x610440:c.instructions+=2;goto B610440;
case 0x610442:c.instructions+=1;goto B610442;
case 0x610445:goto L610445;
case 0x610447:c.instructions+=3;goto B610447;
case 0x61044a:c.instructions+=2;goto B61044a;
case 0x61044d:c.instructions+=1;goto B61044d;
case 0x61044f:goto L61044f;
case 0x610456:c.instructions+=1;goto B610456;
case 0x61045d:goto L61045d;
case 0x610462:c.instructions+=6;goto B610462;
case 0x610465:c.instructions+=5;goto B610465;
case 0x610467:c.instructions+=4;goto B610467;
case 0x610469:c.instructions+=3;goto B610469;
case 0x61046c:c.instructions+=2;goto B61046c;
case 0x61046e:c.instructions+=1;goto B61046e;
case 0x610471:goto L610471;
case 0x610476:c.instructions+=6;goto B610476;
case 0x610479:c.instructions+=5;goto B610479;
case 0x61047b:c.instructions+=4;goto B61047b;
case 0x61047d:c.instructions+=3;goto B61047d;
case 0x610480:c.instructions+=2;goto B610480;
case 0x610482:c.instructions+=1;goto B610482;
case 0x610485:goto L610485;
case 0x610487:c.instructions+=2;goto B610487;
case 0x61048a:c.instructions+=1;goto B61048a;
case 0x61048c:goto L61048c;
case 0x61048f:c.instructions+=1;goto B61048f;
case 0x610491:goto L610491;
case 0x610496:c.instructions+=6;goto B610496;
case 0x610499:c.instructions+=5;goto B610499;
case 0x61049b:c.instructions+=4;goto B61049b;
case 0x61049d:c.instructions+=3;goto B61049d;
case 0x6104a0:c.instructions+=2;goto B6104a0;
case 0x6104a2:c.instructions+=1;goto B6104a2;
case 0x6104a5:goto L6104a5;
case 0x6104aa:c.instructions+=6;goto B6104aa;
case 0x6104ad:c.instructions+=5;goto B6104ad;
case 0x6104af:c.instructions+=4;goto B6104af;
case 0x6104b1:c.instructions+=3;goto B6104b1;
case 0x6104b4:c.instructions+=2;goto B6104b4;
case 0x6104b6:c.instructions+=1;goto B6104b6;
case 0x6104b9:goto L6104b9;
case 0x6104bb:c.instructions+=2;goto B6104bb;
case 0x6104be:c.instructions+=1;goto B6104be;
case 0x6104c0:goto L6104c0;
case 0x6104c3:c.instructions+=2;goto B6104c3;
case 0x6104c8:c.instructions+=1;goto B6104c8;
case 0x6104ca:goto L6104ca;
case 0x6104cf:goto L6104cf;
case 0x6104d2:c.instructions+=5;goto B6104d2;
case 0x6104d4:c.instructions+=4;goto B6104d4;
case 0x6104d6:c.instructions+=3;goto B6104d6;
case 0x6104d9:c.instructions+=2;goto B6104d9;
case 0x6104db:c.instructions+=1;goto B6104db;
case 0x6104de:goto L6104de;
case 0x6104e0:c.instructions+=1;goto B6104e0;
case 0x610510:goto L610510;
case 0x610515:c.instructions+=3;goto B610515;
case 0x610517:c.instructions+=2;goto B610517;
case 0x61051d:c.instructions+=1;goto B61051d;
case 0x61051f:goto L61051f;
case 0x610521:c.instructions+=1;goto B610521;
case 0x610523:goto L610523;
case 0x610525:c.instructions+=1;goto B610525;
case 0x610527:goto L610527;
case 0x610529:goto L610529;
case 0x610530:goto L610530;
case 0x610531:c.instructions+=3;goto B610531;
case 0x610535:c.instructions+=2;goto B610535;
case 0x610537:c.instructions+=1;goto B610537;
case 0x610539:goto L610539;
case 0x61053b:c.instructions+=2;goto B61053b;
case 0x61053c:c.instructions+=1;goto B61053c;
case 0x61053d:goto L61053d;
case 0x610541:c.instructions+=4;goto B610541;
case 0x610545:c.instructions+=3;goto B610545;
case 0x610547:c.instructions+=2;goto B610547;
case 0x610549:c.instructions+=1;goto B610549;
case 0x61054b:goto L61054b;
case 0x610550:goto L610550;
case 0x610553:c.instructions+=1;goto B610553;
case 0x610555:goto L610555;
case 0x610556:c.instructions+=2;goto B610556;
case 0x610558:c.instructions+=1;goto B610558;
case 0x61055a:goto L61055a;
case 0x61055e:c.instructions+=1;goto B61055e;
case 0x610560:goto L610560;
case 0x610563:c.instructions+=1;goto B610563;
case 0x610568:goto L610568;
case 0x610569:c.instructions+=1;goto B610569;
case 0x61056a:goto L61056a;
case 0x61056c:c.instructions+=2;goto B61056c;
case 0x61056d:c.instructions+=1;goto B61056d;
case 0x610570:goto L610570;
case 0x610571:c.instructions+=7;goto B610571;
case 0x610575:c.instructions+=6;goto B610575;
case 0x610576:c.instructions+=5;goto B610576;
case 0x61057c:c.instructions+=4;goto B61057c;
case 0x610583:c.instructions+=3;goto B610583;
case 0x61058a:c.instructions+=2;goto B61058a;
case 0x610591:c.instructions+=1;goto B610591;
case 0x610593:goto L610593;
case 0x610595:c.instructions+=1;goto B610595;
case 0x61059a:goto L61059a;
case 0x61059d:c.instructions+=7;goto B61059d;
case 0x6105a0:c.instructions+=6;goto B6105a0;
case 0x6105a3:c.instructions+=5;goto B6105a3;
case 0x6105a6:c.instructions+=4;goto B6105a6;
case 0x6105a9:c.instructions+=3;goto B6105a9;
case 0x6105aa:c.instructions+=2;goto B6105aa;
case 0x6105ad:c.instructions+=1;goto B6105ad;
case 0x6105af:goto L6105af;
case 0x6105b0:c.instructions+=2;goto B6105b0;
case 0x6105b1:c.instructions+=1;goto B6105b1;
case 0x6105c0:goto L6105c0;
case 0x6105c4:c.instructions+=2;goto B6105c4;
case 0x6105c6:c.instructions+=1;goto B6105c6;
case 0x6105c8:goto L6105c8;
case 0x6105cb:c.instructions+=1;goto B6105cb;
case 0x6105cd:goto L6105cd;
case 0x6105d4:c.instructions+=1;goto B6105d4;
case 0x6105d6:goto L6105d6;
case 0x6105dd:c.instructions+=1;goto B6105dd;
case 0x6105de:goto L6105de;
case 0x6105e0:goto L6105e0;
case 0x6105e7:c.instructions+=1;goto B6105e7;
case 0x6105e9:goto L6105e9;
case 0x6105ea:c.instructions+=2;goto B6105ea;
case 0x6105ed:c.instructions+=1;goto B6105ed;
case 0x6105ef:goto L6105ef;
case 0x6105f1:c.instructions+=1;goto B6105f1;
case 0x6105f2:goto L6105f2;
case 0x6105f9:c.instructions+=1;goto B6105f9;
case 0x610600:goto L610600;
case 0x610604:c.instructions+=2;goto B610604;
case 0x610606:c.instructions+=1;goto B610606;
case 0x610608:goto L610608;
case 0x61060e:c.instructions+=1;goto B61060e;
case 0x610610:goto L610610;
case 0x610617:c.instructions+=1;goto B610617;
case 0x610619:goto L610619;
case 0x610620:c.instructions+=1;goto B610620;
case 0x610621:goto L610621;
case 0x610623:goto L610623;
case 0x61062a:c.instructions+=1;goto B61062a;
case 0x61062c:goto L61062c;
case 0x61062d:c.instructions+=2;goto B61062d;
case 0x610632:c.instructions+=1;goto B610632;
case 0x610634:goto L610634;
case 0x610636:c.instructions+=1;goto B610636;
case 0x610637:goto L610637;
case 0x61063e:c.instructions+=1;goto B61063e;
case 0x610640:goto L610640;
case 0x610644:c.instructions+=4;goto B610644;
case 0x61064a:c.instructions+=3;goto B61064a;
case 0x61064b:c.instructions+=2;goto B61064b;
case 0x61064c:c.instructions+=1;goto B61064c;
case 0x610651:goto L610651;
case 0x610654:c.instructions+=1;goto B610654;
case 0x610660:goto L610660;
case 0x610664:c.instructions+=4;goto B610664;
case 0x61066a:c.instructions+=3;goto B61066a;
case 0x61066b:c.instructions+=2;goto B61066b;
case 0x61066c:c.instructions+=1;goto B61066c;
case 0x610671:goto L610671;
case 0x610674:c.instructions+=1;goto B610674;
case 0x610680:goto L610680;
case 0x610686:c.instructions+=3;goto B610686;
case 0x610688:c.instructions+=2;goto B610688;
case 0x61068a:c.instructions+=1;goto B61068a;
case 0x61068c:goto L61068c;
case 0x610692:c.instructions+=1;goto B610692;
case 0x610694:goto L610694;
case 0x61069a:c.instructions+=2;goto B61069a;
case 0x61069c:c.instructions+=1;goto B61069c;
case 0x61069e:goto L61069e;
case 0x6106a3:c.instructions+=1;goto B6106a3;
case 0x6106a4:goto L6106a4;
case 0x6106a6:c.instructions+=1;goto B6106a6;
case 0x6106b0:goto L6106b0;
case 0x6106b4:c.instructions+=4;goto B6106b4;
case 0x6106ba:c.instructions+=3;goto B6106ba;
case 0x6106bb:c.instructions+=2;goto B6106bb;
case 0x6106bc:c.instructions+=1;goto B6106bc;
case 0x6106c1:goto L6106c1;
case 0x6106c4:c.instructions+=1;goto B6106c4;
case 0x6106d0:goto L6106d0;
case 0x6106d3:c.instructions+=3;goto B6106d3;
case 0x6106d6:c.instructions+=2;goto B6106d6;
case 0x6106da:c.instructions+=1;goto B6106da;
case 0x6106dc:goto L6106dc;
case 0x6106de:c.instructions+=1;goto B6106de;
case 0x6106e0:goto L6106e0;
case 0x6106e3:c.instructions+=2;goto B6106e3;
case 0x6106e5:c.instructions+=1;goto B6106e5;
case 0x6106e7:goto L6106e7;
case 0x6106eb:c.instructions+=1;goto B6106eb;
case 0x6106ed:goto L6106ed;
case 0x6106ef:c.instructions+=1;goto B6106ef;
case 0x6106f2:goto L6106f2;
case 0x6106f4:c.instructions+=1;goto B6106f4;
case 0x610700:goto L610700;
case 0x610704:c.instructions+=8;goto B610704;
case 0x610706:c.instructions+=7;goto B610706;
case 0x610708:c.instructions+=6;goto B610708;
case 0x61070b:c.instructions+=5;goto B61070b;
case 0x61070e:c.instructions+=4;goto B61070e;
case 0x610712:c.instructions+=3;goto B610712;
case 0x610715:c.instructions+=2;goto B610715;
case 0x610718:c.instructions+=1;goto B610718;
case 0x610720:goto L610720;
case 0x610721:c.instructions+=6;goto B610721;
case 0x610722:c.instructions+=5;goto B610722;
case 0x610726:c.instructions+=4;goto B610726;
case 0x61072b:c.instructions+=3;goto B61072b;
case 0x61072c:c.instructions+=2;goto B61072c;
case 0x61072e:c.instructions+=1;goto B61072e;
case 0x610733:goto L610733;
case 0x610738:c.instructions+=6;goto B610738;
case 0x610739:c.instructions+=5;goto B610739;
case 0x61073a:c.instructions+=4;goto B61073a;
case 0x61073c:c.instructions+=3;goto B61073c;
case 0x61073f:c.instructions+=2;goto B61073f;
case 0x610742:c.instructions+=1;goto B610742;
case 0x610747:goto L610747;
case 0x61074a:c.instructions+=3;goto B61074a;
case 0x61074b:c.instructions+=2;goto B61074b;
case 0x61074c:c.instructions+=1;goto B61074c;
case 0x610750:goto L610750;
case 0x610751:c.instructions+=5;goto B610751;
case 0x610755:c.instructions+=4;goto B610755;
case 0x610756:c.instructions+=3;goto B610756;
case 0x610758:c.instructions+=2;goto B610758;
case 0x61075b:c.instructions+=1;goto B61075b;
case 0x61075d:goto L61075d;
case 0x610762:c.instructions+=2;goto B610762;
case 0x610763:c.instructions+=1;goto B610763;
case 0x610768:goto L610768;
case 0x610769:c.instructions+=5;goto B610769;
case 0x61076a:c.instructions+=4;goto B61076a;
case 0x61076c:c.instructions+=3;goto B61076c;
case 0x61076f:c.instructions+=2;goto B61076f;
case 0x610772:c.instructions+=1;goto B610772;
case 0x610777:goto L610777;
case 0x61077a:goto L61077a;
case 0x61077b:c.instructions+=2;goto B61077b;
case 0x61077c:c.instructions+=1;goto B61077c;
case 0x610780:goto L610780;
case 0x610783:c.instructions+=3;goto B610783;
case 0x610785:c.instructions+=2;goto B610785;
case 0x610789:c.instructions+=1;goto B610789;
case 0x61078b:goto L61078b;
case 0x61078d:c.instructions+=1;goto B61078d;
case 0x61078f:goto L61078f;
case 0x610790:c.instructions+=5;goto B610790;
case 0x610793:c.instructions+=4;goto B610793;
case 0x610795:c.instructions+=3;goto B610795;
case 0x610797:c.instructions+=2;goto B610797;
case 0x610798:c.instructions+=1;goto B610798;
case 0x61079a:goto L61079a;
case 0x61079d:c.instructions+=2;goto B61079d;
case 0x61079f:c.instructions+=1;goto B61079f;
case 0x6107a1:goto L6107a1;
case 0x6107a3:c.instructions+=1;goto B6107a3;
case 0x6107a5:goto L6107a5;
case 0x6107a8:c.instructions+=3;goto B6107a8;
case 0x6107aa:c.instructions+=2;goto B6107aa;
case 0x6107ac:c.instructions+=1;goto B6107ac;
case 0x6107ae:goto L6107ae;
case 0x6107b3:c.instructions+=1;goto B6107b3;
case 0x6107b6:goto L6107b6;
case 0x6107b8:c.instructions+=1;goto B6107b8;
case 0x6107c0:goto L6107c0;
case 0x6107c1:c.instructions+=6;goto B6107c1;
case 0x6107c2:c.instructions+=5;goto B6107c2;
case 0x6107c6:c.instructions+=4;goto B6107c6;
case 0x6107c8:c.instructions+=3;goto B6107c8;
case 0x6107cb:c.instructions+=2;goto B6107cb;
case 0x6107cd:c.instructions+=1;goto B6107cd;
case 0x6107cf:goto L6107cf;
case 0x6107d2:c.instructions+=2;goto B6107d2;
case 0x6107d4:c.instructions+=1;goto B6107d4;
case 0x6107d6:goto L6107d6;
case 0x6107d9:c.instructions+=3;goto B6107d9;
case 0x6107da:c.instructions+=2;goto B6107da;
case 0x6107db:c.instructions+=1;goto B6107db;
case 0x6107e0:goto L6107e0;
case 0x6107e2:c.instructions+=1;goto B6107e2;
case 0x6107e4:goto L6107e4;
case 0x6107e7:c.instructions+=2;goto B6107e7;
case 0x6107e9:c.instructions+=1;goto B6107e9;
case 0x6107eb:goto L6107eb;
case 0x6107ee:c.instructions+=4;goto B6107ee;
case 0x6107ef:c.instructions+=3;goto B6107ef;
case 0x6107f2:c.instructions+=2;goto B6107f2;
case 0x6107f3:c.instructions+=1;goto B6107f3;
case 0x6107f8:goto L6107f8;
case 0x6107fa:c.instructions+=1;goto B6107fa;
case 0x6107fc:goto L6107fc;
case 0x6107fd:c.instructions+=3;goto B6107fd;
case 0x6107ff:c.instructions+=2;goto B6107ff;
case 0x610800:c.instructions+=1;goto B610800;
case 0x610803:goto L610803;
case 0x610804:c.instructions+=3;goto B610804;
case 0x610809:c.instructions+=2;goto B610809;
case 0x61080a:c.instructions+=1;goto B61080a;
case 0x610810:goto L610810;
case 0x610811:c.instructions+=6;goto B610811;
case 0x610812:c.instructions+=5;goto B610812;
case 0x610816:c.instructions+=4;goto B610816;
case 0x610818:c.instructions+=3;goto B610818;
case 0x61081b:c.instructions+=2;goto B61081b;
case 0x61081d:c.instructions+=1;goto B61081d;
case 0x61081f:goto L61081f;
case 0x610822:c.instructions+=2;goto B610822;
case 0x610824:c.instructions+=1;goto B610824;
case 0x610826:goto L610826;
case 0x610829:c.instructions+=3;goto B610829;
case 0x61082a:c.instructions+=2;goto B61082a;
case 0x61082b:c.instructions+=1;goto B61082b;
case 0x610830:goto L610830;
case 0x610832:c.instructions+=1;goto B610832;
case 0x610834:goto L610834;
case 0x610837:c.instructions+=2;goto B610837;
case 0x610839:c.instructions+=1;goto B610839;
case 0x61083b:goto L61083b;
case 0x61083e:c.instructions+=4;goto B61083e;
case 0x61083f:c.instructions+=3;goto B61083f;
case 0x610842:c.instructions+=2;goto B610842;
case 0x610843:c.instructions+=1;goto B610843;
case 0x610848:goto L610848;
case 0x61084a:c.instructions+=1;goto B61084a;
case 0x61084c:goto L61084c;
case 0x61084f:c.instructions+=2;goto B61084f;
case 0x610851:c.instructions+=1;goto B610851;
case 0x610853:goto L610853;
case 0x610859:c.instructions+=3;goto B610859;
case 0x61085c:c.instructions+=2;goto B61085c;
case 0x61085e:c.instructions+=1;goto B61085e;
case 0x610860:goto L610860;
case 0x610862:c.instructions+=1;goto B610862;
case 0x610864:goto L610864;
case 0x610867:c.instructions+=3;goto B610867;
case 0x610869:c.instructions+=2;goto B610869;
case 0x61086b:c.instructions+=1;goto B61086b;
case 0x61086d:goto L61086d;
case 0x610870:c.instructions+=2;goto B610870;
case 0x610872:c.instructions+=1;goto B610872;
case 0x610874:goto L610874;
case 0x610876:c.instructions+=1;goto B610876;
case 0x610878:goto L610878;
case 0x61087b:c.instructions+=3;goto B61087b;
case 0x61087d:c.instructions+=2;goto B61087d;
case 0x61087f:c.instructions+=1;goto B61087f;
case 0x610881:goto L610881;
case 0x610882:c.instructions+=3;goto B610882;
case 0x610887:c.instructions+=2;goto B610887;
case 0x610888:c.instructions+=1;goto B610888;
case 0x61088b:goto L61088b;
case 0x61088c:c.instructions+=3;goto B61088c;
case 0x61088e:c.instructions+=2;goto B61088e;
case 0x61088f:c.instructions+=1;goto B61088f;
case 0x6108a0:goto L6108a0;
case 0x6108a1:c.instructions+=5;goto B6108a1;
case 0x6108a5:c.instructions+=4;goto B6108a5;
case 0x6108a7:c.instructions+=3;goto B6108a7;
case 0x6108a9:c.instructions+=2;goto B6108a9;
case 0x6108ab:c.instructions+=1;goto B6108ab;
case 0x6108ad:goto L6108ad;
case 0x6108ae:c.instructions+=3;goto B6108ae;
case 0x6108b2:c.instructions+=2;goto B6108b2;
case 0x6108b3:c.instructions+=1;goto B6108b3;
case 0x6108b7:goto L6108b7;
case 0x6108ba:c.instructions+=2;goto B6108ba;
case 0x6108bc:c.instructions+=1;goto B6108bc;
case 0x6108be:goto L6108be;
case 0x6108c2:c.instructions+=1;goto B6108c2;
case 0x6108c4:goto L6108c4;
case 0x6108c8:c.instructions+=3;goto B6108c8;
case 0x6108cb:c.instructions+=2;goto B6108cb;
case 0x6108ce:c.instructions+=1;goto B6108ce;
case 0x6108cf:goto L6108cf;
case 0x6108d0:c.instructions+=2;goto B6108d0;
case 0x6108d2:c.instructions+=1;goto B6108d2;
case 0x6108d4:goto L6108d4;
case 0x6108d5:c.instructions+=1;goto B6108d5;
case 0x6108d6:goto L6108d6;
case 0x6108d7:c.instructions+=1;goto B6108d7;
case 0x6108e0:goto L6108e0;
case 0x6108e1:c.instructions+=4;goto B6108e1;
case 0x6108e5:c.instructions+=3;goto B6108e5;
case 0x6108e7:c.instructions+=2;goto B6108e7;
case 0x6108e9:c.instructions+=1;goto B6108e9;
case 0x6108eb:goto L6108eb;
case 0x6108ef:c.instructions+=1;goto B6108ef;
case 0x6108f0:goto L6108f0;
case 0x6108f3:c.instructions+=2;goto B6108f3;
case 0x6108f5:c.instructions+=1;goto B6108f5;
case 0x6108f7:goto L6108f7;
case 0x6108fb:c.instructions+=1;goto B6108fb;
case 0x6108fd:goto L6108fd;
case 0x610901:goto L610901;
case 0x610902:c.instructions+=2;goto B610902;
case 0x610904:c.instructions+=1;goto B610904;
case 0x610906:goto L610906;
case 0x610907:c.instructions+=1;goto B610907;
case 0x610910:goto L610910;
case 0x610911:c.instructions+=4;goto B610911;
case 0x610915:c.instructions+=3;goto B610915;
case 0x61091b:c.instructions+=2;goto B61091b;
case 0x61091d:c.instructions+=1;goto B61091d;
case 0x61091f:goto L61091f;
case 0x610923:c.instructions+=1;goto B610923;
case 0x610925:goto L610925;
case 0x61092b:c.instructions+=2;goto B61092b;
case 0x61092d:c.instructions+=1;goto B61092d;
case 0x61092f:goto L61092f;
case 0x610933:c.instructions+=1;goto B610933;
case 0x610935:goto L610935;
case 0x61093b:c.instructions+=2;goto B61093b;
case 0x61093d:c.instructions+=1;goto B61093d;
case 0x61093f:goto L61093f;
case 0x610944:goto L610944;
case 0x610946:c.instructions+=1;goto B610946;
case 0x610948:goto L610948;
case 0x61094e:c.instructions+=2;goto B61094e;
case 0x610950:c.instructions+=1;goto B610950;
case 0x610952:goto L610952;
case 0x610955:c.instructions+=2;goto B610955;
case 0x610957:c.instructions+=1;goto B610957;
case 0x610959:goto L610959;
case 0x61095c:c.instructions+=2;goto B61095c;
case 0x61095e:c.instructions+=1;goto B61095e;
case 0x610960:goto L610960;
case 0x610964:c.instructions+=1;goto B610964;
case 0x610966:goto L610966;
case 0x61096b:c.instructions+=2;goto B61096b;
case 0x61096c:c.instructions+=1;goto B61096c;
case 0x61096f:goto L61096f;
case 0x610971:c.instructions+=2;goto B610971;
case 0x610972:c.instructions+=1;goto B610972;
case 0x610980:goto L610980;
case 0x610981:c.instructions+=5;goto B610981;
case 0x610985:c.instructions+=4;goto B610985;
case 0x610989:c.instructions+=3;goto B610989;
case 0x61098a:c.instructions+=2;goto B61098a;
case 0x61098c:c.instructions+=1;goto B61098c;
case 0x61098e:goto L61098e;
case 0x610991:c.instructions+=2;goto B610991;
case 0x610992:c.instructions+=1;goto B610992;
case 0x610997:goto L610997;
case 0x610999:c.instructions+=1;goto B610999;
case 0x61099b:goto L61099b;
case 0x61099c:c.instructions+=3;goto B61099c;
case 0x61099e:c.instructions+=2;goto B61099e;
case 0x61099f:c.instructions+=1;goto B61099f;
case 0x6109a2:goto L6109a2;
case 0x6109a5:c.instructions+=5;goto B6109a5;
case 0x6109a6:c.instructions+=4;goto B6109a6;
case 0x6109a8:c.instructions+=3;goto B6109a8;
case 0x6109aa:c.instructions+=2;goto B6109aa;
case 0x6109ab:c.instructions+=1;goto B6109ab;
case 0x6109ad:goto L6109ad;
case 0x6109b0:goto L6109b0;
case 0x6109b2:c.instructions+=3;goto B6109b2;
case 0x6109b3:c.instructions+=2;goto B6109b3;
case 0x6109b8:c.instructions+=1;goto B6109b8;
case 0x6109bd:goto L6109bd;
case 0x6109bf:c.instructions+=1;goto B6109bf;
case 0x6109c1:goto L6109c1;
case 0x6109c4:c.instructions+=2;goto B6109c4;
case 0x6109c6:c.instructions+=1;goto B6109c6;
case 0x6109c8:goto L6109c8;
case 0x6109cb:c.instructions+=2;goto B6109cb;
case 0x6109cd:c.instructions+=1;goto B6109cd;
case 0x6109cf:goto L6109cf;
case 0x6109d1:c.instructions+=1;goto B6109d1;
case 0x6109d3:goto L6109d3;
case 0x6109d6:c.instructions+=3;goto B6109d6;
case 0x6109d8:c.instructions+=2;goto B6109d8;
case 0x6109da:c.instructions+=1;goto B6109da;
case 0x6109dc:goto L6109dc;
case 0x6109df:c.instructions+=2;goto B6109df;
case 0x6109e1:c.instructions+=1;goto B6109e1;
case 0x6109e3:goto L6109e3;
case 0x6109e5:c.instructions+=1;goto B6109e5;
case 0x6109e7:goto L6109e7;
case 0x6109ea:c.instructions+=3;goto B6109ea;
case 0x6109ec:c.instructions+=2;goto B6109ec;
case 0x6109ee:c.instructions+=1;goto B6109ee;
case 0x6109f0:goto L6109f0;
case 0x6109f3:c.instructions+=4;goto B6109f3;
case 0x6109f4:c.instructions+=3;goto B6109f4;
case 0x6109f7:c.instructions+=2;goto B6109f7;
case 0x6109f9:c.instructions+=1;goto B6109f9;
case 0x6109fb:goto L6109fb;
case 0x6109fc:c.instructions+=5;goto B6109fc;
case 0x6109fd:c.instructions+=4;goto B6109fd;
case 0x6109fe:c.instructions+=3;goto B6109fe;
case 0x610a03:c.instructions+=2;goto B610a03;
case 0x610a04:c.instructions+=1;goto B610a04;
case 0x610a07:goto L610a07;
case 0x610a08:c.instructions+=5;goto B610a08;
case 0x610a09:c.instructions+=4;goto B610a09;
case 0x610a0a:c.instructions+=3;goto B610a0a;
case 0x610a0c:c.instructions+=2;goto B610a0c;
case 0x610a0d:c.instructions+=1;goto B610a0d;
case 0x610a10:goto L610a10;
case 0x610a14:c.instructions+=4;goto B610a14;
case 0x610a18:c.instructions+=3;goto B610a18;
case 0x610a22:c.instructions+=2;goto B610a22;
case 0x610a27:c.instructions+=1;goto B610a27;
case 0x610a30:goto L610a30;
case 0x610a34:c.instructions+=4;goto B610a34;
case 0x610a38:c.instructions+=3;goto B610a38;
case 0x610a42:c.instructions+=2;goto B610a42;
case 0x610a47:c.instructions+=1;goto B610a47;
case 0x610a50:goto L610a50;
case 0x610a54:c.instructions+=4;goto B610a54;
case 0x610a58:c.instructions+=3;goto B610a58;
case 0x610a62:c.instructions+=2;goto B610a62;
case 0x610a67:c.instructions+=1;goto B610a67;
case 0x610a70:goto L610a70;
case 0x610a74:c.instructions+=7;goto B610a74;
case 0x610a75:c.instructions+=6;goto B610a75;
case 0x610a7b:c.instructions+=5;goto B610a7b;
case 0x610a7c:c.instructions+=4;goto B610a7c;
case 0x610a7e:c.instructions+=3;goto B610a7e;
case 0x610a80:c.instructions+=2;goto B610a80;
case 0x610a83:c.instructions+=1;goto B610a83;
case 0x610a85:goto L610a85;
case 0x610a87:c.instructions+=2;goto B610a87;
case 0x610a8d:c.instructions+=1;goto B610a8d;
case 0x610a8f:goto L610a8f;
case 0x610a95:c.instructions+=3;goto B610a95;
case 0x610a97:c.instructions+=2;goto B610a97;
case 0x610a9a:c.instructions+=1;goto B610a9a;
case 0x610a9c:goto L610a9c;
case 0x610a9e:c.instructions+=1;goto B610a9e;
case 0x610aa4:goto L610aa4;
case 0x610aaa:c.instructions+=1;goto B610aaa;
case 0x610aaf:goto L610aaf;
case 0x610ab3:c.instructions+=8;goto B610ab3;
case 0x610ab9:c.instructions+=7;goto B610ab9;
case 0x610abb:c.instructions+=6;goto B610abb;
case 0x610abd:c.instructions+=5;goto B610abd;
case 0x610ac1:c.instructions+=4;goto B610ac1;
case 0x610ac2:c.instructions+=3;goto B610ac2;
case 0x610ac6:c.instructions+=2;goto B610ac6;
case 0x610ac7:c.instructions+=1;goto B610ac7;
case 0x610ad0:goto L610ad0;
case 0x610ad1:c.instructions+=3;goto B610ad1;
case 0x610ad6:c.instructions+=2;goto B610ad6;
case 0x610ad8:c.instructions+=1;goto B610ad8;
case 0x610ada:goto L610ada;
case 0x610ade:c.instructions+=5;goto B610ade;
case 0x610ae2:c.instructions+=4;goto B610ae2;
case 0x610ae6:c.instructions+=3;goto B610ae6;
case 0x610aec:c.instructions+=2;goto B610aec;
case 0x610aed:c.instructions+=1;goto B610aed;
case 0x610aee:goto L610aee;
case 0x610af4:c.instructions+=2;goto B610af4;
case 0x610af5:c.instructions+=1;goto B610af5;
case 0x610b00:goto L610b00;
case 0x610b01:c.instructions+=4;goto B610b01;
case 0x610b02:c.instructions+=3;goto B610b02;
case 0x610b04:c.instructions+=2;goto B610b04;
case 0x610b09:c.instructions+=1;goto B610b09;
case 0x610b0e:goto L610b0e;
case 0x610b10:goto L610b10;
case 0x610b15:c.instructions+=20;goto B610b15;
case 0x610b1a:c.instructions+=19;goto B610b1a;
case 0x610b1f:c.instructions+=18;goto B610b1f;
case 0x610b29:c.instructions+=17;goto B610b29;
case 0x610b33:c.instructions+=16;goto B610b33;
case 0x610b3d:c.instructions+=15;goto B610b3d;
case 0x610b47:c.instructions+=14;goto B610b47;
case 0x610b51:c.instructions+=13;goto B610b51;
case 0x610b5b:c.instructions+=12;goto B610b5b;
case 0x610b65:c.instructions+=11;goto B610b65;
case 0x610b6f:c.instructions+=10;goto B610b6f;
case 0x610b79:c.instructions+=9;goto B610b79;
case 0x610b83:c.instructions+=8;goto B610b83;
case 0x610b8d:c.instructions+=7;goto B610b8d;
case 0x610b97:c.instructions+=6;goto B610b97;
case 0x610ba1:c.instructions+=5;goto B610ba1;
case 0x610bab:c.instructions+=4;goto B610bab;
case 0x610bb5:c.instructions+=3;goto B610bb5;
case 0x610bbf:c.instructions+=2;goto B610bbf;
case 0x610bc9:c.instructions+=1;goto B610bc9;
case 0x610bd3:goto L610bd3;
case 0x610bd5:goto L610bd5;
case 0x610bd6:c.instructions+=3;goto B610bd6;
case 0x610bdb:c.instructions+=2;goto B610bdb;
case 0x610bdc:c.instructions+=1;goto B610bdc;
case 0x610be0:goto L610be0;
case 0x610be3:c.instructions+=11;goto B610be3;
case 0x610be6:c.instructions+=10;goto B610be6;
case 0x610beb:c.instructions+=9;goto B610beb;
case 0x610bf1:c.instructions+=8;goto B610bf1;
case 0x610bf7:c.instructions+=7;goto B610bf7;
case 0x610bfa:c.instructions+=6;goto B610bfa;
case 0x610c00:c.instructions+=5;goto B610c00;
case 0x610c06:c.instructions+=4;goto B610c06;
case 0x610c09:c.instructions+=3;goto B610c09;
case 0x610c0f:c.instructions+=2;goto B610c0f;
case 0x610c15:c.instructions+=1;goto B610c15;
case 0x610c17:goto L610c17;
case 0x610c1c:c.instructions+=1;goto B610c1c;
case 0x610c20:goto L610c20;
case 0x610c23:c.instructions+=6;goto B610c23;
case 0x610c26:c.instructions+=5;goto B610c26;
case 0x610c28:c.instructions+=4;goto B610c28;
case 0x610c2b:c.instructions+=3;goto B610c2b;
case 0x610c2e:c.instructions+=2;goto B610c2e;
case 0x610c33:c.instructions+=1;goto B610c33;
case 0x610c35:goto L610c35;
case 0x610c3f:c.instructions+=1;goto B610c3f;
case 0x610c40:goto L610c40;
case 0x610c41:c.instructions+=4;goto B610c41;
case 0x610c42:c.instructions+=3;goto B610c42;
case 0x610c45:c.instructions+=2;goto B610c45;
case 0x610c4a:c.instructions+=1;goto B610c4a;
case 0x610c50:goto L610c50;
case 0x610c52:c.instructions+=2;goto B610c52;
case 0x610c54:c.instructions+=1;goto B610c54;
case 0x610c56:goto L610c56;
case 0x610c58:c.instructions+=2;goto B610c58;
case 0x610c5a:c.instructions+=1;goto B610c5a;
case 0x610c5c:goto L610c5c;
case 0x610c62:goto L610c62;
case 0x610c65:c.instructions+=2;goto B610c65;
case 0x610c66:c.instructions+=1;goto B610c66;
case 0x610c68:goto L610c68;
case 0x610c69:c.instructions+=2;goto B610c69;
case 0x610c6a:c.instructions+=1;goto B610c6a;
case 0x610c70:goto L610c70;
case 0x610c71:c.instructions+=9;goto B610c71;
case 0x610c75:c.instructions+=8;goto B610c75;
case 0x610c76:c.instructions+=7;goto B610c76;
case 0x610c77:c.instructions+=6;goto B610c77;
case 0x610c78:c.instructions+=5;goto B610c78;
case 0x610c7d:c.instructions+=4;goto B610c7d;
case 0x610c7f:c.instructions+=3;goto B610c7f;
case 0x610c81:c.instructions+=2;goto B610c81;
case 0x610c83:c.instructions+=1;goto B610c83;
case 0x610c88:goto L610c88;
case 0x610c8b:c.instructions+=1;goto B610c8b;
case 0x610c93:goto L610c93;
case 0x610c94:c.instructions+=2;goto B610c94;
case 0x610c96:c.instructions+=1;goto B610c96;
case 0x610c9b:goto L610c9b;
case 0x610c9e:c.instructions+=2;goto B610c9e;
case 0x610ca0:c.instructions+=1;goto B610ca0;
case 0x610ca2:goto L610ca2;
case 0x610ca5:c.instructions+=2;goto B610ca5;
case 0x610caa:c.instructions+=1;goto B610caa;
case 0x610cac:goto L610cac;
case 0x610cae:goto L610cae;
case 0x610cb2:c.instructions+=4;goto B610cb2;
case 0x610cb5:c.instructions+=3;goto B610cb5;
case 0x610cb6:c.instructions+=2;goto B610cb6;
case 0x610cba:c.instructions+=1;goto B610cba;
case 0x610cbc:goto L610cbc;
case 0x610cbe:c.instructions+=1;goto B610cbe;
case 0x610cc3:goto L610cc3;
case 0x610cc4:c.instructions+=4;goto B610cc4;
case 0x610cc5:c.instructions+=3;goto B610cc5;
case 0x610cc6:c.instructions+=2;goto B610cc6;
case 0x610cc7:c.instructions+=1;goto B610cc7;
case 0x610cd0:goto L610cd0;
case 0x610cd3:c.instructions+=2;goto B610cd3;
case 0x610cd5:c.instructions+=1;goto B610cd5;
case 0x610cd7:goto L610cd7;
case 0x610cd8:c.instructions+=2;goto B610cd8;
case 0x610cdd:c.instructions+=1;goto B610cdd;
case 0x610ce0:goto L610ce0;
case 0x610ce3:c.instructions+=1;goto B610ce3;
case 0x610ce5:goto L610ce5;
case 0x610ce7:c.instructions+=4;goto B610ce7;
case 0x610ced:c.instructions+=3;goto B610ced;
case 0x610cef:c.instructions+=2;goto B610cef;
case 0x610cf2:c.instructions+=1;goto B610cf2;
case 0x610cf4:goto L610cf4;
case 0x610cf9:c.instructions+=1;goto B610cf9;
case 0x610d00:goto L610d00;
case 0x610d02:c.instructions+=4;goto B610d02;
case 0x610d04:c.instructions+=3;goto B610d04;
case 0x610d06:c.instructions+=2;goto B610d06;
case 0x610d09:c.instructions+=1;goto B610d09;
case 0x610d0b:goto L610d0b;
case 0x610d0e:c.instructions+=2;goto B610d0e;
case 0x610d14:c.instructions+=1;goto B610d14;
case 0x610d16:goto L610d16;
case 0x610d19:c.instructions+=3;goto B610d19;
case 0x610d1c:c.instructions+=2;goto B610d1c;
case 0x610d22:c.instructions+=1;goto B610d22;
case 0x610d24:goto L610d24;
case 0x610d25:goto L610d25;
case 0x610d30:goto L610d30;
case 0x610d31:c.instructions+=32;goto B610d31;
case 0x610d33:c.instructions+=31;goto B610d33;
case 0x610d36:c.instructions+=30;goto B610d36;
case 0x610d39:c.instructions+=29;goto B610d39;
case 0x610d3c:c.instructions+=28;goto B610d3c;
case 0x610d3e:c.instructions+=27;goto B610d3e;
case 0x610d3f:c.instructions+=26;goto B610d3f;
case 0x610d42:c.instructions+=25;goto B610d42;
case 0x610d43:c.instructions+=24;goto B610d43;
case 0x610d46:c.instructions+=23;goto B610d46;
case 0x610d49:c.instructions+=22;goto B610d49;
case 0x610d4c:c.instructions+=21;goto B610d4c;
case 0x610d4f:c.instructions+=20;goto B610d4f;
case 0x610d53:c.instructions+=19;goto B610d53;
case 0x610d56:c.instructions+=18;goto B610d56;
case 0x610d59:c.instructions+=17;goto B610d59;
case 0x610d5c:c.instructions+=16;goto B610d5c;
case 0x610d5f:c.instructions+=15;goto B610d5f;
case 0x610d63:c.instructions+=14;goto B610d63;
case 0x610d66:c.instructions+=13;goto B610d66;
case 0x610d69:c.instructions+=12;goto B610d69;
case 0x610d6d:c.instructions+=11;goto B610d6d;
case 0x610d6f:c.instructions+=10;goto B610d6f;
case 0x610d71:c.instructions+=9;goto B610d71;
case 0x610d75:c.instructions+=8;goto B610d75;
case 0x610d77:c.instructions+=7;goto B610d77;
case 0x610d7b:c.instructions+=6;goto B610d7b;
case 0x610d7f:c.instructions+=5;goto B610d7f;
case 0x610d83:c.instructions+=4;goto B610d83;
case 0x610d87:c.instructions+=3;goto B610d87;
case 0x610d8b:c.instructions+=2;goto B610d8b;
case 0x610d91:c.instructions+=1;goto B610d91;
case 0x610d96:goto L610d96;
case 0x610d9c:c.instructions+=2;goto B610d9c;
case 0x610d9e:c.instructions+=1;goto B610d9e;
case 0x610da3:goto L610da3;
case 0x610da7:c.instructions+=3;goto B610da7;
case 0x610da9:c.instructions+=2;goto B610da9;
case 0x610dab:c.instructions+=1;goto B610dab;
case 0x610db0:goto L610db0;
case 0x610db3:c.instructions+=1;goto B610db3;
case 0x610db5:goto L610db5;
case 0x610dba:goto L610dba;
case 0x610dbd:c.instructions+=1;goto B610dbd;
case 0x610dbf:goto L610dbf;
case 0x610dc4:goto L610dc4;
case 0x610dc7:c.instructions+=1;goto B610dc7;
case 0x610dc9:goto L610dc9;
case 0x610dce:goto L610dce;
case 0x610dd0:c.instructions+=1;goto B610dd0;
case 0x610dd2:goto L610dd2;
case 0x610dd4:goto L610dd4;
case 0x610dd6:c.instructions+=1;goto B610dd6;
case 0x610dd8:goto L610dd8;
case 0x610dda:goto L610dda;
case 0x610ddc:c.instructions+=1;goto B610ddc;
case 0x610dde:goto L610dde;
case 0x610de0:goto L610de0;
case 0x610de3:c.instructions+=9;goto B610de3;
case 0x610de5:c.instructions+=8;goto B610de5;
case 0x610de8:c.instructions+=7;goto B610de8;
case 0x610deb:c.instructions+=6;goto B610deb;
case 0x610dec:c.instructions+=5;goto B610dec;
case 0x610df3:c.instructions+=4;goto B610df3;
case 0x610df4:c.instructions+=3;goto B610df4;
case 0x610df6:c.instructions+=2;goto B610df6;
case 0x610df7:c.instructions+=1;goto B610df7;
case 0x610e00:goto L610e00;
case 0x610e03:c.instructions+=6;goto B610e03;
case 0x610e04:c.instructions+=5;goto B610e04;
case 0x610e05:c.instructions+=4;goto B610e05;
case 0x610e09:c.instructions+=3;goto B610e09;
case 0x610e0b:c.instructions+=2;goto B610e0b;
case 0x610e0d:c.instructions+=1;goto B610e0d;
case 0x610e0f:goto L610e0f;
case 0x610e10:c.instructions+=3;goto B610e10;
case 0x610e12:c.instructions+=2;goto B610e12;
case 0x610e14:c.instructions+=1;goto B610e14;
case 0x610e19:goto L610e19;
case 0x610e1b:c.instructions+=2;goto B610e1b;
case 0x610e1d:c.instructions+=1;goto B610e1d;
case 0x610e1f:goto L610e1f;
case 0x610e20:goto L610e20;
case 0x610e22:c.instructions+=3;goto B610e22;
case 0x610e24:c.instructions+=2;goto B610e24;
case 0x610e29:c.instructions+=1;goto B610e29;
case 0x610e30:goto L610e30;
case 0x610e32:c.instructions+=1;goto B610e32;
case 0x610e34:goto L610e34;
case 0x610e37:c.instructions+=3;goto B610e37;
case 0x610e38:c.instructions+=2;goto B610e38;
case 0x610e3d:c.instructions+=1;goto B610e3d;
case 0x610e3f:goto L610e3f;
case 0x610e41:goto L610e41;
case 0x610e44:c.instructions+=10;goto B610e44;
case 0x610e47:c.instructions+=9;goto B610e47;
case 0x610e4a:c.instructions+=8;goto B610e4a;
case 0x610e4b:c.instructions+=7;goto B610e4b;
case 0x610e4e:c.instructions+=6;goto B610e4e;
case 0x610e52:c.instructions+=5;goto B610e52;
case 0x610e53:c.instructions+=4;goto B610e53;
case 0x610e57:c.instructions+=3;goto B610e57;
case 0x610e5b:c.instructions+=2;goto B610e5b;
case 0x610e5c:c.instructions+=1;goto B610e5c;
case 0x610e61:goto L610e61;
case 0x610e64:c.instructions+=1;goto B610e64;
case 0x610e6b:goto L610e6b;
case 0x610e6c:c.instructions+=2;goto B610e6c;
case 0x610e6e:c.instructions+=1;goto B610e6e;
case 0x610e73:goto L610e73;
case 0x610e75:c.instructions+=2;goto B610e75;
case 0x610e77:c.instructions+=1;goto B610e77;
case 0x610e79:goto L610e79;
case 0x610e7a:goto L610e7a;
case 0x610e7b:goto L610e7b;
case 0x610e7c:c.instructions+=3;goto B610e7c;
case 0x610e7d:c.instructions+=2;goto B610e7d;
case 0x610e80:c.instructions+=1;goto B610e80;
case 0x610e90:goto L610e90;
case 0x610e96:c.instructions+=1;goto B610e96;
case 0x610ea0:goto L610ea0;
case 0x610ea3:c.instructions+=10;goto B610ea3;
case 0x610ea4:c.instructions+=9;goto B610ea4;
case 0x610ea5:c.instructions+=8;goto B610ea5;
case 0x610ea7:c.instructions+=7;goto B610ea7;
case 0x610ea8:c.instructions+=6;goto B610ea8;
case 0x610eaa:c.instructions+=5;goto B610eaa;
case 0x610eab:c.instructions+=4;goto B610eab;
case 0x610eaf:c.instructions+=3;goto B610eaf;
case 0x610eb5:c.instructions+=2;goto B610eb5;
case 0x610eba:c.instructions+=1;goto B610eba;
case 0x610ec0:goto L610ec0;
case 0x610ec4:c.instructions+=2;goto B610ec4;
case 0x610ec6:c.instructions+=1;goto B610ec6;
case 0x610ec8:goto L610ec8;
case 0x610ece:c.instructions+=2;goto B610ece;
case 0x610ed0:c.instructions+=1;goto B610ed0;
case 0x610ed2:goto L610ed2;
case 0x610ed7:c.instructions+=4;goto B610ed7;
case 0x610edb:c.instructions+=3;goto B610edb;
case 0x610edf:c.instructions+=2;goto B610edf;
case 0x610ee5:c.instructions+=1;goto B610ee5;
case 0x610ee7:goto L610ee7;
case 0x610eed:goto L610eed;
case 0x610ef2:c.instructions+=1;goto B610ef2;
case 0x610ef4:goto L610ef4;
case 0x610ef6:c.instructions+=3;goto B610ef6;
case 0x610ef8:c.instructions+=2;goto B610ef8;
case 0x610efb:c.instructions+=1;goto B610efb;
case 0x610efd:goto L610efd;
case 0x610efe:c.instructions+=3;goto B610efe;
case 0x610f01:c.instructions+=2;goto B610f01;
case 0x610f03:c.instructions+=1;goto B610f03;
case 0x610f05:goto L610f05;
case 0x610f09:c.instructions+=4;goto B610f09;
case 0x610f0b:c.instructions+=3;goto B610f0b;
case 0x610f0d:c.instructions+=2;goto B610f0d;
case 0x610f0f:c.instructions+=1;goto B610f0f;
case 0x610f13:goto L610f13;
case 0x610f16:c.instructions+=4;goto B610f16;
case 0x610f17:c.instructions+=3;goto B610f17;
case 0x610f1a:c.instructions+=2;goto B610f1a;
case 0x610f20:c.instructions+=1;goto B610f20;
case 0x610f22:goto L610f22;
case 0x610f26:c.instructions+=6;goto B610f26;
case 0x610f27:c.instructions+=5;goto B610f27;
case 0x610f28:c.instructions+=4;goto B610f28;
case 0x610f29:c.instructions+=3;goto B610f29;
case 0x610f2a:c.instructions+=2;goto B610f2a;
case 0x610f2d:c.instructions+=1;goto B610f2d;
case 0x610f30:goto L610f30;
case 0x610f31:c.instructions+=16;goto B610f31;
case 0x610f32:c.instructions+=15;goto B610f32;
case 0x610f36:c.instructions+=14;goto B610f36;
case 0x610f37:c.instructions+=13;goto B610f37;
case 0x610f39:c.instructions+=12;goto B610f39;
case 0x610f3e:c.instructions+=11;goto B610f3e;
case 0x610f42:c.instructions+=10;goto B610f42;
case 0x610f46:c.instructions+=9;goto B610f46;
case 0x610f4c:c.instructions+=8;goto B610f4c;
case 0x610f50:c.instructions+=7;goto B610f50;
case 0x610f54:c.instructions+=6;goto B610f54;
case 0x610f56:c.instructions+=5;goto B610f56;
case 0x610f5a:c.instructions+=4;goto B610f5a;
case 0x610f60:c.instructions+=3;goto B610f60;
case 0x610f62:c.instructions+=2;goto B610f62;
case 0x610f65:c.instructions+=1;goto B610f65;
case 0x610f67:goto L610f67;
case 0x610f6b:c.instructions+=5;goto B610f6b;
case 0x610f71:c.instructions+=4;goto B610f71;
case 0x610f75:c.instructions+=3;goto B610f75;
case 0x610f77:c.instructions+=2;goto B610f77;
case 0x610f7a:c.instructions+=1;goto B610f7a;
case 0x610f7c:goto L610f7c;
case 0x610f7e:c.instructions+=2;goto B610f7e;
case 0x610f86:c.instructions+=1;goto B610f86;
case 0x610f88:goto L610f88;
case 0x610f8e:goto L610f8e;
case 0x610f92:goto L610f92;
case 0x610f96:c.instructions+=3;goto B610f96;
case 0x610f98:c.instructions+=2;goto B610f98;
case 0x610f9b:c.instructions+=1;goto B610f9b;
case 0x610f9d:goto L610f9d;
case 0x610fa1:c.instructions+=6;goto B610fa1;
case 0x610fa2:c.instructions+=5;goto B610fa2;
case 0x610fa3:c.instructions+=4;goto B610fa3;
case 0x610fa6:c.instructions+=3;goto B610fa6;
case 0x610fa7:c.instructions+=2;goto B610fa7;
case 0x610fa9:c.instructions+=1;goto B610fa9;
case 0x610fae:goto L610fae;
case 0x610fb0:c.instructions+=1;goto B610fb0;
case 0x610fb5:goto L610fb5;
case 0x610fb7:c.instructions+=2;goto B610fb7;
case 0x610fbd:c.instructions+=1;goto B610fbd;
case 0x610fbf:goto L610fbf;
case 0x610fc3:c.instructions+=4;goto B610fc3;
case 0x610fc9:c.instructions+=3;goto B610fc9;
case 0x610fcb:c.instructions+=2;goto B610fcb;
case 0x610fce:c.instructions+=1;goto B610fce;
case 0x610fd0:goto L610fd0;
case 0x610fd4:c.instructions+=4;goto B610fd4;
case 0x610fd5:c.instructions+=3;goto B610fd5;
case 0x610fd6:c.instructions+=2;goto B610fd6;
case 0x610fd8:c.instructions+=1;goto B610fd8;
case 0x610fdd:goto L610fdd;
case 0x610fde:c.instructions+=4;goto B610fde;
case 0x610fdf:c.instructions+=3;goto B610fdf;
case 0x610fe0:c.instructions+=2;goto B610fe0;
case 0x610fe1:c.instructions+=1;goto B610fe1;
case 0x610fe4:goto L610fe4;
case 0x610fea:goto L610fea;
case 0x610feb:goto L610feb;
case 0x610fec:c.instructions+=3;goto B610fec;
case 0x610fed:c.instructions+=2;goto B610fed;
case 0x610fee:c.instructions+=1;goto B610fee;
default:missing_instruction(c.pc);}
B610000:L610000:{c.instructions+=4;NFSU2_TR(0x610000);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B610004:{NFSU2_TR(0x610004);
__builtin_memmove((R+4),gp(0x8a1cb0),4);
}
B61000a:{NFSU2_TR(0x61000a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B61000d:{NFSU2_TR(0x61000d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610010:L610010:{c.instructions+=4;NFSU2_TR(0x610010);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B610014:{NFSU2_TR(0x610014);
__builtin_memmove((R+4),gp(0x8a1cb8),4);
}
B61001a:{NFSU2_TR(0x61001a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B61001d:{NFSU2_TR(0x61001d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610020:L610020:{c.instructions+=3;NFSU2_TR(0x610020);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610024:{NFSU2_TR(0x610024);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x3455d6bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3455d6bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x3455d6bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610029:{NFSU2_TR(0x610029);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L610060;}}
}
B61002b:L61002b:{c.instructions+=1;NFSU2_TR(0x61002b);
if(r1(R+518)){{goto L610096;}}
}
B61002d:L61002d:{c.instructions+=2;NFSU2_TR(0x61002d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x163087ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x163087ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x163087ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610032:{NFSU2_TR(0x610032);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L61004b;}}
}
B610034:L610034:{c.instructions+=1;NFSU2_TR(0x610034);
if(r1(R+518)){{goto L610096;}}
}
B610036:L610036:{c.instructions+=2;NFSU2_TR(0x610036);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xdb7cull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xdb7cull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xdb7cull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61003b:{NFSU2_TR(0x61003b);
if(r1(R+518)){{goto L610096;}}
}
B61003d:L61003d:{c.instructions+=2;NFSU2_TR(0x61003d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xdc00ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xdc00ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xdc00ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610042:{NFSU2_TR(0x610042);
if(r1(R+518)){{goto L610096;}}
}
B610044:L610044:{c.instructions+=2;NFSU2_TR(0x610044);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xac6d1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xac6d1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xac6d1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610049:{NFSU2_TR(0x610049);
{goto L610091;}
}
B61004b:L61004b:{c.instructions+=2;NFSU2_TR(0x61004b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x150fb80ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x150fb80ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x150fb80ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610050:{NFSU2_TR(0x610050);
if(r1(R+518)){{goto L610096;}}
}
B610052:L610052:{c.instructions+=2;NFSU2_TR(0x610052);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x290c04dull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x290c04dull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x290c04dull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610057:{NFSU2_TR(0x610057);
if(r1(R+518)){{goto L610096;}}
}
B610059:L610059:{c.instructions+=2;NFSU2_TR(0x610059);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2ca04dfull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2ca04dfull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2ca04dfull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61005e:{NFSU2_TR(0x61005e);
{goto L610091;}
}
B610060:L610060:{c.instructions+=2;NFSU2_TR(0x610060);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x72b2e513ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x72b2e513ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x72b2e513ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610065:{NFSU2_TR(0x610065);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L61007e;}}
}
B610067:L610067:{c.instructions+=1;NFSU2_TR(0x610067);
if(r1(R+518)){{goto L610096;}}
}
B610069:L610069:{c.instructions+=2;NFSU2_TR(0x610069);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x3b8c48aull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3b8c48aull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x3b8c48aull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61006e:{NFSU2_TR(0x61006e);
if(r1(R+518)){{goto L610096;}}
}
B610070:L610070:{c.instructions+=2;NFSU2_TR(0x610070);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x4fd0522ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4fd0522ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x4fd0522ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610075:{NFSU2_TR(0x610075);
if(r1(R+518)){{goto L610096;}}
}
B610077:L610077:{c.instructions+=2;NFSU2_TR(0x610077);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x545aec60ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x545aec60ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x545aec60ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61007c:{NFSU2_TR(0x61007c);
{goto L610091;}
}
B61007e:L61007e:{c.instructions+=2;NFSU2_TR(0x61007e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7502da84ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7502da84ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7502da84ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610083:{NFSU2_TR(0x610083);
if(r1(R+518)){{goto L610096;}}
}
B610085:L610085:{c.instructions+=2;NFSU2_TR(0x610085);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x79aebfecull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x79aebfecull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x79aebfecull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61008a:{NFSU2_TR(0x61008a);
if(r1(R+518)){{goto L610096;}}
}
B61008c:L61008c:{c.instructions+=1;NFSU2_TR(0x61008c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xbe48375eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xbe48375eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xbe48375eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610091:L610091:{c.instructions+=1;NFSU2_TR(0x610091);
if(r1(R+518)){{goto L610096;}}
}
B610093:L610093:{c.instructions+=2;NFSU2_TR(0x610093);
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
B610095:{NFSU2_TR(0x610095);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610096:L610096:{c.instructions+=2;NFSU2_TR(0x610096);
w4(R+0,u32(0x1ull));
}
B61009b:{NFSU2_TR(0x61009b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6100a0:L6100a0:{c.instructions+=3;NFSU2_TR(0x6100a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6100a4:{NFSU2_TR(0x6100a4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x30236eeull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x30236eeull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x30236eeull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6100a9:{NFSU2_TR(0x6100a9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6100d9;}}
}
B6100ab:L6100ab:{c.instructions+=1;NFSU2_TR(0x6100ab);
if(r1(R+518)){{goto L610108;}}
}
B6100ad:L6100ad:{c.instructions+=2;NFSU2_TR(0x6100ad);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xacc9ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xacc9ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xacc9ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6100b2:{NFSU2_TR(0x6100b2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6100cb;}}
}
B6100b4:L6100b4:{c.instructions+=1;NFSU2_TR(0x6100b4);
if(r1(R+518)){{goto L610108;}}
}
B6100b6:L6100b6:{c.instructions+=2;NFSU2_TR(0x6100b6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x453ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x453ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x453ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6100bb:{NFSU2_TR(0x6100bb);
if(r1(R+518)){{goto L610108;}}
}
B6100bd:L6100bd:{c.instructions+=2;NFSU2_TR(0x6100bd);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x6e7ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6e7ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x6e7ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6100c2:{NFSU2_TR(0x6100c2);
if(r1(R+518)){{goto L610108;}}
}
B6100c4:L6100c4:{c.instructions+=2;NFSU2_TR(0x6100c4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xa86eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xa86eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xa86eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6100c9:{NFSU2_TR(0x6100c9);
{goto L610103;}
}
B6100cb:L6100cb:{c.instructions+=2;NFSU2_TR(0x6100cb);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xdc01ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xdc01ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xdc01ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6100d0:{NFSU2_TR(0x6100d0);
if(r1(R+518)){{goto L610108;}}
}
B6100d2:L6100d2:{c.instructions+=2;NFSU2_TR(0x6100d2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x293fad7ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x293fad7ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x293fad7ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6100d7:{NFSU2_TR(0x6100d7);
{goto L610103;}
}
B6100d9:L6100d9:{c.instructions+=2;NFSU2_TR(0x6100d9);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x4b10070aull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4b10070aull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x4b10070aull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6100de:{NFSU2_TR(0x6100de);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6100f7;}}
}
B6100e0:L6100e0:{c.instructions+=1;NFSU2_TR(0x6100e0);
if(r1(R+518)){{goto L610108;}}
}
B6100e2:L6100e2:{c.instructions+=2;NFSU2_TR(0x6100e2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9d2eff6ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9d2eff6ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9d2eff6ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6100e7:{NFSU2_TR(0x6100e7);
if(r1(R+518)){{goto L610108;}}
}
B6100e9:L6100e9:{c.instructions+=2;NFSU2_TR(0x6100e9);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2d7c9b5dull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2d7c9b5dull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2d7c9b5dull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6100ee:{NFSU2_TR(0x6100ee);
if(r1(R+518)){{goto L610108;}}
}
B6100f0:L6100f0:{c.instructions+=2;NFSU2_TR(0x6100f0);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x35165819ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x35165819ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x35165819ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6100f5:{NFSU2_TR(0x6100f5);
{goto L610103;}
}
B6100f7:L6100f7:{c.instructions+=2;NFSU2_TR(0x6100f7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xcf4458f8ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xcf4458f8ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xcf4458f8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6100fc:{NFSU2_TR(0x6100fc);
if(r1(R+518)){{goto L610108;}}
}
B6100fe:L6100fe:{c.instructions+=1;NFSU2_TR(0x6100fe);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xf77c13ebull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xf77c13ebull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xf77c13ebull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610103:L610103:{c.instructions+=1;NFSU2_TR(0x610103);
if(r1(R+518)){{goto L610108;}}
}
B610105:L610105:{c.instructions+=2;NFSU2_TR(0x610105);
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
B610107:{NFSU2_TR(0x610107);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610108:L610108:{c.instructions+=2;NFSU2_TR(0x610108);
w4(R+0,u32(0x1ull));
}
B61010d:{NFSU2_TR(0x61010d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610110:L610110:{c.instructions+=5;NFSU2_TR(0x610110);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610114:{NFSU2_TR(0x610114);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B61011a:{NFSU2_TR(0x61011a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B610120:{NFSU2_TR(0x610120);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610122:{NFSU2_TR(0x610122);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610130:L610130:{c.instructions+=5;NFSU2_TR(0x610130);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B610134:{NFSU2_TR(0x610134);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610135:{NFSU2_TR(0x610135);
__builtin_memmove((R+24),gp(0x8a1ccc),4);
}
B61013b:{NFSU2_TR(0x61013b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61013d:{NFSU2_TR(0x61013d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B610143:L610143:{c.instructions+=2;NFSU2_TR(0x610143);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B610145:{NFSU2_TR(0x610145);
if(r1(R+518)){{goto L610157;}}
}
B610147:L610147:{c.instructions+=4;NFSU2_TR(0x610147);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B610148:{NFSU2_TR(0x610148);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x890ull))));
}
B61014e:{NFSU2_TR(0x61014e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B610151:{NFSU2_TR(0x610151);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610143u);}goto L610143;}}
}
B610153:L610153:{c.instructions+=3;NFSU2_TR(0x610153);
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
B610155:{NFSU2_TR(0x610155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610156:{NFSU2_TR(0x610156);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610157:L610157:{c.instructions+=4;NFSU2_TR(0x610157);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B61015d:{NFSU2_TR(0x61015d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61015f:{NFSU2_TR(0x61015f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610160:{NFSU2_TR(0x610160);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610170:L610170:{c.instructions+=2;NFSU2_TR(0x610170);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B610176:{NFSU2_TR(0x610176);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610180:L610180:{c.instructions+=3;NFSU2_TR(0x610180);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B610183:{NFSU2_TR(0x610183);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B610186:{NFSU2_TR(0x610186);
if(r1(R+518)){{goto L61019b;}}
}
B610188:L610188:{c.instructions+=2;NFSU2_TR(0x610188);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610189:{NFSU2_TR(0x610189);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61018eull));
TAIL_STATIC(0x57cac0u,57c);
}
B61018e:L61018e:{c.instructions+=3;NFSU2_TR(0x61018e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B610191:{NFSU2_TR(0x610191);
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
B610193:{NFSU2_TR(0x610193);
if(r1(R+518)){{goto L61019b;}}
}
B610195:L610195:{c.instructions+=2;NFSU2_TR(0x610195);
w4(R+0,u32(0x1ull));
}
B61019a:{NFSU2_TR(0x61019a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61019b:L61019b:{c.instructions+=2;NFSU2_TR(0x61019b);
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
B61019d:{NFSU2_TR(0x61019d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6101a0:L6101a0:{c.instructions+=8;NFSU2_TR(0x6101a0);
__builtin_memmove((R+8),gp(0x8a1cd8),4);
}
B6101a6:{NFSU2_TR(0x6101a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6101a7:{NFSU2_TR(0x6101a7);
__builtin_memmove((R+12),gp(0x8a1cd4),4);
}
B6101ad:{NFSU2_TR(0x6101ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6101ae:{NFSU2_TR(0x6101ae);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6101b0:{NFSU2_TR(0x6101b0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6101b2:{NFSU2_TR(0x6101b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6101b3:{NFSU2_TR(0x6101b3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6101d1;}}
}
B6101b5:L6101b5:{c.instructions+=4;NFSU2_TR(0x6101b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6101b9:{NFSU2_TR(0x6101b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6101bd:{NFSU2_TR(0x6101bd);
__builtin_memmove((R+0),(R+12),4);
}
B6101bf:{NFSU2_TR(0x6101bf);
}
B6101c0:L6101c0:{c.instructions+=2;NFSU2_TR(0x6101c0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6101c2:{NFSU2_TR(0x6101c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6101c9;}}
}
B6101c4:L6101c4:{c.instructions+=2;NFSU2_TR(0x6101c4);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6101c7:{NFSU2_TR(0x6101c7);
if(r1(R+518)){{goto L6101db;}}
}
B6101c9:L6101c9:{c.instructions+=4;NFSU2_TR(0x6101c9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6101ca:{NFSU2_TR(0x6101ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B6101cd:{NFSU2_TR(0x6101cd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6101cf:{NFSU2_TR(0x6101cf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6101c0u);}goto L6101c0;}}
}
B6101d1:L6101d1:{c.instructions+=4;NFSU2_TR(0x6101d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6101d5:{NFSU2_TR(0x6101d5);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6101d7:{NFSU2_TR(0x6101d7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6101d9:{NFSU2_TR(0x6101d9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6101db:L6101db:{c.instructions+=4;NFSU2_TR(0x6101db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6101dc:{NFSU2_TR(0x6101dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6101dd:{NFSU2_TR(0x6101dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6101de:{NFSU2_TR(0x6101de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6101e0:L6101e0:{c.instructions+=7;NFSU2_TR(0x6101e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6101e4:{NFSU2_TR(0x6101e4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6101ea:{NFSU2_TR(0x6101ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6101eb:{NFSU2_TR(0x6101eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6101ec:{NFSU2_TR(0x6101ec);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8a1ccc))));
}
B6101f2:{NFSU2_TR(0x6101f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6101f3:{NFSU2_TR(0x6101f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6101f8ull));
TAIL_STATIC(0x43db50u,43d);
}
B6101f8:L6101f8:{c.instructions+=6;NFSU2_TR(0x6101f8);
__builtin_memmove((R+24),gp(0x8a1cf0),4);
}
B6101fe:{NFSU2_TR(0x6101fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B610202:{NFSU2_TR(0x610202);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B610205:{NFSU2_TR(0x610205);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B610207:{NFSU2_TR(0x610207);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B610209:{NFSU2_TR(0x610209);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L610222;}}
}
B61020b:L61020b:{c.instructions+=1;NFSU2_TR(0x61020b);
__builtin_memmove((R+4),gp(0x8a1cec),4);
}
B610211:L610211:{c.instructions+=2;NFSU2_TR(0x610211);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B610213:{NFSU2_TR(0x610213);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61021a;}}
}
B610215:L610215:{c.instructions+=2;NFSU2_TR(0x610215);
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
B610218:{NFSU2_TR(0x610218);
if(r1(R+518)){{goto L61025d;}}
}
B61021a:L61021a:{c.instructions+=4;NFSU2_TR(0x61021a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B61021b:{NFSU2_TR(0x61021b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B61021e:{NFSU2_TR(0x61021e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B610220:{NFSU2_TR(0x610220);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610211u);}goto L610211;}}
}
B610222:L610222:{c.instructions+=7;NFSU2_TR(0x610222);
__builtin_memmove((R+8),gp(0x8a1ce8),4);
}
B610228:{NFSU2_TR(0x610228);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B61022b:{NFSU2_TR(0x61022b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B61022e:{NFSU2_TR(0x61022e);
__builtin_memmove(gp(0x8a0380),(R+24),4);
}
B610234:{NFSU2_TR(0x610234);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B610238:{NFSU2_TR(0x610238);
__builtin_memmove(gp(0x8a0384),(R+4),4);
}
B61023e:{NFSU2_TR(0x61023e);
w4(R+4,u32(0x8a0380ull));
}
B610243:L610243:{c.instructions+=2;NFSU2_TR(0x610243);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B610246:{NFSU2_TR(0x610246);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61024a;}}
}
B610248:L610248:{c.instructions+=1;NFSU2_TR(0x610248);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B61024a:L61024a:{c.instructions+=3;NFSU2_TR(0x61024a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B61024d:{NFSU2_TR(0x61024d);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x8a0388ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8a0388ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8a0388ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610253:{NFSU2_TR(0x610253);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610243u);}goto L610243;}}
}
B610255:L610255:{c.instructions+=4;NFSU2_TR(0x610255);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B610256:{NFSU2_TR(0x610256);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610257:{NFSU2_TR(0x610257);
w4(R+0,u32(0x8a0380ull));
}
B61025c:{NFSU2_TR(0x61025c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61025d:L61025d:{c.instructions+=4;NFSU2_TR(0x61025d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61025e:{NFSU2_TR(0x61025e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61025f:{NFSU2_TR(0x61025f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B610262:{NFSU2_TR(0x610262);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610270:L610270:{c.instructions+=19;NFSU2_TR(0x610270);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610274:{NFSU2_TR(0x610274);
__builtin_memmove((R+8),(R+4),4);
}
B610276:{NFSU2_TR(0x610276);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B61027a:{NFSU2_TR(0x61027a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B61027c:{NFSU2_TR(0x61027c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B610280:{NFSU2_TR(0x610280);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B610283:{NFSU2_TR(0x610283);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610284:{NFSU2_TR(0x610284);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610285:{NFSU2_TR(0x610285);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B610288:{NFSU2_TR(0x610288);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B61028a:{NFSU2_TR(0x61028a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61028c:{NFSU2_TR(0x61028c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61028f:{NFSU2_TR(0x61028f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B610293:{NFSU2_TR(0x610293);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x580ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B61029a:{NFSU2_TR(0x61029a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x581ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6102a0:{NFSU2_TR(0x6102a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x584ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6102a6:{NFSU2_TR(0x6102a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6102ac:{NFSU2_TR(0x6102ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x590ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6102b2:{NFSU2_TR(0x6102b2);
w4(R+4,u32(0xaaull));
}
B6102b7:L6102b7:{c.instructions+=1;NFSU2_TR(0x6102b7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6102b9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6102b7u);}goto L6102b7;}
}
B6102b9:L6102b9:{c.instructions+=3;NFSU2_TR(0x6102b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x838ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6102bf:{NFSU2_TR(0x6102bf);
w4(R+4,u32(0x2aull));
}
B6102c4:{NFSU2_TR(0x6102c4);
w4(R+0,u32(0x1010101ull));
}
B6102c9:L6102c9:{c.instructions+=1;NFSU2_TR(0x6102c9);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6102cb;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6102c9u);}goto L6102c9;}
}
B6102cb:L6102cb:{c.instructions+=6;NFSU2_TR(0x6102cb);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B6102cd:{NFSU2_TR(0x6102cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6102cf:{NFSU2_TR(0x6102cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6102d0:{NFSU2_TR(0x6102d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6102d3:{NFSU2_TR(0x6102d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6102d9:{NFSU2_TR(0x6102d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6102deull));
TAIL_STATIC(0x5a7890u,5a7);
}
B6102de:L6102de:{c.instructions+=3;NFSU2_TR(0x6102de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6102df:{NFSU2_TR(0x6102df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6102e0:{NFSU2_TR(0x6102e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6102f0:L6102f0:{c.instructions+=3;NFSU2_TR(0x6102f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6102f4:{NFSU2_TR(0x6102f4);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6102fb:{NFSU2_TR(0x6102fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610300:L610300:{c.instructions+=2;NFSU2_TR(0x610300);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x584ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610306:{NFSU2_TR(0x610306);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610310:L610310:{c.instructions+=5;NFSU2_TR(0x610310);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B610312:{NFSU2_TR(0x610312);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B610318:{NFSU2_TR(0x610318);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B61031e:{NFSU2_TR(0x61031e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B610320:{NFSU2_TR(0x610320);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L610325;}}
}
B610322:L610322:{c.instructions+=2;NFSU2_TR(0x610322);
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
B610324:{NFSU2_TR(0x610324);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610325:L610325:{c.instructions+=3;NFSU2_TR(0x610325);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B610328:{NFSU2_TR(0x610328);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610329:{NFSU2_TR(0x610329);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61032eull));
TAIL_STATIC(0x43db50u,43d);
}
B61032e:L61032e:{c.instructions+=3;NFSU2_TR(0x61032e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61032f:{NFSU2_TR(0x61032f);
u8 U[4];
w4(U+0,u32(0x7a8460ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610334:{NFSU2_TR(0x610334);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610339ull));
TAIL_STATIC(0x43db80u,43d);
}
B610339:L610339:{c.instructions+=2;NFSU2_TR(0x610339);
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
B61033c:{NFSU2_TR(0x61033c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610340:L610340:{c.instructions+=9;NFSU2_TR(0x610340);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610341:{NFSU2_TR(0x610341);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B610345:{NFSU2_TR(0x610345);
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
B610347:{NFSU2_TR(0x610347);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610348:{NFSU2_TR(0x610348);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61034c:{NFSU2_TR(0x61034c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61034d:{NFSU2_TR(0x61034d);
__builtin_memmove((R+24),(R+4),4);
}
B61034f:{NFSU2_TR(0x61034f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B610357:{NFSU2_TR(0x610357);
if(r1(R+518)){{goto L6103c1;}}
}
B610359:L610359:{c.instructions+=1;NFSU2_TR(0x610359);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61035eull));
TAIL_STATIC(0x599430u,599);
}
B61035e:L61035e:{c.instructions+=4;NFSU2_TR(0x61035e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610362:{NFSU2_TR(0x610362);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B610364:{NFSU2_TR(0x610364);
__builtin_memmove((R+4),(R+0),4);
}
B610366:{NFSU2_TR(0x610366);
if(r1(R+518)){{goto L610370;}}
}
B610368:L610368:{c.instructions+=2;NFSU2_TR(0x610368);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61036e:{NFSU2_TR(0x61036e);
{goto L61037b;}
}
B610370:L610370:{c.instructions+=4;NFSU2_TR(0x610370);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B610373:{NFSU2_TR(0x610373);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610376:{NFSU2_TR(0x610376);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B610379:{NFSU2_TR(0x610379);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B61037b:L61037b:{c.instructions+=7;NFSU2_TR(0x61037b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61037f:{NFSU2_TR(0x61037f);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610382:{NFSU2_TR(0x610382);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610386:{NFSU2_TR(0x610386);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61038c:{NFSU2_TR(0x61038c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61038e:{NFSU2_TR(0x61038e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B610391:{NFSU2_TR(0x610391);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6103da;}}
}
B610393:L610393:{c.instructions+=6;NFSU2_TR(0x610393);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610397:{NFSU2_TR(0x610397);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61039d:{NFSU2_TR(0x61039d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6103a1:{NFSU2_TR(0x6103a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6103a3:{NFSU2_TR(0x6103a3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6103a6:{NFSU2_TR(0x6103a6);
if(r1(R+514)){{goto L6103b0;}}
}
B6103a8:L6103a8:{c.instructions+=2;NFSU2_TR(0x6103a8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6103aa:{NFSU2_TR(0x6103aa);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6103b0:L6103b0:{c.instructions+=7;NFSU2_TR(0x6103b0);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6103b3:{NFSU2_TR(0x6103b3);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6103b5:{NFSU2_TR(0x6103b5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6103b7:{NFSU2_TR(0x6103b7);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6103b9:{NFSU2_TR(0x6103b9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6103bd:{NFSU2_TR(0x6103bd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6103bf:{NFSU2_TR(0x6103bf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6103c1:L6103c1:{c.instructions+=7;NFSU2_TR(0x6103c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6103c5:{NFSU2_TR(0x6103c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6103c9:{NFSU2_TR(0x6103c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6103ca:{NFSU2_TR(0x6103ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6103cb:{NFSU2_TR(0x6103cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6103cc:{NFSU2_TR(0x6103cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6103cf:{NFSU2_TR(0x6103cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6103d4ull));
TAIL_STATIC(0x5b6ad0u,5b6);
}
B6103d4:L6103d4:{c.instructions+=4;NFSU2_TR(0x6103d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6103d5:{NFSU2_TR(0x6103d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6103d6:{NFSU2_TR(0x6103d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6103d7:{NFSU2_TR(0x6103d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6103da:L6103da:{c.instructions+=2;NFSU2_TR(0x6103da);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6103e0:{NFSU2_TR(0x6103e0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6103b0u);}goto L6103b0;}
}
B6103f0:L6103f0:{c.instructions+=3;NFSU2_TR(0x6103f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6103f4:{NFSU2_TR(0x6103f4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x23ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x23ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6103f7:{NFSU2_TR(0x6103f7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6104de;}}
}
B6103fd:L6103fd:{c.instructions+=2;NFSU2_TR(0x6103fd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B610400:{NFSU2_TR(0x610400);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6104de;}}
}
B610406:L610406:{c.instructions+=3;NFSU2_TR(0x610406);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61040c:{NFSU2_TR(0x61040c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61040e:{NFSU2_TR(0x61040e);
if(r1(R+518)){{goto L6104de;}}
}
B610414:L610414:{c.instructions+=5;NFSU2_TR(0x610414);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B610417:{NFSU2_TR(0x610417);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B61041a:{NFSU2_TR(0x61041a);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B61041d:{NFSU2_TR(0x61041d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61041f:{NFSU2_TR(0x61041f);
if(r1(R+518)){{goto L6104de;}}
}
B610425:L610425:{c.instructions+=2;NFSU2_TR(0x610425);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B610426:{NFSU2_TR(0x610426);
if(r1(R+518)){{goto L6104b9;}}
}
B61042c:L61042c:{c.instructions+=2;NFSU2_TR(0x61042c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B61042d:{NFSU2_TR(0x61042d);
if(r1(R+518)){{goto L610485;}}
}
B61042f:L61042f:{c.instructions+=2;NFSU2_TR(0x61042f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B610430:{NFSU2_TR(0x610430);
if(r1(R+518)){{goto L610445;}}
}
B610432:L610432:{c.instructions+=7;NFSU2_TR(0x610432);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B610434:{NFSU2_TR(0x610434);
w4(R+0,u32(0x23ull));
}
B610439:{NFSU2_TR(0x610439);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B61043b:{NFSU2_TR(0x61043b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B61043d:{NFSU2_TR(0x61043d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B610440:{NFSU2_TR(0x610440);
__builtin_memmove((R+0),(R+4),4);
}
B610442:{NFSU2_TR(0x610442);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610445:L610445:{c.instructions+=4;NFSU2_TR(0x610445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B610447:{NFSU2_TR(0x610447);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffbull))));
__builtin_memmove((R+0),(U+0),4);
}
B61044a:{NFSU2_TR(0x61044a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x19ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x19ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x19ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61044d:{NFSU2_TR(0x61044d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L610471;}}
}
B61044f:L61044f:{c.instructions+=2;NFSU2_TR(0x61044f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6104f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B610456:{NFSU2_TR(0x610456);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6104e4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B61045d:L61045d:{c.instructions+=7;NFSU2_TR(0x61045d);
w4(R+0,u32(0xbull));
}
B610462:{NFSU2_TR(0x610462);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
}
B610465:{NFSU2_TR(0x610465);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B610467:{NFSU2_TR(0x610467);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B610469:{NFSU2_TR(0x610469);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B61046c:{NFSU2_TR(0x61046c);
__builtin_memmove((R+0),(R+4),4);
}
B61046e:{NFSU2_TR(0x61046e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610471:L610471:{c.instructions+=7;NFSU2_TR(0x610471);
w4(R+0,u32(0x4ull));
}
B610476:{NFSU2_TR(0x610476);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
}
B610479:{NFSU2_TR(0x610479);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B61047b:{NFSU2_TR(0x61047b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B61047d:{NFSU2_TR(0x61047d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B610480:{NFSU2_TR(0x610480);
__builtin_memmove((R+0),(R+4),4);
}
B610482:{NFSU2_TR(0x610482);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610485:L610485:{c.instructions+=3;NFSU2_TR(0x610485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B610487:{NFSU2_TR(0x610487);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61048a:{NFSU2_TR(0x61048a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6104a5;}}
}
B61048c:L61048c:{c.instructions+=2;NFSU2_TR(0x61048c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61048f:{NFSU2_TR(0x61048f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6104a5;}}
}
B610491:L610491:{c.instructions+=7;NFSU2_TR(0x610491);
w4(R+0,u32(0x5ull));
}
B610496:{NFSU2_TR(0x610496);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
}
B610499:{NFSU2_TR(0x610499);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B61049b:{NFSU2_TR(0x61049b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B61049d:{NFSU2_TR(0x61049d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B6104a0:{NFSU2_TR(0x6104a0);
__builtin_memmove((R+0),(R+4),4);
}
B6104a2:{NFSU2_TR(0x6104a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6104a5:L6104a5:{c.instructions+=7;NFSU2_TR(0x6104a5);
w4(R+0,u32(0x3ull));
}
B6104aa:{NFSU2_TR(0x6104aa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
}
B6104ad:{NFSU2_TR(0x6104ad);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6104af:{NFSU2_TR(0x6104af);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6104b1:{NFSU2_TR(0x6104b1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B6104b4:{NFSU2_TR(0x6104b4);
__builtin_memmove((R+0),(R+4),4);
}
B6104b6:{NFSU2_TR(0x6104b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6104b9:L6104b9:{c.instructions+=3;NFSU2_TR(0x6104b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6104bb:{NFSU2_TR(0x6104bb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6104be:{NFSU2_TR(0x6104be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6104ca;}}
}
B6104c0:L6104c0:{c.instructions+=3;NFSU2_TR(0x6104c0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6104c3:{NFSU2_TR(0x6104c3);
w4(R+0,u32(0x3ull));
}
B6104c8:{NFSU2_TR(0x6104c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6104cf;}}
}
B6104ca:L6104ca:{c.instructions+=1;NFSU2_TR(0x6104ca);
w4(R+0,u32(0x1ull));
}
B6104cf:L6104cf:{c.instructions+=6;NFSU2_TR(0x6104cf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
}
B6104d2:{NFSU2_TR(0x6104d2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6104d4:{NFSU2_TR(0x6104d4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6104d6:{NFSU2_TR(0x6104d6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B6104d9:{NFSU2_TR(0x6104d9);
__builtin_memmove((R+0),(R+4),4);
}
B6104db:{NFSU2_TR(0x6104db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6104de:L6104de:{c.instructions+=2;NFSU2_TR(0x6104de);
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
B6104e0:{NFSU2_TR(0x6104e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610510:L610510:{c.instructions+=4;NFSU2_TR(0x610510);
__builtin_memmove((R+0),gp(0x8650b0),4);
}
B610515:{NFSU2_TR(0x610515);
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
B610517:{NFSU2_TR(0x610517);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x901ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61051d:{NFSU2_TR(0x61051d);
if(r1(R+518)){{goto L610529;}}
}
B61051f:L61051f:{c.instructions+=2;NFSU2_TR(0x61051f);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0xfeull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0xfeull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0xfeull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B610521:{NFSU2_TR(0x610521);
if(r1(R+518)){{goto L610529;}}
}
B610523:L610523:{c.instructions+=2;NFSU2_TR(0x610523);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0xffull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0xffull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B610525:{NFSU2_TR(0x610525);
if(r1(R+518)){{goto L610529;}}
}
B610527:L610527:{c.instructions+=1;NFSU2_TR(0x610527);
w1(R+0,u8(0x9ull));
}
B610529:L610529:{c.instructions+=1;NFSU2_TR(0x610529);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610530:L610530:{c.instructions+=4;NFSU2_TR(0x610530);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610531:{NFSU2_TR(0x610531);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B610535:{NFSU2_TR(0x610535);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B610537:{NFSU2_TR(0x610537);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61053d;}}
}
B610539:L610539:{c.instructions+=3;NFSU2_TR(0x610539);
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
B61053b:{NFSU2_TR(0x61053b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61053c:{NFSU2_TR(0x61053c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61053d:L61053d:{c.instructions+=5;NFSU2_TR(0x61053d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610541:{NFSU2_TR(0x610541);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B610545:{NFSU2_TR(0x610545);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B610547:{NFSU2_TR(0x610547);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B610549:{NFSU2_TR(0x610549);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61055a;}}
}
B61054b:L61054b:{c.instructions+=1;NFSU2_TR(0x61054b);
{goto L610550;}
}
B610550:L610550:{c.instructions+=2;NFSU2_TR(0x610550);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+24))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B610553:{NFSU2_TR(0x610553);
if(r1(R+518)){{goto L61056a;}}
}
B610555:L610555:{c.instructions+=3;NFSU2_TR(0x610555);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B610556:{NFSU2_TR(0x610556);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B610558:{NFSU2_TR(0x610558);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610550u);}goto L610550;}}
}
B61055a:L61055a:{c.instructions+=2;NFSU2_TR(0x61055a);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
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
B61055e:{NFSU2_TR(0x61055e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L610568;}}
}
B610560:L610560:{c.instructions+=2;NFSU2_TR(0x610560);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B610563:{NFSU2_TR(0x610563);
w4(R+0,u32(0x1ull));
}
B610568:L610568:{c.instructions+=2;NFSU2_TR(0x610568);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610569:{NFSU2_TR(0x610569);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61056a:L61056a:{c.instructions+=3;NFSU2_TR(0x61056a);
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
B61056c:{NFSU2_TR(0x61056c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61056d:{NFSU2_TR(0x61056d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610570:L610570:{c.instructions+=8;NFSU2_TR(0x610570);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610571:{NFSU2_TR(0x610571);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B610575:{NFSU2_TR(0x610575);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610576:{NFSU2_TR(0x610576);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B61057c:{NFSU2_TR(0x61057c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B610583:{NFSU2_TR(0x610583);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61058a:{NFSU2_TR(0x61058a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B610591:{NFSU2_TR(0x610591);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B610593:L610593:{c.instructions+=2;NFSU2_TR(0x610593);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610595:{NFSU2_TR(0x610595);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61059aull));
TAIL_STATIC(0x43c1c0u,43c);
}
B61059a:L61059a:{c.instructions+=8;NFSU2_TR(0x61059a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B61059d:{NFSU2_TR(0x61059d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6105a0:{NFSU2_TR(0x6105a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6105a3:{NFSU2_TR(0x6105a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6105a6:{NFSU2_TR(0x6105a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6105a9:{NFSU2_TR(0x6105a9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6105aa:{NFSU2_TR(0x6105aa);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6105ad:{NFSU2_TR(0x6105ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610593u);}goto L610593;}}
}
B6105af:L6105af:{c.instructions+=3;NFSU2_TR(0x6105af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6105b0:{NFSU2_TR(0x6105b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6105b1:{NFSU2_TR(0x6105b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6105c0:L6105c0:{c.instructions+=3;NFSU2_TR(0x6105c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6105c4:{NFSU2_TR(0x6105c4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6105c6:{NFSU2_TR(0x6105c6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6105ef;}}
}
B6105c8:L6105c8:{c.instructions+=2;NFSU2_TR(0x6105c8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6105cb:{NFSU2_TR(0x6105cb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6105ef;}}
}
B6105cd:L6105cd:{c.instructions+=2;NFSU2_TR(0x6105cd);
u8 U[26];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x803338ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+4)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6105d4:{NFSU2_TR(0x6105d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6105de;}}
}
B6105d6:L6105d6:{c.instructions+=2;NFSU2_TR(0x6105d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x80333cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6105dd:{NFSU2_TR(0x6105dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6105de:L6105de:{c.instructions+=1;NFSU2_TR(0x6105de);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6105e0:L6105e0:{c.instructions+=2;NFSU2_TR(0x6105e0);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x803338ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+4)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6105e7:{NFSU2_TR(0x6105e7);
if(r1(R+518)){{goto L6105f2;}}
}
B6105e9:L6105e9:{c.instructions+=3;NFSU2_TR(0x6105e9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6105ea:{NFSU2_TR(0x6105ea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6105ed:{NFSU2_TR(0x6105ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6105e0u);}goto L6105e0;}}
}
B6105ef:L6105ef:{c.instructions+=2;NFSU2_TR(0x6105ef);
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
B6105f1:{NFSU2_TR(0x6105f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6105f2:L6105f2:{c.instructions+=2;NFSU2_TR(0x6105f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x80333cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6105f9:{NFSU2_TR(0x6105f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610600:L610600:{c.instructions+=3;NFSU2_TR(0x610600);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B610604:{NFSU2_TR(0x610604);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B610606:{NFSU2_TR(0x610606);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L610634;}}
}
B610608:L610608:{c.instructions+=2;NFSU2_TR(0x610608);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61060e:{NFSU2_TR(0x61060e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L610634;}}
}
B610610:L610610:{c.instructions+=2;NFSU2_TR(0x610610);
u8 U[26];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x802de8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+4)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B610617:{NFSU2_TR(0x610617);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L610621;}}
}
B610619:L610619:{c.instructions+=2;NFSU2_TR(0x610619);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x802decull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B610620:{NFSU2_TR(0x610620);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610621:L610621:{c.instructions+=1;NFSU2_TR(0x610621);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B610623:L610623:{c.instructions+=2;NFSU2_TR(0x610623);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x802de8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+4)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B61062a:{NFSU2_TR(0x61062a);
if(r1(R+518)){{goto L610637;}}
}
B61062c:L61062c:{c.instructions+=3;NFSU2_TR(0x61062c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61062d:{NFSU2_TR(0x61062d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xaaull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B610632:{NFSU2_TR(0x610632);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610623u);}goto L610623;}}
}
B610634:L610634:{c.instructions+=2;NFSU2_TR(0x610634);
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
B610636:{NFSU2_TR(0x610636);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610637:L610637:{c.instructions+=2;NFSU2_TR(0x610637);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x802decull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B61063e:{NFSU2_TR(0x61063e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610640:L610640:{c.instructions+=5;NFSU2_TR(0x610640);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610644:{NFSU2_TR(0x610644);
__builtin_memmove((R+4),gp(0x8a1cf4),4);
}
B61064a:{NFSU2_TR(0x61064a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61064b:{NFSU2_TR(0x61064b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61064c:{NFSU2_TR(0x61064c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610651ull));
TAIL_STATIC(0x43f920u,43f);
}
B610651:L610651:{c.instructions+=2;NFSU2_TR(0x610651);
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
B610654:{NFSU2_TR(0x610654);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610660:L610660:{c.instructions+=5;NFSU2_TR(0x610660);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610664:{NFSU2_TR(0x610664);
__builtin_memmove((R+4),gp(0x8a1cf8),4);
}
B61066a:{NFSU2_TR(0x61066a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61066b:{NFSU2_TR(0x61066b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61066c:{NFSU2_TR(0x61066c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610671ull));
TAIL_STATIC(0x43f920u,43f);
}
B610671:L610671:{c.instructions+=2;NFSU2_TR(0x610671);
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
B610674:{NFSU2_TR(0x610674);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610680:L610680:{c.instructions+=4;NFSU2_TR(0x610680);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B610686:{NFSU2_TR(0x610686);
w1(R+0,u8(0x2ull));
}
B610688:{NFSU2_TR(0x610688);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B61068a:{NFSU2_TR(0x61068a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6106a4;}}
}
B61068c:L61068c:{c.instructions+=2;NFSU2_TR(0x61068c);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x309ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+0))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B610692:{NFSU2_TR(0x610692);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6106a4;}}
}
B610694:L610694:{c.instructions+=3;NFSU2_TR(0x610694);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61069a:{NFSU2_TR(0x61069a);
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
B61069c:{NFSU2_TR(0x61069c);
if(r1(R+518)){{goto L6106a4;}}
}
B61069e:L61069e:{c.instructions+=2;NFSU2_TR(0x61069e);
w4(R+0,u32(0x1ull));
}
B6106a3:{NFSU2_TR(0x6106a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6106a4:L6106a4:{c.instructions+=2;NFSU2_TR(0x6106a4);
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
B6106a6:{NFSU2_TR(0x6106a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6106b0:L6106b0:{c.instructions+=5;NFSU2_TR(0x6106b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6106b4:{NFSU2_TR(0x6106b4);
__builtin_memmove((R+4),gp(0x8a1d00),4);
}
B6106ba:{NFSU2_TR(0x6106ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6106bb:{NFSU2_TR(0x6106bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6106bc:{NFSU2_TR(0x6106bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6106c1ull));
TAIL_STATIC(0x43f920u,43f);
}
B6106c1:L6106c1:{c.instructions+=2;NFSU2_TR(0x6106c1);
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
B6106c4:{NFSU2_TR(0x6106c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6106d0:L6106d0:{c.instructions+=4;NFSU2_TR(0x6106d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6106d3:{NFSU2_TR(0x6106d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6106d6:{NFSU2_TR(0x6106d6);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6106da:{NFSU2_TR(0x6106da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6106f2;}}
}
B6106dc:L6106dc:{c.instructions+=2;NFSU2_TR(0x6106dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6106de:{NFSU2_TR(0x6106de);
if(r1(R+518)){{goto L6106f2;}}
}
B6106e0:L6106e0:{c.instructions+=3;NFSU2_TR(0x6106e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6106e3:{NFSU2_TR(0x6106e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6106e5:{NFSU2_TR(0x6106e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6106f2;}}
}
B6106e7:L6106e7:{c.instructions+=2;NFSU2_TR(0x6106e7);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x2ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6106eb:{NFSU2_TR(0x6106eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6106f2;}}
}
B6106ed:L6106ed:{c.instructions+=2;NFSU2_TR(0x6106ed);
w1(R+0,u8(0x1ull));
}
B6106ef:{NFSU2_TR(0x6106ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6106f2:L6106f2:{c.instructions+=2;NFSU2_TR(0x6106f2);
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
B6106f4:{NFSU2_TR(0x6106f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610700:L610700:{c.instructions+=9;NFSU2_TR(0x610700);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610704:{NFSU2_TR(0x610704);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B610706:{NFSU2_TR(0x610706);
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
B610708:{NFSU2_TR(0x610708);
__builtin_memmove((R+8),(R+518),1);
}
B61070b:{NFSU2_TR(0x61070b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61070e:{NFSU2_TR(0x61070e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610712:{NFSU2_TR(0x610712);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B610715:{NFSU2_TR(0x610715);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B610718:{NFSU2_TR(0x610718);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610720:L610720:{c.instructions+=7;NFSU2_TR(0x610720);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610721:{NFSU2_TR(0x610721);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610722:{NFSU2_TR(0x610722);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B610726:{NFSU2_TR(0x610726);
u8 U[4];
w4(U+0,u32(0x2000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61072b:{NFSU2_TR(0x61072b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61072c:{NFSU2_TR(0x61072c);
__builtin_memmove((R+24),(R+4),4);
}
B61072e:{NFSU2_TR(0x61072e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610733ull));
TAIL_STATIC(0x440820u,440);
}
B610733:L610733:{c.instructions+=7;NFSU2_TR(0x610733);
u8 U[4];
w4(U+0,u32(0x7a8464ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610738:{NFSU2_TR(0x610738);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610739:{NFSU2_TR(0x610739);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61073a:{NFSU2_TR(0x61073a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61073c:{NFSU2_TR(0x61073c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61073f:{NFSU2_TR(0x61073f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B610742:{NFSU2_TR(0x610742);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610747ull));
TAIL_STATIC(0x440330u,440);
}
B610747:L610747:{c.instructions+=4;NFSU2_TR(0x610747);
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
B61074a:{NFSU2_TR(0x61074a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61074b:{NFSU2_TR(0x61074b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61074c:{NFSU2_TR(0x61074c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610750:L610750:{c.instructions+=6;NFSU2_TR(0x610750);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610751:{NFSU2_TR(0x610751);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B610755:{NFSU2_TR(0x610755);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610756:{NFSU2_TR(0x610756);
__builtin_memmove((R+28),(R+4),4);
}
B610758:{NFSU2_TR(0x610758);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+24))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B61075b:{NFSU2_TR(0x61075b);
if(r1(R+518)){{goto L61077a;}}
}
B61075d:L61075d:{c.instructions+=3;NFSU2_TR(0x61075d);
u8 U[4];
w4(U+0,u32(0x2000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610762:{NFSU2_TR(0x610762);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610763:{NFSU2_TR(0x610763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610768ull));
TAIL_STATIC(0x440820u,440);
}
B610768:L610768:{c.instructions+=6;NFSU2_TR(0x610768);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610769:{NFSU2_TR(0x610769);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61076a:{NFSU2_TR(0x61076a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61076c:{NFSU2_TR(0x61076c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61076f:{NFSU2_TR(0x61076f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B610772:{NFSU2_TR(0x610772);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610777ull));
TAIL_STATIC(0x440090u,440);
}
B610777:L610777:{c.instructions+=1;NFSU2_TR(0x610777);
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
B61077a:L61077a:{c.instructions+=3;NFSU2_TR(0x61077a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61077b:{NFSU2_TR(0x61077b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61077c:{NFSU2_TR(0x61077c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610780:L610780:{c.instructions+=4;NFSU2_TR(0x610780);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610783:{NFSU2_TR(0x610783);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B610785:{NFSU2_TR(0x610785);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B610789:{NFSU2_TR(0x610789);
if(r1(R+518)){{goto L61079a;}}
}
B61078b:L61078b:{c.instructions+=2;NFSU2_TR(0x61078b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B61078d:{NFSU2_TR(0x61078d);
if(r1(R+512)){{goto L61079a;}}
}
B61078f:L61078f:{c.instructions+=6;NFSU2_TR(0x61078f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610790:{NFSU2_TR(0x610790);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B610793:{NFSU2_TR(0x610793);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B610795:{NFSU2_TR(0x610795);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B610797:{NFSU2_TR(0x610797);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610798:{NFSU2_TR(0x610798);
if(r1(R+512)){{goto L6107ae;}}
}
B61079a:L61079a:{c.instructions+=3;NFSU2_TR(0x61079a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61079d:{NFSU2_TR(0x61079d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61079f:{NFSU2_TR(0x61079f);
if(r1(R+518)){{goto L6107b6;}}
}
B6107a1:L6107a1:{c.instructions+=2;NFSU2_TR(0x6107a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6107a3:{NFSU2_TR(0x6107a3);
if(r1(R+512)){{goto L6107b6;}}
}
B6107a5:L6107a5:{c.instructions+=4;NFSU2_TR(0x6107a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6107a8:{NFSU2_TR(0x6107a8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6107aa:{NFSU2_TR(0x6107aa);
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
B6107ac:{NFSU2_TR(0x6107ac);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6107b6;}}
}
B6107ae:L6107ae:{c.instructions+=2;NFSU2_TR(0x6107ae);
w4(R+0,u32(0x1ull));
}
B6107b3:{NFSU2_TR(0x6107b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6107b6:L6107b6:{c.instructions+=2;NFSU2_TR(0x6107b6);
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
B6107b8:{NFSU2_TR(0x6107b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6107c0:L6107c0:{c.instructions+=7;NFSU2_TR(0x6107c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6107c1:{NFSU2_TR(0x6107c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6107c2:{NFSU2_TR(0x6107c2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6107c6:{NFSU2_TR(0x6107c6);
__builtin_memmove((R+24),(R+4),4);
}
B6107c8:{NFSU2_TR(0x6107c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6107cb:{NFSU2_TR(0x6107cb);
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
B6107cd:{NFSU2_TR(0x6107cd);
if(r1(R+518)){{goto L610803;}}
}
B6107cf:L6107cf:{c.instructions+=3;NFSU2_TR(0x6107cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6107d2:{NFSU2_TR(0x6107d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6107d4:{NFSU2_TR(0x6107d4);
if(r1(R+518)){{goto L6107e4;}}
}
B6107d6:L6107d6:{c.instructions+=4;NFSU2_TR(0x6107d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6107d9:{NFSU2_TR(0x6107d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6107da:{NFSU2_TR(0x6107da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6107db:{NFSU2_TR(0x6107db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6107e0ull));
TAIL_STATIC(0x488ce0u,488);
}
B6107e0:L6107e0:{c.instructions+=2;NFSU2_TR(0x6107e0);
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
B6107e2:{NFSU2_TR(0x6107e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L610803;}}
}
B6107e4:L6107e4:{c.instructions+=3;NFSU2_TR(0x6107e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6107e7:{NFSU2_TR(0x6107e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6107e9:{NFSU2_TR(0x6107e9);
if(r1(R+518)){{goto L6107fc;}}
}
B6107eb:L6107eb:{c.instructions+=5;NFSU2_TR(0x6107eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6107ee:{NFSU2_TR(0x6107ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6107ef:{NFSU2_TR(0x6107ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6107f2:{NFSU2_TR(0x6107f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6107f3:{NFSU2_TR(0x6107f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6107f8ull));
TAIL_STATIC(0x488ce0u,488);
}
B6107f8:L6107f8:{c.instructions+=2;NFSU2_TR(0x6107f8);
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
B6107fa:{NFSU2_TR(0x6107fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L610803;}}
}
B6107fc:L6107fc:{c.instructions+=4;NFSU2_TR(0x6107fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6107fd:{NFSU2_TR(0x6107fd);
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
B6107ff:{NFSU2_TR(0x6107ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610800:{NFSU2_TR(0x610800);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610803:L610803:{c.instructions+=4;NFSU2_TR(0x610803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B610804:{NFSU2_TR(0x610804);
w4(R+0,u32(0x1ull));
}
B610809:{NFSU2_TR(0x610809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61080a:{NFSU2_TR(0x61080a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610810:L610810:{c.instructions+=7;NFSU2_TR(0x610810);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610811:{NFSU2_TR(0x610811);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610812:{NFSU2_TR(0x610812);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B610816:{NFSU2_TR(0x610816);
__builtin_memmove((R+24),(R+4),4);
}
B610818:{NFSU2_TR(0x610818);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61081b:{NFSU2_TR(0x61081b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61081d:{NFSU2_TR(0x61081d);
if(r1(R+518)){{goto L61084c;}}
}
B61081f:L61081f:{c.instructions+=3;NFSU2_TR(0x61081f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610822:{NFSU2_TR(0x610822);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B610824:{NFSU2_TR(0x610824);
if(r1(R+518)){{goto L610834;}}
}
B610826:L610826:{c.instructions+=4;NFSU2_TR(0x610826);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B610829:{NFSU2_TR(0x610829);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61082a:{NFSU2_TR(0x61082a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61082b:{NFSU2_TR(0x61082b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610830ull));
TAIL_STATIC(0x488ce0u,488);
}
B610830:L610830:{c.instructions+=2;NFSU2_TR(0x610830);
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
B610832:{NFSU2_TR(0x610832);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L610881;}}
}
B610834:L610834:{c.instructions+=3;NFSU2_TR(0x610834);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610837:{NFSU2_TR(0x610837);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B610839:{NFSU2_TR(0x610839);
if(r1(R+518)){{goto L61084c;}}
}
B61083b:L61083b:{c.instructions+=5;NFSU2_TR(0x61083b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61083e:{NFSU2_TR(0x61083e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61083f:{NFSU2_TR(0x61083f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B610842:{NFSU2_TR(0x610842);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610843:{NFSU2_TR(0x610843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610848ull));
TAIL_STATIC(0x488ce0u,488);
}
B610848:L610848:{c.instructions+=2;NFSU2_TR(0x610848);
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
B61084a:{NFSU2_TR(0x61084a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L610881;}}
}
B61084c:L61084c:{c.instructions+=3;NFSU2_TR(0x61084c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61084f:{NFSU2_TR(0x61084f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B610851:{NFSU2_TR(0x610851);
if(r1(R+518)){{goto L61088b;}}
}
B610853:L610853:{c.instructions+=4;NFSU2_TR(0x610853);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B610859:{NFSU2_TR(0x610859);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61085c:{NFSU2_TR(0x61085c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61085e:{NFSU2_TR(0x61085e);
if(r1(R+518)){{goto L61086d;}}
}
B610860:L610860:{c.instructions+=2;NFSU2_TR(0x610860);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B610862:{NFSU2_TR(0x610862);
if(r1(R+512)){{goto L61086d;}}
}
B610864:L610864:{c.instructions+=4;NFSU2_TR(0x610864);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B610867:{NFSU2_TR(0x610867);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B610869:{NFSU2_TR(0x610869);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B61086b:{NFSU2_TR(0x61086b);
if(r1(R+512)){{goto L610881;}}
}
B61086d:L61086d:{c.instructions+=3;NFSU2_TR(0x61086d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610870:{NFSU2_TR(0x610870);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B610872:{NFSU2_TR(0x610872);
if(r1(R+518)){{goto L61088b;}}
}
B610874:L610874:{c.instructions+=2;NFSU2_TR(0x610874);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B610876:{NFSU2_TR(0x610876);
if(r1(R+512)){{goto L61088b;}}
}
B610878:L610878:{c.instructions+=4;NFSU2_TR(0x610878);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61087b:{NFSU2_TR(0x61087b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B61087d:{NFSU2_TR(0x61087d);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B61087f:{NFSU2_TR(0x61087f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L61088b;}}
}
B610881:L610881:{c.instructions+=4;NFSU2_TR(0x610881);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B610882:{NFSU2_TR(0x610882);
w4(R+0,u32(0x1ull));
}
B610887:{NFSU2_TR(0x610887);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610888:{NFSU2_TR(0x610888);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61088b:L61088b:{c.instructions+=4;NFSU2_TR(0x61088b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61088c:{NFSU2_TR(0x61088c);
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
B61088e:{NFSU2_TR(0x61088e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61088f:{NFSU2_TR(0x61088f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6108a0:L6108a0:{c.instructions+=6;NFSU2_TR(0x6108a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6108a1:{NFSU2_TR(0x6108a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6108a5:{NFSU2_TR(0x6108a5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6108a7:{NFSU2_TR(0x6108a7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6108a9:{NFSU2_TR(0x6108a9);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6108ab:{NFSU2_TR(0x6108ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6108d6;}}
}
B6108ad:L6108ad:{c.instructions+=4;NFSU2_TR(0x6108ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6108ae:{NFSU2_TR(0x6108ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6108b2:{NFSU2_TR(0x6108b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6108b3:{NFSU2_TR(0x6108b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6108b7:L6108b7:{c.instructions+=3;NFSU2_TR(0x6108b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6108ba:{NFSU2_TR(0x6108ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6108bc:{NFSU2_TR(0x6108bc);
if(r1(R+518)){{goto L6108cf;}}
}
B6108be:L6108be:{c.instructions+=2;NFSU2_TR(0x6108be);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6108c2:{NFSU2_TR(0x6108c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6108cf;}}
}
B6108c4:L6108c4:{c.instructions+=4;NFSU2_TR(0x6108c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6108c8:{NFSU2_TR(0x6108c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6108cb:{NFSU2_TR(0x6108cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6108ce:{NFSU2_TR(0x6108ce);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6108cf:L6108cf:{c.instructions+=3;NFSU2_TR(0x6108cf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6108d0:{NFSU2_TR(0x6108d0);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B6108d2:{NFSU2_TR(0x6108d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6108b7u);}goto L6108b7;}}
}
B6108d4:L6108d4:{c.instructions+=2;NFSU2_TR(0x6108d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6108d5:{NFSU2_TR(0x6108d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6108d6:L6108d6:{c.instructions+=2;NFSU2_TR(0x6108d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6108d7:{NFSU2_TR(0x6108d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6108e0:L6108e0:{c.instructions+=5;NFSU2_TR(0x6108e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6108e1:{NFSU2_TR(0x6108e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6108e5:{NFSU2_TR(0x6108e5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6108e7:{NFSU2_TR(0x6108e7);
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
B6108e9:{NFSU2_TR(0x6108e9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L610906;}}
}
B6108eb:L6108eb:{c.instructions+=2;NFSU2_TR(0x6108eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6108ef:{NFSU2_TR(0x6108ef);
}
B6108f0:L6108f0:{c.instructions+=3;NFSU2_TR(0x6108f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6108f3:{NFSU2_TR(0x6108f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6108f5:{NFSU2_TR(0x6108f5);
if(r1(R+518)){{goto L610901;}}
}
B6108f7:L6108f7:{c.instructions+=2;NFSU2_TR(0x6108f7);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6108fb:{NFSU2_TR(0x6108fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L610901;}}
}
B6108fd:L6108fd:{c.instructions+=1;NFSU2_TR(0x6108fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B610901:L610901:{c.instructions+=3;NFSU2_TR(0x610901);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B610902:{NFSU2_TR(0x610902);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B610904:{NFSU2_TR(0x610904);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6108f0u);}goto L6108f0;}}
}
B610906:L610906:{c.instructions+=2;NFSU2_TR(0x610906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610907:{NFSU2_TR(0x610907);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610910:L610910:{c.instructions+=5;NFSU2_TR(0x610910);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610911:{NFSU2_TR(0x610911);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B610915:{NFSU2_TR(0x610915);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x954ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61091b:{NFSU2_TR(0x61091b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61091d:{NFSU2_TR(0x61091d);
if(r1(R+518)){{goto L61096f;}}
}
B61091f:L61091f:{c.instructions+=2;NFSU2_TR(0x61091f);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B610923:{NFSU2_TR(0x610923);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61096f;}}
}
B610925:L610925:{c.instructions+=3;NFSU2_TR(0x610925);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61092b:{NFSU2_TR(0x61092b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61092d:{NFSU2_TR(0x61092d);
if(r1(R+518)){{goto L61096f;}}
}
B61092f:L61092f:{c.instructions+=2;NFSU2_TR(0x61092f);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B610933:{NFSU2_TR(0x610933);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61096f;}}
}
B610935:L610935:{c.instructions+=3;NFSU2_TR(0x610935);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61093b:{NFSU2_TR(0x61093b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61093d:{NFSU2_TR(0x61093d);
if(r1(R+518)){{goto L61096f;}}
}
B61093f:L61093f:{c.instructions+=1;NFSU2_TR(0x61093f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610944ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610680u);}goto L610680;}
}
B610944:L610944:{c.instructions+=2;NFSU2_TR(0x610944);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B610946:{NFSU2_TR(0x610946);
if(r1(R+518)){{goto L61096f;}}
}
B610948:L610948:{c.instructions+=3;NFSU2_TR(0x610948);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61094e:{NFSU2_TR(0x61094e);
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
B610950:{NFSU2_TR(0x610950);
if(r1(R+518)){{goto L610966;}}
}
B610952:L610952:{c.instructions+=3;NFSU2_TR(0x610952);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B610955:{NFSU2_TR(0x610955);
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
B610957:{NFSU2_TR(0x610957);
if(r1(R+518)){{goto L610966;}}
}
B610959:L610959:{c.instructions+=3;NFSU2_TR(0x610959);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B61095c:{NFSU2_TR(0x61095c);
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
B61095e:{NFSU2_TR(0x61095e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L610966;}}
}
B610960:L610960:{c.instructions+=2;NFSU2_TR(0x610960);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x2ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B610964:{NFSU2_TR(0x610964);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61096f;}}
}
B610966:L610966:{c.instructions+=3;NFSU2_TR(0x610966);
w4(R+0,u32(0x1ull));
}
B61096b:{NFSU2_TR(0x61096b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61096c:{NFSU2_TR(0x61096c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61096f:L61096f:{c.instructions+=3;NFSU2_TR(0x61096f);
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
B610971:{NFSU2_TR(0x610971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610972:{NFSU2_TR(0x610972);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610980:L610980:{c.instructions+=6;NFSU2_TR(0x610980);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610981:{NFSU2_TR(0x610981);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B610985:{NFSU2_TR(0x610985);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B610989:{NFSU2_TR(0x610989);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61098a:{NFSU2_TR(0x61098a);
__builtin_memmove((R+24),(R+4),4);
}
B61098c:{NFSU2_TR(0x61098c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61099b;}}
}
B61098e:L61098e:{c.instructions+=3;NFSU2_TR(0x61098e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610991:{NFSU2_TR(0x610991);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610992:{NFSU2_TR(0x610992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610997ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610810u);}goto L610810;}
}
B610997:L610997:{c.instructions+=2;NFSU2_TR(0x610997);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B610999:{NFSU2_TR(0x610999);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6109a2;}}
}
B61099b:L61099b:{c.instructions+=4;NFSU2_TR(0x61099b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61099c:{NFSU2_TR(0x61099c);
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
B61099e:{NFSU2_TR(0x61099e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61099f:{NFSU2_TR(0x61099f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6109a2:L6109a2:{c.instructions+=6;NFSU2_TR(0x6109a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6109a5:{NFSU2_TR(0x6109a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6109a6:{NFSU2_TR(0x6109a6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6109a8:{NFSU2_TR(0x6109a8);
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
B6109aa:{NFSU2_TR(0x6109aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6109ab:{NFSU2_TR(0x6109ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6109fb;}}
}
B6109ad:L6109ad:{c.instructions+=1;NFSU2_TR(0x6109ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6109b0:L6109b0:{c.instructions+=4;NFSU2_TR(0x6109b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6109b2:{NFSU2_TR(0x6109b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6109b3:{NFSU2_TR(0x6109b3);
w4(R+4,u32(0x82dbc8ull));
}
B6109b8:{NFSU2_TR(0x6109b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6109bdull));
TAIL_STATIC(0x48cf40u,48c);
}
B6109bd:L6109bd:{c.instructions+=2;NFSU2_TR(0x6109bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6109bf:{NFSU2_TR(0x6109bf);
if(r1(R+518)){{goto L6109f0;}}
}
B6109c1:L6109c1:{c.instructions+=3;NFSU2_TR(0x6109c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6109c4:{NFSU2_TR(0x6109c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6109c6:{NFSU2_TR(0x6109c6);
if(r1(R+518)){{goto L6109f0;}}
}
B6109c8:L6109c8:{c.instructions+=3;NFSU2_TR(0x6109c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6109cb:{NFSU2_TR(0x6109cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6109cd:{NFSU2_TR(0x6109cd);
if(r1(R+518)){{goto L6109dc;}}
}
B6109cf:L6109cf:{c.instructions+=2;NFSU2_TR(0x6109cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6109d1:{NFSU2_TR(0x6109d1);
if(r1(R+512)){{goto L6109dc;}}
}
B6109d3:L6109d3:{c.instructions+=4;NFSU2_TR(0x6109d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6109d6:{NFSU2_TR(0x6109d6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6109d8:{NFSU2_TR(0x6109d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6109da:{NFSU2_TR(0x6109da);
if(r1(R+512)){{goto L6109f0;}}
}
B6109dc:L6109dc:{c.instructions+=3;NFSU2_TR(0x6109dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6109df:{NFSU2_TR(0x6109df);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6109e1:{NFSU2_TR(0x6109e1);
if(r1(R+518)){{goto L610a07;}}
}
B6109e3:L6109e3:{c.instructions+=2;NFSU2_TR(0x6109e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6109e5:{NFSU2_TR(0x6109e5);
if(r1(R+512)){{goto L610a07;}}
}
B6109e7:L6109e7:{c.instructions+=4;NFSU2_TR(0x6109e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6109ea:{NFSU2_TR(0x6109ea);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6109ec:{NFSU2_TR(0x6109ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6109ee:{NFSU2_TR(0x6109ee);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L610a07;}}
}
B6109f0:L6109f0:{c.instructions+=5;NFSU2_TR(0x6109f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6109f3:{NFSU2_TR(0x6109f3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6109f4:{NFSU2_TR(0x6109f4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6109f7:{NFSU2_TR(0x6109f7);
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
B6109f9:{NFSU2_TR(0x6109f9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6109b0u);}goto L6109b0;}}
}
B6109fb:L6109fb:{c.instructions+=6;NFSU2_TR(0x6109fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6109fc:{NFSU2_TR(0x6109fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6109fd:{NFSU2_TR(0x6109fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6109fe:{NFSU2_TR(0x6109fe);
w4(R+0,u32(0x1ull));
}
B610a03:{NFSU2_TR(0x610a03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B610a04:{NFSU2_TR(0x610a04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610a07:L610a07:{c.instructions+=6;NFSU2_TR(0x610a07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B610a08:{NFSU2_TR(0x610a08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B610a09:{NFSU2_TR(0x610a09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610a0a:{NFSU2_TR(0x610a0a);
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
B610a0c:{NFSU2_TR(0x610a0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B610a0d:{NFSU2_TR(0x610a0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610a10:L610a10:{c.instructions+=5;NFSU2_TR(0x610a10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610a14:{NFSU2_TR(0x610a14);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B610a18:{NFSU2_TR(0x610a18);
s4(0x8a329c,u32(0x0ull));
}
B610a22:{NFSU2_TR(0x610a22);
w4(R+4,u32(0x8a3288ull));
}
B610a27:{NFSU2_TR(0x610a27);
TAIL_STATIC(0x63b160u,63b);
}
B610a30:L610a30:{c.instructions+=5;NFSU2_TR(0x610a30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610a34:{NFSU2_TR(0x610a34);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B610a38:{NFSU2_TR(0x610a38);
s4(0x8a329c,u32(0x0ull));
}
B610a42:{NFSU2_TR(0x610a42);
w4(R+4,u32(0x8a3288ull));
}
B610a47:{NFSU2_TR(0x610a47);
TAIL_STATIC(0x63b160u,63b);
}
B610a50:L610a50:{c.instructions+=5;NFSU2_TR(0x610a50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610a54:{NFSU2_TR(0x610a54);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B610a58:{NFSU2_TR(0x610a58);
s4(0x8a329c,u32(0x0ull));
}
B610a62:{NFSU2_TR(0x610a62);
w4(R+4,u32(0x8a3288ull));
}
B610a67:{NFSU2_TR(0x610a67);
TAIL_STATIC(0x63b160u,63b);
}
B610a70:L610a70:{c.instructions+=8;NFSU2_TR(0x610a70);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610a74:{NFSU2_TR(0x610a74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610a75:{NFSU2_TR(0x610a75);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B610a7b:{NFSU2_TR(0x610a7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610a7c:{NFSU2_TR(0x610a7c);
__builtin_memmove((R+24),(R+4),4);
}
B610a7e:{NFSU2_TR(0x610a7e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B610a80:{NFSU2_TR(0x610a80);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B610a83:{NFSU2_TR(0x610a83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L610a8f;}}
}
B610a85:L610a85:{c.instructions+=3;NFSU2_TR(0x610a85);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B610a87:{NFSU2_TR(0x610a87);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610a8d:{NFSU2_TR(0x610a8d);
{goto L610aa4;}
}
B610a8f:L610a8f:{c.instructions+=4;NFSU2_TR(0x610a8f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B610a95:{NFSU2_TR(0x610a95);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B610a97:{NFSU2_TR(0x610a97);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B610a9a:{NFSU2_TR(0x610a9a);
if(r1(R+514)){{goto L610aa4;}}
}
B610a9c:L610a9c:{c.instructions+=2;NFSU2_TR(0x610a9c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B610a9e:{NFSU2_TR(0x610a9e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610aa4:L610aa4:{c.instructions+=2;NFSU2_TR(0x610aa4);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B610aaa:{NFSU2_TR(0x610aaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610aafull));
TAIL_STATIC(0x75bed4u,75b);
}
B610aaf:L610aaf:{c.instructions+=9;NFSU2_TR(0x610aaf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B610ab3:{NFSU2_TR(0x610ab3);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w2(R+8,u16(r1(U+12)));
}
B610ab9:{NFSU2_TR(0x610ab9);
__builtin_memmove((R+28),(R+0),4);
}
B610abb:{NFSU2_TR(0x610abb);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B610abd:{NFSU2_TR(0x610abd);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+512,carry<u16>(r2(U+4),r2(R+28)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+523,scarry<u16>(r2(U+4),r2(R+28)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B610ac1:{NFSU2_TR(0x610ac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B610ac2:{NFSU2_TR(0x610ac2);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B610ac6:{NFSU2_TR(0x610ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610ac7:{NFSU2_TR(0x610ac7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610ad0:L610ad0:{c.instructions+=4;NFSU2_TR(0x610ad0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610ad1:{NFSU2_TR(0x610ad1);
__builtin_memmove((R+0),gp(0x89e7d2),1);
}
B610ad6:{NFSU2_TR(0x610ad6);
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
B610ad8:{NFSU2_TR(0x610ad8);
if(r1(R+518)){{goto L610aee;}}
}
B610ada:L610ada:{c.instructions+=6;NFSU2_TR(0x610ada);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B610ade:{NFSU2_TR(0x610ade);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B610ae2:{NFSU2_TR(0x610ae2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B610ae6:{NFSU2_TR(0x610ae6);
{u32 ea_=u32(u32(7904964u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B610aec:{NFSU2_TR(0x610aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B610aed:{NFSU2_TR(0x610aed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610aee:L610aee:{c.instructions+=3;NFSU2_TR(0x610aee);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610af4:{NFSU2_TR(0x610af4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B610af5:{NFSU2_TR(0x610af5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610b00:L610b00:{c.instructions+=5;NFSU2_TR(0x610b00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610b01:{NFSU2_TR(0x610b01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610b02:{NFSU2_TR(0x610b02);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B610b04:{NFSU2_TR(0x610b04);
w4(R+4,u32(0x90ull));
}
B610b09:{NFSU2_TR(0x610b09);
w4(R+28,u32(0x8a0388ull));
}
B610b0e:L610b0e:{c.instructions+=1;NFSU2_TR(0x610b0e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L610b10;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610b0eu);}goto L610b0e;}
}
B610b10:L610b10:{c.instructions+=21;NFSU2_TR(0x610b10);
w4(R+4,u32(0x48ull));
}
B610b15:{NFSU2_TR(0x610b15);
w4(R+24,u32(0x8a0388ull));
}
B610b1a:{NFSU2_TR(0x610b1a);
w4(R+28,u32(0x8a04a8ull));
}
B610b1f:{NFSU2_TR(0x610b1f);
s4(0x8a0394,u32(0x3f400000ull));
}
B610b29:{NFSU2_TR(0x610b29);
s4(0x8a039c,u32(0x3e800000ull));
}
B610b33:{NFSU2_TR(0x610b33);
s4(0x8a03ac,u32(0x3e800000ull));
}
B610b3d:{NFSU2_TR(0x610b3d);
s4(0x8a03b4,u32(0x3f400000ull));
}
B610b47:{NFSU2_TR(0x610b47);
s4(0x8a03cc,u32(0x3f400000ull));
}
B610b51:{NFSU2_TR(0x610b51);
s4(0x8a03e4,u32(0x3e800000ull));
}
B610b5b:{NFSU2_TR(0x610b5b);
s4(0x8a03f4,u32(0x3f800000ull));
}
B610b65:{NFSU2_TR(0x610b65);
s4(0x8a040c,u32(0x3f000000ull));
}
B610b6f:{NFSU2_TR(0x610b6f);
s4(0x8a0410,u32(0x3e800000ull));
}
B610b79:{NFSU2_TR(0x610b79);
s4(0x8a0414,u32(0x3e800000ull));
}
B610b83:{NFSU2_TR(0x610b83);
s4(0x8a0428,u32(0x3e800000ull));
}
B610b8d:{NFSU2_TR(0x610b8d);
s4(0x8a042c,u32(0x3e800000ull));
}
B610b97:{NFSU2_TR(0x610b97);
s4(0x8a0454,u32(0x3f400000ull));
}
B610ba1:{NFSU2_TR(0x610ba1);
s4(0x8a0458,u32(0x3e800000ull));
}
B610bab:{NFSU2_TR(0x610bab);
s4(0x8a046c,u32(0x3e800000ull));
}
B610bb5:{NFSU2_TR(0x610bb5);
s4(0x8a0470,u32(0x3f400000ull));
}
B610bbf:{NFSU2_TR(0x610bbf);
s4(0x8a0488,u32(0x3f400000ull));
}
B610bc9:{NFSU2_TR(0x610bc9);
s4(0x8a04a0,u32(0x3e800000ull));
}
B610bd3:L610bd3:{c.instructions+=1;NFSU2_TR(0x610bd3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L610bd5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610bd3u);}goto L610bd3;}
}
B610bd5:L610bd5:{c.instructions+=4;NFSU2_TR(0x610bd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B610bd6:{NFSU2_TR(0x610bd6);
w4(R+0,u32(0x8a0398ull));
}
B610bdb:{NFSU2_TR(0x610bdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610bdc:{NFSU2_TR(0x610bdc);
__builtin_memmove((R+16),(R+16),4);
}
B610be0:L610be0:{c.instructions+=12;NFSU2_TR(0x610be0);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610be3:{NFSU2_TR(0x610be3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B610be6:{NFSU2_TR(0x610be6);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8a04b8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8a04b8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B610beb:{NFSU2_TR(0x610beb);
{u32 ea_=u32(u32(7882084u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B610bf1:{NFSU2_TR(0x610bf1);
{u32 ea_=u32(r4(R+0)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B610bf7:{NFSU2_TR(0x610bf7);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610bfa:{NFSU2_TR(0x610bfa);
{u32 ea_=u32(u32(7882084u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B610c00:{NFSU2_TR(0x610c00);
{u32 ea_=u32(r4(R+0)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B610c06:{NFSU2_TR(0x610c06);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610c09:{NFSU2_TR(0x610c09);
{u32 ea_=u32(u32(7882084u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B610c0f:{NFSU2_TR(0x610c0f);
{u32 ea_=u32(r4(R+0)+u32(268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B610c15:{NFSU2_TR(0x610c15);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610be0u);}goto L610be0;}}
}
B610c17:L610c17:{c.instructions+=2;NFSU2_TR(0x610c17);
w4(R+0,u32(0x8a0388ull));
}
B610c1c:{NFSU2_TR(0x610c1c);
__builtin_memmove((R+16),(R+16),4);
}
B610c20:L610c20:{c.instructions+=7;NFSU2_TR(0x610c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B610c23:{NFSU2_TR(0x610c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B610c26:{NFSU2_TR(0x610c26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B610c28:{NFSU2_TR(0x610c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B610c2b:{NFSU2_TR(0x610c2b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B610c2e:{NFSU2_TR(0x610c2e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8a05c8ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8a05c8ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8a05c8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610c33:{NFSU2_TR(0x610c33);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610c20u);}goto L610c20;}}
}
B610c35:L610c35:{c.instructions+=2;NFSU2_TR(0x610c35);
s4(0x8a1d04,u32(0x1ull));
}
B610c3f:{NFSU2_TR(0x610c3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610c40:L610c40:{c.instructions+=5;NFSU2_TR(0x610c40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610c41:{NFSU2_TR(0x610c41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610c42:{NFSU2_TR(0x610c42);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610c45:{NFSU2_TR(0x610c45);
w4(R+28,u32(0x6ull));
}
B610c4a:{NFSU2_TR(0x610c4a);
__builtin_memmove((R+12),(R+12),4);
}
B610c50:L610c50:{c.instructions+=3;NFSU2_TR(0x610c50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B610c52:{NFSU2_TR(0x610c52);
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
B610c54:{NFSU2_TR(0x610c54);
if(r1(R+518)){{goto L610c62;}}
}
B610c56:L610c56:{c.instructions+=3;NFSU2_TR(0x610c56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B610c58:{NFSU2_TR(0x610c58);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610c5a:{NFSU2_TR(0x610c5a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610c5cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B610c5c:L610c5c:{c.instructions+=1;NFSU2_TR(0x610c5c);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B610c62:L610c62:{c.instructions+=3;NFSU2_TR(0x610c62);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B610c65:{NFSU2_TR(0x610c65);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610c66:{NFSU2_TR(0x610c66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610c50u);}goto L610c50;}}
}
B610c68:L610c68:{c.instructions+=3;NFSU2_TR(0x610c68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B610c69:{NFSU2_TR(0x610c69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610c6a:{NFSU2_TR(0x610c6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610c70:L610c70:{c.instructions+=10;NFSU2_TR(0x610c70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610c71:{NFSU2_TR(0x610c71);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B610c75:{NFSU2_TR(0x610c75);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610c76:{NFSU2_TR(0x610c76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610c77:{NFSU2_TR(0x610c77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610c78:{NFSU2_TR(0x610c78);
u8 U[4];
w4(U+0,u32(0x7a846cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610c7d:{NFSU2_TR(0x610c7d);
__builtin_memmove((R+20),(R+4),4);
}
B610c7f:{NFSU2_TR(0x610c7f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610c81:{NFSU2_TR(0x610c81);
__builtin_memmove((R+4),(R+12),4);
}
B610c83:{NFSU2_TR(0x610c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610c88ull));
TAIL_STATIC(0x578ce0u,578);
}
B610c88:L610c88:{c.instructions+=2;NFSU2_TR(0x610c88);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610c8b:{NFSU2_TR(0x610c8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B610c93:L610c93:{c.instructions+=3;NFSU2_TR(0x610c93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610c94:{NFSU2_TR(0x610c94);
__builtin_memmove((R+4),(R+12),4);
}
B610c96:{NFSU2_TR(0x610c96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610c9bull));
TAIL_STATIC(0x571770u,571);
}
B610c9b:L610c9b:{c.instructions+=3;NFSU2_TR(0x610c9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B610c9e:{NFSU2_TR(0x610c9e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B610ca0:{NFSU2_TR(0x610ca0);
if(r1(R+518)){{goto L610cae;}}
}
B610ca2:L610ca2:{c.instructions+=3;NFSU2_TR(0x610ca2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((R+28),(U+0),4);
}
B610ca5:{NFSU2_TR(0x610ca5);
w4(R+4,u32(0x6ull));
}
B610caa:{NFSU2_TR(0x610caa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B610cac:L610cac:{c.instructions+=1;NFSU2_TR(0x610cac);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L610cae;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610cacu);}goto L610cac;}
}
B610cae:L610cae:{c.instructions+=5;NFSU2_TR(0x610cae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610cb2:{NFSU2_TR(0x610cb2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B610cb5:{NFSU2_TR(0x610cb5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B610cb6:{NFSU2_TR(0x610cb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B610cba:{NFSU2_TR(0x610cba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610c93u);}goto L610c93;}}
}
B610cbc:L610cbc:{c.instructions+=2;NFSU2_TR(0x610cbc);
__builtin_memmove((R+4),(R+12),4);
}
B610cbe:{NFSU2_TR(0x610cbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610cc3ull));
TAIL_STATIC(0x578d90u,578);
}
B610cc3:L610cc3:{c.instructions+=5;NFSU2_TR(0x610cc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B610cc4:{NFSU2_TR(0x610cc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610cc5:{NFSU2_TR(0x610cc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B610cc6:{NFSU2_TR(0x610cc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B610cc7:{NFSU2_TR(0x610cc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610cd0:L610cd0:{c.instructions+=3;NFSU2_TR(0x610cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610cd3:{NFSU2_TR(0x610cd3);
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
B610cd5:{NFSU2_TR(0x610cd5);
if(r1(R+518)){{goto L610d25;}}
}
B610cd7:L610cd7:{c.instructions+=3;NFSU2_TR(0x610cd7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610cd8:{NFSU2_TR(0x610cd8);
w4(R+8,u32(0x803698ull));
}
B610cdd:{NFSU2_TR(0x610cdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610ce0:L610ce0:{c.instructions+=2;NFSU2_TR(0x610ce0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B610ce3:{NFSU2_TR(0x610ce3);
if(r1(R+518)){{goto L610d16;}}
}
B610ce5:L610ce5:{c.instructions+=5;NFSU2_TR(0x610ce5);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610ce7:{NFSU2_TR(0x610ce7);
{u32 ea_=u32(u32(8403264u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B610ced:{NFSU2_TR(0x610ced);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B610cef:{NFSU2_TR(0x610cef);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B610cf2:{NFSU2_TR(0x610cf2);
if(r1(R+518)){{goto L610d16;}}
}
B610cf4:L610cf4:{c.instructions+=2;NFSU2_TR(0x610cf4);
w4(R+4,u32(0x803934ull));
}
B610cf9:{NFSU2_TR(0x610cf9);
__builtin_memmove((R+16),(R+16),4);
}
B610d00:L610d00:{c.instructions+=5;NFSU2_TR(0x610d00);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610d02:{NFSU2_TR(0x610d02);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B610d04:{NFSU2_TR(0x610d04);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B610d06:{NFSU2_TR(0x610d06);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B610d09:{NFSU2_TR(0x610d09);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L610d16;}}
}
B610d0b:L610d0b:{c.instructions+=3;NFSU2_TR(0x610d0b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B610d0e:{NFSU2_TR(0x610d0e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x803940ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x803940ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B610d14:{NFSU2_TR(0x610d14);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610d00u);}goto L610d00;}}
}
B610d16:L610d16:{c.instructions+=4;NFSU2_TR(0x610d16);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B610d19:{NFSU2_TR(0x610d19);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B610d1c:{NFSU2_TR(0x610d1c);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x8036f8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8036f8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8036f8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610d22:{NFSU2_TR(0x610d22);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610ce0u);}goto L610ce0;}}
}
B610d24:L610d24:{c.instructions+=1;NFSU2_TR(0x610d24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610d25:L610d25:{c.instructions+=1;NFSU2_TR(0x610d25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610d30:L610d30:{c.instructions+=33;NFSU2_TR(0x610d30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610d31:{NFSU2_TR(0x610d31);
__builtin_memmove((R+20),(R+16),4);
}
B610d33:{NFSU2_TR(0x610d33);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B610d36:{NFSU2_TR(0x610d36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B610d39:{NFSU2_TR(0x610d39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610d3c:{NFSU2_TR(0x610d3c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610d3e:{NFSU2_TR(0x610d3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610d3f:{NFSU2_TR(0x610d3f);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B610d42:{NFSU2_TR(0x610d42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610d43:{NFSU2_TR(0x610d43);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610d46:{NFSU2_TR(0x610d46);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B610d49:{NFSU2_TR(0x610d49);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610d4c:{NFSU2_TR(0x610d4c);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B610d4f:{NFSU2_TR(0x610d4f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B610d53:{NFSU2_TR(0x610d53);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610d56:{NFSU2_TR(0x610d56);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B610d59:{NFSU2_TR(0x610d59);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610d5c:{NFSU2_TR(0x610d5c);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B610d5f:{NFSU2_TR(0x610d5f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B610d63:{NFSU2_TR(0x610d63);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610d66:{NFSU2_TR(0x610d66);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B610d69:{NFSU2_TR(0x610d69);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B610d6d:{NFSU2_TR(0x610d6d);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B610d6f:{NFSU2_TR(0x610d6f);
__asm__ volatile(".byte 0xd8,0xf2":::"memory");
}
B610d71:{NFSU2_TR(0x610d71);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B610d75:{NFSU2_TR(0x610d75);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B610d77:{NFSU2_TR(0x610d77);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B610d7b:{NFSU2_TR(0x610d7b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610d7f:{NFSU2_TR(0x610d7f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B610d83:{NFSU2_TR(0x610d83);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B610d87:{NFSU2_TR(0x610d87);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610d8b:{NFSU2_TR(0x610d8b);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B610d91:{NFSU2_TR(0x610d91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610d96ull));
TAIL_STATIC(0x75bed4u,75b);
}
B610d96:L610d96:{c.instructions+=3;NFSU2_TR(0x610d96);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B610d9c:{NFSU2_TR(0x610d9c);
__builtin_memmove((R+24),(R+0),4);
}
B610d9e:{NFSU2_TR(0x610d9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610da3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B610da3:L610da3:{c.instructions+=4;NFSU2_TR(0x610da3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610da7:{NFSU2_TR(0x610da7);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B610da9:{NFSU2_TR(0x610da9);
__builtin_memmove((R+28),(R+0),4);
}
B610dab:{NFSU2_TR(0x610dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610db0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B610db0:L610db0:{c.instructions+=2;NFSU2_TR(0x610db0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B610db3:{NFSU2_TR(0x610db3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L610dba;}}
}
B610db5:L610db5:{c.instructions+=1;NFSU2_TR(0x610db5);
w4(R+24,u32(0x3ull));
}
B610dba:L610dba:{c.instructions+=2;NFSU2_TR(0x610dba);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B610dbd:{NFSU2_TR(0x610dbd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L610dc4;}}
}
B610dbf:L610dbf:{c.instructions+=1;NFSU2_TR(0x610dbf);
w4(R+28,u32(0x2ull));
}
B610dc4:L610dc4:{c.instructions+=2;NFSU2_TR(0x610dc4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B610dc7:{NFSU2_TR(0x610dc7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L610dce;}}
}
B610dc9:L610dc9:{c.instructions+=1;NFSU2_TR(0x610dc9);
w4(R+0,u32(0x1ull));
}
B610dce:L610dce:{c.instructions+=2;NFSU2_TR(0x610dce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B610dd0:{NFSU2_TR(0x610dd0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L610dd4;}}
}
B610dd2:L610dd2:{c.instructions+=1;NFSU2_TR(0x610dd2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B610dd4:L610dd4:{c.instructions+=2;NFSU2_TR(0x610dd4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B610dd6:{NFSU2_TR(0x610dd6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L610dda;}}
}
B610dd8:L610dd8:{c.instructions+=1;NFSU2_TR(0x610dd8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B610dda:L610dda:{c.instructions+=2;NFSU2_TR(0x610dda);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B610ddc:{NFSU2_TR(0x610ddc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L610de0;}}
}
B610dde:L610dde:{c.instructions+=1;NFSU2_TR(0x610dde);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B610de0:L610de0:{c.instructions+=10;NFSU2_TR(0x610de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B610de3:{NFSU2_TR(0x610de3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B610de5:{NFSU2_TR(0x610de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B610de8:{NFSU2_TR(0x610de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B610deb:{NFSU2_TR(0x610deb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B610dec:{NFSU2_TR(0x610dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8a0388ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B610df3:{NFSU2_TR(0x610df3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610df4:{NFSU2_TR(0x610df4);
__builtin_memmove((R+16),(R+20),4);
}
B610df6:{NFSU2_TR(0x610df6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B610df7:{NFSU2_TR(0x610df7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610e00:L610e00:{c.instructions+=7;NFSU2_TR(0x610e00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B610e03:{NFSU2_TR(0x610e03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610e04:{NFSU2_TR(0x610e04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610e05:{NFSU2_TR(0x610e05);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B610e09:{NFSU2_TR(0x610e09);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B610e0b:{NFSU2_TR(0x610e0b);
__builtin_memmove((R+12),(R+4),4);
}
B610e0d:{NFSU2_TR(0x610e0d);
if(r1(R+518)){{goto L610e7b;}}
}
B610e0f:L610e0f:{c.instructions+=4;NFSU2_TR(0x610e0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610e10:{NFSU2_TR(0x610e10);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610e12:{NFSU2_TR(0x610e12);
__builtin_memmove((R+4),(R+20),4);
}
B610e14:{NFSU2_TR(0x610e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610e19ull));
TAIL_STATIC(0x48d8a0u,48d);
}
B610e19:L610e19:{c.instructions+=3;NFSU2_TR(0x610e19);
__builtin_memmove((R+24),(R+0),4);
}
B610e1b:{NFSU2_TR(0x610e1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B610e1d:{NFSU2_TR(0x610e1d);
if(r1(R+518)){{goto L610e7a;}}
}
B610e1f:L610e1f:{c.instructions+=1;NFSU2_TR(0x610e1f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610e20:L610e20:{c.instructions+=4;NFSU2_TR(0x610e20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B610e22:{NFSU2_TR(0x610e22);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B610e24:{NFSU2_TR(0x610e24);
w4(R+0,u32(0x8036fcull));
}
B610e29:{NFSU2_TR(0x610e29);
__builtin_memmove((R+16),(R+16),4);
}
B610e30:L610e30:{c.instructions+=2;NFSU2_TR(0x610e30);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B610e32:{NFSU2_TR(0x610e32);
if(r1(R+518)){{goto L610e41;}}
}
B610e34:L610e34:{c.instructions+=4;NFSU2_TR(0x610e34);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B610e37:{NFSU2_TR(0x610e37);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B610e38:{NFSU2_TR(0x610e38);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x803918ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x803918ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B610e3d:{NFSU2_TR(0x610e3d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610e30u);}goto L610e30;}}
}
B610e3f:L610e3f:{c.instructions+=1;NFSU2_TR(0x610e3f);
{goto L610e6b;}
}
B610e41:L610e41:{c.instructions+=11;NFSU2_TR(0x610e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610e44:{NFSU2_TR(0x610e44);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610e47:{NFSU2_TR(0x610e47);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B610e4a:{NFSU2_TR(0x610e4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610e4b:{NFSU2_TR(0x610e4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((R+8),(U+0),4);
}
B610e4e:{NFSU2_TR(0x610e4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B610e52:{NFSU2_TR(0x610e52);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610e53:{NFSU2_TR(0x610e53);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B610e57:{NFSU2_TR(0x610e57);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B610e5b:{NFSU2_TR(0x610e5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610e5c:{NFSU2_TR(0x610e5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610e61ull));
TAIL_STATIC(0x60c1d0u,60c);
}
B610e61:L610e61:{c.instructions+=2;NFSU2_TR(0x610e61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B610e64:{NFSU2_TR(0x610e64);
u8 U[13];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B610e6b:L610e6b:{c.instructions+=3;NFSU2_TR(0x610e6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610e6c:{NFSU2_TR(0x610e6c);
__builtin_memmove((R+4),(R+20),4);
}
B610e6e:{NFSU2_TR(0x610e6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610e73ull));
TAIL_STATIC(0x48d8a0u,48d);
}
B610e73:L610e73:{c.instructions+=3;NFSU2_TR(0x610e73);
__builtin_memmove((R+24),(R+0),4);
}
B610e75:{NFSU2_TR(0x610e75);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B610e77:{NFSU2_TR(0x610e77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610e20u);}goto L610e20;}}
}
B610e79:L610e79:{c.instructions+=1;NFSU2_TR(0x610e79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B610e7a:L610e7a:{c.instructions+=1;NFSU2_TR(0x610e7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610e7b:L610e7b:{c.instructions+=4;NFSU2_TR(0x610e7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B610e7c:{NFSU2_TR(0x610e7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B610e7d:{NFSU2_TR(0x610e7d);
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
B610e80:{NFSU2_TR(0x610e80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610e90:L610e90:{c.instructions+=2;NFSU2_TR(0x610e90);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x100ull))));
}
B610e96:{NFSU2_TR(0x610e96);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610c70u);}goto L610c70;}
}
B610ea0:L610ea0:{c.instructions+=11;NFSU2_TR(0x610ea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B610ea3:{NFSU2_TR(0x610ea3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610ea4:{NFSU2_TR(0x610ea4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610ea5:{NFSU2_TR(0x610ea5);
__builtin_memmove((R+12),(R+4),4);
}
B610ea7:{NFSU2_TR(0x610ea7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610ea8:{NFSU2_TR(0x610ea8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B610eaa:{NFSU2_TR(0x610eaa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610eab:{NFSU2_TR(0x610eab);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B610eaf:{NFSU2_TR(0x610eaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B610eb5:{NFSU2_TR(0x610eb5);
w4(R+28,u32(0x80370cull));
}
B610eba:{NFSU2_TR(0x610eba);
__builtin_memmove((R+12),(R+12),4);
}
B610ec0:L610ec0:{c.instructions+=3;NFSU2_TR(0x610ec0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B610ec4:{NFSU2_TR(0x610ec4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B610ec6:{NFSU2_TR(0x610ec6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L610f13;}}
}
B610ec8:L610ec8:{c.instructions+=3;NFSU2_TR(0x610ec8);
__builtin_memmove((R+8),gp(0x89e7d2),1);
}
B610ece:{NFSU2_TR(0x610ece);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B610ed0:{NFSU2_TR(0x610ed0);
if(r1(R+518)){{goto L610ee7;}}
}
B610ed2:L610ed2:{c.instructions+=5;NFSU2_TR(0x610ed2);
u8 U[13];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B610ed7:{NFSU2_TR(0x610ed7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B610edb:{NFSU2_TR(0x610edb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B610edf:{NFSU2_TR(0x610edf);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B610ee5:{NFSU2_TR(0x610ee5);
{goto L610eed;}
}
B610ee7:L610ee7:{c.instructions+=1;NFSU2_TR(0x610ee7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610eed:L610eed:{c.instructions+=2;NFSU2_TR(0x610eed);
w4(R+8,u32(0x3ull));
}
B610ef2:{NFSU2_TR(0x610ef2);
__builtin_memmove((R+24),(R+28),4);
}
B610ef4:L610ef4:{c.instructions+=4;NFSU2_TR(0x610ef4);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B610ef6:{NFSU2_TR(0x610ef6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B610ef8:{NFSU2_TR(0x610ef8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B610efb:{NFSU2_TR(0x610efb);
if(r1(R+514)){{goto L610f05;}}
}
B610efd:L610efd:{c.instructions+=4;NFSU2_TR(0x610efd);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B610efe:{NFSU2_TR(0x610efe);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x4ull))));
}
B610f01:{NFSU2_TR(0x610f01);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B610f03:{NFSU2_TR(0x610f03);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610ef4u);}goto L610ef4;}}
}
B610f05:L610f05:{c.instructions+=5;NFSU2_TR(0x610f05);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610f09:{NFSU2_TR(0x610f09);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B610f0b:{NFSU2_TR(0x610f0b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B610f0d:{NFSU2_TR(0x610f0d);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B610f0f:{NFSU2_TR(0x610f0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B610f13:L610f13:{c.instructions+=5;NFSU2_TR(0x610f13);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x24ull))));
}
B610f16:{NFSU2_TR(0x610f16);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B610f17:{NFSU2_TR(0x610f17);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B610f1a:{NFSU2_TR(0x610f1a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x803928ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x803928ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B610f20:{NFSU2_TR(0x610f20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610ec0u);}goto L610ec0;}}
}
B610f22:L610f22:{c.instructions+=7;NFSU2_TR(0x610f22);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B610f26:{NFSU2_TR(0x610f26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B610f27:{NFSU2_TR(0x610f27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610f28:{NFSU2_TR(0x610f28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B610f29:{NFSU2_TR(0x610f29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B610f2a:{NFSU2_TR(0x610f2a);
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
B610f2d:{NFSU2_TR(0x610f2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610f30:L610f30:{c.instructions+=17;NFSU2_TR(0x610f30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610f31:{NFSU2_TR(0x610f31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610f32:{NFSU2_TR(0x610f32);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B610f36:{NFSU2_TR(0x610f36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610f37:{NFSU2_TR(0x610f37);
__builtin_memmove((R+24),(R+4),4);
}
B610f39:{NFSU2_TR(0x610f39);
u8 U[13];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B610f3e:{NFSU2_TR(0x610f3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B610f42:{NFSU2_TR(0x610f42);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B610f46:{NFSU2_TR(0x610f46);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B610f4c:{NFSU2_TR(0x610f4c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B610f50:{NFSU2_TR(0x610f50);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610f54:{NFSU2_TR(0x610f54);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B610f56:{NFSU2_TR(0x610f56);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B610f5a:{NFSU2_TR(0x610f5a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B610f60:{NFSU2_TR(0x610f60);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B610f62:{NFSU2_TR(0x610f62);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B610f65:{NFSU2_TR(0x610f65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L610f88;}}
}
B610f67:L610f67:{c.instructions+=6;NFSU2_TR(0x610f67);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610f6b:{NFSU2_TR(0x610f6b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610f71:{NFSU2_TR(0x610f71);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B610f75:{NFSU2_TR(0x610f75);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B610f77:{NFSU2_TR(0x610f77);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B610f7a:{NFSU2_TR(0x610f7a);
if(r1(R+514)){{goto L610f8e;}}
}
B610f7c:L610f7c:{c.instructions+=3;NFSU2_TR(0x610f7c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B610f7e:{NFSU2_TR(0x610f7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B610f86:{NFSU2_TR(0x610f86);
{goto L610f92;}
}
B610f88:L610f88:{c.instructions+=1;NFSU2_TR(0x610f88);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610f8e:L610f8e:{c.instructions+=1;NFSU2_TR(0x610f8e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B610f92:L610f92:{c.instructions+=4;NFSU2_TR(0x610f92);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B610f96:{NFSU2_TR(0x610f96);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B610f98:{NFSU2_TR(0x610f98);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B610f9b:{NFSU2_TR(0x610f9b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L610feb;}}
}
B610f9d:L610f9d:{c.instructions+=7;NFSU2_TR(0x610f9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B610fa1:{NFSU2_TR(0x610fa1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610fa2:{NFSU2_TR(0x610fa2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610fa3:{NFSU2_TR(0x610fa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B610fa6:{NFSU2_TR(0x610fa6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610fa7:{NFSU2_TR(0x610fa7);
__builtin_memmove((R+4),(R+28),4);
}
B610fa9:{NFSU2_TR(0x610fa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610faeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610a70u);}goto L610a70;}
}
B610fae:L610fae:{c.instructions+=2;NFSU2_TR(0x610fae);
__builtin_memmove((R+4),(R+24),4);
}
B610fb0:{NFSU2_TR(0x610fb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610fb5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610ea0u);}goto L610ea0;}
}
B610fb5:L610fb5:{c.instructions+=3;NFSU2_TR(0x610fb5);
__builtin_memmove((R+4),(R+0),4);
}
B610fb7:{NFSU2_TR(0x610fb7);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B610fbd:{NFSU2_TR(0x610fbd);
if(r1(R+518)){{goto L610fea;}}
}
B610fbf:L610fbf:{c.instructions+=5;NFSU2_TR(0x610fbf);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B610fc3:{NFSU2_TR(0x610fc3);
{u32 ea_=u32(u32(8021888u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B610fc9:{NFSU2_TR(0x610fc9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B610fcb:{NFSU2_TR(0x610fcb);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B610fce:{NFSU2_TR(0x610fce);
if(r1(R+514)){{goto L610fe4;}}
}
B610fd0:L610fd0:{c.instructions+=5;NFSU2_TR(0x610fd0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B610fd4:{NFSU2_TR(0x610fd4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610fd5:{NFSU2_TR(0x610fd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B610fd6:{NFSU2_TR(0x610fd6);
__builtin_memmove((R+4),(R+28),4);
}
B610fd8:{NFSU2_TR(0x610fd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x610fddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x610a70u);}goto L610a70;}
}
B610fdd:L610fdd:{c.instructions+=5;NFSU2_TR(0x610fdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B610fde:{NFSU2_TR(0x610fde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610fdf:{NFSU2_TR(0x610fdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B610fe0:{NFSU2_TR(0x610fe0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B610fe1:{NFSU2_TR(0x610fe1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B610fe4:L610fe4:{c.instructions+=1;NFSU2_TR(0x610fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B610fea:L610fea:{c.instructions+=1;NFSU2_TR(0x610fea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B610feb:L610feb:{c.instructions+=4;NFSU2_TR(0x610feb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B610fec:{NFSU2_TR(0x610fec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B610fed:{NFSU2_TR(0x610fed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B610fee:{NFSU2_TR(0x610fee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x610,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
