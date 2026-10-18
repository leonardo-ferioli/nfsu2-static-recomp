#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69b(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6a8(u8* __restrict R,Cpu& c);
u32 body_6aa(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6a9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6a9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6a9(u8* __restrict R,Cpu& c);
u32 page_6a9(Cpu& c){return body_6a9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6a9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6a9005:goto L6a9005;
case 0x6a900b:goto L6a900b;
case 0x6a9012:c.instructions+=3;goto B6a9012;
case 0x6a9016:c.instructions+=2;goto B6a9016;
case 0x6a901a:c.instructions+=1;goto B6a901a;
case 0x6a9020:goto L6a9020;
case 0x6a9023:c.instructions+=14;goto B6a9023;
case 0x6a9025:c.instructions+=13;goto B6a9025;
case 0x6a9028:c.instructions+=12;goto B6a9028;
case 0x6a902b:c.instructions+=11;goto B6a902b;
case 0x6a902d:c.instructions+=10;goto B6a902d;
case 0x6a902f:c.instructions+=9;goto B6a902f;
case 0x6a9032:c.instructions+=8;goto B6a9032;
case 0x6a9035:c.instructions+=7;goto B6a9035;
case 0x6a9038:c.instructions+=6;goto B6a9038;
case 0x6a903b:c.instructions+=5;goto B6a903b;
case 0x6a903e:c.instructions+=4;goto B6a903e;
case 0x6a9041:c.instructions+=3;goto B6a9041;
case 0x6a9043:c.instructions+=2;goto B6a9043;
case 0x6a9046:c.instructions+=1;goto B6a9046;
case 0x6a9049:goto L6a9049;
case 0x6a9050:c.instructions+=7;goto B6a9050;
case 0x6a9053:c.instructions+=6;goto B6a9053;
case 0x6a9055:c.instructions+=5;goto B6a9055;
case 0x6a9058:c.instructions+=4;goto B6a9058;
case 0x6a905b:c.instructions+=3;goto B6a905b;
case 0x6a905e:c.instructions+=2;goto B6a905e;
case 0x6a9061:c.instructions+=1;goto B6a9061;
case 0x6a9063:goto L6a9063;
case 0x6a9066:c.instructions+=8;goto B6a9066;
case 0x6a9068:c.instructions+=7;goto B6a9068;
case 0x6a906b:c.instructions+=6;goto B6a906b;
case 0x6a906e:c.instructions+=5;goto B6a906e;
case 0x6a9071:c.instructions+=4;goto B6a9071;
case 0x6a9074:c.instructions+=3;goto B6a9074;
case 0x6a9077:c.instructions+=2;goto B6a9077;
case 0x6a907b:c.instructions+=1;goto B6a907b;
case 0x6a9081:goto L6a9081;
case 0x6a9084:c.instructions+=2;goto B6a9084;
case 0x6a9088:c.instructions+=1;goto B6a9088;
case 0x6a908e:goto L6a908e;
case 0x6a9091:c.instructions+=4;goto B6a9091;
case 0x6a9097:c.instructions+=3;goto B6a9097;
case 0x6a9099:c.instructions+=2;goto B6a9099;
case 0x6a909c:c.instructions+=1;goto B6a909c;
case 0x6a90a2:goto L6a90a2;
case 0x6a90a5:c.instructions+=4;goto B6a90a5;
case 0x6a90a8:c.instructions+=3;goto B6a90a8;
case 0x6a90ab:c.instructions+=2;goto B6a90ab;
case 0x6a90ae:c.instructions+=1;goto B6a90ae;
case 0x6a90b0:goto L6a90b0;
case 0x6a90b3:c.instructions+=11;goto B6a90b3;
case 0x6a90b5:c.instructions+=10;goto B6a90b5;
case 0x6a90b8:c.instructions+=9;goto B6a90b8;
case 0x6a90bb:c.instructions+=8;goto B6a90bb;
case 0x6a90be:c.instructions+=7;goto B6a90be;
case 0x6a90c1:c.instructions+=6;goto B6a90c1;
case 0x6a90c4:c.instructions+=5;goto B6a90c4;
case 0x6a90c7:c.instructions+=4;goto B6a90c7;
case 0x6a90ca:c.instructions+=3;goto B6a90ca;
case 0x6a90cd:c.instructions+=2;goto B6a90cd;
case 0x6a90d1:c.instructions+=1;goto B6a90d1;
case 0x6a90d3:goto L6a90d3;
case 0x6a90d6:c.instructions+=2;goto B6a90d6;
case 0x6a90da:c.instructions+=1;goto B6a90da;
case 0x6a90dc:goto L6a90dc;
case 0x6a90e2:c.instructions+=5;goto B6a90e2;
case 0x6a90e5:c.instructions+=4;goto B6a90e5;
case 0x6a90e7:c.instructions+=3;goto B6a90e7;
case 0x6a90e9:c.instructions+=2;goto B6a90e9;
case 0x6a90ec:c.instructions+=1;goto B6a90ec;
case 0x6a90f2:goto L6a90f2;
case 0x6a90f5:c.instructions+=5;goto B6a90f5;
case 0x6a90f8:c.instructions+=4;goto B6a90f8;
case 0x6a90fb:c.instructions+=3;goto B6a90fb;
case 0x6a90fe:c.instructions+=2;goto B6a90fe;
case 0x6a9102:c.instructions+=1;goto B6a9102;
case 0x6a9108:goto L6a9108;
case 0x6a910b:c.instructions+=2;goto B6a910b;
case 0x6a910f:c.instructions+=1;goto B6a910f;
case 0x6a9115:goto L6a9115;
case 0x6a9118:c.instructions+=6;goto B6a9118;
case 0x6a911b:c.instructions+=5;goto B6a911b;
case 0x6a911e:c.instructions+=4;goto B6a911e;
case 0x6a9120:c.instructions+=3;goto B6a9120;
case 0x6a9125:c.instructions+=2;goto B6a9125;
case 0x6a912a:c.instructions+=1;goto B6a912a;
case 0x6a9130:goto L6a9130;
case 0x6a9134:c.instructions+=2;goto B6a9134;
case 0x6a9138:c.instructions+=1;goto B6a9138;
case 0x6a913a:goto L6a913a;
case 0x6a913d:c.instructions+=1;goto B6a913d;
case 0x6a913f:goto L6a913f;
case 0x6a9142:c.instructions+=1;goto B6a9142;
case 0x6a9145:goto L6a9145;
case 0x6a9147:c.instructions+=1;goto B6a9147;
case 0x6a9149:goto L6a9149;
case 0x6a914c:c.instructions+=5;goto B6a914c;
case 0x6a914f:c.instructions+=4;goto B6a914f;
case 0x6a9152:c.instructions+=3;goto B6a9152;
case 0x6a9155:c.instructions+=2;goto B6a9155;
case 0x6a9158:c.instructions+=1;goto B6a9158;
case 0x6a915a:goto L6a915a;
case 0x6a915d:c.instructions+=18;goto B6a915d;
case 0x6a9160:c.instructions+=17;goto B6a9160;
case 0x6a9162:c.instructions+=16;goto B6a9162;
case 0x6a9165:c.instructions+=15;goto B6a9165;
case 0x6a9168:c.instructions+=14;goto B6a9168;
case 0x6a916b:c.instructions+=13;goto B6a916b;
case 0x6a916e:c.instructions+=12;goto B6a916e;
case 0x6a9171:c.instructions+=11;goto B6a9171;
case 0x6a9174:c.instructions+=10;goto B6a9174;
case 0x6a9177:c.instructions+=9;goto B6a9177;
case 0x6a917a:c.instructions+=8;goto B6a917a;
case 0x6a917d:c.instructions+=7;goto B6a917d;
case 0x6a9180:c.instructions+=6;goto B6a9180;
case 0x6a9183:c.instructions+=5;goto B6a9183;
case 0x6a9186:c.instructions+=4;goto B6a9186;
case 0x6a9189:c.instructions+=3;goto B6a9189;
case 0x6a918c:c.instructions+=2;goto B6a918c;
case 0x6a918f:c.instructions+=1;goto B6a918f;
case 0x6a9191:goto L6a9191;
case 0x6a9195:c.instructions+=1;goto B6a9195;
case 0x6a9197:goto L6a9197;
case 0x6a919a:c.instructions+=4;goto B6a919a;
case 0x6a919d:c.instructions+=3;goto B6a919d;
case 0x6a91a0:c.instructions+=2;goto B6a91a0;
case 0x6a91a4:c.instructions+=1;goto B6a91a4;
case 0x6a91a6:goto L6a91a6;
case 0x6a91a9:c.instructions+=2;goto B6a91a9;
case 0x6a91ad:c.instructions+=1;goto B6a91ad;
case 0x6a91af:goto L6a91af;
case 0x6a91b2:c.instructions+=4;goto B6a91b2;
case 0x6a91b8:c.instructions+=3;goto B6a91b8;
case 0x6a91ba:c.instructions+=2;goto B6a91ba;
case 0x6a91bd:c.instructions+=1;goto B6a91bd;
case 0x6a91bf:goto L6a91bf;
case 0x6a91c2:c.instructions+=1;goto B6a91c2;
case 0x6a91c9:goto L6a91c9;
case 0x6a91cc:c.instructions+=1;goto B6a91cc;
case 0x6a91ce:goto L6a91ce;
case 0x6a91d1:c.instructions+=4;goto B6a91d1;
case 0x6a91d4:c.instructions+=3;goto B6a91d4;
case 0x6a91d7:c.instructions+=2;goto B6a91d7;
case 0x6a91db:c.instructions+=1;goto B6a91db;
case 0x6a91dd:goto L6a91dd;
case 0x6a91e0:c.instructions+=2;goto B6a91e0;
case 0x6a91e4:c.instructions+=1;goto B6a91e4;
case 0x6a91e6:goto L6a91e6;
case 0x6a91e9:c.instructions+=4;goto B6a91e9;
case 0x6a91ef:c.instructions+=3;goto B6a91ef;
case 0x6a91f1:c.instructions+=2;goto B6a91f1;
case 0x6a91f4:c.instructions+=1;goto B6a91f4;
case 0x6a91f6:goto L6a91f6;
case 0x6a91f9:c.instructions+=7;goto B6a91f9;
case 0x6a91fc:c.instructions+=6;goto B6a91fc;
case 0x6a91ff:c.instructions+=5;goto B6a91ff;
case 0x6a9202:c.instructions+=4;goto B6a9202;
case 0x6a9205:c.instructions+=3;goto B6a9205;
case 0x6a9208:c.instructions+=2;goto B6a9208;
case 0x6a920b:c.instructions+=1;goto B6a920b;
case 0x6a9211:goto L6a9211;
case 0x6a9216:goto L6a9216;
case 0x6a9219:c.instructions+=11;goto B6a9219;
case 0x6a921c:c.instructions+=10;goto B6a921c;
case 0x6a921f:c.instructions+=9;goto B6a921f;
case 0x6a9222:c.instructions+=8;goto B6a9222;
case 0x6a9224:c.instructions+=7;goto B6a9224;
case 0x6a9227:c.instructions+=6;goto B6a9227;
case 0x6a922a:c.instructions+=5;goto B6a922a;
case 0x6a922d:c.instructions+=4;goto B6a922d;
case 0x6a9230:c.instructions+=3;goto B6a9230;
case 0x6a9233:c.instructions+=2;goto B6a9233;
case 0x6a9236:c.instructions+=1;goto B6a9236;
case 0x6a9238:goto L6a9238;
case 0x6a923c:c.instructions+=1;goto B6a923c;
case 0x6a923e:goto L6a923e;
case 0x6a9245:goto L6a9245;
case 0x6a9248:c.instructions+=15;goto B6a9248;
case 0x6a924b:c.instructions+=14;goto B6a924b;
case 0x6a924e:c.instructions+=13;goto B6a924e;
case 0x6a9250:c.instructions+=12;goto B6a9250;
case 0x6a9254:c.instructions+=11;goto B6a9254;
case 0x6a9257:c.instructions+=10;goto B6a9257;
case 0x6a925a:c.instructions+=9;goto B6a925a;
case 0x6a925d:c.instructions+=8;goto B6a925d;
case 0x6a9260:c.instructions+=7;goto B6a9260;
case 0x6a9263:c.instructions+=6;goto B6a9263;
case 0x6a9266:c.instructions+=5;goto B6a9266;
case 0x6a9269:c.instructions+=4;goto B6a9269;
case 0x6a926c:c.instructions+=3;goto B6a926c;
case 0x6a926f:c.instructions+=2;goto B6a926f;
case 0x6a9272:c.instructions+=1;goto B6a9272;
case 0x6a9274:goto L6a9274;
case 0x6a9277:goto L6a9277;
case 0x6a927a:c.instructions+=6;goto B6a927a;
case 0x6a927d:c.instructions+=5;goto B6a927d;
case 0x6a927f:c.instructions+=4;goto B6a927f;
case 0x6a9283:c.instructions+=3;goto B6a9283;
case 0x6a9286:c.instructions+=2;goto B6a9286;
case 0x6a9289:c.instructions+=1;goto B6a9289;
case 0x6a928b:goto L6a928b;
case 0x6a928e:goto L6a928e;
case 0x6a9291:c.instructions+=3;goto B6a9291;
case 0x6a9294:c.instructions+=2;goto B6a9294;
case 0x6a9297:c.instructions+=1;goto B6a9297;
case 0x6a929a:goto L6a929a;
case 0x6a92a1:goto L6a92a1;
case 0x6a92a2:c.instructions+=3;goto B6a92a2;
case 0x6a92a5:c.instructions+=2;goto B6a92a5;
case 0x6a92a8:c.instructions+=1;goto B6a92a8;
case 0x6a92ae:goto L6a92ae;
case 0x6a92b1:c.instructions+=3;goto B6a92b1;
case 0x6a92b4:c.instructions+=2;goto B6a92b4;
case 0x6a92b7:c.instructions+=1;goto B6a92b7;
case 0x6a92bd:goto L6a92bd;
case 0x6a92c1:c.instructions+=1;goto B6a92c1;
case 0x6a92c3:goto L6a92c3;
case 0x6a92c7:c.instructions+=3;goto B6a92c7;
case 0x6a92c9:c.instructions+=2;goto B6a92c9;
case 0x6a92d0:c.instructions+=1;goto B6a92d0;
case 0x6a92d5:goto L6a92d5;
case 0x6a92d9:c.instructions+=2;goto B6a92d9;
case 0x6a92dd:c.instructions+=1;goto B6a92dd;
case 0x6a92e3:goto L6a92e3;
case 0x6a92e6:c.instructions+=5;goto B6a92e6;
case 0x6a92e9:c.instructions+=4;goto B6a92e9;
case 0x6a92ec:c.instructions+=3;goto B6a92ec;
case 0x6a92ee:c.instructions+=2;goto B6a92ee;
case 0x6a92f3:c.instructions+=1;goto B6a92f3;
case 0x6a92f9:goto L6a92f9;
case 0x6a92fb:c.instructions+=2;goto B6a92fb;
case 0x6a92fe:c.instructions+=1;goto B6a92fe;
case 0x6a9300:goto L6a9300;
case 0x6a9303:c.instructions+=5;goto B6a9303;
case 0x6a9305:c.instructions+=4;goto B6a9305;
case 0x6a9308:c.instructions+=3;goto B6a9308;
case 0x6a930b:c.instructions+=2;goto B6a930b;
case 0x6a930e:c.instructions+=1;goto B6a930e;
case 0x6a9314:goto L6a9314;
case 0x6a9319:c.instructions+=1;goto B6a9319;
case 0x6a931f:goto L6a931f;
case 0x6a9323:c.instructions+=4;goto B6a9323;
case 0x6a9327:c.instructions+=3;goto B6a9327;
case 0x6a932a:c.instructions+=2;goto B6a932a;
case 0x6a932d:c.instructions+=1;goto B6a932d;
case 0x6a9333:goto L6a9333;
case 0x6a9336:c.instructions+=9;goto B6a9336;
case 0x6a9339:c.instructions+=8;goto B6a9339;
case 0x6a933c:c.instructions+=7;goto B6a933c;
case 0x6a933f:c.instructions+=6;goto B6a933f;
case 0x6a9342:c.instructions+=5;goto B6a9342;
case 0x6a9345:c.instructions+=4;goto B6a9345;
case 0x6a9348:c.instructions+=3;goto B6a9348;
case 0x6a934b:c.instructions+=2;goto B6a934b;
case 0x6a934f:c.instructions+=1;goto B6a934f;
case 0x6a9355:goto L6a9355;
case 0x6a9359:c.instructions+=1;goto B6a9359;
case 0x6a935f:goto L6a935f;
case 0x6a9362:c.instructions+=7;goto B6a9362;
case 0x6a9365:c.instructions+=6;goto B6a9365;
case 0x6a9368:c.instructions+=5;goto B6a9368;
case 0x6a936a:c.instructions+=4;goto B6a936a;
case 0x6a9370:c.instructions+=3;goto B6a9370;
case 0x6a9376:c.instructions+=2;goto B6a9376;
case 0x6a9379:c.instructions+=1;goto B6a9379;
case 0x6a937f:goto L6a937f;
case 0x6a9382:c.instructions+=3;goto B6a9382;
case 0x6a9386:c.instructions+=2;goto B6a9386;
case 0x6a9388:c.instructions+=1;goto B6a9388;
case 0x6a938a:goto L6a938a;
case 0x6a938d:c.instructions+=1;goto B6a938d;
case 0x6a9390:goto L6a9390;
case 0x6a9393:c.instructions+=2;goto B6a9393;
case 0x6a9395:c.instructions+=1;goto B6a9395;
case 0x6a9397:goto L6a9397;
case 0x6a939a:c.instructions+=3;goto B6a939a;
case 0x6a939e:c.instructions+=2;goto B6a939e;
case 0x6a93a1:c.instructions+=1;goto B6a93a1;
case 0x6a93a3:goto L6a93a3;
case 0x6a93a7:c.instructions+=1;goto B6a93a7;
case 0x6a93ae:goto L6a93ae;
case 0x6a93b1:c.instructions+=12;goto B6a93b1;
case 0x6a93b5:c.instructions+=11;goto B6a93b5;
case 0x6a93b8:c.instructions+=10;goto B6a93b8;
case 0x6a93bb:c.instructions+=9;goto B6a93bb;
case 0x6a93be:c.instructions+=8;goto B6a93be;
case 0x6a93c1:c.instructions+=7;goto B6a93c1;
case 0x6a93c4:c.instructions+=6;goto B6a93c4;
case 0x6a93c7:c.instructions+=5;goto B6a93c7;
case 0x6a93ca:c.instructions+=4;goto B6a93ca;
case 0x6a93cd:c.instructions+=3;goto B6a93cd;
case 0x6a93d0:c.instructions+=2;goto B6a93d0;
case 0x6a93d4:c.instructions+=1;goto B6a93d4;
case 0x6a93da:goto L6a93da;
case 0x6a93de:c.instructions+=1;goto B6a93de;
case 0x6a93e4:goto L6a93e4;
case 0x6a93e7:c.instructions+=7;goto B6a93e7;
case 0x6a93ea:c.instructions+=6;goto B6a93ea;
case 0x6a93ed:c.instructions+=5;goto B6a93ed;
case 0x6a93ef:c.instructions+=4;goto B6a93ef;
case 0x6a93f5:c.instructions+=3;goto B6a93f5;
case 0x6a93fb:c.instructions+=2;goto B6a93fb;
case 0x6a93fe:c.instructions+=1;goto B6a93fe;
case 0x6a9404:goto L6a9404;
case 0x6a9408:c.instructions+=1;goto B6a9408;
case 0x6a940a:goto L6a940a;
case 0x6a940d:c.instructions+=11;goto B6a940d;
case 0x6a9410:c.instructions+=10;goto B6a9410;
case 0x6a9413:c.instructions+=9;goto B6a9413;
case 0x6a9416:c.instructions+=8;goto B6a9416;
case 0x6a9419:c.instructions+=7;goto B6a9419;
case 0x6a941b:c.instructions+=6;goto B6a941b;
case 0x6a941d:c.instructions+=5;goto B6a941d;
case 0x6a941f:c.instructions+=4;goto B6a941f;
case 0x6a9424:c.instructions+=3;goto B6a9424;
case 0x6a9429:c.instructions+=2;goto B6a9429;
case 0x6a942b:c.instructions+=1;goto B6a942b;
case 0x6a942d:goto L6a942d;
case 0x6a9432:c.instructions+=2;goto B6a9432;
case 0x6a9434:c.instructions+=1;goto B6a9434;
case 0x6a9436:goto L6a9436;
case 0x6a943b:c.instructions+=2;goto B6a943b;
case 0x6a943d:c.instructions+=1;goto B6a943d;
case 0x6a943f:goto L6a943f;
case 0x6a9441:goto L6a9441;
case 0x6a9443:c.instructions+=3;goto B6a9443;
case 0x6a9449:c.instructions+=2;goto B6a9449;
case 0x6a944b:c.instructions+=1;goto B6a944b;
case 0x6a944d:goto L6a944d;
case 0x6a9453:c.instructions+=3;goto B6a9453;
case 0x6a9455:c.instructions+=2;goto B6a9455;
case 0x6a9457:c.instructions+=1;goto B6a9457;
case 0x6a945e:goto L6a945e;
case 0x6a9461:c.instructions+=1;goto B6a9461;
case 0x6a9464:goto L6a9464;
case 0x6a9468:c.instructions+=1;goto B6a9468;
case 0x6a946a:goto L6a946a;
case 0x6a946e:c.instructions+=1;goto B6a946e;
case 0x6a9470:goto L6a9470;
case 0x6a9473:c.instructions+=6;goto B6a9473;
case 0x6a9476:c.instructions+=5;goto B6a9476;
case 0x6a9479:c.instructions+=4;goto B6a9479;
case 0x6a947c:c.instructions+=3;goto B6a947c;
case 0x6a947f:c.instructions+=2;goto B6a947f;
case 0x6a9483:c.instructions+=1;goto B6a9483;
case 0x6a9485:goto L6a9485;
case 0x6a9487:c.instructions+=2;goto B6a9487;
case 0x6a948a:c.instructions+=1;goto B6a948a;
case 0x6a948c:goto L6a948c;
case 0x6a948f:c.instructions+=1;goto B6a948f;
case 0x6a9492:goto L6a9492;
case 0x6a9495:c.instructions+=3;goto B6a9495;
case 0x6a9497:c.instructions+=2;goto B6a9497;
case 0x6a949a:c.instructions+=1;goto B6a949a;
case 0x6a949c:goto L6a949c;
case 0x6a94a0:c.instructions+=3;goto B6a94a0;
case 0x6a94a1:c.instructions+=2;goto B6a94a1;
case 0x6a94a4:c.instructions+=1;goto B6a94a4;
case 0x6a94a6:goto L6a94a6;
case 0x6a94a9:c.instructions+=8;goto B6a94a9;
case 0x6a94ac:c.instructions+=7;goto B6a94ac;
case 0x6a94af:c.instructions+=6;goto B6a94af;
case 0x6a94b2:c.instructions+=5;goto B6a94b2;
case 0x6a94b5:c.instructions+=4;goto B6a94b5;
case 0x6a94b9:c.instructions+=3;goto B6a94b9;
case 0x6a94bc:c.instructions+=2;goto B6a94bc;
case 0x6a94bf:c.instructions+=1;goto B6a94bf;
case 0x6a94c2:goto L6a94c2;
case 0x6a94c5:c.instructions+=3;goto B6a94c5;
case 0x6a94c8:c.instructions+=2;goto B6a94c8;
case 0x6a94cc:c.instructions+=1;goto B6a94cc;
case 0x6a94d2:goto L6a94d2;
case 0x6a94d5:c.instructions+=3;goto B6a94d5;
case 0x6a94d8:c.instructions+=2;goto B6a94d8;
case 0x6a94db:c.instructions+=1;goto B6a94db;
case 0x6a94e1:goto L6a94e1;
case 0x6a94e5:c.instructions+=1;goto B6a94e5;
case 0x6a94eb:goto L6a94eb;
case 0x6a94ed:c.instructions+=4;goto B6a94ed;
case 0x6a94ef:c.instructions+=3;goto B6a94ef;
case 0x6a94f4:c.instructions+=2;goto B6a94f4;
case 0x6a94f6:c.instructions+=1;goto B6a94f6;
case 0x6a94fb:goto L6a94fb;
case 0x6a94fd:c.instructions+=2;goto B6a94fd;
case 0x6a9500:c.instructions+=1;goto B6a9500;
case 0x6a9506:goto L6a9506;
case 0x6a9508:c.instructions+=4;goto B6a9508;
case 0x6a950a:c.instructions+=3;goto B6a950a;
case 0x6a950f:c.instructions+=2;goto B6a950f;
case 0x6a9511:c.instructions+=1;goto B6a9511;
case 0x6a9516:goto L6a9516;
case 0x6a9519:c.instructions+=1;goto B6a9519;
case 0x6a951f:goto L6a951f;
case 0x6a9522:c.instructions+=6;goto B6a9522;
case 0x6a9525:c.instructions+=5;goto B6a9525;
case 0x6a9528:c.instructions+=4;goto B6a9528;
case 0x6a9529:c.instructions+=3;goto B6a9529;
case 0x6a952b:c.instructions+=2;goto B6a952b;
case 0x6a952e:c.instructions+=1;goto B6a952e;
case 0x6a9533:goto L6a9533;
case 0x6a9536:c.instructions+=2;goto B6a9536;
case 0x6a9537:c.instructions+=1;goto B6a9537;
case 0x6a953c:goto L6a953c;
case 0x6a953f:c.instructions+=11;goto B6a953f;
case 0x6a9543:c.instructions+=10;goto B6a9543;
case 0x6a9546:c.instructions+=9;goto B6a9546;
case 0x6a9548:c.instructions+=8;goto B6a9548;
case 0x6a954b:c.instructions+=7;goto B6a954b;
case 0x6a954d:c.instructions+=6;goto B6a954d;
case 0x6a954f:c.instructions+=5;goto B6a954f;
case 0x6a9551:c.instructions+=4;goto B6a9551;
case 0x6a9554:c.instructions+=3;goto B6a9554;
case 0x6a9557:c.instructions+=2;goto B6a9557;
case 0x6a9559:c.instructions+=1;goto B6a9559;
case 0x6a955c:goto L6a955c;
case 0x6a955d:c.instructions+=8;goto B6a955d;
case 0x6a955f:c.instructions+=7;goto B6a955f;
case 0x6a9560:c.instructions+=6;goto B6a9560;
case 0x6a9563:c.instructions+=5;goto B6a9563;
case 0x6a9565:c.instructions+=4;goto B6a9565;
case 0x6a9567:c.instructions+=3;goto B6a9567;
case 0x6a956d:c.instructions+=2;goto B6a956d;
case 0x6a956f:c.instructions+=1;goto B6a956f;
case 0x6a9574:goto L6a9574;
case 0x6a9577:c.instructions+=5;goto B6a9577;
case 0x6a957a:c.instructions+=4;goto B6a957a;
case 0x6a957d:c.instructions+=3;goto B6a957d;
case 0x6a9580:c.instructions+=2;goto B6a9580;
case 0x6a9584:c.instructions+=1;goto B6a9584;
case 0x6a958a:goto L6a958a;
case 0x6a958d:c.instructions+=35;goto B6a958d;
case 0x6a958f:c.instructions+=34;goto B6a958f;
case 0x6a9592:c.instructions+=33;goto B6a9592;
case 0x6a9595:c.instructions+=32;goto B6a9595;
case 0x6a9598:c.instructions+=31;goto B6a9598;
case 0x6a959b:c.instructions+=30;goto B6a959b;
case 0x6a959e:c.instructions+=29;goto B6a959e;
case 0x6a95a1:c.instructions+=28;goto B6a95a1;
case 0x6a95a4:c.instructions+=27;goto B6a95a4;
case 0x6a95a7:c.instructions+=26;goto B6a95a7;
case 0x6a95aa:c.instructions+=25;goto B6a95aa;
case 0x6a95ad:c.instructions+=24;goto B6a95ad;
case 0x6a95b0:c.instructions+=23;goto B6a95b0;
case 0x6a95b2:c.instructions+=22;goto B6a95b2;
case 0x6a95b5:c.instructions+=21;goto B6a95b5;
case 0x6a95b8:c.instructions+=20;goto B6a95b8;
case 0x6a95bb:c.instructions+=19;goto B6a95bb;
case 0x6a95be:c.instructions+=18;goto B6a95be;
case 0x6a95c1:c.instructions+=17;goto B6a95c1;
case 0x6a95c4:c.instructions+=16;goto B6a95c4;
case 0x6a95c7:c.instructions+=15;goto B6a95c7;
case 0x6a95ca:c.instructions+=14;goto B6a95ca;
case 0x6a95ce:c.instructions+=13;goto B6a95ce;
case 0x6a95d1:c.instructions+=12;goto B6a95d1;
case 0x6a95d4:c.instructions+=11;goto B6a95d4;
case 0x6a95d7:c.instructions+=10;goto B6a95d7;
case 0x6a95da:c.instructions+=9;goto B6a95da;
case 0x6a95dd:c.instructions+=8;goto B6a95dd;
case 0x6a95e0:c.instructions+=7;goto B6a95e0;
case 0x6a95e2:c.instructions+=6;goto B6a95e2;
case 0x6a95e5:c.instructions+=5;goto B6a95e5;
case 0x6a95e7:c.instructions+=4;goto B6a95e7;
case 0x6a95ec:c.instructions+=3;goto B6a95ec;
case 0x6a95ee:c.instructions+=2;goto B6a95ee;
case 0x6a95f2:c.instructions+=1;goto B6a95f2;
case 0x6a95f8:goto L6a95f8;
case 0x6a95fb:c.instructions+=11;goto B6a95fb;
case 0x6a95fe:c.instructions+=10;goto B6a95fe;
case 0x6a9601:c.instructions+=9;goto B6a9601;
case 0x6a9604:c.instructions+=8;goto B6a9604;
case 0x6a9606:c.instructions+=7;goto B6a9606;
case 0x6a9609:c.instructions+=6;goto B6a9609;
case 0x6a960b:c.instructions+=5;goto B6a960b;
case 0x6a960e:c.instructions+=4;goto B6a960e;
case 0x6a9610:c.instructions+=3;goto B6a9610;
case 0x6a9612:c.instructions+=2;goto B6a9612;
case 0x6a9614:c.instructions+=1;goto B6a9614;
case 0x6a9619:goto L6a9619;
case 0x6a961c:c.instructions+=5;goto B6a961c;
case 0x6a961f:c.instructions+=4;goto B6a961f;
case 0x6a9622:c.instructions+=3;goto B6a9622;
case 0x6a9625:c.instructions+=2;goto B6a9625;
case 0x6a9627:c.instructions+=1;goto B6a9627;
case 0x6a9629:goto L6a9629;
case 0x6a962c:c.instructions+=6;goto B6a962c;
case 0x6a962f:c.instructions+=5;goto B6a962f;
case 0x6a9632:c.instructions+=4;goto B6a9632;
case 0x6a9633:c.instructions+=3;goto B6a9633;
case 0x6a9635:c.instructions+=2;goto B6a9635;
case 0x6a9637:c.instructions+=1;goto B6a9637;
case 0x6a9639:goto L6a9639;
case 0x6a963c:c.instructions+=6;goto B6a963c;
case 0x6a963f:c.instructions+=5;goto B6a963f;
case 0x6a9642:c.instructions+=4;goto B6a9642;
case 0x6a9645:c.instructions+=3;goto B6a9645;
case 0x6a9649:c.instructions+=2;goto B6a9649;
case 0x6a964b:c.instructions+=1;goto B6a964b;
case 0x6a9650:goto L6a9650;
case 0x6a9657:goto L6a9657;
case 0x6a965a:c.instructions+=3;goto B6a965a;
case 0x6a965d:c.instructions+=2;goto B6a965d;
case 0x6a9660:c.instructions+=1;goto B6a9660;
case 0x6a9666:goto L6a9666;
case 0x6a966a:c.instructions+=1;goto B6a966a;
case 0x6a966c:goto L6a966c;
case 0x6a9670:c.instructions+=3;goto B6a9670;
case 0x6a9672:c.instructions+=2;goto B6a9672;
case 0x6a9679:c.instructions+=1;goto B6a9679;
case 0x6a967e:goto L6a967e;
case 0x6a9680:c.instructions+=3;goto B6a9680;
case 0x6a9683:c.instructions+=2;goto B6a9683;
case 0x6a9686:c.instructions+=1;goto B6a9686;
case 0x6a968c:goto L6a968c;
case 0x6a968f:c.instructions+=6;goto B6a968f;
case 0x6a9692:c.instructions+=5;goto B6a9692;
case 0x6a9695:c.instructions+=4;goto B6a9695;
case 0x6a9697:c.instructions+=3;goto B6a9697;
case 0x6a969c:c.instructions+=2;goto B6a969c;
case 0x6a969f:c.instructions+=1;goto B6a969f;
case 0x6a96a5:goto L6a96a5;
case 0x6a96a8:c.instructions+=1;goto B6a96a8;
case 0x6a96aa:goto L6a96aa;
case 0x6a96ad:c.instructions+=5;goto B6a96ad;
case 0x6a96af:c.instructions+=4;goto B6a96af;
case 0x6a96b2:c.instructions+=3;goto B6a96b2;
case 0x6a96b5:c.instructions+=2;goto B6a96b5;
case 0x6a96b8:c.instructions+=1;goto B6a96b8;
case 0x6a96be:goto L6a96be;
case 0x6a96c3:c.instructions+=1;goto B6a96c3;
case 0x6a96c9:goto L6a96c9;
case 0x6a96cc:c.instructions+=2;goto B6a96cc;
case 0x6a96cf:c.instructions+=1;goto B6a96cf;
case 0x6a96d5:goto L6a96d5;
case 0x6a96d8:c.instructions+=11;goto B6a96d8;
case 0x6a96db:c.instructions+=10;goto B6a96db;
case 0x6a96de:c.instructions+=9;goto B6a96de;
case 0x6a96e1:c.instructions+=8;goto B6a96e1;
case 0x6a96e3:c.instructions+=7;goto B6a96e3;
case 0x6a96e6:c.instructions+=6;goto B6a96e6;
case 0x6a96e9:c.instructions+=5;goto B6a96e9;
case 0x6a96ec:c.instructions+=4;goto B6a96ec;
case 0x6a96ef:c.instructions+=3;goto B6a96ef;
case 0x6a96f2:c.instructions+=2;goto B6a96f2;
case 0x6a96f6:c.instructions+=1;goto B6a96f6;
case 0x6a96fc:goto L6a96fc;
case 0x6a9700:c.instructions+=1;goto B6a9700;
case 0x6a9706:goto L6a9706;
case 0x6a9709:c.instructions+=6;goto B6a9709;
case 0x6a970c:c.instructions+=5;goto B6a970c;
case 0x6a970f:c.instructions+=4;goto B6a970f;
case 0x6a9711:c.instructions+=3;goto B6a9711;
case 0x6a9717:c.instructions+=2;goto B6a9717;
case 0x6a971d:c.instructions+=1;goto B6a971d;
case 0x6a9723:goto L6a9723;
case 0x6a9726:c.instructions+=4;goto B6a9726;
case 0x6a972a:c.instructions+=3;goto B6a972a;
case 0x6a972c:c.instructions+=2;goto B6a972c;
case 0x6a972f:c.instructions+=1;goto B6a972f;
case 0x6a9731:goto L6a9731;
case 0x6a9734:c.instructions+=1;goto B6a9734;
case 0x6a9737:goto L6a9737;
case 0x6a973a:c.instructions+=2;goto B6a973a;
case 0x6a973c:c.instructions+=1;goto B6a973c;
case 0x6a973e:goto L6a973e;
case 0x6a9741:c.instructions+=3;goto B6a9741;
case 0x6a9745:c.instructions+=2;goto B6a9745;
case 0x6a9748:c.instructions+=1;goto B6a9748;
case 0x6a974a:goto L6a974a;
case 0x6a974d:c.instructions+=3;goto B6a974d;
case 0x6a9750:c.instructions+=2;goto B6a9750;
case 0x6a9754:c.instructions+=1;goto B6a9754;
case 0x6a9757:goto L6a9757;
case 0x6a9759:c.instructions+=6;goto B6a9759;
case 0x6a975c:c.instructions+=5;goto B6a975c;
case 0x6a975f:c.instructions+=4;goto B6a975f;
case 0x6a9762:c.instructions+=3;goto B6a9762;
case 0x6a9765:c.instructions+=2;goto B6a9765;
case 0x6a9769:c.instructions+=1;goto B6a9769;
case 0x6a976b:goto L6a976b;
case 0x6a976e:c.instructions+=1;goto B6a976e;
case 0x6a9770:goto L6a9770;
case 0x6a9774:c.instructions+=1;goto B6a9774;
case 0x6a9776:goto L6a9776;
case 0x6a9779:c.instructions+=5;goto B6a9779;
case 0x6a977c:c.instructions+=4;goto B6a977c;
case 0x6a977f:c.instructions+=3;goto B6a977f;
case 0x6a9781:c.instructions+=2;goto B6a9781;
case 0x6a9785:c.instructions+=1;goto B6a9785;
case 0x6a9787:goto L6a9787;
case 0x6a9789:goto L6a9789;
case 0x6a978e:c.instructions+=1;goto B6a978e;
case 0x6a9793:goto L6a9793;
case 0x6a9795:c.instructions+=9;goto B6a9795;
case 0x6a9796:c.instructions+=8;goto B6a9796;
case 0x6a9798:c.instructions+=7;goto B6a9798;
case 0x6a979b:c.instructions+=6;goto B6a979b;
case 0x6a979e:c.instructions+=5;goto B6a979e;
case 0x6a97a2:c.instructions+=4;goto B6a97a2;
case 0x6a97a5:c.instructions+=3;goto B6a97a5;
case 0x6a97a8:c.instructions+=2;goto B6a97a8;
case 0x6a97ab:c.instructions+=1;goto B6a97ab;
case 0x6a97ad:goto L6a97ad;
case 0x6a97b0:goto L6a97b0;
case 0x6a97b3:c.instructions+=3;goto B6a97b3;
case 0x6a97b6:c.instructions+=2;goto B6a97b6;
case 0x6a97b9:c.instructions+=1;goto B6a97b9;
case 0x6a97bf:goto L6a97bf;
case 0x6a97c1:goto L6a97c1;
case 0x6a97c4:c.instructions+=3;goto B6a97c4;
case 0x6a97c7:c.instructions+=2;goto B6a97c7;
case 0x6a97ca:c.instructions+=1;goto B6a97ca;
case 0x6a97d0:goto L6a97d0;
case 0x6a97d3:c.instructions+=1;goto B6a97d3;
case 0x6a97d9:goto L6a97d9;
case 0x6a97dc:c.instructions+=1;goto B6a97dc;
case 0x6a97e2:goto L6a97e2;
case 0x6a97e5:c.instructions+=4;goto B6a97e5;
case 0x6a97e7:c.instructions+=3;goto B6a97e7;
case 0x6a97ea:c.instructions+=2;goto B6a97ea;
case 0x6a97ed:c.instructions+=1;goto B6a97ed;
case 0x6a97f3:goto L6a97f3;
case 0x6a97f6:c.instructions+=7;goto B6a97f6;
case 0x6a97f9:c.instructions+=6;goto B6a97f9;
case 0x6a97fc:c.instructions+=5;goto B6a97fc;
case 0x6a97ff:c.instructions+=4;goto B6a97ff;
case 0x6a9802:c.instructions+=3;goto B6a9802;
case 0x6a9804:c.instructions+=2;goto B6a9804;
case 0x6a9807:c.instructions+=1;goto B6a9807;
case 0x6a9809:goto L6a9809;
case 0x6a980c:c.instructions+=5;goto B6a980c;
case 0x6a980e:c.instructions+=4;goto B6a980e;
case 0x6a9811:c.instructions+=3;goto B6a9811;
case 0x6a9814:c.instructions+=2;goto B6a9814;
case 0x6a9817:c.instructions+=1;goto B6a9817;
case 0x6a981d:goto L6a981d;
case 0x6a981f:c.instructions+=3;goto B6a981f;
case 0x6a9824:c.instructions+=2;goto B6a9824;
case 0x6a9829:c.instructions+=1;goto B6a9829;
case 0x6a982b:goto L6a982b;
case 0x6a9830:c.instructions+=1;goto B6a9830;
case 0x6a9836:goto L6a9836;
case 0x6a9839:c.instructions+=1;goto B6a9839;
case 0x6a983b:goto L6a983b;
case 0x6a983d:c.instructions+=4;goto B6a983d;
case 0x6a983e:c.instructions+=3;goto B6a983e;
case 0x6a9840:c.instructions+=2;goto B6a9840;
case 0x6a9843:c.instructions+=1;goto B6a9843;
case 0x6a9845:goto L6a9845;
case 0x6a9848:goto L6a9848;
case 0x6a984b:c.instructions+=1;goto B6a984b;
case 0x6a9850:goto L6a9850;
case 0x6a9853:c.instructions+=3;goto B6a9853;
case 0x6a9856:c.instructions+=2;goto B6a9856;
case 0x6a9857:c.instructions+=1;goto B6a9857;
case 0x6a985c:goto L6a985c;
case 0x6a985e:c.instructions+=4;goto B6a985e;
case 0x6a985f:c.instructions+=3;goto B6a985f;
case 0x6a9860:c.instructions+=2;goto B6a9860;
case 0x6a9863:c.instructions+=1;goto B6a9863;
case 0x6a9869:goto L6a9869;
case 0x6a986c:c.instructions+=1;goto B6a986c;
case 0x6a9871:goto L6a9871;
case 0x6a9874:c.instructions+=3;goto B6a9874;
case 0x6a9877:c.instructions+=2;goto B6a9877;
case 0x6a9878:c.instructions+=1;goto B6a9878;
case 0x6a987d:goto L6a987d;
case 0x6a987f:c.instructions+=4;goto B6a987f;
case 0x6a9880:c.instructions+=3;goto B6a9880;
case 0x6a9881:c.instructions+=2;goto B6a9881;
case 0x6a9884:c.instructions+=1;goto B6a9884;
case 0x6a988a:goto L6a988a;
case 0x6a988e:c.instructions+=2;goto B6a988e;
case 0x6a9890:c.instructions+=1;goto B6a9890;
case 0x6a9892:goto L6a9892;
case 0x6a9895:c.instructions+=3;goto B6a9895;
case 0x6a9898:c.instructions+=2;goto B6a9898;
case 0x6a989b:c.instructions+=1;goto B6a989b;
case 0x6a989e:goto L6a989e;
case 0x6a98a1:c.instructions+=11;goto B6a98a1;
case 0x6a98a3:c.instructions+=10;goto B6a98a3;
case 0x6a98a6:c.instructions+=9;goto B6a98a6;
case 0x6a98a9:c.instructions+=8;goto B6a98a9;
case 0x6a98ab:c.instructions+=7;goto B6a98ab;
case 0x6a98ac:c.instructions+=6;goto B6a98ac;
case 0x6a98af:c.instructions+=5;goto B6a98af;
case 0x6a98b0:c.instructions+=4;goto B6a98b0;
case 0x6a98b3:c.instructions+=3;goto B6a98b3;
case 0x6a98b6:c.instructions+=2;goto B6a98b6;
case 0x6a98b8:c.instructions+=1;goto B6a98b8;
case 0x6a98bd:goto L6a98bd;
case 0x6a98bf:c.instructions+=1;goto B6a98bf;
case 0x6a98c1:goto L6a98c1;
case 0x6a98c4:c.instructions+=5;goto B6a98c4;
case 0x6a98c7:c.instructions+=4;goto B6a98c7;
case 0x6a98c9:c.instructions+=3;goto B6a98c9;
case 0x6a98cc:c.instructions+=2;goto B6a98cc;
case 0x6a98cf:c.instructions+=1;goto B6a98cf;
case 0x6a98d1:goto L6a98d1;
case 0x6a98d4:c.instructions+=4;goto B6a98d4;
case 0x6a98d8:c.instructions+=3;goto B6a98d8;
case 0x6a98dc:c.instructions+=2;goto B6a98dc;
case 0x6a98df:c.instructions+=1;goto B6a98df;
case 0x6a98e1:goto L6a98e1;
case 0x6a98e4:c.instructions+=1;goto B6a98e4;
case 0x6a98ea:goto L6a98ea;
case 0x6a98ed:c.instructions+=7;goto B6a98ed;
case 0x6a98ef:c.instructions+=6;goto B6a98ef;
case 0x6a98f0:c.instructions+=5;goto B6a98f0;
case 0x6a98f2:c.instructions+=4;goto B6a98f2;
case 0x6a98f4:c.instructions+=3;goto B6a98f4;
case 0x6a98f7:c.instructions+=2;goto B6a98f7;
case 0x6a98fa:c.instructions+=1;goto B6a98fa;
case 0x6a98fc:goto L6a98fc;
case 0x6a98fe:c.instructions+=1;goto B6a98fe;
case 0x6a9900:goto L6a9900;
case 0x6a9904:c.instructions+=5;goto B6a9904;
case 0x6a9907:c.instructions+=4;goto B6a9907;
case 0x6a9909:c.instructions+=3;goto B6a9909;
case 0x6a990b:c.instructions+=2;goto B6a990b;
case 0x6a990e:c.instructions+=1;goto B6a990e;
case 0x6a9910:goto L6a9910;
case 0x6a9914:goto L6a9914;
case 0x6a9917:c.instructions+=4;goto B6a9917;
case 0x6a991d:c.instructions+=3;goto B6a991d;
case 0x6a991f:c.instructions+=2;goto B6a991f;
case 0x6a9922:c.instructions+=1;goto B6a9922;
case 0x6a9924:goto L6a9924;
case 0x6a9927:c.instructions+=4;goto B6a9927;
case 0x6a992d:c.instructions+=3;goto B6a992d;
case 0x6a992f:c.instructions+=2;goto B6a992f;
case 0x6a9932:c.instructions+=1;goto B6a9932;
case 0x6a9934:goto L6a9934;
case 0x6a9938:goto L6a9938;
case 0x6a9939:c.instructions+=2;goto B6a9939;
case 0x6a993b:c.instructions+=1;goto B6a993b;
case 0x6a993d:goto L6a993d;
case 0x6a9941:c.instructions+=1;goto B6a9941;
case 0x6a9947:goto L6a9947;
case 0x6a9949:c.instructions+=5;goto B6a9949;
case 0x6a994f:c.instructions+=4;goto B6a994f;
case 0x6a9951:c.instructions+=3;goto B6a9951;
case 0x6a9953:c.instructions+=2;goto B6a9953;
case 0x6a9956:c.instructions+=1;goto B6a9956;
case 0x6a995c:goto L6a995c;
case 0x6a995e:c.instructions+=4;goto B6a995e;
case 0x6a9963:c.instructions+=3;goto B6a9963;
case 0x6a9968:c.instructions+=2;goto B6a9968;
case 0x6a996a:c.instructions+=1;goto B6a996a;
case 0x6a996c:goto L6a996c;
case 0x6a996e:c.instructions+=5;goto B6a996e;
case 0x6a9971:c.instructions+=4;goto B6a9971;
case 0x6a9974:c.instructions+=3;goto B6a9974;
case 0x6a997b:c.instructions+=2;goto B6a997b;
case 0x6a997e:c.instructions+=1;goto B6a997e;
case 0x6a9980:goto L6a9980;
case 0x6a9981:c.instructions+=1;goto B6a9981;
case 0x6a9986:goto L6a9986;
case 0x6a9988:c.instructions+=3;goto B6a9988;
case 0x6a998a:c.instructions+=2;goto B6a998a;
case 0x6a998d:c.instructions+=1;goto B6a998d;
case 0x6a9993:goto L6a9993;
case 0x6a9996:c.instructions+=2;goto B6a9996;
case 0x6a9999:c.instructions+=1;goto B6a9999;
case 0x6a999c:goto L6a999c;
case 0x6a999e:goto L6a999e;
case 0x6a99a1:goto L6a99a1;
case 0x6a99a5:c.instructions+=2;goto B6a99a5;
case 0x6a99a7:c.instructions+=1;goto B6a99a7;
case 0x6a99ad:goto L6a99ad;
case 0x6a99af:c.instructions+=2;goto B6a99af;
case 0x6a99b2:c.instructions+=1;goto B6a99b2;
case 0x6a99b5:goto L6a99b5;
case 0x6a99b8:c.instructions+=8;goto B6a99b8;
case 0x6a99bb:c.instructions+=7;goto B6a99bb;
case 0x6a99be:c.instructions+=6;goto B6a99be;
case 0x6a99c1:c.instructions+=5;goto B6a99c1;
case 0x6a99c3:c.instructions+=4;goto B6a99c3;
case 0x6a99c5:c.instructions+=3;goto B6a99c5;
case 0x6a99c7:c.instructions+=2;goto B6a99c7;
case 0x6a99c9:c.instructions+=1;goto B6a99c9;
case 0x6a99cb:goto L6a99cb;
case 0x6a99cd:c.instructions+=1;goto B6a99cd;
case 0x6a99d4:goto L6a99d4;
case 0x6a99d7:c.instructions+=5;goto B6a99d7;
case 0x6a99da:c.instructions+=4;goto B6a99da;
case 0x6a99dc:c.instructions+=3;goto B6a99dc;
case 0x6a99de:c.instructions+=2;goto B6a99de;
case 0x6a99e0:c.instructions+=1;goto B6a99e0;
case 0x6a99e2:goto L6a99e2;
case 0x6a99e4:c.instructions+=1;goto B6a99e4;
case 0x6a99eb:goto L6a99eb;
case 0x6a99ee:c.instructions+=3;goto B6a99ee;
case 0x6a99f2:c.instructions+=2;goto B6a99f2;
case 0x6a99f5:c.instructions+=1;goto B6a99f5;
case 0x6a99f7:goto L6a99f7;
case 0x6a99fc:goto L6a99fc;
case 0x6a99fe:c.instructions+=5;goto B6a99fe;
case 0x6a9a04:c.instructions+=4;goto B6a9a04;
case 0x6a9a06:c.instructions+=3;goto B6a9a06;
case 0x6a9a08:c.instructions+=2;goto B6a9a08;
case 0x6a9a0b:c.instructions+=1;goto B6a9a0b;
case 0x6a9a0d:goto L6a9a0d;
case 0x6a9a11:c.instructions+=7;goto B6a9a11;
case 0x6a9a13:c.instructions+=6;goto B6a9a13;
case 0x6a9a18:c.instructions+=5;goto B6a9a18;
case 0x6a9a1d:c.instructions+=4;goto B6a9a1d;
case 0x6a9a1f:c.instructions+=3;goto B6a9a1f;
case 0x6a9a21:c.instructions+=2;goto B6a9a21;
case 0x6a9a24:c.instructions+=1;goto B6a9a24;
case 0x6a9a26:goto L6a9a26;
case 0x6a9a29:c.instructions+=8;goto B6a9a29;
case 0x6a9a2c:c.instructions+=7;goto B6a9a2c;
case 0x6a9a2f:c.instructions+=6;goto B6a9a2f;
case 0x6a9a32:c.instructions+=5;goto B6a9a32;
case 0x6a9a35:c.instructions+=4;goto B6a9a35;
case 0x6a9a38:c.instructions+=3;goto B6a9a38;
case 0x6a9a3b:c.instructions+=2;goto B6a9a3b;
case 0x6a9a3e:c.instructions+=1;goto B6a9a3e;
case 0x6a9a40:goto L6a9a40;
case 0x6a9a47:c.instructions+=1;goto B6a9a47;
case 0x6a9a4c:goto L6a9a4c;
case 0x6a9a4e:c.instructions+=5;goto B6a9a4e;
case 0x6a9a54:c.instructions+=4;goto B6a9a54;
case 0x6a9a56:c.instructions+=3;goto B6a9a56;
case 0x6a9a58:c.instructions+=2;goto B6a9a58;
case 0x6a9a5b:c.instructions+=1;goto B6a9a5b;
case 0x6a9a5d:goto L6a9a5d;
case 0x6a9a5f:c.instructions+=6;goto B6a9a5f;
case 0x6a9a64:c.instructions+=5;goto B6a9a64;
case 0x6a9a69:c.instructions+=4;goto B6a9a69;
case 0x6a9a6d:c.instructions+=3;goto B6a9a6d;
case 0x6a9a6f:c.instructions+=2;goto B6a9a6f;
case 0x6a9a72:c.instructions+=1;goto B6a9a72;
case 0x6a9a74:goto L6a9a74;
case 0x6a9a75:c.instructions+=8;goto B6a9a75;
case 0x6a9a77:c.instructions+=7;goto B6a9a77;
case 0x6a9a78:c.instructions+=6;goto B6a9a78;
case 0x6a9a7b:c.instructions+=5;goto B6a9a7b;
case 0x6a9a7d:c.instructions+=4;goto B6a9a7d;
case 0x6a9a7f:c.instructions+=3;goto B6a9a7f;
case 0x6a9a82:c.instructions+=2;goto B6a9a82;
case 0x6a9a84:c.instructions+=1;goto B6a9a84;
case 0x6a9a89:goto L6a9a89;
case 0x6a9a8c:c.instructions+=2;goto B6a9a8c;
case 0x6a9a8f:c.instructions+=1;goto B6a9a8f;
case 0x6a9a95:goto L6a9a95;
case 0x6a9a97:c.instructions+=2;goto B6a9a97;
case 0x6a9a99:c.instructions+=1;goto B6a9a99;
case 0x6a9a9b:goto L6a9a9b;
case 0x6a9a9e:c.instructions+=5;goto B6a9a9e;
case 0x6a9aa1:c.instructions+=4;goto B6a9aa1;
case 0x6a9aa4:c.instructions+=3;goto B6a9aa4;
case 0x6a9aa5:c.instructions+=2;goto B6a9aa5;
case 0x6a9aa7:c.instructions+=1;goto B6a9aa7;
case 0x6a9aa9:goto L6a9aa9;
case 0x6a9aab:goto L6a9aab;
case 0x6a9aad:c.instructions+=5;goto B6a9aad;
case 0x6a9ab3:c.instructions+=4;goto B6a9ab3;
case 0x6a9ab5:c.instructions+=3;goto B6a9ab5;
case 0x6a9ab7:c.instructions+=2;goto B6a9ab7;
case 0x6a9aba:c.instructions+=1;goto B6a9aba;
case 0x6a9abc:goto L6a9abc;
case 0x6a9abe:c.instructions+=4;goto B6a9abe;
case 0x6a9ac3:c.instructions+=3;goto B6a9ac3;
case 0x6a9ac8:c.instructions+=2;goto B6a9ac8;
case 0x6a9aca:c.instructions+=1;goto B6a9aca;
case 0x6a9acc:goto L6a9acc;
case 0x6a9ace:c.instructions+=2;goto B6a9ace;
case 0x6a9ad1:c.instructions+=1;goto B6a9ad1;
case 0x6a9ad8:goto L6a9ad8;
case 0x6a9adc:c.instructions+=2;goto B6a9adc;
case 0x6a9ade:c.instructions+=1;goto B6a9ade;
case 0x6a9ae4:goto L6a9ae4;
case 0x6a9ae7:c.instructions+=7;goto B6a9ae7;
case 0x6a9aea:c.instructions+=6;goto B6a9aea;
case 0x6a9aed:c.instructions+=5;goto B6a9aed;
case 0x6a9af0:c.instructions+=4;goto B6a9af0;
case 0x6a9af2:c.instructions+=3;goto B6a9af2;
case 0x6a9af5:c.instructions+=2;goto B6a9af5;
case 0x6a9af7:c.instructions+=1;goto B6a9af7;
case 0x6a9af9:goto L6a9af9;
case 0x6a9afb:c.instructions+=1;goto B6a9afb;
case 0x6a9b02:goto L6a9b02;
case 0x6a9b05:c.instructions+=2;goto B6a9b05;
case 0x6a9b08:c.instructions+=1;goto B6a9b08;
case 0x6a9b0a:goto L6a9b0a;
case 0x6a9b0f:goto L6a9b0f;
case 0x6a9b13:c.instructions+=1;goto B6a9b13;
case 0x6a9b15:goto L6a9b15;
case 0x6a9b19:c.instructions+=1;goto B6a9b19;
case 0x6a9b1f:goto L6a9b1f;
case 0x6a9b21:c.instructions+=4;goto B6a9b21;
case 0x6a9b26:c.instructions+=3;goto B6a9b26;
case 0x6a9b2b:c.instructions+=2;goto B6a9b2b;
case 0x6a9b2d:c.instructions+=1;goto B6a9b2d;
case 0x6a9b2f:goto L6a9b2f;
case 0x6a9b31:c.instructions+=5;goto B6a9b31;
case 0x6a9b34:c.instructions+=4;goto B6a9b34;
case 0x6a9b37:c.instructions+=3;goto B6a9b37;
case 0x6a9b3e:c.instructions+=2;goto B6a9b3e;
case 0x6a9b41:c.instructions+=1;goto B6a9b41;
case 0x6a9b43:goto L6a9b43;
case 0x6a9b44:c.instructions+=1;goto B6a9b44;
case 0x6a9b49:goto L6a9b49;
case 0x6a9b4b:c.instructions+=3;goto B6a9b4b;
case 0x6a9b4d:c.instructions+=2;goto B6a9b4d;
case 0x6a9b50:c.instructions+=1;goto B6a9b50;
case 0x6a9b56:goto L6a9b56;
case 0x6a9b59:c.instructions+=2;goto B6a9b59;
case 0x6a9b5c:c.instructions+=1;goto B6a9b5c;
case 0x6a9b5f:goto L6a9b5f;
case 0x6a9b61:goto L6a9b61;
case 0x6a9b64:goto L6a9b64;
case 0x6a9b68:c.instructions+=2;goto B6a9b68;
case 0x6a9b6a:c.instructions+=1;goto B6a9b6a;
case 0x6a9b70:goto L6a9b70;
case 0x6a9b72:c.instructions+=2;goto B6a9b72;
case 0x6a9b75:c.instructions+=1;goto B6a9b75;
case 0x6a9b78:goto L6a9b78;
case 0x6a9b7b:c.instructions+=7;goto B6a9b7b;
case 0x6a9b7e:c.instructions+=6;goto B6a9b7e;
case 0x6a9b81:c.instructions+=5;goto B6a9b81;
case 0x6a9b84:c.instructions+=4;goto B6a9b84;
case 0x6a9b86:c.instructions+=3;goto B6a9b86;
case 0x6a9b89:c.instructions+=2;goto B6a9b89;
case 0x6a9b8b:c.instructions+=1;goto B6a9b8b;
case 0x6a9b8d:goto L6a9b8d;
case 0x6a9b8f:c.instructions+=1;goto B6a9b8f;
case 0x6a9b96:goto L6a9b96;
case 0x6a9b99:c.instructions+=4;goto B6a9b99;
case 0x6a9b9c:c.instructions+=3;goto B6a9b9c;
case 0x6a9b9f:c.instructions+=2;goto B6a9b9f;
case 0x6a9ba2:c.instructions+=1;goto B6a9ba2;
case 0x6a9ba4:goto L6a9ba4;
case 0x6a9ba7:c.instructions+=2;goto B6a9ba7;
case 0x6a9baa:c.instructions+=1;goto B6a9baa;
case 0x6a9bac:goto L6a9bac;
case 0x6a9bae:goto L6a9bae;
case 0x6a9bb0:c.instructions+=1;goto B6a9bb0;
case 0x6a9bb2:goto L6a9bb2;
case 0x6a9bb5:c.instructions+=4;goto B6a9bb5;
case 0x6a9bb8:c.instructions+=3;goto B6a9bb8;
case 0x6a9bbb:c.instructions+=2;goto B6a9bbb;
case 0x6a9bbf:c.instructions+=1;goto B6a9bbf;
case 0x6a9bc1:goto L6a9bc1;
case 0x6a9bc5:c.instructions+=1;goto B6a9bc5;
case 0x6a9bc7:goto L6a9bc7;
case 0x6a9bca:c.instructions+=7;goto B6a9bca;
case 0x6a9bcd:c.instructions+=6;goto B6a9bcd;
case 0x6a9bd0:c.instructions+=5;goto B6a9bd0;
case 0x6a9bd3:c.instructions+=4;goto B6a9bd3;
case 0x6a9bd5:c.instructions+=3;goto B6a9bd5;
case 0x6a9bd7:c.instructions+=2;goto B6a9bd7;
case 0x6a9bda:c.instructions+=1;goto B6a9bda;
case 0x6a9bdc:goto L6a9bdc;
case 0x6a9bdf:c.instructions+=10;goto B6a9bdf;
case 0x6a9be2:c.instructions+=9;goto B6a9be2;
case 0x6a9be5:c.instructions+=8;goto B6a9be5;
case 0x6a9be6:c.instructions+=7;goto B6a9be6;
case 0x6a9be7:c.instructions+=6;goto B6a9be7;
case 0x6a9bea:c.instructions+=5;goto B6a9bea;
case 0x6a9bec:c.instructions+=4;goto B6a9bec;
case 0x6a9bee:c.instructions+=3;goto B6a9bee;
case 0x6a9bf1:c.instructions+=2;goto B6a9bf1;
case 0x6a9bf3:c.instructions+=1;goto B6a9bf3;
case 0x6a9bf8:goto L6a9bf8;
case 0x6a9bfb:c.instructions+=5;goto B6a9bfb;
case 0x6a9bfe:c.instructions+=4;goto B6a9bfe;
case 0x6a9c01:c.instructions+=3;goto B6a9c01;
case 0x6a9c04:c.instructions+=2;goto B6a9c04;
case 0x6a9c08:c.instructions+=1;goto B6a9c08;
case 0x6a9c0e:goto L6a9c0e;
case 0x6a9c15:goto L6a9c15;
case 0x6a9c18:c.instructions+=3;goto B6a9c18;
case 0x6a9c1c:c.instructions+=2;goto B6a9c1c;
case 0x6a9c1f:c.instructions+=1;goto B6a9c1f;
case 0x6a9c25:goto L6a9c25;
case 0x6a9c27:c.instructions+=3;goto B6a9c27;
case 0x6a9c2c:c.instructions+=2;goto B6a9c2c;
case 0x6a9c31:c.instructions+=1;goto B6a9c31;
case 0x6a9c37:goto L6a9c37;
case 0x6a9c3a:c.instructions+=6;goto B6a9c3a;
case 0x6a9c3c:c.instructions+=5;goto B6a9c3c;
case 0x6a9c3e:c.instructions+=4;goto B6a9c3e;
case 0x6a9c41:c.instructions+=3;goto B6a9c41;
case 0x6a9c44:c.instructions+=2;goto B6a9c44;
case 0x6a9c47:c.instructions+=1;goto B6a9c47;
case 0x6a9c4d:goto L6a9c4d;
case 0x6a9c50:c.instructions+=20;goto B6a9c50;
case 0x6a9c53:c.instructions+=19;goto B6a9c53;
case 0x6a9c56:c.instructions+=18;goto B6a9c56;
case 0x6a9c59:c.instructions+=17;goto B6a9c59;
case 0x6a9c5c:c.instructions+=16;goto B6a9c5c;
case 0x6a9c5f:c.instructions+=15;goto B6a9c5f;
case 0x6a9c62:c.instructions+=14;goto B6a9c62;
case 0x6a9c64:c.instructions+=13;goto B6a9c64;
case 0x6a9c67:c.instructions+=12;goto B6a9c67;
case 0x6a9c68:c.instructions+=11;goto B6a9c68;
case 0x6a9c6b:c.instructions+=10;goto B6a9c6b;
case 0x6a9c6c:c.instructions+=9;goto B6a9c6c;
case 0x6a9c6f:c.instructions+=8;goto B6a9c6f;
case 0x6a9c70:c.instructions+=7;goto B6a9c70;
case 0x6a9c73:c.instructions+=6;goto B6a9c73;
case 0x6a9c74:c.instructions+=5;goto B6a9c74;
case 0x6a9c75:c.instructions+=4;goto B6a9c75;
case 0x6a9c78:c.instructions+=3;goto B6a9c78;
case 0x6a9c7b:c.instructions+=2;goto B6a9c7b;
case 0x6a9c7d:c.instructions+=1;goto B6a9c7d;
case 0x6a9c82:goto L6a9c82;
case 0x6a9c84:c.instructions+=1;goto B6a9c84;
case 0x6a9c8a:goto L6a9c8a;
case 0x6a9c8d:c.instructions+=3;goto B6a9c8d;
case 0x6a9c90:c.instructions+=2;goto B6a9c90;
case 0x6a9c92:c.instructions+=1;goto B6a9c92;
case 0x6a9c94:goto L6a9c94;
case 0x6a9c97:c.instructions+=2;goto B6a9c97;
case 0x6a9c99:c.instructions+=1;goto B6a9c99;
case 0x6a9c9b:goto L6a9c9b;
case 0x6a9c9e:c.instructions+=7;goto B6a9c9e;
case 0x6a9ca1:c.instructions+=6;goto B6a9ca1;
case 0x6a9ca4:c.instructions+=5;goto B6a9ca4;
case 0x6a9ca7:c.instructions+=4;goto B6a9ca7;
case 0x6a9caa:c.instructions+=3;goto B6a9caa;
case 0x6a9cac:c.instructions+=2;goto B6a9cac;
case 0x6a9caf:c.instructions+=1;goto B6a9caf;
case 0x6a9cb1:goto L6a9cb1;
case 0x6a9cb4:c.instructions+=2;goto B6a9cb4;
case 0x6a9cb7:c.instructions+=1;goto B6a9cb7;
case 0x6a9cb9:goto L6a9cb9;
case 0x6a9cbc:c.instructions+=1;goto B6a9cbc;
case 0x6a9cbf:goto L6a9cbf;
case 0x6a9cc2:c.instructions+=3;goto B6a9cc2;
case 0x6a9cc4:c.instructions+=2;goto B6a9cc4;
case 0x6a9cc7:c.instructions+=1;goto B6a9cc7;
case 0x6a9cc9:goto L6a9cc9;
case 0x6a9ccb:c.instructions+=1;goto B6a9ccb;
case 0x6a9ccd:goto L6a9ccd;
case 0x6a9cd0:c.instructions+=7;goto B6a9cd0;
case 0x6a9cd3:c.instructions+=6;goto B6a9cd3;
case 0x6a9cd6:c.instructions+=5;goto B6a9cd6;
case 0x6a9cd9:c.instructions+=4;goto B6a9cd9;
case 0x6a9cdc:c.instructions+=3;goto B6a9cdc;
case 0x6a9cde:c.instructions+=2;goto B6a9cde;
case 0x6a9ce1:c.instructions+=1;goto B6a9ce1;
case 0x6a9ce3:goto L6a9ce3;
case 0x6a9ce6:c.instructions+=4;goto B6a9ce6;
case 0x6a9ce9:c.instructions+=3;goto B6a9ce9;
case 0x6a9ceb:c.instructions+=2;goto B6a9ceb;
case 0x6a9cee:c.instructions+=1;goto B6a9cee;
case 0x6a9cf0:goto L6a9cf0;
case 0x6a9cf3:c.instructions+=2;goto B6a9cf3;
case 0x6a9cf5:c.instructions+=1;goto B6a9cf5;
case 0x6a9cf8:goto L6a9cf8;
case 0x6a9cfa:c.instructions+=1;goto B6a9cfa;
case 0x6a9cfc:goto L6a9cfc;
case 0x6a9cfe:c.instructions+=1;goto B6a9cfe;
case 0x6a9d00:goto L6a9d00;
case 0x6a9d03:c.instructions+=1;goto B6a9d03;
case 0x6a9d05:goto L6a9d05;
case 0x6a9d08:c.instructions+=5;goto B6a9d08;
case 0x6a9d0b:c.instructions+=4;goto B6a9d0b;
case 0x6a9d0e:c.instructions+=3;goto B6a9d0e;
case 0x6a9d10:c.instructions+=2;goto B6a9d10;
case 0x6a9d11:c.instructions+=1;goto B6a9d11;
case 0x6a9d13:goto L6a9d13;
case 0x6a9d15:c.instructions+=1;goto B6a9d15;
case 0x6a9d17:goto L6a9d17;
case 0x6a9d19:c.instructions+=1;goto B6a9d19;
case 0x6a9d1b:goto L6a9d1b;
case 0x6a9d1e:c.instructions+=1;goto B6a9d1e;
case 0x6a9d20:goto L6a9d20;
case 0x6a9d23:c.instructions+=8;goto B6a9d23;
case 0x6a9d26:c.instructions+=7;goto B6a9d26;
case 0x6a9d29:c.instructions+=6;goto B6a9d29;
case 0x6a9d2c:c.instructions+=5;goto B6a9d2c;
case 0x6a9d2f:c.instructions+=4;goto B6a9d2f;
case 0x6a9d32:c.instructions+=3;goto B6a9d32;
case 0x6a9d37:c.instructions+=2;goto B6a9d37;
case 0x6a9d39:c.instructions+=1;goto B6a9d39;
case 0x6a9d3b:goto L6a9d3b;
case 0x6a9d3e:c.instructions+=1;goto B6a9d3e;
case 0x6a9d40:goto L6a9d40;
case 0x6a9d43:c.instructions+=1;goto B6a9d43;
case 0x6a9d45:goto L6a9d45;
case 0x6a9d47:c.instructions+=1;goto B6a9d47;
case 0x6a9d49:goto L6a9d49;
case 0x6a9d4c:c.instructions+=8;goto B6a9d4c;
case 0x6a9d4f:c.instructions+=7;goto B6a9d4f;
case 0x6a9d52:c.instructions+=6;goto B6a9d52;
case 0x6a9d55:c.instructions+=5;goto B6a9d55;
case 0x6a9d57:c.instructions+=4;goto B6a9d57;
case 0x6a9d5a:c.instructions+=3;goto B6a9d5a;
case 0x6a9d5f:c.instructions+=2;goto B6a9d5f;
case 0x6a9d60:c.instructions+=1;goto B6a9d60;
case 0x6a9d62:goto L6a9d62;
case 0x6a9d64:c.instructions+=1;goto B6a9d64;
case 0x6a9d66:goto L6a9d66;
case 0x6a9d69:c.instructions+=2;goto B6a9d69;
case 0x6a9d6c:c.instructions+=1;goto B6a9d6c;
case 0x6a9d6e:goto L6a9d6e;
case 0x6a9d71:c.instructions+=3;goto B6a9d71;
case 0x6a9d74:c.instructions+=2;goto B6a9d74;
case 0x6a9d77:c.instructions+=1;goto B6a9d77;
case 0x6a9d7c:goto L6a9d7c;
case 0x6a9d7e:c.instructions+=1;goto B6a9d7e;
case 0x6a9d80:goto L6a9d80;
case 0x6a9d83:c.instructions+=2;goto B6a9d83;
case 0x6a9d86:c.instructions+=1;goto B6a9d86;
case 0x6a9d88:goto L6a9d88;
case 0x6a9d8b:c.instructions+=1;goto B6a9d8b;
case 0x6a9d8d:goto L6a9d8d;
case 0x6a9d90:c.instructions+=1;goto B6a9d90;
case 0x6a9d92:goto L6a9d92;
case 0x6a9d93:c.instructions+=2;goto B6a9d93;
case 0x6a9d96:c.instructions+=1;goto B6a9d96;
case 0x6a9d9c:goto L6a9d9c;
case 0x6a9d9f:c.instructions+=2;goto B6a9d9f;
case 0x6a9da1:c.instructions+=1;goto B6a9da1;
case 0x6a9da7:goto L6a9da7;
case 0x6a9dab:c.instructions+=1;goto B6a9dab;
case 0x6a9db1:goto L6a9db1;
case 0x6a9db4:c.instructions+=17;goto B6a9db4;
case 0x6a9db7:c.instructions+=16;goto B6a9db7;
case 0x6a9db9:c.instructions+=15;goto B6a9db9;
case 0x6a9dbe:c.instructions+=14;goto B6a9dbe;
case 0x6a9dc1:c.instructions+=13;goto B6a9dc1;
case 0x6a9dc3:c.instructions+=12;goto B6a9dc3;
case 0x6a9dc5:c.instructions+=11;goto B6a9dc5;
case 0x6a9dc7:c.instructions+=10;goto B6a9dc7;
case 0x6a9dc9:c.instructions+=9;goto B6a9dc9;
case 0x6a9dcb:c.instructions+=8;goto B6a9dcb;
case 0x6a9dcd:c.instructions+=7;goto B6a9dcd;
case 0x6a9dcf:c.instructions+=6;goto B6a9dcf;
case 0x6a9dd3:c.instructions+=5;goto B6a9dd3;
case 0x6a9dd5:c.instructions+=4;goto B6a9dd5;
case 0x6a9dd7:c.instructions+=3;goto B6a9dd7;
case 0x6a9dd9:c.instructions+=2;goto B6a9dd9;
case 0x6a9ddb:c.instructions+=1;goto B6a9ddb;
case 0x6a9de1:goto L6a9de1;
case 0x6a9de4:c.instructions+=3;goto B6a9de4;
case 0x6a9de7:c.instructions+=2;goto B6a9de7;
case 0x6a9dea:c.instructions+=1;goto B6a9dea;
case 0x6a9ded:goto L6a9ded;
case 0x6a9df0:c.instructions+=15;goto B6a9df0;
case 0x6a9df3:c.instructions+=14;goto B6a9df3;
case 0x6a9df6:c.instructions+=13;goto B6a9df6;
case 0x6a9df9:c.instructions+=12;goto B6a9df9;
case 0x6a9dfc:c.instructions+=11;goto B6a9dfc;
case 0x6a9dff:c.instructions+=10;goto B6a9dff;
case 0x6a9e02:c.instructions+=9;goto B6a9e02;
case 0x6a9e05:c.instructions+=8;goto B6a9e05;
case 0x6a9e06:c.instructions+=7;goto B6a9e06;
case 0x6a9e07:c.instructions+=6;goto B6a9e07;
case 0x6a9e0a:c.instructions+=5;goto B6a9e0a;
case 0x6a9e0c:c.instructions+=4;goto B6a9e0c;
case 0x6a9e0e:c.instructions+=3;goto B6a9e0e;
case 0x6a9e11:c.instructions+=2;goto B6a9e11;
case 0x6a9e13:c.instructions+=1;goto B6a9e13;
case 0x6a9e18:goto L6a9e18;
case 0x6a9e1b:c.instructions+=4;goto B6a9e1b;
case 0x6a9e1e:c.instructions+=3;goto B6a9e1e;
case 0x6a9e21:c.instructions+=2;goto B6a9e21;
case 0x6a9e25:c.instructions+=1;goto B6a9e25;
case 0x6a9e2b:goto L6a9e2b;
case 0x6a9e2e:c.instructions+=5;goto B6a9e2e;
case 0x6a9e31:c.instructions+=4;goto B6a9e31;
case 0x6a9e35:c.instructions+=3;goto B6a9e35;
case 0x6a9e38:c.instructions+=2;goto B6a9e38;
case 0x6a9e3b:c.instructions+=1;goto B6a9e3b;
case 0x6a9e3d:goto L6a9e3d;
case 0x6a9e42:goto L6a9e42;
case 0x6a9e45:c.instructions+=8;goto B6a9e45;
case 0x6a9e48:c.instructions+=7;goto B6a9e48;
case 0x6a9e4e:c.instructions+=6;goto B6a9e4e;
case 0x6a9e51:c.instructions+=5;goto B6a9e51;
case 0x6a9e53:c.instructions+=4;goto B6a9e53;
case 0x6a9e58:c.instructions+=3;goto B6a9e58;
case 0x6a9e59:c.instructions+=2;goto B6a9e59;
case 0x6a9e5b:c.instructions+=1;goto B6a9e5b;
case 0x6a9e60:goto L6a9e60;
case 0x6a9e63:c.instructions+=9;goto B6a9e63;
case 0x6a9e66:c.instructions+=8;goto B6a9e66;
case 0x6a9e67:c.instructions+=7;goto B6a9e67;
case 0x6a9e69:c.instructions+=6;goto B6a9e69;
case 0x6a9e6a:c.instructions+=5;goto B6a9e6a;
case 0x6a9e6c:c.instructions+=4;goto B6a9e6c;
case 0x6a9e71:c.instructions+=3;goto B6a9e71;
case 0x6a9e72:c.instructions+=2;goto B6a9e72;
case 0x6a9e74:c.instructions+=1;goto B6a9e74;
case 0x6a9e79:goto L6a9e79;
case 0x6a9e7c:c.instructions+=8;goto B6a9e7c;
case 0x6a9e7f:c.instructions+=7;goto B6a9e7f;
case 0x6a9e80:c.instructions+=6;goto B6a9e80;
case 0x6a9e83:c.instructions+=5;goto B6a9e83;
case 0x6a9e84:c.instructions+=4;goto B6a9e84;
case 0x6a9e8a:c.instructions+=3;goto B6a9e8a;
case 0x6a9e8b:c.instructions+=2;goto B6a9e8b;
case 0x6a9e8d:c.instructions+=1;goto B6a9e8d;
case 0x6a9e92:goto L6a9e92;
case 0x6a9e96:c.instructions+=1;goto B6a9e96;
case 0x6a9e9c:goto L6a9e9c;
case 0x6a9e9f:c.instructions+=2;goto B6a9e9f;
case 0x6a9ea2:c.instructions+=1;goto B6a9ea2;
case 0x6a9ea8:goto L6a9ea8;
case 0x6a9eab:c.instructions+=1;goto B6a9eab;
case 0x6a9eb1:goto L6a9eb1;
case 0x6a9eb4:c.instructions+=9;goto B6a9eb4;
case 0x6a9eb7:c.instructions+=8;goto B6a9eb7;
case 0x6a9eba:c.instructions+=7;goto B6a9eba;
case 0x6a9ebd:c.instructions+=6;goto B6a9ebd;
case 0x6a9ec0:c.instructions+=5;goto B6a9ec0;
case 0x6a9ec1:c.instructions+=4;goto B6a9ec1;
case 0x6a9ec4:c.instructions+=3;goto B6a9ec4;
case 0x6a9ec7:c.instructions+=2;goto B6a9ec7;
case 0x6a9eca:c.instructions+=1;goto B6a9eca;
case 0x6a9ecf:goto L6a9ecf;
case 0x6a9ed0:c.instructions+=2;goto B6a9ed0;
case 0x6a9ed2:c.instructions+=1;goto B6a9ed2;
case 0x6a9ed7:goto L6a9ed7;
case 0x6a9eda:c.instructions+=2;goto B6a9eda;
case 0x6a9edb:c.instructions+=1;goto B6a9edb;
case 0x6a9ee0:goto L6a9ee0;
case 0x6a9ee2:c.instructions+=3;goto B6a9ee2;
case 0x6a9ee5:c.instructions+=2;goto B6a9ee5;
case 0x6a9ee8:c.instructions+=1;goto B6a9ee8;
case 0x6a9eea:goto L6a9eea;
case 0x6a9eed:c.instructions+=1;goto B6a9eed;
case 0x6a9ef3:goto L6a9ef3;
case 0x6a9ef6:c.instructions+=12;goto B6a9ef6;
case 0x6a9ef9:c.instructions+=11;goto B6a9ef9;
case 0x6a9efc:c.instructions+=10;goto B6a9efc;
case 0x6a9efd:c.instructions+=9;goto B6a9efd;
case 0x6a9efe:c.instructions+=8;goto B6a9efe;
case 0x6a9f01:c.instructions+=7;goto B6a9f01;
case 0x6a9f03:c.instructions+=6;goto B6a9f03;
case 0x6a9f05:c.instructions+=5;goto B6a9f05;
case 0x6a9f08:c.instructions+=4;goto B6a9f08;
case 0x6a9f0a:c.instructions+=3;goto B6a9f0a;
case 0x6a9f0c:c.instructions+=2;goto B6a9f0c;
case 0x6a9f0f:c.instructions+=1;goto B6a9f0f;
case 0x6a9f14:goto L6a9f14;
case 0x6a9f17:c.instructions+=10;goto B6a9f17;
case 0x6a9f1a:c.instructions+=9;goto B6a9f1a;
case 0x6a9f1d:c.instructions+=8;goto B6a9f1d;
case 0x6a9f20:c.instructions+=7;goto B6a9f20;
case 0x6a9f23:c.instructions+=6;goto B6a9f23;
case 0x6a9f26:c.instructions+=5;goto B6a9f26;
case 0x6a9f29:c.instructions+=4;goto B6a9f29;
case 0x6a9f2c:c.instructions+=3;goto B6a9f2c;
case 0x6a9f2f:c.instructions+=2;goto B6a9f2f;
case 0x6a9f33:c.instructions+=1;goto B6a9f33;
case 0x6a9f39:goto L6a9f39;
case 0x6a9f3c:c.instructions+=3;goto B6a9f3c;
case 0x6a9f3f:c.instructions+=2;goto B6a9f3f;
case 0x6a9f42:c.instructions+=1;goto B6a9f42;
case 0x6a9f44:goto L6a9f44;
case 0x6a9f46:goto L6a9f46;
case 0x6a9f49:c.instructions+=1;goto B6a9f49;
case 0x6a9f4b:goto L6a9f4b;
case 0x6a9f4e:c.instructions+=17;goto B6a9f4e;
case 0x6a9f51:c.instructions+=16;goto B6a9f51;
case 0x6a9f54:c.instructions+=15;goto B6a9f54;
case 0x6a9f57:c.instructions+=14;goto B6a9f57;
case 0x6a9f59:c.instructions+=13;goto B6a9f59;
case 0x6a9f5c:c.instructions+=12;goto B6a9f5c;
case 0x6a9f5f:c.instructions+=11;goto B6a9f5f;
case 0x6a9f62:c.instructions+=10;goto B6a9f62;
case 0x6a9f65:c.instructions+=9;goto B6a9f65;
case 0x6a9f68:c.instructions+=8;goto B6a9f68;
case 0x6a9f69:c.instructions+=7;goto B6a9f69;
case 0x6a9f6a:c.instructions+=6;goto B6a9f6a;
case 0x6a9f6d:c.instructions+=5;goto B6a9f6d;
case 0x6a9f6f:c.instructions+=4;goto B6a9f6f;
case 0x6a9f71:c.instructions+=3;goto B6a9f71;
case 0x6a9f74:c.instructions+=2;goto B6a9f74;
case 0x6a9f76:c.instructions+=1;goto B6a9f76;
case 0x6a9f7b:goto L6a9f7b;
case 0x6a9f7e:c.instructions+=5;goto B6a9f7e;
case 0x6a9f81:c.instructions+=4;goto B6a9f81;
case 0x6a9f84:c.instructions+=3;goto B6a9f84;
case 0x6a9f87:c.instructions+=2;goto B6a9f87;
case 0x6a9f8b:c.instructions+=1;goto B6a9f8b;
case 0x6a9f91:goto L6a9f91;
case 0x6a9f94:c.instructions+=3;goto B6a9f94;
case 0x6a9f97:c.instructions+=2;goto B6a9f97;
case 0x6a9f9a:c.instructions+=1;goto B6a9f9a;
case 0x6a9f9c:goto L6a9f9c;
case 0x6a9f9f:c.instructions+=2;goto B6a9f9f;
case 0x6a9fa2:c.instructions+=1;goto B6a9fa2;
case 0x6a9fa4:goto L6a9fa4;
case 0x6a9fa5:c.instructions+=8;goto B6a9fa5;
case 0x6a9fa7:c.instructions+=7;goto B6a9fa7;
case 0x6a9fa8:c.instructions+=6;goto B6a9fa8;
case 0x6a9fab:c.instructions+=5;goto B6a9fab;
case 0x6a9fad:c.instructions+=4;goto B6a9fad;
case 0x6a9faf:c.instructions+=3;goto B6a9faf;
case 0x6a9fb2:c.instructions+=2;goto B6a9fb2;
case 0x6a9fb4:c.instructions+=1;goto B6a9fb4;
case 0x6a9fb9:goto L6a9fb9;
case 0x6a9fbb:c.instructions+=2;goto B6a9fbb;
case 0x6a9fbe:c.instructions+=1;goto B6a9fbe;
case 0x6a9fc4:goto L6a9fc4;
case 0x6a9fc7:c.instructions+=1;goto B6a9fc7;
case 0x6a9fc9:goto L6a9fc9;
case 0x6a9fca:c.instructions+=8;goto B6a9fca;
case 0x6a9fcc:c.instructions+=7;goto B6a9fcc;
case 0x6a9fcd:c.instructions+=6;goto B6a9fcd;
case 0x6a9fd0:c.instructions+=5;goto B6a9fd0;
case 0x6a9fd2:c.instructions+=4;goto B6a9fd2;
case 0x6a9fd4:c.instructions+=3;goto B6a9fd4;
case 0x6a9fd7:c.instructions+=2;goto B6a9fd7;
case 0x6a9fd9:c.instructions+=1;goto B6a9fd9;
case 0x6a9fde:goto L6a9fde;
case 0x6a9fe0:c.instructions+=2;goto B6a9fe0;
case 0x6a9fe3:c.instructions+=1;goto B6a9fe3;
case 0x6a9fe9:goto L6a9fe9;
case 0x6a9ff0:c.instructions+=2;goto B6a9ff0;
case 0x6a9ff3:c.instructions+=1;goto B6a9ff3;
case 0x6a9ff5:goto L6a9ff5;
case 0x6a9ff7:c.instructions+=1;goto B6a9ff7;
case 0x6a9ffd:goto L6a9ffd;
case 0x6a9fff:c.instructions+=1;goto B6a9fff;
default:missing_instruction(c.pc);}
B6a9005:L6a9005:{c.instructions+=1;NFSU2_TR(0x6a9005);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a92a1;}}
}
B6a900b:L6a900b:{c.instructions+=4;NFSU2_TR(0x6a900b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9012:{NFSU2_TR(0x6a9012);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9016:{NFSU2_TR(0x6a9016);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a901a:{NFSU2_TR(0x6a901a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a92a1;}}
}
B6a9020:L6a9020:{c.instructions+=15;NFSU2_TR(0x6a9020);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9023:{NFSU2_TR(0x6a9023);
__builtin_memmove((R+12),(R+8),4);
}
B6a9025:{NFSU2_TR(0x6a9025);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6a9028:{NFSU2_TR(0x6a9028);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a902b:{NFSU2_TR(0x6a902b);
__builtin_memmove((R+12),(R+8),4);
}
B6a902d:{NFSU2_TR(0x6a902d);
w4(R+12,u32(0-u32(r4(R+12))));
}
B6a902f:{NFSU2_TR(0x6a902f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6a9032:{NFSU2_TR(0x6a9032);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9035:{NFSU2_TR(0x6a9035);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9038:{NFSU2_TR(0x6a9038);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6a903b:{NFSU2_TR(0x6a903b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a903e:{NFSU2_TR(0x6a903e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9041:{NFSU2_TR(0x6a9041);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B6a9043:{NFSU2_TR(0x6a9043);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a9046:{NFSU2_TR(0x6a9046);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9049:L6a9049:{c.instructions+=8;NFSU2_TR(0x6a9049);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9050:{NFSU2_TR(0x6a9050);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9053:{NFSU2_TR(0x6a9053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a9055:{NFSU2_TR(0x6a9055);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9058:{NFSU2_TR(0x6a9058);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a905b:{NFSU2_TR(0x6a905b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a905e:{NFSU2_TR(0x6a905e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9061:{NFSU2_TR(0x6a9061);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a90a2;}}
}
B6a9063:L6a9063:{c.instructions+=9;NFSU2_TR(0x6a9063);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9066:{NFSU2_TR(0x6a9066);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a9068:{NFSU2_TR(0x6a9068);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a906b:{NFSU2_TR(0x6a906b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a906e:{NFSU2_TR(0x6a906e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9071:{NFSU2_TR(0x6a9071);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9074:{NFSU2_TR(0x6a9074);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9077:{NFSU2_TR(0x6a9077);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a907b:{NFSU2_TR(0x6a907b);
if(r1(R+518)){{goto L6a91f6;}}
}
B6a9081:L6a9081:{c.instructions+=3;NFSU2_TR(0x6a9081);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9084:{NFSU2_TR(0x6a9084);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9088:{NFSU2_TR(0x6a9088);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a91f6;}}
}
B6a908e:L6a908e:{c.instructions+=5;NFSU2_TR(0x6a908e);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9091:{NFSU2_TR(0x6a9091);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a9097:{NFSU2_TR(0x6a9097);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a9099:{NFSU2_TR(0x6a9099);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a909c:{NFSU2_TR(0x6a909c);
if(r1(R+518)){{goto L6a91f6;}}
}
B6a90a2:L6a90a2:{c.instructions+=5;NFSU2_TR(0x6a90a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a90a5:{NFSU2_TR(0x6a90a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a90a8:{NFSU2_TR(0x6a90a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a90ab:{NFSU2_TR(0x6a90ab);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+12))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a90ae:{NFSU2_TR(0x6a90ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a90f2;}}
}
B6a90b0:L6a90b0:{c.instructions+=12;NFSU2_TR(0x6a90b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a90b3:{NFSU2_TR(0x6a90b3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6a90b5:{NFSU2_TR(0x6a90b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a90b8:{NFSU2_TR(0x6a90b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a90bb:{NFSU2_TR(0x6a90bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a90be:{NFSU2_TR(0x6a90be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a90c1:{NFSU2_TR(0x6a90c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a90c4:{NFSU2_TR(0x6a90c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a90c7:{NFSU2_TR(0x6a90c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a90ca:{NFSU2_TR(0x6a90ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a90cd:{NFSU2_TR(0x6a90cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a90d1:{NFSU2_TR(0x6a90d1);
if(r1(R+518)){{goto L6a90f2;}}
}
B6a90d3:L6a90d3:{c.instructions+=3;NFSU2_TR(0x6a90d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a90d6:{NFSU2_TR(0x6a90d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a90da:{NFSU2_TR(0x6a90da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a90f2;}}
}
B6a90dc:L6a90dc:{c.instructions+=6;NFSU2_TR(0x6a90dc);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a90e2:{NFSU2_TR(0x6a90e2);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a90e5:{NFSU2_TR(0x6a90e5);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a90e7:{NFSU2_TR(0x6a90e7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a90e9:{NFSU2_TR(0x6a90e9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a90ec:{NFSU2_TR(0x6a90ec);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a9216;}}
}
B6a90f2:L6a90f2:{c.instructions+=6;NFSU2_TR(0x6a90f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a90f5:{NFSU2_TR(0x6a90f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a90f8:{NFSU2_TR(0x6a90f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a90fb:{NFSU2_TR(0x6a90fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a90fe:{NFSU2_TR(0x6a90fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a9102:{NFSU2_TR(0x6a9102);
if(r1(R+518)){{goto L6a91f6;}}
}
B6a9108:L6a9108:{c.instructions+=3;NFSU2_TR(0x6a9108);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a910b:{NFSU2_TR(0x6a910b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a910f:{NFSU2_TR(0x6a910f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a91f6;}}
}
B6a9115:L6a9115:{c.instructions+=7;NFSU2_TR(0x6a9115);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9118:{NFSU2_TR(0x6a9118);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a911b:{NFSU2_TR(0x6a911b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a911e:{NFSU2_TR(0x6a911e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a9120:{NFSU2_TR(0x6a9120);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a9125:{NFSU2_TR(0x6a9125);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a912a:{NFSU2_TR(0x6a912a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a91f6;}}
}
B6a9130:L6a9130:{c.instructions+=3;NFSU2_TR(0x6a9130);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9134:{NFSU2_TR(0x6a9134);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9138:{NFSU2_TR(0x6a9138);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a915a;}}
}
B6a913a:L6a913a:{c.instructions+=2;NFSU2_TR(0x6a913a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a913d:{NFSU2_TR(0x6a913d);
{goto L6a9145;}
}
B6a913f:L6a913f:{c.instructions+=2;NFSU2_TR(0x6a913f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9142:{NFSU2_TR(0x6a9142);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9145:L6a9145:{c.instructions+=2;NFSU2_TR(0x6a9145);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a9147:{NFSU2_TR(0x6a9147);
if(r1(R+518)){{goto L6a915a;}}
}
B6a9149:L6a9149:{c.instructions+=6;NFSU2_TR(0x6a9149);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a914c:{NFSU2_TR(0x6a914c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a914f:{NFSU2_TR(0x6a914f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9152:{NFSU2_TR(0x6a9152);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9155:{NFSU2_TR(0x6a9155);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a9158:{NFSU2_TR(0x6a9158);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a913fu);}goto L6a913f;}}
}
B6a915a:L6a915a:{c.instructions+=19;NFSU2_TR(0x6a915a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a915d:{NFSU2_TR(0x6a915d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9160:{NFSU2_TR(0x6a9160);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B6a9162:{NFSU2_TR(0x6a9162);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9165:{NFSU2_TR(0x6a9165);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a9168:{NFSU2_TR(0x6a9168);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a916b:{NFSU2_TR(0x6a916b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a916e:{NFSU2_TR(0x6a916e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9171:{NFSU2_TR(0x6a9171);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9174:{NFSU2_TR(0x6a9174);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9177:{NFSU2_TR(0x6a9177);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6a917a:{NFSU2_TR(0x6a917a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a917d:{NFSU2_TR(0x6a917d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a9180:{NFSU2_TR(0x6a9180);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9183:{NFSU2_TR(0x6a9183);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9186:{NFSU2_TR(0x6a9186);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9189:{NFSU2_TR(0x6a9189);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a918c:{NFSU2_TR(0x6a918c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a918f:{NFSU2_TR(0x6a918f);
if(r1(R+518)){{goto L6a9197;}}
}
B6a9191:L6a9191:{c.instructions+=2;NFSU2_TR(0x6a9191);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9195:{NFSU2_TR(0x6a9195);
{goto L6a91c9;}
}
B6a9197:L6a9197:{c.instructions+=5;NFSU2_TR(0x6a9197);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a919a:{NFSU2_TR(0x6a919a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a919d:{NFSU2_TR(0x6a919d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a91a0:{NFSU2_TR(0x6a91a0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a91a4:{NFSU2_TR(0x6a91a4);
if(r1(R+518)){{goto L6a91f6;}}
}
B6a91a6:L6a91a6:{c.instructions+=3;NFSU2_TR(0x6a91a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a91a9:{NFSU2_TR(0x6a91a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a91ad:{NFSU2_TR(0x6a91ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a91f6;}}
}
B6a91af:L6a91af:{c.instructions+=5;NFSU2_TR(0x6a91af);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a91b2:{NFSU2_TR(0x6a91b2);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a91b8:{NFSU2_TR(0x6a91b8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a91ba:{NFSU2_TR(0x6a91ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a91bd:{NFSU2_TR(0x6a91bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a91f6;}}
}
B6a91bf:L6a91bf:{c.instructions+=2;NFSU2_TR(0x6a91bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a91c2:{NFSU2_TR(0x6a91c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a91c9:L6a91c9:{c.instructions+=2;NFSU2_TR(0x6a91c9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a91cc:{NFSU2_TR(0x6a91cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9238;}}
}
B6a91ce:L6a91ce:{c.instructions+=5;NFSU2_TR(0x6a91ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a91d1:{NFSU2_TR(0x6a91d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a91d4:{NFSU2_TR(0x6a91d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a91d7:{NFSU2_TR(0x6a91d7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a91db:{NFSU2_TR(0x6a91db);
if(r1(R+518)){{goto L6a91f6;}}
}
B6a91dd:L6a91dd:{c.instructions+=3;NFSU2_TR(0x6a91dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a91e0:{NFSU2_TR(0x6a91e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a91e4:{NFSU2_TR(0x6a91e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a91f6;}}
}
B6a91e6:L6a91e6:{c.instructions+=5;NFSU2_TR(0x6a91e6);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a91e9:{NFSU2_TR(0x6a91e9);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a91ef:{NFSU2_TR(0x6a91ef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a91f1:{NFSU2_TR(0x6a91f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a91f4:{NFSU2_TR(0x6a91f4);
if(r1(R+518)){{goto L6a923e;}}
}
B6a91f6:L6a91f6:{c.instructions+=8;NFSU2_TR(0x6a91f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a91f9:{NFSU2_TR(0x6a91f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a91fc:{NFSU2_TR(0x6a91fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a91ff:{NFSU2_TR(0x6a91ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9202:{NFSU2_TR(0x6a9202);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9205:{NFSU2_TR(0x6a9205);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9208:{NFSU2_TR(0x6a9208);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a920b:{NFSU2_TR(0x6a920b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9049u);}goto L6a9049;}}
}
B6a9211:L6a9211:{c.instructions+=1;NFSU2_TR(0x6a9211);
{goto L6a92a1;}
}
B6a9216:L6a9216:{c.instructions+=12;NFSU2_TR(0x6a9216);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9219:{NFSU2_TR(0x6a9219);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a921c:{NFSU2_TR(0x6a921c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a921f:{NFSU2_TR(0x6a921f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9222:{NFSU2_TR(0x6a9222);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6a9224:{NFSU2_TR(0x6a9224);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a9227:{NFSU2_TR(0x6a9227);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a922a:{NFSU2_TR(0x6a922a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a922d:{NFSU2_TR(0x6a922d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9230:{NFSU2_TR(0x6a9230);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a9233:{NFSU2_TR(0x6a9233);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a9236:{NFSU2_TR(0x6a9236);
{goto L6a929a;}
}
B6a9238:L6a9238:{c.instructions+=2;NFSU2_TR(0x6a9238);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a923c:{NFSU2_TR(0x6a923c);
{goto L6a9245;}
}
B6a923e:L6a923e:{c.instructions+=1;NFSU2_TR(0x6a923e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9245:L6a9245:{c.instructions+=16;NFSU2_TR(0x6a9245);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9248:{NFSU2_TR(0x6a9248);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a924b:{NFSU2_TR(0x6a924b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a924e:{NFSU2_TR(0x6a924e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B6a9250:{NFSU2_TR(0x6a9250);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9254:{NFSU2_TR(0x6a9254);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a9257:{NFSU2_TR(0x6a9257);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a925a:{NFSU2_TR(0x6a925a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a925d:{NFSU2_TR(0x6a925d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6a9260:{NFSU2_TR(0x6a9260);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a9263:{NFSU2_TR(0x6a9263);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9266:{NFSU2_TR(0x6a9266);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9269:{NFSU2_TR(0x6a9269);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a926c:{NFSU2_TR(0x6a926c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a926f:{NFSU2_TR(0x6a926f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9272:{NFSU2_TR(0x6a9272);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9277;}}
}
B6a9274:L6a9274:{c.instructions+=1;NFSU2_TR(0x6a9274);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9277:L6a9277:{c.instructions+=7;NFSU2_TR(0x6a9277);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a927a:{NFSU2_TR(0x6a927a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a927d:{NFSU2_TR(0x6a927d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6a927f:{NFSU2_TR(0x6a927f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9283:{NFSU2_TR(0x6a9283);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a9286:{NFSU2_TR(0x6a9286);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9289:{NFSU2_TR(0x6a9289);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a928e;}}
}
B6a928b:L6a928b:{c.instructions+=1;NFSU2_TR(0x6a928b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a928e:L6a928e:{c.instructions+=4;NFSU2_TR(0x6a928e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9291:{NFSU2_TR(0x6a9291);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9294:{NFSU2_TR(0x6a9294);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6a9297:{NFSU2_TR(0x6a9297);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a929a:L6a929a:{c.instructions+=1;NFSU2_TR(0x6a929a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a92a1:L6a92a1:{c.instructions+=4;NFSU2_TR(0x6a92a1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a92a2:{NFSU2_TR(0x6a92a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6a92a5:{NFSU2_TR(0x6a92a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a92a8:{NFSU2_TR(0x6a92a8);
if(r1(R+512)){TAIL_STATIC(0x6a8f87u,6a8);}
}
B6a92ae:L6a92ae:{c.instructions+=4;NFSU2_TR(0x6a92ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a92b1:{NFSU2_TR(0x6a92b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a92b4:{NFSU2_TR(0x6a92b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a92b7:{NFSU2_TR(0x6a92b7);
if(r1(R+512)){TAIL_STATIC(0x6a8f3eu,6a8);}
}
B6a92bd:L6a92bd:{c.instructions+=2;NFSU2_TR(0x6a92bd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a92c1:{NFSU2_TR(0x6a92c1);
if(r1(R+518)){{goto L6a92d5;}}
}
B6a92c3:L6a92c3:{c.instructions+=4;NFSU2_TR(0x6a92c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a92c7:{NFSU2_TR(0x6a92c7);
__builtin_memmove((R+4),(R+24),4);
}
B6a92c9:{NFSU2_TR(0x6a92c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a92d0:{NFSU2_TR(0x6a92d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a92d5ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a92d5:L6a92d5:{c.instructions+=3;NFSU2_TR(0x6a92d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a92d9:{NFSU2_TR(0x6a92d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a92dd:{NFSU2_TR(0x6a92dd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a9666;}}
}
B6a92e3:L6a92e3:{c.instructions+=6;NFSU2_TR(0x6a92e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a92e6:{NFSU2_TR(0x6a92e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a92e9:{NFSU2_TR(0x6a92e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a92ec:{NFSU2_TR(0x6a92ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a92ee:{NFSU2_TR(0x6a92ee);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6a92f3:{NFSU2_TR(0x6a92f3);
if(r1(R+518)){{goto L6a9657;}}
}
B6a92f9:L6a92f9:{c.instructions+=3;NFSU2_TR(0x6a92f9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a92fb:{NFSU2_TR(0x6a92fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a92fe:{NFSU2_TR(0x6a92fe);
if(r1(R+518)){{goto L6a9314;}}
}
B6a9300:L6a9300:{c.instructions+=6;NFSU2_TR(0x6a9300);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9303:{NFSU2_TR(0x6a9303);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a9305:{NFSU2_TR(0x6a9305);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9308:{NFSU2_TR(0x6a9308);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a930b:{NFSU2_TR(0x6a930b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a930e:{NFSU2_TR(0x6a930e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9657;}}
}
B6a9314:L6a9314:{c.instructions+=2;NFSU2_TR(0x6a9314);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9319:{NFSU2_TR(0x6a9319);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9657;}}
}
B6a931f:L6a931f:{c.instructions+=5;NFSU2_TR(0x6a931f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9323:{NFSU2_TR(0x6a9323);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9327:{NFSU2_TR(0x6a9327);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a932a:{NFSU2_TR(0x6a932a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a932d:{NFSU2_TR(0x6a932d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a9657;}}
}
B6a9333:L6a9333:{c.instructions+=10;NFSU2_TR(0x6a9333);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9336:{NFSU2_TR(0x6a9336);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9339:{NFSU2_TR(0x6a9339);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a933c:{NFSU2_TR(0x6a933c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a933f:{NFSU2_TR(0x6a933f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9342:{NFSU2_TR(0x6a9342);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9345:{NFSU2_TR(0x6a9345);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9348:{NFSU2_TR(0x6a9348);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a934b:{NFSU2_TR(0x6a934b);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a934f:{NFSU2_TR(0x6a934f);
if(r1(R+518)){{goto L6a94d2;}}
}
B6a9355:L6a9355:{c.instructions+=2;NFSU2_TR(0x6a9355);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9359:{NFSU2_TR(0x6a9359);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a94d2;}}
}
B6a935f:L6a935f:{c.instructions+=8;NFSU2_TR(0x6a935f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9362:{NFSU2_TR(0x6a9362);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9365:{NFSU2_TR(0x6a9365);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9368:{NFSU2_TR(0x6a9368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a936a:{NFSU2_TR(0x6a936a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6a9370:{NFSU2_TR(0x6a9370);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9376:{NFSU2_TR(0x6a9376);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9379:{NFSU2_TR(0x6a9379);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a94d2;}}
}
B6a937f:L6a937f:{c.instructions+=4;NFSU2_TR(0x6a937f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9382:{NFSU2_TR(0x6a9382);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9386:{NFSU2_TR(0x6a9386);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9388:{NFSU2_TR(0x6a9388);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a93a3;}}
}
B6a938a:L6a938a:{c.instructions+=2;NFSU2_TR(0x6a938a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a938d:{NFSU2_TR(0x6a938d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9390:L6a9390:{c.instructions+=3;NFSU2_TR(0x6a9390);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9393:{NFSU2_TR(0x6a9393);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a9395:{NFSU2_TR(0x6a9395);
if(r1(R+518)){{goto L6a93a3;}}
}
B6a9397:L6a9397:{c.instructions+=4;NFSU2_TR(0x6a9397);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a939a:{NFSU2_TR(0x6a939a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a939e:{NFSU2_TR(0x6a939e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6a93a1:{NFSU2_TR(0x6a93a1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9390u);}goto L6a9390;}}
}
B6a93a3:L6a93a3:{c.instructions+=2;NFSU2_TR(0x6a93a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a93a7:{NFSU2_TR(0x6a93a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a93ae:L6a93ae:{c.instructions+=13;NFSU2_TR(0x6a93ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a93b1:{NFSU2_TR(0x6a93b1);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6a93b5:{NFSU2_TR(0x6a93b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6a93b8:{NFSU2_TR(0x6a93b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a93bb:{NFSU2_TR(0x6a93bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a93be:{NFSU2_TR(0x6a93be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a93c1:{NFSU2_TR(0x6a93c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a93c4:{NFSU2_TR(0x6a93c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a93c7:{NFSU2_TR(0x6a93c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a93ca:{NFSU2_TR(0x6a93ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a93cd:{NFSU2_TR(0x6a93cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a93d0:{NFSU2_TR(0x6a93d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a93d4:{NFSU2_TR(0x6a93d4);
if(r1(R+518)){{goto L6a94c2;}}
}
B6a93da:L6a93da:{c.instructions+=2;NFSU2_TR(0x6a93da);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a93de:{NFSU2_TR(0x6a93de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a94c2;}}
}
B6a93e4:L6a93e4:{c.instructions+=8;NFSU2_TR(0x6a93e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a93e7:{NFSU2_TR(0x6a93e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a93ea:{NFSU2_TR(0x6a93ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a93ed:{NFSU2_TR(0x6a93ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a93ef:{NFSU2_TR(0x6a93ef);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfff00000ull))));
}
B6a93f5:{NFSU2_TR(0x6a93f5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a93fb:{NFSU2_TR(0x6a93fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a93fe:{NFSU2_TR(0x6a93fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a94c2;}}
}
B6a9404:L6a9404:{c.instructions+=2;NFSU2_TR(0x6a9404);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9408:{NFSU2_TR(0x6a9408);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9464;}}
}
B6a940a:L6a940a:{c.instructions+=12;NFSU2_TR(0x6a940a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a940d:{NFSU2_TR(0x6a940d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9410:{NFSU2_TR(0x6a9410);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a9413:{NFSU2_TR(0x6a9413);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9416:{NFSU2_TR(0x6a9416);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9419:{NFSU2_TR(0x6a9419);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a941b:{NFSU2_TR(0x6a941b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a941d:{NFSU2_TR(0x6a941d);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B6a941f:{NFSU2_TR(0x6a941f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xe000000ull))));
}
B6a9424:{NFSU2_TR(0x6a9424);
w4(R+12,u32(0x8000000ull));
}
B6a9429:{NFSU2_TR(0x6a9429);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a942b:{NFSU2_TR(0x6a942b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a943f;}}
}
B6a942d:L6a942d:{c.instructions+=3;NFSU2_TR(0x6a942d);
w4(R+12,u32(0x4000000ull));
}
B6a9432:{NFSU2_TR(0x6a9432);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9434:{NFSU2_TR(0x6a9434);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a943f;}}
}
B6a9436:L6a9436:{c.instructions+=3;NFSU2_TR(0x6a9436);
w4(R+12,u32(0x2000000ull));
}
B6a943b:{NFSU2_TR(0x6a943b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a943d:{NFSU2_TR(0x6a943d);
if(r1(R+518)){{goto L6a9441;}}
}
B6a943f:L6a943f:{c.instructions+=1;NFSU2_TR(0x6a943f);
__builtin_memmove((R+0),(R+12),4);
}
B6a9441:L6a9441:{c.instructions+=4;NFSU2_TR(0x6a9441);
__builtin_memmove((R+12),(R+8),4);
}
B6a9443:{NFSU2_TR(0x6a9443);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xe000000ull))));
}
B6a9449:{NFSU2_TR(0x6a9449);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a944b:{NFSU2_TR(0x6a944b);
if(r1(R+518)){{goto L6a945e;}}
}
B6a944d:L6a944d:{c.instructions+=4;NFSU2_TR(0x6a944d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xf1ffffffull))));
}
B6a9453:{NFSU2_TR(0x6a9453);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B6a9455:{NFSU2_TR(0x6a9455);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a9457:{NFSU2_TR(0x6a9457);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a945e:L6a945e:{c.instructions+=2;NFSU2_TR(0x6a945e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9461:{NFSU2_TR(0x6a9461);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9464:L6a9464:{c.instructions+=2;NFSU2_TR(0x6a9464);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a9468:{NFSU2_TR(0x6a9468);
if(r1(R+518)){{goto L6a94c2;}}
}
B6a946a:L6a946a:{c.instructions+=2;NFSU2_TR(0x6a946a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a946e:{NFSU2_TR(0x6a946e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a94c2;}}
}
B6a9470:L6a9470:{c.instructions+=7;NFSU2_TR(0x6a9470);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9473:{NFSU2_TR(0x6a9473);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9476:{NFSU2_TR(0x6a9476);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a9479:{NFSU2_TR(0x6a9479);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a947c:{NFSU2_TR(0x6a947c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a947f:{NFSU2_TR(0x6a947f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a9483:{NFSU2_TR(0x6a9483);
if(r1(R+518)){{goto L6a94c2;}}
}
B6a9485:L6a9485:{c.instructions+=3;NFSU2_TR(0x6a9485);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a9487:{NFSU2_TR(0x6a9487);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a948a:{NFSU2_TR(0x6a948a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a94a6;}}
}
B6a948c:L6a948c:{c.instructions+=2;NFSU2_TR(0x6a948c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a948f:{NFSU2_TR(0x6a948f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9492:L6a9492:{c.instructions+=4;NFSU2_TR(0x6a9492);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9495:{NFSU2_TR(0x6a9495);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a9497:{NFSU2_TR(0x6a9497);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a949a:{NFSU2_TR(0x6a949a);
if(r1(R+518)){{goto L6a94a6;}}
}
B6a949c:L6a949c:{c.instructions+=4;NFSU2_TR(0x6a949c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a94a0:{NFSU2_TR(0x6a94a0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a94a1:{NFSU2_TR(0x6a94a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a94a4:{NFSU2_TR(0x6a94a4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9492u);}goto L6a9492;}}
}
B6a94a6:L6a94a6:{c.instructions+=9;NFSU2_TR(0x6a94a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a94a9:{NFSU2_TR(0x6a94a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a94ac:{NFSU2_TR(0x6a94ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a94af:{NFSU2_TR(0x6a94af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a94b2:{NFSU2_TR(0x6a94b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a94b5:{NFSU2_TR(0x6a94b5);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6a94b9:{NFSU2_TR(0x6a94b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6a94bc:{NFSU2_TR(0x6a94bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a94bf:{NFSU2_TR(0x6a94bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a94c2:L6a94c2:{c.instructions+=4;NFSU2_TR(0x6a94c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a94c5:{NFSU2_TR(0x6a94c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a94c8:{NFSU2_TR(0x6a94c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6a94cc:{NFSU2_TR(0x6a94cc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a93aeu);}goto L6a93ae;}}
}
B6a94d2:L6a94d2:{c.instructions+=4;NFSU2_TR(0x6a94d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a94d5:{NFSU2_TR(0x6a94d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a94d8:{NFSU2_TR(0x6a94d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a94db:{NFSU2_TR(0x6a94db);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9333u);}goto L6a9333;}}
}
B6a94e1:L6a94e1:{c.instructions+=2;NFSU2_TR(0x6a94e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a94e5:{NFSU2_TR(0x6a94e5);
if(r1(R+518)){{goto L6a9657;}}
}
B6a94eb:L6a94eb:{c.instructions+=5;NFSU2_TR(0x6a94eb);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a94ed:{NFSU2_TR(0x6a94ed);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a94ef:{NFSU2_TR(0x6a94ef);
u8 U[4];
w4(U+0,u32(0x50100004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a94f4:{NFSU2_TR(0x6a94f4);
__builtin_memmove((R+4),(R+24),4);
}
B6a94f6:{NFSU2_TR(0x6a94f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a94fbull));
TAIL_STATIC(0x699c99u,699);
}
B6a94fb:L6a94fb:{c.instructions+=3;NFSU2_TR(0x6a94fb);
__builtin_memmove((R+12),(R+0),4);
}
B6a94fd:{NFSU2_TR(0x6a94fd);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6a9500:{NFSU2_TR(0x6a9500);
if(r1(R+518)){{goto L6a9789;}}
}
B6a9506:L6a9506:{c.instructions+=5;NFSU2_TR(0x6a9506);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9508:{NFSU2_TR(0x6a9508);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a950a:{NFSU2_TR(0x6a950a);
u8 U[4];
w4(U+0,u32(0x10000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a950f:{NFSU2_TR(0x6a950f);
__builtin_memmove((R+4),(R+24),4);
}
B6a9511:{NFSU2_TR(0x6a9511);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9516ull));
TAIL_STATIC(0x699c99u,699);
}
B6a9516:L6a9516:{c.instructions+=2;NFSU2_TR(0x6a9516);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6a9519:{NFSU2_TR(0x6a9519);
if(r1(R+518)){{goto L6a9789;}}
}
B6a951f:L6a951f:{c.instructions+=7;NFSU2_TR(0x6a951f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9522:{NFSU2_TR(0x6a9522);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a9525:{NFSU2_TR(0x6a9525);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9528:{NFSU2_TR(0x6a9528);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9529:{NFSU2_TR(0x6a9529);
__builtin_memmove((R+4),(R+12),4);
}
B6a952b:{NFSU2_TR(0x6a952b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a952e:{NFSU2_TR(0x6a952e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9533ull));
TAIL_STATIC(0x698eb3u,698);
}
B6a9533:L6a9533:{c.instructions+=3;NFSU2_TR(0x6a9533);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9536:{NFSU2_TR(0x6a9536);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9537:{NFSU2_TR(0x6a9537);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a953cull));
TAIL_STATIC(0x698eb3u,698);
}
B6a953c:L6a953c:{c.instructions+=12;NFSU2_TR(0x6a953c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a953f:{NFSU2_TR(0x6a953f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9543:{NFSU2_TR(0x6a9543);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a9546:{NFSU2_TR(0x6a9546);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a9548:{NFSU2_TR(0x6a9548);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a954b:{NFSU2_TR(0x6a954b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a954d:{NFSU2_TR(0x6a954d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6a954f:{NFSU2_TR(0x6a954f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a9551:{NFSU2_TR(0x6a9551);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9554:{NFSU2_TR(0x6a9554);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9557:{NFSU2_TR(0x6a9557);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a9559:{NFSU2_TR(0x6a9559);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a955c:L6a955c:{c.instructions+=9;NFSU2_TR(0x6a955c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a955d:{NFSU2_TR(0x6a955d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a955f:{NFSU2_TR(0x6a955f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9560:{NFSU2_TR(0x6a9560);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a9563:{NFSU2_TR(0x6a9563);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9565:{NFSU2_TR(0x6a9565);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9567:{NFSU2_TR(0x6a9567);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a956d:{NFSU2_TR(0x6a956d);
__builtin_memmove((R+4),(R+24),4);
}
B6a956f:{NFSU2_TR(0x6a956f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9574ull));
TAIL_STATIC(0x699c39u,699);
}
B6a9574:L6a9574:{c.instructions+=6;NFSU2_TR(0x6a9574);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9577:{NFSU2_TR(0x6a9577);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a957a:{NFSU2_TR(0x6a957a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a957d:{NFSU2_TR(0x6a957d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9580:{NFSU2_TR(0x6a9580);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0xffffffffull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6a9584:{NFSU2_TR(0x6a9584);
if(r1(R+518)){{goto L6a9789;}}
}
B6a958a:L6a958a:{c.instructions+=36;NFSU2_TR(0x6a958a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a958d:{NFSU2_TR(0x6a958d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a958f:{NFSU2_TR(0x6a958f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9592:{NFSU2_TR(0x6a9592);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a9595:{NFSU2_TR(0x6a9595);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9598:{NFSU2_TR(0x6a9598);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a959b:{NFSU2_TR(0x6a959b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a959e:{NFSU2_TR(0x6a959e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a95a1:{NFSU2_TR(0x6a95a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a95a4:{NFSU2_TR(0x6a95a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a95a7:{NFSU2_TR(0x6a95a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a95aa:{NFSU2_TR(0x6a95aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a95ad:{NFSU2_TR(0x6a95ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a95b0:{NFSU2_TR(0x6a95b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a95b2:{NFSU2_TR(0x6a95b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a95b5:{NFSU2_TR(0x6a95b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a95b8:{NFSU2_TR(0x6a95b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a95bb:{NFSU2_TR(0x6a95bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a95be:{NFSU2_TR(0x6a95be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a95c1:{NFSU2_TR(0x6a95c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a95c4:{NFSU2_TR(0x6a95c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a95c7:{NFSU2_TR(0x6a95c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a95ca:{NFSU2_TR(0x6a95ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a95ce:{NFSU2_TR(0x6a95ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a95d1:{NFSU2_TR(0x6a95d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a95d4:{NFSU2_TR(0x6a95d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a95d7:{NFSU2_TR(0x6a95d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a95da:{NFSU2_TR(0x6a95da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a95dd:{NFSU2_TR(0x6a95dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a95e0:{NFSU2_TR(0x6a95e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a95e2:{NFSU2_TR(0x6a95e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a95e5:{NFSU2_TR(0x6a95e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a95e7:{NFSU2_TR(0x6a95e7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xe000000ull))));
}
B6a95ec:{NFSU2_TR(0x6a95ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+4)),r4(U+0));
}
B6a95ee:{NFSU2_TR(0x6a95ee);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x10ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6a95f2:{NFSU2_TR(0x6a95f2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a955cu);}goto L6a955c;}}
}
B6a95f8:L6a95f8:{c.instructions+=12;NFSU2_TR(0x6a95f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a95fb:{NFSU2_TR(0x6a95fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a95fe:{NFSU2_TR(0x6a95fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9601:{NFSU2_TR(0x6a9601);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9604:{NFSU2_TR(0x6a9604);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6a9606:{NFSU2_TR(0x6a9606);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9609:{NFSU2_TR(0x6a9609);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a960b:{NFSU2_TR(0x6a960b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a960e:{NFSU2_TR(0x6a960e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a9610:{NFSU2_TR(0x6a9610);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9612:{NFSU2_TR(0x6a9612);
__builtin_memmove((R+4),(R+28),4);
}
B6a9614:{NFSU2_TR(0x6a9614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9619ull));
TAIL_STATIC(0x6739efu,673);
}
B6a9619:L6a9619:{c.instructions+=6;NFSU2_TR(0x6a9619);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a961c:{NFSU2_TR(0x6a961c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a961f:{NFSU2_TR(0x6a961f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a9622:{NFSU2_TR(0x6a9622);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9625:{NFSU2_TR(0x6a9625);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9627:{NFSU2_TR(0x6a9627);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a9639;}}
}
B6a9629:L6a9629:{c.instructions+=7;NFSU2_TR(0x6a9629);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a962c:{NFSU2_TR(0x6a962c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6a962f:{NFSU2_TR(0x6a962f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a9632:{NFSU2_TR(0x6a9632);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6a9633:{NFSU2_TR(0x6a9633);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9635:{NFSU2_TR(0x6a9635);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6a9637:{NFSU2_TR(0x6a9637);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9629u);}goto L6a9629;}}
}
B6a9639:L6a9639:{c.instructions+=7;NFSU2_TR(0x6a9639);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a963c:{NFSU2_TR(0x6a963c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a963f:{NFSU2_TR(0x6a963f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a9642:{NFSU2_TR(0x6a9642);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9645:{NFSU2_TR(0x6a9645);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a9649:{NFSU2_TR(0x6a9649);
__builtin_memmove((R+4),(R+24),4);
}
B6a964b:{NFSU2_TR(0x6a964b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9650ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a9650:L6a9650:{c.instructions+=1;NFSU2_TR(0x6a9650);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9657:L6a9657:{c.instructions+=4;NFSU2_TR(0x6a9657);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a965a:{NFSU2_TR(0x6a965a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a965d:{NFSU2_TR(0x6a965d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a9660:{NFSU2_TR(0x6a9660);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a92e3u);}goto L6a92e3;}}
}
B6a9666:L6a9666:{c.instructions+=2;NFSU2_TR(0x6a9666);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a966a:{NFSU2_TR(0x6a966a);
if(r1(R+518)){{goto L6a967e;}}
}
B6a966c:L6a966c:{c.instructions+=4;NFSU2_TR(0x6a966c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9670:{NFSU2_TR(0x6a9670);
__builtin_memmove((R+4),(R+24),4);
}
B6a9672:{NFSU2_TR(0x6a9672);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9679:{NFSU2_TR(0x6a9679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a967eull));
TAIL_STATIC(0x69e219u,69e);
}
B6a967e:L6a967e:{c.instructions+=4;NFSU2_TR(0x6a967e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a9680:{NFSU2_TR(0x6a9680);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9683:{NFSU2_TR(0x6a9683);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9686:{NFSU2_TR(0x6a9686);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a97d0;}}
}
B6a968c:L6a968c:{c.instructions+=7;NFSU2_TR(0x6a968c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a968f:{NFSU2_TR(0x6a968f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9692:{NFSU2_TR(0x6a9692);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a9695:{NFSU2_TR(0x6a9695);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a9697:{NFSU2_TR(0x6a9697);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6a969c:{NFSU2_TR(0x6a969c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a969f:{NFSU2_TR(0x6a969f);
if(r1(R+518)){{goto L6a97c1;}}
}
B6a96a5:L6a96a5:{c.instructions+=2;NFSU2_TR(0x6a96a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a96a8:{NFSU2_TR(0x6a96a8);
if(r1(R+518)){{goto L6a96be;}}
}
B6a96aa:L6a96aa:{c.instructions+=6;NFSU2_TR(0x6a96aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a96ad:{NFSU2_TR(0x6a96ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a96af:{NFSU2_TR(0x6a96af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a96b2:{NFSU2_TR(0x6a96b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a96b5:{NFSU2_TR(0x6a96b5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a96b8:{NFSU2_TR(0x6a96b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a97c1;}}
}
B6a96be:L6a96be:{c.instructions+=2;NFSU2_TR(0x6a96be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a96c3:{NFSU2_TR(0x6a96c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a97c1;}}
}
B6a96c9:L6a96c9:{c.instructions+=3;NFSU2_TR(0x6a96c9);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a96cc:{NFSU2_TR(0x6a96cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a96cf:{NFSU2_TR(0x6a96cf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a97c1;}}
}
B6a96d5:L6a96d5:{c.instructions+=12;NFSU2_TR(0x6a96d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a96d8:{NFSU2_TR(0x6a96d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a96db:{NFSU2_TR(0x6a96db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a96de:{NFSU2_TR(0x6a96de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a96e1:{NFSU2_TR(0x6a96e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a96e3:{NFSU2_TR(0x6a96e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a96e6:{NFSU2_TR(0x6a96e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a96e9:{NFSU2_TR(0x6a96e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a96ec:{NFSU2_TR(0x6a96ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a96ef:{NFSU2_TR(0x6a96ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a96f2:{NFSU2_TR(0x6a96f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a96f6:{NFSU2_TR(0x6a96f6);
if(r1(R+518)){{goto L6a97b0;}}
}
B6a96fc:L6a96fc:{c.instructions+=2;NFSU2_TR(0x6a96fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9700:{NFSU2_TR(0x6a9700);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a97b0;}}
}
B6a9706:L6a9706:{c.instructions+=7;NFSU2_TR(0x6a9706);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9709:{NFSU2_TR(0x6a9709);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a970c:{NFSU2_TR(0x6a970c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a970f:{NFSU2_TR(0x6a970f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a9711:{NFSU2_TR(0x6a9711);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfff00000ull))));
}
B6a9717:{NFSU2_TR(0x6a9717);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a971d:{NFSU2_TR(0x6a971d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a97b0;}}
}
B6a9723:L6a9723:{c.instructions+=5;NFSU2_TR(0x6a9723);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9726:{NFSU2_TR(0x6a9726);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a972a:{NFSU2_TR(0x6a972a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a972c:{NFSU2_TR(0x6a972c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a972f:{NFSU2_TR(0x6a972f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a974a;}}
}
B6a9731:L6a9731:{c.instructions+=2;NFSU2_TR(0x6a9731);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9734:{NFSU2_TR(0x6a9734);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9737:L6a9737:{c.instructions+=3;NFSU2_TR(0x6a9737);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a973a:{NFSU2_TR(0x6a973a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a973c:{NFSU2_TR(0x6a973c);
if(r1(R+518)){{goto L6a974a;}}
}
B6a973e:L6a973e:{c.instructions+=4;NFSU2_TR(0x6a973e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9741:{NFSU2_TR(0x6a9741);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9745:{NFSU2_TR(0x6a9745);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6a9748:{NFSU2_TR(0x6a9748);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9737u);}goto L6a9737;}}
}
B6a974a:L6a974a:{c.instructions+=4;NFSU2_TR(0x6a974a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a974d:{NFSU2_TR(0x6a974d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9750:{NFSU2_TR(0x6a9750);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9754:{NFSU2_TR(0x6a9754);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6a9757:L6a9757:{c.instructions+=7;NFSU2_TR(0x6a9757);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a9759:{NFSU2_TR(0x6a9759);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a975c:{NFSU2_TR(0x6a975c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a975f:{NFSU2_TR(0x6a975f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a9762:{NFSU2_TR(0x6a9762);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a9765:{NFSU2_TR(0x6a9765);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a9769:{NFSU2_TR(0x6a9769);
if(r1(R+518)){{goto L6a9776;}}
}
B6a976b:L6a976b:{c.instructions+=2;NFSU2_TR(0x6a976b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a976e:{NFSU2_TR(0x6a976e);
if(r1(R+518)){{goto L6a9776;}}
}
B6a9770:L6a9770:{c.instructions+=2;NFSU2_TR(0x6a9770);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9774:{NFSU2_TR(0x6a9774);
if(r1(R+518)){{goto L6a9793;}}
}
B6a9776:L6a9776:{c.instructions+=6;NFSU2_TR(0x6a9776);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9779:{NFSU2_TR(0x6a9779);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a977c:{NFSU2_TR(0x6a977c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a977f:{NFSU2_TR(0x6a977f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6a9781:{NFSU2_TR(0x6a9781);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6a9785:{NFSU2_TR(0x6a9785);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9757u);}goto L6a9757;}}
}
B6a9787:L6a9787:{c.instructions+=1;NFSU2_TR(0x6a9787);
{goto L6a97ad;}
}
B6a9789:L6a9789:{c.instructions+=2;NFSU2_TR(0x6a9789);
w4(R+0,u32(0x8007000eull));
}
B6a978e:{NFSU2_TR(0x6a978e);
TAIL_STATIC(0x6aa1ddu,6aa);
}
B6a9793:L6a9793:{c.instructions+=10;NFSU2_TR(0x6a9793);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a9795:{NFSU2_TR(0x6a9795);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a9796:{NFSU2_TR(0x6a9796);
__builtin_memmove((R+8),(R+4),4);
}
B6a9798:{NFSU2_TR(0x6a9798);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B6a979b:{NFSU2_TR(0x6a979b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a979e:{NFSU2_TR(0x6a979e);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B6a97a2:{NFSU2_TR(0x6a97a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B6a97a5:{NFSU2_TR(0x6a97a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a97a8:{NFSU2_TR(0x6a97a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a97ab:{NFSU2_TR(0x6a97ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6a97ad:L6a97ad:{c.instructions+=1;NFSU2_TR(0x6a97ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a97b0:L6a97b0:{c.instructions+=4;NFSU2_TR(0x6a97b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a97b3:{NFSU2_TR(0x6a97b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a97b6:{NFSU2_TR(0x6a97b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a97b9:{NFSU2_TR(0x6a97b9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a96d5u);}goto L6a96d5;}}
}
B6a97bf:L6a97bf:{c.instructions+=1;NFSU2_TR(0x6a97bf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a97c1:L6a97c1:{c.instructions+=4;NFSU2_TR(0x6a97c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a97c4:{NFSU2_TR(0x6a97c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a97c7:{NFSU2_TR(0x6a97c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a97ca:{NFSU2_TR(0x6a97ca);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a968cu);}goto L6a968c;}}
}
B6a97d0:L6a97d0:{c.instructions+=2;NFSU2_TR(0x6a97d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a97d3:{NFSU2_TR(0x6a97d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6aa1c9u,6aa);}
}
B6a97d9:L6a97d9:{c.instructions+=2;NFSU2_TR(0x6a97d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a97dc:{NFSU2_TR(0x6a97dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6aa1c9u,6aa);}
}
B6a97e2:L6a97e2:{c.instructions+=5;NFSU2_TR(0x6a97e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a97e5:{NFSU2_TR(0x6a97e5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a97e7:{NFSU2_TR(0x6a97e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a97ea:{NFSU2_TR(0x6a97ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a97ed:{NFSU2_TR(0x6a97ed);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6aa198u,6aa);}
}
B6a97f3:L6a97f3:{c.instructions+=8;NFSU2_TR(0x6a97f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a97f6:{NFSU2_TR(0x6a97f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a97f9:{NFSU2_TR(0x6a97f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a97fc:{NFSU2_TR(0x6a97fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a97ff:{NFSU2_TR(0x6a97ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a9802:{NFSU2_TR(0x6a9802);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9804:{NFSU2_TR(0x6a9804);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9807:{NFSU2_TR(0x6a9807);
if(r1(R+518)){{goto L6a981d;}}
}
B6a9809:L6a9809:{c.instructions+=6;NFSU2_TR(0x6a9809);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a980c:{NFSU2_TR(0x6a980c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a980e:{NFSU2_TR(0x6a980e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9811:{NFSU2_TR(0x6a9811);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9814:{NFSU2_TR(0x6a9814);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a9817:{NFSU2_TR(0x6a9817);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6aa188u,6aa);}
}
B6a981d:L6a981d:{c.instructions+=4;NFSU2_TR(0x6a981d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a981f:{NFSU2_TR(0x6a981f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a9824:{NFSU2_TR(0x6a9824);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9829:{NFSU2_TR(0x6a9829);
if(r1(R+518)){{goto L6a9836;}}
}
B6a982b:L6a982b:{c.instructions+=2;NFSU2_TR(0x6a982b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9830:{NFSU2_TR(0x6a9830);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9c25;}}
}
B6a9836:L6a9836:{c.instructions+=2;NFSU2_TR(0x6a9836);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9839:{NFSU2_TR(0x6a9839);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a988a;}}
}
B6a983b:L6a983b:{c.instructions+=5;NFSU2_TR(0x6a983b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a983d:{NFSU2_TR(0x6a983d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a983e:{NFSU2_TR(0x6a983e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9840:{NFSU2_TR(0x6a9840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9843:{NFSU2_TR(0x6a9843);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a9848;}}
}
B6a9845:L6a9845:{c.instructions+=1;NFSU2_TR(0x6a9845);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9848:L6a9848:{c.instructions+=2;NFSU2_TR(0x6a9848);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a984b:{NFSU2_TR(0x6a984b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9850ull));
TAIL_STATIC(0x575630u,575);
}
B6a9850:L6a9850:{c.instructions+=4;NFSU2_TR(0x6a9850);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9853:{NFSU2_TR(0x6a9853);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a9856:{NFSU2_TR(0x6a9856);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9857:{NFSU2_TR(0x6a9857);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a985cull));
TAIL_STATIC(0x575620u,575);
}
B6a985c:L6a985c:{c.instructions+=5;NFSU2_TR(0x6a985c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a985e:{NFSU2_TR(0x6a985e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a985f:{NFSU2_TR(0x6a985f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a9860:{NFSU2_TR(0x6a9860);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9863:{NFSU2_TR(0x6a9863);
if(r1(R+518)){TAIL_STATIC(0x6aa1e2u,6aa);}
}
B6a9869:L6a9869:{c.instructions+=2;NFSU2_TR(0x6a9869);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a986c:{NFSU2_TR(0x6a986c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9871ull));
TAIL_STATIC(0x575630u,575);
}
B6a9871:L6a9871:{c.instructions+=4;NFSU2_TR(0x6a9871);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9874:{NFSU2_TR(0x6a9874);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a9877:{NFSU2_TR(0x6a9877);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9878:{NFSU2_TR(0x6a9878);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a987dull));
TAIL_STATIC(0x575620u,575);
}
B6a987d:L6a987d:{c.instructions+=5;NFSU2_TR(0x6a987d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a987f:{NFSU2_TR(0x6a987f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a9880:{NFSU2_TR(0x6a9880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a9881:{NFSU2_TR(0x6a9881);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9884:{NFSU2_TR(0x6a9884);
if(r1(R+518)){TAIL_STATIC(0x6aa1e2u,6aa);}
}
B6a988a:L6a988a:{c.instructions+=3;NFSU2_TR(0x6a988a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a988e:{NFSU2_TR(0x6a988e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9890:{NFSU2_TR(0x6a9890);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a98e1;}}
}
B6a9892:L6a9892:{c.instructions+=4;NFSU2_TR(0x6a9892);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9895:{NFSU2_TR(0x6a9895);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9898:{NFSU2_TR(0x6a9898);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a989b:{NFSU2_TR(0x6a989b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a989e:L6a989e:{c.instructions+=12;NFSU2_TR(0x6a989e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a98a1:{NFSU2_TR(0x6a98a1);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6a98a3:{NFSU2_TR(0x6a98a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a98a6:{NFSU2_TR(0x6a98a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6a98a9:{NFSU2_TR(0x6a98a9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a98ab:{NFSU2_TR(0x6a98ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a98ac:{NFSU2_TR(0x6a98ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a98af:{NFSU2_TR(0x6a98af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a98b0:{NFSU2_TR(0x6a98b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a98b3:{NFSU2_TR(0x6a98b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a98b6:{NFSU2_TR(0x6a98b6);
__builtin_memmove((R+4),(R+24),4);
}
B6a98b8:{NFSU2_TR(0x6a98b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a98bdull));
TAIL_STATIC(0x69b3dau,69b);
}
B6a98bd:L6a98bd:{c.instructions+=2;NFSU2_TR(0x6a98bd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6a98bf:{NFSU2_TR(0x6a98bf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a98e1;}}
}
B6a98c1:L6a98c1:{c.instructions+=6;NFSU2_TR(0x6a98c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a98c4:{NFSU2_TR(0x6a98c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a98c7:{NFSU2_TR(0x6a98c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a98c9:{NFSU2_TR(0x6a98c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a98cc:{NFSU2_TR(0x6a98cc);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+4))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a98cf:{NFSU2_TR(0x6a98cf);
if(r1(R+518)){{goto L6a98e1;}}
}
B6a98d1:L6a98d1:{c.instructions+=5;NFSU2_TR(0x6a98d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a98d4:{NFSU2_TR(0x6a98d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a98d8:{NFSU2_TR(0x6a98d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a98dc:{NFSU2_TR(0x6a98dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6a98df:{NFSU2_TR(0x6a98df);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a989eu);}goto L6a989e;}}
}
B6a98e1:L6a98e1:{c.instructions+=2;NFSU2_TR(0x6a98e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a98e4:{NFSU2_TR(0x6a98e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9c25;}}
}
B6a98ea:L6a98ea:{c.instructions+=8;NFSU2_TR(0x6a98ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a98ed:{NFSU2_TR(0x6a98ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a98ef:{NFSU2_TR(0x6a98ef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a98f0:{NFSU2_TR(0x6a98f0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a98f2:{NFSU2_TR(0x6a98f2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a98f4:{NFSU2_TR(0x6a98f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a98f7:{NFSU2_TR(0x6a98f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a98fa:{NFSU2_TR(0x6a98fa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a9947;}}
}
B6a98fc:L6a98fc:{c.instructions+=2;NFSU2_TR(0x6a98fc);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a98fe:{NFSU2_TR(0x6a98fe);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a9914;}}
}
B6a9900:L6a9900:{c.instructions+=6;NFSU2_TR(0x6a9900);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9904:{NFSU2_TR(0x6a9904);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9907:{NFSU2_TR(0x6a9907);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a9909:{NFSU2_TR(0x6a9909);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a990b:{NFSU2_TR(0x6a990b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a990e:{NFSU2_TR(0x6a990e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a9914;}}
}
B6a9910:L6a9910:{c.instructions+=1;NFSU2_TR(0x6a9910);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9914:L6a9914:{c.instructions+=5;NFSU2_TR(0x6a9914);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9917:{NFSU2_TR(0x6a9917);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a991d:{NFSU2_TR(0x6a991d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a991f:{NFSU2_TR(0x6a991f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a9922:{NFSU2_TR(0x6a9922);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a9934;}}
}
B6a9924:L6a9924:{c.instructions+=5;NFSU2_TR(0x6a9924);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9927:{NFSU2_TR(0x6a9927);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a992d:{NFSU2_TR(0x6a992d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a992f:{NFSU2_TR(0x6a992f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a9932:{NFSU2_TR(0x6a9932);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9938;}}
}
B6a9934:L6a9934:{c.instructions+=1;NFSU2_TR(0x6a9934);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9938:L6a9938:{c.instructions+=3;NFSU2_TR(0x6a9938);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a9939:{NFSU2_TR(0x6a9939);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6a993b:{NFSU2_TR(0x6a993b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a98fcu);}goto L6a98fc;}}
}
B6a993d:L6a993d:{c.instructions+=2;NFSU2_TR(0x6a993d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9941:{NFSU2_TR(0x6a9941);
if(r1(R+518)){{goto L6a9b0f;}}
}
B6a9947:L6a9947:{c.instructions+=6;NFSU2_TR(0x6a9947);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9949:{NFSU2_TR(0x6a9949);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a994f:{NFSU2_TR(0x6a994f);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a9951:{NFSU2_TR(0x6a9951);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a9953:{NFSU2_TR(0x6a9953);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a9956:{NFSU2_TR(0x6a9956);
if(r1(R+514)){{goto L6a99fc;}}
}
B6a995c:L6a995c:{c.instructions+=5;NFSU2_TR(0x6a995c);
__builtin_memmove((R+0),(R+28),4);
}
B6a995e:{NFSU2_TR(0x6a995e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6a9963:{NFSU2_TR(0x6a9963);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B6a9968:{NFSU2_TR(0x6a9968);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a996a:{NFSU2_TR(0x6a996a);
if(r1(R+518)){{goto L6a99a1;}}
}
B6a996c:L6a996c:{c.instructions+=6;NFSU2_TR(0x6a996c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6a996e:{NFSU2_TR(0x6a996e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a9971:{NFSU2_TR(0x6a9971);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a9974:{NFSU2_TR(0x6a9974);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a997b:{NFSU2_TR(0x6a997b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a997e:{NFSU2_TR(0x6a997e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a99a1;}}
}
B6a9980:L6a9980:{c.instructions+=2;NFSU2_TR(0x6a9980);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9981:{NFSU2_TR(0x6a9981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9986ull));
TAIL_STATIC(0x6992fau,699);
}
B6a9986:L6a9986:{c.instructions+=4;NFSU2_TR(0x6a9986);
__builtin_memmove((R+28),(R+0),4);
}
B6a9988:{NFSU2_TR(0x6a9988);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a998a:{NFSU2_TR(0x6a998a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a998d:{NFSU2_TR(0x6a998d);
if(r1(R+518)){TAIL_STATIC(0x6aa1e2u,6aa);}
}
B6a9993:L6a9993:{c.instructions+=3;NFSU2_TR(0x6a9993);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9996:{NFSU2_TR(0x6a9996);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6a9999:{NFSU2_TR(0x6a9999);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a999c:L6a999c:{c.instructions+=1;NFSU2_TR(0x6a999c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a999e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a999cu);}goto L6a999c;}
}
B6a999e:L6a999e:{c.instructions+=1;NFSU2_TR(0x6a999e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a99a1:L6a99a1:{c.instructions+=3;NFSU2_TR(0x6a99a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a99a5:{NFSU2_TR(0x6a99a5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a99a7:{NFSU2_TR(0x6a99a7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a9c25;}}
}
B6a99ad:L6a99ad:{c.instructions+=3;NFSU2_TR(0x6a99ad);
__builtin_memmove((R+0),(R+28),4);
}
B6a99af:{NFSU2_TR(0x6a99af);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a99b2:{NFSU2_TR(0x6a99b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a99b5:L6a99b5:{c.instructions+=9;NFSU2_TR(0x6a99b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a99b8:{NFSU2_TR(0x6a99b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a99bb:{NFSU2_TR(0x6a99bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a99be:{NFSU2_TR(0x6a99be);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a99c1:{NFSU2_TR(0x6a99c1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6a99c3:{NFSU2_TR(0x6a99c3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6a99c5:{NFSU2_TR(0x6a99c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a99c7:{NFSU2_TR(0x6a99c7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a99c9:{NFSU2_TR(0x6a99c9);
if(r1(R+518)){{goto L6a99d4;}}
}
B6a99cb:L6a99cb:{c.instructions+=2;NFSU2_TR(0x6a99cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a99cd:{NFSU2_TR(0x6a99cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a99d4:L6a99d4:{c.instructions+=6;NFSU2_TR(0x6a99d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a99d7:{NFSU2_TR(0x6a99d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a99da:{NFSU2_TR(0x6a99da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a99dc:{NFSU2_TR(0x6a99dc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6a99de:{NFSU2_TR(0x6a99de);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a99e0:{NFSU2_TR(0x6a99e0);
if(r1(R+518)){{goto L6a99eb;}}
}
B6a99e2:L6a99e2:{c.instructions+=2;NFSU2_TR(0x6a99e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a99e4:{NFSU2_TR(0x6a99e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a99eb:L6a99eb:{c.instructions+=4;NFSU2_TR(0x6a99eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a99ee:{NFSU2_TR(0x6a99ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a99f2:{NFSU2_TR(0x6a99f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6a99f5:{NFSU2_TR(0x6a99f5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a99b5u);}goto L6a99b5;}}
}
B6a99f7:L6a99f7:{c.instructions+=1;NFSU2_TR(0x6a99f7);
{goto L6a9c25;}
}
B6a99fc:L6a99fc:{c.instructions+=6;NFSU2_TR(0x6a99fc);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a99fe:{NFSU2_TR(0x6a99fe);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9a04:{NFSU2_TR(0x6a9a04);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a9a06:{NFSU2_TR(0x6a9a06);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a9a08:{NFSU2_TR(0x6a9a08);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a9a0b:{NFSU2_TR(0x6a9a0b);
if(r1(R+514)){{goto L6a9a4c;}}
}
B6a9a0d:L6a9a0d:{c.instructions+=8;NFSU2_TR(0x6a9a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9a11:{NFSU2_TR(0x6a9a11);
__builtin_memmove((R+0),(R+28),4);
}
B6a9a13:{NFSU2_TR(0x6a9a13);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6a9a18:{NFSU2_TR(0x6a9a18);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6a9a1d:{NFSU2_TR(0x6a9a1d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9a1f:{NFSU2_TR(0x6a9a1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6a9a21:{NFSU2_TR(0x6a9a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9a24:{NFSU2_TR(0x6a9a24);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a9a40;}}
}
B6a9a26:L6a9a26:{c.instructions+=9;NFSU2_TR(0x6a9a26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9a29:{NFSU2_TR(0x6a9a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9a2c:{NFSU2_TR(0x6a9a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9a2f:{NFSU2_TR(0x6a9a2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a9a32:{NFSU2_TR(0x6a9a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9a35:{NFSU2_TR(0x6a9a35);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6a9a38:{NFSU2_TR(0x6a9a38);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a9a3b:{NFSU2_TR(0x6a9a3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a9a3e:{NFSU2_TR(0x6a9a3e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9a26u);}goto L6a9a26;}}
}
B6a9a40:L6a9a40:{c.instructions+=2;NFSU2_TR(0x6a9a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9a47:{NFSU2_TR(0x6a9a47);
{goto L6a9c25;}
}
B6a9a4c:L6a9a4c:{c.instructions+=6;NFSU2_TR(0x6a9a4c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9a4e:{NFSU2_TR(0x6a9a4e);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9a54:{NFSU2_TR(0x6a9a54);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a9a56:{NFSU2_TR(0x6a9a56);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a9a58:{NFSU2_TR(0x6a9a58);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a9a5b:{NFSU2_TR(0x6a9a5b);
if(r1(R+514)){{goto L6a9aab;}}
}
B6a9a5d:L6a9a5d:{c.instructions+=7;NFSU2_TR(0x6a9a5d);
__builtin_memmove((R+0),(R+28),4);
}
B6a9a5f:{NFSU2_TR(0x6a9a5f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6a9a64:{NFSU2_TR(0x6a9a64);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6a9a69:{NFSU2_TR(0x6a9a69);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9a6d:{NFSU2_TR(0x6a9a6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6a9a6f:{NFSU2_TR(0x6a9a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9a72:{NFSU2_TR(0x6a9a72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9a95;}}
}
B6a9a74:L6a9a74:{c.instructions+=9;NFSU2_TR(0x6a9a74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9a75:{NFSU2_TR(0x6a9a75);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a9a77:{NFSU2_TR(0x6a9a77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9a78:{NFSU2_TR(0x6a9a78);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a9a7b:{NFSU2_TR(0x6a9a7b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9a7d:{NFSU2_TR(0x6a9a7d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9a7f:{NFSU2_TR(0x6a9a7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a9a82:{NFSU2_TR(0x6a9a82);
__builtin_memmove((R+4),(R+24),4);
}
B6a9a84:{NFSU2_TR(0x6a9a84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9a89ull));
TAIL_STATIC(0x699c39u,699);
}
B6a9a89:L6a9a89:{c.instructions+=3;NFSU2_TR(0x6a9a89);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9a8c:{NFSU2_TR(0x6a9a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9a8f:{NFSU2_TR(0x6a9a8f);
if(r1(R+518)){TAIL_STATIC(0x6aa1e2u,6aa);}
}
B6a9a95:L6a9a95:{c.instructions+=3;NFSU2_TR(0x6a9a95);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a9a97:{NFSU2_TR(0x6a9a97);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9a99:{NFSU2_TR(0x6a9a99);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9a40u);}goto L6a9a40;}}
}
B6a9a9b:L6a9a9b:{c.instructions+=6;NFSU2_TR(0x6a9a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9a9e:{NFSU2_TR(0x6a9a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9aa1:{NFSU2_TR(0x6a9aa1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a9aa4:{NFSU2_TR(0x6a9aa4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a9aa5:{NFSU2_TR(0x6a9aa5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6a9aa7:{NFSU2_TR(0x6a9aa7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9a9bu);}goto L6a9a9b;}}
}
B6a9aa9:L6a9aa9:{c.instructions+=1;NFSU2_TR(0x6a9aa9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9a40u);}goto L6a9a40;}
}
B6a9aab:L6a9aab:{c.instructions+=6;NFSU2_TR(0x6a9aab);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9aad:{NFSU2_TR(0x6a9aad);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9ab3:{NFSU2_TR(0x6a9ab3);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a9ab5:{NFSU2_TR(0x6a9ab5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a9ab7:{NFSU2_TR(0x6a9ab7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a9aba:{NFSU2_TR(0x6a9aba);
if(r1(R+514)){{goto L6a9b0f;}}
}
B6a9abc:L6a9abc:{c.instructions+=5;NFSU2_TR(0x6a9abc);
__builtin_memmove((R+0),(R+28),4);
}
B6a9abe:{NFSU2_TR(0x6a9abe);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6a9ac3:{NFSU2_TR(0x6a9ac3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B6a9ac8:{NFSU2_TR(0x6a9ac8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a9aca:{NFSU2_TR(0x6a9aca);
if(r1(R+518)){{goto L6a9ad8;}}
}
B6a9acc:L6a9acc:{c.instructions+=3;NFSU2_TR(0x6a9acc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6a9ace:{NFSU2_TR(0x6a9ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9ad1:{NFSU2_TR(0x6a9ad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9ad8:L6a9ad8:{c.instructions+=3;NFSU2_TR(0x6a9ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9adc:{NFSU2_TR(0x6a9adc);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9ade:{NFSU2_TR(0x6a9ade);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a9c25;}}
}
B6a9ae4:L6a9ae4:{c.instructions+=8;NFSU2_TR(0x6a9ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9ae7:{NFSU2_TR(0x6a9ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9aea:{NFSU2_TR(0x6a9aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9aed:{NFSU2_TR(0x6a9aed);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a9af0:{NFSU2_TR(0x6a9af0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6a9af2:{NFSU2_TR(0x6a9af2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a9af5:{NFSU2_TR(0x6a9af5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a9af7:{NFSU2_TR(0x6a9af7);
if(r1(R+518)){{goto L6a9b02;}}
}
B6a9af9:L6a9af9:{c.instructions+=2;NFSU2_TR(0x6a9af9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a9afb:{NFSU2_TR(0x6a9afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9b02:L6a9b02:{c.instructions+=3;NFSU2_TR(0x6a9b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9b05:{NFSU2_TR(0x6a9b05);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6a9b08:{NFSU2_TR(0x6a9b08);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9ae4u);}goto L6a9ae4;}}
}
B6a9b0a:L6a9b0a:{c.instructions+=1;NFSU2_TR(0x6a9b0a);
{goto L6a9c25;}
}
B6a9b0f:L6a9b0f:{c.instructions+=2;NFSU2_TR(0x6a9b0f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a9b13:{NFSU2_TR(0x6a9b13);
if(r1(R+518)){{goto L6a9b1f;}}
}
B6a9b15:L6a9b15:{c.instructions+=2;NFSU2_TR(0x6a9b15);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9b19:{NFSU2_TR(0x6a9b19);
if(r1(R+518)){{goto L6a9c25;}}
}
B6a9b1f:L6a9b1f:{c.instructions+=5;NFSU2_TR(0x6a9b1f);
__builtin_memmove((R+0),(R+28),4);
}
B6a9b21:{NFSU2_TR(0x6a9b21);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6a9b26:{NFSU2_TR(0x6a9b26);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B6a9b2b:{NFSU2_TR(0x6a9b2b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a9b2d:{NFSU2_TR(0x6a9b2d);
if(r1(R+518)){{goto L6a9b64;}}
}
B6a9b2f:L6a9b2f:{c.instructions+=6;NFSU2_TR(0x6a9b2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6a9b31:{NFSU2_TR(0x6a9b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a9b34:{NFSU2_TR(0x6a9b34);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a9b37:{NFSU2_TR(0x6a9b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9b3e:{NFSU2_TR(0x6a9b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9b41:{NFSU2_TR(0x6a9b41);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a9b64;}}
}
B6a9b43:L6a9b43:{c.instructions+=2;NFSU2_TR(0x6a9b43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9b44:{NFSU2_TR(0x6a9b44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9b49ull));
TAIL_STATIC(0x6992fau,699);
}
B6a9b49:L6a9b49:{c.instructions+=4;NFSU2_TR(0x6a9b49);
__builtin_memmove((R+28),(R+0),4);
}
B6a9b4b:{NFSU2_TR(0x6a9b4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9b4d:{NFSU2_TR(0x6a9b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9b50:{NFSU2_TR(0x6a9b50);
if(r1(R+518)){TAIL_STATIC(0x6aa1e2u,6aa);}
}
B6a9b56:L6a9b56:{c.instructions+=3;NFSU2_TR(0x6a9b56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9b59:{NFSU2_TR(0x6a9b59);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6a9b5c:{NFSU2_TR(0x6a9b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9b5f:L6a9b5f:{c.instructions+=1;NFSU2_TR(0x6a9b5f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a9b61;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9b5fu);}goto L6a9b5f;}
}
B6a9b61:L6a9b61:{c.instructions+=1;NFSU2_TR(0x6a9b61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a9b64:L6a9b64:{c.instructions+=3;NFSU2_TR(0x6a9b64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9b68:{NFSU2_TR(0x6a9b68);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9b6a:{NFSU2_TR(0x6a9b6a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a9c25;}}
}
B6a9b70:L6a9b70:{c.instructions+=3;NFSU2_TR(0x6a9b70);
__builtin_memmove((R+0),(R+28),4);
}
B6a9b72:{NFSU2_TR(0x6a9b72);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a9b75:{NFSU2_TR(0x6a9b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9b78:L6a9b78:{c.instructions+=8;NFSU2_TR(0x6a9b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9b7b:{NFSU2_TR(0x6a9b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9b7e:{NFSU2_TR(0x6a9b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9b81:{NFSU2_TR(0x6a9b81);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a9b84:{NFSU2_TR(0x6a9b84);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6a9b86:{NFSU2_TR(0x6a9b86);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a9b89:{NFSU2_TR(0x6a9b89);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a9b8b:{NFSU2_TR(0x6a9b8b);
if(r1(R+518)){{goto L6a9b96;}}
}
B6a9b8d:L6a9b8d:{c.instructions+=2;NFSU2_TR(0x6a9b8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a9b8f:{NFSU2_TR(0x6a9b8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9b96:L6a9b96:{c.instructions+=5;NFSU2_TR(0x6a9b96);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9b99:{NFSU2_TR(0x6a9b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9b9c:{NFSU2_TR(0x6a9b9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9b9f:{NFSU2_TR(0x6a9b9f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9ba2:{NFSU2_TR(0x6a9ba2);
if(r1(R+518)){{goto L6a9bac;}}
}
B6a9ba4:L6a9ba4:{c.instructions+=3;NFSU2_TR(0x6a9ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9ba7:{NFSU2_TR(0x6a9ba7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9baa:{NFSU2_TR(0x6a9baa);
{goto L6a9bae;}
}
B6a9bac:L6a9bac:{c.instructions+=1;NFSU2_TR(0x6a9bac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a9bae:L6a9bae:{c.instructions+=2;NFSU2_TR(0x6a9bae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9bb0:{NFSU2_TR(0x6a9bb0);
if(r1(R+518)){{goto L6a9bdc;}}
}
B6a9bb2:L6a9bb2:{c.instructions+=5;NFSU2_TR(0x6a9bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9bb5:{NFSU2_TR(0x6a9bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9bb8:{NFSU2_TR(0x6a9bb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a9bbb:{NFSU2_TR(0x6a9bbb);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a9bbf:{NFSU2_TR(0x6a9bbf);
if(r1(R+518)){{goto L6a9bdc;}}
}
B6a9bc1:L6a9bc1:{c.instructions+=2;NFSU2_TR(0x6a9bc1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9bc5:{NFSU2_TR(0x6a9bc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9bdc;}}
}
B6a9bc7:L6a9bc7:{c.instructions+=8;NFSU2_TR(0x6a9bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9bca:{NFSU2_TR(0x6a9bca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9bcd:{NFSU2_TR(0x6a9bcd);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9bd0:{NFSU2_TR(0x6a9bd0);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9bd3:{NFSU2_TR(0x6a9bd3);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a9bd5:{NFSU2_TR(0x6a9bd5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a9bd7:{NFSU2_TR(0x6a9bd7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a9bda:{NFSU2_TR(0x6a9bda);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a9c15;}}
}
B6a9bdc:L6a9bdc:{c.instructions+=11;NFSU2_TR(0x6a9bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9bdf:{NFSU2_TR(0x6a9bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9be2:{NFSU2_TR(0x6a9be2);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9be5:{NFSU2_TR(0x6a9be5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9be6:{NFSU2_TR(0x6a9be6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9be7:{NFSU2_TR(0x6a9be7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a9bea:{NFSU2_TR(0x6a9bea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9bec:{NFSU2_TR(0x6a9bec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9bee:{NFSU2_TR(0x6a9bee);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a9bf1:{NFSU2_TR(0x6a9bf1);
__builtin_memmove((R+4),(R+24),4);
}
B6a9bf3:{NFSU2_TR(0x6a9bf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9bf8ull));
TAIL_STATIC(0x699c39u,699);
}
B6a9bf8:L6a9bf8:{c.instructions+=6;NFSU2_TR(0x6a9bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9bfb:{NFSU2_TR(0x6a9bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9bfe:{NFSU2_TR(0x6a9bfe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a9c01:{NFSU2_TR(0x6a9c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9c04:{NFSU2_TR(0x6a9c04);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a9c08:{NFSU2_TR(0x6a9c08);
if(r1(R+518)){TAIL_STATIC(0x6aa1e2u,6aa);}
}
B6a9c0e:L6a9c0e:{c.instructions+=1;NFSU2_TR(0x6a9c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9c15:L6a9c15:{c.instructions+=4;NFSU2_TR(0x6a9c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9c18:{NFSU2_TR(0x6a9c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9c1c:{NFSU2_TR(0x6a9c1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6a9c1f:{NFSU2_TR(0x6a9c1f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9b78u);}goto L6a9b78;}}
}
B6a9c25:L6a9c25:{c.instructions+=4;NFSU2_TR(0x6a9c25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a9c27:{NFSU2_TR(0x6a9c27);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a9c2c:{NFSU2_TR(0x6a9c2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9c31:{NFSU2_TR(0x6a9c31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6aa188u,6aa);}
}
B6a9c37:L6a9c37:{c.instructions+=7;NFSU2_TR(0x6a9c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9c3a:{NFSU2_TR(0x6a9c3a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a9c3c:{NFSU2_TR(0x6a9c3c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9c3e:{NFSU2_TR(0x6a9c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9c41:{NFSU2_TR(0x6a9c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9c44:{NFSU2_TR(0x6a9c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9c47:{NFSU2_TR(0x6a9c47);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a9d9c;}}
}
B6a9c4d:L6a9c4d:{c.instructions+=21;NFSU2_TR(0x6a9c4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9c50:{NFSU2_TR(0x6a9c50);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B6a9c53:{NFSU2_TR(0x6a9c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9c56:{NFSU2_TR(0x6a9c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9c59:{NFSU2_TR(0x6a9c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9c5c:{NFSU2_TR(0x6a9c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9c5f:{NFSU2_TR(0x6a9c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a9c62:{NFSU2_TR(0x6a9c62);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a9c64:{NFSU2_TR(0x6a9c64);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a9c67:{NFSU2_TR(0x6a9c67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9c68:{NFSU2_TR(0x6a9c68);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a9c6b:{NFSU2_TR(0x6a9c6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9c6c:{NFSU2_TR(0x6a9c6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a9c6f:{NFSU2_TR(0x6a9c6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9c70:{NFSU2_TR(0x6a9c70);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a9c73:{NFSU2_TR(0x6a9c73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9c74:{NFSU2_TR(0x6a9c74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9c75:{NFSU2_TR(0x6a9c75);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9c78:{NFSU2_TR(0x6a9c78);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a9c7b:{NFSU2_TR(0x6a9c7b);
__builtin_memmove((R+4),(R+24),4);
}
B6a9c7d:{NFSU2_TR(0x6a9c7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9c82ull));
TAIL_STATIC(0x69b664u,69b);
}
B6a9c82:L6a9c82:{c.instructions+=2;NFSU2_TR(0x6a9c82);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6a9c84:{NFSU2_TR(0x6a9c84);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a9d9c;}}
}
B6a9c8a:L6a9c8a:{c.instructions+=4;NFSU2_TR(0x6a9c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9c8d:{NFSU2_TR(0x6a9c8d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6a9c90:{NFSU2_TR(0x6a9c90);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9c92:{NFSU2_TR(0x6a9c92);
if(r1(R+518)){{goto L6a9cbf;}}
}
B6a9c94:L6a9c94:{c.instructions+=3;NFSU2_TR(0x6a9c94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9c97:{NFSU2_TR(0x6a9c97);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9c99:{NFSU2_TR(0x6a9c99);
if(r1(R+518)){{goto L6a9cbf;}}
}
B6a9c9b:L6a9c9b:{c.instructions+=8;NFSU2_TR(0x6a9c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9c9e:{NFSU2_TR(0x6a9c9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a9ca1:{NFSU2_TR(0x6a9ca1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9ca4:{NFSU2_TR(0x6a9ca4);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9ca7:{NFSU2_TR(0x6a9ca7);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a9caa:{NFSU2_TR(0x6a9caa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a9cac:{NFSU2_TR(0x6a9cac);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a9caf:{NFSU2_TR(0x6a9caf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9cb9;}}
}
B6a9cb1:L6a9cb1:{c.instructions+=3;NFSU2_TR(0x6a9cb1);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6a9cb4:{NFSU2_TR(0x6a9cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9cb7:{NFSU2_TR(0x6a9cb7);
{goto L6a9cbf;}
}
B6a9cb9:L6a9cb9:{c.instructions+=2;NFSU2_TR(0x6a9cb9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6a9cbc:{NFSU2_TR(0x6a9cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9cbf:L6a9cbf:{c.instructions+=4;NFSU2_TR(0x6a9cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9cc2:{NFSU2_TR(0x6a9cc2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9cc4:{NFSU2_TR(0x6a9cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9cc7:{NFSU2_TR(0x6a9cc7);
if(r1(R+518)){{goto L6a9cfc;}}
}
B6a9cc9:L6a9cc9:{c.instructions+=2;NFSU2_TR(0x6a9cc9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9ccb:{NFSU2_TR(0x6a9ccb);
if(r1(R+518)){{goto L6a9cf8;}}
}
B6a9ccd:L6a9ccd:{c.instructions+=8;NFSU2_TR(0x6a9ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9cd0:{NFSU2_TR(0x6a9cd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a9cd3:{NFSU2_TR(0x6a9cd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9cd6:{NFSU2_TR(0x6a9cd6);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9cd9:{NFSU2_TR(0x6a9cd9);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a9cdc:{NFSU2_TR(0x6a9cdc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a9cde:{NFSU2_TR(0x6a9cde);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a9ce1:{NFSU2_TR(0x6a9ce1);
if(r1(R+514)){{goto L6a9cf0;}}
}
B6a9ce3:L6a9ce3:{c.instructions+=5;NFSU2_TR(0x6a9ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9ce6:{NFSU2_TR(0x6a9ce6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6a9ce9:{NFSU2_TR(0x6a9ce9);
__builtin_memmove((R+4),(R+0),4);
}
B6a9ceb:{NFSU2_TR(0x6a9ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9cee:{NFSU2_TR(0x6a9cee);
{goto L6a9cf8;}
}
B6a9cf0:L6a9cf0:{c.instructions+=3;NFSU2_TR(0x6a9cf0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6a9cf3:{NFSU2_TR(0x6a9cf3);
__builtin_memmove((R+8),(R+0),4);
}
B6a9cf5:{NFSU2_TR(0x6a9cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9cf8:L6a9cf8:{c.instructions+=2;NFSU2_TR(0x6a9cf8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9cfa:{NFSU2_TR(0x6a9cfa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9d3b;}}
}
B6a9cfc:L6a9cfc:{c.instructions+=2;NFSU2_TR(0x6a9cfc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9cfe:{NFSU2_TR(0x6a9cfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9d13;}}
}
B6a9d00:L6a9d00:{c.instructions+=2;NFSU2_TR(0x6a9d00);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9d03:{NFSU2_TR(0x6a9d03);
if(r1(R+518)){{goto L6a9d13;}}
}
B6a9d05:L6a9d05:{c.instructions+=6;NFSU2_TR(0x6a9d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9d08:{NFSU2_TR(0x6a9d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9d0b:{NFSU2_TR(0x6a9d0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9d0e:{NFSU2_TR(0x6a9d0e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a9d10:{NFSU2_TR(0x6a9d10);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a9d11:{NFSU2_TR(0x6a9d11);
{goto L6a9d6e;}
}
B6a9d13:L6a9d13:{c.instructions+=2;NFSU2_TR(0x6a9d13);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9d15:{NFSU2_TR(0x6a9d15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9d3b;}}
}
B6a9d17:L6a9d17:{c.instructions+=2;NFSU2_TR(0x6a9d17);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9d19:{NFSU2_TR(0x6a9d19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9d3b;}}
}
B6a9d1b:L6a9d1b:{c.instructions+=2;NFSU2_TR(0x6a9d1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9d1e:{NFSU2_TR(0x6a9d1e);
if(r1(R+518)){{goto L6a9d3b;}}
}
B6a9d20:L6a9d20:{c.instructions+=9;NFSU2_TR(0x6a9d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9d23:{NFSU2_TR(0x6a9d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9d26:{NFSU2_TR(0x6a9d26);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9d29:{NFSU2_TR(0x6a9d29);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9d2c:{NFSU2_TR(0x6a9d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9d2f:{NFSU2_TR(0x6a9d2f);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a9d32:{NFSU2_TR(0x6a9d32);
w4(R+0,u32(0x20300000ull));
}
B6a9d37:{NFSU2_TR(0x6a9d37);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a9d39:{NFSU2_TR(0x6a9d39);
{goto L6a9d7c;}
}
B6a9d3b:L6a9d3b:{c.instructions+=2;NFSU2_TR(0x6a9d3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9d3e:{NFSU2_TR(0x6a9d3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9d9c;}}
}
B6a9d40:L6a9d40:{c.instructions+=2;NFSU2_TR(0x6a9d40);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9d43:{NFSU2_TR(0x6a9d43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9d9c;}}
}
B6a9d45:L6a9d45:{c.instructions+=2;NFSU2_TR(0x6a9d45);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9d47:{NFSU2_TR(0x6a9d47);
if(r1(R+518)){{goto L6a9d62;}}
}
B6a9d49:L6a9d49:{c.instructions+=9;NFSU2_TR(0x6a9d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9d4c:{NFSU2_TR(0x6a9d4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9d4f:{NFSU2_TR(0x6a9d4f);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9d52:{NFSU2_TR(0x6a9d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9d55:{NFSU2_TR(0x6a9d55);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a9d57:{NFSU2_TR(0x6a9d57);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a9d5a:{NFSU2_TR(0x6a9d5a);
w4(R+0,u32(0x20300000ull));
}
B6a9d5f:{NFSU2_TR(0x6a9d5f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a9d60:{NFSU2_TR(0x6a9d60);
{goto L6a9d7c;}
}
B6a9d62:L6a9d62:{c.instructions+=2;NFSU2_TR(0x6a9d62);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9d64:{NFSU2_TR(0x6a9d64);
if(r1(R+518)){{goto L6a9d9c;}}
}
B6a9d66:L6a9d66:{c.instructions+=3;NFSU2_TR(0x6a9d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9d69:{NFSU2_TR(0x6a9d69);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9d6c:{NFSU2_TR(0x6a9d6c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a9d6e:L6a9d6e:{c.instructions+=4;NFSU2_TR(0x6a9d6e);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9d71:{NFSU2_TR(0x6a9d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9d74:{NFSU2_TR(0x6a9d74);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a9d77:{NFSU2_TR(0x6a9d77);
w4(R+0,u32(0x20200000ull));
}
B6a9d7c:L6a9d7c:{c.instructions+=2;NFSU2_TR(0x6a9d7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9d7e:{NFSU2_TR(0x6a9d7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9d88;}}
}
B6a9d80:L6a9d80:{c.instructions+=3;NFSU2_TR(0x6a9d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9d83:{NFSU2_TR(0x6a9d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9d86:{NFSU2_TR(0x6a9d86);
{goto L6a9d92;}
}
B6a9d88:L6a9d88:{c.instructions+=2;NFSU2_TR(0x6a9d88);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9d8b:{NFSU2_TR(0x6a9d8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9d9c;}}
}
B6a9d8d:L6a9d8d:{c.instructions+=2;NFSU2_TR(0x6a9d8d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9d90:{NFSU2_TR(0x6a9d90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9d9c;}}
}
B6a9d92:L6a9d92:{c.instructions+=3;NFSU2_TR(0x6a9d92);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a9d93:{NFSU2_TR(0x6a9d93);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6a9d96:{NFSU2_TR(0x6a9d96);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9c4du);}goto L6a9c4d;}}
}
B6a9d9c:L6a9d9c:{c.instructions+=3;NFSU2_TR(0x6a9d9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9d9f:{NFSU2_TR(0x6a9d9f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9da1:{NFSU2_TR(0x6a9da1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6aa188u,6aa);}
}
B6a9da7:L6a9da7:{c.instructions+=2;NFSU2_TR(0x6a9da7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a9dab:{NFSU2_TR(0x6a9dab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9e42;}}
}
B6a9db1:L6a9db1:{c.instructions+=18;NFSU2_TR(0x6a9db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9db4:{NFSU2_TR(0x6a9db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9db7:{NFSU2_TR(0x6a9db7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B6a9db9:{NFSU2_TR(0x6a9db9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6a9dbe:{NFSU2_TR(0x6a9dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B6a9dc1:{NFSU2_TR(0x6a9dc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6a9dc3:{NFSU2_TR(0x6a9dc3);
__builtin_memmove((R+0),(R+4),4);
}
B6a9dc5:{NFSU2_TR(0x6a9dc5);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6a9dc7:{NFSU2_TR(0x6a9dc7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6a9dc9:{NFSU2_TR(0x6a9dc9);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B6a9dcb:{NFSU2_TR(0x6a9dcb);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B6a9dcd:{NFSU2_TR(0x6a9dcd);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6a9dcf:{NFSU2_TR(0x6a9dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9dd3:{NFSU2_TR(0x6a9dd3);
w4(R+4,u32(~u32(r4(R+4))));
}
B6a9dd5:{NFSU2_TR(0x6a9dd5);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6a9dd7:{NFSU2_TR(0x6a9dd7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9dd9:{NFSU2_TR(0x6a9dd9);
__builtin_memmove((R+28),(R+4),4);
}
B6a9ddb:{NFSU2_TR(0x6a9ddb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6aa181u,6aa);}
}
B6a9de1:L6a9de1:{c.instructions+=4;NFSU2_TR(0x6a9de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9de4:{NFSU2_TR(0x6a9de4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6a9de7:{NFSU2_TR(0x6a9de7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a9dea:{NFSU2_TR(0x6a9dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9ded:L6a9ded:{c.instructions+=16;NFSU2_TR(0x6a9ded);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9df0:{NFSU2_TR(0x6a9df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9df3:{NFSU2_TR(0x6a9df3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9df6:{NFSU2_TR(0x6a9df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9df9:{NFSU2_TR(0x6a9df9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a9dfc:{NFSU2_TR(0x6a9dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9dff:{NFSU2_TR(0x6a9dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9e02:{NFSU2_TR(0x6a9e02);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9e05:{NFSU2_TR(0x6a9e05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9e06:{NFSU2_TR(0x6a9e06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9e07:{NFSU2_TR(0x6a9e07);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a9e0a:{NFSU2_TR(0x6a9e0a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9e0c:{NFSU2_TR(0x6a9e0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9e0e:{NFSU2_TR(0x6a9e0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a9e11:{NFSU2_TR(0x6a9e11);
__builtin_memmove((R+4),(R+24),4);
}
B6a9e13:{NFSU2_TR(0x6a9e13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9e18ull));
TAIL_STATIC(0x699c39u,699);
}
B6a9e18:L6a9e18:{c.instructions+=5;NFSU2_TR(0x6a9e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9e1b:{NFSU2_TR(0x6a9e1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a9e1e:{NFSU2_TR(0x6a9e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9e21:{NFSU2_TR(0x6a9e21);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a9e25:{NFSU2_TR(0x6a9e25);
if(r1(R+518)){TAIL_STATIC(0x6aa1e2u,6aa);}
}
B6a9e2b:L6a9e2b:{c.instructions+=6;NFSU2_TR(0x6a9e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9e2e:{NFSU2_TR(0x6a9e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9e31:{NFSU2_TR(0x6a9e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9e35:{NFSU2_TR(0x6a9e35);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6a9e38:{NFSU2_TR(0x6a9e38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a9e3b:{NFSU2_TR(0x6a9e3b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9dedu);}goto L6a9ded;}}
}
B6a9e3d:L6a9e3d:{c.instructions+=1;NFSU2_TR(0x6a9e3d);
TAIL_STATIC(0x6aa181u,6aa);
}
B6a9e42:L6a9e42:{c.instructions+=9;NFSU2_TR(0x6a9e42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a9e45:{NFSU2_TR(0x6a9e45);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a9e48:{NFSU2_TR(0x6a9e48);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6a9e4e:{NFSU2_TR(0x6a9e4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a9e51:{NFSU2_TR(0x6a9e51);
__builtin_memmove((R+0),(R+28),4);
}
B6a9e53:{NFSU2_TR(0x6a9e53);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B6a9e58:{NFSU2_TR(0x6a9e58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9e59:{NFSU2_TR(0x6a9e59);
__builtin_memmove((R+4),(R+24),4);
}
B6a9e5b:{NFSU2_TR(0x6a9e5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9e60ull));
TAIL_STATIC(0x699c99u,699);
}
B6a9e60:L6a9e60:{c.instructions+=10;NFSU2_TR(0x6a9e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9e63:{NFSU2_TR(0x6a9e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9e66:{NFSU2_TR(0x6a9e66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9e67:{NFSU2_TR(0x6a9e67);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B6a9e69:{NFSU2_TR(0x6a9e69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9e6a:{NFSU2_TR(0x6a9e6a);
__builtin_memmove((R+0),(R+28),4);
}
B6a9e6c:{NFSU2_TR(0x6a9e6c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B6a9e71:{NFSU2_TR(0x6a9e71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9e72:{NFSU2_TR(0x6a9e72);
__builtin_memmove((R+4),(R+24),4);
}
B6a9e74:{NFSU2_TR(0x6a9e74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9e79ull));
TAIL_STATIC(0x699c99u,699);
}
B6a9e79:L6a9e79:{c.instructions+=9;NFSU2_TR(0x6a9e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9e7c:{NFSU2_TR(0x6a9e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9e7f:{NFSU2_TR(0x6a9e7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9e80:{NFSU2_TR(0x6a9e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a9e83:{NFSU2_TR(0x6a9e83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9e84:{NFSU2_TR(0x6a9e84);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x30000000ull))));
}
B6a9e8a:{NFSU2_TR(0x6a9e8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9e8b:{NFSU2_TR(0x6a9e8b);
__builtin_memmove((R+4),(R+24),4);
}
B6a9e8d:{NFSU2_TR(0x6a9e8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9e92ull));
TAIL_STATIC(0x699c99u,699);
}
B6a9e92:L6a9e92:{c.instructions+=2;NFSU2_TR(0x6a9e92);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9e96:{NFSU2_TR(0x6a9e96);
if(r1(R+518)){TAIL_STATIC(0x6aa1e2u,6aa);}
}
B6a9e9c:L6a9e9c:{c.instructions+=3;NFSU2_TR(0x6a9e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a9e9f:{NFSU2_TR(0x6a9e9f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9ea2:{NFSU2_TR(0x6a9ea2);
if(r1(R+518)){TAIL_STATIC(0x6aa1e2u,6aa);}
}
B6a9ea8:L6a9ea8:{c.instructions+=2;NFSU2_TR(0x6a9ea8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9eab:{NFSU2_TR(0x6a9eab);
if(r1(R+518)){TAIL_STATIC(0x6aa1e2u,6aa);}
}
B6a9eb1:L6a9eb1:{c.instructions+=10;NFSU2_TR(0x6a9eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9eb4:{NFSU2_TR(0x6a9eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9eb7:{NFSU2_TR(0x6a9eb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a9eba:{NFSU2_TR(0x6a9eba);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a9ebd:{NFSU2_TR(0x6a9ebd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a9ec0:{NFSU2_TR(0x6a9ec0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9ec1:{NFSU2_TR(0x6a9ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9ec4:{NFSU2_TR(0x6a9ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9ec7:{NFSU2_TR(0x6a9ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9eca:{NFSU2_TR(0x6a9eca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9ecfull));
TAIL_STATIC(0x698eb3u,698);
}
B6a9ecf:L6a9ecf:{c.instructions+=3;NFSU2_TR(0x6a9ecf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9ed0:{NFSU2_TR(0x6a9ed0);
__builtin_memmove((R+4),(R+28),4);
}
B6a9ed2:{NFSU2_TR(0x6a9ed2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9ed7ull));
TAIL_STATIC(0x698eb3u,698);
}
B6a9ed7:L6a9ed7:{c.instructions+=3;NFSU2_TR(0x6a9ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9eda:{NFSU2_TR(0x6a9eda);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9edb:{NFSU2_TR(0x6a9edb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9ee0ull));
TAIL_STATIC(0x698eb3u,698);
}
B6a9ee0:L6a9ee0:{c.instructions+=4;NFSU2_TR(0x6a9ee0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a9ee2:{NFSU2_TR(0x6a9ee2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9ee5:{NFSU2_TR(0x6a9ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9ee8:{NFSU2_TR(0x6a9ee8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9f46;}}
}
B6a9eea:L6a9eea:{c.instructions+=2;NFSU2_TR(0x6a9eea);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9eed:{NFSU2_TR(0x6a9eed);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a9f9c;}}
}
B6a9ef3:L6a9ef3:{c.instructions+=13;NFSU2_TR(0x6a9ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9ef6:{NFSU2_TR(0x6a9ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9ef9:{NFSU2_TR(0x6a9ef9);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9efc:{NFSU2_TR(0x6a9efc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9efd:{NFSU2_TR(0x6a9efd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9efe:{NFSU2_TR(0x6a9efe);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a9f01:{NFSU2_TR(0x6a9f01);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9f03:{NFSU2_TR(0x6a9f03);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9f05:{NFSU2_TR(0x6a9f05);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a9f08:{NFSU2_TR(0x6a9f08);
__builtin_memmove((R+28),(R+0),4);
}
B6a9f0a:{NFSU2_TR(0x6a9f0a);
__builtin_memmove((R+4),(R+24),4);
}
B6a9f0c:{NFSU2_TR(0x6a9f0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6a9f0f:{NFSU2_TR(0x6a9f0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9f14ull));
TAIL_STATIC(0x699c39u,699);
}
B6a9f14:L6a9f14:{c.instructions+=11;NFSU2_TR(0x6a9f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9f17:{NFSU2_TR(0x6a9f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9f1a:{NFSU2_TR(0x6a9f1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a9f1d:{NFSU2_TR(0x6a9f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9f20:{NFSU2_TR(0x6a9f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9f23:{NFSU2_TR(0x6a9f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9f26:{NFSU2_TR(0x6a9f26);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a9f29:{NFSU2_TR(0x6a9f29);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a9f2c:{NFSU2_TR(0x6a9f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9f2f:{NFSU2_TR(0x6a9f2f);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a9f33:{NFSU2_TR(0x6a9f33);
if(r1(R+518)){TAIL_STATIC(0x6aa1e2u,6aa);}
}
B6a9f39:L6a9f39:{c.instructions+=4;NFSU2_TR(0x6a9f39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9f3c:{NFSU2_TR(0x6a9f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9f3f:{NFSU2_TR(0x6a9f3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a9f42:{NFSU2_TR(0x6a9f42);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9ef3u);}goto L6a9ef3;}}
}
B6a9f44:L6a9f44:{c.instructions+=1;NFSU2_TR(0x6a9f44);
{goto L6a9f9c;}
}
B6a9f46:L6a9f46:{c.instructions+=2;NFSU2_TR(0x6a9f46);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9f49:{NFSU2_TR(0x6a9f49);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a9f9c;}}
}
B6a9f4b:L6a9f4b:{c.instructions+=18;NFSU2_TR(0x6a9f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9f4e:{NFSU2_TR(0x6a9f4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9f51:{NFSU2_TR(0x6a9f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9f54:{NFSU2_TR(0x6a9f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9f57:{NFSU2_TR(0x6a9f57);
__builtin_memmove((R+28),(R+0),4);
}
B6a9f59:{NFSU2_TR(0x6a9f59);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6a9f5c:{NFSU2_TR(0x6a9f5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a9f5f:{NFSU2_TR(0x6a9f5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a9f62:{NFSU2_TR(0x6a9f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9f65:{NFSU2_TR(0x6a9f65);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a9f68:{NFSU2_TR(0x6a9f68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9f69:{NFSU2_TR(0x6a9f69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9f6a:{NFSU2_TR(0x6a9f6a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a9f6d:{NFSU2_TR(0x6a9f6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9f6f:{NFSU2_TR(0x6a9f6f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9f71:{NFSU2_TR(0x6a9f71);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a9f74:{NFSU2_TR(0x6a9f74);
__builtin_memmove((R+4),(R+24),4);
}
B6a9f76:{NFSU2_TR(0x6a9f76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9f7bull));
TAIL_STATIC(0x699c39u,699);
}
B6a9f7b:L6a9f7b:{c.instructions+=6;NFSU2_TR(0x6a9f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9f7e:{NFSU2_TR(0x6a9f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a9f81:{NFSU2_TR(0x6a9f81);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a9f84:{NFSU2_TR(0x6a9f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9f87:{NFSU2_TR(0x6a9f87);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a9f8b:{NFSU2_TR(0x6a9f8b);
if(r1(R+518)){TAIL_STATIC(0x6aa1e2u,6aa);}
}
B6a9f91:L6a9f91:{c.instructions+=4;NFSU2_TR(0x6a9f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a9f94:{NFSU2_TR(0x6a9f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a9f97:{NFSU2_TR(0x6a9f97);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a9f9a:{NFSU2_TR(0x6a9f9a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a9f4bu);}goto L6a9f4b;}}
}
B6a9f9c:L6a9f9c:{c.instructions+=3;NFSU2_TR(0x6a9f9c);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B6a9f9f:{NFSU2_TR(0x6a9f9f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9fa2:{NFSU2_TR(0x6a9fa2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9fc4;}}
}
B6a9fa4:L6a9fa4:{c.instructions+=9;NFSU2_TR(0x6a9fa4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9fa5:{NFSU2_TR(0x6a9fa5);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6a9fa7:{NFSU2_TR(0x6a9fa7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9fa8:{NFSU2_TR(0x6a9fa8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a9fab:{NFSU2_TR(0x6a9fab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9fad:{NFSU2_TR(0x6a9fad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9faf:{NFSU2_TR(0x6a9faf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a9fb2:{NFSU2_TR(0x6a9fb2);
__builtin_memmove((R+4),(R+24),4);
}
B6a9fb4:{NFSU2_TR(0x6a9fb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9fb9ull));
TAIL_STATIC(0x699c39u,699);
}
B6a9fb9:L6a9fb9:{c.instructions+=3;NFSU2_TR(0x6a9fb9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9fbb:{NFSU2_TR(0x6a9fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9fbe:{NFSU2_TR(0x6a9fbe);
if(r1(R+518)){TAIL_STATIC(0x6aa1e2u,6aa);}
}
B6a9fc4:L6a9fc4:{c.instructions+=2;NFSU2_TR(0x6a9fc4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9fc7:{NFSU2_TR(0x6a9fc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a9fe9;}}
}
B6a9fc9:L6a9fc9:{c.instructions+=9;NFSU2_TR(0x6a9fc9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9fca:{NFSU2_TR(0x6a9fca);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a9fcc:{NFSU2_TR(0x6a9fcc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9fcd:{NFSU2_TR(0x6a9fcd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a9fd0:{NFSU2_TR(0x6a9fd0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9fd2:{NFSU2_TR(0x6a9fd2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a9fd4:{NFSU2_TR(0x6a9fd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a9fd7:{NFSU2_TR(0x6a9fd7);
__builtin_memmove((R+4),(R+24),4);
}
B6a9fd9:{NFSU2_TR(0x6a9fd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a9fdeull));
TAIL_STATIC(0x699c39u,699);
}
B6a9fde:L6a9fde:{c.instructions+=3;NFSU2_TR(0x6a9fde);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a9fe0:{NFSU2_TR(0x6a9fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a9fe3:{NFSU2_TR(0x6a9fe3);
if(r1(R+518)){TAIL_STATIC(0x6aa1e2u,6aa);}
}
B6a9fe9:L6a9fe9:{c.instructions+=3;NFSU2_TR(0x6a9fe9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a9ff0:{NFSU2_TR(0x6a9ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a9ff3:{NFSU2_TR(0x6a9ff3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6aa03du,6aa);}
}
B6a9ff5:L6a9ff5:{c.instructions+=2;NFSU2_TR(0x6a9ff5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a9ff7:{NFSU2_TR(0x6a9ff7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6aa07fu,6aa);}
}
B6a9ffd:L6a9ffd:{c.instructions+=2;NFSU2_TR(0x6a9ffd);
__builtin_memmove((R+0),(R+4),4);
}
B6a9fff:{NFSU2_TR(0x6a9fff);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
TAIL_STATIC(0x6aa002u,6aa);
}
XIT:NFSU2_TR_EXIT(0x6a9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
