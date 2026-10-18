#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43a(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_49d(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_589(u8* __restrict R,Cpu& c);
u32 body_58c(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5f9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5f9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 page_5f9(Cpu& c){return body_5f9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5f9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5f9002:goto L5f9002;
case 0x5f9010:goto L5f9010;
case 0x5f9015:c.instructions+=2;goto B5f9015;
case 0x5f9017:c.instructions+=1;goto B5f9017;
case 0x5f9019:goto L5f9019;
case 0x5f901e:c.instructions+=2;goto B5f901e;
case 0x5f9020:c.instructions+=1;goto B5f9020;
case 0x5f9022:goto L5f9022;
case 0x5f9027:c.instructions+=2;goto B5f9027;
case 0x5f9029:c.instructions+=1;goto B5f9029;
case 0x5f902b:goto L5f902b;
case 0x5f902f:c.instructions+=4;goto B5f902f;
case 0x5f9031:c.instructions+=3;goto B5f9031;
case 0x5f9039:c.instructions+=2;goto B5f9039;
case 0x5f903d:c.instructions+=1;goto B5f903d;
case 0x5f903f:goto L5f903f;
case 0x5f9040:c.instructions+=1;goto B5f9040;
case 0x5f9048:goto L5f9048;
case 0x5f9050:goto L5f9050;
case 0x5f9052:c.instructions+=21;goto B5f9052;
case 0x5f9057:c.instructions+=20;goto B5f9057;
case 0x5f905d:c.instructions+=19;goto B5f905d;
case 0x5f905e:c.instructions+=18;goto B5f905e;
case 0x5f9065:c.instructions+=17;goto B5f9065;
case 0x5f9066:c.instructions+=16;goto B5f9066;
case 0x5f9067:c.instructions+=15;goto B5f9067;
case 0x5f9069:c.instructions+=14;goto B5f9069;
case 0x5f906a:c.instructions+=13;goto B5f906a;
case 0x5f906c:c.instructions+=12;goto B5f906c;
case 0x5f906f:c.instructions+=11;goto B5f906f;
case 0x5f9072:c.instructions+=10;goto B5f9072;
case 0x5f9075:c.instructions+=9;goto B5f9075;
case 0x5f9078:c.instructions+=8;goto B5f9078;
case 0x5f907b:c.instructions+=7;goto B5f907b;
case 0x5f9081:c.instructions+=6;goto B5f9081;
case 0x5f9087:c.instructions+=5;goto B5f9087;
case 0x5f9088:c.instructions+=4;goto B5f9088;
case 0x5f908e:c.instructions+=3;goto B5f908e;
case 0x5f9090:c.instructions+=2;goto B5f9090;
case 0x5f9096:c.instructions+=1;goto B5f9096;
case 0x5f909b:goto L5f909b;
case 0x5f909d:goto L5f909d;
case 0x5f90a3:c.instructions+=1;goto B5f90a3;
case 0x5f90a8:goto L5f90a8;
case 0x5f90aa:goto L5f90aa;
case 0x5f90b0:c.instructions+=6;goto B5f90b0;
case 0x5f90b6:c.instructions+=5;goto B5f90b6;
case 0x5f90bc:c.instructions+=4;goto B5f90bc;
case 0x5f90c0:c.instructions+=3;goto B5f90c0;
case 0x5f90c6:c.instructions+=2;goto B5f90c6;
case 0x5f90cc:c.instructions+=1;goto B5f90cc;
case 0x5f90d1:goto L5f90d1;
case 0x5f90d7:c.instructions+=2;goto B5f90d7;
case 0x5f90db:c.instructions+=1;goto B5f90db;
case 0x5f90e0:goto L5f90e0;
case 0x5f90e6:c.instructions+=2;goto B5f90e6;
case 0x5f90eb:c.instructions+=1;goto B5f90eb;
case 0x5f90f0:goto L5f90f0;
case 0x5f90f6:c.instructions+=2;goto B5f90f6;
case 0x5f90fb:c.instructions+=1;goto B5f90fb;
case 0x5f9100:goto L5f9100;
case 0x5f9106:c.instructions+=2;goto B5f9106;
case 0x5f910b:c.instructions+=1;goto B5f910b;
case 0x5f9110:goto L5f9110;
case 0x5f9116:c.instructions+=2;goto B5f9116;
case 0x5f911b:c.instructions+=1;goto B5f911b;
case 0x5f9120:goto L5f9120;
case 0x5f9126:c.instructions+=2;goto B5f9126;
case 0x5f912b:c.instructions+=1;goto B5f912b;
case 0x5f9130:goto L5f9130;
case 0x5f9136:c.instructions+=2;goto B5f9136;
case 0x5f913b:c.instructions+=1;goto B5f913b;
case 0x5f9140:goto L5f9140;
case 0x5f9146:c.instructions+=2;goto B5f9146;
case 0x5f914b:c.instructions+=1;goto B5f914b;
case 0x5f9150:goto L5f9150;
case 0x5f9156:c.instructions+=2;goto B5f9156;
case 0x5f915b:c.instructions+=1;goto B5f915b;
case 0x5f9160:goto L5f9160;
case 0x5f9166:c.instructions+=2;goto B5f9166;
case 0x5f916b:c.instructions+=1;goto B5f916b;
case 0x5f9170:goto L5f9170;
case 0x5f9176:c.instructions+=2;goto B5f9176;
case 0x5f917b:c.instructions+=1;goto B5f917b;
case 0x5f9180:goto L5f9180;
case 0x5f9186:c.instructions+=2;goto B5f9186;
case 0x5f918b:c.instructions+=1;goto B5f918b;
case 0x5f9190:goto L5f9190;
case 0x5f9196:c.instructions+=2;goto B5f9196;
case 0x5f919b:c.instructions+=1;goto B5f919b;
case 0x5f91a0:goto L5f91a0;
case 0x5f91a5:c.instructions+=2;goto B5f91a5;
case 0x5f91ab:c.instructions+=1;goto B5f91ab;
case 0x5f91b0:goto L5f91b0;
case 0x5f91b6:c.instructions+=2;goto B5f91b6;
case 0x5f91bb:c.instructions+=1;goto B5f91bb;
case 0x5f91c0:goto L5f91c0;
case 0x5f91c6:c.instructions+=2;goto B5f91c6;
case 0x5f91cb:c.instructions+=1;goto B5f91cb;
case 0x5f91d0:goto L5f91d0;
case 0x5f91d6:c.instructions+=2;goto B5f91d6;
case 0x5f91db:c.instructions+=1;goto B5f91db;
case 0x5f91e0:goto L5f91e0;
case 0x5f91e2:c.instructions+=3;goto B5f91e2;
case 0x5f91e4:c.instructions+=2;goto B5f91e4;
case 0x5f91e9:c.instructions+=1;goto B5f91e9;
case 0x5f91ec:goto L5f91ec;
case 0x5f91ee:goto L5f91ee;
case 0x5f91f0:c.instructions+=2;goto B5f91f0;
case 0x5f91f5:c.instructions+=1;goto B5f91f5;
case 0x5f91fa:goto L5f91fa;
case 0x5f91fd:c.instructions+=12;goto B5f91fd;
case 0x5f9200:c.instructions+=11;goto B5f9200;
case 0x5f9203:c.instructions+=10;goto B5f9203;
case 0x5f9206:c.instructions+=9;goto B5f9206;
case 0x5f9209:c.instructions+=8;goto B5f9209;
case 0x5f920c:c.instructions+=7;goto B5f920c;
case 0x5f920f:c.instructions+=6;goto B5f920f;
case 0x5f9215:c.instructions+=5;goto B5f9215;
case 0x5f921b:c.instructions+=4;goto B5f921b;
case 0x5f921e:c.instructions+=3;goto B5f921e;
case 0x5f9220:c.instructions+=2;goto B5f9220;
case 0x5f9223:c.instructions+=1;goto B5f9223;
case 0x5f9228:goto L5f9228;
case 0x5f922a:goto L5f922a;
case 0x5f922d:c.instructions+=2;goto B5f922d;
case 0x5f9230:c.instructions+=1;goto B5f9230;
case 0x5f9235:goto L5f9235;
case 0x5f9237:goto L5f9237;
case 0x5f923b:c.instructions+=7;goto B5f923b;
case 0x5f923c:c.instructions+=6;goto B5f923c;
case 0x5f923e:c.instructions+=5;goto B5f923e;
case 0x5f923f:c.instructions+=4;goto B5f923f;
case 0x5f9240:c.instructions+=3;goto B5f9240;
case 0x5f9247:c.instructions+=2;goto B5f9247;
case 0x5f924a:c.instructions+=1;goto B5f924a;
case 0x5f9250:goto L5f9250;
case 0x5f9255:c.instructions+=5;goto B5f9255;
case 0x5f9257:c.instructions+=4;goto B5f9257;
case 0x5f9258:c.instructions+=3;goto B5f9258;
case 0x5f9259:c.instructions+=2;goto B5f9259;
case 0x5f925b:c.instructions+=1;goto B5f925b;
case 0x5f925d:goto L5f925d;
case 0x5f9262:goto L5f9262;
case 0x5f9265:c.instructions+=1;goto B5f9265;
case 0x5f9267:goto L5f9267;
case 0x5f926d:goto L5f926d;
case 0x5f9274:c.instructions+=2;goto B5f9274;
case 0x5f9279:c.instructions+=1;goto B5f9279;
case 0x5f927b:goto L5f927b;
case 0x5f9280:goto L5f9280;
case 0x5f9282:goto L5f9282;
case 0x5f9287:goto L5f9287;
case 0x5f928a:c.instructions+=4;goto B5f928a;
case 0x5f928e:c.instructions+=3;goto B5f928e;
case 0x5f928f:c.instructions+=2;goto B5f928f;
case 0x5f9294:c.instructions+=1;goto B5f9294;
case 0x5f9299:goto L5f9299;
case 0x5f929c:c.instructions+=3;goto B5f929c;
case 0x5f929e:c.instructions+=2;goto B5f929e;
case 0x5f92a1:c.instructions+=1;goto B5f92a1;
case 0x5f92a6:goto L5f92a6;
case 0x5f92a8:c.instructions+=1;goto B5f92a8;
case 0x5f92ad:goto L5f92ad;
case 0x5f92b3:c.instructions+=4;goto B5f92b3;
case 0x5f92b4:c.instructions+=3;goto B5f92b4;
case 0x5f92ba:c.instructions+=2;goto B5f92ba;
case 0x5f92bb:c.instructions+=1;goto B5f92bb;
case 0x5f92c0:goto L5f92c0;
case 0x5f92c3:c.instructions+=10;goto B5f92c3;
case 0x5f92c4:c.instructions+=9;goto B5f92c4;
case 0x5f92c5:c.instructions+=8;goto B5f92c5;
case 0x5f92c7:c.instructions+=7;goto B5f92c7;
case 0x5f92ca:c.instructions+=6;goto B5f92ca;
case 0x5f92cb:c.instructions+=5;goto B5f92cb;
case 0x5f92cc:c.instructions+=4;goto B5f92cc;
case 0x5f92ce:c.instructions+=3;goto B5f92ce;
case 0x5f92d0:c.instructions+=2;goto B5f92d0;
case 0x5f92d4:c.instructions+=1;goto B5f92d4;
case 0x5f92d6:goto L5f92d6;
case 0x5f92db:goto L5f92db;
case 0x5f92de:c.instructions+=2;goto B5f92de;
case 0x5f92e0:c.instructions+=1;goto B5f92e0;
case 0x5f92e2:goto L5f92e2;
case 0x5f92e3:goto L5f92e3;
case 0x5f92e6:c.instructions+=2;goto B5f92e6;
case 0x5f92e8:c.instructions+=1;goto B5f92e8;
case 0x5f92ea:goto L5f92ea;
case 0x5f92eb:goto L5f92eb;
case 0x5f92ee:c.instructions+=2;goto B5f92ee;
case 0x5f92f0:c.instructions+=1;goto B5f92f0;
case 0x5f92f2:goto L5f92f2;
case 0x5f92f3:goto L5f92f3;
case 0x5f92f6:c.instructions+=2;goto B5f92f6;
case 0x5f92f8:c.instructions+=1;goto B5f92f8;
case 0x5f92fa:goto L5f92fa;
case 0x5f92fb:goto L5f92fb;
case 0x5f92fe:c.instructions+=2;goto B5f92fe;
case 0x5f9300:c.instructions+=1;goto B5f9300;
case 0x5f9302:goto L5f9302;
case 0x5f9303:goto L5f9303;
case 0x5f9309:c.instructions+=3;goto B5f9309;
case 0x5f930b:c.instructions+=2;goto B5f930b;
case 0x5f9310:c.instructions+=1;goto B5f9310;
case 0x5f9312:goto L5f9312;
case 0x5f9317:c.instructions+=1;goto B5f9317;
case 0x5f9319:goto L5f9319;
case 0x5f931c:c.instructions+=1;goto B5f931c;
case 0x5f931e:goto L5f931e;
case 0x5f9325:c.instructions+=1;goto B5f9325;
case 0x5f9327:goto L5f9327;
case 0x5f9328:goto L5f9328;
case 0x5f932a:c.instructions+=2;goto B5f932a;
case 0x5f932c:c.instructions+=1;goto B5f932c;
case 0x5f932e:goto L5f932e;
case 0x5f9330:goto L5f9330;
case 0x5f9334:c.instructions+=3;goto B5f9334;
case 0x5f9335:c.instructions+=2;goto B5f9335;
case 0x5f9337:c.instructions+=1;goto B5f9337;
case 0x5f9339:goto L5f9339;
case 0x5f933f:c.instructions+=5;goto B5f933f;
case 0x5f9344:c.instructions+=4;goto B5f9344;
case 0x5f9348:c.instructions+=3;goto B5f9348;
case 0x5f934b:c.instructions+=2;goto B5f934b;
case 0x5f934d:c.instructions+=1;goto B5f934d;
case 0x5f934f:goto L5f934f;
case 0x5f9351:goto L5f9351;
case 0x5f9355:c.instructions+=3;goto B5f9355;
case 0x5f9356:c.instructions+=2;goto B5f9356;
case 0x5f9357:c.instructions+=1;goto B5f9357;
case 0x5f935c:goto L5f935c;
case 0x5f9360:c.instructions+=4;goto B5f9360;
case 0x5f9361:c.instructions+=3;goto B5f9361;
case 0x5f9362:c.instructions+=2;goto B5f9362;
case 0x5f9364:c.instructions+=1;goto B5f9364;
case 0x5f9369:goto L5f9369;
case 0x5f936c:c.instructions+=2;goto B5f936c;
case 0x5f936e:c.instructions+=1;goto B5f936e;
case 0x5f9370:goto L5f9370;
case 0x5f9374:c.instructions+=13;goto B5f9374;
case 0x5f9378:c.instructions+=12;goto B5f9378;
case 0x5f937c:c.instructions+=11;goto B5f937c;
case 0x5f937e:c.instructions+=10;goto B5f937e;
case 0x5f9380:c.instructions+=9;goto B5f9380;
case 0x5f9382:c.instructions+=8;goto B5f9382;
case 0x5f9384:c.instructions+=7;goto B5f9384;
case 0x5f9386:c.instructions+=6;goto B5f9386;
case 0x5f9388:c.instructions+=5;goto B5f9388;
case 0x5f938a:c.instructions+=4;goto B5f938a;
case 0x5f938c:c.instructions+=3;goto B5f938c;
case 0x5f938e:c.instructions+=2;goto B5f938e;
case 0x5f9390:c.instructions+=1;goto B5f9390;
case 0x5f9392:goto L5f9392;
case 0x5f9393:c.instructions+=1;goto B5f9393;
case 0x5f9395:goto L5f9395;
case 0x5f9398:c.instructions+=3;goto B5f9398;
case 0x5f939a:c.instructions+=2;goto B5f939a;
case 0x5f939e:c.instructions+=1;goto B5f939e;
case 0x5f93a2:goto L5f93a2;
case 0x5f93a5:c.instructions+=1;goto B5f93a5;
case 0x5f93ab:goto L5f93ab;
case 0x5f93b1:c.instructions+=3;goto B5f93b1;
case 0x5f93b3:c.instructions+=2;goto B5f93b3;
case 0x5f93b5:c.instructions+=1;goto B5f93b5;
case 0x5f93b7:goto L5f93b7;
case 0x5f93bd:c.instructions+=1;goto B5f93bd;
case 0x5f93c0:goto L5f93c0;
case 0x5f93c3:c.instructions+=2;goto B5f93c3;
case 0x5f93c5:c.instructions+=1;goto B5f93c5;
case 0x5f93c7:goto L5f93c7;
case 0x5f93c8:c.instructions+=3;goto B5f93c8;
case 0x5f93ce:c.instructions+=2;goto B5f93ce;
case 0x5f93d0:c.instructions+=1;goto B5f93d0;
case 0x5f93d2:goto L5f93d2;
case 0x5f93d6:goto L5f93d6;
case 0x5f93d8:goto L5f93d8;
case 0x5f93da:c.instructions+=4;goto B5f93da;
case 0x5f93e0:c.instructions+=3;goto B5f93e0;
case 0x5f93e3:c.instructions+=2;goto B5f93e3;
case 0x5f93e5:c.instructions+=1;goto B5f93e5;
case 0x5f93e7:goto L5f93e7;
case 0x5f93ed:c.instructions+=2;goto B5f93ed;
case 0x5f93f3:c.instructions+=1;goto B5f93f3;
case 0x5f93f5:goto L5f93f5;
case 0x5f93f8:c.instructions+=1;goto B5f93f8;
case 0x5f93fa:goto L5f93fa;
case 0x5f9401:c.instructions+=1;goto B5f9401;
case 0x5f9403:goto L5f9403;
case 0x5f940a:c.instructions+=2;goto B5f940a;
case 0x5f940c:c.instructions+=1;goto B5f940c;
case 0x5f940e:goto L5f940e;
case 0x5f9410:c.instructions+=2;goto B5f9410;
case 0x5f9413:c.instructions+=1;goto B5f9413;
case 0x5f9415:goto L5f9415;
case 0x5f9419:c.instructions+=3;goto B5f9419;
case 0x5f941f:c.instructions+=2;goto B5f941f;
case 0x5f9421:c.instructions+=1;goto B5f9421;
case 0x5f9423:goto L5f9423;
case 0x5f9424:goto L5f9424;
case 0x5f9427:c.instructions+=3;goto B5f9427;
case 0x5f942b:c.instructions+=2;goto B5f942b;
case 0x5f942d:c.instructions+=1;goto B5f942d;
case 0x5f942f:goto L5f942f;
case 0x5f9435:goto L5f9435;
case 0x5f9437:c.instructions+=1;goto B5f9437;
case 0x5f943a:goto L5f943a;
case 0x5f943e:c.instructions+=5;goto B5f943e;
case 0x5f943f:c.instructions+=4;goto B5f943f;
case 0x5f9442:c.instructions+=3;goto B5f9442;
case 0x5f9445:c.instructions+=2;goto B5f9445;
case 0x5f9449:c.instructions+=1;goto B5f9449;
case 0x5f944f:goto L5f944f;
case 0x5f9450:c.instructions+=5;goto B5f9450;
case 0x5f9451:c.instructions+=4;goto B5f9451;
case 0x5f9452:c.instructions+=3;goto B5f9452;
case 0x5f9453:c.instructions+=2;goto B5f9453;
case 0x5f9456:c.instructions+=1;goto B5f9456;
case 0x5f9460:goto L5f9460;
case 0x5f9461:c.instructions+=6;goto B5f9461;
case 0x5f9462:c.instructions+=5;goto B5f9462;
case 0x5f9464:c.instructions+=4;goto B5f9464;
case 0x5f9466:c.instructions+=3;goto B5f9466;
case 0x5f9468:c.instructions+=2;goto B5f9468;
case 0x5f946b:c.instructions+=1;goto B5f946b;
case 0x5f946d:goto L5f946d;
case 0x5f9470:c.instructions+=12;goto B5f9470;
case 0x5f9473:c.instructions+=11;goto B5f9473;
case 0x5f9476:c.instructions+=10;goto B5f9476;
case 0x5f9479:c.instructions+=9;goto B5f9479;
case 0x5f947f:c.instructions+=8;goto B5f947f;
case 0x5f9485:c.instructions+=7;goto B5f9485;
case 0x5f9488:c.instructions+=6;goto B5f9488;
case 0x5f948e:c.instructions+=5;goto B5f948e;
case 0x5f9493:c.instructions+=4;goto B5f9493;
case 0x5f9499:c.instructions+=3;goto B5f9499;
case 0x5f949e:c.instructions+=2;goto B5f949e;
case 0x5f94a1:c.instructions+=1;goto B5f94a1;
case 0x5f94a6:goto L5f94a6;
case 0x5f94a8:c.instructions+=1;goto B5f94a8;
case 0x5f94aa:goto L5f94aa;
case 0x5f94af:goto L5f94af;
case 0x5f94b1:c.instructions+=1;goto B5f94b1;
case 0x5f94b6:goto L5f94b6;
case 0x5f94bc:c.instructions+=1;goto B5f94bc;
case 0x5f94be:goto L5f94be;
case 0x5f94c4:c.instructions+=1;goto B5f94c4;
case 0x5f94c6:goto L5f94c6;
case 0x5f94c7:c.instructions+=1;goto B5f94c7;
case 0x5f94cc:goto L5f94cc;
case 0x5f94cf:goto L5f94cf;
case 0x5f94d0:c.instructions+=2;goto B5f94d0;
case 0x5f94d1:c.instructions+=1;goto B5f94d1;
case 0x5f94e0:goto L5f94e0;
case 0x5f94e1:c.instructions+=3;goto B5f94e1;
case 0x5f94e3:c.instructions+=2;goto B5f94e3;
case 0x5f94e6:c.instructions+=1;goto B5f94e6;
case 0x5f94ec:goto L5f94ec;
case 0x5f94ed:c.instructions+=5;goto B5f94ed;
case 0x5f94ee:c.instructions+=4;goto B5f94ee;
case 0x5f94f0:c.instructions+=3;goto B5f94f0;
case 0x5f94f5:c.instructions+=2;goto B5f94f5;
case 0x5f94fb:c.instructions+=1;goto B5f94fb;
case 0x5f9500:goto L5f9500;
case 0x5f9503:c.instructions+=2;goto B5f9503;
case 0x5f9508:c.instructions+=1;goto B5f9508;
case 0x5f950d:goto L5f950d;
case 0x5f9513:c.instructions+=2;goto B5f9513;
case 0x5f9515:c.instructions+=1;goto B5f9515;
case 0x5f9517:goto L5f9517;
case 0x5f951c:c.instructions+=2;goto B5f951c;
case 0x5f9526:c.instructions+=1;goto B5f9526;
case 0x5f952b:goto L5f952b;
case 0x5f9530:c.instructions+=5;goto B5f9530;
case 0x5f9535:c.instructions+=4;goto B5f9535;
case 0x5f9539:c.instructions+=3;goto B5f9539;
case 0x5f953c:c.instructions+=2;goto B5f953c;
case 0x5f9541:c.instructions+=1;goto B5f9541;
case 0x5f9543:goto L5f9543;
case 0x5f9545:goto L5f9545;
case 0x5f954b:goto L5f954b;
case 0x5f954e:c.instructions+=1;goto B5f954e;
case 0x5f9553:goto L5f9553;
case 0x5f9555:c.instructions+=2;goto B5f9555;
case 0x5f9557:c.instructions+=1;goto B5f9557;
case 0x5f9559:goto L5f9559;
case 0x5f955b:c.instructions+=2;goto B5f955b;
case 0x5f955e:c.instructions+=1;goto B5f955e;
case 0x5f9560:goto L5f9560;
case 0x5f9563:c.instructions+=1;goto B5f9563;
case 0x5f9565:goto L5f9565;
case 0x5f9567:c.instructions+=1;goto B5f9567;
case 0x5f9569:goto L5f9569;
case 0x5f956c:c.instructions+=1;goto B5f956c;
case 0x5f956e:goto L5f956e;
case 0x5f9574:c.instructions+=3;goto B5f9574;
case 0x5f9576:c.instructions+=2;goto B5f9576;
case 0x5f9578:c.instructions+=1;goto B5f9578;
case 0x5f957a:goto L5f957a;
case 0x5f957c:c.instructions+=1;goto B5f957c;
case 0x5f957e:goto L5f957e;
case 0x5f9582:c.instructions+=3;goto B5f9582;
case 0x5f9583:c.instructions+=2;goto B5f9583;
case 0x5f9585:c.instructions+=1;goto B5f9585;
case 0x5f958a:goto L5f958a;
case 0x5f9590:c.instructions+=2;goto B5f9590;
case 0x5f9592:c.instructions+=1;goto B5f9592;
case 0x5f9594:goto L5f9594;
case 0x5f959a:c.instructions+=6;goto B5f959a;
case 0x5f95a0:c.instructions+=5;goto B5f95a0;
case 0x5f95a6:c.instructions+=4;goto B5f95a6;
case 0x5f95ac:c.instructions+=3;goto B5f95ac;
case 0x5f95b3:c.instructions+=2;goto B5f95b3;
case 0x5f95ba:c.instructions+=1;goto B5f95ba;
case 0x5f95c0:goto L5f95c0;
case 0x5f95c3:c.instructions+=2;goto B5f95c3;
case 0x5f95c4:c.instructions+=1;goto B5f95c4;
case 0x5f95c6:goto L5f95c6;
case 0x5f95cb:goto L5f95cb;
case 0x5f95cd:c.instructions+=3;goto B5f95cd;
case 0x5f95ce:c.instructions+=2;goto B5f95ce;
case 0x5f95cf:c.instructions+=1;goto B5f95cf;
case 0x5f95d1:goto L5f95d1;
case 0x5f95d2:c.instructions+=1;goto B5f95d2;
case 0x5f95d7:goto L5f95d7;
case 0x5f95d8:c.instructions+=1;goto B5f95d8;
case 0x5f95e0:goto L5f95e0;
case 0x5f95e3:c.instructions+=2;goto B5f95e3;
case 0x5f95e5:c.instructions+=1;goto B5f95e5;
case 0x5f95e7:goto L5f95e7;
case 0x5f95eb:c.instructions+=2;goto B5f95eb;
case 0x5f95ec:c.instructions+=1;goto B5f95ec;
case 0x5f95f1:goto L5f95f1;
case 0x5f95f6:c.instructions+=5;goto B5f95f6;
case 0x5f95f8:c.instructions+=4;goto B5f95f8;
case 0x5f95f9:c.instructions+=3;goto B5f95f9;
case 0x5f95fd:c.instructions+=2;goto B5f95fd;
case 0x5f95ff:c.instructions+=1;goto B5f95ff;
case 0x5f9605:goto L5f9605;
case 0x5f960c:c.instructions+=3;goto B5f960c;
case 0x5f960d:c.instructions+=2;goto B5f960d;
case 0x5f960f:c.instructions+=1;goto B5f960f;
case 0x5f9614:goto L5f9614;
case 0x5f961b:c.instructions+=4;goto B5f961b;
case 0x5f961d:c.instructions+=3;goto B5f961d;
case 0x5f961e:c.instructions+=2;goto B5f961e;
case 0x5f9620:c.instructions+=1;goto B5f9620;
case 0x5f9625:goto L5f9625;
case 0x5f962c:c.instructions+=4;goto B5f962c;
case 0x5f962e:c.instructions+=3;goto B5f962e;
case 0x5f962f:c.instructions+=2;goto B5f962f;
case 0x5f9631:c.instructions+=1;goto B5f9631;
case 0x5f9636:goto L5f9636;
case 0x5f963d:c.instructions+=4;goto B5f963d;
case 0x5f963f:c.instructions+=3;goto B5f963f;
case 0x5f9640:c.instructions+=2;goto B5f9640;
case 0x5f9642:c.instructions+=1;goto B5f9642;
case 0x5f9647:goto L5f9647;
case 0x5f964d:c.instructions+=4;goto B5f964d;
case 0x5f964f:c.instructions+=3;goto B5f964f;
case 0x5f9650:c.instructions+=2;goto B5f9650;
case 0x5f9652:c.instructions+=1;goto B5f9652;
case 0x5f9657:goto L5f9657;
case 0x5f965c:c.instructions+=4;goto B5f965c;
case 0x5f965e:c.instructions+=3;goto B5f965e;
case 0x5f965f:c.instructions+=2;goto B5f965f;
case 0x5f9661:c.instructions+=1;goto B5f9661;
case 0x5f9666:goto L5f9666;
case 0x5f966d:c.instructions+=9;goto B5f966d;
case 0x5f9674:c.instructions+=8;goto B5f9674;
case 0x5f9679:c.instructions+=7;goto B5f9679;
case 0x5f967b:c.instructions+=6;goto B5f967b;
case 0x5f9682:c.instructions+=5;goto B5f9682;
case 0x5f9684:c.instructions+=4;goto B5f9684;
case 0x5f9686:c.instructions+=3;goto B5f9686;
case 0x5f968d:c.instructions+=2;goto B5f968d;
case 0x5f9692:c.instructions+=1;goto B5f9692;
case 0x5f9697:goto L5f9697;
case 0x5f9698:c.instructions+=1;goto B5f9698;
case 0x5f969b:goto L5f969b;
case 0x5f96a2:c.instructions+=3;goto B5f96a2;
case 0x5f96a3:c.instructions+=2;goto B5f96a3;
case 0x5f96a5:c.instructions+=1;goto B5f96a5;
case 0x5f96aa:goto L5f96aa;
case 0x5f96b1:c.instructions+=4;goto B5f96b1;
case 0x5f96b3:c.instructions+=3;goto B5f96b3;
case 0x5f96b4:c.instructions+=2;goto B5f96b4;
case 0x5f96b6:c.instructions+=1;goto B5f96b6;
case 0x5f96bb:goto L5f96bb;
case 0x5f96c2:c.instructions+=4;goto B5f96c2;
case 0x5f96c4:c.instructions+=3;goto B5f96c4;
case 0x5f96c5:c.instructions+=2;goto B5f96c5;
case 0x5f96c7:c.instructions+=1;goto B5f96c7;
case 0x5f96cc:goto L5f96cc;
case 0x5f96d1:c.instructions+=1;goto B5f96d1;
case 0x5f96d6:goto L5f96d6;
case 0x5f96d9:c.instructions+=4;goto B5f96d9;
case 0x5f96db:c.instructions+=3;goto B5f96db;
case 0x5f96dc:c.instructions+=2;goto B5f96dc;
case 0x5f96de:c.instructions+=1;goto B5f96de;
case 0x5f96e3:goto L5f96e3;
case 0x5f96e8:c.instructions+=1;goto B5f96e8;
case 0x5f96ed:goto L5f96ed;
case 0x5f96ef:c.instructions+=3;goto B5f96ef;
case 0x5f96f0:c.instructions+=2;goto B5f96f0;
case 0x5f96f2:c.instructions+=1;goto B5f96f2;
case 0x5f96f7:goto L5f96f7;
case 0x5f96fe:c.instructions+=4;goto B5f96fe;
case 0x5f9700:c.instructions+=3;goto B5f9700;
case 0x5f9701:c.instructions+=2;goto B5f9701;
case 0x5f9703:c.instructions+=1;goto B5f9703;
case 0x5f9708:goto L5f9708;
case 0x5f970a:c.instructions+=3;goto B5f970a;
case 0x5f970c:c.instructions+=2;goto B5f970c;
case 0x5f970e:c.instructions+=1;goto B5f970e;
case 0x5f9713:goto L5f9713;
case 0x5f9714:c.instructions+=1;goto B5f9714;
case 0x5f9720:goto L5f9720;
case 0x5f9721:c.instructions+=6;goto B5f9721;
case 0x5f9722:c.instructions+=5;goto B5f9722;
case 0x5f9723:c.instructions+=4;goto B5f9723;
case 0x5f9725:c.instructions+=3;goto B5f9725;
case 0x5f9728:c.instructions+=2;goto B5f9728;
case 0x5f972a:c.instructions+=1;goto B5f972a;
case 0x5f972c:goto L5f972c;
case 0x5f972e:c.instructions+=2;goto B5f972e;
case 0x5f9731:c.instructions+=1;goto B5f9731;
case 0x5f9733:goto L5f9733;
case 0x5f9736:c.instructions+=1;goto B5f9736;
case 0x5f9738:goto L5f9738;
case 0x5f973a:c.instructions+=1;goto B5f973a;
case 0x5f973c:goto L5f973c;
case 0x5f973f:c.instructions+=1;goto B5f973f;
case 0x5f9741:goto L5f9741;
case 0x5f9748:goto L5f9748;
case 0x5f974b:c.instructions+=1;goto B5f974b;
case 0x5f9750:goto L5f9750;
case 0x5f9752:c.instructions+=2;goto B5f9752;
case 0x5f9754:c.instructions+=1;goto B5f9754;
case 0x5f9756:goto L5f9756;
case 0x5f9758:c.instructions+=2;goto B5f9758;
case 0x5f975b:c.instructions+=1;goto B5f975b;
case 0x5f975d:goto L5f975d;
case 0x5f9760:c.instructions+=1;goto B5f9760;
case 0x5f9762:goto L5f9762;
case 0x5f9764:c.instructions+=1;goto B5f9764;
case 0x5f9766:goto L5f9766;
case 0x5f9769:c.instructions+=1;goto B5f9769;
case 0x5f976b:goto L5f976b;
case 0x5f976c:c.instructions+=1;goto B5f976c;
case 0x5f9771:goto L5f9771;
case 0x5f9777:c.instructions+=4;goto B5f9777;
case 0x5f977a:c.instructions+=3;goto B5f977a;
case 0x5f977d:c.instructions+=2;goto B5f977d;
case 0x5f977f:c.instructions+=1;goto B5f977f;
case 0x5f9782:goto L5f9782;
case 0x5f9785:c.instructions+=2;goto B5f9785;
case 0x5f9786:c.instructions+=1;goto B5f9786;
case 0x5f9788:goto L5f9788;
case 0x5f9789:c.instructions+=3;goto B5f9789;
case 0x5f978a:c.instructions+=2;goto B5f978a;
case 0x5f978b:c.instructions+=1;goto B5f978b;
case 0x5f9790:goto L5f9790;
case 0x5f9791:c.instructions+=5;goto B5f9791;
case 0x5f9792:c.instructions+=4;goto B5f9792;
case 0x5f9794:c.instructions+=3;goto B5f9794;
case 0x5f9797:c.instructions+=2;goto B5f9797;
case 0x5f979c:c.instructions+=1;goto B5f979c;
case 0x5f97a0:goto L5f97a0;
case 0x5f97a2:c.instructions+=2;goto B5f97a2;
case 0x5f97a4:c.instructions+=1;goto B5f97a4;
case 0x5f97a6:goto L5f97a6;
case 0x5f97a9:c.instructions+=1;goto B5f97a9;
case 0x5f97ab:goto L5f97ab;
case 0x5f97ad:c.instructions+=2;goto B5f97ad;
case 0x5f97b0:c.instructions+=1;goto B5f97b0;
case 0x5f97b2:goto L5f97b2;
case 0x5f97b5:c.instructions+=1;goto B5f97b5;
case 0x5f97b7:goto L5f97b7;
case 0x5f97b9:c.instructions+=1;goto B5f97b9;
case 0x5f97bb:goto L5f97bb;
case 0x5f97be:c.instructions+=1;goto B5f97be;
case 0x5f97c0:goto L5f97c0;
case 0x5f97c1:goto L5f97c1;
case 0x5f97c4:c.instructions+=2;goto B5f97c4;
case 0x5f97c5:c.instructions+=1;goto B5f97c5;
case 0x5f97c7:goto L5f97c7;
case 0x5f97c8:c.instructions+=2;goto B5f97c8;
case 0x5f97c9:c.instructions+=1;goto B5f97c9;
case 0x5f97d0:goto L5f97d0;
case 0x5f97d1:c.instructions+=12;goto B5f97d1;
case 0x5f97d2:c.instructions+=11;goto B5f97d2;
case 0x5f97d6:c.instructions+=10;goto B5f97d6;
case 0x5f97d7:c.instructions+=9;goto B5f97d7;
case 0x5f97db:c.instructions+=8;goto B5f97db;
case 0x5f97dd:c.instructions+=7;goto B5f97dd;
case 0x5f97e1:c.instructions+=6;goto B5f97e1;
case 0x5f97e3:c.instructions+=5;goto B5f97e3;
case 0x5f97e4:c.instructions+=4;goto B5f97e4;
case 0x5f97e6:c.instructions+=3;goto B5f97e6;
case 0x5f97ed:c.instructions+=2;goto B5f97ed;
case 0x5f97f5:c.instructions+=1;goto B5f97f5;
case 0x5f97fa:goto L5f97fa;
case 0x5f97ff:c.instructions+=7;goto B5f97ff;
case 0x5f9801:c.instructions+=6;goto B5f9801;
case 0x5f9805:c.instructions+=5;goto B5f9805;
case 0x5f9808:c.instructions+=4;goto B5f9808;
case 0x5f9809:c.instructions+=3;goto B5f9809;
case 0x5f980b:c.instructions+=2;goto B5f980b;
case 0x5f9813:c.instructions+=1;goto B5f9813;
case 0x5f9818:goto L5f9818;
case 0x5f981c:c.instructions+=9;goto B5f981c;
case 0x5f981f:c.instructions+=8;goto B5f981f;
case 0x5f9822:c.instructions+=7;goto B5f9822;
case 0x5f9823:c.instructions+=6;goto B5f9823;
case 0x5f9824:c.instructions+=5;goto B5f9824;
case 0x5f9825:c.instructions+=4;goto B5f9825;
case 0x5f9828:c.instructions+=3;goto B5f9828;
case 0x5f9829:c.instructions+=2;goto B5f9829;
case 0x5f982b:c.instructions+=1;goto B5f982b;
case 0x5f9830:goto L5f9830;
case 0x5f9831:c.instructions+=3;goto B5f9831;
case 0x5f9832:c.instructions+=2;goto B5f9832;
case 0x5f9833:c.instructions+=1;goto B5f9833;
case 0x5f9840:goto L5f9840;
case 0x5f9841:c.instructions+=7;goto B5f9841;
case 0x5f9845:c.instructions+=6;goto B5f9845;
case 0x5f9846:c.instructions+=5;goto B5f9846;
case 0x5f9847:c.instructions+=4;goto B5f9847;
case 0x5f9849:c.instructions+=3;goto B5f9849;
case 0x5f984d:c.instructions+=2;goto B5f984d;
case 0x5f984f:c.instructions+=1;goto B5f984f;
case 0x5f9855:goto L5f9855;
case 0x5f9856:c.instructions+=3;goto B5f9856;
case 0x5f985a:c.instructions+=2;goto B5f985a;
case 0x5f985c:c.instructions+=1;goto B5f985c;
case 0x5f9861:goto L5f9861;
case 0x5f9864:c.instructions+=1;goto B5f9864;
case 0x5f986a:goto L5f986a;
case 0x5f986f:c.instructions+=6;goto B5f986f;
case 0x5f9872:c.instructions+=5;goto B5f9872;
case 0x5f9877:c.instructions+=4;goto B5f9877;
case 0x5f9879:c.instructions+=3;goto B5f9879;
case 0x5f987f:c.instructions+=2;goto B5f987f;
case 0x5f9883:c.instructions+=1;goto B5f9883;
case 0x5f9885:goto L5f9885;
case 0x5f988a:c.instructions+=2;goto B5f988a;
case 0x5f988c:c.instructions+=1;goto B5f988c;
case 0x5f988e:goto L5f988e;
case 0x5f9893:c.instructions+=2;goto B5f9893;
case 0x5f9895:c.instructions+=1;goto B5f9895;
case 0x5f9897:goto L5f9897;
case 0x5f9899:c.instructions+=1;goto B5f9899;
case 0x5f989e:goto L5f989e;
case 0x5f98a0:c.instructions+=1;goto B5f98a0;
case 0x5f98a2:goto L5f98a2;
case 0x5f98a5:c.instructions+=4;goto B5f98a5;
case 0x5f98ab:c.instructions+=3;goto B5f98ab;
case 0x5f98ad:c.instructions+=2;goto B5f98ad;
case 0x5f98b0:c.instructions+=1;goto B5f98b0;
case 0x5f98b2:goto L5f98b2;
case 0x5f98b8:c.instructions+=7;goto B5f98b8;
case 0x5f98be:c.instructions+=6;goto B5f98be;
case 0x5f98c2:c.instructions+=5;goto B5f98c2;
case 0x5f98c5:c.instructions+=4;goto B5f98c5;
case 0x5f98c7:c.instructions+=3;goto B5f98c7;
case 0x5f98c9:c.instructions+=2;goto B5f98c9;
case 0x5f98cc:c.instructions+=1;goto B5f98cc;
case 0x5f98ce:goto L5f98ce;
case 0x5f98d0:c.instructions+=2;goto B5f98d0;
case 0x5f98d2:c.instructions+=1;goto B5f98d2;
case 0x5f98d7:goto L5f98d7;
case 0x5f98dd:c.instructions+=2;goto B5f98dd;
case 0x5f98df:c.instructions+=1;goto B5f98df;
case 0x5f98e1:goto L5f98e1;
case 0x5f98e8:c.instructions+=2;goto B5f98e8;
case 0x5f98ea:c.instructions+=1;goto B5f98ea;
case 0x5f98ec:goto L5f98ec;
case 0x5f98ee:c.instructions+=3;goto B5f98ee;
case 0x5f98f1:c.instructions+=2;goto B5f98f1;
case 0x5f98f4:c.instructions+=1;goto B5f98f4;
case 0x5f98f6:goto L5f98f6;
case 0x5f98f8:c.instructions+=2;goto B5f98f8;
case 0x5f98fb:c.instructions+=1;goto B5f98fb;
case 0x5f98fe:goto L5f98fe;
case 0x5f9900:c.instructions+=1;goto B5f9900;
case 0x5f9902:goto L5f9902;
case 0x5f9903:c.instructions+=1;goto B5f9903;
case 0x5f9908:goto L5f9908;
case 0x5f990a:c.instructions+=1;goto B5f990a;
case 0x5f990c:goto L5f990c;
case 0x5f9910:c.instructions+=8;goto B5f9910;
case 0x5f9916:c.instructions+=7;goto B5f9916;
case 0x5f9918:c.instructions+=6;goto B5f9918;
case 0x5f9919:c.instructions+=5;goto B5f9919;
case 0x5f991d:c.instructions+=4;goto B5f991d;
case 0x5f991e:c.instructions+=3;goto B5f991e;
case 0x5f991f:c.instructions+=2;goto B5f991f;
case 0x5f9921:c.instructions+=1;goto B5f9921;
case 0x5f9924:goto L5f9924;
case 0x5f9925:goto L5f9925;
case 0x5f9926:c.instructions+=3;goto B5f9926;
case 0x5f9927:c.instructions+=2;goto B5f9927;
case 0x5f9928:c.instructions+=1;goto B5f9928;
case 0x5f9930:goto L5f9930;
case 0x5f9935:c.instructions+=3;goto B5f9935;
case 0x5f9937:c.instructions+=2;goto B5f9937;
case 0x5f9939:c.instructions+=1;goto B5f9939;
case 0x5f993b:goto L5f993b;
case 0x5f993e:c.instructions+=1;goto B5f993e;
case 0x5f9944:goto L5f9944;
case 0x5f9945:c.instructions+=4;goto B5f9945;
case 0x5f9949:c.instructions+=3;goto B5f9949;
case 0x5f994d:c.instructions+=2;goto B5f994d;
case 0x5f994f:c.instructions+=1;goto B5f994f;
case 0x5f9955:goto L5f9955;
case 0x5f9958:c.instructions+=5;goto B5f9958;
case 0x5f995d:c.instructions+=4;goto B5f995d;
case 0x5f995f:c.instructions+=3;goto B5f995f;
case 0x5f9965:c.instructions+=2;goto B5f9965;
case 0x5f9969:c.instructions+=1;goto B5f9969;
case 0x5f996b:goto L5f996b;
case 0x5f9970:c.instructions+=2;goto B5f9970;
case 0x5f9972:c.instructions+=1;goto B5f9972;
case 0x5f9974:goto L5f9974;
case 0x5f9979:c.instructions+=2;goto B5f9979;
case 0x5f997b:c.instructions+=1;goto B5f997b;
case 0x5f997d:goto L5f997d;
case 0x5f997f:c.instructions+=2;goto B5f997f;
case 0x5f9982:c.instructions+=1;goto B5f9982;
case 0x5f9984:goto L5f9984;
case 0x5f9987:c.instructions+=1;goto B5f9987;
case 0x5f9989:goto L5f9989;
case 0x5f998b:c.instructions+=1;goto B5f998b;
case 0x5f998d:goto L5f998d;
case 0x5f9990:c.instructions+=1;goto B5f9990;
case 0x5f9992:goto L5f9992;
case 0x5f9995:c.instructions+=1;goto B5f9995;
case 0x5f9997:goto L5f9997;
case 0x5f999e:c.instructions+=1;goto B5f999e;
case 0x5f99a0:goto L5f99a0;
case 0x5f99a3:c.instructions+=1;goto B5f99a3;
case 0x5f99a5:goto L5f99a5;
case 0x5f99a8:c.instructions+=4;goto B5f99a8;
case 0x5f99ae:c.instructions+=3;goto B5f99ae;
case 0x5f99b0:c.instructions+=2;goto B5f99b0;
case 0x5f99b3:c.instructions+=1;goto B5f99b3;
case 0x5f99b5:goto L5f99b5;
case 0x5f99bb:c.instructions+=7;goto B5f99bb;
case 0x5f99c1:c.instructions+=6;goto B5f99c1;
case 0x5f99c5:c.instructions+=5;goto B5f99c5;
case 0x5f99c8:c.instructions+=4;goto B5f99c8;
case 0x5f99ca:c.instructions+=3;goto B5f99ca;
case 0x5f99cc:c.instructions+=2;goto B5f99cc;
case 0x5f99cf:c.instructions+=1;goto B5f99cf;
case 0x5f99d1:goto L5f99d1;
case 0x5f99d3:c.instructions+=1;goto B5f99d3;
case 0x5f99d8:goto L5f99d8;
case 0x5f99de:c.instructions+=2;goto B5f99de;
case 0x5f99e0:c.instructions+=1;goto B5f99e0;
case 0x5f99e2:goto L5f99e2;
case 0x5f99e3:c.instructions+=1;goto B5f99e3;
case 0x5f99e8:goto L5f99e8;
case 0x5f99ea:c.instructions+=1;goto B5f99ea;
case 0x5f99ec:goto L5f99ec;
case 0x5f99f0:c.instructions+=7;goto B5f99f0;
case 0x5f99f6:c.instructions+=6;goto B5f99f6;
case 0x5f99f8:c.instructions+=5;goto B5f99f8;
case 0x5f99f9:c.instructions+=4;goto B5f99f9;
case 0x5f99fd:c.instructions+=3;goto B5f99fd;
case 0x5f99fe:c.instructions+=2;goto B5f99fe;
case 0x5f9a00:c.instructions+=1;goto B5f9a00;
case 0x5f9a03:goto L5f9a03;
case 0x5f9a04:goto L5f9a04;
case 0x5f9a10:goto L5f9a10;
case 0x5f9a11:c.instructions+=5;goto B5f9a11;
case 0x5f9a16:c.instructions+=4;goto B5f9a16;
case 0x5f9a18:c.instructions+=3;goto B5f9a18;
case 0x5f9a19:c.instructions+=2;goto B5f9a19;
case 0x5f9a1b:c.instructions+=1;goto B5f9a1b;
case 0x5f9a1d:goto L5f9a1d;
case 0x5f9a22:c.instructions+=2;goto B5f9a22;
case 0x5f9a24:c.instructions+=1;goto B5f9a24;
case 0x5f9a2a:goto L5f9a2a;
case 0x5f9a2f:c.instructions+=2;goto B5f9a2f;
case 0x5f9a31:c.instructions+=1;goto B5f9a31;
case 0x5f9a37:goto L5f9a37;
case 0x5f9a3d:c.instructions+=2;goto B5f9a3d;
case 0x5f9a3f:c.instructions+=1;goto B5f9a3f;
case 0x5f9a41:goto L5f9a41;
case 0x5f9a46:c.instructions+=1;goto B5f9a46;
case 0x5f9a48:goto L5f9a48;
case 0x5f9a4e:c.instructions+=19;goto B5f9a4e;
case 0x5f9a53:c.instructions+=18;goto B5f9a53;
case 0x5f9a55:c.instructions+=17;goto B5f9a55;
case 0x5f9a5b:c.instructions+=16;goto B5f9a5b;
case 0x5f9a5f:c.instructions+=15;goto B5f9a5f;
case 0x5f9a63:c.instructions+=14;goto B5f9a63;
case 0x5f9a69:c.instructions+=13;goto B5f9a69;
case 0x5f9a6b:c.instructions+=12;goto B5f9a6b;
case 0x5f9a6f:c.instructions+=11;goto B5f9a6f;
case 0x5f9a75:c.instructions+=10;goto B5f9a75;
case 0x5f9a79:c.instructions+=9;goto B5f9a79;
case 0x5f9a7f:c.instructions+=8;goto B5f9a7f;
case 0x5f9a81:c.instructions+=7;goto B5f9a81;
case 0x5f9a83:c.instructions+=6;goto B5f9a83;
case 0x5f9a89:c.instructions+=5;goto B5f9a89;
case 0x5f9a8f:c.instructions+=4;goto B5f9a8f;
case 0x5f9a91:c.instructions+=3;goto B5f9a91;
case 0x5f9a93:c.instructions+=2;goto B5f9a93;
case 0x5f9a96:c.instructions+=1;goto B5f9a96;
case 0x5f9a98:goto L5f9a98;
case 0x5f9a9a:c.instructions+=1;goto B5f9a9a;
case 0x5f9a9f:goto L5f9a9f;
case 0x5f9aa1:c.instructions+=1;goto B5f9aa1;
case 0x5f9aa3:goto L5f9aa3;
case 0x5f9aa5:c.instructions+=2;goto B5f9aa5;
case 0x5f9aa7:c.instructions+=1;goto B5f9aa7;
case 0x5f9aac:goto L5f9aac;
case 0x5f9ab2:c.instructions+=3;goto B5f9ab2;
case 0x5f9ab8:c.instructions+=2;goto B5f9ab8;
case 0x5f9abd:c.instructions+=1;goto B5f9abd;
case 0x5f9ac3:goto L5f9ac3;
case 0x5f9ac4:c.instructions+=2;goto B5f9ac4;
case 0x5f9ac5:c.instructions+=1;goto B5f9ac5;
case 0x5f9ad0:goto L5f9ad0;
case 0x5f9ad6:c.instructions+=5;goto B5f9ad6;
case 0x5f9ad7:c.instructions+=4;goto B5f9ad7;
case 0x5f9ad9:c.instructions+=3;goto B5f9ad9;
case 0x5f9adc:c.instructions+=2;goto B5f9adc;
case 0x5f9ade:c.instructions+=1;goto B5f9ade;
case 0x5f9ae4:goto L5f9ae4;
case 0x5f9ae5:c.instructions+=2;goto B5f9ae5;
case 0x5f9ae9:c.instructions+=1;goto B5f9ae9;
case 0x5f9aee:goto L5f9aee;
case 0x5f9af1:c.instructions+=5;goto B5f9af1;
case 0x5f9af5:c.instructions+=4;goto B5f9af5;
case 0x5f9af7:c.instructions+=3;goto B5f9af7;
case 0x5f9af8:c.instructions+=2;goto B5f9af8;
case 0x5f9afc:c.instructions+=1;goto B5f9afc;
case 0x5f9b01:goto L5f9b01;
case 0x5f9b04:c.instructions+=4;goto B5f9b04;
case 0x5f9b08:c.instructions+=3;goto B5f9b08;
case 0x5f9b09:c.instructions+=2;goto B5f9b09;
case 0x5f9b0e:c.instructions+=1;goto B5f9b0e;
case 0x5f9b13:goto L5f9b13;
case 0x5f9b16:c.instructions+=3;goto B5f9b16;
case 0x5f9b18:c.instructions+=2;goto B5f9b18;
case 0x5f9b1b:c.instructions+=1;goto B5f9b1b;
case 0x5f9b20:goto L5f9b20;
case 0x5f9b22:c.instructions+=1;goto B5f9b22;
case 0x5f9b27:goto L5f9b27;
case 0x5f9b29:c.instructions+=4;goto B5f9b29;
case 0x5f9b2a:c.instructions+=3;goto B5f9b2a;
case 0x5f9b2e:c.instructions+=2;goto B5f9b2e;
case 0x5f9b34:c.instructions+=1;goto B5f9b34;
case 0x5f9b39:goto L5f9b39;
case 0x5f9b3e:goto L5f9b3e;
case 0x5f9b40:c.instructions+=1;goto B5f9b40;
case 0x5f9b42:goto L5f9b42;
case 0x5f9b46:c.instructions+=2;goto B5f9b46;
case 0x5f9b47:c.instructions+=1;goto B5f9b47;
case 0x5f9b4c:goto L5f9b4c;
case 0x5f9b4f:goto L5f9b4f;
case 0x5f9b54:c.instructions+=2;goto B5f9b54;
case 0x5f9b56:c.instructions+=1;goto B5f9b56;
case 0x5f9b58:goto L5f9b58;
case 0x5f9b5d:c.instructions+=2;goto B5f9b5d;
case 0x5f9b5f:c.instructions+=1;goto B5f9b5f;
case 0x5f9b61:goto L5f9b61;
case 0x5f9b66:c.instructions+=2;goto B5f9b66;
case 0x5f9b68:c.instructions+=1;goto B5f9b68;
case 0x5f9b6a:goto L5f9b6a;
case 0x5f9b6d:c.instructions+=3;goto B5f9b6d;
case 0x5f9b73:c.instructions+=2;goto B5f9b73;
case 0x5f9b75:c.instructions+=1;goto B5f9b75;
case 0x5f9b77:goto L5f9b77;
case 0x5f9b7b:c.instructions+=3;goto B5f9b7b;
case 0x5f9b7c:c.instructions+=2;goto B5f9b7c;
case 0x5f9b81:c.instructions+=1;goto B5f9b81;
case 0x5f9b86:goto L5f9b86;
case 0x5f9b89:c.instructions+=3;goto B5f9b89;
case 0x5f9b8b:c.instructions+=2;goto B5f9b8b;
case 0x5f9b8e:c.instructions+=1;goto B5f9b8e;
case 0x5f9b93:goto L5f9b93;
case 0x5f9b95:c.instructions+=1;goto B5f9b95;
case 0x5f9b9a:goto L5f9b9a;
case 0x5f9ba0:goto L5f9ba0;
case 0x5f9ba6:c.instructions+=2;goto B5f9ba6;
case 0x5f9bac:c.instructions+=1;goto B5f9bac;
case 0x5f9bae:goto L5f9bae;
case 0x5f9bb1:c.instructions+=2;goto B5f9bb1;
case 0x5f9bb3:c.instructions+=1;goto B5f9bb3;
case 0x5f9bb8:goto L5f9bb8;
case 0x5f9bb9:goto L5f9bb9;
case 0x5f9bba:c.instructions+=2;goto B5f9bba;
case 0x5f9bc0:c.instructions+=1;goto B5f9bc0;
case 0x5f9bd0:goto L5f9bd0;
case 0x5f9bd1:c.instructions+=10;goto B5f9bd1;
case 0x5f9bd2:c.instructions+=9;goto B5f9bd2;
case 0x5f9bd3:c.instructions+=8;goto B5f9bd3;
case 0x5f9bd7:c.instructions+=7;goto B5f9bd7;
case 0x5f9bd9:c.instructions+=6;goto B5f9bd9;
case 0x5f9bdd:c.instructions+=5;goto B5f9bdd;
case 0x5f9bdf:c.instructions+=4;goto B5f9bdf;
case 0x5f9be0:c.instructions+=3;goto B5f9be0;
case 0x5f9be2:c.instructions+=2;goto B5f9be2;
case 0x5f9bea:c.instructions+=1;goto B5f9bea;
case 0x5f9bef:goto L5f9bef;
case 0x5f9bf1:c.instructions+=5;goto B5f9bf1;
case 0x5f9bf5:c.instructions+=4;goto B5f9bf5;
case 0x5f9bf6:c.instructions+=3;goto B5f9bf6;
case 0x5f9bf8:c.instructions+=2;goto B5f9bf8;
case 0x5f9c00:c.instructions+=1;goto B5f9c00;
case 0x5f9c05:goto L5f9c05;
case 0x5f9c0a:c.instructions+=3;goto B5f9c0a;
case 0x5f9c0e:c.instructions+=2;goto B5f9c0e;
case 0x5f9c10:c.instructions+=1;goto B5f9c10;
case 0x5f9c12:goto L5f9c12;
case 0x5f9c14:c.instructions+=3;goto B5f9c14;
case 0x5f9c1a:c.instructions+=2;goto B5f9c1a;
case 0x5f9c1c:c.instructions+=1;goto B5f9c1c;
case 0x5f9c1e:goto L5f9c1e;
case 0x5f9c22:c.instructions+=3;goto B5f9c22;
case 0x5f9c23:c.instructions+=2;goto B5f9c23;
case 0x5f9c28:c.instructions+=1;goto B5f9c28;
case 0x5f9c2d:goto L5f9c2d;
case 0x5f9c30:c.instructions+=3;goto B5f9c30;
case 0x5f9c32:c.instructions+=2;goto B5f9c32;
case 0x5f9c35:c.instructions+=1;goto B5f9c35;
case 0x5f9c3a:goto L5f9c3a;
case 0x5f9c3c:c.instructions+=1;goto B5f9c3c;
case 0x5f9c41:goto L5f9c41;
case 0x5f9c47:goto L5f9c47;
case 0x5f9c4d:c.instructions+=3;goto B5f9c4d;
case 0x5f9c4f:c.instructions+=2;goto B5f9c4f;
case 0x5f9c55:c.instructions+=1;goto B5f9c55;
case 0x5f9c57:goto L5f9c57;
case 0x5f9c5d:c.instructions+=2;goto B5f9c5d;
case 0x5f9c5f:c.instructions+=1;goto B5f9c5f;
case 0x5f9c61:goto L5f9c61;
case 0x5f9c67:c.instructions+=2;goto B5f9c67;
case 0x5f9c69:c.instructions+=1;goto B5f9c69;
case 0x5f9c6b:goto L5f9c6b;
case 0x5f9c6f:c.instructions+=1;goto B5f9c6f;
case 0x5f9c71:goto L5f9c71;
case 0x5f9c73:c.instructions+=2;goto B5f9c73;
case 0x5f9c75:c.instructions+=1;goto B5f9c75;
case 0x5f9c7a:goto L5f9c7a;
case 0x5f9c7b:c.instructions+=3;goto B5f9c7b;
case 0x5f9c7c:c.instructions+=2;goto B5f9c7c;
case 0x5f9c7d:c.instructions+=1;goto B5f9c7d;
case 0x5f9c80:goto L5f9c80;
case 0x5f9c87:c.instructions+=14;goto B5f9c87;
case 0x5f9c8b:c.instructions+=13;goto B5f9c8b;
case 0x5f9c92:c.instructions+=12;goto B5f9c92;
case 0x5f9c99:c.instructions+=11;goto B5f9c99;
case 0x5f9c9a:c.instructions+=10;goto B5f9c9a;
case 0x5f9ca0:c.instructions+=9;goto B5f9ca0;
case 0x5f9ca7:c.instructions+=8;goto B5f9ca7;
case 0x5f9cae:c.instructions+=7;goto B5f9cae;
case 0x5f9cb0:c.instructions+=6;goto B5f9cb0;
case 0x5f9cb2:c.instructions+=5;goto B5f9cb2;
case 0x5f9cb7:c.instructions+=4;goto B5f9cb7;
case 0x5f9cbc:c.instructions+=3;goto B5f9cbc;
case 0x5f9cc2:c.instructions+=2;goto B5f9cc2;
case 0x5f9cc3:c.instructions+=1;goto B5f9cc3;
case 0x5f9cd0:goto L5f9cd0;
case 0x5f9cd1:c.instructions+=15;goto B5f9cd1;
case 0x5f9cd3:c.instructions+=14;goto B5f9cd3;
case 0x5f9cd6:c.instructions+=13;goto B5f9cd6;
case 0x5f9cd9:c.instructions+=12;goto B5f9cd9;
case 0x5f9cde:c.instructions+=11;goto B5f9cde;
case 0x5f9cdf:c.instructions+=10;goto B5f9cdf;
case 0x5f9ce5:c.instructions+=9;goto B5f9ce5;
case 0x5f9ce6:c.instructions+=8;goto B5f9ce6;
case 0x5f9ce7:c.instructions+=7;goto B5f9ce7;
case 0x5f9cea:c.instructions+=6;goto B5f9cea;
case 0x5f9cec:c.instructions+=5;goto B5f9cec;
case 0x5f9cf2:c.instructions+=4;goto B5f9cf2;
case 0x5f9cf6:c.instructions+=3;goto B5f9cf6;
case 0x5f9cf8:c.instructions+=2;goto B5f9cf8;
case 0x5f9cfa:c.instructions+=1;goto B5f9cfa;
case 0x5f9d00:goto L5f9d00;
case 0x5f9d05:c.instructions+=1;goto B5f9d05;
case 0x5f9d07:goto L5f9d07;
case 0x5f9d0c:c.instructions+=2;goto B5f9d0c;
case 0x5f9d0e:c.instructions+=1;goto B5f9d0e;
case 0x5f9d14:goto L5f9d14;
case 0x5f9d1b:c.instructions+=3;goto B5f9d1b;
case 0x5f9d1f:c.instructions+=2;goto B5f9d1f;
case 0x5f9d21:c.instructions+=1;goto B5f9d21;
case 0x5f9d23:goto L5f9d23;
case 0x5f9d25:c.instructions+=2;goto B5f9d25;
case 0x5f9d28:c.instructions+=1;goto B5f9d28;
case 0x5f9d2a:goto L5f9d2a;
case 0x5f9d2d:c.instructions+=1;goto B5f9d2d;
case 0x5f9d2f:goto L5f9d2f;
case 0x5f9d31:c.instructions+=1;goto B5f9d31;
case 0x5f9d33:goto L5f9d33;
case 0x5f9d36:c.instructions+=1;goto B5f9d36;
case 0x5f9d3c:goto L5f9d3c;
case 0x5f9d3f:c.instructions+=4;goto B5f9d3f;
case 0x5f9d41:c.instructions+=3;goto B5f9d41;
case 0x5f9d49:c.instructions+=2;goto B5f9d49;
case 0x5f9d4d:c.instructions+=1;goto B5f9d4d;
case 0x5f9d53:goto L5f9d53;
case 0x5f9d57:goto L5f9d57;
case 0x5f9d59:c.instructions+=2;goto B5f9d59;
case 0x5f9d5b:c.instructions+=1;goto B5f9d5b;
case 0x5f9d5d:goto L5f9d5d;
case 0x5f9d62:c.instructions+=1;goto B5f9d62;
case 0x5f9d64:goto L5f9d64;
case 0x5f9d6a:c.instructions+=2;goto B5f9d6a;
case 0x5f9d6c:c.instructions+=1;goto B5f9d6c;
case 0x5f9d6e:goto L5f9d6e;
case 0x5f9d70:c.instructions+=4;goto B5f9d70;
case 0x5f9d74:c.instructions+=3;goto B5f9d74;
case 0x5f9d7b:c.instructions+=2;goto B5f9d7b;
case 0x5f9d7d:c.instructions+=1;goto B5f9d7d;
case 0x5f9d7f:goto L5f9d7f;
case 0x5f9d84:c.instructions+=1;goto B5f9d84;
case 0x5f9d86:goto L5f9d86;
case 0x5f9d8a:c.instructions+=2;goto B5f9d8a;
case 0x5f9d8c:c.instructions+=1;goto B5f9d8c;
case 0x5f9d8e:goto L5f9d8e;
case 0x5f9d93:goto L5f9d93;
case 0x5f9d95:c.instructions+=1;goto B5f9d95;
case 0x5f9d97:goto L5f9d97;
case 0x5f9d9b:goto L5f9d9b;
case 0x5f9d9f:c.instructions+=7;goto B5f9d9f;
case 0x5f9da3:c.instructions+=6;goto B5f9da3;
case 0x5f9da4:c.instructions+=5;goto B5f9da4;
case 0x5f9da7:c.instructions+=4;goto B5f9da7;
case 0x5f9da9:c.instructions+=3;goto B5f9da9;
case 0x5f9dad:c.instructions+=2;goto B5f9dad;
case 0x5f9db1:c.instructions+=1;goto B5f9db1;
case 0x5f9db3:goto L5f9db3;
case 0x5f9db4:c.instructions+=5;goto B5f9db4;
case 0x5f9db5:c.instructions+=4;goto B5f9db5;
case 0x5f9db6:c.instructions+=3;goto B5f9db6;
case 0x5f9db8:c.instructions+=2;goto B5f9db8;
case 0x5f9db9:c.instructions+=1;goto B5f9db9;
case 0x5f9dba:goto L5f9dba;
case 0x5f9dbe:c.instructions+=13;goto B5f9dbe;
case 0x5f9dc4:c.instructions+=12;goto B5f9dc4;
case 0x5f9dc6:c.instructions+=11;goto B5f9dc6;
case 0x5f9dc8:c.instructions+=10;goto B5f9dc8;
case 0x5f9dcf:c.instructions+=9;goto B5f9dcf;
case 0x5f9dd5:c.instructions+=8;goto B5f9dd5;
case 0x5f9ddb:c.instructions+=7;goto B5f9ddb;
case 0x5f9de1:c.instructions+=6;goto B5f9de1;
case 0x5f9de7:c.instructions+=5;goto B5f9de7;
case 0x5f9de8:c.instructions+=4;goto B5f9de8;
case 0x5f9dee:c.instructions+=3;goto B5f9dee;
case 0x5f9df5:c.instructions+=2;goto B5f9df5;
case 0x5f9df6:c.instructions+=1;goto B5f9df6;
case 0x5f9dfb:goto L5f9dfb;
case 0x5f9e01:c.instructions+=1;goto B5f9e01;
case 0x5f9e04:goto L5f9e04;
case 0x5f9e0b:c.instructions+=3;goto B5f9e0b;
case 0x5f9e12:c.instructions+=2;goto B5f9e12;
case 0x5f9e14:c.instructions+=1;goto B5f9e14;
case 0x5f9e16:goto L5f9e16;
case 0x5f9e1b:c.instructions+=1;goto B5f9e1b;
case 0x5f9e21:goto L5f9e21;
case 0x5f9e26:c.instructions+=2;goto B5f9e26;
case 0x5f9e28:c.instructions+=1;goto B5f9e28;
case 0x5f9e2e:goto L5f9e2e;
case 0x5f9e35:c.instructions+=9;goto B5f9e35;
case 0x5f9e38:c.instructions+=8;goto B5f9e38;
case 0x5f9e3c:c.instructions+=7;goto B5f9e3c;
case 0x5f9e40:c.instructions+=6;goto B5f9e40;
case 0x5f9e44:c.instructions+=5;goto B5f9e44;
case 0x5f9e4a:c.instructions+=4;goto B5f9e4a;
case 0x5f9e4c:c.instructions+=3;goto B5f9e4c;
case 0x5f9e4e:c.instructions+=2;goto B5f9e4e;
case 0x5f9e51:c.instructions+=1;goto B5f9e51;
case 0x5f9e57:goto L5f9e57;
case 0x5f9e5d:c.instructions+=2;goto B5f9e5d;
case 0x5f9e63:c.instructions+=1;goto B5f9e63;
case 0x5f9e68:goto L5f9e68;
case 0x5f9e6c:c.instructions+=4;goto B5f9e6c;
case 0x5f9e6f:c.instructions+=3;goto B5f9e6f;
case 0x5f9e71:c.instructions+=2;goto B5f9e71;
case 0x5f9e73:c.instructions+=1;goto B5f9e73;
case 0x5f9e75:goto L5f9e75;
case 0x5f9e7a:c.instructions+=1;goto B5f9e7a;
case 0x5f9e80:goto L5f9e80;
case 0x5f9e83:c.instructions+=2;goto B5f9e83;
case 0x5f9e85:c.instructions+=1;goto B5f9e85;
case 0x5f9e87:goto L5f9e87;
case 0x5f9e8c:goto L5f9e8c;
case 0x5f9e8e:c.instructions+=1;goto B5f9e8e;
case 0x5f9e90:goto L5f9e90;
case 0x5f9e92:c.instructions+=4;goto B5f9e92;
case 0x5f9e96:c.instructions+=3;goto B5f9e96;
case 0x5f9e9d:c.instructions+=2;goto B5f9e9d;
case 0x5f9e9f:c.instructions+=1;goto B5f9e9f;
case 0x5f9ea1:goto L5f9ea1;
case 0x5f9ea5:c.instructions+=2;goto B5f9ea5;
case 0x5f9eac:c.instructions+=1;goto B5f9eac;
case 0x5f9eb2:goto L5f9eb2;
case 0x5f9eb5:c.instructions+=4;goto B5f9eb5;
case 0x5f9eb6:c.instructions+=3;goto B5f9eb6;
case 0x5f9eb9:c.instructions+=2;goto B5f9eb9;
case 0x5f9ebb:c.instructions+=1;goto B5f9ebb;
case 0x5f9ebd:goto L5f9ebd;
case 0x5f9ec1:c.instructions+=3;goto B5f9ec1;
case 0x5f9ec2:c.instructions+=2;goto B5f9ec2;
case 0x5f9ec4:c.instructions+=1;goto B5f9ec4;
case 0x5f9ec9:goto L5f9ec9;
case 0x5f9ed0:c.instructions+=4;goto B5f9ed0;
case 0x5f9ed7:c.instructions+=3;goto B5f9ed7;
case 0x5f9ed8:c.instructions+=2;goto B5f9ed8;
case 0x5f9ed9:c.instructions+=1;goto B5f9ed9;
case 0x5f9ede:goto L5f9ede;
case 0x5f9ee5:c.instructions+=7;goto B5f9ee5;
case 0x5f9ee8:c.instructions+=6;goto B5f9ee8;
case 0x5f9ee9:c.instructions+=5;goto B5f9ee9;
case 0x5f9eea:c.instructions+=4;goto B5f9eea;
case 0x5f9eeb:c.instructions+=3;goto B5f9eeb;
case 0x5f9eed:c.instructions+=2;goto B5f9eed;
case 0x5f9eee:c.instructions+=1;goto B5f9eee;
case 0x5f9eef:goto L5f9eef;
case 0x5f9ef1:goto L5f9ef1;
case 0x5f9ef5:c.instructions+=1;goto B5f9ef5;
case 0x5f9efa:goto L5f9efa;
case 0x5f9efe:c.instructions+=16;goto B5f9efe;
case 0x5f9f01:c.instructions+=15;goto B5f9f01;
case 0x5f9f04:c.instructions+=14;goto B5f9f04;
case 0x5f9f08:c.instructions+=13;goto B5f9f08;
case 0x5f9f0a:c.instructions+=12;goto B5f9f0a;
case 0x5f9f0d:c.instructions+=11;goto B5f9f0d;
case 0x5f9f11:c.instructions+=10;goto B5f9f11;
case 0x5f9f19:c.instructions+=9;goto B5f9f19;
case 0x5f9f1d:c.instructions+=8;goto B5f9f1d;
case 0x5f9f21:c.instructions+=7;goto B5f9f21;
case 0x5f9f25:c.instructions+=6;goto B5f9f25;
case 0x5f9f29:c.instructions+=5;goto B5f9f29;
case 0x5f9f30:c.instructions+=4;goto B5f9f30;
case 0x5f9f34:c.instructions+=3;goto B5f9f34;
case 0x5f9f36:c.instructions+=2;goto B5f9f36;
case 0x5f9f38:c.instructions+=1;goto B5f9f38;
case 0x5f9f3e:goto L5f9f3e;
case 0x5f9f45:c.instructions+=2;goto B5f9f45;
case 0x5f9f47:c.instructions+=1;goto B5f9f47;
case 0x5f9f4d:goto L5f9f4d;
case 0x5f9f4f:c.instructions+=1;goto B5f9f4f;
case 0x5f9f54:goto L5f9f54;
case 0x5f9f56:c.instructions+=1;goto B5f9f56;
case 0x5f9f5c:goto L5f9f5c;
case 0x5f9f5e:c.instructions+=1;goto B5f9f5e;
case 0x5f9f63:goto L5f9f63;
case 0x5f9f65:c.instructions+=5;goto B5f9f65;
case 0x5f9f69:c.instructions+=4;goto B5f9f69;
case 0x5f9f70:c.instructions+=3;goto B5f9f70;
case 0x5f9f72:c.instructions+=2;goto B5f9f72;
case 0x5f9f76:c.instructions+=1;goto B5f9f76;
case 0x5f9f7b:goto L5f9f7b;
case 0x5f9f7d:c.instructions+=1;goto B5f9f7d;
case 0x5f9f83:goto L5f9f83;
case 0x5f9f87:c.instructions+=1;goto B5f9f87;
case 0x5f9f8c:goto L5f9f8c;
case 0x5f9f8f:c.instructions+=5;goto B5f9f8f;
case 0x5f9f90:c.instructions+=4;goto B5f9f90;
case 0x5f9f91:c.instructions+=3;goto B5f9f91;
case 0x5f9f95:c.instructions+=2;goto B5f9f95;
case 0x5f9f99:c.instructions+=1;goto B5f9f99;
case 0x5f9f9e:goto L5f9f9e;
case 0x5f9fa2:c.instructions+=3;goto B5f9fa2;
case 0x5f9fa8:c.instructions+=2;goto B5f9fa8;
case 0x5f9fab:c.instructions+=1;goto B5f9fab;
case 0x5f9fb0:goto L5f9fb0;
case 0x5f9fb4:c.instructions+=3;goto B5f9fb4;
case 0x5f9fb6:c.instructions+=2;goto B5f9fb6;
case 0x5f9fb9:c.instructions+=1;goto B5f9fb9;
case 0x5f9fbb:goto L5f9fbb;
case 0x5f9fbf:c.instructions+=6;goto B5f9fbf;
case 0x5f9fc3:c.instructions+=5;goto B5f9fc3;
case 0x5f9fc5:c.instructions+=4;goto B5f9fc5;
case 0x5f9fc6:c.instructions+=3;goto B5f9fc6;
case 0x5f9fc7:c.instructions+=2;goto B5f9fc7;
case 0x5f9fc9:c.instructions+=1;goto B5f9fc9;
case 0x5f9fce:goto L5f9fce;
case 0x5f9fd1:c.instructions+=1;goto B5f9fd1;
case 0x5f9fd6:goto L5f9fd6;
case 0x5f9fda:c.instructions+=3;goto B5f9fda;
case 0x5f9fde:c.instructions+=2;goto B5f9fde;
case 0x5f9fe0:c.instructions+=1;goto B5f9fe0;
case 0x5f9fe6:goto L5f9fe6;
case 0x5f9fea:c.instructions+=2;goto B5f9fea;
case 0x5f9fec:c.instructions+=1;goto B5f9fec;
case 0x5f9ff2:goto L5f9ff2;
case 0x5f9ff8:c.instructions+=2;goto B5f9ff8;
case 0x5f9ffc:c.instructions+=1;goto B5f9ffc;
default:missing_instruction(c.pc);}
B5f9002:L5f9002:{c.instructions+=1;NFSU2_TR(0x5f9002);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f9010:L5f9010:{c.instructions+=3;NFSU2_TR(0x5f9010);
__builtin_memmove((R+0),gp(0x850098),1);
}
B5f9015:{NFSU2_TR(0x5f9015);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f9017:{NFSU2_TR(0x5f9017);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9022;}}
}
B5f9019:L5f9019:{c.instructions+=3;NFSU2_TR(0x5f9019);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B5f901e:{NFSU2_TR(0x5f901e);
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
B5f9020:{NFSU2_TR(0x5f9020);
if(r1(R+518)){{goto L5f9048;}}
}
B5f9022:L5f9022:{c.instructions+=3;NFSU2_TR(0x5f9022);
__builtin_memmove((R+0),gp(0x89d061),1);
}
B5f9027:{NFSU2_TR(0x5f9027);
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
B5f9029:{NFSU2_TR(0x5f9029);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9048;}}
}
B5f902b:L5f902b:{c.instructions+=5;NFSU2_TR(0x5f902b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f902f:{NFSU2_TR(0x5f902f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f9031:{NFSU2_TR(0x5f9031);
u8 U[14];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B5f9039:{NFSU2_TR(0x5f9039);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0xfe01ull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0xfe01ull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0xfe01ull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B5f903d:{NFSU2_TR(0x5f903d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5f9048;}}
}
B5f903f:L5f903f:{c.instructions+=2;NFSU2_TR(0x5f903f);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f9040:{NFSU2_TR(0x5f9040);
u8 U[14];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5f9048:L5f9048:{c.instructions+=1;NFSU2_TR(0x5f9048);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f9050:L5f9050:{c.instructions+=22;NFSU2_TR(0x5f9050);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9052:{NFSU2_TR(0x5f9052);
u8 U[4];
w4(U+0,u32(0x7798acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9057:{NFSU2_TR(0x5f9057);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f905d:{NFSU2_TR(0x5f905d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f905e:{NFSU2_TR(0x5f905e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9065:{NFSU2_TR(0x5f9065);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9066:{NFSU2_TR(0x5f9066);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9067:{NFSU2_TR(0x5f9067);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5f9069:{NFSU2_TR(0x5f9069);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f906a:{NFSU2_TR(0x5f906a);
__builtin_memmove((R+24),(R+4),4);
}
B5f906c:{NFSU2_TR(0x5f906c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f906f:{NFSU2_TR(0x5f906f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9072:{NFSU2_TR(0x5f9072);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9075:{NFSU2_TR(0x5f9075);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9078:{NFSU2_TR(0x5f9078);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f907b:{NFSU2_TR(0x5f907b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9081:{NFSU2_TR(0x5f9081);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9087:{NFSU2_TR(0x5f9087);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9088:{NFSU2_TR(0x5f9088);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f908e:{NFSU2_TR(0x5f908e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f9090:{NFSU2_TR(0x5f9090);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f9096:{NFSU2_TR(0x5f9096);
w4(R+4,u32(0x6ull));
}
B5f909b:L5f909b:{c.instructions+=1;NFSU2_TR(0x5f909b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5f909d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f909bu);}goto L5f909b;}
}
B5f909d:L5f909d:{c.instructions+=2;NFSU2_TR(0x5f909d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f90a3:{NFSU2_TR(0x5f90a3);
w4(R+4,u32(0x6ull));
}
B5f90a8:L5f90a8:{c.instructions+=1;NFSU2_TR(0x5f90a8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5f90aa;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f90a8u);}goto L5f90a8;}
}
B5f90aa:L5f90aa:{c.instructions+=7;NFSU2_TR(0x5f90aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f90b0:{NFSU2_TR(0x5f90b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f90b6:{NFSU2_TR(0x5f90b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f90bc:{NFSU2_TR(0x5f90bc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f90c0:{NFSU2_TR(0x5f90c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11aull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f90c6:{NFSU2_TR(0x5f90c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f90cc:{NFSU2_TR(0x5f90cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f90d1ull));
TAIL_STATIC(0x582080u,582);
}
B5f90d1:L5f90d1:{c.instructions+=3;NFSU2_TR(0x5f90d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x260ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f90d7:{NFSU2_TR(0x5f90d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f90db:{NFSU2_TR(0x5f90db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f90e0ull));
TAIL_STATIC(0x582080u,582);
}
B5f90e0:L5f90e0:{c.instructions+=3;NFSU2_TR(0x5f90e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3a4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f90e6:{NFSU2_TR(0x5f90e6);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f90eb:{NFSU2_TR(0x5f90eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f90f0ull));
TAIL_STATIC(0x582080u,582);
}
B5f90f0:L5f90f0:{c.instructions+=3;NFSU2_TR(0x5f90f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f90f6:{NFSU2_TR(0x5f90f6);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f90fb:{NFSU2_TR(0x5f90fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9100ull));
TAIL_STATIC(0x582080u,582);
}
B5f9100:L5f9100:{c.instructions+=3;NFSU2_TR(0x5f9100);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9106:{NFSU2_TR(0x5f9106);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f910b:{NFSU2_TR(0x5f910b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9110ull));
TAIL_STATIC(0x582080u,582);
}
B5f9110:L5f9110:{c.instructions+=3;NFSU2_TR(0x5f9110);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x770ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9116:{NFSU2_TR(0x5f9116);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f911b:{NFSU2_TR(0x5f911b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9120ull));
TAIL_STATIC(0x581e40u,581);
}
B5f9120:L5f9120:{c.instructions+=3;NFSU2_TR(0x5f9120);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8bcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9126:{NFSU2_TR(0x5f9126);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f912b:{NFSU2_TR(0x5f912b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9130ull));
TAIL_STATIC(0x581e40u,581);
}
B5f9130:L5f9130:{c.instructions+=3;NFSU2_TR(0x5f9130);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa08ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9136:{NFSU2_TR(0x5f9136);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f913b:{NFSU2_TR(0x5f913b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9140ull));
TAIL_STATIC(0x581e40u,581);
}
B5f9140:L5f9140:{c.instructions+=3;NFSU2_TR(0x5f9140);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9146:{NFSU2_TR(0x5f9146);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x7ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f914b:{NFSU2_TR(0x5f914b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9150ull));
TAIL_STATIC(0x581e40u,581);
}
B5f9150:L5f9150:{c.instructions+=3;NFSU2_TR(0x5f9150);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xca0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9156:{NFSU2_TR(0x5f9156);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x8ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f915b:{NFSU2_TR(0x5f915b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9160ull));
TAIL_STATIC(0x581e40u,581);
}
B5f9160:L5f9160:{c.instructions+=3;NFSU2_TR(0x5f9160);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdecull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9166:{NFSU2_TR(0x5f9166);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x9ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f916b:{NFSU2_TR(0x5f916b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9170ull));
TAIL_STATIC(0x581e40u,581);
}
B5f9170:L5f9170:{c.instructions+=3;NFSU2_TR(0x5f9170);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9176:{NFSU2_TR(0x5f9176);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f917b:{NFSU2_TR(0x5f917b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9180ull));
TAIL_STATIC(0x581e40u,581);
}
B5f9180:L5f9180:{c.instructions+=3;NFSU2_TR(0x5f9180);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1084ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9186:{NFSU2_TR(0x5f9186);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0xbull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f918b:{NFSU2_TR(0x5f918b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9190ull));
TAIL_STATIC(0x581e40u,581);
}
B5f9190:L5f9190:{c.instructions+=3;NFSU2_TR(0x5f9190);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11d0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9196:{NFSU2_TR(0x5f9196);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0xcull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f919b:{NFSU2_TR(0x5f919b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f91a0ull));
TAIL_STATIC(0x581e40u,581);
}
B5f91a0:L5f91a0:{c.instructions+=3;NFSU2_TR(0x5f91a0);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0xdull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f91a5:{NFSU2_TR(0x5f91a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x131cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f91ab:{NFSU2_TR(0x5f91ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f91b0ull));
TAIL_STATIC(0x581e40u,581);
}
B5f91b0:L5f91b0:{c.instructions+=3;NFSU2_TR(0x5f91b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1468ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f91b6:{NFSU2_TR(0x5f91b6);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0xeull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f91bb:{NFSU2_TR(0x5f91bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f91c0ull));
TAIL_STATIC(0x581e40u,581);
}
B5f91c0:L5f91c0:{c.instructions+=3;NFSU2_TR(0x5f91c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f91c6:{NFSU2_TR(0x5f91c6);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0xfull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f91cb:{NFSU2_TR(0x5f91cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f91d0ull));
TAIL_STATIC(0x581e40u,581);
}
B5f91d0:L5f91d0:{c.instructions+=3;NFSU2_TR(0x5f91d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f91d6:{NFSU2_TR(0x5f91d6);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x10ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f91db:{NFSU2_TR(0x5f91db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f91e0ull));
TAIL_STATIC(0x582080u,582);
}
B5f91e0:L5f91e0:{c.instructions+=4;NFSU2_TR(0x5f91e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f91e2:{NFSU2_TR(0x5f91e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5f91e4:{NFSU2_TR(0x5f91e4);
w4(R+4,u32(0x18ull));
}
B5f91e9:{NFSU2_TR(0x5f91e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f91ec:L5f91ec:{c.instructions+=1;NFSU2_TR(0x5f91ec);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5f91ee;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f91ecu);}goto L5f91ec;}
}
B5f91ee:L5f91ee:{c.instructions+=3;NFSU2_TR(0x5f91ee);
__builtin_memmove((R+4),(R+24),4);
}
B5f91f0:{NFSU2_TR(0x5f91f0);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x11ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f91f5:{NFSU2_TR(0x5f91f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f91faull));
TAIL_STATIC(0x5efac0u,5ef);
}
B5f91fa:L5f91fa:{c.instructions+=13;NFSU2_TR(0x5f91fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f91fd:{NFSU2_TR(0x5f91fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f9200:{NFSU2_TR(0x5f9200);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9203:{NFSU2_TR(0x5f9203);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f9206:{NFSU2_TR(0x5f9206);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9209:{NFSU2_TR(0x5f9209);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f920c:{NFSU2_TR(0x5f920c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f920f:{NFSU2_TR(0x5f920f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9215:{NFSU2_TR(0x5f9215);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f921b:{NFSU2_TR(0x5f921b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f921e:{NFSU2_TR(0x5f921e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f9220:{NFSU2_TR(0x5f9220);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f9223:{NFSU2_TR(0x5f9223);
w4(R+4,u32(0x6ull));
}
B5f9228:L5f9228:{c.instructions+=1;NFSU2_TR(0x5f9228);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5f922a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f9228u);}goto L5f9228;}
}
B5f922a:L5f922a:{c.instructions+=3;NFSU2_TR(0x5f922a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f922d:{NFSU2_TR(0x5f922d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f9230:{NFSU2_TR(0x5f9230);
w4(R+4,u32(0x8ull));
}
B5f9235:L5f9235:{c.instructions+=1;NFSU2_TR(0x5f9235);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5f9237;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f9235u);}goto L5f9235;}
}
B5f9237:L5f9237:{c.instructions+=8;NFSU2_TR(0x5f9237);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f923b:{NFSU2_TR(0x5f923b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f923c:{NFSU2_TR(0x5f923c);
__builtin_memmove((R+0),(R+24),4);
}
B5f923e:{NFSU2_TR(0x5f923e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f923f:{NFSU2_TR(0x5f923f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f9240:{NFSU2_TR(0x5f9240);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9247:{NFSU2_TR(0x5f9247);
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
B5f924a:{NFSU2_TR(0x5f924a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f9250:L5f9250:{c.instructions+=6;NFSU2_TR(0x5f9250);
__builtin_memmove((R+0),gp(0x7fbe08),4);
}
B5f9255:{NFSU2_TR(0x5f9255);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9257:{NFSU2_TR(0x5f9257);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9258:{NFSU2_TR(0x5f9258);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9259:{NFSU2_TR(0x5f9259);
__builtin_memmove((R+24),(R+4),4);
}
B5f925b:{NFSU2_TR(0x5f925b);
if(r1(R+518)){{goto L5f9262;}}
}
B5f925d:L5f925d:{c.instructions+=1;NFSU2_TR(0x5f925d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9262ull));
TAIL_STATIC(0x5f0760u,5f0);
}
B5f9262:L5f9262:{c.instructions+=2;NFSU2_TR(0x5f9262);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5f9265:{NFSU2_TR(0x5f9265);
if(r1(R+518)){{goto L5f926d;}}
}
B5f9267:L5f9267:{c.instructions+=1;NFSU2_TR(0x5f9267);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5f926d:L5f926d:{c.instructions+=3;NFSU2_TR(0x5f926d);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9274:{NFSU2_TR(0x5f9274);
w4(R+4,u32(0x865480ull));
}
B5f9279:{NFSU2_TR(0x5f9279);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9282;}}
}
B5f927b:L5f927b:{c.instructions+=1;NFSU2_TR(0x5f927b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9280ull));
TAIL_STATIC(0x578320u,578);
}
B5f9280:L5f9280:{c.instructions+=1;NFSU2_TR(0x5f9280);
{goto L5f9287;}
}
B5f9282:L5f9282:{c.instructions+=1;NFSU2_TR(0x5f9282);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9287ull));
TAIL_STATIC(0x581020u,581);
}
B5f9287:L5f9287:{c.instructions+=5;NFSU2_TR(0x5f9287);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f928a:{NFSU2_TR(0x5f928a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5f928e:{NFSU2_TR(0x5f928e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f928f:{NFSU2_TR(0x5f928f);
w4(R+4,u32(0x89e7a0ull));
}
B5f9294:{NFSU2_TR(0x5f9294);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9299ull));
TAIL_STATIC(0x5ed920u,5ed);
}
B5f9299:L5f9299:{c.instructions+=4;NFSU2_TR(0x5f9299);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5f929c:{NFSU2_TR(0x5f929c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f929e:{NFSU2_TR(0x5f929e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f92a1:{NFSU2_TR(0x5f92a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f92a6ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B5f92a6:L5f92a6:{c.instructions+=2;NFSU2_TR(0x5f92a6);
__builtin_memmove((R+4),(R+0),4);
}
B5f92a8:{NFSU2_TR(0x5f92a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f92adull));
TAIL_STATIC(0x59a520u,59a);
}
B5f92ad:L5f92ad:{c.instructions+=5;NFSU2_TR(0x5f92ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f92b3:{NFSU2_TR(0x5f92b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f92b4:{NFSU2_TR(0x5f92b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f92ba:{NFSU2_TR(0x5f92ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f92bb:{NFSU2_TR(0x5f92bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f92c0:L5f92c0:{c.instructions+=11;NFSU2_TR(0x5f92c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5f92c3:{NFSU2_TR(0x5f92c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f92c4:{NFSU2_TR(0x5f92c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f92c5:{NFSU2_TR(0x5f92c5);
__builtin_memmove((R+20),(R+4),4);
}
B5f92c7:{NFSU2_TR(0x5f92c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f92ca:{NFSU2_TR(0x5f92ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f92cb:{NFSU2_TR(0x5f92cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f92cc:{NFSU2_TR(0x5f92cc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5f92ce:{NFSU2_TR(0x5f92ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f92d0:{NFSU2_TR(0x5f92d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f92d4:{NFSU2_TR(0x5f92d4);
if(r1(R+518)){{goto L5f92db;}}
}
B5f92d6:L5f92d6:{c.instructions+=1;NFSU2_TR(0x5f92d6);
w4(R+28,u32(0x1ull));
}
B5f92db:L5f92db:{c.instructions+=3;NFSU2_TR(0x5f92db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f92de:{NFSU2_TR(0x5f92de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f92e0:{NFSU2_TR(0x5f92e0);
if(r1(R+518)){{goto L5f92e3;}}
}
B5f92e2:L5f92e2:{c.instructions+=1;NFSU2_TR(0x5f92e2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5f92e3:L5f92e3:{c.instructions+=3;NFSU2_TR(0x5f92e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f92e6:{NFSU2_TR(0x5f92e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f92e8:{NFSU2_TR(0x5f92e8);
if(r1(R+518)){{goto L5f92eb;}}
}
B5f92ea:L5f92ea:{c.instructions+=1;NFSU2_TR(0x5f92ea);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5f92eb:L5f92eb:{c.instructions+=3;NFSU2_TR(0x5f92eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f92ee:{NFSU2_TR(0x5f92ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f92f0:{NFSU2_TR(0x5f92f0);
if(r1(R+518)){{goto L5f92f3;}}
}
B5f92f2:L5f92f2:{c.instructions+=1;NFSU2_TR(0x5f92f2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5f92f3:L5f92f3:{c.instructions+=3;NFSU2_TR(0x5f92f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f92f6:{NFSU2_TR(0x5f92f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f92f8:{NFSU2_TR(0x5f92f8);
if(r1(R+518)){{goto L5f92fb;}}
}
B5f92fa:L5f92fa:{c.instructions+=1;NFSU2_TR(0x5f92fa);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5f92fb:L5f92fb:{c.instructions+=3;NFSU2_TR(0x5f92fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f92fe:{NFSU2_TR(0x5f92fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9300:{NFSU2_TR(0x5f9300);
if(r1(R+518)){{goto L5f9303;}}
}
B5f9302:L5f9302:{c.instructions+=1;NFSU2_TR(0x5f9302);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5f9303:L5f9303:{c.instructions+=4;NFSU2_TR(0x5f9303);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f9309:{NFSU2_TR(0x5f9309);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f930b:{NFSU2_TR(0x5f930b);
__builtin_memmove((R+0),gp(0x850078),4);
}
B5f9310:{NFSU2_TR(0x5f9310);
if(r1(R+518)){{goto L5f9328;}}
}
B5f9312:L5f9312:{c.instructions+=2;NFSU2_TR(0x5f9312);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9317:{NFSU2_TR(0x5f9317);
if(r1(R+518)){{goto L5f931e;}}
}
B5f9319:L5f9319:{c.instructions+=2;NFSU2_TR(0x5f9319);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f931c:{NFSU2_TR(0x5f931c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9328;}}
}
B5f931e:L5f931e:{c.instructions+=2;NFSU2_TR(0x5f931e);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9325:{NFSU2_TR(0x5f9325);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9328;}}
}
B5f9327:L5f9327:{c.instructions+=1;NFSU2_TR(0x5f9327);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B5f9328:L5f9328:{c.instructions+=3;NFSU2_TR(0x5f9328);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f932a:{NFSU2_TR(0x5f932a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f932c:{NFSU2_TR(0x5f932c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f9339;}}
}
B5f932e:L5f932e:{c.instructions+=1;NFSU2_TR(0x5f932e);
__builtin_memmove((R+28),(R+28),4);
}
B5f9330:L5f9330:{c.instructions+=4;NFSU2_TR(0x5f9330);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f9334:{NFSU2_TR(0x5f9334);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f9335:{NFSU2_TR(0x5f9335);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f9337:{NFSU2_TR(0x5f9337);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f9330u);}goto L5f9330;}}
}
B5f9339:L5f9339:{c.instructions+=6;NFSU2_TR(0x5f9339);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f933f:{NFSU2_TR(0x5f933f);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0xe59314f2ull))));
}
B5f9344:{NFSU2_TR(0x5f9344);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9348:{NFSU2_TR(0x5f9348);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f934b:{NFSU2_TR(0x5f934b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f934d:{NFSU2_TR(0x5f934d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f9395;}}
}
B5f934f:L5f934f:{c.instructions+=1;NFSU2_TR(0x5f934f);
__builtin_memmove((R+12),(R+0),4);
}
B5f9351:L5f9351:{c.instructions+=4;NFSU2_TR(0x5f9351);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9355:{NFSU2_TR(0x5f9355);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9356:{NFSU2_TR(0x5f9356);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9357:{NFSU2_TR(0x5f9357);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f935cull));
TAIL_STATIC(0x43c140u,43c);
}
B5f935c:L5f935c:{c.instructions+=5;NFSU2_TR(0x5f935c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f9360:{NFSU2_TR(0x5f9360);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9361:{NFSU2_TR(0x5f9361);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9362:{NFSU2_TR(0x5f9362);
__builtin_memmove((R+24),(R+0),4);
}
B5f9364:{NFSU2_TR(0x5f9364);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9369ull));
TAIL_STATIC(0x43c140u,43c);
}
B5f9369:L5f9369:{c.instructions+=3;NFSU2_TR(0x5f9369);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5f936c:{NFSU2_TR(0x5f936c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f936e:{NFSU2_TR(0x5f936e);
if(r1(R+518)){{goto L5f9392;}}
}
B5f9370:L5f9370:{c.instructions+=14;NFSU2_TR(0x5f9370);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5f9374:{NFSU2_TR(0x5f9374);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5f9378:{NFSU2_TR(0x5f9378);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5f937c:{NFSU2_TR(0x5f937c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5f937e:{NFSU2_TR(0x5f937e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+8))));
}
B5f9380:{NFSU2_TR(0x5f9380);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5f9382:{NFSU2_TR(0x5f9382);
__builtin_memmove((R+8),(R+24),4);
}
B5f9384:{NFSU2_TR(0x5f9384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5f9386:{NFSU2_TR(0x5f9386);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+8))));
}
B5f9388:{NFSU2_TR(0x5f9388);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5f938a:{NFSU2_TR(0x5f938a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f938c:{NFSU2_TR(0x5f938c);
__builtin_memmove((R+4),(R+24),4);
}
B5f938e:{NFSU2_TR(0x5f938e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B5f9390:{NFSU2_TR(0x5f9390);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5f9392:L5f9392:{c.instructions+=2;NFSU2_TR(0x5f9392);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5f9393:{NFSU2_TR(0x5f9393);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f9351u);}goto L5f9351;}}
}
B5f9395:L5f9395:{c.instructions+=4;NFSU2_TR(0x5f9395);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f9398:{NFSU2_TR(0x5f9398);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5f939a:{NFSU2_TR(0x5f939a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B5f939e:{NFSU2_TR(0x5f939e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f93a2:L5f93a2:{c.instructions+=2;NFSU2_TR(0x5f93a2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5f93a5:{NFSU2_TR(0x5f93a5);
if(r1(R+518)){{goto L5f943a;}}
}
B5f93ab:L5f93ab:{c.instructions+=4;NFSU2_TR(0x5f93ab);
__builtin_memmove((R+8),gp(0x89e814),4);
}
B5f93b1:{NFSU2_TR(0x5f93b1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f93b3:{NFSU2_TR(0x5f93b3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f93b5:{NFSU2_TR(0x5f93b5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f93d6;}}
}
B5f93b7:L5f93b7:{c.instructions+=2;NFSU2_TR(0x5f93b7);
__builtin_memmove((R+24),gp(0x89e810),4);
}
B5f93bd:{NFSU2_TR(0x5f93bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f93c0:L5f93c0:{c.instructions+=3;NFSU2_TR(0x5f93c0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+20,u32(s32(s8(r1(U+0)))));
}
B5f93c3:{NFSU2_TR(0x5f93c3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f93c5:{NFSU2_TR(0x5f93c5);
if(r1(R+518)){{goto L5f9415;}}
}
B5f93c7:L5f93c7:{c.instructions+=4;NFSU2_TR(0x5f93c7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f93c8:{NFSU2_TR(0x5f93c8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x940ull))));
}
B5f93ce:{NFSU2_TR(0x5f93ce);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f93d0:{NFSU2_TR(0x5f93d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f93c0u);}goto L5f93c0;}}
}
B5f93d2:L5f93d2:{c.instructions+=1;NFSU2_TR(0x5f93d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5f93d6:L5f93d6:{c.instructions+=1;NFSU2_TR(0x5f93d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f93d8:L5f93d8:{c.instructions+=5;NFSU2_TR(0x5f93d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5f93da:{NFSU2_TR(0x5f93da);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5f93e0:{NFSU2_TR(0x5f93e0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5f93e3:{NFSU2_TR(0x5f93e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f93e5:{NFSU2_TR(0x5f93e5);
if(r1(R+518)){{goto L5f9424;}}
}
B5f93e7:L5f93e7:{c.instructions+=3;NFSU2_TR(0x5f93e7);
__builtin_memmove((R+8),gp(0x850078),4);
}
B5f93ed:{NFSU2_TR(0x5f93ed);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f93f3:{NFSU2_TR(0x5f93f3);
if(r1(R+518)){{goto L5f93fa;}}
}
B5f93f5:L5f93f5:{c.instructions+=2;NFSU2_TR(0x5f93f5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f93f8:{NFSU2_TR(0x5f93f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9424;}}
}
B5f93fa:L5f93fa:{c.instructions+=2;NFSU2_TR(0x5f93fa);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9401:{NFSU2_TR(0x5f9401);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9424;}}
}
B5f9403:L5f9403:{c.instructions+=3;NFSU2_TR(0x5f9403);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5f940a:{NFSU2_TR(0x5f940a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f940c:{NFSU2_TR(0x5f940c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9423;}}
}
B5f940e:L5f940e:{c.instructions+=3;NFSU2_TR(0x5f940e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5f9410:{NFSU2_TR(0x5f9410);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x4ull))));
}
B5f9413:{NFSU2_TR(0x5f9413);
{goto L5f9424;}
}
B5f9415:L5f9415:{c.instructions+=4;NFSU2_TR(0x5f9415);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5f9419:{NFSU2_TR(0x5f9419);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x940ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5f941f:{NFSU2_TR(0x5f941f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5f9421:{NFSU2_TR(0x5f9421);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f93d8u);}goto L5f93d8;}
}
B5f9423:L5f9423:{c.instructions+=1;NFSU2_TR(0x5f9423);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5f9424:L5f9424:{c.instructions+=4;NFSU2_TR(0x5f9424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f9427:{NFSU2_TR(0x5f9427);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5f942b:{NFSU2_TR(0x5f942b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f942d:{NFSU2_TR(0x5f942d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9435;}}
}
B5f942f:L5f942f:{c.instructions+=1;NFSU2_TR(0x5f942f);
__builtin_memmove(gp(0x89e7d0),(R+4),1);
}
B5f9435:L5f9435:{c.instructions+=2;NFSU2_TR(0x5f9435);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B5f9437:{NFSU2_TR(0x5f9437);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f943a:L5f943a:{c.instructions+=6;NFSU2_TR(0x5f943a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f943e:{NFSU2_TR(0x5f943e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5f943f:{NFSU2_TR(0x5f943f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5f9442:{NFSU2_TR(0x5f9442);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f9445:{NFSU2_TR(0x5f9445);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9449:{NFSU2_TR(0x5f9449);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f93a2u);}goto L5f93a2;}}
}
B5f944f:L5f944f:{c.instructions+=6;NFSU2_TR(0x5f944f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f9450:{NFSU2_TR(0x5f9450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f9451:{NFSU2_TR(0x5f9451);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f9452:{NFSU2_TR(0x5f9452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f9453:{NFSU2_TR(0x5f9453);
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
B5f9456:{NFSU2_TR(0x5f9456);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f9460:L5f9460:{c.instructions+=7;NFSU2_TR(0x5f9460);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9461:{NFSU2_TR(0x5f9461);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9462:{NFSU2_TR(0x5f9462);
__builtin_memmove((R+24),(R+4),4);
}
B5f9464:{NFSU2_TR(0x5f9464);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f9466:{NFSU2_TR(0x5f9466);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5f9468:{NFSU2_TR(0x5f9468);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f946b:{NFSU2_TR(0x5f946b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f94b6;}}
}
B5f946d:L5f946d:{c.instructions+=13;NFSU2_TR(0x5f946d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9470:{NFSU2_TR(0x5f9470);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9473:{NFSU2_TR(0x5f9473);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9476:{NFSU2_TR(0x5f9476);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9479:{NFSU2_TR(0x5f9479);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f947f:{NFSU2_TR(0x5f947f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9485:{NFSU2_TR(0x5f9485);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9488:{NFSU2_TR(0x5f9488);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x119ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f948e:{NFSU2_TR(0x5f948e);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5f9493:{NFSU2_TR(0x5f9493);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B5f9499:{NFSU2_TR(0x5f9499);
__builtin_memmove(gp(0x869234),(R+0),4);
}
B5f949e:{NFSU2_TR(0x5f949e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f94a1:{NFSU2_TR(0x5f94a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f94a6ull));
TAIL_STATIC(0x5838a0u,583);
}
B5f94a6:L5f94a6:{c.instructions+=2;NFSU2_TR(0x5f94a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f94a8:{NFSU2_TR(0x5f94a8);
if(r1(R+518)){{goto L5f94b6;}}
}
B5f94aa:L5f94aa:{c.instructions+=1;NFSU2_TR(0x5f94aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f94afull));
TAIL_STATIC(0x58c250u,58c);
}
B5f94af:L5f94af:{c.instructions+=2;NFSU2_TR(0x5f94af);
__builtin_memmove((R+4),(R+24),4);
}
B5f94b1:{NFSU2_TR(0x5f94b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f94b6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f92c0u);}goto L5f92c0;}
}
B5f94b6:L5f94b6:{c.instructions+=2;NFSU2_TR(0x5f94b6);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f94bc:{NFSU2_TR(0x5f94bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f94c6;}}
}
B5f94be:L5f94be:{c.instructions+=2;NFSU2_TR(0x5f94be);
u8 U[14];
__builtin_memmove((U+6),gp(0x890104),4);
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
B5f94c4:{NFSU2_TR(0x5f94c4);
if(r1(R+518)){{goto L5f94cf;}}
}
B5f94c6:L5f94c6:{c.instructions+=2;NFSU2_TR(0x5f94c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f94c7:{NFSU2_TR(0x5f94c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f94ccull));
TAIL_STATIC(0x56d850u,56d);
}
B5f94cc:L5f94cc:{c.instructions+=1;NFSU2_TR(0x5f94cc);
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
B5f94cf:L5f94cf:{c.instructions+=3;NFSU2_TR(0x5f94cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f94d0:{NFSU2_TR(0x5f94d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f94d1:{NFSU2_TR(0x5f94d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f94e0:L5f94e0:{c.instructions+=4;NFSU2_TR(0x5f94e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f94e1:{NFSU2_TR(0x5f94e1);
__builtin_memmove((R+24),(R+4),4);
}
B5f94e3:{NFSU2_TR(0x5f94e3);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x3ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5f94e6:{NFSU2_TR(0x5f94e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f95d7;}}
}
B5f94ec:L5f94ec:{c.instructions+=6;NFSU2_TR(0x5f94ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f94ed:{NFSU2_TR(0x5f94ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f94ee:{NFSU2_TR(0x5f94ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f94f0:{NFSU2_TR(0x5f94f0);
u8 U[4];
w4(U+0,u32(0x794da4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f94f5:{NFSU2_TR(0x5f94f5);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5f94fb:{NFSU2_TR(0x5f94fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9500ull));
TAIL_STATIC(0x555e80u,555);
}
B5f9500:L5f9500:{c.instructions+=3;NFSU2_TR(0x5f9500);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f9503:{NFSU2_TR(0x5f9503);
w4(R+4,u32(0x827b88ull));
}
B5f9508:{NFSU2_TR(0x5f9508);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f950dull));
TAIL_STATIC(0x43aaa0u,43a);
}
B5f950d:L5f950d:{c.instructions+=3;NFSU2_TR(0x5f950d);
__builtin_memmove((R+28),gp(0x890080),4);
}
B5f9513:{NFSU2_TR(0x5f9513);
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
B5f9515:{NFSU2_TR(0x5f9515);
if(r1(R+518)){{goto L5f954b;}}
}
B5f9517:L5f9517:{c.instructions+=3;NFSU2_TR(0x5f9517);
w4(R+4,u32(0x827b88ull));
}
B5f951c:{NFSU2_TR(0x5f951c);
s4(0x7fb714,u32(0x40c00000ull));
}
B5f9526:{NFSU2_TR(0x5f9526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f952bull));
TAIL_STATIC(0x4022c0u,402);
}
B5f952b:L5f952b:{c.instructions+=6;NFSU2_TR(0x5f952b);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5f9530:{NFSU2_TR(0x5f9530);
__builtin_memmove(gp(0x869234),(R+0),4);
}
B5f9535:{NFSU2_TR(0x5f9535);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f9539:{NFSU2_TR(0x5f9539);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f953c:{NFSU2_TR(0x5f953c);
w4(R+4,u32(0x8ull));
}
B5f9541:{NFSU2_TR(0x5f9541);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f9543:L5f9543:{c.instructions+=1;NFSU2_TR(0x5f9543);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5f9545;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f9543u);}goto L5f9543;}
}
B5f9545:L5f9545:{c.instructions+=1;NFSU2_TR(0x5f9545);
__builtin_memmove((R+28),gp(0x890080),4);
}
B5f954b:L5f954b:{c.instructions+=2;NFSU2_TR(0x5f954b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B5f954e:{NFSU2_TR(0x5f954e);
w4(R+20,u32(0x6ull));
}
B5f9553:L5f9553:{c.instructions+=3;NFSU2_TR(0x5f9553);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5f9555:{NFSU2_TR(0x5f9555);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9557:{NFSU2_TR(0x5f9557);
if(r1(R+518)){{goto L5f95c0;}}
}
B5f9559:L5f9559:{c.instructions+=3;NFSU2_TR(0x5f9559);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f955b:{NFSU2_TR(0x5f955b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f955e:{NFSU2_TR(0x5f955e);
if(r1(R+518)){{goto L5f956e;}}
}
B5f9560:L5f9560:{c.instructions+=2;NFSU2_TR(0x5f9560);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9563:{NFSU2_TR(0x5f9563);
if(r1(R+518)){{goto L5f956e;}}
}
B5f9565:L5f9565:{c.instructions+=2;NFSU2_TR(0x5f9565);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9567:{NFSU2_TR(0x5f9567);
if(r1(R+518)){{goto L5f956e;}}
}
B5f9569:L5f9569:{c.instructions+=2;NFSU2_TR(0x5f9569);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f956c:{NFSU2_TR(0x5f956c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f95c0;}}
}
B5f956e:L5f956e:{c.instructions+=4;NFSU2_TR(0x5f956e);
__builtin_memmove((R+8),gp(0x890118),4);
}
B5f9574:{NFSU2_TR(0x5f9574);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f9576:{NFSU2_TR(0x5f9576);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9578:{NFSU2_TR(0x5f9578);
if(r1(R+518)){{goto L5f958a;}}
}
B5f957a:L5f957a:{c.instructions+=2;NFSU2_TR(0x5f957a);
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
B5f957c:{NFSU2_TR(0x5f957c);
if(r1(R+518)){{goto L5f958a;}}
}
B5f957e:L5f957e:{c.instructions+=4;NFSU2_TR(0x5f957e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5f9582:{NFSU2_TR(0x5f9582);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9583:{NFSU2_TR(0x5f9583);
__builtin_memmove((R+4),(R+28),4);
}
B5f9585:{NFSU2_TR(0x5f9585);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f958aull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B5f958a:L5f958a:{c.instructions+=3;NFSU2_TR(0x5f958a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x998ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f9590:{NFSU2_TR(0x5f9590);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f9592:{NFSU2_TR(0x5f9592);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f95c0;}}
}
B5f9594:L5f9594:{c.instructions+=7;NFSU2_TR(0x5f9594);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5f959a:{NFSU2_TR(0x5f959a);
__builtin_memmove((R+4),gp(0x7a55c0),4);
}
B5f95a0:{NFSU2_TR(0x5f95a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x974ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f95a6:{NFSU2_TR(0x5f95a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x978ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f95ac:{NFSU2_TR(0x5f95ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x998ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f95b3:{NFSU2_TR(0x5f95b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x999ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f95ba:{NFSU2_TR(0x5f95ba);
__builtin_memmove((R+28),gp(0x890080),4);
}
B5f95c0:L5f95c0:{c.instructions+=3;NFSU2_TR(0x5f95c0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5f95c3:{NFSU2_TR(0x5f95c3);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5f95c4:{NFSU2_TR(0x5f95c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f9553u);}goto L5f9553;}}
}
B5f95c6:L5f95c6:{c.instructions+=1;NFSU2_TR(0x5f95c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f95cbull));
TAIL_STATIC(0x5838a0u,583);
}
B5f95cb:L5f95cb:{c.instructions+=4;NFSU2_TR(0x5f95cb);
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
B5f95cd:{NFSU2_TR(0x5f95cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f95ce:{NFSU2_TR(0x5f95ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f95cf:{NFSU2_TR(0x5f95cf);
if(r1(R+518)){{goto L5f95d7;}}
}
B5f95d1:L5f95d1:{c.instructions+=2;NFSU2_TR(0x5f95d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f95d2:{NFSU2_TR(0x5f95d2);
TAIL_STATIC(0x58c270u,58c);
}
B5f95d7:L5f95d7:{c.instructions+=2;NFSU2_TR(0x5f95d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f95d8:{NFSU2_TR(0x5f95d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f95e0:L5f95e0:{c.instructions+=3;NFSU2_TR(0x5f95e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f95e3:{NFSU2_TR(0x5f95e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f95e5:{NFSU2_TR(0x5f95e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f95f1;}}
}
B5f95e7:L5f95e7:{c.instructions+=3;NFSU2_TR(0x5f95e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f95eb:{NFSU2_TR(0x5f95eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f95ec:{NFSU2_TR(0x5f95ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f95f1ull));
TAIL_STATIC(0x5f02b0u,5f0);
}
B5f95f1:L5f95f1:{c.instructions+=6;NFSU2_TR(0x5f95f1);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B5f95f6:{NFSU2_TR(0x5f95f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f95f8:{NFSU2_TR(0x5f95f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f95f9:{NFSU2_TR(0x5f95f9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f95fd:{NFSU2_TR(0x5f95fd);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f95ff:{NFSU2_TR(0x5f95ff);
if(r1(R+518)){{goto L5f969b;}}
}
B5f9605:L5f9605:{c.instructions+=4;NFSU2_TR(0x5f9605);
w4(R+4,u32(m1(0x89e7b0)));
}
B5f960c:{NFSU2_TR(0x5f960c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f960d:{NFSU2_TR(0x5f960d);
__builtin_memmove((R+4),(R+24),4);
}
B5f960f:{NFSU2_TR(0x5f960f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9614ull));
TAIL_STATIC(0x581d00u,581);
}
B5f9614:L5f9614:{c.instructions+=5;NFSU2_TR(0x5f9614);
w4(R+8,u32(s32(s16(m2(0x89e7a0)))));
}
B5f961b:{NFSU2_TR(0x5f961b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f961d:{NFSU2_TR(0x5f961d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f961e:{NFSU2_TR(0x5f961e);
__builtin_memmove((R+4),(R+24),4);
}
B5f9620:{NFSU2_TR(0x5f9620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9625ull));
TAIL_STATIC(0x581d00u,581);
}
B5f9625:L5f9625:{c.instructions+=5;NFSU2_TR(0x5f9625);
w4(R+0,u32(m1(0x89e7a4)));
}
B5f962c:{NFSU2_TR(0x5f962c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f962e:{NFSU2_TR(0x5f962e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f962f:{NFSU2_TR(0x5f962f);
__builtin_memmove((R+4),(R+24),4);
}
B5f9631:{NFSU2_TR(0x5f9631);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9636ull));
TAIL_STATIC(0x581d00u,581);
}
B5f9636:L5f9636:{c.instructions+=5;NFSU2_TR(0x5f9636);
w4(R+4,u32(m1(0x89e7f8)));
}
B5f963d:{NFSU2_TR(0x5f963d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f963f:{NFSU2_TR(0x5f963f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9640:{NFSU2_TR(0x5f9640);
__builtin_memmove((R+4),(R+24),4);
}
B5f9642:{NFSU2_TR(0x5f9642);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9647ull));
TAIL_STATIC(0x581d00u,581);
}
B5f9647:L5f9647:{c.instructions+=5;NFSU2_TR(0x5f9647);
__builtin_memmove((R+8),gp(0x89e7f4),4);
}
B5f964d:{NFSU2_TR(0x5f964d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f964f:{NFSU2_TR(0x5f964f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9650:{NFSU2_TR(0x5f9650);
__builtin_memmove((R+4),(R+24),4);
}
B5f9652:{NFSU2_TR(0x5f9652);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9657ull));
TAIL_STATIC(0x581d00u,581);
}
B5f9657:L5f9657:{c.instructions+=5;NFSU2_TR(0x5f9657);
__builtin_memmove((R+0),gp(0x89e7bc),4);
}
B5f965c:{NFSU2_TR(0x5f965c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f965e:{NFSU2_TR(0x5f965e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f965f:{NFSU2_TR(0x5f965f);
__builtin_memmove((R+4),(R+24),4);
}
B5f9661:{NFSU2_TR(0x5f9661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9666ull));
TAIL_STATIC(0x581d00u,581);
}
B5f9666:L5f9666:{c.instructions+=10;NFSU2_TR(0x5f9666);
__builtin_memmove((R+4),gp(0x89e7a0),2);
}
B5f966d:{NFSU2_TR(0x5f966d);
__builtin_memmove((R+8),gp(0x89e7bc),2);
}
B5f9674:{NFSU2_TR(0x5f9674);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B5f9679:{NFSU2_TR(0x5f9679);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f967b:{NFSU2_TR(0x5f967b);
__builtin_memmove(gp(0x8500b8),(R+4),2);
}
B5f9682:{NFSU2_TR(0x5f9682);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9684:{NFSU2_TR(0x5f9684);
__builtin_memmove((R+4),(R+24),4);
}
B5f9686:{NFSU2_TR(0x5f9686);
__builtin_memmove(gp(0x8500ba),(R+8),2);
}
B5f968d:{NFSU2_TR(0x5f968d);
__builtin_memmove(gp(0x8500bc),(R+0),4);
}
B5f9692:{NFSU2_TR(0x5f9692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9697ull));
TAIL_STATIC(0x581d00u,581);
}
B5f9697:L5f9697:{c.instructions+=2;NFSU2_TR(0x5f9697);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f9698:{NFSU2_TR(0x5f9698);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f969b:L5f969b:{c.instructions+=4;NFSU2_TR(0x5f969b);
w4(R+4,u32(m1(0x850088)));
}
B5f96a2:{NFSU2_TR(0x5f96a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f96a3:{NFSU2_TR(0x5f96a3);
__builtin_memmove((R+4),(R+24),4);
}
B5f96a5:{NFSU2_TR(0x5f96a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f96aaull));
TAIL_STATIC(0x581d00u,581);
}
B5f96aa:L5f96aa:{c.instructions+=5;NFSU2_TR(0x5f96aa);
w4(R+8,u32(s32(s16(m2(0x8500b8)))));
}
B5f96b1:{NFSU2_TR(0x5f96b1);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f96b3:{NFSU2_TR(0x5f96b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f96b4:{NFSU2_TR(0x5f96b4);
__builtin_memmove((R+4),(R+24),4);
}
B5f96b6:{NFSU2_TR(0x5f96b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f96bbull));
TAIL_STATIC(0x581d00u,581);
}
B5f96bb:L5f96bb:{c.instructions+=5;NFSU2_TR(0x5f96bb);
w4(R+0,u32(m1(0x8500bc)));
}
B5f96c2:{NFSU2_TR(0x5f96c2);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f96c4:{NFSU2_TR(0x5f96c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f96c5:{NFSU2_TR(0x5f96c5);
__builtin_memmove((R+4),(R+24),4);
}
B5f96c7:{NFSU2_TR(0x5f96c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f96ccull));
TAIL_STATIC(0x581d00u,581);
}
B5f96cc:L5f96cc:{c.instructions+=2;NFSU2_TR(0x5f96cc);
w4(R+4,u32(0x83aab4ull));
}
B5f96d1:{NFSU2_TR(0x5f96d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f96d6ull));
TAIL_STATIC(0x5028f0u,502);
}
B5f96d6:L5f96d6:{c.instructions+=5;NFSU2_TR(0x5f96d6);
w4(R+4,u32(r1(R+0)));
}
B5f96d9:{NFSU2_TR(0x5f96d9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f96db:{NFSU2_TR(0x5f96db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f96dc:{NFSU2_TR(0x5f96dc);
__builtin_memmove((R+4),(R+24),4);
}
B5f96de:{NFSU2_TR(0x5f96de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f96e3ull));
TAIL_STATIC(0x581d00u,581);
}
B5f96e3:L5f96e3:{c.instructions+=2;NFSU2_TR(0x5f96e3);
w4(R+4,u32(0x83aab4ull));
}
B5f96e8:{NFSU2_TR(0x5f96e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f96edull));
TAIL_STATIC(0x502730u,502);
}
B5f96ed:L5f96ed:{c.instructions+=4;NFSU2_TR(0x5f96ed);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f96ef:{NFSU2_TR(0x5f96ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f96f0:{NFSU2_TR(0x5f96f0);
__builtin_memmove((R+4),(R+24),4);
}
B5f96f2:{NFSU2_TR(0x5f96f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f96f7ull));
TAIL_STATIC(0x581d00u,581);
}
B5f96f7:L5f96f7:{c.instructions+=5;NFSU2_TR(0x5f96f7);
w4(R+8,u32(m2(0x8500ba)));
}
B5f96fe:{NFSU2_TR(0x5f96fe);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9700:{NFSU2_TR(0x5f9700);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9701:{NFSU2_TR(0x5f9701);
__builtin_memmove((R+4),(R+24),4);
}
B5f9703:{NFSU2_TR(0x5f9703);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9708ull));
TAIL_STATIC(0x581d00u,581);
}
B5f9708:L5f9708:{c.instructions+=4;NFSU2_TR(0x5f9708);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f970a:{NFSU2_TR(0x5f970a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f970c:{NFSU2_TR(0x5f970c);
__builtin_memmove((R+4),(R+24),4);
}
B5f970e:{NFSU2_TR(0x5f970e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9713ull));
TAIL_STATIC(0x581d00u,581);
}
B5f9713:L5f9713:{c.instructions+=2;NFSU2_TR(0x5f9713);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f9714:{NFSU2_TR(0x5f9714);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f9720:L5f9720:{c.instructions+=7;NFSU2_TR(0x5f9720);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9721:{NFSU2_TR(0x5f9721);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9722:{NFSU2_TR(0x5f9722);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9723:{NFSU2_TR(0x5f9723);
__builtin_memmove((R+28),(R+4),4);
}
B5f9725:{NFSU2_TR(0x5f9725);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f9728:{NFSU2_TR(0x5f9728);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f972a:{NFSU2_TR(0x5f972a);
if(r1(R+518)){{goto L5f9748;}}
}
B5f972c:L5f972c:{c.instructions+=3;NFSU2_TR(0x5f972c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f972e:{NFSU2_TR(0x5f972e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9731:{NFSU2_TR(0x5f9731);
if(r1(R+518)){{goto L5f9741;}}
}
B5f9733:L5f9733:{c.instructions+=2;NFSU2_TR(0x5f9733);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9736:{NFSU2_TR(0x5f9736);
if(r1(R+518)){{goto L5f9741;}}
}
B5f9738:L5f9738:{c.instructions+=2;NFSU2_TR(0x5f9738);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f973a:{NFSU2_TR(0x5f973a);
if(r1(R+518)){{goto L5f9741;}}
}
B5f973c:L5f973c:{c.instructions+=2;NFSU2_TR(0x5f973c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f973f:{NFSU2_TR(0x5f973f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9748;}}
}
B5f9741:L5f9741:{c.instructions+=1;NFSU2_TR(0x5f9741);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f9748:L5f9748:{c.instructions+=2;NFSU2_TR(0x5f9748);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f974b:{NFSU2_TR(0x5f974b);
w4(R+12,u32(0x6ull));
}
B5f9750:L5f9750:{c.instructions+=3;NFSU2_TR(0x5f9750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5f9752:{NFSU2_TR(0x5f9752);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9754:{NFSU2_TR(0x5f9754);
if(r1(R+518)){{goto L5f9782;}}
}
B5f9756:L5f9756:{c.instructions+=3;NFSU2_TR(0x5f9756);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f9758:{NFSU2_TR(0x5f9758);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f975b:{NFSU2_TR(0x5f975b);
if(r1(R+518)){{goto L5f976b;}}
}
B5f975d:L5f975d:{c.instructions+=2;NFSU2_TR(0x5f975d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9760:{NFSU2_TR(0x5f9760);
if(r1(R+518)){{goto L5f976b;}}
}
B5f9762:L5f9762:{c.instructions+=2;NFSU2_TR(0x5f9762);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9764:{NFSU2_TR(0x5f9764);
if(r1(R+518)){{goto L5f976b;}}
}
B5f9766:L5f9766:{c.instructions+=2;NFSU2_TR(0x5f9766);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9769:{NFSU2_TR(0x5f9769);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9782;}}
}
B5f976b:L5f976b:{c.instructions+=2;NFSU2_TR(0x5f976b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f976c:{NFSU2_TR(0x5f976c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9771ull));
TAIL_STATIC(0x440540u,440);
}
B5f9771:L5f9771:{c.instructions+=5;NFSU2_TR(0x5f9771);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5f9777:{NFSU2_TR(0x5f9777);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f977a:{NFSU2_TR(0x5f977a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f977d:{NFSU2_TR(0x5f977d);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B5f977f:{NFSU2_TR(0x5f977f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f9782:L5f9782:{c.instructions+=3;NFSU2_TR(0x5f9782);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5f9785:{NFSU2_TR(0x5f9785);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f9786:{NFSU2_TR(0x5f9786);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f9750u);}goto L5f9750;}}
}
B5f9788:L5f9788:{c.instructions+=4;NFSU2_TR(0x5f9788);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f9789:{NFSU2_TR(0x5f9789);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f978a:{NFSU2_TR(0x5f978a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f978b:{NFSU2_TR(0x5f978b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f9790:L5f9790:{c.instructions+=6;NFSU2_TR(0x5f9790);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9791:{NFSU2_TR(0x5f9791);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9792:{NFSU2_TR(0x5f9792);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f9794:{NFSU2_TR(0x5f9794);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f9797:{NFSU2_TR(0x5f9797);
w4(R+28,u32(0x6ull));
}
B5f979c:{NFSU2_TR(0x5f979c);
__builtin_memmove((R+16),(R+16),4);
}
B5f97a0:L5f97a0:{c.instructions+=3;NFSU2_TR(0x5f97a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f97a2:{NFSU2_TR(0x5f97a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f97a4:{NFSU2_TR(0x5f97a4);
if(r1(R+518)){{goto L5f97c1;}}
}
B5f97a6:L5f97a6:{c.instructions+=2;NFSU2_TR(0x5f97a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f97a9:{NFSU2_TR(0x5f97a9);
if(r1(R+518)){{goto L5f97c1;}}
}
B5f97ab:L5f97ab:{c.instructions+=3;NFSU2_TR(0x5f97ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f97ad:{NFSU2_TR(0x5f97ad);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f97b0:{NFSU2_TR(0x5f97b0);
if(r1(R+518)){{goto L5f97c1;}}
}
B5f97b2:L5f97b2:{c.instructions+=2;NFSU2_TR(0x5f97b2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f97b5:{NFSU2_TR(0x5f97b5);
if(r1(R+518)){{goto L5f97c1;}}
}
B5f97b7:L5f97b7:{c.instructions+=2;NFSU2_TR(0x5f97b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f97b9:{NFSU2_TR(0x5f97b9);
if(r1(R+518)){{goto L5f97c1;}}
}
B5f97bb:L5f97bb:{c.instructions+=2;NFSU2_TR(0x5f97bb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f97be:{NFSU2_TR(0x5f97be);
if(r1(R+518)){{goto L5f97c1;}}
}
B5f97c0:L5f97c0:{c.instructions+=1;NFSU2_TR(0x5f97c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f97c1:L5f97c1:{c.instructions+=3;NFSU2_TR(0x5f97c1);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5f97c4:{NFSU2_TR(0x5f97c4);
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
B5f97c5:{NFSU2_TR(0x5f97c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f97a0u);}goto L5f97a0;}}
}
B5f97c7:L5f97c7:{c.instructions+=3;NFSU2_TR(0x5f97c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f97c8:{NFSU2_TR(0x5f97c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f97c9:{NFSU2_TR(0x5f97c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f97d0:L5f97d0:{c.instructions+=13;NFSU2_TR(0x5f97d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f97d1:{NFSU2_TR(0x5f97d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f97d2:{NFSU2_TR(0x5f97d2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f97d6:{NFSU2_TR(0x5f97d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f97d7:{NFSU2_TR(0x5f97d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f97db:{NFSU2_TR(0x5f97db);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f97dd:{NFSU2_TR(0x5f97dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f97e1:{NFSU2_TR(0x5f97e1);
__builtin_memmove((R+12),(R+4),4);
}
B5f97e3:{NFSU2_TR(0x5f97e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f97e4:{NFSU2_TR(0x5f97e4);
__builtin_memmove((R+4),(R+28),4);
}
B5f97e6:{NFSU2_TR(0x5f97e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x901ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f97ed:{NFSU2_TR(0x5f97ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f97f5:{NFSU2_TR(0x5f97f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f97faull));
TAIL_STATIC(0x581d90u,581);
}
B5f97fa:L5f97fa:{c.instructions+=8;NFSU2_TR(0x5f97fa);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5f97ff:{NFSU2_TR(0x5f97ff);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9801:{NFSU2_TR(0x5f9801);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f9805:{NFSU2_TR(0x5f9805);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9808:{NFSU2_TR(0x5f9808);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9809:{NFSU2_TR(0x5f9809);
__builtin_memmove((R+4),(R+28),4);
}
B5f980b:{NFSU2_TR(0x5f980b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f9813:{NFSU2_TR(0x5f9813);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9818ull));
TAIL_STATIC(0x581d90u,581);
}
B5f9818:L5f9818:{c.instructions+=10;NFSU2_TR(0x5f9818);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f981c:{NFSU2_TR(0x5f981c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f981f:{NFSU2_TR(0x5f981f);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B5f9822:{NFSU2_TR(0x5f9822);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f9823:{NFSU2_TR(0x5f9823);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9824:{NFSU2_TR(0x5f9824);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9825:{NFSU2_TR(0x5f9825);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5f9828:{NFSU2_TR(0x5f9828);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9829:{NFSU2_TR(0x5f9829);
__builtin_memmove((R+4),(R+12),4);
}
B5f982b:{NFSU2_TR(0x5f982b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9830ull));
TAIL_STATIC(0x5f04d0u,5f0);
}
B5f9830:L5f9830:{c.instructions+=4;NFSU2_TR(0x5f9830);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f9831:{NFSU2_TR(0x5f9831);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f9832:{NFSU2_TR(0x5f9832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f9833:{NFSU2_TR(0x5f9833);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f9840:L5f9840:{c.instructions+=8;NFSU2_TR(0x5f9840);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9841:{NFSU2_TR(0x5f9841);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5f9845:{NFSU2_TR(0x5f9845);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9846:{NFSU2_TR(0x5f9846);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9847:{NFSU2_TR(0x5f9847);
__builtin_memmove((R+28),(R+4),4);
}
B5f9849:{NFSU2_TR(0x5f9849);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B5f984d:{NFSU2_TR(0x5f984d);
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
B5f984f:{NFSU2_TR(0x5f984f);
if(r1(R+518)){{goto L5f9925;}}
}
B5f9855:L5f9855:{c.instructions+=4;NFSU2_TR(0x5f9855);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9856:{NFSU2_TR(0x5f9856);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5f985a:{NFSU2_TR(0x5f985a);
__builtin_memmove((R+4),(R+20),4);
}
B5f985c:{NFSU2_TR(0x5f985c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9861ull));
TAIL_STATIC(0x581cb0u,581);
}
B5f9861:L5f9861:{c.instructions+=2;NFSU2_TR(0x5f9861);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5f9864:{NFSU2_TR(0x5f9864);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f9924;}}
}
B5f986a:L5f986a:{c.instructions+=7;NFSU2_TR(0x5f986a);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5f986f:{NFSU2_TR(0x5f986f);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f9872:{NFSU2_TR(0x5f9872);
__builtin_memmove((R+0),gp(0x850098),1);
}
B5f9877:{NFSU2_TR(0x5f9877);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f9879:{NFSU2_TR(0x5f9879);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f987f:{NFSU2_TR(0x5f987f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f9883:{NFSU2_TR(0x5f9883);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f988e;}}
}
B5f9885:L5f9885:{c.instructions+=3;NFSU2_TR(0x5f9885);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B5f988a:{NFSU2_TR(0x5f988a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f988c:{NFSU2_TR(0x5f988c);
if(r1(R+518)){{goto L5f98d7;}}
}
B5f988e:L5f988e:{c.instructions+=3;NFSU2_TR(0x5f988e);
__builtin_memmove((R+0),gp(0x89d061),1);
}
B5f9893:{NFSU2_TR(0x5f9893);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f9895:{NFSU2_TR(0x5f9895);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f98d7;}}
}
B5f9897:L5f9897:{c.instructions+=2;NFSU2_TR(0x5f9897);
__builtin_memmove((R+4),(R+24),4);
}
B5f9899:{NFSU2_TR(0x5f9899);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f989eull));
TAIL_STATIC(0x5efa00u,5ef);
}
B5f989e:L5f989e:{c.instructions+=2;NFSU2_TR(0x5f989e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f98a0:{NFSU2_TR(0x5f98a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f98d7;}}
}
B5f98a2:L5f98a2:{c.instructions+=5;NFSU2_TR(0x5f98a2);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f98a5:{NFSU2_TR(0x5f98a5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f98ab:{NFSU2_TR(0x5f98ab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f98ad:{NFSU2_TR(0x5f98ad);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f98b0:{NFSU2_TR(0x5f98b0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f98ce;}}
}
B5f98b2:L5f98b2:{c.instructions+=8;NFSU2_TR(0x5f98b2);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f98b8:{NFSU2_TR(0x5f98b8);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f98be:{NFSU2_TR(0x5f98be);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f98c2:{NFSU2_TR(0x5f98c2);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f98c5:{NFSU2_TR(0x5f98c5);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5f98c7:{NFSU2_TR(0x5f98c7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f98c9:{NFSU2_TR(0x5f98c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f98cc:{NFSU2_TR(0x5f98cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f98d7;}}
}
B5f98ce:L5f98ce:{c.instructions+=3;NFSU2_TR(0x5f98ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f98d0:{NFSU2_TR(0x5f98d0);
__builtin_memmove((R+4),(R+24),4);
}
B5f98d2:{NFSU2_TR(0x5f98d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f98d7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f9010u);}goto L5f9010;}
}
B5f98d7:L5f98d7:{c.instructions+=3;NFSU2_TR(0x5f98d7);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5f98dd:{NFSU2_TR(0x5f98dd);
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
B5f98df:{NFSU2_TR(0x5f98df);
if(r1(R+518)){{goto L5f9924;}}
}
B5f98e1:L5f98e1:{c.instructions+=3;NFSU2_TR(0x5f98e1);
u8 U[8];
__builtin_memmove((U+0),gp(0x89cf48),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f98e8:{NFSU2_TR(0x5f98e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f98ea:{NFSU2_TR(0x5f98ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f98f6;}}
}
B5f98ec:L5f98ec:{c.instructions+=4;NFSU2_TR(0x5f98ec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f98ee:{NFSU2_TR(0x5f98ee);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f98f1:{NFSU2_TR(0x5f98f1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B5f98f4:{NFSU2_TR(0x5f98f4);
{goto L5f98fe;}
}
B5f98f6:L5f98f6:{c.instructions+=3;NFSU2_TR(0x5f98f6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f98f8:{NFSU2_TR(0x5f98f8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f98fb:{NFSU2_TR(0x5f98fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B5f98fe:L5f98fe:{c.instructions+=2;NFSU2_TR(0x5f98fe);
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
B5f9900:{NFSU2_TR(0x5f9900);
if(r1(R+518)){{goto L5f9924;}}
}
B5f9902:L5f9902:{c.instructions+=2;NFSU2_TR(0x5f9902);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9903:{NFSU2_TR(0x5f9903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9908ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B5f9908:L5f9908:{c.instructions+=2;NFSU2_TR(0x5f9908);
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
B5f990a:{NFSU2_TR(0x5f990a);
if(r1(R+518)){{goto L5f9924;}}
}
B5f990c:L5f990c:{c.instructions+=9;NFSU2_TR(0x5f990c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f9910:{NFSU2_TR(0x5f9910);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f9916:{NFSU2_TR(0x5f9916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f9918:{NFSU2_TR(0x5f9918);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9919:{NFSU2_TR(0x5f9919);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f991d:{NFSU2_TR(0x5f991d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f991e:{NFSU2_TR(0x5f991e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f991f:{NFSU2_TR(0x5f991f);
__builtin_memmove((R+4),(R+0),4);
}
B5f9921:{NFSU2_TR(0x5f9921);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9924ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f9924:L5f9924:{c.instructions+=1;NFSU2_TR(0x5f9924);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f9925:L5f9925:{c.instructions+=4;NFSU2_TR(0x5f9925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f9926:{NFSU2_TR(0x5f9926);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f9927:{NFSU2_TR(0x5f9927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f9928:{NFSU2_TR(0x5f9928);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f9930:L5f9930:{c.instructions+=4;NFSU2_TR(0x5f9930);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5f9935:{NFSU2_TR(0x5f9935);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9937:{NFSU2_TR(0x5f9937);
__builtin_memmove((R+8),(R+4),4);
}
B5f9939:{NFSU2_TR(0x5f9939);
if(r1(R+518)){{goto L5f9944;}}
}
B5f993b:L5f993b:{c.instructions+=2;NFSU2_TR(0x5f993b);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5f993e:{NFSU2_TR(0x5f993e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5f9a04;}}
}
B5f9944:L5f9944:{c.instructions+=5;NFSU2_TR(0x5f9944);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9945:{NFSU2_TR(0x5f9945);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f9949:{NFSU2_TR(0x5f9949);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5f994d:{NFSU2_TR(0x5f994d);
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
B5f994f:{NFSU2_TR(0x5f994f);
if(r1(R+518)){{goto L5f9a03;}}
}
B5f9955:L5f9955:{c.instructions+=6;NFSU2_TR(0x5f9955);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f9958:{NFSU2_TR(0x5f9958);
__builtin_memmove((R+0),gp(0x850098),1);
}
B5f995d:{NFSU2_TR(0x5f995d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f995f:{NFSU2_TR(0x5f995f);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f9965:{NFSU2_TR(0x5f9965);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f9969:{NFSU2_TR(0x5f9969);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9974;}}
}
B5f996b:L5f996b:{c.instructions+=3;NFSU2_TR(0x5f996b);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B5f9970:{NFSU2_TR(0x5f9970);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9972:{NFSU2_TR(0x5f9972);
if(r1(R+518)){{goto L5f99d8;}}
}
B5f9974:L5f9974:{c.instructions+=3;NFSU2_TR(0x5f9974);
__builtin_memmove((R+0),gp(0x89d061),1);
}
B5f9979:{NFSU2_TR(0x5f9979);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f997b:{NFSU2_TR(0x5f997b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f99d8;}}
}
B5f997d:L5f997d:{c.instructions+=3;NFSU2_TR(0x5f997d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f997f:{NFSU2_TR(0x5f997f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9982:{NFSU2_TR(0x5f9982);
if(r1(R+518)){{goto L5f99d8;}}
}
B5f9984:L5f9984:{c.instructions+=2;NFSU2_TR(0x5f9984);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9987:{NFSU2_TR(0x5f9987);
if(r1(R+518)){{goto L5f99d8;}}
}
B5f9989:L5f9989:{c.instructions+=2;NFSU2_TR(0x5f9989);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f998b:{NFSU2_TR(0x5f998b);
if(r1(R+518)){{goto L5f99d8;}}
}
B5f998d:L5f998d:{c.instructions+=2;NFSU2_TR(0x5f998d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9990:{NFSU2_TR(0x5f9990);
if(r1(R+518)){{goto L5f99d8;}}
}
B5f9992:L5f9992:{c.instructions+=2;NFSU2_TR(0x5f9992);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9995:{NFSU2_TR(0x5f9995);
if(r1(R+518)){{goto L5f99d8;}}
}
B5f9997:L5f9997:{c.instructions+=2;NFSU2_TR(0x5f9997);
u8 U[8];
__builtin_memmove((U+0),gp(0x89cf48),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f999e:{NFSU2_TR(0x5f999e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5f99a5;}}
}
B5f99a0:L5f99a0:{c.instructions+=2;NFSU2_TR(0x5f99a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f99a3:{NFSU2_TR(0x5f99a3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5f99d8;}}
}
B5f99a5:L5f99a5:{c.instructions+=5;NFSU2_TR(0x5f99a5);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f99a8:{NFSU2_TR(0x5f99a8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f99ae:{NFSU2_TR(0x5f99ae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f99b0:{NFSU2_TR(0x5f99b0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f99b3:{NFSU2_TR(0x5f99b3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f99d1;}}
}
B5f99b5:L5f99b5:{c.instructions+=8;NFSU2_TR(0x5f99b5);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f99bb:{NFSU2_TR(0x5f99bb);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f99c1:{NFSU2_TR(0x5f99c1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f99c5:{NFSU2_TR(0x5f99c5);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f99c8:{NFSU2_TR(0x5f99c8);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5f99ca:{NFSU2_TR(0x5f99ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f99cc:{NFSU2_TR(0x5f99cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f99cf:{NFSU2_TR(0x5f99cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f99d8;}}
}
B5f99d1:L5f99d1:{c.instructions+=2;NFSU2_TR(0x5f99d1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f99d3:{NFSU2_TR(0x5f99d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f99d8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f9010u);}goto L5f9010;}
}
B5f99d8:L5f99d8:{c.instructions+=3;NFSU2_TR(0x5f99d8);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5f99de:{NFSU2_TR(0x5f99de);
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
B5f99e0:{NFSU2_TR(0x5f99e0);
if(r1(R+518)){{goto L5f9a03;}}
}
B5f99e2:L5f99e2:{c.instructions+=2;NFSU2_TR(0x5f99e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f99e3:{NFSU2_TR(0x5f99e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f99e8ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B5f99e8:L5f99e8:{c.instructions+=2;NFSU2_TR(0x5f99e8);
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
B5f99ea:{NFSU2_TR(0x5f99ea);
if(r1(R+518)){{goto L5f9a03;}}
}
B5f99ec:L5f99ec:{c.instructions+=8;NFSU2_TR(0x5f99ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f99f0:{NFSU2_TR(0x5f99f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f99f6:{NFSU2_TR(0x5f99f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f99f8:{NFSU2_TR(0x5f99f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f99f9:{NFSU2_TR(0x5f99f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f99fd:{NFSU2_TR(0x5f99fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f99fe:{NFSU2_TR(0x5f99fe);
__builtin_memmove((R+4),(R+0),4);
}
B5f9a00:{NFSU2_TR(0x5f9a00);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9a03ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f9a03:L5f9a03:{c.instructions+=1;NFSU2_TR(0x5f9a03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f9a04:L5f9a04:{c.instructions+=1;NFSU2_TR(0x5f9a04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f9a10:L5f9a10:{c.instructions+=6;NFSU2_TR(0x5f9a10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9a11:{NFSU2_TR(0x5f9a11);
__builtin_memmove((R+0),gp(0x850098),1);
}
B5f9a16:{NFSU2_TR(0x5f9a16);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f9a18:{NFSU2_TR(0x5f9a18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9a19:{NFSU2_TR(0x5f9a19);
__builtin_memmove((R+24),(R+4),4);
}
B5f9a1b:{NFSU2_TR(0x5f9a1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9a2a;}}
}
B5f9a1d:L5f9a1d:{c.instructions+=3;NFSU2_TR(0x5f9a1d);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B5f9a22:{NFSU2_TR(0x5f9a22);
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
B5f9a24:{NFSU2_TR(0x5f9a24);
if(r1(R+518)){{goto L5f9ac3;}}
}
B5f9a2a:L5f9a2a:{c.instructions+=3;NFSU2_TR(0x5f9a2a);
__builtin_memmove((R+0),gp(0x89d061),1);
}
B5f9a2f:{NFSU2_TR(0x5f9a2f);
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
B5f9a31:{NFSU2_TR(0x5f9a31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9ac3;}}
}
B5f9a37:L5f9a37:{c.instructions+=3;NFSU2_TR(0x5f9a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f9a3d:{NFSU2_TR(0x5f9a3d);
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
B5f9a3f:{NFSU2_TR(0x5f9a3f);
if(r1(R+518)){{goto L5f9aac;}}
}
B5f9a41:L5f9a41:{c.instructions+=2;NFSU2_TR(0x5f9a41);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f9a46:{NFSU2_TR(0x5f9a46);
if(r1(R+518)){{goto L5f9aac;}}
}
B5f9a48:L5f9a48:{c.instructions+=20;NFSU2_TR(0x5f9a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f9a4e:{NFSU2_TR(0x5f9a4e);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5f9a53:{NFSU2_TR(0x5f9a53);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B5f9a55:{NFSU2_TR(0x5f9a55);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B5f9a5b:{NFSU2_TR(0x5f9a5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9a5f:{NFSU2_TR(0x5f9a5f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f9a63:{NFSU2_TR(0x5f9a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f9a69:{NFSU2_TR(0x5f9a69);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5f9a6b:{NFSU2_TR(0x5f9a6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9a6f:{NFSU2_TR(0x5f9a6f);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f9a75:{NFSU2_TR(0x5f9a75);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f9a79:{NFSU2_TR(0x5f9a79);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f9a7f:{NFSU2_TR(0x5f9a7f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5f9a81:{NFSU2_TR(0x5f9a81);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5f9a83:{NFSU2_TR(0x5f9a83);
{u32 ea_=u32(u32(8017700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f9a89:{NFSU2_TR(0x5f9a89);
{u32 ea_=u32(u32(8017704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f9a8f:{NFSU2_TR(0x5f9a8f);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5f9a91:{NFSU2_TR(0x5f9a91);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f9a93:{NFSU2_TR(0x5f9a93);
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
B5f9a96:{NFSU2_TR(0x5f9a96);
if(r1(R+514)){{goto L5f9aac;}}
}
B5f9a98:L5f9a98:{c.instructions+=2;NFSU2_TR(0x5f9a98);
__builtin_memmove((R+4),(R+24),4);
}
B5f9a9a:{NFSU2_TR(0x5f9a9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9a9full));
TAIL_STATIC(0x5f0280u,5f0);
}
B5f9a9f:L5f9a9f:{c.instructions+=2;NFSU2_TR(0x5f9a9f);
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
B5f9aa1:{NFSU2_TR(0x5f9aa1);
if(r1(R+518)){{goto L5f9aac;}}
}
B5f9aa3:L5f9aa3:{c.instructions+=3;NFSU2_TR(0x5f9aa3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9aa5:{NFSU2_TR(0x5f9aa5);
__builtin_memmove((R+4),(R+0),4);
}
B5f9aa7:{NFSU2_TR(0x5f9aa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9aacull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f9010u);}goto L5f9010;}
}
B5f9aac:L5f9aac:{c.instructions+=4;NFSU2_TR(0x5f9aac);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B5f9ab2:{NFSU2_TR(0x5f9ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9ab8:{NFSU2_TR(0x5f9ab8);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5f9abd:{NFSU2_TR(0x5f9abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9ac3:L5f9ac3:{c.instructions+=3;NFSU2_TR(0x5f9ac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f9ac4:{NFSU2_TR(0x5f9ac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9ac5:{NFSU2_TR(0x5f9ac5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f9ad0:L5f9ad0:{c.instructions+=6;NFSU2_TR(0x5f9ad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B5f9ad6:{NFSU2_TR(0x5f9ad6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9ad7:{NFSU2_TR(0x5f9ad7);
__builtin_memmove((R+28),(R+4),4);
}
B5f9ad9:{NFSU2_TR(0x5f9ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f9adc:{NFSU2_TR(0x5f9adc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9ade:{NFSU2_TR(0x5f9ade);
if(r1(R+518)){{goto L5f9bb9;}}
}
B5f9ae4:L5f9ae4:{c.instructions+=3;NFSU2_TR(0x5f9ae4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9ae5:{NFSU2_TR(0x5f9ae5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9ae9:{NFSU2_TR(0x5f9ae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9aeeull));
TAIL_STATIC(0x583fc0u,583);
}
B5f9aee:L5f9aee:{c.instructions+=6;NFSU2_TR(0x5f9aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f9af1:{NFSU2_TR(0x5f9af1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5f9af5:{NFSU2_TR(0x5f9af5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9af7:{NFSU2_TR(0x5f9af7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9af8:{NFSU2_TR(0x5f9af8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9afc:{NFSU2_TR(0x5f9afc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9b01ull));
TAIL_STATIC(0x581d00u,581);
}
B5f9b01:L5f9b01:{c.instructions+=5;NFSU2_TR(0x5f9b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f9b04:{NFSU2_TR(0x5f9b04);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5f9b08:{NFSU2_TR(0x5f9b08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9b09:{NFSU2_TR(0x5f9b09);
w4(R+4,u32(0x89e7a0ull));
}
B5f9b0e:{NFSU2_TR(0x5f9b0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9b13ull));
TAIL_STATIC(0x5ed920u,5ed);
}
B5f9b13:L5f9b13:{c.instructions+=4;NFSU2_TR(0x5f9b13);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5f9b16:{NFSU2_TR(0x5f9b16);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9b18:{NFSU2_TR(0x5f9b18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9b1b:{NFSU2_TR(0x5f9b1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9b20ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B5f9b20:L5f9b20:{c.instructions+=2;NFSU2_TR(0x5f9b20);
__builtin_memmove((R+4),(R+0),4);
}
B5f9b22:{NFSU2_TR(0x5f9b22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9b27ull));
TAIL_STATIC(0x59a520u,59a);
}
B5f9b27:L5f9b27:{c.instructions+=5;NFSU2_TR(0x5f9b27);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9b29:{NFSU2_TR(0x5f9b29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9b2a:{NFSU2_TR(0x5f9b2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9b2e:{NFSU2_TR(0x5f9b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9b34:{NFSU2_TR(0x5f9b34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9b39ull));
TAIL_STATIC(0x581d00u,581);
}
B5f9b39:L5f9b39:{c.instructions+=1;NFSU2_TR(0x5f9b39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9b3eull));
TAIL_STATIC(0x5838a0u,583);
}
B5f9b3e:L5f9b3e:{c.instructions+=2;NFSU2_TR(0x5f9b3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f9b40:{NFSU2_TR(0x5f9b40);
if(r1(R+518)){{goto L5f9b4f;}}
}
B5f9b42:L5f9b42:{c.instructions+=3;NFSU2_TR(0x5f9b42);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f9b46:{NFSU2_TR(0x5f9b46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9b47:{NFSU2_TR(0x5f9b47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9b4cull));
TAIL_STATIC(0x58c300u,58c);
}
B5f9b4c:L5f9b4c:{c.instructions+=1;NFSU2_TR(0x5f9b4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f9b4f:L5f9b4f:{c.instructions+=3;NFSU2_TR(0x5f9b4f);
__builtin_memmove((R+0),gp(0x850098),1);
}
B5f9b54:{NFSU2_TR(0x5f9b54);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f9b56:{NFSU2_TR(0x5f9b56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9b61;}}
}
B5f9b58:L5f9b58:{c.instructions+=3;NFSU2_TR(0x5f9b58);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B5f9b5d:{NFSU2_TR(0x5f9b5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9b5f:{NFSU2_TR(0x5f9b5f);
if(r1(R+518)){{goto L5f9bb8;}}
}
B5f9b61:L5f9b61:{c.instructions+=3;NFSU2_TR(0x5f9b61);
__builtin_memmove((R+0),gp(0x89d061),1);
}
B5f9b66:{NFSU2_TR(0x5f9b66);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f9b68:{NFSU2_TR(0x5f9b68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9bb8;}}
}
B5f9b6a:L5f9b6a:{c.instructions+=4;NFSU2_TR(0x5f9b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f9b6d:{NFSU2_TR(0x5f9b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f9b73:{NFSU2_TR(0x5f9b73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9b75:{NFSU2_TR(0x5f9b75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9ba0;}}
}
B5f9b77:L5f9b77:{c.instructions+=4;NFSU2_TR(0x5f9b77);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5f9b7b:{NFSU2_TR(0x5f9b7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9b7c:{NFSU2_TR(0x5f9b7c);
w4(R+4,u32(0x89e7a0ull));
}
B5f9b81:{NFSU2_TR(0x5f9b81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9b86ull));
TAIL_STATIC(0x5ed920u,5ed);
}
B5f9b86:L5f9b86:{c.instructions+=4;NFSU2_TR(0x5f9b86);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5f9b89:{NFSU2_TR(0x5f9b89);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9b8b:{NFSU2_TR(0x5f9b8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9b8e:{NFSU2_TR(0x5f9b8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9b93ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B5f9b93:L5f9b93:{c.instructions+=2;NFSU2_TR(0x5f9b93);
__builtin_memmove((R+4),(R+0),4);
}
B5f9b95:{NFSU2_TR(0x5f9b95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9b9aull));
TAIL_STATIC(0x59a520u,59a);
}
B5f9b9a:L5f9b9a:{c.instructions+=1;NFSU2_TR(0x5f9b9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9ba0:L5f9ba0:{c.instructions+=3;NFSU2_TR(0x5f9ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f9ba6:{NFSU2_TR(0x5f9ba6);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f9bac:{NFSU2_TR(0x5f9bac);
if(r1(R+518)){{goto L5f9bb8;}}
}
B5f9bae:L5f9bae:{c.instructions+=3;NFSU2_TR(0x5f9bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f9bb1:{NFSU2_TR(0x5f9bb1);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9bb3:{NFSU2_TR(0x5f9bb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9bb8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f9010u);}goto L5f9010;}
}
B5f9bb8:L5f9bb8:{c.instructions+=1;NFSU2_TR(0x5f9bb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f9bb9:L5f9bb9:{c.instructions+=3;NFSU2_TR(0x5f9bb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f9bba:{NFSU2_TR(0x5f9bba);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f9bc0:{NFSU2_TR(0x5f9bc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f9bd0:L5f9bd0:{c.instructions+=11;NFSU2_TR(0x5f9bd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9bd1:{NFSU2_TR(0x5f9bd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9bd2:{NFSU2_TR(0x5f9bd2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9bd3:{NFSU2_TR(0x5f9bd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f9bd7:{NFSU2_TR(0x5f9bd7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9bd9:{NFSU2_TR(0x5f9bd9);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f9bdd:{NFSU2_TR(0x5f9bdd);
__builtin_memmove((R+24),(R+4),4);
}
B5f9bdf:{NFSU2_TR(0x5f9bdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9be0:{NFSU2_TR(0x5f9be0);
__builtin_memmove((R+4),(R+28),4);
}
B5f9be2:{NFSU2_TR(0x5f9be2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f9bea:{NFSU2_TR(0x5f9bea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9befull));
TAIL_STATIC(0x581d90u,581);
}
B5f9bef:L5f9bef:{c.instructions+=6;NFSU2_TR(0x5f9bef);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9bf1:{NFSU2_TR(0x5f9bf1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9bf5:{NFSU2_TR(0x5f9bf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9bf6:{NFSU2_TR(0x5f9bf6);
__builtin_memmove((R+4),(R+28),4);
}
B5f9bf8:{NFSU2_TR(0x5f9bf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f9c00:{NFSU2_TR(0x5f9c00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9c05ull));
TAIL_STATIC(0x581d90u,581);
}
B5f9c05:L5f9c05:{c.instructions+=4;NFSU2_TR(0x5f9c05);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5f9c0a:{NFSU2_TR(0x5f9c0a);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5f9c0e:{NFSU2_TR(0x5f9c0e);
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
B5f9c10:{NFSU2_TR(0x5f9c10);
if(r1(R+518)){{goto L5f9c7a;}}
}
B5f9c12:L5f9c12:{c.instructions+=4;NFSU2_TR(0x5f9c12);
__builtin_memmove((R+24),(R+4),4);
}
B5f9c14:{NFSU2_TR(0x5f9c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f9c1a:{NFSU2_TR(0x5f9c1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9c1c:{NFSU2_TR(0x5f9c1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9c47;}}
}
B5f9c1e:L5f9c1e:{c.instructions+=4;NFSU2_TR(0x5f9c1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5f9c22:{NFSU2_TR(0x5f9c22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9c23:{NFSU2_TR(0x5f9c23);
w4(R+4,u32(0x89e7a0ull));
}
B5f9c28:{NFSU2_TR(0x5f9c28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9c2dull));
TAIL_STATIC(0x5ed920u,5ed);
}
B5f9c2d:L5f9c2d:{c.instructions+=4;NFSU2_TR(0x5f9c2d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5f9c30:{NFSU2_TR(0x5f9c30);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9c32:{NFSU2_TR(0x5f9c32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9c35:{NFSU2_TR(0x5f9c35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9c3aull));
TAIL_STATIC(0x5b5350u,5b5);
}
B5f9c3a:L5f9c3a:{c.instructions+=2;NFSU2_TR(0x5f9c3a);
__builtin_memmove((R+4),(R+0),4);
}
B5f9c3c:{NFSU2_TR(0x5f9c3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9c41ull));
TAIL_STATIC(0x59a520u,59a);
}
B5f9c41:L5f9c41:{c.instructions+=1;NFSU2_TR(0x5f9c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9c47:L5f9c47:{c.instructions+=4;NFSU2_TR(0x5f9c47);
__builtin_memmove((R+4),gp(0x850098),1);
}
B5f9c4d:{NFSU2_TR(0x5f9c4d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f9c4f:{NFSU2_TR(0x5f9c4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f9c55:{NFSU2_TR(0x5f9c55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9c61;}}
}
B5f9c57:L5f9c57:{c.instructions+=3;NFSU2_TR(0x5f9c57);
__builtin_memmove((R+4),gp(0x864fac),4);
}
B5f9c5d:{NFSU2_TR(0x5f9c5d);
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
B5f9c5f:{NFSU2_TR(0x5f9c5f);
if(r1(R+518)){{goto L5f9c7a;}}
}
B5f9c61:L5f9c61:{c.instructions+=3;NFSU2_TR(0x5f9c61);
__builtin_memmove((R+4),gp(0x89d061),1);
}
B5f9c67:{NFSU2_TR(0x5f9c67);
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
B5f9c69:{NFSU2_TR(0x5f9c69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9c7a;}}
}
B5f9c6b:L5f9c6b:{c.instructions+=2;NFSU2_TR(0x5f9c6b);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5f9c6f:{NFSU2_TR(0x5f9c6f);
if(r1(R+518)){{goto L5f9c7a;}}
}
B5f9c71:L5f9c71:{c.instructions+=3;NFSU2_TR(0x5f9c71);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9c73:{NFSU2_TR(0x5f9c73);
__builtin_memmove((R+4),(R+24),4);
}
B5f9c75:{NFSU2_TR(0x5f9c75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9c7aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f9010u);}goto L5f9010;}
}
B5f9c7a:L5f9c7a:{c.instructions+=4;NFSU2_TR(0x5f9c7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f9c7b:{NFSU2_TR(0x5f9c7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f9c7c:{NFSU2_TR(0x5f9c7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9c7d:{NFSU2_TR(0x5f9c7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f9c80:L5f9c80:{c.instructions+=15;NFSU2_TR(0x5f9c80);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5f9c87:{NFSU2_TR(0x5f9c87);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f9c8b:{NFSU2_TR(0x5f9c8b);
u8 U[16];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f9c92:{NFSU2_TR(0x5f9c92);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5f9c99:{NFSU2_TR(0x5f9c99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9c9a:{NFSU2_TR(0x5f9c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5f9ca0:{NFSU2_TR(0x5f9ca0);
u8 U[16];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B5f9ca7:{NFSU2_TR(0x5f9ca7);
u8 U[12];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5f9cae:{NFSU2_TR(0x5f9cae);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5f9cb0:{NFSU2_TR(0x5f9cb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5f9cb2:{NFSU2_TR(0x5f9cb2);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B5f9cb7:{NFSU2_TR(0x5f9cb7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xea60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xea60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xea60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f9cbc:{NFSU2_TR(0x5f9cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9cc2:{NFSU2_TR(0x5f9cc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f9cc3:{NFSU2_TR(0x5f9cc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f9cd0:L5f9cd0:{c.instructions+=16;NFSU2_TR(0x5f9cd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9cd1:{NFSU2_TR(0x5f9cd1);
__builtin_memmove((R+20),(R+16),4);
}
B5f9cd3:{NFSU2_TR(0x5f9cd3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5f9cd6:{NFSU2_TR(0x5f9cd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
}
B5f9cd9:{NFSU2_TR(0x5f9cd9);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5f9cde:{NFSU2_TR(0x5f9cde);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9cdf:{NFSU2_TR(0x5f9cdf);
__builtin_memmove((R+12),gp(0x890118),4);
}
B5f9ce5:{NFSU2_TR(0x5f9ce5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9ce6:{NFSU2_TR(0x5f9ce6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9ce7:{NFSU2_TR(0x5f9ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5f9cea:{NFSU2_TR(0x5f9cea);
__builtin_memmove((R+24),(R+4),4);
}
B5f9cec:{NFSU2_TR(0x5f9cec);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9cf2:{NFSU2_TR(0x5f9cf2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9cf6:{NFSU2_TR(0x5f9cf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f9cf8:{NFSU2_TR(0x5f9cf8);
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
B5f9cfa:{NFSU2_TR(0x5f9cfa);
if(r1(R+518)){TAIL_STATIC(0x5fa2f8u,5fa);}
}
B5f9d00:L5f9d00:{c.instructions+=2;NFSU2_TR(0x5f9d00);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5f9d05:{NFSU2_TR(0x5f9d05);
if(r1(R+518)){{goto L5f9d14;}}
}
B5f9d07:L5f9d07:{c.instructions+=3;NFSU2_TR(0x5f9d07);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B5f9d0c:{NFSU2_TR(0x5f9d0c);
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
B5f9d0e:{NFSU2_TR(0x5f9d0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5fa2f8u,5fa);}
}
B5f9d14:L5f9d14:{c.instructions+=4;NFSU2_TR(0x5f9d14);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B5f9d1b:{NFSU2_TR(0x5f9d1b);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5f9d1f:{NFSU2_TR(0x5f9d1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9d21:{NFSU2_TR(0x5f9d21);
if(r1(R+518)){{goto L5f9d3c;}}
}
B5f9d23:L5f9d23:{c.instructions+=3;NFSU2_TR(0x5f9d23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f9d25:{NFSU2_TR(0x5f9d25);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9d28:{NFSU2_TR(0x5f9d28);
if(r1(R+518)){{goto L5f9d3c;}}
}
B5f9d2a:L5f9d2a:{c.instructions+=2;NFSU2_TR(0x5f9d2a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9d2d:{NFSU2_TR(0x5f9d2d);
if(r1(R+518)){{goto L5f9d3c;}}
}
B5f9d2f:L5f9d2f:{c.instructions+=2;NFSU2_TR(0x5f9d2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9d31:{NFSU2_TR(0x5f9d31);
if(r1(R+518)){{goto L5f9d3c;}}
}
B5f9d33:L5f9d33:{c.instructions+=2;NFSU2_TR(0x5f9d33);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9d36:{NFSU2_TR(0x5f9d36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9e04;}}
}
B5f9d3c:L5f9d3c:{c.instructions+=5;NFSU2_TR(0x5f9d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f9d3f:{NFSU2_TR(0x5f9d3f);
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
B5f9d41:{NFSU2_TR(0x5f9d41);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f9d49:{NFSU2_TR(0x5f9d49);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9d4d:{NFSU2_TR(0x5f9d4d);
if(r1(R+518)){TAIL_STATIC(0x5fa2f8u,5fa);}
}
B5f9d53:L5f9d53:{c.instructions+=1;NFSU2_TR(0x5f9d53);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9d57:L5f9d57:{c.instructions+=3;NFSU2_TR(0x5f9d57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f9d59:{NFSU2_TR(0x5f9d59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9d5b:{NFSU2_TR(0x5f9d5b);
if(r1(R+518)){{goto L5f9d9b;}}
}
B5f9d5d:L5f9d5d:{c.instructions+=2;NFSU2_TR(0x5f9d5d);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5f9d62:{NFSU2_TR(0x5f9d62);
if(r1(R+518)){{goto L5f9d6e;}}
}
B5f9d64:L5f9d64:{c.instructions+=3;NFSU2_TR(0x5f9d64);
__builtin_memmove((R+4),gp(0x89e7b0),4);
}
B5f9d6a:{NFSU2_TR(0x5f9d6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9d6c:{NFSU2_TR(0x5f9d6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9d9b;}}
}
B5f9d6e:L5f9d6e:{c.instructions+=5;NFSU2_TR(0x5f9d6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f9d70:{NFSU2_TR(0x5f9d70);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B5f9d74:{NFSU2_TR(0x5f9d74);
u8 U[16];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5f9d7b:{NFSU2_TR(0x5f9d7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9d7d:{NFSU2_TR(0x5f9d7d);
if(r1(R+518)){{goto L5f9d86;}}
}
B5f9d7f:L5f9d7f:{c.instructions+=2;NFSU2_TR(0x5f9d7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9d84:{NFSU2_TR(0x5f9d84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9d9b;}}
}
B5f9d86:L5f9d86:{c.instructions+=3;NFSU2_TR(0x5f9d86);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5f9d8a:{NFSU2_TR(0x5f9d8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9d8c:{NFSU2_TR(0x5f9d8c);
if(r1(R+518)){{goto L5f9d9b;}}
}
B5f9d8e:L5f9d8e:{c.instructions+=1;NFSU2_TR(0x5f9d8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9d93ull));
TAIL_STATIC(0x49d850u,49d);
}
B5f9d93:L5f9d93:{c.instructions+=2;NFSU2_TR(0x5f9d93);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f9d95:{NFSU2_TR(0x5f9d95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9dba;}}
}
B5f9d97:L5f9d97:{c.instructions+=1;NFSU2_TR(0x5f9d97);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f9d9b:L5f9d9b:{c.instructions+=8;NFSU2_TR(0x5f9d9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f9d9f:{NFSU2_TR(0x5f9d9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f9da3:{NFSU2_TR(0x5f9da3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f9da4:{NFSU2_TR(0x5f9da4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5f9da7:{NFSU2_TR(0x5f9da7);
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
B5f9da9:{NFSU2_TR(0x5f9da9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9dad:{NFSU2_TR(0x5f9dad);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9db1:{NFSU2_TR(0x5f9db1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f9d57u);}goto L5f9d57;}}
}
B5f9db3:L5f9db3:{c.instructions+=6;NFSU2_TR(0x5f9db3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f9db4:{NFSU2_TR(0x5f9db4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f9db5:{NFSU2_TR(0x5f9db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f9db6:{NFSU2_TR(0x5f9db6);
__builtin_memmove((R+16),(R+20),4);
}
B5f9db8:{NFSU2_TR(0x5f9db8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f9db9:{NFSU2_TR(0x5f9db9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f9dba:L5f9dba:{c.instructions+=14;NFSU2_TR(0x5f9dba);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f9dbe:{NFSU2_TR(0x5f9dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f9dc4:{NFSU2_TR(0x5f9dc4);
__builtin_memmove((R+4),(R+0),4);
}
B5f9dc6:{NFSU2_TR(0x5f9dc6);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B5f9dc8:{NFSU2_TR(0x5f9dc8);
u8 U[16];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))+u32(r4(R+4))));
s4(u32(r4(U+8)),r4(U+12));
}
B5f9dcf:{NFSU2_TR(0x5f9dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9dd5:{NFSU2_TR(0x5f9dd5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f9ddb:{NFSU2_TR(0x5f9ddb);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5f9de1:{NFSU2_TR(0x5f9de1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1f40ull))));
}
B5f9de7:{NFSU2_TR(0x5f9de7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9de8:{NFSU2_TR(0x5f9de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9dee:{NFSU2_TR(0x5f9dee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5f9df5:{NFSU2_TR(0x5f9df5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9df6:{NFSU2_TR(0x5f9df6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9dfbull));
TAIL_STATIC(0x589750u,589);
}
B5f9dfb:L5f9dfb:{c.instructions+=2;NFSU2_TR(0x5f9dfb);
__builtin_memmove((R+12),gp(0x890118),4);
}
B5f9e01:{NFSU2_TR(0x5f9e01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f9e04:L5f9e04:{c.instructions+=4;NFSU2_TR(0x5f9e04);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5f9e0b:{NFSU2_TR(0x5f9e0b);
u8 U[16];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5f9e12:{NFSU2_TR(0x5f9e12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9e14:{NFSU2_TR(0x5f9e14);
if(r1(R+518)){{goto L5f9e21;}}
}
B5f9e16:L5f9e16:{c.instructions+=2;NFSU2_TR(0x5f9e16);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f9e1b:{NFSU2_TR(0x5f9e1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5fa2f8u,5fa);}
}
B5f9e21:L5f9e21:{c.instructions+=3;NFSU2_TR(0x5f9e21);
__builtin_memmove((R+0),gp(0x850094),4);
}
B5f9e26:{NFSU2_TR(0x5f9e26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9e28:{NFSU2_TR(0x5f9e28);
if(r1(R+518)){{goto L5f9ef1;}}
}
B5f9e2e:L5f9e2e:{c.instructions+=10;NFSU2_TR(0x5f9e2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7a5474ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5f9e35:{NFSU2_TR(0x5f9e35);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5f9e38:{NFSU2_TR(0x5f9e38);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9e3c:{NFSU2_TR(0x5f9e3c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f9e40:{NFSU2_TR(0x5f9e40);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f9e44:{NFSU2_TR(0x5f9e44);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f9e4a:{NFSU2_TR(0x5f9e4a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f9e4c:{NFSU2_TR(0x5f9e4c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f9e4e:{NFSU2_TR(0x5f9e4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f9e51:{NFSU2_TR(0x5f9e51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9eef;}}
}
B5f9e57:L5f9e57:{c.instructions+=3;NFSU2_TR(0x5f9e57);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f9e5d:{NFSU2_TR(0x5f9e5d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f9e63:{NFSU2_TR(0x5f9e63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9e68ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5f9e68:L5f9e68:{c.instructions+=5;NFSU2_TR(0x5f9e68);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9e6c:{NFSU2_TR(0x5f9e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f9e6f:{NFSU2_TR(0x5f9e6f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5f9e71:{NFSU2_TR(0x5f9e71);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9e73:{NFSU2_TR(0x5f9e73);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f9ebd;}}
}
B5f9e75:L5f9e75:{c.instructions+=2;NFSU2_TR(0x5f9e75);
w4(R+8,u32(0xbd0ull));
}
B5f9e7a:{NFSU2_TR(0x5f9e7a);
__builtin_memmove((R+12),(R+12),4);
}
B5f9e80:L5f9e80:{c.instructions+=3;NFSU2_TR(0x5f9e80);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5f9e83:{NFSU2_TR(0x5f9e83);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9e85:{NFSU2_TR(0x5f9e85);
if(r1(R+518)){{goto L5f9eb2;}}
}
B5f9e87:L5f9e87:{c.instructions+=1;NFSU2_TR(0x5f9e87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9e8cull));
TAIL_STATIC(0x5ee250u,5ee);
}
B5f9e8c:L5f9e8c:{c.instructions+=2;NFSU2_TR(0x5f9e8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9e8e:{NFSU2_TR(0x5f9e8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f9eb2;}}
}
B5f9e90:L5f9e90:{c.instructions+=5;NFSU2_TR(0x5f9e90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f9e92:{NFSU2_TR(0x5f9e92);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5f9e96:{NFSU2_TR(0x5f9e96);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5f9e9d:{NFSU2_TR(0x5f9e9d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9e9f:{NFSU2_TR(0x5f9e9f);
if(r1(R+518)){{goto L5f9eb2;}}
}
B5f9ea1:L5f9ea1:{c.instructions+=3;NFSU2_TR(0x5f9ea1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f9ea5:{NFSU2_TR(0x5f9ea5);
u8 U[16];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f9eac:{NFSU2_TR(0x5f9eac);
__builtin_memmove((R+12),gp(0x890118),4);
}
B5f9eb2:L5f9eb2:{c.instructions+=5;NFSU2_TR(0x5f9eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f9eb5:{NFSU2_TR(0x5f9eb5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5f9eb6:{NFSU2_TR(0x5f9eb6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5f9eb9:{NFSU2_TR(0x5f9eb9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f9ebb:{NFSU2_TR(0x5f9ebb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f9e80u);}goto L5f9e80;}}
}
B5f9ebd:L5f9ebd:{c.instructions+=4;NFSU2_TR(0x5f9ebd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f9ec1:{NFSU2_TR(0x5f9ec1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9ec2:{NFSU2_TR(0x5f9ec2);
__builtin_memmove((R+4),(R+24),4);
}
B5f9ec4:{NFSU2_TR(0x5f9ec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9ec9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f9c80u);}goto L5f9c80;}
}
B5f9ec9:L5f9ec9:{c.instructions+=5;NFSU2_TR(0x5f9ec9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5f9ed0:{NFSU2_TR(0x5f9ed0);
u8 U[16];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5f9ed7:{NFSU2_TR(0x5f9ed7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9ed8:{NFSU2_TR(0x5f9ed8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9ed9:{NFSU2_TR(0x5f9ed9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9edeull));
TAIL_STATIC(0x5897c0u,589);
}
B5f9ede:L5f9ede:{c.instructions+=8;NFSU2_TR(0x5f9ede);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f9ee5:{NFSU2_TR(0x5f9ee5);
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
B5f9ee8:{NFSU2_TR(0x5f9ee8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f9ee9:{NFSU2_TR(0x5f9ee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f9eea:{NFSU2_TR(0x5f9eea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f9eeb:{NFSU2_TR(0x5f9eeb);
__builtin_memmove((R+16),(R+20),4);
}
B5f9eed:{NFSU2_TR(0x5f9eed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f9eee:{NFSU2_TR(0x5f9eee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f9eef:L5f9eef:{c.instructions+=1;NFSU2_TR(0x5f9eef);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f9ef1:L5f9ef1:{c.instructions+=2;NFSU2_TR(0x5f9ef1);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5f9ef5:{NFSU2_TR(0x5f9ef5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9efaull));
TAIL_STATIC(0x5f8fe0u,5f8);
}
B5f9efa:L5f9efa:{c.instructions+=17;NFSU2_TR(0x5f9efa);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9efe:{NFSU2_TR(0x5f9efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f9f01:{NFSU2_TR(0x5f9f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f9f04:{NFSU2_TR(0x5f9f04);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9f08:{NFSU2_TR(0x5f9f08);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f9f0a:{NFSU2_TR(0x5f9f0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9f0d:{NFSU2_TR(0x5f9f0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9f11:{NFSU2_TR(0x5f9f11);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f9f19:{NFSU2_TR(0x5f9f19);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9f1d:{NFSU2_TR(0x5f9f1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9f21:{NFSU2_TR(0x5f9f21);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9f25:{NFSU2_TR(0x5f9f25);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9f29:{NFSU2_TR(0x5f9f29);
__builtin_memmove((R+16),(R+16),4);
}
B5f9f30:{NFSU2_TR(0x5f9f30);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f9f34:{NFSU2_TR(0x5f9f34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5f9f36:{NFSU2_TR(0x5f9f36);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9f38:{NFSU2_TR(0x5f9f38);
if(r1(R+518)){TAIL_STATIC(0x5fa243u,5fa);}
}
B5f9f3e:L5f9f3e:{c.instructions+=3;NFSU2_TR(0x5f9f3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5f9f45:{NFSU2_TR(0x5f9f45);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f9f47:{NFSU2_TR(0x5f9f47);
if(r1(R+518)){TAIL_STATIC(0x5fa243u,5fa);}
}
B5f9f4d:L5f9f4d:{c.instructions+=2;NFSU2_TR(0x5f9f4d);
__builtin_memmove((R+4),(R+12),4);
}
B5f9f4f:{NFSU2_TR(0x5f9f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9f54ull));
TAIL_STATIC(0x49d850u,49d);
}
B5f9f54:L5f9f54:{c.instructions+=2;NFSU2_TR(0x5f9f54);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f9f56:{NFSU2_TR(0x5f9f56);
if(r1(R+518)){TAIL_STATIC(0x5fa243u,5fa);}
}
B5f9f5c:L5f9f5c:{c.instructions+=2;NFSU2_TR(0x5f9f5c);
__builtin_memmove((R+4),(R+12),4);
}
B5f9f5e:{NFSU2_TR(0x5f9f5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9f63ull));
TAIL_STATIC(0x5f8fe0u,5f8);
}
B5f9f63:L5f9f63:{c.instructions+=6;NFSU2_TR(0x5f9f63);
__builtin_memmove((R+12),(R+0),4);
}
B5f9f65:{NFSU2_TR(0x5f9f65);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5f9f69:{NFSU2_TR(0x5f9f69);
u8 U[12];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5f9f70:{NFSU2_TR(0x5f9f70);
__builtin_memmove((R+4),(R+28),4);
}
B5f9f72:{NFSU2_TR(0x5f9f72);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9f76:{NFSU2_TR(0x5f9f76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9f7bull));
TAIL_STATIC(0x401820u,401);
}
B5f9f7b:L5f9f7b:{c.instructions+=2;NFSU2_TR(0x5f9f7b);
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
B5f9f7d:{NFSU2_TR(0x5f9f7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5fa243u,5fa);}
}
B5f9f83:L5f9f83:{c.instructions+=2;NFSU2_TR(0x5f9f83);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f9f87:{NFSU2_TR(0x5f9f87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9f8cull));
TAIL_STATIC(0x401890u,401);
}
B5f9f8c:L5f9f8c:{c.instructions+=6;NFSU2_TR(0x5f9f8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f9f8f:{NFSU2_TR(0x5f9f8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9f90:{NFSU2_TR(0x5f9f90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9f91:{NFSU2_TR(0x5f9f91);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9f95:{NFSU2_TR(0x5f9f95);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f9f99:{NFSU2_TR(0x5f9f99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9f9eull));
TAIL_STATIC(0x43ce10u,43c);
}
B5f9f9e:L5f9f9e:{c.instructions+=4;NFSU2_TR(0x5f9f9e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f9fa2:{NFSU2_TR(0x5f9fa2);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5f9fa8:{NFSU2_TR(0x5f9fa8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f9fab:{NFSU2_TR(0x5f9fab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9fb0ull));
TAIL_STATIC(0x5eeea0u,5ee);
}
B5f9fb0:L5f9fb0:{c.instructions+=4;NFSU2_TR(0x5f9fb0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f9fb4:{NFSU2_TR(0x5f9fb4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f9fb6:{NFSU2_TR(0x5f9fb6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f9fb9:{NFSU2_TR(0x5f9fb9);
if(r1(R+514)){{goto L5f9fd6;}}
}
B5f9fbb:L5f9fbb:{c.instructions+=7;NFSU2_TR(0x5f9fbb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f9fbf:{NFSU2_TR(0x5f9fbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f9fc3:{NFSU2_TR(0x5f9fc3);
__builtin_memmove((R+0),(R+8),4);
}
B5f9fc5:{NFSU2_TR(0x5f9fc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9fc6:{NFSU2_TR(0x5f9fc6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f9fc7:{NFSU2_TR(0x5f9fc7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5f9fc9:{NFSU2_TR(0x5f9fc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f9fceull));
TAIL_STATIC(0x5897c0u,589);
}
B5f9fce:L5f9fce:{c.instructions+=2;NFSU2_TR(0x5f9fce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f9fd1:{NFSU2_TR(0x5f9fd1);
TAIL_STATIC(0x5fa243u,5fa);
}
B5f9fd6:L5f9fd6:{c.instructions+=4;NFSU2_TR(0x5f9fd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5f9fda:{NFSU2_TR(0x5f9fda);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f9fde:{NFSU2_TR(0x5f9fde);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9fe0:{NFSU2_TR(0x5f9fe0);
if(r1(R+518)){TAIL_STATIC(0x5fa243u,5fa);}
}
B5f9fe6:L5f9fe6:{c.instructions+=3;NFSU2_TR(0x5f9fe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f9fea:{NFSU2_TR(0x5f9fea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f9fec:{NFSU2_TR(0x5f9fec);
if(r1(R+518)){TAIL_STATIC(0x5fa243u,5fa);}
}
B5f9ff2:L5f9ff2:{c.instructions+=3;NFSU2_TR(0x5f9ff2);
{u32 ea_=u32(r4(R+12)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f9ff8:{NFSU2_TR(0x5f9ff8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f9ffc:{NFSU2_TR(0x5f9ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x5fa002u,5fa);
}
XIT:NFSU2_TR_EXIT(0x5f9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
