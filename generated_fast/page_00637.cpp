#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_438(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_493(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_5a6(u8* __restrict R,Cpu& c);
u32 body_5b4(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_632(u8* __restrict R,Cpu& c);
u32 body_633(u8* __restrict R,Cpu& c);
u32 body_634(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x637,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x637,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_637(u8* __restrict R,Cpu& c);
u32 page_637(Cpu& c){return body_637(c.regs.data(),c);}
__attribute__((noinline)) u32 body_637(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x637000:goto L637000;
case 0x637040:goto L637040;
case 0x637043:c.instructions+=8;goto B637043;
case 0x637044:c.instructions+=7;goto B637044;
case 0x637045:c.instructions+=6;goto B637045;
case 0x637046:c.instructions+=5;goto B637046;
case 0x637047:c.instructions+=4;goto B637047;
case 0x63704b:c.instructions+=3;goto B63704b;
case 0x63704d:c.instructions+=2;goto B63704d;
case 0x63704f:c.instructions+=1;goto B63704f;
case 0x637050:goto L637050;
case 0x637053:c.instructions+=1;goto B637053;
case 0x637055:goto L637055;
case 0x637058:c.instructions+=1;goto B637058;
case 0x63705e:goto L63705e;
case 0x637061:c.instructions+=1;goto B637061;
case 0x637063:goto L637063;
case 0x637069:c.instructions+=1;goto B637069;
case 0x63706b:goto L63706b;
case 0x63706e:c.instructions+=1;goto B63706e;
case 0x637070:goto L637070;
case 0x637073:c.instructions+=4;goto B637073;
case 0x637075:c.instructions+=3;goto B637075;
case 0x637076:c.instructions+=2;goto B637076;
case 0x637077:c.instructions+=1;goto B637077;
case 0x63707c:goto L63707c;
case 0x63707f:c.instructions+=2;goto B63707f;
case 0x637081:c.instructions+=1;goto B637081;
case 0x637083:goto L637083;
case 0x637086:c.instructions+=1;goto B637086;
case 0x637088:goto L637088;
case 0x63708b:c.instructions+=1;goto B63708b;
case 0x63708d:goto L63708d;
case 0x637090:c.instructions+=1;goto B637090;
case 0x637092:goto L637092;
case 0x637099:c.instructions+=1;goto B637099;
case 0x63709b:goto L63709b;
case 0x63709e:c.instructions+=8;goto B63709e;
case 0x6370a4:c.instructions+=7;goto B6370a4;
case 0x6370a6:c.instructions+=6;goto B6370a6;
case 0x6370ac:c.instructions+=5;goto B6370ac;
case 0x6370ae:c.instructions+=4;goto B6370ae;
case 0x6370b0:c.instructions+=3;goto B6370b0;
case 0x6370b2:c.instructions+=2;goto B6370b2;
case 0x6370b4:c.instructions+=1;goto B6370b4;
case 0x6370b6:goto L6370b6;
case 0x6370bc:c.instructions+=1;goto B6370bc;
case 0x6370be:goto L6370be;
case 0x6370c4:goto L6370c4;
case 0x6370c5:c.instructions+=4;goto B6370c5;
case 0x6370c7:c.instructions+=3;goto B6370c7;
case 0x6370c8:c.instructions+=2;goto B6370c8;
case 0x6370cd:c.instructions+=1;goto B6370cd;
case 0x6370d2:goto L6370d2;
case 0x6370d4:c.instructions+=1;goto B6370d4;
case 0x6370d6:goto L6370d6;
case 0x6370dc:goto L6370dc;
case 0x6370de:c.instructions+=1;goto B6370de;
case 0x6370e3:goto L6370e3;
case 0x6370e4:c.instructions+=2;goto B6370e4;
case 0x6370ea:c.instructions+=1;goto B6370ea;
case 0x6370f0:goto L6370f0;
case 0x6370f5:c.instructions+=1;goto B6370f5;
case 0x6370fa:goto L6370fa;
case 0x6370ff:c.instructions+=2;goto B6370ff;
case 0x637103:c.instructions+=1;goto B637103;
case 0x637108:goto L637108;
case 0x63710d:c.instructions+=2;goto B63710d;
case 0x637111:c.instructions+=1;goto B637111;
case 0x637116:goto L637116;
case 0x63711b:c.instructions+=2;goto B63711b;
case 0x63711f:c.instructions+=1;goto B63711f;
case 0x637124:goto L637124;
case 0x637127:c.instructions+=3;goto B637127;
case 0x63712b:c.instructions+=2;goto B63712b;
case 0x637130:c.instructions+=1;goto B637130;
case 0x637136:goto L637136;
case 0x637138:c.instructions+=1;goto B637138;
case 0x637140:goto L637140;
case 0x637144:c.instructions+=8;goto B637144;
case 0x637147:c.instructions+=7;goto B637147;
case 0x637149:c.instructions+=6;goto B637149;
case 0x63714b:c.instructions+=5;goto B63714b;
case 0x63714c:c.instructions+=4;goto B63714c;
case 0x63714d:c.instructions+=3;goto B63714d;
case 0x63714e:c.instructions+=2;goto B63714e;
case 0x637153:c.instructions+=1;goto B637153;
case 0x637158:goto L637158;
case 0x63715b:c.instructions+=1;goto B63715b;
case 0x63715d:goto L63715d;
case 0x637160:c.instructions+=1;goto B637160;
case 0x637162:goto L637162;
case 0x637165:c.instructions+=1;goto B637165;
case 0x637167:goto L637167;
case 0x637169:c.instructions+=2;goto B637169;
case 0x63716b:c.instructions+=1;goto B63716b;
case 0x637170:goto L637170;
case 0x637171:c.instructions+=4;goto B637171;
case 0x637174:c.instructions+=3;goto B637174;
case 0x637175:c.instructions+=2;goto B637175;
case 0x637178:c.instructions+=1;goto B637178;
case 0x63717a:goto L63717a;
case 0x63717d:c.instructions+=1;goto B63717d;
case 0x63717f:goto L63717f;
case 0x637180:c.instructions+=5;goto B637180;
case 0x637181:c.instructions+=4;goto B637181;
case 0x637182:c.instructions+=3;goto B637182;
case 0x637183:c.instructions+=2;goto B637183;
case 0x637186:c.instructions+=1;goto B637186;
case 0x637190:goto L637190;
case 0x637192:c.instructions+=1;goto B637192;
case 0x637197:goto L637197;
case 0x6371a0:goto L6371a0;
case 0x6371a4:c.instructions+=7;goto B6371a4;
case 0x6371a5:c.instructions+=6;goto B6371a5;
case 0x6371a6:c.instructions+=5;goto B6371a6;
case 0x6371aa:c.instructions+=4;goto B6371aa;
case 0x6371ab:c.instructions+=3;goto B6371ab;
case 0x6371ac:c.instructions+=2;goto B6371ac;
case 0x6371ae:c.instructions+=1;goto B6371ae;
case 0x6371b3:goto L6371b3;
case 0x6371b6:c.instructions+=1;goto B6371b6;
case 0x6371b8:goto L6371b8;
case 0x6371bb:c.instructions+=1;goto B6371bb;
case 0x6371bd:goto L6371bd;
case 0x6371c0:c.instructions+=1;goto B6371c0;
case 0x6371c2:goto L6371c2;
case 0x6371c4:c.instructions+=2;goto B6371c4;
case 0x6371cb:c.instructions+=1;goto B6371cb;
case 0x6371d0:goto L6371d0;
case 0x6371d1:c.instructions+=2;goto B6371d1;
case 0x6371d2:c.instructions+=1;goto B6371d2;
case 0x6371e0:goto L6371e0;
case 0x6371e1:c.instructions+=8;goto B6371e1;
case 0x6371e3:c.instructions+=7;goto B6371e3;
case 0x6371e5:c.instructions+=6;goto B6371e5;
case 0x6371e7:c.instructions+=5;goto B6371e7;
case 0x6371e9:c.instructions+=4;goto B6371e9;
case 0x6371eb:c.instructions+=3;goto B6371eb;
case 0x6371ec:c.instructions+=2;goto B6371ec;
case 0x6371f1:c.instructions+=1;goto B6371f1;
case 0x6371f6:goto L6371f6;
case 0x6371f8:c.instructions+=1;goto B6371f8;
case 0x6371fa:goto L6371fa;
case 0x6371fb:c.instructions+=4;goto B6371fb;
case 0x6371fc:c.instructions+=3;goto B6371fc;
case 0x6371fd:c.instructions+=2;goto B6371fd;
case 0x6371ff:c.instructions+=1;goto B6371ff;
case 0x637204:goto L637204;
case 0x637207:c.instructions+=3;goto B637207;
case 0x637208:c.instructions+=2;goto B637208;
case 0x63720a:c.instructions+=1;goto B63720a;
case 0x63720c:goto L63720c;
case 0x63720e:c.instructions+=1;goto B63720e;
case 0x637210:goto L637210;
case 0x637212:c.instructions+=7;goto B637212;
case 0x637214:c.instructions+=6;goto B637214;
case 0x637215:c.instructions+=5;goto B637215;
case 0x637217:c.instructions+=4;goto B637217;
case 0x637219:c.instructions+=3;goto B637219;
case 0x63721a:c.instructions+=2;goto B63721a;
case 0x63721f:c.instructions+=1;goto B63721f;
case 0x637224:goto L637224;
case 0x637225:c.instructions+=2;goto B637225;
case 0x637227:c.instructions+=1;goto B637227;
case 0x637229:goto L637229;
case 0x63722b:c.instructions+=2;goto B63722b;
case 0x637231:c.instructions+=1;goto B637231;
case 0x637236:goto L637236;
case 0x63723b:c.instructions+=1;goto B63723b;
case 0x637241:goto L637241;
case 0x637244:c.instructions+=1;goto B637244;
case 0x637246:goto L637246;
case 0x637249:c.instructions+=1;goto B637249;
case 0x63724b:goto L63724b;
case 0x63724e:c.instructions+=1;goto B63724e;
case 0x637250:goto L637250;
case 0x637252:c.instructions+=2;goto B637252;
case 0x637258:c.instructions+=1;goto B637258;
case 0x63725d:goto L63725d;
case 0x63725e:c.instructions+=3;goto B63725e;
case 0x637261:c.instructions+=2;goto B637261;
case 0x637264:c.instructions+=1;goto B637264;
case 0x637266:goto L637266;
case 0x637267:c.instructions+=1;goto B637267;
case 0x637268:goto L637268;
case 0x637269:c.instructions+=1;goto B637269;
case 0x637270:goto L637270;
case 0x637274:c.instructions+=5;goto B637274;
case 0x637275:c.instructions+=4;goto B637275;
case 0x637276:c.instructions+=3;goto B637276;
case 0x637277:c.instructions+=2;goto B637277;
case 0x637279:c.instructions+=1;goto B637279;
case 0x63727e:goto L63727e;
case 0x637280:c.instructions+=3;goto B637280;
case 0x637283:c.instructions+=2;goto B637283;
case 0x637285:c.instructions+=1;goto B637285;
case 0x63728b:goto L63728b;
case 0x63728e:c.instructions+=3;goto B63728e;
case 0x63728f:c.instructions+=2;goto B63728f;
case 0x637290:c.instructions+=1;goto B637290;
case 0x637295:goto L637295;
case 0x63729b:c.instructions+=4;goto B63729b;
case 0x63729e:c.instructions+=3;goto B63729e;
case 0x6372a0:c.instructions+=2;goto B6372a0;
case 0x6372a6:c.instructions+=1;goto B6372a6;
case 0x6372a7:goto L6372a7;
case 0x6372a9:c.instructions+=1;goto B6372a9;
case 0x6372ab:goto L6372ab;
case 0x6372ac:c.instructions+=3;goto B6372ac;
case 0x6372b2:c.instructions+=2;goto B6372b2;
case 0x6372b5:c.instructions+=1;goto B6372b5;
case 0x6372b7:goto L6372b7;
case 0x6372b9:goto L6372b9;
case 0x6372bf:c.instructions+=2;goto B6372bf;
case 0x6372c1:c.instructions+=1;goto B6372c1;
case 0x6372c3:goto L6372c3;
case 0x6372c5:c.instructions+=5;goto B6372c5;
case 0x6372c7:c.instructions+=4;goto B6372c7;
case 0x6372c9:c.instructions+=3;goto B6372c9;
case 0x6372ca:c.instructions+=2;goto B6372ca;
case 0x6372cc:c.instructions+=1;goto B6372cc;
case 0x6372d1:goto L6372d1;
case 0x6372d3:c.instructions+=2;goto B6372d3;
case 0x6372d5:c.instructions+=1;goto B6372d5;
case 0x6372da:goto L6372da;
case 0x6372dc:c.instructions+=1;goto B6372dc;
case 0x6372e0:goto L6372e0;
case 0x6372e4:c.instructions+=2;goto B6372e4;
case 0x6372e6:c.instructions+=1;goto B6372e6;
case 0x6372e8:goto L6372e8;
case 0x6372eb:c.instructions+=1;goto B6372eb;
case 0x6372ed:goto L6372ed;
case 0x6372ef:c.instructions+=6;goto B6372ef;
case 0x6372f1:c.instructions+=5;goto B6372f1;
case 0x6372f2:c.instructions+=4;goto B6372f2;
case 0x6372f3:c.instructions+=3;goto B6372f3;
case 0x6372f4:c.instructions+=2;goto B6372f4;
case 0x6372f9:c.instructions+=1;goto B6372f9;
case 0x6372fe:goto L6372fe;
case 0x637301:c.instructions+=1;goto B637301;
case 0x637303:goto L637303;
case 0x637306:c.instructions+=1;goto B637306;
case 0x637308:goto L637308;
case 0x63730b:c.instructions+=1;goto B63730b;
case 0x63730d:goto L63730d;
case 0x637314:c.instructions+=1;goto B637314;
case 0x637316:goto L637316;
case 0x63731c:c.instructions+=2;goto B63731c;
case 0x63731e:c.instructions+=1;goto B63731e;
case 0x637320:goto L637320;
case 0x637323:c.instructions+=1;goto B637323;
case 0x637325:goto L637325;
case 0x637328:c.instructions+=1;goto B637328;
case 0x63732a:goto L63732a;
case 0x63732d:c.instructions+=1;goto B63732d;
case 0x63732f:goto L63732f;
case 0x63733a:goto L63733a;
case 0x63733c:c.instructions+=1;goto B63733c;
case 0x637341:goto L637341;
case 0x637344:c.instructions+=1;goto B637344;
case 0x637346:goto L637346;
case 0x637348:c.instructions+=6;goto B637348;
case 0x63734a:c.instructions+=5;goto B63734a;
case 0x63734c:c.instructions+=4;goto B63734c;
case 0x63734d:c.instructions+=3;goto B63734d;
case 0x63734e:c.instructions+=2;goto B63734e;
case 0x637353:c.instructions+=1;goto B637353;
case 0x637358:goto L637358;
case 0x63735a:c.instructions+=2;goto B63735a;
case 0x637360:c.instructions+=1;goto B637360;
case 0x637365:goto L637365;
case 0x637366:c.instructions+=2;goto B637366;
case 0x63736c:c.instructions+=1;goto B63736c;
case 0x637372:goto L637372;
case 0x637375:c.instructions+=3;goto B637375;
case 0x637378:c.instructions+=2;goto B637378;
case 0x637379:c.instructions+=1;goto B637379;
case 0x63737b:goto L63737b;
case 0x63737d:c.instructions+=1;goto B63737d;
case 0x637380:goto L637380;
case 0x637388:c.instructions+=2;goto B637388;
case 0x63738b:c.instructions+=1;goto B63738b;
case 0x63738d:goto L63738d;
case 0x63738f:c.instructions+=6;goto B63738f;
case 0x637392:c.instructions+=5;goto B637392;
case 0x637394:c.instructions+=4;goto B637394;
case 0x637396:c.instructions+=3;goto B637396;
case 0x637397:c.instructions+=2;goto B637397;
case 0x637398:c.instructions+=1;goto B637398;
case 0x63739d:goto L63739d;
case 0x63739f:c.instructions+=1;goto B63739f;
case 0x6373a4:goto L6373a4;
case 0x6373a5:c.instructions+=2;goto B6373a5;
case 0x6373a8:c.instructions+=1;goto B6373a8;
case 0x6373aa:goto L6373aa;
case 0x6373ab:c.instructions+=5;goto B6373ab;
case 0x6373ad:c.instructions+=4;goto B6373ad;
case 0x6373af:c.instructions+=3;goto B6373af;
case 0x6373b1:c.instructions+=2;goto B6373b1;
case 0x6373b4:c.instructions+=1;goto B6373b4;
case 0x6373b9:goto L6373b9;
case 0x6373ba:c.instructions+=2;goto B6373ba;
case 0x6373bb:c.instructions+=1;goto B6373bb;
case 0x6373be:goto L6373be;
case 0x6373c0:c.instructions+=3;goto B6373c0;
case 0x6373c1:c.instructions+=2;goto B6373c1;
case 0x6373c7:c.instructions+=1;goto B6373c7;
case 0x6373cc:goto L6373cc;
case 0x6373cd:goto L6373cd;
case 0x6373cf:c.instructions+=4;goto B6373cf;
case 0x6373d1:c.instructions+=3;goto B6373d1;
case 0x6373d3:c.instructions+=2;goto B6373d3;
case 0x6373d6:c.instructions+=1;goto B6373d6;
case 0x6373db:goto L6373db;
case 0x6373dc:c.instructions+=2;goto B6373dc;
case 0x6373dd:c.instructions+=1;goto B6373dd;
case 0x6373e0:goto L6373e0;
case 0x6373e2:c.instructions+=13;goto B6373e2;
case 0x6373e7:c.instructions+=12;goto B6373e7;
case 0x6373ed:c.instructions+=11;goto B6373ed;
case 0x6373ee:c.instructions+=10;goto B6373ee;
case 0x6373f5:c.instructions+=9;goto B6373f5;
case 0x6373f6:c.instructions+=8;goto B6373f6;
case 0x6373f7:c.instructions+=7;goto B6373f7;
case 0x6373f8:c.instructions+=6;goto B6373f8;
case 0x6373fa:c.instructions+=5;goto B6373fa;
case 0x6373fb:c.instructions+=4;goto B6373fb;
case 0x6373fe:c.instructions+=3;goto B6373fe;
case 0x637400:c.instructions+=2;goto B637400;
case 0x637404:c.instructions+=1;goto B637404;
case 0x637409:goto L637409;
case 0x63740d:c.instructions+=17;goto B63740d;
case 0x637411:c.instructions+=16;goto B637411;
case 0x637415:c.instructions+=15;goto B637415;
case 0x637418:c.instructions+=14;goto B637418;
case 0x63741c:c.instructions+=13;goto B63741c;
case 0x63741e:c.instructions+=12;goto B63741e;
case 0x637421:c.instructions+=11;goto B637421;
case 0x637425:c.instructions+=10;goto B637425;
case 0x637426:c.instructions+=9;goto B637426;
case 0x637428:c.instructions+=8;goto B637428;
case 0x63742c:c.instructions+=7;goto B63742c;
case 0x63742e:c.instructions+=6;goto B63742e;
case 0x637431:c.instructions+=5;goto B637431;
case 0x637437:c.instructions+=4;goto B637437;
case 0x63743d:c.instructions+=3;goto B63743d;
case 0x637443:c.instructions+=2;goto B637443;
case 0x637449:c.instructions+=1;goto B637449;
case 0x63744e:goto L63744e;
case 0x637452:c.instructions+=7;goto B637452;
case 0x637454:c.instructions+=6;goto B637454;
case 0x637456:c.instructions+=5;goto B637456;
case 0x637457:c.instructions+=4;goto B637457;
case 0x63745d:c.instructions+=3;goto B63745d;
case 0x63745e:c.instructions+=2;goto B63745e;
case 0x637464:c.instructions+=1;goto B637464;
case 0x637469:goto L637469;
case 0x63746d:c.instructions+=13;goto B63746d;
case 0x637470:c.instructions+=12;goto B637470;
case 0x637476:c.instructions+=11;goto B637476;
case 0x63747c:c.instructions+=10;goto B63747c;
case 0x637482:c.instructions+=9;goto B637482;
case 0x637488:c.instructions+=8;goto B637488;
case 0x63748f:c.instructions+=7;goto B63748f;
case 0x637490:c.instructions+=6;goto B637490;
case 0x637492:c.instructions+=5;goto B637492;
case 0x637493:c.instructions+=4;goto B637493;
case 0x637494:c.instructions+=3;goto B637494;
case 0x63749b:c.instructions+=2;goto B63749b;
case 0x63749e:c.instructions+=1;goto B63749e;
case 0x6374b0:goto L6374b0;
case 0x6374b6:c.instructions+=8;goto B6374b6;
case 0x6374b7:c.instructions+=7;goto B6374b7;
case 0x6374b8:c.instructions+=6;goto B6374b8;
case 0x6374ba:c.instructions+=5;goto B6374ba;
case 0x6374bb:c.instructions+=4;goto B6374bb;
case 0x6374c1:c.instructions+=3;goto B6374c1;
case 0x6374c9:c.instructions+=2;goto B6374c9;
case 0x6374cb:c.instructions+=1;goto B6374cb;
case 0x6374d0:goto L6374d0;
case 0x6374d1:c.instructions+=2;goto B6374d1;
case 0x6374d3:c.instructions+=1;goto B6374d3;
case 0x6374d8:goto L6374d8;
case 0x6374dc:c.instructions+=6;goto B6374dc;
case 0x6374e0:c.instructions+=5;goto B6374e0;
case 0x6374e1:c.instructions+=4;goto B6374e1;
case 0x6374e4:c.instructions+=3;goto B6374e4;
case 0x6374e8:c.instructions+=2;goto B6374e8;
case 0x6374ec:c.instructions+=1;goto B6374ec;
case 0x6374ee:goto L6374ee;
case 0x6374f2:c.instructions+=6;goto B6374f2;
case 0x6374f3:c.instructions+=5;goto B6374f3;
case 0x6374f9:c.instructions+=4;goto B6374f9;
case 0x6374fb:c.instructions+=3;goto B6374fb;
case 0x6374fd:c.instructions+=2;goto B6374fd;
case 0x637501:c.instructions+=1;goto B637501;
case 0x637506:goto L637506;
case 0x637508:c.instructions+=3;goto B637508;
case 0x63750a:c.instructions+=2;goto B63750a;
case 0x63750e:c.instructions+=1;goto B63750e;
case 0x637513:goto L637513;
case 0x637515:c.instructions+=4;goto B637515;
case 0x637517:c.instructions+=3;goto B637517;
case 0x637519:c.instructions+=2;goto B637519;
case 0x63751d:c.instructions+=1;goto B63751d;
case 0x637522:goto L637522;
case 0x637524:c.instructions+=3;goto B637524;
case 0x637526:c.instructions+=2;goto B637526;
case 0x63752a:c.instructions+=1;goto B63752a;
case 0x63752f:goto L63752f;
case 0x637533:c.instructions+=4;goto B637533;
case 0x637538:c.instructions+=3;goto B637538;
case 0x63753a:c.instructions+=2;goto B63753a;
case 0x637542:c.instructions+=1;goto B637542;
case 0x637548:goto L637548;
case 0x63754c:c.instructions+=1;goto B63754c;
case 0x637551:goto L637551;
case 0x637555:c.instructions+=2;goto B637555;
case 0x63755a:c.instructions+=1;goto B63755a;
case 0x63755c:goto L63755c;
case 0x637560:goto L637560;
case 0x637562:c.instructions+=4;goto B637562;
case 0x637566:c.instructions+=3;goto B637566;
case 0x637567:c.instructions+=2;goto B637567;
case 0x63756a:c.instructions+=1;goto B63756a;
case 0x63756c:goto L63756c;
case 0x637573:c.instructions+=1;goto B637573;
case 0x63757a:goto L63757a;
case 0x63757e:c.instructions+=1;goto B63757e;
case 0x637580:goto L637580;
case 0x637584:c.instructions+=1;goto B637584;
case 0x637586:goto L637586;
case 0x637588:goto L637588;
case 0x63758a:c.instructions+=2;goto B63758a;
case 0x63758e:c.instructions+=1;goto B63758e;
case 0x637593:goto L637593;
case 0x637596:c.instructions+=3;goto B637596;
case 0x637598:c.instructions+=2;goto B637598;
case 0x63759a:c.instructions+=1;goto B63759a;
case 0x6375a0:goto L6375a0;
case 0x6375a4:c.instructions+=3;goto B6375a4;
case 0x6375a6:c.instructions+=2;goto B6375a6;
case 0x6375a8:c.instructions+=1;goto B6375a8;
case 0x6375aa:goto L6375aa;
case 0x6375ab:c.instructions+=2;goto B6375ab;
case 0x6375ae:c.instructions+=1;goto B6375ae;
case 0x6375b0:goto L6375b0;
case 0x6375b3:c.instructions+=1;goto B6375b3;
case 0x6375b5:goto L6375b5;
case 0x6375b7:c.instructions+=4;goto B6375b7;
case 0x6375b8:c.instructions+=3;goto B6375b8;
case 0x6375b9:c.instructions+=2;goto B6375b9;
case 0x6375bb:c.instructions+=1;goto B6375bb;
case 0x6375c0:goto L6375c0;
case 0x6375c2:goto L6375c2;
case 0x6375c5:c.instructions+=3;goto B6375c5;
case 0x6375c7:c.instructions+=2;goto B6375c7;
case 0x6375c9:c.instructions+=1;goto B6375c9;
case 0x6375cb:goto L6375cb;
case 0x6375cd:c.instructions+=7;goto B6375cd;
case 0x6375cf:c.instructions+=6;goto B6375cf;
case 0x6375d1:c.instructions+=5;goto B6375d1;
case 0x6375d3:c.instructions+=4;goto B6375d3;
case 0x6375d4:c.instructions+=3;goto B6375d4;
case 0x6375d5:c.instructions+=2;goto B6375d5;
case 0x6375da:c.instructions+=1;goto B6375da;
case 0x6375df:goto L6375df;
case 0x6375e1:c.instructions+=2;goto B6375e1;
case 0x6375e4:c.instructions+=1;goto B6375e4;
case 0x6375e6:goto L6375e6;
case 0x6375e9:c.instructions+=1;goto B6375e9;
case 0x6375eb:goto L6375eb;
case 0x6375ee:c.instructions+=1;goto B6375ee;
case 0x6375f0:goto L6375f0;
case 0x6375f7:c.instructions+=1;goto B6375f7;
case 0x6375f9:goto L6375f9;
case 0x6375fc:c.instructions+=1;goto B6375fc;
case 0x6375fe:goto L6375fe;
case 0x637601:c.instructions+=1;goto B637601;
case 0x637603:goto L637603;
case 0x637606:c.instructions+=1;goto B637606;
case 0x637608:goto L637608;
case 0x637613:goto L637613;
case 0x637615:c.instructions+=1;goto B637615;
case 0x63761a:goto L63761a;
case 0x63761e:c.instructions+=6;goto B63761e;
case 0x637624:c.instructions+=5;goto B637624;
case 0x637625:c.instructions+=4;goto B637625;
case 0x637628:c.instructions+=3;goto B637628;
case 0x63762a:c.instructions+=2;goto B63762a;
case 0x63762e:c.instructions+=1;goto B63762e;
case 0x637634:goto L637634;
case 0x637636:c.instructions+=7;goto B637636;
case 0x63763c:c.instructions+=6;goto B63763c;
case 0x637642:c.instructions+=5;goto B637642;
case 0x637644:c.instructions+=4;goto B637644;
case 0x63764a:c.instructions+=3;goto B63764a;
case 0x63764c:c.instructions+=2;goto B63764c;
case 0x63764e:c.instructions+=1;goto B63764e;
case 0x637654:goto L637654;
case 0x637656:c.instructions+=9;goto B637656;
case 0x637659:c.instructions+=8;goto B637659;
case 0x63765d:c.instructions+=7;goto B63765d;
case 0x637660:c.instructions+=6;goto B637660;
case 0x637662:c.instructions+=5;goto B637662;
case 0x637663:c.instructions+=4;goto B637663;
case 0x637664:c.instructions+=3;goto B637664;
case 0x637669:c.instructions+=2;goto B637669;
case 0x63766a:c.instructions+=1;goto B63766a;
case 0x63766f:goto L63766f;
case 0x637670:c.instructions+=5;goto B637670;
case 0x637671:c.instructions+=4;goto B637671;
case 0x637678:c.instructions+=3;goto B637678;
case 0x63767d:c.instructions+=2;goto B63767d;
case 0x63767e:c.instructions+=1;goto B63767e;
case 0x637683:goto L637683;
case 0x637686:c.instructions+=5;goto B637686;
case 0x637688:c.instructions+=4;goto B637688;
case 0x63768c:c.instructions+=3;goto B63768c;
case 0x63768e:c.instructions+=2;goto B63768e;
case 0x63768f:c.instructions+=1;goto B63768f;
case 0x637694:goto L637694;
case 0x637697:c.instructions+=6;goto B637697;
case 0x637698:c.instructions+=5;goto B637698;
case 0x63769a:c.instructions+=4;goto B63769a;
case 0x63769c:c.instructions+=3;goto B63769c;
case 0x63769d:c.instructions+=2;goto B63769d;
case 0x6376a2:c.instructions+=1;goto B6376a2;
case 0x6376a7:goto L6376a7;
case 0x6376a9:c.instructions+=5;goto B6376a9;
case 0x6376ad:c.instructions+=4;goto B6376ad;
case 0x6376af:c.instructions+=3;goto B6376af;
case 0x6376b0:c.instructions+=2;goto B6376b0;
case 0x6376b2:c.instructions+=1;goto B6376b2;
case 0x6376b7:goto L6376b7;
case 0x6376b9:c.instructions+=6;goto B6376b9;
case 0x6376bc:c.instructions+=5;goto B6376bc;
case 0x6376bd:c.instructions+=4;goto B6376bd;
case 0x6376bf:c.instructions+=3;goto B6376bf;
case 0x6376c0:c.instructions+=2;goto B6376c0;
case 0x6376c5:c.instructions+=1;goto B6376c5;
case 0x6376ca:goto L6376ca;
case 0x6376cc:c.instructions+=2;goto B6376cc;
case 0x6376ce:c.instructions+=1;goto B6376ce;
case 0x6376d4:goto L6376d4;
case 0x6376d6:c.instructions+=1;goto B6376d6;
case 0x6376dc:goto L6376dc;
case 0x6376de:c.instructions+=2;goto B6376de;
case 0x6376e4:c.instructions+=1;goto B6376e4;
case 0x6376e9:goto L6376e9;
case 0x6376ef:c.instructions+=1;goto B6376ef;
case 0x6376f1:goto L6376f1;
case 0x6376f3:c.instructions+=6;goto B6376f3;
case 0x6376f5:c.instructions+=5;goto B6376f5;
case 0x6376f7:c.instructions+=4;goto B6376f7;
case 0x6376f9:c.instructions+=3;goto B6376f9;
case 0x6376fa:c.instructions+=2;goto B6376fa;
case 0x6376ff:c.instructions+=1;goto B6376ff;
case 0x637704:goto L637704;
case 0x637706:c.instructions+=8;goto B637706;
case 0x637708:c.instructions+=7;goto B637708;
case 0x63770a:c.instructions+=6;goto B63770a;
case 0x63770c:c.instructions+=5;goto B63770c;
case 0x63770e:c.instructions+=4;goto B63770e;
case 0x637710:c.instructions+=3;goto B637710;
case 0x637711:c.instructions+=2;goto B637711;
case 0x637716:c.instructions+=1;goto B637716;
case 0x63771b:goto L63771b;
case 0x63771d:c.instructions+=8;goto B63771d;
case 0x63771f:c.instructions+=7;goto B63771f;
case 0x637721:c.instructions+=6;goto B637721;
case 0x637723:c.instructions+=5;goto B637723;
case 0x637725:c.instructions+=4;goto B637725;
case 0x637726:c.instructions+=3;goto B637726;
case 0x63772b:c.instructions+=2;goto B63772b;
case 0x63772d:c.instructions+=1;goto B63772d;
case 0x637732:goto L637732;
case 0x637734:c.instructions+=3;goto B637734;
case 0x637736:c.instructions+=2;goto B637736;
case 0x63773c:c.instructions+=1;goto B63773c;
case 0x637741:goto L637741;
case 0x637747:goto L637747;
case 0x637749:c.instructions+=1;goto B637749;
case 0x63774e:goto L63774e;
case 0x637750:c.instructions+=2;goto B637750;
case 0x637756:c.instructions+=1;goto B637756;
case 0x63775b:goto L63775b;
case 0x63775d:c.instructions+=20;goto B63775d;
case 0x63775f:c.instructions+=19;goto B63775f;
case 0x637761:c.instructions+=18;goto B637761;
case 0x637763:c.instructions+=17;goto B637763;
case 0x637767:c.instructions+=16;goto B637767;
case 0x63776b:c.instructions+=15;goto B63776b;
case 0x637770:c.instructions+=14;goto B637770;
case 0x637775:c.instructions+=13;goto B637775;
case 0x637779:c.instructions+=12;goto B637779;
case 0x63777e:c.instructions+=11;goto B63777e;
case 0x637783:c.instructions+=10;goto B637783;
case 0x637788:c.instructions+=9;goto B637788;
case 0x63778d:c.instructions+=8;goto B63778d;
case 0x637791:c.instructions+=7;goto B637791;
case 0x637795:c.instructions+=6;goto B637795;
case 0x637799:c.instructions+=5;goto B637799;
case 0x63779e:c.instructions+=4;goto B63779e;
case 0x6377a3:c.instructions+=3;goto B6377a3;
case 0x6377a7:c.instructions+=2;goto B6377a7;
case 0x6377ab:c.instructions+=1;goto B6377ab;
case 0x6377b0:goto L6377b0;
case 0x6377b4:c.instructions+=5;goto B6377b4;
case 0x6377b7:c.instructions+=4;goto B6377b7;
case 0x6377b9:c.instructions+=3;goto B6377b9;
case 0x6377bb:c.instructions+=2;goto B6377bb;
case 0x6377bf:c.instructions+=1;goto B6377bf;
case 0x6377c0:goto L6377c0;
case 0x6377c4:c.instructions+=3;goto B6377c4;
case 0x6377c6:c.instructions+=2;goto B6377c6;
case 0x6377c8:c.instructions+=1;goto B6377c8;
case 0x6377ca:goto L6377ca;
case 0x6377cb:c.instructions+=2;goto B6377cb;
case 0x6377ce:c.instructions+=1;goto B6377ce;
case 0x6377d0:goto L6377d0;
case 0x6377d1:c.instructions+=2;goto B6377d1;
case 0x6377d2:c.instructions+=1;goto B6377d2;
case 0x6377d7:goto L6377d7;
case 0x6377d9:c.instructions+=3;goto B6377d9;
case 0x6377dc:c.instructions+=2;goto B6377dc;
case 0x6377de:c.instructions+=1;goto B6377de;
case 0x6377e0:goto L6377e0;
case 0x6377e2:c.instructions+=2;goto B6377e2;
case 0x6377e8:c.instructions+=1;goto B6377e8;
case 0x6377ed:goto L6377ed;
case 0x6377ef:c.instructions+=2;goto B6377ef;
case 0x6377f5:c.instructions+=1;goto B6377f5;
case 0x6377fa:goto L6377fa;
case 0x6377fc:c.instructions+=1;goto B6377fc;
case 0x637801:goto L637801;
case 0x637802:c.instructions+=4;goto B637802;
case 0x637803:c.instructions+=3;goto B637803;
case 0x637804:c.instructions+=2;goto B637804;
case 0x63780a:c.instructions+=1;goto B63780a;
case 0x637840:goto L637840;
case 0x637842:c.instructions+=16;goto B637842;
case 0x637847:c.instructions+=15;goto B637847;
case 0x63784d:c.instructions+=14;goto B63784d;
case 0x63784e:c.instructions+=13;goto B63784e;
case 0x637855:c.instructions+=12;goto B637855;
case 0x637856:c.instructions+=11;goto B637856;
case 0x63785a:c.instructions+=10;goto B63785a;
case 0x63785b:c.instructions+=9;goto B63785b;
case 0x63785c:c.instructions+=8;goto B63785c;
case 0x63785d:c.instructions+=7;goto B63785d;
case 0x63785f:c.instructions+=6;goto B63785f;
case 0x637860:c.instructions+=5;goto B637860;
case 0x637863:c.instructions+=4;goto B637863;
case 0x637864:c.instructions+=3;goto B637864;
case 0x637866:c.instructions+=2;goto B637866;
case 0x63786a:c.instructions+=1;goto B63786a;
case 0x63786f:goto L63786f;
case 0x637873:c.instructions+=8;goto B637873;
case 0x637877:c.instructions+=7;goto B637877;
case 0x637878:c.instructions+=6;goto B637878;
case 0x637879:c.instructions+=5;goto B637879;
case 0x63787f:c.instructions+=4;goto B63787f;
case 0x637880:c.instructions+=3;goto B637880;
case 0x637882:c.instructions+=2;goto B637882;
case 0x63788a:c.instructions+=1;goto B63788a;
case 0x63788f:goto L63788f;
case 0x637895:c.instructions+=3;goto B637895;
case 0x637896:c.instructions+=2;goto B637896;
case 0x637898:c.instructions+=1;goto B637898;
case 0x63789d:goto L63789d;
case 0x6378a1:c.instructions+=6;goto B6378a1;
case 0x6378a5:c.instructions+=5;goto B6378a5;
case 0x6378a6:c.instructions+=4;goto B6378a6;
case 0x6378a7:c.instructions+=3;goto B6378a7;
case 0x6378ad:c.instructions+=2;goto B6378ad;
case 0x6378ae:c.instructions+=1;goto B6378ae;
case 0x6378b3:goto L6378b3;
case 0x6378b5:c.instructions+=25;goto B6378b5;
case 0x6378b8:c.instructions+=24;goto B6378b8;
case 0x6378bb:c.instructions+=23;goto B6378bb;
case 0x6378be:c.instructions+=22;goto B6378be;
case 0x6378c1:c.instructions+=21;goto B6378c1;
case 0x6378c5:c.instructions+=20;goto B6378c5;
case 0x6378c7:c.instructions+=19;goto B6378c7;
case 0x6378cd:c.instructions+=18;goto B6378cd;
case 0x6378d3:c.instructions+=17;goto B6378d3;
case 0x6378d5:c.instructions+=16;goto B6378d5;
case 0x6378db:c.instructions+=15;goto B6378db;
case 0x6378e1:c.instructions+=14;goto B6378e1;
case 0x6378e7:c.instructions+=13;goto B6378e7;
case 0x6378ed:c.instructions+=12;goto B6378ed;
case 0x6378f3:c.instructions+=11;goto B6378f3;
case 0x6378f9:c.instructions+=10;goto B6378f9;
case 0x6378ff:c.instructions+=9;goto B6378ff;
case 0x637905:c.instructions+=8;goto B637905;
case 0x637906:c.instructions+=7;goto B637906;
case 0x637907:c.instructions+=6;goto B637907;
case 0x63790d:c.instructions+=5;goto B63790d;
case 0x637912:c.instructions+=4;goto B637912;
case 0x637913:c.instructions+=3;goto B637913;
case 0x637919:c.instructions+=2;goto B637919;
case 0x63791f:c.instructions+=1;goto B63791f;
case 0x637924:goto L637924;
case 0x637928:c.instructions+=9;goto B637928;
case 0x63792b:c.instructions+=8;goto B63792b;
case 0x63792c:c.instructions+=7;goto B63792c;
case 0x63792e:c.instructions+=6;goto B63792e;
case 0x63792f:c.instructions+=5;goto B63792f;
case 0x637930:c.instructions+=4;goto B637930;
case 0x637931:c.instructions+=3;goto B637931;
case 0x637938:c.instructions+=2;goto B637938;
case 0x63793b:c.instructions+=1;goto B63793b;
case 0x637940:goto L637940;
case 0x637942:c.instructions+=38;goto B637942;
case 0x637945:c.instructions+=37;goto B637945;
case 0x637947:c.instructions+=36;goto B637947;
case 0x63794a:c.instructions+=35;goto B63794a;
case 0x63794d:c.instructions+=34;goto B63794d;
case 0x63794f:c.instructions+=33;goto B63794f;
case 0x637952:c.instructions+=32;goto B637952;
case 0x637955:c.instructions+=31;goto B637955;
case 0x637957:c.instructions+=30;goto B637957;
case 0x63795a:c.instructions+=29;goto B63795a;
case 0x63795d:c.instructions+=28;goto B63795d;
case 0x63795f:c.instructions+=27;goto B63795f;
case 0x637962:c.instructions+=26;goto B637962;
case 0x637965:c.instructions+=25;goto B637965;
case 0x637967:c.instructions+=24;goto B637967;
case 0x63796a:c.instructions+=23;goto B63796a;
case 0x63796d:c.instructions+=22;goto B63796d;
case 0x63796f:c.instructions+=21;goto B63796f;
case 0x637972:c.instructions+=20;goto B637972;
case 0x637975:c.instructions+=19;goto B637975;
case 0x637977:c.instructions+=18;goto B637977;
case 0x63797a:c.instructions+=17;goto B63797a;
case 0x63797c:c.instructions+=16;goto B63797c;
case 0x63797f:c.instructions+=15;goto B63797f;
case 0x637982:c.instructions+=14;goto B637982;
case 0x637985:c.instructions+=13;goto B637985;
case 0x637988:c.instructions+=12;goto B637988;
case 0x63798b:c.instructions+=11;goto B63798b;
case 0x63798e:c.instructions+=10;goto B63798e;
case 0x637991:c.instructions+=9;goto B637991;
case 0x637994:c.instructions+=8;goto B637994;
case 0x637996:c.instructions+=7;goto B637996;
case 0x637999:c.instructions+=6;goto B637999;
case 0x63799c:c.instructions+=5;goto B63799c;
case 0x63799f:c.instructions+=4;goto B63799f;
case 0x6379a2:c.instructions+=3;goto B6379a2;
case 0x6379a5:c.instructions+=2;goto B6379a5;
case 0x6379a8:c.instructions+=1;goto B6379a8;
case 0x6379b0:goto L6379b0;
case 0x6379b2:c.instructions+=13;goto B6379b2;
case 0x6379b7:c.instructions+=12;goto B6379b7;
case 0x6379bd:c.instructions+=11;goto B6379bd;
case 0x6379be:c.instructions+=10;goto B6379be;
case 0x6379c5:c.instructions+=9;goto B6379c5;
case 0x6379c6:c.instructions+=8;goto B6379c6;
case 0x6379c7:c.instructions+=7;goto B6379c7;
case 0x6379c8:c.instructions+=6;goto B6379c8;
case 0x6379ca:c.instructions+=5;goto B6379ca;
case 0x6379ce:c.instructions+=4;goto B6379ce;
case 0x6379d1:c.instructions+=3;goto B6379d1;
case 0x6379d3:c.instructions+=2;goto B6379d3;
case 0x6379db:c.instructions+=1;goto B6379db;
case 0x6379dd:goto L6379dd;
case 0x6379e0:c.instructions+=2;goto B6379e0;
case 0x6379e2:c.instructions+=1;goto B6379e2;
case 0x6379e4:goto L6379e4;
case 0x6379e5:c.instructions+=1;goto B6379e5;
case 0x6379ea:goto L6379ea;
case 0x6379ed:c.instructions+=5;goto B6379ed;
case 0x6379f4:c.instructions+=4;goto B6379f4;
case 0x6379f7:c.instructions+=3;goto B6379f7;
case 0x6379f9:c.instructions+=2;goto B6379f9;
case 0x637a00:c.instructions+=1;goto B637a00;
case 0x637a05:goto L637a05;
case 0x637a08:goto L637a08;
case 0x637a0b:c.instructions+=2;goto B637a0b;
case 0x637a0d:c.instructions+=1;goto B637a0d;
case 0x637a0f:goto L637a0f;
case 0x637a10:c.instructions+=1;goto B637a10;
case 0x637a15:goto L637a15;
case 0x637a18:goto L637a18;
case 0x637a1b:c.instructions+=2;goto B637a1b;
case 0x637a20:c.instructions+=1;goto B637a20;
case 0x637a25:goto L637a25;
case 0x637a28:c.instructions+=4;goto B637a28;
case 0x637a2b:c.instructions+=3;goto B637a2b;
case 0x637a2d:c.instructions+=2;goto B637a2d;
case 0x637a32:c.instructions+=1;goto B637a32;
case 0x637a34:goto L637a34;
case 0x637a36:c.instructions+=5;goto B637a36;
case 0x637a39:c.instructions+=4;goto B637a39;
case 0x637a3b:c.instructions+=3;goto B637a3b;
case 0x637a3c:c.instructions+=2;goto B637a3c;
case 0x637a3f:c.instructions+=1;goto B637a3f;
case 0x637a44:goto L637a44;
case 0x637a46:c.instructions+=3;goto B637a46;
case 0x637a49:c.instructions+=2;goto B637a49;
case 0x637a4b:c.instructions+=1;goto B637a4b;
case 0x637a4d:goto L637a4d;
case 0x637a50:c.instructions+=4;goto B637a50;
case 0x637a53:c.instructions+=3;goto B637a53;
case 0x637a55:c.instructions+=2;goto B637a55;
case 0x637a5a:c.instructions+=1;goto B637a5a;
case 0x637a5c:goto L637a5c;
case 0x637a60:goto L637a60;
case 0x637a62:c.instructions+=5;goto B637a62;
case 0x637a65:c.instructions+=4;goto B637a65;
case 0x637a67:c.instructions+=3;goto B637a67;
case 0x637a68:c.instructions+=2;goto B637a68;
case 0x637a6b:c.instructions+=1;goto B637a6b;
case 0x637a70:goto L637a70;
case 0x637a72:c.instructions+=3;goto B637a72;
case 0x637a75:c.instructions+=2;goto B637a75;
case 0x637a77:c.instructions+=1;goto B637a77;
case 0x637a79:goto L637a79;
case 0x637a7c:c.instructions+=4;goto B637a7c;
case 0x637a7f:c.instructions+=3;goto B637a7f;
case 0x637a81:c.instructions+=2;goto B637a81;
case 0x637a86:c.instructions+=1;goto B637a86;
case 0x637a88:goto L637a88;
case 0x637a8a:c.instructions+=5;goto B637a8a;
case 0x637a8d:c.instructions+=4;goto B637a8d;
case 0x637a8f:c.instructions+=3;goto B637a8f;
case 0x637a90:c.instructions+=2;goto B637a90;
case 0x637a93:c.instructions+=1;goto B637a93;
case 0x637a98:goto L637a98;
case 0x637a9a:c.instructions+=3;goto B637a9a;
case 0x637a9d:c.instructions+=2;goto B637a9d;
case 0x637a9f:c.instructions+=1;goto B637a9f;
case 0x637aa1:goto L637aa1;
case 0x637aa4:c.instructions+=2;goto B637aa4;
case 0x637aa9:c.instructions+=1;goto B637aa9;
case 0x637aae:goto L637aae;
case 0x637ab1:c.instructions+=2;goto B637ab1;
case 0x637ab6:c.instructions+=1;goto B637ab6;
case 0x637abb:goto L637abb;
case 0x637abe:c.instructions+=2;goto B637abe;
case 0x637ac6:c.instructions+=1;goto B637ac6;
case 0x637acb:goto L637acb;
case 0x637acf:c.instructions+=5;goto B637acf;
case 0x637ad0:c.instructions+=4;goto B637ad0;
case 0x637ad1:c.instructions+=3;goto B637ad1;
case 0x637ad8:c.instructions+=2;goto B637ad8;
case 0x637adb:c.instructions+=1;goto B637adb;
case 0x637ae0:goto L637ae0;
case 0x637ae1:c.instructions+=3;goto B637ae1;
case 0x637ae5:c.instructions+=2;goto B637ae5;
case 0x637aea:c.instructions+=1;goto B637aea;
case 0x637aec:goto L637aec;
case 0x637af0:c.instructions+=1;goto B637af0;
case 0x637af2:goto L637af2;
case 0x637af5:c.instructions+=2;goto B637af5;
case 0x637af7:c.instructions+=1;goto B637af7;
case 0x637af9:goto L637af9;
case 0x637afa:c.instructions+=1;goto B637afa;
case 0x637aff:goto L637aff;
case 0x637b02:c.instructions+=2;goto B637b02;
case 0x637b09:c.instructions+=1;goto B637b09;
case 0x637b0b:goto L637b0b;
case 0x637b0d:c.instructions+=4;goto B637b0d;
case 0x637b10:c.instructions+=3;goto B637b10;
case 0x637b12:c.instructions+=2;goto B637b12;
case 0x637b13:c.instructions+=1;goto B637b13;
case 0x637b18:goto L637b18;
case 0x637b1b:goto L637b1b;
case 0x637b1e:c.instructions+=7;goto B637b1e;
case 0x637b20:c.instructions+=6;goto B637b20;
case 0x637b22:c.instructions+=5;goto B637b22;
case 0x637b25:c.instructions+=4;goto B637b25;
case 0x637b2b:c.instructions+=3;goto B637b2b;
case 0x637b2c:c.instructions+=2;goto B637b2c;
case 0x637b2d:c.instructions+=1;goto B637b2d;
case 0x637b32:goto L637b32;
case 0x637b35:c.instructions+=3;goto B637b35;
case 0x637b3a:c.instructions+=2;goto B637b3a;
case 0x637b3b:c.instructions+=1;goto B637b3b;
case 0x637b3e:goto L637b3e;
case 0x637b40:c.instructions+=2;goto B637b40;
case 0x637b41:c.instructions+=1;goto B637b41;
case 0x637b50:goto L637b50;
case 0x637b51:c.instructions+=3;goto B637b51;
case 0x637b55:c.instructions+=2;goto B637b55;
case 0x637b5a:c.instructions+=1;goto B637b5a;
case 0x637b5c:goto L637b5c;
case 0x637b60:c.instructions+=1;goto B637b60;
case 0x637b62:goto L637b62;
case 0x637b65:c.instructions+=2;goto B637b65;
case 0x637b67:c.instructions+=1;goto B637b67;
case 0x637b69:goto L637b69;
case 0x637b6b:c.instructions+=4;goto B637b6b;
case 0x637b6e:c.instructions+=3;goto B637b6e;
case 0x637b70:c.instructions+=2;goto B637b70;
case 0x637b71:c.instructions+=1;goto B637b71;
case 0x637b76:goto L637b76;
case 0x637b79:goto L637b79;
case 0x637b7c:c.instructions+=7;goto B637b7c;
case 0x637b7e:c.instructions+=6;goto B637b7e;
case 0x637b80:c.instructions+=5;goto B637b80;
case 0x637b83:c.instructions+=4;goto B637b83;
case 0x637b89:c.instructions+=3;goto B637b89;
case 0x637b8a:c.instructions+=2;goto B637b8a;
case 0x637b8b:c.instructions+=1;goto B637b8b;
case 0x637b90:goto L637b90;
case 0x637b93:c.instructions+=3;goto B637b93;
case 0x637b98:c.instructions+=2;goto B637b98;
case 0x637b99:c.instructions+=1;goto B637b99;
case 0x637b9c:goto L637b9c;
case 0x637b9e:c.instructions+=2;goto B637b9e;
case 0x637b9f:c.instructions+=1;goto B637b9f;
case 0x637bb0:goto L637bb0;
case 0x637bb1:c.instructions+=7;goto B637bb1;
case 0x637bb5:c.instructions+=6;goto B637bb5;
case 0x637bb6:c.instructions+=5;goto B637bb6;
case 0x637bb8:c.instructions+=4;goto B637bb8;
case 0x637bbb:c.instructions+=3;goto B637bbb;
case 0x637bc0:c.instructions+=2;goto B637bc0;
case 0x637bc2:c.instructions+=1;goto B637bc2;
case 0x637bc4:goto L637bc4;
case 0x637bc7:c.instructions+=4;goto B637bc7;
case 0x637bcd:c.instructions+=3;goto B637bcd;
case 0x637bd3:c.instructions+=2;goto B637bd3;
case 0x637bda:c.instructions+=1;goto B637bda;
case 0x637bdc:goto L637bdc;
case 0x637bdf:c.instructions+=4;goto B637bdf;
case 0x637be0:c.instructions+=3;goto B637be0;
case 0x637be3:c.instructions+=2;goto B637be3;
case 0x637be4:c.instructions+=1;goto B637be4;
case 0x637be9:goto L637be9;
case 0x637bec:goto L637bec;
case 0x637bef:c.instructions+=5;goto B637bef;
case 0x637bf3:c.instructions+=4;goto B637bf3;
case 0x637bf6:c.instructions+=3;goto B637bf6;
case 0x637bf7:c.instructions+=2;goto B637bf7;
case 0x637bf9:c.instructions+=1;goto B637bf9;
case 0x637bfe:goto L637bfe;
case 0x637bff:c.instructions+=4;goto B637bff;
case 0x637c06:c.instructions+=3;goto B637c06;
case 0x637c0b:c.instructions+=2;goto B637c0b;
case 0x637c0c:c.instructions+=1;goto B637c0c;
case 0x637c10:goto L637c10;
case 0x637c14:c.instructions+=6;goto B637c14;
case 0x637c15:c.instructions+=5;goto B637c15;
case 0x637c16:c.instructions+=4;goto B637c16;
case 0x637c18:c.instructions+=3;goto B637c18;
case 0x637c1a:c.instructions+=2;goto B637c1a;
case 0x637c1c:c.instructions+=1;goto B637c1c;
case 0x637c1e:goto L637c1e;
case 0x637c1f:c.instructions+=3;goto B637c1f;
case 0x637c23:c.instructions+=2;goto B637c23;
case 0x637c24:c.instructions+=1;goto B637c24;
case 0x637c28:goto L637c28;
case 0x637c2c:c.instructions+=2;goto B637c2c;
case 0x637c2e:c.instructions+=1;goto B637c2e;
case 0x637c30:goto L637c30;
case 0x637c35:c.instructions+=1;goto B637c35;
case 0x637c37:goto L637c37;
case 0x637c3b:c.instructions+=1;goto B637c3b;
case 0x637c3d:goto L637c3d;
case 0x637c40:c.instructions+=2;goto B637c40;
case 0x637c43:c.instructions+=1;goto B637c43;
case 0x637c44:goto L637c44;
case 0x637c47:c.instructions+=7;goto B637c47;
case 0x637c49:c.instructions+=6;goto B637c49;
case 0x637c4b:c.instructions+=5;goto B637c4b;
case 0x637c4e:c.instructions+=4;goto B637c4e;
case 0x637c54:c.instructions+=3;goto B637c54;
case 0x637c55:c.instructions+=2;goto B637c55;
case 0x637c56:c.instructions+=1;goto B637c56;
case 0x637c5b:goto L637c5b;
case 0x637c5e:goto L637c5e;
case 0x637c62:c.instructions+=3;goto B637c62;
case 0x637c63:c.instructions+=2;goto B637c63;
case 0x637c65:c.instructions+=1;goto B637c65;
case 0x637c67:goto L637c67;
case 0x637c68:c.instructions+=1;goto B637c68;
case 0x637c69:goto L637c69;
case 0x637c6b:c.instructions+=3;goto B637c6b;
case 0x637c6c:c.instructions+=2;goto B637c6c;
case 0x637c6d:c.instructions+=1;goto B637c6d;
case 0x637c70:goto L637c70;
case 0x637c75:c.instructions+=4;goto B637c75;
case 0x637c77:c.instructions+=3;goto B637c77;
case 0x637c78:c.instructions+=2;goto B637c78;
case 0x637c7a:c.instructions+=1;goto B637c7a;
case 0x637c80:goto L637c80;
case 0x637c84:c.instructions+=4;goto B637c84;
case 0x637c8a:c.instructions+=3;goto B637c8a;
case 0x637c8c:c.instructions+=2;goto B637c8c;
case 0x637c8f:c.instructions+=1;goto B637c8f;
case 0x637c95:goto L637c95;
case 0x637c96:c.instructions+=8;goto B637c96;
case 0x637c9a:c.instructions+=7;goto B637c9a;
case 0x637c9b:c.instructions+=6;goto B637c9b;
case 0x637c9c:c.instructions+=5;goto B637c9c;
case 0x637ca0:c.instructions+=4;goto B637ca0;
case 0x637ca1:c.instructions+=3;goto B637ca1;
case 0x637ca2:c.instructions+=2;goto B637ca2;
case 0x637ca8:c.instructions+=1;goto B637ca8;
case 0x637cad:goto L637cad;
case 0x637cb0:c.instructions+=5;goto B637cb0;
case 0x637cb1:c.instructions+=4;goto B637cb1;
case 0x637cb4:c.instructions+=3;goto B637cb4;
case 0x637cb5:c.instructions+=2;goto B637cb5;
case 0x637cb6:c.instructions+=1;goto B637cb6;
case 0x637cbb:goto L637cbb;
case 0x637cbd:c.instructions+=4;goto B637cbd;
case 0x637cc0:c.instructions+=3;goto B637cc0;
case 0x637cc2:c.instructions+=2;goto B637cc2;
case 0x637cc6:c.instructions+=1;goto B637cc6;
case 0x637cc8:goto L637cc8;
case 0x637cc9:c.instructions+=6;goto B637cc9;
case 0x637cca:c.instructions+=5;goto B637cca;
case 0x637ccc:c.instructions+=4;goto B637ccc;
case 0x637ccd:c.instructions+=3;goto B637ccd;
case 0x637ccf:c.instructions+=2;goto B637ccf;
case 0x637cd3:c.instructions+=1;goto B637cd3;
case 0x637cd8:goto L637cd8;
case 0x637cdd:c.instructions+=2;goto B637cdd;
case 0x637cde:c.instructions+=1;goto B637cde;
case 0x637ce0:goto L637ce0;
case 0x637ce6:c.instructions+=11;goto B637ce6;
case 0x637cea:c.instructions+=10;goto B637cea;
case 0x637cee:c.instructions+=9;goto B637cee;
case 0x637cef:c.instructions+=8;goto B637cef;
case 0x637cf2:c.instructions+=7;goto B637cf2;
case 0x637cf5:c.instructions+=6;goto B637cf5;
case 0x637cf9:c.instructions+=5;goto B637cf9;
case 0x637cfb:c.instructions+=4;goto B637cfb;
case 0x637cff:c.instructions+=3;goto B637cff;
case 0x637d00:c.instructions+=2;goto B637d00;
case 0x637d01:c.instructions+=1;goto B637d01;
case 0x637d06:goto L637d06;
case 0x637d0a:c.instructions+=7;goto B637d0a;
case 0x637d0b:c.instructions+=6;goto B637d0b;
case 0x637d0d:c.instructions+=5;goto B637d0d;
case 0x637d10:c.instructions+=4;goto B637d10;
case 0x637d11:c.instructions+=3;goto B637d11;
case 0x637d12:c.instructions+=2;goto B637d12;
case 0x637d14:c.instructions+=1;goto B637d14;
case 0x637d19:goto L637d19;
case 0x637d1a:c.instructions+=3;goto B637d1a;
case 0x637d1b:c.instructions+=2;goto B637d1b;
case 0x637d1e:c.instructions+=1;goto B637d1e;
case 0x637d20:goto L637d20;
case 0x637d22:c.instructions+=1;goto B637d22;
case 0x637d27:goto L637d27;
case 0x637d28:c.instructions+=2;goto B637d28;
case 0x637d29:c.instructions+=1;goto B637d29;
case 0x637d2a:goto L637d2a;
case 0x637d2b:c.instructions+=1;goto B637d2b;
case 0x637d30:goto L637d30;
case 0x637d31:c.instructions+=4;goto B637d31;
case 0x637d32:c.instructions+=3;goto B637d32;
case 0x637d34:c.instructions+=2;goto B637d34;
case 0x637d36:c.instructions+=1;goto B637d36;
case 0x637d40:goto L637d40;
case 0x637d45:c.instructions+=4;goto B637d45;
case 0x637d4a:c.instructions+=3;goto B637d4a;
case 0x637d4b:c.instructions+=2;goto B637d4b;
case 0x637d4d:c.instructions+=1;goto B637d4d;
case 0x637d52:goto L637d52;
case 0x637d53:c.instructions+=2;goto B637d53;
case 0x637d56:c.instructions+=1;goto B637d56;
case 0x637d58:goto L637d58;
case 0x637d5a:c.instructions+=3;goto B637d5a;
case 0x637d5b:c.instructions+=2;goto B637d5b;
case 0x637d5c:c.instructions+=1;goto B637d5c;
case 0x637d70:goto L637d70;
case 0x637d71:c.instructions+=6;goto B637d71;
case 0x637d73:c.instructions+=5;goto B637d73;
case 0x637d76:c.instructions+=4;goto B637d76;
case 0x637d77:c.instructions+=3;goto B637d77;
case 0x637d7a:c.instructions+=2;goto B637d7a;
case 0x637d7f:c.instructions+=1;goto B637d7f;
case 0x637d80:goto L637d80;
case 0x637d84:c.instructions+=5;goto B637d84;
case 0x637d88:c.instructions+=4;goto B637d88;
case 0x637d8b:c.instructions+=3;goto B637d8b;
case 0x637d8c:c.instructions+=2;goto B637d8c;
case 0x637d8d:c.instructions+=1;goto B637d8d;
case 0x637d8f:goto L637d8f;
case 0x637d95:c.instructions+=1;goto B637d95;
case 0x637d9a:goto L637d9a;
case 0x637d9b:c.instructions+=3;goto B637d9b;
case 0x637d9d:c.instructions+=2;goto B637d9d;
case 0x637d9e:c.instructions+=1;goto B637d9e;
case 0x637db0:goto L637db0;
case 0x637db2:c.instructions+=12;goto B637db2;
case 0x637db7:c.instructions+=11;goto B637db7;
case 0x637dbd:c.instructions+=10;goto B637dbd;
case 0x637dbe:c.instructions+=9;goto B637dbe;
case 0x637dc5:c.instructions+=8;goto B637dc5;
case 0x637dc6:c.instructions+=7;goto B637dc6;
case 0x637dcb:c.instructions+=6;goto B637dcb;
case 0x637dcc:c.instructions+=5;goto B637dcc;
case 0x637dcd:c.instructions+=4;goto B637dcd;
case 0x637dce:c.instructions+=3;goto B637dce;
case 0x637dcf:c.instructions+=2;goto B637dcf;
case 0x637dd1:c.instructions+=1;goto B637dd1;
case 0x637dd6:goto L637dd6;
case 0x637dd8:c.instructions+=6;goto B637dd8;
case 0x637ddb:c.instructions+=5;goto B637ddb;
case 0x637ddf:c.instructions+=4;goto B637ddf;
case 0x637de1:c.instructions+=3;goto B637de1;
case 0x637de3:c.instructions+=2;goto B637de3;
case 0x637de7:c.instructions+=1;goto B637de7;
case 0x637de9:goto L637de9;
case 0x637ded:c.instructions+=5;goto B637ded;
case 0x637dee:c.instructions+=4;goto B637dee;
case 0x637df0:c.instructions+=3;goto B637df0;
case 0x637df3:c.instructions+=2;goto B637df3;
case 0x637df6:c.instructions+=1;goto B637df6;
case 0x637dfb:goto L637dfb;
case 0x637dfd:goto L637dfd;
case 0x637dff:goto L637dff;
case 0x637e03:c.instructions+=11;goto B637e03;
case 0x637e08:c.instructions+=10;goto B637e08;
case 0x637e09:c.instructions+=9;goto B637e09;
case 0x637e0b:c.instructions+=8;goto B637e0b;
case 0x637e13:c.instructions+=7;goto B637e13;
case 0x637e16:c.instructions+=6;goto B637e16;
case 0x637e19:c.instructions+=5;goto B637e19;
case 0x637e1c:c.instructions+=4;goto B637e1c;
case 0x637e1f:c.instructions+=3;goto B637e1f;
case 0x637e22:c.instructions+=2;goto B637e22;
case 0x637e25:c.instructions+=1;goto B637e25;
case 0x637e2a:goto L637e2a;
case 0x637e2f:c.instructions+=6;goto B637e2f;
case 0x637e31:c.instructions+=5;goto B637e31;
case 0x637e37:c.instructions+=4;goto B637e37;
case 0x637e3a:c.instructions+=3;goto B637e3a;
case 0x637e3d:c.instructions+=2;goto B637e3d;
case 0x637e43:c.instructions+=1;goto B637e43;
case 0x637e48:goto L637e48;
case 0x637e4c:c.instructions+=10;goto B637e4c;
case 0x637e4e:c.instructions+=9;goto B637e4e;
case 0x637e51:c.instructions+=8;goto B637e51;
case 0x637e54:c.instructions+=7;goto B637e54;
case 0x637e55:c.instructions+=6;goto B637e55;
case 0x637e57:c.instructions+=5;goto B637e57;
case 0x637e58:c.instructions+=4;goto B637e58;
case 0x637e59:c.instructions+=3;goto B637e59;
case 0x637e60:c.instructions+=2;goto B637e60;
case 0x637e63:c.instructions+=1;goto B637e63;
case 0x637e70:goto L637e70;
case 0x637e76:c.instructions+=2;goto B637e76;
case 0x637e7c:c.instructions+=1;goto B637e7c;
case 0x637e7e:goto L637e7e;
case 0x637e7f:c.instructions+=1;goto B637e7f;
case 0x637e80:goto L637e80;
case 0x637e82:c.instructions+=2;goto B637e82;
case 0x637e84:c.instructions+=1;goto B637e84;
case 0x637e86:goto L637e86;
case 0x637e8b:goto L637e8b;
case 0x637e90:c.instructions+=3;goto B637e90;
case 0x637e91:c.instructions+=2;goto B637e91;
case 0x637e92:c.instructions+=1;goto B637e92;
case 0x637e97:goto L637e97;
case 0x637e9d:c.instructions+=1;goto B637e9d;
case 0x637ea0:goto L637ea0;
case 0x637ea6:c.instructions+=1;goto B637ea6;
case 0x637ea8:goto L637ea8;
case 0x637ea9:goto L637ea9;
case 0x637eaf:c.instructions+=2;goto B637eaf;
case 0x637eb0:c.instructions+=1;goto B637eb0;
case 0x637eb5:goto L637eb5;
case 0x637eb8:c.instructions+=2;goto B637eb8;
case 0x637ec2:c.instructions+=1;goto B637ec2;
case 0x637ed0:goto L637ed0;
case 0x637ed1:c.instructions+=5;goto B637ed1;
case 0x637ed2:c.instructions+=4;goto B637ed2;
case 0x637ed4:c.instructions+=3;goto B637ed4;
case 0x637ed6:c.instructions+=2;goto B637ed6;
case 0x637ed8:c.instructions+=1;goto B637ed8;
case 0x637eda:goto L637eda;
case 0x637ee0:goto L637ee0;
case 0x637ee3:c.instructions+=5;goto B637ee3;
case 0x637ee5:c.instructions+=4;goto B637ee5;
case 0x637ee7:c.instructions+=3;goto B637ee7;
case 0x637eea:c.instructions+=2;goto B637eea;
case 0x637eec:c.instructions+=1;goto B637eec;
case 0x637ef1:goto L637ef1;
case 0x637ef6:c.instructions+=3;goto B637ef6;
case 0x637ef7:c.instructions+=2;goto B637ef7;
case 0x637ef8:c.instructions+=1;goto B637ef8;
case 0x637efd:goto L637efd;
case 0x637eff:c.instructions+=3;goto B637eff;
case 0x637f02:c.instructions+=2;goto B637f02;
case 0x637f04:c.instructions+=1;goto B637f04;
case 0x637f06:goto L637f06;
case 0x637f07:c.instructions+=2;goto B637f07;
case 0x637f08:c.instructions+=1;goto B637f08;
case 0x637f10:goto L637f10;
case 0x637f11:c.instructions+=5;goto B637f11;
case 0x637f12:c.instructions+=4;goto B637f12;
case 0x637f14:c.instructions+=3;goto B637f14;
case 0x637f16:c.instructions+=2;goto B637f16;
case 0x637f18:c.instructions+=1;goto B637f18;
case 0x637f1a:goto L637f1a;
case 0x637f20:goto L637f20;
case 0x637f23:c.instructions+=5;goto B637f23;
case 0x637f25:c.instructions+=4;goto B637f25;
case 0x637f27:c.instructions+=3;goto B637f27;
case 0x637f2a:c.instructions+=2;goto B637f2a;
case 0x637f2c:c.instructions+=1;goto B637f2c;
case 0x637f31:goto L637f31;
case 0x637f36:c.instructions+=3;goto B637f36;
case 0x637f37:c.instructions+=2;goto B637f37;
case 0x637f38:c.instructions+=1;goto B637f38;
case 0x637f3d:goto L637f3d;
case 0x637f3f:c.instructions+=3;goto B637f3f;
case 0x637f42:c.instructions+=2;goto B637f42;
case 0x637f44:c.instructions+=1;goto B637f44;
case 0x637f46:goto L637f46;
case 0x637f47:c.instructions+=2;goto B637f47;
case 0x637f48:c.instructions+=1;goto B637f48;
case 0x637f50:goto L637f50;
case 0x637f51:c.instructions+=22;goto B637f51;
case 0x637f53:c.instructions+=21;goto B637f53;
case 0x637f56:c.instructions+=20;goto B637f56;
case 0x637f58:c.instructions+=19;goto B637f58;
case 0x637f5d:c.instructions+=18;goto B637f5d;
case 0x637f63:c.instructions+=17;goto B637f63;
case 0x637f64:c.instructions+=16;goto B637f64;
case 0x637f6b:c.instructions+=15;goto B637f6b;
case 0x637f6e:c.instructions+=14;goto B637f6e;
case 0x637f6f:c.instructions+=13;goto B637f6f;
case 0x637f71:c.instructions+=12;goto B637f71;
case 0x637f74:c.instructions+=11;goto B637f74;
case 0x637f75:c.instructions+=10;goto B637f75;
case 0x637f79:c.instructions+=9;goto B637f79;
case 0x637f7b:c.instructions+=8;goto B637f7b;
case 0x637f7e:c.instructions+=7;goto B637f7e;
case 0x637f81:c.instructions+=6;goto B637f81;
case 0x637f83:c.instructions+=5;goto B637f83;
case 0x637f84:c.instructions+=4;goto B637f84;
case 0x637f88:c.instructions+=3;goto B637f88;
case 0x637f8e:c.instructions+=2;goto B637f8e;
case 0x637f98:c.instructions+=1;goto B637f98;
case 0x637f9d:goto L637f9d;
case 0x637fa0:c.instructions+=14;goto B637fa0;
case 0x637fa6:c.instructions+=13;goto B637fa6;
case 0x637fac:c.instructions+=12;goto B637fac;
case 0x637fb2:c.instructions+=11;goto B637fb2;
case 0x637fb8:c.instructions+=10;goto B637fb8;
case 0x637fbe:c.instructions+=9;goto B637fbe;
case 0x637fc4:c.instructions+=8;goto B637fc4;
case 0x637fc7:c.instructions+=7;goto B637fc7;
case 0x637fc8:c.instructions+=6;goto B637fc8;
case 0x637fce:c.instructions+=5;goto B637fce;
case 0x637fd4:c.instructions+=4;goto B637fd4;
case 0x637fda:c.instructions+=3;goto B637fda;
case 0x637fdc:c.instructions+=2;goto B637fdc;
case 0x637fe2:c.instructions+=1;goto B637fe2;
case 0x637fe7:goto L637fe7;
case 0x637feb:c.instructions+=8;goto B637feb;
case 0x637ff1:c.instructions+=7;goto B637ff1;
case 0x637ff2:c.instructions+=6;goto B637ff2;
case 0x637ff4:c.instructions+=5;goto B637ff4;
case 0x637ffb:c.instructions+=4;goto B637ffb;
case 0x637ffc:c.instructions+=3;goto B637ffc;
case 0x637ffe:c.instructions+=2;goto B637ffe;
case 0x637fff:c.instructions+=1;goto B637fff;
default:missing_instruction(c.pc);}
B637000:L637000:{c.instructions+=1;NFSU2_TR(0x637000);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637040:L637040:{c.instructions+=9;NFSU2_TR(0x637040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B637043:{NFSU2_TR(0x637043);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637044:{NFSU2_TR(0x637044);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637045:{NFSU2_TR(0x637045);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637046:{NFSU2_TR(0x637046);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637047:{NFSU2_TR(0x637047);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63704b:{NFSU2_TR(0x63704b);
__builtin_memmove((R+20),(R+4),4);
}
B63704d:{NFSU2_TR(0x63704d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B63704f:{NFSU2_TR(0x63704f);
}
B637050:L637050:{c.instructions+=2;NFSU2_TR(0x637050);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B637053:{NFSU2_TR(0x637053);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63705e;}}
}
B637055:L637055:{c.instructions+=2;NFSU2_TR(0x637055);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637058:{NFSU2_TR(0x637058);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6370e3;}}
}
B63705e:L63705e:{c.instructions+=2;NFSU2_TR(0x63705e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B637061:{NFSU2_TR(0x637061);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63706b;}}
}
B637063:L637063:{c.instructions+=2;NFSU2_TR(0x637063);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x98ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x98ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637069:{NFSU2_TR(0x637069);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6370e3;}}
}
B63706b:L63706b:{c.instructions+=2;NFSU2_TR(0x63706b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63706e:{NFSU2_TR(0x63706e);
if(r1(R+518)){{goto L63709b;}}
}
B637070:L637070:{c.instructions+=5;NFSU2_TR(0x637070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B637073:{NFSU2_TR(0x637073);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637075:{NFSU2_TR(0x637075);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637076:{NFSU2_TR(0x637076);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637077:{NFSU2_TR(0x637077);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63707cull));
TAIL_STATIC(0x61bc80u,61b);
}
B63707c:L63707c:{c.instructions+=3;NFSU2_TR(0x63707c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B63707f:{NFSU2_TR(0x63707f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B637081:{NFSU2_TR(0x637081);
if(r1(R+518)){{goto L6370e3;}}
}
B637083:L637083:{c.instructions+=2;NFSU2_TR(0x637083);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B637086:{NFSU2_TR(0x637086);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63708d;}}
}
B637088:L637088:{c.instructions+=2;NFSU2_TR(0x637088);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x68ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63708b:{NFSU2_TR(0x63708b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6370e3;}}
}
B63708d:L63708d:{c.instructions+=2;NFSU2_TR(0x63708d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637090:{NFSU2_TR(0x637090);
if(r1(R+518)){{goto L6370e3;}}
}
B637092:L637092:{c.instructions+=2;NFSU2_TR(0x637092);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B637099:{NFSU2_TR(0x637099);
{goto L6370dc;}
}
B63709b:L63709b:{c.instructions+=9;NFSU2_TR(0x63709b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B63709e:{NFSU2_TR(0x63709e);
__builtin_memmove((R+12),gp(0x8a1ccc),4);
}
B6370a4:{NFSU2_TR(0x6370a4);
__builtin_memmove((R+0),(R+4),4);
}
B6370a6:{NFSU2_TR(0x6370a6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6370ac:{NFSU2_TR(0x6370ac);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6370ae:{NFSU2_TR(0x6370ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6370b0:{NFSU2_TR(0x6370b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6370b2:{NFSU2_TR(0x6370b2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6370b4:{NFSU2_TR(0x6370b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6370be;}}
}
B6370b6:L6370b6:{c.instructions+=2;NFSU2_TR(0x6370b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6370bc:{NFSU2_TR(0x6370bc);
{goto L6370c4;}
}
B6370be:L6370be:{c.instructions+=1;NFSU2_TR(0x6370be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x850ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6370c4:L6370c4:{c.instructions+=5;NFSU2_TR(0x6370c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6370c5:{NFSU2_TR(0x6370c5);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6370c7:{NFSU2_TR(0x6370c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6370c8:{NFSU2_TR(0x6370c8);
w4(R+4,u32(0x8a2b68ull));
}
B6370cd:{NFSU2_TR(0x6370cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6370d2ull));
TAIL_STATIC(0x61b980u,61b);
}
B6370d2:L6370d2:{c.instructions+=2;NFSU2_TR(0x6370d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6370d4:{NFSU2_TR(0x6370d4);
if(r1(R+518)){{goto L6370e3;}}
}
B6370d6:L6370d6:{c.instructions+=1;NFSU2_TR(0x6370d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6370dc:L6370dc:{c.instructions+=2;NFSU2_TR(0x6370dc);
__builtin_memmove((R+4),(R+20),4);
}
B6370de:{NFSU2_TR(0x6370de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6370e3ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B6370e3:L6370e3:{c.instructions+=3;NFSU2_TR(0x6370e3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6370e4:{NFSU2_TR(0x6370e4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6370ea:{NFSU2_TR(0x6370ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637050u);}goto L637050;}}
}
B6370f0:L6370f0:{c.instructions+=2;NFSU2_TR(0x6370f0);
u8 U[4];
w4(U+0,u32(0x7a8cd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6370f5:{NFSU2_TR(0x6370f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6370faull));
TAIL_STATIC(0x43db50u,43d);
}
B6370fa:L6370fa:{c.instructions+=3;NFSU2_TR(0x6370fa);
u8 U[4];
w4(U+0,u32(0x7a8cc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6370ff:{NFSU2_TR(0x6370ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637103:{NFSU2_TR(0x637103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637108ull));
TAIL_STATIC(0x43db50u,43d);
}
B637108:L637108:{c.instructions+=3;NFSU2_TR(0x637108);
u8 U[4];
w4(U+0,u32(0x7a8cacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63710d:{NFSU2_TR(0x63710d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637111:{NFSU2_TR(0x637111);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637116ull));
TAIL_STATIC(0x43db50u,43d);
}
B637116:L637116:{c.instructions+=3;NFSU2_TR(0x637116);
u8 U[4];
w4(U+0,u32(0x7a8c98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63711b:{NFSU2_TR(0x63711b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63711f:{NFSU2_TR(0x63711f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637124ull));
TAIL_STATIC(0x43db50u,43d);
}
B637124:L637124:{c.instructions+=4;NFSU2_TR(0x637124);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B637127:{NFSU2_TR(0x637127);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63712b:{NFSU2_TR(0x63712b);
w4(R+24,u32(0x4dull));
}
B637130:{NFSU2_TR(0x637130);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B637136:L637136:{c.instructions+=2;NFSU2_TR(0x637136);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B637138:{NFSU2_TR(0x637138);
{goto L637140;}
}
B637140:L637140:{c.instructions+=9;NFSU2_TR(0x637140);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B637144:{NFSU2_TR(0x637144);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B637147:{NFSU2_TR(0x637147);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637149:{NFSU2_TR(0x637149);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63714b:{NFSU2_TR(0x63714b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63714c:{NFSU2_TR(0x63714c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63714d:{NFSU2_TR(0x63714d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63714e:{NFSU2_TR(0x63714e);
w4(R+4,u32(0x8a2b68ull));
}
B637153:{NFSU2_TR(0x637153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637158ull));
TAIL_STATIC(0x61b980u,61b);
}
B637158:L637158:{c.instructions+=2;NFSU2_TR(0x637158);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63715b:{NFSU2_TR(0x63715b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L637162;}}
}
B63715d:L63715d:{c.instructions+=2;NFSU2_TR(0x63715d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x68ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637160:{NFSU2_TR(0x637160);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L637170;}}
}
B637162:L637162:{c.instructions+=2;NFSU2_TR(0x637162);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637165:{NFSU2_TR(0x637165);
if(r1(R+518)){{goto L637170;}}
}
B637167:L637167:{c.instructions+=3;NFSU2_TR(0x637167);
__builtin_memmove((R+4),(R+20),4);
}
B637169:{NFSU2_TR(0x637169);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B63716b:{NFSU2_TR(0x63716b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637170ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B637170:L637170:{c.instructions+=5;NFSU2_TR(0x637170);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B637171:{NFSU2_TR(0x637171);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B637174:{NFSU2_TR(0x637174);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B637175:{NFSU2_TR(0x637175);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B637178:{NFSU2_TR(0x637178);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637140u);}goto L637140;}}
}
B63717a:L63717a:{c.instructions+=2;NFSU2_TR(0x63717a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5dull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5dull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63717d:{NFSU2_TR(0x63717d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637136u);}goto L637136;}}
}
B63717f:L63717f:{c.instructions+=6;NFSU2_TR(0x63717f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B637180:{NFSU2_TR(0x637180);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637181:{NFSU2_TR(0x637181);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B637182:{NFSU2_TR(0x637182);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B637183:{NFSU2_TR(0x637183);
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
B637186:{NFSU2_TR(0x637186);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637190:L637190:{c.instructions+=2;NFSU2_TR(0x637190);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637192:{NFSU2_TR(0x637192);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637197ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637040u);}goto L637040;}
}
B637197:L637197:{c.instructions+=1;NFSU2_TR(0x637197);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6371a0:L6371a0:{c.instructions+=8;NFSU2_TR(0x6371a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6371a4:{NFSU2_TR(0x6371a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6371a5:{NFSU2_TR(0x6371a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6371a6:{NFSU2_TR(0x6371a6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6371aa:{NFSU2_TR(0x6371aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6371ab:{NFSU2_TR(0x6371ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6371ac:{NFSU2_TR(0x6371ac);
__builtin_memmove((R+24),(R+4),4);
}
B6371ae:{NFSU2_TR(0x6371ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6371b3ull));
TAIL_STATIC(0x631cb0u,631);
}
B6371b3:L6371b3:{c.instructions+=2;NFSU2_TR(0x6371b3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6371b6:{NFSU2_TR(0x6371b6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6371bd;}}
}
B6371b8:L6371b8:{c.instructions+=2;NFSU2_TR(0x6371b8);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x68ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x68ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6371bb:{NFSU2_TR(0x6371bb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6371d0;}}
}
B6371bd:L6371bd:{c.instructions+=2;NFSU2_TR(0x6371bd);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6371c0:{NFSU2_TR(0x6371c0);
if(r1(R+518)){{goto L6371d0;}}
}
B6371c2:L6371c2:{c.instructions+=3;NFSU2_TR(0x6371c2);
__builtin_memmove((R+4),(R+24),4);
}
B6371c4:{NFSU2_TR(0x6371c4);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6371cb:{NFSU2_TR(0x6371cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6371d0ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B6371d0:L6371d0:{c.instructions+=3;NFSU2_TR(0x6371d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6371d1:{NFSU2_TR(0x6371d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6371d2:{NFSU2_TR(0x6371d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6371e0:L6371e0:{c.instructions+=9;NFSU2_TR(0x6371e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6371e1:{NFSU2_TR(0x6371e1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6371e3:{NFSU2_TR(0x6371e3);
__builtin_memmove((R+28),(R+4),4);
}
B6371e5:{NFSU2_TR(0x6371e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6371e7:{NFSU2_TR(0x6371e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6371e9:{NFSU2_TR(0x6371e9);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6371eb:{NFSU2_TR(0x6371eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6371ec:{NFSU2_TR(0x6371ec);
w4(R+4,u32(0x8a2b68ull));
}
B6371f1:{NFSU2_TR(0x6371f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6371f6ull));
TAIL_STATIC(0x631a20u,631);
}
B6371f6:L6371f6:{c.instructions+=2;NFSU2_TR(0x6371f6);
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
B6371f8:{NFSU2_TR(0x6371f8);
if(r1(R+518)){{goto L637268;}}
}
B6371fa:L6371fa:{c.instructions+=5;NFSU2_TR(0x6371fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6371fb:{NFSU2_TR(0x6371fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6371fc:{NFSU2_TR(0x6371fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6371fd:{NFSU2_TR(0x6371fd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6371ff:{NFSU2_TR(0x6371ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637204ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B637204:L637204:{c.instructions+=4;NFSU2_TR(0x637204);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B637207:{NFSU2_TR(0x637207);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B637208:{NFSU2_TR(0x637208);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63720a:{NFSU2_TR(0x63720a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L637229;}}
}
B63720c:L63720c:{c.instructions+=2;NFSU2_TR(0x63720c);
__builtin_memmove((R+12),(R+0),4);
}
B63720e:{NFSU2_TR(0x63720e);
__builtin_memmove((R+28),(R+28),4);
}
B637210:L637210:{c.instructions+=8;NFSU2_TR(0x637210);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B637212:{NFSU2_TR(0x637212);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637214:{NFSU2_TR(0x637214);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637215:{NFSU2_TR(0x637215);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637217:{NFSU2_TR(0x637217);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637219:{NFSU2_TR(0x637219);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63721a:{NFSU2_TR(0x63721a);
w4(R+4,u32(0x8a2b68ull));
}
B63721f:{NFSU2_TR(0x63721f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637224ull));
TAIL_STATIC(0x61b980u,61b);
}
B637224:L637224:{c.instructions+=3;NFSU2_TR(0x637224);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B637225:{NFSU2_TR(0x637225);
__builtin_memmove((R+24),(R+0),4);
}
B637227:{NFSU2_TR(0x637227);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637210u);}goto L637210;}}
}
B637229:L637229:{c.instructions+=3;NFSU2_TR(0x637229);
__builtin_memmove((R+4),(R+28),4);
}
B63722b:{NFSU2_TR(0x63722b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637231:{NFSU2_TR(0x637231);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637236ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B637236:L637236:{c.instructions+=2;NFSU2_TR(0x637236);
w4(R+24,u32(0x40ull));
}
B63723b:{NFSU2_TR(0x63723b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x690ull))));
__builtin_memmove((R+12),(U+0),4);
}
B637241:L637241:{c.instructions+=2;NFSU2_TR(0x637241);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B637244:{NFSU2_TR(0x637244);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63724b;}}
}
B637246:L637246:{c.instructions+=2;NFSU2_TR(0x637246);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x68ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637249:{NFSU2_TR(0x637249);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63725d;}}
}
B63724b:L63724b:{c.instructions+=2;NFSU2_TR(0x63724b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63724e:{NFSU2_TR(0x63724e);
if(r1(R+518)){{goto L63725d;}}
}
B637250:L637250:{c.instructions+=3;NFSU2_TR(0x637250);
__builtin_memmove((R+4),(R+28),4);
}
B637252:{NFSU2_TR(0x637252);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B637258:{NFSU2_TR(0x637258);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63725dull));
TAIL_STATIC(0x61bcd0u,61b);
}
B63725d:L63725d:{c.instructions+=4;NFSU2_TR(0x63725d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B63725e:{NFSU2_TR(0x63725e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B637261:{NFSU2_TR(0x637261);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B637264:{NFSU2_TR(0x637264);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637241u);}goto L637241;}}
}
B637266:L637266:{c.instructions+=2;NFSU2_TR(0x637266);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637267:{NFSU2_TR(0x637267);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B637268:L637268:{c.instructions+=2;NFSU2_TR(0x637268);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B637269:{NFSU2_TR(0x637269);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637270:L637270:{c.instructions+=6;NFSU2_TR(0x637270);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637274:{NFSU2_TR(0x637274);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637275:{NFSU2_TR(0x637275);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637276:{NFSU2_TR(0x637276);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637277:{NFSU2_TR(0x637277);
__builtin_memmove((R+28),(R+4),4);
}
B637279:{NFSU2_TR(0x637279);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63727eull));
TAIL_STATIC(0x61c460u,61c);
}
B63727e:L63727e:{c.instructions+=4;NFSU2_TR(0x63727e);
__builtin_memmove((R+20),(R+0),4);
}
B637280:{NFSU2_TR(0x637280);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B637283:{NFSU2_TR(0x637283);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B637285:{NFSU2_TR(0x637285);
if(r1(R+518)){{goto L6373cd;}}
}
B63728b:L63728b:{c.instructions+=4;NFSU2_TR(0x63728b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63728e:{NFSU2_TR(0x63728e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63728f:{NFSU2_TR(0x63728f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637290:{NFSU2_TR(0x637290);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637295ull));
TAIL_STATIC(0x505450u,505);
}
B637295:L637295:{c.instructions+=5;NFSU2_TR(0x637295);
__builtin_memmove((R+24),gp(0x8a1ccc),4);
}
B63729b:{NFSU2_TR(0x63729b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63729e:{NFSU2_TR(0x63729e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6372a0:{NFSU2_TR(0x6372a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6372a6:{NFSU2_TR(0x6372a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6372a7:L6372a7:{c.instructions+=2;NFSU2_TR(0x6372a7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6372a9:{NFSU2_TR(0x6372a9);
if(r1(R+518)){{goto L637316;}}
}
B6372ab:L6372ab:{c.instructions+=4;NFSU2_TR(0x6372ab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6372ac:{NFSU2_TR(0x6372ac);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x890ull))));
}
B6372b2:{NFSU2_TR(0x6372b2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6372b5:{NFSU2_TR(0x6372b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6372a7u);}goto L6372a7;}}
}
B6372b7:L6372b7:{c.instructions+=1;NFSU2_TR(0x6372b7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6372b9:L6372b9:{c.instructions+=3;NFSU2_TR(0x6372b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6372bf:{NFSU2_TR(0x6372bf);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+12))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6372c1:{NFSU2_TR(0x6372c1);
if(r1(R+518)){{goto L6372da;}}
}
B6372c3:L6372c3:{c.instructions+=6;NFSU2_TR(0x6372c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6372c5:{NFSU2_TR(0x6372c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6372c7:{NFSU2_TR(0x6372c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6372c9:{NFSU2_TR(0x6372c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6372ca:{NFSU2_TR(0x6372ca);
__builtin_memmove((R+4),(R+28),4);
}
B6372cc:{NFSU2_TR(0x6372cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6372d1ull));
TAIL_STATIC(0x610270u,610);
}
B6372d1:L6372d1:{c.instructions+=3;NFSU2_TR(0x6372d1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6372d3:{NFSU2_TR(0x6372d3);
__builtin_memmove((R+4),(R+28),4);
}
B6372d5:{NFSU2_TR(0x6372d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6372daull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637040u);}goto L637040;}
}
B6372da:L6372da:{c.instructions+=2;NFSU2_TR(0x6372da);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6372dc:{NFSU2_TR(0x6372dc);
__builtin_memmove((R+16),(R+16),4);
}
B6372e0:L6372e0:{c.instructions+=3;NFSU2_TR(0x6372e0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6372e4:{NFSU2_TR(0x6372e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6372e6:{NFSU2_TR(0x6372e6);
if(r1(R+518)){{goto L637320;}}
}
B6372e8:L6372e8:{c.instructions+=2;NFSU2_TR(0x6372e8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6372eb:{NFSU2_TR(0x6372eb);
if(r1(R+518)){{goto L637341;}}
}
B6372ed:L6372ed:{c.instructions+=7;NFSU2_TR(0x6372ed);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6372ef:{NFSU2_TR(0x6372ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6372f1:{NFSU2_TR(0x6372f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6372f2:{NFSU2_TR(0x6372f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6372f3:{NFSU2_TR(0x6372f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6372f4:{NFSU2_TR(0x6372f4);
w4(R+4,u32(0x8a2b68ull));
}
B6372f9:{NFSU2_TR(0x6372f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6372feull));
TAIL_STATIC(0x61b980u,61b);
}
B6372fe:L6372fe:{c.instructions+=2;NFSU2_TR(0x6372fe);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B637301:{NFSU2_TR(0x637301);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L637308;}}
}
B637303:L637303:{c.instructions+=2;NFSU2_TR(0x637303);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x68ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637306:{NFSU2_TR(0x637306);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L637341;}}
}
B637308:L637308:{c.instructions+=2;NFSU2_TR(0x637308);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63730b:{NFSU2_TR(0x63730b);
if(r1(R+518)){{goto L637341;}}
}
B63730d:L63730d:{c.instructions+=2;NFSU2_TR(0x63730d);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B637314:{NFSU2_TR(0x637314);
{goto L63733a;}
}
B637316:L637316:{c.instructions+=3;NFSU2_TR(0x637316);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B63731c:{NFSU2_TR(0x63731c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B63731e:{NFSU2_TR(0x63731e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6372b9u);}goto L6372b9;}
}
B637320:L637320:{c.instructions+=2;NFSU2_TR(0x637320);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B637323:{NFSU2_TR(0x637323);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63732a;}}
}
B637325:L637325:{c.instructions+=2;NFSU2_TR(0x637325);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x68ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637328:{NFSU2_TR(0x637328);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L637341;}}
}
B63732a:L63732a:{c.instructions+=2;NFSU2_TR(0x63732a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63732d:{NFSU2_TR(0x63732d);
if(r1(R+518)){{goto L637341;}}
}
B63732f:L63732f:{c.instructions+=1;NFSU2_TR(0x63732f);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B63733a:L63733a:{c.instructions+=2;NFSU2_TR(0x63733a);
__builtin_memmove((R+4),(R+28),4);
}
B63733c:{NFSU2_TR(0x63733c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637341ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B637341:L637341:{c.instructions+=2;NFSU2_TR(0x637341);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637344:{NFSU2_TR(0x637344);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L637365;}}
}
B637346:L637346:{c.instructions+=7;NFSU2_TR(0x637346);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637348:{NFSU2_TR(0x637348);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63734a:{NFSU2_TR(0x63734a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63734c:{NFSU2_TR(0x63734c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63734d:{NFSU2_TR(0x63734d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63734e:{NFSU2_TR(0x63734e);
w4(R+4,u32(0x8a2b68ull));
}
B637353:{NFSU2_TR(0x637353);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637358ull));
TAIL_STATIC(0x61b980u,61b);
}
B637358:L637358:{c.instructions+=3;NFSU2_TR(0x637358);
__builtin_memmove((R+4),(R+28),4);
}
B63735a:{NFSU2_TR(0x63735a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637360:{NFSU2_TR(0x637360);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637365ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B637365:L637365:{c.instructions+=3;NFSU2_TR(0x637365);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B637366:{NFSU2_TR(0x637366);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63736c:{NFSU2_TR(0x63736c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6372e0u);}goto L6372e0;}}
}
B637372:L637372:{c.instructions+=4;NFSU2_TR(0x637372);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637375:{NFSU2_TR(0x637375);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637378:{NFSU2_TR(0x637378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B637379:{NFSU2_TR(0x637379);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6373be;}}
}
B63737b:L63737b:{c.instructions+=2;NFSU2_TR(0x63737b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B63737d:{NFSU2_TR(0x63737d);
__builtin_memmove((R+4),(R+4),4);
}
B637380:L637380:{c.instructions+=3;NFSU2_TR(0x637380);
u8 U[13];
w4(U+0,u32(u32(u32(0x2f4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B637388:{NFSU2_TR(0x637388);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63738b:{NFSU2_TR(0x63738b);
if(r1(R+518)){{goto L6373a4;}}
}
B63738d:L63738d:{c.instructions+=7;NFSU2_TR(0x63738d);
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
B63738f:{NFSU2_TR(0x63738f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B637392:{NFSU2_TR(0x637392);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637394:{NFSU2_TR(0x637394);
__builtin_memmove((R+4),(R+28),4);
}
B637396:{NFSU2_TR(0x637396);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637397:{NFSU2_TR(0x637397);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637398:{NFSU2_TR(0x637398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63739dull));
TAIL_STATIC(0x4017e0u,401);
}
B63739d:L63739d:{c.instructions+=2;NFSU2_TR(0x63739d);
__builtin_memmove((R+4),(R+0),4);
}
B63739f:{NFSU2_TR(0x63739f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6373a4ull));
TAIL_STATIC(0x599680u,599);
}
B6373a4:L6373a4:{c.instructions+=3;NFSU2_TR(0x6373a4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6373a5:{NFSU2_TR(0x6373a5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x44ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6373a8:{NFSU2_TR(0x6373a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637380u);}goto L637380;}}
}
B6373aa:L6373aa:{c.instructions+=6;NFSU2_TR(0x6373aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6373ab:{NFSU2_TR(0x6373ab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6373ad:{NFSU2_TR(0x6373ad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6373af:{NFSU2_TR(0x6373af);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6373b1:{NFSU2_TR(0x6373b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6373b4:{NFSU2_TR(0x6373b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6373b9ull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B6373b9:L6373b9:{c.instructions+=3;NFSU2_TR(0x6373b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6373ba:{NFSU2_TR(0x6373ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6373bb:{NFSU2_TR(0x6373bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6373be:L6373be:{c.instructions+=4;NFSU2_TR(0x6373be);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6373c0:{NFSU2_TR(0x6373c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6373c1:{NFSU2_TR(0x6373c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6373c7:{NFSU2_TR(0x6373c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6373ccull));
TAIL_STATIC(0x5a64a0u,5a6);
}
B6373cc:L6373cc:{c.instructions+=1;NFSU2_TR(0x6373cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6373cd:L6373cd:{c.instructions+=5;NFSU2_TR(0x6373cd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6373cf:{NFSU2_TR(0x6373cf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6373d1:{NFSU2_TR(0x6373d1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6373d3:{NFSU2_TR(0x6373d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6373d6:{NFSU2_TR(0x6373d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6373dbull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B6373db:L6373db:{c.instructions+=3;NFSU2_TR(0x6373db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6373dc:{NFSU2_TR(0x6373dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6373dd:{NFSU2_TR(0x6373dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6373e0:L6373e0:{c.instructions+=14;NFSU2_TR(0x6373e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6373e2:{NFSU2_TR(0x6373e2);
u8 U[4];
w4(U+0,u32(0x77a5ebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6373e7:{NFSU2_TR(0x6373e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6373ed:{NFSU2_TR(0x6373ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6373ee:{NFSU2_TR(0x6373ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6373f5:{NFSU2_TR(0x6373f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6373f6:{NFSU2_TR(0x6373f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6373f7:{NFSU2_TR(0x6373f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6373f8:{NFSU2_TR(0x6373f8);
__builtin_memmove((R+24),(R+4),4);
}
B6373fa:{NFSU2_TR(0x6373fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6373fb:{NFSU2_TR(0x6373fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6373fe:{NFSU2_TR(0x6373fe);
__builtin_memmove((R+4),(R+28),4);
}
B637400:{NFSU2_TR(0x637400);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637404:{NFSU2_TR(0x637404);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637409ull));
TAIL_STATIC(0x40c910u,40c);
}
B637409:L637409:{c.instructions+=18;NFSU2_TR(0x637409);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63740d:{NFSU2_TR(0x63740d);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B637411:{NFSU2_TR(0x637411);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B637415:{NFSU2_TR(0x637415);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637418:{NFSU2_TR(0x637418);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63741c:{NFSU2_TR(0x63741c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B63741e:{NFSU2_TR(0x63741e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B637421:{NFSU2_TR(0x637421);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B637425:{NFSU2_TR(0x637425);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637426:{NFSU2_TR(0x637426);
__builtin_memmove((R+4),(R+28),4);
}
B637428:{NFSU2_TR(0x637428);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63742c:{NFSU2_TR(0x63742c);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B63742e:{NFSU2_TR(0x63742e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B637431:{NFSU2_TR(0x637431);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x901ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B637437:{NFSU2_TR(0x637437);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x902ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63743d:{NFSU2_TR(0x63743d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B637443:{NFSU2_TR(0x637443);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637449:{NFSU2_TR(0x637449);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63744eull));
TAIL_STATIC(0x413440u,413);
}
B63744e:L63744e:{c.instructions+=8;NFSU2_TR(0x63744e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637452:{NFSU2_TR(0x637452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B637454:{NFSU2_TR(0x637454);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637456:{NFSU2_TR(0x637456);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637457:{NFSU2_TR(0x637457);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90cull))));
__builtin_memmove((R+4),(U+0),4);
}
B63745d:{NFSU2_TR(0x63745d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63745e:{NFSU2_TR(0x63745e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x908ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637464:{NFSU2_TR(0x637464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637469ull));
TAIL_STATIC(0x43dc00u,43d);
}
B637469:L637469:{c.instructions+=14;NFSU2_TR(0x637469);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63746d:{NFSU2_TR(0x63746d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B637470:{NFSU2_TR(0x637470);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x91cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B637476:{NFSU2_TR(0x637476);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63747c:{NFSU2_TR(0x63747c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x924ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637482:{NFSU2_TR(0x637482);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x928ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637488:{NFSU2_TR(0x637488);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x930ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B63748f:{NFSU2_TR(0x63748f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B637490:{NFSU2_TR(0x637490);
__builtin_memmove((R+0),(R+24),4);
}
B637492:{NFSU2_TR(0x637492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637493:{NFSU2_TR(0x637493);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B637494:{NFSU2_TR(0x637494);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63749b:{NFSU2_TR(0x63749b);
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
B63749e:{NFSU2_TR(0x63749e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6374b0:L6374b0:{c.instructions+=9;NFSU2_TR(0x6374b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa8ull))));
}
B6374b6:{NFSU2_TR(0x6374b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6374b7:{NFSU2_TR(0x6374b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6374b8:{NFSU2_TR(0x6374b8);
__builtin_memmove((R+24),(R+4),4);
}
B6374ba:{NFSU2_TR(0x6374ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6374bb:{NFSU2_TR(0x6374bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6374c1:{NFSU2_TR(0x6374c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6374c9:{NFSU2_TR(0x6374c9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6374cb:{NFSU2_TR(0x6374cb);
{goto L6374d0;}
}
B6374d0:L6374d0:{c.instructions+=3;NFSU2_TR(0x6374d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6374d1:{NFSU2_TR(0x6374d1);
__builtin_memmove((R+4),(R+28),4);
}
B6374d3:{NFSU2_TR(0x6374d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6374d8ull));
TAIL_STATIC(0x5995e0u,599);
}
B6374d8:L6374d8:{c.instructions+=7;NFSU2_TR(0x6374d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6374dc:{NFSU2_TR(0x6374dc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6374e0:{NFSU2_TR(0x6374e0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6374e1:{NFSU2_TR(0x6374e1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6374e4:{NFSU2_TR(0x6374e4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6374e8:{NFSU2_TR(0x6374e8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6374ec:{NFSU2_TR(0x6374ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6374d0u);}goto L6374d0;}}
}
B6374ee:L6374ee:{c.instructions+=7;NFSU2_TR(0x6374ee);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6374f2:{NFSU2_TR(0x6374f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6374f3:{NFSU2_TR(0x6374f3);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6374f9:{NFSU2_TR(0x6374f9);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6374fb:{NFSU2_TR(0x6374fb);
__builtin_memmove((R+4),(R+28),4);
}
B6374fd:{NFSU2_TR(0x6374fd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B637501:{NFSU2_TR(0x637501);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637506ull));
TAIL_STATIC(0x5995e0u,599);
}
B637506:L637506:{c.instructions+=4;NFSU2_TR(0x637506);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637508:{NFSU2_TR(0x637508);
__builtin_memmove((R+4),(R+28),4);
}
B63750a:{NFSU2_TR(0x63750a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63750e:{NFSU2_TR(0x63750e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637513ull));
TAIL_STATIC(0x5995e0u,599);
}
B637513:L637513:{c.instructions+=5;NFSU2_TR(0x637513);
__builtin_memmove((R+12),(R+0),4);
}
B637515:{NFSU2_TR(0x637515);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637517:{NFSU2_TR(0x637517);
__builtin_memmove((R+4),(R+28),4);
}
B637519:{NFSU2_TR(0x637519);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63751d:{NFSU2_TR(0x63751d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637522ull));
TAIL_STATIC(0x5995e0u,599);
}
B637522:L637522:{c.instructions+=4;NFSU2_TR(0x637522);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637524:{NFSU2_TR(0x637524);
__builtin_memmove((R+4),(R+28),4);
}
B637526:{NFSU2_TR(0x637526);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63752a:{NFSU2_TR(0x63752a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63752full));
TAIL_STATIC(0x5995e0u,599);
}
B63752f:L63752f:{c.instructions+=5;NFSU2_TR(0x63752f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637533:{NFSU2_TR(0x637533);
__builtin_memmove((R+0),gp(0x802dd8),4);
}
B637538:{NFSU2_TR(0x637538);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63753a:{NFSU2_TR(0x63753a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B637542:{NFSU2_TR(0x637542);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L637634;}}
}
B637548:L637548:{c.instructions+=2;NFSU2_TR(0x637548);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63754c:{NFSU2_TR(0x63754c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637551ull));
TAIL_STATIC(0x75bed4u,75b);
}
B637551:L637551:{c.instructions+=3;NFSU2_TR(0x637551);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637555:{NFSU2_TR(0x637555);
w4(R+28,u32(0x802c50ull));
}
B63755a:{NFSU2_TR(0x63755a);
{goto L637560;}
}
B63755c:L63755c:{c.instructions+=1;NFSU2_TR(0x63755c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B637560:L637560:{c.instructions+=5;NFSU2_TR(0x637560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B637562:{NFSU2_TR(0x637562);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637566:{NFSU2_TR(0x637566);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B637567:{NFSU2_TR(0x637567);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1aull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1aull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1aull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63756a:{NFSU2_TR(0x63756a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L637588;}}
}
B63756c:L63756c:{c.instructions+=2;NFSU2_TR(0x63756c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x637820ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B637573:{NFSU2_TR(0x637573);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x637810ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B63757a:L63757a:{c.instructions+=2;NFSU2_TR(0x63757a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63757e:{NFSU2_TR(0x63757e);
{goto L637588;}
}
B637580:L637580:{c.instructions+=2;NFSU2_TR(0x637580);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637584:{NFSU2_TR(0x637584);
{goto L637588;}
}
B637586:L637586:{c.instructions+=1;NFSU2_TR(0x637586);
__builtin_memmove((R+0),(R+12),4);
}
B637588:L637588:{c.instructions+=3;NFSU2_TR(0x637588);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63758a:{NFSU2_TR(0x63758a);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B63758e:{NFSU2_TR(0x63758e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637593ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B637593:L637593:{c.instructions+=4;NFSU2_TR(0x637593);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B637596:{NFSU2_TR(0x637596);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B637598:{NFSU2_TR(0x637598);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63759a:{NFSU2_TR(0x63759a);
__builtin_memmove((R+12),(R+12),4);
}
B6375a0:L6375a0:{c.instructions+=4;NFSU2_TR(0x6375a0);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+12,u32(s32(s8(r1(U+8)))));
}
B6375a4:{NFSU2_TR(0x6375a4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B6375a6:{NFSU2_TR(0x6375a6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6375a8:{NFSU2_TR(0x6375a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6375b0;}}
}
B6375aa:L6375aa:{c.instructions+=3;NFSU2_TR(0x6375aa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6375ab:{NFSU2_TR(0x6375ab);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6375ae:{NFSU2_TR(0x6375ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6375a0u);}goto L6375a0;}}
}
B6375b0:L6375b0:{c.instructions+=2;NFSU2_TR(0x6375b0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6375b3:{NFSU2_TR(0x6375b3);
if(r1(R+518)){{goto L6375c2;}}
}
B6375b5:L6375b5:{c.instructions+=5;NFSU2_TR(0x6375b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6375b7:{NFSU2_TR(0x6375b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6375b8:{NFSU2_TR(0x6375b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6375b9:{NFSU2_TR(0x6375b9);
__builtin_memmove((R+4),(R+24),4);
}
B6375bb:{NFSU2_TR(0x6375bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6375c0ull));
TAIL_STATIC(0x631cb0u,631);
}
B6375c0:L6375c0:{c.instructions+=1;NFSU2_TR(0x6375c0);
{goto L6375df;}
}
B6375c2:L6375c2:{c.instructions+=4;NFSU2_TR(0x6375c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6375c5:{NFSU2_TR(0x6375c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6375c7:{NFSU2_TR(0x6375c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6375c9:{NFSU2_TR(0x6375c9);
if(r1(R+518)){{goto L6375f9;}}
}
B6375cb:L6375cb:{c.instructions+=8;NFSU2_TR(0x6375cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6375cd:{NFSU2_TR(0x6375cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6375cf:{NFSU2_TR(0x6375cf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6375d1:{NFSU2_TR(0x6375d1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6375d3:{NFSU2_TR(0x6375d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6375d4:{NFSU2_TR(0x6375d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6375d5:{NFSU2_TR(0x6375d5);
w4(R+4,u32(0x8a2b68ull));
}
B6375da:{NFSU2_TR(0x6375da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6375dfull));
TAIL_STATIC(0x61b980u,61b);
}
B6375df:L6375df:{c.instructions+=3;NFSU2_TR(0x6375df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6375e1:{NFSU2_TR(0x6375e1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6375e4:{NFSU2_TR(0x6375e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6375eb;}}
}
B6375e6:L6375e6:{c.instructions+=2;NFSU2_TR(0x6375e6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x68ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6375e9:{NFSU2_TR(0x6375e9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63761a;}}
}
B6375eb:L6375eb:{c.instructions+=2;NFSU2_TR(0x6375eb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6375ee:{NFSU2_TR(0x6375ee);
if(r1(R+518)){{goto L63761a;}}
}
B6375f0:L6375f0:{c.instructions+=2;NFSU2_TR(0x6375f0);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6375f7:{NFSU2_TR(0x6375f7);
{goto L637613;}
}
B6375f9:L6375f9:{c.instructions+=2;NFSU2_TR(0x6375f9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6375fc:{NFSU2_TR(0x6375fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L637603;}}
}
B6375fe:L6375fe:{c.instructions+=2;NFSU2_TR(0x6375fe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x68ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637601:{NFSU2_TR(0x637601);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63761a;}}
}
B637603:L637603:{c.instructions+=2;NFSU2_TR(0x637603);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637606:{NFSU2_TR(0x637606);
if(r1(R+518)){{goto L63761a;}}
}
B637608:L637608:{c.instructions+=1;NFSU2_TR(0x637608);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B637613:L637613:{c.instructions+=2;NFSU2_TR(0x637613);
__builtin_memmove((R+4),(R+24),4);
}
B637615:{NFSU2_TR(0x637615);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63761aull));
TAIL_STATIC(0x61bcd0u,61b);
}
B63761a:L63761a:{c.instructions+=7;NFSU2_TR(0x63761a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63761e:{NFSU2_TR(0x63761e);
__builtin_memmove((R+4),gp(0x802dd8),4);
}
B637624:{NFSU2_TR(0x637624);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B637625:{NFSU2_TR(0x637625);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B637628:{NFSU2_TR(0x637628);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63762a:{NFSU2_TR(0x63762a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63762e:{NFSU2_TR(0x63762e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63755cu);}goto L63755c;}}
}
B637634:L637634:{c.instructions+=8;NFSU2_TR(0x637634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B637636:{NFSU2_TR(0x637636);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B63763c:{NFSU2_TR(0x63763c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x594ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B637642:{NFSU2_TR(0x637642);
__builtin_memmove((R+28),(R+0),4);
}
B637644:{NFSU2_TR(0x637644);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B63764a:{NFSU2_TR(0x63764a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B63764c:{NFSU2_TR(0x63764c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63764e:{NFSU2_TR(0x63764e);
if(r1(R+518)){{goto L6376f1;}}
}
B637654:L637654:{c.instructions+=10;NFSU2_TR(0x637654);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B637656:{NFSU2_TR(0x637656);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B637659:{NFSU2_TR(0x637659);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63765d:{NFSU2_TR(0x63765d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1full))));
}
B637660:{NFSU2_TR(0x637660);
__builtin_memmove((R+20),(R+8),4);
}
B637662:{NFSU2_TR(0x637662);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637663:{NFSU2_TR(0x637663);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637664:{NFSU2_TR(0x637664);
u8 U[4];
w4(U+0,u32(0x7a8cfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637669:{NFSU2_TR(0x637669);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63766a:{NFSU2_TR(0x63766a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63766full));
TAIL_STATIC(0x4400d0u,440);
}
B63766f:L63766f:{c.instructions+=6;NFSU2_TR(0x63766f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637670:{NFSU2_TR(0x637670);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637671:{NFSU2_TR(0x637671);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B637678:{NFSU2_TR(0x637678);
u8 U[4];
w4(U+0,u32(0x7a8ce8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63767d:{NFSU2_TR(0x63767d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63767e:{NFSU2_TR(0x63767e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637683ull));
TAIL_STATIC(0x4400d0u,440);
}
B637683:L637683:{c.instructions+=6;NFSU2_TR(0x637683);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B637686:{NFSU2_TR(0x637686);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637688:{NFSU2_TR(0x637688);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63768c:{NFSU2_TR(0x63768c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63768e:{NFSU2_TR(0x63768e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63768f:{NFSU2_TR(0x63768f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637694ull));
TAIL_STATIC(0x43db50u,43d);
}
B637694:L637694:{c.instructions+=7;NFSU2_TR(0x637694);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B637697:{NFSU2_TR(0x637697);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637698:{NFSU2_TR(0x637698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63769a:{NFSU2_TR(0x63769a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63769c:{NFSU2_TR(0x63769c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63769d:{NFSU2_TR(0x63769d);
w4(R+4,u32(0x8a2b68ull));
}
B6376a2:{NFSU2_TR(0x6376a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6376a7ull));
TAIL_STATIC(0x61b980u,61b);
}
B6376a7:L6376a7:{c.instructions+=6;NFSU2_TR(0x6376a7);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6376a9:{NFSU2_TR(0x6376a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6376ad:{NFSU2_TR(0x6376ad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6376af:{NFSU2_TR(0x6376af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6376b0:{NFSU2_TR(0x6376b0);
__builtin_memmove((R+28),(R+0),4);
}
B6376b2:{NFSU2_TR(0x6376b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6376b7ull));
TAIL_STATIC(0x43db50u,43d);
}
B6376b7:L6376b7:{c.instructions+=7;NFSU2_TR(0x6376b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6376b9:{NFSU2_TR(0x6376b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6376bc:{NFSU2_TR(0x6376bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6376bd:{NFSU2_TR(0x6376bd);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6376bf:{NFSU2_TR(0x6376bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6376c0:{NFSU2_TR(0x6376c0);
w4(R+4,u32(0x8a2b68ull));
}
B6376c5:{NFSU2_TR(0x6376c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6376caull));
TAIL_STATIC(0x61b980u,61b);
}
B6376ca:L6376ca:{c.instructions+=3;NFSU2_TR(0x6376ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6376cc:{NFSU2_TR(0x6376cc);
__builtin_memmove((R+20),(R+0),4);
}
B6376ce:{NFSU2_TR(0x6376ce);
if(r1(R+518)){{goto L63775b;}}
}
B6376d4:L6376d4:{c.instructions+=2;NFSU2_TR(0x6376d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6376d6:{NFSU2_TR(0x6376d6);
if(r1(R+518)){{goto L63775b;}}
}
B6376dc:L6376dc:{c.instructions+=3;NFSU2_TR(0x6376dc);
__builtin_memmove((R+4),(R+24),4);
}
B6376de:{NFSU2_TR(0x6376de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x594ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6376e4:{NFSU2_TR(0x6376e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6376e9ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B6376e9:L6376e9:{c.instructions+=2;NFSU2_TR(0x6376e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x598ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6376ef:{NFSU2_TR(0x6376ef);
{goto L637747;}
}
B6376f1:L6376f1:{c.instructions+=7;NFSU2_TR(0x6376f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6376f3:{NFSU2_TR(0x6376f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6376f5:{NFSU2_TR(0x6376f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6376f7:{NFSU2_TR(0x6376f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6376f9:{NFSU2_TR(0x6376f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6376fa:{NFSU2_TR(0x6376fa);
w4(R+4,u32(0x8a2b68ull));
}
B6376ff:{NFSU2_TR(0x6376ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637704ull));
TAIL_STATIC(0x61b980u,61b);
}
B637704:L637704:{c.instructions+=9;NFSU2_TR(0x637704);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637706:{NFSU2_TR(0x637706);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637708:{NFSU2_TR(0x637708);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63770a:{NFSU2_TR(0x63770a);
__builtin_memmove((R+28),(R+0),4);
}
B63770c:{NFSU2_TR(0x63770c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63770e:{NFSU2_TR(0x63770e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637710:{NFSU2_TR(0x637710);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637711:{NFSU2_TR(0x637711);
w4(R+4,u32(0x8a2b68ull));
}
B637716:{NFSU2_TR(0x637716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63771bull));
TAIL_STATIC(0x61b980u,61b);
}
B63771b:L63771b:{c.instructions+=9;NFSU2_TR(0x63771b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B63771d:{NFSU2_TR(0x63771d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63771f:{NFSU2_TR(0x63771f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637721:{NFSU2_TR(0x637721);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637723:{NFSU2_TR(0x637723);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637725:{NFSU2_TR(0x637725);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637726:{NFSU2_TR(0x637726);
w4(R+4,u32(0x8a2b68ull));
}
B63772b:{NFSU2_TR(0x63772b);
__builtin_memmove((R+12),(R+0),4);
}
B63772d:{NFSU2_TR(0x63772d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637732ull));
TAIL_STATIC(0x61b980u,61b);
}
B637732:L637732:{c.instructions+=4;NFSU2_TR(0x637732);
__builtin_memmove((R+4),(R+24),4);
}
B637734:{NFSU2_TR(0x637734);
__builtin_memmove((R+20),(R+0),4);
}
B637736:{NFSU2_TR(0x637736);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x594ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63773c:{NFSU2_TR(0x63773c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637741ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B637741:L637741:{c.instructions+=1;NFSU2_TR(0x637741);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x598ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637747:L637747:{c.instructions+=2;NFSU2_TR(0x637747);
__builtin_memmove((R+4),(R+24),4);
}
B637749:{NFSU2_TR(0x637749);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63774eull));
TAIL_STATIC(0x61bcd0u,61b);
}
B63774e:L63774e:{c.instructions+=3;NFSU2_TR(0x63774e);
__builtin_memmove((R+4),(R+24),4);
}
B637750:{NFSU2_TR(0x637750);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5bcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637756:{NFSU2_TR(0x637756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63775bull));
TAIL_STATIC(0x61bcd0u,61b);
}
B63775b:L63775b:{c.instructions+=21;NFSU2_TR(0x63775b);
w1(R+0,u8(0x14ull));
}
B63775d:{NFSU2_TR(0x63775d);
w1(R+8,u8(0x46ull));
}
B63775f:{NFSU2_TR(0x63775f);
w1(R+4,u8(0x32ull));
}
B637761:{NFSU2_TR(0x637761);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637763:{NFSU2_TR(0x637763);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B637767:{NFSU2_TR(0x637767);
u8 U[5];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63776b:{NFSU2_TR(0x63776b);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B637770:{NFSU2_TR(0x637770);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B637775:{NFSU2_TR(0x637775);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B637779:{NFSU2_TR(0x637779);
u8 U[5];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
w1(U+4,u8(0x28ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63777e:{NFSU2_TR(0x63777e);
u8 U[5];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B637783:{NFSU2_TR(0x637783);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B637788:{NFSU2_TR(0x637788);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B63778d:{NFSU2_TR(0x63778d);
u8 U[5];
w4(U+0,u32(u32(u32(0x25ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B637791:{NFSU2_TR(0x637791);
u8 U[5];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B637795:{NFSU2_TR(0x637795);
u8 U[5];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B637799:{NFSU2_TR(0x637799);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63779e:{NFSU2_TR(0x63779e);
u8 U[5];
w4(U+0,u32(u32(u32(0x29ull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B6377a3:{NFSU2_TR(0x6377a3);
u8 U[5];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6377a7:{NFSU2_TR(0x6377a7);
u8 U[5];
w4(U+0,u32(u32(u32(0x2bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6377ab:{NFSU2_TR(0x6377ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6377b0ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B6377b0:L6377b0:{c.instructions+=6;NFSU2_TR(0x6377b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6377b4:{NFSU2_TR(0x6377b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6377b7:{NFSU2_TR(0x6377b7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6377b9:{NFSU2_TR(0x6377b9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6377bb:{NFSU2_TR(0x6377bb);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6377bf:{NFSU2_TR(0x6377bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6377c0:L6377c0:{c.instructions+=4;NFSU2_TR(0x6377c0);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+12,u32(s32(s8(r1(U+8)))));
}
B6377c4:{NFSU2_TR(0x6377c4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B6377c6:{NFSU2_TR(0x6377c6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6377c8:{NFSU2_TR(0x6377c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6377d0;}}
}
B6377ca:L6377ca:{c.instructions+=3;NFSU2_TR(0x6377ca);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6377cb:{NFSU2_TR(0x6377cb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6377ce:{NFSU2_TR(0x6377ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6377c0u);}goto L6377c0;}}
}
B6377d0:L6377d0:{c.instructions+=3;NFSU2_TR(0x6377d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6377d1:{NFSU2_TR(0x6377d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6377d2:{NFSU2_TR(0x6377d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6377d7ull));
TAIL_STATIC(0x632de0u,632);
}
B6377d7:L6377d7:{c.instructions+=4;NFSU2_TR(0x6377d7);
__builtin_memmove((R+28),(R+0),4);
}
B6377d9:{NFSU2_TR(0x6377d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6377dc:{NFSU2_TR(0x6377dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6377de:{NFSU2_TR(0x6377de);
if(r1(R+518)){{goto L6377fa;}}
}
B6377e0:L6377e0:{c.instructions+=3;NFSU2_TR(0x6377e0);
__builtin_memmove((R+4),(R+24),4);
}
B6377e2:{NFSU2_TR(0x6377e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x604ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6377e8:{NFSU2_TR(0x6377e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6377edull));
TAIL_STATIC(0x61bcd0u,61b);
}
B6377ed:L6377ed:{c.instructions+=3;NFSU2_TR(0x6377ed);
__builtin_memmove((R+4),(R+24),4);
}
B6377ef:{NFSU2_TR(0x6377ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x608ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6377f5:{NFSU2_TR(0x6377f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6377faull));
TAIL_STATIC(0x61bcd0u,61b);
}
B6377fa:L6377fa:{c.instructions+=2;NFSU2_TR(0x6377fa);
__builtin_memmove((R+4),(R+24),4);
}
B6377fc:{NFSU2_TR(0x6377fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637801ull));
TAIL_STATIC(0x632ec0u,632);
}
B637801:L637801:{c.instructions+=5;NFSU2_TR(0x637801);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B637802:{NFSU2_TR(0x637802);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637803:{NFSU2_TR(0x637803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B637804:{NFSU2_TR(0x637804);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xa8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xa8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xa8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63780a:{NFSU2_TR(0x63780a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637840:L637840:{c.instructions+=17;NFSU2_TR(0x637840);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637842:{NFSU2_TR(0x637842);
u8 U[4];
w4(U+0,u32(0x77a31bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637847:{NFSU2_TR(0x637847);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63784d:{NFSU2_TR(0x63784d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63784e:{NFSU2_TR(0x63784e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637855:{NFSU2_TR(0x637855);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637856:{NFSU2_TR(0x637856);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63785a:{NFSU2_TR(0x63785a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63785b:{NFSU2_TR(0x63785b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63785c:{NFSU2_TR(0x63785c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63785d:{NFSU2_TR(0x63785d);
__builtin_memmove((R+24),(R+4),4);
}
B63785f:{NFSU2_TR(0x63785f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637860:{NFSU2_TR(0x637860);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B637863:{NFSU2_TR(0x637863);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637864:{NFSU2_TR(0x637864);
__builtin_memmove((R+4),(R+28),4);
}
B637866:{NFSU2_TR(0x637866);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63786a:{NFSU2_TR(0x63786a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63786full));
TAIL_STATIC(0x633a40u,633);
}
B63786f:L63786f:{c.instructions+=9;NFSU2_TR(0x63786f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B637873:{NFSU2_TR(0x637873);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B637877:{NFSU2_TR(0x637877);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637878:{NFSU2_TR(0x637878);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637879:{NFSU2_TR(0x637879);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x960ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63787f:{NFSU2_TR(0x63787f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637880:{NFSU2_TR(0x637880);
__builtin_memmove((R+4),(R+12),4);
}
B637882:{NFSU2_TR(0x637882);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63788a:{NFSU2_TR(0x63788a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63788full));
TAIL_STATIC(0x6337e0u,633);
}
B63788f:L63788f:{c.instructions+=4;NFSU2_TR(0x63788f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc78ull))));
__builtin_memmove((R+20),(U+0),4);
}
B637895:{NFSU2_TR(0x637895);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637896:{NFSU2_TR(0x637896);
__builtin_memmove((R+4),(R+20),4);
}
B637898:{NFSU2_TR(0x637898);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63789dull));
TAIL_STATIC(0x633650u,633);
}
B63789d:L63789d:{c.instructions+=7;NFSU2_TR(0x63789d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6378a1:{NFSU2_TR(0x6378a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6378a5:{NFSU2_TR(0x6378a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6378a6:{NFSU2_TR(0x6378a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6378a7:{NFSU2_TR(0x6378a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcf0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6378ad:{NFSU2_TR(0x6378ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6378ae:{NFSU2_TR(0x6378ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6378b3ull));
TAIL_STATIC(0x6335d0u,633);
}
B6378b3:L6378b3:{c.instructions+=26;NFSU2_TR(0x6378b3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6378b5:{NFSU2_TR(0x6378b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6378b8:{NFSU2_TR(0x6378b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6378bb:{NFSU2_TR(0x6378bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6378be:{NFSU2_TR(0x6378be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6378c1:{NFSU2_TR(0x6378c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6378c5:{NFSU2_TR(0x6378c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6378c7:{NFSU2_TR(0x6378c7);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B6378cd:{NFSU2_TR(0x6378cd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6378d3:{NFSU2_TR(0x6378d3);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6378d5:{NFSU2_TR(0x6378d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6378db:{NFSU2_TR(0x6378db);
__builtin_memmove((R+8),gp(0x803690),4);
}
B6378e1:{NFSU2_TR(0x6378e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x123cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6378e7:{NFSU2_TR(0x6378e7);
s4(0x803690,u32(u32(m4(0x803690))+u32(u32(0x1ull))));
}
B6378ed:{NFSU2_TR(0x6378ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6378f3:{NFSU2_TR(0x6378f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcf0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6378f9:{NFSU2_TR(0x6378f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x95cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6378ff:{NFSU2_TR(0x6378ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x123cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637905:{NFSU2_TR(0x637905);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637906:{NFSU2_TR(0x637906);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637907:{NFSU2_TR(0x637907);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((R+8),(U+0),4);
}
B63790d:{NFSU2_TR(0x63790d);
u8 U[4];
w4(U+0,u32(0x7a0400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637912:{NFSU2_TR(0x637912);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637913:{NFSU2_TR(0x637913);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x954ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637919:{NFSU2_TR(0x637919);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x958ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63791f:{NFSU2_TR(0x63791f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637924ull));
TAIL_STATIC(0x4400d0u,440);
}
B637924:L637924:{c.instructions+=10;NFSU2_TR(0x637924);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B637928:{NFSU2_TR(0x637928);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B63792b:{NFSU2_TR(0x63792b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63792c:{NFSU2_TR(0x63792c);
__builtin_memmove((R+0),(R+24),4);
}
B63792e:{NFSU2_TR(0x63792e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63792f:{NFSU2_TR(0x63792f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B637930:{NFSU2_TR(0x637930);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B637931:{NFSU2_TR(0x637931);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637938:{NFSU2_TR(0x637938);
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
B63793b:{NFSU2_TR(0x63793b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637940:L637940:{c.instructions+=39;NFSU2_TR(0x637940);
__builtin_memmove((R+0),(R+4),4);
}
B637942:{NFSU2_TR(0x637942);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B637945:{NFSU2_TR(0x637945);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B637947:{NFSU2_TR(0x637947);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63794a:{NFSU2_TR(0x63794a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63794d:{NFSU2_TR(0x63794d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63794f:{NFSU2_TR(0x63794f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637952:{NFSU2_TR(0x637952);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B637955:{NFSU2_TR(0x637955);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B637957:{NFSU2_TR(0x637957);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63795a:{NFSU2_TR(0x63795a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63795d:{NFSU2_TR(0x63795d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63795f:{NFSU2_TR(0x63795f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637962:{NFSU2_TR(0x637962);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B637965:{NFSU2_TR(0x637965);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B637967:{NFSU2_TR(0x637967);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63796a:{NFSU2_TR(0x63796a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63796d:{NFSU2_TR(0x63796d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63796f:{NFSU2_TR(0x63796f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637972:{NFSU2_TR(0x637972);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B637975:{NFSU2_TR(0x637975);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B637977:{NFSU2_TR(0x637977);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63797a:{NFSU2_TR(0x63797a);
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
B63797c:{NFSU2_TR(0x63797c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63797f:{NFSU2_TR(0x63797f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637982:{NFSU2_TR(0x637982);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637985:{NFSU2_TR(0x637985);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637988:{NFSU2_TR(0x637988);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63798b:{NFSU2_TR(0x63798b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63798e:{NFSU2_TR(0x63798e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637991:{NFSU2_TR(0x637991);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637994:{NFSU2_TR(0x637994);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B637996:{NFSU2_TR(0x637996);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637999:{NFSU2_TR(0x637999);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63799c:{NFSU2_TR(0x63799c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63799f:{NFSU2_TR(0x63799f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6379a2:{NFSU2_TR(0x6379a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6379a5:{NFSU2_TR(0x6379a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6379a8:{NFSU2_TR(0x6379a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6379b0:L6379b0:{c.instructions+=14;NFSU2_TR(0x6379b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6379b2:{NFSU2_TR(0x6379b2);
u8 U[4];
w4(U+0,u32(0x77a37dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6379b7:{NFSU2_TR(0x6379b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6379bd:{NFSU2_TR(0x6379bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6379be:{NFSU2_TR(0x6379be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6379c5:{NFSU2_TR(0x6379c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6379c6:{NFSU2_TR(0x6379c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6379c7:{NFSU2_TR(0x6379c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6379c8:{NFSU2_TR(0x6379c8);
__builtin_memmove((R+28),(R+4),4);
}
B6379ca:{NFSU2_TR(0x6379ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6379ce:{NFSU2_TR(0x6379ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6379d1:{NFSU2_TR(0x6379d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6379d3:{NFSU2_TR(0x6379d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6379db:{NFSU2_TR(0x6379db);
if(r1(R+518)){{goto L637a18;}}
}
B6379dd:L6379dd:{c.instructions+=3;NFSU2_TR(0x6379dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6379e0:{NFSU2_TR(0x6379e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6379e2:{NFSU2_TR(0x6379e2);
if(r1(R+518)){{goto L637a08;}}
}
B6379e4:L6379e4:{c.instructions+=2;NFSU2_TR(0x6379e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6379e5:{NFSU2_TR(0x6379e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6379eaull));
TAIL_STATIC(0x580e90u,580);
}
B6379ea:L6379ea:{c.instructions+=6;NFSU2_TR(0x6379ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6379ed:{NFSU2_TR(0x6379ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6379f4:{NFSU2_TR(0x6379f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6379f7:{NFSU2_TR(0x6379f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6379f9:{NFSU2_TR(0x6379f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B637a00:{NFSU2_TR(0x637a00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637a05ull));
TAIL_STATIC(0x438140u,438);
}
B637a05:L637a05:{c.instructions+=1;NFSU2_TR(0x637a05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B637a08:L637a08:{c.instructions+=3;NFSU2_TR(0x637a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637a0b:{NFSU2_TR(0x637a0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B637a0d:{NFSU2_TR(0x637a0d);
if(r1(R+518)){{goto L637a18;}}
}
B637a0f:L637a0f:{c.instructions+=2;NFSU2_TR(0x637a0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637a10:{NFSU2_TR(0x637a10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637a15ull));
TAIL_STATIC(0x575630u,575);
}
B637a15:L637a15:{c.instructions+=1;NFSU2_TR(0x637a15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B637a18:L637a18:{c.instructions+=3;NFSU2_TR(0x637a18);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B637a1b:{NFSU2_TR(0x637a1b);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B637a20:{NFSU2_TR(0x637a20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637a25ull));
TAIL_STATIC(0x6344e0u,634);
}
B637a25:L637a25:{c.instructions+=5;NFSU2_TR(0x637a25);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637a28:{NFSU2_TR(0x637a28);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637a2b:{NFSU2_TR(0x637a2b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637a2d:{NFSU2_TR(0x637a2d);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B637a32:{NFSU2_TR(0x637a32);
if(r1(R+518)){{goto L637a4d;}}
}
B637a34:L637a34:{c.instructions+=6;NFSU2_TR(0x637a34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B637a36:{NFSU2_TR(0x637a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B637a39:{NFSU2_TR(0x637a39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B637a3b:{NFSU2_TR(0x637a3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637a3c:{NFSU2_TR(0x637a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637a3f:{NFSU2_TR(0x637a3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637a44ull));
TAIL_STATIC(0x575630u,575);
}
B637a44:L637a44:{c.instructions+=4;NFSU2_TR(0x637a44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B637a46:{NFSU2_TR(0x637a46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B637a49:{NFSU2_TR(0x637a49);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637a4b:{NFSU2_TR(0x637a4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637a34u);}goto L637a34;}}
}
B637a4d:L637a4d:{c.instructions+=5;NFSU2_TR(0x637a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637a50:{NFSU2_TR(0x637a50);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637a53:{NFSU2_TR(0x637a53);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637a55:{NFSU2_TR(0x637a55);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B637a5a:{NFSU2_TR(0x637a5a);
if(r1(R+518)){{goto L637a79;}}
}
B637a5c:L637a5c:{c.instructions+=1;NFSU2_TR(0x637a5c);
__builtin_memmove((R+16),(R+16),4);
}
B637a60:L637a60:{c.instructions+=6;NFSU2_TR(0x637a60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B637a62:{NFSU2_TR(0x637a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B637a65:{NFSU2_TR(0x637a65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B637a67:{NFSU2_TR(0x637a67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637a68:{NFSU2_TR(0x637a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637a6b:{NFSU2_TR(0x637a6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637a70ull));
TAIL_STATIC(0x575630u,575);
}
B637a70:L637a70:{c.instructions+=4;NFSU2_TR(0x637a70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B637a72:{NFSU2_TR(0x637a72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B637a75:{NFSU2_TR(0x637a75);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637a77:{NFSU2_TR(0x637a77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637a60u);}goto L637a60;}}
}
B637a79:L637a79:{c.instructions+=5;NFSU2_TR(0x637a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637a7c:{NFSU2_TR(0x637a7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637a7f:{NFSU2_TR(0x637a7f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637a81:{NFSU2_TR(0x637a81);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B637a86:{NFSU2_TR(0x637a86);
if(r1(R+518)){{goto L637aa1;}}
}
B637a88:L637a88:{c.instructions+=6;NFSU2_TR(0x637a88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B637a8a:{NFSU2_TR(0x637a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B637a8d:{NFSU2_TR(0x637a8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B637a8f:{NFSU2_TR(0x637a8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637a90:{NFSU2_TR(0x637a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637a93:{NFSU2_TR(0x637a93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637a98ull));
TAIL_STATIC(0x575630u,575);
}
B637a98:L637a98:{c.instructions+=4;NFSU2_TR(0x637a98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B637a9a:{NFSU2_TR(0x637a9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B637a9d:{NFSU2_TR(0x637a9d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637a9f:{NFSU2_TR(0x637a9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637a88u);}goto L637a88;}}
}
B637aa1:L637aa1:{c.instructions+=3;NFSU2_TR(0x637aa1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B637aa4:{NFSU2_TR(0x637aa4);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B637aa9:{NFSU2_TR(0x637aa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637aaeull));
TAIL_STATIC(0x6344a0u,634);
}
B637aae:L637aae:{c.instructions+=3;NFSU2_TR(0x637aae);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B637ab1:{NFSU2_TR(0x637ab1);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B637ab6:{NFSU2_TR(0x637ab6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637abbull));
TAIL_STATIC(0x634460u,634);
}
B637abb:L637abb:{c.instructions+=3;NFSU2_TR(0x637abb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B637abe:{NFSU2_TR(0x637abe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B637ac6:{NFSU2_TR(0x637ac6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637acbull));
TAIL_STATIC(0x634420u,634);
}
B637acb:L637acb:{c.instructions+=6;NFSU2_TR(0x637acb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B637acf:{NFSU2_TR(0x637acf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B637ad0:{NFSU2_TR(0x637ad0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637ad1:{NFSU2_TR(0x637ad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637ad8:{NFSU2_TR(0x637ad8);
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
B637adb:{NFSU2_TR(0x637adb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637ae0:L637ae0:{c.instructions+=4;NFSU2_TR(0x637ae0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637ae1:{NFSU2_TR(0x637ae1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B637ae5:{NFSU2_TR(0x637ae5);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B637aea:{NFSU2_TR(0x637aea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L637b3e;}}
}
B637aec:L637aec:{c.instructions+=2;NFSU2_TR(0x637aec);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x2ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B637af0:{NFSU2_TR(0x637af0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L637b1b;}}
}
B637af2:L637af2:{c.instructions+=3;NFSU2_TR(0x637af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637af5:{NFSU2_TR(0x637af5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B637af7:{NFSU2_TR(0x637af7);
if(r1(R+518)){{goto L637b0b;}}
}
B637af9:L637af9:{c.instructions+=2;NFSU2_TR(0x637af9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637afa:{NFSU2_TR(0x637afa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637affull));
TAIL_STATIC(0x580e90u,580);
}
B637aff:L637aff:{c.instructions+=3;NFSU2_TR(0x637aff);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B637b02:{NFSU2_TR(0x637b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B637b09:{NFSU2_TR(0x637b09);
{goto L637b1b;}
}
B637b0b:L637b0b:{c.instructions+=5;NFSU2_TR(0x637b0b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637b0d:{NFSU2_TR(0x637b0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B637b10:{NFSU2_TR(0x637b10);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637b12:{NFSU2_TR(0x637b12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637b13:{NFSU2_TR(0x637b13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637b18ull));
TAIL_STATIC(0x4941f0u,494);
}
B637b18:L637b18:{c.instructions+=1;NFSU2_TR(0x637b18);
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B637b1b:L637b1b:{c.instructions+=8;NFSU2_TR(0x637b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B637b1e:{NFSU2_TR(0x637b1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B637b20:{NFSU2_TR(0x637b20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B637b22:{NFSU2_TR(0x637b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637b25:{NFSU2_TR(0x637b25);
__builtin_memmove((R+4),gp(0x8a1cf8),4);
}
B637b2b:{NFSU2_TR(0x637b2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637b2c:{NFSU2_TR(0x637b2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637b2d:{NFSU2_TR(0x637b2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637b32ull));
TAIL_STATIC(0x43f920u,43f);
}
B637b32:L637b32:{c.instructions+=4;NFSU2_TR(0x637b32);
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
B637b35:{NFSU2_TR(0x637b35);
w4(R+0,u32(0x1ull));
}
B637b3a:{NFSU2_TR(0x637b3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637b3b:{NFSU2_TR(0x637b3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637b3e:L637b3e:{c.instructions+=3;NFSU2_TR(0x637b3e);
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
B637b40:{NFSU2_TR(0x637b40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637b41:{NFSU2_TR(0x637b41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637b50:L637b50:{c.instructions+=4;NFSU2_TR(0x637b50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637b51:{NFSU2_TR(0x637b51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B637b55:{NFSU2_TR(0x637b55);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B637b5a:{NFSU2_TR(0x637b5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L637b9c;}}
}
B637b5c:L637b5c:{c.instructions+=2;NFSU2_TR(0x637b5c);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x2ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B637b60:{NFSU2_TR(0x637b60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L637b79;}}
}
B637b62:L637b62:{c.instructions+=3;NFSU2_TR(0x637b62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637b65:{NFSU2_TR(0x637b65);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B637b67:{NFSU2_TR(0x637b67);
if(r1(R+518)){{goto L637b79;}}
}
B637b69:L637b69:{c.instructions+=5;NFSU2_TR(0x637b69);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637b6b:{NFSU2_TR(0x637b6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B637b6e:{NFSU2_TR(0x637b6e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637b70:{NFSU2_TR(0x637b70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637b71:{NFSU2_TR(0x637b71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637b76ull));
TAIL_STATIC(0x494550u,494);
}
B637b76:L637b76:{c.instructions+=1;NFSU2_TR(0x637b76);
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B637b79:L637b79:{c.instructions+=8;NFSU2_TR(0x637b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B637b7c:{NFSU2_TR(0x637b7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B637b7e:{NFSU2_TR(0x637b7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B637b80:{NFSU2_TR(0x637b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637b83:{NFSU2_TR(0x637b83);
__builtin_memmove((R+4),gp(0x8a1cf4),4);
}
B637b89:{NFSU2_TR(0x637b89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637b8a:{NFSU2_TR(0x637b8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637b8b:{NFSU2_TR(0x637b8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637b90ull));
TAIL_STATIC(0x43f920u,43f);
}
B637b90:L637b90:{c.instructions+=4;NFSU2_TR(0x637b90);
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
B637b93:{NFSU2_TR(0x637b93);
w4(R+0,u32(0x1ull));
}
B637b98:{NFSU2_TR(0x637b98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637b99:{NFSU2_TR(0x637b99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637b9c:L637b9c:{c.instructions+=3;NFSU2_TR(0x637b9c);
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
B637b9e:{NFSU2_TR(0x637b9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637b9f:{NFSU2_TR(0x637b9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637bb0:L637bb0:{c.instructions+=8;NFSU2_TR(0x637bb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637bb1:{NFSU2_TR(0x637bb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B637bb5:{NFSU2_TR(0x637bb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637bb6:{NFSU2_TR(0x637bb6);
__builtin_memmove((R+28),(R+4),4);
}
B637bb8:{NFSU2_TR(0x637bb8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B637bbb:{NFSU2_TR(0x637bbb);
w4(R+0,u32(0x2ull));
}
B637bc0:{NFSU2_TR(0x637bc0);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B637bc2:{NFSU2_TR(0x637bc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L637bec;}}
}
B637bc4:L637bc4:{c.instructions+=5;NFSU2_TR(0x637bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B637bc7:{NFSU2_TR(0x637bc7);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B637bcd:{NFSU2_TR(0x637bcd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B637bd3:{NFSU2_TR(0x637bd3);
u8 U[24];
w4(U+0,u32(u32(u32(0x844ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B637bda:{NFSU2_TR(0x637bda);
if(r1(R+518)){{goto L637bec;}}
}
B637bdc:L637bdc:{c.instructions+=5;NFSU2_TR(0x637bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637bdf:{NFSU2_TR(0x637bdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637be0:{NFSU2_TR(0x637be0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B637be3:{NFSU2_TR(0x637be3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637be4:{NFSU2_TR(0x637be4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637be9ull));
TAIL_STATIC(0x48d9b0u,48d);
}
B637be9:L637be9:{c.instructions+=1;NFSU2_TR(0x637be9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B637bec:L637bec:{c.instructions+=6;NFSU2_TR(0x637bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637bef:{NFSU2_TR(0x637bef);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B637bf3:{NFSU2_TR(0x637bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B637bf6:{NFSU2_TR(0x637bf6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637bf7:{NFSU2_TR(0x637bf7);
__builtin_memmove((R+4),(R+28),4);
}
B637bf9:{NFSU2_TR(0x637bf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637bfeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637ae0u);}goto L637ae0;}
}
B637bfe:L637bfe:{c.instructions+=5;NFSU2_TR(0x637bfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B637bff:{NFSU2_TR(0x637bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B637c06:{NFSU2_TR(0x637c06);
w4(R+0,u32(0x1ull));
}
B637c0b:{NFSU2_TR(0x637c0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637c0c:{NFSU2_TR(0x637c0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637c10:L637c10:{c.instructions+=7;NFSU2_TR(0x637c10);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637c14:{NFSU2_TR(0x637c14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637c15:{NFSU2_TR(0x637c15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637c16:{NFSU2_TR(0x637c16);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B637c18:{NFSU2_TR(0x637c18);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B637c1a:{NFSU2_TR(0x637c1a);
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
B637c1c:{NFSU2_TR(0x637c1c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L637c69;}}
}
B637c1e:L637c1e:{c.instructions+=4;NFSU2_TR(0x637c1e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637c1f:{NFSU2_TR(0x637c1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B637c23:{NFSU2_TR(0x637c23);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637c24:{NFSU2_TR(0x637c24);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B637c28:L637c28:{c.instructions+=3;NFSU2_TR(0x637c28);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B637c2c:{NFSU2_TR(0x637c2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B637c2e:{NFSU2_TR(0x637c2e);
if(r1(R+518)){{goto L637c5e;}}
}
B637c30:L637c30:{c.instructions+=2;NFSU2_TR(0x637c30);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B637c35:{NFSU2_TR(0x637c35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L637c5e;}}
}
B637c37:L637c37:{c.instructions+=2;NFSU2_TR(0x637c37);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x2ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B637c3b:{NFSU2_TR(0x637c3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L637c44;}}
}
B637c3d:L637c3d:{c.instructions+=3;NFSU2_TR(0x637c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B637c40:{NFSU2_TR(0x637c40);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B637c43:{NFSU2_TR(0x637c43);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B637c44:L637c44:{c.instructions+=8;NFSU2_TR(0x637c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B637c47:{NFSU2_TR(0x637c47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B637c49:{NFSU2_TR(0x637c49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B637c4b:{NFSU2_TR(0x637c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637c4e:{NFSU2_TR(0x637c4e);
__builtin_memmove((R+8),gp(0x8a1cfc),4);
}
B637c54:{NFSU2_TR(0x637c54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637c55:{NFSU2_TR(0x637c55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637c56:{NFSU2_TR(0x637c56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637c5bull));
TAIL_STATIC(0x43f920u,43f);
}
B637c5b:L637c5b:{c.instructions+=1;NFSU2_TR(0x637c5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B637c5e:L637c5e:{c.instructions+=4;NFSU2_TR(0x637c5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637c62:{NFSU2_TR(0x637c62);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B637c63:{NFSU2_TR(0x637c63);
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
B637c65:{NFSU2_TR(0x637c65);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637c28u);}goto L637c28;}}
}
B637c67:L637c67:{c.instructions+=2;NFSU2_TR(0x637c67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B637c68:{NFSU2_TR(0x637c68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B637c69:L637c69:{c.instructions+=4;NFSU2_TR(0x637c69);
__builtin_memmove((R+0),(R+28),4);
}
B637c6b:{NFSU2_TR(0x637c6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B637c6c:{NFSU2_TR(0x637c6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637c6d:{NFSU2_TR(0x637c6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637c70:L637c70:{c.instructions+=5;NFSU2_TR(0x637c70);
__builtin_memmove((R+0),gp(0x89e7d2),1);
}
B637c75:{NFSU2_TR(0x637c75);
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
B637c77:{NFSU2_TR(0x637c77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637c78:{NFSU2_TR(0x637c78);
__builtin_memmove((R+24),(R+4),4);
}
B637c7a:{NFSU2_TR(0x637c7a);
if(r1(R+518)){{goto L637d2a;}}
}
B637c80:L637c80:{c.instructions+=5;NFSU2_TR(0x637c80);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B637c84:{NFSU2_TR(0x637c84);
{u32 ea_=u32(u32(8021884u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B637c8a:{NFSU2_TR(0x637c8a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B637c8c:{NFSU2_TR(0x637c8c);
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
B637c8f:{NFSU2_TR(0x637c8f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L637d2a;}}
}
B637c95:L637c95:{c.instructions+=9;NFSU2_TR(0x637c95);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637c96:{NFSU2_TR(0x637c96);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B637c9a:{NFSU2_TR(0x637c9a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637c9b:{NFSU2_TR(0x637c9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637c9c:{NFSU2_TR(0x637c9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B637ca0:{NFSU2_TR(0x637ca0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637ca1:{NFSU2_TR(0x637ca1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637ca2:{NFSU2_TR(0x637ca2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((R+4),(U+0),4);
}
B637ca8:{NFSU2_TR(0x637ca8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637cadull));
TAIL_STATIC(0x61cdd0u,61c);
}
B637cad:L637cad:{c.instructions+=6;NFSU2_TR(0x637cad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B637cb0:{NFSU2_TR(0x637cb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637cb1:{NFSU2_TR(0x637cb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B637cb4:{NFSU2_TR(0x637cb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637cb5:{NFSU2_TR(0x637cb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637cb6:{NFSU2_TR(0x637cb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637cbbull));
TAIL_STATIC(0x60c1d0u,60c);
}
B637cbb:L637cbb:{c.instructions+=5;NFSU2_TR(0x637cbb);
__builtin_memmove((R+20),(R+0),4);
}
B637cbd:{NFSU2_TR(0x637cbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B637cc0:{NFSU2_TR(0x637cc0);
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
B637cc2:{NFSU2_TR(0x637cc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637cc6:{NFSU2_TR(0x637cc6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L637d27;}}
}
B637cc8:L637cc8:{c.instructions+=7;NFSU2_TR(0x637cc8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637cc9:{NFSU2_TR(0x637cc9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637cca:{NFSU2_TR(0x637cca);
__builtin_memmove((R+8),(R+12),4);
}
B637ccc:{NFSU2_TR(0x637ccc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637ccd:{NFSU2_TR(0x637ccd);
__builtin_memmove((R+4),(R+24),4);
}
B637ccf:{NFSU2_TR(0x637ccf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637cd3:{NFSU2_TR(0x637cd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637cd8ull));
TAIL_STATIC(0x610f30u,610);
}
B637cd8:L637cd8:{c.instructions+=3;NFSU2_TR(0x637cd8);
w4(R+28,u32(0x1ull));
}
B637cdd:{NFSU2_TR(0x637cdd);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B637cde:{NFSU2_TR(0x637cde);
__builtin_memmove((R+28),(R+28),4);
}
B637ce0:L637ce0:{c.instructions+=12;NFSU2_TR(0x637ce0);
{u32 ea_=u32(u32(8021880u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B637ce6:{NFSU2_TR(0x637ce6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B637cea:{NFSU2_TR(0x637cea);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B637cee:{NFSU2_TR(0x637cee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637cef:{NFSU2_TR(0x637cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B637cf2:{NFSU2_TR(0x637cf2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1full))));
}
B637cf5:{NFSU2_TR(0x637cf5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B637cf9:{NFSU2_TR(0x637cf9);
__builtin_memmove((R+4),(R+24),4);
}
B637cfb:{NFSU2_TR(0x637cfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637cff:{NFSU2_TR(0x637cff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637d00:{NFSU2_TR(0x637d00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637d01:{NFSU2_TR(0x637d01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637d06ull));
TAIL_STATIC(0x610f30u,610);
}
B637d06:L637d06:{c.instructions+=8;NFSU2_TR(0x637d06);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637d0a:{NFSU2_TR(0x637d0a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637d0b:{NFSU2_TR(0x637d0b);
__builtin_memmove((R+4),(R+20),4);
}
B637d0d:{NFSU2_TR(0x637d0d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B637d10:{NFSU2_TR(0x637d10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637d11:{NFSU2_TR(0x637d11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637d12:{NFSU2_TR(0x637d12);
__builtin_memmove((R+4),(R+24),4);
}
B637d14:{NFSU2_TR(0x637d14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637d19ull));
TAIL_STATIC(0x610f30u,610);
}
B637d19:L637d19:{c.instructions+=4;NFSU2_TR(0x637d19);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B637d1a:{NFSU2_TR(0x637d1a);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B637d1b:{NFSU2_TR(0x637d1b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637d1e:{NFSU2_TR(0x637d1e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637ce0u);}goto L637ce0;}}
}
B637d20:L637d20:{c.instructions+=2;NFSU2_TR(0x637d20);
__builtin_memmove((R+4),(R+24),4);
}
B637d22:{NFSU2_TR(0x637d22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637d27ull));
TAIL_STATIC(0x633ef0u,633);
}
B637d27:L637d27:{c.instructions+=3;NFSU2_TR(0x637d27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B637d28:{NFSU2_TR(0x637d28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B637d29:{NFSU2_TR(0x637d29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B637d2a:L637d2a:{c.instructions+=2;NFSU2_TR(0x637d2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637d2b:{NFSU2_TR(0x637d2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637d30:L637d30:{c.instructions+=5;NFSU2_TR(0x637d30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637d31:{NFSU2_TR(0x637d31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637d32:{NFSU2_TR(0x637d32);
__builtin_memmove((R+28),(R+4),4);
}
B637d34:{NFSU2_TR(0x637d34);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B637d36:{NFSU2_TR(0x637d36);
{goto L637d40;}
}
B637d40:L637d40:{c.instructions+=5;NFSU2_TR(0x637d40);
u8 U[4];
w4(U+0,u32(0x461c3c00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637d45:{NFSU2_TR(0x637d45);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637d4a:{NFSU2_TR(0x637d4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637d4b:{NFSU2_TR(0x637d4b);
__builtin_memmove((R+4),(R+28),4);
}
B637d4d:{NFSU2_TR(0x637d4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637d52ull));
TAIL_STATIC(0x610f30u,610);
}
B637d52:L637d52:{c.instructions+=3;NFSU2_TR(0x637d52);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B637d53:{NFSU2_TR(0x637d53);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B637d56:{NFSU2_TR(0x637d56);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637d40u);}goto L637d40;}}
}
B637d58:L637d58:{c.instructions+=4;NFSU2_TR(0x637d58);
__builtin_memmove((R+4),(R+28),4);
}
B637d5a:{NFSU2_TR(0x637d5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B637d5b:{NFSU2_TR(0x637d5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637d5c:{NFSU2_TR(0x637d5c);
TAIL_STATIC(0x633ef0u,633);
}
B637d70:L637d70:{c.instructions+=7;NFSU2_TR(0x637d70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637d71:{NFSU2_TR(0x637d71);
__builtin_memmove((R+24),(R+4),4);
}
B637d73:{NFSU2_TR(0x637d73);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B637d76:{NFSU2_TR(0x637d76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637d77:{NFSU2_TR(0x637d77);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B637d7a:{NFSU2_TR(0x637d7a);
w4(R+8,u32(0x20ull));
}
B637d7f:{NFSU2_TR(0x637d7f);
}
B637d80:L637d80:{c.instructions+=6;NFSU2_TR(0x637d80);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w2(R+28,u16(r1(U+0)));
}
B637d84:{NFSU2_TR(0x637d84);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B637d88:{NFSU2_TR(0x637d88);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B637d8b:{NFSU2_TR(0x637d8b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B637d8c:{NFSU2_TR(0x637d8c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B637d8d:{NFSU2_TR(0x637d8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637d80u);}goto L637d80;}}
}
B637d8f:L637d8f:{c.instructions+=2;NFSU2_TR(0x637d8f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B637d95:{NFSU2_TR(0x637d95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637d9aull));
TAIL_STATIC(0x633d50u,633);
}
B637d9a:L637d9a:{c.instructions+=4;NFSU2_TR(0x637d9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B637d9b:{NFSU2_TR(0x637d9b);
__builtin_memmove((R+4),(R+24),4);
}
B637d9d:{NFSU2_TR(0x637d9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637d9e:{NFSU2_TR(0x637d9e);
TAIL_STATIC(0x633ef0u,633);
}
B637db0:L637db0:{c.instructions+=13;NFSU2_TR(0x637db0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637db2:{NFSU2_TR(0x637db2);
u8 U[4];
w4(U+0,u32(0x77a39bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637db7:{NFSU2_TR(0x637db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637dbd:{NFSU2_TR(0x637dbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637dbe:{NFSU2_TR(0x637dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637dc5:{NFSU2_TR(0x637dc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637dc6:{NFSU2_TR(0x637dc6);
__builtin_memmove((R+0),gp(0x82da88),4);
}
B637dcb:{NFSU2_TR(0x637dcb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637dcc:{NFSU2_TR(0x637dcc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637dcd:{NFSU2_TR(0x637dcd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637dce:{NFSU2_TR(0x637dce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637dcf:{NFSU2_TR(0x637dcf);
__builtin_memmove((R+24),(R+4),4);
}
B637dd1:{NFSU2_TR(0x637dd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637dd6ull));
TAIL_STATIC(0x440e50u,440);
}
B637dd6:L637dd6:{c.instructions+=7;NFSU2_TR(0x637dd6);
__builtin_memmove((R+28),(R+0),4);
}
B637dd8:{NFSU2_TR(0x637dd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B637ddb:{NFSU2_TR(0x637ddb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637ddf:{NFSU2_TR(0x637ddf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B637de1:{NFSU2_TR(0x637de1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637de3:{NFSU2_TR(0x637de3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637de7:{NFSU2_TR(0x637de7);
if(r1(R+518)){{goto L637dfd;}}
}
B637de9:L637de9:{c.instructions+=6;NFSU2_TR(0x637de9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B637ded:{NFSU2_TR(0x637ded);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637dee:{NFSU2_TR(0x637dee);
__builtin_memmove((R+4),(R+28),4);
}
B637df0:{NFSU2_TR(0x637df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637df3:{NFSU2_TR(0x637df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637df6:{NFSU2_TR(0x637df6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637dfbull));
TAIL_STATIC(0x493600u,493);
}
B637dfb:L637dfb:{c.instructions+=1;NFSU2_TR(0x637dfb);
{goto L637dff;}
}
B637dfd:L637dfd:{c.instructions+=1;NFSU2_TR(0x637dfd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B637dff:L637dff:{c.instructions+=12;NFSU2_TR(0x637dff);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B637e03:{NFSU2_TR(0x637e03);
w4(R+0,u32(0x1ull));
}
B637e08:{NFSU2_TR(0x637e08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637e09:{NFSU2_TR(0x637e09);
__builtin_memmove((R+4),(R+24),4);
}
B637e0b:{NFSU2_TR(0x637e0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B637e13:{NFSU2_TR(0x637e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637e16:{NFSU2_TR(0x637e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637e19:{NFSU2_TR(0x637e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637e1c:{NFSU2_TR(0x637e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637e1f:{NFSU2_TR(0x637e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637e22:{NFSU2_TR(0x637e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637e25:{NFSU2_TR(0x637e25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637e2aull));
TAIL_STATIC(0x40f010u,40f);
}
B637e2a:L637e2a:{c.instructions+=7;NFSU2_TR(0x637e2a);
__builtin_memmove((R+0),gp(0x8a4264),4);
}
B637e2f:{NFSU2_TR(0x637e2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B637e31:{NFSU2_TR(0x637e31);
__builtin_memmove(gp(0x8a4264),(R+24),4);
}
B637e37:{NFSU2_TR(0x637e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B637e3a:{NFSU2_TR(0x637e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637e3d:{NFSU2_TR(0x637e3d);
u8 U[4];
w4(U+0,u32(0x8a4260ull));
s4(u32(r4(R+24)),r4(U+0));
}
B637e43:{NFSU2_TR(0x637e43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637e48ull));
TAIL_STATIC(0x488ec0u,488);
}
B637e48:L637e48:{c.instructions+=11;NFSU2_TR(0x637e48);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B637e4c:{NFSU2_TR(0x637e4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B637e4e:{NFSU2_TR(0x637e4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B637e51:{NFSU2_TR(0x637e51);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B637e54:{NFSU2_TR(0x637e54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B637e55:{NFSU2_TR(0x637e55);
__builtin_memmove((R+0),(R+24),4);
}
B637e57:{NFSU2_TR(0x637e57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637e58:{NFSU2_TR(0x637e58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B637e59:{NFSU2_TR(0x637e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637e60:{NFSU2_TR(0x637e60);
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
B637e63:{NFSU2_TR(0x637e63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637e70:L637e70:{c.instructions+=3;NFSU2_TR(0x637e70);
__builtin_memmove((R+4),gp(0x8a4260),4);
}
B637e76:{NFSU2_TR(0x637e76);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8a4260ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637e7c:{NFSU2_TR(0x637e7c);
if(r1(R+518)){{goto L637ea9;}}
}
B637e7e:L637e7e:{c.instructions+=2;NFSU2_TR(0x637e7e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637e7f:{NFSU2_TR(0x637e7f);
}
B637e80:L637e80:{c.instructions+=3;NFSU2_TR(0x637e80);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B637e82:{NFSU2_TR(0x637e82);
__builtin_memmove((R+24),(R+4),4);
}
B637e84:{NFSU2_TR(0x637e84);
if(r1(R+518)){{goto L637ea0;}}
}
B637e86:L637e86:{c.instructions+=1;NFSU2_TR(0x637e86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637e8bull));
TAIL_STATIC(0x633fd0u,633);
}
B637e8b:L637e8b:{c.instructions+=4;NFSU2_TR(0x637e8b);
__builtin_memmove((R+0),gp(0x8a1d08),4);
}
B637e90:{NFSU2_TR(0x637e90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637e91:{NFSU2_TR(0x637e91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637e92:{NFSU2_TR(0x637e92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637e97ull));
TAIL_STATIC(0x43f920u,43f);
}
B637e97:L637e97:{c.instructions+=2;NFSU2_TR(0x637e97);
__builtin_memmove((R+4),gp(0x8a4260),4);
}
B637e9d:{NFSU2_TR(0x637e9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B637ea0:L637ea0:{c.instructions+=2;NFSU2_TR(0x637ea0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8a4260ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B637ea6:{NFSU2_TR(0x637ea6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637e80u);}goto L637e80;}}
}
B637ea8:L637ea8:{c.instructions+=1;NFSU2_TR(0x637ea8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637ea9:L637ea9:{c.instructions+=3;NFSU2_TR(0x637ea9);
__builtin_memmove((R+4),gp(0x8a1d08),4);
}
B637eaf:{NFSU2_TR(0x637eaf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637eb0:{NFSU2_TR(0x637eb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637eb5ull));
TAIL_STATIC(0x440e40u,440);
}
B637eb5:L637eb5:{c.instructions+=3;NFSU2_TR(0x637eb5);
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
B637eb8:{NFSU2_TR(0x637eb8);
s4(0x8a1d08,u32(0x0ull));
}
B637ec2:{NFSU2_TR(0x637ec2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637ed0:L637ed0:{c.instructions+=6;NFSU2_TR(0x637ed0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637ed1:{NFSU2_TR(0x637ed1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637ed2:{NFSU2_TR(0x637ed2);
__builtin_memmove((R+28),(R+4),4);
}
B637ed4:{NFSU2_TR(0x637ed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B637ed6:{NFSU2_TR(0x637ed6);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B637ed8:{NFSU2_TR(0x637ed8);
if(r1(R+518)){{goto L637f06;}}
}
B637eda:L637eda:{c.instructions+=1;NFSU2_TR(0x637eda);
__builtin_memmove((R+12),(R+12),4);
}
B637ee0:L637ee0:{c.instructions+=6;NFSU2_TR(0x637ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B637ee3:{NFSU2_TR(0x637ee3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B637ee5:{NFSU2_TR(0x637ee5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B637ee7:{NFSU2_TR(0x637ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637eea:{NFSU2_TR(0x637eea);
__builtin_memmove((R+4),(R+24),4);
}
B637eec:{NFSU2_TR(0x637eec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637ef1ull));
TAIL_STATIC(0x634520u,634);
}
B637ef1:L637ef1:{c.instructions+=4;NFSU2_TR(0x637ef1);
__builtin_memmove((R+0),gp(0x8a1bcc),4);
}
B637ef6:{NFSU2_TR(0x637ef6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637ef7:{NFSU2_TR(0x637ef7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637ef8:{NFSU2_TR(0x637ef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637efdull));
TAIL_STATIC(0x43f920u,43f);
}
B637efd:L637efd:{c.instructions+=4;NFSU2_TR(0x637efd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B637eff:{NFSU2_TR(0x637eff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B637f02:{NFSU2_TR(0x637f02);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B637f04:{NFSU2_TR(0x637f04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637ee0u);}goto L637ee0;}}
}
B637f06:L637f06:{c.instructions+=3;NFSU2_TR(0x637f06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B637f07:{NFSU2_TR(0x637f07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637f08:{NFSU2_TR(0x637f08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637f10:L637f10:{c.instructions+=6;NFSU2_TR(0x637f10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637f11:{NFSU2_TR(0x637f11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637f12:{NFSU2_TR(0x637f12);
__builtin_memmove((R+28),(R+4),4);
}
B637f14:{NFSU2_TR(0x637f14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B637f16:{NFSU2_TR(0x637f16);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B637f18:{NFSU2_TR(0x637f18);
if(r1(R+518)){{goto L637f46;}}
}
B637f1a:L637f1a:{c.instructions+=1;NFSU2_TR(0x637f1a);
__builtin_memmove((R+12),(R+12),4);
}
B637f20:L637f20:{c.instructions+=6;NFSU2_TR(0x637f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B637f23:{NFSU2_TR(0x637f23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B637f25:{NFSU2_TR(0x637f25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B637f27:{NFSU2_TR(0x637f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637f2a:{NFSU2_TR(0x637f2a);
__builtin_memmove((R+4),(R+24),4);
}
B637f2c:{NFSU2_TR(0x637f2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637f31ull));
TAIL_STATIC(0x633fd0u,633);
}
B637f31:L637f31:{c.instructions+=4;NFSU2_TR(0x637f31);
__builtin_memmove((R+0),gp(0x8a1d08),4);
}
B637f36:{NFSU2_TR(0x637f36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637f37:{NFSU2_TR(0x637f37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637f38:{NFSU2_TR(0x637f38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637f3dull));
TAIL_STATIC(0x43f920u,43f);
}
B637f3d:L637f3d:{c.instructions+=4;NFSU2_TR(0x637f3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B637f3f:{NFSU2_TR(0x637f3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B637f42:{NFSU2_TR(0x637f42);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B637f44:{NFSU2_TR(0x637f44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x637f20u);}goto L637f20;}}
}
B637f46:L637f46:{c.instructions+=3;NFSU2_TR(0x637f46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B637f47:{NFSU2_TR(0x637f47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637f48:{NFSU2_TR(0x637f48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B637f50:L637f50:{c.instructions+=23;NFSU2_TR(0x637f50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637f51:{NFSU2_TR(0x637f51);
__builtin_memmove((R+20),(R+16),4);
}
B637f53:{NFSU2_TR(0x637f53);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B637f56:{NFSU2_TR(0x637f56);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637f58:{NFSU2_TR(0x637f58);
u8 U[4];
w4(U+0,u32(0x77a3bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637f5d:{NFSU2_TR(0x637f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B637f63:{NFSU2_TR(0x637f63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637f64:{NFSU2_TR(0x637f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637f6b:{NFSU2_TR(0x637f6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B637f6e:{NFSU2_TR(0x637f6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637f6f:{NFSU2_TR(0x637f6f);
__builtin_memmove((R+24),(R+4),4);
}
B637f71:{NFSU2_TR(0x637f71);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B637f74:{NFSU2_TR(0x637f74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637f75:{NFSU2_TR(0x637f75);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637f79:{NFSU2_TR(0x637f79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B637f7b:{NFSU2_TR(0x637f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637f7e:{NFSU2_TR(0x637f7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B637f81:{NFSU2_TR(0x637f81);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B637f83:{NFSU2_TR(0x637f83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637f84:{NFSU2_TR(0x637f84);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637f88:{NFSU2_TR(0x637f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637f8e:{NFSU2_TR(0x637f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B637f98:{NFSU2_TR(0x637f98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637f9dull));
TAIL_STATIC(0x43c780u,43c);
}
B637f9d:L637f9d:{c.instructions+=15;NFSU2_TR(0x637f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B637fa0:{NFSU2_TR(0x637fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637fa6:{NFSU2_TR(0x637fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637fac:{NFSU2_TR(0x637fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637fb2:{NFSU2_TR(0x637fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637fb8:{NFSU2_TR(0x637fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637fbe:{NFSU2_TR(0x637fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637fc4:{NFSU2_TR(0x637fc4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B637fc7:{NFSU2_TR(0x637fc7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B637fc8:{NFSU2_TR(0x637fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637fce:{NFSU2_TR(0x637fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637fd4:{NFSU2_TR(0x637fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637fda:{NFSU2_TR(0x637fda);
__builtin_memmove((R+4),(R+24),4);
}
B637fdc:{NFSU2_TR(0x637fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637fe2:{NFSU2_TR(0x637fe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x637fe7ull));
TAIL_STATIC(0x6345b0u,634);
}
B637fe7:L637fe7:{c.instructions+=9;NFSU2_TR(0x637fe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B637feb:{NFSU2_TR(0x637feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637ff1:{NFSU2_TR(0x637ff1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B637ff2:{NFSU2_TR(0x637ff2);
__builtin_memmove((R+0),(R+24),4);
}
B637ff4:{NFSU2_TR(0x637ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B637ffb:{NFSU2_TR(0x637ffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B637ffc:{NFSU2_TR(0x637ffc);
__builtin_memmove((R+16),(R+20),4);
}
B637ffe:{NFSU2_TR(0x637ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B637fff:{NFSU2_TR(0x637fff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x637,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
