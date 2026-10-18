#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_499(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_533(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_53d(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x498,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x498,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_498(u8* __restrict R,Cpu& c);
u32 page_498(Cpu& c){return body_498(c.regs.data(),c);}
__attribute__((noinline)) u32 body_498(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x498000:goto L498000;
case 0x498001:c.instructions+=3;goto B498001;
case 0x498004:c.instructions+=2;goto B498004;
case 0x498009:c.instructions+=1;goto B498009;
case 0x49800e:goto L49800e;
case 0x49800f:c.instructions+=9;goto B49800f;
case 0x498011:c.instructions+=8;goto B498011;
case 0x498013:c.instructions+=7;goto B498013;
case 0x498018:c.instructions+=6;goto B498018;
case 0x49801d:c.instructions+=5;goto B49801d;
case 0x498022:c.instructions+=4;goto B498022;
case 0x498027:c.instructions+=3;goto B498027;
case 0x49802c:c.instructions+=2;goto B49802c;
case 0x49802d:c.instructions+=1;goto B49802d;
case 0x498032:goto L498032;
case 0x498035:c.instructions+=2;goto B498035;
case 0x498036:c.instructions+=1;goto B498036;
case 0x498040:goto L498040;
case 0x498043:c.instructions+=10;goto B498043;
case 0x498048:c.instructions+=9;goto B498048;
case 0x49804a:c.instructions+=8;goto B49804a;
case 0x49804c:c.instructions+=7;goto B49804c;
case 0x498051:c.instructions+=6;goto B498051;
case 0x498056:c.instructions+=5;goto B498056;
case 0x49805b:c.instructions+=4;goto B49805b;
case 0x498060:c.instructions+=3;goto B498060;
case 0x498065:c.instructions+=2;goto B498065;
case 0x498066:c.instructions+=1;goto B498066;
case 0x49806b:goto L49806b;
case 0x49806e:c.instructions+=1;goto B49806e;
case 0x498070:goto L498070;
case 0x498074:c.instructions+=6;goto B498074;
case 0x498079:c.instructions+=5;goto B498079;
case 0x49807a:c.instructions+=4;goto B49807a;
case 0x49807b:c.instructions+=3;goto B49807b;
case 0x49807c:c.instructions+=2;goto B49807c;
case 0x49807e:c.instructions+=1;goto B49807e;
case 0x498084:goto L498084;
case 0x498089:c.instructions+=1;goto B498089;
case 0x49808b:goto L49808b;
case 0x498090:c.instructions+=1;goto B498090;
case 0x498096:goto L498096;
case 0x498097:c.instructions+=4;goto B498097;
case 0x49809b:c.instructions+=3;goto B49809b;
case 0x49809c:c.instructions+=2;goto B49809c;
case 0x49809d:c.instructions+=1;goto B49809d;
case 0x4980a0:goto L4980a0;
case 0x4980a4:c.instructions+=2;goto B4980a4;
case 0x4980a7:c.instructions+=1;goto B4980a7;
case 0x4980a9:goto L4980a9;
case 0x4980ac:c.instructions+=1;goto B4980ac;
case 0x4980ae:goto L4980ae;
case 0x4980b1:c.instructions+=1;goto B4980b1;
case 0x4980b3:goto L4980b3;
case 0x4980b6:c.instructions+=1;goto B4980b6;
case 0x4980b8:goto L4980b8;
case 0x4980bb:c.instructions+=1;goto B4980bb;
case 0x4980bd:goto L4980bd;
case 0x4980c2:c.instructions+=1;goto B4980c2;
case 0x4980c4:goto L4980c4;
case 0x4980c7:c.instructions+=1;goto B4980c7;
case 0x4980c9:goto L4980c9;
case 0x4980ce:c.instructions+=1;goto B4980ce;
case 0x4980d0:goto L4980d0;
case 0x4980d3:c.instructions+=1;goto B4980d3;
case 0x4980d5:goto L4980d5;
case 0x4980da:c.instructions+=1;goto B4980da;
case 0x4980dc:goto L4980dc;
case 0x4980df:c.instructions+=1;goto B4980df;
case 0x4980e5:goto L4980e5;
case 0x4980ea:goto L4980ea;
case 0x4980ed:c.instructions+=2;goto B4980ed;
case 0x4980ef:c.instructions+=1;goto B4980ef;
case 0x4980f5:goto L4980f5;
case 0x4980f8:c.instructions+=2;goto B4980f8;
case 0x4980fa:c.instructions+=1;goto B4980fa;
case 0x498100:goto L498100;
case 0x498107:c.instructions+=1;goto B498107;
case 0x498109:goto L498109;
case 0x49810f:c.instructions+=2;goto B49810f;
case 0x498110:c.instructions+=1;goto B498110;
case 0x498115:goto L498115;
case 0x498118:c.instructions+=2;goto B498118;
case 0x49811a:c.instructions+=1;goto B49811a;
case 0x498120:goto L498120;
case 0x498126:c.instructions+=2;goto B498126;
case 0x498127:c.instructions+=1;goto B498127;
case 0x49812c:goto L49812c;
case 0x498133:c.instructions+=4;goto B498133;
case 0x498136:c.instructions+=3;goto B498136;
case 0x498137:c.instructions+=2;goto B498137;
case 0x49813b:c.instructions+=1;goto B49813b;
case 0x498140:goto L498140;
case 0x498145:c.instructions+=4;goto B498145;
case 0x498148:c.instructions+=3;goto B498148;
case 0x49814a:c.instructions+=2;goto B49814a;
case 0x498151:c.instructions+=1;goto B498151;
case 0x498153:goto L498153;
case 0x498158:c.instructions+=4;goto B498158;
case 0x49815d:c.instructions+=3;goto B49815d;
case 0x498162:c.instructions+=2;goto B498162;
case 0x49816c:c.instructions+=1;goto B49816c;
case 0x498171:goto L498171;
case 0x498174:c.instructions+=4;goto B498174;
case 0x498175:c.instructions+=3;goto B498175;
case 0x498176:c.instructions+=2;goto B498176;
case 0x498177:c.instructions+=1;goto B498177;
case 0x49817a:goto L49817a;
case 0x49817f:c.instructions+=3;goto B49817f;
case 0x498184:c.instructions+=2;goto B498184;
case 0x498189:c.instructions+=1;goto B498189;
case 0x49818e:goto L49818e;
case 0x498191:c.instructions+=4;goto B498191;
case 0x498192:c.instructions+=3;goto B498192;
case 0x498193:c.instructions+=2;goto B498193;
case 0x498194:c.instructions+=1;goto B498194;
case 0x498197:goto L498197;
case 0x49819a:c.instructions+=2;goto B49819a;
case 0x49819c:c.instructions+=1;goto B49819c;
case 0x49819e:goto L49819e;
case 0x4981a3:c.instructions+=1;goto B4981a3;
case 0x4981a8:goto L4981a8;
case 0x4981ab:c.instructions+=2;goto B4981ab;
case 0x4981ad:c.instructions+=1;goto B4981ad;
case 0x4981af:goto L4981af;
case 0x4981b2:c.instructions+=2;goto B4981b2;
case 0x4981b4:c.instructions+=1;goto B4981b4;
case 0x4981b6:goto L4981b6;
case 0x4981bd:c.instructions+=2;goto B4981bd;
case 0x4981c2:c.instructions+=1;goto B4981c2;
case 0x4981c4:goto L4981c4;
case 0x4981c9:goto L4981c9;
case 0x4981cd:c.instructions+=4;goto B4981cd;
case 0x4981d0:c.instructions+=3;goto B4981d0;
case 0x4981d1:c.instructions+=2;goto B4981d1;
case 0x4981d5:c.instructions+=1;goto B4981d5;
case 0x4981da:goto L4981da;
case 0x4981df:c.instructions+=2;goto B4981df;
case 0x4981e4:c.instructions+=1;goto B4981e4;
case 0x4981e9:goto L4981e9;
case 0x4981ec:c.instructions+=4;goto B4981ec;
case 0x4981ed:c.instructions+=3;goto B4981ed;
case 0x4981ee:c.instructions+=2;goto B4981ee;
case 0x4981ef:c.instructions+=1;goto B4981ef;
case 0x4981f2:goto L4981f2;
case 0x4981f7:c.instructions+=2;goto B4981f7;
case 0x4981fb:c.instructions+=1;goto B4981fb;
case 0x498200:goto L498200;
case 0x498203:c.instructions+=2;goto B498203;
case 0x498204:c.instructions+=1;goto B498204;
case 0x498209:goto L498209;
case 0x49820c:goto L49820c;
case 0x49820d:c.instructions+=3;goto B49820d;
case 0x49820e:c.instructions+=2;goto B49820e;
case 0x49820f:c.instructions+=1;goto B49820f;
case 0x498220:goto L498220;
case 0x498225:c.instructions+=2;goto B498225;
case 0x498228:c.instructions+=1;goto B498228;
case 0x49822a:goto L49822a;
case 0x49822f:c.instructions+=2;goto B49822f;
case 0x498234:c.instructions+=1;goto B498234;
case 0x498236:goto L498236;
case 0x49823b:goto L49823b;
case 0x498240:goto L498240;
case 0x498245:c.instructions+=2;goto B498245;
case 0x498248:c.instructions+=1;goto B498248;
case 0x49824a:goto L49824a;
case 0x49824f:c.instructions+=1;goto B49824f;
case 0x498251:goto L498251;
case 0x498256:c.instructions+=2;goto B498256;
case 0x498259:c.instructions+=1;goto B498259;
case 0x49825b:goto L49825b;
case 0x498262:c.instructions+=1;goto B498262;
case 0x498269:goto L498269;
case 0x49826e:c.instructions+=1;goto B49826e;
case 0x498290:goto L498290;
case 0x498297:c.instructions+=2;goto B498297;
case 0x49829c:c.instructions+=1;goto B49829c;
case 0x49829e:goto L49829e;
case 0x4982a1:goto L4982a1;
case 0x4982b0:goto L4982b0;
case 0x4982b5:c.instructions+=1;goto B4982b5;
case 0x4982c0:goto L4982c0;
case 0x4982c7:c.instructions+=4;goto B4982c7;
case 0x4982c8:c.instructions+=3;goto B4982c8;
case 0x4982c9:c.instructions+=2;goto B4982c9;
case 0x4982cb:c.instructions+=1;goto B4982cb;
case 0x4982d1:goto L4982d1;
case 0x4982d6:c.instructions+=4;goto B4982d6;
case 0x4982d8:c.instructions+=3;goto B4982d8;
case 0x4982de:c.instructions+=2;goto B4982de;
case 0x4982df:c.instructions+=1;goto B4982df;
case 0x4982e1:goto L4982e1;
case 0x4982e6:goto L4982e6;
case 0x4982e9:c.instructions+=2;goto B4982e9;
case 0x4982eb:c.instructions+=1;goto B4982eb;
case 0x4982ed:goto L4982ed;
case 0x4982f3:c.instructions+=3;goto B4982f3;
case 0x4982f4:c.instructions+=2;goto B4982f4;
case 0x4982f6:c.instructions+=1;goto B4982f6;
case 0x4982fb:goto L4982fb;
case 0x4982fd:c.instructions+=2;goto B4982fd;
case 0x4982ff:c.instructions+=1;goto B4982ff;
case 0x498302:goto L498302;
case 0x498304:goto L498304;
case 0x498309:goto L498309;
case 0x49830c:c.instructions+=2;goto B49830c;
case 0x49830e:c.instructions+=1;goto B49830e;
case 0x498310:goto L498310;
case 0x498316:c.instructions+=3;goto B498316;
case 0x498317:c.instructions+=2;goto B498317;
case 0x498319:c.instructions+=1;goto B498319;
case 0x49831e:goto L49831e;
case 0x498320:c.instructions+=2;goto B498320;
case 0x498322:c.instructions+=1;goto B498322;
case 0x498325:goto L498325;
case 0x49832b:c.instructions+=3;goto B49832b;
case 0x49832c:c.instructions+=2;goto B49832c;
case 0x49832e:c.instructions+=1;goto B49832e;
case 0x498333:goto L498333;
case 0x498336:c.instructions+=2;goto B498336;
case 0x498338:c.instructions+=1;goto B498338;
case 0x49833a:goto L49833a;
case 0x498340:c.instructions+=3;goto B498340;
case 0x498341:c.instructions+=2;goto B498341;
case 0x498343:c.instructions+=1;goto B498343;
case 0x498348:goto L498348;
case 0x49834a:c.instructions+=2;goto B49834a;
case 0x49834c:c.instructions+=1;goto B49834c;
case 0x49834f:goto L49834f;
case 0x498351:goto L498351;
case 0x498357:c.instructions+=2;goto B498357;
case 0x498358:c.instructions+=1;goto B498358;
case 0x49835d:goto L49835d;
case 0x498360:c.instructions+=2;goto B498360;
case 0x498362:c.instructions+=1;goto B498362;
case 0x498364:goto L498364;
case 0x49836a:c.instructions+=3;goto B49836a;
case 0x49836b:c.instructions+=2;goto B49836b;
case 0x49836d:c.instructions+=1;goto B49836d;
case 0x498372:goto L498372;
case 0x498374:c.instructions+=2;goto B498374;
case 0x498376:c.instructions+=1;goto B498376;
case 0x498379:goto L498379;
case 0x49837f:c.instructions+=3;goto B49837f;
case 0x498380:c.instructions+=2;goto B498380;
case 0x498382:c.instructions+=1;goto B498382;
case 0x498387:goto L498387;
case 0x49838a:c.instructions+=2;goto B49838a;
case 0x49838c:c.instructions+=1;goto B49838c;
case 0x49838e:goto L49838e;
case 0x498394:c.instructions+=3;goto B498394;
case 0x498395:c.instructions+=2;goto B498395;
case 0x498397:c.instructions+=1;goto B498397;
case 0x49839c:goto L49839c;
case 0x49839e:c.instructions+=2;goto B49839e;
case 0x4983a0:c.instructions+=1;goto B4983a0;
case 0x4983a3:goto L4983a3;
case 0x4983a9:c.instructions+=4;goto B4983a9;
case 0x4983ac:c.instructions+=3;goto B4983ac;
case 0x4983ad:c.instructions+=2;goto B4983ad;
case 0x4983af:c.instructions+=1;goto B4983af;
case 0x4983b4:goto L4983b4;
case 0x4983b6:c.instructions+=1;goto B4983b6;
case 0x4983b8:goto L4983b8;
case 0x4983be:c.instructions+=4;goto B4983be;
case 0x4983c1:c.instructions+=3;goto B4983c1;
case 0x4983c2:c.instructions+=2;goto B4983c2;
case 0x4983c4:c.instructions+=1;goto B4983c4;
case 0x4983c9:goto L4983c9;
case 0x4983cb:c.instructions+=1;goto B4983cb;
case 0x4983cd:goto L4983cd;
case 0x4983d2:c.instructions+=1;goto B4983d2;
case 0x4983d4:goto L4983d4;
case 0x4983d9:goto L4983d9;
case 0x4983dc:c.instructions+=2;goto B4983dc;
case 0x4983e1:c.instructions+=1;goto B4983e1;
case 0x4983e6:goto L4983e6;
case 0x4983e7:c.instructions+=2;goto B4983e7;
case 0x4983e8:c.instructions+=1;goto B4983e8;
case 0x4983ed:goto L4983ed;
case 0x4983f0:c.instructions+=2;goto B4983f0;
case 0x4983f1:c.instructions+=1;goto B4983f1;
case 0x4983f6:goto L4983f6;
case 0x4983f9:c.instructions+=3;goto B4983f9;
case 0x4983fa:c.instructions+=2;goto B4983fa;
case 0x4983fb:c.instructions+=1;goto B4983fb;
case 0x498400:goto L498400;
case 0x498405:c.instructions+=2;goto B498405;
case 0x498407:c.instructions+=1;goto B498407;
case 0x498409:goto L498409;
case 0x49840c:c.instructions+=1;goto B49840c;
case 0x49840e:goto L49840e;
case 0x498411:c.instructions+=1;goto B498411;
case 0x498413:goto L498413;
case 0x498416:c.instructions+=1;goto B498416;
case 0x498418:goto L498418;
case 0x49841b:c.instructions+=1;goto B49841b;
case 0x49841d:goto L49841d;
case 0x498423:c.instructions+=2;goto B498423;
case 0x498427:c.instructions+=1;goto B498427;
case 0x498428:goto L498428;
case 0x49842e:c.instructions+=2;goto B49842e;
case 0x498432:c.instructions+=1;goto B498432;
case 0x498433:goto L498433;
case 0x498439:c.instructions+=2;goto B498439;
case 0x49843d:c.instructions+=1;goto B49843d;
case 0x498440:goto L498440;
case 0x498447:c.instructions+=2;goto B498447;
case 0x498448:c.instructions+=1;goto B498448;
case 0x49844a:goto L49844a;
case 0x49844f:c.instructions+=1;goto B49844f;
case 0x498451:goto L498451;
case 0x49845b:c.instructions+=1;goto B49845b;
case 0x49845d:goto L49845d;
case 0x498460:c.instructions+=3;goto B498460;
case 0x498461:c.instructions+=2;goto B498461;
case 0x498466:c.instructions+=1;goto B498466;
case 0x49846b:goto L49846b;
case 0x49846e:c.instructions+=2;goto B49846e;
case 0x49846f:c.instructions+=1;goto B49846f;
case 0x498470:goto L498470;
case 0x498475:goto L498475;
case 0x498478:c.instructions+=1;goto B498478;
case 0x49847d:goto L49847d;
case 0x49847e:c.instructions+=9;goto B49847e;
case 0x498480:c.instructions+=8;goto B498480;
case 0x498482:c.instructions+=7;goto B498482;
case 0x498487:c.instructions+=6;goto B498487;
case 0x498489:c.instructions+=5;goto B498489;
case 0x49848e:c.instructions+=4;goto B49848e;
case 0x498493:c.instructions+=3;goto B498493;
case 0x498498:c.instructions+=2;goto B498498;
case 0x498499:c.instructions+=1;goto B498499;
case 0x49849e:goto L49849e;
case 0x4984a1:c.instructions+=2;goto B4984a1;
case 0x4984a2:c.instructions+=1;goto B4984a2;
case 0x4984b0:goto L4984b0;
case 0x4984b3:c.instructions+=2;goto B4984b3;
case 0x4984b5:c.instructions+=1;goto B4984b5;
case 0x4984b7:goto L4984b7;
case 0x4984bc:c.instructions+=1;goto B4984bc;
case 0x4984bd:goto L4984bd;
case 0x4984c0:c.instructions+=3;goto B4984c0;
case 0x4984c3:c.instructions+=2;goto B4984c3;
case 0x4984c6:c.instructions+=1;goto B4984c6;
case 0x4984cc:goto L4984cc;
case 0x4984d3:goto L4984d3;
case 0x4984d8:c.instructions+=1;goto B4984d8;
case 0x4984d9:goto L4984d9;
case 0x4984de:c.instructions+=1;goto B4984de;
case 0x4984df:goto L4984df;
case 0x4984e4:c.instructions+=1;goto B4984e4;
case 0x4984e5:goto L4984e5;
case 0x4984ea:c.instructions+=1;goto B4984ea;
case 0x4984eb:goto L4984eb;
case 0x4984f0:c.instructions+=1;goto B4984f0;
case 0x4984f1:goto L4984f1;
case 0x4984f6:c.instructions+=2;goto B4984f6;
case 0x4984f9:c.instructions+=1;goto B4984f9;
case 0x4984fb:goto L4984fb;
case 0x498500:c.instructions+=2;goto B498500;
case 0x498505:c.instructions+=1;goto B498505;
case 0x498507:goto L498507;
case 0x49850c:goto L49850c;
case 0x49850f:c.instructions+=2;goto B49850f;
case 0x498512:c.instructions+=1;goto B498512;
case 0x498514:goto L498514;
case 0x49851b:goto L49851b;
case 0x498520:c.instructions+=1;goto B498520;
case 0x498525:goto L498525;
case 0x498528:c.instructions+=1;goto B498528;
case 0x498529:goto L498529;
case 0x49852e:c.instructions+=1;goto B49852e;
case 0x498533:goto L498533;
case 0x498536:c.instructions+=1;goto B498536;
case 0x498537:goto L498537;
case 0x49853c:c.instructions+=1;goto B49853c;
case 0x498541:goto L498541;
case 0x498544:c.instructions+=1;goto B498544;
case 0x498545:goto L498545;
case 0x49854a:c.instructions+=1;goto B49854a;
case 0x49854f:goto L49854f;
case 0x498552:c.instructions+=1;goto B498552;
case 0x498553:goto L498553;
case 0x498558:c.instructions+=1;goto B498558;
case 0x4985a0:goto L4985a0;
case 0x4985a1:c.instructions+=6;goto B4985a1;
case 0x4985a3:c.instructions+=5;goto B4985a3;
case 0x4985a9:c.instructions+=4;goto B4985a9;
case 0x4985b3:c.instructions+=3;goto B4985b3;
case 0x4985b6:c.instructions+=2;goto B4985b6;
case 0x4985b8:c.instructions+=1;goto B4985b8;
case 0x4985ba:goto L4985ba;
case 0x4985bd:c.instructions+=2;goto B4985bd;
case 0x4985bf:c.instructions+=1;goto B4985bf;
case 0x4985c1:goto L4985c1;
case 0x4985c6:goto L4985c6;
case 0x4985c9:c.instructions+=2;goto B4985c9;
case 0x4985cb:c.instructions+=1;goto B4985cb;
case 0x4985cd:goto L4985cd;
case 0x4985d0:c.instructions+=2;goto B4985d0;
case 0x4985d2:c.instructions+=1;goto B4985d2;
case 0x4985d4:goto L4985d4;
case 0x4985d5:c.instructions+=1;goto B4985d5;
case 0x4985da:goto L4985da;
case 0x4985dd:goto L4985dd;
case 0x4985e0:c.instructions+=2;goto B4985e0;
case 0x4985e2:c.instructions+=1;goto B4985e2;
case 0x4985e4:goto L4985e4;
case 0x4985e5:c.instructions+=1;goto B4985e5;
case 0x4985ea:goto L4985ea;
case 0x4985ed:goto L4985ed;
case 0x4985f0:c.instructions+=2;goto B4985f0;
case 0x4985f2:c.instructions+=1;goto B4985f2;
case 0x4985f4:goto L4985f4;
case 0x4985f5:c.instructions+=1;goto B4985f5;
case 0x4985fa:goto L4985fa;
case 0x4985fd:goto L4985fd;
case 0x4985fe:c.instructions+=1;goto B4985fe;
case 0x498600:goto L498600;
case 0x498604:c.instructions+=2;goto B498604;
case 0x498606:c.instructions+=1;goto B498606;
case 0x498608:goto L498608;
case 0x49860b:c.instructions+=3;goto B49860b;
case 0x49860e:c.instructions+=2;goto B49860e;
case 0x498610:c.instructions+=1;goto B498610;
case 0x498612:goto L498612;
case 0x498615:c.instructions+=2;goto B498615;
case 0x498618:c.instructions+=1;goto B498618;
case 0x49861b:goto L49861b;
case 0x498622:c.instructions+=1;goto B498622;
case 0x498625:goto L498625;
case 0x498630:goto L498630;
case 0x498633:c.instructions+=7;goto B498633;
case 0x498634:c.instructions+=6;goto B498634;
case 0x498635:c.instructions+=5;goto B498635;
case 0x498637:c.instructions+=4;goto B498637;
case 0x49863a:c.instructions+=3;goto B49863a;
case 0x49863d:c.instructions+=2;goto B49863d;
case 0x49863f:c.instructions+=1;goto B49863f;
case 0x498641:goto L498641;
case 0x498644:c.instructions+=1;goto B498644;
case 0x498646:goto L498646;
case 0x49864c:goto L49864c;
case 0x49864e:c.instructions+=6;goto B49864e;
case 0x498651:c.instructions+=5;goto B498651;
case 0x498655:c.instructions+=4;goto B498655;
case 0x498658:c.instructions+=3;goto B498658;
case 0x49865a:c.instructions+=2;goto B49865a;
case 0x49865e:c.instructions+=1;goto B49865e;
case 0x498660:goto L498660;
case 0x498663:c.instructions+=2;goto B498663;
case 0x498667:c.instructions+=1;goto B498667;
case 0x498669:goto L498669;
case 0x49866f:c.instructions+=1;goto B49866f;
case 0x498673:goto L498673;
case 0x498677:c.instructions+=4;goto B498677;
case 0x498678:c.instructions+=3;goto B498678;
case 0x49867e:c.instructions+=2;goto B49867e;
case 0x498681:c.instructions+=1;goto B498681;
case 0x498686:goto L498686;
case 0x49868a:c.instructions+=26;goto B49868a;
case 0x49868d:c.instructions+=25;goto B49868d;
case 0x49868f:c.instructions+=24;goto B49868f;
case 0x498692:c.instructions+=23;goto B498692;
case 0x498696:c.instructions+=22;goto B498696;
case 0x498698:c.instructions+=21;goto B498698;
case 0x49869a:c.instructions+=20;goto B49869a;
case 0x49869e:c.instructions+=19;goto B49869e;
case 0x4986a0:c.instructions+=18;goto B4986a0;
case 0x4986a1:c.instructions+=17;goto B4986a1;
case 0x4986a5:c.instructions+=16;goto B4986a5;
case 0x4986a7:c.instructions+=15;goto B4986a7;
case 0x4986a9:c.instructions+=14;goto B4986a9;
case 0x4986ad:c.instructions+=13;goto B4986ad;
case 0x4986b3:c.instructions+=12;goto B4986b3;
case 0x4986b7:c.instructions+=11;goto B4986b7;
case 0x4986b9:c.instructions+=10;goto B4986b9;
case 0x4986bf:c.instructions+=9;goto B4986bf;
case 0x4986c3:c.instructions+=8;goto B4986c3;
case 0x4986c5:c.instructions+=7;goto B4986c5;
case 0x4986c9:c.instructions+=6;goto B4986c9;
case 0x4986cf:c.instructions+=5;goto B4986cf;
case 0x4986d3:c.instructions+=4;goto B4986d3;
case 0x4986d7:c.instructions+=3;goto B4986d7;
case 0x4986dd:c.instructions+=2;goto B4986dd;
case 0x4986e1:c.instructions+=1;goto B4986e1;
case 0x4986e6:goto L4986e6;
case 0x4986ea:c.instructions+=17;goto B4986ea;
case 0x4986ee:c.instructions+=16;goto B4986ee;
case 0x4986f1:c.instructions+=15;goto B4986f1;
case 0x4986f7:c.instructions+=14;goto B4986f7;
case 0x4986fa:c.instructions+=13;goto B4986fa;
case 0x4986fd:c.instructions+=12;goto B4986fd;
case 0x498703:c.instructions+=11;goto B498703;
case 0x498705:c.instructions+=10;goto B498705;
case 0x498709:c.instructions+=9;goto B498709;
case 0x49870d:c.instructions+=8;goto B49870d;
case 0x498711:c.instructions+=7;goto B498711;
case 0x498712:c.instructions+=6;goto B498712;
case 0x498716:c.instructions+=5;goto B498716;
case 0x498718:c.instructions+=4;goto B498718;
case 0x49871a:c.instructions+=3;goto B49871a;
case 0x498720:c.instructions+=2;goto B498720;
case 0x498724:c.instructions+=1;goto B498724;
case 0x498729:goto L498729;
case 0x49872c:c.instructions+=6;goto B49872c;
case 0x498731:c.instructions+=5;goto B498731;
case 0x498732:c.instructions+=4;goto B498732;
case 0x498735:c.instructions+=3;goto B498735;
case 0x498736:c.instructions+=2;goto B498736;
case 0x498739:c.instructions+=1;goto B498739;
case 0x498740:goto L498740;
case 0x498745:c.instructions+=1;goto B498745;
case 0x49874a:goto L49874a;
case 0x49874d:c.instructions+=2;goto B49874d;
case 0x49874f:c.instructions+=1;goto B49874f;
case 0x498751:goto L498751;
case 0x498756:c.instructions+=2;goto B498756;
case 0x498759:c.instructions+=1;goto B498759;
case 0x49875b:goto L49875b;
case 0x498760:c.instructions+=1;goto B498760;
case 0x498762:goto L498762;
case 0x498767:c.instructions+=1;goto B498767;
case 0x49876c:goto L49876c;
case 0x498771:c.instructions+=4;goto B498771;
case 0x498775:c.instructions+=3;goto B498775;
case 0x498778:c.instructions+=2;goto B498778;
case 0x49877b:c.instructions+=1;goto B49877b;
case 0x49877e:goto L49877e;
case 0x498783:c.instructions+=3;goto B498783;
case 0x498787:c.instructions+=2;goto B498787;
case 0x49878d:c.instructions+=1;goto B49878d;
case 0x498793:goto L498793;
case 0x4987a0:goto L4987a0;
case 0x4987a4:c.instructions+=3;goto B4987a4;
case 0x4987a7:c.instructions+=2;goto B4987a7;
case 0x4987a9:c.instructions+=1;goto B4987a9;
case 0x4987ab:goto L4987ab;
case 0x4987af:c.instructions+=3;goto B4987af;
case 0x4987b2:c.instructions+=2;goto B4987b2;
case 0x4987b4:c.instructions+=1;goto B4987b4;
case 0x4987b6:goto L4987b6;
case 0x4987b8:c.instructions+=1;goto B4987b8;
case 0x4987b9:goto L4987b9;
case 0x4987be:c.instructions+=1;goto B4987be;
case 0x4987c0:goto L4987c0;
case 0x4987c4:c.instructions+=2;goto B4987c4;
case 0x4987c6:c.instructions+=1;goto B4987c6;
case 0x4987c8:goto L4987c8;
case 0x4987ca:c.instructions+=1;goto B4987ca;
case 0x4987cd:goto L4987cd;
case 0x4987d3:c.instructions+=5;goto B4987d3;
case 0x4987d9:c.instructions+=4;goto B4987d9;
case 0x4987da:c.instructions+=3;goto B4987da;
case 0x4987e0:c.instructions+=2;goto B4987e0;
case 0x4987e3:c.instructions+=1;goto B4987e3;
case 0x4987e5:goto L4987e5;
case 0x4987eb:c.instructions+=1;goto B4987eb;
case 0x4987ed:goto L4987ed;
case 0x4987f4:c.instructions+=2;goto B4987f4;
case 0x4987f9:c.instructions+=1;goto B4987f9;
case 0x4987fb:goto L4987fb;
case 0x498800:c.instructions+=1;goto B498800;
case 0x498802:goto L498802;
case 0x498808:goto L498808;
case 0x498809:c.instructions+=4;goto B498809;
case 0x49880f:c.instructions+=3;goto B49880f;
case 0x498811:c.instructions+=2;goto B498811;
case 0x498812:c.instructions+=1;goto B498812;
case 0x498814:goto L498814;
case 0x498817:c.instructions+=1;goto B498817;
case 0x498819:goto L498819;
case 0x498820:goto L498820;
case 0x498823:c.instructions+=2;goto B498823;
case 0x498824:c.instructions+=1;goto B498824;
case 0x498827:goto L498827;
case 0x49882a:c.instructions+=3;goto B49882a;
case 0x49882c:c.instructions+=2;goto B49882c;
case 0x49882d:c.instructions+=1;goto B49882d;
case 0x498830:goto L498830;
case 0x498832:c.instructions+=1;goto B498832;
case 0x498834:goto L498834;
case 0x498836:goto L498836;
case 0x498838:goto L498838;
case 0x49883c:c.instructions+=2;goto B49883c;
case 0x49883e:c.instructions+=1;goto B49883e;
case 0x498840:goto L498840;
case 0x498845:c.instructions+=2;goto B498845;
case 0x498846:c.instructions+=1;goto B498846;
case 0x498849:goto L498849;
case 0x49884c:c.instructions+=3;goto B49884c;
case 0x49884e:c.instructions+=2;goto B49884e;
case 0x49884f:c.instructions+=1;goto B49884f;
case 0x498852:goto L498852;
case 0x498855:c.instructions+=3;goto B498855;
case 0x498857:c.instructions+=2;goto B498857;
case 0x498858:c.instructions+=1;goto B498858;
case 0x49885b:goto L49885b;
case 0x49885e:c.instructions+=3;goto B49885e;
case 0x498860:c.instructions+=2;goto B498860;
case 0x498861:c.instructions+=1;goto B498861;
case 0x498864:goto L498864;
case 0x498866:c.instructions+=1;goto B498866;
case 0x498868:goto L498868;
case 0x49886a:c.instructions+=2;goto B49886a;
case 0x49886b:c.instructions+=1;goto B49886b;
case 0x49886e:goto L49886e;
case 0x498871:c.instructions+=3;goto B498871;
case 0x498873:c.instructions+=2;goto B498873;
case 0x498874:c.instructions+=1;goto B498874;
case 0x498877:goto L498877;
case 0x498879:c.instructions+=2;goto B498879;
case 0x49887a:c.instructions+=1;goto B49887a;
case 0x4988c0:goto L4988c0;
case 0x4988c5:c.instructions+=5;goto B4988c5;
case 0x4988c8:c.instructions+=4;goto B4988c8;
case 0x4988cb:c.instructions+=3;goto B4988cb;
case 0x4988cc:c.instructions+=2;goto B4988cc;
case 0x4988ce:c.instructions+=1;goto B4988ce;
case 0x4988d0:goto L4988d0;
case 0x4988d5:c.instructions+=2;goto B4988d5;
case 0x4988da:c.instructions+=1;goto B4988da;
case 0x4988dc:goto L4988dc;
case 0x4988e1:goto L4988e1;
case 0x4988e4:c.instructions+=1;goto B4988e4;
case 0x4988e6:goto L4988e6;
case 0x4988ed:goto L4988ed;
case 0x4988f2:c.instructions+=4;goto B4988f2;
case 0x4988f4:c.instructions+=3;goto B4988f4;
case 0x4988f8:c.instructions+=2;goto B4988f8;
case 0x4988f9:c.instructions+=1;goto B4988f9;
case 0x4988fb:goto L4988fb;
case 0x498900:c.instructions+=1;goto B498900;
case 0x498902:goto L498902;
case 0x498907:c.instructions+=4;goto B498907;
case 0x498909:c.instructions+=3;goto B498909;
case 0x49890d:c.instructions+=2;goto B49890d;
case 0x49890e:c.instructions+=1;goto B49890e;
case 0x498910:goto L498910;
case 0x498915:c.instructions+=4;goto B498915;
case 0x498917:c.instructions+=3;goto B498917;
case 0x49891b:c.instructions+=2;goto B49891b;
case 0x49891c:c.instructions+=1;goto B49891c;
case 0x49891e:goto L49891e;
case 0x498923:c.instructions+=1;goto B498923;
case 0x498925:goto L498925;
case 0x49892a:c.instructions+=4;goto B49892a;
case 0x49892c:c.instructions+=3;goto B49892c;
case 0x498930:c.instructions+=2;goto B498930;
case 0x498931:c.instructions+=1;goto B498931;
case 0x498933:goto L498933;
case 0x498938:c.instructions+=4;goto B498938;
case 0x49893a:c.instructions+=3;goto B49893a;
case 0x49893e:c.instructions+=2;goto B49893e;
case 0x49893f:c.instructions+=1;goto B49893f;
case 0x498941:goto L498941;
case 0x498946:goto L498946;
case 0x49894a:c.instructions+=2;goto B49894a;
case 0x49894c:c.instructions+=1;goto B49894c;
case 0x49894d:goto L49894d;
case 0x498952:goto L498952;
case 0x498955:c.instructions+=6;goto B498955;
case 0x498958:c.instructions+=5;goto B498958;
case 0x49895c:c.instructions+=4;goto B49895c;
case 0x49895d:c.instructions+=3;goto B49895d;
case 0x498962:c.instructions+=2;goto B498962;
case 0x498963:c.instructions+=1;goto B498963;
case 0x498968:goto L498968;
case 0x49896b:c.instructions+=3;goto B49896b;
case 0x49896c:c.instructions+=2;goto B49896c;
case 0x49896f:c.instructions+=1;goto B49896f;
case 0x4989a0:goto L4989a0;
case 0x4989a2:c.instructions+=14;goto B4989a2;
case 0x4989a7:c.instructions+=13;goto B4989a7;
case 0x4989ad:c.instructions+=12;goto B4989ad;
case 0x4989ae:c.instructions+=11;goto B4989ae;
case 0x4989b5:c.instructions+=10;goto B4989b5;
case 0x4989b6:c.instructions+=9;goto B4989b6;
case 0x4989b7:c.instructions+=8;goto B4989b7;
case 0x4989b9:c.instructions+=7;goto B4989b9;
case 0x4989bd:c.instructions+=6;goto B4989bd;
case 0x4989c3:c.instructions+=5;goto B4989c3;
case 0x4989c8:c.instructions+=4;goto B4989c8;
case 0x4989ca:c.instructions+=3;goto B4989ca;
case 0x4989cb:c.instructions+=2;goto B4989cb;
case 0x4989d3:c.instructions+=1;goto B4989d3;
case 0x4989d8:goto L4989d8;
case 0x4989db:c.instructions+=3;goto B4989db;
case 0x4989dd:c.instructions+=2;goto B4989dd;
case 0x4989e5:c.instructions+=1;goto B4989e5;
case 0x4989ea:goto L4989ea;
case 0x4989ee:c.instructions+=4;goto B4989ee;
case 0x4989ef:c.instructions+=3;goto B4989ef;
case 0x4989f6:c.instructions+=2;goto B4989f6;
case 0x4989f9:c.instructions+=1;goto B4989f9;
case 0x498a00:goto L498a00;
case 0x498a04:c.instructions+=5;goto B498a04;
case 0x498a05:c.instructions+=4;goto B498a05;
case 0x498a07:c.instructions+=3;goto B498a07;
case 0x498a0a:c.instructions+=2;goto B498a0a;
case 0x498a0c:c.instructions+=1;goto B498a0c;
case 0x498a0e:goto L498a0e;
case 0x498a10:c.instructions+=1;goto B498a10;
case 0x498a12:goto L498a12;
case 0x498a13:c.instructions+=3;goto B498a13;
case 0x498a19:c.instructions+=2;goto B498a19;
case 0x498a1e:c.instructions+=1;goto B498a1e;
case 0x498a20:goto L498a20;
case 0x498a22:goto L498a22;
case 0x498a23:goto L498a23;
case 0x498a26:c.instructions+=1;goto B498a26;
case 0x498a28:goto L498a28;
case 0x498a2e:c.instructions+=6;goto B498a2e;
case 0x498a31:c.instructions+=5;goto B498a31;
case 0x498a34:c.instructions+=4;goto B498a34;
case 0x498a3a:c.instructions+=3;goto B498a3a;
case 0x498a3b:c.instructions+=2;goto B498a3b;
case 0x498a3c:c.instructions+=1;goto B498a3c;
case 0x498a3e:goto L498a3e;
case 0x498a44:c.instructions+=5;goto B498a44;
case 0x498a47:c.instructions+=4;goto B498a47;
case 0x498a4a:c.instructions+=3;goto B498a4a;
case 0x498a50:c.instructions+=2;goto B498a50;
case 0x498a51:c.instructions+=1;goto B498a51;
case 0x498a52:goto L498a52;
case 0x498a57:goto L498a57;
case 0x498a5a:c.instructions+=3;goto B498a5a;
case 0x498a5d:c.instructions+=2;goto B498a5d;
case 0x498a5e:c.instructions+=1;goto B498a5e;
case 0x498a63:goto L498a63;
case 0x498a66:c.instructions+=3;goto B498a66;
case 0x498a70:c.instructions+=2;goto B498a70;
case 0x498a71:c.instructions+=1;goto B498a71;
case 0x498a80:goto L498a80;
case 0x498a84:c.instructions+=8;goto B498a84;
case 0x498a86:c.instructions+=7;goto B498a86;
case 0x498a87:c.instructions+=6;goto B498a87;
case 0x498a88:c.instructions+=5;goto B498a88;
case 0x498a8c:c.instructions+=4;goto B498a8c;
case 0x498a8e:c.instructions+=3;goto B498a8e;
case 0x498a92:c.instructions+=2;goto B498a92;
case 0x498a94:c.instructions+=1;goto B498a94;
case 0x498a96:goto L498a96;
case 0x498a9b:c.instructions+=1;goto B498a9b;
case 0x498aa0:goto L498aa0;
case 0x498aa7:c.instructions+=3;goto B498aa7;
case 0x498aa9:c.instructions+=2;goto B498aa9;
case 0x498aae:c.instructions+=1;goto B498aae;
case 0x498ab3:goto L498ab3;
case 0x498ab4:c.instructions+=2;goto B498ab4;
case 0x498ab5:c.instructions+=1;goto B498ab5;
case 0x498ab8:goto L498ab8;
case 0x498abd:c.instructions+=1;goto B498abd;
case 0x498ac2:goto L498ac2;
case 0x498ac9:c.instructions+=3;goto B498ac9;
case 0x498acb:c.instructions+=2;goto B498acb;
case 0x498ad0:c.instructions+=1;goto B498ad0;
case 0x498ad5:goto L498ad5;
case 0x498ad6:c.instructions+=2;goto B498ad6;
case 0x498ad7:c.instructions+=1;goto B498ad7;
case 0x498ae0:goto L498ae0;
case 0x498ae4:c.instructions+=8;goto B498ae4;
case 0x498ae6:c.instructions+=7;goto B498ae6;
case 0x498ae7:c.instructions+=6;goto B498ae7;
case 0x498ae8:c.instructions+=5;goto B498ae8;
case 0x498aec:c.instructions+=4;goto B498aec;
case 0x498aee:c.instructions+=3;goto B498aee;
case 0x498af5:c.instructions+=2;goto B498af5;
case 0x498af7:c.instructions+=1;goto B498af7;
case 0x498af9:goto L498af9;
case 0x498afe:c.instructions+=1;goto B498afe;
case 0x498b03:goto L498b03;
case 0x498b0a:c.instructions+=3;goto B498b0a;
case 0x498b0c:c.instructions+=2;goto B498b0c;
case 0x498b11:c.instructions+=1;goto B498b11;
case 0x498b16:goto L498b16;
case 0x498b17:c.instructions+=2;goto B498b17;
case 0x498b18:c.instructions+=1;goto B498b18;
case 0x498b1b:goto L498b1b;
case 0x498b20:c.instructions+=1;goto B498b20;
case 0x498b25:goto L498b25;
case 0x498b2c:c.instructions+=3;goto B498b2c;
case 0x498b2e:c.instructions+=2;goto B498b2e;
case 0x498b33:c.instructions+=1;goto B498b33;
case 0x498b38:goto L498b38;
case 0x498b39:c.instructions+=2;goto B498b39;
case 0x498b3a:c.instructions+=1;goto B498b3a;
case 0x498b40:goto L498b40;
case 0x498b44:c.instructions+=7;goto B498b44;
case 0x498b45:c.instructions+=6;goto B498b45;
case 0x498b47:c.instructions+=5;goto B498b47;
case 0x498b4d:c.instructions+=4;goto B498b4d;
case 0x498b52:c.instructions+=3;goto B498b52;
case 0x498b53:c.instructions+=2;goto B498b53;
case 0x498b54:c.instructions+=1;goto B498b54;
case 0x498b59:goto L498b59;
case 0x498b5f:c.instructions+=5;goto B498b5f;
case 0x498b62:c.instructions+=4;goto B498b62;
case 0x498b65:c.instructions+=3;goto B498b65;
case 0x498b66:c.instructions+=2;goto B498b66;
case 0x498b69:c.instructions+=1;goto B498b69;
case 0x498b6e:goto L498b6e;
case 0x498b74:c.instructions+=2;goto B498b74;
case 0x498b75:c.instructions+=1;goto B498b75;
case 0x498b7a:goto L498b7a;
case 0x498b7d:c.instructions+=3;goto B498b7d;
case 0x498b80:c.instructions+=2;goto B498b80;
case 0x498b81:c.instructions+=1;goto B498b81;
case 0x498b90:goto L498b90;
case 0x498b94:c.instructions+=3;goto B498b94;
case 0x498b96:c.instructions+=2;goto B498b96;
case 0x498b9c:c.instructions+=1;goto B498b9c;
case 0x498ba0:goto L498ba0;
case 0x498ba2:c.instructions+=1;goto B498ba2;
case 0x498ba4:goto L498ba4;
case 0x498ba5:c.instructions+=3;goto B498ba5;
case 0x498ba8:c.instructions+=2;goto B498ba8;
case 0x498bab:c.instructions+=1;goto B498bab;
case 0x498bad:goto L498bad;
case 0x498bb0:goto L498bb0;
case 0x498bc0:goto L498bc0;
case 0x498bc4:c.instructions+=3;goto B498bc4;
case 0x498bc6:c.instructions+=2;goto B498bc6;
case 0x498bcc:c.instructions+=1;goto B498bcc;
case 0x498bd0:goto L498bd0;
case 0x498bd2:c.instructions+=1;goto B498bd2;
case 0x498bd4:goto L498bd4;
case 0x498bd5:c.instructions+=3;goto B498bd5;
case 0x498bd8:c.instructions+=2;goto B498bd8;
case 0x498bdb:c.instructions+=1;goto B498bdb;
case 0x498bdd:goto L498bdd;
case 0x498be0:goto L498be0;
case 0x498bf0:goto L498bf0;
case 0x498bf1:c.instructions+=3;goto B498bf1;
case 0x498bf5:c.instructions+=2;goto B498bf5;
case 0x498bf8:c.instructions+=1;goto B498bf8;
case 0x498bfa:goto L498bfa;
case 0x498bfd:c.instructions+=3;goto B498bfd;
case 0x498bff:c.instructions+=2;goto B498bff;
case 0x498c02:c.instructions+=1;goto B498c02;
case 0x498c04:goto L498c04;
case 0x498c06:c.instructions+=3;goto B498c06;
case 0x498c08:c.instructions+=2;goto B498c08;
case 0x498c0b:c.instructions+=1;goto B498c0b;
case 0x498c0d:goto L498c0d;
case 0x498c0f:c.instructions+=2;goto B498c0f;
case 0x498c11:c.instructions+=1;goto B498c11;
case 0x498c14:goto L498c14;
case 0x498c1a:c.instructions+=4;goto B498c1a;
case 0x498c1d:c.instructions+=3;goto B498c1d;
case 0x498c20:c.instructions+=2;goto B498c20;
case 0x498c27:c.instructions+=1;goto B498c27;
case 0x498c29:goto L498c29;
case 0x498c2c:c.instructions+=1;goto B498c2c;
case 0x498c2e:goto L498c2e;
case 0x498c31:c.instructions+=1;goto B498c31;
case 0x498c33:goto L498c33;
case 0x498c36:c.instructions+=1;goto B498c36;
case 0x498c38:goto L498c38;
case 0x498c3b:c.instructions+=1;goto B498c3b;
case 0x498c41:goto L498c41;
case 0x498c47:c.instructions+=2;goto B498c47;
case 0x498c48:c.instructions+=1;goto B498c48;
case 0x498c4b:goto L498c4b;
case 0x498c51:c.instructions+=2;goto B498c51;
case 0x498c52:c.instructions+=1;goto B498c52;
case 0x498c55:goto L498c55;
case 0x498c58:c.instructions+=6;goto B498c58;
case 0x498c5a:c.instructions+=5;goto B498c5a;
case 0x498c5b:c.instructions+=4;goto B498c5b;
case 0x498c5e:c.instructions+=3;goto B498c5e;
case 0x498c5f:c.instructions+=2;goto B498c5f;
case 0x498c63:c.instructions+=1;goto B498c63;
case 0x498c65:goto L498c65;
case 0x498c67:c.instructions+=3;goto B498c67;
case 0x498c69:c.instructions+=2;goto B498c69;
case 0x498c6c:c.instructions+=1;goto B498c6c;
case 0x498c6e:goto L498c6e;
case 0x498c70:c.instructions+=2;goto B498c70;
case 0x498c72:c.instructions+=1;goto B498c72;
case 0x498c75:goto L498c75;
case 0x498c78:c.instructions+=8;goto B498c78;
case 0x498c7b:c.instructions+=7;goto B498c7b;
case 0x498c7d:c.instructions+=6;goto B498c7d;
case 0x498c7f:c.instructions+=5;goto B498c7f;
case 0x498c82:c.instructions+=4;goto B498c82;
case 0x498c89:c.instructions+=3;goto B498c89;
case 0x498c8f:c.instructions+=2;goto B498c8f;
case 0x498c91:c.instructions+=1;goto B498c91;
case 0x498c93:goto L498c93;
case 0x498c96:c.instructions+=3;goto B498c96;
case 0x498c9d:c.instructions+=2;goto B498c9d;
case 0x498c9f:c.instructions+=1;goto B498c9f;
case 0x498ca1:goto L498ca1;
case 0x498ca2:c.instructions+=4;goto B498ca2;
case 0x498ca3:c.instructions+=3;goto B498ca3;
case 0x498ca5:c.instructions+=2;goto B498ca5;
case 0x498ca6:c.instructions+=1;goto B498ca6;
case 0x498ca9:goto L498ca9;
case 0x498cac:c.instructions+=1;goto B498cac;
case 0x498cae:goto L498cae;
case 0x498cb1:c.instructions+=7;goto B498cb1;
case 0x498cb4:c.instructions+=6;goto B498cb4;
case 0x498cb6:c.instructions+=5;goto B498cb6;
case 0x498cb7:c.instructions+=4;goto B498cb7;
case 0x498cb8:c.instructions+=3;goto B498cb8;
case 0x498cb9:c.instructions+=2;goto B498cb9;
case 0x498cbc:c.instructions+=1;goto B498cbc;
case 0x498cbf:goto L498cbf;
case 0x498cc2:c.instructions+=2;goto B498cc2;
case 0x498cc4:c.instructions+=1;goto B498cc4;
case 0x498cc6:goto L498cc6;
case 0x498cca:c.instructions+=2;goto B498cca;
case 0x498ccc:c.instructions+=1;goto B498ccc;
case 0x498cce:goto L498cce;
case 0x498cd0:c.instructions+=8;goto B498cd0;
case 0x498cd2:c.instructions+=7;goto B498cd2;
case 0x498cd5:c.instructions+=6;goto B498cd5;
case 0x498cd6:c.instructions+=5;goto B498cd6;
case 0x498cd7:c.instructions+=4;goto B498cd7;
case 0x498cda:c.instructions+=3;goto B498cda;
case 0x498ce1:c.instructions+=2;goto B498ce1;
case 0x498ce2:c.instructions+=1;goto B498ce2;
case 0x498ce5:goto L498ce5;
case 0x498ce7:c.instructions+=4;goto B498ce7;
case 0x498ce9:c.instructions+=3;goto B498ce9;
case 0x498cec:c.instructions+=2;goto B498cec;
case 0x498cef:c.instructions+=1;goto B498cef;
case 0x498cf6:goto L498cf6;
case 0x498cf7:c.instructions+=1;goto B498cf7;
case 0x498cf8:goto L498cf8;
case 0x498cf9:c.instructions+=1;goto B498cf9;
case 0x498d00:goto L498d00;
case 0x498d05:c.instructions+=1;goto B498d05;
case 0x498d0a:goto L498d0a;
case 0x498d0c:c.instructions+=1;goto B498d0c;
case 0x498d0e:goto L498d0e;
case 0x498d13:c.instructions+=2;goto B498d13;
case 0x498d15:c.instructions+=1;goto B498d15;
case 0x498d17:goto L498d17;
case 0x498d1c:c.instructions+=2;goto B498d1c;
case 0x498d1e:c.instructions+=1;goto B498d1e;
case 0x498d20:goto L498d20;
case 0x498d26:c.instructions+=2;goto B498d26;
case 0x498d28:c.instructions+=1;goto B498d28;
case 0x498d2a:goto L498d2a;
case 0x498d2c:c.instructions+=2;goto B498d2c;
case 0x498d31:c.instructions+=1;goto B498d31;
case 0x498d36:goto L498d36;
case 0x498d39:c.instructions+=1;goto B498d39;
case 0x498d3a:goto L498d3a;
case 0x498d3c:c.instructions+=1;goto B498d3c;
case 0x498d3e:goto L498d3e;
case 0x498d44:c.instructions+=2;goto B498d44;
case 0x498d46:c.instructions+=1;goto B498d46;
case 0x498d48:goto L498d48;
case 0x498d4a:c.instructions+=2;goto B498d4a;
case 0x498d4f:c.instructions+=1;goto B498d4f;
case 0x498d54:goto L498d54;
case 0x498d57:c.instructions+=1;goto B498d57;
case 0x498d58:goto L498d58;
case 0x498d5a:c.instructions+=1;goto B498d5a;
case 0x498d5c:goto L498d5c;
case 0x498d62:c.instructions+=2;goto B498d62;
case 0x498d64:c.instructions+=1;goto B498d64;
case 0x498d66:goto L498d66;
case 0x498d68:c.instructions+=1;goto B498d68;
case 0x498d6a:goto L498d6a;
case 0x498d6f:c.instructions+=2;goto B498d6f;
case 0x498d71:c.instructions+=1;goto B498d71;
case 0x498d73:goto L498d73;
case 0x498d75:c.instructions+=2;goto B498d75;
case 0x498d7a:c.instructions+=1;goto B498d7a;
case 0x498d7f:goto L498d7f;
case 0x498d82:goto L498d82;
case 0x498d90:goto L498d90;
case 0x498d95:c.instructions+=1;goto B498d95;
case 0x498d9a:goto L498d9a;
case 0x498d9c:c.instructions+=1;goto B498d9c;
case 0x498d9e:goto L498d9e;
case 0x498da3:c.instructions+=2;goto B498da3;
case 0x498da5:c.instructions+=1;goto B498da5;
case 0x498da7:goto L498da7;
case 0x498dac:c.instructions+=1;goto B498dac;
case 0x498db1:goto L498db1;
case 0x498db4:c.instructions+=1;goto B498db4;
case 0x498db5:goto L498db5;
case 0x498dba:c.instructions+=2;goto B498dba;
case 0x498dbc:c.instructions+=1;goto B498dbc;
case 0x498dbe:goto L498dbe;
case 0x498dc4:c.instructions+=2;goto B498dc4;
case 0x498dc6:c.instructions+=1;goto B498dc6;
case 0x498dc8:goto L498dc8;
case 0x498dcd:c.instructions+=1;goto B498dcd;
case 0x498dd2:goto L498dd2;
case 0x498dd5:c.instructions+=1;goto B498dd5;
case 0x498dd6:goto L498dd6;
case 0x498dd8:c.instructions+=1;goto B498dd8;
case 0x498dda:goto L498dda;
case 0x498de0:c.instructions+=2;goto B498de0;
case 0x498de2:c.instructions+=1;goto B498de2;
case 0x498de4:goto L498de4;
case 0x498de6:c.instructions+=1;goto B498de6;
case 0x498de8:goto L498de8;
case 0x498dee:c.instructions+=2;goto B498dee;
case 0x498df0:c.instructions+=1;goto B498df0;
case 0x498df2:goto L498df2;
case 0x498df4:c.instructions+=1;goto B498df4;
case 0x498df6:goto L498df6;
case 0x498dfb:c.instructions+=2;goto B498dfb;
case 0x498dfd:c.instructions+=1;goto B498dfd;
case 0x498dff:goto L498dff;
case 0x498e04:c.instructions+=1;goto B498e04;
case 0x498e09:goto L498e09;
case 0x498e0a:goto L498e0a;
case 0x498e10:goto L498e10;
case 0x498e15:c.instructions+=8;goto B498e15;
case 0x498e16:c.instructions+=7;goto B498e16;
case 0x498e1c:c.instructions+=6;goto B498e1c;
case 0x498e1e:c.instructions+=5;goto B498e1e;
case 0x498e20:c.instructions+=4;goto B498e20;
case 0x498e22:c.instructions+=3;goto B498e22;
case 0x498e23:c.instructions+=2;goto B498e23;
case 0x498e28:c.instructions+=1;goto B498e28;
case 0x498e2d:goto L498e2d;
case 0x498e2f:c.instructions+=2;goto B498e2f;
case 0x498e32:c.instructions+=1;goto B498e32;
case 0x498e34:goto L498e34;
case 0x498e36:c.instructions+=1;goto B498e36;
case 0x498e38:goto L498e38;
case 0x498e3a:c.instructions+=1;goto B498e3a;
case 0x498e3f:goto L498e3f;
case 0x498e42:goto L498e42;
case 0x498e43:c.instructions+=1;goto B498e43;
case 0x498e44:goto L498e44;
case 0x498e46:c.instructions+=1;goto B498e46;
case 0x498e48:goto L498e48;
case 0x498e4a:c.instructions+=1;goto B498e4a;
case 0x498e4f:goto L498e4f;
case 0x498e52:c.instructions+=2;goto B498e52;
case 0x498e53:c.instructions+=1;goto B498e53;
case 0x498e54:goto L498e54;
case 0x498e56:c.instructions+=1;goto B498e56;
case 0x498e58:goto L498e58;
case 0x498e59:c.instructions+=1;goto B498e59;
case 0x498e5e:goto L498e5e;
case 0x498e60:c.instructions+=1;goto B498e60;
case 0x498e62:goto L498e62;
case 0x498e63:c.instructions+=1;goto B498e63;
case 0x498e70:goto L498e70;
case 0x498e75:c.instructions+=9;goto B498e75;
case 0x498e76:c.instructions+=8;goto B498e76;
case 0x498e78:c.instructions+=7;goto B498e78;
case 0x498e7a:c.instructions+=6;goto B498e7a;
case 0x498e80:c.instructions+=5;goto B498e80;
case 0x498e82:c.instructions+=4;goto B498e82;
case 0x498e84:c.instructions+=3;goto B498e84;
case 0x498e85:c.instructions+=2;goto B498e85;
case 0x498e8a:c.instructions+=1;goto B498e8a;
case 0x498e8f:goto L498e8f;
case 0x498e91:c.instructions+=1;goto B498e91;
case 0x498e93:goto L498e93;
case 0x498e99:c.instructions+=7;goto B498e99;
case 0x498e9e:c.instructions+=6;goto B498e9e;
case 0x498ea0:c.instructions+=5;goto B498ea0;
case 0x498ea2:c.instructions+=4;goto B498ea2;
case 0x498ea4:c.instructions+=3;goto B498ea4;
case 0x498ea5:c.instructions+=2;goto B498ea5;
case 0x498eaa:c.instructions+=1;goto B498eaa;
case 0x498eaf:goto L498eaf;
case 0x498eb0:c.instructions+=2;goto B498eb0;
case 0x498eb5:c.instructions+=1;goto B498eb5;
case 0x498eba:goto L498eba;
case 0x498ebf:c.instructions+=1;goto B498ebf;
case 0x498ec4:goto L498ec4;
case 0x498ec5:c.instructions+=2;goto B498ec5;
case 0x498eca:c.instructions+=1;goto B498eca;
case 0x498ecf:goto L498ecf;
case 0x498ed4:c.instructions+=1;goto B498ed4;
case 0x498ed9:goto L498ed9;
case 0x498edf:c.instructions+=3;goto B498edf;
case 0x498ee2:c.instructions+=2;goto B498ee2;
case 0x498ee4:c.instructions+=1;goto B498ee4;
case 0x498ee9:goto L498ee9;
case 0x498eea:c.instructions+=1;goto B498eea;
case 0x498eeb:goto L498eeb;
case 0x498eee:c.instructions+=4;goto B498eee;
case 0x498ef0:c.instructions+=3;goto B498ef0;
case 0x498ef5:c.instructions+=2;goto B498ef5;
case 0x498ef6:c.instructions+=1;goto B498ef6;
case 0x498efb:goto L498efb;
case 0x498efe:c.instructions+=2;goto B498efe;
case 0x498eff:c.instructions+=1;goto B498eff;
case 0x498f00:goto L498f00;
case 0x498f01:c.instructions+=7;goto B498f01;
case 0x498f03:c.instructions+=6;goto B498f03;
case 0x498f06:c.instructions+=5;goto B498f06;
case 0x498f0b:c.instructions+=4;goto B498f0b;
case 0x498f0c:c.instructions+=3;goto B498f0c;
case 0x498f0d:c.instructions+=2;goto B498f0d;
case 0x498f0f:c.instructions+=1;goto B498f0f;
case 0x498f15:goto L498f15;
case 0x498f1b:goto L498f1b;
case 0x498f20:c.instructions+=1;goto B498f20;
case 0x498f22:goto L498f22;
case 0x498f27:c.instructions+=1;goto B498f27;
case 0x498f2d:goto L498f2d;
case 0x498f32:c.instructions+=2;goto B498f32;
case 0x498f34:c.instructions+=1;goto B498f34;
case 0x498f36:goto L498f36;
case 0x498f3b:c.instructions+=2;goto B498f3b;
case 0x498f3d:c.instructions+=1;goto B498f3d;
case 0x498f3f:goto L498f3f;
case 0x498f42:c.instructions+=2;goto B498f42;
case 0x498f43:c.instructions+=1;goto B498f43;
case 0x498f45:goto L498f45;
case 0x498f48:c.instructions+=1;goto B498f48;
case 0x498f49:goto L498f49;
case 0x498f4c:c.instructions+=1;goto B498f4c;
case 0x498f51:goto L498f51;
case 0x498f52:c.instructions+=2;goto B498f52;
case 0x498f53:c.instructions+=1;goto B498f53;
case 0x498f58:goto L498f58;
case 0x498f5b:c.instructions+=2;goto B498f5b;
case 0x498f60:c.instructions+=1;goto B498f60;
case 0x498f65:goto L498f65;
case 0x498f66:c.instructions+=3;goto B498f66;
case 0x498f67:c.instructions+=2;goto B498f67;
case 0x498f68:c.instructions+=1;goto B498f68;
case 0x498f6b:goto L498f6b;
case 0x498f6e:c.instructions+=3;goto B498f6e;
case 0x498f71:c.instructions+=2;goto B498f71;
case 0x498f76:c.instructions+=1;goto B498f76;
case 0x498f7c:goto L498f7c;
case 0x498f81:c.instructions+=1;goto B498f81;
case 0x498f83:goto L498f83;
case 0x498f88:c.instructions+=1;goto B498f88;
case 0x498f8e:goto L498f8e;
case 0x498f93:c.instructions+=1;goto B498f93;
case 0x498f98:goto L498f98;
case 0x498f9a:c.instructions+=1;goto B498f9a;
case 0x498f9c:goto L498f9c;
case 0x498fa1:c.instructions+=1;goto B498fa1;
case 0x498fa6:goto L498fa6;
case 0x498fa7:c.instructions+=2;goto B498fa7;
case 0x498fac:c.instructions+=1;goto B498fac;
case 0x498fb1:goto L498fb1;
case 0x498fb7:c.instructions+=2;goto B498fb7;
case 0x498fb9:c.instructions+=1;goto B498fb9;
case 0x498fbe:goto L498fbe;
case 0x498fc1:c.instructions+=5;goto B498fc1;
case 0x498fc4:c.instructions+=4;goto B498fc4;
case 0x498fc5:c.instructions+=3;goto B498fc5;
case 0x498fc7:c.instructions+=2;goto B498fc7;
case 0x498fc8:c.instructions+=1;goto B498fc8;
case 0x498fcd:goto L498fcd;
case 0x498fd0:c.instructions+=4;goto B498fd0;
case 0x498fd1:c.instructions+=3;goto B498fd1;
case 0x498fd2:c.instructions+=2;goto B498fd2;
case 0x498fd3:c.instructions+=1;goto B498fd3;
case 0x498fd6:goto L498fd6;
case 0x498fdb:c.instructions+=1;goto B498fdb;
case 0x498fe0:goto L498fe0;
case 0x498fe2:c.instructions+=1;goto B498fe2;
case 0x498fe8:goto L498fe8;
case 0x498feb:c.instructions+=5;goto B498feb;
case 0x498fee:c.instructions+=4;goto B498fee;
case 0x498fef:c.instructions+=3;goto B498fef;
case 0x498ff1:c.instructions+=2;goto B498ff1;
case 0x498ff2:c.instructions+=1;goto B498ff2;
case 0x498ff7:goto L498ff7;
case 0x498ffa:c.instructions+=2;goto B498ffa;
case 0x498fff:c.instructions+=1;goto B498fff;
default:missing_instruction(c.pc);}
B498000:L498000:{c.instructions+=4;NFSU2_TR(0x498000);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498001:{NFSU2_TR(0x498001);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B498004:{NFSU2_TR(0x498004);
u8 U[4];
w4(U+0,u32(0xc4f4678eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498009:{NFSU2_TR(0x498009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49800eull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49800e:L49800e:{c.instructions+=10;NFSU2_TR(0x49800e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49800f:{NFSU2_TR(0x49800f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498011:{NFSU2_TR(0x498011);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498013:{NFSU2_TR(0x498013);
u8 U[4];
w4(U+0,u32(0x1190b317ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498018:{NFSU2_TR(0x498018);
u8 U[4];
w4(U+0,u32(0x43a743abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49801d:{NFSU2_TR(0x49801d);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498022:{NFSU2_TR(0x498022);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498027:{NFSU2_TR(0x498027);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49802c:{NFSU2_TR(0x49802c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49802d:{NFSU2_TR(0x49802d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498032ull));
TAIL_STATIC(0x558750u,558);
}
B498032:L498032:{c.instructions+=3;NFSU2_TR(0x498032);
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
B498035:{NFSU2_TR(0x498035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498036:{NFSU2_TR(0x498036);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498040:L498040:{c.instructions+=11;NFSU2_TR(0x498040);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498043:{NFSU2_TR(0x498043);
u8 U[4];
w4(U+0,u32(0xc4f4678eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498048:{NFSU2_TR(0x498048);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49804a:{NFSU2_TR(0x49804a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49804c:{NFSU2_TR(0x49804c);
u8 U[4];
w4(U+0,u32(0x1190b316ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498051:{NFSU2_TR(0x498051);
u8 U[4];
w4(U+0,u32(0x43a743aaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498056:{NFSU2_TR(0x498056);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49805b:{NFSU2_TR(0x49805b);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498060:{NFSU2_TR(0x498060);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498065:{NFSU2_TR(0x498065);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498066:{NFSU2_TR(0x498066);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49806bull));
TAIL_STATIC(0x558790u,558);
}
B49806b:L49806b:{c.instructions+=2;NFSU2_TR(0x49806b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49806e:{NFSU2_TR(0x49806e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498070:L498070:{c.instructions+=7;NFSU2_TR(0x498070);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498074:{NFSU2_TR(0x498074);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B498079:{NFSU2_TR(0x498079);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49807a:{NFSU2_TR(0x49807a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49807b:{NFSU2_TR(0x49807b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49807c:{NFSU2_TR(0x49807c);
__builtin_memmove((R+24),(R+4),4);
}
B49807e:{NFSU2_TR(0x49807e);
if(r1(R+518)){{goto L498197;}}
}
B498084:L498084:{c.instructions+=2;NFSU2_TR(0x498084);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5af2461ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B498089:{NFSU2_TR(0x498089);
if(r1(R+518)){{goto L4980a0;}}
}
B49808b:L49808b:{c.instructions+=2;NFSU2_TR(0x49808b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B498090:{NFSU2_TR(0x498090);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49820c;}}
}
B498096:L498096:{c.instructions+=5;NFSU2_TR(0x498096);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498097:{NFSU2_TR(0x498097);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49809b:{NFSU2_TR(0x49809b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49809c:{NFSU2_TR(0x49809c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49809d:{NFSU2_TR(0x49809d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4980a0:L4980a0:{c.instructions+=3;NFSU2_TR(0x4980a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4980a4:{NFSU2_TR(0x4980a4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4980a7:{NFSU2_TR(0x4980a7);
if(r1(R+518)){{goto L4980ea;}}
}
B4980a9:L4980a9:{c.instructions+=2;NFSU2_TR(0x4980a9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4980ac:{NFSU2_TR(0x4980ac);
if(r1(R+518)){{goto L4980ea;}}
}
B4980ae:L4980ae:{c.instructions+=2;NFSU2_TR(0x4980ae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4980b1:{NFSU2_TR(0x4980b1);
if(r1(R+518)){{goto L4980ea;}}
}
B4980b3:L4980b3:{c.instructions+=2;NFSU2_TR(0x4980b3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4980b6:{NFSU2_TR(0x4980b6);
if(r1(R+518)){{goto L4980ea;}}
}
B4980b8:L4980b8:{c.instructions+=2;NFSU2_TR(0x4980b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4980bb:{NFSU2_TR(0x4980bb);
if(r1(R+518)){{goto L4980c4;}}
}
B4980bd:L4980bd:{c.instructions+=2;NFSU2_TR(0x4980bd);
w4(R+12,u32(0x1ull));
}
B4980c2:{NFSU2_TR(0x4980c2);
{goto L4980ea;}
}
B4980c4:L4980c4:{c.instructions+=2;NFSU2_TR(0x4980c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4980c7:{NFSU2_TR(0x4980c7);
if(r1(R+518)){{goto L4980d0;}}
}
B4980c9:L4980c9:{c.instructions+=2;NFSU2_TR(0x4980c9);
w4(R+12,u32(0x2ull));
}
B4980ce:{NFSU2_TR(0x4980ce);
{goto L4980ea;}
}
B4980d0:L4980d0:{c.instructions+=2;NFSU2_TR(0x4980d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4980d3:{NFSU2_TR(0x4980d3);
if(r1(R+518)){{goto L4980dc;}}
}
B4980d5:L4980d5:{c.instructions+=2;NFSU2_TR(0x4980d5);
w4(R+12,u32(0x4ull));
}
B4980da:{NFSU2_TR(0x4980da);
{goto L4980ea;}
}
B4980dc:L4980dc:{c.instructions+=2;NFSU2_TR(0x4980dc);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4980df:{NFSU2_TR(0x4980df);
if(r1(R+518)){{goto L49820c;}}
}
B4980e5:L4980e5:{c.instructions+=1;NFSU2_TR(0x4980e5);
w4(R+12,u32(0x8ull));
}
B4980ea:L4980ea:{c.instructions+=3;NFSU2_TR(0x4980ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4980ed:{NFSU2_TR(0x4980ed);
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
B4980ef:{NFSU2_TR(0x4980ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49820c;}}
}
B4980f5:L4980f5:{c.instructions+=3;NFSU2_TR(0x4980f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4980f8:{NFSU2_TR(0x4980f8);
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
B4980fa:{NFSU2_TR(0x4980fa);
if(r1(R+518)){{goto L49820c;}}
}
B498100:L498100:{c.instructions+=2;NFSU2_TR(0x498100);
u8 U[8];
__builtin_memmove((U+0),gp(0x85ad28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B498107:{NFSU2_TR(0x498107);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498120;}}
}
B498109:L498109:{c.instructions+=3;NFSU2_TR(0x498109);
__builtin_memmove((R+28),gp(0x83a9d8),4);
}
B49810f:{NFSU2_TR(0x49810f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498110:{NFSU2_TR(0x498110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498115ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B498115:L498115:{c.instructions+=3;NFSU2_TR(0x498115);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B498118:{NFSU2_TR(0x498118);
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
B49811a:{NFSU2_TR(0x49811a);
if(r1(R+518)){{goto L49820c;}}
}
B498120:L498120:{c.instructions+=3;NFSU2_TR(0x498120);
__builtin_memmove((R+28),gp(0x85ad28),4);
}
B498126:{NFSU2_TR(0x498126);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498127:{NFSU2_TR(0x498127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49812cull));
TAIL_STATIC(0x50d2a0u,50d);
}
B49812c:L49812c:{c.instructions+=5;NFSU2_TR(0x49812c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B498133:{NFSU2_TR(0x498133);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498136:{NFSU2_TR(0x498136);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498137:{NFSU2_TR(0x498137);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49813b:{NFSU2_TR(0x49813b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498140ull));
TAIL_STATIC(0x5379a0u,537);
}
B498140:L498140:{c.instructions+=5;NFSU2_TR(0x498140);
__builtin_memmove((R+0),gp(0x85ad28),4);
}
B498145:{NFSU2_TR(0x498145);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B498148:{NFSU2_TR(0x498148);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49814a:{NFSU2_TR(0x49814a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f4454ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B498151:{NFSU2_TR(0x498151);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49817a;}}
}
B498153:L498153:{c.instructions+=5;NFSU2_TR(0x498153);
u8 U[4];
w4(U+0,u32(0xd87133bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498158:{NFSU2_TR(0x498158);
u8 U[4];
w4(U+0,u32(0x78f844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49815d:{NFSU2_TR(0x49815d);
u8 U[4];
w4(U+0,u32(0x78f354ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498162:{NFSU2_TR(0x498162);
s4(0x7f4458,u32(0xffffffffull));
}
B49816c:{NFSU2_TR(0x49816c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498171ull));
TAIL_STATIC(0x495490u,495);
}
B498171:L498171:{c.instructions+=5;NFSU2_TR(0x498171);
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
B498174:{NFSU2_TR(0x498174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498175:{NFSU2_TR(0x498175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498176:{NFSU2_TR(0x498176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B498177:{NFSU2_TR(0x498177);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49817a:L49817a:{c.instructions+=4;NFSU2_TR(0x49817a);
u8 U[4];
w4(U+0,u32(0xd87133bdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49817f:{NFSU2_TR(0x49817f);
u8 U[4];
w4(U+0,u32(0x78f844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498184:{NFSU2_TR(0x498184);
u8 U[4];
w4(U+0,u32(0x78f354ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498189:{NFSU2_TR(0x498189);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49818eull));
TAIL_STATIC(0x495490u,495);
}
B49818e:L49818e:{c.instructions+=5;NFSU2_TR(0x49818e);
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
B498191:{NFSU2_TR(0x498191);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498192:{NFSU2_TR(0x498192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498193:{NFSU2_TR(0x498193);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B498194:{NFSU2_TR(0x498194);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498197:L498197:{c.instructions+=3;NFSU2_TR(0x498197);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49819a:{NFSU2_TR(0x49819a);
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
B49819c:{NFSU2_TR(0x49819c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49820c;}}
}
B49819e:L49819e:{c.instructions+=2;NFSU2_TR(0x49819e);
u8 U[4];
w4(U+0,u32(0x78f354ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4981a3:{NFSU2_TR(0x4981a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4981a8ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4981a8:L4981a8:{c.instructions+=3;NFSU2_TR(0x4981a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4981ab:{NFSU2_TR(0x4981ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4981ad:{NFSU2_TR(0x4981ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4981b6;}}
}
B4981af:L4981af:{c.instructions+=3;NFSU2_TR(0x4981af);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4981b2:{NFSU2_TR(0x4981b2);
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
B4981b4:{NFSU2_TR(0x4981b4);
if(r1(R+518)){{goto L49820c;}}
}
B4981b6:L4981b6:{c.instructions+=3;NFSU2_TR(0x4981b6);
u8 U[8];
__builtin_memmove((U+0),gp(0x85ad28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4981bd:{NFSU2_TR(0x4981bd);
u8 U[4];
w4(U+0,u32(0x78f354ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4981c2:{NFSU2_TR(0x4981c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4981f2;}}
}
B4981c4:L4981c4:{c.instructions+=1;NFSU2_TR(0x4981c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4981c9ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4981c9:L4981c9:{c.instructions+=5;NFSU2_TR(0x4981c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4981cd:{NFSU2_TR(0x4981cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4981d0:{NFSU2_TR(0x4981d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4981d1:{NFSU2_TR(0x4981d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4981d5:{NFSU2_TR(0x4981d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4981daull));
TAIL_STATIC(0x5379a0u,537);
}
B4981da:L4981da:{c.instructions+=3;NFSU2_TR(0x4981da);
u8 U[4];
w4(U+0,u32(0x78f354ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4981df:{NFSU2_TR(0x4981df);
u8 U[4];
w4(U+0,u32(0x93b596edull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4981e4:{NFSU2_TR(0x4981e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4981e9ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4981e9:L4981e9:{c.instructions+=5;NFSU2_TR(0x4981e9);
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
B4981ec:{NFSU2_TR(0x4981ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4981ed:{NFSU2_TR(0x4981ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4981ee:{NFSU2_TR(0x4981ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4981ef:{NFSU2_TR(0x4981ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4981f2:L4981f2:{c.instructions+=3;NFSU2_TR(0x4981f2);
u8 U[4];
w4(U+0,u32(0x93b596edull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4981f7:{NFSU2_TR(0x4981f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4981fb:{NFSU2_TR(0x4981fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498200ull));
TAIL_STATIC(0x55dda0u,55d);
}
B498200:L498200:{c.instructions+=3;NFSU2_TR(0x498200);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B498203:{NFSU2_TR(0x498203);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498204:{NFSU2_TR(0x498204);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498209ull));
TAIL_STATIC(0x5379a0u,537);
}
B498209:L498209:{c.instructions+=1;NFSU2_TR(0x498209);
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
B49820c:L49820c:{c.instructions+=4;NFSU2_TR(0x49820c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49820d:{NFSU2_TR(0x49820d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49820e:{NFSU2_TR(0x49820e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49820f:{NFSU2_TR(0x49820f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498220:L498220:{c.instructions+=3;NFSU2_TR(0x498220);
__builtin_memmove((R+0),gp(0x850078),4);
}
B498225:{NFSU2_TR(0x498225);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B498228:{NFSU2_TR(0x498228);
if(r1(R+518)){{goto L498236;}}
}
B49822a:L49822a:{c.instructions+=3;NFSU2_TR(0x49822a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x200ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49822f:{NFSU2_TR(0x49822f);
__builtin_memmove((R+0),gp(0x7f446c),4);
}
B498234:{NFSU2_TR(0x498234);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49823b;}}
}
B498236:L498236:{c.instructions+=1;NFSU2_TR(0x498236);
__builtin_memmove((R+0),gp(0x7f4470),4);
}
B49823b:L49823b:{c.instructions+=1;NFSU2_TR(0x49823b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498240:L498240:{c.instructions+=3;NFSU2_TR(0x498240);
__builtin_memmove((R+0),gp(0x850078),4);
}
B498245:{NFSU2_TR(0x498245);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B498248:{NFSU2_TR(0x498248);
if(r1(R+518)){{goto L498269;}}
}
B49824a:L49824a:{c.instructions+=2;NFSU2_TR(0x49824a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x200ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49824f:{NFSU2_TR(0x49824f);
if(r1(R+518)){{goto L498269;}}
}
B498251:L498251:{c.instructions+=3;NFSU2_TR(0x498251);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B498256:{NFSU2_TR(0x498256);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B498259:{NFSU2_TR(0x498259);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L498269;}}
}
B49825b:L49825b:{c.instructions+=2;NFSU2_TR(0x49825b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x498278ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B498262:{NFSU2_TR(0x498262);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x498270ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B498269:L498269:{c.instructions+=2;NFSU2_TR(0x498269);
__builtin_memmove((R+0),gp(0x7f4460),4);
}
B49826e:{NFSU2_TR(0x49826e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498290:L498290:{c.instructions+=3;NFSU2_TR(0x498290);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B498297:{NFSU2_TR(0x498297);
__builtin_memmove((R+0),gp(0x7f4478),4);
}
B49829c:{NFSU2_TR(0x49829c);
if(r1(R+518)){{goto L4982a1;}}
}
B49829e:L49829e:{c.instructions+=1;NFSU2_TR(0x49829e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4982a1:L4982a1:{c.instructions+=1;NFSU2_TR(0x4982a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4982b0:L4982b0:{c.instructions+=2;NFSU2_TR(0x4982b0);
__builtin_memmove((R+0),gp(0x7f445c),4);
}
B4982b5:{NFSU2_TR(0x4982b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4982c0:L4982c0:{c.instructions+=5;NFSU2_TR(0x4982c0);
u8 U[2];
__builtin_memmove((U+0),gp(0x85009b),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4982c7:{NFSU2_TR(0x4982c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4982c8:{NFSU2_TR(0x4982c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4982c9:{NFSU2_TR(0x4982c9);
__builtin_memmove((R+24),(R+4),4);
}
B4982cb:{NFSU2_TR(0x4982cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498351;}}
}
B4982d1:L4982d1:{c.instructions+=5;NFSU2_TR(0x4982d1);
__builtin_memmove((R+0),gp(0x85009c),1);
}
B4982d6:{NFSU2_TR(0x4982d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4982d8:{NFSU2_TR(0x4982d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4982de:{NFSU2_TR(0x4982de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4982df:{NFSU2_TR(0x4982df);
if(r1(R+518)){{goto L498304;}}
}
B4982e1:L4982e1:{c.instructions+=1;NFSU2_TR(0x4982e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4982e6ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4982e6:L4982e6:{c.instructions+=3;NFSU2_TR(0x4982e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4982e9:{NFSU2_TR(0x4982e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4982eb:{NFSU2_TR(0x4982eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498325;}}
}
B4982ed:L4982ed:{c.instructions+=4;NFSU2_TR(0x4982ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4982f3:{NFSU2_TR(0x4982f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4982f4:{NFSU2_TR(0x4982f4);
__builtin_memmove((R+4),(R+24),4);
}
B4982f6:{NFSU2_TR(0x4982f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4982fbull));
TAIL_STATIC(0x51fe70u,51f);
}
B4982fb:L4982fb:{c.instructions+=3;NFSU2_TR(0x4982fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4982fd:{NFSU2_TR(0x4982fd);
__builtin_memmove((R+4),(R+0),4);
}
B4982ff:{NFSU2_TR(0x4982ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498302ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B498302:L498302:{c.instructions+=1;NFSU2_TR(0x498302);
{goto L498325;}
}
B498304:L498304:{c.instructions+=1;NFSU2_TR(0x498304);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498309ull));
TAIL_STATIC(0x51fe70u,51f);
}
B498309:L498309:{c.instructions+=3;NFSU2_TR(0x498309);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49830c:{NFSU2_TR(0x49830c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49830e:{NFSU2_TR(0x49830e);
if(r1(R+518)){{goto L498325;}}
}
B498310:L498310:{c.instructions+=4;NFSU2_TR(0x498310);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B498316:{NFSU2_TR(0x498316);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498317:{NFSU2_TR(0x498317);
__builtin_memmove((R+4),(R+24),4);
}
B498319:{NFSU2_TR(0x498319);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49831eull));
TAIL_STATIC(0x51fe70u,51f);
}
B49831e:L49831e:{c.instructions+=3;NFSU2_TR(0x49831e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B498320:{NFSU2_TR(0x498320);
__builtin_memmove((R+4),(R+0),4);
}
B498322:{NFSU2_TR(0x498322);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498325ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B498325:L498325:{c.instructions+=4;NFSU2_TR(0x498325);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49832b:{NFSU2_TR(0x49832b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49832c:{NFSU2_TR(0x49832c);
__builtin_memmove((R+4),(R+24),4);
}
B49832e:{NFSU2_TR(0x49832e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498333ull));
TAIL_STATIC(0x51fe70u,51f);
}
B498333:L498333:{c.instructions+=3;NFSU2_TR(0x498333);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B498336:{NFSU2_TR(0x498336);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498338:{NFSU2_TR(0x498338);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4983a3;}}
}
B49833a:L49833a:{c.instructions+=4;NFSU2_TR(0x49833a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B498340:{NFSU2_TR(0x498340);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498341:{NFSU2_TR(0x498341);
__builtin_memmove((R+4),(R+24),4);
}
B498343:{NFSU2_TR(0x498343);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498348ull));
TAIL_STATIC(0x51fe70u,51f);
}
B498348:L498348:{c.instructions+=3;NFSU2_TR(0x498348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49834a:{NFSU2_TR(0x49834a);
__builtin_memmove((R+4),(R+0),4);
}
B49834c:{NFSU2_TR(0x49834c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49834full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49834f:L49834f:{c.instructions+=1;NFSU2_TR(0x49834f);
{goto L4983a3;}
}
B498351:L498351:{c.instructions+=3;NFSU2_TR(0x498351);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498357:{NFSU2_TR(0x498357);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498358:{NFSU2_TR(0x498358);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49835dull));
TAIL_STATIC(0x51fe70u,51f);
}
B49835d:L49835d:{c.instructions+=3;NFSU2_TR(0x49835d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B498360:{NFSU2_TR(0x498360);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498362:{NFSU2_TR(0x498362);
if(r1(R+518)){{goto L498379;}}
}
B498364:L498364:{c.instructions+=4;NFSU2_TR(0x498364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49836a:{NFSU2_TR(0x49836a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49836b:{NFSU2_TR(0x49836b);
__builtin_memmove((R+4),(R+24),4);
}
B49836d:{NFSU2_TR(0x49836d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498372ull));
TAIL_STATIC(0x51fe70u,51f);
}
B498372:L498372:{c.instructions+=3;NFSU2_TR(0x498372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B498374:{NFSU2_TR(0x498374);
__builtin_memmove((R+4),(R+0),4);
}
B498376:{NFSU2_TR(0x498376);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498379ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B498379:L498379:{c.instructions+=4;NFSU2_TR(0x498379);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49837f:{NFSU2_TR(0x49837f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498380:{NFSU2_TR(0x498380);
__builtin_memmove((R+4),(R+24),4);
}
B498382:{NFSU2_TR(0x498382);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498387ull));
TAIL_STATIC(0x51fe70u,51f);
}
B498387:L498387:{c.instructions+=3;NFSU2_TR(0x498387);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49838a:{NFSU2_TR(0x49838a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49838c:{NFSU2_TR(0x49838c);
if(r1(R+518)){{goto L4983a3;}}
}
B49838e:L49838e:{c.instructions+=4;NFSU2_TR(0x49838e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B498394:{NFSU2_TR(0x498394);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498395:{NFSU2_TR(0x498395);
__builtin_memmove((R+4),(R+24),4);
}
B498397:{NFSU2_TR(0x498397);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49839cull));
TAIL_STATIC(0x51fe70u,51f);
}
B49839c:L49839c:{c.instructions+=3;NFSU2_TR(0x49839c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49839e:{NFSU2_TR(0x49839e);
__builtin_memmove((R+4),(R+0),4);
}
B4983a0:{NFSU2_TR(0x4983a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4983a3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4983a3:L4983a3:{c.instructions+=5;NFSU2_TR(0x4983a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4983a9:{NFSU2_TR(0x4983a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4983ac:{NFSU2_TR(0x4983ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4983ad:{NFSU2_TR(0x4983ad);
__builtin_memmove((R+4),(R+24),4);
}
B4983af:{NFSU2_TR(0x4983af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4983b4ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4983b4:L4983b4:{c.instructions+=2;NFSU2_TR(0x4983b4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4983b6:{NFSU2_TR(0x4983b6);
if(r1(R+518)){{goto L4983d4;}}
}
B4983b8:L4983b8:{c.instructions+=5;NFSU2_TR(0x4983b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4983be:{NFSU2_TR(0x4983be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4983c1:{NFSU2_TR(0x4983c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4983c2:{NFSU2_TR(0x4983c2);
__builtin_memmove((R+4),(R+24),4);
}
B4983c4:{NFSU2_TR(0x4983c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4983c9ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4983c9:L4983c9:{c.instructions+=2;NFSU2_TR(0x4983c9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4983cb:{NFSU2_TR(0x4983cb);
if(r1(R+518)){{goto L4983d4;}}
}
B4983cd:L4983cd:{c.instructions+=2;NFSU2_TR(0x4983cd);
u8 U[4];
w4(U+0,u32(0xde02cf84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4983d2:{NFSU2_TR(0x4983d2);
{goto L4983d9;}
}
B4983d4:L4983d4:{c.instructions+=1;NFSU2_TR(0x4983d4);
u8 U[4];
w4(U+0,u32(0x8bc0b80cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4983d9:L4983d9:{c.instructions+=3;NFSU2_TR(0x4983d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4983dc:{NFSU2_TR(0x4983dc);
u8 U[4];
w4(U+0,u32(0x78f864ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4983e1:{NFSU2_TR(0x4983e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4983e6ull));
TAIL_STATIC(0x505450u,505);
}
B4983e6:L4983e6:{c.instructions+=3;NFSU2_TR(0x4983e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4983e7:{NFSU2_TR(0x4983e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4983e8:{NFSU2_TR(0x4983e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4983edull));
TAIL_STATIC(0x537a10u,537);
}
B4983ed:L4983ed:{c.instructions+=3;NFSU2_TR(0x4983ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4983f0:{NFSU2_TR(0x4983f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4983f1:{NFSU2_TR(0x4983f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4983f6ull));
TAIL_STATIC(0x50c900u,50c);
}
B4983f6:L4983f6:{c.instructions+=4;NFSU2_TR(0x4983f6);
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
B4983f9:{NFSU2_TR(0x4983f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4983fa:{NFSU2_TR(0x4983fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4983fb:{NFSU2_TR(0x4983fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498400:L498400:{c.instructions+=3;NFSU2_TR(0x498400);
__builtin_memmove((R+0),gp(0x850088),4);
}
B498405:{NFSU2_TR(0x498405);
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
B498407:{NFSU2_TR(0x498407);
if(r1(R+518)){{goto L498433;}}
}
B498409:L498409:{c.instructions+=2;NFSU2_TR(0x498409);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B49840c:{NFSU2_TR(0x49840c);
if(r1(R+518)){{goto L498433;}}
}
B49840e:L49840e:{c.instructions+=2;NFSU2_TR(0x49840e);
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
B498411:{NFSU2_TR(0x498411);
if(r1(R+518)){{goto L498428;}}
}
B498413:L498413:{c.instructions+=2;NFSU2_TR(0x498413);
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
B498416:{NFSU2_TR(0x498416);
if(r1(R+518)){{goto L498428;}}
}
B498418:L498418:{c.instructions+=2;NFSU2_TR(0x498418);
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
B49841b:{NFSU2_TR(0x49841b);
if(r1(R+518)){{goto L498428;}}
}
B49841d:L49841d:{c.instructions+=3;NFSU2_TR(0x49841d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B498423:{NFSU2_TR(0x498423);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B498427:{NFSU2_TR(0x498427);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498428:L498428:{c.instructions+=3;NFSU2_TR(0x498428);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
w2(U+4,u16(0x4ull));
s2(u32(r4(U+0)),r2(U+4));
}
B49842e:{NFSU2_TR(0x49842e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B498432:{NFSU2_TR(0x498432);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498433:L498433:{c.instructions+=3;NFSU2_TR(0x498433);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B498439:{NFSU2_TR(0x498439);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B49843d:{NFSU2_TR(0x49843d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498440:L498440:{c.instructions+=3;NFSU2_TR(0x498440);
u8 U[2];
__builtin_memmove((U+0),gp(0x850098),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B498447:{NFSU2_TR(0x498447);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498448:{NFSU2_TR(0x498448);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498451;}}
}
B49844a:L49844a:{c.instructions+=2;NFSU2_TR(0x49844a);
u8 U[4];
w4(U+0,u32(0xa53035ddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49844f:{NFSU2_TR(0x49844f);
{goto L498475;}
}
B498451:L498451:{c.instructions+=2;NFSU2_TR(0x498451);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49845b:{NFSU2_TR(0x49845b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498470;}}
}
B49845d:L49845d:{c.instructions+=4;NFSU2_TR(0x49845d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498460:{NFSU2_TR(0x498460);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498461:{NFSU2_TR(0x498461);
u8 U[4];
w4(U+0,u32(0x59337816ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498466:{NFSU2_TR(0x498466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49846bull));
TAIL_STATIC(0x55dda0u,55d);
}
B49846b:L49846b:{c.instructions+=3;NFSU2_TR(0x49846b);
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
B49846e:{NFSU2_TR(0x49846e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49846f:{NFSU2_TR(0x49846f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498470:L498470:{c.instructions+=1;NFSU2_TR(0x498470);
u8 U[4];
w4(U+0,u32(0xd157c200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498475:L498475:{c.instructions+=2;NFSU2_TR(0x498475);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B498478:{NFSU2_TR(0x498478);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49847dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49847d:L49847d:{c.instructions+=10;NFSU2_TR(0x49847d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49847e:{NFSU2_TR(0x49847e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498480:{NFSU2_TR(0x498480);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498482:{NFSU2_TR(0x498482);
u8 U[4];
w4(U+0,u32(0x59337816ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498487:{NFSU2_TR(0x498487);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498489:{NFSU2_TR(0x498489);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49848e:{NFSU2_TR(0x49848e);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498493:{NFSU2_TR(0x498493);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498498:{NFSU2_TR(0x498498);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498499:{NFSU2_TR(0x498499);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49849eull));
TAIL_STATIC(0x558750u,558);
}
B49849e:L49849e:{c.instructions+=3;NFSU2_TR(0x49849e);
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
B4984a1:{NFSU2_TR(0x4984a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4984a2:{NFSU2_TR(0x4984a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4984b0:L4984b0:{c.instructions+=3;NFSU2_TR(0x4984b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4984b3:{NFSU2_TR(0x4984b3);
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
B4984b5:{NFSU2_TR(0x4984b5);
if(r1(R+518)){{goto L4984bd;}}
}
B4984b7:L4984b7:{c.instructions+=2;NFSU2_TR(0x4984b7);
w4(R+0,u32(0xf05704acull));
}
B4984bc:{NFSU2_TR(0x4984bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4984bd:L4984bd:{c.instructions+=4;NFSU2_TR(0x4984bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4984c0:{NFSU2_TR(0x4984c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4984c3:{NFSU2_TR(0x4984c3);
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
B4984c6:{NFSU2_TR(0x4984c6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L498553;}}
}
B4984cc:L4984cc:{c.instructions+=1;NFSU2_TR(0x4984cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x49855cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4984d3:L4984d3:{c.instructions+=2;NFSU2_TR(0x4984d3);
w4(R+0,u32(0xb5a633a0ull));
}
B4984d8:{NFSU2_TR(0x4984d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4984d9:L4984d9:{c.instructions+=2;NFSU2_TR(0x4984d9);
w4(R+0,u32(0x79cead40ull));
}
B4984de:{NFSU2_TR(0x4984de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4984df:L4984df:{c.instructions+=2;NFSU2_TR(0x4984df);
w4(R+0,u32(0x4b938e3cull));
}
B4984e4:{NFSU2_TR(0x4984e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4984e5:L4984e5:{c.instructions+=2;NFSU2_TR(0x4984e5);
w4(R+0,u32(0x4fde6febull));
}
B4984ea:{NFSU2_TR(0x4984ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4984eb:L4984eb:{c.instructions+=2;NFSU2_TR(0x4984eb);
w4(R+0,u32(0x6ba31820ull));
}
B4984f0:{NFSU2_TR(0x4984f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4984f1:L4984f1:{c.instructions+=3;NFSU2_TR(0x4984f1);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4984f6:{NFSU2_TR(0x4984f6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4984f9:{NFSU2_TR(0x4984f9);
if(r1(R+518)){{goto L498507;}}
}
B4984fb:L4984fb:{c.instructions+=3;NFSU2_TR(0x4984fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B498500:{NFSU2_TR(0x498500);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B498505:{NFSU2_TR(0x498505);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49850c;}}
}
B498507:L498507:{c.instructions+=1;NFSU2_TR(0x498507);
__builtin_memmove((R+0),gp(0x850088),4);
}
B49850c:L49850c:{c.instructions+=3;NFSU2_TR(0x49850c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B49850f:{NFSU2_TR(0x49850f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B498512:{NFSU2_TR(0x498512);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L498553;}}
}
B498514:L498514:{c.instructions+=1;NFSU2_TR(0x498514);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x498574ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49851b:L49851b:{c.instructions+=2;NFSU2_TR(0x49851b);
u8 U[4];
w4(U+0,u32(0x78f8b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498520:{NFSU2_TR(0x498520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498525ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B498525:L498525:{c.instructions+=2;NFSU2_TR(0x498525);
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
B498528:{NFSU2_TR(0x498528);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498529:L498529:{c.instructions+=2;NFSU2_TR(0x498529);
u8 U[4];
w4(U+0,u32(0x78f8a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49852e:{NFSU2_TR(0x49852e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498533ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B498533:L498533:{c.instructions+=2;NFSU2_TR(0x498533);
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
B498536:{NFSU2_TR(0x498536);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498537:L498537:{c.instructions+=2;NFSU2_TR(0x498537);
u8 U[4];
w4(U+0,u32(0x78f88cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49853c:{NFSU2_TR(0x49853c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498541ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B498541:L498541:{c.instructions+=2;NFSU2_TR(0x498541);
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
B498544:{NFSU2_TR(0x498544);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498545:L498545:{c.instructions+=2;NFSU2_TR(0x498545);
u8 U[4];
w4(U+0,u32(0x78f870ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49854a:{NFSU2_TR(0x49854a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49854full));
TAIL_STATIC(0x50b9c0u,50b);
}
B49854f:L49854f:{c.instructions+=2;NFSU2_TR(0x49854f);
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
B498552:{NFSU2_TR(0x498552);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498553:L498553:{c.instructions+=2;NFSU2_TR(0x498553);
w4(R+0,u32(0x74ce8c0bull));
}
B498558:{NFSU2_TR(0x498558);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4985a0:L4985a0:{c.instructions+=7;NFSU2_TR(0x4985a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4985a1:{NFSU2_TR(0x4985a1);
__builtin_memmove((R+24),(R+4),4);
}
B4985a3:{NFSU2_TR(0x4985a3);
u8 U[4];
w4(U+0,u32(0x78f8c8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4985a9:{NFSU2_TR(0x4985a9);
s4(0x836344,u32(0x0ull));
}
B4985b3:{NFSU2_TR(0x4985b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4985b6:{NFSU2_TR(0x4985b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4985b8:{NFSU2_TR(0x4985b8);
if(r1(R+518)){{goto L4985cd;}}
}
B4985ba:L4985ba:{c.instructions+=3;NFSU2_TR(0x4985ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4985bd:{NFSU2_TR(0x4985bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4985bf:{NFSU2_TR(0x4985bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4985cd;}}
}
B4985c1:L4985c1:{c.instructions+=1;NFSU2_TR(0x4985c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4985c6ull));
TAIL_STATIC(0x57ef60u,57e);
}
B4985c6:L4985c6:{c.instructions+=3;NFSU2_TR(0x4985c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4985c9:{NFSU2_TR(0x4985c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4985cb:{NFSU2_TR(0x4985cb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4985c1u);}goto L4985c1;}}
}
B4985cd:L4985cd:{c.instructions+=3;NFSU2_TR(0x4985cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4985d0:{NFSU2_TR(0x4985d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4985d2:{NFSU2_TR(0x4985d2);
if(r1(R+518)){{goto L4985dd;}}
}
B4985d4:L4985d4:{c.instructions+=2;NFSU2_TR(0x4985d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4985d5:{NFSU2_TR(0x4985d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4985daull));
TAIL_STATIC(0x580e90u,580);
}
B4985da:L4985da:{c.instructions+=1;NFSU2_TR(0x4985da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4985dd:L4985dd:{c.instructions+=3;NFSU2_TR(0x4985dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4985e0:{NFSU2_TR(0x4985e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4985e2:{NFSU2_TR(0x4985e2);
if(r1(R+518)){{goto L4985ed;}}
}
B4985e4:L4985e4:{c.instructions+=2;NFSU2_TR(0x4985e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4985e5:{NFSU2_TR(0x4985e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4985eaull));
TAIL_STATIC(0x580e90u,580);
}
B4985ea:L4985ea:{c.instructions+=1;NFSU2_TR(0x4985ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4985ed:L4985ed:{c.instructions+=3;NFSU2_TR(0x4985ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4985f0:{NFSU2_TR(0x4985f0);
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
B4985f2:{NFSU2_TR(0x4985f2);
if(r1(R+518)){{goto L4985fd;}}
}
B4985f4:L4985f4:{c.instructions+=2;NFSU2_TR(0x4985f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4985f5:{NFSU2_TR(0x4985f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4985faull));
TAIL_STATIC(0x580e90u,580);
}
B4985fa:L4985fa:{c.instructions+=1;NFSU2_TR(0x4985fa);
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
B4985fd:L4985fd:{c.instructions+=2;NFSU2_TR(0x4985fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4985fe:{NFSU2_TR(0x4985fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498600:L498600:{c.instructions+=3;NFSU2_TR(0x498600);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498604:{NFSU2_TR(0x498604);
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
B498606:{NFSU2_TR(0x498606);
if(r1(R+518)){{goto L498625;}}
}
B498608:L498608:{c.instructions+=4;NFSU2_TR(0x498608);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49860b:{NFSU2_TR(0x49860b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49860e:{NFSU2_TR(0x49860e);
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
B498610:{NFSU2_TR(0x498610);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49861b;}}
}
B498612:L498612:{c.instructions+=3;NFSU2_TR(0x498612);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498615:{NFSU2_TR(0x498615);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B498618:{NFSU2_TR(0x498618);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49861b:L49861b:{c.instructions+=2;NFSU2_TR(0x49861b);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B498622:{NFSU2_TR(0x498622);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B498625:L498625:{c.instructions+=1;NFSU2_TR(0x498625);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498630:L498630:{c.instructions+=8;NFSU2_TR(0x498630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B498633:{NFSU2_TR(0x498633);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498634:{NFSU2_TR(0x498634);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498635:{NFSU2_TR(0x498635);
__builtin_memmove((R+28),(R+4),4);
}
B498637:{NFSU2_TR(0x498637);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49863a:{NFSU2_TR(0x49863a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49863d:{NFSU2_TR(0x49863d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49863f:{NFSU2_TR(0x49863f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498646;}}
}
B498641:L498641:{c.instructions+=2;NFSU2_TR(0x498641);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B498644:{NFSU2_TR(0x498644);
{goto L49864c;}
}
B498646:L498646:{c.instructions+=1;NFSU2_TR(0x498646);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x118ull))));
}
B49864c:L49864c:{c.instructions+=7;NFSU2_TR(0x49864c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49864e:{NFSU2_TR(0x49864e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B498651:{NFSU2_TR(0x498651);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B498655:{NFSU2_TR(0x498655);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B498658:{NFSU2_TR(0x498658);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49865a:{NFSU2_TR(0x49865a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49865e:{NFSU2_TR(0x49865e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498669;}}
}
B498660:L498660:{c.instructions+=3;NFSU2_TR(0x498660);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B498663:{NFSU2_TR(0x498663);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B498667:{NFSU2_TR(0x498667);
{goto L498673;}
}
B498669:L498669:{c.instructions+=2;NFSU2_TR(0x498669);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49866f:{NFSU2_TR(0x49866f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B498673:L498673:{c.instructions+=5;NFSU2_TR(0x498673);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B498677:{NFSU2_TR(0x498677);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498678:{NFSU2_TR(0x498678);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49867e:{NFSU2_TR(0x49867e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B498681:{NFSU2_TR(0x498681);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498686ull));
TAIL_STATIC(0x43c350u,43c);
}
B498686:L498686:{c.instructions+=27;NFSU2_TR(0x498686);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49868a:{NFSU2_TR(0x49868a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49868d:{NFSU2_TR(0x49868d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B49868f:{NFSU2_TR(0x49868f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B498692:{NFSU2_TR(0x498692);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B498696:{NFSU2_TR(0x498696);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498698:{NFSU2_TR(0x498698);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B49869a:{NFSU2_TR(0x49869a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49869e:{NFSU2_TR(0x49869e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4986a0:{NFSU2_TR(0x4986a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4986a1:{NFSU2_TR(0x4986a1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4986a5:{NFSU2_TR(0x4986a5);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4986a7:{NFSU2_TR(0x4986a7);
__builtin_memmove((R+4),(R+24),4);
}
B4986a9:{NFSU2_TR(0x4986a9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4986ad:{NFSU2_TR(0x4986ad);
{u32 ea_=u32(u32(7905676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4986b3:{NFSU2_TR(0x4986b3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4986b7:{NFSU2_TR(0x4986b7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4986b9:{NFSU2_TR(0x4986b9);
{u32 ea_=u32(u32(7905676u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4986bf:{NFSU2_TR(0x4986bf);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4986c3:{NFSU2_TR(0x4986c3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4986c5:{NFSU2_TR(0x4986c5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4986c9:{NFSU2_TR(0x4986c9);
{u32 ea_=u32(u32(7928012u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4986cf:{NFSU2_TR(0x4986cf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4986d3:{NFSU2_TR(0x4986d3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4986d7:{NFSU2_TR(0x4986d7);
{u32 ea_=u32(u32(7928012u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4986dd:{NFSU2_TR(0x4986dd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4986e1:{NFSU2_TR(0x4986e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4986e6ull));
TAIL_STATIC(0x5179d0u,517);
}
B4986e6:L4986e6:{c.instructions+=18;NFSU2_TR(0x4986e6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4986ea:{NFSU2_TR(0x4986ea);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4986ee:{NFSU2_TR(0x4986ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4986f1:{NFSU2_TR(0x4986f1);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B4986f7:{NFSU2_TR(0x4986f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4986fa:{NFSU2_TR(0x4986fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4986fd:{NFSU2_TR(0x4986fd);
{u32 ea_=u32(u32(7928012u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B498703:{NFSU2_TR(0x498703);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498705:{NFSU2_TR(0x498705);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B498709:{NFSU2_TR(0x498709);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49870d:{NFSU2_TR(0x49870d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B498711:{NFSU2_TR(0x498711);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498712:{NFSU2_TR(0x498712);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B498716:{NFSU2_TR(0x498716);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498718:{NFSU2_TR(0x498718);
__builtin_memmove((R+4),(R+24),4);
}
B49871a:{NFSU2_TR(0x49871a);
{u32 ea_=u32(u32(7928012u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B498720:{NFSU2_TR(0x498720);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B498724:{NFSU2_TR(0x498724);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498729ull));
TAIL_STATIC(0x5179d0u,517);
}
B498729:L498729:{c.instructions+=7;NFSU2_TR(0x498729);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49872c:{NFSU2_TR(0x49872c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B498731:{NFSU2_TR(0x498731);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498732:{NFSU2_TR(0x498732);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B498735:{NFSU2_TR(0x498735);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498736:{NFSU2_TR(0x498736);
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
B498739:{NFSU2_TR(0x498739);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498740:L498740:{c.instructions+=2;NFSU2_TR(0x498740);
u8 U[4];
w4(U+0,u32(0x78f8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498745:{NFSU2_TR(0x498745);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49874aull));
TAIL_STATIC(0x52cef0u,52c);
}
B49874a:L49874a:{c.instructions+=3;NFSU2_TR(0x49874a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49874d:{NFSU2_TR(0x49874d);
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
B49874f:{NFSU2_TR(0x49874f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498793;}}
}
B498751:L498751:{c.instructions+=3;NFSU2_TR(0x498751);
__builtin_memmove((R+0),gp(0x850078),4);
}
B498756:{NFSU2_TR(0x498756);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B498759:{NFSU2_TR(0x498759);
if(r1(R+518)){{goto L49877e;}}
}
B49875b:L49875b:{c.instructions+=2;NFSU2_TR(0x49875b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x200ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B498760:{NFSU2_TR(0x498760);
if(r1(R+518)){{goto L49877e;}}
}
B498762:L498762:{c.instructions+=2;NFSU2_TR(0x498762);
w4(R+4,u32(0x83aab4ull));
}
B498767:{NFSU2_TR(0x498767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49876cull));
TAIL_STATIC(0x502910u,502);
}
B49876c:L49876c:{c.instructions+=5;NFSU2_TR(0x49876c);
u8 U[6];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B498771:{NFSU2_TR(0x498771);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B498775:{NFSU2_TR(0x498775);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B498778:{NFSU2_TR(0x498778);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49877b:{NFSU2_TR(0x49877b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49877e:L49877e:{c.instructions+=4;NFSU2_TR(0x49877e);
u8 U[6];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B498783:{NFSU2_TR(0x498783);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B498787:{NFSU2_TR(0x498787);
__builtin_memmove(gp(0x8500b8),(R+0),2);
}
B49878d:{NFSU2_TR(0x49878d);
__builtin_memmove(gp(0x8500bc),(R+4),4);
}
B498793:L498793:{c.instructions+=1;NFSU2_TR(0x498793);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4987a0:L4987a0:{c.instructions+=4;NFSU2_TR(0x4987a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4987a4:{NFSU2_TR(0x4987a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4987a7:{NFSU2_TR(0x4987a7);
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
B4987a9:{NFSU2_TR(0x4987a9);
if(r1(R+518)){{goto L4987b9;}}
}
B4987ab:L4987ab:{c.instructions+=4;NFSU2_TR(0x4987ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4987af:{NFSU2_TR(0x4987af);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4987b2:{NFSU2_TR(0x4987b2);
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
B4987b4:{NFSU2_TR(0x4987b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4987b9;}}
}
B4987b6:L4987b6:{c.instructions+=2;NFSU2_TR(0x4987b6);
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
B4987b8:{NFSU2_TR(0x4987b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4987b9:L4987b9:{c.instructions+=2;NFSU2_TR(0x4987b9);
w4(R+0,u32(0x1ull));
}
B4987be:{NFSU2_TR(0x4987be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4987c0:L4987c0:{c.instructions+=3;NFSU2_TR(0x4987c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4987c4:{NFSU2_TR(0x4987c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4987c6:{NFSU2_TR(0x4987c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4987cd;}}
}
B4987c8:L4987c8:{c.instructions+=2;NFSU2_TR(0x4987c8);
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
B4987ca:{NFSU2_TR(0x4987ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4987cd:L4987cd:{c.instructions+=6;NFSU2_TR(0x4987cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4987d3:{NFSU2_TR(0x4987d3);
__builtin_memmove((R+8),gp(0x83aab4),4);
}
B4987d9:{NFSU2_TR(0x4987d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4987da:{NFSU2_TR(0x4987da);
__builtin_memmove((R+24),gp(0x850078),4);
}
B4987e0:{NFSU2_TR(0x4987e0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4987e3:{NFSU2_TR(0x4987e3);
if(r1(R+518)){{goto L4987ed;}}
}
B4987e5:L4987e5:{c.instructions+=2;NFSU2_TR(0x4987e5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4987eb:{NFSU2_TR(0x4987eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498808;}}
}
B4987ed:L4987ed:{c.instructions+=3;NFSU2_TR(0x4987ed);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B4987f4:{NFSU2_TR(0x4987f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xfa0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B4987f9:{NFSU2_TR(0x4987f9);
if(r1(R+518)){{goto L498877;}}
}
B4987fb:L4987fb:{c.instructions+=2;NFSU2_TR(0x4987fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x12c1ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B498800:{NFSU2_TR(0x498800);
if(r1(R+518)){{goto L498877;}}
}
B498802:L498802:{c.instructions+=1;NFSU2_TR(0x498802);
__builtin_memmove((R+8),gp(0x850088),4);
}
B498808:L498808:{c.instructions+=5;NFSU2_TR(0x498808);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498809:{NFSU2_TR(0x498809);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B49880f:{NFSU2_TR(0x49880f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498811:{NFSU2_TR(0x498811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B498812:{NFSU2_TR(0x498812);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498877;}}
}
B498814:L498814:{c.instructions+=2;NFSU2_TR(0x498814);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B498817:{NFSU2_TR(0x498817);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L498877;}}
}
B498819:L498819:{c.instructions+=1;NFSU2_TR(0x498819);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x498880ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B498820:L498820:{c.instructions+=3;NFSU2_TR(0x498820);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B498823:{NFSU2_TR(0x498823);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498824:{NFSU2_TR(0x498824);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498827:L498827:{c.instructions+=4;NFSU2_TR(0x498827);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B49882a:{NFSU2_TR(0x49882a);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49882c:{NFSU2_TR(0x49882c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49882d:{NFSU2_TR(0x49882d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498830:L498830:{c.instructions+=2;NFSU2_TR(0x498830);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498832:{NFSU2_TR(0x498832);
{goto L498836;}
}
B498834:L498834:{c.instructions+=1;NFSU2_TR(0x498834);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498836:L498836:{c.instructions+=1;NFSU2_TR(0x498836);
if(r1(R+518)){{goto L498868;}}
}
B498838:L498838:{c.instructions+=3;NFSU2_TR(0x498838);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49883c:{NFSU2_TR(0x49883c);
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
B49883e:{NFSU2_TR(0x49883e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498868;}}
}
B498840:L498840:{c.instructions+=3;NFSU2_TR(0x498840);
w4(R+0,u32(0x1ull));
}
B498845:{NFSU2_TR(0x498845);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498846:{NFSU2_TR(0x498846);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498849:L498849:{c.instructions+=4;NFSU2_TR(0x498849);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B49884c:{NFSU2_TR(0x49884c);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49884e:{NFSU2_TR(0x49884e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49884f:{NFSU2_TR(0x49884f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498852:L498852:{c.instructions+=4;NFSU2_TR(0x498852);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B498855:{NFSU2_TR(0x498855);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B498857:{NFSU2_TR(0x498857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498858:{NFSU2_TR(0x498858);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49885b:L49885b:{c.instructions+=4;NFSU2_TR(0x49885b);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B49885e:{NFSU2_TR(0x49885e);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B498860:{NFSU2_TR(0x498860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498861:{NFSU2_TR(0x498861);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498864:L498864:{c.instructions+=2;NFSU2_TR(0x498864);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B498866:{NFSU2_TR(0x498866);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x498840u);}goto L498840;}}
}
B498868:L498868:{c.instructions+=3;NFSU2_TR(0x498868);
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
B49886a:{NFSU2_TR(0x49886a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49886b:{NFSU2_TR(0x49886b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49886e:L49886e:{c.instructions+=4;NFSU2_TR(0x49886e);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B498871:{NFSU2_TR(0x498871);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B498873:{NFSU2_TR(0x498873);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498874:{NFSU2_TR(0x498874);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498877:L498877:{c.instructions+=3;NFSU2_TR(0x498877);
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
B498879:{NFSU2_TR(0x498879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49887a:{NFSU2_TR(0x49887a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4988c0:L4988c0:{c.instructions+=6;NFSU2_TR(0x4988c0);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4988c5:{NFSU2_TR(0x4988c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4988c8:{NFSU2_TR(0x4988c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4988cb:{NFSU2_TR(0x4988cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4988cc:{NFSU2_TR(0x4988cc);
__builtin_memmove((R+24),(R+4),4);
}
B4988ce:{NFSU2_TR(0x4988ce);
if(r1(R+518)){{goto L4988dc;}}
}
B4988d0:L4988d0:{c.instructions+=3;NFSU2_TR(0x4988d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4988d5:{NFSU2_TR(0x4988d5);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B4988da:{NFSU2_TR(0x4988da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4988e1;}}
}
B4988dc:L4988dc:{c.instructions+=1;NFSU2_TR(0x4988dc);
__builtin_memmove((R+0),gp(0x850088),4);
}
B4988e1:L4988e1:{c.instructions+=2;NFSU2_TR(0x4988e1);
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
B4988e4:{NFSU2_TR(0x4988e4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L498941;}}
}
B4988e6:L4988e6:{c.instructions+=1;NFSU2_TR(0x4988e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x498970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4988ed:L4988ed:{c.instructions+=5;NFSU2_TR(0x4988ed);
u8 U[4];
w4(U+0,u32(0x93fdee74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4988f2:{NFSU2_TR(0x4988f2);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4988f4:{NFSU2_TR(0x4988f4);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4988f8:{NFSU2_TR(0x4988f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4988f9:{NFSU2_TR(0x4988f9);
{goto L49894d;}
}
B4988fb:L4988fb:{c.instructions+=2;NFSU2_TR(0x4988fb);
u8 U[4];
w4(U+0,u32(0xdcb9f861ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498900:{NFSU2_TR(0x498900);
{goto L498946;}
}
B498902:L498902:{c.instructions+=5;NFSU2_TR(0x498902);
u8 U[4];
w4(U+0,u32(0x35102edfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498907:{NFSU2_TR(0x498907);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498909:{NFSU2_TR(0x498909);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B49890d:{NFSU2_TR(0x49890d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49890e:{NFSU2_TR(0x49890e);
{goto L49894d;}
}
B498910:L498910:{c.instructions+=5;NFSU2_TR(0x498910);
u8 U[4];
w4(U+0,u32(0xd7162cfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498915:{NFSU2_TR(0x498915);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498917:{NFSU2_TR(0x498917);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49891b:{NFSU2_TR(0x49891b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49891c:{NFSU2_TR(0x49891c);
{goto L49894d;}
}
B49891e:L49891e:{c.instructions+=2;NFSU2_TR(0x49891e);
u8 U[4];
w4(U+0,u32(0x30da61e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498923:{NFSU2_TR(0x498923);
{goto L498946;}
}
B498925:L498925:{c.instructions+=5;NFSU2_TR(0x498925);
u8 U[4];
w4(U+0,u32(0x75f903f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49892a:{NFSU2_TR(0x49892a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49892c:{NFSU2_TR(0x49892c);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B498930:{NFSU2_TR(0x498930);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498931:{NFSU2_TR(0x498931);
{goto L49894d;}
}
B498933:L498933:{c.instructions+=5;NFSU2_TR(0x498933);
u8 U[4];
w4(U+0,u32(0x6f2421b7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498938:{NFSU2_TR(0x498938);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49893a:{NFSU2_TR(0x49893a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49893e:{NFSU2_TR(0x49893e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49893f:{NFSU2_TR(0x49893f);
{goto L49894d;}
}
B498941:L498941:{c.instructions+=1;NFSU2_TR(0x498941);
u8 U[4];
w4(U+0,u32(0x93fdee74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498946:L498946:{c.instructions+=3;NFSU2_TR(0x498946);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49894a:{NFSU2_TR(0x49894a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49894c:{NFSU2_TR(0x49894c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49894d:L49894d:{c.instructions+=1;NFSU2_TR(0x49894d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498952ull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B498952:L498952:{c.instructions+=7;NFSU2_TR(0x498952);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498955:{NFSU2_TR(0x498955);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B498958:{NFSU2_TR(0x498958);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B49895c:{NFSU2_TR(0x49895c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49895d:{NFSU2_TR(0x49895d);
u8 U[4];
w4(U+0,u32(0x15e1351bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498962:{NFSU2_TR(0x498962);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498963:{NFSU2_TR(0x498963);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498968ull));
TAIL_STATIC(0x537b80u,537);
}
B498968:L498968:{c.instructions+=4;NFSU2_TR(0x498968);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49896b:{NFSU2_TR(0x49896b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49896c:{NFSU2_TR(0x49896c);
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
B49896f:{NFSU2_TR(0x49896f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4989a0:L4989a0:{c.instructions+=15;NFSU2_TR(0x4989a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4989a2:{NFSU2_TR(0x4989a2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4989a7:{NFSU2_TR(0x4989a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4989ad:{NFSU2_TR(0x4989ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4989ae:{NFSU2_TR(0x4989ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4989b5:{NFSU2_TR(0x4989b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4989b6:{NFSU2_TR(0x4989b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4989b7:{NFSU2_TR(0x4989b7);
__builtin_memmove((R+24),(R+4),4);
}
B4989b9:{NFSU2_TR(0x4989b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4989bd:{NFSU2_TR(0x4989bd);
u8 U[4];
w4(U+0,u32(0x78f8e4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4989c3:{NFSU2_TR(0x4989c3);
__builtin_memmove((R+0),gp(0x7f44fc),4);
}
B4989c8:{NFSU2_TR(0x4989c8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4989ca:{NFSU2_TR(0x4989ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4989cb:{NFSU2_TR(0x4989cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4989d3:{NFSU2_TR(0x4989d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4989d8ull));
TAIL_STATIC(0x51ce80u,51c);
}
B4989d8:L4989d8:{c.instructions+=4;NFSU2_TR(0x4989d8);
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
B4989db:{NFSU2_TR(0x4989db);
__builtin_memmove((R+4),(R+24),4);
}
B4989dd:{NFSU2_TR(0x4989dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4989e5:{NFSU2_TR(0x4989e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4989eaull));
TAIL_STATIC(0x510d40u,510);
}
B4989ea:L4989ea:{c.instructions+=5;NFSU2_TR(0x4989ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4989ee:{NFSU2_TR(0x4989ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4989ef:{NFSU2_TR(0x4989ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4989f6:{NFSU2_TR(0x4989f6);
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
B4989f9:{NFSU2_TR(0x4989f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498a00:L498a00:{c.instructions+=6;NFSU2_TR(0x498a00);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B498a04:{NFSU2_TR(0x498a04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498a05:{NFSU2_TR(0x498a05);
__builtin_memmove((R+24),(R+4),4);
}
B498a07:{NFSU2_TR(0x498a07);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B498a0a:{NFSU2_TR(0x498a0a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498a0c:{NFSU2_TR(0x498a0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498a12;}}
}
B498a0e:L498a0e:{c.instructions+=2;NFSU2_TR(0x498a0e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498a10:{NFSU2_TR(0x498a10);
if(r1(R+518)){{goto L498a23;}}
}
B498a12:L498a12:{c.instructions+=4;NFSU2_TR(0x498a12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498a13:{NFSU2_TR(0x498a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B498a19:{NFSU2_TR(0x498a19);
w4(R+4,u32(0x40ull));
}
B498a1e:{NFSU2_TR(0x498a1e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B498a20:L498a20:{c.instructions+=1;NFSU2_TR(0x498a20);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L498a22;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x498a20u);}goto L498a20;}
}
B498a22:L498a22:{c.instructions+=1;NFSU2_TR(0x498a22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498a23:L498a23:{c.instructions+=2;NFSU2_TR(0x498a23);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B498a26:{NFSU2_TR(0x498a26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498a3e;}}
}
B498a28:L498a28:{c.instructions+=7;NFSU2_TR(0x498a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498a2e:{NFSU2_TR(0x498a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B498a31:{NFSU2_TR(0x498a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B498a34:{NFSU2_TR(0x498a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498a3a:{NFSU2_TR(0x498a3a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498a3b:{NFSU2_TR(0x498a3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498a3c:{NFSU2_TR(0x498a3c);
{goto L498a52;}
}
B498a3e:L498a3e:{c.instructions+=6;NFSU2_TR(0x498a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B498a44:{NFSU2_TR(0x498a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B498a47:{NFSU2_TR(0x498a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498a4a:{NFSU2_TR(0x498a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B498a50:{NFSU2_TR(0x498a50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498a51:{NFSU2_TR(0x498a51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498a52:L498a52:{c.instructions+=1;NFSU2_TR(0x498a52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498a57ull));
TAIL_STATIC(0x51ce60u,51c);
}
B498a57:L498a57:{c.instructions+=4;NFSU2_TR(0x498a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B498a5a:{NFSU2_TR(0x498a5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B498a5d:{NFSU2_TR(0x498a5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498a5e:{NFSU2_TR(0x498a5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498a63ull));
TAIL_STATIC(0x5379a0u,537);
}
B498a63:L498a63:{c.instructions+=4;NFSU2_TR(0x498a63);
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
B498a66:{NFSU2_TR(0x498a66);
s4(0x836348,u32(0x0ull));
}
B498a70:{NFSU2_TR(0x498a70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498a71:{NFSU2_TR(0x498a71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498a80:L498a80:{c.instructions+=9;NFSU2_TR(0x498a80);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B498a84:{NFSU2_TR(0x498a84);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498a86:{NFSU2_TR(0x498a86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498a87:{NFSU2_TR(0x498a87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498a88:{NFSU2_TR(0x498a88);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B498a8c:{NFSU2_TR(0x498a8c);
__builtin_memmove((R+24),(R+4),4);
}
B498a8e:{NFSU2_TR(0x498a8e);
u8 U[16];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B498a92:{NFSU2_TR(0x498a92);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498a94:{NFSU2_TR(0x498a94);
if(r1(R+518)){{goto L498ab8;}}
}
B498a96:L498a96:{c.instructions+=2;NFSU2_TR(0x498a96);
u8 U[4];
w4(U+0,u32(0x837198ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498a9b:{NFSU2_TR(0x498a9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498aa0ull));
TAIL_STATIC(0x517e20u,517);
}
B498aa0:L498aa0:{c.instructions+=4;NFSU2_TR(0x498aa0);
u8 U[16];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B498aa7:{NFSU2_TR(0x498aa7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498aa9:{NFSU2_TR(0x498aa9);
u8 U[4];
w4(U+0,u32(0x837188ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498aae:{NFSU2_TR(0x498aae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498ab3ull));
TAIL_STATIC(0x517e20u,517);
}
B498ab3:L498ab3:{c.instructions+=3;NFSU2_TR(0x498ab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498ab4:{NFSU2_TR(0x498ab4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498ab5:{NFSU2_TR(0x498ab5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498ab8:L498ab8:{c.instructions+=2;NFSU2_TR(0x498ab8);
u8 U[4];
w4(U+0,u32(0x837178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498abd:{NFSU2_TR(0x498abd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498ac2ull));
TAIL_STATIC(0x517e20u,517);
}
B498ac2:L498ac2:{c.instructions+=4;NFSU2_TR(0x498ac2);
u8 U[16];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B498ac9:{NFSU2_TR(0x498ac9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498acb:{NFSU2_TR(0x498acb);
u8 U[4];
w4(U+0,u32(0x836550ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498ad0:{NFSU2_TR(0x498ad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498ad5ull));
TAIL_STATIC(0x517e20u,517);
}
B498ad5:L498ad5:{c.instructions+=3;NFSU2_TR(0x498ad5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498ad6:{NFSU2_TR(0x498ad6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498ad7:{NFSU2_TR(0x498ad7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498ae0:L498ae0:{c.instructions+=9;NFSU2_TR(0x498ae0);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B498ae4:{NFSU2_TR(0x498ae4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498ae6:{NFSU2_TR(0x498ae6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498ae7:{NFSU2_TR(0x498ae7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498ae8:{NFSU2_TR(0x498ae8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B498aec:{NFSU2_TR(0x498aec);
__builtin_memmove((R+24),(R+4),4);
}
B498aee:{NFSU2_TR(0x498aee);
u8 U[16];
w4(U+0,u32(u32(u32(0x1e0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B498af5:{NFSU2_TR(0x498af5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498af7:{NFSU2_TR(0x498af7);
if(r1(R+518)){{goto L498b1b;}}
}
B498af9:L498af9:{c.instructions+=2;NFSU2_TR(0x498af9);
u8 U[4];
w4(U+0,u32(0x837198ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498afe:{NFSU2_TR(0x498afe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498b03ull));
TAIL_STATIC(0x517e20u,517);
}
B498b03:L498b03:{c.instructions+=4;NFSU2_TR(0x498b03);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B498b0a:{NFSU2_TR(0x498b0a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498b0c:{NFSU2_TR(0x498b0c);
u8 U[4];
w4(U+0,u32(0x837188ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498b11:{NFSU2_TR(0x498b11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498b16ull));
TAIL_STATIC(0x517e20u,517);
}
B498b16:L498b16:{c.instructions+=3;NFSU2_TR(0x498b16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498b17:{NFSU2_TR(0x498b17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498b18:{NFSU2_TR(0x498b18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498b1b:L498b1b:{c.instructions+=2;NFSU2_TR(0x498b1b);
u8 U[4];
w4(U+0,u32(0x837178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498b20:{NFSU2_TR(0x498b20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498b25ull));
TAIL_STATIC(0x517e20u,517);
}
B498b25:L498b25:{c.instructions+=4;NFSU2_TR(0x498b25);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B498b2c:{NFSU2_TR(0x498b2c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498b2e:{NFSU2_TR(0x498b2e);
u8 U[4];
w4(U+0,u32(0x836550ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498b33:{NFSU2_TR(0x498b33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498b38ull));
TAIL_STATIC(0x517e20u,517);
}
B498b38:L498b38:{c.instructions+=3;NFSU2_TR(0x498b38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498b39:{NFSU2_TR(0x498b39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498b3a:{NFSU2_TR(0x498b3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498b40:L498b40:{c.instructions+=8;NFSU2_TR(0x498b40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498b44:{NFSU2_TR(0x498b44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498b45:{NFSU2_TR(0x498b45);
__builtin_memmove((R+24),(R+4),4);
}
B498b47:{NFSU2_TR(0x498b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B498b4d:{NFSU2_TR(0x498b4d);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498b52:{NFSU2_TR(0x498b52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498b53:{NFSU2_TR(0x498b53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498b54:{NFSU2_TR(0x498b54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498b59ull));
TAIL_STATIC(0x43dc00u,43d);
}
B498b59:L498b59:{c.instructions+=6;NFSU2_TR(0x498b59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B498b5f:{NFSU2_TR(0x498b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B498b62:{NFSU2_TR(0x498b62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B498b65:{NFSU2_TR(0x498b65);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498b66:{NFSU2_TR(0x498b66);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B498b69:{NFSU2_TR(0x498b69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498b6eull));
TAIL_STATIC(0x532670u,532);
}
B498b6e:L498b6e:{c.instructions+=3;NFSU2_TR(0x498b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498b74:{NFSU2_TR(0x498b74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498b75:{NFSU2_TR(0x498b75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498b7aull));
TAIL_STATIC(0x43dbb0u,43d);
}
B498b7a:L498b7a:{c.instructions+=4;NFSU2_TR(0x498b7a);
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
B498b7d:{NFSU2_TR(0x498b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B498b80:{NFSU2_TR(0x498b80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498b81:{NFSU2_TR(0x498b81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498b90:L498b90:{c.instructions+=4;NFSU2_TR(0x498b90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B498b94:{NFSU2_TR(0x498b94);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B498b96:{NFSU2_TR(0x498b96);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x124ull))));
}
B498b9c:{NFSU2_TR(0x498b9c);
__builtin_memmove((R+16),(R+16),4);
}
B498ba0:L498ba0:{c.instructions+=2;NFSU2_TR(0x498ba0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+8)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B498ba2:{NFSU2_TR(0x498ba2);
if(r1(R+518)){{goto L498bb0;}}
}
B498ba4:L498ba4:{c.instructions+=4;NFSU2_TR(0x498ba4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B498ba5:{NFSU2_TR(0x498ba5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B498ba8:{NFSU2_TR(0x498ba8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B498bab:{NFSU2_TR(0x498bab);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x498ba0u);}goto L498ba0;}}
}
B498bad:L498bad:{c.instructions+=1;NFSU2_TR(0x498bad);
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
B498bb0:L498bb0:{c.instructions+=1;NFSU2_TR(0x498bb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498bc0:L498bc0:{c.instructions+=4;NFSU2_TR(0x498bc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B498bc4:{NFSU2_TR(0x498bc4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B498bc6:{NFSU2_TR(0x498bc6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1f4ull))));
}
B498bcc:{NFSU2_TR(0x498bcc);
__builtin_memmove((R+16),(R+16),4);
}
B498bd0:L498bd0:{c.instructions+=2;NFSU2_TR(0x498bd0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+8)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B498bd2:{NFSU2_TR(0x498bd2);
if(r1(R+518)){{goto L498be0;}}
}
B498bd4:L498bd4:{c.instructions+=4;NFSU2_TR(0x498bd4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B498bd5:{NFSU2_TR(0x498bd5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B498bd8:{NFSU2_TR(0x498bd8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B498bdb:{NFSU2_TR(0x498bdb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x498bd0u);}goto L498bd0;}}
}
B498bdd:L498bdd:{c.instructions+=1;NFSU2_TR(0x498bdd);
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
B498be0:L498be0:{c.instructions+=1;NFSU2_TR(0x498be0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498bf0:L498bf0:{c.instructions+=4;NFSU2_TR(0x498bf0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498bf1:{NFSU2_TR(0x498bf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B498bf5:{NFSU2_TR(0x498bf5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xdull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B498bf8:{NFSU2_TR(0x498bf8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L498c55;}}
}
B498bfa:L498bfa:{c.instructions+=4;NFSU2_TR(0x498bfa);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B498bfd:{NFSU2_TR(0x498bfd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498bff:{NFSU2_TR(0x498bff);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B498c02:{NFSU2_TR(0x498c02);
if(r1(R+518)){{goto L498c0d;}}
}
B498c04:L498c04:{c.instructions+=4;NFSU2_TR(0x498c04);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B498c06:{NFSU2_TR(0x498c06);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498c08:{NFSU2_TR(0x498c08);
__builtin_memmove((R+0),(R+518),1);
}
B498c0b:{NFSU2_TR(0x498c0b);
{goto L498c14;}
}
B498c0d:L498c0d:{c.instructions+=3;NFSU2_TR(0x498c0d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B498c0f:{NFSU2_TR(0x498c0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498c11:{NFSU2_TR(0x498c11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B498c14:L498c14:{c.instructions+=5;NFSU2_TR(0x498c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B498c1a:{NFSU2_TR(0x498c1a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B498c1d:{NFSU2_TR(0x498c1d);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B498c20:{NFSU2_TR(0x498c20);
u8 U[13];
w4(U+0,u32(u32(u32(0x78df70ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B498c27:{NFSU2_TR(0x498c27);
if(r1(R+518)){{goto L498c4b;}}
}
B498c29:L498c29:{c.instructions+=2;NFSU2_TR(0x498c29);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B498c2c:{NFSU2_TR(0x498c2c);
if(r1(R+518)){{goto L498c4b;}}
}
B498c2e:L498c2e:{c.instructions+=2;NFSU2_TR(0x498c2e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B498c31:{NFSU2_TR(0x498c31);
if(r1(R+518)){{goto L498c4b;}}
}
B498c33:L498c33:{c.instructions+=2;NFSU2_TR(0x498c33);
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
B498c36:{NFSU2_TR(0x498c36);
if(r1(R+518)){{goto L498c4b;}}
}
B498c38:L498c38:{c.instructions+=2;NFSU2_TR(0x498c38);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B498c3b:{NFSU2_TR(0x498c3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498cf8;}}
}
B498c41:L498c41:{c.instructions+=3;NFSU2_TR(0x498c41);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78df97ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B498c47:{NFSU2_TR(0x498c47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498c48:{NFSU2_TR(0x498c48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498c4b:L498c4b:{c.instructions+=3;NFSU2_TR(0x498c4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78df8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B498c51:{NFSU2_TR(0x498c51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498c52:{NFSU2_TR(0x498c52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498c55:L498c55:{c.instructions+=7;NFSU2_TR(0x498c55);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B498c58:{NFSU2_TR(0x498c58);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498c5a:{NFSU2_TR(0x498c5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498c5b:{NFSU2_TR(0x498c5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B498c5e:{NFSU2_TR(0x498c5e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498c5f:{NFSU2_TR(0x498c5f);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B498c63:{NFSU2_TR(0x498c63);
if(r1(R+518)){{goto L498c6e;}}
}
B498c65:L498c65:{c.instructions+=4;NFSU2_TR(0x498c65);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B498c67:{NFSU2_TR(0x498c67);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498c69:{NFSU2_TR(0x498c69);
__builtin_memmove((R+0),(R+518),1);
}
B498c6c:{NFSU2_TR(0x498c6c);
{goto L498c75;}
}
B498c6e:L498c6e:{c.instructions+=3;NFSU2_TR(0x498c6e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B498c70:{NFSU2_TR(0x498c70);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498c72:{NFSU2_TR(0x498c72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B498c75:L498c75:{c.instructions+=9;NFSU2_TR(0x498c75);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B498c78:{NFSU2_TR(0x498c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B498c7b:{NFSU2_TR(0x498c7b);
__builtin_memmove((R+24),(R+8),4);
}
B498c7d:{NFSU2_TR(0x498c7d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B498c7f:{NFSU2_TR(0x498c7f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x22ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B498c82:{NFSU2_TR(0x498c82);
u8 U[13];
w4(U+0,u32(u32(u32(0x78dbcbull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B498c89:{NFSU2_TR(0x498c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B498c8f:{NFSU2_TR(0x498c8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B498c91:{NFSU2_TR(0x498c91);
if(r1(R+518)){{goto L498cbf;}}
}
B498c93:L498c93:{c.instructions+=4;NFSU2_TR(0x498c93);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x66ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B498c96:{NFSU2_TR(0x498c96);
u8 U[13];
w4(U+0,u32(u32(u32(0x78dc0full))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B498c9d:{NFSU2_TR(0x498c9d);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498c9f:{NFSU2_TR(0x498c9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498ca9;}}
}
B498ca1:L498ca1:{c.instructions+=5;NFSU2_TR(0x498ca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498ca2:{NFSU2_TR(0x498ca2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B498ca3:{NFSU2_TR(0x498ca3);
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
B498ca5:{NFSU2_TR(0x498ca5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498ca6:{NFSU2_TR(0x498ca6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498ca9:L498ca9:{c.instructions+=2;NFSU2_TR(0x498ca9);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x2ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B498cac:{NFSU2_TR(0x498cac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498cf6;}}
}
B498cae:L498cae:{c.instructions+=8;NFSU2_TR(0x498cae);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B498cb1:{NFSU2_TR(0x498cb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B498cb4:{NFSU2_TR(0x498cb4);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B498cb6:{NFSU2_TR(0x498cb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498cb7:{NFSU2_TR(0x498cb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B498cb8:{NFSU2_TR(0x498cb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498cb9:{NFSU2_TR(0x498cb9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2eull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B498cbc:{NFSU2_TR(0x498cbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498cbf:L498cbf:{c.instructions+=3;NFSU2_TR(0x498cbf);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B498cc2:{NFSU2_TR(0x498cc2);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B498cc4:{NFSU2_TR(0x498cc4);
if(r1(R+518)){{goto L498cf6;}}
}
B498cc6:L498cc6:{c.instructions+=3;NFSU2_TR(0x498cc6);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B498cca:{NFSU2_TR(0x498cca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498ccc:{NFSU2_TR(0x498ccc);
if(r1(R+518)){{goto L498ce5;}}
}
B498cce:L498cce:{c.instructions+=9;NFSU2_TR(0x498cce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B498cd0:{NFSU2_TR(0x498cd0);
u8 U[4];
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B498cd2:{NFSU2_TR(0x498cd2);
__builtin_memmove((R+0),(R+518),1);
}
B498cd5:{NFSU2_TR(0x498cd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498cd6:{NFSU2_TR(0x498cd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B498cd7:{NFSU2_TR(0x498cd7);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x22ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B498cda:{NFSU2_TR(0x498cda);
u8 U[13];
w4(U+0,u32(u32(u32(0x78defbull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B498ce1:{NFSU2_TR(0x498ce1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498ce2:{NFSU2_TR(0x498ce2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498ce5:L498ce5:{c.instructions+=5;NFSU2_TR(0x498ce5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B498ce7:{NFSU2_TR(0x498ce7);
u8 U[4];
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B498ce9:{NFSU2_TR(0x498ce9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B498cec:{NFSU2_TR(0x498cec);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x22ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B498cef:{NFSU2_TR(0x498cef);
u8 U[13];
w4(U+0,u32(u32(u32(0x78defbull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B498cf6:L498cf6:{c.instructions+=2;NFSU2_TR(0x498cf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498cf7:{NFSU2_TR(0x498cf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B498cf8:L498cf8:{c.instructions+=2;NFSU2_TR(0x498cf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498cf9:{NFSU2_TR(0x498cf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498d00:L498d00:{c.instructions+=2;NFSU2_TR(0x498d00);
w4(R+4,u32(0x85b940ull));
}
B498d05:{NFSU2_TR(0x498d05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498d0aull));
TAIL_STATIC(0x501690u,501);
}
B498d0a:L498d0a:{c.instructions+=2;NFSU2_TR(0x498d0a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498d0c:{NFSU2_TR(0x498d0c);
if(r1(R+518)){{goto L498d17;}}
}
B498d0e:L498d0e:{c.instructions+=3;NFSU2_TR(0x498d0e);
__builtin_memmove((R+0),gp(0x85b940),1);
}
B498d13:{NFSU2_TR(0x498d13);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498d15:{NFSU2_TR(0x498d15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498d48;}}
}
B498d17:L498d17:{c.instructions+=3;NFSU2_TR(0x498d17);
__builtin_memmove((R+0),gp(0x863444),4);
}
B498d1c:{NFSU2_TR(0x498d1c);
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
B498d1e:{NFSU2_TR(0x498d1e);
if(r1(R+518)){{goto L498d82;}}
}
B498d20:L498d20:{c.instructions+=3;NFSU2_TR(0x498d20);
__builtin_memmove((R+4),gp(0x863448),4);
}
B498d26:{NFSU2_TR(0x498d26);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B498d28:{NFSU2_TR(0x498d28);
if(r1(R+518)){{goto L498d3a;}}
}
B498d2a:L498d2a:{c.instructions+=3;NFSU2_TR(0x498d2a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498d2c:{NFSU2_TR(0x498d2c);
u8 U[4];
w4(U+0,u32(0x78f928ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498d31:{NFSU2_TR(0x498d31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498d36ull));
TAIL_STATIC(0x555e80u,555);
}
B498d36:L498d36:{c.instructions+=2;NFSU2_TR(0x498d36);
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
B498d39:{NFSU2_TR(0x498d39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498d3a:L498d3a:{c.instructions+=2;NFSU2_TR(0x498d3a);
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
B498d3c:{NFSU2_TR(0x498d3c);
if(r1(R+518)){{goto L498d82;}}
}
B498d3e:L498d3e:{c.instructions+=3;NFSU2_TR(0x498d3e);
__builtin_memmove((R+4),gp(0x86344c),4);
}
B498d44:{NFSU2_TR(0x498d44);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B498d46:{NFSU2_TR(0x498d46);
if(r1(R+518)){{goto L498d58;}}
}
B498d48:L498d48:{c.instructions+=3;NFSU2_TR(0x498d48);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498d4a:{NFSU2_TR(0x498d4a);
u8 U[4];
w4(U+0,u32(0x78f910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498d4f:{NFSU2_TR(0x498d4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498d54ull));
TAIL_STATIC(0x555e80u,555);
}
B498d54:L498d54:{c.instructions+=2;NFSU2_TR(0x498d54);
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
B498d57:{NFSU2_TR(0x498d57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498d58:L498d58:{c.instructions+=2;NFSU2_TR(0x498d58);
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
B498d5a:{NFSU2_TR(0x498d5a);
if(r1(R+518)){{goto L498d82;}}
}
B498d5c:L498d5c:{c.instructions+=3;NFSU2_TR(0x498d5c);
__builtin_memmove((R+4),gp(0x863450),4);
}
B498d62:{NFSU2_TR(0x498d62);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B498d64:{NFSU2_TR(0x498d64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498d73;}}
}
B498d66:L498d66:{c.instructions+=2;NFSU2_TR(0x498d66);
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
B498d68:{NFSU2_TR(0x498d68);
if(r1(R+518)){{goto L498d82;}}
}
B498d6a:L498d6a:{c.instructions+=3;NFSU2_TR(0x498d6a);
__builtin_memmove((R+0),gp(0x863454),4);
}
B498d6f:{NFSU2_TR(0x498d6f);
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
B498d71:{NFSU2_TR(0x498d71);
if(r1(R+518)){{goto L498d82;}}
}
B498d73:L498d73:{c.instructions+=3;NFSU2_TR(0x498d73);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498d75:{NFSU2_TR(0x498d75);
u8 U[4];
w4(U+0,u32(0x78f8f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498d7a:{NFSU2_TR(0x498d7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498d7full));
TAIL_STATIC(0x555e80u,555);
}
B498d7f:L498d7f:{c.instructions+=1;NFSU2_TR(0x498d7f);
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
B498d82:L498d82:{c.instructions+=1;NFSU2_TR(0x498d82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498d90:L498d90:{c.instructions+=2;NFSU2_TR(0x498d90);
w4(R+4,u32(0x85b940ull));
}
B498d95:{NFSU2_TR(0x498d95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498d9aull));
TAIL_STATIC(0x501690u,501);
}
B498d9a:L498d9a:{c.instructions+=2;NFSU2_TR(0x498d9a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498d9c:{NFSU2_TR(0x498d9c);
if(r1(R+518)){{goto L498db5;}}
}
B498d9e:L498d9e:{c.instructions+=3;NFSU2_TR(0x498d9e);
__builtin_memmove((R+0),gp(0x85b940),1);
}
B498da3:{NFSU2_TR(0x498da3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498da5:{NFSU2_TR(0x498da5);
if(r1(R+518)){{goto L498db5;}}
}
B498da7:L498da7:{c.instructions+=2;NFSU2_TR(0x498da7);
u8 U[4];
w4(U+0,u32(0x78f910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498dac:{NFSU2_TR(0x498dac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498db1ull));
TAIL_STATIC(0x558f00u,558);
}
B498db1:L498db1:{c.instructions+=2;NFSU2_TR(0x498db1);
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
B498db4:{NFSU2_TR(0x498db4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498db5:L498db5:{c.instructions+=3;NFSU2_TR(0x498db5);
__builtin_memmove((R+0),gp(0x863444),4);
}
B498dba:{NFSU2_TR(0x498dba);
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
B498dbc:{NFSU2_TR(0x498dbc);
if(r1(R+518)){{goto L498e0a;}}
}
B498dbe:L498dbe:{c.instructions+=3;NFSU2_TR(0x498dbe);
__builtin_memmove((R+4),gp(0x863448),4);
}
B498dc4:{NFSU2_TR(0x498dc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B498dc6:{NFSU2_TR(0x498dc6);
if(r1(R+518)){{goto L498dd6;}}
}
B498dc8:L498dc8:{c.instructions+=2;NFSU2_TR(0x498dc8);
u8 U[4];
w4(U+0,u32(0x78f928ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498dcd:{NFSU2_TR(0x498dcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498dd2ull));
TAIL_STATIC(0x558f00u,558);
}
B498dd2:L498dd2:{c.instructions+=2;NFSU2_TR(0x498dd2);
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
B498dd5:{NFSU2_TR(0x498dd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498dd6:L498dd6:{c.instructions+=2;NFSU2_TR(0x498dd6);
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
B498dd8:{NFSU2_TR(0x498dd8);
if(r1(R+518)){{goto L498e0a;}}
}
B498dda:L498dda:{c.instructions+=3;NFSU2_TR(0x498dda);
__builtin_memmove((R+4),gp(0x86344c),4);
}
B498de0:{NFSU2_TR(0x498de0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B498de2:{NFSU2_TR(0x498de2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x498da7u);}goto L498da7;}}
}
B498de4:L498de4:{c.instructions+=2;NFSU2_TR(0x498de4);
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
B498de6:{NFSU2_TR(0x498de6);
if(r1(R+518)){{goto L498e0a;}}
}
B498de8:L498de8:{c.instructions+=3;NFSU2_TR(0x498de8);
__builtin_memmove((R+4),gp(0x863450),4);
}
B498dee:{NFSU2_TR(0x498dee);
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
B498df0:{NFSU2_TR(0x498df0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498e0a;}}
}
B498df2:L498df2:{c.instructions+=2;NFSU2_TR(0x498df2);
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
B498df4:{NFSU2_TR(0x498df4);
if(r1(R+518)){{goto L498e0a;}}
}
B498df6:L498df6:{c.instructions+=3;NFSU2_TR(0x498df6);
__builtin_memmove((R+0),gp(0x863454),4);
}
B498dfb:{NFSU2_TR(0x498dfb);
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
B498dfd:{NFSU2_TR(0x498dfd);
if(r1(R+518)){{goto L498e0a;}}
}
B498dff:L498dff:{c.instructions+=2;NFSU2_TR(0x498dff);
u8 U[4];
w4(U+0,u32(0x78f8f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498e04:{NFSU2_TR(0x498e04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498e09ull));
TAIL_STATIC(0x558f00u,558);
}
B498e09:L498e09:{c.instructions+=1;NFSU2_TR(0x498e09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B498e0a:L498e0a:{c.instructions+=1;NFSU2_TR(0x498e0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498e10:L498e10:{c.instructions+=9;NFSU2_TR(0x498e10);
__builtin_memmove((R+0),gp(0x863450),4);
}
B498e15:{NFSU2_TR(0x498e15);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498e16:{NFSU2_TR(0x498e16);
__builtin_memmove((R+24),gp(0x863444),4);
}
B498e1c:{NFSU2_TR(0x498e1c);
w1(R+512,u8((r4(R+24))!=(u32(0x0ull))));
w4(R+24,u32(0-u32(r4(R+24))));
}
B498e1e:{NFSU2_TR(0x498e1e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B498e20:{NFSU2_TR(0x498e20);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+0))));
}
B498e22:{NFSU2_TR(0x498e22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498e23:{NFSU2_TR(0x498e23);
w4(R+4,u32(0x85ef50ull));
}
B498e28:{NFSU2_TR(0x498e28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498e2dull));
TAIL_STATIC(0x5011a0u,501);
}
B498e2d:L498e2d:{c.instructions+=3;NFSU2_TR(0x498e2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498e2f:{NFSU2_TR(0x498e2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B498e32:{NFSU2_TR(0x498e32);
if(r1(R+518)){{goto L498e54;}}
}
B498e34:L498e34:{c.instructions+=2;NFSU2_TR(0x498e34);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498e36:{NFSU2_TR(0x498e36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498e44;}}
}
B498e38:L498e38:{c.instructions+=2;NFSU2_TR(0x498e38);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498e3a:{NFSU2_TR(0x498e3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498e3full));
TAIL_STATIC(0x53dd30u,53d);
}
B498e3f:L498e3f:{c.instructions+=1;NFSU2_TR(0x498e3f);
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
B498e42:L498e42:{c.instructions+=2;NFSU2_TR(0x498e42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498e43:{NFSU2_TR(0x498e43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498e44:L498e44:{c.instructions+=2;NFSU2_TR(0x498e44);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x4ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x4ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B498e46:{NFSU2_TR(0x498e46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x498e42u);}goto L498e42;}}
}
B498e48:L498e48:{c.instructions+=2;NFSU2_TR(0x498e48);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498e4a:{NFSU2_TR(0x498e4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498e4full));
TAIL_STATIC(0x53dd70u,53d);
}
B498e4f:L498e4f:{c.instructions+=3;NFSU2_TR(0x498e4f);
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
B498e52:{NFSU2_TR(0x498e52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498e53:{NFSU2_TR(0x498e53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498e54:L498e54:{c.instructions+=2;NFSU2_TR(0x498e54);
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
B498e56:{NFSU2_TR(0x498e56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L498e5e;}}
}
B498e58:L498e58:{c.instructions+=2;NFSU2_TR(0x498e58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498e59:{NFSU2_TR(0x498e59);
TAIL_STATIC(0x510c50u,510);
}
B498e5e:L498e5e:{c.instructions+=2;NFSU2_TR(0x498e5e);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B498e60:{NFSU2_TR(0x498e60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x498e42u);}goto L498e42;}}
}
B498e62:L498e62:{c.instructions+=2;NFSU2_TR(0x498e62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498e63:{NFSU2_TR(0x498e63);
TAIL_STATIC(0x510c60u,510);
}
B498e70:L498e70:{c.instructions+=10;NFSU2_TR(0x498e70);
__builtin_memmove((R+0),gp(0x863444),4);
}
B498e75:{NFSU2_TR(0x498e75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498e76:{NFSU2_TR(0x498e76);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B498e78:{NFSU2_TR(0x498e78);
__builtin_memmove((R+24),(R+4),4);
}
B498e7a:{NFSU2_TR(0x498e7a);
__builtin_memmove((R+4),gp(0x863450),4);
}
B498e80:{NFSU2_TR(0x498e80);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B498e82:{NFSU2_TR(0x498e82);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B498e84:{NFSU2_TR(0x498e84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498e85:{NFSU2_TR(0x498e85);
w4(R+4,u32(0x85ef50ull));
}
B498e8a:{NFSU2_TR(0x498e8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498e8full));
TAIL_STATIC(0x5011a0u,501);
}
B498e8f:L498e8f:{c.instructions+=2;NFSU2_TR(0x498e8f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B498e91:{NFSU2_TR(0x498e91);
if(r1(R+518)){{goto L498eeb;}}
}
B498e93:L498e93:{c.instructions+=8;NFSU2_TR(0x498e93);
__builtin_memmove((R+24),gp(0x863444),4);
}
B498e99:{NFSU2_TR(0x498e99);
__builtin_memmove((R+0),gp(0x863450),4);
}
B498e9e:{NFSU2_TR(0x498e9e);
w1(R+512,u8((r4(R+24))!=(u32(0x0ull))));
w4(R+24,u32(0-u32(r4(R+24))));
}
B498ea0:{NFSU2_TR(0x498ea0);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B498ea2:{NFSU2_TR(0x498ea2);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+0))));
}
B498ea4:{NFSU2_TR(0x498ea4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498ea5:{NFSU2_TR(0x498ea5);
w4(R+4,u32(0x85ef50ull));
}
B498eaa:{NFSU2_TR(0x498eaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498eafull));
TAIL_STATIC(0x541930u,541);
}
B498eaf:L498eaf:{c.instructions+=3;NFSU2_TR(0x498eaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498eb0:{NFSU2_TR(0x498eb0);
w4(R+4,u32(0x85b940ull));
}
B498eb5:{NFSU2_TR(0x498eb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498ebaull));
TAIL_STATIC(0x541960u,541);
}
B498eba:L498eba:{c.instructions+=2;NFSU2_TR(0x498eba);
w4(R+4,u32(0x85ef50ull));
}
B498ebf:{NFSU2_TR(0x498ebf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498ec4ull));
TAIL_STATIC(0x533680u,533);
}
B498ec4:L498ec4:{c.instructions+=3;NFSU2_TR(0x498ec4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498ec5:{NFSU2_TR(0x498ec5);
w4(R+4,u32(0x85ad40ull));
}
B498eca:{NFSU2_TR(0x498eca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498ecfull));
TAIL_STATIC(0x500ab0u,500);
}
B498ecf:L498ecf:{c.instructions+=2;NFSU2_TR(0x498ecf);
u8 U[4];
w4(U+0,u32(0x78f958ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498ed4:{NFSU2_TR(0x498ed4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498ed9ull));
TAIL_STATIC(0x50c8d0u,50c);
}
B498ed9:L498ed9:{c.instructions+=4;NFSU2_TR(0x498ed9);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B498edf:{NFSU2_TR(0x498edf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B498ee2:{NFSU2_TR(0x498ee2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498ee4:{NFSU2_TR(0x498ee4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498ee9ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B498ee9:L498ee9:{c.instructions+=2;NFSU2_TR(0x498ee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498eea:{NFSU2_TR(0x498eea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498eeb:L498eeb:{c.instructions+=5;NFSU2_TR(0x498eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498eee:{NFSU2_TR(0x498eee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498ef0:{NFSU2_TR(0x498ef0);
u8 U[4];
w4(U+0,u32(0x78f940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498ef5:{NFSU2_TR(0x498ef5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498ef6:{NFSU2_TR(0x498ef6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498efbull));
TAIL_STATIC(0x537980u,537);
}
B498efb:L498efb:{c.instructions+=3;NFSU2_TR(0x498efb);
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
B498efe:{NFSU2_TR(0x498efe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498eff:{NFSU2_TR(0x498eff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498f00:L498f00:{c.instructions+=8;NFSU2_TR(0x498f00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498f01:{NFSU2_TR(0x498f01);
__builtin_memmove((R+20),(R+16),4);
}
B498f03:{NFSU2_TR(0x498f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498f06:{NFSU2_TR(0x498f06);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B498f0b:{NFSU2_TR(0x498f0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498f0c:{NFSU2_TR(0x498f0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498f0d:{NFSU2_TR(0x498f0d);
__builtin_memmove((R+24),(R+4),4);
}
B498f0f:{NFSU2_TR(0x498f0f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x499090u,499);}
}
B498f15:L498f15:{c.instructions+=1;NFSU2_TR(0x498f15);
if(r1(R+518)){TAIL_STATIC(0x499067u,499);}
}
B498f1b:L498f1b:{c.instructions+=2;NFSU2_TR(0x498f1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B498f20:{NFSU2_TR(0x498f20);
if(r1(R+518)){{goto L498f6b;}}
}
B498f22:L498f22:{c.instructions+=2;NFSU2_TR(0x498f22);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x35f8620bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B498f27:{NFSU2_TR(0x498f27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x49915au,499);}
}
B498f2d:L498f2d:{c.instructions+=3;NFSU2_TR(0x498f2d);
__builtin_memmove((R+0),gp(0x863444),4);
}
B498f32:{NFSU2_TR(0x498f32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B498f34:{NFSU2_TR(0x498f34);
if(r1(R+518)){{goto L498f45;}}
}
B498f36:L498f36:{c.instructions+=3;NFSU2_TR(0x498f36);
__builtin_memmove((R+0),gp(0x863450),4);
}
B498f3b:{NFSU2_TR(0x498f3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B498f3d:{NFSU2_TR(0x498f3d);
if(r1(R+518)){{goto L498f45;}}
}
B498f3f:L498f3f:{c.instructions+=3;NFSU2_TR(0x498f3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498f42:{NFSU2_TR(0x498f42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498f43:{NFSU2_TR(0x498f43);
{goto L498f49;}
}
B498f45:L498f45:{c.instructions+=2;NFSU2_TR(0x498f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B498f48:{NFSU2_TR(0x498f48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498f49:L498f49:{c.instructions+=2;NFSU2_TR(0x498f49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B498f4c:{NFSU2_TR(0x498f4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498f51ull));
TAIL_STATIC(0x505450u,505);
}
B498f51:L498f51:{c.instructions+=3;NFSU2_TR(0x498f51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498f52:{NFSU2_TR(0x498f52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498f53:{NFSU2_TR(0x498f53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498f58ull));
TAIL_STATIC(0x52cea0u,52c);
}
B498f58:L498f58:{c.instructions+=3;NFSU2_TR(0x498f58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B498f5b:{NFSU2_TR(0x498f5b);
w4(R+4,u32(0x8635bcull));
}
B498f60:{NFSU2_TR(0x498f60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498f65ull));
TAIL_STATIC(0x5251a0u,525);
}
B498f65:L498f65:{c.instructions+=4;NFSU2_TR(0x498f65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498f66:{NFSU2_TR(0x498f66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498f67:{NFSU2_TR(0x498f67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B498f68:{NFSU2_TR(0x498f68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498f6b:L498f6b:{c.instructions+=4;NFSU2_TR(0x498f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B498f6e:{NFSU2_TR(0x498f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498f71:{NFSU2_TR(0x498f71);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x63857de0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B498f76:{NFSU2_TR(0x498f76);
if(r1(R+518)){TAIL_STATIC(0x499011u,499);}
}
B498f7c:L498f7c:{c.instructions+=2;NFSU2_TR(0x498f7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8a7c6ceull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B498f81:{NFSU2_TR(0x498f81);
if(r1(R+518)){{goto L498fd6;}}
}
B498f83:L498f83:{c.instructions+=2;NFSU2_TR(0x498f83);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd72f002aull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd72f002aull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd72f002aull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B498f88:{NFSU2_TR(0x498f88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x49915au,499);}
}
B498f8e:L498f8e:{c.instructions+=2;NFSU2_TR(0x498f8e);
w4(R+4,u32(0x85ad40ull));
}
B498f93:{NFSU2_TR(0x498f93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498f98ull));
TAIL_STATIC(0x495290u,495);
}
B498f98:L498f98:{c.instructions+=2;NFSU2_TR(0x498f98);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B498f9a:{NFSU2_TR(0x498f9a);
if(r1(R+518)){{goto L498fbe;}}
}
B498f9c:L498f9c:{c.instructions+=2;NFSU2_TR(0x498f9c);
w4(R+4,u32(0x85ad40ull));
}
B498fa1:{NFSU2_TR(0x498fa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498fa6ull));
TAIL_STATIC(0x495290u,495);
}
B498fa6:L498fa6:{c.instructions+=3;NFSU2_TR(0x498fa6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498fa7:{NFSU2_TR(0x498fa7);
w4(R+4,u32(0x85ad40ull));
}
B498fac:{NFSU2_TR(0x498fac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498fb1ull));
TAIL_STATIC(0x541120u,541);
}
B498fb1:L498fb1:{c.instructions+=3;NFSU2_TR(0x498fb1);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B498fb7:{NFSU2_TR(0x498fb7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498fb9:{NFSU2_TR(0x498fb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498fbeull));
TAIL_STATIC(0x5f4240u,5f4);
}
B498fbe:L498fbe:{c.instructions+=6;NFSU2_TR(0x498fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498fc1:{NFSU2_TR(0x498fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B498fc4:{NFSU2_TR(0x498fc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498fc5:{NFSU2_TR(0x498fc5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498fc7:{NFSU2_TR(0x498fc7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498fc8:{NFSU2_TR(0x498fc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498fcdull));
TAIL_STATIC(0x50d150u,50d);
}
B498fcd:L498fcd:{c.instructions+=5;NFSU2_TR(0x498fcd);
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
B498fd0:{NFSU2_TR(0x498fd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B498fd1:{NFSU2_TR(0x498fd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B498fd2:{NFSU2_TR(0x498fd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B498fd3:{NFSU2_TR(0x498fd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B498fd6:L498fd6:{c.instructions+=2;NFSU2_TR(0x498fd6);
w4(R+4,u32(0x85ad40ull));
}
B498fdb:{NFSU2_TR(0x498fdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498fe0ull));
TAIL_STATIC(0x495270u,495);
}
B498fe0:L498fe0:{c.instructions+=2;NFSU2_TR(0x498fe0);
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
B498fe2:{NFSU2_TR(0x498fe2);
if(r1(R+518)){TAIL_STATIC(0x49915au,499);}
}
B498fe8:L498fe8:{c.instructions+=6;NFSU2_TR(0x498fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B498feb:{NFSU2_TR(0x498feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B498fee:{NFSU2_TR(0x498fee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498fef:{NFSU2_TR(0x498fef);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498ff1:{NFSU2_TR(0x498ff1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B498ff2:{NFSU2_TR(0x498ff2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x498ff7ull));
TAIL_STATIC(0x50d150u,50d);
}
B498ff7:L498ff7:{c.instructions+=3;NFSU2_TR(0x498ff7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B498ffa:{NFSU2_TR(0x498ffa);
w4(R+4,u32(0x838590ull));
}
B498fff:{NFSU2_TR(0x498fff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499004ull));
TAIL_STATIC(0x5010e0u,501);
}
XIT:NFSU2_TR_EXIT(0x498,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
