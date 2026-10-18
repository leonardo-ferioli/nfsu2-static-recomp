#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_725(u8* __restrict R,Cpu& c);
u32 body_727(u8* __restrict R,Cpu& c);
u32 body_728(u8* __restrict R,Cpu& c);
u32 body_72a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x726,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x726,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_726(u8* __restrict R,Cpu& c);
u32 page_726(Cpu& c){return body_726(c.regs.data(),c);}
__attribute__((noinline)) u32 body_726(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x726000:goto L726000;
case 0x726005:c.instructions+=7;goto B726005;
case 0x726008:c.instructions+=6;goto B726008;
case 0x726009:c.instructions+=5;goto B726009;
case 0x72600c:c.instructions+=4;goto B72600c;
case 0x72600d:c.instructions+=3;goto B72600d;
case 0x72600f:c.instructions+=2;goto B72600f;
case 0x726015:c.instructions+=1;goto B726015;
case 0x72601a:goto L72601a;
case 0x72601f:c.instructions+=3;goto B72601f;
case 0x726021:c.instructions+=2;goto B726021;
case 0x726023:c.instructions+=1;goto B726023;
case 0x726028:goto L726028;
case 0x726029:c.instructions+=2;goto B726029;
case 0x72602f:c.instructions+=1;goto B72602f;
case 0x726032:goto L726032;
case 0x726034:c.instructions+=5;goto B726034;
case 0x726035:c.instructions+=4;goto B726035;
case 0x726038:c.instructions+=3;goto B726038;
case 0x726039:c.instructions+=2;goto B726039;
case 0x72603a:c.instructions+=1;goto B72603a;
case 0x72603f:goto L72603f;
case 0x726044:c.instructions+=13;goto B726044;
case 0x726045:c.instructions+=12;goto B726045;
case 0x726046:c.instructions+=11;goto B726046;
case 0x726049:c.instructions+=10;goto B726049;
case 0x72604a:c.instructions+=9;goto B72604a;
case 0x72604f:c.instructions+=8;goto B72604f;
case 0x726051:c.instructions+=7;goto B726051;
case 0x726054:c.instructions+=6;goto B726054;
case 0x726055:c.instructions+=5;goto B726055;
case 0x726056:c.instructions+=4;goto B726056;
case 0x726059:c.instructions+=3;goto B726059;
case 0x72605b:c.instructions+=2;goto B72605b;
case 0x72605c:c.instructions+=1;goto B72605c;
case 0x72605f:goto L72605f;
case 0x726061:c.instructions+=1;goto B726061;
case 0x726063:goto L726063;
case 0x72606a:c.instructions+=6;goto B72606a;
case 0x726071:c.instructions+=5;goto B726071;
case 0x726072:c.instructions+=4;goto B726072;
case 0x726079:c.instructions+=3;goto B726079;
case 0x72607b:c.instructions+=2;goto B72607b;
case 0x72607c:c.instructions+=1;goto B72607c;
case 0x726081:goto L726081;
case 0x726083:c.instructions+=3;goto B726083;
case 0x726084:c.instructions+=2;goto B726084;
case 0x726085:c.instructions+=1;goto B726085;
case 0x726087:goto L726087;
case 0x72608c:c.instructions+=12;goto B72608c;
case 0x72608e:c.instructions+=11;goto B72608e;
case 0x72608f:c.instructions+=10;goto B72608f;
case 0x726090:c.instructions+=9;goto B726090;
case 0x726091:c.instructions+=8;goto B726091;
case 0x726094:c.instructions+=7;goto B726094;
case 0x726095:c.instructions+=6;goto B726095;
case 0x726098:c.instructions+=5;goto B726098;
case 0x726099:c.instructions+=4;goto B726099;
case 0x72609f:c.instructions+=3;goto B72609f;
case 0x7260a0:c.instructions+=2;goto B7260a0;
case 0x7260a1:c.instructions+=1;goto B7260a1;
case 0x7260a4:goto L7260a4;
case 0x7260a6:c.instructions+=1;goto B7260a6;
case 0x7260a8:goto L7260a8;
case 0x7260ae:c.instructions+=2;goto B7260ae;
case 0x7260b1:c.instructions+=1;goto B7260b1;
case 0x7260b6:goto L7260b6;
case 0x7260bb:c.instructions+=9;goto B7260bb;
case 0x7260bc:c.instructions+=8;goto B7260bc;
case 0x7260bd:c.instructions+=7;goto B7260bd;
case 0x7260bf:c.instructions+=6;goto B7260bf;
case 0x7260c0:c.instructions+=5;goto B7260c0;
case 0x7260c1:c.instructions+=4;goto B7260c1;
case 0x7260c7:c.instructions+=3;goto B7260c7;
case 0x7260ca:c.instructions+=2;goto B7260ca;
case 0x7260cb:c.instructions+=1;goto B7260cb;
case 0x7260ce:goto L7260ce;
case 0x7260d3:c.instructions+=6;goto B7260d3;
case 0x7260d5:c.instructions+=5;goto B7260d5;
case 0x7260d6:c.instructions+=4;goto B7260d6;
case 0x7260d7:c.instructions+=3;goto B7260d7;
case 0x7260d8:c.instructions+=2;goto B7260d8;
case 0x7260d9:c.instructions+=1;goto B7260d9;
case 0x7260dc:goto L7260dc;
case 0x7260de:c.instructions+=1;goto B7260de;
case 0x7260e0:goto L7260e0;
case 0x7260e2:c.instructions+=2;goto B7260e2;
case 0x7260e5:c.instructions+=1;goto B7260e5;
case 0x7260ea:goto L7260ea;
case 0x7260eb:c.instructions+=3;goto B7260eb;
case 0x7260ec:c.instructions+=2;goto B7260ec;
case 0x7260ee:c.instructions+=1;goto B7260ee;
case 0x7260f0:goto L7260f0;
case 0x7260f2:goto L7260f2;
case 0x7260f3:c.instructions+=4;goto B7260f3;
case 0x7260f4:c.instructions+=3;goto B7260f4;
case 0x7260f5:c.instructions+=2;goto B7260f5;
case 0x7260f6:c.instructions+=1;goto B7260f6;
case 0x7260f7:goto L7260f7;
case 0x7260f8:c.instructions+=8;goto B7260f8;
case 0x7260fa:c.instructions+=7;goto B7260fa;
case 0x7260fd:c.instructions+=6;goto B7260fd;
case 0x7260fe:c.instructions+=5;goto B7260fe;
case 0x726100:c.instructions+=4;goto B726100;
case 0x726106:c.instructions+=3;goto B726106;
case 0x726107:c.instructions+=2;goto B726107;
case 0x726108:c.instructions+=1;goto B726108;
case 0x72610e:goto L72610e;
case 0x726113:c.instructions+=5;goto B726113;
case 0x726115:c.instructions+=4;goto B726115;
case 0x726118:c.instructions+=3;goto B726118;
case 0x726119:c.instructions+=2;goto B726119;
case 0x72611a:c.instructions+=1;goto B72611a;
case 0x72611d:goto L72611d;
case 0x726121:c.instructions+=1;goto B726121;
case 0x726127:goto L726127;
case 0x72612e:c.instructions+=1;goto B72612e;
case 0x726134:goto L726134;
case 0x726138:c.instructions+=1;goto B726138;
case 0x72613e:goto L72613e;
case 0x726141:goto L726141;
case 0x726146:c.instructions+=6;goto B726146;
case 0x726148:c.instructions+=5;goto B726148;
case 0x72614b:c.instructions+=4;goto B72614b;
case 0x72614c:c.instructions+=3;goto B72614c;
case 0x72614d:c.instructions+=2;goto B72614d;
case 0x72614e:c.instructions+=1;goto B72614e;
case 0x726151:goto L726151;
case 0x726153:c.instructions+=1;goto B726153;
case 0x726159:goto L726159;
case 0x72615c:c.instructions+=2;goto B72615c;
case 0x726162:c.instructions+=1;goto B726162;
case 0x726164:goto L726164;
case 0x72616a:c.instructions+=2;goto B72616a;
case 0x726171:c.instructions+=1;goto B726171;
case 0x726173:goto L726173;
case 0x726174:c.instructions+=2;goto B726174;
case 0x726176:c.instructions+=1;goto B726176;
case 0x72617b:goto L72617b;
case 0x72617c:c.instructions+=2;goto B72617c;
case 0x72617e:c.instructions+=1;goto B72617e;
case 0x726183:goto L726183;
case 0x726186:c.instructions+=2;goto B726186;
case 0x726189:c.instructions+=1;goto B726189;
case 0x72618d:goto L72618d;
case 0x726191:c.instructions+=1;goto B726191;
case 0x726193:goto L726193;
case 0x726195:goto L726195;
case 0x72619a:c.instructions+=1;goto B72619a;
case 0x7261a0:goto L7261a0;
case 0x7261a7:c.instructions+=10;goto B7261a7;
case 0x7261ad:c.instructions+=9;goto B7261ad;
case 0x7261af:c.instructions+=8;goto B7261af;
case 0x7261b5:c.instructions+=7;goto B7261b5;
case 0x7261b7:c.instructions+=6;goto B7261b7;
case 0x7261bd:c.instructions+=5;goto B7261bd;
case 0x7261c0:c.instructions+=4;goto B7261c0;
case 0x7261c7:c.instructions+=3;goto B7261c7;
case 0x7261ca:c.instructions+=2;goto B7261ca;
case 0x7261cd:c.instructions+=1;goto B7261cd;
case 0x7261d2:goto L7261d2;
case 0x7261d4:c.instructions+=5;goto B7261d4;
case 0x7261d7:c.instructions+=4;goto B7261d7;
case 0x7261dc:c.instructions+=3;goto B7261dc;
case 0x7261e2:c.instructions+=2;goto B7261e2;
case 0x7261e4:c.instructions+=1;goto B7261e4;
case 0x7261e6:goto L7261e6;
case 0x7261e8:goto L7261e8;
case 0x7261ee:c.instructions+=5;goto B7261ee;
case 0x7261f4:c.instructions+=4;goto B7261f4;
case 0x7261f6:c.instructions+=3;goto B7261f6;
case 0x7261f8:c.instructions+=2;goto B7261f8;
case 0x7261fb:c.instructions+=1;goto B7261fb;
case 0x7261fd:goto L7261fd;
case 0x7261ff:c.instructions+=3;goto B7261ff;
case 0x726201:c.instructions+=2;goto B726201;
case 0x726203:c.instructions+=1;goto B726203;
case 0x726209:goto L726209;
case 0x72620b:goto L72620b;
case 0x72620d:c.instructions+=1;goto B72620d;
case 0x726213:goto L726213;
case 0x726215:c.instructions+=1;goto B726215;
case 0x726217:goto L726217;
case 0x72621a:c.instructions+=1;goto B72621a;
case 0x72621c:goto L72621c;
case 0x72621e:c.instructions+=2;goto B72621e;
case 0x726221:c.instructions+=1;goto B726221;
case 0x726224:goto L726224;
case 0x726227:c.instructions+=1;goto B726227;
case 0x72622a:goto L72622a;
case 0x72622d:c.instructions+=3;goto B72622d;
case 0x726231:c.instructions+=2;goto B726231;
case 0x726233:c.instructions+=1;goto B726233;
case 0x726235:goto L726235;
case 0x72623c:c.instructions+=20;goto B72623c;
case 0x726243:c.instructions+=19;goto B726243;
case 0x726244:c.instructions+=18;goto B726244;
case 0x726245:c.instructions+=17;goto B726245;
case 0x726246:c.instructions+=16;goto B726246;
case 0x726249:c.instructions+=15;goto B726249;
case 0x72624a:c.instructions+=14;goto B72624a;
case 0x72624c:c.instructions+=13;goto B72624c;
case 0x726252:c.instructions+=12;goto B726252;
case 0x726254:c.instructions+=11;goto B726254;
case 0x726257:c.instructions+=10;goto B726257;
case 0x726258:c.instructions+=9;goto B726258;
case 0x72625a:c.instructions+=8;goto B72625a;
case 0x72625e:c.instructions+=7;goto B72625e;
case 0x726261:c.instructions+=6;goto B726261;
case 0x726263:c.instructions+=5;goto B726263;
case 0x726264:c.instructions+=4;goto B726264;
case 0x726266:c.instructions+=3;goto B726266;
case 0x726267:c.instructions+=2;goto B726267;
case 0x726268:c.instructions+=1;goto B726268;
case 0x72626b:goto L72626b;
case 0x72626e:c.instructions+=3;goto B72626e;
case 0x72626f:c.instructions+=2;goto B72626f;
case 0x726270:c.instructions+=1;goto B726270;
case 0x726275:goto L726275;
case 0x72627c:c.instructions+=14;goto B72627c;
case 0x726283:c.instructions+=13;goto B726283;
case 0x726288:c.instructions+=12;goto B726288;
case 0x72628a:c.instructions+=11;goto B72628a;
case 0x72628b:c.instructions+=10;goto B72628b;
case 0x72628e:c.instructions+=9;goto B72628e;
case 0x72628f:c.instructions+=8;goto B72628f;
case 0x726291:c.instructions+=7;goto B726291;
case 0x726293:c.instructions+=6;goto B726293;
case 0x726295:c.instructions+=5;goto B726295;
case 0x726297:c.instructions+=4;goto B726297;
case 0x726298:c.instructions+=3;goto B726298;
case 0x72629b:c.instructions+=2;goto B72629b;
case 0x72629c:c.instructions+=1;goto B72629c;
case 0x72629f:goto L72629f;
case 0x7262a1:c.instructions+=1;goto B7262a1;
case 0x7262a4:goto L7262a4;
case 0x7262a7:c.instructions+=2;goto B7262a7;
case 0x7262ab:c.instructions+=1;goto B7262ab;
case 0x7262b1:goto L7262b1;
case 0x7262b7:goto L7262b7;
case 0x7262bd:c.instructions+=4;goto B7262bd;
case 0x7262c3:c.instructions+=3;goto B7262c3;
case 0x7262c5:c.instructions+=2;goto B7262c5;
case 0x7262cb:c.instructions+=1;goto B7262cb;
case 0x7262cd:goto L7262cd;
case 0x7262cf:goto L7262cf;
case 0x7262d1:c.instructions+=1;goto B7262d1;
case 0x7262d3:goto L7262d3;
case 0x7262d5:c.instructions+=1;goto B7262d5;
case 0x7262db:goto L7262db;
case 0x7262e1:c.instructions+=3;goto B7262e1;
case 0x7262e4:c.instructions+=2;goto B7262e4;
case 0x7262e6:c.instructions+=1;goto B7262e6;
case 0x7262e8:goto L7262e8;
case 0x7262ea:c.instructions+=5;goto B7262ea;
case 0x7262ed:c.instructions+=4;goto B7262ed;
case 0x7262f0:c.instructions+=3;goto B7262f0;
case 0x7262f3:c.instructions+=2;goto B7262f3;
case 0x7262f9:c.instructions+=1;goto B7262f9;
case 0x7262fb:goto L7262fb;
case 0x726301:goto L726301;
case 0x726307:goto L726307;
case 0x72630e:c.instructions+=2;goto B72630e;
case 0x726315:c.instructions+=1;goto B726315;
case 0x726317:goto L726317;
case 0x72631a:c.instructions+=2;goto B72631a;
case 0x72631c:c.instructions+=1;goto B72631c;
case 0x72631e:goto L72631e;
case 0x726321:c.instructions+=1;goto B726321;
case 0x726327:goto L726327;
case 0x72632a:c.instructions+=11;goto B72632a;
case 0x72632d:c.instructions+=10;goto B72632d;
case 0x726336:c.instructions+=9;goto B726336;
case 0x726340:c.instructions+=8;goto B726340;
case 0x726343:c.instructions+=7;goto B726343;
case 0x726349:c.instructions+=6;goto B726349;
case 0x72634f:c.instructions+=5;goto B72634f;
case 0x726355:c.instructions+=4;goto B726355;
case 0x726357:c.instructions+=3;goto B726357;
case 0x726359:c.instructions+=2;goto B726359;
case 0x72635c:c.instructions+=1;goto B72635c;
case 0x72635e:goto L72635e;
case 0x726364:c.instructions+=1;goto B726364;
case 0x726366:goto L726366;
case 0x726368:goto L726368;
case 0x72636e:c.instructions+=5;goto B72636e;
case 0x726374:c.instructions+=4;goto B726374;
case 0x726376:c.instructions+=3;goto B726376;
case 0x726378:c.instructions+=2;goto B726378;
case 0x72637b:c.instructions+=1;goto B72637b;
case 0x72637d:goto L72637d;
case 0x726383:c.instructions+=1;goto B726383;
case 0x726385:goto L726385;
case 0x726387:goto L726387;
case 0x72638d:c.instructions+=1;goto B72638d;
case 0x72638f:goto L72638f;
case 0x726394:c.instructions+=6;goto B726394;
case 0x726396:c.instructions+=5;goto B726396;
case 0x726398:c.instructions+=4;goto B726398;
case 0x726399:c.instructions+=3;goto B726399;
case 0x72639a:c.instructions+=2;goto B72639a;
case 0x72639b:c.instructions+=1;goto B72639b;
case 0x72639e:goto L72639e;
case 0x7263a0:goto L7263a0;
case 0x7263a5:c.instructions+=3;goto B7263a5;
case 0x7263a7:c.instructions+=2;goto B7263a7;
case 0x7263a8:c.instructions+=1;goto B7263a8;
case 0x7263ab:goto L7263ab;
case 0x7263b1:goto L7263b1;
case 0x7263b2:c.instructions+=4;goto B7263b2;
case 0x7263b3:c.instructions+=3;goto B7263b3;
case 0x7263b4:c.instructions+=2;goto B7263b4;
case 0x7263b5:c.instructions+=1;goto B7263b5;
case 0x7263b6:goto L7263b6;
case 0x7263bc:goto L7263bc;
case 0x7263c1:goto L7263c1;
case 0x7263c7:goto L7263c7;
case 0x7263c8:c.instructions+=3;goto B7263c8;
case 0x7263c9:c.instructions+=2;goto B7263c9;
case 0x7263cb:c.instructions+=1;goto B7263cb;
case 0x7263d1:goto L7263d1;
case 0x7263d7:c.instructions+=1;goto B7263d7;
case 0x7263d9:goto L7263d9;
case 0x7263e0:c.instructions+=3;goto B7263e0;
case 0x7263e2:c.instructions+=2;goto B7263e2;
case 0x7263e8:c.instructions+=1;goto B7263e8;
case 0x7263ea:goto L7263ea;
case 0x7263eb:goto L7263eb;
case 0x7263f0:c.instructions+=2;goto B7263f0;
case 0x7263f2:c.instructions+=1;goto B7263f2;
case 0x7263f4:goto L7263f4;
case 0x7263f6:goto L7263f6;
case 0x7263fb:c.instructions+=2;goto B7263fb;
case 0x726400:c.instructions+=1;goto B726400;
case 0x726402:goto L726402;
case 0x726407:c.instructions+=1;goto B726407;
case 0x72640c:goto L72640c;
case 0x72640f:c.instructions+=1;goto B72640f;
case 0x726411:goto L726411;
case 0x726413:c.instructions+=2;goto B726413;
case 0x726415:c.instructions+=1;goto B726415;
case 0x726417:goto L726417;
case 0x72641d:c.instructions+=1;goto B72641d;
case 0x72641f:goto L72641f;
case 0x726421:c.instructions+=1;goto B726421;
case 0x726422:goto L726422;
case 0x726427:c.instructions+=2;goto B726427;
case 0x726429:c.instructions+=1;goto B726429;
case 0x72642b:goto L72642b;
case 0x72642d:goto L72642d;
case 0x72642e:c.instructions+=1;goto B72642e;
case 0x726434:goto L726434;
case 0x72643b:c.instructions+=1;goto B72643b;
case 0x72643d:goto L72643d;
case 0x72643e:goto L72643e;
case 0x726440:c.instructions+=1;goto B726440;
case 0x726446:goto L726446;
case 0x726447:c.instructions+=4;goto B726447;
case 0x72644e:c.instructions+=3;goto B72644e;
case 0x726450:c.instructions+=2;goto B726450;
case 0x726451:c.instructions+=1;goto B726451;
case 0x726454:goto L726454;
case 0x726459:c.instructions+=9;goto B726459;
case 0x72645b:c.instructions+=8;goto B72645b;
case 0x72645c:c.instructions+=7;goto B72645c;
case 0x72645d:c.instructions+=6;goto B72645d;
case 0x726462:c.instructions+=5;goto B726462;
case 0x726463:c.instructions+=4;goto B726463;
case 0x726464:c.instructions+=3;goto B726464;
case 0x72646b:c.instructions+=2;goto B72646b;
case 0x726472:c.instructions+=1;goto B726472;
case 0x726478:goto L726478;
case 0x72647a:c.instructions+=3;goto B72647a;
case 0x72647b:c.instructions+=2;goto B72647b;
case 0x726480:c.instructions+=1;goto B726480;
case 0x726486:goto L726486;
case 0x726487:goto L726487;
case 0x72648e:c.instructions+=1;goto B72648e;
case 0x726490:goto L726490;
case 0x726495:c.instructions+=1;goto B726495;
case 0x72649a:goto L72649a;
case 0x72649b:c.instructions+=1;goto B72649b;
case 0x7264a2:goto L7264a2;
case 0x7264a3:c.instructions+=3;goto B7264a3;
case 0x7264a5:c.instructions+=2;goto B7264a5;
case 0x7264a9:c.instructions+=1;goto B7264a9;
case 0x7264ae:goto L7264ae;
case 0x7264b0:c.instructions+=4;goto B7264b0;
case 0x7264b2:c.instructions+=3;goto B7264b2;
case 0x7264b3:c.instructions+=2;goto B7264b3;
case 0x7264b4:c.instructions+=1;goto B7264b4;
case 0x7264b6:goto L7264b6;
case 0x7264bb:goto L7264bb;
case 0x7264bd:c.instructions+=2;goto B7264bd;
case 0x7264be:c.instructions+=1;goto B7264be;
case 0x7264bf:goto L7264bf;
case 0x7264c4:goto L7264c4;
case 0x7264cb:c.instructions+=3;goto B7264cb;
case 0x7264d1:c.instructions+=2;goto B7264d1;
case 0x7264d2:c.instructions+=1;goto B7264d2;
case 0x7264d7:goto L7264d7;
case 0x7264de:c.instructions+=5;goto B7264de;
case 0x7264e4:c.instructions+=4;goto B7264e4;
case 0x7264e5:c.instructions+=3;goto B7264e5;
case 0x7264e6:c.instructions+=2;goto B7264e6;
case 0x7264eb:c.instructions+=1;goto B7264eb;
case 0x7264f0:goto L7264f0;
case 0x7264f3:c.instructions+=1;goto B7264f3;
case 0x7264f8:goto L7264f8;
case 0x7264fd:c.instructions+=2;goto B7264fd;
case 0x7264ff:c.instructions+=1;goto B7264ff;
case 0x726501:goto L726501;
case 0x726503:c.instructions+=1;goto B726503;
case 0x726505:goto L726505;
case 0x726507:c.instructions+=1;goto B726507;
case 0x726509:goto L726509;
case 0x72650f:c.instructions+=2;goto B72650f;
case 0x726515:c.instructions+=1;goto B726515;
case 0x726517:goto L726517;
case 0x72651d:c.instructions+=2;goto B72651d;
case 0x726523:c.instructions+=1;goto B726523;
case 0x726525:goto L726525;
case 0x72652b:c.instructions+=1;goto B72652b;
case 0x726531:goto L726531;
case 0x726537:goto L726537;
case 0x72653c:goto L72653c;
case 0x726540:c.instructions+=7;goto B726540;
case 0x726544:c.instructions+=6;goto B726544;
case 0x726547:c.instructions+=5;goto B726547;
case 0x72654a:c.instructions+=4;goto B72654a;
case 0x72654e:c.instructions+=3;goto B72654e;
case 0x726551:c.instructions+=2;goto B726551;
case 0x726559:c.instructions+=1;goto B726559;
case 0x72655a:goto L72655a;
case 0x72655b:c.instructions+=18;goto B72655b;
case 0x72655d:c.instructions+=17;goto B72655d;
case 0x726560:c.instructions+=16;goto B726560;
case 0x726564:c.instructions+=15;goto B726564;
case 0x726566:c.instructions+=14;goto B726566;
case 0x72656c:c.instructions+=13;goto B72656c;
case 0x726576:c.instructions+=12;goto B726576;
case 0x726577:c.instructions+=11;goto B726577;
case 0x72657a:c.instructions+=10;goto B72657a;
case 0x72657b:c.instructions+=9;goto B72657b;
case 0x72657c:c.instructions+=8;goto B72657c;
case 0x72657d:c.instructions+=7;goto B72657d;
case 0x72657e:c.instructions+=6;goto B72657e;
case 0x72657f:c.instructions+=5;goto B72657f;
case 0x726584:c.instructions+=4;goto B726584;
case 0x726587:c.instructions+=3;goto B726587;
case 0x72658c:c.instructions+=2;goto B72658c;
case 0x72658f:c.instructions+=1;goto B72658f;
case 0x726595:goto L726595;
case 0x726597:c.instructions+=3;goto B726597;
case 0x72659d:c.instructions+=2;goto B72659d;
case 0x7265a0:c.instructions+=1;goto B7265a0;
case 0x7265a6:goto L7265a6;
case 0x7265a7:c.instructions+=1;goto B7265a7;
case 0x7265a8:goto L7265a8;
case 0x7265ad:c.instructions+=3;goto B7265ad;
case 0x7265b0:c.instructions+=2;goto B7265b0;
case 0x7265b2:c.instructions+=1;goto B7265b2;
case 0x7265b8:goto L7265b8;
case 0x7265ba:c.instructions+=5;goto B7265ba;
case 0x7265bd:c.instructions+=4;goto B7265bd;
case 0x7265c0:c.instructions+=3;goto B7265c0;
case 0x7265c2:c.instructions+=2;goto B7265c2;
case 0x7265c3:c.instructions+=1;goto B7265c3;
case 0x7265c8:goto L7265c8;
case 0x7265cb:c.instructions+=4;goto B7265cb;
case 0x7265cf:c.instructions+=3;goto B7265cf;
case 0x7265d1:c.instructions+=2;goto B7265d1;
case 0x7265d2:c.instructions+=1;goto B7265d2;
case 0x7265d7:goto L7265d7;
case 0x7265da:c.instructions+=2;goto B7265da;
case 0x7265dc:c.instructions+=1;goto B7265dc;
case 0x7265e2:goto L7265e2;
case 0x7265e7:c.instructions+=5;goto B7265e7;
case 0x7265ea:c.instructions+=4;goto B7265ea;
case 0x7265ed:c.instructions+=3;goto B7265ed;
case 0x7265f0:c.instructions+=2;goto B7265f0;
case 0x7265f3:c.instructions+=1;goto B7265f3;
case 0x7265f8:goto L7265f8;
case 0x7265fc:c.instructions+=4;goto B7265fc;
case 0x726603:c.instructions+=3;goto B726603;
case 0x726604:c.instructions+=2;goto B726604;
case 0x726605:c.instructions+=1;goto B726605;
case 0x72660b:goto L72660b;
case 0x72660d:c.instructions+=3;goto B72660d;
case 0x72660f:c.instructions+=2;goto B72660f;
case 0x726612:c.instructions+=1;goto B726612;
case 0x726615:goto L726615;
case 0x726618:c.instructions+=2;goto B726618;
case 0x72661d:c.instructions+=1;goto B72661d;
case 0x726623:goto L726623;
case 0x726626:c.instructions+=5;goto B726626;
case 0x726629:c.instructions+=4;goto B726629;
case 0x72662b:c.instructions+=3;goto B72662b;
case 0x72662f:c.instructions+=2;goto B72662f;
case 0x726632:c.instructions+=1;goto B726632;
case 0x726638:goto L726638;
case 0x72663b:c.instructions+=8;goto B72663b;
case 0x72663d:c.instructions+=7;goto B72663d;
case 0x72663e:c.instructions+=6;goto B72663e;
case 0x72663f:c.instructions+=5;goto B72663f;
case 0x726642:c.instructions+=4;goto B726642;
case 0x726645:c.instructions+=3;goto B726645;
case 0x726648:c.instructions+=2;goto B726648;
case 0x726649:c.instructions+=1;goto B726649;
case 0x72664b:goto L72664b;
case 0x72664d:c.instructions+=3;goto B72664d;
case 0x726650:c.instructions+=2;goto B726650;
case 0x726657:c.instructions+=1;goto B726657;
case 0x726659:goto L726659;
case 0x726660:c.instructions+=8;goto B726660;
case 0x726662:c.instructions+=7;goto B726662;
case 0x726665:c.instructions+=6;goto B726665;
case 0x726666:c.instructions+=5;goto B726666;
case 0x726667:c.instructions+=4;goto B726667;
case 0x72666b:c.instructions+=3;goto B72666b;
case 0x72666e:c.instructions+=2;goto B72666e;
case 0x726671:c.instructions+=1;goto B726671;
case 0x726676:goto L726676;
case 0x726678:c.instructions+=13;goto B726678;
case 0x72667a:c.instructions+=12;goto B72667a;
case 0x72667d:c.instructions+=11;goto B72667d;
case 0x726680:c.instructions+=10;goto B726680;
case 0x726681:c.instructions+=9;goto B726681;
case 0x726684:c.instructions+=8;goto B726684;
case 0x726687:c.instructions+=7;goto B726687;
case 0x726688:c.instructions+=6;goto B726688;
case 0x72668b:c.instructions+=5;goto B72668b;
case 0x72668c:c.instructions+=4;goto B72668c;
case 0x72668f:c.instructions+=3;goto B72668f;
case 0x726692:c.instructions+=2;goto B726692;
case 0x726693:c.instructions+=1;goto B726693;
case 0x726695:goto L726695;
case 0x72669c:c.instructions+=4;goto B72669c;
case 0x72669f:c.instructions+=3;goto B72669f;
case 0x7266a0:c.instructions+=2;goto B7266a0;
case 0x7266a3:c.instructions+=1;goto B7266a3;
case 0x7266a6:goto L7266a6;
case 0x7266ac:goto L7266ac;
case 0x7266af:c.instructions+=13;goto B7266af;
case 0x7266b6:c.instructions+=12;goto B7266b6;
case 0x7266ba:c.instructions+=11;goto B7266ba;
case 0x7266c2:c.instructions+=10;goto B7266c2;
case 0x7266c5:c.instructions+=9;goto B7266c5;
case 0x7266c8:c.instructions+=8;goto B7266c8;
case 0x7266cc:c.instructions+=7;goto B7266cc;
case 0x7266cf:c.instructions+=6;goto B7266cf;
case 0x7266d2:c.instructions+=5;goto B7266d2;
case 0x7266d5:c.instructions+=4;goto B7266d5;
case 0x7266d7:c.instructions+=3;goto B7266d7;
case 0x7266da:c.instructions+=2;goto B7266da;
case 0x7266e1:c.instructions+=1;goto B7266e1;
case 0x7266e7:goto L7266e7;
case 0x7266ea:c.instructions+=1;goto B7266ea;
case 0x7266ed:goto L7266ed;
case 0x7266ef:c.instructions+=2;goto B7266ef;
case 0x7266f1:c.instructions+=1;goto B7266f1;
case 0x7266f3:goto L7266f3;
case 0x7266fa:c.instructions+=5;goto B7266fa;
case 0x7266fd:c.instructions+=4;goto B7266fd;
case 0x726704:c.instructions+=3;goto B726704;
case 0x726707:c.instructions+=2;goto B726707;
case 0x726708:c.instructions+=1;goto B726708;
case 0x72670a:goto L72670a;
case 0x72670c:c.instructions+=5;goto B72670c;
case 0x72670d:c.instructions+=4;goto B72670d;
case 0x726711:c.instructions+=3;goto B726711;
case 0x726714:c.instructions+=2;goto B726714;
case 0x726717:c.instructions+=1;goto B726717;
case 0x72671c:goto L72671c;
case 0x72671f:c.instructions+=14;goto B72671f;
case 0x726721:c.instructions+=13;goto B726721;
case 0x726728:c.instructions+=12;goto B726728;
case 0x72672b:c.instructions+=11;goto B72672b;
case 0x72672e:c.instructions+=10;goto B72672e;
case 0x72672f:c.instructions+=9;goto B72672f;
case 0x726732:c.instructions+=8;goto B726732;
case 0x726735:c.instructions+=7;goto B726735;
case 0x726736:c.instructions+=6;goto B726736;
case 0x726739:c.instructions+=5;goto B726739;
case 0x72673a:c.instructions+=4;goto B72673a;
case 0x72673d:c.instructions+=3;goto B72673d;
case 0x726740:c.instructions+=2;goto B726740;
case 0x726741:c.instructions+=1;goto B726741;
case 0x726743:goto L726743;
case 0x726746:c.instructions+=3;goto B726746;
case 0x726748:c.instructions+=2;goto B726748;
case 0x72674b:c.instructions+=1;goto B72674b;
case 0x72674e:goto L72674e;
case 0x726754:goto L726754;
case 0x726757:c.instructions+=2;goto B726757;
case 0x72675a:c.instructions+=1;goto B72675a;
case 0x726762:goto L726762;
case 0x726769:c.instructions+=5;goto B726769;
case 0x72676d:c.instructions+=4;goto B72676d;
case 0x72676e:c.instructions+=3;goto B72676e;
case 0x726771:c.instructions+=2;goto B726771;
case 0x726774:c.instructions+=1;goto B726774;
case 0x72677a:goto L72677a;
case 0x726781:c.instructions+=2;goto B726781;
case 0x726784:c.instructions+=1;goto B726784;
case 0x726786:goto L726786;
case 0x726788:c.instructions+=1;goto B726788;
case 0x72678b:goto L72678b;
case 0x726792:c.instructions+=4;goto B726792;
case 0x726795:c.instructions+=3;goto B726795;
case 0x726798:c.instructions+=2;goto B726798;
case 0x72679b:c.instructions+=1;goto B72679b;
case 0x7267a1:goto L7267a1;
case 0x7267a4:goto L7267a4;
case 0x7267ab:c.instructions+=3;goto B7267ab;
case 0x7267ae:c.instructions+=2;goto B7267ae;
case 0x7267b0:c.instructions+=1;goto B7267b0;
case 0x7267b6:goto L7267b6;
case 0x7267b9:c.instructions+=5;goto B7267b9;
case 0x7267bc:c.instructions+=4;goto B7267bc;
case 0x7267bd:c.instructions+=3;goto B7267bd;
case 0x7267c2:c.instructions+=2;goto B7267c2;
case 0x7267c5:c.instructions+=1;goto B7267c5;
case 0x7267ca:goto L7267ca;
case 0x7267cb:c.instructions+=1;goto B7267cb;
case 0x7267cc:goto L7267cc;
case 0x7267cd:c.instructions+=3;goto B7267cd;
case 0x7267d3:c.instructions+=2;goto B7267d3;
case 0x7267d6:c.instructions+=1;goto B7267d6;
case 0x7267dc:goto L7267dc;
case 0x7267dd:c.instructions+=1;goto B7267dd;
case 0x7267de:goto L7267de;
case 0x7267df:c.instructions+=2;goto B7267df;
case 0x7267e0:c.instructions+=1;goto B7267e0;
case 0x7267e1:goto L7267e1;
case 0x7267e2:c.instructions+=12;goto B7267e2;
case 0x7267e4:c.instructions+=11;goto B7267e4;
case 0x7267e5:c.instructions+=10;goto B7267e5;
case 0x7267e6:c.instructions+=9;goto B7267e6;
case 0x7267eb:c.instructions+=8;goto B7267eb;
case 0x7267ec:c.instructions+=7;goto B7267ec;
case 0x7267ed:c.instructions+=6;goto B7267ed;
case 0x7267f0:c.instructions+=5;goto B7267f0;
case 0x7267f3:c.instructions+=4;goto B7267f3;
case 0x7267f5:c.instructions+=3;goto B7267f5;
case 0x7267f8:c.instructions+=2;goto B7267f8;
case 0x7267fb:c.instructions+=1;goto B7267fb;
case 0x726801:goto L726801;
case 0x726802:c.instructions+=7;goto B726802;
case 0x726805:c.instructions+=6;goto B726805;
case 0x726808:c.instructions+=5;goto B726808;
case 0x726809:c.instructions+=4;goto B726809;
case 0x72680d:c.instructions+=3;goto B72680d;
case 0x72680f:c.instructions+=2;goto B72680f;
case 0x726810:c.instructions+=1;goto B726810;
case 0x726815:goto L726815;
case 0x726817:c.instructions+=4;goto B726817;
case 0x726818:c.instructions+=3;goto B726818;
case 0x726819:c.instructions+=2;goto B726819;
case 0x72681c:c.instructions+=1;goto B72681c;
case 0x72681e:goto L72681e;
case 0x726820:c.instructions+=3;goto B726820;
case 0x726823:c.instructions+=2;goto B726823;
case 0x726826:c.instructions+=1;goto B726826;
case 0x726828:goto L726828;
case 0x72682a:c.instructions+=6;goto B72682a;
case 0x72682d:c.instructions+=5;goto B72682d;
case 0x726830:c.instructions+=4;goto B726830;
case 0x726832:c.instructions+=3;goto B726832;
case 0x726834:c.instructions+=2;goto B726834;
case 0x726837:c.instructions+=1;goto B726837;
case 0x726839:goto L726839;
case 0x72683b:c.instructions+=2;goto B72683b;
case 0x72683c:c.instructions+=1;goto B72683c;
case 0x72683f:goto L72683f;
case 0x726842:c.instructions+=3;goto B726842;
case 0x726845:c.instructions+=2;goto B726845;
case 0x726846:c.instructions+=1;goto B726846;
case 0x726849:goto L726849;
case 0x72684c:c.instructions+=3;goto B72684c;
case 0x72684f:c.instructions+=2;goto B72684f;
case 0x726851:c.instructions+=1;goto B726851;
case 0x726853:goto L726853;
case 0x726854:c.instructions+=1;goto B726854;
case 0x726859:goto L726859;
case 0x72685c:c.instructions+=2;goto B72685c;
case 0x72685d:c.instructions+=1;goto B72685d;
case 0x726860:goto L726860;
case 0x726863:c.instructions+=4;goto B726863;
case 0x726864:c.instructions+=3;goto B726864;
case 0x726867:c.instructions+=2;goto B726867;
case 0x72686a:c.instructions+=1;goto B72686a;
case 0x72686c:goto L72686c;
case 0x72686f:goto L72686f;
case 0x726872:c.instructions+=2;goto B726872;
case 0x726874:c.instructions+=1;goto B726874;
case 0x726876:goto L726876;
case 0x726877:c.instructions+=1;goto B726877;
case 0x72687c:goto L72687c;
case 0x72687d:c.instructions+=1;goto B72687d;
case 0x726880:goto L726880;
case 0x726882:goto L726882;
case 0x726885:c.instructions+=3;goto B726885;
case 0x726887:c.instructions+=2;goto B726887;
case 0x726889:c.instructions+=1;goto B726889;
case 0x72688b:goto L72688b;
case 0x72688d:goto L72688d;
case 0x726890:c.instructions+=2;goto B726890;
case 0x726893:c.instructions+=1;goto B726893;
case 0x726895:goto L726895;
case 0x726898:c.instructions+=2;goto B726898;
case 0x72689a:c.instructions+=1;goto B72689a;
case 0x72689c:goto L72689c;
case 0x72689d:c.instructions+=1;goto B72689d;
case 0x7268a2:goto L7268a2;
case 0x7268a3:c.instructions+=1;goto B7268a3;
case 0x7268a6:goto L7268a6;
case 0x7268ab:c.instructions+=3;goto B7268ab;
case 0x7268b0:c.instructions+=2;goto B7268b0;
case 0x7268b3:c.instructions+=1;goto B7268b3;
case 0x7268b8:goto L7268b8;
case 0x7268b9:c.instructions+=2;goto B7268b9;
case 0x7268ba:c.instructions+=1;goto B7268ba;
case 0x7268bb:goto L7268bb;
case 0x7268bc:c.instructions+=3;goto B7268bc;
case 0x7268bd:c.instructions+=2;goto B7268bd;
case 0x7268be:c.instructions+=1;goto B7268be;
case 0x7268bf:goto L7268bf;
case 0x7268c0:c.instructions+=7;goto B7268c0;
case 0x7268c2:c.instructions+=6;goto B7268c2;
case 0x7268c5:c.instructions+=5;goto B7268c5;
case 0x7268c6:c.instructions+=4;goto B7268c6;
case 0x7268c7:c.instructions+=3;goto B7268c7;
case 0x7268c8:c.instructions+=2;goto B7268c8;
case 0x7268ca:c.instructions+=1;goto B7268ca;
case 0x7268cf:goto L7268cf;
case 0x7268d2:c.instructions+=4;goto B7268d2;
case 0x7268d4:c.instructions+=3;goto B7268d4;
case 0x7268d5:c.instructions+=2;goto B7268d5;
case 0x7268d8:c.instructions+=1;goto B7268d8;
case 0x7268dd:goto L7268dd;
case 0x7268e0:c.instructions+=6;goto B7268e0;
case 0x7268e1:c.instructions+=5;goto B7268e1;
case 0x7268e5:c.instructions+=4;goto B7268e5;
case 0x7268e7:c.instructions+=3;goto B7268e7;
case 0x7268e8:c.instructions+=2;goto B7268e8;
case 0x7268eb:c.instructions+=1;goto B7268eb;
case 0x7268f0:goto L7268f0;
case 0x7268f3:c.instructions+=3;goto B7268f3;
case 0x7268f6:c.instructions+=2;goto B7268f6;
case 0x7268f7:c.instructions+=1;goto B7268f7;
case 0x7268fc:goto L7268fc;
case 0x726900:c.instructions+=5;goto B726900;
case 0x726903:c.instructions+=4;goto B726903;
case 0x726907:c.instructions+=3;goto B726907;
case 0x72690a:c.instructions+=2;goto B72690a;
case 0x726910:c.instructions+=1;goto B726910;
case 0x726916:goto L726916;
case 0x726919:c.instructions+=4;goto B726919;
case 0x72691c:c.instructions+=3;goto B72691c;
case 0x726923:c.instructions+=2;goto B726923;
case 0x726926:c.instructions+=1;goto B726926;
case 0x72692b:goto L72692b;
case 0x72692e:c.instructions+=6;goto B72692e;
case 0x726931:c.instructions+=5;goto B726931;
case 0x726934:c.instructions+=4;goto B726934;
case 0x72693b:c.instructions+=3;goto B72693b;
case 0x72693e:c.instructions+=2;goto B72693e;
case 0x726941:c.instructions+=1;goto B726941;
case 0x726946:goto L726946;
case 0x726949:c.instructions+=3;goto B726949;
case 0x72694b:c.instructions+=2;goto B72694b;
case 0x72694c:c.instructions+=1;goto B72694c;
case 0x726951:goto L726951;
case 0x726954:c.instructions+=3;goto B726954;
case 0x726957:c.instructions+=2;goto B726957;
case 0x72695a:c.instructions+=1;goto B72695a;
case 0x726960:goto L726960;
case 0x726967:goto L726967;
case 0x72696a:c.instructions+=2;goto B72696a;
case 0x72696d:c.instructions+=1;goto B72696d;
case 0x726972:goto L726972;
case 0x726977:goto L726977;
case 0x72697a:c.instructions+=6;goto B72697a;
case 0x72697d:c.instructions+=5;goto B72697d;
case 0x726980:c.instructions+=4;goto B726980;
case 0x726983:c.instructions+=3;goto B726983;
case 0x726985:c.instructions+=2;goto B726985;
case 0x726986:c.instructions+=1;goto B726986;
case 0x72698b:goto L72698b;
case 0x72698e:c.instructions+=8;goto B72698e;
case 0x726991:c.instructions+=7;goto B726991;
case 0x726994:c.instructions+=6;goto B726994;
case 0x726997:c.instructions+=5;goto B726997;
case 0x72699a:c.instructions+=4;goto B72699a;
case 0x72699d:c.instructions+=3;goto B72699d;
case 0x72699f:c.instructions+=2;goto B72699f;
case 0x7269a0:c.instructions+=1;goto B7269a0;
case 0x7269a5:goto L7269a5;
case 0x7269a8:c.instructions+=2;goto B7269a8;
case 0x7269ab:c.instructions+=1;goto B7269ab;
case 0x7269b0:goto L7269b0;
case 0x7269b3:c.instructions+=3;goto B7269b3;
case 0x7269b4:c.instructions+=2;goto B7269b4;
case 0x7269b7:c.instructions+=1;goto B7269b7;
case 0x7269bc:goto L7269bc;
case 0x7269c1:goto L7269c1;
case 0x7269c4:c.instructions+=6;goto B7269c4;
case 0x7269c7:c.instructions+=5;goto B7269c7;
case 0x7269ca:c.instructions+=4;goto B7269ca;
case 0x7269cd:c.instructions+=3;goto B7269cd;
case 0x7269cf:c.instructions+=2;goto B7269cf;
case 0x7269d0:c.instructions+=1;goto B7269d0;
case 0x7269d5:goto L7269d5;
case 0x7269d8:c.instructions+=6;goto B7269d8;
case 0x7269db:c.instructions+=5;goto B7269db;
case 0x7269de:c.instructions+=4;goto B7269de;
case 0x7269e1:c.instructions+=3;goto B7269e1;
case 0x7269e4:c.instructions+=2;goto B7269e4;
case 0x7269e7:c.instructions+=1;goto B7269e7;
case 0x7269ec:goto L7269ec;
case 0x7269ef:c.instructions+=3;goto B7269ef;
case 0x7269f0:c.instructions+=2;goto B7269f0;
case 0x7269f3:c.instructions+=1;goto B7269f3;
case 0x7269f8:goto L7269f8;
case 0x7269fd:goto L7269fd;
case 0x726a00:c.instructions+=6;goto B726a00;
case 0x726a03:c.instructions+=5;goto B726a03;
case 0x726a06:c.instructions+=4;goto B726a06;
case 0x726a09:c.instructions+=3;goto B726a09;
case 0x726a0b:c.instructions+=2;goto B726a0b;
case 0x726a0c:c.instructions+=1;goto B726a0c;
case 0x726a11:goto L726a11;
case 0x726a14:c.instructions+=6;goto B726a14;
case 0x726a17:c.instructions+=5;goto B726a17;
case 0x726a1a:c.instructions+=4;goto B726a1a;
case 0x726a1d:c.instructions+=3;goto B726a1d;
case 0x726a20:c.instructions+=2;goto B726a20;
case 0x726a23:c.instructions+=1;goto B726a23;
case 0x726a28:goto L726a28;
case 0x726a2b:c.instructions+=3;goto B726a2b;
case 0x726a2c:c.instructions+=2;goto B726a2c;
case 0x726a2f:c.instructions+=1;goto B726a2f;
case 0x726a34:goto L726a34;
case 0x726a39:goto L726a39;
case 0x726a3c:c.instructions+=6;goto B726a3c;
case 0x726a3f:c.instructions+=5;goto B726a3f;
case 0x726a42:c.instructions+=4;goto B726a42;
case 0x726a45:c.instructions+=3;goto B726a45;
case 0x726a47:c.instructions+=2;goto B726a47;
case 0x726a48:c.instructions+=1;goto B726a48;
case 0x726a4d:goto L726a4d;
case 0x726a50:c.instructions+=5;goto B726a50;
case 0x726a53:c.instructions+=4;goto B726a53;
case 0x726a56:c.instructions+=3;goto B726a56;
case 0x726a58:c.instructions+=2;goto B726a58;
case 0x726a59:c.instructions+=1;goto B726a59;
case 0x726a5e:goto L726a5e;
case 0x726a61:c.instructions+=6;goto B726a61;
case 0x726a64:c.instructions+=5;goto B726a64;
case 0x726a67:c.instructions+=4;goto B726a67;
case 0x726a6a:c.instructions+=3;goto B726a6a;
case 0x726a6d:c.instructions+=2;goto B726a6d;
case 0x726a70:c.instructions+=1;goto B726a70;
case 0x726a75:goto L726a75;
case 0x726a78:c.instructions+=3;goto B726a78;
case 0x726a79:c.instructions+=2;goto B726a79;
case 0x726a7c:c.instructions+=1;goto B726a7c;
case 0x726a81:goto L726a81;
case 0x726a86:goto L726a86;
case 0x726a89:c.instructions+=6;goto B726a89;
case 0x726a8c:c.instructions+=5;goto B726a8c;
case 0x726a8f:c.instructions+=4;goto B726a8f;
case 0x726a92:c.instructions+=3;goto B726a92;
case 0x726a94:c.instructions+=2;goto B726a94;
case 0x726a95:c.instructions+=1;goto B726a95;
case 0x726a9a:goto L726a9a;
case 0x726a9d:c.instructions+=8;goto B726a9d;
case 0x726aa0:c.instructions+=7;goto B726aa0;
case 0x726aa3:c.instructions+=6;goto B726aa3;
case 0x726aa6:c.instructions+=5;goto B726aa6;
case 0x726aa9:c.instructions+=4;goto B726aa9;
case 0x726aac:c.instructions+=3;goto B726aac;
case 0x726aae:c.instructions+=2;goto B726aae;
case 0x726aaf:c.instructions+=1;goto B726aaf;
case 0x726ab4:goto L726ab4;
case 0x726ab7:c.instructions+=5;goto B726ab7;
case 0x726aba:c.instructions+=4;goto B726aba;
case 0x726abd:c.instructions+=3;goto B726abd;
case 0x726abf:c.instructions+=2;goto B726abf;
case 0x726ac0:c.instructions+=1;goto B726ac0;
case 0x726ac5:goto L726ac5;
case 0x726ac8:c.instructions+=2;goto B726ac8;
case 0x726acb:c.instructions+=1;goto B726acb;
case 0x726ad0:goto L726ad0;
case 0x726ad3:c.instructions+=3;goto B726ad3;
case 0x726ad4:c.instructions+=2;goto B726ad4;
case 0x726ad7:c.instructions+=1;goto B726ad7;
case 0x726adc:goto L726adc;
case 0x726adf:c.instructions+=1;goto B726adf;
case 0x726ae4:goto L726ae4;
case 0x726ae7:c.instructions+=6;goto B726ae7;
case 0x726aea:c.instructions+=5;goto B726aea;
case 0x726aed:c.instructions+=4;goto B726aed;
case 0x726af0:c.instructions+=3;goto B726af0;
case 0x726af2:c.instructions+=2;goto B726af2;
case 0x726af3:c.instructions+=1;goto B726af3;
case 0x726af8:goto L726af8;
case 0x726afb:c.instructions+=2;goto B726afb;
case 0x726afe:c.instructions+=1;goto B726afe;
case 0x726b03:goto L726b03;
case 0x726b06:c.instructions+=3;goto B726b06;
case 0x726b07:c.instructions+=2;goto B726b07;
case 0x726b0a:c.instructions+=1;goto B726b0a;
case 0x726b0f:goto L726b0f;
case 0x726b12:c.instructions+=1;goto B726b12;
case 0x726b14:goto L726b14;
case 0x726b17:c.instructions+=6;goto B726b17;
case 0x726b1a:c.instructions+=5;goto B726b1a;
case 0x726b1d:c.instructions+=4;goto B726b1d;
case 0x726b20:c.instructions+=3;goto B726b20;
case 0x726b22:c.instructions+=2;goto B726b22;
case 0x726b23:c.instructions+=1;goto B726b23;
case 0x726b28:goto L726b28;
case 0x726b2b:c.instructions+=7;goto B726b2b;
case 0x726b2e:c.instructions+=6;goto B726b2e;
case 0x726b31:c.instructions+=5;goto B726b31;
case 0x726b34:c.instructions+=4;goto B726b34;
case 0x726b37:c.instructions+=3;goto B726b37;
case 0x726b39:c.instructions+=2;goto B726b39;
case 0x726b3a:c.instructions+=1;goto B726b3a;
case 0x726b3f:goto L726b3f;
case 0x726b42:c.instructions+=3;goto B726b42;
case 0x726b45:c.instructions+=2;goto B726b45;
case 0x726b48:c.instructions+=1;goto B726b48;
case 0x726b4d:goto L726b4d;
case 0x726b50:c.instructions+=3;goto B726b50;
case 0x726b51:c.instructions+=2;goto B726b51;
case 0x726b54:c.instructions+=1;goto B726b54;
case 0x726b59:goto L726b59;
case 0x726b5c:c.instructions+=1;goto B726b5c;
case 0x726b5e:goto L726b5e;
case 0x726b61:c.instructions+=2;goto B726b61;
case 0x726b64:c.instructions+=1;goto B726b64;
case 0x726b69:goto L726b69;
case 0x726b6b:goto L726b6b;
case 0x726b6e:c.instructions+=2;goto B726b6e;
case 0x726b71:c.instructions+=1;goto B726b71;
case 0x726b76:goto L726b76;
case 0x726b77:goto L726b77;
case 0x726b7a:c.instructions+=2;goto B726b7a;
case 0x726b7c:c.instructions+=1;goto B726b7c;
case 0x726b7e:goto L726b7e;
case 0x726b81:c.instructions+=3;goto B726b81;
case 0x726b84:c.instructions+=2;goto B726b84;
case 0x726b87:c.instructions+=1;goto B726b87;
case 0x726b89:goto L726b89;
case 0x726b8c:c.instructions+=6;goto B726b8c;
case 0x726b8f:c.instructions+=5;goto B726b8f;
case 0x726b90:c.instructions+=4;goto B726b90;
case 0x726b97:c.instructions+=3;goto B726b97;
case 0x726b98:c.instructions+=2;goto B726b98;
case 0x726b9b:c.instructions+=1;goto B726b9b;
case 0x726ba0:goto L726ba0;
case 0x726ba3:c.instructions+=10;goto B726ba3;
case 0x726ba6:c.instructions+=9;goto B726ba6;
case 0x726ba9:c.instructions+=8;goto B726ba9;
case 0x726bac:c.instructions+=7;goto B726bac;
case 0x726baf:c.instructions+=6;goto B726baf;
case 0x726bb2:c.instructions+=5;goto B726bb2;
case 0x726bb3:c.instructions+=4;goto B726bb3;
case 0x726bba:c.instructions+=3;goto B726bba;
case 0x726bbb:c.instructions+=2;goto B726bbb;
case 0x726bbe:c.instructions+=1;goto B726bbe;
case 0x726bc3:goto L726bc3;
case 0x726bc6:c.instructions+=1;goto B726bc6;
case 0x726bc8:goto L726bc8;
case 0x726bc9:c.instructions+=4;goto B726bc9;
case 0x726bd0:c.instructions+=3;goto B726bd0;
case 0x726bd1:c.instructions+=2;goto B726bd1;
case 0x726bd4:c.instructions+=1;goto B726bd4;
case 0x726bd9:goto L726bd9;
case 0x726bdc:goto L726bdc;
case 0x726bdf:c.instructions+=2;goto B726bdf;
case 0x726be2:c.instructions+=1;goto B726be2;
case 0x726be5:goto L726be5;
case 0x726be8:c.instructions+=5;goto B726be8;
case 0x726bef:c.instructions+=4;goto B726bef;
case 0x726bf2:c.instructions+=3;goto B726bf2;
case 0x726bf5:c.instructions+=2;goto B726bf5;
case 0x726bf8:c.instructions+=1;goto B726bf8;
case 0x726bfe:goto L726bfe;
case 0x726c01:goto L726c01;
case 0x726c07:c.instructions+=5;goto B726c07;
case 0x726c0b:c.instructions+=4;goto B726c0b;
case 0x726c0f:c.instructions+=3;goto B726c0f;
case 0x726c11:c.instructions+=2;goto B726c11;
case 0x726c12:c.instructions+=1;goto B726c12;
case 0x726c17:goto L726c17;
case 0x726c19:c.instructions+=3;goto B726c19;
case 0x726c1a:c.instructions+=2;goto B726c1a;
case 0x726c1b:c.instructions+=1;goto B726c1b;
case 0x726c1d:goto L726c1d;
case 0x726c21:c.instructions+=7;goto B726c21;
case 0x726c22:c.instructions+=6;goto B726c22;
case 0x726c26:c.instructions+=5;goto B726c26;
case 0x726c27:c.instructions+=4;goto B726c27;
case 0x726c2a:c.instructions+=3;goto B726c2a;
case 0x726c2c:c.instructions+=2;goto B726c2c;
case 0x726c2d:c.instructions+=1;goto B726c2d;
case 0x726c32:goto L726c32;
case 0x726c33:c.instructions+=6;goto B726c33;
case 0x726c34:c.instructions+=5;goto B726c34;
case 0x726c37:c.instructions+=4;goto B726c37;
case 0x726c3a:c.instructions+=3;goto B726c3a;
case 0x726c3c:c.instructions+=2;goto B726c3c;
case 0x726c3d:c.instructions+=1;goto B726c3d;
case 0x726c42:goto L726c42;
case 0x726c43:c.instructions+=4;goto B726c43;
case 0x726c44:c.instructions+=3;goto B726c44;
case 0x726c47:c.instructions+=2;goto B726c47;
case 0x726c4a:c.instructions+=1;goto B726c4a;
case 0x726c4f:goto L726c4f;
case 0x726c51:c.instructions+=4;goto B726c51;
case 0x726c54:c.instructions+=3;goto B726c54;
case 0x726c57:c.instructions+=2;goto B726c57;
case 0x726c58:c.instructions+=1;goto B726c58;
case 0x726c5d:goto L726c5d;
case 0x726c60:c.instructions+=2;goto B726c60;
case 0x726c63:c.instructions+=1;goto B726c63;
case 0x726c65:goto L726c65;
case 0x726c68:c.instructions+=5;goto B726c68;
case 0x726c6e:c.instructions+=4;goto B726c6e;
case 0x726c78:c.instructions+=3;goto B726c78;
case 0x726c7d:c.instructions+=2;goto B726c7d;
case 0x726c80:c.instructions+=1;goto B726c80;
case 0x726c85:goto L726c85;
case 0x726c8a:c.instructions+=4;goto B726c8a;
case 0x726c8e:c.instructions+=3;goto B726c8e;
case 0x726c8f:c.instructions+=2;goto B726c8f;
case 0x726c90:c.instructions+=1;goto B726c90;
case 0x726c92:goto L726c92;
case 0x726c95:c.instructions+=2;goto B726c95;
case 0x726c9c:c.instructions+=1;goto B726c9c;
case 0x726c9f:goto L726c9f;
case 0x726ca1:c.instructions+=2;goto B726ca1;
case 0x726ca3:c.instructions+=1;goto B726ca3;
case 0x726ca5:goto L726ca5;
case 0x726ca7:c.instructions+=2;goto B726ca7;
case 0x726caa:c.instructions+=1;goto B726caa;
case 0x726cab:goto L726cab;
case 0x726cad:c.instructions+=6;goto B726cad;
case 0x726cb0:c.instructions+=5;goto B726cb0;
case 0x726cb2:c.instructions+=4;goto B726cb2;
case 0x726cb4:c.instructions+=3;goto B726cb4;
case 0x726cb7:c.instructions+=2;goto B726cb7;
case 0x726cb8:c.instructions+=1;goto B726cb8;
case 0x726cba:goto L726cba;
case 0x726cc1:c.instructions+=5;goto B726cc1;
case 0x726cc2:c.instructions+=4;goto B726cc2;
case 0x726cc3:c.instructions+=3;goto B726cc3;
case 0x726cc4:c.instructions+=2;goto B726cc4;
case 0x726cc5:c.instructions+=1;goto B726cc5;
case 0x726cee:goto L726cee;
case 0x726cf3:c.instructions+=5;goto B726cf3;
case 0x726cf4:c.instructions+=4;goto B726cf4;
case 0x726cf7:c.instructions+=3;goto B726cf7;
case 0x726cfa:c.instructions+=2;goto B726cfa;
case 0x726cfb:c.instructions+=1;goto B726cfb;
case 0x726d00:goto L726d00;
case 0x726d06:c.instructions+=9;goto B726d06;
case 0x726d09:c.instructions+=8;goto B726d09;
case 0x726d0c:c.instructions+=7;goto B726d0c;
case 0x726d0e:c.instructions+=6;goto B726d0e;
case 0x726d0f:c.instructions+=5;goto B726d0f;
case 0x726d10:c.instructions+=4;goto B726d10;
case 0x726d15:c.instructions+=3;goto B726d15;
case 0x726d1b:c.instructions+=2;goto B726d1b;
case 0x726d21:c.instructions+=1;goto B726d21;
case 0x726d26:goto L726d26;
case 0x726d2b:c.instructions+=3;goto B726d2b;
case 0x726d2e:c.instructions+=2;goto B726d2e;
case 0x726d2f:c.instructions+=1;goto B726d2f;
case 0x726d34:goto L726d34;
case 0x726d3a:c.instructions+=5;goto B726d3a;
case 0x726d3d:c.instructions+=4;goto B726d3d;
case 0x726d3e:c.instructions+=3;goto B726d3e;
case 0x726d3f:c.instructions+=2;goto B726d3f;
case 0x726d44:c.instructions+=1;goto B726d44;
case 0x726d49:goto L726d49;
case 0x726d4c:c.instructions+=3;goto B726d4c;
case 0x726d56:c.instructions+=2;goto B726d56;
case 0x726d57:c.instructions+=1;goto B726d57;
case 0x726d58:goto L726d58;
case 0x726d5f:c.instructions+=1;goto B726d5f;
case 0x726d61:goto L726d61;
case 0x726d62:c.instructions+=2;goto B726d62;
case 0x726d68:c.instructions+=1;goto B726d68;
case 0x726d6d:goto L726d6d;
case 0x726d6f:c.instructions+=3;goto B726d6f;
case 0x726d75:c.instructions+=2;goto B726d75;
case 0x726d76:c.instructions+=1;goto B726d76;
case 0x726d78:goto L726d78;
case 0x726d79:goto L726d79;
case 0x726d7e:c.instructions+=3;goto B726d7e;
case 0x726d81:c.instructions+=2;goto B726d81;
case 0x726d83:c.instructions+=1;goto B726d83;
case 0x726d85:goto L726d85;
case 0x726d87:c.instructions+=2;goto B726d87;
case 0x726d88:c.instructions+=1;goto B726d88;
case 0x726d8d:goto L726d8d;
case 0x726d8f:c.instructions+=3;goto B726d8f;
case 0x726d90:c.instructions+=2;goto B726d90;
case 0x726d92:c.instructions+=1;goto B726d92;
case 0x726d94:goto L726d94;
case 0x726d95:c.instructions+=2;goto B726d95;
case 0x726d9b:c.instructions+=1;goto B726d9b;
case 0x726d9d:goto L726d9d;
case 0x726d9e:goto L726d9e;
case 0x726da4:c.instructions+=1;goto B726da4;
case 0x726da9:goto L726da9;
case 0x726db0:c.instructions+=2;goto B726db0;
case 0x726db1:c.instructions+=1;goto B726db1;
case 0x726db2:goto L726db2;
case 0x726db3:goto L726db3;
case 0x726db4:c.instructions+=10;goto B726db4;
case 0x726db6:c.instructions+=9;goto B726db6;
case 0x726db9:c.instructions+=8;goto B726db9;
case 0x726dbe:c.instructions+=7;goto B726dbe;
case 0x726dbf:c.instructions+=6;goto B726dbf;
case 0x726dc0:c.instructions+=5;goto B726dc0;
case 0x726dc3:c.instructions+=4;goto B726dc3;
case 0x726dc6:c.instructions+=3;goto B726dc6;
case 0x726dca:c.instructions+=2;goto B726dca;
case 0x726dcd:c.instructions+=1;goto B726dcd;
case 0x726dcf:goto L726dcf;
case 0x726dd4:c.instructions+=1;goto B726dd4;
case 0x726dd9:goto L726dd9;
case 0x726dda:c.instructions+=2;goto B726dda;
case 0x726de0:c.instructions+=1;goto B726de0;
case 0x726de3:goto L726de3;
case 0x726de8:c.instructions+=1;goto B726de8;
case 0x726ded:goto L726ded;
case 0x726def:c.instructions+=3;goto B726def;
case 0x726df1:c.instructions+=2;goto B726df1;
case 0x726df2:c.instructions+=1;goto B726df2;
case 0x726df8:goto L726df8;
case 0x726dfd:c.instructions+=10;goto B726dfd;
case 0x726dff:c.instructions+=9;goto B726dff;
case 0x726e01:c.instructions+=8;goto B726e01;
case 0x726e02:c.instructions+=7;goto B726e02;
case 0x726e04:c.instructions+=6;goto B726e04;
case 0x726e06:c.instructions+=5;goto B726e06;
case 0x726e09:c.instructions+=4;goto B726e09;
case 0x726e0b:c.instructions+=3;goto B726e0b;
case 0x726e0c:c.instructions+=2;goto B726e0c;
case 0x726e0e:c.instructions+=1;goto B726e0e;
case 0x726e11:goto L726e11;
case 0x726e13:goto L726e13;
case 0x726e1a:c.instructions+=6;goto B726e1a;
case 0x726e1d:c.instructions+=5;goto B726e1d;
case 0x726e1e:c.instructions+=4;goto B726e1e;
case 0x726e22:c.instructions+=3;goto B726e22;
case 0x726e24:c.instructions+=2;goto B726e24;
case 0x726e25:c.instructions+=1;goto B726e25;
case 0x726e2a:goto L726e2a;
case 0x726e2c:c.instructions+=3;goto B726e2c;
case 0x726e2d:c.instructions+=2;goto B726e2d;
case 0x726e2e:c.instructions+=1;goto B726e2e;
case 0x726e30:goto L726e30;
case 0x726e37:c.instructions+=1;goto B726e37;
case 0x726e39:goto L726e39;
case 0x726e3d:c.instructions+=3;goto B726e3d;
case 0x726e3f:c.instructions+=2;goto B726e3f;
case 0x726e40:c.instructions+=1;goto B726e40;
case 0x726e45:goto L726e45;
case 0x726e47:c.instructions+=3;goto B726e47;
case 0x726e48:c.instructions+=2;goto B726e48;
case 0x726e49:c.instructions+=1;goto B726e49;
case 0x726e4b:goto L726e4b;
case 0x726e4f:c.instructions+=1;goto B726e4f;
case 0x726e52:goto L726e52;
case 0x726e56:c.instructions+=4;goto B726e56;
case 0x726e58:c.instructions+=3;goto B726e58;
case 0x726e5b:c.instructions+=2;goto B726e5b;
case 0x726e5c:c.instructions+=1;goto B726e5c;
case 0x726e61:goto L726e61;
case 0x726e63:c.instructions+=3;goto B726e63;
case 0x726e64:c.instructions+=2;goto B726e64;
case 0x726e65:c.instructions+=1;goto B726e65;
case 0x726e67:goto L726e67;
case 0x726e6a:goto L726e6a;
case 0x726e6c:c.instructions+=3;goto B726e6c;
case 0x726e6f:c.instructions+=2;goto B726e6f;
case 0x726e72:c.instructions+=1;goto B726e72;
case 0x726e74:goto L726e74;
case 0x726e77:c.instructions+=2;goto B726e77;
case 0x726e7a:c.instructions+=1;goto B726e7a;
case 0x726e7d:goto L726e7d;
case 0x726e80:c.instructions+=4;goto B726e80;
case 0x726e83:c.instructions+=3;goto B726e83;
case 0x726e85:c.instructions+=2;goto B726e85;
case 0x726e86:c.instructions+=1;goto B726e86;
case 0x726e8b:goto L726e8b;
case 0x726e8d:c.instructions+=3;goto B726e8d;
case 0x726e8e:c.instructions+=2;goto B726e8e;
case 0x726e8f:c.instructions+=1;goto B726e8f;
case 0x726e91:goto L726e91;
case 0x726e94:c.instructions+=3;goto B726e94;
case 0x726e9b:c.instructions+=2;goto B726e9b;
case 0x726e9c:c.instructions+=1;goto B726e9c;
case 0x726e9e:goto L726e9e;
case 0x726ea0:c.instructions+=2;goto B726ea0;
case 0x726ea3:c.instructions+=1;goto B726ea3;
case 0x726ea8:goto L726ea8;
case 0x726eac:c.instructions+=6;goto B726eac;
case 0x726eaf:c.instructions+=5;goto B726eaf;
case 0x726eb0:c.instructions+=4;goto B726eb0;
case 0x726eb3:c.instructions+=3;goto B726eb3;
case 0x726eb4:c.instructions+=2;goto B726eb4;
case 0x726eb7:c.instructions+=1;goto B726eb7;
case 0x726eb9:goto L726eb9;
case 0x726ebd:c.instructions+=4;goto B726ebd;
case 0x726ebf:c.instructions+=3;goto B726ebf;
case 0x726ec0:c.instructions+=2;goto B726ec0;
case 0x726ec6:c.instructions+=1;goto B726ec6;
case 0x726ecb:goto L726ecb;
case 0x726ecd:c.instructions+=3;goto B726ecd;
case 0x726ece:c.instructions+=2;goto B726ece;
case 0x726ecf:c.instructions+=1;goto B726ecf;
case 0x726ed1:goto L726ed1;
case 0x726ed4:c.instructions+=3;goto B726ed4;
case 0x726edb:c.instructions+=2;goto B726edb;
case 0x726edc:c.instructions+=1;goto B726edc;
case 0x726ede:goto L726ede;
case 0x726edf:c.instructions+=5;goto B726edf;
case 0x726ee2:c.instructions+=4;goto B726ee2;
case 0x726ee8:c.instructions+=3;goto B726ee8;
case 0x726eeb:c.instructions+=2;goto B726eeb;
case 0x726eee:c.instructions+=1;goto B726eee;
case 0x726ef3:goto L726ef3;
case 0x726ef8:c.instructions+=6;goto B726ef8;
case 0x726efb:c.instructions+=5;goto B726efb;
case 0x726efe:c.instructions+=4;goto B726efe;
case 0x726f08:c.instructions+=3;goto B726f08;
case 0x726f0f:c.instructions+=2;goto B726f0f;
case 0x726f11:c.instructions+=1;goto B726f11;
case 0x726f12:goto L726f12;
case 0x726f13:c.instructions+=3;goto B726f13;
case 0x726f14:c.instructions+=2;goto B726f14;
case 0x726f15:c.instructions+=1;goto B726f15;
case 0x726f16:goto L726f16;
case 0x726f17:c.instructions+=8;goto B726f17;
case 0x726f1b:c.instructions+=7;goto B726f1b;
case 0x726f1c:c.instructions+=6;goto B726f1c;
case 0x726f20:c.instructions+=5;goto B726f20;
case 0x726f21:c.instructions+=4;goto B726f21;
case 0x726f22:c.instructions+=3;goto B726f22;
case 0x726f23:c.instructions+=2;goto B726f23;
case 0x726f25:c.instructions+=1;goto B726f25;
case 0x726f2a:goto L726f2a;
case 0x726f2f:c.instructions+=8;goto B726f2f;
case 0x726f30:c.instructions+=7;goto B726f30;
case 0x726f33:c.instructions+=6;goto B726f33;
case 0x726f34:c.instructions+=5;goto B726f34;
case 0x726f37:c.instructions+=4;goto B726f37;
case 0x726f39:c.instructions+=3;goto B726f39;
case 0x726f3b:c.instructions+=2;goto B726f3b;
case 0x726f3d:c.instructions+=1;goto B726f3d;
case 0x726f3f:goto L726f3f;
case 0x726f41:c.instructions+=1;goto B726f41;
case 0x726f43:goto L726f43;
case 0x726f45:c.instructions+=1;goto B726f45;
case 0x726f47:goto L726f47;
case 0x726f49:c.instructions+=1;goto B726f49;
case 0x726f4b:goto L726f4b;
case 0x726f4d:c.instructions+=1;goto B726f4d;
case 0x726f4f:goto L726f4f;
case 0x726f55:c.instructions+=4;goto B726f55;
case 0x726f57:c.instructions+=3;goto B726f57;
case 0x726f59:c.instructions+=2;goto B726f59;
case 0x726f5b:c.instructions+=1;goto B726f5b;
case 0x726f5d:goto L726f5d;
case 0x726f5f:c.instructions+=1;goto B726f5f;
case 0x726f61:goto L726f61;
case 0x726f63:c.instructions+=2;goto B726f63;
case 0x726f64:c.instructions+=1;goto B726f64;
case 0x726f66:goto L726f66;
case 0x726f68:c.instructions+=1;goto B726f68;
case 0x726f6a:goto L726f6a;
case 0x726f6c:c.instructions+=2;goto B726f6c;
case 0x726f6e:c.instructions+=1;goto B726f6e;
case 0x726f70:goto L726f70;
case 0x726f72:c.instructions+=1;goto B726f72;
case 0x726f74:goto L726f74;
case 0x726f76:c.instructions+=1;goto B726f76;
case 0x726f78:goto L726f78;
case 0x726f7a:c.instructions+=1;goto B726f7a;
case 0x726f7c:goto L726f7c;
case 0x726f7d:c.instructions+=1;goto B726f7d;
case 0x726f82:goto L726f82;
case 0x726f83:goto L726f83;
case 0x726f88:c.instructions+=3;goto B726f88;
case 0x726f8a:c.instructions+=2;goto B726f8a;
case 0x726f8d:c.instructions+=1;goto B726f8d;
case 0x726f8f:goto L726f8f;
case 0x726f94:c.instructions+=5;goto B726f94;
case 0x726f97:c.instructions+=4;goto B726f97;
case 0x726f9c:c.instructions+=3;goto B726f9c;
case 0x726f9f:c.instructions+=2;goto B726f9f;
case 0x726fa1:c.instructions+=1;goto B726fa1;
case 0x726fa3:goto L726fa3;
case 0x726fa4:c.instructions+=1;goto B726fa4;
case 0x726fa9:goto L726fa9;
case 0x726fae:c.instructions+=2;goto B726fae;
case 0x726faf:c.instructions+=1;goto B726faf;
case 0x726fb2:goto L726fb2;
case 0x726fb3:c.instructions+=4;goto B726fb3;
case 0x726fb4:c.instructions+=3;goto B726fb4;
case 0x726fb6:c.instructions+=2;goto B726fb6;
case 0x726fb7:c.instructions+=1;goto B726fb7;
case 0x726fb8:goto L726fb8;
case 0x726fb9:c.instructions+=9;goto B726fb9;
case 0x726fbb:c.instructions+=8;goto B726fbb;
case 0x726fbc:c.instructions+=7;goto B726fbc;
case 0x726fbd:c.instructions+=6;goto B726fbd;
case 0x726fc0:c.instructions+=5;goto B726fc0;
case 0x726fc1:c.instructions+=4;goto B726fc1;
case 0x726fc4:c.instructions+=3;goto B726fc4;
case 0x726fc5:c.instructions+=2;goto B726fc5;
case 0x726fc8:c.instructions+=1;goto B726fc8;
case 0x726fcd:goto L726fcd;
case 0x726fd0:c.instructions+=5;goto B726fd0;
case 0x726fd3:c.instructions+=4;goto B726fd3;
case 0x726fd6:c.instructions+=3;goto B726fd6;
case 0x726fd8:c.instructions+=2;goto B726fd8;
case 0x726fda:c.instructions+=1;goto B726fda;
case 0x726fdc:goto L726fdc;
case 0x726fdd:c.instructions+=6;goto B726fdd;
case 0x726fe0:c.instructions+=5;goto B726fe0;
case 0x726fe1:c.instructions+=4;goto B726fe1;
case 0x726fe7:c.instructions+=3;goto B726fe7;
case 0x726fea:c.instructions+=2;goto B726fea;
case 0x726fee:c.instructions+=1;goto B726fee;
case 0x726ff0:goto L726ff0;
case 0x726ff3:c.instructions+=1;goto B726ff3;
case 0x726ff5:goto L726ff5;
case 0x726ff6:goto L726ff6;
case 0x726ffc:c.instructions+=2;goto B726ffc;
case 0x726ffd:c.instructions+=1;goto B726ffd;
case 0x726fff:goto L726fff;
default:missing_instruction(c.pc);}
B726000:L726000:{c.instructions+=8;NFSU2_TR(0x726000);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x88780078ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B726005:{NFSU2_TR(0x726005);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B726008:{NFSU2_TR(0x726008);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B726009:{NFSU2_TR(0x726009);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff7ull))));
}
B72600c:{NFSU2_TR(0x72600c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B72600d:{NFSU2_TR(0x72600d);
__builtin_memmove((R+28),(R+4),4);
}
B72600f:{NFSU2_TR(0x72600f);
__builtin_memmove(gp(0x8b4778),(R+12),4);
}
B726015:{NFSU2_TR(0x726015);
{goto L7260e0;}
}
B72601a:L72601a:{c.instructions+=4;NFSU2_TR(0x72601a);
__builtin_memmove((R+0),gp(0x8b4778),4);
}
B72601f:{NFSU2_TR(0x72601f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B726021:{NFSU2_TR(0x726021);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726023:{NFSU2_TR(0x726023);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726028ull));
TAIL_STATIC(0x725c7du,725);
}
B726028:L726028:{c.instructions+=3;NFSU2_TR(0x726028);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726029:{NFSU2_TR(0x726029);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4778),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72602f:{NFSU2_TR(0x72602f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726032ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B726032:L726032:{c.instructions+=6;NFSU2_TR(0x726032);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726034:{NFSU2_TR(0x726034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B726035:{NFSU2_TR(0x726035);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B726038:{NFSU2_TR(0x726038);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726039:{NFSU2_TR(0x726039);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72603a:{NFSU2_TR(0x72603a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72603full));
TAIL_STATIC(0x727030u,727);
}
B72603f:L72603f:{c.instructions+=14;NFSU2_TR(0x72603f);
__builtin_memmove((R+0),gp(0x8b4778),4);
}
B726044:{NFSU2_TR(0x726044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726045:{NFSU2_TR(0x726045);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726046:{NFSU2_TR(0x726046);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726049:{NFSU2_TR(0x726049);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72604a:{NFSU2_TR(0x72604a);
u8 U[4];
w4(U+0,u32(0x8b477cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72604f:{NFSU2_TR(0x72604f);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B726051:{NFSU2_TR(0x726051);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+8),(U+0),4);
}
B726054:{NFSU2_TR(0x726054);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B726055:{NFSU2_TR(0x726055);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726056:{NFSU2_TR(0x726056);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726059:{NFSU2_TR(0x726059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B72605b:{NFSU2_TR(0x72605b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72605c:{NFSU2_TR(0x72605c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72605full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72605f:L72605f:{c.instructions+=2;NFSU2_TR(0x72605f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B726061:{NFSU2_TR(0x726061);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7260e0;}}
}
B726063:L726063:{c.instructions+=7;NFSU2_TR(0x726063);
w4(R+0,u32(m2(0x8b44c6)));
}
B72606a:{NFSU2_TR(0x72606a);
w4(R+4,u32(m1(0x8b44df)));
}
B726071:{NFSU2_TR(0x726071);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726072:{NFSU2_TR(0x726072);
w4(R+0,u32(m1(0x8b44e0)));
}
B726079:{NFSU2_TR(0x726079);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B72607b:{NFSU2_TR(0x72607b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72607c:{NFSU2_TR(0x72607c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726081ull));
TAIL_STATIC(0x725a85u,725);
}
B726081:L726081:{c.instructions+=4;NFSU2_TR(0x726081);
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
B726083:{NFSU2_TR(0x726083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726084:{NFSU2_TR(0x726084);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726085:{NFSU2_TR(0x726085);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7260e0;}}
}
B726087:L726087:{c.instructions+=13;NFSU2_TR(0x726087);
__builtin_memmove((R+0),gp(0x8b4780),4);
}
B72608c:{NFSU2_TR(0x72608c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B72608e:{NFSU2_TR(0x72608e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72608f:{NFSU2_TR(0x72608f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726090:{NFSU2_TR(0x726090);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726091:{NFSU2_TR(0x726091);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B726094:{NFSU2_TR(0x726094);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726095:{NFSU2_TR(0x726095);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B726098:{NFSU2_TR(0x726098);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726099:{NFSU2_TR(0x726099);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4784),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72609f:{NFSU2_TR(0x72609f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7260a0:{NFSU2_TR(0x7260a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7260a1:{NFSU2_TR(0x7260a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7260a4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7260a4:L7260a4:{c.instructions+=2;NFSU2_TR(0x7260a4);
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
B7260a6:{NFSU2_TR(0x7260a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7260ce;}}
}
B7260a8:L7260a8:{c.instructions+=3;NFSU2_TR(0x7260a8);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4784),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7260ae:{NFSU2_TR(0x7260ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7260b1:{NFSU2_TR(0x7260b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7260b6ull));
TAIL_STATIC(0x727030u,727);
}
B7260b6:L7260b6:{c.instructions+=10;NFSU2_TR(0x7260b6);
__builtin_memmove((R+0),gp(0x8b4780),4);
}
B7260bb:{NFSU2_TR(0x7260bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7260bc:{NFSU2_TR(0x7260bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7260bd:{NFSU2_TR(0x7260bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7260bf:{NFSU2_TR(0x7260bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7260c0:{NFSU2_TR(0x7260c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7260c1:{NFSU2_TR(0x7260c1);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4784),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7260c7:{NFSU2_TR(0x7260c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7260ca:{NFSU2_TR(0x7260ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7260cb:{NFSU2_TR(0x7260cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7260ceull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7260ce:L7260ce:{c.instructions+=7;NFSU2_TR(0x7260ce);
__builtin_memmove((R+0),gp(0x8b4780),4);
}
B7260d3:{NFSU2_TR(0x7260d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7260d5:{NFSU2_TR(0x7260d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7260d6:{NFSU2_TR(0x7260d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7260d7:{NFSU2_TR(0x7260d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7260d8:{NFSU2_TR(0x7260d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7260d9:{NFSU2_TR(0x7260d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7260dcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7260dc:L7260dc:{c.instructions+=2;NFSU2_TR(0x7260dc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7260de:{NFSU2_TR(0x7260de);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7260f0;}}
}
B7260e0:L7260e0:{c.instructions+=3;NFSU2_TR(0x7260e0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7260e2:{NFSU2_TR(0x7260e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7260e5:{NFSU2_TR(0x7260e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7260eaull));
TAIL_STATIC(0x725bb5u,725);
}
B7260ea:L7260ea:{c.instructions+=4;NFSU2_TR(0x7260ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7260eb:{NFSU2_TR(0x7260eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7260ec:{NFSU2_TR(0x7260ec);
__builtin_memmove((R+0),(R+28),4);
}
B7260ee:{NFSU2_TR(0x7260ee);
{goto L7260f2;}
}
B7260f0:L7260f0:{c.instructions+=1;NFSU2_TR(0x7260f0);
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
B7260f2:L7260f2:{c.instructions+=5;NFSU2_TR(0x7260f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7260f3:{NFSU2_TR(0x7260f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7260f4:{NFSU2_TR(0x7260f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7260f5:{NFSU2_TR(0x7260f5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7260f6:{NFSU2_TR(0x7260f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7260f7:L7260f7:{c.instructions+=9;NFSU2_TR(0x7260f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7260f8:{NFSU2_TR(0x7260f8);
__builtin_memmove((R+20),(R+16),4);
}
B7260fa:{NFSU2_TR(0x7260fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B7260fd:{NFSU2_TR(0x7260fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7260fe:{NFSU2_TR(0x7260fe);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B726100:{NFSU2_TR(0x726100);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b4778),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B726106:{NFSU2_TR(0x726106);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726107:{NFSU2_TR(0x726107);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726108:{NFSU2_TR(0x726108);
if(r1(R+518)){{goto L7263b1;}}
}
B72610e:L72610e:{c.instructions+=6;NFSU2_TR(0x72610e);
__builtin_memmove((R+0),gp(0x8b4780),4);
}
B726113:{NFSU2_TR(0x726113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B726115:{NFSU2_TR(0x726115);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B726118:{NFSU2_TR(0x726118);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726119:{NFSU2_TR(0x726119);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72611a:{NFSU2_TR(0x72611a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72611dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72611d:L72611d:{c.instructions+=2;NFSU2_TR(0x72611d);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B726121:{NFSU2_TR(0x726121);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7263a0;}}
}
B726127:L726127:{c.instructions+=2;NFSU2_TR(0x726127);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b47c0),4);
w1(R+512,u8((r4(U+6))<(u32(0x64ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x64ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72612e:{NFSU2_TR(0x72612e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7263a0;}}
}
B726134:L726134:{c.instructions+=2;NFSU2_TR(0x726134);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
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
B726138:{NFSU2_TR(0x726138);
if(r1(R+518)){{goto L72638f;}}
}
B72613e:L72613e:{c.instructions+=1;NFSU2_TR(0x72613e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B726141:L726141:{c.instructions+=7;NFSU2_TR(0x726141);
__builtin_memmove((R+0),gp(0x8b4780),4);
}
B726146:{NFSU2_TR(0x726146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B726148:{NFSU2_TR(0x726148);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72614b:{NFSU2_TR(0x72614b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72614c:{NFSU2_TR(0x72614c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72614d:{NFSU2_TR(0x72614d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72614e:{NFSU2_TR(0x72614e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726151ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B726151:L726151:{c.instructions+=2;NFSU2_TR(0x726151);
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
B726153:{NFSU2_TR(0x726153);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7263b1;}}
}
B726159:L726159:{c.instructions+=3;NFSU2_TR(0x726159);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72615c:{NFSU2_TR(0x72615c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b4770),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B726162:{NFSU2_TR(0x726162);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L726195;}}
}
B726164:L726164:{c.instructions+=3;NFSU2_TR(0x726164);
s4(0x8b476c,u32(u32(m4(0x8b476c))+u32(u32(0x1ull))));
}
B72616a:{NFSU2_TR(0x72616a);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b476c),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B726171:{NFSU2_TR(0x726171);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72618d;}}
}
B726173:L726173:{c.instructions+=3;NFSU2_TR(0x726173);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726174:{NFSU2_TR(0x726174);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726176:{NFSU2_TR(0x726176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72617bull));
TAIL_STATIC(0x725bb5u,725);
}
B72617b:L72617b:{c.instructions+=3;NFSU2_TR(0x72617b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72617c:{NFSU2_TR(0x72617c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72617e:{NFSU2_TR(0x72617e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726183ull));
TAIL_STATIC(0x725f52u,725);
}
B726183:L726183:{c.instructions+=3;NFSU2_TR(0x726183);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726186:{NFSU2_TR(0x726186);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B726189:{NFSU2_TR(0x726189);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72618d:L72618d:{c.instructions+=2;NFSU2_TR(0x72618d);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
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
B726191:{NFSU2_TR(0x726191);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726141u);}goto L726141;}}
}
B726193:L726193:{c.instructions+=1;NFSU2_TR(0x726193);
{goto L7261a0;}
}
B726195:L726195:{c.instructions+=2;NFSU2_TR(0x726195);
__builtin_memmove(gp(0x8b4770),(R+0),4);
}
B72619a:{NFSU2_TR(0x72619a);
__builtin_memmove(gp(0x8b476c),(R+12),4);
}
B7261a0:L7261a0:{c.instructions+=11;NFSU2_TR(0x7261a0);
w4(R+4,u32(m1(0x8b475c)));
}
B7261a7:{NFSU2_TR(0x7261a7);
{u32 ea_=u32(u32(8487900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7261ad:{NFSU2_TR(0x7261ad);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7261af:{NFSU2_TR(0x7261af);
{u32 ea_=u32(u32(8487916u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7261b5:{NFSU2_TR(0x7261b5);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7261b5);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7261b5);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7261b7:{NFSU2_TR(0x7261b7);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7261bd:{NFSU2_TR(0x7261bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7261c0:{NFSU2_TR(0x7261c0);
w4(R+0,u32(m2(0x8b44c6)));
}
B7261c7:{NFSU2_TR(0x7261c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7261ca:{NFSU2_TR(0x7261ca);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B7261cd:{NFSU2_TR(0x7261cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7261d2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B7261d2:L7261d2:{c.instructions+=6;NFSU2_TR(0x7261d2);
__builtin_memmove((R+28),(R+0),4);
}
B7261d4:{NFSU2_TR(0x7261d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B7261d7:{NFSU2_TR(0x7261d7);
__builtin_memmove((R+0),gp(0x8b4788),4);
}
B7261dc:{NFSU2_TR(0x7261dc);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffffff0ull))));
}
B7261e2:{NFSU2_TR(0x7261e2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7261e4:{NFSU2_TR(0x7261e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7261e8;}}
}
B7261e6:L7261e6:{c.instructions+=1;NFSU2_TR(0x7261e6);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B7261e8:L7261e8:{c.instructions+=6;NFSU2_TR(0x7261e8);
__builtin_memmove((R+4),gp(0x8b4768),4);
}
B7261ee:{NFSU2_TR(0x7261ee);
__builtin_memmove((R+24),gp(0x8b4758),4);
}
B7261f4:{NFSU2_TR(0x7261f4);
__builtin_memmove((R+8),(R+28),4);
}
B7261f6:{NFSU2_TR(0x7261f6);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B7261f8:{NFSU2_TR(0x7261f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7261fb:{NFSU2_TR(0x7261fb);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L72620b;}}
}
B7261fd:L7261fd:{c.instructions+=4;NFSU2_TR(0x7261fd);
__builtin_memmove((R+12),(R+24),4);
}
B7261ff:{NFSU2_TR(0x7261ff);
w4(R+12,u32(0-u32(r4(R+12))));
}
B726201:{NFSU2_TR(0x726201);
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
B726203:{NFSU2_TR(0x726203);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7263b1;}}
}
B726209:L726209:{c.instructions+=1;NFSU2_TR(0x726209);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72620b:L72620b:{c.instructions+=2;NFSU2_TR(0x72620b);
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
B72620d:{NFSU2_TR(0x72620d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7263b1;}}
}
B726213:L726213:{c.instructions+=2;NFSU2_TR(0x726213);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B726215:{NFSU2_TR(0x726215);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72621c;}}
}
B726217:L726217:{c.instructions+=2;NFSU2_TR(0x726217);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72621a:{NFSU2_TR(0x72621a);
{goto L726224;}
}
B72621c:L72621c:{c.instructions+=3;NFSU2_TR(0x72621c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B72621e:{NFSU2_TR(0x72621e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726221:{NFSU2_TR(0x726221);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726224:L726224:{c.instructions+=2;NFSU2_TR(0x726224);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726227:{NFSU2_TR(0x726227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72622a:L72622a:{c.instructions+=4;NFSU2_TR(0x72622a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72622d:{NFSU2_TR(0x72622d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B726231:{NFSU2_TR(0x726231);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B726233:{NFSU2_TR(0x726233);
if(r1(R+518)){{goto L7262a4;}}
}
B726235:L726235:{c.instructions+=21;NFSU2_TR(0x726235);
w4(R+4,u32(m1(0x8b44df)));
}
B72623c:{NFSU2_TR(0x72623c);
w4(R+0,u32(m1(0x8b44e0)));
}
B726243:{NFSU2_TR(0x726243);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726244:{NFSU2_TR(0x726244);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726245:{NFSU2_TR(0x726245);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726246:{NFSU2_TR(0x726246);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B726249:{NFSU2_TR(0x726249);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72624a:{NFSU2_TR(0x72624a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B72624c:{NFSU2_TR(0x72624c);
__builtin_memmove((R+4),gp(0x8b4780),4);
}
B726252:{NFSU2_TR(0x726252);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B726254:{NFSU2_TR(0x726254);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+12),(U+0),4);
}
B726257:{NFSU2_TR(0x726257);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726258:{NFSU2_TR(0x726258);
__builtin_memmove((R+12),(R+0),4);
}
B72625a:{NFSU2_TR(0x72625a);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B72625e:{NFSU2_TR(0x72625e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B726261:{NFSU2_TR(0x726261);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B726263:{NFSU2_TR(0x726263);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726264:{NFSU2_TR(0x726264);
u8 U[7];
w1(R+512,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+523,u8(u32(r1(R+512))^u32(r1(U+6))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B726266:{NFSU2_TR(0x726266);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726267:{NFSU2_TR(0x726267);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726268:{NFSU2_TR(0x726268);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72626bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72626b:L72626b:{c.instructions+=4;NFSU2_TR(0x72626b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B72626e:{NFSU2_TR(0x72626e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72626f:{NFSU2_TR(0x72626f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726270:{NFSU2_TR(0x726270);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726275ull));
TAIL_STATIC(0x725c8eu,725);
}
B726275:L726275:{c.instructions+=15;NFSU2_TR(0x726275);
w4(R+8,u32(m1(0x8b44e0)));
}
B72627c:{NFSU2_TR(0x72627c);
w4(R+12,u32(m1(0x8b44df)));
}
B726283:{NFSU2_TR(0x726283);
__builtin_memmove((R+0),gp(0x8b4780),4);
}
B726288:{NFSU2_TR(0x726288);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B72628a:{NFSU2_TR(0x72628a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72628b:{NFSU2_TR(0x72628b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B72628e:{NFSU2_TR(0x72628e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72628f:{NFSU2_TR(0x72628f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B726291:{NFSU2_TR(0x726291);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726293:{NFSU2_TR(0x726293);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726295:{NFSU2_TR(0x726295);
u8 U[7];
w1(R+512,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+523,u8(u32(r1(R+512))^u32(r1(U+6))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B726297:{NFSU2_TR(0x726297);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726298:{NFSU2_TR(0x726298);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72629b:{NFSU2_TR(0x72629b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72629c:{NFSU2_TR(0x72629c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72629full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72629f:L72629f:{c.instructions+=2;NFSU2_TR(0x72629f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7262a1:{NFSU2_TR(0x7262a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7262a4:L7262a4:{c.instructions+=3;NFSU2_TR(0x7262a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7262a7:{NFSU2_TR(0x7262a7);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7262ab:{NFSU2_TR(0x7262ab);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72622au);}goto L72622a;}}
}
B7262b1:L7262b1:{c.instructions+=1;NFSU2_TR(0x7262b1);
u8 U[4];
__builtin_memmove((U+0),gp(0x7833b8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7262b7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7262b7:L7262b7:{c.instructions+=5;NFSU2_TR(0x7262b7);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x8b4760))));
}
B7262bd:{NFSU2_TR(0x7262bd);
__builtin_memmove((R+4),gp(0x8183f4),4);
}
B7262c3:{NFSU2_TR(0x7262c3);
__builtin_memmove((R+8),(R+0),4);
}
B7262c5:{NFSU2_TR(0x7262c5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x12cull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7262cb:{NFSU2_TR(0x7262cb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7262cf;}}
}
B7262cd:L7262cd:{c.instructions+=1;NFSU2_TR(0x7262cd);
__builtin_memmove((R+8),(R+4),4);
}
B7262cf:L7262cf:{c.instructions+=2;NFSU2_TR(0x7262cf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7262d1:{NFSU2_TR(0x7262d1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7262db;}}
}
B7262d3:L7262d3:{c.instructions+=2;NFSU2_TR(0x7262d3);
__builtin_memmove((R+4),(R+8),4);
}
B7262d5:{NFSU2_TR(0x7262d5);
__builtin_memmove(gp(0x8183f4),(R+4),4);
}
B7262db:L7262db:{c.instructions+=4;NFSU2_TR(0x7262db);
__builtin_memmove((R+0),gp(0x8183e0),2);
}
B7262e1:{NFSU2_TR(0x7262e1);
w4(R+24,u32(r2(R+0)));
}
B7262e4:{NFSU2_TR(0x7262e4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7262e6:{NFSU2_TR(0x7262e6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L726307;}}
}
B7262e8:L7262e8:{c.instructions+=6;NFSU2_TR(0x7262e8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7262ea:{NFSU2_TR(0x7262ea);
__builtin_memmove((R+0),(R+8),2);
}
B7262ed:{NFSU2_TR(0x7262ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7262f0:{NFSU2_TR(0x7262f0);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7262f3:{NFSU2_TR(0x7262f3);
__builtin_memmove(gp(0x8183e0),(R+0),2);
}
B7262f9:{NFSU2_TR(0x7262f9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L726301;}}
}
B7262fb:L7262fb:{c.instructions+=1;NFSU2_TR(0x7262fb);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B726301:L726301:{c.instructions+=1;NFSU2_TR(0x726301);
{u32 ea_=u32(u32(8487916u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B726307:L726307:{c.instructions+=3;NFSU2_TR(0x726307);
s2(0x8183e4,u16(u32(m2(0x8183e4))-u32(u16(0x1ull))));
}
B72630e:{NFSU2_TR(0x72630e);
u8 U[4];
__builtin_memmove((U+0),gp(0x8183e4),2);
w1(R+523,sborrow<u16>(r2(U+0),r2(R+12)));
w2(U+2,u16(u32(r2(U+0))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+2))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B726315:{NFSU2_TR(0x726315);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L726368;}}
}
B726317:L726317:{c.instructions+=3;NFSU2_TR(0x726317);
w4(R+8,u32(r2(R+0)));
}
B72631a:{NFSU2_TR(0x72631a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B72631c:{NFSU2_TR(0x72631c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L726327;}}
}
B72631e:L72631e:{c.instructions+=2;NFSU2_TR(0x72631e);
__builtin_memmove((R+0),(R+4),2);
}
B726321:{NFSU2_TR(0x726321);
__builtin_memmove(gp(0x8183e0),(R+0),2);
}
B726327:L726327:{c.instructions+=12;NFSU2_TR(0x726327);
w4(R+0,u32(r2(R+0)));
}
B72632a:{NFSU2_TR(0x72632a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72632d:{NFSU2_TR(0x72632d);
s2(0x8183e4,u16(0xbb8ull));
}
B726336:{NFSU2_TR(0x726336);
s4(0x8183f4,u32(0xaull));
}
B726340:{NFSU2_TR(0x726340);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B726343:{NFSU2_TR(0x726343);
{u32 ea_=u32(u32(8487916u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B726349:{NFSU2_TR(0x726349);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72634f:{NFSU2_TR(0x72634f);
{u32 ea_=u32(u32(8487916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B726355:{NFSU2_TR(0x726355);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B726357:{NFSU2_TR(0x726357);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B726359:{NFSU2_TR(0x726359);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72635c:{NFSU2_TR(0x72635c);
if(r1(R+514)){{goto L726366;}}
}
B72635e:L72635e:{c.instructions+=2;NFSU2_TR(0x72635e);
{u32 ea_=u32(u32(8487916u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B726364:{NFSU2_TR(0x726364);
{goto L726368;}
}
B726366:L726366:{c.instructions+=1;NFSU2_TR(0x726366);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B726368:L726368:{c.instructions+=6;NFSU2_TR(0x726368);
{u32 ea_=u32(u32(8487912u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72636e:{NFSU2_TR(0x72636e);
{u32 ea_=u32(u32(8487916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B726374:{NFSU2_TR(0x726374);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B726376:{NFSU2_TR(0x726376);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B726378:{NFSU2_TR(0x726378);
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
B72637b:{NFSU2_TR(0x72637b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L726385;}}
}
B72637d:L72637d:{c.instructions+=2;NFSU2_TR(0x72637d);
{u32 ea_=u32(u32(8487916u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B726383:{NFSU2_TR(0x726383);
{goto L726387;}
}
B726385:L726385:{c.instructions+=1;NFSU2_TR(0x726385);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B726387:L726387:{c.instructions+=2;NFSU2_TR(0x726387);
__builtin_memmove(gp(0x8b4768),(R+28),4);
}
B72638d:{NFSU2_TR(0x72638d);
{goto L7263b1;}
}
B72638f:L72638f:{c.instructions+=7;NFSU2_TR(0x72638f);
__builtin_memmove((R+0),gp(0x8b4780),4);
}
B726394:{NFSU2_TR(0x726394);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B726396:{NFSU2_TR(0x726396);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726398:{NFSU2_TR(0x726398);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726399:{NFSU2_TR(0x726399);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72639a:{NFSU2_TR(0x72639a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72639b:{NFSU2_TR(0x72639b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72639eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72639e:L72639e:{c.instructions+=1;NFSU2_TR(0x72639e);
{goto L7263ab;}
}
B7263a0:L7263a0:{c.instructions+=4;NFSU2_TR(0x7263a0);
__builtin_memmove((R+0),gp(0x8b4780),4);
}
B7263a5:{NFSU2_TR(0x7263a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7263a7:{NFSU2_TR(0x7263a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7263a8:{NFSU2_TR(0x7263a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7263abull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7263ab:L7263ab:{c.instructions+=1;NFSU2_TR(0x7263ab);
__builtin_memmove(gp(0x8b47c0),(R+12),4);
}
B7263b1:L7263b1:{c.instructions+=5;NFSU2_TR(0x7263b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7263b2:{NFSU2_TR(0x7263b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7263b3:{NFSU2_TR(0x7263b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7263b4:{NFSU2_TR(0x7263b4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7263b5:{NFSU2_TR(0x7263b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7263b6:L7263b6:{c.instructions+=1;NFSU2_TR(0x7263b6);
u8 U[4];
__builtin_memmove((U+0),gp(0x818088),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7263bcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7263bc:L7263bc:{c.instructions+=1;NFSU2_TR(0x7263bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7263c1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7260f7u);}goto L7260f7;}
}
B7263c1:L7263c1:{c.instructions+=1;NFSU2_TR(0x7263c1);
{u32 t_=u32(m4(0x81808c));TAIL_DYNAMIC(t_);}
}
B7263c7:L7263c7:{c.instructions+=4;NFSU2_TR(0x7263c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7263c8:{NFSU2_TR(0x7263c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7263c9:{NFSU2_TR(0x7263c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7263cb:{NFSU2_TR(0x7263cb);
u8 U[4];
__builtin_memmove((U+0),gp(0x7833b0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7263d1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7263d1:L7263d1:{c.instructions+=2;NFSU2_TR(0x7263d1);
__builtin_memmove((R+28),gp(0x7833b8),4);
}
B7263d7:{NFSU2_TR(0x7263d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7263d9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7263d9:L7263d9:{c.instructions+=4;NFSU2_TR(0x7263d9);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4721),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7263e0:{NFSU2_TR(0x7263e0);
__builtin_memmove((R+12),(R+0),4);
}
B7263e2:{NFSU2_TR(0x7263e2);
__builtin_memmove(gp(0x8b4764),(R+12),4);
}
B7263e8:{NFSU2_TR(0x7263e8);
if(r1(R+518)){{goto L72643e;}}
}
B7263ea:L7263ea:{c.instructions+=1;NFSU2_TR(0x7263ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7263eb:L7263eb:{c.instructions+=3;NFSU2_TR(0x7263eb);
__builtin_memmove((R+0),gp(0x8b46c0),4);
}
B7263f0:{NFSU2_TR(0x7263f0);
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
B7263f2:{NFSU2_TR(0x7263f2);
if(r1(R+518)){{goto L7263f6;}}
}
B7263f4:L7263f4:{c.instructions+=1;NFSU2_TR(0x7263f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7263f6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7263f6:L7263f6:{c.instructions+=3;NFSU2_TR(0x7263f6);
__builtin_memmove((R+0),gp(0x8b4764),4);
}
B7263fb:{NFSU2_TR(0x7263fb);
__builtin_memmove(gp(0x8b4760),(R+0),4);
}
B726400:{NFSU2_TR(0x726400);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726402ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B726402:L726402:{c.instructions+=2;NFSU2_TR(0x726402);
__builtin_memmove(gp(0x8b4764),(R+0),4);
}
B726407:{NFSU2_TR(0x726407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72640cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7263b6u);}goto L7263b6;}
}
B72640c:L72640c:{c.instructions+=2;NFSU2_TR(0x72640c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0xaull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0xaull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xaull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72640f:{NFSU2_TR(0x72640f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726411ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B726411:L726411:{c.instructions+=3;NFSU2_TR(0x726411);
__builtin_memmove((R+24),(R+12),4);
}
B726413:{NFSU2_TR(0x726413);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B726415:{NFSU2_TR(0x726415);
if(r1(R+519)){{goto L72641f;}}
}
B726417:L726417:{c.instructions+=2;NFSU2_TR(0x726417);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xc8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72641d:{NFSU2_TR(0x72641d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L726422;}}
}
B72641f:L72641f:{c.instructions+=2;NFSU2_TR(0x72641f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B726421:{NFSU2_TR(0x726421);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B726422:L726422:{c.instructions+=3;NFSU2_TR(0x726422);
__builtin_memmove((R+0),gp(0x8b46c4),4);
}
B726427:{NFSU2_TR(0x726427);
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
B726429:{NFSU2_TR(0x726429);
if(r1(R+518)){{goto L72642d;}}
}
B72642b:L72642b:{c.instructions+=1;NFSU2_TR(0x72642b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72642dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B72642d:L72642d:{c.instructions+=2;NFSU2_TR(0x72642d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72642e:{NFSU2_TR(0x72642e);
u8 U[4];
__builtin_memmove((U+0),gp(0x783150),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726434ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B726434:L726434:{c.instructions+=2;NFSU2_TR(0x726434);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4721),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72643b:{NFSU2_TR(0x72643b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7263ebu);}goto L7263eb;}}
}
B72643d:L72643d:{c.instructions+=1;NFSU2_TR(0x72643d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72643e:L72643e:{c.instructions+=2;NFSU2_TR(0x72643e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726440:{NFSU2_TR(0x726440);
u8 U[4];
__builtin_memmove((U+0),gp(0x7833bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726446ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B726446:L726446:{c.instructions+=5;NFSU2_TR(0x726446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B726447:{NFSU2_TR(0x726447);
s1(0x8b4720,u8(0x0ull));
}
B72644e:{NFSU2_TR(0x72644e);
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
B726450:{NFSU2_TR(0x726450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B726451:{NFSU2_TR(0x726451);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B726454:L726454:{c.instructions+=10;NFSU2_TR(0x726454);
u8 U[4];
w4(U+0,u32(0x8b47bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726459:{NFSU2_TR(0x726459);
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
B72645b:{NFSU2_TR(0x72645b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72645c:{NFSU2_TR(0x72645c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72645d:{NFSU2_TR(0x72645d);
u8 U[4];
w4(U+0,u32(0x7263c7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726462:{NFSU2_TR(0x726462);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726463:{NFSU2_TR(0x726463);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726464:{NFSU2_TR(0x726464);
s1(0x8b4720,u8(0x1ull));
}
B72646b:{NFSU2_TR(0x72646b);
s1(0x8b4721,u8(0x1ull));
}
B726472:{NFSU2_TR(0x726472);
u8 U[4];
__builtin_memmove((U+0),gp(0x783248),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726478ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B726478:L726478:{c.instructions+=4;NFSU2_TR(0x726478);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72647a:{NFSU2_TR(0x72647a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72647b:{NFSU2_TR(0x72647b);
__builtin_memmove(gp(0x8b47b8),(R+0),4);
}
B726480:{NFSU2_TR(0x726480);
u8 U[4];
__builtin_memmove((U+0),gp(0x783174),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726486ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B726486:L726486:{c.instructions+=1;NFSU2_TR(0x726486);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B726487:L726487:{c.instructions+=2;NFSU2_TR(0x726487);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b4722),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72648e:{NFSU2_TR(0x72648e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7264a2;}}
}
B726490:L726490:{c.instructions+=2;NFSU2_TR(0x726490);
u8 U[4];
w4(U+0,u32(0x7296bdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726495:{NFSU2_TR(0x726495);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72649aull));
TAIL_STATIC(0x75c5edu,75c);
}
B72649a:L72649a:{c.instructions+=2;NFSU2_TR(0x72649a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72649b:{NFSU2_TR(0x72649b);
s1(0x8b4722,u8(0x1ull));
}
B7264a2:L7264a2:{c.instructions+=4;NFSU2_TR(0x7264a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7264a3:{NFSU2_TR(0x7264a3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7264a5:{NFSU2_TR(0x7264a5);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7264a9:{NFSU2_TR(0x7264a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7264aeull));
TAIL_STATIC(0x725f52u,725);
}
B7264ae:L7264ae:{c.instructions+=5;NFSU2_TR(0x7264ae);
__builtin_memmove((R+24),(R+0),4);
}
B7264b0:{NFSU2_TR(0x7264b0);
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
B7264b2:{NFSU2_TR(0x7264b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7264b3:{NFSU2_TR(0x7264b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7264b4:{NFSU2_TR(0x7264b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7264bb;}}
}
B7264b6:L7264b6:{c.instructions+=1;NFSU2_TR(0x7264b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7264bbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726454u);}goto L726454;}
}
B7264bb:L7264bb:{c.instructions+=3;NFSU2_TR(0x7264bb);
__builtin_memmove((R+0),(R+24),4);
}
B7264bd:{NFSU2_TR(0x7264bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7264be:{NFSU2_TR(0x7264be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7264bf:L7264bf:{c.instructions+=1;NFSU2_TR(0x7264bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7264c4ull));
TAIL_STATIC(0x721f99u,721);
}
B7264c4:L7264c4:{c.instructions+=4;NFSU2_TR(0x7264c4);
w4(R+0,u32(s32(s16(m2(0x8b460c)))));
}
B7264cb:{NFSU2_TR(0x7264cb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7264d1:{NFSU2_TR(0x7264d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7264d2:{NFSU2_TR(0x7264d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7264d7ull));
TAIL_STATIC(0x724792u,724);
}
B7264d7:L7264d7:{c.instructions+=6;NFSU2_TR(0x7264d7);
w4(R+4,u32(s32(s16(m2(0x8b460c)))));
}
B7264de:{NFSU2_TR(0x7264de);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B7264e4:{NFSU2_TR(0x7264e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7264e5:{NFSU2_TR(0x7264e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7264e6:{NFSU2_TR(0x7264e6);
__builtin_memmove(gp(0x8b4724),(R+0),4);
}
B7264eb:{NFSU2_TR(0x7264eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7264f0ull));
TAIL_STATIC(0x727030u,727);
}
B7264f0:L7264f0:{c.instructions+=2;NFSU2_TR(0x7264f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7264f3:{NFSU2_TR(0x7264f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7264f8ull));
TAIL_STATIC(0x721fa7u,721);
}
B7264f8:L7264f8:{c.instructions+=3;NFSU2_TR(0x7264f8);
__builtin_memmove((R+0),gp(0x8b44cf),1);
}
B7264fd:{NFSU2_TR(0x7264fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7264ff:{NFSU2_TR(0x7264ff);
if(r1(R+518)){{goto L726525;}}
}
B726501:L726501:{c.instructions+=2;NFSU2_TR(0x726501);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B726503:{NFSU2_TR(0x726503);
if(r1(R+518)){{goto L726517;}}
}
B726505:L726505:{c.instructions+=2;NFSU2_TR(0x726505);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B726507:{NFSU2_TR(0x726507);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L726537;}}
}
B726509:L726509:{c.instructions+=3;NFSU2_TR(0x726509);
{u32 ea_=u32(u32(8487900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72650f:{NFSU2_TR(0x72650f);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B726515:{NFSU2_TR(0x726515);
{goto L726531;}
}
B726517:L726517:{c.instructions+=3;NFSU2_TR(0x726517);
{u32 ea_=u32(u32(8487900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72651d:{NFSU2_TR(0x72651d);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B726523:{NFSU2_TR(0x726523);
{goto L726531;}
}
B726525:L726525:{c.instructions+=2;NFSU2_TR(0x726525);
{u32 ea_=u32(u32(8487900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72652b:{NFSU2_TR(0x72652b);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B726531:L726531:{c.instructions+=1;NFSU2_TR(0x726531);
{u32 ea_=u32(u32(8487900u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B726537:L726537:{c.instructions+=1;NFSU2_TR(0x726537);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726487u);}goto L726487;}
}
B72653c:L72653c:{c.instructions+=8;NFSU2_TR(0x72653c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726540:{NFSU2_TR(0x726540);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B726544:{NFSU2_TR(0x726544);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B726547:{NFSU2_TR(0x726547);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72654a:{NFSU2_TR(0x72654a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72654e:{NFSU2_TR(0x72654e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B726551:{NFSU2_TR(0x726551);
u8 U[13];
w4(U+0,u32(u32(u32(0x8188ddull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B726559:{NFSU2_TR(0x726559);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72655a:L72655a:{c.instructions+=19;NFSU2_TR(0x72655a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72655b:{NFSU2_TR(0x72655b);
__builtin_memmove((R+20),(R+16),4);
}
B72655d:{NFSU2_TR(0x72655d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B726560:{NFSU2_TR(0x726560);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B726564:{NFSU2_TR(0x726564);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B726566:{NFSU2_TR(0x726566);
s4(0x8b47c8,u32(u32(m4(0x8b47c8))+u32(u32(0x1ull))));
}
B72656c:{NFSU2_TR(0x72656c);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b47c8),4);
w1(R+512,u8((r4(U+6))<(u32(0xbb8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbb8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbb8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B726576:{NFSU2_TR(0x726576);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726577:{NFSU2_TR(0x726577);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+28),(U+0),4);
}
B72657a:{NFSU2_TR(0x72657a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72657b:{NFSU2_TR(0x72657b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72657c:{NFSU2_TR(0x72657c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72657d:{NFSU2_TR(0x72657d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72657e:{NFSU2_TR(0x72657e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72657f:{NFSU2_TR(0x72657f);
__builtin_memmove((R+0),gp(0x8b48d0),4);
}
B726584:{NFSU2_TR(0x726584);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726587:{NFSU2_TR(0x726587);
__builtin_memmove((R+0),gp(0x8b48d4),4);
}
B72658c:{NFSU2_TR(0x72658c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72658f:{NFSU2_TR(0x72658f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7267de;}}
}
B726595:L726595:{c.instructions+=4;NFSU2_TR(0x726595);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B726597:{NFSU2_TR(0x726597);
u8 U[14];
__builtin_memmove((U+6),gp(0x8180b8),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72659d:{NFSU2_TR(0x72659d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7265a0:{NFSU2_TR(0x7265a0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7267de;}}
}
B7265a6:L7265a6:{c.instructions+=2;NFSU2_TR(0x7265a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7265a7:{NFSU2_TR(0x7265a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7265a8:L7265a8:{c.instructions+=4;NFSU2_TR(0x7265a8);
__builtin_memmove((R+0),gp(0x8b47cc),4);
}
B7265ad:{NFSU2_TR(0x7265ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B7265b0:{NFSU2_TR(0x7265b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7265b2:{NFSU2_TR(0x7265b2);
if(r1(R+518)){{goto L7267cc;}}
}
B7265b8:L7265b8:{c.instructions+=6;NFSU2_TR(0x7265b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7265ba:{NFSU2_TR(0x7265ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7265bd:{NFSU2_TR(0x7265bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7265c0:{NFSU2_TR(0x7265c0);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7265c2:{NFSU2_TR(0x7265c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7265c3:{NFSU2_TR(0x7265c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7265c8ull));
TAIL_STATIC(0x727030u,727);
}
B7265c8:L7265c8:{c.instructions+=5;NFSU2_TR(0x7265c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7265cb:{NFSU2_TR(0x7265cb);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7265cf:{NFSU2_TR(0x7265cf);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7265d1:{NFSU2_TR(0x7265d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7265d2:{NFSU2_TR(0x7265d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7265d7ull));
TAIL_STATIC(0x72a195u,72a);
}
B7265d7:L7265d7:{c.instructions+=3;NFSU2_TR(0x7265d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7265da:{NFSU2_TR(0x7265da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7265dc:{NFSU2_TR(0x7265dc);
if(r1(R+518)){{goto L7267a4;}}
}
B7265e2:L7265e2:{c.instructions+=6;NFSU2_TR(0x7265e2);
__builtin_memmove((R+0),gp(0x8b47c4),4);
}
B7265e7:{NFSU2_TR(0x7265e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B7265ea:{NFSU2_TR(0x7265ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7265ed:{NFSU2_TR(0x7265ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7265f0:{NFSU2_TR(0x7265f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B7265f3:{NFSU2_TR(0x7265f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7265f8ull));
TAIL_STATIC(0x72a164u,72a);
}
B7265f8:L7265f8:{c.instructions+=5;NFSU2_TR(0x7265f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7265fc:{NFSU2_TR(0x7265fc);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b47f9),1);
w1(R+512,u8((r1(U+0))<(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B726603:{NFSU2_TR(0x726603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726604:{NFSU2_TR(0x726604);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726605:{NFSU2_TR(0x726605);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7267a4;}}
}
B72660b:L72660b:{c.instructions+=4;NFSU2_TR(0x72660b);
__builtin_memmove((R+12),(R+24),4);
}
B72660d:{NFSU2_TR(0x72660d);
w4(R+12,u32(0-u32(r4(R+12))));
}
B72660f:{NFSU2_TR(0x72660f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+28),(U+0),4);
}
B726612:{NFSU2_TR(0x726612);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726615:L726615:{c.instructions+=3;NFSU2_TR(0x726615);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726618:{NFSU2_TR(0x726618);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B72661d:{NFSU2_TR(0x72661d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72678b;}}
}
B726623:L726623:{c.instructions+=6;NFSU2_TR(0x726623);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B726626:{NFSU2_TR(0x726626);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726629:{NFSU2_TR(0x726629);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B72662b:{NFSU2_TR(0x72662b);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72662f:{NFSU2_TR(0x72662f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B726632:{NFSU2_TR(0x726632);
if(r1(R+518)){{goto L72678b;}}
}
B726638:L726638:{c.instructions+=9;NFSU2_TR(0x726638);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72663b:{NFSU2_TR(0x72663b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72663d:{NFSU2_TR(0x72663d);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72663e:{NFSU2_TR(0x72663e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72663f:{NFSU2_TR(0x72663f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726642:{NFSU2_TR(0x726642);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726645:{NFSU2_TR(0x726645);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726648:{NFSU2_TR(0x726648);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726649:{NFSU2_TR(0x726649);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72664bull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B72664b:L72664b:{c.instructions+=4;NFSU2_TR(0x72664b);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72664d:{NFSU2_TR(0x72664d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B726650:{NFSU2_TR(0x726650);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
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
B726657:{NFSU2_TR(0x726657);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L726695;}}
}
B726659:L726659:{c.instructions+=9;NFSU2_TR(0x726659);
u8 U[12];
w4(U+0,u32(u32(u32(0x8b4888ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B726660:{NFSU2_TR(0x726660);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B726662:{NFSU2_TR(0x726662);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726665:{NFSU2_TR(0x726665);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726666:{NFSU2_TR(0x726666);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726667:{NFSU2_TR(0x726667);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72666b:{NFSU2_TR(0x72666b);
{u32 ea_=u32(r4(R+28)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72666e:{NFSU2_TR(0x72666e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B726671:{NFSU2_TR(0x726671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726676ull));
TAIL_STATIC(0x728957u,728);
}
B726676:L726676:{c.instructions+=14;NFSU2_TR(0x726676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B726678:{NFSU2_TR(0x726678);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72667a:{NFSU2_TR(0x72667a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B72667d:{NFSU2_TR(0x72667d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B726680:{NFSU2_TR(0x726680);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726681:{NFSU2_TR(0x726681);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726684:{NFSU2_TR(0x726684);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B726687:{NFSU2_TR(0x726687);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726688:{NFSU2_TR(0x726688);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72668b:{NFSU2_TR(0x72668b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72668c:{NFSU2_TR(0x72668c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffff0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffff0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72668f:{NFSU2_TR(0x72668f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B726692:{NFSU2_TR(0x726692);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726693:{NFSU2_TR(0x726693);
{goto L7266a6;}
}
B726695:L726695:{c.instructions+=5;NFSU2_TR(0x726695);
u8 U[20];
w4(U+0,u32(u32(u32(0x8b4888ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B72669c:{NFSU2_TR(0x72669c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72669f:{NFSU2_TR(0x72669f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7266a0:{NFSU2_TR(0x7266a0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7266a3:{NFSU2_TR(0x7266a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7266a6:L7266a6:{c.instructions+=1;NFSU2_TR(0x7266a6);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a04),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7266acull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7266ac:L7266ac:{c.instructions+=14;NFSU2_TR(0x7266ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7266af:{NFSU2_TR(0x7266af);
w4(R+4,u32(m1(0x8b47f9)));
}
B7266b6:{NFSU2_TR(0x7266b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7266ba:{NFSU2_TR(0x7266ba);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B7266c2:{NFSU2_TR(0x7266c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7266c5:{NFSU2_TR(0x7266c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7266c8:{NFSU2_TR(0x7266c8);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff9ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7266cc:{NFSU2_TR(0x7266cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7266cf:{NFSU2_TR(0x7266cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7266d2:{NFSU2_TR(0x7266d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7266d5:{NFSU2_TR(0x7266d5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7266d7:{NFSU2_TR(0x7266d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B7266da:{NFSU2_TR(0x7266da);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8183f8ull))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B7266e1:{NFSU2_TR(0x7266e1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72677a;}}
}
B7266e7:L7266e7:{c.instructions+=2;NFSU2_TR(0x7266e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7266ea:{NFSU2_TR(0x7266ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7266ed:L7266ed:{c.instructions+=3;NFSU2_TR(0x7266ed);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7266ef:{NFSU2_TR(0x7266ef);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B7266f1:{NFSU2_TR(0x7266f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L726762;}}
}
B7266f3:L7266f3:{c.instructions+=6;NFSU2_TR(0x7266f3);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
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
B7266fa:{NFSU2_TR(0x7266fa);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B7266fd:{NFSU2_TR(0x7266fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b48f0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B726704:{NFSU2_TR(0x726704);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726707:{NFSU2_TR(0x726707);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726708:{NFSU2_TR(0x726708);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L726743;}}
}
B72670a:L72670a:{c.instructions+=6;NFSU2_TR(0x72670a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72670c:{NFSU2_TR(0x72670c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72670d:{NFSU2_TR(0x72670d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B726711:{NFSU2_TR(0x726711);
{u32 ea_=u32(r4(R+28)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B726714:{NFSU2_TR(0x726714);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B726717:{NFSU2_TR(0x726717);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72671cull));
TAIL_STATIC(0x728957u,728);
}
B72671c:L72671c:{c.instructions+=15;NFSU2_TR(0x72671c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B72671f:{NFSU2_TR(0x72671f);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B726721:{NFSU2_TR(0x726721);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b48f0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B726728:{NFSU2_TR(0x726728);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B72672b:{NFSU2_TR(0x72672b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B72672e:{NFSU2_TR(0x72672e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72672f:{NFSU2_TR(0x72672f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726732:{NFSU2_TR(0x726732);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B726735:{NFSU2_TR(0x726735);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726736:{NFSU2_TR(0x726736);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726739:{NFSU2_TR(0x726739);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72673a:{NFSU2_TR(0x72673a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffff0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffff0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72673d:{NFSU2_TR(0x72673d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B726740:{NFSU2_TR(0x726740);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726741:{NFSU2_TR(0x726741);
{goto L72674e;}
}
B726743:L726743:{c.instructions+=4;NFSU2_TR(0x726743);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726746:{NFSU2_TR(0x726746);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B726748:{NFSU2_TR(0x726748);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72674b:{NFSU2_TR(0x72674b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72674e:L72674e:{c.instructions+=1;NFSU2_TR(0x72674e);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a04),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726754ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B726754:L726754:{c.instructions+=3;NFSU2_TR(0x726754);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B726757:{NFSU2_TR(0x726757);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B72675a:{NFSU2_TR(0x72675a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B726762:L726762:{c.instructions+=6;NFSU2_TR(0x726762);
w4(R+0,u32(m1(0x8b47f9)));
}
B726769:{NFSU2_TR(0x726769);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72676d:{NFSU2_TR(0x72676d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B72676e:{NFSU2_TR(0x72676e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B726771:{NFSU2_TR(0x726771);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B726774:{NFSU2_TR(0x726774);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7266edu);}goto L7266ed;}}
}
B72677a:L72677a:{c.instructions+=3;NFSU2_TR(0x72677a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B726781:{NFSU2_TR(0x726781);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B726784:{NFSU2_TR(0x726784);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72678b;}}
}
B726786:L726786:{c.instructions+=2;NFSU2_TR(0x726786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B726788:{NFSU2_TR(0x726788);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72678b:L72678b:{c.instructions+=5;NFSU2_TR(0x72678b);
w4(R+0,u32(m1(0x8b47f9)));
}
B726792:{NFSU2_TR(0x726792);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B726795:{NFSU2_TR(0x726795);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B726798:{NFSU2_TR(0x726798);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72679b:{NFSU2_TR(0x72679b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726615u);}goto L726615;}}
}
B7267a1:L7267a1:{c.instructions+=1;NFSU2_TR(0x7267a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7267a4:L7267a4:{c.instructions+=4;NFSU2_TR(0x7267a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7267ab:{NFSU2_TR(0x7267ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7267ae:{NFSU2_TR(0x7267ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7267b0:{NFSU2_TR(0x7267b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7265b8u);}goto L7265b8;}}
}
B7267b6:L7267b6:{c.instructions+=6;NFSU2_TR(0x7267b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7267b9:{NFSU2_TR(0x7267b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7267bc:{NFSU2_TR(0x7267bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7267bd:{NFSU2_TR(0x7267bd);
__builtin_memmove((R+0),gp(0x8b47c4),4);
}
B7267c2:{NFSU2_TR(0x7267c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B7267c5:{NFSU2_TR(0x7267c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7267caull));
TAIL_STATIC(0x727030u,727);
}
B7267ca:L7267ca:{c.instructions+=2;NFSU2_TR(0x7267ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7267cb:{NFSU2_TR(0x7267cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7267cc:L7267cc:{c.instructions+=4;NFSU2_TR(0x7267cc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7267cd:{NFSU2_TR(0x7267cd);
u8 U[14];
__builtin_memmove((U+6),gp(0x8180b8),4);
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
B7267d3:{NFSU2_TR(0x7267d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7267d6:{NFSU2_TR(0x7267d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7265a8u);}goto L7265a8;}}
}
B7267dc:L7267dc:{c.instructions+=2;NFSU2_TR(0x7267dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7267dd:{NFSU2_TR(0x7267dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7267de:L7267de:{c.instructions+=3;NFSU2_TR(0x7267de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7267df:{NFSU2_TR(0x7267df);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7267e0:{NFSU2_TR(0x7267e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7267e1:L7267e1:{c.instructions+=13;NFSU2_TR(0x7267e1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7267e2:{NFSU2_TR(0x7267e2);
__builtin_memmove((R+20),(R+16),4);
}
B7267e4:{NFSU2_TR(0x7267e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7267e5:{NFSU2_TR(0x7267e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7267e6:{NFSU2_TR(0x7267e6);
__builtin_memmove((R+0),gp(0x8b4804),4);
}
B7267eb:{NFSU2_TR(0x7267eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7267ec:{NFSU2_TR(0x7267ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7267ed:{NFSU2_TR(0x7267ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7267f0:{NFSU2_TR(0x7267f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B7267f3:{NFSU2_TR(0x7267f3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7267f5:{NFSU2_TR(0x7267f5);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+12)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B7267f8:{NFSU2_TR(0x7267f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7267fb:{NFSU2_TR(0x7267fb);
if(r1(R+518)){{goto L7268bb;}}
}
B726801:L726801:{c.instructions+=8;NFSU2_TR(0x726801);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726802:{NFSU2_TR(0x726802);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B726805:{NFSU2_TR(0x726805);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726808:{NFSU2_TR(0x726808);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B726809:{NFSU2_TR(0x726809);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72680d:{NFSU2_TR(0x72680d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72680f:{NFSU2_TR(0x72680f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726810:{NFSU2_TR(0x726810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726815ull));
TAIL_STATIC(0x72a195u,72a);
}
B726815:L726815:{c.instructions+=5;NFSU2_TR(0x726815);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B726817:{NFSU2_TR(0x726817);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726818:{NFSU2_TR(0x726818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726819:{NFSU2_TR(0x726819);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72681c:{NFSU2_TR(0x72681c);
if(r1(R+518)){{goto L72686f;}}
}
B72681e:L72681e:{c.instructions+=4;NFSU2_TR(0x72681e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B726820:{NFSU2_TR(0x726820);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B726823:{NFSU2_TR(0x726823);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726826:{NFSU2_TR(0x726826);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72686f;}}
}
B726828:L726828:{c.instructions+=7;NFSU2_TR(0x726828);
__builtin_memmove((R+28),(R+0),4);
}
B72682a:{NFSU2_TR(0x72682a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72682d:{NFSU2_TR(0x72682d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B726830:{NFSU2_TR(0x726830);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B726832:{NFSU2_TR(0x726832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B726834:{NFSU2_TR(0x726834);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
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
B726837:{NFSU2_TR(0x726837);
if(r1(R+518)){{goto L726849;}}
}
B726839:L726839:{c.instructions+=3;NFSU2_TR(0x726839);
__builtin_memmove((R+0),(R+4),4);
}
B72683b:{NFSU2_TR(0x72683b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72683c:{NFSU2_TR(0x72683c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72683full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72683f:L72683f:{c.instructions+=4;NFSU2_TR(0x72683f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726842:{NFSU2_TR(0x726842);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B726845:{NFSU2_TR(0x726845);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726846:{NFSU2_TR(0x726846);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726849:L726849:{c.instructions+=4;NFSU2_TR(0x726849);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72684c:{NFSU2_TR(0x72684c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B72684f:{NFSU2_TR(0x72684f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B726851:{NFSU2_TR(0x726851);
if(r1(R+518)){{goto L726860;}}
}
B726853:L726853:{c.instructions+=2;NFSU2_TR(0x726853);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726854:{NFSU2_TR(0x726854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726859ull));
TAIL_STATIC(0x724894u,724);
}
B726859:L726859:{c.instructions+=3;NFSU2_TR(0x726859);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72685c:{NFSU2_TR(0x72685c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72685d:{NFSU2_TR(0x72685d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B726860:L726860:{c.instructions+=5;NFSU2_TR(0x726860);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726863:{NFSU2_TR(0x726863);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B726864:{NFSU2_TR(0x726864);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B726867:{NFSU2_TR(0x726867);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72686a:{NFSU2_TR(0x72686a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726828u);}goto L726828;}}
}
B72686c:L72686c:{c.instructions+=1;NFSU2_TR(0x72686c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72686f:L72686f:{c.instructions+=3;NFSU2_TR(0x72686f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726872:{NFSU2_TR(0x726872);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B726874:{NFSU2_TR(0x726874);
if(r1(R+518)){{goto L726880;}}
}
B726876:L726876:{c.instructions+=2;NFSU2_TR(0x726876);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726877:{NFSU2_TR(0x726877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72687cull));
TAIL_STATIC(0x724894u,724);
}
B72687c:L72687c:{c.instructions+=2;NFSU2_TR(0x72687c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72687d:{NFSU2_TR(0x72687d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726880:L726880:{c.instructions+=1;NFSU2_TR(0x726880);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B726882:L726882:{c.instructions+=4;NFSU2_TR(0x726882);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726885:{NFSU2_TR(0x726885);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B726887:{NFSU2_TR(0x726887);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B726889:{NFSU2_TR(0x726889);
if(r1(R+518)){{goto L72688d;}}
}
B72688b:L72688b:{c.instructions+=1;NFSU2_TR(0x72688b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B72688d:L72688d:{c.instructions+=3;NFSU2_TR(0x72688d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B726890:{NFSU2_TR(0x726890);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x18ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B726893:{NFSU2_TR(0x726893);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726882u);}goto L726882;}}
}
B726895:L726895:{c.instructions+=3;NFSU2_TR(0x726895);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726898:{NFSU2_TR(0x726898);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72689a:{NFSU2_TR(0x72689a);
if(r1(R+518)){{goto L7268a6;}}
}
B72689c:L72689c:{c.instructions+=2;NFSU2_TR(0x72689c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72689d:{NFSU2_TR(0x72689d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7268a2ull));
TAIL_STATIC(0x724894u,724);
}
B7268a2:L7268a2:{c.instructions+=2;NFSU2_TR(0x7268a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7268a3:{NFSU2_TR(0x7268a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7268a6:L7268a6:{c.instructions+=4;NFSU2_TR(0x7268a6);
__builtin_memmove((R+0),gp(0x8b47c4),4);
}
B7268ab:{NFSU2_TR(0x7268ab);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7268b0:{NFSU2_TR(0x7268b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B7268b3:{NFSU2_TR(0x7268b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7268b8ull));
TAIL_STATIC(0x727030u,727);
}
B7268b8:L7268b8:{c.instructions+=3;NFSU2_TR(0x7268b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7268b9:{NFSU2_TR(0x7268b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7268ba:{NFSU2_TR(0x7268ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7268bb:L7268bb:{c.instructions+=4;NFSU2_TR(0x7268bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7268bc:{NFSU2_TR(0x7268bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7268bd:{NFSU2_TR(0x7268bd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7268be:{NFSU2_TR(0x7268be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7268bf:L7268bf:{c.instructions+=8;NFSU2_TR(0x7268bf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7268c0:{NFSU2_TR(0x7268c0);
__builtin_memmove((R+20),(R+16),4);
}
B7268c2:{NFSU2_TR(0x7268c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B7268c5:{NFSU2_TR(0x7268c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7268c6:{NFSU2_TR(0x7268c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7268c7:{NFSU2_TR(0x7268c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7268c8:{NFSU2_TR(0x7268c8);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7268ca:{NFSU2_TR(0x7268ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7268cfull));
TAIL_STATIC(0x724792u,724);
}
B7268cf:L7268cf:{c.instructions+=5;NFSU2_TR(0x7268cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7268d2:{NFSU2_TR(0x7268d2);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7268d4:{NFSU2_TR(0x7268d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7268d5:{NFSU2_TR(0x7268d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7268d8:{NFSU2_TR(0x7268d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7268ddull));
TAIL_STATIC(0x727030u,727);
}
B7268dd:L7268dd:{c.instructions+=7;NFSU2_TR(0x7268dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7268e0:{NFSU2_TR(0x7268e0);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B7268e1:{NFSU2_TR(0x7268e1);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7268e5:{NFSU2_TR(0x7268e5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7268e7:{NFSU2_TR(0x7268e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7268e8:{NFSU2_TR(0x7268e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7268eb:{NFSU2_TR(0x7268eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7268f0ull));
TAIL_STATIC(0x72a195u,72a);
}
B7268f0:L7268f0:{c.instructions+=4;NFSU2_TR(0x7268f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7268f3:{NFSU2_TR(0x7268f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7268f6:{NFSU2_TR(0x7268f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7268f7:{NFSU2_TR(0x7268f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7268fcull));
TAIL_STATIC(0x724792u,724);
}
B7268fc:L7268fc:{c.instructions+=6;NFSU2_TR(0x7268fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B726900:{NFSU2_TR(0x726900);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B726903:{NFSU2_TR(0x726903);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B726907:{NFSU2_TR(0x726907);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72690a:{NFSU2_TR(0x72690a);
__builtin_memmove((R+28),gp(0x8b47d4),4);
}
B726910:{NFSU2_TR(0x726910);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L726c01;}}
}
B726916:L726916:{c.instructions+=5;NFSU2_TR(0x726916);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B726919:{NFSU2_TR(0x726919);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72691c:{NFSU2_TR(0x72691c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8189e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B726923:{NFSU2_TR(0x726923);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B726926:{NFSU2_TR(0x726926);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72692bull));
TAIL_STATIC(0x724792u,724);
}
B72692b:L72692b:{c.instructions+=7;NFSU2_TR(0x72692b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72692e:{NFSU2_TR(0x72692e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B726931:{NFSU2_TR(0x726931);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B726934:{NFSU2_TR(0x726934);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8189e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B72693b:{NFSU2_TR(0x72693b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72693e:{NFSU2_TR(0x72693e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B726941:{NFSU2_TR(0x726941);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726946ull));
TAIL_STATIC(0x727030u,727);
}
B726946:L726946:{c.instructions+=4;NFSU2_TR(0x726946);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726949:{NFSU2_TR(0x726949);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72694b:{NFSU2_TR(0x72694b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72694c:{NFSU2_TR(0x72694c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726951ull));
TAIL_STATIC(0x727030u,727);
}
B726951:L726951:{c.instructions+=4;NFSU2_TR(0x726951);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B726954:{NFSU2_TR(0x726954);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B726957:{NFSU2_TR(0x726957);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72695a:{NFSU2_TR(0x72695a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L726b77;}}
}
B726960:L726960:{c.instructions+=1;NFSU2_TR(0x726960);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x726cc6ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B726967:L726967:{c.instructions+=3;NFSU2_TR(0x726967);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72696a:{NFSU2_TR(0x72696a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B72696d:{NFSU2_TR(0x72696d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726972ull));
TAIL_STATIC(0x72a17au,72a);
}
B726972:L726972:{c.instructions+=1;NFSU2_TR(0x726972);
{goto L726b76;}
}
B726977:L726977:{c.instructions+=7;NFSU2_TR(0x726977);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72697a:{NFSU2_TR(0x72697a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B72697d:{NFSU2_TR(0x72697d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726980:{NFSU2_TR(0x726980);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726983:{NFSU2_TR(0x726983);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726985:{NFSU2_TR(0x726985);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726986:{NFSU2_TR(0x726986);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72698bull));
TAIL_STATIC(0x72a195u,72a);
}
B72698b:L72698b:{c.instructions+=9;NFSU2_TR(0x72698b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72698e:{NFSU2_TR(0x72698e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726991:{NFSU2_TR(0x726991);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726994:{NFSU2_TR(0x726994);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B726997:{NFSU2_TR(0x726997);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72699a:{NFSU2_TR(0x72699a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72699d:{NFSU2_TR(0x72699d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72699f:{NFSU2_TR(0x72699f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7269a0:{NFSU2_TR(0x7269a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7269a5ull));
TAIL_STATIC(0x72a195u,72a);
}
B7269a5:L7269a5:{c.instructions+=3;NFSU2_TR(0x7269a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7269a8:{NFSU2_TR(0x7269a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7269ab:{NFSU2_TR(0x7269ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7269b0ull));
TAIL_STATIC(0x72aa98u,72a);
}
B7269b0:L7269b0:{c.instructions+=4;NFSU2_TR(0x7269b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7269b3:{NFSU2_TR(0x7269b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7269b4:{NFSU2_TR(0x7269b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7269b7:{NFSU2_TR(0x7269b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7269bcull));
TAIL_STATIC(0x72aabeu,72a);
}
B7269bc:L7269bc:{c.instructions+=1;NFSU2_TR(0x7269bc);
{goto L726b59;}
}
B7269c1:L7269c1:{c.instructions+=7;NFSU2_TR(0x7269c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7269c4:{NFSU2_TR(0x7269c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B7269c7:{NFSU2_TR(0x7269c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7269ca:{NFSU2_TR(0x7269ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7269cd:{NFSU2_TR(0x7269cd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7269cf:{NFSU2_TR(0x7269cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7269d0:{NFSU2_TR(0x7269d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7269d5ull));
TAIL_STATIC(0x72a195u,72a);
}
B7269d5:L7269d5:{c.instructions+=7;NFSU2_TR(0x7269d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7269d8:{NFSU2_TR(0x7269d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7269db:{NFSU2_TR(0x7269db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7269de:{NFSU2_TR(0x7269de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7269e1:{NFSU2_TR(0x7269e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7269e4:{NFSU2_TR(0x7269e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7269e7:{NFSU2_TR(0x7269e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7269ecull));
TAIL_STATIC(0x72a9f6u,72a);
}
B7269ec:L7269ec:{c.instructions+=4;NFSU2_TR(0x7269ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7269ef:{NFSU2_TR(0x7269ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7269f0:{NFSU2_TR(0x7269f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7269f3:{NFSU2_TR(0x7269f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7269f8ull));
TAIL_STATIC(0x72aa21u,72a);
}
B7269f8:L7269f8:{c.instructions+=1;NFSU2_TR(0x7269f8);
{goto L726b0f;}
}
B7269fd:L7269fd:{c.instructions+=7;NFSU2_TR(0x7269fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726a00:{NFSU2_TR(0x726a00);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B726a03:{NFSU2_TR(0x726a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726a06:{NFSU2_TR(0x726a06);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726a09:{NFSU2_TR(0x726a09);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726a0b:{NFSU2_TR(0x726a0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726a0c:{NFSU2_TR(0x726a0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726a11ull));
TAIL_STATIC(0x72a195u,72a);
}
B726a11:L726a11:{c.instructions+=7;NFSU2_TR(0x726a11);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726a14:{NFSU2_TR(0x726a14);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B726a17:{NFSU2_TR(0x726a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726a1a:{NFSU2_TR(0x726a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726a1d:{NFSU2_TR(0x726a1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B726a20:{NFSU2_TR(0x726a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726a23:{NFSU2_TR(0x726a23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726a28ull));
TAIL_STATIC(0x72a956u,72a);
}
B726a28:L726a28:{c.instructions+=4;NFSU2_TR(0x726a28);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726a2b:{NFSU2_TR(0x726a2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726a2c:{NFSU2_TR(0x726a2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726a2f:{NFSU2_TR(0x726a2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726a34ull));
TAIL_STATIC(0x72a981u,72a);
}
B726a34:L726a34:{c.instructions+=1;NFSU2_TR(0x726a34);
{goto L726b0f;}
}
B726a39:L726a39:{c.instructions+=7;NFSU2_TR(0x726a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726a3c:{NFSU2_TR(0x726a3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B726a3f:{NFSU2_TR(0x726a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726a42:{NFSU2_TR(0x726a42);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726a45:{NFSU2_TR(0x726a45);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726a47:{NFSU2_TR(0x726a47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726a48:{NFSU2_TR(0x726a48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726a4dull));
TAIL_STATIC(0x72a195u,72a);
}
B726a4d:L726a4d:{c.instructions+=6;NFSU2_TR(0x726a4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B726a50:{NFSU2_TR(0x726a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726a53:{NFSU2_TR(0x726a53);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726a56:{NFSU2_TR(0x726a56);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726a58:{NFSU2_TR(0x726a58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726a59:{NFSU2_TR(0x726a59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726a5eull));
TAIL_STATIC(0x72a195u,72a);
}
B726a5e:L726a5e:{c.instructions+=7;NFSU2_TR(0x726a5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726a61:{NFSU2_TR(0x726a61);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B726a64:{NFSU2_TR(0x726a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726a67:{NFSU2_TR(0x726a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726a6a:{NFSU2_TR(0x726a6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B726a6d:{NFSU2_TR(0x726a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726a70:{NFSU2_TR(0x726a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726a75ull));
TAIL_STATIC(0x72a956u,72a);
}
B726a75:L726a75:{c.instructions+=4;NFSU2_TR(0x726a75);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726a78:{NFSU2_TR(0x726a78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726a79:{NFSU2_TR(0x726a79);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726a7c:{NFSU2_TR(0x726a7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726a81ull));
TAIL_STATIC(0x72a90eu,72a);
}
B726a81:L726a81:{c.instructions+=1;NFSU2_TR(0x726a81);
{goto L726b59;}
}
B726a86:L726a86:{c.instructions+=7;NFSU2_TR(0x726a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726a89:{NFSU2_TR(0x726a89);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B726a8c:{NFSU2_TR(0x726a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726a8f:{NFSU2_TR(0x726a8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726a92:{NFSU2_TR(0x726a92);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726a94:{NFSU2_TR(0x726a94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726a95:{NFSU2_TR(0x726a95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726a9aull));
TAIL_STATIC(0x72a195u,72a);
}
B726a9a:L726a9a:{c.instructions+=9;NFSU2_TR(0x726a9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B726a9d:{NFSU2_TR(0x726a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726aa0:{NFSU2_TR(0x726aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726aa3:{NFSU2_TR(0x726aa3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B726aa6:{NFSU2_TR(0x726aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726aa9:{NFSU2_TR(0x726aa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726aac:{NFSU2_TR(0x726aac);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726aae:{NFSU2_TR(0x726aae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726aaf:{NFSU2_TR(0x726aaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726ab4ull));
TAIL_STATIC(0x72a195u,72a);
}
B726ab4:L726ab4:{c.instructions+=6;NFSU2_TR(0x726ab4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B726ab7:{NFSU2_TR(0x726ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726aba:{NFSU2_TR(0x726aba);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726abd:{NFSU2_TR(0x726abd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726abf:{NFSU2_TR(0x726abf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726ac0:{NFSU2_TR(0x726ac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726ac5ull));
TAIL_STATIC(0x72a195u,72a);
}
B726ac5:L726ac5:{c.instructions+=3;NFSU2_TR(0x726ac5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726ac8:{NFSU2_TR(0x726ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726acb:{NFSU2_TR(0x726acb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726ad0ull));
TAIL_STATIC(0x72a7e7u,72a);
}
B726ad0:L726ad0:{c.instructions+=4;NFSU2_TR(0x726ad0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726ad3:{NFSU2_TR(0x726ad3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726ad4:{NFSU2_TR(0x726ad4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726ad7:{NFSU2_TR(0x726ad7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726adcull));
TAIL_STATIC(0x72a817u,72a);
}
B726adc:L726adc:{c.instructions+=2;NFSU2_TR(0x726adc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B726adf:{NFSU2_TR(0x726adf);
{goto L726b77;}
}
B726ae4:L726ae4:{c.instructions+=7;NFSU2_TR(0x726ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726ae7:{NFSU2_TR(0x726ae7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B726aea:{NFSU2_TR(0x726aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726aed:{NFSU2_TR(0x726aed);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726af0:{NFSU2_TR(0x726af0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726af2:{NFSU2_TR(0x726af2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726af3:{NFSU2_TR(0x726af3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726af8ull));
TAIL_STATIC(0x72a195u,72a);
}
B726af8:L726af8:{c.instructions+=3;NFSU2_TR(0x726af8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726afb:{NFSU2_TR(0x726afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726afe:{NFSU2_TR(0x726afe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726b03ull));
TAIL_STATIC(0x72a6beu,72a);
}
B726b03:L726b03:{c.instructions+=4;NFSU2_TR(0x726b03);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726b06:{NFSU2_TR(0x726b06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726b07:{NFSU2_TR(0x726b07);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726b0a:{NFSU2_TR(0x726b0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726b0full));
TAIL_STATIC(0x72a6e4u,72a);
}
B726b0f:L726b0f:{c.instructions+=2;NFSU2_TR(0x726b0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B726b12:{NFSU2_TR(0x726b12);
{goto L726b77;}
}
B726b14:L726b14:{c.instructions+=7;NFSU2_TR(0x726b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726b17:{NFSU2_TR(0x726b17);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B726b1a:{NFSU2_TR(0x726b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726b1d:{NFSU2_TR(0x726b1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726b20:{NFSU2_TR(0x726b20);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726b22:{NFSU2_TR(0x726b22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726b23:{NFSU2_TR(0x726b23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726b28ull));
TAIL_STATIC(0x72a195u,72a);
}
B726b28:L726b28:{c.instructions+=8;NFSU2_TR(0x726b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726b2b:{NFSU2_TR(0x726b2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726b2e:{NFSU2_TR(0x726b2e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B726b31:{NFSU2_TR(0x726b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726b34:{NFSU2_TR(0x726b34);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726b37:{NFSU2_TR(0x726b37);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726b39:{NFSU2_TR(0x726b39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726b3a:{NFSU2_TR(0x726b3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726b3full));
TAIL_STATIC(0x72a195u,72a);
}
B726b3f:L726b3f:{c.instructions+=4;NFSU2_TR(0x726b3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726b42:{NFSU2_TR(0x726b42);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B726b45:{NFSU2_TR(0x726b45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726b48:{NFSU2_TR(0x726b48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726b4dull));
TAIL_STATIC(0x72a5d7u,72a);
}
B726b4d:L726b4d:{c.instructions+=4;NFSU2_TR(0x726b4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726b50:{NFSU2_TR(0x726b50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726b51:{NFSU2_TR(0x726b51);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726b54:{NFSU2_TR(0x726b54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726b59ull));
TAIL_STATIC(0x72a602u,72a);
}
B726b59:L726b59:{c.instructions+=2;NFSU2_TR(0x726b59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B726b5c:{NFSU2_TR(0x726b5c);
{goto L726b77;}
}
B726b5e:L726b5e:{c.instructions+=3;NFSU2_TR(0x726b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726b61:{NFSU2_TR(0x726b61);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B726b64:{NFSU2_TR(0x726b64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726b69ull));
TAIL_STATIC(0x72a456u,72a);
}
B726b69:L726b69:{c.instructions+=1;NFSU2_TR(0x726b69);
{goto L726b76;}
}
B726b6b:L726b6b:{c.instructions+=3;NFSU2_TR(0x726b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726b6e:{NFSU2_TR(0x726b6e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B726b71:{NFSU2_TR(0x726b71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726b76ull));
TAIL_STATIC(0x72a3a4u,72a);
}
B726b76:L726b76:{c.instructions+=1;NFSU2_TR(0x726b76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726b77:L726b77:{c.instructions+=3;NFSU2_TR(0x726b77);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B726b7a:{NFSU2_TR(0x726b7a);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B726b7c:{NFSU2_TR(0x726b7c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L726be5;}}
}
B726b7e:L726b7e:{c.instructions+=4;NFSU2_TR(0x726b7e);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x9ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x9ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x9ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B726b81:{NFSU2_TR(0x726b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B726b84:{NFSU2_TR(0x726b84);
w4(R+0,u32(r1(R+0)));
}
B726b87:{NFSU2_TR(0x726b87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L726bc8;}}
}
B726b89:L726b89:{c.instructions+=7;NFSU2_TR(0x726b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726b8c:{NFSU2_TR(0x726b8c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B726b8f:{NFSU2_TR(0x726b8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726b90:{NFSU2_TR(0x726b90);
w4(R+0,u32(m1(0x8b47f9)));
}
B726b97:{NFSU2_TR(0x726b97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726b98:{NFSU2_TR(0x726b98);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726b9b:{NFSU2_TR(0x726b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726ba0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72653cu);}goto L72653c;}
}
B726ba0:L726ba0:{c.instructions+=11;NFSU2_TR(0x726ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B726ba3:{NFSU2_TR(0x726ba3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B726ba6:{NFSU2_TR(0x726ba6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B726ba9:{NFSU2_TR(0x726ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726bac:{NFSU2_TR(0x726bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B726baf:{NFSU2_TR(0x726baf);
u8 U[48];
w4(U+40,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
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
B726bb2:{NFSU2_TR(0x726bb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726bb3:{NFSU2_TR(0x726bb3);
w4(R+0,u32(m1(0x8b47f9)));
}
B726bba:{NFSU2_TR(0x726bba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726bbb:{NFSU2_TR(0x726bbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726bbe:{NFSU2_TR(0x726bbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726bc3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72653cu);}goto L72653c;}
}
B726bc3:L726bc3:{c.instructions+=2;NFSU2_TR(0x726bc3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B726bc6:{NFSU2_TR(0x726bc6);
{goto L726bdc;}
}
B726bc8:L726bc8:{c.instructions+=5;NFSU2_TR(0x726bc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726bc9:{NFSU2_TR(0x726bc9);
w4(R+0,u32(m1(0x8b47f9)));
}
B726bd0:{NFSU2_TR(0x726bd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726bd1:{NFSU2_TR(0x726bd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726bd4:{NFSU2_TR(0x726bd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726bd9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72653cu);}goto L72653c;}
}
B726bd9:L726bd9:{c.instructions+=1;NFSU2_TR(0x726bd9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B726bdc:L726bdc:{c.instructions+=3;NFSU2_TR(0x726bdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B726bdf:{NFSU2_TR(0x726bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B726be2:{NFSU2_TR(0x726be2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B726be5:L726be5:{c.instructions+=6;NFSU2_TR(0x726be5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B726be8:{NFSU2_TR(0x726be8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x818a08ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+8))));
}
B726bef:{NFSU2_TR(0x726bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B726bf2:{NFSU2_TR(0x726bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726bf5:{NFSU2_TR(0x726bf5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B726bf8:{NFSU2_TR(0x726bf8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726916u);}goto L726916;}}
}
B726bfe:L726bfe:{c.instructions+=1;NFSU2_TR(0x726bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B726c01:L726c01:{c.instructions+=6;NFSU2_TR(0x726c01);
__builtin_memmove((R+28),gp(0x8b47d0),4);
}
B726c07:{NFSU2_TR(0x726c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B726c0b:{NFSU2_TR(0x726c0b);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B726c0f:{NFSU2_TR(0x726c0f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726c11:{NFSU2_TR(0x726c11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726c12:{NFSU2_TR(0x726c12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726c17ull));
TAIL_STATIC(0x72a195u,72a);
}
B726c17:L726c17:{c.instructions+=4;NFSU2_TR(0x726c17);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B726c19:{NFSU2_TR(0x726c19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726c1a:{NFSU2_TR(0x726c1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726c1b:{NFSU2_TR(0x726c1b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L726c65;}}
}
B726c1d:L726c1d:{c.instructions+=8;NFSU2_TR(0x726c1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B726c21:{NFSU2_TR(0x726c21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726c22:{NFSU2_TR(0x726c22);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B726c26:{NFSU2_TR(0x726c26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726c27:{NFSU2_TR(0x726c27);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726c2a:{NFSU2_TR(0x726c2a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726c2c:{NFSU2_TR(0x726c2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726c2d:{NFSU2_TR(0x726c2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726c32ull));
TAIL_STATIC(0x72a195u,72a);
}
B726c32:L726c32:{c.instructions+=7;NFSU2_TR(0x726c32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726c33:{NFSU2_TR(0x726c33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726c34:{NFSU2_TR(0x726c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B726c37:{NFSU2_TR(0x726c37);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B726c3a:{NFSU2_TR(0x726c3a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726c3c:{NFSU2_TR(0x726c3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726c3d:{NFSU2_TR(0x726c3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726c42ull));
TAIL_STATIC(0x72a195u,72a);
}
B726c42:L726c42:{c.instructions+=5;NFSU2_TR(0x726c42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726c43:{NFSU2_TR(0x726c43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726c44:{NFSU2_TR(0x726c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B726c47:{NFSU2_TR(0x726c47);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B726c4a:{NFSU2_TR(0x726c4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726c4full));
TAIL_STATIC(0x72a26du,72a);
}
B726c4f:L726c4f:{c.instructions+=5;NFSU2_TR(0x726c4f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726c51:{NFSU2_TR(0x726c51);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B726c54:{NFSU2_TR(0x726c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B726c57:{NFSU2_TR(0x726c57);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726c58:{NFSU2_TR(0x726c58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726c5dull));
TAIL_STATIC(0x72a195u,72a);
}
B726c5d:L726c5d:{c.instructions+=3;NFSU2_TR(0x726c5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B726c60:{NFSU2_TR(0x726c60);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B726c63:{NFSU2_TR(0x726c63);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726c1du);}goto L726c1d;}}
}
B726c65:L726c65:{c.instructions+=6;NFSU2_TR(0x726c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726c68:{NFSU2_TR(0x726c68);
__builtin_memmove((R+4),gp(0x8b47c4),4);
}
B726c6e:{NFSU2_TR(0x726c6e);
s4(0x8b47c8,u32(0xbb8ull));
}
B726c78:{NFSU2_TR(0x726c78);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726c7d:{NFSU2_TR(0x726c7d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B726c80:{NFSU2_TR(0x726c80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726c85ull));
TAIL_STATIC(0x727030u,727);
}
B726c85:L726c85:{c.instructions+=5;NFSU2_TR(0x726c85);
__builtin_memmove((R+0),gp(0x8b47d4),4);
}
B726c8a:{NFSU2_TR(0x726c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B726c8e:{NFSU2_TR(0x726c8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726c8f:{NFSU2_TR(0x726c8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726c90:{NFSU2_TR(0x726c90);
{goto L726c9f;}
}
B726c92:L726c92:{c.instructions+=3;NFSU2_TR(0x726c92);
w4(R+4,u32(r1(R+4)));
}
B726c95:{NFSU2_TR(0x726c95);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x818a08ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+8))));
}
B726c9c:{NFSU2_TR(0x726c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B726c9f:L726c9f:{c.instructions+=3;NFSU2_TR(0x726c9f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B726ca1:{NFSU2_TR(0x726ca1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B726ca3:{NFSU2_TR(0x726ca3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726c92u);}goto L726c92;}}
}
B726ca5:L726ca5:{c.instructions+=3;NFSU2_TR(0x726ca5);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726ca7:{NFSU2_TR(0x726ca7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726caa:{NFSU2_TR(0x726caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726cab:L726cab:{c.instructions+=7;NFSU2_TR(0x726cab);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B726cad:{NFSU2_TR(0x726cad);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B726cb0:{NFSU2_TR(0x726cb0);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B726cb2:{NFSU2_TR(0x726cb2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B726cb4:{NFSU2_TR(0x726cb4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B726cb7:{NFSU2_TR(0x726cb7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B726cb8:{NFSU2_TR(0x726cb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726cabu);}goto L726cab;}}
}
B726cba:L726cba:{c.instructions+=6;NFSU2_TR(0x726cba);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B726cc1:{NFSU2_TR(0x726cc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B726cc2:{NFSU2_TR(0x726cc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B726cc3:{NFSU2_TR(0x726cc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B726cc4:{NFSU2_TR(0x726cc4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B726cc5:{NFSU2_TR(0x726cc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B726cee:L726cee:{c.instructions+=6;NFSU2_TR(0x726cee);
__builtin_memmove((R+0),gp(0x8180b8),4);
}
B726cf3:{NFSU2_TR(0x726cf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726cf4:{NFSU2_TR(0x726cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B726cf7:{NFSU2_TR(0x726cf7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B726cfa:{NFSU2_TR(0x726cfa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726cfb:{NFSU2_TR(0x726cfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726d00ull));
TAIL_STATIC(0x724792u,724);
}
B726d00:L726d00:{c.instructions+=10;NFSU2_TR(0x726d00);
__builtin_memmove((R+4),gp(0x8180b8),4);
}
B726d06:{NFSU2_TR(0x726d06);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B726d09:{NFSU2_TR(0x726d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B726d0c:{NFSU2_TR(0x726d0c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B726d0e:{NFSU2_TR(0x726d0e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726d0f:{NFSU2_TR(0x726d0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726d10:{NFSU2_TR(0x726d10);
__builtin_memmove(gp(0x8b47c4),(R+0),4);
}
B726d15:{NFSU2_TR(0x726d15);
__builtin_memmove(gp(0x8b4804),(R+8),4);
}
B726d1b:{NFSU2_TR(0x726d1b);
__builtin_memmove(gp(0x8b4924),(R+4),4);
}
B726d21:{NFSU2_TR(0x726d21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726d26ull));
TAIL_STATIC(0x727030u,727);
}
B726d26:L726d26:{c.instructions+=4;NFSU2_TR(0x726d26);
__builtin_memmove((R+0),gp(0x8180b8),4);
}
B726d2b:{NFSU2_TR(0x726d2b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B726d2e:{NFSU2_TR(0x726d2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726d2f:{NFSU2_TR(0x726d2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726d34ull));
TAIL_STATIC(0x724792u,724);
}
B726d34:L726d34:{c.instructions+=6;NFSU2_TR(0x726d34);
__builtin_memmove((R+4),gp(0x8180b8),4);
}
B726d3a:{NFSU2_TR(0x726d3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B726d3d:{NFSU2_TR(0x726d3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726d3e:{NFSU2_TR(0x726d3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726d3f:{NFSU2_TR(0x726d3f);
__builtin_memmove(gp(0x8b47cc),(R+0),4);
}
B726d44:{NFSU2_TR(0x726d44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726d49ull));
TAIL_STATIC(0x727030u,727);
}
B726d49:L726d49:{c.instructions+=4;NFSU2_TR(0x726d49);
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
B726d4c:{NFSU2_TR(0x726d4c);
s4(0x8b47d8,u32(0x1ull));
}
B726d56:{NFSU2_TR(0x726d56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B726d57:{NFSU2_TR(0x726d57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B726d58:L726d58:{c.instructions+=2;NFSU2_TR(0x726d58);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b47d8),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B726d5f:{NFSU2_TR(0x726d5f);
if(r1(R+518)){{goto L726db2;}}
}
B726d61:L726d61:{c.instructions+=3;NFSU2_TR(0x726d61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726d62:{NFSU2_TR(0x726d62);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b47c4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726d68:{NFSU2_TR(0x726d68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726d6dull));
TAIL_STATIC(0x724894u,724);
}
B726d6d:L726d6d:{c.instructions+=4;NFSU2_TR(0x726d6d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B726d6f:{NFSU2_TR(0x726d6f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+28)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B726d75:{NFSU2_TR(0x726d75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726d76:{NFSU2_TR(0x726d76);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L726d9e;}}
}
B726d78:L726d78:{c.instructions+=1;NFSU2_TR(0x726d78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726d79:L726d79:{c.instructions+=4;NFSU2_TR(0x726d79);
__builtin_memmove((R+0),gp(0x8b47cc),4);
}
B726d7e:{NFSU2_TR(0x726d7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B726d81:{NFSU2_TR(0x726d81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B726d83:{NFSU2_TR(0x726d83);
if(r1(R+518)){{goto L726d94;}}
}
B726d85:L726d85:{c.instructions+=3;NFSU2_TR(0x726d85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B726d87:{NFSU2_TR(0x726d87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726d88:{NFSU2_TR(0x726d88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726d8dull));
TAIL_STATIC(0x724894u,724);
}
B726d8d:L726d8d:{c.instructions+=4;NFSU2_TR(0x726d8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B726d8f:{NFSU2_TR(0x726d8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726d90:{NFSU2_TR(0x726d90);
__builtin_memmove((R+0),(R+24),4);
}
B726d92:{NFSU2_TR(0x726d92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726d85u);}goto L726d85;}}
}
B726d94:L726d94:{c.instructions+=3;NFSU2_TR(0x726d94);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B726d95:{NFSU2_TR(0x726d95);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B726d9b:{NFSU2_TR(0x726d9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726d79u);}goto L726d79;}}
}
B726d9d:L726d9d:{c.instructions+=1;NFSU2_TR(0x726d9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B726d9e:L726d9e:{c.instructions+=2;NFSU2_TR(0x726d9e);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b47cc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726da4:{NFSU2_TR(0x726da4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726da9ull));
TAIL_STATIC(0x724894u,724);
}
B726da9:L726da9:{c.instructions+=3;NFSU2_TR(0x726da9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x8b47d8,u32(u32(m4(0x8b47d8))&u32(u32(0x0ull))));
w1(R+519,u8(s32(m4(0x8b47d8))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b47d8))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b47d8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B726db0:{NFSU2_TR(0x726db0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726db1:{NFSU2_TR(0x726db1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B726db2:L726db2:{c.instructions+=1;NFSU2_TR(0x726db2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B726db3:L726db3:{c.instructions+=11;NFSU2_TR(0x726db3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726db4:{NFSU2_TR(0x726db4);
__builtin_memmove((R+20),(R+16),4);
}
B726db6:{NFSU2_TR(0x726db6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B726db9:{NFSU2_TR(0x726db9);
__builtin_memmove((R+0),gp(0x8b47cc),4);
}
B726dbe:{NFSU2_TR(0x726dbe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726dbf:{NFSU2_TR(0x726dbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726dc0:{NFSU2_TR(0x726dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B726dc3:{NFSU2_TR(0x726dc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B726dc6:{NFSU2_TR(0x726dc6);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B726dca:{NFSU2_TR(0x726dca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726dcd:{NFSU2_TR(0x726dcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L726de3;}}
}
B726dcf:L726dcf:{c.instructions+=2;NFSU2_TR(0x726dcf);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726dd4:{NFSU2_TR(0x726dd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726dd9ull));
TAIL_STATIC(0x724792u,724);
}
B726dd9:L726dd9:{c.instructions+=3;NFSU2_TR(0x726dd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726dda:{NFSU2_TR(0x726dda);
__builtin_memmove((R+4),gp(0x8b47c4),4);
}
B726de0:{NFSU2_TR(0x726de0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B726de3:L726de3:{c.instructions+=2;NFSU2_TR(0x726de3);
u8 U[4];
w4(U+0,u32(0x84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726de8:{NFSU2_TR(0x726de8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726dedull));
TAIL_STATIC(0x724792u,724);
}
B726ded:L726ded:{c.instructions+=4;NFSU2_TR(0x726ded);
__builtin_memmove((R+12),(R+0),4);
}
B726def:{NFSU2_TR(0x726def);
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
B726df1:{NFSU2_TR(0x726df1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726df2:{NFSU2_TR(0x726df2);
if(r1(R+518)){{goto L726f12;}}
}
B726df8:L726df8:{c.instructions+=11;NFSU2_TR(0x726df8);
__builtin_memmove((R+0),gp(0x8b47cc),4);
}
B726dfd:{NFSU2_TR(0x726dfd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B726dff:{NFSU2_TR(0x726dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B726e01:{NFSU2_TR(0x726e01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726e02:{NFSU2_TR(0x726e02);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B726e04:{NFSU2_TR(0x726e04);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B726e06:{NFSU2_TR(0x726e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726e09:{NFSU2_TR(0x726e09);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726e0b:{NFSU2_TR(0x726e0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726e0c:{NFSU2_TR(0x726e0c);
__builtin_memmove((R+24),(R+0),4);
}
B726e0e:{NFSU2_TR(0x726e0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B726e11:L726e11:{c.instructions+=1;NFSU2_TR(0x726e11);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L726e13;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726e11u);}goto L726e11;}
}
B726e13:L726e13:{c.instructions+=7;NFSU2_TR(0x726e13);
w4(R+24,u32(m1(0x8b47f9)));
}
B726e1a:{NFSU2_TR(0x726e1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+28),(U+0),4);
}
B726e1d:{NFSU2_TR(0x726e1d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B726e1e:{NFSU2_TR(0x726e1e);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B726e22:{NFSU2_TR(0x726e22);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726e24:{NFSU2_TR(0x726e24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726e25:{NFSU2_TR(0x726e25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726e2aull));
TAIL_STATIC(0x72a195u,72a);
}
B726e2a:L726e2a:{c.instructions+=4;NFSU2_TR(0x726e2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B726e2c:{NFSU2_TR(0x726e2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726e2d:{NFSU2_TR(0x726e2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726e2e:{NFSU2_TR(0x726e2e);
if(r1(R+518)){{goto L726e39;}}
}
B726e30:L726e30:{c.instructions+=2;NFSU2_TR(0x726e30);
w4(R+0,u32(m1(0x8b47f9)));
}
B726e37:{NFSU2_TR(0x726e37);
{goto L726e6a;}
}
B726e39:L726e39:{c.instructions+=4;NFSU2_TR(0x726e39);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B726e3d:{NFSU2_TR(0x726e3d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726e3f:{NFSU2_TR(0x726e3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726e40:{NFSU2_TR(0x726e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726e45ull));
TAIL_STATIC(0x72a195u,72a);
}
B726e45:L726e45:{c.instructions+=4;NFSU2_TR(0x726e45);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B726e47:{NFSU2_TR(0x726e47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726e48:{NFSU2_TR(0x726e48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726e49:{NFSU2_TR(0x726e49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L726e67;}}
}
B726e4b:L726e4b:{c.instructions+=2;NFSU2_TR(0x726e4b);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B726e4f:{NFSU2_TR(0x726e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726e52:L726e52:{c.instructions+=5;NFSU2_TR(0x726e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B726e56:{NFSU2_TR(0x726e56);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726e58:{NFSU2_TR(0x726e58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726e5b:{NFSU2_TR(0x726e5b);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B726e5c:{NFSU2_TR(0x726e5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726e61ull));
TAIL_STATIC(0x72a195u,72a);
}
B726e61:L726e61:{c.instructions+=4;NFSU2_TR(0x726e61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B726e63:{NFSU2_TR(0x726e63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726e64:{NFSU2_TR(0x726e64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726e65:{NFSU2_TR(0x726e65);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726e52u);}goto L726e52;}}
}
B726e67:L726e67:{c.instructions+=1;NFSU2_TR(0x726e67);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726e6a:L726e6a:{c.instructions+=4;NFSU2_TR(0x726e6a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B726e6c:{NFSU2_TR(0x726e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726e6f:{NFSU2_TR(0x726e6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726e72:{NFSU2_TR(0x726e72);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L726eb9;}}
}
B726e74:L726e74:{c.instructions+=3;NFSU2_TR(0x726e74);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726e77:{NFSU2_TR(0x726e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726e7a:{NFSU2_TR(0x726e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B726e7d:L726e7d:{c.instructions+=5;NFSU2_TR(0x726e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B726e80:{NFSU2_TR(0x726e80);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffe8ull))));
}
B726e83:{NFSU2_TR(0x726e83);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726e85:{NFSU2_TR(0x726e85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726e86:{NFSU2_TR(0x726e86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726e8bull));
TAIL_STATIC(0x72a195u,72a);
}
B726e8b:L726e8b:{c.instructions+=4;NFSU2_TR(0x726e8b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B726e8d:{NFSU2_TR(0x726e8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726e8e:{NFSU2_TR(0x726e8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726e8f:{NFSU2_TR(0x726e8f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L726e9e;}}
}
B726e91:L726e91:{c.instructions+=4;NFSU2_TR(0x726e91);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B726e94:{NFSU2_TR(0x726e94);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x818a08ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+8))));
}
B726e9b:{NFSU2_TR(0x726e9b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B726e9c:{NFSU2_TR(0x726e9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726e91u);}goto L726e91;}}
}
B726e9e:L726e9e:{c.instructions+=3;NFSU2_TR(0x726e9e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726ea0:{NFSU2_TR(0x726ea0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726ea3:{NFSU2_TR(0x726ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726ea8ull));
TAIL_STATIC(0x72a195u,72a);
}
B726ea8:L726ea8:{c.instructions+=7;NFSU2_TR(0x726ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B726eac:{NFSU2_TR(0x726eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B726eaf:{NFSU2_TR(0x726eaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726eb0:{NFSU2_TR(0x726eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B726eb3:{NFSU2_TR(0x726eb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726eb4:{NFSU2_TR(0x726eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B726eb7:{NFSU2_TR(0x726eb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726e7du);}goto L726e7d;}}
}
B726eb9:L726eb9:{c.instructions+=5;NFSU2_TR(0x726eb9);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B726ebd:{NFSU2_TR(0x726ebd);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726ebf:{NFSU2_TR(0x726ebf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726ec0:{NFSU2_TR(0x726ec0);
__builtin_memmove(gp(0x8b47d4),(R+28),4);
}
B726ec6:{NFSU2_TR(0x726ec6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726ecbull));
TAIL_STATIC(0x72a195u,72a);
}
B726ecb:L726ecb:{c.instructions+=4;NFSU2_TR(0x726ecb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B726ecd:{NFSU2_TR(0x726ecd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726ece:{NFSU2_TR(0x726ece);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726ecf:{NFSU2_TR(0x726ecf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L726ede;}}
}
B726ed1:L726ed1:{c.instructions+=4;NFSU2_TR(0x726ed1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B726ed4:{NFSU2_TR(0x726ed4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x818a08ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+8))));
}
B726edb:{NFSU2_TR(0x726edb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B726edc:{NFSU2_TR(0x726edc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726ed1u);}goto L726ed1;}}
}
B726ede:L726ede:{c.instructions+=6;NFSU2_TR(0x726ede);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726edf:{NFSU2_TR(0x726edf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726ee2:{NFSU2_TR(0x726ee2);
__builtin_memmove(gp(0x8b47d0),(R+28),4);
}
B726ee8:{NFSU2_TR(0x726ee8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726eeb:{NFSU2_TR(0x726eeb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726eee:{NFSU2_TR(0x726eee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726ef3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7268bfu);}goto L7268bf;}
}
B726ef3:L726ef3:{c.instructions+=7;NFSU2_TR(0x726ef3);
__builtin_memmove((R+0),gp(0x8b4804),4);
}
B726ef8:{NFSU2_TR(0x726ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B726efb:{NFSU2_TR(0x726efb);
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
B726efe:{NFSU2_TR(0x726efe);
s4(0x8b4800,u32(0x72655aull));
}
B726f08:{NFSU2_TR(0x726f08);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w4(U+8,u32(0x1ull));
s4(u32(r4(U+4)),r4(U+8));
}
B726f0f:{NFSU2_TR(0x726f0f);
__builtin_memmove((R+0),(R+12),4);
}
B726f11:{NFSU2_TR(0x726f11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B726f12:L726f12:{c.instructions+=4;NFSU2_TR(0x726f12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B726f13:{NFSU2_TR(0x726f13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B726f14:{NFSU2_TR(0x726f14);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B726f15:{NFSU2_TR(0x726f15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B726f16:L726f16:{c.instructions+=9;NFSU2_TR(0x726f16);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726f17:{NFSU2_TR(0x726f17);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B726f1b:{NFSU2_TR(0x726f1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726f1c:{NFSU2_TR(0x726f1c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B726f20:{NFSU2_TR(0x726f20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726f21:{NFSU2_TR(0x726f21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726f22:{NFSU2_TR(0x726f22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726f23:{NFSU2_TR(0x726f23);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B726f25:{NFSU2_TR(0x726f25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726f2aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7267e1u);}goto L7267e1;}
}
B726f2a:L726f2a:{c.instructions+=9;NFSU2_TR(0x726f2a);
__builtin_memmove((R+0),gp(0x8b47cc),4);
}
B726f2f:{NFSU2_TR(0x726f2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726f30:{NFSU2_TR(0x726f30);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B726f33:{NFSU2_TR(0x726f33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726f34:{NFSU2_TR(0x726f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B726f37:{NFSU2_TR(0x726f37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B726f39:{NFSU2_TR(0x726f39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B726f3b:{NFSU2_TR(0x726f3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B726f3d:{NFSU2_TR(0x726f3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L726f47;}}
}
B726f3f:L726f3f:{c.instructions+=2;NFSU2_TR(0x726f3f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B726f41:{NFSU2_TR(0x726f41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L726f83;}}
}
B726f43:L726f43:{c.instructions+=2;NFSU2_TR(0x726f43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(r4(R+8))));
s4(u32(r4(R+4)),r4(U+0));
}
B726f45:{NFSU2_TR(0x726f45);
{goto L726f7c;}
}
B726f47:L726f47:{c.instructions+=2;NFSU2_TR(0x726f47);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B726f49:{NFSU2_TR(0x726f49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L726f7c;}}
}
B726f4b:L726f4b:{c.instructions+=2;NFSU2_TR(0x726f4b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B726f4d:{NFSU2_TR(0x726f4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L726f66;}}
}
B726f4f:L726f4f:{c.instructions+=5;NFSU2_TR(0x726f4f);
__builtin_memmove((R+4),gp(0x8b47cc),4);
}
B726f55:{NFSU2_TR(0x726f55);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B726f57:{NFSU2_TR(0x726f57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B726f59:{NFSU2_TR(0x726f59);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B726f5b:{NFSU2_TR(0x726f5b);
if(r1(R+518)){{goto L726f61;}}
}
B726f5d:L726f5d:{c.instructions+=2;NFSU2_TR(0x726f5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B726f5f:{NFSU2_TR(0x726f5f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B726f61:L726f61:{c.instructions+=3;NFSU2_TR(0x726f61);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B726f63:{NFSU2_TR(0x726f63);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B726f64:{NFSU2_TR(0x726f64);
{goto L726f74;}
}
B726f66:L726f66:{c.instructions+=2;NFSU2_TR(0x726f66);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B726f68:{NFSU2_TR(0x726f68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L726f70;}}
}
B726f6a:L726f6a:{c.instructions+=3;NFSU2_TR(0x726f6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B726f6c:{NFSU2_TR(0x726f6c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B726f6e:{NFSU2_TR(0x726f6e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726f61u);}goto L726f61;}
}
B726f70:L726f70:{c.instructions+=2;NFSU2_TR(0x726f70);
__builtin_memmove((R+0),(R+8),4);
}
B726f72:{NFSU2_TR(0x726f72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B726f74:L726f74:{c.instructions+=2;NFSU2_TR(0x726f74);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B726f76:{NFSU2_TR(0x726f76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726f47u);}goto L726f47;}}
}
B726f78:L726f78:{c.instructions+=2;NFSU2_TR(0x726f78);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B726f7a:{NFSU2_TR(0x726f7a);
if(r1(R+518)){{goto L726f83;}}
}
B726f7c:L726f7c:{c.instructions+=2;NFSU2_TR(0x726f7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726f7d:{NFSU2_TR(0x726f7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726f82ull));
TAIL_STATIC(0x724894u,724);
}
B726f82:L726f82:{c.instructions+=1;NFSU2_TR(0x726f82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726f83:L726f83:{c.instructions+=4;NFSU2_TR(0x726f83);
__builtin_memmove((R+0),gp(0x8b47cc),4);
}
B726f88:{NFSU2_TR(0x726f88);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B726f8a:{NFSU2_TR(0x726f8a);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B726f8d:{NFSU2_TR(0x726f8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L726fb2;}}
}
B726f8f:L726f8f:{c.instructions+=6;NFSU2_TR(0x726f8f);
__builtin_memmove((R+0),gp(0x8b4804),4);
}
B726f94:{NFSU2_TR(0x726f94);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B726f97:{NFSU2_TR(0x726f97);
__builtin_memmove((R+0),gp(0x8b47c4),4);
}
B726f9c:{NFSU2_TR(0x726f9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B726f9f:{NFSU2_TR(0x726f9f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B726fa1:{NFSU2_TR(0x726fa1);
if(r1(R+518)){{goto L726fb2;}}
}
B726fa3:L726fa3:{c.instructions+=2;NFSU2_TR(0x726fa3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726fa4:{NFSU2_TR(0x726fa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726fa9ull));
TAIL_STATIC(0x724894u,724);
}
B726fa9:L726fa9:{c.instructions+=3;NFSU2_TR(0x726fa9);
__builtin_memmove((R+0),gp(0x8b47c4),4);
}
B726fae:{NFSU2_TR(0x726fae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B726faf:{NFSU2_TR(0x726faf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B726fb2:L726fb2:{c.instructions+=5;NFSU2_TR(0x726fb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B726fb3:{NFSU2_TR(0x726fb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B726fb4:{NFSU2_TR(0x726fb4);
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
B726fb6:{NFSU2_TR(0x726fb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B726fb7:{NFSU2_TR(0x726fb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B726fb8:L726fb8:{c.instructions+=10;NFSU2_TR(0x726fb8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726fb9:{NFSU2_TR(0x726fb9);
__builtin_memmove((R+20),(R+16),4);
}
B726fbb:{NFSU2_TR(0x726fbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726fbc:{NFSU2_TR(0x726fbc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726fbd:{NFSU2_TR(0x726fbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B726fc0:{NFSU2_TR(0x726fc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726fc1:{NFSU2_TR(0x726fc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B726fc4:{NFSU2_TR(0x726fc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726fc5:{NFSU2_TR(0x726fc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B726fc8:{NFSU2_TR(0x726fc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x726fcdull));
TAIL_STATIC(0x7249a4u,724);
}
B726fcd:L726fcd:{c.instructions+=6;NFSU2_TR(0x726fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B726fd0:{NFSU2_TR(0x726fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B726fd3:{NFSU2_TR(0x726fd3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B726fd6:{NFSU2_TR(0x726fd6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B726fd8:{NFSU2_TR(0x726fd8);
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
B726fda:{NFSU2_TR(0x726fda);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x727001u,727);}
}
B726fdc:L726fdc:{c.instructions+=7;NFSU2_TR(0x726fdc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726fdd:{NFSU2_TR(0x726fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B726fe0:{NFSU2_TR(0x726fe0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B726fe1:{NFSU2_TR(0x726fe1);
__builtin_memmove((R+28),gp(0x8b466c),4);
}
B726fe7:{NFSU2_TR(0x726fe7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B726fea:{NFSU2_TR(0x726fea);
u8 U[12];
w4(U+0,u32(u32(u32(0x6dull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B726fee:{NFSU2_TR(0x726fee);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B726ff0:L726ff0:{c.instructions+=2;NFSU2_TR(0x726ff0);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B726ff3:{NFSU2_TR(0x726ff3);
if(r1(R+518)){{goto L726ff6;}}
}
B726ff5:L726ff5:{c.instructions+=1;NFSU2_TR(0x726ff5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B726ff6:L726ff6:{c.instructions+=3;NFSU2_TR(0x726ff6);
w1(R+512,carry<u32>(r4(R+24),u32(0x90ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x90ull))));
}
B726ffc:{NFSU2_TR(0x726ffc);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B726ffd:{NFSU2_TR(0x726ffd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x726ff0u);}goto L726ff0;}}
}
B726fff:L726fff:{c.instructions+=1;NFSU2_TR(0x726fff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
TAIL_STATIC(0x727000u,727);
}
XIT:NFSU2_TR_EXIT(0x726,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
