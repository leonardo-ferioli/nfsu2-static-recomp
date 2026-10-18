#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_480(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a8(u8* __restrict R,Cpu& c);
u32 body_4aa(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_523(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_6fb(u8* __restrict R,Cpu& c);
u32 body_6fc(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4a9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4a9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 page_4a9(Cpu& c){return body_4a9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4a9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4a9002:goto L4a9002;
case 0x4a9008:c.instructions+=7;goto B4a9008;
case 0x4a900d:c.instructions+=6;goto B4a900d;
case 0x4a9011:c.instructions+=5;goto B4a9011;
case 0x4a9014:c.instructions+=4;goto B4a9014;
case 0x4a9017:c.instructions+=3;goto B4a9017;
case 0x4a901c:c.instructions+=2;goto B4a901c;
case 0x4a901d:c.instructions+=1;goto B4a901d;
case 0x4a9022:goto L4a9022;
case 0x4a9025:c.instructions+=2;goto B4a9025;
case 0x4a9026:c.instructions+=1;goto B4a9026;
case 0x4a902b:goto L4a902b;
case 0x4a902f:c.instructions+=6;goto B4a902f;
case 0x4a9032:c.instructions+=5;goto B4a9032;
case 0x4a9034:c.instructions+=4;goto B4a9034;
case 0x4a9035:c.instructions+=3;goto B4a9035;
case 0x4a903c:c.instructions+=2;goto B4a903c;
case 0x4a903f:c.instructions+=1;goto B4a903f;
case 0x4a9050:goto L4a9050;
case 0x4a9051:c.instructions+=2;goto B4a9051;
case 0x4a9053:c.instructions+=1;goto B4a9053;
case 0x4a9058:goto L4a9058;
case 0x4a905d:c.instructions+=1;goto B4a905d;
case 0x4a905f:goto L4a905f;
case 0x4a9060:c.instructions+=1;goto B4a9060;
case 0x4a9065:goto L4a9065;
case 0x4a9068:goto L4a9068;
case 0x4a906a:c.instructions+=2;goto B4a906a;
case 0x4a906b:c.instructions+=1;goto B4a906b;
case 0x4a9070:goto L4a9070;
case 0x4a9076:c.instructions+=1;goto B4a9076;
case 0x4a9080:goto L4a9080;
case 0x4a9082:c.instructions+=7;goto B4a9082;
case 0x4a9087:c.instructions+=6;goto B4a9087;
case 0x4a908d:c.instructions+=5;goto B4a908d;
case 0x4a908e:c.instructions+=4;goto B4a908e;
case 0x4a9095:c.instructions+=3;goto B4a9095;
case 0x4a9096:c.instructions+=2;goto B4a9096;
case 0x4a9098:c.instructions+=1;goto B4a9098;
case 0x4a909d:goto L4a909d;
case 0x4a90a0:c.instructions+=4;goto B4a90a0;
case 0x4a90a4:c.instructions+=3;goto B4a90a4;
case 0x4a90a6:c.instructions+=2;goto B4a90a6;
case 0x4a90ae:c.instructions+=1;goto B4a90ae;
case 0x4a90b0:goto L4a90b0;
case 0x4a90b4:c.instructions+=3;goto B4a90b4;
case 0x4a90b5:c.instructions+=2;goto B4a90b5;
case 0x4a90b7:c.instructions+=1;goto B4a90b7;
case 0x4a90bc:goto L4a90bc;
case 0x4a90c0:c.instructions+=3;goto B4a90c0;
case 0x4a90c7:c.instructions+=2;goto B4a90c7;
case 0x4a90ca:c.instructions+=1;goto B4a90ca;
case 0x4a90cb:goto L4a90cb;
case 0x4a90cf:c.instructions+=4;goto B4a90cf;
case 0x4a90d1:c.instructions+=3;goto B4a90d1;
case 0x4a90d8:c.instructions+=2;goto B4a90d8;
case 0x4a90db:c.instructions+=1;goto B4a90db;
case 0x4a90e0:goto L4a90e0;
case 0x4a90f0:goto L4a90f0;
case 0x4a90f2:c.instructions+=11;goto B4a90f2;
case 0x4a90f7:c.instructions+=10;goto B4a90f7;
case 0x4a90fd:c.instructions+=9;goto B4a90fd;
case 0x4a90fe:c.instructions+=8;goto B4a90fe;
case 0x4a9105:c.instructions+=7;goto B4a9105;
case 0x4a9106:c.instructions+=6;goto B4a9106;
case 0x4a910a:c.instructions+=5;goto B4a910a;
case 0x4a910b:c.instructions+=4;goto B4a910b;
case 0x4a910d:c.instructions+=3;goto B4a910d;
case 0x4a910e:c.instructions+=2;goto B4a910e;
case 0x4a9112:c.instructions+=1;goto B4a9112;
case 0x4a9117:goto L4a9117;
case 0x4a911d:c.instructions+=4;goto B4a911d;
case 0x4a9124:c.instructions+=3;goto B4a9124;
case 0x4a912c:c.instructions+=2;goto B4a912c;
case 0x4a9133:c.instructions+=1;goto B4a9133;
case 0x4a9138:goto L4a9138;
case 0x4a913a:c.instructions+=1;goto B4a913a;
case 0x4a913c:goto L4a913c;
case 0x4a913f:c.instructions+=3;goto B4a913f;
case 0x4a9144:c.instructions+=2;goto B4a9144;
case 0x4a9145:c.instructions+=1;goto B4a9145;
case 0x4a914a:goto L4a914a;
case 0x4a914b:c.instructions+=1;goto B4a914b;
case 0x4a9150:goto L4a9150;
case 0x4a9153:goto L4a9153;
case 0x4a9156:c.instructions+=5;goto B4a9156;
case 0x4a9157:c.instructions+=4;goto B4a9157;
case 0x4a9158:c.instructions+=3;goto B4a9158;
case 0x4a915d:c.instructions+=2;goto B4a915d;
case 0x4a915e:c.instructions+=1;goto B4a915e;
case 0x4a9163:goto L4a9163;
case 0x4a9164:c.instructions+=1;goto B4a9164;
case 0x4a9169:goto L4a9169;
case 0x4a916c:c.instructions+=3;goto B4a916c;
case 0x4a9171:c.instructions+=2;goto B4a9171;
case 0x4a9172:c.instructions+=1;goto B4a9172;
case 0x4a9177:goto L4a9177;
case 0x4a9178:c.instructions+=1;goto B4a9178;
case 0x4a917d:goto L4a917d;
case 0x4a9180:c.instructions+=3;goto B4a9180;
case 0x4a9185:c.instructions+=2;goto B4a9185;
case 0x4a9186:c.instructions+=1;goto B4a9186;
case 0x4a918b:goto L4a918b;
case 0x4a918c:c.instructions+=1;goto B4a918c;
case 0x4a9191:goto L4a9191;
case 0x4a9194:c.instructions+=3;goto B4a9194;
case 0x4a9199:c.instructions+=2;goto B4a9199;
case 0x4a919a:c.instructions+=1;goto B4a919a;
case 0x4a919f:goto L4a919f;
case 0x4a91a2:c.instructions+=3;goto B4a91a2;
case 0x4a91a7:c.instructions+=2;goto B4a91a7;
case 0x4a91a9:c.instructions+=1;goto B4a91a9;
case 0x4a91ae:goto L4a91ae;
case 0x4a91af:c.instructions+=2;goto B4a91af;
case 0x4a91b0:c.instructions+=1;goto B4a91b0;
case 0x4a91b5:goto L4a91b5;
case 0x4a91b6:c.instructions+=1;goto B4a91b6;
case 0x4a91bb:goto L4a91bb;
case 0x4a91be:c.instructions+=4;goto B4a91be;
case 0x4a91c1:c.instructions+=3;goto B4a91c1;
case 0x4a91c6:c.instructions+=2;goto B4a91c6;
case 0x4a91cb:c.instructions+=1;goto B4a91cb;
case 0x4a91d0:goto L4a91d0;
case 0x4a91d1:c.instructions+=2;goto B4a91d1;
case 0x4a91d2:c.instructions+=1;goto B4a91d2;
case 0x4a91d7:goto L4a91d7;
case 0x4a91da:c.instructions+=2;goto B4a91da;
case 0x4a91db:c.instructions+=1;goto B4a91db;
case 0x4a91e0:goto L4a91e0;
case 0x4a91e3:c.instructions+=4;goto B4a91e3;
case 0x4a91e6:c.instructions+=3;goto B4a91e6;
case 0x4a91eb:c.instructions+=2;goto B4a91eb;
case 0x4a91f0:c.instructions+=1;goto B4a91f0;
case 0x4a91f5:goto L4a91f5;
case 0x4a91f6:c.instructions+=2;goto B4a91f6;
case 0x4a91f7:c.instructions+=1;goto B4a91f7;
case 0x4a91fc:goto L4a91fc;
case 0x4a91ff:c.instructions+=2;goto B4a91ff;
case 0x4a9200:c.instructions+=1;goto B4a9200;
case 0x4a9205:goto L4a9205;
case 0x4a9208:c.instructions+=2;goto B4a9208;
case 0x4a920a:c.instructions+=1;goto B4a920a;
case 0x4a920c:goto L4a920c;
case 0x4a920f:c.instructions+=2;goto B4a920f;
case 0x4a9214:c.instructions+=1;goto B4a9214;
case 0x4a9216:goto L4a9216;
case 0x4a921b:c.instructions+=1;goto B4a921b;
case 0x4a921e:goto L4a921e;
case 0x4a9225:goto L4a9225;
case 0x4a922b:c.instructions+=3;goto B4a922b;
case 0x4a922d:c.instructions+=2;goto B4a922d;
case 0x4a9230:c.instructions+=1;goto B4a9230;
case 0x4a9235:goto L4a9235;
case 0x4a923b:c.instructions+=3;goto B4a923b;
case 0x4a923e:c.instructions+=2;goto B4a923e;
case 0x4a9240:c.instructions+=1;goto B4a9240;
case 0x4a9245:goto L4a9245;
case 0x4a924a:c.instructions+=2;goto B4a924a;
case 0x4a9251:c.instructions+=1;goto B4a9251;
case 0x4a9256:goto L4a9256;
case 0x4a925b:c.instructions+=4;goto B4a925b;
case 0x4a925d:c.instructions+=3;goto B4a925d;
case 0x4a925e:c.instructions+=2;goto B4a925e;
case 0x4a925f:c.instructions+=1;goto B4a925f;
case 0x4a9261:goto L4a9261;
case 0x4a9264:c.instructions+=5;goto B4a9264;
case 0x4a9266:c.instructions+=4;goto B4a9266;
case 0x4a926b:c.instructions+=3;goto B4a926b;
case 0x4a9270:c.instructions+=2;goto B4a9270;
case 0x4a9271:c.instructions+=1;goto B4a9271;
case 0x4a9276:goto L4a9276;
case 0x4a9279:c.instructions+=5;goto B4a9279;
case 0x4a927b:c.instructions+=4;goto B4a927b;
case 0x4a9280:c.instructions+=3;goto B4a9280;
case 0x4a9285:c.instructions+=2;goto B4a9285;
case 0x4a9286:c.instructions+=1;goto B4a9286;
case 0x4a928b:goto L4a928b;
case 0x4a928e:goto L4a928e;
case 0x4a9292:c.instructions+=5;goto B4a9292;
case 0x4a9294:c.instructions+=4;goto B4a9294;
case 0x4a9295:c.instructions+=3;goto B4a9295;
case 0x4a929c:c.instructions+=2;goto B4a929c;
case 0x4a929f:c.instructions+=1;goto B4a929f;
case 0x4a92b0:goto L4a92b0;
case 0x4a92b2:c.instructions+=12;goto B4a92b2;
case 0x4a92b7:c.instructions+=11;goto B4a92b7;
case 0x4a92bd:c.instructions+=10;goto B4a92bd;
case 0x4a92be:c.instructions+=9;goto B4a92be;
case 0x4a92c5:c.instructions+=8;goto B4a92c5;
case 0x4a92c6:c.instructions+=7;goto B4a92c6;
case 0x4a92c7:c.instructions+=6;goto B4a92c7;
case 0x4a92c9:c.instructions+=5;goto B4a92c9;
case 0x4a92cd:c.instructions+=4;goto B4a92cd;
case 0x4a92d3:c.instructions+=3;goto B4a92d3;
case 0x4a92d8:c.instructions+=2;goto B4a92d8;
case 0x4a92e0:c.instructions+=1;goto B4a92e0;
case 0x4a92e5:goto L4a92e5;
case 0x4a92e7:c.instructions+=2;goto B4a92e7;
case 0x4a92ef:c.instructions+=1;goto B4a92ef;
case 0x4a92f4:goto L4a92f4;
case 0x4a92f8:c.instructions+=4;goto B4a92f8;
case 0x4a92f9:c.instructions+=3;goto B4a92f9;
case 0x4a9300:c.instructions+=2;goto B4a9300;
case 0x4a9303:c.instructions+=1;goto B4a9303;
case 0x4a9310:goto L4a9310;
case 0x4a9315:c.instructions+=1;goto B4a9315;
case 0x4a931a:goto L4a931a;
case 0x4a931d:c.instructions+=2;goto B4a931d;
case 0x4a931f:c.instructions+=1;goto B4a931f;
case 0x4a9321:goto L4a9321;
case 0x4a9326:c.instructions+=1;goto B4a9326;
case 0x4a932b:goto L4a932b;
case 0x4a932c:goto L4a932c;
case 0x4a9330:goto L4a9330;
case 0x4a9335:c.instructions+=1;goto B4a9335;
case 0x4a933a:goto L4a933a;
case 0x4a933d:c.instructions+=1;goto B4a933d;
case 0x4a9340:goto L4a9340;
case 0x4a9345:c.instructions+=1;goto B4a9345;
case 0x4a934a:goto L4a934a;
case 0x4a934d:c.instructions+=4;goto B4a934d;
case 0x4a934f:c.instructions+=3;goto B4a934f;
case 0x4a9351:c.instructions+=2;goto B4a9351;
case 0x4a9356:c.instructions+=1;goto B4a9356;
case 0x4a9360:goto L4a9360;
case 0x4a9361:c.instructions+=4;goto B4a9361;
case 0x4a9363:c.instructions+=3;goto B4a9363;
case 0x4a9364:c.instructions+=2;goto B4a9364;
case 0x4a9369:c.instructions+=1;goto B4a9369;
case 0x4a936e:goto L4a936e;
case 0x4a9370:c.instructions+=1;goto B4a9370;
case 0x4a9372:goto L4a9372;
case 0x4a9378:c.instructions+=2;goto B4a9378;
case 0x4a937c:c.instructions+=1;goto B4a937c;
case 0x4a937e:goto L4a937e;
case 0x4a9384:c.instructions+=1;goto B4a9384;
case 0x4a9388:goto L4a9388;
case 0x4a938b:c.instructions+=2;goto B4a938b;
case 0x4a9390:c.instructions+=1;goto B4a9390;
case 0x4a9395:goto L4a9395;
case 0x4a9396:c.instructions+=3;goto B4a9396;
case 0x4a939b:c.instructions+=2;goto B4a939b;
case 0x4a939c:c.instructions+=1;goto B4a939c;
case 0x4a93a1:goto L4a93a1;
case 0x4a93a7:c.instructions+=5;goto B4a93a7;
case 0x4a93aa:c.instructions+=4;goto B4a93aa;
case 0x4a93ad:c.instructions+=3;goto B4a93ad;
case 0x4a93ae:c.instructions+=2;goto B4a93ae;
case 0x4a93af:c.instructions+=1;goto B4a93af;
case 0x4a93b4:goto L4a93b4;
case 0x4a93b6:c.instructions+=3;goto B4a93b6;
case 0x4a93b9:c.instructions+=2;goto B4a93b9;
case 0x4a93bb:c.instructions+=1;goto B4a93bb;
case 0x4a93be:goto L4a93be;
case 0x4a93c4:c.instructions+=1;goto B4a93c4;
case 0x4a93c9:goto L4a93c9;
case 0x4a93cc:c.instructions+=5;goto B4a93cc;
case 0x4a93cf:c.instructions+=4;goto B4a93cf;
case 0x4a93d0:c.instructions+=3;goto B4a93d0;
case 0x4a93d1:c.instructions+=2;goto B4a93d1;
case 0x4a93d7:c.instructions+=1;goto B4a93d7;
case 0x4a93dc:goto L4a93dc;
case 0x4a93dd:c.instructions+=2;goto B4a93dd;
case 0x4a93de:c.instructions+=1;goto B4a93de;
case 0x4a93e0:goto L4a93e0;
case 0x4a93e4:c.instructions+=12;goto B4a93e4;
case 0x4a93e8:c.instructions+=11;goto B4a93e8;
case 0x4a93e9:c.instructions+=10;goto B4a93e9;
case 0x4a93ea:c.instructions+=9;goto B4a93ea;
case 0x4a93ee:c.instructions+=8;goto B4a93ee;
case 0x4a93f0:c.instructions+=7;goto B4a93f0;
case 0x4a93f4:c.instructions+=6;goto B4a93f4;
case 0x4a93f5:c.instructions+=5;goto B4a93f5;
case 0x4a93f6:c.instructions+=4;goto B4a93f6;
case 0x4a93f7:c.instructions+=3;goto B4a93f7;
case 0x4a93f8:c.instructions+=2;goto B4a93f8;
case 0x4a93fa:c.instructions+=1;goto B4a93fa;
case 0x4a93ff:goto L4a93ff;
case 0x4a9405:c.instructions+=1;goto B4a9405;
case 0x4a9407:goto L4a9407;
case 0x4a940d:c.instructions+=1;goto B4a940d;
case 0x4a940f:goto L4a940f;
case 0x4a9412:c.instructions+=4;goto B4a9412;
case 0x4a9414:c.instructions+=3;goto B4a9414;
case 0x4a9419:c.instructions+=2;goto B4a9419;
case 0x4a941a:c.instructions+=1;goto B4a941a;
case 0x4a941f:goto L4a941f;
case 0x4a9422:c.instructions+=3;goto B4a9422;
case 0x4a9423:c.instructions+=2;goto B4a9423;
case 0x4a9424:c.instructions+=1;goto B4a9424;
case 0x4a9427:goto L4a9427;
case 0x4a942a:c.instructions+=2;goto B4a942a;
case 0x4a942f:c.instructions+=1;goto B4a942f;
case 0x4a9434:goto L4a9434;
case 0x4a9435:c.instructions+=3;goto B4a9435;
case 0x4a943a:c.instructions+=2;goto B4a943a;
case 0x4a943b:c.instructions+=1;goto B4a943b;
case 0x4a9440:goto L4a9440;
case 0x4a9443:goto L4a9443;
case 0x4a9444:c.instructions+=2;goto B4a9444;
case 0x4a9445:c.instructions+=1;goto B4a9445;
case 0x4a9450:goto L4a9450;
case 0x4a9455:c.instructions+=4;goto B4a9455;
case 0x4a9457:c.instructions+=3;goto B4a9457;
case 0x4a9458:c.instructions+=2;goto B4a9458;
case 0x4a945c:c.instructions+=1;goto B4a945c;
case 0x4a945e:goto L4a945e;
case 0x4a9460:c.instructions+=3;goto B4a9460;
case 0x4a9462:c.instructions+=2;goto B4a9462;
case 0x4a9463:c.instructions+=1;goto B4a9463;
case 0x4a9468:goto L4a9468;
case 0x4a946b:goto L4a946b;
case 0x4a9470:c.instructions+=2;goto B4a9470;
case 0x4a9472:c.instructions+=1;goto B4a9472;
case 0x4a9474:goto L4a9474;
case 0x4a9476:c.instructions+=3;goto B4a9476;
case 0x4a9478:c.instructions+=2;goto B4a9478;
case 0x4a9479:c.instructions+=1;goto B4a9479;
case 0x4a947e:goto L4a947e;
case 0x4a9481:goto L4a9481;
case 0x4a9484:c.instructions+=4;goto B4a9484;
case 0x4a9486:c.instructions+=3;goto B4a9486;
case 0x4a9488:c.instructions+=2;goto B4a9488;
case 0x4a9489:c.instructions+=1;goto B4a9489;
case 0x4a948e:goto L4a948e;
case 0x4a9490:c.instructions+=5;goto B4a9490;
case 0x4a9493:c.instructions+=4;goto B4a9493;
case 0x4a9496:c.instructions+=3;goto B4a9496;
case 0x4a9498:c.instructions+=2;goto B4a9498;
case 0x4a9499:c.instructions+=1;goto B4a9499;
case 0x4a949e:goto L4a949e;
case 0x4a94a0:c.instructions+=5;goto B4a94a0;
case 0x4a94a3:c.instructions+=4;goto B4a94a3;
case 0x4a94a6:c.instructions+=3;goto B4a94a6;
case 0x4a94a8:c.instructions+=2;goto B4a94a8;
case 0x4a94a9:c.instructions+=1;goto B4a94a9;
case 0x4a94ae:goto L4a94ae;
case 0x4a94b0:c.instructions+=5;goto B4a94b0;
case 0x4a94b3:c.instructions+=4;goto B4a94b3;
case 0x4a94b6:c.instructions+=3;goto B4a94b6;
case 0x4a94b8:c.instructions+=2;goto B4a94b8;
case 0x4a94b9:c.instructions+=1;goto B4a94b9;
case 0x4a94be:goto L4a94be;
case 0x4a94c1:c.instructions+=5;goto B4a94c1;
case 0x4a94c5:c.instructions+=4;goto B4a94c5;
case 0x4a94c7:c.instructions+=3;goto B4a94c7;
case 0x4a94c9:c.instructions+=2;goto B4a94c9;
case 0x4a94ca:c.instructions+=1;goto B4a94ca;
case 0x4a94cf:goto L4a94cf;
case 0x4a94d1:c.instructions+=7;goto B4a94d1;
case 0x4a94d4:c.instructions+=6;goto B4a94d4;
case 0x4a94d7:c.instructions+=5;goto B4a94d7;
case 0x4a94db:c.instructions+=4;goto B4a94db;
case 0x4a94dd:c.instructions+=3;goto B4a94dd;
case 0x4a94df:c.instructions+=2;goto B4a94df;
case 0x4a94e0:c.instructions+=1;goto B4a94e0;
case 0x4a94e5:goto L4a94e5;
case 0x4a94e8:c.instructions+=5;goto B4a94e8;
case 0x4a94ea:c.instructions+=4;goto B4a94ea;
case 0x4a94ed:c.instructions+=3;goto B4a94ed;
case 0x4a94f0:c.instructions+=2;goto B4a94f0;
case 0x4a94f1:c.instructions+=1;goto B4a94f1;
case 0x4a9500:goto L4a9500;
case 0x4a9501:c.instructions+=5;goto B4a9501;
case 0x4a9505:c.instructions+=4;goto B4a9505;
case 0x4a9507:c.instructions+=3;goto B4a9507;
case 0x4a9509:c.instructions+=2;goto B4a9509;
case 0x4a950a:c.instructions+=1;goto B4a950a;
case 0x4a950f:goto L4a950f;
case 0x4a9512:c.instructions+=4;goto B4a9512;
case 0x4a9514:c.instructions+=3;goto B4a9514;
case 0x4a9516:c.instructions+=2;goto B4a9516;
case 0x4a9517:c.instructions+=1;goto B4a9517;
case 0x4a951c:goto L4a951c;
case 0x4a951e:c.instructions+=5;goto B4a951e;
case 0x4a9521:c.instructions+=4;goto B4a9521;
case 0x4a9524:c.instructions+=3;goto B4a9524;
case 0x4a9526:c.instructions+=2;goto B4a9526;
case 0x4a9527:c.instructions+=1;goto B4a9527;
case 0x4a952c:goto L4a952c;
case 0x4a952e:c.instructions+=5;goto B4a952e;
case 0x4a9531:c.instructions+=4;goto B4a9531;
case 0x4a9534:c.instructions+=3;goto B4a9534;
case 0x4a9536:c.instructions+=2;goto B4a9536;
case 0x4a9537:c.instructions+=1;goto B4a9537;
case 0x4a953c:goto L4a953c;
case 0x4a953e:c.instructions+=5;goto B4a953e;
case 0x4a9541:c.instructions+=4;goto B4a9541;
case 0x4a9544:c.instructions+=3;goto B4a9544;
case 0x4a9546:c.instructions+=2;goto B4a9546;
case 0x4a9547:c.instructions+=1;goto B4a9547;
case 0x4a954c:goto L4a954c;
case 0x4a954e:c.instructions+=5;goto B4a954e;
case 0x4a9551:c.instructions+=4;goto B4a9551;
case 0x4a9554:c.instructions+=3;goto B4a9554;
case 0x4a9556:c.instructions+=2;goto B4a9556;
case 0x4a9557:c.instructions+=1;goto B4a9557;
case 0x4a955c:goto L4a955c;
case 0x4a955f:c.instructions+=6;goto B4a955f;
case 0x4a9561:c.instructions+=5;goto B4a9561;
case 0x4a9564:c.instructions+=4;goto B4a9564;
case 0x4a9567:c.instructions+=3;goto B4a9567;
case 0x4a9569:c.instructions+=2;goto B4a9569;
case 0x4a956a:c.instructions+=1;goto B4a956a;
case 0x4a956f:goto L4a956f;
case 0x4a9572:c.instructions+=4;goto B4a9572;
case 0x4a9575:c.instructions+=3;goto B4a9575;
case 0x4a9577:c.instructions+=2;goto B4a9577;
case 0x4a9578:c.instructions+=1;goto B4a9578;
case 0x4a957d:goto L4a957d;
case 0x4a957f:c.instructions+=3;goto B4a957f;
case 0x4a9582:c.instructions+=2;goto B4a9582;
case 0x4a9583:c.instructions+=1;goto B4a9583;
case 0x4a9588:goto L4a9588;
case 0x4a958b:c.instructions+=2;goto B4a958b;
case 0x4a958c:c.instructions+=1;goto B4a958c;
case 0x4a9590:goto L4a9590;
case 0x4a9595:c.instructions+=2;goto B4a9595;
case 0x4a9597:c.instructions+=1;goto B4a9597;
case 0x4a9599:goto L4a9599;
case 0x4a959d:c.instructions+=2;goto B4a959d;
case 0x4a95a0:c.instructions+=1;goto B4a95a0;
case 0x4a95a2:goto L4a95a2;
case 0x4a95a6:c.instructions+=1;goto B4a95a6;
case 0x4a95a8:goto L4a95a8;
case 0x4a95aa:c.instructions+=1;goto B4a95aa;
case 0x4a95ab:goto L4a95ab;
case 0x4a95ad:c.instructions+=1;goto B4a95ad;
case 0x4a95b0:goto L4a95b0;
case 0x4a95b5:c.instructions+=2;goto B4a95b5;
case 0x4a95b7:c.instructions+=1;goto B4a95b7;
case 0x4a95b9:goto L4a95b9;
case 0x4a95bd:c.instructions+=10;goto B4a95bd;
case 0x4a95c0:c.instructions+=9;goto B4a95c0;
case 0x4a95c6:c.instructions+=8;goto B4a95c6;
case 0x4a95ca:c.instructions+=7;goto B4a95ca;
case 0x4a95cd:c.instructions+=6;goto B4a95cd;
case 0x4a95d3:c.instructions+=5;goto B4a95d3;
case 0x4a95d7:c.instructions+=4;goto B4a95d7;
case 0x4a95db:c.instructions+=3;goto B4a95db;
case 0x4a95de:c.instructions+=2;goto B4a95de;
case 0x4a95e4:c.instructions+=1;goto B4a95e4;
case 0x4a95e7:goto L4a95e7;
case 0x4a95f0:goto L4a95f0;
case 0x4a95f5:c.instructions+=3;goto B4a95f5;
case 0x4a95f8:c.instructions+=2;goto B4a95f8;
case 0x4a95fa:c.instructions+=1;goto B4a95fa;
case 0x4a9600:goto L4a9600;
case 0x4a9604:c.instructions+=3;goto B4a9604;
case 0x4a9609:c.instructions+=2;goto B4a9609;
case 0x4a960a:c.instructions+=1;goto B4a960a;
case 0x4a960f:goto L4a960f;
case 0x4a9613:c.instructions+=3;goto B4a9613;
case 0x4a9616:c.instructions+=2;goto B4a9616;
case 0x4a9619:c.instructions+=1;goto B4a9619;
case 0x4a961b:goto L4a961b;
case 0x4a961e:c.instructions+=1;goto B4a961e;
case 0x4a9620:goto L4a9620;
case 0x4a9623:c.instructions+=1;goto B4a9623;
case 0x4a9625:goto L4a9625;
case 0x4a9626:c.instructions+=1;goto B4a9626;
case 0x4a962b:goto L4a962b;
case 0x4a962c:c.instructions+=5;goto B4a962c;
case 0x4a9630:c.instructions+=4;goto B4a9630;
case 0x4a9631:c.instructions+=3;goto B4a9631;
case 0x4a9635:c.instructions+=2;goto B4a9635;
case 0x4a9636:c.instructions+=1;goto B4a9636;
case 0x4a963b:goto L4a963b;
case 0x4a9640:c.instructions+=5;goto B4a9640;
case 0x4a9644:c.instructions+=4;goto B4a9644;
case 0x4a9645:c.instructions+=3;goto B4a9645;
case 0x4a9649:c.instructions+=2;goto B4a9649;
case 0x4a964a:c.instructions+=1;goto B4a964a;
case 0x4a964f:goto L4a964f;
case 0x4a9652:c.instructions+=1;goto B4a9652;
case 0x4a9654:goto L4a9654;
case 0x4a9659:c.instructions+=5;goto B4a9659;
case 0x4a965d:c.instructions+=4;goto B4a965d;
case 0x4a965e:c.instructions+=3;goto B4a965e;
case 0x4a9662:c.instructions+=2;goto B4a9662;
case 0x4a9663:c.instructions+=1;goto B4a9663;
case 0x4a9668:goto L4a9668;
case 0x4a966b:goto L4a966b;
case 0x4a966c:c.instructions+=4;goto B4a966c;
case 0x4a9672:c.instructions+=3;goto B4a9672;
case 0x4a9675:c.instructions+=2;goto B4a9675;
case 0x4a9676:c.instructions+=1;goto B4a9676;
case 0x4a9678:goto L4a9678;
case 0x4a967a:c.instructions+=2;goto B4a967a;
case 0x4a967f:c.instructions+=1;goto B4a967f;
case 0x4a9684:goto L4a9684;
case 0x4a9687:c.instructions+=1;goto B4a9687;
case 0x4a9689:goto L4a9689;
case 0x4a968d:c.instructions+=2;goto B4a968d;
case 0x4a968e:c.instructions+=1;goto B4a968e;
case 0x4a9693:goto L4a9693;
case 0x4a9695:c.instructions+=5;goto B4a9695;
case 0x4a9699:c.instructions+=4;goto B4a9699;
case 0x4a969b:c.instructions+=3;goto B4a969b;
case 0x4a969c:c.instructions+=2;goto B4a969c;
case 0x4a969e:c.instructions+=1;goto B4a969e;
case 0x4a96a3:goto L4a96a3;
case 0x4a96a5:c.instructions+=6;goto B4a96a5;
case 0x4a96aa:c.instructions+=5;goto B4a96aa;
case 0x4a96ac:c.instructions+=4;goto B4a96ac;
case 0x4a96ad:c.instructions+=3;goto B4a96ad;
case 0x4a96ae:c.instructions+=2;goto B4a96ae;
case 0x4a96af:c.instructions+=1;goto B4a96af;
case 0x4a96b4:goto L4a96b4;
case 0x4a96b5:c.instructions+=1;goto B4a96b5;
case 0x4a96ba:goto L4a96ba;
case 0x4a96c0:c.instructions+=4;goto B4a96c0;
case 0x4a96c2:c.instructions+=3;goto B4a96c2;
case 0x4a96c4:c.instructions+=2;goto B4a96c4;
case 0x4a96c5:c.instructions+=1;goto B4a96c5;
case 0x4a96ca:goto L4a96ca;
case 0x4a96d0:c.instructions+=5;goto B4a96d0;
case 0x4a96d2:c.instructions+=4;goto B4a96d2;
case 0x4a96d4:c.instructions+=3;goto B4a96d4;
case 0x4a96d6:c.instructions+=2;goto B4a96d6;
case 0x4a96d7:c.instructions+=1;goto B4a96d7;
case 0x4a96dc:goto L4a96dc;
case 0x4a96df:c.instructions+=2;goto B4a96df;
case 0x4a96e0:c.instructions+=1;goto B4a96e0;
case 0x4a96e1:goto L4a96e1;
case 0x4a96e4:c.instructions+=1;goto B4a96e4;
case 0x4a96f0:goto L4a96f0;
case 0x4a96f4:c.instructions+=5;goto B4a96f4;
case 0x4a96fa:c.instructions+=4;goto B4a96fa;
case 0x4a96fc:c.instructions+=3;goto B4a96fc;
case 0x4a96fd:c.instructions+=2;goto B4a96fd;
case 0x4a96fe:c.instructions+=1;goto B4a96fe;
case 0x4a9703:goto L4a9703;
case 0x4a9706:c.instructions+=1;goto B4a9706;
case 0x4a9710:goto L4a9710;
case 0x4a9712:c.instructions+=8;goto B4a9712;
case 0x4a9715:c.instructions+=7;goto B4a9715;
case 0x4a9718:c.instructions+=6;goto B4a9718;
case 0x4a971b:c.instructions+=5;goto B4a971b;
case 0x4a9722:c.instructions+=4;goto B4a9722;
case 0x4a9726:c.instructions+=3;goto B4a9726;
case 0x4a9729:c.instructions+=2;goto B4a9729;
case 0x4a972f:c.instructions+=1;goto B4a972f;
case 0x4a9731:goto L4a9731;
case 0x4a9734:c.instructions+=2;goto B4a9734;
case 0x4a973c:c.instructions+=1;goto B4a973c;
case 0x4a9741:goto L4a9741;
case 0x4a9750:goto L4a9750;
case 0x4a9751:c.instructions+=5;goto B4a9751;
case 0x4a9753:c.instructions+=4;goto B4a9753;
case 0x4a9754:c.instructions+=3;goto B4a9754;
case 0x4a9759:c.instructions+=2;goto B4a9759;
case 0x4a975c:c.instructions+=1;goto B4a975c;
case 0x4a9761:goto L4a9761;
case 0x4a9762:c.instructions+=2;goto B4a9762;
case 0x4a9763:c.instructions+=1;goto B4a9763;
case 0x4a9768:goto L4a9768;
case 0x4a9769:c.instructions+=1;goto B4a9769;
case 0x4a976e:goto L4a976e;
case 0x4a9773:c.instructions+=6;goto B4a9773;
case 0x4a9776:c.instructions+=5;goto B4a9776;
case 0x4a9778:c.instructions+=4;goto B4a9778;
case 0x4a977c:c.instructions+=3;goto B4a977c;
case 0x4a977d:c.instructions+=2;goto B4a977d;
case 0x4a977e:c.instructions+=1;goto B4a977e;
case 0x4a9783:goto L4a9783;
case 0x4a9785:c.instructions+=3;goto B4a9785;
case 0x4a9786:c.instructions+=2;goto B4a9786;
case 0x4a978b:c.instructions+=1;goto B4a978b;
case 0x4a9790:goto L4a9790;
case 0x4a9792:c.instructions+=10;goto B4a9792;
case 0x4a9795:c.instructions+=9;goto B4a9795;
case 0x4a9798:c.instructions+=8;goto B4a9798;
case 0x4a979b:c.instructions+=7;goto B4a979b;
case 0x4a97a2:c.instructions+=6;goto B4a97a2;
case 0x4a97a6:c.instructions+=5;goto B4a97a6;
case 0x4a97a9:c.instructions+=4;goto B4a97a9;
case 0x4a97af:c.instructions+=3;goto B4a97af;
case 0x4a97b2:c.instructions+=2;goto B4a97b2;
case 0x4a97b4:c.instructions+=1;goto B4a97b4;
case 0x4a97b6:goto L4a97b6;
case 0x4a97b9:c.instructions+=7;goto B4a97b9;
case 0x4a97ba:c.instructions+=6;goto B4a97ba;
case 0x4a97bb:c.instructions+=5;goto B4a97bb;
case 0x4a97c0:c.instructions+=4;goto B4a97c0;
case 0x4a97c1:c.instructions+=3;goto B4a97c1;
case 0x4a97c2:c.instructions+=2;goto B4a97c2;
case 0x4a97c3:c.instructions+=1;goto B4a97c3;
case 0x4a97c8:goto L4a97c8;
case 0x4a97c9:c.instructions+=2;goto B4a97c9;
case 0x4a97ca:c.instructions+=1;goto B4a97ca;
case 0x4a97d0:goto L4a97d0;
case 0x4a97d5:c.instructions+=2;goto B4a97d5;
case 0x4a97d7:c.instructions+=1;goto B4a97d7;
case 0x4a97d9:goto L4a97d9;
case 0x4a97db:c.instructions+=3;goto B4a97db;
case 0x4a97dd:c.instructions+=2;goto B4a97dd;
case 0x4a97df:c.instructions+=1;goto B4a97df;
case 0x4a97e4:goto L4a97e4;
case 0x4a97e7:goto L4a97e7;
case 0x4a97ed:c.instructions+=3;goto B4a97ed;
case 0x4a97f0:c.instructions+=2;goto B4a97f0;
case 0x4a97f3:c.instructions+=1;goto B4a97f3;
case 0x4a97f5:goto L4a97f5;
case 0x4a97f8:c.instructions+=1;goto B4a97f8;
case 0x4a97fa:goto L4a97fa;
case 0x4a97fd:c.instructions+=1;goto B4a97fd;
case 0x4a97ff:goto L4a97ff;
case 0x4a9802:c.instructions+=2;goto B4a9802;
case 0x4a9804:c.instructions+=1;goto B4a9804;
case 0x4a9806:goto L4a9806;
case 0x4a9808:c.instructions+=1;goto B4a9808;
case 0x4a980d:goto L4a980d;
case 0x4a9810:goto L4a9810;
case 0x4a9815:c.instructions+=2;goto B4a9815;
case 0x4a9817:c.instructions+=1;goto B4a9817;
case 0x4a9819:goto L4a9819;
case 0x4a981b:c.instructions+=3;goto B4a981b;
case 0x4a981d:c.instructions+=2;goto B4a981d;
case 0x4a981f:c.instructions+=1;goto B4a981f;
case 0x4a9824:goto L4a9824;
case 0x4a9827:goto L4a9827;
case 0x4a9830:goto L4a9830;
case 0x4a9835:c.instructions+=2;goto B4a9835;
case 0x4a9837:c.instructions+=1;goto B4a9837;
case 0x4a9839:goto L4a9839;
case 0x4a983b:c.instructions+=3;goto B4a983b;
case 0x4a983d:c.instructions+=2;goto B4a983d;
case 0x4a983f:c.instructions+=1;goto B4a983f;
case 0x4a9844:goto L4a9844;
case 0x4a9847:goto L4a9847;
case 0x4a9849:c.instructions+=1;goto B4a9849;
case 0x4a9850:goto L4a9850;
case 0x4a9855:c.instructions+=2;goto B4a9855;
case 0x4a9857:c.instructions+=1;goto B4a9857;
case 0x4a9859:goto L4a9859;
case 0x4a985b:c.instructions+=3;goto B4a985b;
case 0x4a985d:c.instructions+=2;goto B4a985d;
case 0x4a985f:c.instructions+=1;goto B4a985f;
case 0x4a9864:goto L4a9864;
case 0x4a9867:goto L4a9867;
case 0x4a986b:c.instructions+=4;goto B4a986b;
case 0x4a986c:c.instructions+=3;goto B4a986c;
case 0x4a986e:c.instructions+=2;goto B4a986e;
case 0x4a986f:c.instructions+=1;goto B4a986f;
case 0x4a9874:goto L4a9874;
case 0x4a987a:c.instructions+=5;goto B4a987a;
case 0x4a987f:c.instructions+=4;goto B4a987f;
case 0x4a9882:c.instructions+=3;goto B4a9882;
case 0x4a9884:c.instructions+=2;goto B4a9884;
case 0x4a9887:c.instructions+=1;goto B4a9887;
case 0x4a9889:goto L4a9889;
case 0x4a988b:c.instructions+=3;goto B4a988b;
case 0x4a988d:c.instructions+=2;goto B4a988d;
case 0x4a988e:c.instructions+=1;goto B4a988e;
case 0x4a9893:goto L4a9893;
case 0x4a9898:c.instructions+=1;goto B4a9898;
case 0x4a989b:goto L4a989b;
case 0x4a98a1:c.instructions+=2;goto B4a98a1;
case 0x4a98a3:c.instructions+=1;goto B4a98a3;
case 0x4a98a5:goto L4a98a5;
case 0x4a98a7:c.instructions+=3;goto B4a98a7;
case 0x4a98a9:c.instructions+=2;goto B4a98a9;
case 0x4a98aa:c.instructions+=1;goto B4a98aa;
case 0x4a98af:goto L4a98af;
case 0x4a98b4:c.instructions+=1;goto B4a98b4;
case 0x4a98b7:goto L4a98b7;
case 0x4a98bd:c.instructions+=5;goto B4a98bd;
case 0x4a98bf:c.instructions+=4;goto B4a98bf;
case 0x4a98c2:c.instructions+=3;goto B4a98c2;
case 0x4a98c3:c.instructions+=2;goto B4a98c3;
case 0x4a98c6:c.instructions+=1;goto B4a98c6;
case 0x4a98c8:goto L4a98c8;
case 0x4a98ca:c.instructions+=3;goto B4a98ca;
case 0x4a98cb:c.instructions+=2;goto B4a98cb;
case 0x4a98cc:c.instructions+=1;goto B4a98cc;
case 0x4a98d1:goto L4a98d1;
case 0x4a98d6:c.instructions+=1;goto B4a98d6;
case 0x4a98d9:goto L4a98d9;
case 0x4a98df:c.instructions+=2;goto B4a98df;
case 0x4a98e1:c.instructions+=1;goto B4a98e1;
case 0x4a98e3:goto L4a98e3;
case 0x4a98e5:c.instructions+=3;goto B4a98e5;
case 0x4a98e6:c.instructions+=2;goto B4a98e6;
case 0x4a98e7:c.instructions+=1;goto B4a98e7;
case 0x4a98ec:goto L4a98ec;
case 0x4a98f1:c.instructions+=1;goto B4a98f1;
case 0x4a98f4:goto L4a98f4;
case 0x4a98f7:c.instructions+=7;goto B4a98f7;
case 0x4a98fd:c.instructions+=6;goto B4a98fd;
case 0x4a9900:c.instructions+=5;goto B4a9900;
case 0x4a9907:c.instructions+=4;goto B4a9907;
case 0x4a990c:c.instructions+=3;goto B4a990c;
case 0x4a9911:c.instructions+=2;goto B4a9911;
case 0x4a9912:c.instructions+=1;goto B4a9912;
case 0x4a9914:goto L4a9914;
case 0x4a9917:c.instructions+=2;goto B4a9917;
case 0x4a9919:c.instructions+=1;goto B4a9919;
case 0x4a991b:goto L4a991b;
case 0x4a991e:c.instructions+=3;goto B4a991e;
case 0x4a9920:c.instructions+=2;goto B4a9920;
case 0x4a9925:c.instructions+=1;goto B4a9925;
case 0x4a9927:goto L4a9927;
case 0x4a9928:c.instructions+=4;goto B4a9928;
case 0x4a992b:c.instructions+=3;goto B4a992b;
case 0x4a992c:c.instructions+=2;goto B4a992c;
case 0x4a9931:c.instructions+=1;goto B4a9931;
case 0x4a9936:goto L4a9936;
case 0x4a993b:goto L4a993b;
case 0x4a993e:c.instructions+=2;goto B4a993e;
case 0x4a9940:c.instructions+=1;goto B4a9940;
case 0x4a9942:goto L4a9942;
case 0x4a9945:c.instructions+=2;goto B4a9945;
case 0x4a9946:c.instructions+=1;goto B4a9946;
case 0x4a994b:goto L4a994b;
case 0x4a9950:c.instructions+=1;goto B4a9950;
case 0x4a9953:goto L4a9953;
case 0x4a9956:c.instructions+=4;goto B4a9956;
case 0x4a9959:c.instructions+=3;goto B4a9959;
case 0x4a995a:c.instructions+=2;goto B4a995a;
case 0x4a995b:c.instructions+=1;goto B4a995b;
case 0x4a9960:goto L4a9960;
case 0x4a9966:c.instructions+=4;goto B4a9966;
case 0x4a9969:c.instructions+=3;goto B4a9969;
case 0x4a9970:c.instructions+=2;goto B4a9970;
case 0x4a9971:c.instructions+=1;goto B4a9971;
case 0x4a9980:goto L4a9980;
case 0x4a9985:c.instructions+=2;goto B4a9985;
case 0x4a9987:c.instructions+=1;goto B4a9987;
case 0x4a9989:goto L4a9989;
case 0x4a998b:c.instructions+=3;goto B4a998b;
case 0x4a998d:c.instructions+=2;goto B4a998d;
case 0x4a998f:c.instructions+=1;goto B4a998f;
case 0x4a9994:goto L4a9994;
case 0x4a9997:goto L4a9997;
case 0x4a99a0:goto L4a99a0;
case 0x4a99a5:c.instructions+=2;goto B4a99a5;
case 0x4a99a7:c.instructions+=1;goto B4a99a7;
case 0x4a99a9:goto L4a99a9;
case 0x4a99ab:c.instructions+=3;goto B4a99ab;
case 0x4a99ad:c.instructions+=2;goto B4a99ad;
case 0x4a99af:c.instructions+=1;goto B4a99af;
case 0x4a99b4:goto L4a99b4;
case 0x4a99b7:goto L4a99b7;
case 0x4a99bb:c.instructions+=4;goto B4a99bb;
case 0x4a99bd:c.instructions+=3;goto B4a99bd;
case 0x4a99bf:c.instructions+=2;goto B4a99bf;
case 0x4a99c0:c.instructions+=1;goto B4a99c0;
case 0x4a99c5:goto L4a99c5;
case 0x4a99cb:c.instructions+=7;goto B4a99cb;
case 0x4a99d2:c.instructions+=6;goto B4a99d2;
case 0x4a99d8:c.instructions+=5;goto B4a99d8;
case 0x4a99db:c.instructions+=4;goto B4a99db;
case 0x4a99de:c.instructions+=3;goto B4a99de;
case 0x4a99df:c.instructions+=2;goto B4a99df;
case 0x4a99e4:c.instructions+=1;goto B4a99e4;
case 0x4a99e9:goto L4a99e9;
case 0x4a99ec:c.instructions+=1;goto B4a99ec;
case 0x4a99f0:goto L4a99f0;
case 0x4a99f5:c.instructions+=2;goto B4a99f5;
case 0x4a99f7:c.instructions+=1;goto B4a99f7;
case 0x4a99f9:goto L4a99f9;
case 0x4a99fb:c.instructions+=3;goto B4a99fb;
case 0x4a99fd:c.instructions+=2;goto B4a99fd;
case 0x4a99ff:c.instructions+=1;goto B4a99ff;
case 0x4a9a04:goto L4a9a04;
case 0x4a9a07:goto L4a9a07;
case 0x4a9a0b:c.instructions+=4;goto B4a9a0b;
case 0x4a9a0d:c.instructions+=3;goto B4a9a0d;
case 0x4a9a0f:c.instructions+=2;goto B4a9a0f;
case 0x4a9a10:c.instructions+=1;goto B4a9a10;
case 0x4a9a15:goto L4a9a15;
case 0x4a9a18:c.instructions+=1;goto B4a9a18;
case 0x4a9a20:goto L4a9a20;
case 0x4a9a25:c.instructions+=4;goto B4a9a25;
case 0x4a9a27:c.instructions+=3;goto B4a9a27;
case 0x4a9a28:c.instructions+=2;goto B4a9a28;
case 0x4a9a2a:c.instructions+=1;goto B4a9a2a;
case 0x4a9a2c:goto L4a9a2c;
case 0x4a9a2e:c.instructions+=3;goto B4a9a2e;
case 0x4a9a30:c.instructions+=2;goto B4a9a30;
case 0x4a9a32:c.instructions+=1;goto B4a9a32;
case 0x4a9a37:goto L4a9a37;
case 0x4a9a3a:goto L4a9a3a;
case 0x4a9a3b:c.instructions+=5;goto B4a9a3b;
case 0x4a9a3c:c.instructions+=4;goto B4a9a3c;
case 0x4a9a40:c.instructions+=3;goto B4a9a40;
case 0x4a9a41:c.instructions+=2;goto B4a9a41;
case 0x4a9a44:c.instructions+=1;goto B4a9a44;
case 0x4a9a49:goto L4a9a49;
case 0x4a9a4e:c.instructions+=4;goto B4a9a4e;
case 0x4a9a50:c.instructions+=3;goto B4a9a50;
case 0x4a9a55:c.instructions+=2;goto B4a9a55;
case 0x4a9a5a:c.instructions+=1;goto B4a9a5a;
case 0x4a9a5c:goto L4a9a5c;
case 0x4a9a5f:c.instructions+=3;goto B4a9a5f;
case 0x4a9a60:c.instructions+=2;goto B4a9a60;
case 0x4a9a62:c.instructions+=1;goto B4a9a62;
case 0x4a9a67:goto L4a9a67;
case 0x4a9a6c:goto L4a9a6c;
case 0x4a9a6f:c.instructions+=2;goto B4a9a6f;
case 0x4a9a71:c.instructions+=1;goto B4a9a71;
case 0x4a9a73:goto L4a9a73;
case 0x4a9a76:c.instructions+=2;goto B4a9a76;
case 0x4a9a79:c.instructions+=1;goto B4a9a79;
case 0x4a9a7b:goto L4a9a7b;
case 0x4a9a7e:c.instructions+=3;goto B4a9a7e;
case 0x4a9a80:c.instructions+=2;goto B4a9a80;
case 0x4a9a82:c.instructions+=1;goto B4a9a82;
case 0x4a9a84:goto L4a9a84;
case 0x4a9a89:c.instructions+=2;goto B4a9a89;
case 0x4a9a8d:c.instructions+=1;goto B4a9a8d;
case 0x4a9a8f:goto L4a9a8f;
case 0x4a9a95:c.instructions+=3;goto B4a9a95;
case 0x4a9a9b:c.instructions+=2;goto B4a9a9b;
case 0x4a9a9e:c.instructions+=1;goto B4a9a9e;
case 0x4a9aa0:goto L4a9aa0;
case 0x4a9aa2:c.instructions+=7;goto B4a9aa2;
case 0x4a9aa5:c.instructions+=6;goto B4a9aa5;
case 0x4a9aa8:c.instructions+=5;goto B4a9aa8;
case 0x4a9aa9:c.instructions+=4;goto B4a9aa9;
case 0x4a9aaf:c.instructions+=3;goto B4a9aaf;
case 0x4a9ab5:c.instructions+=2;goto B4a9ab5;
case 0x4a9ab7:c.instructions+=1;goto B4a9ab7;
case 0x4a9ab9:goto L4a9ab9;
case 0x4a9abe:c.instructions+=1;goto B4a9abe;
case 0x4a9ac0:goto L4a9ac0;
case 0x4a9ac3:c.instructions+=3;goto B4a9ac3;
case 0x4a9ac8:c.instructions+=2;goto B4a9ac8;
case 0x4a9acc:c.instructions+=1;goto B4a9acc;
case 0x4a9ace:goto L4a9ace;
case 0x4a9ad1:c.instructions+=4;goto B4a9ad1;
case 0x4a9ad3:c.instructions+=3;goto B4a9ad3;
case 0x4a9ad4:c.instructions+=2;goto B4a9ad4;
case 0x4a9ad7:c.instructions+=1;goto B4a9ad7;
case 0x4a9ad9:goto L4a9ad9;
case 0x4a9ae0:c.instructions+=1;goto B4a9ae0;
case 0x4a9ae7:goto L4a9ae7;
case 0x4a9aec:c.instructions+=1;goto B4a9aec;
case 0x4a9aee:goto L4a9aee;
case 0x4a9af3:goto L4a9af3;
case 0x4a9af6:goto L4a9af6;
case 0x4a9afb:goto L4a9afb;
case 0x4a9afd:c.instructions+=7;goto B4a9afd;
case 0x4a9b04:c.instructions+=6;goto B4a9b04;
case 0x4a9b08:c.instructions+=5;goto B4a9b08;
case 0x4a9b0d:c.instructions+=4;goto B4a9b0d;
case 0x4a9b0e:c.instructions+=3;goto B4a9b0e;
case 0x4a9b12:c.instructions+=2;goto B4a9b12;
case 0x4a9b13:c.instructions+=1;goto B4a9b13;
case 0x4a9b15:goto L4a9b15;
case 0x4a9b1b:c.instructions+=3;goto B4a9b1b;
case 0x4a9b1e:c.instructions+=2;goto B4a9b1e;
case 0x4a9b20:c.instructions+=1;goto B4a9b20;
case 0x4a9b22:goto L4a9b22;
case 0x4a9b25:c.instructions+=3;goto B4a9b25;
case 0x4a9b26:c.instructions+=2;goto B4a9b26;
case 0x4a9b27:c.instructions+=1;goto B4a9b27;
case 0x4a9b2c:goto L4a9b2c;
case 0x4a9b2f:goto L4a9b2f;
case 0x4a9b30:c.instructions+=1;goto B4a9b30;
case 0x4a9b50:goto L4a9b50;
case 0x4a9b55:c.instructions+=2;goto B4a9b55;
case 0x4a9b57:c.instructions+=1;goto B4a9b57;
case 0x4a9b59:goto L4a9b59;
case 0x4a9b5b:c.instructions+=3;goto B4a9b5b;
case 0x4a9b5d:c.instructions+=2;goto B4a9b5d;
case 0x4a9b5f:c.instructions+=1;goto B4a9b5f;
case 0x4a9b64:goto L4a9b64;
case 0x4a9b67:goto L4a9b67;
case 0x4a9b6c:c.instructions+=5;goto B4a9b6c;
case 0x4a9b6e:c.instructions+=4;goto B4a9b6e;
case 0x4a9b71:c.instructions+=3;goto B4a9b71;
case 0x4a9b76:c.instructions+=2;goto B4a9b76;
case 0x4a9b7a:c.instructions+=1;goto B4a9b7a;
case 0x4a9b7c:goto L4a9b7c;
case 0x4a9b7f:goto L4a9b7f;
case 0x4a9b80:goto L4a9b80;
case 0x4a9b85:c.instructions+=2;goto B4a9b85;
case 0x4a9b87:c.instructions+=1;goto B4a9b87;
case 0x4a9b89:goto L4a9b89;
case 0x4a9b8b:c.instructions+=3;goto B4a9b8b;
case 0x4a9b8d:c.instructions+=2;goto B4a9b8d;
case 0x4a9b8f:c.instructions+=1;goto B4a9b8f;
case 0x4a9b94:goto L4a9b94;
case 0x4a9b97:goto L4a9b97;
case 0x4a9b9b:c.instructions+=5;goto B4a9b9b;
case 0x4a9b9c:c.instructions+=4;goto B4a9b9c;
case 0x4a9b9e:c.instructions+=3;goto B4a9b9e;
case 0x4a9ba0:c.instructions+=2;goto B4a9ba0;
case 0x4a9ba1:c.instructions+=1;goto B4a9ba1;
case 0x4a9ba6:goto L4a9ba6;
case 0x4a9baa:c.instructions+=5;goto B4a9baa;
case 0x4a9bac:c.instructions+=4;goto B4a9bac;
case 0x4a9bae:c.instructions+=3;goto B4a9bae;
case 0x4a9baf:c.instructions+=2;goto B4a9baf;
case 0x4a9bb1:c.instructions+=1;goto B4a9bb1;
case 0x4a9bb6:goto L4a9bb6;
case 0x4a9bb9:c.instructions+=4;goto B4a9bb9;
case 0x4a9bbc:c.instructions+=3;goto B4a9bbc;
case 0x4a9bbe:c.instructions+=2;goto B4a9bbe;
case 0x4a9bc3:c.instructions+=1;goto B4a9bc3;
case 0x4a9bc5:goto L4a9bc5;
case 0x4a9bcb:c.instructions+=2;goto B4a9bcb;
case 0x4a9bce:c.instructions+=1;goto B4a9bce;
case 0x4a9bd0:goto L4a9bd0;
case 0x4a9bd3:c.instructions+=7;goto B4a9bd3;
case 0x4a9bd7:c.instructions+=6;goto B4a9bd7;
case 0x4a9bd9:c.instructions+=5;goto B4a9bd9;
case 0x4a9bdf:c.instructions+=4;goto B4a9bdf;
case 0x4a9be3:c.instructions+=3;goto B4a9be3;
case 0x4a9be6:c.instructions+=2;goto B4a9be6;
case 0x4a9be8:c.instructions+=1;goto B4a9be8;
case 0x4a9bea:goto L4a9bea;
case 0x4a9beb:c.instructions+=1;goto B4a9beb;
case 0x4a9bf0:goto L4a9bf0;
case 0x4a9bf4:c.instructions+=2;goto B4a9bf4;
case 0x4a9bf8:c.instructions+=1;goto B4a9bf8;
case 0x4a9bfa:goto L4a9bfa;
case 0x4a9c00:goto L4a9c00;
case 0x4a9c03:c.instructions+=2;goto B4a9c03;
case 0x4a9c07:c.instructions+=1;goto B4a9c07;
case 0x4a9c09:goto L4a9c09;
case 0x4a9c0a:c.instructions+=3;goto B4a9c0a;
case 0x4a9c0e:c.instructions+=2;goto B4a9c0e;
case 0x4a9c10:c.instructions+=1;goto B4a9c10;
case 0x4a9c12:goto L4a9c12;
case 0x4a9c14:c.instructions+=2;goto B4a9c14;
case 0x4a9c16:c.instructions+=1;goto B4a9c16;
case 0x4a9c18:goto L4a9c18;
case 0x4a9c1c:c.instructions+=1;goto B4a9c1c;
case 0x4a9c20:goto L4a9c20;
case 0x4a9c23:c.instructions+=2;goto B4a9c23;
case 0x4a9c27:c.instructions+=1;goto B4a9c27;
case 0x4a9c29:goto L4a9c29;
case 0x4a9c30:goto L4a9c30;
case 0x4a9c33:c.instructions+=2;goto B4a9c33;
case 0x4a9c37:c.instructions+=1;goto B4a9c37;
case 0x4a9c39:goto L4a9c39;
case 0x4a9c3a:c.instructions+=2;goto B4a9c3a;
case 0x4a9c3c:c.instructions+=1;goto B4a9c3c;
case 0x4a9c3e:goto L4a9c3e;
case 0x4a9c3f:c.instructions+=1;goto B4a9c3f;
case 0x4a9c40:goto L4a9c40;
case 0x4a9c46:c.instructions+=8;goto B4a9c46;
case 0x4a9c47:c.instructions+=7;goto B4a9c47;
case 0x4a9c4b:c.instructions+=6;goto B4a9c4b;
case 0x4a9c4c:c.instructions+=5;goto B4a9c4c;
case 0x4a9c4e:c.instructions+=4;goto B4a9c4e;
case 0x4a9c50:c.instructions+=3;goto B4a9c50;
case 0x4a9c55:c.instructions+=2;goto B4a9c55;
case 0x4a9c57:c.instructions+=1;goto B4a9c57;
case 0x4a9c5d:goto L4a9c5d;
case 0x4a9c63:c.instructions+=4;goto B4a9c63;
case 0x4a9c65:c.instructions+=3;goto B4a9c65;
case 0x4a9c69:c.instructions+=2;goto B4a9c69;
case 0x4a9c6a:c.instructions+=1;goto B4a9c6a;
case 0x4a9c6c:goto L4a9c6c;
case 0x4a9c71:c.instructions+=5;goto B4a9c71;
case 0x4a9c75:c.instructions+=4;goto B4a9c75;
case 0x4a9c76:c.instructions+=3;goto B4a9c76;
case 0x4a9c7a:c.instructions+=2;goto B4a9c7a;
case 0x4a9c7b:c.instructions+=1;goto B4a9c7b;
case 0x4a9c80:goto L4a9c80;
case 0x4a9c86:c.instructions+=6;goto B4a9c86;
case 0x4a9c87:c.instructions+=5;goto B4a9c87;
case 0x4a9c8b:c.instructions+=4;goto B4a9c8b;
case 0x4a9c8c:c.instructions+=3;goto B4a9c8c;
case 0x4a9c90:c.instructions+=2;goto B4a9c90;
case 0x4a9c91:c.instructions+=1;goto B4a9c91;
case 0x4a9c96:goto L4a9c96;
case 0x4a9c99:c.instructions+=4;goto B4a9c99;
case 0x4a9c9b:c.instructions+=3;goto B4a9c9b;
case 0x4a9c9f:c.instructions+=2;goto B4a9c9f;
case 0x4a9ca0:c.instructions+=1;goto B4a9ca0;
case 0x4a9ca2:goto L4a9ca2;
case 0x4a9ca7:c.instructions+=4;goto B4a9ca7;
case 0x4a9caa:c.instructions+=3;goto B4a9caa;
case 0x4a9cae:c.instructions+=2;goto B4a9cae;
case 0x4a9caf:c.instructions+=1;goto B4a9caf;
case 0x4a9cb4:goto L4a9cb4;
case 0x4a9cb9:c.instructions+=5;goto B4a9cb9;
case 0x4a9cbd:c.instructions+=4;goto B4a9cbd;
case 0x4a9cbe:c.instructions+=3;goto B4a9cbe;
case 0x4a9cc2:c.instructions+=2;goto B4a9cc2;
case 0x4a9cc3:c.instructions+=1;goto B4a9cc3;
case 0x4a9cc8:goto L4a9cc8;
case 0x4a9ccb:c.instructions+=5;goto B4a9ccb;
case 0x4a9cd2:c.instructions+=4;goto B4a9cd2;
case 0x4a9cd3:c.instructions+=3;goto B4a9cd3;
case 0x4a9cd7:c.instructions+=2;goto B4a9cd7;
case 0x4a9cd8:c.instructions+=1;goto B4a9cd8;
case 0x4a9cde:goto L4a9cde;
case 0x4a9ce0:c.instructions+=2;goto B4a9ce0;
case 0x4a9ce3:c.instructions+=1;goto B4a9ce3;
case 0x4a9ce5:goto L4a9ce5;
case 0x4a9ce6:c.instructions+=7;goto B4a9ce6;
case 0x4a9cec:c.instructions+=6;goto B4a9cec;
case 0x4a9ced:c.instructions+=5;goto B4a9ced;
case 0x4a9cf4:c.instructions+=4;goto B4a9cf4;
case 0x4a9cf5:c.instructions+=3;goto B4a9cf5;
case 0x4a9cf6:c.instructions+=2;goto B4a9cf6;
case 0x4a9cfb:c.instructions+=1;goto B4a9cfb;
case 0x4a9cfd:goto L4a9cfd;
case 0x4a9cff:c.instructions+=1;goto B4a9cff;
case 0x4a9d01:goto L4a9d01;
case 0x4a9d08:c.instructions+=4;goto B4a9d08;
case 0x4a9d09:c.instructions+=3;goto B4a9d09;
case 0x4a9d0a:c.instructions+=2;goto B4a9d0a;
case 0x4a9d0b:c.instructions+=1;goto B4a9d0b;
case 0x4a9d0d:goto L4a9d0d;
case 0x4a9d0f:c.instructions+=1;goto B4a9d0f;
case 0x4a9d11:goto L4a9d11;
case 0x4a9d14:c.instructions+=1;goto B4a9d14;
case 0x4a9d16:goto L4a9d16;
case 0x4a9d1d:c.instructions+=1;goto B4a9d1d;
case 0x4a9d21:goto L4a9d21;
case 0x4a9d22:c.instructions+=1;goto B4a9d22;
case 0x4a9d28:goto L4a9d28;
case 0x4a9d29:c.instructions+=4;goto B4a9d29;
case 0x4a9d2a:c.instructions+=3;goto B4a9d2a;
case 0x4a9d2b:c.instructions+=2;goto B4a9d2b;
case 0x4a9d31:c.instructions+=1;goto B4a9d31;
case 0x4a9d34:goto L4a9d34;
case 0x4a9d3b:c.instructions+=4;goto B4a9d3b;
case 0x4a9d3f:c.instructions+=3;goto B4a9d3f;
case 0x4a9d40:c.instructions+=2;goto B4a9d40;
case 0x4a9d46:c.instructions+=1;goto B4a9d46;
case 0x4a9d50:goto L4a9d50;
case 0x4a9d54:c.instructions+=2;goto B4a9d54;
case 0x4a9d57:c.instructions+=1;goto B4a9d57;
case 0x4a9d60:goto L4a9d60;
case 0x4a9d64:c.instructions+=4;goto B4a9d64;
case 0x4a9d68:c.instructions+=3;goto B4a9d68;
case 0x4a9d6a:c.instructions+=2;goto B4a9d6a;
case 0x4a9d6d:c.instructions+=1;goto B4a9d6d;
case 0x4a9d6f:goto L4a9d6f;
case 0x4a9d73:c.instructions+=4;goto B4a9d73;
case 0x4a9d77:c.instructions+=3;goto B4a9d77;
case 0x4a9d79:c.instructions+=2;goto B4a9d79;
case 0x4a9d7c:c.instructions+=1;goto B4a9d7c;
case 0x4a9d7e:goto L4a9d7e;
case 0x4a9d82:c.instructions+=9;goto B4a9d82;
case 0x4a9d86:c.instructions+=8;goto B4a9d86;
case 0x4a9d8a:c.instructions+=7;goto B4a9d8a;
case 0x4a9d8e:c.instructions+=6;goto B4a9d8e;
case 0x4a9d90:c.instructions+=5;goto B4a9d90;
case 0x4a9d94:c.instructions+=4;goto B4a9d94;
case 0x4a9d98:c.instructions+=3;goto B4a9d98;
case 0x4a9d9a:c.instructions+=2;goto B4a9d9a;
case 0x4a9d9e:c.instructions+=1;goto B4a9d9e;
case 0x4a9d9f:goto L4a9d9f;
case 0x4a9da3:c.instructions+=4;goto B4a9da3;
case 0x4a9da7:c.instructions+=3;goto B4a9da7;
case 0x4a9da9:c.instructions+=2;goto B4a9da9;
case 0x4a9dac:c.instructions+=1;goto B4a9dac;
case 0x4a9dae:goto L4a9dae;
case 0x4a9db2:c.instructions+=4;goto B4a9db2;
case 0x4a9db6:c.instructions+=3;goto B4a9db6;
case 0x4a9db8:c.instructions+=2;goto B4a9db8;
case 0x4a9dbb:c.instructions+=1;goto B4a9dbb;
case 0x4a9dbd:goto L4a9dbd;
case 0x4a9dc1:c.instructions+=1;goto B4a9dc1;
case 0x4a9dc2:goto L4a9dc2;
case 0x4a9dc6:c.instructions+=1;goto B4a9dc6;
case 0x4a9dd0:goto L4a9dd0;
case 0x4a9dd4:c.instructions+=10;goto B4a9dd4;
case 0x4a9dd8:c.instructions+=9;goto B4a9dd8;
case 0x4a9ddb:c.instructions+=8;goto B4a9ddb;
case 0x4a9ddd:c.instructions+=7;goto B4a9ddd;
case 0x4a9de1:c.instructions+=6;goto B4a9de1;
case 0x4a9de4:c.instructions+=5;goto B4a9de4;
case 0x4a9de6:c.instructions+=4;goto B4a9de6;
case 0x4a9dea:c.instructions+=3;goto B4a9dea;
case 0x4a9ded:c.instructions+=2;goto B4a9ded;
case 0x4a9def:c.instructions+=1;goto B4a9def;
case 0x4a9df0:goto L4a9df0;
case 0x4a9df1:c.instructions+=4;goto B4a9df1;
case 0x4a9df5:c.instructions+=3;goto B4a9df5;
case 0x4a9df8:c.instructions+=2;goto B4a9df8;
case 0x4a9df9:c.instructions+=1;goto B4a9df9;
case 0x4a9dfe:goto L4a9dfe;
case 0x4a9e00:c.instructions+=3;goto B4a9e00;
case 0x4a9e02:c.instructions+=2;goto B4a9e02;
case 0x4a9e05:c.instructions+=1;goto B4a9e05;
case 0x4a9e0a:goto L4a9e0a;
case 0x4a9e0d:c.instructions+=3;goto B4a9e0d;
case 0x4a9e0f:c.instructions+=2;goto B4a9e0f;
case 0x4a9e12:c.instructions+=1;goto B4a9e12;
case 0x4a9e17:goto L4a9e17;
case 0x4a9e1a:c.instructions+=3;goto B4a9e1a;
case 0x4a9e1c:c.instructions+=2;goto B4a9e1c;
case 0x4a9e1f:c.instructions+=1;goto B4a9e1f;
case 0x4a9e24:goto L4a9e24;
case 0x4a9e26:c.instructions+=3;goto B4a9e26;
case 0x4a9e27:c.instructions+=2;goto B4a9e27;
case 0x4a9e28:c.instructions+=1;goto B4a9e28;
case 0x4a9e30:goto L4a9e30;
case 0x4a9e31:c.instructions+=4;goto B4a9e31;
case 0x4a9e33:c.instructions+=3;goto B4a9e33;
case 0x4a9e35:c.instructions+=2;goto B4a9e35;
case 0x4a9e36:c.instructions+=1;goto B4a9e36;
case 0x4a9e3b:goto L4a9e3b;
case 0x4a9e3e:c.instructions+=3;goto B4a9e3e;
case 0x4a9e40:c.instructions+=2;goto B4a9e40;
case 0x4a9e43:c.instructions+=1;goto B4a9e43;
case 0x4a9e48:goto L4a9e48;
case 0x4a9e4b:c.instructions+=3;goto B4a9e4b;
case 0x4a9e4d:c.instructions+=2;goto B4a9e4d;
case 0x4a9e50:c.instructions+=1;goto B4a9e50;
case 0x4a9e55:goto L4a9e55;
case 0x4a9e58:c.instructions+=3;goto B4a9e58;
case 0x4a9e5a:c.instructions+=2;goto B4a9e5a;
case 0x4a9e5d:c.instructions+=1;goto B4a9e5d;
case 0x4a9e62:goto L4a9e62;
case 0x4a9e64:c.instructions+=3;goto B4a9e64;
case 0x4a9e65:c.instructions+=2;goto B4a9e65;
case 0x4a9e66:c.instructions+=1;goto B4a9e66;
case 0x4a9e70:goto L4a9e70;
case 0x4a9e71:c.instructions+=9;goto B4a9e71;
case 0x4a9e73:c.instructions+=8;goto B4a9e73;
case 0x4a9e76:c.instructions+=7;goto B4a9e76;
case 0x4a9e79:c.instructions+=6;goto B4a9e79;
case 0x4a9e7b:c.instructions+=5;goto B4a9e7b;
case 0x4a9e7e:c.instructions+=4;goto B4a9e7e;
case 0x4a9e7f:c.instructions+=3;goto B4a9e7f;
case 0x4a9e82:c.instructions+=2;goto B4a9e82;
case 0x4a9e84:c.instructions+=1;goto B4a9e84;
case 0x4a9e86:goto L4a9e86;
case 0x4a9e8a:c.instructions+=3;goto B4a9e8a;
case 0x4a9e90:c.instructions+=2;goto B4a9e90;
case 0x4a9e92:c.instructions+=1;goto B4a9e92;
case 0x4a9e94:goto L4a9e94;
case 0x4a9e97:c.instructions+=1;goto B4a9e97;
case 0x4a9e99:goto L4a9e99;
case 0x4a9e9a:c.instructions+=1;goto B4a9e9a;
case 0x4a9e9f:goto L4a9e9f;
case 0x4a9ea2:c.instructions+=4;goto B4a9ea2;
case 0x4a9ea3:c.instructions+=3;goto B4a9ea3;
case 0x4a9ea8:c.instructions+=2;goto B4a9ea8;
case 0x4a9ea9:c.instructions+=1;goto B4a9ea9;
case 0x4a9eae:goto L4a9eae;
case 0x4a9eb1:c.instructions+=2;goto B4a9eb1;
case 0x4a9eb2:c.instructions+=1;goto B4a9eb2;
case 0x4a9eb7:goto L4a9eb7;
case 0x4a9eba:c.instructions+=4;goto B4a9eba;
case 0x4a9ebc:c.instructions+=3;goto B4a9ebc;
case 0x4a9ec1:c.instructions+=2;goto B4a9ec1;
case 0x4a9ec2:c.instructions+=1;goto B4a9ec2;
case 0x4a9ec7:goto L4a9ec7;
case 0x4a9eca:c.instructions+=4;goto B4a9eca;
case 0x4a9ecd:c.instructions+=3;goto B4a9ecd;
case 0x4a9ece:c.instructions+=2;goto B4a9ece;
case 0x4a9ecf:c.instructions+=1;goto B4a9ecf;
case 0x4a9ed2:goto L4a9ed2;
case 0x4a9ed5:c.instructions+=2;goto B4a9ed5;
case 0x4a9ed6:c.instructions+=1;goto B4a9ed6;
case 0x4a9edb:goto L4a9edb;
case 0x4a9ede:goto L4a9ede;
case 0x4a9edf:c.instructions+=2;goto B4a9edf;
case 0x4a9ee0:c.instructions+=1;goto B4a9ee0;
case 0x4a9ef0:goto L4a9ef0;
case 0x4a9ef1:c.instructions+=9;goto B4a9ef1;
case 0x4a9ef3:c.instructions+=8;goto B4a9ef3;
case 0x4a9ef6:c.instructions+=7;goto B4a9ef6;
case 0x4a9ef9:c.instructions+=6;goto B4a9ef9;
case 0x4a9efb:c.instructions+=5;goto B4a9efb;
case 0x4a9efe:c.instructions+=4;goto B4a9efe;
case 0x4a9eff:c.instructions+=3;goto B4a9eff;
case 0x4a9f02:c.instructions+=2;goto B4a9f02;
case 0x4a9f04:c.instructions+=1;goto B4a9f04;
case 0x4a9f0a:goto L4a9f0a;
case 0x4a9f0f:c.instructions+=1;goto B4a9f0f;
case 0x4a9f14:goto L4a9f14;
case 0x4a9f16:c.instructions+=1;goto B4a9f16;
case 0x4a9f1c:goto L4a9f1c;
case 0x4a9f1f:c.instructions+=2;goto B4a9f1f;
case 0x4a9f20:c.instructions+=1;goto B4a9f20;
case 0x4a9f25:goto L4a9f25;
case 0x4a9f28:c.instructions+=2;goto B4a9f28;
case 0x4a9f29:c.instructions+=1;goto B4a9f29;
case 0x4a9f2e:goto L4a9f2e;
case 0x4a9f31:c.instructions+=2;goto B4a9f31;
case 0x4a9f36:c.instructions+=1;goto B4a9f36;
case 0x4a9f3b:goto L4a9f3b;
case 0x4a9f3c:c.instructions+=2;goto B4a9f3c;
case 0x4a9f3d:c.instructions+=1;goto B4a9f3d;
case 0x4a9f42:goto L4a9f42;
case 0x4a9f43:c.instructions+=1;goto B4a9f43;
case 0x4a9f48:goto L4a9f48;
case 0x4a9f4b:c.instructions+=4;goto B4a9f4b;
case 0x4a9f4e:c.instructions+=3;goto B4a9f4e;
case 0x4a9f50:c.instructions+=2;goto B4a9f50;
case 0x4a9f54:c.instructions+=1;goto B4a9f54;
case 0x4a9f56:goto L4a9f56;
case 0x4a9f57:c.instructions+=2;goto B4a9f57;
case 0x4a9f5c:c.instructions+=1;goto B4a9f5c;
case 0x4a9f61:goto L4a9f61;
case 0x4a9f64:c.instructions+=5;goto B4a9f64;
case 0x4a9f67:c.instructions+=4;goto B4a9f67;
case 0x4a9f68:c.instructions+=3;goto B4a9f68;
case 0x4a9f6d:c.instructions+=2;goto B4a9f6d;
case 0x4a9f6e:c.instructions+=1;goto B4a9f6e;
case 0x4a9f73:goto L4a9f73;
case 0x4a9f76:c.instructions+=4;goto B4a9f76;
case 0x4a9f78:c.instructions+=3;goto B4a9f78;
case 0x4a9f7d:c.instructions+=2;goto B4a9f7d;
case 0x4a9f7e:c.instructions+=1;goto B4a9f7e;
case 0x4a9f83:goto L4a9f83;
case 0x4a9f86:c.instructions+=2;goto B4a9f86;
case 0x4a9f8d:c.instructions+=1;goto B4a9f8d;
case 0x4a9f91:goto L4a9f91;
case 0x4a9f96:c.instructions+=1;goto B4a9f96;
case 0x4a9f9b:goto L4a9f9b;
case 0x4a9f9e:c.instructions+=4;goto B4a9f9e;
case 0x4a9f9f:c.instructions+=3;goto B4a9f9f;
case 0x4a9fa4:c.instructions+=2;goto B4a9fa4;
case 0x4a9fa5:c.instructions+=1;goto B4a9fa5;
case 0x4a9faa:goto L4a9faa;
case 0x4a9fad:c.instructions+=3;goto B4a9fad;
case 0x4a9fae:c.instructions+=2;goto B4a9fae;
case 0x4a9faf:c.instructions+=1;goto B4a9faf;
case 0x4a9fb2:goto L4a9fb2;
case 0x4a9fb5:c.instructions+=2;goto B4a9fb5;
case 0x4a9fb6:c.instructions+=1;goto B4a9fb6;
case 0x4a9fbb:goto L4a9fbb;
case 0x4a9fbe:c.instructions+=2;goto B4a9fbe;
case 0x4a9fbf:c.instructions+=1;goto B4a9fbf;
case 0x4a9fc4:goto L4a9fc4;
case 0x4a9fc7:c.instructions+=2;goto B4a9fc7;
case 0x4a9fcc:c.instructions+=1;goto B4a9fcc;
case 0x4a9fd1:goto L4a9fd1;
case 0x4a9fd2:c.instructions+=2;goto B4a9fd2;
case 0x4a9fd3:c.instructions+=1;goto B4a9fd3;
case 0x4a9fd8:goto L4a9fd8;
case 0x4a9fd9:c.instructions+=1;goto B4a9fd9;
case 0x4a9fde:goto L4a9fde;
case 0x4a9fe1:c.instructions+=4;goto B4a9fe1;
case 0x4a9fe2:c.instructions+=3;goto B4a9fe2;
case 0x4a9fe6:c.instructions+=2;goto B4a9fe6;
case 0x4a9fe7:c.instructions+=1;goto B4a9fe7;
case 0x4a9ff0:goto L4a9ff0;
case 0x4a9ff1:c.instructions+=6;goto B4a9ff1;
case 0x4a9ff3:c.instructions+=5;goto B4a9ff3;
case 0x4a9ff6:c.instructions+=4;goto B4a9ff6;
case 0x4a9ff9:c.instructions+=3;goto B4a9ff9;
case 0x4a9ffc:c.instructions+=2;goto B4a9ffc;
case 0x4a9ffe:c.instructions+=1;goto B4a9ffe;
default:missing_instruction(c.pc);}
B4a9002:L4a9002:{c.instructions+=8;NFSU2_TR(0x4a9002);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4a9008:{NFSU2_TR(0x4a9008);
u8 U[4];
w4(U+0,u32(0x3fe6fab9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a900d:{NFSU2_TR(0x4a900d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9011:{NFSU2_TR(0x4a9011);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9014:{NFSU2_TR(0x4a9014);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9017:{NFSU2_TR(0x4a9017);
u8 U[4];
w4(U+0,u32(0x4b98c4b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a901c:{NFSU2_TR(0x4a901c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a901d:{NFSU2_TR(0x4a901d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9022ull));
TAIL_STATIC(0x537a10u,537);
}
B4a9022:L4a9022:{c.instructions+=3;NFSU2_TR(0x4a9022);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a9025:{NFSU2_TR(0x4a9025);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9026:{NFSU2_TR(0x4a9026);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a902bull));
TAIL_STATIC(0x50c900u,50c);
}
B4a902b:L4a902b:{c.instructions+=7;NFSU2_TR(0x4a902b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a902f:{NFSU2_TR(0x4a902f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a9032:{NFSU2_TR(0x4a9032);
__builtin_memmove((R+0),(R+24),4);
}
B4a9034:{NFSU2_TR(0x4a9034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9035:{NFSU2_TR(0x4a9035);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a903c:{NFSU2_TR(0x4a903c);
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
B4a903f:{NFSU2_TR(0x4a903f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9050:L4a9050:{c.instructions+=3;NFSU2_TR(0x4a9050);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9051:{NFSU2_TR(0x4a9051);
__builtin_memmove((R+24),(R+4),4);
}
B4a9053:{NFSU2_TR(0x4a9053);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9058ull));
{goto L4a9070;}
}
B4a9058:L4a9058:{c.instructions+=2;NFSU2_TR(0x4a9058);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4a905d:{NFSU2_TR(0x4a905d);
if(r1(R+518)){{goto L4a9068;}}
}
B4a905f:L4a905f:{c.instructions+=2;NFSU2_TR(0x4a905f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9060:{NFSU2_TR(0x4a9060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9065ull));
TAIL_STATIC(0x575630u,575);
}
B4a9065:L4a9065:{c.instructions+=1;NFSU2_TR(0x4a9065);
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
B4a9068:L4a9068:{c.instructions+=3;NFSU2_TR(0x4a9068);
__builtin_memmove((R+0),(R+24),4);
}
B4a906a:{NFSU2_TR(0x4a906a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a906b:{NFSU2_TR(0x4a906b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9070:L4a9070:{c.instructions+=2;NFSU2_TR(0x4a9070);
u8 U[4];
w4(U+0,u32(0x7908d4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4a9076:{NFSU2_TR(0x4a9076);
TAIL_STATIC(0x510d40u,510);
}
B4a9080:L4a9080:{c.instructions+=8;NFSU2_TR(0x4a9080);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9082:{NFSU2_TR(0x4a9082);
u8 U[4];
w4(U+0,u32(0x772ba4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9087:{NFSU2_TR(0x4a9087);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a908d:{NFSU2_TR(0x4a908d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a908e:{NFSU2_TR(0x4a908e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9095:{NFSU2_TR(0x4a9095);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9096:{NFSU2_TR(0x4a9096);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9098:{NFSU2_TR(0x4a9098);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a909dull));
TAIL_STATIC(0x575620u,575);
}
B4a909d:L4a909d:{c.instructions+=5;NFSU2_TR(0x4a909d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a90a0:{NFSU2_TR(0x4a90a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4a90a4:{NFSU2_TR(0x4a90a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a90a6:{NFSU2_TR(0x4a90a6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a90ae:{NFSU2_TR(0x4a90ae);
if(r1(R+518)){{goto L4a90cb;}}
}
B4a90b0:L4a90b0:{c.instructions+=4;NFSU2_TR(0x4a90b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a90b4:{NFSU2_TR(0x4a90b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a90b5:{NFSU2_TR(0x4a90b5);
__builtin_memmove((R+4),(R+0),4);
}
B4a90b7:{NFSU2_TR(0x4a90b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a90bcull));
TAIL_STATIC(0x4a8fd0u,4a8);
}
B4a90bc:L4a90bc:{c.instructions+=4;NFSU2_TR(0x4a90bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a90c0:{NFSU2_TR(0x4a90c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a90c7:{NFSU2_TR(0x4a90c7);
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
B4a90ca:{NFSU2_TR(0x4a90ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a90cb:L4a90cb:{c.instructions+=5;NFSU2_TR(0x4a90cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a90cf:{NFSU2_TR(0x4a90cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a90d1:{NFSU2_TR(0x4a90d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a90d8:{NFSU2_TR(0x4a90d8);
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
B4a90db:{NFSU2_TR(0x4a90db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a90e0:L4a90e0:{c.instructions+=1;NFSU2_TR(0x4a90e0);
TAIL_STATIC(0x543d40u,543);
}
B4a90f0:L4a90f0:{c.instructions+=12;NFSU2_TR(0x4a90f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a90f2:{NFSU2_TR(0x4a90f2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a90f7:{NFSU2_TR(0x4a90f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a90fd:{NFSU2_TR(0x4a90fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a90fe:{NFSU2_TR(0x4a90fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9105:{NFSU2_TR(0x4a9105);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9106:{NFSU2_TR(0x4a9106);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a910a:{NFSU2_TR(0x4a910a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a910b:{NFSU2_TR(0x4a910b);
__builtin_memmove((R+24),(R+4),4);
}
B4a910d:{NFSU2_TR(0x4a910d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a910e:{NFSU2_TR(0x4a910e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9112:{NFSU2_TR(0x4a9112);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9117ull));
TAIL_STATIC(0x551de0u,551);
}
B4a9117:L4a9117:{c.instructions+=5;NFSU2_TR(0x4a9117);
u8 U[4];
w4(U+0,u32(0x790914ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a911d:{NFSU2_TR(0x4a911d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a9124:{NFSU2_TR(0x4a9124);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a912c:{NFSU2_TR(0x4a912c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a9133:{NFSU2_TR(0x4a9133);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9138ull));
TAIL_STATIC(0x576ca0u,576);
}
B4a9138:L4a9138:{c.instructions+=2;NFSU2_TR(0x4a9138);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a913a:{NFSU2_TR(0x4a913a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a9153;}}
}
B4a913c:L4a913c:{c.instructions+=4;NFSU2_TR(0x4a913c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a913f:{NFSU2_TR(0x4a913f);
u8 U[4];
w4(U+0,u32(0x43d41f73ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9144:{NFSU2_TR(0x4a9144);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9145:{NFSU2_TR(0x4a9145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a914aull));
TAIL_STATIC(0x5379c0u,537);
}
B4a914a:L4a914a:{c.instructions+=2;NFSU2_TR(0x4a914a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a914b:{NFSU2_TR(0x4a914b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9150ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a9150:L4a9150:{c.instructions+=1;NFSU2_TR(0x4a9150);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a9153:L4a9153:{c.instructions+=6;NFSU2_TR(0x4a9153);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9156:{NFSU2_TR(0x4a9156);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9157:{NFSU2_TR(0x4a9157);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9158:{NFSU2_TR(0x4a9158);
u8 U[4];
w4(U+0,u32(0xc4df3ff2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a915d:{NFSU2_TR(0x4a915d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a915e:{NFSU2_TR(0x4a915e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9163ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a9163:L4a9163:{c.instructions+=2;NFSU2_TR(0x4a9163);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9164:{NFSU2_TR(0x4a9164);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9169ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a9169:L4a9169:{c.instructions+=4;NFSU2_TR(0x4a9169);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a916c:{NFSU2_TR(0x4a916c);
u8 U[4];
w4(U+0,u32(0x13cf446dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9171:{NFSU2_TR(0x4a9171);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9172:{NFSU2_TR(0x4a9172);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9177ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a9177:L4a9177:{c.instructions+=2;NFSU2_TR(0x4a9177);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9178:{NFSU2_TR(0x4a9178);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a917dull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a917d:L4a917d:{c.instructions+=4;NFSU2_TR(0x4a917d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9180:{NFSU2_TR(0x4a9180);
u8 U[4];
w4(U+0,u32(0x8c0bd743ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9185:{NFSU2_TR(0x4a9185);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9186:{NFSU2_TR(0x4a9186);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a918bull));
TAIL_STATIC(0x5379c0u,537);
}
B4a918b:L4a918b:{c.instructions+=2;NFSU2_TR(0x4a918b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a918c:{NFSU2_TR(0x4a918c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9191ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a9191:L4a9191:{c.instructions+=4;NFSU2_TR(0x4a9191);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9194:{NFSU2_TR(0x4a9194);
u8 U[4];
w4(U+0,u32(0x8c0bd743ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9199:{NFSU2_TR(0x4a9199);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a919a:{NFSU2_TR(0x4a919a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a919full));
TAIL_STATIC(0x5379c0u,537);
}
B4a919f:L4a919f:{c.instructions+=4;NFSU2_TR(0x4a919f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a91a2:{NFSU2_TR(0x4a91a2);
u8 U[4];
w4(U+0,u32(0x790904ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a91a7:{NFSU2_TR(0x4a91a7);
__builtin_memmove((R+28),(R+0),4);
}
B4a91a9:{NFSU2_TR(0x4a91a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a91aeull));
TAIL_STATIC(0x505450u,505);
}
B4a91ae:L4a91ae:{c.instructions+=3;NFSU2_TR(0x4a91ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a91af:{NFSU2_TR(0x4a91af);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a91b0:{NFSU2_TR(0x4a91b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a91b5ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a91b5:L4a91b5:{c.instructions+=2;NFSU2_TR(0x4a91b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a91b6:{NFSU2_TR(0x4a91b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a91bbull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a91bb:L4a91bb:{c.instructions+=5;NFSU2_TR(0x4a91bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a91be:{NFSU2_TR(0x4a91be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B4a91c1:{NFSU2_TR(0x4a91c1);
u8 U[4];
w4(U+0,u32(0xeeeb248eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a91c6:{NFSU2_TR(0x4a91c6);
u8 U[4];
w4(U+0,u32(0x7908f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a91cb:{NFSU2_TR(0x4a91cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a91d0ull));
TAIL_STATIC(0x505450u,505);
}
B4a91d0:L4a91d0:{c.instructions+=3;NFSU2_TR(0x4a91d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a91d1:{NFSU2_TR(0x4a91d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a91d2:{NFSU2_TR(0x4a91d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a91d7ull));
TAIL_STATIC(0x537a10u,537);
}
B4a91d7:L4a91d7:{c.instructions+=3;NFSU2_TR(0x4a91d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a91da:{NFSU2_TR(0x4a91da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a91db:{NFSU2_TR(0x4a91db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a91e0ull));
TAIL_STATIC(0x50c900u,50c);
}
B4a91e0:L4a91e0:{c.instructions+=5;NFSU2_TR(0x4a91e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a91e3:{NFSU2_TR(0x4a91e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a91e6:{NFSU2_TR(0x4a91e6);
u8 U[4];
w4(U+0,u32(0x1f182080ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a91eb:{NFSU2_TR(0x4a91eb);
u8 U[4];
w4(U+0,u32(0x7908f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a91f0:{NFSU2_TR(0x4a91f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a91f5ull));
TAIL_STATIC(0x505450u,505);
}
B4a91f5:L4a91f5:{c.instructions+=3;NFSU2_TR(0x4a91f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a91f6:{NFSU2_TR(0x4a91f6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a91f7:{NFSU2_TR(0x4a91f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a91fcull));
TAIL_STATIC(0x537a10u,537);
}
B4a91fc:L4a91fc:{c.instructions+=3;NFSU2_TR(0x4a91fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a91ff:{NFSU2_TR(0x4a91ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9200:{NFSU2_TR(0x4a9200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9205ull));
TAIL_STATIC(0x50c900u,50c);
}
B4a9205:L4a9205:{c.instructions+=3;NFSU2_TR(0x4a9205);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a9208:{NFSU2_TR(0x4a9208);
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
B4a920a:{NFSU2_TR(0x4a920a);
if(r1(R+518)){{goto L4a9225;}}
}
B4a920c:L4a920c:{c.instructions+=3;NFSU2_TR(0x4a920c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a920f:{NFSU2_TR(0x4a920f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a9214:{NFSU2_TR(0x4a9214);
if(r1(R+518)){{goto L4a921e;}}
}
B4a9216:L4a9216:{c.instructions+=2;NFSU2_TR(0x4a9216);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xefffffffull))));
}
B4a921b:{NFSU2_TR(0x4a921b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a921e:L4a921e:{c.instructions+=1;NFSU2_TR(0x4a921e);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
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
B4a9225:L4a9225:{c.instructions+=4;NFSU2_TR(0x4a9225);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4a922b:{NFSU2_TR(0x4a922b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a922d:{NFSU2_TR(0x4a922d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9230:{NFSU2_TR(0x4a9230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9235ull));
TAIL_STATIC(0x4ac940u,4ac);
}
B4a9235:L4a9235:{c.instructions+=4;NFSU2_TR(0x4a9235);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4a923b:{NFSU2_TR(0x4a923b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a923e:{NFSU2_TR(0x4a923e);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9240:{NFSU2_TR(0x4a9240);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9245ull));
TAIL_STATIC(0x480c30u,480);
}
B4a9245:L4a9245:{c.instructions+=3;NFSU2_TR(0x4a9245);
w4(R+4,u32(0x865930ull));
}
B4a924a:{NFSU2_TR(0x4a924a);
s1(0x865480,u8(0x1ull));
}
B4a9251:{NFSU2_TR(0x4a9251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9256ull));
TAIL_STATIC(0x579c90u,579);
}
B4a9256:L4a9256:{c.instructions+=5;NFSU2_TR(0x4a9256);
__builtin_memmove((R+0),gp(0x836495),1);
}
B4a925b:{NFSU2_TR(0x4a925b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a925d:{NFSU2_TR(0x4a925d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a925e:{NFSU2_TR(0x4a925e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a925f:{NFSU2_TR(0x4a925f);
if(r1(R+518)){{goto L4a928e;}}
}
B4a9261:L4a9261:{c.instructions+=6;NFSU2_TR(0x4a9261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a9264:{NFSU2_TR(0x4a9264);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9266:{NFSU2_TR(0x4a9266);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a926b:{NFSU2_TR(0x4a926b);
u8 U[4];
w4(U+0,u32(0x2ddf58cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9270:{NFSU2_TR(0x4a9270);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9271:{NFSU2_TR(0x4a9271);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9276ull));
TAIL_STATIC(0x537c00u,537);
}
B4a9276:L4a9276:{c.instructions+=6;NFSU2_TR(0x4a9276);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9279:{NFSU2_TR(0x4a9279);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a927b:{NFSU2_TR(0x4a927b);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9280:{NFSU2_TR(0x4a9280);
u8 U[4];
w4(U+0,u32(0x4c46f86aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9285:{NFSU2_TR(0x4a9285);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9286:{NFSU2_TR(0x4a9286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a928bull));
TAIL_STATIC(0x537c00u,537);
}
B4a928b:L4a928b:{c.instructions+=1;NFSU2_TR(0x4a928b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4a928e:L4a928e:{c.instructions+=6;NFSU2_TR(0x4a928e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9292:{NFSU2_TR(0x4a9292);
__builtin_memmove((R+0),(R+24),4);
}
B4a9294:{NFSU2_TR(0x4a9294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9295:{NFSU2_TR(0x4a9295);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a929c:{NFSU2_TR(0x4a929c);
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
B4a929f:{NFSU2_TR(0x4a929f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a92b0:L4a92b0:{c.instructions+=13;NFSU2_TR(0x4a92b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a92b2:{NFSU2_TR(0x4a92b2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a92b7:{NFSU2_TR(0x4a92b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a92bd:{NFSU2_TR(0x4a92bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a92be:{NFSU2_TR(0x4a92be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a92c5:{NFSU2_TR(0x4a92c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a92c6:{NFSU2_TR(0x4a92c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a92c7:{NFSU2_TR(0x4a92c7);
__builtin_memmove((R+24),(R+4),4);
}
B4a92c9:{NFSU2_TR(0x4a92c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a92cd:{NFSU2_TR(0x4a92cd);
u8 U[4];
w4(U+0,u32(0x790914ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a92d3:{NFSU2_TR(0x4a92d3);
w4(R+4,u32(0x865930ull));
}
B4a92d8:{NFSU2_TR(0x4a92d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a92e0:{NFSU2_TR(0x4a92e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a92e5ull));
TAIL_STATIC(0x579ca0u,579);
}
B4a92e5:L4a92e5:{c.instructions+=3;NFSU2_TR(0x4a92e5);
__builtin_memmove((R+4),(R+24),4);
}
B4a92e7:{NFSU2_TR(0x4a92e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a92ef:{NFSU2_TR(0x4a92ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a92f4ull));
TAIL_STATIC(0x510d40u,510);
}
B4a92f4:L4a92f4:{c.instructions+=5;NFSU2_TR(0x4a92f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a92f8:{NFSU2_TR(0x4a92f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a92f9:{NFSU2_TR(0x4a92f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9300:{NFSU2_TR(0x4a9300);
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
B4a9303:{NFSU2_TR(0x4a9303);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9310:L4a9310:{c.instructions+=2;NFSU2_TR(0x4a9310);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9315:{NFSU2_TR(0x4a9315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a931aull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a931a:L4a931a:{c.instructions+=3;NFSU2_TR(0x4a931a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a931d:{NFSU2_TR(0x4a931d);
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
B4a931f:{NFSU2_TR(0x4a931f);
if(r1(R+518)){{goto L4a932c;}}
}
B4a9321:L4a9321:{c.instructions+=2;NFSU2_TR(0x4a9321);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9326:{NFSU2_TR(0x4a9326);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a932bull));
TAIL_STATIC(0x558f00u,558);
}
B4a932b:L4a932b:{c.instructions+=1;NFSU2_TR(0x4a932b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a932c:L4a932c:{c.instructions+=1;NFSU2_TR(0x4a932c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9330:L4a9330:{c.instructions+=2;NFSU2_TR(0x4a9330);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9335:{NFSU2_TR(0x4a9335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a933aull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a933a:L4a933a:{c.instructions+=2;NFSU2_TR(0x4a933a);
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
B4a933d:{NFSU2_TR(0x4a933d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9340:L4a9340:{c.instructions+=2;NFSU2_TR(0x4a9340);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9345:{NFSU2_TR(0x4a9345);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a934aull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a934a:L4a934a:{c.instructions+=5;NFSU2_TR(0x4a934a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a934d:{NFSU2_TR(0x4a934d);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4a934f:{NFSU2_TR(0x4a934f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4a9351:{NFSU2_TR(0x4a9351);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x790734ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a9356:{NFSU2_TR(0x4a9356);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9360:L4a9360:{c.instructions+=5;NFSU2_TR(0x4a9360);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9361:{NFSU2_TR(0x4a9361);
__builtin_memmove((R+24),(R+4),4);
}
B4a9363:{NFSU2_TR(0x4a9363);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9364:{NFSU2_TR(0x4a9364);
w4(R+4,u32(0x83a9e0ull));
}
B4a9369:{NFSU2_TR(0x4a9369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a936eull));
TAIL_STATIC(0x502fe0u,502);
}
B4a936e:L4a936e:{c.instructions+=2;NFSU2_TR(0x4a936e);
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
B4a9370:{NFSU2_TR(0x4a9370);
if(r1(R+518)){{goto L4a937e;}}
}
B4a9372:L4a9372:{c.instructions+=3;NFSU2_TR(0x4a9372);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9378:{NFSU2_TR(0x4a9378);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a937c:{NFSU2_TR(0x4a937c);
{goto L4a9388;}
}
B4a937e:L4a937e:{c.instructions+=2;NFSU2_TR(0x4a937e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9384:{NFSU2_TR(0x4a9384);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a9388:L4a9388:{c.instructions+=3;NFSU2_TR(0x4a9388);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a938b:{NFSU2_TR(0x4a938b);
w4(R+4,u32(0x83a9e0ull));
}
B4a9390:{NFSU2_TR(0x4a9390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9395ull));
TAIL_STATIC(0x502fd0u,502);
}
B4a9395:L4a9395:{c.instructions+=4;NFSU2_TR(0x4a9395);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9396:{NFSU2_TR(0x4a9396);
u8 U[4];
w4(U+0,u32(0x78f844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a939b:{NFSU2_TR(0x4a939b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a939c:{NFSU2_TR(0x4a939c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a93a1ull));
TAIL_STATIC(0x542600u,542);
}
B4a93a1:L4a93a1:{c.instructions+=6;NFSU2_TR(0x4a93a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a93a7:{NFSU2_TR(0x4a93a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a93aa:{NFSU2_TR(0x4a93aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a93ad:{NFSU2_TR(0x4a93ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a93ae:{NFSU2_TR(0x4a93ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a93af:{NFSU2_TR(0x4a93af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a93b4ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4a93b4:L4a93b4:{c.instructions+=4;NFSU2_TR(0x4a93b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a93b6:{NFSU2_TR(0x4a93b6);
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
B4a93b9:{NFSU2_TR(0x4a93b9);
__builtin_memmove((R+4),(R+24),4);
}
B4a93bb:{NFSU2_TR(0x4a93bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a93beull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a93be:L4a93be:{c.instructions+=2;NFSU2_TR(0x4a93be);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4a93c4:{NFSU2_TR(0x4a93c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a93c9ull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4a93c9:L4a93c9:{c.instructions+=6;NFSU2_TR(0x4a93c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a93cc:{NFSU2_TR(0x4a93cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a93cf:{NFSU2_TR(0x4a93cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a93d0:{NFSU2_TR(0x4a93d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a93d1:{NFSU2_TR(0x4a93d1);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4a93d7:{NFSU2_TR(0x4a93d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a93dcull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4a93dc:L4a93dc:{c.instructions+=3;NFSU2_TR(0x4a93dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a93dd:{NFSU2_TR(0x4a93dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a93de:{NFSU2_TR(0x4a93de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a93e0:L4a93e0:{c.instructions+=13;NFSU2_TR(0x4a93e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a93e4:{NFSU2_TR(0x4a93e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a93e8:{NFSU2_TR(0x4a93e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a93e9:{NFSU2_TR(0x4a93e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a93ea:{NFSU2_TR(0x4a93ea);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a93ee:{NFSU2_TR(0x4a93ee);
__builtin_memmove((R+24),(R+4),4);
}
B4a93f0:{NFSU2_TR(0x4a93f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a93f4:{NFSU2_TR(0x4a93f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a93f5:{NFSU2_TR(0x4a93f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a93f6:{NFSU2_TR(0x4a93f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a93f7:{NFSU2_TR(0x4a93f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a93f8:{NFSU2_TR(0x4a93f8);
__builtin_memmove((R+4),(R+24),4);
}
B4a93fa:{NFSU2_TR(0x4a93fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a93ffull));
TAIL_STATIC(0x543d40u,543);
}
B4a93ff:L4a93ff:{c.instructions+=2;NFSU2_TR(0x4a93ff);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x251bf83eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x251bf83eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x251bf83eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a9405:{NFSU2_TR(0x4a9405);
if(r1(R+518)){{goto L4a9427;}}
}
B4a9407:L4a9407:{c.instructions+=2;NFSU2_TR(0x4a9407);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x911ab364ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a940d:{NFSU2_TR(0x4a940d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a9443;}}
}
B4a940f:L4a940f:{c.instructions+=5;NFSU2_TR(0x4a940f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9412:{NFSU2_TR(0x4a9412);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9414:{NFSU2_TR(0x4a9414);
u8 U[4];
w4(U+0,u32(0x790924ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9419:{NFSU2_TR(0x4a9419);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a941a:{NFSU2_TR(0x4a941a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a941full));
TAIL_STATIC(0x537980u,537);
}
B4a941f:L4a941f:{c.instructions+=4;NFSU2_TR(0x4a941f);
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
B4a9422:{NFSU2_TR(0x4a9422);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a9423:{NFSU2_TR(0x4a9423);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9424:{NFSU2_TR(0x4a9424);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9427:L4a9427:{c.instructions+=3;NFSU2_TR(0x4a9427);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a942a:{NFSU2_TR(0x4a942a);
w4(R+4,u32(0x83a9e0ull));
}
B4a942f:{NFSU2_TR(0x4a942f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9434ull));
TAIL_STATIC(0x502fd0u,502);
}
B4a9434:L4a9434:{c.instructions+=4;NFSU2_TR(0x4a9434);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9435:{NFSU2_TR(0x4a9435);
u8 U[4];
w4(U+0,u32(0x78f844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a943a:{NFSU2_TR(0x4a943a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a943b:{NFSU2_TR(0x4a943b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9440ull));
TAIL_STATIC(0x542600u,542);
}
B4a9440:L4a9440:{c.instructions+=1;NFSU2_TR(0x4a9440);
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
B4a9443:L4a9443:{c.instructions+=3;NFSU2_TR(0x4a9443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a9444:{NFSU2_TR(0x4a9444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9445:{NFSU2_TR(0x4a9445);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9450:L4a9450:{c.instructions+=5;NFSU2_TR(0x4a9450);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B4a9455:{NFSU2_TR(0x4a9455);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a9457:{NFSU2_TR(0x4a9457);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9458:{NFSU2_TR(0x4a9458);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a945c:{NFSU2_TR(0x4a945c);
if(r1(R+518)){{goto L4a946b;}}
}
B4a945e:L4a945e:{c.instructions+=4;NFSU2_TR(0x4a945e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9460:{NFSU2_TR(0x4a9460);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9462:{NFSU2_TR(0x4a9462);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9463:{NFSU2_TR(0x4a9463);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9468ull));
TAIL_STATIC(0x57e410u,57e);
}
B4a9468:L4a9468:{c.instructions+=1;NFSU2_TR(0x4a9468);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a946b:L4a946b:{c.instructions+=3;NFSU2_TR(0x4a946b);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4a9470:{NFSU2_TR(0x4a9470);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a9472:{NFSU2_TR(0x4a9472);
if(r1(R+518)){{goto L4a9481;}}
}
B4a9474:L4a9474:{c.instructions+=4;NFSU2_TR(0x4a9474);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9476:{NFSU2_TR(0x4a9476);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9478:{NFSU2_TR(0x4a9478);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9479:{NFSU2_TR(0x4a9479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a947eull));
TAIL_STATIC(0x57d6a0u,57d);
}
B4a947e:L4a947e:{c.instructions+=1;NFSU2_TR(0x4a947e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a9481:L4a9481:{c.instructions+=5;NFSU2_TR(0x4a9481);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9484:{NFSU2_TR(0x4a9484);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9486:{NFSU2_TR(0x4a9486);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9488:{NFSU2_TR(0x4a9488);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9489:{NFSU2_TR(0x4a9489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a948eull));
TAIL_STATIC(0x57e480u,57e);
}
B4a948e:L4a948e:{c.instructions+=6;NFSU2_TR(0x4a948e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9490:{NFSU2_TR(0x4a9490);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9493:{NFSU2_TR(0x4a9493);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9496:{NFSU2_TR(0x4a9496);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9498:{NFSU2_TR(0x4a9498);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9499:{NFSU2_TR(0x4a9499);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a949eull));
TAIL_STATIC(0x57e480u,57e);
}
B4a949e:L4a949e:{c.instructions+=6;NFSU2_TR(0x4a949e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a94a0:{NFSU2_TR(0x4a94a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a94a3:{NFSU2_TR(0x4a94a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a94a6:{NFSU2_TR(0x4a94a6);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a94a8:{NFSU2_TR(0x4a94a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a94a9:{NFSU2_TR(0x4a94a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a94aeull));
TAIL_STATIC(0x57e480u,57e);
}
B4a94ae:L4a94ae:{c.instructions+=6;NFSU2_TR(0x4a94ae);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a94b0:{NFSU2_TR(0x4a94b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a94b3:{NFSU2_TR(0x4a94b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a94b6:{NFSU2_TR(0x4a94b6);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a94b8:{NFSU2_TR(0x4a94b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a94b9:{NFSU2_TR(0x4a94b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a94beull));
TAIL_STATIC(0x57e480u,57e);
}
B4a94be:L4a94be:{c.instructions+=6;NFSU2_TR(0x4a94be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a94c1:{NFSU2_TR(0x4a94c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4a94c5:{NFSU2_TR(0x4a94c5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a94c7:{NFSU2_TR(0x4a94c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a94c9:{NFSU2_TR(0x4a94c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a94ca:{NFSU2_TR(0x4a94ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a94cfull));
TAIL_STATIC(0x57e480u,57e);
}
B4a94cf:L4a94cf:{c.instructions+=8;NFSU2_TR(0x4a94cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a94d1:{NFSU2_TR(0x4a94d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B4a94d4:{NFSU2_TR(0x4a94d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a94d7:{NFSU2_TR(0x4a94d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4a94db:{NFSU2_TR(0x4a94db);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a94dd:{NFSU2_TR(0x4a94dd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a94df:{NFSU2_TR(0x4a94df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a94e0:{NFSU2_TR(0x4a94e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a94e5ull));
TAIL_STATIC(0x57e480u,57e);
}
B4a94e5:L4a94e5:{c.instructions+=6;NFSU2_TR(0x4a94e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B4a94e8:{NFSU2_TR(0x4a94e8);
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
B4a94ea:{NFSU2_TR(0x4a94ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4a94ed:{NFSU2_TR(0x4a94ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a94f0:{NFSU2_TR(0x4a94f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a94f1:{NFSU2_TR(0x4a94f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9500:L4a9500:{c.instructions+=6;NFSU2_TR(0x4a9500);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9501:{NFSU2_TR(0x4a9501);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a9505:{NFSU2_TR(0x4a9505);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a9507:{NFSU2_TR(0x4a9507);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9509:{NFSU2_TR(0x4a9509);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a950a:{NFSU2_TR(0x4a950a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a950full));
TAIL_STATIC(0x57e4d0u,57e);
}
B4a950f:L4a950f:{c.instructions+=5;NFSU2_TR(0x4a950f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9512:{NFSU2_TR(0x4a9512);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9514:{NFSU2_TR(0x4a9514);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9516:{NFSU2_TR(0x4a9516);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9517:{NFSU2_TR(0x4a9517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a951cull));
TAIL_STATIC(0x57e480u,57e);
}
B4a951c:L4a951c:{c.instructions+=6;NFSU2_TR(0x4a951c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a951e:{NFSU2_TR(0x4a951e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9521:{NFSU2_TR(0x4a9521);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9524:{NFSU2_TR(0x4a9524);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9526:{NFSU2_TR(0x4a9526);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9527:{NFSU2_TR(0x4a9527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a952cull));
TAIL_STATIC(0x57e480u,57e);
}
B4a952c:L4a952c:{c.instructions+=6;NFSU2_TR(0x4a952c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a952e:{NFSU2_TR(0x4a952e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9531:{NFSU2_TR(0x4a9531);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a9534:{NFSU2_TR(0x4a9534);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9536:{NFSU2_TR(0x4a9536);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9537:{NFSU2_TR(0x4a9537);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a953cull));
TAIL_STATIC(0x57e480u,57e);
}
B4a953c:L4a953c:{c.instructions+=6;NFSU2_TR(0x4a953c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a953e:{NFSU2_TR(0x4a953e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9541:{NFSU2_TR(0x4a9541);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9544:{NFSU2_TR(0x4a9544);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9546:{NFSU2_TR(0x4a9546);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9547:{NFSU2_TR(0x4a9547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a954cull));
TAIL_STATIC(0x57e480u,57e);
}
B4a954c:L4a954c:{c.instructions+=6;NFSU2_TR(0x4a954c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a954e:{NFSU2_TR(0x4a954e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9551:{NFSU2_TR(0x4a9551);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9554:{NFSU2_TR(0x4a9554);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9556:{NFSU2_TR(0x4a9556);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9557:{NFSU2_TR(0x4a9557);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a955cull));
TAIL_STATIC(0x57e480u,57e);
}
B4a955c:L4a955c:{c.instructions+=7;NFSU2_TR(0x4a955c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B4a955f:{NFSU2_TR(0x4a955f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9561:{NFSU2_TR(0x4a9561);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9564:{NFSU2_TR(0x4a9564);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a9567:{NFSU2_TR(0x4a9567);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9569:{NFSU2_TR(0x4a9569);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a956a:{NFSU2_TR(0x4a956a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a956full));
TAIL_STATIC(0x57e480u,57e);
}
B4a956f:L4a956f:{c.instructions+=5;NFSU2_TR(0x4a956f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9572:{NFSU2_TR(0x4a9572);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4a9575:{NFSU2_TR(0x4a9575);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9577:{NFSU2_TR(0x4a9577);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9578:{NFSU2_TR(0x4a9578);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a957dull));
TAIL_STATIC(0x57e4d0u,57e);
}
B4a957d:L4a957d:{c.instructions+=4;NFSU2_TR(0x4a957d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a957f:{NFSU2_TR(0x4a957f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1eull))));
}
B4a9582:{NFSU2_TR(0x4a9582);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9583:{NFSU2_TR(0x4a9583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9588ull));
TAIL_STATIC(0x57e4d0u,57e);
}
B4a9588:L4a9588:{c.instructions+=3;NFSU2_TR(0x4a9588);
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
B4a958b:{NFSU2_TR(0x4a958b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a958c:{NFSU2_TR(0x4a958c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9590:L4a9590:{c.instructions+=3;NFSU2_TR(0x4a9590);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a9595:{NFSU2_TR(0x4a9595);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a9597:{NFSU2_TR(0x4a9597);
if(r1(R+518)){{goto L4a95ab;}}
}
B4a9599:L4a9599:{c.instructions+=3;NFSU2_TR(0x4a9599);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4a959d:{NFSU2_TR(0x4a959d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B4a95a0:{NFSU2_TR(0x4a95a0);
if(r1(R+518)){{goto L4a95a8;}}
}
B4a95a2:L4a95a2:{c.instructions+=2;NFSU2_TR(0x4a95a2);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0xbull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0xbull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0xbull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B4a95a6:{NFSU2_TR(0x4a95a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a95ab;}}
}
B4a95a8:L4a95a8:{c.instructions+=2;NFSU2_TR(0x4a95a8);
w1(R+0,u8(0x1ull));
}
B4a95aa:{NFSU2_TR(0x4a95aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a95ab:L4a95ab:{c.instructions+=2;NFSU2_TR(0x4a95ab);
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
B4a95ad:{NFSU2_TR(0x4a95ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a95b0:L4a95b0:{c.instructions+=3;NFSU2_TR(0x4a95b0);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a95b5:{NFSU2_TR(0x4a95b5);
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
B4a95b7:{NFSU2_TR(0x4a95b7);
if(r1(R+518)){{goto L4a95e7;}}
}
B4a95b9:L4a95b9:{c.instructions+=11;NFSU2_TR(0x4a95b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a95bd:{NFSU2_TR(0x4a95bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a95c0:{NFSU2_TR(0x4a95c0);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4a95c6:{NFSU2_TR(0x4a95c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a95ca:{NFSU2_TR(0x4a95ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a95cd:{NFSU2_TR(0x4a95cd);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4a95d3:{NFSU2_TR(0x4a95d3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a95d7:{NFSU2_TR(0x4a95d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a95db:{NFSU2_TR(0x4a95db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a95de:{NFSU2_TR(0x4a95de);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4a95e4:{NFSU2_TR(0x4a95e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a95e7:L4a95e7:{c.instructions+=1;NFSU2_TR(0x4a95e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a95f0:L4a95f0:{c.instructions+=4;NFSU2_TR(0x4a95f0);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a95f5:{NFSU2_TR(0x4a95f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B4a95f8:{NFSU2_TR(0x4a95f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a95fa:{NFSU2_TR(0x4a95fa);
if(r1(R+518)){{goto L4a96e1;}}
}
B4a9600:L4a9600:{c.instructions+=4;NFSU2_TR(0x4a9600);
__builtin_memmove((R+0),(R+16),4);
}
B4a9604:{NFSU2_TR(0x4a9604);
u8 U[4];
w4(U+0,u32(0x790950ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9609:{NFSU2_TR(0x4a9609);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a960a:{NFSU2_TR(0x4a960a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a960full));
TAIL_STATIC(0x43dbd0u,43d);
}
B4a960f:L4a960f:{c.instructions+=4;NFSU2_TR(0x4a960f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9613:{NFSU2_TR(0x4a9613);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a9616:{NFSU2_TR(0x4a9616);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a9619:{NFSU2_TR(0x4a9619);
if(r1(R+518)){{goto L4a9654;}}
}
B4a961b:L4a961b:{c.instructions+=2;NFSU2_TR(0x4a961b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a961e:{NFSU2_TR(0x4a961e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a9625;}}
}
B4a9620:L4a9620:{c.instructions+=2;NFSU2_TR(0x4a9620);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xdull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a9623:{NFSU2_TR(0x4a9623);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a9654;}}
}
B4a9625:L4a9625:{c.instructions+=2;NFSU2_TR(0x4a9625);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9626:{NFSU2_TR(0x4a9626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a962bull));
TAIL_STATIC(0x4ff640u,4ff);
}
B4a962b:L4a962b:{c.instructions+=6;NFSU2_TR(0x4a962b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a962c:{NFSU2_TR(0x4a962c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a9630:{NFSU2_TR(0x4a9630);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9631:{NFSU2_TR(0x4a9631);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a9635:{NFSU2_TR(0x4a9635);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9636:{NFSU2_TR(0x4a9636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a963bull));
TAIL_STATIC(0x43dda0u,43d);
}
B4a963b:L4a963b:{c.instructions+=6;NFSU2_TR(0x4a963b);
u8 U[4];
w4(U+0,u32(0x790948ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9640:{NFSU2_TR(0x4a9640);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a9644:{NFSU2_TR(0x4a9644);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9645:{NFSU2_TR(0x4a9645);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a9649:{NFSU2_TR(0x4a9649);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a964a:{NFSU2_TR(0x4a964a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a964full));
TAIL_STATIC(0x43dda0u,43d);
}
B4a964f:L4a964f:{c.instructions+=2;NFSU2_TR(0x4a964f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4a9652:{NFSU2_TR(0x4a9652);
{goto L4a966b;}
}
B4a9654:L4a9654:{c.instructions+=6;NFSU2_TR(0x4a9654);
u8 U[4];
w4(U+0,u32(0x79093cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9659:{NFSU2_TR(0x4a9659);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a965d:{NFSU2_TR(0x4a965d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a965e:{NFSU2_TR(0x4a965e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a9662:{NFSU2_TR(0x4a9662);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9663:{NFSU2_TR(0x4a9663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9668ull));
TAIL_STATIC(0x43dda0u,43d);
}
B4a9668:L4a9668:{c.instructions+=1;NFSU2_TR(0x4a9668);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a966b:L4a966b:{c.instructions+=5;NFSU2_TR(0x4a966b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a966c:{NFSU2_TR(0x4a966c);
__builtin_memmove((R+24),gp(0x836498),4);
}
B4a9672:{NFSU2_TR(0x4a9672);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4a9675:{NFSU2_TR(0x4a9675);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9676:{NFSU2_TR(0x4a9676);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a9689;}}
}
B4a9678:L4a9678:{c.instructions+=3;NFSU2_TR(0x4a9678);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a967a:{NFSU2_TR(0x4a967a);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a967f:{NFSU2_TR(0x4a967f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9684ull));
TAIL_STATIC(0x440820u,440);
}
B4a9684:L4a9684:{c.instructions+=2;NFSU2_TR(0x4a9684);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a9687:{NFSU2_TR(0x4a9687);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4a9689:L4a9689:{c.instructions+=3;NFSU2_TR(0x4a9689);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a968d:{NFSU2_TR(0x4a968d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a968e:{NFSU2_TR(0x4a968e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9693ull));
TAIL_STATIC(0x57d900u,57d);
}
B4a9693:L4a9693:{c.instructions+=6;NFSU2_TR(0x4a9693);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9695:{NFSU2_TR(0x4a9695);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a9699:{NFSU2_TR(0x4a9699);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a969b:{NFSU2_TR(0x4a969b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a969c:{NFSU2_TR(0x4a969c);
__builtin_memmove((R+28),(R+0),4);
}
B4a969e:{NFSU2_TR(0x4a969e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a96a3ull));
TAIL_STATIC(0x57ca10u,57c);
}
B4a96a3:L4a96a3:{c.instructions+=7;NFSU2_TR(0x4a96a3);
__builtin_memmove((R+24),(R+0),4);
}
B4a96a5:{NFSU2_TR(0x4a96a5);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a96aa:{NFSU2_TR(0x4a96aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4a96ac:{NFSU2_TR(0x4a96ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a96ad:{NFSU2_TR(0x4a96ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a96ae:{NFSU2_TR(0x4a96ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a96af:{NFSU2_TR(0x4a96af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a96b4ull));
TAIL_STATIC(0x57d9b0u,57d);
}
B4a96b4:L4a96b4:{c.instructions+=2;NFSU2_TR(0x4a96b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a96b5:{NFSU2_TR(0x4a96b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a96baull));
TAIL_STATIC(0x579bf0u,579);
}
B4a96ba:L4a96ba:{c.instructions+=5;NFSU2_TR(0x4a96ba);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4a96c0:{NFSU2_TR(0x4a96c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a96c2:{NFSU2_TR(0x4a96c2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a96c4:{NFSU2_TR(0x4a96c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a96c5:{NFSU2_TR(0x4a96c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a96caull));
TAIL_STATIC(0x6fb12fu,6fb);
}
B4a96ca:L4a96ca:{c.instructions+=6;NFSU2_TR(0x4a96ca);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4a96d0:{NFSU2_TR(0x4a96d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a96d2:{NFSU2_TR(0x4a96d2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a96d4:{NFSU2_TR(0x4a96d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a96d6:{NFSU2_TR(0x4a96d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a96d7:{NFSU2_TR(0x4a96d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a96dcull));
TAIL_STATIC(0x6fb049u,6fb);
}
B4a96dc:L4a96dc:{c.instructions+=3;NFSU2_TR(0x4a96dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B4a96df:{NFSU2_TR(0x4a96df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a96e0:{NFSU2_TR(0x4a96e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a96e1:L4a96e1:{c.instructions+=2;NFSU2_TR(0x4a96e1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a96e4:{NFSU2_TR(0x4a96e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a96f0:L4a96f0:{c.instructions+=6;NFSU2_TR(0x4a96f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a96f4:{NFSU2_TR(0x4a96f4);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4a96fa:{NFSU2_TR(0x4a96fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a96fc:{NFSU2_TR(0x4a96fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a96fd:{NFSU2_TR(0x4a96fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a96fe:{NFSU2_TR(0x4a96fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9703ull));
TAIL_STATIC(0x6fb09fu,6fb);
}
B4a9703:L4a9703:{c.instructions+=2;NFSU2_TR(0x4a9703);
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
B4a9706:{NFSU2_TR(0x4a9706);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9710:L4a9710:{c.instructions+=9;NFSU2_TR(0x4a9710);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a9712:{NFSU2_TR(0x4a9712);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9715:{NFSU2_TR(0x4a9715);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a9718:{NFSU2_TR(0x4a9718);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a971b:{NFSU2_TR(0x4a971b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a9722:{NFSU2_TR(0x4a9722);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4a9726:{NFSU2_TR(0x4a9726);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a9729:{NFSU2_TR(0x4a9729);
u8 U[14];
__builtin_memmove((U+6),gp(0x8650d0),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a972f:{NFSU2_TR(0x4a972f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a9741;}}
}
B4a9731:L4a9731:{c.instructions+=3;NFSU2_TR(0x4a9731);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9734:{NFSU2_TR(0x4a9734);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a973c:{NFSU2_TR(0x4a973c);
TAIL_STATIC(0x6fbfabu,6fb);
}
B4a9741:L4a9741:{c.instructions+=1;NFSU2_TR(0x4a9741);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9750:L4a9750:{c.instructions+=6;NFSU2_TR(0x4a9750);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9751:{NFSU2_TR(0x4a9751);
__builtin_memmove((R+24),(R+4),4);
}
B4a9753:{NFSU2_TR(0x4a9753);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9754:{NFSU2_TR(0x4a9754);
w4(R+4,u32(0x83a9e0ull));
}
B4a9759:{NFSU2_TR(0x4a9759);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a975c:{NFSU2_TR(0x4a975c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9761ull));
TAIL_STATIC(0x502fd0u,502);
}
B4a9761:L4a9761:{c.instructions+=3;NFSU2_TR(0x4a9761);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9762:{NFSU2_TR(0x4a9762);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9763:{NFSU2_TR(0x4a9763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9768ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4a9768:L4a9768:{c.instructions+=2;NFSU2_TR(0x4a9768);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9769:{NFSU2_TR(0x4a9769);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a976eull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4a976e:L4a976e:{c.instructions+=7;NFSU2_TR(0x4a976e);
u8 U[13];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x20ull));
s1(u32(r4(U+8)),r1(U+12));
}
B4a9773:{NFSU2_TR(0x4a9773);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9776:{NFSU2_TR(0x4a9776);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9778:{NFSU2_TR(0x4a9778);
u8 U[12];
w4(U+0,u32(u32(u32(0x31ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4a977c:{NFSU2_TR(0x4a977c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a977d:{NFSU2_TR(0x4a977d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a977e:{NFSU2_TR(0x4a977e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9783ull));
TAIL_STATIC(0x523cb0u,523);
}
B4a9783:L4a9783:{c.instructions+=4;NFSU2_TR(0x4a9783);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9785:{NFSU2_TR(0x4a9785);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9786:{NFSU2_TR(0x4a9786);
u8 U[4];
w4(U+0,u32(0x835bb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a978b:{NFSU2_TR(0x4a978b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9790ull));
TAIL_STATIC(0x43e030u,43e);
}
B4a9790:L4a9790:{c.instructions+=11;NFSU2_TR(0x4a9790);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a9792:{NFSU2_TR(0x4a9792);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9795:{NFSU2_TR(0x4a9795);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a9798:{NFSU2_TR(0x4a9798);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a979b:{NFSU2_TR(0x4a979b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a97a2:{NFSU2_TR(0x4a97a2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4a97a6:{NFSU2_TR(0x4a97a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a97a9:{NFSU2_TR(0x4a97a9);
__builtin_memmove((R+4),gp(0x8650d0),4);
}
B4a97af:{NFSU2_TR(0x4a97af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4a97b2:{NFSU2_TR(0x4a97b2);
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
B4a97b4:{NFSU2_TR(0x4a97b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a97c8;}}
}
B4a97b6:L4a97b6:{c.instructions+=8;NFSU2_TR(0x4a97b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a97b9:{NFSU2_TR(0x4a97b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a97ba:{NFSU2_TR(0x4a97ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a97bb:{NFSU2_TR(0x4a97bb);
u8 U[4];
w4(U+0,u32(0x835bb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a97c0:{NFSU2_TR(0x4a97c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a97c1:{NFSU2_TR(0x4a97c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a97c2:{NFSU2_TR(0x4a97c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a97c3:{NFSU2_TR(0x4a97c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a97c8ull));
TAIL_STATIC(0x6fbf1eu,6fb);
}
B4a97c8:L4a97c8:{c.instructions+=3;NFSU2_TR(0x4a97c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a97c9:{NFSU2_TR(0x4a97c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a97ca:{NFSU2_TR(0x4a97ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a97d0:L4a97d0:{c.instructions+=3;NFSU2_TR(0x4a97d0);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4a97d5:{NFSU2_TR(0x4a97d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a97d7:{NFSU2_TR(0x4a97d7);
if(r1(R+518)){{goto L4a97e7;}}
}
B4a97d9:L4a97d9:{c.instructions+=4;NFSU2_TR(0x4a97d9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a97db:{NFSU2_TR(0x4a97db);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a97dd:{NFSU2_TR(0x4a97dd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a97df:{NFSU2_TR(0x4a97df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a97e4ull));
TAIL_STATIC(0x57d670u,57d);
}
B4a97e4:L4a97e4:{c.instructions+=1;NFSU2_TR(0x4a97e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a97e7:L4a97e7:{c.instructions+=4;NFSU2_TR(0x4a97e7);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4a97ed:{NFSU2_TR(0x4a97ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a97f0:{NFSU2_TR(0x4a97f0);
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
B4a97f3:{NFSU2_TR(0x4a97f3);
if(r1(R+518)){{goto L4a980d;}}
}
B4a97f5:L4a97f5:{c.instructions+=2;NFSU2_TR(0x4a97f5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a97f8:{NFSU2_TR(0x4a97f8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a97ff;}}
}
B4a97fa:L4a97fa:{c.instructions+=2;NFSU2_TR(0x4a97fa);
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
B4a97fd:{NFSU2_TR(0x4a97fd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a980d;}}
}
B4a97ff:L4a97ff:{c.instructions+=3;NFSU2_TR(0x4a97ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9802:{NFSU2_TR(0x4a9802);
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
B4a9804:{NFSU2_TR(0x4a9804);
if(r1(R+518)){{goto L4a980d;}}
}
B4a9806:L4a9806:{c.instructions+=2;NFSU2_TR(0x4a9806);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9808:{NFSU2_TR(0x4a9808);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a980dull));
TAIL_STATIC(0x4a37c0u,4a3);
}
B4a980d:L4a980d:{c.instructions+=1;NFSU2_TR(0x4a980d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9810:L4a9810:{c.instructions+=3;NFSU2_TR(0x4a9810);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4a9815:{NFSU2_TR(0x4a9815);
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
B4a9817:{NFSU2_TR(0x4a9817);
if(r1(R+518)){{goto L4a9827;}}
}
B4a9819:L4a9819:{c.instructions+=4;NFSU2_TR(0x4a9819);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a981b:{NFSU2_TR(0x4a981b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a981d:{NFSU2_TR(0x4a981d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a981f:{NFSU2_TR(0x4a981f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9824ull));
TAIL_STATIC(0x57d670u,57d);
}
B4a9824:L4a9824:{c.instructions+=1;NFSU2_TR(0x4a9824);
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
B4a9827:L4a9827:{c.instructions+=1;NFSU2_TR(0x4a9827);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9830:L4a9830:{c.instructions+=3;NFSU2_TR(0x4a9830);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4a9835:{NFSU2_TR(0x4a9835);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a9837:{NFSU2_TR(0x4a9837);
if(r1(R+518)){{goto L4a9847;}}
}
B4a9839:L4a9839:{c.instructions+=4;NFSU2_TR(0x4a9839);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a983b:{NFSU2_TR(0x4a983b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a983d:{NFSU2_TR(0x4a983d);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a983f:{NFSU2_TR(0x4a983f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9844ull));
TAIL_STATIC(0x57d670u,57d);
}
B4a9844:L4a9844:{c.instructions+=1;NFSU2_TR(0x4a9844);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a9847:L4a9847:{c.instructions+=2;NFSU2_TR(0x4a9847);
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
B4a9849:{NFSU2_TR(0x4a9849);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9850:L4a9850:{c.instructions+=3;NFSU2_TR(0x4a9850);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4a9855:{NFSU2_TR(0x4a9855);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a9857:{NFSU2_TR(0x4a9857);
if(r1(R+518)){{goto L4a9867;}}
}
B4a9859:L4a9859:{c.instructions+=4;NFSU2_TR(0x4a9859);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a985b:{NFSU2_TR(0x4a985b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a985d:{NFSU2_TR(0x4a985d);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a985f:{NFSU2_TR(0x4a985f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9864ull));
TAIL_STATIC(0x57d670u,57d);
}
B4a9864:L4a9864:{c.instructions+=1;NFSU2_TR(0x4a9864);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a9867:L4a9867:{c.instructions+=5;NFSU2_TR(0x4a9867);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a986b:{NFSU2_TR(0x4a986b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a986c:{NFSU2_TR(0x4a986c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a986e:{NFSU2_TR(0x4a986e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a986f:{NFSU2_TR(0x4a986f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9874ull));
TAIL_STATIC(0x57e4d0u,57e);
}
B4a9874:L4a9874:{c.instructions+=6;NFSU2_TR(0x4a9874);
__builtin_memmove((R+4),gp(0x8650d0),4);
}
B4a987a:{NFSU2_TR(0x4a987a);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a987f:{NFSU2_TR(0x4a987f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a9882:{NFSU2_TR(0x4a9882);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a9884:{NFSU2_TR(0x4a9884);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9887:{NFSU2_TR(0x4a9887);
if(r1(R+518)){{goto L4a989b;}}
}
B4a9889:L4a9889:{c.instructions+=4;NFSU2_TR(0x4a9889);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a988b:{NFSU2_TR(0x4a988b);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a988d:{NFSU2_TR(0x4a988d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a988e:{NFSU2_TR(0x4a988e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9893ull));
TAIL_STATIC(0x57e410u,57e);
}
B4a9893:L4a9893:{c.instructions+=2;NFSU2_TR(0x4a9893);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a9898:{NFSU2_TR(0x4a9898);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a989b:L4a989b:{c.instructions+=3;NFSU2_TR(0x4a989b);
__builtin_memmove((R+4),gp(0x8650d4),4);
}
B4a98a1:{NFSU2_TR(0x4a98a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a98a3:{NFSU2_TR(0x4a98a3);
if(r1(R+518)){{goto L4a98b7;}}
}
B4a98a5:L4a98a5:{c.instructions+=4;NFSU2_TR(0x4a98a5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a98a7:{NFSU2_TR(0x4a98a7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a98a9:{NFSU2_TR(0x4a98a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a98aa:{NFSU2_TR(0x4a98aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a98afull));
TAIL_STATIC(0x57d6a0u,57d);
}
B4a98af:L4a98af:{c.instructions+=2;NFSU2_TR(0x4a98af);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a98b4:{NFSU2_TR(0x4a98b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a98b7:L4a98b7:{c.instructions+=6;NFSU2_TR(0x4a98b7);
__builtin_memmove((R+4),gp(0x8650d0),4);
}
B4a98bd:{NFSU2_TR(0x4a98bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a98bf:{NFSU2_TR(0x4a98bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a98c2:{NFSU2_TR(0x4a98c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a98c3:{NFSU2_TR(0x4a98c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a98c6:{NFSU2_TR(0x4a98c6);
if(r1(R+518)){{goto L4a98d9;}}
}
B4a98c8:L4a98c8:{c.instructions+=4;NFSU2_TR(0x4a98c8);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a98ca:{NFSU2_TR(0x4a98ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a98cb:{NFSU2_TR(0x4a98cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a98cc:{NFSU2_TR(0x4a98cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a98d1ull));
TAIL_STATIC(0x57e410u,57e);
}
B4a98d1:L4a98d1:{c.instructions+=2;NFSU2_TR(0x4a98d1);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a98d6:{NFSU2_TR(0x4a98d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a98d9:L4a98d9:{c.instructions+=3;NFSU2_TR(0x4a98d9);
__builtin_memmove((R+4),gp(0x8650d4),4);
}
B4a98df:{NFSU2_TR(0x4a98df);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a98e1:{NFSU2_TR(0x4a98e1);
if(r1(R+518)){{goto L4a98f4;}}
}
B4a98e3:L4a98e3:{c.instructions+=4;NFSU2_TR(0x4a98e3);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a98e5:{NFSU2_TR(0x4a98e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a98e6:{NFSU2_TR(0x4a98e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a98e7:{NFSU2_TR(0x4a98e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a98ecull));
TAIL_STATIC(0x57d6a0u,57d);
}
B4a98ec:L4a98ec:{c.instructions+=2;NFSU2_TR(0x4a98ec);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a98f1:{NFSU2_TR(0x4a98f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a98f4:L4a98f4:{c.instructions+=8;NFSU2_TR(0x4a98f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a98f7:{NFSU2_TR(0x4a98f7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a98fd:{NFSU2_TR(0x4a98fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a9900:{NFSU2_TR(0x4a9900);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a9907:{NFSU2_TR(0x4a9907);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a990c:{NFSU2_TR(0x4a990c);
w4(R+24,u32(0xf35d144eull));
}
B4a9911:{NFSU2_TR(0x4a9911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a9912:{NFSU2_TR(0x4a9912);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a993b;}}
}
B4a9914:L4a9914:{c.instructions+=3;NFSU2_TR(0x4a9914);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9917:{NFSU2_TR(0x4a9917);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a9919:{NFSU2_TR(0x4a9919);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a993b;}}
}
B4a991b:L4a991b:{c.instructions+=4;NFSU2_TR(0x4a991b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a991e:{NFSU2_TR(0x4a991e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a9920:{NFSU2_TR(0x4a9920);
w4(R+24,u32(0x461a18eeull));
}
B4a9925:{NFSU2_TR(0x4a9925);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a993b;}}
}
B4a9927:L4a9927:{c.instructions+=5;NFSU2_TR(0x4a9927);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9928:{NFSU2_TR(0x4a9928);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a992b:{NFSU2_TR(0x4a992b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a992c:{NFSU2_TR(0x4a992c);
w4(R+4,u32(0x83a9d0ull));
}
B4a9931:{NFSU2_TR(0x4a9931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9936ull));
TAIL_STATIC(0x534770u,534);
}
B4a9936:L4a9936:{c.instructions+=1;NFSU2_TR(0x4a9936);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a993b:L4a993b:{c.instructions+=3;NFSU2_TR(0x4a993b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a993e:{NFSU2_TR(0x4a993e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a9940:{NFSU2_TR(0x4a9940);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a9953;}}
}
B4a9942:L4a9942:{c.instructions+=3;NFSU2_TR(0x4a9942);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a9945:{NFSU2_TR(0x4a9945);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9946:{NFSU2_TR(0x4a9946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a994bull));
TAIL_STATIC(0x440540u,440);
}
B4a994b:L4a994b:{c.instructions+=2;NFSU2_TR(0x4a994b);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a9950:{NFSU2_TR(0x4a9950);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a9953:L4a9953:{c.instructions+=5;NFSU2_TR(0x4a9953);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9956:{NFSU2_TR(0x4a9956);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9959:{NFSU2_TR(0x4a9959);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a995a:{NFSU2_TR(0x4a995a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a995b:{NFSU2_TR(0x4a995b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9960ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a9960:L4a9960:{c.instructions+=5;NFSU2_TR(0x4a9960);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4a9966:{NFSU2_TR(0x4a9966);
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
B4a9969:{NFSU2_TR(0x4a9969);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a9970:{NFSU2_TR(0x4a9970);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9971:{NFSU2_TR(0x4a9971);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9980:L4a9980:{c.instructions+=3;NFSU2_TR(0x4a9980);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4a9985:{NFSU2_TR(0x4a9985);
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
B4a9987:{NFSU2_TR(0x4a9987);
if(r1(R+518)){{goto L4a9997;}}
}
B4a9989:L4a9989:{c.instructions+=4;NFSU2_TR(0x4a9989);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a998b:{NFSU2_TR(0x4a998b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a998d:{NFSU2_TR(0x4a998d);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a998f:{NFSU2_TR(0x4a998f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9994ull));
TAIL_STATIC(0x57d670u,57d);
}
B4a9994:L4a9994:{c.instructions+=1;NFSU2_TR(0x4a9994);
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
B4a9997:L4a9997:{c.instructions+=1;NFSU2_TR(0x4a9997);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a99a0:L4a99a0:{c.instructions+=3;NFSU2_TR(0x4a99a0);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4a99a5:{NFSU2_TR(0x4a99a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a99a7:{NFSU2_TR(0x4a99a7);
if(r1(R+518)){{goto L4a99b7;}}
}
B4a99a9:L4a99a9:{c.instructions+=4;NFSU2_TR(0x4a99a9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a99ab:{NFSU2_TR(0x4a99ab);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a99ad:{NFSU2_TR(0x4a99ad);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a99af:{NFSU2_TR(0x4a99af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a99b4ull));
TAIL_STATIC(0x57d670u,57d);
}
B4a99b4:L4a99b4:{c.instructions+=1;NFSU2_TR(0x4a99b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a99b7:L4a99b7:{c.instructions+=5;NFSU2_TR(0x4a99b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a99bb:{NFSU2_TR(0x4a99bb);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a99bd:{NFSU2_TR(0x4a99bd);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a99bf:{NFSU2_TR(0x4a99bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a99c0:{NFSU2_TR(0x4a99c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a99c5ull));
TAIL_STATIC(0x57e480u,57e);
}
B4a99c5:L4a99c5:{c.instructions+=8;NFSU2_TR(0x4a99c5);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4a99cb:{NFSU2_TR(0x4a99cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a99d2:{NFSU2_TR(0x4a99d2);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4a99d8:{NFSU2_TR(0x4a99d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a99db:{NFSU2_TR(0x4a99db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a99de:{NFSU2_TR(0x4a99de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a99df:{NFSU2_TR(0x4a99df);
u8 U[4];
w4(U+0,u32(0x5a051729ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a99e4:{NFSU2_TR(0x4a99e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a99e9ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a99e9:L4a99e9:{c.instructions+=2;NFSU2_TR(0x4a99e9);
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
B4a99ec:{NFSU2_TR(0x4a99ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a99f0:L4a99f0:{c.instructions+=3;NFSU2_TR(0x4a99f0);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4a99f5:{NFSU2_TR(0x4a99f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a99f7:{NFSU2_TR(0x4a99f7);
if(r1(R+518)){{goto L4a9a07;}}
}
B4a99f9:L4a99f9:{c.instructions+=4;NFSU2_TR(0x4a99f9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a99fb:{NFSU2_TR(0x4a99fb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a99fd:{NFSU2_TR(0x4a99fd);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a99ff:{NFSU2_TR(0x4a99ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9a04ull));
TAIL_STATIC(0x57d670u,57d);
}
B4a9a04:L4a9a04:{c.instructions+=1;NFSU2_TR(0x4a9a04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a9a07:L4a9a07:{c.instructions+=5;NFSU2_TR(0x4a9a07);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9a0b:{NFSU2_TR(0x4a9a0b);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9a0d:{NFSU2_TR(0x4a9a0d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9a0f:{NFSU2_TR(0x4a9a0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9a10:{NFSU2_TR(0x4a9a10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9a15ull));
TAIL_STATIC(0x57e480u,57e);
}
B4a9a15:L4a9a15:{c.instructions+=2;NFSU2_TR(0x4a9a15);
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
B4a9a18:{NFSU2_TR(0x4a9a18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9a20:L4a9a20:{c.instructions+=5;NFSU2_TR(0x4a9a20);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4a9a25:{NFSU2_TR(0x4a9a25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a9a27:{NFSU2_TR(0x4a9a27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9a28:{NFSU2_TR(0x4a9a28);
__builtin_memmove((R+24),(R+4),4);
}
B4a9a2a:{NFSU2_TR(0x4a9a2a);
if(r1(R+518)){{goto L4a9a3a;}}
}
B4a9a2c:L4a9a2c:{c.instructions+=4;NFSU2_TR(0x4a9a2c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9a2e:{NFSU2_TR(0x4a9a2e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9a30:{NFSU2_TR(0x4a9a30);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9a32:{NFSU2_TR(0x4a9a32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9a37ull));
TAIL_STATIC(0x57d670u,57d);
}
B4a9a37:L4a9a37:{c.instructions+=1;NFSU2_TR(0x4a9a37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a9a3a:L4a9a3a:{c.instructions+=6;NFSU2_TR(0x4a9a3a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9a3b:{NFSU2_TR(0x4a9a3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9a3c:{NFSU2_TR(0x4a9a3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a9a40:{NFSU2_TR(0x4a9a40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9a41:{NFSU2_TR(0x4a9a41);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a9a44:{NFSU2_TR(0x4a9a44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9a49ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a9450u);}goto L4a9450;}
}
B4a9a49:L4a9a49:{c.instructions+=5;NFSU2_TR(0x4a9a49);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a9a4e:{NFSU2_TR(0x4a9a4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a9a50:{NFSU2_TR(0x4a9a50);
w4(R+24,u32(0x8867412dull));
}
B4a9a55:{NFSU2_TR(0x4a9a55);
w4(R+12,u32(0x1ull));
}
B4a9a5a:{NFSU2_TR(0x4a9a5a);
if(r1(R+518)){{goto L4a9a6c;}}
}
B4a9a5c:L4a9a5c:{c.instructions+=4;NFSU2_TR(0x4a9a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9a5f:{NFSU2_TR(0x4a9a5f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9a60:{NFSU2_TR(0x4a9a60);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9a62:{NFSU2_TR(0x4a9a62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9a67ull));
TAIL_STATIC(0x6fbfccu,6fb);
}
B4a9a67:L4a9a67:{c.instructions+=1;NFSU2_TR(0x4a9a67);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a9a6c:L4a9a6c:{c.instructions+=3;NFSU2_TR(0x4a9a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9a6f:{NFSU2_TR(0x4a9a6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a9a71:{NFSU2_TR(0x4a9a71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a9ac0;}}
}
B4a9a73:L4a9a73:{c.instructions+=3;NFSU2_TR(0x4a9a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9a76:{NFSU2_TR(0x4a9a76);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a9a79:{NFSU2_TR(0x4a9a79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a9a8f;}}
}
B4a9a7b:L4a9a7b:{c.instructions+=4;NFSU2_TR(0x4a9a7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4a9a7e:{NFSU2_TR(0x4a9a7e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4a9a80:{NFSU2_TR(0x4a9a80);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4a9a82:{NFSU2_TR(0x4a9a82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a9afb;}}
}
B4a9a84:L4a9a84:{c.instructions+=3;NFSU2_TR(0x4a9a84);
w4(R+24,u32(0x3a2be557ull));
}
B4a9a89:{NFSU2_TR(0x4a9a89);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a9a8d:{NFSU2_TR(0x4a9a8d);
{goto L4a9af6;}
}
B4a9a8f:L4a9a8f:{c.instructions+=4;NFSU2_TR(0x4a9a8f);
__builtin_memmove((R+8),gp(0x836514),4);
}
B4a9a95:{NFSU2_TR(0x4a9a95);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xf0ull))));
}
B4a9a9b:{NFSU2_TR(0x4a9a9b);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xe0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4a9a9e:{NFSU2_TR(0x4a9a9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a9ab9;}}
}
B4a9aa0:L4a9aa0:{c.instructions+=8;NFSU2_TR(0x4a9aa0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4a9aa2:{NFSU2_TR(0x4a9aa2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a9aa5:{NFSU2_TR(0x4a9aa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B4a9aa8:{NFSU2_TR(0x4a9aa8);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4a9aa9:{NFSU2_TR(0x4a9aa9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x8f2252e7ull))));
}
B4a9aaf:{NFSU2_TR(0x4a9aaf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xa2000a44ull))));
}
B4a9ab5:{NFSU2_TR(0x4a9ab5);
__builtin_memmove((R+24),(R+8),4);
}
B4a9ab7:{NFSU2_TR(0x4a9ab7);
{goto L4a9afb;}
}
B4a9ab9:L4a9ab9:{c.instructions+=2;NFSU2_TR(0x4a9ab9);
w4(R+24,u32(0x461a18eeull));
}
B4a9abe:{NFSU2_TR(0x4a9abe);
{goto L4a9afb;}
}
B4a9ac0:L4a9ac0:{c.instructions+=4;NFSU2_TR(0x4a9ac0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a9ac3:{NFSU2_TR(0x4a9ac3);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a9ac8:{NFSU2_TR(0x4a9ac8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4a9acc:{NFSU2_TR(0x4a9acc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a9afb;}}
}
B4a9ace:L4a9ace:{c.instructions+=5;NFSU2_TR(0x4a9ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9ad1:{NFSU2_TR(0x4a9ad1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4a9ad3:{NFSU2_TR(0x4a9ad3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4a9ad4:{NFSU2_TR(0x4a9ad4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a9ad7:{NFSU2_TR(0x4a9ad7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4a9afb;}}
}
B4a9ad9:L4a9ad9:{c.instructions+=2;NFSU2_TR(0x4a9ad9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4a9b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4a9ae0:{NFSU2_TR(0x4a9ae0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4a9b34ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a9ae7:L4a9ae7:{c.instructions+=2;NFSU2_TR(0x4a9ae7);
w4(R+24,u32(0x8867412dull));
}
B4a9aec:{NFSU2_TR(0x4a9aec);
{goto L4a9af3;}
}
B4a9aee:L4a9aee:{c.instructions+=1;NFSU2_TR(0x4a9aee);
w4(R+24,u32(0x3aa9323aull));
}
B4a9af3:L4a9af3:{c.instructions+=1;NFSU2_TR(0x4a9af3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a9af6:L4a9af6:{c.instructions+=1;NFSU2_TR(0x4a9af6);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a9afb:L4a9afb:{c.instructions+=8;NFSU2_TR(0x4a9afb);
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
B4a9afd:{NFSU2_TR(0x4a9afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a9b04:{NFSU2_TR(0x4a9b04);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B4a9b08:{NFSU2_TR(0x4a9b08);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a9b0d:{NFSU2_TR(0x4a9b0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a9b0e:{NFSU2_TR(0x4a9b0e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4a9b12:{NFSU2_TR(0x4a9b12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a9b13:{NFSU2_TR(0x4a9b13);
if(r1(R+518)){{goto L4a9b2f;}}
}
B4a9b15:L4a9b15:{c.instructions+=4;NFSU2_TR(0x4a9b15);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4a9b1b:{NFSU2_TR(0x4a9b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9b1e:{NFSU2_TR(0x4a9b1e);
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
B4a9b20:{NFSU2_TR(0x4a9b20);
if(r1(R+518)){{goto L4a9b2f;}}
}
B4a9b22:L4a9b22:{c.instructions+=4;NFSU2_TR(0x4a9b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a9b25:{NFSU2_TR(0x4a9b25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9b26:{NFSU2_TR(0x4a9b26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9b27:{NFSU2_TR(0x4a9b27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9b2cull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a9b2c:L4a9b2c:{c.instructions+=1;NFSU2_TR(0x4a9b2c);
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
B4a9b2f:L4a9b2f:{c.instructions+=2;NFSU2_TR(0x4a9b2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9b30:{NFSU2_TR(0x4a9b30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9b50:L4a9b50:{c.instructions+=3;NFSU2_TR(0x4a9b50);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4a9b55:{NFSU2_TR(0x4a9b55);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a9b57:{NFSU2_TR(0x4a9b57);
if(r1(R+518)){{goto L4a9b67;}}
}
B4a9b59:L4a9b59:{c.instructions+=4;NFSU2_TR(0x4a9b59);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9b5b:{NFSU2_TR(0x4a9b5b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9b5d:{NFSU2_TR(0x4a9b5d);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9b5f:{NFSU2_TR(0x4a9b5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9b64ull));
TAIL_STATIC(0x57d670u,57d);
}
B4a9b64:L4a9b64:{c.instructions+=1;NFSU2_TR(0x4a9b64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a9b67:L4a9b67:{c.instructions+=6;NFSU2_TR(0x4a9b67);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a9b6c:{NFSU2_TR(0x4a9b6c);
w1(R+4,u8(0x1ull));
}
B4a9b6e:{NFSU2_TR(0x4a9b6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a9b71:{NFSU2_TR(0x4a9b71);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a9b76:{NFSU2_TR(0x4a9b76);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4a9b7a:{NFSU2_TR(0x4a9b7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a9b7f;}}
}
B4a9b7c:L4a9b7c:{c.instructions+=1;NFSU2_TR(0x4a9b7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a9b7f:L4a9b7f:{c.instructions+=1;NFSU2_TR(0x4a9b7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9b80:L4a9b80:{c.instructions+=3;NFSU2_TR(0x4a9b80);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4a9b85:{NFSU2_TR(0x4a9b85);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a9b87:{NFSU2_TR(0x4a9b87);
if(r1(R+518)){{goto L4a9b97;}}
}
B4a9b89:L4a9b89:{c.instructions+=4;NFSU2_TR(0x4a9b89);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9b8b:{NFSU2_TR(0x4a9b8b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9b8d:{NFSU2_TR(0x4a9b8d);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9b8f:{NFSU2_TR(0x4a9b8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9b94ull));
TAIL_STATIC(0x57d670u,57d);
}
B4a9b94:L4a9b94:{c.instructions+=1;NFSU2_TR(0x4a9b94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a9b97:L4a9b97:{c.instructions+=6;NFSU2_TR(0x4a9b97);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9b9b:{NFSU2_TR(0x4a9b9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9b9c:{NFSU2_TR(0x4a9b9c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9b9e:{NFSU2_TR(0x4a9b9e);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9ba0:{NFSU2_TR(0x4a9ba0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9ba1:{NFSU2_TR(0x4a9ba1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9ba6ull));
TAIL_STATIC(0x57e480u,57e);
}
B4a9ba6:L4a9ba6:{c.instructions+=6;NFSU2_TR(0x4a9ba6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9baa:{NFSU2_TR(0x4a9baa);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9bac:{NFSU2_TR(0x4a9bac);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9bae:{NFSU2_TR(0x4a9bae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9baf:{NFSU2_TR(0x4a9baf);
__builtin_memmove((R+24),(R+0),4);
}
B4a9bb1:{NFSU2_TR(0x4a9bb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9bb6ull));
TAIL_STATIC(0x57e480u,57e);
}
B4a9bb6:L4a9bb6:{c.instructions+=5;NFSU2_TR(0x4a9bb6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4a9bb9:{NFSU2_TR(0x4a9bb9);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4a9bbc:{NFSU2_TR(0x4a9bbc);
__builtin_memmove((R+4),(R+0),4);
}
B4a9bbe:{NFSU2_TR(0x4a9bbe);
w4(R+0,u32(0x1ull));
}
B4a9bc3:{NFSU2_TR(0x4a9bc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a9bea;}}
}
B4a9bc5:L4a9bc5:{c.instructions+=3;NFSU2_TR(0x4a9bc5);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4a9bcb:{NFSU2_TR(0x4a9bcb);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
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
B4a9bce:{NFSU2_TR(0x4a9bce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a9bea;}}
}
B4a9bd0:L4a9bd0:{c.instructions+=8;NFSU2_TR(0x4a9bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a9bd3:{NFSU2_TR(0x4a9bd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9bd7:{NFSU2_TR(0x4a9bd7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a9bd9:{NFSU2_TR(0x4a9bd9);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4a9bdf:{NFSU2_TR(0x4a9bdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a9be3:{NFSU2_TR(0x4a9be3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B4a9be6:{NFSU2_TR(0x4a9be6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4a9be8:{NFSU2_TR(0x4a9be8);
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
B4a9bea:L4a9bea:{c.instructions+=2;NFSU2_TR(0x4a9bea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9beb:{NFSU2_TR(0x4a9beb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9bf0:L4a9bf0:{c.instructions+=3;NFSU2_TR(0x4a9bf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9bf4:{NFSU2_TR(0x4a9bf4);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B4a9bf8:{NFSU2_TR(0x4a9bf8);
if(r1(R+518)){{goto L4a9c09;}}
}
B4a9bfa:L4a9bfa:{c.instructions+=1;NFSU2_TR(0x4a9bfa);
__builtin_memmove((R+12),(R+12),4);
}
B4a9c00:L4a9c00:{c.instructions+=3;NFSU2_TR(0x4a9c00);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B4a9c03:{NFSU2_TR(0x4a9c03);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B4a9c07:{NFSU2_TR(0x4a9c07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a9c00u);}goto L4a9c00;}}
}
B4a9c09:L4a9c09:{c.instructions+=4;NFSU2_TR(0x4a9c09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9c0a:{NFSU2_TR(0x4a9c0a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a9c0e:{NFSU2_TR(0x4a9c0e);
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
B4a9c10:{NFSU2_TR(0x4a9c10);
if(r1(R+518)){{goto L4a9c3e;}}
}
B4a9c12:L4a9c12:{c.instructions+=3;NFSU2_TR(0x4a9c12);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4a9c14:{NFSU2_TR(0x4a9c14);
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
B4a9c16:{NFSU2_TR(0x4a9c16);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4a9c3e;}}
}
B4a9c18:L4a9c18:{c.instructions+=2;NFSU2_TR(0x4a9c18);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a9c1c:{NFSU2_TR(0x4a9c1c);
__builtin_memmove((R+16),(R+16),4);
}
B4a9c20:L4a9c20:{c.instructions+=3;NFSU2_TR(0x4a9c20);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4a9c23:{NFSU2_TR(0x4a9c23);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B4a9c27:{NFSU2_TR(0x4a9c27);
if(r1(R+518)){{goto L4a9c39;}}
}
B4a9c29:L4a9c29:{c.instructions+=1;NFSU2_TR(0x4a9c29);
__builtin_memmove((R+16),(R+16),4);
}
B4a9c30:L4a9c30:{c.instructions+=3;NFSU2_TR(0x4a9c30);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B4a9c33:{NFSU2_TR(0x4a9c33);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B4a9c37:{NFSU2_TR(0x4a9c37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a9c30u);}goto L4a9c30;}}
}
B4a9c39:L4a9c39:{c.instructions+=3;NFSU2_TR(0x4a9c39);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4a9c3a:{NFSU2_TR(0x4a9c3a);
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
B4a9c3c:{NFSU2_TR(0x4a9c3c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a9c20u);}goto L4a9c20;}}
}
B4a9c3e:L4a9c3e:{c.instructions+=2;NFSU2_TR(0x4a9c3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9c3f:{NFSU2_TR(0x4a9c3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9c40:L4a9c40:{c.instructions+=9;NFSU2_TR(0x4a9c40);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x240ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x240ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x240ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a9c46:{NFSU2_TR(0x4a9c46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9c47:{NFSU2_TR(0x4a9c47);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a9c4b:{NFSU2_TR(0x4a9c4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9c4c:{NFSU2_TR(0x4a9c4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9c4e:{NFSU2_TR(0x4a9c4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9c50:{NFSU2_TR(0x4a9c50);
u8 U[4];
w4(U+0,u32(0x801cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9c55:{NFSU2_TR(0x4a9c55);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9c57:{NFSU2_TR(0x4a9c57);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832dc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9c5dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4a9c5d:L4a9c5d:{c.instructions+=5;NFSU2_TR(0x4a9c5d);
__builtin_memmove((R+24),gp(0x78312c),4);
}
B4a9c63:{NFSU2_TR(0x4a9c63);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9c65:{NFSU2_TR(0x4a9c65);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a9c69:{NFSU2_TR(0x4a9c69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9c6a:{NFSU2_TR(0x4a9c6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9c6cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4a9c6c:L4a9c6c:{c.instructions+=6;NFSU2_TR(0x4a9c6c);
u8 U[4];
w4(U+0,u32(0x790964ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9c71:{NFSU2_TR(0x4a9c71);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a9c75:{NFSU2_TR(0x4a9c75);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9c76:{NFSU2_TR(0x4a9c76);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a9c7a:{NFSU2_TR(0x4a9c7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9c7b:{NFSU2_TR(0x4a9c7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9c80ull));
TAIL_STATIC(0x43dda0u,43d);
}
B4a9c80:L4a9c80:{c.instructions+=7;NFSU2_TR(0x4a9c80);
__builtin_memmove((R+4),gp(0x7f66a0),4);
}
B4a9c86:{NFSU2_TR(0x4a9c86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9c87:{NFSU2_TR(0x4a9c87);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a9c8b:{NFSU2_TR(0x4a9c8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9c8c:{NFSU2_TR(0x4a9c8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a9c90:{NFSU2_TR(0x4a9c90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9c91:{NFSU2_TR(0x4a9c91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9c96ull));
TAIL_STATIC(0x43dda0u,43d);
}
B4a9c96:L4a9c96:{c.instructions+=5;NFSU2_TR(0x4a9c96);
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
B4a9c99:{NFSU2_TR(0x4a9c99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9c9b:{NFSU2_TR(0x4a9c9b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a9c9f:{NFSU2_TR(0x4a9c9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9ca0:{NFSU2_TR(0x4a9ca0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9ca2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4a9ca2:L4a9ca2:{c.instructions+=5;NFSU2_TR(0x4a9ca2);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a9ca7:{NFSU2_TR(0x4a9ca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9caa:{NFSU2_TR(0x4a9caa);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a9cae:{NFSU2_TR(0x4a9cae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9caf:{NFSU2_TR(0x4a9caf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9cb4ull));
TAIL_STATIC(0x6fc01eu,6fc);
}
B4a9cb4:L4a9cb4:{c.instructions+=6;NFSU2_TR(0x4a9cb4);
u8 U[4];
w4(U+0,u32(0x790960ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9cb9:{NFSU2_TR(0x4a9cb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a9cbd:{NFSU2_TR(0x4a9cbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9cbe:{NFSU2_TR(0x4a9cbe);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a9cc2:{NFSU2_TR(0x4a9cc2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9cc3:{NFSU2_TR(0x4a9cc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9cc8ull));
TAIL_STATIC(0x43dda0u,43d);
}
B4a9cc8:L4a9cc8:{c.instructions+=6;NFSU2_TR(0x4a9cc8);
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
B4a9ccb:{NFSU2_TR(0x4a9ccb);
u8 U[4];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a9cd2:{NFSU2_TR(0x4a9cd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9cd3:{NFSU2_TR(0x4a9cd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a9cd7:{NFSU2_TR(0x4a9cd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9cd8:{NFSU2_TR(0x4a9cd8);
u8 U[4];
__builtin_memmove((U+0),gp(0x783128),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9cdeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4a9cde:L4a9cde:{c.instructions+=3;NFSU2_TR(0x4a9cde);
__builtin_memmove((R+24),(R+0),4);
}
B4a9ce0:{NFSU2_TR(0x4a9ce0);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4a9ce3:{NFSU2_TR(0x4a9ce3);
if(r1(R+518)){{goto L4a9d34;}}
}
B4a9ce5:L4a9ce5:{c.instructions+=8;NFSU2_TR(0x4a9ce5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9ce6:{NFSU2_TR(0x4a9ce6);
__builtin_memmove((R+12),gp(0x783124),4);
}
B4a9cec:{NFSU2_TR(0x4a9cec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9ced:{NFSU2_TR(0x4a9ced);
u8 U[4];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a9cf4:{NFSU2_TR(0x4a9cf4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9cf5:{NFSU2_TR(0x4a9cf5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9cf6:{NFSU2_TR(0x4a9cf6);
w4(R+28,u32(0x1ull));
}
B4a9cfb:{NFSU2_TR(0x4a9cfb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9cfdull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4a9cfd:L4a9cfd:{c.instructions+=2;NFSU2_TR(0x4a9cfd);
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
B4a9cff:{NFSU2_TR(0x4a9cff);
if(r1(R+518)){{goto L4a9d21;}}
}
B4a9d01:L4a9d01:{c.instructions+=5;NFSU2_TR(0x4a9d01);
u8 U[4];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a9d08:{NFSU2_TR(0x4a9d08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9d09:{NFSU2_TR(0x4a9d09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9d0a:{NFSU2_TR(0x4a9d0a);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a9d0b:{NFSU2_TR(0x4a9d0b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9d0dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4a9d0d:L4a9d0d:{c.instructions+=2;NFSU2_TR(0x4a9d0d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a9d0f:{NFSU2_TR(0x4a9d0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a9d01u);}goto L4a9d01;}}
}
B4a9d11:L4a9d11:{c.instructions+=2;NFSU2_TR(0x4a9d11);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4a9d14:{NFSU2_TR(0x4a9d14);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4a9d21;}}
}
B4a9d16:L4a9d16:{c.instructions+=2;NFSU2_TR(0x4a9d16);
u8 U[8];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9d1d:{NFSU2_TR(0x4a9d1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a9d21:L4a9d21:{c.instructions+=2;NFSU2_TR(0x4a9d21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9d22:{NFSU2_TR(0x4a9d22);
u8 U[4];
__builtin_memmove((U+0),gp(0x783120),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9d28ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4a9d28:L4a9d28:{c.instructions+=5;NFSU2_TR(0x4a9d28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a9d29:{NFSU2_TR(0x4a9d29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a9d2a:{NFSU2_TR(0x4a9d2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9d2b:{NFSU2_TR(0x4a9d2b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x240ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x240ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x240ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a9d31:{NFSU2_TR(0x4a9d31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9d34:L4a9d34:{c.instructions+=5;NFSU2_TR(0x4a9d34);
u8 U[8];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a9d3b:{NFSU2_TR(0x4a9d3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a9d3f:{NFSU2_TR(0x4a9d3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9d40:{NFSU2_TR(0x4a9d40);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x240ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x240ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x240ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a9d46:{NFSU2_TR(0x4a9d46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9d50:L4a9d50:{c.instructions+=3;NFSU2_TR(0x4a9d50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9d54:{NFSU2_TR(0x4a9d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9d57:{NFSU2_TR(0x4a9d57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9d60:L4a9d60:{c.instructions+=5;NFSU2_TR(0x4a9d60);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9d64:{NFSU2_TR(0x4a9d64);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a9d68:{NFSU2_TR(0x4a9d68);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a9d6a:{NFSU2_TR(0x4a9d6a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a9d6d:{NFSU2_TR(0x4a9d6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a9d9f;}}
}
B4a9d6f:L4a9d6f:{c.instructions+=5;NFSU2_TR(0x4a9d6f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9d73:{NFSU2_TR(0x4a9d73);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a9d77:{NFSU2_TR(0x4a9d77);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a9d79:{NFSU2_TR(0x4a9d79);
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
B4a9d7c:{NFSU2_TR(0x4a9d7c);
if(r1(R+514)){{goto L4a9d9f;}}
}
B4a9d7e:L4a9d7e:{c.instructions+=10;NFSU2_TR(0x4a9d7e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9d82:{NFSU2_TR(0x4a9d82);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a9d86:{NFSU2_TR(0x4a9d86);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9d8a:{NFSU2_TR(0x4a9d8a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a9d8e:{NFSU2_TR(0x4a9d8e);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B4a9d90:{NFSU2_TR(0x4a9d90);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9d94:{NFSU2_TR(0x4a9d94);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a9d98:{NFSU2_TR(0x4a9d98);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B4a9d9a:{NFSU2_TR(0x4a9d9a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a9d9e:{NFSU2_TR(0x4a9d9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9d9f:L4a9d9f:{c.instructions+=5;NFSU2_TR(0x4a9d9f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9da3:{NFSU2_TR(0x4a9da3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a9da7:{NFSU2_TR(0x4a9da7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a9da9:{NFSU2_TR(0x4a9da9);
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
B4a9dac:{NFSU2_TR(0x4a9dac);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4a9dc2;}}
}
B4a9dae:L4a9dae:{c.instructions+=5;NFSU2_TR(0x4a9dae);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9db2:{NFSU2_TR(0x4a9db2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a9db6:{NFSU2_TR(0x4a9db6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a9db8:{NFSU2_TR(0x4a9db8);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a9dbb:{NFSU2_TR(0x4a9dbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a9dc2;}}
}
B4a9dbd:L4a9dbd:{c.instructions+=2;NFSU2_TR(0x4a9dbd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9dc1:{NFSU2_TR(0x4a9dc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9dc2:L4a9dc2:{c.instructions+=2;NFSU2_TR(0x4a9dc2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9dc6:{NFSU2_TR(0x4a9dc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9dd0:L4a9dd0:{c.instructions+=11;NFSU2_TR(0x4a9dd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9dd4:{NFSU2_TR(0x4a9dd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9dd8:{NFSU2_TR(0x4a9dd8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4a9ddb:{NFSU2_TR(0x4a9ddb);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B4a9ddd:{NFSU2_TR(0x4a9ddd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9de1:{NFSU2_TR(0x4a9de1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4a9de4:{NFSU2_TR(0x4a9de4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B4a9de6:{NFSU2_TR(0x4a9de6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9dea:{NFSU2_TR(0x4a9dea);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4a9ded:{NFSU2_TR(0x4a9ded);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a9def:{NFSU2_TR(0x4a9def);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9df0:L4a9df0:{c.instructions+=5;NFSU2_TR(0x4a9df0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9df1:{NFSU2_TR(0x4a9df1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a9df5:{NFSU2_TR(0x4a9df5);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9df8:{NFSU2_TR(0x4a9df8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9df9:{NFSU2_TR(0x4a9df9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9dfeull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a9dfe:L4a9dfe:{c.instructions+=4;NFSU2_TR(0x4a9dfe);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9e00:{NFSU2_TR(0x4a9e00);
__builtin_memmove((R+28),(R+0),4);
}
B4a9e02:{NFSU2_TR(0x4a9e02);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B4a9e05:{NFSU2_TR(0x4a9e05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9e0aull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a9e0a:L4a9e0a:{c.instructions+=4;NFSU2_TR(0x4a9e0a);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9e0d:{NFSU2_TR(0x4a9e0d);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B4a9e0f:{NFSU2_TR(0x4a9e0f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B4a9e12:{NFSU2_TR(0x4a9e12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9e17ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a9e17:L4a9e17:{c.instructions+=4;NFSU2_TR(0x4a9e17);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9e1a:{NFSU2_TR(0x4a9e1a);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B4a9e1c:{NFSU2_TR(0x4a9e1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B4a9e1f:{NFSU2_TR(0x4a9e1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9e24ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a9e24:L4a9e24:{c.instructions+=4;NFSU2_TR(0x4a9e24);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a9e26:{NFSU2_TR(0x4a9e26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a9e27:{NFSU2_TR(0x4a9e27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9e28:{NFSU2_TR(0x4a9e28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9e30:L4a9e30:{c.instructions+=5;NFSU2_TR(0x4a9e30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9e31:{NFSU2_TR(0x4a9e31);
__builtin_memmove((R+24),(R+4),4);
}
B4a9e33:{NFSU2_TR(0x4a9e33);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9e35:{NFSU2_TR(0x4a9e35);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9e36:{NFSU2_TR(0x4a9e36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9e3bull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a9e3b:L4a9e3b:{c.instructions+=4;NFSU2_TR(0x4a9e3b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9e3e:{NFSU2_TR(0x4a9e3e);
__builtin_memmove((R+28),(R+0),4);
}
B4a9e40:{NFSU2_TR(0x4a9e40);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B4a9e43:{NFSU2_TR(0x4a9e43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9e48ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a9e48:L4a9e48:{c.instructions+=4;NFSU2_TR(0x4a9e48);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9e4b:{NFSU2_TR(0x4a9e4b);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B4a9e4d:{NFSU2_TR(0x4a9e4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B4a9e50:{NFSU2_TR(0x4a9e50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9e55ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a9e55:L4a9e55:{c.instructions+=4;NFSU2_TR(0x4a9e55);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a9e58:{NFSU2_TR(0x4a9e58);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B4a9e5a:{NFSU2_TR(0x4a9e5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B4a9e5d:{NFSU2_TR(0x4a9e5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9e62ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a9e62:L4a9e62:{c.instructions+=4;NFSU2_TR(0x4a9e62);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a9e64:{NFSU2_TR(0x4a9e64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a9e65:{NFSU2_TR(0x4a9e65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9e66:{NFSU2_TR(0x4a9e66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9e70:L4a9e70:{c.instructions+=10;NFSU2_TR(0x4a9e70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9e71:{NFSU2_TR(0x4a9e71);
__builtin_memmove((R+24),(R+4),4);
}
B4a9e73:{NFSU2_TR(0x4a9e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9e76:{NFSU2_TR(0x4a9e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9e79:{NFSU2_TR(0x4a9e79);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4a9e7b:{NFSU2_TR(0x4a9e7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9e7e:{NFSU2_TR(0x4a9e7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9e7f:{NFSU2_TR(0x4a9e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B4a9e82:{NFSU2_TR(0x4a9e82);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4a9e84:{NFSU2_TR(0x4a9e84);
if(r1(R+518)){{goto L4a9ed2;}}
}
B4a9e86:L4a9e86:{c.instructions+=4;NFSU2_TR(0x4a9e86);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9e8a:{NFSU2_TR(0x4a9e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a9e90:{NFSU2_TR(0x4a9e90);
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
B4a9e92:{NFSU2_TR(0x4a9e92);
if(r1(R+518)){{goto L4a9ede;}}
}
B4a9e94:L4a9e94:{c.instructions+=2;NFSU2_TR(0x4a9e94);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4a9e97:{NFSU2_TR(0x4a9e97);
if(r1(R+518)){{goto L4a9ede;}}
}
B4a9e99:L4a9e99:{c.instructions+=2;NFSU2_TR(0x4a9e99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9e9a:{NFSU2_TR(0x4a9e9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9e9full));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a9e9f:L4a9e9f:{c.instructions+=5;NFSU2_TR(0x4a9e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9ea2:{NFSU2_TR(0x4a9ea2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9ea3:{NFSU2_TR(0x4a9ea3);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9ea8:{NFSU2_TR(0x4a9ea8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9ea9:{NFSU2_TR(0x4a9ea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9eaeull));
TAIL_STATIC(0x537be0u,537);
}
B4a9eae:L4a9eae:{c.instructions+=3;NFSU2_TR(0x4a9eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a9eb1:{NFSU2_TR(0x4a9eb1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9eb2:{NFSU2_TR(0x4a9eb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9eb7ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a9eb7:L4a9eb7:{c.instructions+=5;NFSU2_TR(0x4a9eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9eba:{NFSU2_TR(0x4a9eba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9ebc:{NFSU2_TR(0x4a9ebc);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9ec1:{NFSU2_TR(0x4a9ec1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9ec2:{NFSU2_TR(0x4a9ec2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9ec7ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4a9ec7:L4a9ec7:{c.instructions+=5;NFSU2_TR(0x4a9ec7);
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
B4a9eca:{NFSU2_TR(0x4a9eca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a9ecd:{NFSU2_TR(0x4a9ecd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a9ece:{NFSU2_TR(0x4a9ece);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9ecf:{NFSU2_TR(0x4a9ecf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9ed2:L4a9ed2:{c.instructions+=3;NFSU2_TR(0x4a9ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9ed5:{NFSU2_TR(0x4a9ed5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9ed6:{NFSU2_TR(0x4a9ed6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9edbull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a9edb:L4a9edb:{c.instructions+=1;NFSU2_TR(0x4a9edb);
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
B4a9ede:L4a9ede:{c.instructions+=3;NFSU2_TR(0x4a9ede);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a9edf:{NFSU2_TR(0x4a9edf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9ee0:{NFSU2_TR(0x4a9ee0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9ef0:L4a9ef0:{c.instructions+=10;NFSU2_TR(0x4a9ef0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9ef1:{NFSU2_TR(0x4a9ef1);
__builtin_memmove((R+24),(R+4),4);
}
B4a9ef3:{NFSU2_TR(0x4a9ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9ef6:{NFSU2_TR(0x4a9ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9ef9:{NFSU2_TR(0x4a9ef9);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4a9efb:{NFSU2_TR(0x4a9efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9efe:{NFSU2_TR(0x4a9efe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9eff:{NFSU2_TR(0x4a9eff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B4a9f02:{NFSU2_TR(0x4a9f02);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4a9f04:{NFSU2_TR(0x4a9f04);
if(r1(R+518)){{goto L4a9fb2;}}
}
B4a9f0a:L4a9f0a:{c.instructions+=2;NFSU2_TR(0x4a9f0a);
w4(R+4,u32(0x85b940ull));
}
B4a9f0f:{NFSU2_TR(0x4a9f0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9f14ull));
TAIL_STATIC(0x501680u,501);
}
B4a9f14:L4a9f14:{c.instructions+=2;NFSU2_TR(0x4a9f14);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a9f16:{NFSU2_TR(0x4a9f16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a9fb2;}}
}
B4a9f1c:L4a9f1c:{c.instructions+=3;NFSU2_TR(0x4a9f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9f1f:{NFSU2_TR(0x4a9f1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9f20:{NFSU2_TR(0x4a9f20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9f25ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a9f25:L4a9f25:{c.instructions+=3;NFSU2_TR(0x4a9f25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9f28:{NFSU2_TR(0x4a9f28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9f29:{NFSU2_TR(0x4a9f29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9f2eull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a9f2e:L4a9f2e:{c.instructions+=3;NFSU2_TR(0x4a9f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a9f31:{NFSU2_TR(0x4a9f31);
u8 U[4];
w4(U+0,u32(0x790988ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9f36:{NFSU2_TR(0x4a9f36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9f3bull));
TAIL_STATIC(0x505450u,505);
}
B4a9f3b:L4a9f3b:{c.instructions+=3;NFSU2_TR(0x4a9f3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9f3c:{NFSU2_TR(0x4a9f3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9f3d:{NFSU2_TR(0x4a9f3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9f42ull));
TAIL_STATIC(0x537a10u,537);
}
B4a9f42:L4a9f42:{c.instructions+=2;NFSU2_TR(0x4a9f42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9f43:{NFSU2_TR(0x4a9f43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9f48ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a9f48:L4a9f48:{c.instructions+=5;NFSU2_TR(0x4a9f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9f4b:{NFSU2_TR(0x4a9f4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4a9f4e:{NFSU2_TR(0x4a9f4e);
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
B4a9f50:{NFSU2_TR(0x4a9f50);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a9f54:{NFSU2_TR(0x4a9f54);
if(r1(R+518)){{goto L4a9f91;}}
}
B4a9f56:L4a9f56:{c.instructions+=3;NFSU2_TR(0x4a9f56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9f57:{NFSU2_TR(0x4a9f57);
u8 U[4];
w4(U+0,u32(0x5d10f6afull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9f5c:{NFSU2_TR(0x4a9f5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9f61ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a9f61:L4a9f61:{c.instructions+=6;NFSU2_TR(0x4a9f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a9f64:{NFSU2_TR(0x4a9f64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a9f67:{NFSU2_TR(0x4a9f67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9f68:{NFSU2_TR(0x4a9f68);
u8 U[4];
w4(U+0,u32(0x790980ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9f6d:{NFSU2_TR(0x4a9f6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9f6e:{NFSU2_TR(0x4a9f6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9f73ull));
TAIL_STATIC(0x537be0u,537);
}
B4a9f73:L4a9f73:{c.instructions+=5;NFSU2_TR(0x4a9f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9f76:{NFSU2_TR(0x4a9f76);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9f78:{NFSU2_TR(0x4a9f78);
u8 U[4];
w4(U+0,u32(0x790970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9f7d:{NFSU2_TR(0x4a9f7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9f7e:{NFSU2_TR(0x4a9f7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9f83ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4a9f83:L4a9f83:{c.instructions+=3;NFSU2_TR(0x4a9f83);
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
B4a9f86:{NFSU2_TR(0x4a9f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a9f8d:{NFSU2_TR(0x4a9f8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a9f91:L4a9f91:{c.instructions+=2;NFSU2_TR(0x4a9f91);
w4(R+4,u32(0x861e74ull));
}
B4a9f96:{NFSU2_TR(0x4a9f96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9f9bull));
TAIL_STATIC(0x500f90u,500);
}
B4a9f9b:L4a9f9b:{c.instructions+=5;NFSU2_TR(0x4a9f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9f9e:{NFSU2_TR(0x4a9f9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9f9f:{NFSU2_TR(0x4a9f9f);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9fa4:{NFSU2_TR(0x4a9fa4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9fa5:{NFSU2_TR(0x4a9fa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9faaull));
TAIL_STATIC(0x537be0u,537);
}
B4a9faa:L4a9faa:{c.instructions+=4;NFSU2_TR(0x4a9faa);
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
B4a9fad:{NFSU2_TR(0x4a9fad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a9fae:{NFSU2_TR(0x4a9fae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9faf:{NFSU2_TR(0x4a9faf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9fb2:L4a9fb2:{c.instructions+=3;NFSU2_TR(0x4a9fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a9fb5:{NFSU2_TR(0x4a9fb5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9fb6:{NFSU2_TR(0x4a9fb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9fbbull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a9fbb:L4a9fbb:{c.instructions+=3;NFSU2_TR(0x4a9fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9fbe:{NFSU2_TR(0x4a9fbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9fbf:{NFSU2_TR(0x4a9fbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9fc4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a9fc4:L4a9fc4:{c.instructions+=3;NFSU2_TR(0x4a9fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a9fc7:{NFSU2_TR(0x4a9fc7);
u8 U[4];
w4(U+0,u32(0x790988ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9fcc:{NFSU2_TR(0x4a9fcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9fd1ull));
TAIL_STATIC(0x505450u,505);
}
B4a9fd1:L4a9fd1:{c.instructions+=3;NFSU2_TR(0x4a9fd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9fd2:{NFSU2_TR(0x4a9fd2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9fd3:{NFSU2_TR(0x4a9fd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9fd8ull));
TAIL_STATIC(0x537a10u,537);
}
B4a9fd8:L4a9fd8:{c.instructions+=2;NFSU2_TR(0x4a9fd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9fd9:{NFSU2_TR(0x4a9fd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a9fdeull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a9fde:L4a9fde:{c.instructions+=5;NFSU2_TR(0x4a9fde);
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
B4a9fe1:{NFSU2_TR(0x4a9fe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a9fe2:{NFSU2_TR(0x4a9fe2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a9fe6:{NFSU2_TR(0x4a9fe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a9fe7:{NFSU2_TR(0x4a9fe7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a9ff0:L4a9ff0:{c.instructions+=7;NFSU2_TR(0x4a9ff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a9ff1:{NFSU2_TR(0x4a9ff1);
__builtin_memmove((R+24),(R+4),4);
}
B4a9ff3:{NFSU2_TR(0x4a9ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a9ff6:{NFSU2_TR(0x4a9ff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a9ff9:{NFSU2_TR(0x4a9ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a9ffc:{NFSU2_TR(0x4a9ffc);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4a9ffe:{NFSU2_TR(0x4a9ffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x4aa001u,4aa);
}
XIT:NFSU2_TR_EXIT(0x4a9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
