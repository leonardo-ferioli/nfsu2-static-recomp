#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40d(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_418(u8* __restrict R,Cpu& c);
u32 body_419(u8* __restrict R,Cpu& c);
u32 body_41a(u8* __restrict R,Cpu& c);
u32 body_41f(u8* __restrict R,Cpu& c);
u32 body_420(u8* __restrict R,Cpu& c);
u32 body_422(u8* __restrict R,Cpu& c);
u32 body_423(u8* __restrict R,Cpu& c);
u32 body_426(u8* __restrict R,Cpu& c);
u32 body_427(u8* __restrict R,Cpu& c);
u32 body_429(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x428,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x428,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_428(u8* __restrict R,Cpu& c);
u32 page_428(Cpu& c){return body_428(c.regs.data(),c);}
__attribute__((noinline)) u32 body_428(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x428001:goto L428001;
case 0x428004:goto L428004;
case 0x428008:c.instructions+=11;goto B428008;
case 0x428009:c.instructions+=10;goto B428009;
case 0x42800f:c.instructions+=9;goto B42800f;
case 0x428015:c.instructions+=8;goto B428015;
case 0x42801b:c.instructions+=7;goto B42801b;
case 0x42801d:c.instructions+=6;goto B42801d;
case 0x42801e:c.instructions+=5;goto B42801e;
case 0x42801f:c.instructions+=4;goto B42801f;
case 0x428020:c.instructions+=3;goto B428020;
case 0x428027:c.instructions+=2;goto B428027;
case 0x42802a:c.instructions+=1;goto B42802a;
case 0x428030:goto L428030;
case 0x428031:c.instructions+=5;goto B428031;
case 0x428035:c.instructions+=4;goto B428035;
case 0x428037:c.instructions+=3;goto B428037;
case 0x428038:c.instructions+=2;goto B428038;
case 0x42803a:c.instructions+=1;goto B42803a;
case 0x428040:goto L428040;
case 0x428041:c.instructions+=5;goto B428041;
case 0x428042:c.instructions+=4;goto B428042;
case 0x428043:c.instructions+=3;goto B428043;
case 0x428047:c.instructions+=2;goto B428047;
case 0x428049:c.instructions+=1;goto B428049;
case 0x42804e:goto L42804e;
case 0x428050:c.instructions+=5;goto B428050;
case 0x428056:c.instructions+=4;goto B428056;
case 0x428058:c.instructions+=3;goto B428058;
case 0x42805c:c.instructions+=2;goto B42805c;
case 0x428064:c.instructions+=1;goto B428064;
case 0x42806a:goto L42806a;
case 0x42806f:c.instructions+=2;goto B42806f;
case 0x428071:c.instructions+=1;goto B428071;
case 0x428077:goto L428077;
case 0x42807c:c.instructions+=2;goto B42807c;
case 0x42807e:c.instructions+=1;goto B42807e;
case 0x428084:goto L428084;
case 0x428088:c.instructions+=2;goto B428088;
case 0x42808b:c.instructions+=1;goto B42808b;
case 0x42808d:goto L42808d;
case 0x428094:c.instructions+=13;goto B428094;
case 0x428096:c.instructions+=12;goto B428096;
case 0x428098:c.instructions+=11;goto B428098;
case 0x42809b:c.instructions+=10;goto B42809b;
case 0x42809d:c.instructions+=9;goto B42809d;
case 0x42809e:c.instructions+=8;goto B42809e;
case 0x4280a1:c.instructions+=7;goto B4280a1;
case 0x4280a3:c.instructions+=6;goto B4280a3;
case 0x4280a4:c.instructions+=5;goto B4280a4;
case 0x4280a6:c.instructions+=4;goto B4280a6;
case 0x4280a7:c.instructions+=3;goto B4280a7;
case 0x4280a9:c.instructions+=2;goto B4280a9;
case 0x4280aa:c.instructions+=1;goto B4280aa;
case 0x4280af:goto L4280af;
case 0x4280b1:c.instructions+=2;goto B4280b1;
case 0x4280b4:c.instructions+=1;goto B4280b4;
case 0x4280ba:goto L4280ba;
case 0x4280be:c.instructions+=6;goto B4280be;
case 0x4280c2:c.instructions+=5;goto B4280c2;
case 0x4280c8:c.instructions+=4;goto B4280c8;
case 0x4280cd:c.instructions+=3;goto B4280cd;
case 0x4280cf:c.instructions+=2;goto B4280cf;
case 0x4280d4:c.instructions+=1;goto B4280d4;
case 0x4280d6:goto L4280d6;
case 0x4280d9:c.instructions+=1;goto B4280d9;
case 0x4280db:goto L4280db;
case 0x4280e0:goto L4280e0;
case 0x4280e3:c.instructions+=2;goto B4280e3;
case 0x4280e5:c.instructions+=1;goto B4280e5;
case 0x4280e8:goto L4280e8;
case 0x4280ea:c.instructions+=3;goto B4280ea;
case 0x4280ec:c.instructions+=2;goto B4280ec;
case 0x4280ed:c.instructions+=1;goto B4280ed;
case 0x4280ef:goto L4280ef;
case 0x4280f1:c.instructions+=7;goto B4280f1;
case 0x4280f3:c.instructions+=6;goto B4280f3;
case 0x4280f5:c.instructions+=5;goto B4280f5;
case 0x4280f8:c.instructions+=4;goto B4280f8;
case 0x4280f9:c.instructions+=3;goto B4280f9;
case 0x4280fb:c.instructions+=2;goto B4280fb;
case 0x4280fc:c.instructions+=1;goto B4280fc;
case 0x4280fe:goto L4280fe;
case 0x4280ff:goto L4280ff;
case 0x428104:goto L428104;
case 0x428108:c.instructions+=5;goto B428108;
case 0x42810b:c.instructions+=4;goto B42810b;
case 0x42810f:c.instructions+=3;goto B42810f;
case 0x428115:c.instructions+=2;goto B428115;
case 0x428117:c.instructions+=1;goto B428117;
case 0x428119:goto L428119;
case 0x42811b:c.instructions+=1;goto B42811b;
case 0x42811e:goto L42811e;
case 0x428122:c.instructions+=1;goto B428122;
case 0x428124:goto L428124;
case 0x428127:c.instructions+=1;goto B428127;
case 0x42812c:goto L42812c;
case 0x428131:c.instructions+=2;goto B428131;
case 0x428133:c.instructions+=1;goto B428133;
case 0x428135:goto L428135;
case 0x428138:c.instructions+=2;goto B428138;
case 0x42813a:c.instructions+=1;goto B42813a;
case 0x42813f:goto L42813f;
case 0x428141:c.instructions+=1;goto B428141;
case 0x428146:goto L428146;
case 0x42814a:goto L42814a;
case 0x42814c:c.instructions+=1;goto B42814c;
case 0x428151:goto L428151;
case 0x428154:c.instructions+=3;goto B428154;
case 0x428156:c.instructions+=2;goto B428156;
case 0x428159:c.instructions+=1;goto B428159;
case 0x42815b:goto L42815b;
case 0x42815f:c.instructions+=6;goto B42815f;
case 0x428160:c.instructions+=5;goto B428160;
case 0x428164:c.instructions+=4;goto B428164;
case 0x428166:c.instructions+=3;goto B428166;
case 0x428169:c.instructions+=2;goto B428169;
case 0x42816a:c.instructions+=1;goto B42816a;
case 0x42816f:goto L42816f;
case 0x428171:goto L428171;
case 0x428173:c.instructions+=1;goto B428173;
case 0x428178:goto L428178;
case 0x42817a:goto L42817a;
case 0x42817c:c.instructions+=1;goto B42817c;
case 0x428181:goto L428181;
case 0x428188:c.instructions+=1;goto B428188;
case 0x42818a:goto L42818a;
case 0x42818e:c.instructions+=8;goto B42818e;
case 0x428192:c.instructions+=7;goto B428192;
case 0x428196:c.instructions+=6;goto B428196;
case 0x428197:c.instructions+=5;goto B428197;
case 0x428198:c.instructions+=4;goto B428198;
case 0x428199:c.instructions+=3;goto B428199;
case 0x42819a:c.instructions+=2;goto B42819a;
case 0x42819c:c.instructions+=1;goto B42819c;
case 0x4281a1:goto L4281a1;
case 0x4281a2:c.instructions+=2;goto B4281a2;
case 0x4281a4:c.instructions+=1;goto B4281a4;
case 0x4281a9:goto L4281a9;
case 0x4281aa:c.instructions+=3;goto B4281aa;
case 0x4281ab:c.instructions+=2;goto B4281ab;
case 0x4281ad:c.instructions+=1;goto B4281ad;
case 0x4281b2:goto L4281b2;
case 0x4281b3:c.instructions+=2;goto B4281b3;
case 0x4281b5:c.instructions+=1;goto B4281b5;
case 0x4281ba:goto L4281ba;
case 0x4281bb:c.instructions+=2;goto B4281bb;
case 0x4281bd:c.instructions+=1;goto B4281bd;
case 0x4281c2:goto L4281c2;
case 0x4281c3:c.instructions+=2;goto B4281c3;
case 0x4281c5:c.instructions+=1;goto B4281c5;
case 0x4281ca:goto L4281ca;
case 0x4281cd:c.instructions+=2;goto B4281cd;
case 0x4281cf:c.instructions+=1;goto B4281cf;
case 0x4281d1:goto L4281d1;
case 0x4281d2:c.instructions+=8;goto B4281d2;
case 0x4281d9:c.instructions+=7;goto B4281d9;
case 0x4281df:c.instructions+=6;goto B4281df;
case 0x4281e0:c.instructions+=5;goto B4281e0;
case 0x4281e1:c.instructions+=4;goto B4281e1;
case 0x4281e7:c.instructions+=3;goto B4281e7;
case 0x4281e8:c.instructions+=2;goto B4281e8;
case 0x4281e9:c.instructions+=1;goto B4281e9;
case 0x4281ec:goto L4281ec;
case 0x4281f3:c.instructions+=1;goto B4281f3;
case 0x4281f5:goto L4281f5;
case 0x4281f7:c.instructions+=12;goto B4281f7;
case 0x4281f9:c.instructions+=11;goto B4281f9;
case 0x4281fc:c.instructions+=10;goto B4281fc;
case 0x4281fe:c.instructions+=9;goto B4281fe;
case 0x428200:c.instructions+=8;goto B428200;
case 0x428203:c.instructions+=7;goto B428203;
case 0x428205:c.instructions+=6;goto B428205;
case 0x428206:c.instructions+=5;goto B428206;
case 0x428208:c.instructions+=4;goto B428208;
case 0x428209:c.instructions+=3;goto B428209;
case 0x42820b:c.instructions+=2;goto B42820b;
case 0x42820c:c.instructions+=1;goto B42820c;
case 0x428211:goto L428211;
case 0x428217:goto L428217;
case 0x42821e:c.instructions+=9;goto B42821e;
case 0x428221:c.instructions+=8;goto B428221;
case 0x428223:c.instructions+=7;goto B428223;
case 0x428224:c.instructions+=6;goto B428224;
case 0x428226:c.instructions+=5;goto B428226;
case 0x428229:c.instructions+=4;goto B428229;
case 0x42822a:c.instructions+=3;goto B42822a;
case 0x42822c:c.instructions+=2;goto B42822c;
case 0x42822e:c.instructions+=1;goto B42822e;
case 0x428230:goto L428230;
case 0x428232:goto L428232;
case 0x428233:c.instructions+=4;goto B428233;
case 0x428234:c.instructions+=3;goto B428234;
case 0x42823a:c.instructions+=2;goto B42823a;
case 0x428240:c.instructions+=1;goto B428240;
case 0x428241:goto L428241;
case 0x428242:c.instructions+=2;goto B428242;
case 0x428243:c.instructions+=1;goto B428243;
case 0x428250:goto L428250;
case 0x428260:goto L428260;
case 0x428261:c.instructions+=7;goto B428261;
case 0x428262:c.instructions+=6;goto B428262;
case 0x428266:c.instructions+=5;goto B428266;
case 0x42826b:c.instructions+=4;goto B42826b;
case 0x42826d:c.instructions+=3;goto B42826d;
case 0x42826f:c.instructions+=2;goto B42826f;
case 0x428271:c.instructions+=1;goto B428271;
case 0x428276:goto L428276;
case 0x428277:c.instructions+=2;goto B428277;
case 0x428279:c.instructions+=1;goto B428279;
case 0x42827e:goto L42827e;
case 0x42827f:c.instructions+=2;goto B42827f;
case 0x428282:c.instructions+=1;goto B428282;
case 0x428287:goto L428287;
case 0x428289:c.instructions+=6;goto B428289;
case 0x42828b:c.instructions+=5;goto B42828b;
case 0x42828d:c.instructions+=4;goto B42828d;
case 0x428293:c.instructions+=3;goto B428293;
case 0x428294:c.instructions+=2;goto B428294;
case 0x428296:c.instructions+=1;goto B428296;
case 0x42829b:goto L42829b;
case 0x4282a1:c.instructions+=3;goto B4282a1;
case 0x4282a2:c.instructions+=2;goto B4282a2;
case 0x4282a4:c.instructions+=1;goto B4282a4;
case 0x4282a9:goto L4282a9;
case 0x4282af:c.instructions+=3;goto B4282af;
case 0x4282b0:c.instructions+=2;goto B4282b0;
case 0x4282b2:c.instructions+=1;goto B4282b2;
case 0x4282b7:goto L4282b7;
case 0x4282bd:c.instructions+=3;goto B4282bd;
case 0x4282be:c.instructions+=2;goto B4282be;
case 0x4282c0:c.instructions+=1;goto B4282c0;
case 0x4282c5:goto L4282c5;
case 0x4282cb:c.instructions+=3;goto B4282cb;
case 0x4282cc:c.instructions+=2;goto B4282cc;
case 0x4282cd:c.instructions+=1;goto B4282cd;
case 0x4282d2:goto L4282d2;
case 0x4282d8:c.instructions+=3;goto B4282d8;
case 0x4282d9:c.instructions+=2;goto B4282d9;
case 0x4282da:c.instructions+=1;goto B4282da;
case 0x4282df:goto L4282df;
case 0x4282e2:c.instructions+=4;goto B4282e2;
case 0x4282e8:c.instructions+=3;goto B4282e8;
case 0x4282e9:c.instructions+=2;goto B4282e9;
case 0x4282eb:c.instructions+=1;goto B4282eb;
case 0x4282f0:goto L4282f0;
case 0x4282f6:c.instructions+=3;goto B4282f6;
case 0x4282f7:c.instructions+=2;goto B4282f7;
case 0x4282f9:c.instructions+=1;goto B4282f9;
case 0x4282fe:goto L4282fe;
case 0x428304:c.instructions+=3;goto B428304;
case 0x428305:c.instructions+=2;goto B428305;
case 0x428307:c.instructions+=1;goto B428307;
case 0x42830c:goto L42830c;
case 0x428312:c.instructions+=3;goto B428312;
case 0x428313:c.instructions+=2;goto B428313;
case 0x428315:c.instructions+=1;goto B428315;
case 0x42831a:goto L42831a;
case 0x428320:c.instructions+=3;goto B428320;
case 0x428321:c.instructions+=2;goto B428321;
case 0x428323:c.instructions+=1;goto B428323;
case 0x428328:goto L428328;
case 0x42832e:c.instructions+=3;goto B42832e;
case 0x42832f:c.instructions+=2;goto B42832f;
case 0x428331:c.instructions+=1;goto B428331;
case 0x428336:goto L428336;
case 0x42833c:c.instructions+=4;goto B42833c;
case 0x42833f:c.instructions+=3;goto B42833f;
case 0x428340:c.instructions+=2;goto B428340;
case 0x428341:c.instructions+=1;goto B428341;
case 0x428346:goto L428346;
case 0x42834c:c.instructions+=2;goto B42834c;
case 0x42834e:c.instructions+=1;goto B42834e;
case 0x428350:goto L428350;
case 0x428353:c.instructions+=3;goto B428353;
case 0x428354:c.instructions+=2;goto B428354;
case 0x428355:c.instructions+=1;goto B428355;
case 0x42835a:goto L42835a;
case 0x428360:c.instructions+=3;goto B428360;
case 0x428361:c.instructions+=2;goto B428361;
case 0x428363:c.instructions+=1;goto B428363;
case 0x428368:goto L428368;
case 0x42836e:c.instructions+=3;goto B42836e;
case 0x428370:c.instructions+=2;goto B428370;
case 0x428375:c.instructions+=1;goto B428375;
case 0x428377:goto L428377;
case 0x42837a:c.instructions+=1;goto B42837a;
case 0x42837e:goto L42837e;
case 0x428382:c.instructions+=3;goto B428382;
case 0x428383:c.instructions+=2;goto B428383;
case 0x428385:c.instructions+=1;goto B428385;
case 0x42838a:goto L42838a;
case 0x42838d:c.instructions+=2;goto B42838d;
case 0x42838f:c.instructions+=1;goto B42838f;
case 0x428391:goto L428391;
case 0x428395:c.instructions+=2;goto B428395;
case 0x428397:c.instructions+=1;goto B428397;
case 0x428399:goto L428399;
case 0x42839c:c.instructions+=3;goto B42839c;
case 0x4283a3:c.instructions+=2;goto B4283a3;
case 0x4283a9:c.instructions+=1;goto B4283a9;
case 0x4283ab:goto L4283ab;
case 0x4283b5:goto L4283b5;
case 0x4283bb:c.instructions+=3;goto B4283bb;
case 0x4283bc:c.instructions+=2;goto B4283bc;
case 0x4283be:c.instructions+=1;goto B4283be;
case 0x4283c3:goto L4283c3;
case 0x4283c5:c.instructions+=6;goto B4283c5;
case 0x4283c7:c.instructions+=5;goto B4283c7;
case 0x4283c9:c.instructions+=4;goto B4283c9;
case 0x4283cf:c.instructions+=3;goto B4283cf;
case 0x4283d0:c.instructions+=2;goto B4283d0;
case 0x4283d2:c.instructions+=1;goto B4283d2;
case 0x4283d7:goto L4283d7;
case 0x4283dd:c.instructions+=3;goto B4283dd;
case 0x4283de:c.instructions+=2;goto B4283de;
case 0x4283e0:c.instructions+=1;goto B4283e0;
case 0x4283e5:goto L4283e5;
case 0x4283eb:c.instructions+=3;goto B4283eb;
case 0x4283ec:c.instructions+=2;goto B4283ec;
case 0x4283ee:c.instructions+=1;goto B4283ee;
case 0x4283f3:goto L4283f3;
case 0x4283f9:c.instructions+=3;goto B4283f9;
case 0x4283fa:c.instructions+=2;goto B4283fa;
case 0x4283fc:c.instructions+=1;goto B4283fc;
case 0x428401:goto L428401;
case 0x428407:c.instructions+=3;goto B428407;
case 0x428408:c.instructions+=2;goto B428408;
case 0x42840a:c.instructions+=1;goto B42840a;
case 0x42840f:goto L42840f;
case 0x428410:c.instructions+=2;goto B428410;
case 0x428416:c.instructions+=1;goto B428416;
case 0x42841b:goto L42841b;
case 0x42841d:c.instructions+=6;goto B42841d;
case 0x42841f:c.instructions+=5;goto B42841f;
case 0x428421:c.instructions+=4;goto B428421;
case 0x428427:c.instructions+=3;goto B428427;
case 0x428428:c.instructions+=2;goto B428428;
case 0x42842a:c.instructions+=1;goto B42842a;
case 0x42842f:goto L42842f;
case 0x428435:c.instructions+=3;goto B428435;
case 0x428436:c.instructions+=2;goto B428436;
case 0x428438:c.instructions+=1;goto B428438;
case 0x42843d:goto L42843d;
case 0x428443:c.instructions+=3;goto B428443;
case 0x428444:c.instructions+=2;goto B428444;
case 0x428446:c.instructions+=1;goto B428446;
case 0x42844b:goto L42844b;
case 0x428451:c.instructions+=3;goto B428451;
case 0x428452:c.instructions+=2;goto B428452;
case 0x428454:c.instructions+=1;goto B428454;
case 0x428459:goto L428459;
case 0x42845f:c.instructions+=3;goto B42845f;
case 0x428460:c.instructions+=2;goto B428460;
case 0x428462:c.instructions+=1;goto B428462;
case 0x428467:goto L428467;
case 0x428469:c.instructions+=6;goto B428469;
case 0x42846b:c.instructions+=5;goto B42846b;
case 0x42846d:c.instructions+=4;goto B42846d;
case 0x428473:c.instructions+=3;goto B428473;
case 0x428474:c.instructions+=2;goto B428474;
case 0x428476:c.instructions+=1;goto B428476;
case 0x42847b:goto L42847b;
case 0x42847d:c.instructions+=1;goto B42847d;
case 0x428482:goto L428482;
case 0x428483:c.instructions+=2;goto B428483;
case 0x428484:c.instructions+=1;goto B428484;
case 0x428490:goto L428490;
case 0x428491:c.instructions+=6;goto B428491;
case 0x428493:c.instructions+=5;goto B428493;
case 0x428499:c.instructions+=4;goto B428499;
case 0x42849b:c.instructions+=3;goto B42849b;
case 0x42849d:c.instructions+=2;goto B42849d;
case 0x42849e:c.instructions+=1;goto B42849e;
case 0x4284a0:goto L4284a0;
case 0x4284a3:c.instructions+=1;goto B4284a3;
case 0x4284a5:goto L4284a5;
case 0x4284aa:c.instructions+=1;goto B4284aa;
case 0x4284ac:goto L4284ac;
case 0x4284af:c.instructions+=1;goto B4284af;
case 0x4284b1:goto L4284b1;
case 0x4284b4:c.instructions+=1;goto B4284b4;
case 0x4284b6:goto L4284b6;
case 0x4284bb:c.instructions+=1;goto B4284bb;
case 0x4284bd:goto L4284bd;
case 0x4284bf:goto L4284bf;
case 0x4284c5:c.instructions+=2;goto B4284c5;
case 0x4284c7:c.instructions+=1;goto B4284c7;
case 0x4284c9:goto L4284c9;
case 0x4284cc:c.instructions+=3;goto B4284cc;
case 0x4284ce:c.instructions+=2;goto B4284ce;
case 0x4284cf:c.instructions+=1;goto B4284cf;
case 0x4284d2:goto L4284d2;
case 0x4284d4:goto L4284d4;
case 0x4284d6:goto L4284d6;
case 0x4284d8:c.instructions+=1;goto B4284d8;
case 0x4284da:goto L4284da;
case 0x4284e0:c.instructions+=2;goto B4284e0;
case 0x4284e2:c.instructions+=1;goto B4284e2;
case 0x4284e4:goto L4284e4;
case 0x4284e7:c.instructions+=3;goto B4284e7;
case 0x4284e9:c.instructions+=2;goto B4284e9;
case 0x4284ea:c.instructions+=1;goto B4284ea;
case 0x4284ed:goto L4284ed;
case 0x4284ef:goto L4284ef;
case 0x4284f1:goto L4284f1;
case 0x4284f2:c.instructions+=1;goto B4284f2;
case 0x4284f4:goto L4284f4;
case 0x4284f5:c.instructions+=1;goto B4284f5;
case 0x4284f7:goto L4284f7;
case 0x4284f8:c.instructions+=3;goto B4284f8;
case 0x4284fa:c.instructions+=2;goto B4284fa;
case 0x4284fb:c.instructions+=1;goto B4284fb;
case 0x428500:goto L428500;
case 0x428501:c.instructions+=3;goto B428501;
case 0x428503:c.instructions+=2;goto B428503;
case 0x428504:c.instructions+=1;goto B428504;
case 0x428509:goto L428509;
case 0x42850a:c.instructions+=2;goto B42850a;
case 0x42850b:c.instructions+=1;goto B42850b;
case 0x428510:goto L428510;
case 0x428511:c.instructions+=4;goto B428511;
case 0x428513:c.instructions+=3;goto B428513;
case 0x428519:c.instructions+=2;goto B428519;
case 0x42851b:c.instructions+=1;goto B42851b;
case 0x42851d:goto L42851d;
case 0x428521:c.instructions+=1;goto B428521;
case 0x428523:goto L428523;
case 0x428527:c.instructions+=3;goto B428527;
case 0x42852a:c.instructions+=2;goto B42852a;
case 0x42852c:c.instructions+=1;goto B42852c;
case 0x428531:goto L428531;
case 0x428532:c.instructions+=1;goto B428532;
case 0x428535:goto L428535;
case 0x428536:c.instructions+=2;goto B428536;
case 0x428538:c.instructions+=1;goto B428538;
case 0x42853d:goto L42853d;
case 0x428543:c.instructions+=2;goto B428543;
case 0x428544:c.instructions+=1;goto B428544;
case 0x428549:goto L428549;
case 0x42854b:c.instructions+=3;goto B42854b;
case 0x42854e:c.instructions+=2;goto B42854e;
case 0x428550:c.instructions+=1;goto B428550;
case 0x428552:goto L428552;
case 0x428557:c.instructions+=2;goto B428557;
case 0x428559:c.instructions+=1;goto B428559;
case 0x42855e:goto L42855e;
case 0x428562:c.instructions+=7;goto B428562;
case 0x428569:c.instructions+=6;goto B428569;
case 0x42856f:c.instructions+=5;goto B42856f;
case 0x428572:c.instructions+=4;goto B428572;
case 0x428578:c.instructions+=3;goto B428578;
case 0x428579:c.instructions+=2;goto B428579;
case 0x42857b:c.instructions+=1;goto B42857b;
case 0x428580:goto L428580;
case 0x428581:c.instructions+=1;goto B428581;
case 0x428584:goto L428584;
case 0x428586:c.instructions+=4;goto B428586;
case 0x42858c:c.instructions+=3;goto B42858c;
case 0x42858d:c.instructions+=2;goto B42858d;
case 0x42858f:c.instructions+=1;goto B42858f;
case 0x428594:goto L428594;
case 0x428595:c.instructions+=1;goto B428595;
case 0x4285a0:goto L4285a0;
case 0x4285a1:c.instructions+=4;goto B4285a1;
case 0x4285a3:c.instructions+=3;goto B4285a3;
case 0x4285a9:c.instructions+=2;goto B4285a9;
case 0x4285ab:c.instructions+=1;goto B4285ab;
case 0x4285ad:goto L4285ad;
case 0x4285b1:c.instructions+=1;goto B4285b1;
case 0x4285b3:goto L4285b3;
case 0x4285b7:c.instructions+=3;goto B4285b7;
case 0x4285ba:c.instructions+=2;goto B4285ba;
case 0x4285bc:c.instructions+=1;goto B4285bc;
case 0x4285c1:goto L4285c1;
case 0x4285c2:c.instructions+=1;goto B4285c2;
case 0x4285c5:goto L4285c5;
case 0x4285c6:c.instructions+=2;goto B4285c6;
case 0x4285c8:c.instructions+=1;goto B4285c8;
case 0x4285cd:goto L4285cd;
case 0x4285d3:c.instructions+=2;goto B4285d3;
case 0x4285d4:c.instructions+=1;goto B4285d4;
case 0x4285d9:goto L4285d9;
case 0x4285db:c.instructions+=3;goto B4285db;
case 0x4285de:c.instructions+=2;goto B4285de;
case 0x4285e0:c.instructions+=1;goto B4285e0;
case 0x4285e2:goto L4285e2;
case 0x4285e7:c.instructions+=2;goto B4285e7;
case 0x4285e9:c.instructions+=1;goto B4285e9;
case 0x4285ee:goto L4285ee;
case 0x4285f2:c.instructions+=7;goto B4285f2;
case 0x4285f9:c.instructions+=6;goto B4285f9;
case 0x4285ff:c.instructions+=5;goto B4285ff;
case 0x428602:c.instructions+=4;goto B428602;
case 0x428608:c.instructions+=3;goto B428608;
case 0x428609:c.instructions+=2;goto B428609;
case 0x42860b:c.instructions+=1;goto B42860b;
case 0x428610:goto L428610;
case 0x428611:c.instructions+=1;goto B428611;
case 0x428614:goto L428614;
case 0x428616:c.instructions+=4;goto B428616;
case 0x42861c:c.instructions+=3;goto B42861c;
case 0x42861d:c.instructions+=2;goto B42861d;
case 0x42861f:c.instructions+=1;goto B42861f;
case 0x428624:goto L428624;
case 0x428625:c.instructions+=1;goto B428625;
case 0x428630:goto L428630;
case 0x428631:c.instructions+=6;goto B428631;
case 0x428632:c.instructions+=5;goto B428632;
case 0x428633:c.instructions+=4;goto B428633;
case 0x428635:c.instructions+=3;goto B428635;
case 0x42863b:c.instructions+=2;goto B42863b;
case 0x42863d:c.instructions+=1;goto B42863d;
case 0x42863f:goto L42863f;
case 0x428643:c.instructions+=1;goto B428643;
case 0x428645:goto L428645;
case 0x428649:c.instructions+=11;goto B428649;
case 0x42864d:c.instructions+=10;goto B42864d;
case 0x428651:c.instructions+=9;goto B428651;
case 0x428654:c.instructions+=8;goto B428654;
case 0x428657:c.instructions+=7;goto B428657;
case 0x42865a:c.instructions+=6;goto B42865a;
case 0x428660:c.instructions+=5;goto B428660;
case 0x428666:c.instructions+=4;goto B428666;
case 0x42866a:c.instructions+=3;goto B42866a;
case 0x428670:c.instructions+=2;goto B428670;
case 0x428676:c.instructions+=1;goto B428676;
case 0x42867b:goto L42867b;
case 0x42867e:c.instructions+=3;goto B42867e;
case 0x428684:c.instructions+=2;goto B428684;
case 0x428686:c.instructions+=1;goto B428686;
case 0x42868c:goto L42868c;
case 0x428693:c.instructions+=1;goto B428693;
case 0x428695:goto L428695;
case 0x428699:c.instructions+=6;goto B428699;
case 0x42869d:c.instructions+=5;goto B42869d;
case 0x4286a3:c.instructions+=4;goto B4286a3;
case 0x4286a5:c.instructions+=3;goto B4286a5;
case 0x4286ab:c.instructions+=2;goto B4286ab;
case 0x4286b1:c.instructions+=1;goto B4286b1;
case 0x4286b6:goto L4286b6;
case 0x4286b7:c.instructions+=3;goto B4286b7;
case 0x4286b8:c.instructions+=2;goto B4286b8;
case 0x4286b9:c.instructions+=1;goto B4286b9;
case 0x4286bc:goto L4286bc;
case 0x4286be:c.instructions+=1;goto B4286be;
case 0x4286c3:goto L4286c3;
case 0x4286c9:c.instructions+=2;goto B4286c9;
case 0x4286ca:c.instructions+=1;goto B4286ca;
case 0x4286cf:goto L4286cf;
case 0x4286d2:c.instructions+=2;goto B4286d2;
case 0x4286d4:c.instructions+=1;goto B4286d4;
case 0x4286d6:goto L4286d6;
case 0x4286da:c.instructions+=10;goto B4286da;
case 0x4286de:c.instructions+=9;goto B4286de;
case 0x4286df:c.instructions+=8;goto B4286df;
case 0x4286e3:c.instructions+=7;goto B4286e3;
case 0x4286e4:c.instructions+=6;goto B4286e4;
case 0x4286e8:c.instructions+=5;goto B4286e8;
case 0x4286e9:c.instructions+=4;goto B4286e9;
case 0x4286ea:c.instructions+=3;goto B4286ea;
case 0x4286ef:c.instructions+=2;goto B4286ef;
case 0x4286f1:c.instructions+=1;goto B4286f1;
case 0x4286f6:goto L4286f6;
case 0x4286f8:c.instructions+=2;goto B4286f8;
case 0x4286fe:c.instructions+=1;goto B4286fe;
case 0x428703:goto L428703;
case 0x428704:c.instructions+=3;goto B428704;
case 0x428705:c.instructions+=2;goto B428705;
case 0x428706:c.instructions+=1;goto B428706;
case 0x428709:goto L428709;
case 0x42870b:c.instructions+=1;goto B42870b;
case 0x428711:goto L428711;
case 0x428713:c.instructions+=1;goto B428713;
case 0x428718:goto L428718;
case 0x428719:c.instructions+=3;goto B428719;
case 0x42871a:c.instructions+=2;goto B42871a;
case 0x42871b:c.instructions+=1;goto B42871b;
case 0x428720:goto L428720;
case 0x428723:c.instructions+=12;goto B428723;
case 0x428724:c.instructions+=11;goto B428724;
case 0x428725:c.instructions+=10;goto B428725;
case 0x428726:c.instructions+=9;goto B428726;
case 0x428727:c.instructions+=8;goto B428727;
case 0x42872b:c.instructions+=7;goto B42872b;
case 0x42872e:c.instructions+=6;goto B42872e;
case 0x428730:c.instructions+=5;goto B428730;
case 0x428734:c.instructions+=4;goto B428734;
case 0x428738:c.instructions+=3;goto B428738;
case 0x42873d:c.instructions+=2;goto B42873d;
case 0x428740:c.instructions+=1;goto B428740;
case 0x428745:goto L428745;
case 0x428747:c.instructions+=13;goto B428747;
case 0x42874d:c.instructions+=12;goto B42874d;
case 0x42874f:c.instructions+=11;goto B42874f;
case 0x428752:c.instructions+=10;goto B428752;
case 0x428756:c.instructions+=9;goto B428756;
case 0x428759:c.instructions+=8;goto B428759;
case 0x42875c:c.instructions+=7;goto B42875c;
case 0x428761:c.instructions+=6;goto B428761;
case 0x428762:c.instructions+=5;goto B428762;
case 0x428764:c.instructions+=4;goto B428764;
case 0x42876a:c.instructions+=3;goto B42876a;
case 0x42876c:c.instructions+=2;goto B42876c;
case 0x428770:c.instructions+=1;goto B428770;
case 0x428776:goto L428776;
case 0x428777:c.instructions+=10;goto B428777;
case 0x42877b:c.instructions+=9;goto B42877b;
case 0x42877c:c.instructions+=8;goto B42877c;
case 0x428780:c.instructions+=7;goto B428780;
case 0x428781:c.instructions+=6;goto B428781;
case 0x428787:c.instructions+=5;goto B428787;
case 0x428788:c.instructions+=4;goto B428788;
case 0x42878a:c.instructions+=3;goto B42878a;
case 0x428792:c.instructions+=2;goto B428792;
case 0x42879a:c.instructions+=1;goto B42879a;
case 0x42879f:goto L42879f;
case 0x4287a3:c.instructions+=6;goto B4287a3;
case 0x4287a5:c.instructions+=5;goto B4287a5;
case 0x4287a7:c.instructions+=4;goto B4287a7;
case 0x4287a9:c.instructions+=3;goto B4287a9;
case 0x4287aa:c.instructions+=2;goto B4287aa;
case 0x4287ac:c.instructions+=1;goto B4287ac;
case 0x4287b1:goto L4287b1;
case 0x4287b3:c.instructions+=3;goto B4287b3;
case 0x4287b6:c.instructions+=2;goto B4287b6;
case 0x4287bd:c.instructions+=1;goto B4287bd;
case 0x4287c3:goto L4287c3;
case 0x4287c6:c.instructions+=2;goto B4287c6;
case 0x4287c8:c.instructions+=1;goto B4287c8;
case 0x4287ca:goto L4287ca;
case 0x4287cd:c.instructions+=2;goto B4287cd;
case 0x4287d0:c.instructions+=1;goto B4287d0;
case 0x4287d2:goto L4287d2;
case 0x4287d8:goto L4287d8;
case 0x4287de:c.instructions+=7;goto B4287de;
case 0x4287e0:c.instructions+=6;goto B4287e0;
case 0x4287e4:c.instructions+=5;goto B4287e4;
case 0x4287e6:c.instructions+=4;goto B4287e6;
case 0x4287e8:c.instructions+=3;goto B4287e8;
case 0x4287ea:c.instructions+=2;goto B4287ea;
case 0x4287ed:c.instructions+=1;goto B4287ed;
case 0x4287f3:goto L4287f3;
case 0x4287f6:c.instructions+=2;goto B4287f6;
case 0x4287f8:c.instructions+=1;goto B4287f8;
case 0x4287fa:goto L4287fa;
case 0x4287fe:c.instructions+=2;goto B4287fe;
case 0x428801:c.instructions+=1;goto B428801;
case 0x428803:goto L428803;
case 0x428809:goto L428809;
case 0x42880d:c.instructions+=5;goto B42880d;
case 0x42880f:c.instructions+=4;goto B42880f;
case 0x428811:c.instructions+=3;goto B428811;
case 0x428813:c.instructions+=2;goto B428813;
case 0x428816:c.instructions+=1;goto B428816;
case 0x42881c:goto L42881c;
case 0x428820:c.instructions+=5;goto B428820;
case 0x428824:c.instructions+=4;goto B428824;
case 0x428825:c.instructions+=3;goto B428825;
case 0x428826:c.instructions+=2;goto B428826;
case 0x428828:c.instructions+=1;goto B428828;
case 0x42882d:goto L42882d;
case 0x428831:c.instructions+=3;goto B428831;
case 0x428833:c.instructions+=2;goto B428833;
case 0x428836:c.instructions+=1;goto B428836;
case 0x428838:goto L428838;
case 0x42883c:c.instructions+=2;goto B42883c;
case 0x42883e:c.instructions+=1;goto B42883e;
case 0x428844:goto L428844;
case 0x428846:c.instructions+=1;goto B428846;
case 0x42884c:goto L42884c;
case 0x428850:c.instructions+=4;goto B428850;
case 0x428852:c.instructions+=3;goto B428852;
case 0x428854:c.instructions+=2;goto B428854;
case 0x428858:c.instructions+=1;goto B428858;
case 0x42885d:goto L42885d;
case 0x428861:c.instructions+=4;goto B428861;
case 0x428862:c.instructions+=3;goto B428862;
case 0x428866:c.instructions+=2;goto B428866;
case 0x428868:c.instructions+=1;goto B428868;
case 0x42886b:goto L42886b;
case 0x42886c:c.instructions+=4;goto B42886c;
case 0x42886d:c.instructions+=3;goto B42886d;
case 0x42886f:c.instructions+=2;goto B42886f;
case 0x428874:c.instructions+=1;goto B428874;
case 0x428879:goto L428879;
case 0x42887c:c.instructions+=2;goto B42887c;
case 0x42887e:c.instructions+=1;goto B42887e;
case 0x428881:goto L428881;
case 0x428883:c.instructions+=5;goto B428883;
case 0x428885:c.instructions+=4;goto B428885;
case 0x428887:c.instructions+=3;goto B428887;
case 0x42888a:c.instructions+=2;goto B42888a;
case 0x42888e:c.instructions+=1;goto B42888e;
case 0x428893:goto L428893;
case 0x428896:c.instructions+=2;goto B428896;
case 0x428898:c.instructions+=1;goto B428898;
case 0x42889e:goto L42889e;
case 0x4288a2:c.instructions+=32;goto B4288a2;
case 0x4288a6:c.instructions+=31;goto B4288a6;
case 0x4288aa:c.instructions+=30;goto B4288aa;
case 0x4288ab:c.instructions+=29;goto B4288ab;
case 0x4288af:c.instructions+=28;goto B4288af;
case 0x4288b3:c.instructions+=27;goto B4288b3;
case 0x4288b5:c.instructions+=26;goto B4288b5;
case 0x4288bb:c.instructions+=25;goto B4288bb;
case 0x4288bf:c.instructions+=24;goto B4288bf;
case 0x4288c3:c.instructions+=23;goto B4288c3;
case 0x4288c9:c.instructions+=22;goto B4288c9;
case 0x4288cb:c.instructions+=21;goto B4288cb;
case 0x4288ce:c.instructions+=20;goto B4288ce;
case 0x4288d1:c.instructions+=19;goto B4288d1;
case 0x4288d5:c.instructions+=18;goto B4288d5;
case 0x4288d8:c.instructions+=17;goto B4288d8;
case 0x4288da:c.instructions+=16;goto B4288da;
case 0x4288de:c.instructions+=15;goto B4288de;
case 0x4288e2:c.instructions+=14;goto B4288e2;
case 0x4288e4:c.instructions+=13;goto B4288e4;
case 0x4288e8:c.instructions+=12;goto B4288e8;
case 0x4288ec:c.instructions+=11;goto B4288ec;
case 0x4288ee:c.instructions+=10;goto B4288ee;
case 0x4288f2:c.instructions+=9;goto B4288f2;
case 0x4288f4:c.instructions+=8;goto B4288f4;
case 0x4288f6:c.instructions+=7;goto B4288f6;
case 0x4288fa:c.instructions+=6;goto B4288fa;
case 0x4288fe:c.instructions+=5;goto B4288fe;
case 0x428902:c.instructions+=4;goto B428902;
case 0x428906:c.instructions+=3;goto B428906;
case 0x428908:c.instructions+=2;goto B428908;
case 0x42890b:c.instructions+=1;goto B42890b;
case 0x428910:goto L428910;
case 0x428914:c.instructions+=3;goto B428914;
case 0x428916:c.instructions+=2;goto B428916;
case 0x428919:c.instructions+=1;goto B428919;
case 0x42891b:goto L42891b;
case 0x42891d:c.instructions+=1;goto B42891d;
case 0x428922:goto L428922;
case 0x428924:c.instructions+=13;goto B428924;
case 0x428928:c.instructions+=12;goto B428928;
case 0x42892c:c.instructions+=11;goto B42892c;
case 0x428930:c.instructions+=10;goto B428930;
case 0x428933:c.instructions+=9;goto B428933;
case 0x428937:c.instructions+=8;goto B428937;
case 0x428938:c.instructions+=7;goto B428938;
case 0x42893c:c.instructions+=6;goto B42893c;
case 0x428940:c.instructions+=5;goto B428940;
case 0x428946:c.instructions+=4;goto B428946;
case 0x428949:c.instructions+=3;goto B428949;
case 0x42894a:c.instructions+=2;goto B42894a;
case 0x42894b:c.instructions+=1;goto B42894b;
case 0x428950:goto L428950;
case 0x428954:c.instructions+=4;goto B428954;
case 0x428957:c.instructions+=3;goto B428957;
case 0x428959:c.instructions+=2;goto B428959;
case 0x42895c:c.instructions+=1;goto B42895c;
case 0x42895e:goto L42895e;
case 0x428963:goto L428963;
case 0x428967:c.instructions+=4;goto B428967;
case 0x428969:c.instructions+=3;goto B428969;
case 0x42896d:c.instructions+=2;goto B42896d;
case 0x428971:c.instructions+=1;goto B428971;
case 0x428973:goto L428973;
case 0x428975:c.instructions+=4;goto B428975;
case 0x428977:c.instructions+=3;goto B428977;
case 0x428979:c.instructions+=2;goto B428979;
case 0x428981:c.instructions+=1;goto B428981;
case 0x428984:goto L428984;
case 0x428987:c.instructions+=2;goto B428987;
case 0x428989:c.instructions+=1;goto B428989;
case 0x42898f:goto L42898f;
case 0x428995:c.instructions+=2;goto B428995;
case 0x428997:c.instructions+=1;goto B428997;
case 0x428999:goto L428999;
case 0x42899c:c.instructions+=6;goto B42899c;
case 0x4289a2:c.instructions+=5;goto B4289a2;
case 0x4289a4:c.instructions+=4;goto B4289a4;
case 0x4289aa:c.instructions+=3;goto B4289aa;
case 0x4289ac:c.instructions+=2;goto B4289ac;
case 0x4289ae:c.instructions+=1;goto B4289ae;
case 0x4289b0:goto L4289b0;
case 0x4289b6:goto L4289b6;
case 0x4289b8:c.instructions+=1;goto B4289b8;
case 0x4289ba:goto L4289ba;
case 0x4289be:c.instructions+=4;goto B4289be;
case 0x4289c1:c.instructions+=3;goto B4289c1;
case 0x4289c2:c.instructions+=2;goto B4289c2;
case 0x4289c4:c.instructions+=1;goto B4289c4;
case 0x4289c6:goto L4289c6;
case 0x4289c8:c.instructions+=1;goto B4289c8;
case 0x4289ca:goto L4289ca;
case 0x4289ce:goto L4289ce;
case 0x4289d2:c.instructions+=3;goto B4289d2;
case 0x4289d5:c.instructions+=2;goto B4289d5;
case 0x4289d7:c.instructions+=1;goto B4289d7;
case 0x4289d9:goto L4289d9;
case 0x4289de:goto L4289de;
case 0x4289e0:goto L4289e0;
case 0x4289e4:goto L4289e4;
case 0x4289e8:goto L4289e8;
case 0x4289ea:c.instructions+=2;goto B4289ea;
case 0x4289ec:c.instructions+=1;goto B4289ec;
case 0x4289ef:goto L4289ef;
case 0x4289f3:c.instructions+=3;goto B4289f3;
case 0x4289f5:c.instructions+=2;goto B4289f5;
case 0x4289f8:c.instructions+=1;goto B4289f8;
case 0x4289fa:goto L4289fa;
case 0x4289fc:c.instructions+=2;goto B4289fc;
case 0x4289fe:c.instructions+=1;goto B4289fe;
case 0x428a04:goto L428a04;
case 0x428a07:c.instructions+=7;goto B428a07;
case 0x428a0a:c.instructions+=6;goto B428a0a;
case 0x428a10:c.instructions+=5;goto B428a10;
case 0x428a15:c.instructions+=4;goto B428a15;
case 0x428a19:c.instructions+=3;goto B428a19;
case 0x428a1b:c.instructions+=2;goto B428a1b;
case 0x428a1f:c.instructions+=1;goto B428a1f;
case 0x428a22:goto L428a22;
case 0x428a26:c.instructions+=4;goto B428a26;
case 0x428a2a:c.instructions+=3;goto B428a2a;
case 0x428a2c:c.instructions+=2;goto B428a2c;
case 0x428a2f:c.instructions+=1;goto B428a2f;
case 0x428a31:goto L428a31;
case 0x428a35:c.instructions+=1;goto B428a35;
case 0x428a37:goto L428a37;
case 0x428a3b:c.instructions+=2;goto B428a3b;
case 0x428a3d:c.instructions+=1;goto B428a3d;
case 0x428a41:goto L428a41;
case 0x428a45:c.instructions+=15;goto B428a45;
case 0x428a48:c.instructions+=14;goto B428a48;
case 0x428a49:c.instructions+=13;goto B428a49;
case 0x428a4c:c.instructions+=12;goto B428a4c;
case 0x428a4f:c.instructions+=11;goto B428a4f;
case 0x428a51:c.instructions+=10;goto B428a51;
case 0x428a53:c.instructions+=9;goto B428a53;
case 0x428a57:c.instructions+=8;goto B428a57;
case 0x428a5a:c.instructions+=7;goto B428a5a;
case 0x428a60:c.instructions+=6;goto B428a60;
case 0x428a61:c.instructions+=5;goto B428a61;
case 0x428a62:c.instructions+=4;goto B428a62;
case 0x428a63:c.instructions+=3;goto B428a63;
case 0x428a64:c.instructions+=2;goto B428a64;
case 0x428a66:c.instructions+=1;goto B428a66;
case 0x428a6b:goto L428a6b;
case 0x428a72:c.instructions+=2;goto B428a72;
case 0x428a75:c.instructions+=1;goto B428a75;
case 0x428a77:goto L428a77;
case 0x428a79:c.instructions+=3;goto B428a79;
case 0x428a7a:c.instructions+=2;goto B428a7a;
case 0x428a7c:c.instructions+=1;goto B428a7c;
case 0x428a81:goto L428a81;
case 0x428a83:c.instructions+=1;goto B428a83;
case 0x428a88:goto L428a88;
case 0x428a8d:goto L428a8d;
case 0x428a94:c.instructions+=5;goto B428a94;
case 0x428a9a:c.instructions+=4;goto B428a9a;
case 0x428a9b:c.instructions+=3;goto B428a9b;
case 0x428a9d:c.instructions+=2;goto B428a9d;
case 0x428aa1:c.instructions+=1;goto B428aa1;
case 0x428aa6:goto L428aa6;
case 0x428aa8:c.instructions+=1;goto B428aa8;
case 0x428aaa:goto L428aaa;
case 0x428aae:c.instructions+=2;goto B428aae;
case 0x428ab4:c.instructions+=1;goto B428ab4;
case 0x428aba:goto L428aba;
case 0x428abd:c.instructions+=2;goto B428abd;
case 0x428abe:c.instructions+=1;goto B428abe;
case 0x428ac3:goto L428ac3;
case 0x428ac5:c.instructions+=1;goto B428ac5;
case 0x428acb:goto L428acb;
case 0x428ad1:c.instructions+=3;goto B428ad1;
case 0x428ad4:c.instructions+=2;goto B428ad4;
case 0x428ad8:c.instructions+=1;goto B428ad8;
case 0x428ade:goto L428ade;
case 0x428ae1:c.instructions+=1;goto B428ae1;
case 0x428ae7:goto L428ae7;
case 0x428aed:c.instructions+=7;goto B428aed;
case 0x428af3:c.instructions+=6;goto B428af3;
case 0x428af9:c.instructions+=5;goto B428af9;
case 0x428afe:c.instructions+=4;goto B428afe;
case 0x428b03:c.instructions+=3;goto B428b03;
case 0x428b07:c.instructions+=2;goto B428b07;
case 0x428b0b:c.instructions+=1;goto B428b0b;
case 0x428b10:goto L428b10;
case 0x428b16:c.instructions+=4;goto B428b16;
case 0x428b1b:c.instructions+=3;goto B428b1b;
case 0x428b1d:c.instructions+=2;goto B428b1d;
case 0x428b20:c.instructions+=1;goto B428b20;
case 0x428b22:goto L428b22;
case 0x428b27:goto L428b27;
case 0x428b2a:c.instructions+=3;goto B428b2a;
case 0x428b32:c.instructions+=2;goto B428b32;
case 0x428b36:c.instructions+=1;goto B428b36;
case 0x428b38:goto L428b38;
case 0x428b3c:c.instructions+=1;goto B428b3c;
case 0x428b40:goto L428b40;
case 0x428b44:c.instructions+=2;goto B428b44;
case 0x428b46:c.instructions+=1;goto B428b46;
case 0x428b4c:goto L428b4c;
case 0x428b51:c.instructions+=3;goto B428b51;
case 0x428b53:c.instructions+=2;goto B428b53;
case 0x428b57:c.instructions+=1;goto B428b57;
case 0x428b59:goto L428b59;
case 0x428b5d:c.instructions+=1;goto B428b5d;
case 0x428b60:goto L428b60;
case 0x428b64:c.instructions+=2;goto B428b64;
case 0x428b66:c.instructions+=1;goto B428b66;
case 0x428b68:goto L428b68;
case 0x428b6c:c.instructions+=1;goto B428b6c;
case 0x428b6e:goto L428b6e;
case 0x428b72:c.instructions+=1;goto B428b72;
case 0x428b74:goto L428b74;
case 0x428b77:c.instructions+=1;goto B428b77;
case 0x428b79:goto L428b79;
case 0x428b7c:c.instructions+=1;goto B428b7c;
case 0x428b7e:goto L428b7e;
case 0x428b82:c.instructions+=5;goto B428b82;
case 0x428b86:c.instructions+=4;goto B428b86;
case 0x428b87:c.instructions+=3;goto B428b87;
case 0x428b88:c.instructions+=2;goto B428b88;
case 0x428b89:c.instructions+=1;goto B428b89;
case 0x428b8e:goto L428b8e;
case 0x428b90:c.instructions+=1;goto B428b90;
case 0x428b92:goto L428b92;
case 0x428b93:c.instructions+=2;goto B428b93;
case 0x428b96:c.instructions+=1;goto B428b96;
case 0x428b98:goto L428b98;
case 0x428b9a:goto L428b9a;
case 0x428b9e:c.instructions+=6;goto B428b9e;
case 0x428ba2:c.instructions+=5;goto B428ba2;
case 0x428ba3:c.instructions+=4;goto B428ba3;
case 0x428ba4:c.instructions+=3;goto B428ba4;
case 0x428ba5:c.instructions+=2;goto B428ba5;
case 0x428bab:c.instructions+=1;goto B428bab;
case 0x428bb0:goto L428bb0;
case 0x428bb5:goto L428bb5;
case 0x428bb9:c.instructions+=7;goto B428bb9;
case 0x428bbd:c.instructions+=6;goto B428bbd;
case 0x428bbe:c.instructions+=5;goto B428bbe;
case 0x428bbf:c.instructions+=4;goto B428bbf;
case 0x428bc2:c.instructions+=3;goto B428bc2;
case 0x428bc6:c.instructions+=2;goto B428bc6;
case 0x428bca:c.instructions+=1;goto B428bca;
case 0x428bd0:goto L428bd0;
case 0x428bd4:c.instructions+=2;goto B428bd4;
case 0x428bd6:c.instructions+=1;goto B428bd6;
case 0x428bdc:goto L428bdc;
case 0x428bdf:c.instructions+=3;goto B428bdf;
case 0x428be2:c.instructions+=2;goto B428be2;
case 0x428be5:c.instructions+=1;goto B428be5;
case 0x428be7:goto L428be7;
case 0x428bea:c.instructions+=1;goto B428bea;
case 0x428bec:goto L428bec;
case 0x428bf0:c.instructions+=13;goto B428bf0;
case 0x428bf3:c.instructions+=12;goto B428bf3;
case 0x428bf6:c.instructions+=11;goto B428bf6;
case 0x428bf8:c.instructions+=10;goto B428bf8;
case 0x428bfa:c.instructions+=9;goto B428bfa;
case 0x428bfd:c.instructions+=8;goto B428bfd;
case 0x428c02:c.instructions+=7;goto B428c02;
case 0x428c07:c.instructions+=6;goto B428c07;
case 0x428c08:c.instructions+=5;goto B428c08;
case 0x428c09:c.instructions+=4;goto B428c09;
case 0x428c0c:c.instructions+=3;goto B428c0c;
case 0x428c0d:c.instructions+=2;goto B428c0d;
case 0x428c0e:c.instructions+=1;goto B428c0e;
case 0x428c13:goto L428c13;
case 0x428c17:c.instructions+=4;goto B428c17;
case 0x428c1a:c.instructions+=3;goto B428c1a;
case 0x428c1d:c.instructions+=2;goto B428c1d;
case 0x428c1e:c.instructions+=1;goto B428c1e;
case 0x428c20:goto L428c20;
case 0x428c24:c.instructions+=4;goto B428c24;
case 0x428c25:c.instructions+=3;goto B428c25;
case 0x428c26:c.instructions+=2;goto B428c26;
case 0x428c2c:c.instructions+=1;goto B428c2c;
case 0x428c31:goto L428c31;
case 0x428c33:goto L428c33;
case 0x428c37:c.instructions+=4;goto B428c37;
case 0x428c38:c.instructions+=3;goto B428c38;
case 0x428c3a:c.instructions+=2;goto B428c3a;
case 0x428c40:c.instructions+=1;goto B428c40;
case 0x428c45:goto L428c45;
case 0x428c47:goto L428c47;
case 0x428c4d:c.instructions+=1;goto B428c4d;
case 0x428c52:goto L428c52;
case 0x428c57:goto L428c57;
case 0x428c5d:c.instructions+=2;goto B428c5d;
case 0x428c5f:c.instructions+=1;goto B428c5f;
case 0x428c61:goto L428c61;
case 0x428c67:c.instructions+=5;goto B428c67;
case 0x428c68:c.instructions+=4;goto B428c68;
case 0x428c6e:c.instructions+=3;goto B428c6e;
case 0x428c6f:c.instructions+=2;goto B428c6f;
case 0x428c71:c.instructions+=1;goto B428c71;
case 0x428c76:goto L428c76;
case 0x428c7d:c.instructions+=6;goto B428c7d;
case 0x428c80:c.instructions+=5;goto B428c80;
case 0x428c83:c.instructions+=4;goto B428c83;
case 0x428c86:c.instructions+=3;goto B428c86;
case 0x428c88:c.instructions+=2;goto B428c88;
case 0x428c8c:c.instructions+=1;goto B428c8c;
case 0x428c8e:goto L428c8e;
case 0x428c92:c.instructions+=2;goto B428c92;
case 0x428c95:c.instructions+=1;goto B428c95;
case 0x428c97:goto L428c97;
case 0x428c9d:goto L428c9d;
case 0x428c9f:c.instructions+=5;goto B428c9f;
case 0x428ca1:c.instructions+=4;goto B428ca1;
case 0x428ca3:c.instructions+=3;goto B428ca3;
case 0x428ca5:c.instructions+=2;goto B428ca5;
case 0x428ca8:c.instructions+=1;goto B428ca8;
case 0x428caa:goto L428caa;
case 0x428cab:c.instructions+=6;goto B428cab;
case 0x428cac:c.instructions+=5;goto B428cac;
case 0x428cad:c.instructions+=4;goto B428cad;
case 0x428caf:c.instructions+=3;goto B428caf;
case 0x428cb0:c.instructions+=2;goto B428cb0;
case 0x428cb3:c.instructions+=1;goto B428cb3;
case 0x428cb6:goto L428cb6;
case 0x428cb7:c.instructions+=8;goto B428cb7;
case 0x428cb8:c.instructions+=7;goto B428cb8;
case 0x428cb9:c.instructions+=6;goto B428cb9;
case 0x428cc0:c.instructions+=5;goto B428cc0;
case 0x428cc7:c.instructions+=4;goto B428cc7;
case 0x428cc9:c.instructions+=3;goto B428cc9;
case 0x428cca:c.instructions+=2;goto B428cca;
case 0x428ccd:c.instructions+=1;goto B428ccd;
case 0x428cd0:goto L428cd0;
case 0x428cd4:c.instructions+=6;goto B428cd4;
case 0x428cd5:c.instructions+=5;goto B428cd5;
case 0x428cd6:c.instructions+=4;goto B428cd6;
case 0x428cd7:c.instructions+=3;goto B428cd7;
case 0x428cd8:c.instructions+=2;goto B428cd8;
case 0x428cdb:c.instructions+=1;goto B428cdb;
case 0x428ce0:goto L428ce0;
case 0x428ce3:c.instructions+=15;goto B428ce3;
case 0x428ce4:c.instructions+=14;goto B428ce4;
case 0x428ce5:c.instructions+=13;goto B428ce5;
case 0x428ce9:c.instructions+=12;goto B428ce9;
case 0x428cea:c.instructions+=11;goto B428cea;
case 0x428cee:c.instructions+=10;goto B428cee;
case 0x428cf0:c.instructions+=9;goto B428cf0;
case 0x428cf2:c.instructions+=8;goto B428cf2;
case 0x428cf5:c.instructions+=7;goto B428cf5;
case 0x428cf8:c.instructions+=6;goto B428cf8;
case 0x428cfa:c.instructions+=5;goto B428cfa;
case 0x428cfc:c.instructions+=4;goto B428cfc;
case 0x428d00:c.instructions+=3;goto B428d00;
case 0x428d04:c.instructions+=2;goto B428d04;
case 0x428d0c:c.instructions+=1;goto B428d0c;
case 0x428d12:goto L428d12;
case 0x428d14:c.instructions+=1;goto B428d14;
case 0x428d1a:goto L428d1a;
case 0x428d1d:c.instructions+=2;goto B428d1d;
case 0x428d21:c.instructions+=1;goto B428d21;
case 0x428d27:goto L428d27;
case 0x428d28:c.instructions+=2;goto B428d28;
case 0x428d2b:c.instructions+=1;goto B428d2b;
case 0x428d2d:goto L428d2d;
case 0x428d31:goto L428d31;
case 0x428d34:c.instructions+=5;goto B428d34;
case 0x428d3b:c.instructions+=4;goto B428d3b;
case 0x428d3e:c.instructions+=3;goto B428d3e;
case 0x428d40:c.instructions+=2;goto B428d40;
case 0x428d41:c.instructions+=1;goto B428d41;
case 0x428d47:goto L428d47;
case 0x428d49:c.instructions+=1;goto B428d49;
case 0x428d4b:goto L428d4b;
case 0x428d4e:c.instructions+=3;goto B428d4e;
case 0x428d4f:c.instructions+=2;goto B428d4f;
case 0x428d50:c.instructions+=1;goto B428d50;
case 0x428d55:goto L428d55;
case 0x428d58:c.instructions+=2;goto B428d58;
case 0x428d5a:c.instructions+=1;goto B428d5a;
case 0x428d5c:goto L428d5c;
case 0x428d5f:c.instructions+=11;goto B428d5f;
case 0x428d66:c.instructions+=10;goto B428d66;
case 0x428d6a:c.instructions+=9;goto B428d6a;
case 0x428d6e:c.instructions+=8;goto B428d6e;
case 0x428d6f:c.instructions+=7;goto B428d6f;
case 0x428d70:c.instructions+=6;goto B428d70;
case 0x428d71:c.instructions+=5;goto B428d71;
case 0x428d72:c.instructions+=4;goto B428d72;
case 0x428d73:c.instructions+=3;goto B428d73;
case 0x428d75:c.instructions+=2;goto B428d75;
case 0x428d7d:c.instructions+=1;goto B428d7d;
case 0x428d82:goto L428d82;
case 0x428d84:c.instructions+=1;goto B428d84;
case 0x428d86:goto L428d86;
case 0x428d8a:c.instructions+=4;goto B428d8a;
case 0x428d8e:c.instructions+=3;goto B428d8e;
case 0x428d90:c.instructions+=2;goto B428d90;
case 0x428d93:c.instructions+=1;goto B428d93;
case 0x428d95:goto L428d95;
case 0x428d98:c.instructions+=4;goto B428d98;
case 0x428d9f:c.instructions+=3;goto B428d9f;
case 0x428da3:c.instructions+=2;goto B428da3;
case 0x428da7:c.instructions+=1;goto B428da7;
case 0x428dab:goto L428dab;
case 0x428db1:c.instructions+=1;goto B428db1;
case 0x428db6:goto L428db6;
case 0x428dba:c.instructions+=6;goto B428dba;
case 0x428dbd:c.instructions+=5;goto B428dbd;
case 0x428dbe:c.instructions+=4;goto B428dbe;
case 0x428dc1:c.instructions+=3;goto B428dc1;
case 0x428dc3:c.instructions+=2;goto B428dc3;
case 0x428dc7:c.instructions+=1;goto B428dc7;
case 0x428dcd:goto L428dcd;
case 0x428dce:goto L428dce;
case 0x428dd2:c.instructions+=8;goto B428dd2;
case 0x428dd6:c.instructions+=7;goto B428dd6;
case 0x428dda:c.instructions+=6;goto B428dda;
case 0x428ddc:c.instructions+=5;goto B428ddc;
case 0x428ddd:c.instructions+=4;goto B428ddd;
case 0x428dde:c.instructions+=3;goto B428dde;
case 0x428ddf:c.instructions+=2;goto B428ddf;
case 0x428de2:c.instructions+=1;goto B428de2;
case 0x428de5:goto L428de5;
case 0x428de6:c.instructions+=5;goto B428de6;
case 0x428de7:c.instructions+=4;goto B428de7;
case 0x428de9:c.instructions+=3;goto B428de9;
case 0x428dea:c.instructions+=2;goto B428dea;
case 0x428ded:c.instructions+=1;goto B428ded;
case 0x428df0:goto L428df0;
case 0x428df1:c.instructions+=14;goto B428df1;
case 0x428df2:c.instructions+=13;goto B428df2;
case 0x428df6:c.instructions+=12;goto B428df6;
case 0x428df7:c.instructions+=11;goto B428df7;
case 0x428dfb:c.instructions+=10;goto B428dfb;
case 0x428dfc:c.instructions+=9;goto B428dfc;
case 0x428e00:c.instructions+=8;goto B428e00;
case 0x428e01:c.instructions+=7;goto B428e01;
case 0x428e05:c.instructions+=6;goto B428e05;
case 0x428e06:c.instructions+=5;goto B428e06;
case 0x428e0c:c.instructions+=4;goto B428e0c;
case 0x428e0d:c.instructions+=3;goto B428e0d;
case 0x428e12:c.instructions+=2;goto B428e12;
case 0x428e18:c.instructions+=1;goto B428e18;
case 0x428e1d:goto L428e1d;
case 0x428e1f:c.instructions+=1;goto B428e1f;
case 0x428e21:goto L428e21;
case 0x428e25:c.instructions+=6;goto B428e25;
case 0x428e26:c.instructions+=5;goto B428e26;
case 0x428e27:c.instructions+=4;goto B428e27;
case 0x428e28:c.instructions+=3;goto B428e28;
case 0x428e29:c.instructions+=2;goto B428e29;
case 0x428e2e:c.instructions+=1;goto B428e2e;
case 0x428e33:goto L428e33;
case 0x428e35:c.instructions+=2;goto B428e35;
case 0x428e37:c.instructions+=1;goto B428e37;
case 0x428e39:goto L428e39;
case 0x428e3b:c.instructions+=4;goto B428e3b;
case 0x428e3f:c.instructions+=3;goto B428e3f;
case 0x428e41:c.instructions+=2;goto B428e41;
case 0x428e44:c.instructions+=1;goto B428e44;
case 0x428e46:goto L428e46;
case 0x428e48:c.instructions+=1;goto B428e48;
case 0x428e4a:goto L428e4a;
case 0x428e4e:goto L428e4e;
case 0x428e54:c.instructions+=9;goto B428e54;
case 0x428e5a:c.instructions+=8;goto B428e5a;
case 0x428e5b:c.instructions+=7;goto B428e5b;
case 0x428e5c:c.instructions+=6;goto B428e5c;
case 0x428e5d:c.instructions+=5;goto B428e5d;
case 0x428e5e:c.instructions+=4;goto B428e5e;
case 0x428e64:c.instructions+=3;goto B428e64;
case 0x428e65:c.instructions+=2;goto B428e65;
case 0x428e66:c.instructions+=1;goto B428e66;
case 0x428e70:goto L428e70;
case 0x428e73:c.instructions+=16;goto B428e73;
case 0x428e77:c.instructions+=15;goto B428e77;
case 0x428e7e:c.instructions+=14;goto B428e7e;
case 0x428e7f:c.instructions+=13;goto B428e7f;
case 0x428e81:c.instructions+=12;goto B428e81;
case 0x428e82:c.instructions+=11;goto B428e82;
case 0x428e89:c.instructions+=10;goto B428e89;
case 0x428e8b:c.instructions+=9;goto B428e8b;
case 0x428e8c:c.instructions+=8;goto B428e8c;
case 0x428e8d:c.instructions+=7;goto B428e8d;
case 0x428e91:c.instructions+=6;goto B428e91;
case 0x428e93:c.instructions+=5;goto B428e93;
case 0x428e97:c.instructions+=4;goto B428e97;
case 0x428e9f:c.instructions+=3;goto B428e9f;
case 0x428ea7:c.instructions+=2;goto B428ea7;
case 0x428ea9:c.instructions+=1;goto B428ea9;
case 0x428eab:goto L428eab;
case 0x428eb0:goto L428eb0;
case 0x428eb2:c.instructions+=1;goto B428eb2;
case 0x428eb8:goto L428eb8;
case 0x428eb9:c.instructions+=5;goto B428eb9;
case 0x428ebc:c.instructions+=4;goto B428ebc;
case 0x428ebd:c.instructions+=3;goto B428ebd;
case 0x428ebe:c.instructions+=2;goto B428ebe;
case 0x428ec0:c.instructions+=1;goto B428ec0;
case 0x428ec5:goto L428ec5;
case 0x428ec7:c.instructions+=4;goto B428ec7;
case 0x428ec9:c.instructions+=3;goto B428ec9;
case 0x428ecc:c.instructions+=2;goto B428ecc;
case 0x428ece:c.instructions+=1;goto B428ece;
case 0x428ed0:goto L428ed0;
case 0x428ed2:goto L428ed2;
case 0x428ed8:goto L428ed8;
case 0x428eda:c.instructions+=1;goto B428eda;
case 0x428ee0:goto L428ee0;
case 0x428ee1:c.instructions+=5;goto B428ee1;
case 0x428ee4:c.instructions+=4;goto B428ee4;
case 0x428ee5:c.instructions+=3;goto B428ee5;
case 0x428ee6:c.instructions+=2;goto B428ee6;
case 0x428ee8:c.instructions+=1;goto B428ee8;
case 0x428eed:goto L428eed;
case 0x428eef:c.instructions+=4;goto B428eef;
case 0x428ef1:c.instructions+=3;goto B428ef1;
case 0x428ef4:c.instructions+=2;goto B428ef4;
case 0x428ef6:c.instructions+=1;goto B428ef6;
case 0x428ef8:goto L428ef8;
case 0x428efa:c.instructions+=1;goto B428efa;
case 0x428f00:goto L428f00;
case 0x428f05:c.instructions+=10;goto B428f05;
case 0x428f09:c.instructions+=9;goto B428f09;
case 0x428f0d:c.instructions+=8;goto B428f0d;
case 0x428f13:c.instructions+=7;goto B428f13;
case 0x428f17:c.instructions+=6;goto B428f17;
case 0x428f1f:c.instructions+=5;goto B428f1f;
case 0x428f21:c.instructions+=4;goto B428f21;
case 0x428f27:c.instructions+=3;goto B428f27;
case 0x428f29:c.instructions+=2;goto B428f29;
case 0x428f2c:c.instructions+=1;goto B428f2c;
case 0x428f2e:goto L428f2e;
case 0x428f34:c.instructions+=1;goto B428f34;
case 0x428f36:goto L428f36;
case 0x428f38:goto L428f38;
case 0x428f3c:c.instructions+=12;goto B428f3c;
case 0x428f40:c.instructions+=11;goto B428f40;
case 0x428f41:c.instructions+=10;goto B428f41;
case 0x428f45:c.instructions+=9;goto B428f45;
case 0x428f49:c.instructions+=8;goto B428f49;
case 0x428f4a:c.instructions+=7;goto B428f4a;
case 0x428f4e:c.instructions+=6;goto B428f4e;
case 0x428f4f:c.instructions+=5;goto B428f4f;
case 0x428f50:c.instructions+=4;goto B428f50;
case 0x428f51:c.instructions+=3;goto B428f51;
case 0x428f55:c.instructions+=2;goto B428f55;
case 0x428f59:c.instructions+=1;goto B428f59;
case 0x428f5e:goto L428f5e;
case 0x428f60:c.instructions+=1;goto B428f60;
case 0x428f62:goto L428f62;
case 0x428f66:c.instructions+=11;goto B428f66;
case 0x428f6a:c.instructions+=10;goto B428f6a;
case 0x428f6d:c.instructions+=9;goto B428f6d;
case 0x428f6f:c.instructions+=8;goto B428f6f;
case 0x428f71:c.instructions+=7;goto B428f71;
case 0x428f74:c.instructions+=6;goto B428f74;
case 0x428f7a:c.instructions+=5;goto B428f7a;
case 0x428f7c:c.instructions+=4;goto B428f7c;
case 0x428f82:c.instructions+=3;goto B428f82;
case 0x428f84:c.instructions+=2;goto B428f84;
case 0x428f87:c.instructions+=1;goto B428f87;
case 0x428f89:goto L428f89;
case 0x428f8c:c.instructions+=2;goto B428f8c;
case 0x428f8e:c.instructions+=1;goto B428f8e;
case 0x428f90:goto L428f90;
case 0x428f95:c.instructions+=1;goto B428f95;
case 0x428f97:goto L428f97;
case 0x428f9c:c.instructions+=9;goto B428f9c;
case 0x428f9d:c.instructions+=8;goto B428f9d;
case 0x428fa0:c.instructions+=7;goto B428fa0;
case 0x428fa3:c.instructions+=6;goto B428fa3;
case 0x428fa4:c.instructions+=5;goto B428fa4;
case 0x428fa5:c.instructions+=4;goto B428fa5;
case 0x428fa7:c.instructions+=3;goto B428fa7;
case 0x428fa8:c.instructions+=2;goto B428fa8;
case 0x428fab:c.instructions+=1;goto B428fab;
case 0x428fae:goto L428fae;
case 0x428fb1:goto L428fb1;
case 0x428fb2:c.instructions+=7;goto B428fb2;
case 0x428fb5:c.instructions+=6;goto B428fb5;
case 0x428fb6:c.instructions+=5;goto B428fb6;
case 0x428fb7:c.instructions+=4;goto B428fb7;
case 0x428fb9:c.instructions+=3;goto B428fb9;
case 0x428fba:c.instructions+=2;goto B428fba;
case 0x428fbd:c.instructions+=1;goto B428fbd;
case 0x428fc0:goto L428fc0;
case 0x428fc1:c.instructions+=6;goto B428fc1;
case 0x428fc2:c.instructions+=5;goto B428fc2;
case 0x428fc3:c.instructions+=4;goto B428fc3;
case 0x428fc5:c.instructions+=3;goto B428fc5;
case 0x428fc6:c.instructions+=2;goto B428fc6;
case 0x428fc9:c.instructions+=1;goto B428fc9;
case 0x428fd0:goto L428fd0;
case 0x428fd1:c.instructions+=16;goto B428fd1;
case 0x428fd3:c.instructions+=15;goto B428fd3;
case 0x428fd6:c.instructions+=14;goto B428fd6;
case 0x428fdc:c.instructions+=13;goto B428fdc;
case 0x428fdd:c.instructions+=12;goto B428fdd;
case 0x428fde:c.instructions+=11;goto B428fde;
case 0x428fe1:c.instructions+=10;goto B428fe1;
case 0x428fe8:c.instructions+=9;goto B428fe8;
case 0x428feb:c.instructions+=8;goto B428feb;
case 0x428fee:c.instructions+=7;goto B428fee;
case 0x428ff2:c.instructions+=6;goto B428ff2;
case 0x428ff6:c.instructions+=5;goto B428ff6;
case 0x428ff8:c.instructions+=4;goto B428ff8;
case 0x428ffa:c.instructions+=3;goto B428ffa;
case 0x428ffb:c.instructions+=2;goto B428ffb;
case 0x428ffd:c.instructions+=1;goto B428ffd;
default:missing_instruction(c.pc);}
B428001:L428001:{c.instructions+=1;NFSU2_TR(0x428001);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428004ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B428004:L428004:{c.instructions+=12;NFSU2_TR(0x428004);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428008:{NFSU2_TR(0x428008);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428009:{NFSU2_TR(0x428009);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x460ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42800f:{NFSU2_TR(0x42800f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x790ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B428015:{NFSU2_TR(0x428015);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x791ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42801b:{NFSU2_TR(0x42801b);
__builtin_memmove((R+0),(R+24),4);
}
B42801d:{NFSU2_TR(0x42801d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42801e:{NFSU2_TR(0x42801e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42801f:{NFSU2_TR(0x42801f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B428020:{NFSU2_TR(0x428020);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428027:{NFSU2_TR(0x428027);
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
B42802a:{NFSU2_TR(0x42802a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428030:L428030:{c.instructions+=6;NFSU2_TR(0x428030);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428031:{NFSU2_TR(0x428031);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428035:{NFSU2_TR(0x428035);
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
B428037:{NFSU2_TR(0x428037);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428038:{NFSU2_TR(0x428038);
__builtin_memmove((R+24),(R+4),4);
}
B42803a:{NFSU2_TR(0x42803a);
if(r1(R+518)){{goto L428241;}}
}
B428040:L428040:{c.instructions+=6;NFSU2_TR(0x428040);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428041:{NFSU2_TR(0x428041);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428042:{NFSU2_TR(0x428042);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428043:{NFSU2_TR(0x428043);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B428047:{NFSU2_TR(0x428047);
__builtin_memmove((R+4),(R+28),4);
}
B428049:{NFSU2_TR(0x428049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42804eull));
TAIL_STATIC(0x5ec0d0u,5ec);
}
B42804e:L42804e:{c.instructions+=6;NFSU2_TR(0x42804e);
__builtin_memmove((R+20),(R+0),4);
}
B428050:{NFSU2_TR(0x428050);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xafull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B428056:{NFSU2_TR(0x428056);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428058:{NFSU2_TR(0x428058);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42805c:{NFSU2_TR(0x42805c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B428064:{NFSU2_TR(0x428064);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42817a;}}
}
B42806a:L42806a:{c.instructions+=3;NFSU2_TR(0x42806a);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B42806f:{NFSU2_TR(0x42806f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428071:{NFSU2_TR(0x428071);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42817a;}}
}
B428077:L428077:{c.instructions+=3;NFSU2_TR(0x428077);
__builtin_memmove((R+0),gp(0x890108),4);
}
B42807c:{NFSU2_TR(0x42807c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42807e:{NFSU2_TR(0x42807e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42817a;}}
}
B428084:L428084:{c.instructions+=3;NFSU2_TR(0x428084);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B428088:{NFSU2_TR(0x428088);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42808b:{NFSU2_TR(0x42808b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4280ba;}}
}
B42808d:L42808d:{c.instructions+=14;NFSU2_TR(0x42808d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xadull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B428094:{NFSU2_TR(0x428094);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B428096:{NFSU2_TR(0x428096);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B428098:{NFSU2_TR(0x428098);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B42809b:{NFSU2_TR(0x42809b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42809d:{NFSU2_TR(0x42809d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42809e:{NFSU2_TR(0x42809e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4280a1:{NFSU2_TR(0x4280a1);
__builtin_memmove((R+4),(R+24),4);
}
B4280a3:{NFSU2_TR(0x4280a3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4280a4:{NFSU2_TR(0x4280a4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+20))));
}
B4280a6:{NFSU2_TR(0x4280a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4280a7:{NFSU2_TR(0x4280a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4280a9:{NFSU2_TR(0x4280a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4280aa:{NFSU2_TR(0x4280aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4280afull));
TAIL_STATIC(0x4198c0u,419);
}
B4280af:L4280af:{c.instructions+=3;NFSU2_TR(0x4280af);
__builtin_memmove((R+12),(R+0),4);
}
B4280b1:{NFSU2_TR(0x4280b1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4280b4:{NFSU2_TR(0x4280b4);
if(r1(R+518)){{goto L428171;}}
}
B4280ba:L4280ba:{c.instructions+=7;NFSU2_TR(0x4280ba);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4280be:{NFSU2_TR(0x4280be);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4280c2:{NFSU2_TR(0x4280c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xadull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4280c8:{NFSU2_TR(0x4280c8);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B4280cd:{NFSU2_TR(0x4280cd);
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
B4280cf:{NFSU2_TR(0x4280cf);
w4(R+20,u32(0x14ull));
}
B4280d4:{NFSU2_TR(0x4280d4);
if(r1(R+518)){{goto L4280db;}}
}
B4280d6:L4280d6:{c.instructions+=2;NFSU2_TR(0x4280d6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4280d9:{NFSU2_TR(0x4280d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4280e0;}}
}
B4280db:L4280db:{c.instructions+=1;NFSU2_TR(0x4280db);
w4(R+20,u32(0xaull));
}
B4280e0:L4280e0:{c.instructions+=3;NFSU2_TR(0x4280e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4280e3:{NFSU2_TR(0x4280e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4280e5:{NFSU2_TR(0x4280e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4280e8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4280e8:L4280e8:{c.instructions+=4;NFSU2_TR(0x4280e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4280ea:{NFSU2_TR(0x4280ea);
__builtin_memmove((R+4),(R+24),4);
}
B4280ec:{NFSU2_TR(0x4280ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4280ed:{NFSU2_TR(0x4280ed);
if(r1(R+518)){{goto L4280fe;}}
}
B4280ef:L4280ef:{c.instructions+=8;NFSU2_TR(0x4280ef);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+20))));
}
B4280f1:{NFSU2_TR(0x4280f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4280f3:{NFSU2_TR(0x4280f3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4280f5:{NFSU2_TR(0x4280f5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B4280f8:{NFSU2_TR(0x4280f8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4280f9:{NFSU2_TR(0x4280f9);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B4280fb:{NFSU2_TR(0x4280fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4280fc:{NFSU2_TR(0x4280fc);
{goto L4280ff;}
}
B4280fe:L4280fe:{c.instructions+=1;NFSU2_TR(0x4280fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4280ff:L4280ff:{c.instructions+=1;NFSU2_TR(0x4280ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428104ull));
TAIL_STATIC(0x419670u,419);
}
B428104:L428104:{c.instructions+=6;NFSU2_TR(0x428104);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428108:{NFSU2_TR(0x428108);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42810b:{NFSU2_TR(0x42810b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42810f:{NFSU2_TR(0x42810f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B428115:{NFSU2_TR(0x428115);
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
B428117:{NFSU2_TR(0x428117);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428146;}}
}
B428119:L428119:{c.instructions+=2;NFSU2_TR(0x428119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42811b:{NFSU2_TR(0x42811b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42811eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42811e:L42811e:{c.instructions+=2;NFSU2_TR(0x42811e);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B428122:{NFSU2_TR(0x428122);
if(r1(R+518)){{goto L428146;}}
}
B428124:L428124:{c.instructions+=2;NFSU2_TR(0x428124);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428127:{NFSU2_TR(0x428127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42812cull));
TAIL_STATIC(0x404950u,404);
}
B42812c:L42812c:{c.instructions+=3;NFSU2_TR(0x42812c);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B428131:{NFSU2_TR(0x428131);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428133:{NFSU2_TR(0x428133);
if(r1(R+518)){{goto L42813f;}}
}
B428135:L428135:{c.instructions+=3;NFSU2_TR(0x428135);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428138:{NFSU2_TR(0x428138);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42813a:{NFSU2_TR(0x42813a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42813full));
TAIL_STATIC(0x40f750u,40f);
}
B42813f:L42813f:{c.instructions+=2;NFSU2_TR(0x42813f);
__builtin_memmove((R+4),(R+24),4);
}
B428141:{NFSU2_TR(0x428141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428146ull));
TAIL_STATIC(0x411be0u,411);
}
B428146:L428146:{c.instructions+=1;NFSU2_TR(0x428146);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42814a:L42814a:{c.instructions+=2;NFSU2_TR(0x42814a);
__builtin_memmove((R+4),(R+24),4);
}
B42814c:{NFSU2_TR(0x42814c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428151ull));
TAIL_STATIC(0x40a620u,40a);
}
B428151:L428151:{c.instructions+=4;NFSU2_TR(0x428151);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428154:{NFSU2_TR(0x428154);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B428156:{NFSU2_TR(0x428156);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B428159:{NFSU2_TR(0x428159);
if(r1(R+518)){{goto L42818a;}}
}
B42815b:L42815b:{c.instructions+=7;NFSU2_TR(0x42815b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42815f:{NFSU2_TR(0x42815f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428160:{NFSU2_TR(0x428160);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B428164:{NFSU2_TR(0x428164);
__builtin_memmove((R+4),(R+24),4);
}
B428166:{NFSU2_TR(0x428166);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B428169:{NFSU2_TR(0x428169);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42816a:{NFSU2_TR(0x42816a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42816full));
TAIL_STATIC(0x422220u,422);
}
B42816f:L42816f:{c.instructions+=1;NFSU2_TR(0x42816f);
{goto L4281a1;}
}
B428171:L428171:{c.instructions+=2;NFSU2_TR(0x428171);
__builtin_memmove((R+4),(R+24),4);
}
B428173:{NFSU2_TR(0x428173);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428178ull));
TAIL_STATIC(0x411be0u,411);
}
B428178:L428178:{c.instructions+=1;NFSU2_TR(0x428178);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42814au);}goto L42814a;}
}
B42817a:L42817a:{c.instructions+=2;NFSU2_TR(0x42817a);
__builtin_memmove((R+4),(R+24),4);
}
B42817c:{NFSU2_TR(0x42817c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428181ull));
TAIL_STATIC(0x411be0u,411);
}
B428181:L428181:{c.instructions+=2;NFSU2_TR(0x428181);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xafull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B428188:{NFSU2_TR(0x428188);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42814au);}goto L42814a;}
}
B42818a:L42818a:{c.instructions+=9;NFSU2_TR(0x42818a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42818e:{NFSU2_TR(0x42818e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428192:{NFSU2_TR(0x428192);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B428196:{NFSU2_TR(0x428196);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428197:{NFSU2_TR(0x428197);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428198:{NFSU2_TR(0x428198);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428199:{NFSU2_TR(0x428199);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42819a:{NFSU2_TR(0x42819a);
__builtin_memmove((R+4),(R+24),4);
}
B42819c:{NFSU2_TR(0x42819c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4281a1ull));
TAIL_STATIC(0x426810u,426);
}
B4281a1:L4281a1:{c.instructions+=3;NFSU2_TR(0x4281a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4281a2:{NFSU2_TR(0x4281a2);
__builtin_memmove((R+4),(R+24),4);
}
B4281a4:{NFSU2_TR(0x4281a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4281a9ull));
TAIL_STATIC(0x40a8c0u,40a);
}
B4281a9:L4281a9:{c.instructions+=4;NFSU2_TR(0x4281a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4281aa:{NFSU2_TR(0x4281aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4281ab:{NFSU2_TR(0x4281ab);
__builtin_memmove((R+4),(R+24),4);
}
B4281ad:{NFSU2_TR(0x4281ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4281b2ull));
TAIL_STATIC(0x41a180u,41a);
}
B4281b2:L4281b2:{c.instructions+=3;NFSU2_TR(0x4281b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4281b3:{NFSU2_TR(0x4281b3);
__builtin_memmove((R+4),(R+24),4);
}
B4281b5:{NFSU2_TR(0x4281b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4281baull));
TAIL_STATIC(0x422780u,422);
}
B4281ba:L4281ba:{c.instructions+=3;NFSU2_TR(0x4281ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4281bb:{NFSU2_TR(0x4281bb);
__builtin_memmove((R+4),(R+24),4);
}
B4281bd:{NFSU2_TR(0x4281bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4281c2ull));
TAIL_STATIC(0x418ae0u,418);
}
B4281c2:L4281c2:{c.instructions+=3;NFSU2_TR(0x4281c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4281c3:{NFSU2_TR(0x4281c3);
__builtin_memmove((R+4),(R+24),4);
}
B4281c5:{NFSU2_TR(0x4281c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4281caull));
TAIL_STATIC(0x41fd50u,41f);
}
B4281ca:L4281ca:{c.instructions+=3;NFSU2_TR(0x4281ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4281cd:{NFSU2_TR(0x4281cd);
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
B4281cf:{NFSU2_TR(0x4281cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4281ec;}}
}
B4281d1:L4281d1:{c.instructions+=9;NFSU2_TR(0x4281d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4281d2:{NFSU2_TR(0x4281d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xadull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B4281d9:{NFSU2_TR(0x4281d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xadull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4281df:{NFSU2_TR(0x4281df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4281e0:{NFSU2_TR(0x4281e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4281e1:{NFSU2_TR(0x4281e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaeull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4281e7:{NFSU2_TR(0x4281e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4281e8:{NFSU2_TR(0x4281e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4281e9:{NFSU2_TR(0x4281e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4281ec:L4281ec:{c.instructions+=2;NFSU2_TR(0x4281ec);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xadull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4281f3:{NFSU2_TR(0x4281f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428217;}}
}
B4281f5:L4281f5:{c.instructions+=13;NFSU2_TR(0x4281f5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4281f7:{NFSU2_TR(0x4281f7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4281f9:{NFSU2_TR(0x4281f9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B4281fc:{NFSU2_TR(0x4281fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4281fe:{NFSU2_TR(0x4281fe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428200:{NFSU2_TR(0x428200);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x60ull))));
}
B428203:{NFSU2_TR(0x428203);
__builtin_memmove((R+4),(R+24),4);
}
B428205:{NFSU2_TR(0x428205);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B428206:{NFSU2_TR(0x428206);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+20))));
}
B428208:{NFSU2_TR(0x428208);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428209:{NFSU2_TR(0x428209);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42820b:{NFSU2_TR(0x42820b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42820c:{NFSU2_TR(0x42820c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428211ull));
TAIL_STATIC(0x4198c0u,419);
}
B428211:L428211:{c.instructions+=1;NFSU2_TR(0x428211);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xadull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B428217:L428217:{c.instructions+=10;NFSU2_TR(0x428217);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xadull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B42821e:{NFSU2_TR(0x42821e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428221:{NFSU2_TR(0x428221);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B428223:{NFSU2_TR(0x428223);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B428224:{NFSU2_TR(0x428224);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B428226:{NFSU2_TR(0x428226);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B428229:{NFSU2_TR(0x428229);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B42822a:{NFSU2_TR(0x42822a);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B42822c:{NFSU2_TR(0x42822c);
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
B42822e:{NFSU2_TR(0x42822e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L428232;}}
}
B428230:L428230:{c.instructions+=1;NFSU2_TR(0x428230);
__builtin_memmove((R+0),(R+4),4);
}
B428232:L428232:{c.instructions+=5;NFSU2_TR(0x428232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428233:{NFSU2_TR(0x428233);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B428234:{NFSU2_TR(0x428234);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xadull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42823a:{NFSU2_TR(0x42823a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaeull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B428240:{NFSU2_TR(0x428240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B428241:L428241:{c.instructions+=3;NFSU2_TR(0x428241);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B428242:{NFSU2_TR(0x428242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B428243:{NFSU2_TR(0x428243);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428250:L428250:{c.instructions+=1;NFSU2_TR(0x428250);
TAIL_STATIC(0x4269e0u,426);
}
B428260:L428260:{c.instructions+=8;NFSU2_TR(0x428260);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428261:{NFSU2_TR(0x428261);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428262:{NFSU2_TR(0x428262);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B428266:{NFSU2_TR(0x428266);
u8 U[4];
w4(U+0,u32(0x785b70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42826b:{NFSU2_TR(0x42826b);
__builtin_memmove((R+24),(R+4),4);
}
B42826d:{NFSU2_TR(0x42826d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42826f:{NFSU2_TR(0x42826f);
__builtin_memmove((R+4),(R+28),4);
}
B428271:{NFSU2_TR(0x428271);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428276ull));
TAIL_STATIC(0x578ce0u,578);
}
B428276:L428276:{c.instructions+=3;NFSU2_TR(0x428276);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428277:{NFSU2_TR(0x428277);
__builtin_memmove((R+4),(R+24),4);
}
B428279:{NFSU2_TR(0x428279);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42827eull));
TAIL_STATIC(0x404820u,404);
}
B42827e:L42827e:{c.instructions+=3;NFSU2_TR(0x42827e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42827f:{NFSU2_TR(0x42827f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B428282:{NFSU2_TR(0x428282);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428287ull));
TAIL_STATIC(0x413910u,413);
}
B428287:L428287:{c.instructions+=7;NFSU2_TR(0x428287);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428289:{NFSU2_TR(0x428289);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42828b:{NFSU2_TR(0x42828b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42828d:{NFSU2_TR(0x42828d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B428293:{NFSU2_TR(0x428293);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428294:{NFSU2_TR(0x428294);
__builtin_memmove((R+4),(R+28),4);
}
B428296:{NFSU2_TR(0x428296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42829bull));
TAIL_STATIC(0x571640u,571);
}
B42829b:L42829b:{c.instructions+=4;NFSU2_TR(0x42829b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ecull))));
__builtin_memmove((R+4),(U+0),4);
}
B4282a1:{NFSU2_TR(0x4282a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4282a2:{NFSU2_TR(0x4282a2);
__builtin_memmove((R+4),(R+28),4);
}
B4282a4:{NFSU2_TR(0x4282a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4282a9ull));
TAIL_STATIC(0x571710u,571);
}
B4282a9:L4282a9:{c.instructions+=4;NFSU2_TR(0x4282a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4282af:{NFSU2_TR(0x4282af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4282b0:{NFSU2_TR(0x4282b0);
__builtin_memmove((R+4),(R+28),4);
}
B4282b2:{NFSU2_TR(0x4282b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4282b7ull));
TAIL_STATIC(0x571770u,571);
}
B4282b7:L4282b7:{c.instructions+=4;NFSU2_TR(0x4282b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x778ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4282bd:{NFSU2_TR(0x4282bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4282be:{NFSU2_TR(0x4282be);
__builtin_memmove((R+4),(R+28),4);
}
B4282c0:{NFSU2_TR(0x4282c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4282c5ull));
TAIL_STATIC(0x571770u,571);
}
B4282c5:L4282c5:{c.instructions+=4;NFSU2_TR(0x4282c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4282cb:{NFSU2_TR(0x4282cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4282cc:{NFSU2_TR(0x4282cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4282cd:{NFSU2_TR(0x4282cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4282d2ull));
TAIL_STATIC(0x413960u,413);
}
B4282d2:L4282d2:{c.instructions+=4;NFSU2_TR(0x4282d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4282d8:{NFSU2_TR(0x4282d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4282d9:{NFSU2_TR(0x4282d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4282da:{NFSU2_TR(0x4282da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4282dfull));
TAIL_STATIC(0x4270e0u,427);
}
B4282df:L4282df:{c.instructions+=5;NFSU2_TR(0x4282df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4282e2:{NFSU2_TR(0x4282e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x700ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4282e8:{NFSU2_TR(0x4282e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4282e9:{NFSU2_TR(0x4282e9);
__builtin_memmove((R+4),(R+28),4);
}
B4282eb:{NFSU2_TR(0x4282eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4282f0ull));
TAIL_STATIC(0x571770u,571);
}
B4282f0:L4282f0:{c.instructions+=4;NFSU2_TR(0x4282f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x704ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4282f6:{NFSU2_TR(0x4282f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4282f7:{NFSU2_TR(0x4282f7);
__builtin_memmove((R+4),(R+28),4);
}
B4282f9:{NFSU2_TR(0x4282f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4282feull));
TAIL_STATIC(0x571770u,571);
}
B4282fe:L4282fe:{c.instructions+=4;NFSU2_TR(0x4282fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x72cull))));
__builtin_memmove((R+8),(U+0),4);
}
B428304:{NFSU2_TR(0x428304);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428305:{NFSU2_TR(0x428305);
__builtin_memmove((R+4),(R+28),4);
}
B428307:{NFSU2_TR(0x428307);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42830cull));
TAIL_STATIC(0x571770u,571);
}
B42830c:L42830c:{c.instructions+=4;NFSU2_TR(0x42830c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x730ull))));
__builtin_memmove((R+0),(U+0),4);
}
B428312:{NFSU2_TR(0x428312);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428313:{NFSU2_TR(0x428313);
__builtin_memmove((R+4),(R+28),4);
}
B428315:{NFSU2_TR(0x428315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42831aull));
TAIL_STATIC(0x571770u,571);
}
B42831a:L42831a:{c.instructions+=4;NFSU2_TR(0x42831a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x734ull))));
__builtin_memmove((R+4),(U+0),4);
}
B428320:{NFSU2_TR(0x428320);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428321:{NFSU2_TR(0x428321);
__builtin_memmove((R+4),(R+28),4);
}
B428323:{NFSU2_TR(0x428323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428328ull));
TAIL_STATIC(0x571770u,571);
}
B428328:L428328:{c.instructions+=4;NFSU2_TR(0x428328);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x738ull))));
__builtin_memmove((R+8),(U+0),4);
}
B42832e:{NFSU2_TR(0x42832e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42832f:{NFSU2_TR(0x42832f);
__builtin_memmove((R+4),(R+28),4);
}
B428331:{NFSU2_TR(0x428331);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428336ull));
TAIL_STATIC(0x571770u,571);
}
B428336:L428336:{c.instructions+=5;NFSU2_TR(0x428336);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x73cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42833c:{NFSU2_TR(0x42833c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42833f:{NFSU2_TR(0x42833f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428340:{NFSU2_TR(0x428340);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428341:{NFSU2_TR(0x428341);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428346ull));
TAIL_STATIC(0x57b980u,57b);
}
B428346:L428346:{c.instructions+=3;NFSU2_TR(0x428346);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x758ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42834c:{NFSU2_TR(0x42834c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42834e:{NFSU2_TR(0x42834e);
if(r1(R+518)){{goto L42835a;}}
}
B428350:L428350:{c.instructions+=4;NFSU2_TR(0x428350);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B428353:{NFSU2_TR(0x428353);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428354:{NFSU2_TR(0x428354);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428355:{NFSU2_TR(0x428355);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42835aull));
TAIL_STATIC(0x57b980u,57b);
}
B42835a:L42835a:{c.instructions+=4;NFSU2_TR(0x42835a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70cull))));
__builtin_memmove((R+0),(U+0),4);
}
B428360:{NFSU2_TR(0x428360);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428361:{NFSU2_TR(0x428361);
__builtin_memmove((R+4),(R+28),4);
}
B428363:{NFSU2_TR(0x428363);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428368ull));
TAIL_STATIC(0x571770u,571);
}
B428368:L428368:{c.instructions+=4;NFSU2_TR(0x428368);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x748ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42836e:{NFSU2_TR(0x42836e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B428370:{NFSU2_TR(0x428370);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B428375:{NFSU2_TR(0x428375);
if(r1(R+518)){{goto L42837e;}}
}
B428377:L428377:{c.instructions+=2;NFSU2_TR(0x428377);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42837a:{NFSU2_TR(0x42837a);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42837e:L42837e:{c.instructions+=4;NFSU2_TR(0x42837e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B428382:{NFSU2_TR(0x428382);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428383:{NFSU2_TR(0x428383);
__builtin_memmove((R+4),(R+28),4);
}
B428385:{NFSU2_TR(0x428385);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42838aull));
TAIL_STATIC(0x5716c0u,571);
}
B42838a:L42838a:{c.instructions+=3;NFSU2_TR(0x42838a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42838d:{NFSU2_TR(0x42838d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42838f:{NFSU2_TR(0x42838f);
if(r1(R+518)){{goto L4283b5;}}
}
B428391:L428391:{c.instructions+=3;NFSU2_TR(0x428391);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B428395:{NFSU2_TR(0x428395);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B428397:{NFSU2_TR(0x428397);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4283ab;}}
}
B428399:L428399:{c.instructions+=4;NFSU2_TR(0x428399);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B42839c:{NFSU2_TR(0x42839c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4283a3:{NFSU2_TR(0x4283a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x748ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4283a9:{NFSU2_TR(0x4283a9);
{goto L4283b5;}
}
B4283ab:L4283ab:{c.instructions+=1;NFSU2_TR(0x4283ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x748ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4283b5:L4283b5:{c.instructions+=4;NFSU2_TR(0x4283b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4283bb:{NFSU2_TR(0x4283bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4283bc:{NFSU2_TR(0x4283bc);
__builtin_memmove((R+4),(R+28),4);
}
B4283be:{NFSU2_TR(0x4283be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4283c3ull));
TAIL_STATIC(0x571770u,571);
}
B4283c3:L4283c3:{c.instructions+=7;NFSU2_TR(0x4283c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4283c5:{NFSU2_TR(0x4283c5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4283c7:{NFSU2_TR(0x4283c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4283c9:{NFSU2_TR(0x4283c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x744ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4283cf:{NFSU2_TR(0x4283cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4283d0:{NFSU2_TR(0x4283d0);
__builtin_memmove((R+4),(R+28),4);
}
B4283d2:{NFSU2_TR(0x4283d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4283d7ull));
TAIL_STATIC(0x571640u,571);
}
B4283d7:L4283d7:{c.instructions+=4;NFSU2_TR(0x4283d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x750ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4283dd:{NFSU2_TR(0x4283dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4283de:{NFSU2_TR(0x4283de);
__builtin_memmove((R+4),(R+28),4);
}
B4283e0:{NFSU2_TR(0x4283e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4283e5ull));
TAIL_STATIC(0x571770u,571);
}
B4283e5:L4283e5:{c.instructions+=4;NFSU2_TR(0x4283e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x754ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4283eb:{NFSU2_TR(0x4283eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4283ec:{NFSU2_TR(0x4283ec);
__builtin_memmove((R+4),(R+28),4);
}
B4283ee:{NFSU2_TR(0x4283ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4283f3ull));
TAIL_STATIC(0x571770u,571);
}
B4283f3:L4283f3:{c.instructions+=4;NFSU2_TR(0x4283f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x708ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4283f9:{NFSU2_TR(0x4283f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4283fa:{NFSU2_TR(0x4283fa);
__builtin_memmove((R+4),(R+28),4);
}
B4283fc:{NFSU2_TR(0x4283fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428401ull));
TAIL_STATIC(0x571770u,571);
}
B428401:L428401:{c.instructions+=4;NFSU2_TR(0x428401);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x75cull))));
__builtin_memmove((R+4),(U+0),4);
}
B428407:{NFSU2_TR(0x428407);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428408:{NFSU2_TR(0x428408);
__builtin_memmove((R+4),(R+28),4);
}
B42840a:{NFSU2_TR(0x42840a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42840full));
TAIL_STATIC(0x571770u,571);
}
B42840f:L42840f:{c.instructions+=3;NFSU2_TR(0x42840f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428410:{NFSU2_TR(0x428410);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x760ull))));
__builtin_memmove((R+4),(U+0),4);
}
B428416:{NFSU2_TR(0x428416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42841bull));
TAIL_STATIC(0x405350u,405);
}
B42841b:L42841b:{c.instructions+=7;NFSU2_TR(0x42841b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42841d:{NFSU2_TR(0x42841d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42841f:{NFSU2_TR(0x42841f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428421:{NFSU2_TR(0x428421);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
__builtin_memmove((R+8),(U+0),4);
}
B428427:{NFSU2_TR(0x428427);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428428:{NFSU2_TR(0x428428);
__builtin_memmove((R+4),(R+28),4);
}
B42842a:{NFSU2_TR(0x42842a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42842full));
TAIL_STATIC(0x571640u,571);
}
B42842f:L42842f:{c.instructions+=4;NFSU2_TR(0x42842f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x770ull))));
__builtin_memmove((R+0),(U+0),4);
}
B428435:{NFSU2_TR(0x428435);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428436:{NFSU2_TR(0x428436);
__builtin_memmove((R+4),(R+28),4);
}
B428438:{NFSU2_TR(0x428438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42843dull));
TAIL_STATIC(0x571770u,571);
}
B42843d:L42843d:{c.instructions+=4;NFSU2_TR(0x42843d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x790ull))));
__builtin_memmove((R+4),(U+0),4);
}
B428443:{NFSU2_TR(0x428443);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428444:{NFSU2_TR(0x428444);
__builtin_memmove((R+4),(R+28),4);
}
B428446:{NFSU2_TR(0x428446);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42844bull));
TAIL_STATIC(0x571770u,571);
}
B42844b:L42844b:{c.instructions+=4;NFSU2_TR(0x42844b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x794ull))));
__builtin_memmove((R+8),(U+0),4);
}
B428451:{NFSU2_TR(0x428451);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428452:{NFSU2_TR(0x428452);
__builtin_memmove((R+4),(R+28),4);
}
B428454:{NFSU2_TR(0x428454);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428459ull));
TAIL_STATIC(0x571770u,571);
}
B428459:L428459:{c.instructions+=4;NFSU2_TR(0x428459);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71cull))));
__builtin_memmove((R+0),(U+0),4);
}
B42845f:{NFSU2_TR(0x42845f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428460:{NFSU2_TR(0x428460);
__builtin_memmove((R+4),(R+28),4);
}
B428462:{NFSU2_TR(0x428462);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428467ull));
TAIL_STATIC(0x571770u,571);
}
B428467:L428467:{c.instructions+=7;NFSU2_TR(0x428467);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428469:{NFSU2_TR(0x428469);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42846b:{NFSU2_TR(0x42846b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42846d:{NFSU2_TR(0x42846d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x774ull))));
}
B428473:{NFSU2_TR(0x428473);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428474:{NFSU2_TR(0x428474);
__builtin_memmove((R+4),(R+28),4);
}
B428476:{NFSU2_TR(0x428476);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42847bull));
TAIL_STATIC(0x571640u,571);
}
B42847b:L42847b:{c.instructions+=2;NFSU2_TR(0x42847b);
__builtin_memmove((R+4),(R+28),4);
}
B42847d:{NFSU2_TR(0x42847d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428482ull));
TAIL_STATIC(0x578d90u,578);
}
B428482:L428482:{c.instructions+=3;NFSU2_TR(0x428482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428483:{NFSU2_TR(0x428483);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B428484:{NFSU2_TR(0x428484);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428490:L428490:{c.instructions+=7;NFSU2_TR(0x428490);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428491:{NFSU2_TR(0x428491);
__builtin_memmove((R+24),(R+4),4);
}
B428493:{NFSU2_TR(0x428493);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428499:{NFSU2_TR(0x428499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42849b:{NFSU2_TR(0x42849b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B42849d:{NFSU2_TR(0x42849d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42849e:{NFSU2_TR(0x42849e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4284ac;}}
}
B4284a0:L4284a0:{c.instructions+=2;NFSU2_TR(0x4284a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4284a3:{NFSU2_TR(0x4284a3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4284b1;}}
}
B4284a5:L4284a5:{c.instructions+=2;NFSU2_TR(0x4284a5);
w4(R+28,u32(0x1ull));
}
B4284aa:{NFSU2_TR(0x4284aa);
{goto L4284bf;}
}
B4284ac:L4284ac:{c.instructions+=2;NFSU2_TR(0x4284ac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4284af:{NFSU2_TR(0x4284af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4284bd;}}
}
B4284b1:L4284b1:{c.instructions+=2;NFSU2_TR(0x4284b1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4284b4:{NFSU2_TR(0x4284b4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4284bd;}}
}
B4284b6:L4284b6:{c.instructions+=2;NFSU2_TR(0x4284b6);
w4(R+28,u32(0x2ull));
}
B4284bb:{NFSU2_TR(0x4284bb);
{goto L4284bf;}
}
B4284bd:L4284bd:{c.instructions+=1;NFSU2_TR(0x4284bd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4284bf:L4284bf:{c.instructions+=3;NFSU2_TR(0x4284bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4284c5:{NFSU2_TR(0x4284c5);
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
B4284c7:{NFSU2_TR(0x4284c7);
if(r1(R+518)){{goto L4284d4;}}
}
B4284c9:L4284c9:{c.instructions+=4;NFSU2_TR(0x4284c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4284cc:{NFSU2_TR(0x4284cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4284ce:{NFSU2_TR(0x4284ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4284cf:{NFSU2_TR(0x4284cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4284d2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4284d2:L4284d2:{c.instructions+=1;NFSU2_TR(0x4284d2);
{goto L4284d6;}
}
B4284d4:L4284d4:{c.instructions+=1;NFSU2_TR(0x4284d4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4284d6:L4284d6:{c.instructions+=2;NFSU2_TR(0x4284d6);
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
B4284d8:{NFSU2_TR(0x4284d8);
if(r1(R+518)){{goto L428509;}}
}
B4284da:L4284da:{c.instructions+=3;NFSU2_TR(0x4284da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4284e0:{NFSU2_TR(0x4284e0);
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
B4284e2:{NFSU2_TR(0x4284e2);
if(r1(R+518)){{goto L4284ef;}}
}
B4284e4:L4284e4:{c.instructions+=4;NFSU2_TR(0x4284e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4284e7:{NFSU2_TR(0x4284e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4284e9:{NFSU2_TR(0x4284e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4284ea:{NFSU2_TR(0x4284ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4284edull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4284ed:L4284ed:{c.instructions+=1;NFSU2_TR(0x4284ed);
{goto L4284f1;}
}
B4284ef:L4284ef:{c.instructions+=1;NFSU2_TR(0x4284ef);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4284f1:L4284f1:{c.instructions+=2;NFSU2_TR(0x4284f1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4284f2:{NFSU2_TR(0x4284f2);
if(r1(R+518)){{goto L428500;}}
}
B4284f4:L4284f4:{c.instructions+=2;NFSU2_TR(0x4284f4);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4284f5:{NFSU2_TR(0x4284f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428509;}}
}
B4284f7:L4284f7:{c.instructions+=4;NFSU2_TR(0x4284f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4284f8:{NFSU2_TR(0x4284f8);
__builtin_memmove((R+4),(R+24),4);
}
B4284fa:{NFSU2_TR(0x4284fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4284fb:{NFSU2_TR(0x4284fb);
TAIL_STATIC(0x4233e0u,423);
}
B428500:L428500:{c.instructions+=4;NFSU2_TR(0x428500);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428501:{NFSU2_TR(0x428501);
__builtin_memmove((R+4),(R+24),4);
}
B428503:{NFSU2_TR(0x428503);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B428504:{NFSU2_TR(0x428504);
TAIL_STATIC(0x413860u,413);
}
B428509:L428509:{c.instructions+=3;NFSU2_TR(0x428509);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42850a:{NFSU2_TR(0x42850a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42850b:{NFSU2_TR(0x42850b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428510:L428510:{c.instructions+=5;NFSU2_TR(0x428510);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428511:{NFSU2_TR(0x428511);
__builtin_memmove((R+28),(R+4),4);
}
B428513:{NFSU2_TR(0x428513);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428519:{NFSU2_TR(0x428519);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42851b:{NFSU2_TR(0x42851b);
if(r1(R+518)){{goto L428535;}}
}
B42851d:L42851d:{c.instructions+=2;NFSU2_TR(0x42851d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B428521:{NFSU2_TR(0x428521);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428535;}}
}
B428523:L428523:{c.instructions+=4;NFSU2_TR(0x428523);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428527:{NFSU2_TR(0x428527);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42852a:{NFSU2_TR(0x42852a);
__builtin_memmove((R+4),(R+28),4);
}
B42852c:{NFSU2_TR(0x42852c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428531ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428490u);}goto L428490;}
}
B428531:L428531:{c.instructions+=2;NFSU2_TR(0x428531);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428532:{NFSU2_TR(0x428532);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428535:L428535:{c.instructions+=3;NFSU2_TR(0x428535);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428536:{NFSU2_TR(0x428536);
__builtin_memmove((R+4),(R+28),4);
}
B428538:{NFSU2_TR(0x428538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42853dull));
TAIL_STATIC(0x402070u,402);
}
B42853d:L42853d:{c.instructions+=3;NFSU2_TR(0x42853d);
__builtin_memmove((R+8),gp(0x81cb70),4);
}
B428543:{NFSU2_TR(0x428543);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428544:{NFSU2_TR(0x428544);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428549ull));
TAIL_STATIC(0x440e50u,440);
}
B428549:L428549:{c.instructions+=4;NFSU2_TR(0x428549);
__builtin_memmove((R+24),(R+0),4);
}
B42854b:{NFSU2_TR(0x42854b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42854e:{NFSU2_TR(0x42854e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B428550:{NFSU2_TR(0x428550);
if(r1(R+518)){{goto L428584;}}
}
B428552:L428552:{c.instructions+=3;NFSU2_TR(0x428552);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428557:{NFSU2_TR(0x428557);
__builtin_memmove((R+4),(R+24),4);
}
B428559:{NFSU2_TR(0x428559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42855eull));
TAIL_STATIC(0x40c960u,40c);
}
B42855e:L42855e:{c.instructions+=8;NFSU2_TR(0x42855e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428562:{NFSU2_TR(0x428562);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B428569:{NFSU2_TR(0x428569);
u8 U[4];
w4(U+0,u32(0x784ba8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B42856f:{NFSU2_TR(0x42856f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428572:{NFSU2_TR(0x428572);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428578:{NFSU2_TR(0x428578);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B428579:{NFSU2_TR(0x428579);
__builtin_memmove((R+4),(R+28),4);
}
B42857b:{NFSU2_TR(0x42857b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428580ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428490u);}goto L428490;}
}
B428580:L428580:{c.instructions+=2;NFSU2_TR(0x428580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428581:{NFSU2_TR(0x428581);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428584:L428584:{c.instructions+=5;NFSU2_TR(0x428584);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B428586:{NFSU2_TR(0x428586);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42858c:{NFSU2_TR(0x42858c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42858d:{NFSU2_TR(0x42858d);
__builtin_memmove((R+4),(R+28),4);
}
B42858f:{NFSU2_TR(0x42858f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428594ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428490u);}goto L428490;}
}
B428594:L428594:{c.instructions+=2;NFSU2_TR(0x428594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428595:{NFSU2_TR(0x428595);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4285a0:L4285a0:{c.instructions+=5;NFSU2_TR(0x4285a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4285a1:{NFSU2_TR(0x4285a1);
__builtin_memmove((R+28),(R+4),4);
}
B4285a3:{NFSU2_TR(0x4285a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4285a9:{NFSU2_TR(0x4285a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4285ab:{NFSU2_TR(0x4285ab);
if(r1(R+518)){{goto L4285c5;}}
}
B4285ad:L4285ad:{c.instructions+=2;NFSU2_TR(0x4285ad);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4285b1:{NFSU2_TR(0x4285b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4285c5;}}
}
B4285b3:L4285b3:{c.instructions+=4;NFSU2_TR(0x4285b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4285b7:{NFSU2_TR(0x4285b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4285ba:{NFSU2_TR(0x4285ba);
__builtin_memmove((R+4),(R+28),4);
}
B4285bc:{NFSU2_TR(0x4285bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4285c1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428490u);}goto L428490;}
}
B4285c1:L4285c1:{c.instructions+=2;NFSU2_TR(0x4285c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4285c2:{NFSU2_TR(0x4285c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4285c5:L4285c5:{c.instructions+=3;NFSU2_TR(0x4285c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4285c6:{NFSU2_TR(0x4285c6);
__builtin_memmove((R+4),(R+28),4);
}
B4285c8:{NFSU2_TR(0x4285c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4285cdull));
TAIL_STATIC(0x402070u,402);
}
B4285cd:L4285cd:{c.instructions+=3;NFSU2_TR(0x4285cd);
__builtin_memmove((R+8),gp(0x81cb70),4);
}
B4285d3:{NFSU2_TR(0x4285d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4285d4:{NFSU2_TR(0x4285d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4285d9ull));
TAIL_STATIC(0x440e50u,440);
}
B4285d9:L4285d9:{c.instructions+=4;NFSU2_TR(0x4285d9);
__builtin_memmove((R+24),(R+0),4);
}
B4285db:{NFSU2_TR(0x4285db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4285de:{NFSU2_TR(0x4285de);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4285e0:{NFSU2_TR(0x4285e0);
if(r1(R+518)){{goto L428614;}}
}
B4285e2:L4285e2:{c.instructions+=3;NFSU2_TR(0x4285e2);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4285e7:{NFSU2_TR(0x4285e7);
__builtin_memmove((R+4),(R+24),4);
}
B4285e9:{NFSU2_TR(0x4285e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4285eeull));
TAIL_STATIC(0x40c960u,40c);
}
B4285ee:L4285ee:{c.instructions+=8;NFSU2_TR(0x4285ee);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4285f2:{NFSU2_TR(0x4285f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4285f9:{NFSU2_TR(0x4285f9);
u8 U[4];
w4(U+0,u32(0x784b58ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4285ff:{NFSU2_TR(0x4285ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428602:{NFSU2_TR(0x428602);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428608:{NFSU2_TR(0x428608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B428609:{NFSU2_TR(0x428609);
__builtin_memmove((R+4),(R+28),4);
}
B42860b:{NFSU2_TR(0x42860b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428610ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428490u);}goto L428490;}
}
B428610:L428610:{c.instructions+=2;NFSU2_TR(0x428610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428611:{NFSU2_TR(0x428611);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428614:L428614:{c.instructions+=5;NFSU2_TR(0x428614);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B428616:{NFSU2_TR(0x428616);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42861c:{NFSU2_TR(0x42861c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42861d:{NFSU2_TR(0x42861d);
__builtin_memmove((R+4),(R+28),4);
}
B42861f:{NFSU2_TR(0x42861f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428624ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428490u);}goto L428490;}
}
B428624:L428624:{c.instructions+=2;NFSU2_TR(0x428624);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428625:{NFSU2_TR(0x428625);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428630:L428630:{c.instructions+=7;NFSU2_TR(0x428630);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428631:{NFSU2_TR(0x428631);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428632:{NFSU2_TR(0x428632);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428633:{NFSU2_TR(0x428633);
__builtin_memmove((R+28),(R+4),4);
}
B428635:{NFSU2_TR(0x428635);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42863b:{NFSU2_TR(0x42863b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42863d:{NFSU2_TR(0x42863d);
if(r1(R+518)){{goto L4286bc;}}
}
B42863f:L42863f:{c.instructions+=2;NFSU2_TR(0x42863f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B428643:{NFSU2_TR(0x428643);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4286bc;}}
}
B428645:L428645:{c.instructions+=12;NFSU2_TR(0x428645);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428649:{NFSU2_TR(0x428649);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42864d:{NFSU2_TR(0x42864d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B428651:{NFSU2_TR(0x428651);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428654:{NFSU2_TR(0x428654);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428657:{NFSU2_TR(0x428657);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42865a:{NFSU2_TR(0x42865a);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B428660:{NFSU2_TR(0x428660);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B428666:{NFSU2_TR(0x428666);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42866a:{NFSU2_TR(0x42866a);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B428670:{NFSU2_TR(0x428670);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B428676:{NFSU2_TR(0x428676);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42867bull));
TAIL_STATIC(0x75bed4u,75b);
}
B42867b:L42867b:{c.instructions+=4;NFSU2_TR(0x42867b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42867e:{NFSU2_TR(0x42867e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428684:{NFSU2_TR(0x428684);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B428686:{NFSU2_TR(0x428686);
if(r1(R+518)){{goto L428711;}}
}
B42868c:L42868c:{c.instructions+=2;NFSU2_TR(0x42868c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B428693:{NFSU2_TR(0x428693);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428711;}}
}
B428695:L428695:{c.instructions+=7;NFSU2_TR(0x428695);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428699:{NFSU2_TR(0x428699);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42869d:{NFSU2_TR(0x42869d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4286a3:{NFSU2_TR(0x4286a3);
__builtin_memmove((R+4),(R+28),4);
}
B4286a5:{NFSU2_TR(0x4286a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4286ab:{NFSU2_TR(0x4286ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4286b1:{NFSU2_TR(0x4286b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4286b6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428490u);}goto L428490;}
}
B4286b6:L4286b6:{c.instructions+=4;NFSU2_TR(0x4286b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4286b7:{NFSU2_TR(0x4286b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4286b8:{NFSU2_TR(0x4286b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4286b9:{NFSU2_TR(0x4286b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4286bc:L4286bc:{c.instructions+=2;NFSU2_TR(0x4286bc);
__builtin_memmove((R+4),(R+28),4);
}
B4286be:{NFSU2_TR(0x4286be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4286c3ull));
TAIL_STATIC(0x402070u,402);
}
B4286c3:L4286c3:{c.instructions+=3;NFSU2_TR(0x4286c3);
__builtin_memmove((R+8),gp(0x81cb70),4);
}
B4286c9:{NFSU2_TR(0x4286c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4286ca:{NFSU2_TR(0x4286ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4286cfull));
TAIL_STATIC(0x440e50u,440);
}
B4286cf:L4286cf:{c.instructions+=3;NFSU2_TR(0x4286cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4286d2:{NFSU2_TR(0x4286d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4286d4:{NFSU2_TR(0x4286d4);
if(r1(R+518)){{goto L428709;}}
}
B4286d6:L4286d6:{c.instructions+=11;NFSU2_TR(0x4286d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4286da:{NFSU2_TR(0x4286da);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4286de:{NFSU2_TR(0x4286de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4286df:{NFSU2_TR(0x4286df);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4286e3:{NFSU2_TR(0x4286e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4286e4:{NFSU2_TR(0x4286e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4286e8:{NFSU2_TR(0x4286e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4286e9:{NFSU2_TR(0x4286e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4286ea:{NFSU2_TR(0x4286ea);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4286ef:{NFSU2_TR(0x4286ef);
__builtin_memmove((R+4),(R+0),4);
}
B4286f1:{NFSU2_TR(0x4286f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4286f6ull));
TAIL_STATIC(0x40dba0u,40d);
}
B4286f6:L4286f6:{c.instructions+=3;NFSU2_TR(0x4286f6);
__builtin_memmove((R+4),(R+28),4);
}
B4286f8:{NFSU2_TR(0x4286f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4286fe:{NFSU2_TR(0x4286fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428703ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428490u);}goto L428490;}
}
B428703:L428703:{c.instructions+=4;NFSU2_TR(0x428703);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428704:{NFSU2_TR(0x428704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B428705:{NFSU2_TR(0x428705);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B428706:{NFSU2_TR(0x428706);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428709:L428709:{c.instructions+=2;NFSU2_TR(0x428709);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42870b:{NFSU2_TR(0x42870b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428711:L428711:{c.instructions+=2;NFSU2_TR(0x428711);
__builtin_memmove((R+4),(R+28),4);
}
B428713:{NFSU2_TR(0x428713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428718ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428490u);}goto L428490;}
}
B428718:L428718:{c.instructions+=4;NFSU2_TR(0x428718);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428719:{NFSU2_TR(0x428719);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42871a:{NFSU2_TR(0x42871a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42871b:{NFSU2_TR(0x42871b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428720:L428720:{c.instructions+=13;NFSU2_TR(0x428720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B428723:{NFSU2_TR(0x428723);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428724:{NFSU2_TR(0x428724);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428725:{NFSU2_TR(0x428725);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428726:{NFSU2_TR(0x428726);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428727:{NFSU2_TR(0x428727);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42872b:{NFSU2_TR(0x42872b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42872e:{NFSU2_TR(0x42872e);
__builtin_memmove((R+12),(R+4),4);
}
B428730:{NFSU2_TR(0x428730);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428734:{NFSU2_TR(0x428734);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428738:{NFSU2_TR(0x428738);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42873d:{NFSU2_TR(0x42873d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x60ull))));
}
B428740:{NFSU2_TR(0x428740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428745ull));
TAIL_STATIC(0x60c1a0u,60c);
}
B428745:L428745:{c.instructions+=14;NFSU2_TR(0x428745);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B428747:{NFSU2_TR(0x428747);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42874d:{NFSU2_TR(0x42874d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B42874f:{NFSU2_TR(0x42874f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B428752:{NFSU2_TR(0x428752);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B428756:{NFSU2_TR(0x428756);
__builtin_memmove((R+4),(R+518),1);
}
B428759:{NFSU2_TR(0x428759);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B42875c:{NFSU2_TR(0x42875c);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B428761:{NFSU2_TR(0x428761);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B428762:{NFSU2_TR(0x428762);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B428764:{NFSU2_TR(0x428764);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x320ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42876a:{NFSU2_TR(0x42876a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42876c:{NFSU2_TR(0x42876c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428770:{NFSU2_TR(0x428770);
if(r1(R+518)){{goto L428893;}}
}
B428776:L428776:{c.instructions+=11;NFSU2_TR(0x428776);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428777:{NFSU2_TR(0x428777);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42877b:{NFSU2_TR(0x42877b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42877c:{NFSU2_TR(0x42877c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B428780:{NFSU2_TR(0x428780);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428781:{NFSU2_TR(0x428781);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x31cull))));
__builtin_memmove((R+28),(U+0),4);
}
B428787:{NFSU2_TR(0x428787);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428788:{NFSU2_TR(0x428788);
__builtin_memmove((R+4),(R+28),4);
}
B42878a:{NFSU2_TR(0x42878a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B428792:{NFSU2_TR(0x428792);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42879a:{NFSU2_TR(0x42879a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42879full));
TAIL_STATIC(0x419b20u,419);
}
B42879f:L42879f:{c.instructions+=7;NFSU2_TR(0x42879f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4287a3:{NFSU2_TR(0x4287a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4287a5:{NFSU2_TR(0x4287a5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4287a7:{NFSU2_TR(0x4287a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4287a9:{NFSU2_TR(0x4287a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4287aa:{NFSU2_TR(0x4287aa);
__builtin_memmove((R+4),(R+28),4);
}
B4287ac:{NFSU2_TR(0x4287ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4287b1ull));
TAIL_STATIC(0x40ab10u,40a);
}
B4287b1:L4287b1:{c.instructions+=4;NFSU2_TR(0x4287b1);
__builtin_memmove((R+24),(R+0),4);
}
B4287b3:{NFSU2_TR(0x4287b3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4287b6:{NFSU2_TR(0x4287b6);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B4287bd:{NFSU2_TR(0x4287bd);
if(r1(R+518)){{goto L428963;}}
}
B4287c3:L4287c3:{c.instructions+=3;NFSU2_TR(0x4287c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4287c6:{NFSU2_TR(0x4287c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4287c8:{NFSU2_TR(0x4287c8);
if(r1(R+518)){{goto L4287d2;}}
}
B4287ca:L4287ca:{c.instructions+=3;NFSU2_TR(0x4287ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4287cd:{NFSU2_TR(0x4287cd);
{u32 ea_=u32(r4(R+8)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4287d0:{NFSU2_TR(0x4287d0);
{goto L4287d8;}
}
B4287d2:L4287d2:{c.instructions+=1;NFSU2_TR(0x4287d2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4287d8:L4287d8:{c.instructions+=8;NFSU2_TR(0x4287d8);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4287de:{NFSU2_TR(0x4287de);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B4287e0:{NFSU2_TR(0x4287e0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4287e4:{NFSU2_TR(0x4287e4);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B4287e6:{NFSU2_TR(0x4287e6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4287e8:{NFSU2_TR(0x4287e8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4287ea:{NFSU2_TR(0x4287ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4287ed:{NFSU2_TR(0x4287ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428963;}}
}
B4287f3:L4287f3:{c.instructions+=3;NFSU2_TR(0x4287f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4287f6:{NFSU2_TR(0x4287f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4287f8:{NFSU2_TR(0x4287f8);
if(r1(R+518)){{goto L428803;}}
}
B4287fa:L4287fa:{c.instructions+=3;NFSU2_TR(0x4287fa);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4287fe:{NFSU2_TR(0x4287fe);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B428801:{NFSU2_TR(0x428801);
{goto L428809;}
}
B428803:L428803:{c.instructions+=1;NFSU2_TR(0x428803);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B428809:L428809:{c.instructions+=6;NFSU2_TR(0x428809);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42880d:{NFSU2_TR(0x42880d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B42880f:{NFSU2_TR(0x42880f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B428811:{NFSU2_TR(0x428811);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B428813:{NFSU2_TR(0x428813);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B428816:{NFSU2_TR(0x428816);
if(r1(R+514)){{goto L428963;}}
}
B42881c:L42881c:{c.instructions+=6;NFSU2_TR(0x42881c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428820:{NFSU2_TR(0x428820);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B428824:{NFSU2_TR(0x428824);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428825:{NFSU2_TR(0x428825);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428826:{NFSU2_TR(0x428826);
__builtin_memmove((R+4),(R+20),4);
}
B428828:{NFSU2_TR(0x428828);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42882dull));
TAIL_STATIC(0x40ada0u,40a);
}
B42882d:L42882d:{c.instructions+=4;NFSU2_TR(0x42882d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B428831:{NFSU2_TR(0x428831);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B428833:{NFSU2_TR(0x428833);
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
B428836:{NFSU2_TR(0x428836);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42884c;}}
}
B428838:L428838:{c.instructions+=3;NFSU2_TR(0x428838);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42883c:{NFSU2_TR(0x42883c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42883e:{NFSU2_TR(0x42883e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428844ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B428844:L428844:{c.instructions+=2;NFSU2_TR(0x428844);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428846:{NFSU2_TR(0x428846);
if(r1(R+518)){{goto L428963;}}
}
B42884c:L42884c:{c.instructions+=5;NFSU2_TR(0x42884c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428850:{NFSU2_TR(0x428850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B428852:{NFSU2_TR(0x428852);
__builtin_memmove((R+4),(R+20),4);
}
B428854:{NFSU2_TR(0x428854);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428858:{NFSU2_TR(0x428858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42885dull));
TAIL_STATIC(0x401ed0u,401);
}
B42885d:L42885d:{c.instructions+=5;NFSU2_TR(0x42885d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B428861:{NFSU2_TR(0x428861);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428862:{NFSU2_TR(0x428862);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428866:{NFSU2_TR(0x428866);
__builtin_memmove((R+4),(R+12),4);
}
B428868:{NFSU2_TR(0x428868);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42886bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42886b:L42886b:{c.instructions+=5;NFSU2_TR(0x42886b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42886c:{NFSU2_TR(0x42886c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42886d:{NFSU2_TR(0x42886d);
__builtin_memmove((R+4),(R+28),4);
}
B42886f:{NFSU2_TR(0x42886f);
u8 U[5];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B428874:{NFSU2_TR(0x428874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428879ull));
TAIL_STATIC(0x4120c0u,412);
}
B428879:L428879:{c.instructions+=3;NFSU2_TR(0x428879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42887c:{NFSU2_TR(0x42887c);
__builtin_memmove((R+4),(R+20),4);
}
B42887e:{NFSU2_TR(0x42887e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428881ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B428881:L428881:{c.instructions+=6;NFSU2_TR(0x428881);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B428883:{NFSU2_TR(0x428883);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B428885:{NFSU2_TR(0x428885);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B428887:{NFSU2_TR(0x428887);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42888a:{NFSU2_TR(0x42888a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42888e:{NFSU2_TR(0x42888e);
{goto L428963;}
}
B428893:L428893:{c.instructions+=3;NFSU2_TR(0x428893);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B428896:{NFSU2_TR(0x428896);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B428898:{NFSU2_TR(0x428898);
if(r1(R+518)){{goto L428963;}}
}
B42889e:L42889e:{c.instructions+=33;NFSU2_TR(0x42889e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4288a2:{NFSU2_TR(0x4288a2);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4288a6:{NFSU2_TR(0x4288a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4288aa:{NFSU2_TR(0x4288aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4288ab:{NFSU2_TR(0x4288ab);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4288af:{NFSU2_TR(0x4288af);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4288b3:{NFSU2_TR(0x4288b3);
__builtin_memmove((R+4),(R+28),4);
}
B4288b5:{NFSU2_TR(0x4288b5);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4288bb:{NFSU2_TR(0x4288bb);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4288bf:{NFSU2_TR(0x4288bf);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4288c3:{NFSU2_TR(0x4288c3);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4288c9:{NFSU2_TR(0x4288c9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4288cb:{NFSU2_TR(0x4288cb);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4288ce:{NFSU2_TR(0x4288ce);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4288d1:{NFSU2_TR(0x4288d1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4288d5:{NFSU2_TR(0x4288d5);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4288d8:{NFSU2_TR(0x4288d8);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4288da:{NFSU2_TR(0x4288da);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4288de:{NFSU2_TR(0x4288de);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4288e2:{NFSU2_TR(0x4288e2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4288e4:{NFSU2_TR(0x4288e4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4288e8:{NFSU2_TR(0x4288e8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4288ec:{NFSU2_TR(0x4288ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4288ee:{NFSU2_TR(0x4288ee);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4288f2:{NFSU2_TR(0x4288f2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4288f4:{NFSU2_TR(0x4288f4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4288f6:{NFSU2_TR(0x4288f6);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4288fa:{NFSU2_TR(0x4288fa);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4288fe:{NFSU2_TR(0x4288fe);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B428902:{NFSU2_TR(0x428902);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B428906:{NFSU2_TR(0x428906);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B428908:{NFSU2_TR(0x428908);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42890b:{NFSU2_TR(0x42890b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428910ull));
TAIL_STATIC(0x401b70u,401);
}
B428910:L428910:{c.instructions+=4;NFSU2_TR(0x428910);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B428914:{NFSU2_TR(0x428914);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B428916:{NFSU2_TR(0x428916);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B428919:{NFSU2_TR(0x428919);
if(r1(R+514)){{goto L428963;}}
}
B42891b:L42891b:{c.instructions+=2;NFSU2_TR(0x42891b);
__builtin_memmove((R+4),(R+28),4);
}
B42891d:{NFSU2_TR(0x42891d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428922ull));
TAIL_STATIC(0x40ccc0u,40c);
}
B428922:L428922:{c.instructions+=14;NFSU2_TR(0x428922);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B428924:{NFSU2_TR(0x428924);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B428928:{NFSU2_TR(0x428928);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42892c:{NFSU2_TR(0x42892c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428930:{NFSU2_TR(0x428930);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B428933:{NFSU2_TR(0x428933);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428937:{NFSU2_TR(0x428937);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428938:{NFSU2_TR(0x428938);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42893c:{NFSU2_TR(0x42893c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B428940:{NFSU2_TR(0x428940);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B428946:{NFSU2_TR(0x428946);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B428949:{NFSU2_TR(0x428949);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42894a:{NFSU2_TR(0x42894a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42894b:{NFSU2_TR(0x42894b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428950ull));
TAIL_STATIC(0x401090u,401);
}
B428950:L428950:{c.instructions+=5;NFSU2_TR(0x428950);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B428954:{NFSU2_TR(0x428954);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B428957:{NFSU2_TR(0x428957);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B428959:{NFSU2_TR(0x428959);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42895c:{NFSU2_TR(0x42895c);
if(r1(R+514)){{goto L428963;}}
}
B42895e:L42895e:{c.instructions+=1;NFSU2_TR(0x42895e);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B428963:L428963:{c.instructions+=5;NFSU2_TR(0x428963);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B428967:{NFSU2_TR(0x428967);
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
B428969:{NFSU2_TR(0x428969);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42896d:{NFSU2_TR(0x42896d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B428971:{NFSU2_TR(0x428971);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428984;}}
}
B428973:L428973:{c.instructions+=5;NFSU2_TR(0x428973);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B428975:{NFSU2_TR(0x428975);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428977:{NFSU2_TR(0x428977);
__builtin_memmove((R+4),(R+24),4);
}
B428979:{NFSU2_TR(0x428979);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B428981:{NFSU2_TR(0x428981);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428984ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B428984:L428984:{c.instructions+=3;NFSU2_TR(0x428984);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428987:{NFSU2_TR(0x428987);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B428989:{NFSU2_TR(0x428989);
if(r1(R+518)){{goto L428c47;}}
}
B42898f:L42898f:{c.instructions+=3;NFSU2_TR(0x42898f);
__builtin_memmove((R+4),gp(0x8650b0),4);
}
B428995:{NFSU2_TR(0x428995);
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
B428997:{NFSU2_TR(0x428997);
if(r1(R+518)){{goto L4289e4;}}
}
B428999:L428999:{c.instructions+=7;NFSU2_TR(0x428999);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42899c:{NFSU2_TR(0x42899c);
__builtin_memmove((R+28),gp(0x81cb78),4);
}
B4289a2:{NFSU2_TR(0x4289a2);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B4289a4:{NFSU2_TR(0x4289a4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ffull))));
}
B4289aa:{NFSU2_TR(0x4289aa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4289ac:{NFSU2_TR(0x4289ac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4289ae:{NFSU2_TR(0x4289ae);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4289ce;}}
}
B4289b0:L4289b0:{c.instructions+=1;NFSU2_TR(0x4289b0);
__builtin_memmove((R+20),gp(0x81cb7c),4);
}
B4289b6:L4289b6:{c.instructions+=2;NFSU2_TR(0x4289b6);
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
B4289b8:{NFSU2_TR(0x4289b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4289e0;}}
}
B4289ba:L4289ba:{c.instructions+=5;NFSU2_TR(0x4289ba);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+4))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B4289be:{NFSU2_TR(0x4289be);
__builtin_memmove((R+8),(R+518),1);
}
B4289c1:{NFSU2_TR(0x4289c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4289c2:{NFSU2_TR(0x4289c2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4289c4:{NFSU2_TR(0x4289c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4289b6u);}goto L4289b6;}}
}
B4289c6:L4289c6:{c.instructions+=2;NFSU2_TR(0x4289c6);
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
B4289c8:{NFSU2_TR(0x4289c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4289e0;}}
}
B4289ca:L4289ca:{c.instructions+=1;NFSU2_TR(0x4289ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4289ce:L4289ce:{c.instructions+=4;NFSU2_TR(0x4289ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4289d2:{NFSU2_TR(0x4289d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4289d5:{NFSU2_TR(0x4289d5);
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
B4289d7:{NFSU2_TR(0x4289d7);
if(r1(R+518)){{goto L4289e8;}}
}
B4289d9:L4289d9:{c.instructions+=1;NFSU2_TR(0x4289d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4289deull));
TAIL_STATIC(0x5f82c0u,5f8);
}
B4289de:L4289de:{c.instructions+=1;NFSU2_TR(0x4289de);
{goto L4289e8;}
}
B4289e0:L4289e0:{c.instructions+=1;NFSU2_TR(0x4289e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4289e4:L4289e4:{c.instructions+=1;NFSU2_TR(0x4289e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4289e8:L4289e8:{c.instructions+=3;NFSU2_TR(0x4289e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4289ea:{NFSU2_TR(0x4289ea);
__builtin_memmove((R+4),(R+24),4);
}
B4289ec:{NFSU2_TR(0x4289ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4289efull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4289ef:L4289ef:{c.instructions+=4;NFSU2_TR(0x4289ef);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4289f3:{NFSU2_TR(0x4289f3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4289f5:{NFSU2_TR(0x4289f5);
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
B4289f8:{NFSU2_TR(0x4289f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428a04;}}
}
B4289fa:L4289fa:{c.instructions+=3;NFSU2_TR(0x4289fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4289fc:{NFSU2_TR(0x4289fc);
__builtin_memmove((R+4),(R+24),4);
}
B4289fe:{NFSU2_TR(0x4289fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428a04ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B428a04:L428a04:{c.instructions+=8;NFSU2_TR(0x428a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428a07:{NFSU2_TR(0x428a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428a0a:{NFSU2_TR(0x428a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B428a10:{NFSU2_TR(0x428a10);
__builtin_memmove((R+0),gp(0x7e8e60),4);
}
B428a15:{NFSU2_TR(0x428a15);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428a19:{NFSU2_TR(0x428a19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B428a1b:{NFSU2_TR(0x428a1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428a1f:{NFSU2_TR(0x428a1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428a22ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B428a22:L428a22:{c.instructions+=5;NFSU2_TR(0x428a22);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B428a26:{NFSU2_TR(0x428a26);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B428a2a:{NFSU2_TR(0x428a2a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B428a2c:{NFSU2_TR(0x428a2c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428a2f:{NFSU2_TR(0x428a2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428a37;}}
}
B428a31:L428a31:{c.instructions+=2;NFSU2_TR(0x428a31);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B428a35:{NFSU2_TR(0x428a35);
{goto L428a41;}
}
B428a37:L428a37:{c.instructions+=3;NFSU2_TR(0x428a37);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428a3b:{NFSU2_TR(0x428a3b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B428a3d:{NFSU2_TR(0x428a3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428a41:L428a41:{c.instructions+=16;NFSU2_TR(0x428a41);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428a45:{NFSU2_TR(0x428a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428a48:{NFSU2_TR(0x428a48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428a49:{NFSU2_TR(0x428a49);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B428a4c:{NFSU2_TR(0x428a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428a4f:{NFSU2_TR(0x428a4f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B428a51:{NFSU2_TR(0x428a51);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428a53:{NFSU2_TR(0x428a53);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428a57:{NFSU2_TR(0x428a57);
__builtin_memmove((R+8),(R+518),1);
}
B428a5a:{NFSU2_TR(0x428a5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x31cull))));
__builtin_memmove((R+28),(U+0),4);
}
B428a60:{NFSU2_TR(0x428a60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428a61:{NFSU2_TR(0x428a61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428a62:{NFSU2_TR(0x428a62);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428a63:{NFSU2_TR(0x428a63);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428a64:{NFSU2_TR(0x428a64);
__builtin_memmove((R+4),(R+28),4);
}
B428a66:{NFSU2_TR(0x428a66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428a6bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428030u);}goto L428030;}
}
B428a6b:L428a6b:{c.instructions+=3;NFSU2_TR(0x428a6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3c9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B428a72:{NFSU2_TR(0x428a72);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B428a75:{NFSU2_TR(0x428a75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428a8d;}}
}
B428a77:L428a77:{c.instructions+=4;NFSU2_TR(0x428a77);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428a79:{NFSU2_TR(0x428a79);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428a7a:{NFSU2_TR(0x428a7a);
__builtin_memmove((R+4),(R+28),4);
}
B428a7c:{NFSU2_TR(0x428a7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428a81ull));
TAIL_STATIC(0x41a090u,41a);
}
B428a81:L428a81:{c.instructions+=2;NFSU2_TR(0x428a81);
__builtin_memmove((R+4),(R+28),4);
}
B428a83:{NFSU2_TR(0x428a83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428a88ull));
TAIL_STATIC(0x411be0u,411);
}
B428a88:L428a88:{c.instructions+=1;NFSU2_TR(0x428a88);
{goto L428c57;}
}
B428a8d:L428a8d:{c.instructions+=6;NFSU2_TR(0x428a8d);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B428a94:{NFSU2_TR(0x428a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428a9a:{NFSU2_TR(0x428a9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428a9b:{NFSU2_TR(0x428a9b);
__builtin_memmove((R+4),(R+24),4);
}
B428a9d:{NFSU2_TR(0x428a9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428aa1:{NFSU2_TR(0x428aa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428aa6ull));
TAIL_STATIC(0x40ae90u,40a);
}
B428aa6:L428aa6:{c.instructions+=2;NFSU2_TR(0x428aa6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428aa8:{NFSU2_TR(0x428aa8);
if(r1(R+518)){{goto L428acb;}}
}
B428aaa:L428aaa:{c.instructions+=3;NFSU2_TR(0x428aaa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B428aae:{NFSU2_TR(0x428aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428ab4:{NFSU2_TR(0x428ab4);
if(r1(R+518)){{goto L428c57;}}
}
B428aba:L428aba:{c.instructions+=3;NFSU2_TR(0x428aba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428abd:{NFSU2_TR(0x428abd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428abe:{NFSU2_TR(0x428abe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428ac3ull));
TAIL_STATIC(0x40aa90u,40a);
}
B428ac3:L428ac3:{c.instructions+=2;NFSU2_TR(0x428ac3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428ac5:{NFSU2_TR(0x428ac5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428c57;}}
}
B428acb:L428acb:{c.instructions+=4;NFSU2_TR(0x428acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B428ad1:{NFSU2_TR(0x428ad1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B428ad4:{NFSU2_TR(0x428ad4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428ad8:{NFSU2_TR(0x428ad8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L428c57;}}
}
B428ade:L428ade:{c.instructions+=2;NFSU2_TR(0x428ade);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B428ae1:{NFSU2_TR(0x428ae1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L428c57;}}
}
B428ae7:L428ae7:{c.instructions+=8;NFSU2_TR(0x428ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x310ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B428aed:{NFSU2_TR(0x428aed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x314ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428af3:{NFSU2_TR(0x428af3);
__builtin_memmove((R+4),gp(0x890080),4);
}
B428af9:{NFSU2_TR(0x428af9);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428afe:{NFSU2_TR(0x428afe);
u8 U[5];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B428b03:{NFSU2_TR(0x428b03);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428b07:{NFSU2_TR(0x428b07);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428b0b:{NFSU2_TR(0x428b0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428b10ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B428b10:L428b10:{c.instructions+=5;NFSU2_TR(0x428b10);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B428b16:{NFSU2_TR(0x428b16);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B428b1b:{NFSU2_TR(0x428b1b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B428b1d:{NFSU2_TR(0x428b1d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B428b20:{NFSU2_TR(0x428b20);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L428b27;}}
}
B428b22:L428b22:{c.instructions+=1;NFSU2_TR(0x428b22);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B428b27:L428b27:{c.instructions+=4;NFSU2_TR(0x428b27);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B428b2a:{NFSU2_TR(0x428b2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B428b32:{NFSU2_TR(0x428b32);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428b36:{NFSU2_TR(0x428b36);
{goto L428b40;}
}
B428b38:L428b38:{c.instructions+=2;NFSU2_TR(0x428b38);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B428b3c:{NFSU2_TR(0x428b3c);
__builtin_memmove((R+16),(R+16),4);
}
B428b40:L428b40:{c.instructions+=3;NFSU2_TR(0x428b40);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B428b44:{NFSU2_TR(0x428b44);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428b46:{NFSU2_TR(0x428b46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428c57;}}
}
B428b4c:L428b4c:{c.instructions+=4;NFSU2_TR(0x428b4c);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B428b51:{NFSU2_TR(0x428b51);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B428b53:{NFSU2_TR(0x428b53);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428b57:{NFSU2_TR(0x428b57);
{goto L428b60;}
}
B428b59:L428b59:{c.instructions+=2;NFSU2_TR(0x428b59);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B428b5d:{NFSU2_TR(0x428b5d);
__builtin_memmove((R+4),(R+4),4);
}
B428b60:L428b60:{c.instructions+=3;NFSU2_TR(0x428b60);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428b64:{NFSU2_TR(0x428b64);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B428b66:{NFSU2_TR(0x428b66);
if(r1(R+518)){{goto L428b6e;}}
}
B428b68:L428b68:{c.instructions+=2;NFSU2_TR(0x428b68);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B428b6c:{NFSU2_TR(0x428b6c);
{goto L428b74;}
}
B428b6e:L428b6e:{c.instructions+=2;NFSU2_TR(0x428b6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428b72:{NFSU2_TR(0x428b72);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B428b74:L428b74:{c.instructions+=2;NFSU2_TR(0x428b74);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B428b77:{NFSU2_TR(0x428b77);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L428b92;}}
}
B428b79:L428b79:{c.instructions+=2;NFSU2_TR(0x428b79);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B428b7c:{NFSU2_TR(0x428b7c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L428b92;}}
}
B428b7e:L428b7e:{c.instructions+=6;NFSU2_TR(0x428b7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B428b82:{NFSU2_TR(0x428b82);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428b86:{NFSU2_TR(0x428b86);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428b87:{NFSU2_TR(0x428b87);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428b88:{NFSU2_TR(0x428b88);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428b89:{NFSU2_TR(0x428b89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428b8eull));
TAIL_STATIC(0x412500u,412);
}
B428b8e:L428b8e:{c.instructions+=2;NFSU2_TR(0x428b8e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428b90:{NFSU2_TR(0x428b90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428b9a;}}
}
B428b92:L428b92:{c.instructions+=3;NFSU2_TR(0x428b92);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B428b93:{NFSU2_TR(0x428b93);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B428b96:{NFSU2_TR(0x428b96);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428b59u);}goto L428b59;}}
}
B428b98:L428b98:{c.instructions+=1;NFSU2_TR(0x428b98);
{goto L428bb5;}
}
B428b9a:L428b9a:{c.instructions+=7;NFSU2_TR(0x428b9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428b9e:{NFSU2_TR(0x428b9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428ba2:{NFSU2_TR(0x428ba2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428ba3:{NFSU2_TR(0x428ba3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428ba4:{NFSU2_TR(0x428ba4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428ba5:{NFSU2_TR(0x428ba5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30cull))));
__builtin_memmove((R+4),(U+0),4);
}
B428bab:{NFSU2_TR(0x428bab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428bb0ull));
TAIL_STATIC(0x4053b0u,405);
}
B428bb0:L428bb0:{c.instructions+=1;NFSU2_TR(0x428bb0);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B428bb5:L428bb5:{c.instructions+=8;NFSU2_TR(0x428bb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428bb9:{NFSU2_TR(0x428bb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B428bbd:{NFSU2_TR(0x428bbd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B428bbe:{NFSU2_TR(0x428bbe);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B428bbf:{NFSU2_TR(0x428bbf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B428bc2:{NFSU2_TR(0x428bc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428bc6:{NFSU2_TR(0x428bc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428bca:{NFSU2_TR(0x428bca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428b38u);}goto L428b38;}}
}
B428bd0:L428bd0:{c.instructions+=3;NFSU2_TR(0x428bd0);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B428bd4:{NFSU2_TR(0x428bd4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428bd6:{NFSU2_TR(0x428bd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428c57;}}
}
B428bdc:L428bdc:{c.instructions+=4;NFSU2_TR(0x428bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B428bdf:{NFSU2_TR(0x428bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428be2:{NFSU2_TR(0x428be2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B428be5:{NFSU2_TR(0x428be5);
if(r1(R+518)){{goto L428bec;}}
}
B428be7:L428be7:{c.instructions+=2;NFSU2_TR(0x428be7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B428bea:{NFSU2_TR(0x428bea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428c57;}}
}
B428bec:L428bec:{c.instructions+=14;NFSU2_TR(0x428bec);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B428bf0:{NFSU2_TR(0x428bf0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B428bf3:{NFSU2_TR(0x428bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428bf6:{NFSU2_TR(0x428bf6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B428bf8:{NFSU2_TR(0x428bf8);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428bfa:{NFSU2_TR(0x428bfa);
__builtin_memmove((R+4),(R+518),1);
}
B428bfd:{NFSU2_TR(0x428bfd);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428c02:{NFSU2_TR(0x428c02);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428c07:{NFSU2_TR(0x428c07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428c08:{NFSU2_TR(0x428c08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428c09:{NFSU2_TR(0x428c09);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B428c0c:{NFSU2_TR(0x428c0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428c0d:{NFSU2_TR(0x428c0d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428c0e:{NFSU2_TR(0x428c0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428c13ull));
TAIL_STATIC(0x40f4a0u,40f);
}
B428c13:L428c13:{c.instructions+=5;NFSU2_TR(0x428c13);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B428c17:{NFSU2_TR(0x428c17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B428c1a:{NFSU2_TR(0x428c1a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B428c1d:{NFSU2_TR(0x428c1d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428c1e:{NFSU2_TR(0x428c1e);
if(r1(R+518)){{goto L428c33;}}
}
B428c20:L428c20:{c.instructions+=5;NFSU2_TR(0x428c20);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428c24:{NFSU2_TR(0x428c24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428c25:{NFSU2_TR(0x428c25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428c26:{NFSU2_TR(0x428c26);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30cull))));
__builtin_memmove((R+4),(U+0),4);
}
B428c2c:{NFSU2_TR(0x428c2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428c31ull));
TAIL_STATIC(0x4053b0u,405);
}
B428c31:L428c31:{c.instructions+=1;NFSU2_TR(0x428c31);
{goto L428c57;}
}
B428c33:L428c33:{c.instructions+=5;NFSU2_TR(0x428c33);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428c37:{NFSU2_TR(0x428c37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428c38:{NFSU2_TR(0x428c38);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428c3a:{NFSU2_TR(0x428c3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30cull))));
__builtin_memmove((R+4),(U+0),4);
}
B428c40:{NFSU2_TR(0x428c40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428c45ull));
TAIL_STATIC(0x4053b0u,405);
}
B428c45:L428c45:{c.instructions+=1;NFSU2_TR(0x428c45);
{goto L428c57;}
}
B428c47:L428c47:{c.instructions+=2;NFSU2_TR(0x428c47);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x31cull))));
__builtin_memmove((R+4),(U+0),4);
}
B428c4d:{NFSU2_TR(0x428c4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428c52ull));
TAIL_STATIC(0x411be0u,411);
}
B428c52:L428c52:{c.instructions+=1;NFSU2_TR(0x428c52);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B428c57:L428c57:{c.instructions+=3;NFSU2_TR(0x428c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x320ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428c5d:{NFSU2_TR(0x428c5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B428c5f:{NFSU2_TR(0x428c5f);
if(r1(R+518)){{goto L428cb6;}}
}
B428c61:L428c61:{c.instructions+=6;NFSU2_TR(0x428c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428c67:{NFSU2_TR(0x428c67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428c68:{NFSU2_TR(0x428c68);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x31cull))));
__builtin_memmove((R+24),(U+0),4);
}
B428c6e:{NFSU2_TR(0x428c6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428c6f:{NFSU2_TR(0x428c6f);
__builtin_memmove((R+4),(R+12),4);
}
B428c71:{NFSU2_TR(0x428c71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428c76ull));
TAIL_STATIC(0x6148e0u,614);
}
B428c76:L428c76:{c.instructions+=7;NFSU2_TR(0x428c76);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B428c7d:{NFSU2_TR(0x428c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B428c80:{NFSU2_TR(0x428c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428c83:{NFSU2_TR(0x428c83);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B428c86:{NFSU2_TR(0x428c86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B428c88:{NFSU2_TR(0x428c88);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B428c8c:{NFSU2_TR(0x428c8c);
if(r1(R+518)){{goto L428c97;}}
}
B428c8e:L428c8e:{c.instructions+=3;NFSU2_TR(0x428c8e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B428c92:{NFSU2_TR(0x428c92);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B428c95:{NFSU2_TR(0x428c95);
{goto L428c9d;}
}
B428c97:L428c97:{c.instructions+=1;NFSU2_TR(0x428c97);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B428c9d:L428c9d:{c.instructions+=6;NFSU2_TR(0x428c9d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B428c9f:{NFSU2_TR(0x428c9f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B428ca1:{NFSU2_TR(0x428ca1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B428ca3:{NFSU2_TR(0x428ca3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B428ca5:{NFSU2_TR(0x428ca5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428ca8:{NFSU2_TR(0x428ca8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428cd0;}}
}
B428caa:L428caa:{c.instructions+=7;NFSU2_TR(0x428caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428cab:{NFSU2_TR(0x428cab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B428cac:{NFSU2_TR(0x428cac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B428cad:{NFSU2_TR(0x428cad);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B428caf:{NFSU2_TR(0x428caf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B428cb0:{NFSU2_TR(0x428cb0);
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
B428cb3:{NFSU2_TR(0x428cb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428cb6:L428cb6:{c.instructions+=9;NFSU2_TR(0x428cb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428cb7:{NFSU2_TR(0x428cb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B428cb8:{NFSU2_TR(0x428cb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B428cb9:{NFSU2_TR(0x428cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B428cc0:{NFSU2_TR(0x428cc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x308ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B428cc7:{NFSU2_TR(0x428cc7);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B428cc9:{NFSU2_TR(0x428cc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B428cca:{NFSU2_TR(0x428cca);
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
B428ccd:{NFSU2_TR(0x428ccd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428cd0:L428cd0:{c.instructions+=7;NFSU2_TR(0x428cd0);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B428cd4:{NFSU2_TR(0x428cd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428cd5:{NFSU2_TR(0x428cd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B428cd6:{NFSU2_TR(0x428cd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B428cd7:{NFSU2_TR(0x428cd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B428cd8:{NFSU2_TR(0x428cd8);
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
B428cdb:{NFSU2_TR(0x428cdb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428ce0:L428ce0:{c.instructions+=16;NFSU2_TR(0x428ce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B428ce3:{NFSU2_TR(0x428ce3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428ce4:{NFSU2_TR(0x428ce4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428ce5:{NFSU2_TR(0x428ce5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B428ce9:{NFSU2_TR(0x428ce9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428cea:{NFSU2_TR(0x428cea);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B428cee:{NFSU2_TR(0x428cee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B428cf0:{NFSU2_TR(0x428cf0);
__builtin_memmove((R+12),(R+4),4);
}
B428cf2:{NFSU2_TR(0x428cf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428cf5:{NFSU2_TR(0x428cf5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+0),(U+0),1);
}
B428cf8:{NFSU2_TR(0x428cf8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B428cfa:{NFSU2_TR(0x428cfa);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428cfc:{NFSU2_TR(0x428cfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428d00:{NFSU2_TR(0x428d00);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428d04:{NFSU2_TR(0x428d04);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B428d0c:{NFSU2_TR(0x428d0c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L428de5;}}
}
B428d12:L428d12:{c.instructions+=2;NFSU2_TR(0x428d12);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x14ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x14ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428d14:{NFSU2_TR(0x428d14);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L428de5;}}
}
B428d1a:L428d1a:{c.instructions+=3;NFSU2_TR(0x428d1a);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B428d1d:{NFSU2_TR(0x428d1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428d21:{NFSU2_TR(0x428d21);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L428dce;}}
}
B428d27:L428d27:{c.instructions+=3;NFSU2_TR(0x428d27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428d28:{NFSU2_TR(0x428d28);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((R+24),(U+0),4);
}
B428d2b:{NFSU2_TR(0x428d2b);
{goto L428d31;}
}
B428d2d:L428d2d:{c.instructions+=1;NFSU2_TR(0x428d2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428d31:L428d31:{c.instructions+=6;NFSU2_TR(0x428d31);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B428d34:{NFSU2_TR(0x428d34);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B428d3b:{NFSU2_TR(0x428d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428d3e:{NFSU2_TR(0x428d3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B428d40:{NFSU2_TR(0x428d40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428d41:{NFSU2_TR(0x428d41);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428d47ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B428d47:L428d47:{c.instructions+=2;NFSU2_TR(0x428d47);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428d49:{NFSU2_TR(0x428d49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428db6;}}
}
B428d4b:L428d4b:{c.instructions+=4;NFSU2_TR(0x428d4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B428d4e:{NFSU2_TR(0x428d4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428d4f:{NFSU2_TR(0x428d4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428d50:{NFSU2_TR(0x428d50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428d55ull));
TAIL_STATIC(0x403820u,403);
}
B428d55:L428d55:{c.instructions+=3;NFSU2_TR(0x428d55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B428d58:{NFSU2_TR(0x428d58);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428d5a:{NFSU2_TR(0x428d5a);
if(r1(R+518)){{goto L428db6;}}
}
B428d5c:L428d5c:{c.instructions+=12;NFSU2_TR(0x428d5c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B428d5f:{NFSU2_TR(0x428d5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B428d66:{NFSU2_TR(0x428d66);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428d6a:{NFSU2_TR(0x428d6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B428d6e:{NFSU2_TR(0x428d6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428d6f:{NFSU2_TR(0x428d6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428d70:{NFSU2_TR(0x428d70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428d71:{NFSU2_TR(0x428d71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428d72:{NFSU2_TR(0x428d72);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428d73:{NFSU2_TR(0x428d73);
__builtin_memmove((R+4),(R+12),4);
}
B428d75:{NFSU2_TR(0x428d75);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x449a4000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B428d7d:{NFSU2_TR(0x428d7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428d82ull));
TAIL_STATIC(0x4275e0u,427);
}
B428d82:L428d82:{c.instructions+=2;NFSU2_TR(0x428d82);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428d84:{NFSU2_TR(0x428d84);
if(r1(R+518)){{goto L428dab;}}
}
B428d86:L428d86:{c.instructions+=5;NFSU2_TR(0x428d86);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B428d8a:{NFSU2_TR(0x428d8a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B428d8e:{NFSU2_TR(0x428d8e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B428d90:{NFSU2_TR(0x428d90);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B428d93:{NFSU2_TR(0x428d93);
if(r1(R+514)){{goto L428dab;}}
}
B428d95:L428d95:{c.instructions+=5;NFSU2_TR(0x428d95);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B428d98:{NFSU2_TR(0x428d98);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B428d9f:{NFSU2_TR(0x428d9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428da3:{NFSU2_TR(0x428da3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428da7:{NFSU2_TR(0x428da7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428dab:L428dab:{c.instructions+=2;NFSU2_TR(0x428dab);
__builtin_memmove((R+4),gp(0x890080),4);
}
B428db1:{NFSU2_TR(0x428db1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428db6ull));
TAIL_STATIC(0x5ea520u,5ea);
}
B428db6:L428db6:{c.instructions+=7;NFSU2_TR(0x428db6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428dba:{NFSU2_TR(0x428dba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428dbd:{NFSU2_TR(0x428dbd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B428dbe:{NFSU2_TR(0x428dbe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B428dc1:{NFSU2_TR(0x428dc1);
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
B428dc3:{NFSU2_TR(0x428dc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428dc7:{NFSU2_TR(0x428dc7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428d2du);}goto L428d2d;}}
}
B428dcd:L428dcd:{c.instructions+=1;NFSU2_TR(0x428dcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B428dce:L428dce:{c.instructions+=9;NFSU2_TR(0x428dce);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B428dd2:{NFSU2_TR(0x428dd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B428dd6:{NFSU2_TR(0x428dd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428dda:{NFSU2_TR(0x428dda);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B428ddc:{NFSU2_TR(0x428ddc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428ddd:{NFSU2_TR(0x428ddd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B428dde:{NFSU2_TR(0x428dde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B428ddf:{NFSU2_TR(0x428ddf);
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
B428de2:{NFSU2_TR(0x428de2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428de5:L428de5:{c.instructions+=6;NFSU2_TR(0x428de5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428de6:{NFSU2_TR(0x428de6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B428de7:{NFSU2_TR(0x428de7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B428de9:{NFSU2_TR(0x428de9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B428dea:{NFSU2_TR(0x428dea);
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
B428ded:{NFSU2_TR(0x428ded);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428df0:L428df0:{c.instructions+=15;NFSU2_TR(0x428df0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428df1:{NFSU2_TR(0x428df1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428df2:{NFSU2_TR(0x428df2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B428df6:{NFSU2_TR(0x428df6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428df7:{NFSU2_TR(0x428df7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B428dfb:{NFSU2_TR(0x428dfb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428dfc:{NFSU2_TR(0x428dfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B428e00:{NFSU2_TR(0x428e00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428e01:{NFSU2_TR(0x428e01);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B428e05:{NFSU2_TR(0x428e05);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428e06:{NFSU2_TR(0x428e06);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B428e0c:{NFSU2_TR(0x428e0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428e0d:{NFSU2_TR(0x428e0d);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B428e12:{NFSU2_TR(0x428e12);
u8 U[4];
w4(U+0,u32(0x47c34f80ull));
s4(u32(r4(R+24)),r4(U+0));
}
B428e18:{NFSU2_TR(0x428e18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428e1dull));
TAIL_STATIC(0x420d40u,420);
}
B428e1d:L428e1d:{c.instructions+=2;NFSU2_TR(0x428e1d);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428e1f:{NFSU2_TR(0x428e1f);
if(r1(R+518)){{goto L428e4a;}}
}
B428e21:L428e21:{c.instructions+=7;NFSU2_TR(0x428e21);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428e25:{NFSU2_TR(0x428e25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428e26:{NFSU2_TR(0x428e26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428e27:{NFSU2_TR(0x428e27);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428e28:{NFSU2_TR(0x428e28);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428e29:{NFSU2_TR(0x428e29);
w4(R+4,u32(0x827a00ull));
}
B428e2e:{NFSU2_TR(0x428e2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428e33ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428ce0u);}goto L428ce0;}
}
B428e33:L428e33:{c.instructions+=3;NFSU2_TR(0x428e33);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B428e35:{NFSU2_TR(0x428e35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B428e37:{NFSU2_TR(0x428e37);
if(r1(R+518)){{goto L428e46;}}
}
B428e39:L428e39:{c.instructions+=5;NFSU2_TR(0x428e39);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B428e3b:{NFSU2_TR(0x428e3b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B428e3f:{NFSU2_TR(0x428e3f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B428e41:{NFSU2_TR(0x428e41);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428e44:{NFSU2_TR(0x428e44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428e4a;}}
}
B428e46:L428e46:{c.instructions+=2;NFSU2_TR(0x428e46);
w1(R+0,u8(0x1ull));
}
B428e48:{NFSU2_TR(0x428e48);
{goto L428e4e;}
}
B428e4a:L428e4a:{c.instructions+=1;NFSU2_TR(0x428e4a);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B428e4e:L428e4e:{c.instructions+=10;NFSU2_TR(0x428e4e);
__builtin_memmove((R+4),gp(0x890080),4);
}
B428e54:{NFSU2_TR(0x428e54);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B428e5a:{NFSU2_TR(0x428e5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428e5b:{NFSU2_TR(0x428e5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B428e5c:{NFSU2_TR(0x428e5c);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B428e5d:{NFSU2_TR(0x428e5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B428e5e:{NFSU2_TR(0x428e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428e64:{NFSU2_TR(0x428e64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B428e65:{NFSU2_TR(0x428e65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B428e66:{NFSU2_TR(0x428e66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428e70:L428e70:{c.instructions+=17;NFSU2_TR(0x428e70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B428e73:{NFSU2_TR(0x428e73);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428e77:{NFSU2_TR(0x428e77);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3c9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B428e7e:{NFSU2_TR(0x428e7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428e7f:{NFSU2_TR(0x428e7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B428e81:{NFSU2_TR(0x428e81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428e82:{NFSU2_TR(0x428e82);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B428e89:{NFSU2_TR(0x428e89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B428e8b:{NFSU2_TR(0x428e8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428e8c:{NFSU2_TR(0x428e8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428e8d:{NFSU2_TR(0x428e8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B428e91:{NFSU2_TR(0x428e91);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B428e93:{NFSU2_TR(0x428e93);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428e97:{NFSU2_TR(0x428e97);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B428e9f:{NFSU2_TR(0x428e9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B428ea7:{NFSU2_TR(0x428ea7);
w1(R+4,u8(0x1ull));
}
B428ea9:{NFSU2_TR(0x428ea9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L428ed2;}}
}
B428eab:L428eab:{c.instructions+=1;NFSU2_TR(0x428eab);
{goto L428eb0;}
}
B428eb0:L428eb0:{c.instructions+=2;NFSU2_TR(0x428eb0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428eb2:{NFSU2_TR(0x428eb2);
if(r1(R+518)){{goto L428fc0;}}
}
B428eb8:L428eb8:{c.instructions+=6;NFSU2_TR(0x428eb8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428eb9:{NFSU2_TR(0x428eb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B428ebc:{NFSU2_TR(0x428ebc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428ebd:{NFSU2_TR(0x428ebd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428ebe:{NFSU2_TR(0x428ebe);
__builtin_memmove((R+4),(R+20),4);
}
B428ec0:{NFSU2_TR(0x428ec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428ec5ull));
TAIL_STATIC(0x412500u,412);
}
B428ec5:L428ec5:{c.instructions+=5;NFSU2_TR(0x428ec5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428ec7:{NFSU2_TR(0x428ec7);
__builtin_memmove((R+0),(R+24),4);
}
B428ec9:{NFSU2_TR(0x428ec9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B428ecc:{NFSU2_TR(0x428ecc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B428ece:{NFSU2_TR(0x428ece);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428eb0u);}goto L428eb0;}}
}
B428ed0:L428ed0:{c.instructions+=1;NFSU2_TR(0x428ed0);
{goto L428ef8;}
}
B428ed2:L428ed2:{c.instructions+=1;NFSU2_TR(0x428ed2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L428fc0;}}
}
B428ed8:L428ed8:{c.instructions+=2;NFSU2_TR(0x428ed8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428eda:{NFSU2_TR(0x428eda);
if(r1(R+518)){{goto L428fc0;}}
}
B428ee0:L428ee0:{c.instructions+=6;NFSU2_TR(0x428ee0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428ee1:{NFSU2_TR(0x428ee1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B428ee4:{NFSU2_TR(0x428ee4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428ee5:{NFSU2_TR(0x428ee5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428ee6:{NFSU2_TR(0x428ee6);
__builtin_memmove((R+4),(R+20),4);
}
B428ee8:{NFSU2_TR(0x428ee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428eedull));
TAIL_STATIC(0x412500u,412);
}
B428eed:L428eed:{c.instructions+=5;NFSU2_TR(0x428eed);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428eef:{NFSU2_TR(0x428eef);
__builtin_memmove((R+0),(R+24),4);
}
B428ef1:{NFSU2_TR(0x428ef1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B428ef4:{NFSU2_TR(0x428ef4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B428ef6:{NFSU2_TR(0x428ef6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428ed8u);}goto L428ed8;}}
}
B428ef8:L428ef8:{c.instructions+=2;NFSU2_TR(0x428ef8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428efa:{NFSU2_TR(0x428efa);
if(r1(R+518)){{goto L428fc0;}}
}
B428f00:L428f00:{c.instructions+=11;NFSU2_TR(0x428f00);
__builtin_memmove((R+0),gp(0x7837d8),4);
}
B428f05:{NFSU2_TR(0x428f05);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428f09:{NFSU2_TR(0x428f09);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B428f0d:{NFSU2_TR(0x428f0d);
{u32 ea_=u32(u32(8293992u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B428f13:{NFSU2_TR(0x428f13);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428f17:{NFSU2_TR(0x428f17);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B428f1f:{NFSU2_TR(0x428f1f);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B428f21:{NFSU2_TR(0x428f21);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B428f27:{NFSU2_TR(0x428f27);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B428f29:{NFSU2_TR(0x428f29);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B428f2c:{NFSU2_TR(0x428f2c);
if(r1(R+514)){{goto L428f36;}}
}
B428f2e:L428f2e:{c.instructions+=2;NFSU2_TR(0x428f2e);
__builtin_memmove((R+24),gp(0x86518c),4);
}
B428f34:{NFSU2_TR(0x428f34);
{goto L428f38;}
}
B428f36:L428f36:{c.instructions+=1;NFSU2_TR(0x428f36);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B428f38:L428f38:{c.instructions+=13;NFSU2_TR(0x428f38);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428f3c:{NFSU2_TR(0x428f3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B428f40:{NFSU2_TR(0x428f40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428f41:{NFSU2_TR(0x428f41);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428f45:{NFSU2_TR(0x428f45);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B428f49:{NFSU2_TR(0x428f49);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428f4a:{NFSU2_TR(0x428f4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B428f4e:{NFSU2_TR(0x428f4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428f4f:{NFSU2_TR(0x428f4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428f50:{NFSU2_TR(0x428f50);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428f51:{NFSU2_TR(0x428f51);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B428f55:{NFSU2_TR(0x428f55);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428f59:{NFSU2_TR(0x428f59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x428f5eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x428df0u);}goto L428df0;}
}
B428f5e:L428f5e:{c.instructions+=2;NFSU2_TR(0x428f5e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B428f60:{NFSU2_TR(0x428f60);
if(r1(R+518)){{goto L428fc0;}}
}
B428f62:L428f62:{c.instructions+=12;NFSU2_TR(0x428f62);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B428f66:{NFSU2_TR(0x428f66);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B428f6a:{NFSU2_TR(0x428f6a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B428f6d:{NFSU2_TR(0x428f6d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B428f6f:{NFSU2_TR(0x428f6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B428f71:{NFSU2_TR(0x428f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428f74:{NFSU2_TR(0x428f74);
{u32 ea_=u32(u32(8293992u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B428f7a:{NFSU2_TR(0x428f7a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B428f7c:{NFSU2_TR(0x428f7c);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B428f82:{NFSU2_TR(0x428f82);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B428f84:{NFSU2_TR(0x428f84);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B428f87:{NFSU2_TR(0x428f87);
if(r1(R+514)){{goto L428fae;}}
}
B428f89:L428f89:{c.instructions+=3;NFSU2_TR(0x428f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B428f8c:{NFSU2_TR(0x428f8c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B428f8e:{NFSU2_TR(0x428f8e);
if(r1(R+518)){{goto L428f97;}}
}
B428f90:L428f90:{c.instructions+=2;NFSU2_TR(0x428f90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B428f95:{NFSU2_TR(0x428f95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L428fb1;}}
}
B428f97:L428f97:{c.instructions+=10;NFSU2_TR(0x428f97);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B428f9c:{NFSU2_TR(0x428f9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428f9d:{NFSU2_TR(0x428f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428fa0:{NFSU2_TR(0x428fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428fa3:{NFSU2_TR(0x428fa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B428fa4:{NFSU2_TR(0x428fa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B428fa5:{NFSU2_TR(0x428fa5);
w1(R+0,u8(0x1ull));
}
B428fa7:{NFSU2_TR(0x428fa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B428fa8:{NFSU2_TR(0x428fa8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B428fab:{NFSU2_TR(0x428fab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428fae:L428fae:{c.instructions+=1;NFSU2_TR(0x428fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428fb1:L428fb1:{c.instructions+=8;NFSU2_TR(0x428fb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428fb2:{NFSU2_TR(0x428fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B428fb5:{NFSU2_TR(0x428fb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B428fb6:{NFSU2_TR(0x428fb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B428fb7:{NFSU2_TR(0x428fb7);
w1(R+0,u8(0x1ull));
}
B428fb9:{NFSU2_TR(0x428fb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B428fba:{NFSU2_TR(0x428fba);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B428fbd:{NFSU2_TR(0x428fbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428fc0:L428fc0:{c.instructions+=7;NFSU2_TR(0x428fc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B428fc1:{NFSU2_TR(0x428fc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B428fc2:{NFSU2_TR(0x428fc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B428fc3:{NFSU2_TR(0x428fc3);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B428fc5:{NFSU2_TR(0x428fc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B428fc6:{NFSU2_TR(0x428fc6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B428fc9:{NFSU2_TR(0x428fc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B428fd0:L428fd0:{c.instructions+=17;NFSU2_TR(0x428fd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428fd1:{NFSU2_TR(0x428fd1);
__builtin_memmove((R+20),(R+16),4);
}
B428fd3:{NFSU2_TR(0x428fd3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B428fd6:{NFSU2_TR(0x428fd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x404ull))));
}
B428fdc:{NFSU2_TR(0x428fdc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428fdd:{NFSU2_TR(0x428fdd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428fde:{NFSU2_TR(0x428fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B428fe1:{NFSU2_TR(0x428fe1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B428fe8:{NFSU2_TR(0x428fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B428feb:{NFSU2_TR(0x428feb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B428fee:{NFSU2_TR(0x428fee);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B428ff2:{NFSU2_TR(0x428ff2);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B428ff6:{NFSU2_TR(0x428ff6);
__builtin_memmove((R+12),(R+4),4);
}
B428ff8:{NFSU2_TR(0x428ff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B428ffa:{NFSU2_TR(0x428ffa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B428ffb:{NFSU2_TR(0x428ffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B428ffd:{NFSU2_TR(0x428ffd);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x429001u,429);
}
XIT:NFSU2_TR_EXIT(0x428,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
