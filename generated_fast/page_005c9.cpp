#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5c0(u8* __restrict R,Cpu& c);
u32 body_5c8(u8* __restrict R,Cpu& c);
u32 body_5ca(u8* __restrict R,Cpu& c);
u32 body_5cd(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5c9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5c9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5c9(u8* __restrict R,Cpu& c);
u32 page_5c9(Cpu& c){return body_5c9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5c9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5c9006:goto L5c9006;
case 0x5c900e:c.instructions+=5;goto B5c900e;
case 0x5c9016:c.instructions+=4;goto B5c9016;
case 0x5c901a:c.instructions+=3;goto B5c901a;
case 0x5c901c:c.instructions+=2;goto B5c901c;
case 0x5c901d:c.instructions+=1;goto B5c901d;
case 0x5c9020:goto L5c9020;
case 0x5c9022:c.instructions+=3;goto B5c9022;
case 0x5c9024:c.instructions+=2;goto B5c9024;
case 0x5c9025:c.instructions+=1;goto B5c9025;
case 0x5c9027:goto L5c9027;
case 0x5c9028:c.instructions+=2;goto B5c9028;
case 0x5c902d:c.instructions+=1;goto B5c902d;
case 0x5c9032:goto L5c9032;
case 0x5c9035:goto L5c9035;
case 0x5c9037:c.instructions+=4;goto B5c9037;
case 0x5c9038:c.instructions+=3;goto B5c9038;
case 0x5c9039:c.instructions+=2;goto B5c9039;
case 0x5c903c:c.instructions+=1;goto B5c903c;
case 0x5c9040:goto L5c9040;
case 0x5c9044:c.instructions+=2;goto B5c9044;
case 0x5c9047:c.instructions+=1;goto B5c9047;
case 0x5c904d:goto L5c904d;
case 0x5c9054:goto L5c9054;
case 0x5c9058:c.instructions+=4;goto B5c9058;
case 0x5c905a:c.instructions+=3;goto B5c905a;
case 0x5c905b:c.instructions+=2;goto B5c905b;
case 0x5c9061:c.instructions+=1;goto B5c9061;
case 0x5c9063:goto L5c9063;
case 0x5c9067:c.instructions+=4;goto B5c9067;
case 0x5c9069:c.instructions+=3;goto B5c9069;
case 0x5c906a:c.instructions+=2;goto B5c906a;
case 0x5c9070:c.instructions+=1;goto B5c9070;
case 0x5c9072:goto L5c9072;
case 0x5c9076:c.instructions+=4;goto B5c9076;
case 0x5c9078:c.instructions+=3;goto B5c9078;
case 0x5c9079:c.instructions+=2;goto B5c9079;
case 0x5c907f:c.instructions+=1;goto B5c907f;
case 0x5c9081:goto L5c9081;
case 0x5c9085:c.instructions+=4;goto B5c9085;
case 0x5c9087:c.instructions+=3;goto B5c9087;
case 0x5c9088:c.instructions+=2;goto B5c9088;
case 0x5c908e:c.instructions+=1;goto B5c908e;
case 0x5c9090:goto L5c9090;
case 0x5c9092:c.instructions+=1;goto B5c9092;
case 0x5c9094:goto L5c9094;
case 0x5c9098:c.instructions+=3;goto B5c9098;
case 0x5c909a:c.instructions+=2;goto B5c909a;
case 0x5c909b:c.instructions+=1;goto B5c909b;
case 0x5c909d:goto L5c909d;
case 0x5c909f:c.instructions+=1;goto B5c909f;
case 0x5c90a1:goto L5c90a1;
case 0x5c90a5:c.instructions+=4;goto B5c90a5;
case 0x5c90a7:c.instructions+=3;goto B5c90a7;
case 0x5c90a8:c.instructions+=2;goto B5c90a8;
case 0x5c90ae:c.instructions+=1;goto B5c90ae;
case 0x5c90b3:goto L5c90b3;
case 0x5c90b5:c.instructions+=1;goto B5c90b5;
case 0x5c90b7:goto L5c90b7;
case 0x5c90b9:c.instructions+=1;goto B5c90b9;
case 0x5c90bc:goto L5c90bc;
case 0x5c90be:goto L5c90be;
case 0x5c90c2:c.instructions+=1;goto B5c90c2;
case 0x5c90c3:goto L5c90c3;
case 0x5c90c9:goto L5c90c9;
case 0x5c90ce:goto L5c90ce;
case 0x5c90d0:c.instructions+=1;goto B5c90d0;
case 0x5c90d2:goto L5c90d2;
case 0x5c90d4:c.instructions+=1;goto B5c90d4;
case 0x5c90d7:goto L5c90d7;
case 0x5c90db:c.instructions+=2;goto B5c90db;
case 0x5c90e3:c.instructions+=1;goto B5c90e3;
case 0x5c90e5:goto L5c90e5;
case 0x5c90e7:c.instructions+=1;goto B5c90e7;
case 0x5c9120:goto L5c9120;
case 0x5c9124:c.instructions+=3;goto B5c9124;
case 0x5c912b:c.instructions+=2;goto B5c912b;
case 0x5c912d:c.instructions+=1;goto B5c912d;
case 0x5c912f:goto L5c912f;
case 0x5c9136:c.instructions+=3;goto B5c9136;
case 0x5c913a:c.instructions+=2;goto B5c913a;
case 0x5c9140:c.instructions+=1;goto B5c9140;
case 0x5c9145:goto L5c9145;
case 0x5c9150:goto L5c9150;
case 0x5c9151:c.instructions+=10;goto B5c9151;
case 0x5c9152:c.instructions+=9;goto B5c9152;
case 0x5c9153:c.instructions+=8;goto B5c9153;
case 0x5c9157:c.instructions+=7;goto B5c9157;
case 0x5c9158:c.instructions+=6;goto B5c9158;
case 0x5c915a:c.instructions+=5;goto B5c915a;
case 0x5c915c:c.instructions+=4;goto B5c915c;
case 0x5c9162:c.instructions+=3;goto B5c9162;
case 0x5c9163:c.instructions+=2;goto B5c9163;
case 0x5c9165:c.instructions+=1;goto B5c9165;
case 0x5c916a:goto L5c916a;
case 0x5c916c:c.instructions+=1;goto B5c916c;
case 0x5c9172:goto L5c9172;
case 0x5c9179:c.instructions+=2;goto B5c9179;
case 0x5c917b:c.instructions+=1;goto B5c917b;
case 0x5c9181:goto L5c9181;
case 0x5c9188:c.instructions+=2;goto B5c9188;
case 0x5c918a:c.instructions+=1;goto B5c918a;
case 0x5c9190:goto L5c9190;
case 0x5c9197:c.instructions+=2;goto B5c9197;
case 0x5c9199:c.instructions+=1;goto B5c9199;
case 0x5c919f:goto L5c919f;
case 0x5c91a1:c.instructions+=3;goto B5c91a1;
case 0x5c91a2:c.instructions+=2;goto B5c91a2;
case 0x5c91a4:c.instructions+=1;goto B5c91a4;
case 0x5c91a9:goto L5c91a9;
case 0x5c91ab:c.instructions+=1;goto B5c91ab;
case 0x5c91b1:goto L5c91b1;
case 0x5c91b5:c.instructions+=8;goto B5c91b5;
case 0x5c91b9:c.instructions+=7;goto B5c91b9;
case 0x5c91bd:c.instructions+=6;goto B5c91bd;
case 0x5c91be:c.instructions+=5;goto B5c91be;
case 0x5c91bf:c.instructions+=4;goto B5c91bf;
case 0x5c91c0:c.instructions+=3;goto B5c91c0;
case 0x5c91c1:c.instructions+=2;goto B5c91c1;
case 0x5c91c3:c.instructions+=1;goto B5c91c3;
case 0x5c91c8:goto L5c91c8;
case 0x5c91ca:c.instructions+=1;goto B5c91ca;
case 0x5c91d0:goto L5c91d0;
case 0x5c91d4:c.instructions+=24;goto B5c91d4;
case 0x5c91d8:c.instructions+=23;goto B5c91d8;
case 0x5c91da:c.instructions+=22;goto B5c91da;
case 0x5c91dc:c.instructions+=21;goto B5c91dc;
case 0x5c91dd:c.instructions+=20;goto B5c91dd;
case 0x5c91de:c.instructions+=19;goto B5c91de;
case 0x5c91e5:c.instructions+=18;goto B5c91e5;
case 0x5c91e6:c.instructions+=17;goto B5c91e6;
case 0x5c91e7:c.instructions+=16;goto B5c91e7;
case 0x5c91e8:c.instructions+=15;goto B5c91e8;
case 0x5c91ea:c.instructions+=14;goto B5c91ea;
case 0x5c91ec:c.instructions+=13;goto B5c91ec;
case 0x5c91ee:c.instructions+=12;goto B5c91ee;
case 0x5c91f0:c.instructions+=11;goto B5c91f0;
case 0x5c91f1:c.instructions+=10;goto B5c91f1;
case 0x5c91f3:c.instructions+=9;goto B5c91f3;
case 0x5c91f5:c.instructions+=8;goto B5c91f5;
case 0x5c91fa:c.instructions+=7;goto B5c91fa;
case 0x5c91fc:c.instructions+=6;goto B5c91fc;
case 0x5c91fe:c.instructions+=5;goto B5c91fe;
case 0x5c9200:c.instructions+=4;goto B5c9200;
case 0x5c9202:c.instructions+=3;goto B5c9202;
case 0x5c9203:c.instructions+=2;goto B5c9203;
case 0x5c9205:c.instructions+=1;goto B5c9205;
case 0x5c920a:goto L5c920a;
case 0x5c920c:c.instructions+=1;goto B5c920c;
case 0x5c9212:goto L5c9212;
case 0x5c9216:c.instructions+=12;goto B5c9216;
case 0x5c9219:c.instructions+=11;goto B5c9219;
case 0x5c921c:c.instructions+=10;goto B5c921c;
case 0x5c9222:c.instructions+=9;goto B5c9222;
case 0x5c9226:c.instructions+=8;goto B5c9226;
case 0x5c922d:c.instructions+=7;goto B5c922d;
case 0x5c9230:c.instructions+=6;goto B5c9230;
case 0x5c9231:c.instructions+=5;goto B5c9231;
case 0x5c9232:c.instructions+=4;goto B5c9232;
case 0x5c9238:c.instructions+=3;goto B5c9238;
case 0x5c9239:c.instructions+=2;goto B5c9239;
case 0x5c923a:c.instructions+=1;goto B5c923a;
case 0x5c923d:goto L5c923d;
case 0x5c923f:c.instructions+=4;goto B5c923f;
case 0x5c9242:c.instructions+=3;goto B5c9242;
case 0x5c9249:c.instructions+=2;goto B5c9249;
case 0x5c924b:c.instructions+=1;goto B5c924b;
case 0x5c9251:goto L5c9251;
case 0x5c9255:c.instructions+=28;goto B5c9255;
case 0x5c9259:c.instructions+=27;goto B5c9259;
case 0x5c925e:c.instructions+=26;goto B5c925e;
case 0x5c9262:c.instructions+=25;goto B5c9262;
case 0x5c9264:c.instructions+=24;goto B5c9264;
case 0x5c9266:c.instructions+=23;goto B5c9266;
case 0x5c9267:c.instructions+=22;goto B5c9267;
case 0x5c926e:c.instructions+=21;goto B5c926e;
case 0x5c926f:c.instructions+=20;goto B5c926f;
case 0x5c9270:c.instructions+=19;goto B5c9270;
case 0x5c9271:c.instructions+=18;goto B5c9271;
case 0x5c9272:c.instructions+=17;goto B5c9272;
case 0x5c9274:c.instructions+=16;goto B5c9274;
case 0x5c9276:c.instructions+=15;goto B5c9276;
case 0x5c9278:c.instructions+=14;goto B5c9278;
case 0x5c927a:c.instructions+=13;goto B5c927a;
case 0x5c927b:c.instructions+=12;goto B5c927b;
case 0x5c927d:c.instructions+=11;goto B5c927d;
case 0x5c927f:c.instructions+=10;goto B5c927f;
case 0x5c9284:c.instructions+=9;goto B5c9284;
case 0x5c9286:c.instructions+=8;goto B5c9286;
case 0x5c9288:c.instructions+=7;goto B5c9288;
case 0x5c928a:c.instructions+=6;goto B5c928a;
case 0x5c9291:c.instructions+=5;goto B5c9291;
case 0x5c9292:c.instructions+=4;goto B5c9292;
case 0x5c9294:c.instructions+=3;goto B5c9294;
case 0x5c9295:c.instructions+=2;goto B5c9295;
case 0x5c9297:c.instructions+=1;goto B5c9297;
case 0x5c929c:goto L5c929c;
case 0x5c929e:c.instructions+=1;goto B5c929e;
case 0x5c92a0:goto L5c92a0;
case 0x5c92a4:c.instructions+=7;goto B5c92a4;
case 0x5c92a7:c.instructions+=6;goto B5c92a7;
case 0x5c92aa:c.instructions+=5;goto B5c92aa;
case 0x5c92b0:c.instructions+=4;goto B5c92b0;
case 0x5c92b4:c.instructions+=3;goto B5c92b4;
case 0x5c92bb:c.instructions+=2;goto B5c92bb;
case 0x5c92be:c.instructions+=1;goto B5c92be;
case 0x5c92c4:goto L5c92c4;
case 0x5c92cb:c.instructions+=5;goto B5c92cb;
case 0x5c92cc:c.instructions+=4;goto B5c92cc;
case 0x5c92ce:c.instructions+=3;goto B5c92ce;
case 0x5c92cf:c.instructions+=2;goto B5c92cf;
case 0x5c92d1:c.instructions+=1;goto B5c92d1;
case 0x5c92d6:goto L5c92d6;
case 0x5c92d7:c.instructions+=4;goto B5c92d7;
case 0x5c92d8:c.instructions+=3;goto B5c92d8;
case 0x5c92d9:c.instructions+=2;goto B5c92d9;
case 0x5c92da:c.instructions+=1;goto B5c92da;
case 0x5c92dd:goto L5c92dd;
case 0x5c92e1:c.instructions+=8;goto B5c92e1;
case 0x5c92e5:c.instructions+=7;goto B5c92e5;
case 0x5c92e9:c.instructions+=6;goto B5c92e9;
case 0x5c92ea:c.instructions+=5;goto B5c92ea;
case 0x5c92eb:c.instructions+=4;goto B5c92eb;
case 0x5c92ec:c.instructions+=3;goto B5c92ec;
case 0x5c92ed:c.instructions+=2;goto B5c92ed;
case 0x5c92ef:c.instructions+=1;goto B5c92ef;
case 0x5c92f4:goto L5c92f4;
case 0x5c92f6:c.instructions+=1;goto B5c92f6;
case 0x5c92f8:goto L5c92f8;
case 0x5c92fc:c.instructions+=24;goto B5c92fc;
case 0x5c9300:c.instructions+=23;goto B5c9300;
case 0x5c9302:c.instructions+=22;goto B5c9302;
case 0x5c9304:c.instructions+=21;goto B5c9304;
case 0x5c9305:c.instructions+=20;goto B5c9305;
case 0x5c930c:c.instructions+=19;goto B5c930c;
case 0x5c930d:c.instructions+=18;goto B5c930d;
case 0x5c930e:c.instructions+=17;goto B5c930e;
case 0x5c930f:c.instructions+=16;goto B5c930f;
case 0x5c9310:c.instructions+=15;goto B5c9310;
case 0x5c9312:c.instructions+=14;goto B5c9312;
case 0x5c9314:c.instructions+=13;goto B5c9314;
case 0x5c9316:c.instructions+=12;goto B5c9316;
case 0x5c9318:c.instructions+=11;goto B5c9318;
case 0x5c9319:c.instructions+=10;goto B5c9319;
case 0x5c931b:c.instructions+=9;goto B5c931b;
case 0x5c931d:c.instructions+=8;goto B5c931d;
case 0x5c9322:c.instructions+=7;goto B5c9322;
case 0x5c9324:c.instructions+=6;goto B5c9324;
case 0x5c9326:c.instructions+=5;goto B5c9326;
case 0x5c9328:c.instructions+=4;goto B5c9328;
case 0x5c932a:c.instructions+=3;goto B5c932a;
case 0x5c932b:c.instructions+=2;goto B5c932b;
case 0x5c932d:c.instructions+=1;goto B5c932d;
case 0x5c9332:goto L5c9332;
case 0x5c9334:c.instructions+=1;goto B5c9334;
case 0x5c9336:goto L5c9336;
case 0x5c933a:c.instructions+=8;goto B5c933a;
case 0x5c933d:c.instructions+=7;goto B5c933d;
case 0x5c9340:c.instructions+=6;goto B5c9340;
case 0x5c9346:c.instructions+=5;goto B5c9346;
case 0x5c934a:c.instructions+=4;goto B5c934a;
case 0x5c9351:c.instructions+=3;goto B5c9351;
case 0x5c9354:c.instructions+=2;goto B5c9354;
case 0x5c935a:c.instructions+=1;goto B5c935a;
case 0x5c935f:goto L5c935f;
case 0x5c9364:c.instructions+=1;goto B5c9364;
case 0x5c9369:goto L5c9369;
case 0x5c936a:c.instructions+=2;goto B5c936a;
case 0x5c936f:c.instructions+=1;goto B5c936f;
case 0x5c9374:goto L5c9374;
case 0x5c9377:goto L5c9377;
case 0x5c9378:c.instructions+=4;goto B5c9378;
case 0x5c9379:c.instructions+=3;goto B5c9379;
case 0x5c937a:c.instructions+=2;goto B5c937a;
case 0x5c937b:c.instructions+=1;goto B5c937b;
case 0x5c9380:goto L5c9380;
case 0x5c9381:c.instructions+=9;goto B5c9381;
case 0x5c9382:c.instructions+=8;goto B5c9382;
case 0x5c9383:c.instructions+=7;goto B5c9383;
case 0x5c9387:c.instructions+=6;goto B5c9387;
case 0x5c938e:c.instructions+=5;goto B5c938e;
case 0x5c9390:c.instructions+=4;goto B5c9390;
case 0x5c9397:c.instructions+=3;goto B5c9397;
case 0x5c9398:c.instructions+=2;goto B5c9398;
case 0x5c939a:c.instructions+=1;goto B5c939a;
case 0x5c93a0:goto L5c93a0;
case 0x5c93a7:c.instructions+=2;goto B5c93a7;
case 0x5c93a9:c.instructions+=1;goto B5c93a9;
case 0x5c93af:goto L5c93af;
case 0x5c93b6:c.instructions+=2;goto B5c93b6;
case 0x5c93b8:c.instructions+=1;goto B5c93b8;
case 0x5c93be:goto L5c93be;
case 0x5c93c0:c.instructions+=4;goto B5c93c0;
case 0x5c93c6:c.instructions+=3;goto B5c93c6;
case 0x5c93c7:c.instructions+=2;goto B5c93c7;
case 0x5c93c9:c.instructions+=1;goto B5c93c9;
case 0x5c93ce:goto L5c93ce;
case 0x5c93d0:c.instructions+=1;goto B5c93d0;
case 0x5c93d2:goto L5c93d2;
case 0x5c93d6:c.instructions+=2;goto B5c93d6;
case 0x5c93dd:c.instructions+=1;goto B5c93dd;
case 0x5c93e3:goto L5c93e3;
case 0x5c93e5:c.instructions+=21;goto B5c93e5;
case 0x5c93e7:c.instructions+=20;goto B5c93e7;
case 0x5c93ee:c.instructions+=19;goto B5c93ee;
case 0x5c93f0:c.instructions+=18;goto B5c93f0;
case 0x5c93f2:c.instructions+=17;goto B5c93f2;
case 0x5c93f4:c.instructions+=16;goto B5c93f4;
case 0x5c93f5:c.instructions+=15;goto B5c93f5;
case 0x5c93f7:c.instructions+=14;goto B5c93f7;
case 0x5c93f9:c.instructions+=13;goto B5c93f9;
case 0x5c93fb:c.instructions+=12;goto B5c93fb;
case 0x5c93fd:c.instructions+=11;goto B5c93fd;
case 0x5c93fe:c.instructions+=10;goto B5c93fe;
case 0x5c9400:c.instructions+=9;goto B5c9400;
case 0x5c9402:c.instructions+=8;goto B5c9402;
case 0x5c9407:c.instructions+=7;goto B5c9407;
case 0x5c9409:c.instructions+=6;goto B5c9409;
case 0x5c940b:c.instructions+=5;goto B5c940b;
case 0x5c940d:c.instructions+=4;goto B5c940d;
case 0x5c940f:c.instructions+=3;goto B5c940f;
case 0x5c9410:c.instructions+=2;goto B5c9410;
case 0x5c9412:c.instructions+=1;goto B5c9412;
case 0x5c9417:goto L5c9417;
case 0x5c9419:c.instructions+=1;goto B5c9419;
case 0x5c941b:goto L5c941b;
case 0x5c9422:goto L5c9422;
case 0x5c9428:c.instructions+=2;goto B5c9428;
case 0x5c942a:c.instructions+=1;goto B5c942a;
case 0x5c9430:goto L5c9430;
case 0x5c9437:c.instructions+=5;goto B5c9437;
case 0x5c9438:c.instructions+=4;goto B5c9438;
case 0x5c943a:c.instructions+=3;goto B5c943a;
case 0x5c943b:c.instructions+=2;goto B5c943b;
case 0x5c943d:c.instructions+=1;goto B5c943d;
case 0x5c9442:goto L5c9442;
case 0x5c9443:c.instructions+=4;goto B5c9443;
case 0x5c9444:c.instructions+=3;goto B5c9444;
case 0x5c9445:c.instructions+=2;goto B5c9445;
case 0x5c9446:c.instructions+=1;goto B5c9446;
case 0x5c9449:goto L5c9449;
case 0x5c944b:c.instructions+=5;goto B5c944b;
case 0x5c944e:c.instructions+=4;goto B5c944e;
case 0x5c9455:c.instructions+=3;goto B5c9455;
case 0x5c9457:c.instructions+=2;goto B5c9457;
case 0x5c9459:c.instructions+=1;goto B5c9459;
case 0x5c945b:goto L5c945b;
case 0x5c945f:c.instructions+=23;goto B5c945f;
case 0x5c9464:c.instructions+=22;goto B5c9464;
case 0x5c9466:c.instructions+=21;goto B5c9466;
case 0x5c9468:c.instructions+=20;goto B5c9468;
case 0x5c946f:c.instructions+=19;goto B5c946f;
case 0x5c9471:c.instructions+=18;goto B5c9471;
case 0x5c9473:c.instructions+=17;goto B5c9473;
case 0x5c9475:c.instructions+=16;goto B5c9475;
case 0x5c9476:c.instructions+=15;goto B5c9476;
case 0x5c9478:c.instructions+=14;goto B5c9478;
case 0x5c947a:c.instructions+=13;goto B5c947a;
case 0x5c947c:c.instructions+=12;goto B5c947c;
case 0x5c947e:c.instructions+=11;goto B5c947e;
case 0x5c947f:c.instructions+=10;goto B5c947f;
case 0x5c9481:c.instructions+=9;goto B5c9481;
case 0x5c9483:c.instructions+=8;goto B5c9483;
case 0x5c9488:c.instructions+=7;goto B5c9488;
case 0x5c948a:c.instructions+=6;goto B5c948a;
case 0x5c948c:c.instructions+=5;goto B5c948c;
case 0x5c948e:c.instructions+=4;goto B5c948e;
case 0x5c948f:c.instructions+=3;goto B5c948f;
case 0x5c9491:c.instructions+=2;goto B5c9491;
case 0x5c9492:c.instructions+=1;goto B5c9492;
case 0x5c9497:goto L5c9497;
case 0x5c9499:c.instructions+=1;goto B5c9499;
case 0x5c949b:goto L5c949b;
case 0x5c949f:c.instructions+=1;goto B5c949f;
case 0x5c94a6:goto L5c94a6;
case 0x5c94a7:c.instructions+=4;goto B5c94a7;
case 0x5c94a9:c.instructions+=3;goto B5c94a9;
case 0x5c94aa:c.instructions+=2;goto B5c94aa;
case 0x5c94ac:c.instructions+=1;goto B5c94ac;
case 0x5c94b1:goto L5c94b1;
case 0x5c94b2:c.instructions+=4;goto B5c94b2;
case 0x5c94b3:c.instructions+=3;goto B5c94b3;
case 0x5c94b4:c.instructions+=2;goto B5c94b4;
case 0x5c94b5:c.instructions+=1;goto B5c94b5;
case 0x5c94b8:goto L5c94b8;
case 0x5c94bc:c.instructions+=2;goto B5c94bc;
case 0x5c94c3:c.instructions+=1;goto B5c94c3;
case 0x5c94c5:goto L5c94c5;
case 0x5c94cc:c.instructions+=4;goto B5c94cc;
case 0x5c94cd:c.instructions+=3;goto B5c94cd;
case 0x5c94cf:c.instructions+=2;goto B5c94cf;
case 0x5c94d0:c.instructions+=1;goto B5c94d0;
case 0x5c94d5:goto L5c94d5;
case 0x5c94d6:c.instructions+=4;goto B5c94d6;
case 0x5c94d7:c.instructions+=3;goto B5c94d7;
case 0x5c94d8:c.instructions+=2;goto B5c94d8;
case 0x5c94d9:c.instructions+=1;goto B5c94d9;
case 0x5c94dc:goto L5c94dc;
case 0x5c94de:c.instructions+=20;goto B5c94de;
case 0x5c94e0:c.instructions+=19;goto B5c94e0;
case 0x5c94e7:c.instructions+=18;goto B5c94e7;
case 0x5c94e9:c.instructions+=17;goto B5c94e9;
case 0x5c94eb:c.instructions+=16;goto B5c94eb;
case 0x5c94ed:c.instructions+=15;goto B5c94ed;
case 0x5c94ee:c.instructions+=14;goto B5c94ee;
case 0x5c94f0:c.instructions+=13;goto B5c94f0;
case 0x5c94f2:c.instructions+=12;goto B5c94f2;
case 0x5c94f4:c.instructions+=11;goto B5c94f4;
case 0x5c94f6:c.instructions+=10;goto B5c94f6;
case 0x5c94f7:c.instructions+=9;goto B5c94f7;
case 0x5c94f9:c.instructions+=8;goto B5c94f9;
case 0x5c94fb:c.instructions+=7;goto B5c94fb;
case 0x5c9500:c.instructions+=6;goto B5c9500;
case 0x5c9502:c.instructions+=5;goto B5c9502;
case 0x5c9504:c.instructions+=4;goto B5c9504;
case 0x5c9506:c.instructions+=3;goto B5c9506;
case 0x5c9508:c.instructions+=2;goto B5c9508;
case 0x5c9509:c.instructions+=1;goto B5c9509;
case 0x5c950e:goto L5c950e;
case 0x5c9510:c.instructions+=1;goto B5c9510;
case 0x5c9516:goto L5c9516;
case 0x5c951d:c.instructions+=1;goto B5c951d;
case 0x5c9522:goto L5c9522;
case 0x5c9527:c.instructions+=1;goto B5c9527;
case 0x5c952c:goto L5c952c;
case 0x5c952d:c.instructions+=2;goto B5c952d;
case 0x5c9532:c.instructions+=1;goto B5c9532;
case 0x5c9537:goto L5c9537;
case 0x5c953a:goto L5c953a;
case 0x5c953b:c.instructions+=4;goto B5c953b;
case 0x5c953c:c.instructions+=3;goto B5c953c;
case 0x5c953d:c.instructions+=2;goto B5c953d;
case 0x5c953e:c.instructions+=1;goto B5c953e;
case 0x5c9550:goto L5c9550;
case 0x5c9554:c.instructions+=16;goto B5c9554;
case 0x5c9555:c.instructions+=15;goto B5c9555;
case 0x5c9556:c.instructions+=14;goto B5c9556;
case 0x5c955b:c.instructions+=13;goto B5c955b;
case 0x5c955d:c.instructions+=12;goto B5c955d;
case 0x5c9562:c.instructions+=11;goto B5c9562;
case 0x5c9569:c.instructions+=10;goto B5c9569;
case 0x5c956e:c.instructions+=9;goto B5c956e;
case 0x5c9570:c.instructions+=8;goto B5c9570;
case 0x5c9573:c.instructions+=7;goto B5c9573;
case 0x5c9575:c.instructions+=6;goto B5c9575;
case 0x5c9578:c.instructions+=5;goto B5c9578;
case 0x5c957a:c.instructions+=4;goto B5c957a;
case 0x5c957b:c.instructions+=3;goto B5c957b;
case 0x5c957f:c.instructions+=2;goto B5c957f;
case 0x5c9580:c.instructions+=1;goto B5c9580;
case 0x5c9585:goto L5c9585;
case 0x5c9586:c.instructions+=1;goto B5c9586;
case 0x5c9590:goto L5c9590;
case 0x5c9591:c.instructions+=11;goto B5c9591;
case 0x5c9592:c.instructions+=10;goto B5c9592;
case 0x5c9593:c.instructions+=9;goto B5c9593;
case 0x5c9597:c.instructions+=8;goto B5c9597;
case 0x5c9598:c.instructions+=7;goto B5c9598;
case 0x5c959a:c.instructions+=6;goto B5c959a;
case 0x5c959c:c.instructions+=5;goto B5c959c;
case 0x5c95a2:c.instructions+=4;goto B5c95a2;
case 0x5c95a3:c.instructions+=3;goto B5c95a3;
case 0x5c95a5:c.instructions+=2;goto B5c95a5;
case 0x5c95a9:c.instructions+=1;goto B5c95a9;
case 0x5c95ae:goto L5c95ae;
case 0x5c95b0:c.instructions+=1;goto B5c95b0;
case 0x5c95b6:goto L5c95b6;
case 0x5c95bd:c.instructions+=4;goto B5c95bd;
case 0x5c95bf:c.instructions+=3;goto B5c95bf;
case 0x5c95c0:c.instructions+=2;goto B5c95c0;
case 0x5c95c7:c.instructions+=1;goto B5c95c7;
case 0x5c95cd:goto L5c95cd;
case 0x5c95d4:c.instructions+=2;goto B5c95d4;
case 0x5c95d6:c.instructions+=1;goto B5c95d6;
case 0x5c95dc:goto L5c95dc;
case 0x5c95e3:c.instructions+=2;goto B5c95e3;
case 0x5c95e5:c.instructions+=1;goto B5c95e5;
case 0x5c95eb:goto L5c95eb;
case 0x5c95ed:c.instructions+=3;goto B5c95ed;
case 0x5c95ee:c.instructions+=2;goto B5c95ee;
case 0x5c95f0:c.instructions+=1;goto B5c95f0;
case 0x5c95f5:goto L5c95f5;
case 0x5c95f7:c.instructions+=1;goto B5c95f7;
case 0x5c95f9:goto L5c95f9;
case 0x5c95fd:c.instructions+=3;goto B5c95fd;
case 0x5c9601:c.instructions+=2;goto B5c9601;
case 0x5c9608:c.instructions+=1;goto B5c9608;
case 0x5c960e:goto L5c960e;
case 0x5c9610:c.instructions+=22;goto B5c9610;
case 0x5c9612:c.instructions+=21;goto B5c9612;
case 0x5c9617:c.instructions+=20;goto B5c9617;
case 0x5c961e:c.instructions+=19;goto B5c961e;
case 0x5c9623:c.instructions+=18;goto B5c9623;
case 0x5c9624:c.instructions+=17;goto B5c9624;
case 0x5c9625:c.instructions+=16;goto B5c9625;
case 0x5c9627:c.instructions+=15;goto B5c9627;
case 0x5c9629:c.instructions+=14;goto B5c9629;
case 0x5c962b:c.instructions+=13;goto B5c962b;
case 0x5c962d:c.instructions+=12;goto B5c962d;
case 0x5c962f:c.instructions+=11;goto B5c962f;
case 0x5c9630:c.instructions+=10;goto B5c9630;
case 0x5c9632:c.instructions+=9;goto B5c9632;
case 0x5c9634:c.instructions+=8;goto B5c9634;
case 0x5c9639:c.instructions+=7;goto B5c9639;
case 0x5c963b:c.instructions+=6;goto B5c963b;
case 0x5c963d:c.instructions+=5;goto B5c963d;
case 0x5c963f:c.instructions+=4;goto B5c963f;
case 0x5c9641:c.instructions+=3;goto B5c9641;
case 0x5c9642:c.instructions+=2;goto B5c9642;
case 0x5c9644:c.instructions+=1;goto B5c9644;
case 0x5c9649:goto L5c9649;
case 0x5c964b:c.instructions+=1;goto B5c964b;
case 0x5c9651:goto L5c9651;
case 0x5c9658:c.instructions+=6;goto B5c9658;
case 0x5c9659:c.instructions+=5;goto B5c9659;
case 0x5c965a:c.instructions+=4;goto B5c965a;
case 0x5c965b:c.instructions+=3;goto B5c965b;
case 0x5c965c:c.instructions+=2;goto B5c965c;
case 0x5c965d:c.instructions+=1;goto B5c965d;
case 0x5c9660:goto L5c9660;
case 0x5c9662:c.instructions+=5;goto B5c9662;
case 0x5c9665:c.instructions+=4;goto B5c9665;
case 0x5c966c:c.instructions+=3;goto B5c966c;
case 0x5c966e:c.instructions+=2;goto B5c966e;
case 0x5c9672:c.instructions+=1;goto B5c9672;
case 0x5c9674:goto L5c9674;
case 0x5c9679:c.instructions+=24;goto B5c9679;
case 0x5c967b:c.instructions+=23;goto B5c967b;
case 0x5c967d:c.instructions+=22;goto B5c967d;
case 0x5c9682:c.instructions+=21;goto B5c9682;
case 0x5c9689:c.instructions+=20;goto B5c9689;
case 0x5c968e:c.instructions+=19;goto B5c968e;
case 0x5c968f:c.instructions+=18;goto B5c968f;
case 0x5c9690:c.instructions+=17;goto B5c9690;
case 0x5c9692:c.instructions+=16;goto B5c9692;
case 0x5c9694:c.instructions+=15;goto B5c9694;
case 0x5c9696:c.instructions+=14;goto B5c9696;
case 0x5c9698:c.instructions+=13;goto B5c9698;
case 0x5c969a:c.instructions+=12;goto B5c969a;
case 0x5c969b:c.instructions+=11;goto B5c969b;
case 0x5c969d:c.instructions+=10;goto B5c969d;
case 0x5c969f:c.instructions+=9;goto B5c969f;
case 0x5c96a4:c.instructions+=8;goto B5c96a4;
case 0x5c96a6:c.instructions+=7;goto B5c96a6;
case 0x5c96a8:c.instructions+=6;goto B5c96a8;
case 0x5c96aa:c.instructions+=5;goto B5c96aa;
case 0x5c96ab:c.instructions+=4;goto B5c96ab;
case 0x5c96ad:c.instructions+=3;goto B5c96ad;
case 0x5c96ae:c.instructions+=2;goto B5c96ae;
case 0x5c96b0:c.instructions+=1;goto B5c96b0;
case 0x5c96b5:goto L5c96b5;
case 0x5c96b7:c.instructions+=1;goto B5c96b7;
case 0x5c96b9:goto L5c96b9;
case 0x5c96bd:c.instructions+=1;goto B5c96bd;
case 0x5c96c4:goto L5c96c4;
case 0x5c96c5:c.instructions+=4;goto B5c96c5;
case 0x5c96c7:c.instructions+=3;goto B5c96c7;
case 0x5c96c8:c.instructions+=2;goto B5c96c8;
case 0x5c96ca:c.instructions+=1;goto B5c96ca;
case 0x5c96cf:goto L5c96cf;
case 0x5c96d0:c.instructions+=5;goto B5c96d0;
case 0x5c96d1:c.instructions+=4;goto B5c96d1;
case 0x5c96d2:c.instructions+=3;goto B5c96d2;
case 0x5c96d3:c.instructions+=2;goto B5c96d3;
case 0x5c96d4:c.instructions+=1;goto B5c96d4;
case 0x5c96d7:goto L5c96d7;
case 0x5c96db:c.instructions+=3;goto B5c96db;
case 0x5c96e2:c.instructions+=2;goto B5c96e2;
case 0x5c96e4:c.instructions+=1;goto B5c96e4;
case 0x5c96e6:goto L5c96e6;
case 0x5c96e7:c.instructions+=3;goto B5c96e7;
case 0x5c96e9:c.instructions+=2;goto B5c96e9;
case 0x5c96ea:c.instructions+=1;goto B5c96ea;
case 0x5c96ef:goto L5c96ef;
case 0x5c96f0:c.instructions+=5;goto B5c96f0;
case 0x5c96f1:c.instructions+=4;goto B5c96f1;
case 0x5c96f2:c.instructions+=3;goto B5c96f2;
case 0x5c96f3:c.instructions+=2;goto B5c96f3;
case 0x5c96f4:c.instructions+=1;goto B5c96f4;
case 0x5c96f7:goto L5c96f7;
case 0x5c96f9:c.instructions+=21;goto B5c96f9;
case 0x5c96fb:c.instructions+=20;goto B5c96fb;
case 0x5c9700:c.instructions+=19;goto B5c9700;
case 0x5c9707:c.instructions+=18;goto B5c9707;
case 0x5c970c:c.instructions+=17;goto B5c970c;
case 0x5c970d:c.instructions+=16;goto B5c970d;
case 0x5c970e:c.instructions+=15;goto B5c970e;
case 0x5c9710:c.instructions+=14;goto B5c9710;
case 0x5c9712:c.instructions+=13;goto B5c9712;
case 0x5c9714:c.instructions+=12;goto B5c9714;
case 0x5c9716:c.instructions+=11;goto B5c9716;
case 0x5c9718:c.instructions+=10;goto B5c9718;
case 0x5c9719:c.instructions+=9;goto B5c9719;
case 0x5c971b:c.instructions+=8;goto B5c971b;
case 0x5c971d:c.instructions+=7;goto B5c971d;
case 0x5c9722:c.instructions+=6;goto B5c9722;
case 0x5c9724:c.instructions+=5;goto B5c9724;
case 0x5c9726:c.instructions+=4;goto B5c9726;
case 0x5c9728:c.instructions+=3;goto B5c9728;
case 0x5c972a:c.instructions+=2;goto B5c972a;
case 0x5c972b:c.instructions+=1;goto B5c972b;
case 0x5c9730:goto L5c9730;
case 0x5c9732:goto L5c9732;
case 0x5c9737:c.instructions+=1;goto B5c9737;
case 0x5c973c:goto L5c973c;
case 0x5c973d:c.instructions+=2;goto B5c973d;
case 0x5c9742:c.instructions+=1;goto B5c9742;
case 0x5c9747:goto L5c9747;
case 0x5c974a:goto L5c974a;
case 0x5c974b:goto L5c974b;
case 0x5c974c:c.instructions+=4;goto B5c974c;
case 0x5c974d:c.instructions+=3;goto B5c974d;
case 0x5c974e:c.instructions+=2;goto B5c974e;
case 0x5c974f:c.instructions+=1;goto B5c974f;
case 0x5c9760:goto L5c9760;
case 0x5c9763:c.instructions+=9;goto B5c9763;
case 0x5c9764:c.instructions+=8;goto B5c9764;
case 0x5c9765:c.instructions+=7;goto B5c9765;
case 0x5c9766:c.instructions+=6;goto B5c9766;
case 0x5c9767:c.instructions+=5;goto B5c9767;
case 0x5c976b:c.instructions+=4;goto B5c976b;
case 0x5c976c:c.instructions+=3;goto B5c976c;
case 0x5c976e:c.instructions+=2;goto B5c976e;
case 0x5c9770:c.instructions+=1;goto B5c9770;
case 0x5c9775:goto L5c9775;
case 0x5c9779:c.instructions+=6;goto B5c9779;
case 0x5c977d:c.instructions+=5;goto B5c977d;
case 0x5c9784:c.instructions+=4;goto B5c9784;
case 0x5c9786:c.instructions+=3;goto B5c9786;
case 0x5c9789:c.instructions+=2;goto B5c9789;
case 0x5c978b:c.instructions+=1;goto B5c978b;
case 0x5c978d:goto L5c978d;
case 0x5c9792:c.instructions+=5;goto B5c9792;
case 0x5c9799:c.instructions+=4;goto B5c9799;
case 0x5c979b:c.instructions+=3;goto B5c979b;
case 0x5c979d:c.instructions+=2;goto B5c979d;
case 0x5c97a3:c.instructions+=1;goto B5c97a3;
case 0x5c97a5:goto L5c97a5;
case 0x5c97a7:goto L5c97a7;
case 0x5c97aa:c.instructions+=1;goto B5c97aa;
case 0x5c97ac:goto L5c97ac;
case 0x5c97b1:c.instructions+=6;goto B5c97b1;
case 0x5c97b8:c.instructions+=5;goto B5c97b8;
case 0x5c97ba:c.instructions+=4;goto B5c97ba;
case 0x5c97bc:c.instructions+=3;goto B5c97bc;
case 0x5c97c2:c.instructions+=2;goto B5c97c2;
case 0x5c97c8:c.instructions+=1;goto B5c97c8;
case 0x5c97ca:goto L5c97ca;
case 0x5c97cc:goto L5c97cc;
case 0x5c97ce:goto L5c97ce;
case 0x5c97d3:goto L5c97d3;
case 0x5c97d5:c.instructions+=2;goto B5c97d5;
case 0x5c97dc:c.instructions+=1;goto B5c97dc;
case 0x5c97e3:goto L5c97e3;
case 0x5c97ea:c.instructions+=3;goto B5c97ea;
case 0x5c97ec:c.instructions+=2;goto B5c97ec;
case 0x5c97f3:c.instructions+=1;goto B5c97f3;
case 0x5c97f9:goto L5c97f9;
case 0x5c9800:c.instructions+=2;goto B5c9800;
case 0x5c9802:c.instructions+=1;goto B5c9802;
case 0x5c9808:goto L5c9808;
case 0x5c980a:c.instructions+=1;goto B5c980a;
case 0x5c9810:goto L5c9810;
case 0x5c9812:c.instructions+=4;goto B5c9812;
case 0x5c9818:c.instructions+=3;goto B5c9818;
case 0x5c9819:c.instructions+=2;goto B5c9819;
case 0x5c981b:c.instructions+=1;goto B5c981b;
case 0x5c9820:goto L5c9820;
case 0x5c9822:c.instructions+=1;goto B5c9822;
case 0x5c9824:goto L5c9824;
case 0x5c9828:c.instructions+=2;goto B5c9828;
case 0x5c982f:c.instructions+=1;goto B5c982f;
case 0x5c9835:goto L5c9835;
case 0x5c983a:c.instructions+=24;goto B5c983a;
case 0x5c983c:c.instructions+=23;goto B5c983c;
case 0x5c983e:c.instructions+=22;goto B5c983e;
case 0x5c9840:c.instructions+=21;goto B5c9840;
case 0x5c9847:c.instructions+=20;goto B5c9847;
case 0x5c9849:c.instructions+=19;goto B5c9849;
case 0x5c984e:c.instructions+=18;goto B5c984e;
case 0x5c9850:c.instructions+=17;goto B5c9850;
case 0x5c9852:c.instructions+=16;goto B5c9852;
case 0x5c9853:c.instructions+=15;goto B5c9853;
case 0x5c9855:c.instructions+=14;goto B5c9855;
case 0x5c9857:c.instructions+=13;goto B5c9857;
case 0x5c9859:c.instructions+=12;goto B5c9859;
case 0x5c985b:c.instructions+=11;goto B5c985b;
case 0x5c985c:c.instructions+=10;goto B5c985c;
case 0x5c985e:c.instructions+=9;goto B5c985e;
case 0x5c9860:c.instructions+=8;goto B5c9860;
case 0x5c9865:c.instructions+=7;goto B5c9865;
case 0x5c9867:c.instructions+=6;goto B5c9867;
case 0x5c986c:c.instructions+=5;goto B5c986c;
case 0x5c986e:c.instructions+=4;goto B5c986e;
case 0x5c9870:c.instructions+=3;goto B5c9870;
case 0x5c9871:c.instructions+=2;goto B5c9871;
case 0x5c9873:c.instructions+=1;goto B5c9873;
case 0x5c9878:goto L5c9878;
case 0x5c987a:c.instructions+=1;goto B5c987a;
case 0x5c987c:goto L5c987c;
case 0x5c9880:c.instructions+=1;goto B5c9880;
case 0x5c9887:goto L5c9887;
case 0x5c9888:c.instructions+=4;goto B5c9888;
case 0x5c988a:c.instructions+=3;goto B5c988a;
case 0x5c988b:c.instructions+=2;goto B5c988b;
case 0x5c988d:c.instructions+=1;goto B5c988d;
case 0x5c9892:goto L5c9892;
case 0x5c9893:c.instructions+=5;goto B5c9893;
case 0x5c9894:c.instructions+=4;goto B5c9894;
case 0x5c9895:c.instructions+=3;goto B5c9895;
case 0x5c9896:c.instructions+=2;goto B5c9896;
case 0x5c9899:c.instructions+=1;goto B5c9899;
case 0x5c989c:goto L5c989c;
case 0x5c989e:c.instructions+=4;goto B5c989e;
case 0x5c98a1:c.instructions+=3;goto B5c98a1;
case 0x5c98a8:c.instructions+=2;goto B5c98a8;
case 0x5c98aa:c.instructions+=1;goto B5c98aa;
case 0x5c98ac:goto L5c98ac;
case 0x5c98b1:c.instructions+=27;goto B5c98b1;
case 0x5c98b6:c.instructions+=26;goto B5c98b6;
case 0x5c98b8:c.instructions+=25;goto B5c98b8;
case 0x5c98bc:c.instructions+=24;goto B5c98bc;
case 0x5c98be:c.instructions+=23;goto B5c98be;
case 0x5c98c0:c.instructions+=22;goto B5c98c0;
case 0x5c98c2:c.instructions+=21;goto B5c98c2;
case 0x5c98c9:c.instructions+=20;goto B5c98c9;
case 0x5c98ce:c.instructions+=19;goto B5c98ce;
case 0x5c98d0:c.instructions+=18;goto B5c98d0;
case 0x5c98d2:c.instructions+=17;goto B5c98d2;
case 0x5c98d3:c.instructions+=16;goto B5c98d3;
case 0x5c98d5:c.instructions+=15;goto B5c98d5;
case 0x5c98d7:c.instructions+=14;goto B5c98d7;
case 0x5c98d9:c.instructions+=13;goto B5c98d9;
case 0x5c98db:c.instructions+=12;goto B5c98db;
case 0x5c98dc:c.instructions+=11;goto B5c98dc;
case 0x5c98de:c.instructions+=10;goto B5c98de;
case 0x5c98e0:c.instructions+=9;goto B5c98e0;
case 0x5c98e5:c.instructions+=8;goto B5c98e5;
case 0x5c98e7:c.instructions+=7;goto B5c98e7;
case 0x5c98ec:c.instructions+=6;goto B5c98ec;
case 0x5c98ee:c.instructions+=5;goto B5c98ee;
case 0x5c98ef:c.instructions+=4;goto B5c98ef;
case 0x5c98f1:c.instructions+=3;goto B5c98f1;
case 0x5c98f2:c.instructions+=2;goto B5c98f2;
case 0x5c98f4:c.instructions+=1;goto B5c98f4;
case 0x5c98f9:goto L5c98f9;
case 0x5c98fb:c.instructions+=1;goto B5c98fb;
case 0x5c98fd:goto L5c98fd;
case 0x5c9901:c.instructions+=1;goto B5c9901;
case 0x5c9908:goto L5c9908;
case 0x5c9909:c.instructions+=4;goto B5c9909;
case 0x5c990b:c.instructions+=3;goto B5c990b;
case 0x5c990c:c.instructions+=2;goto B5c990c;
case 0x5c990e:c.instructions+=1;goto B5c990e;
case 0x5c9913:goto L5c9913;
case 0x5c9914:c.instructions+=5;goto B5c9914;
case 0x5c9915:c.instructions+=4;goto B5c9915;
case 0x5c9916:c.instructions+=3;goto B5c9916;
case 0x5c9917:c.instructions+=2;goto B5c9917;
case 0x5c991a:c.instructions+=1;goto B5c991a;
case 0x5c991d:goto L5c991d;
case 0x5c9921:c.instructions+=2;goto B5c9921;
case 0x5c9928:c.instructions+=1;goto B5c9928;
case 0x5c992a:goto L5c992a;
case 0x5c992f:c.instructions+=24;goto B5c992f;
case 0x5c9931:c.instructions+=23;goto B5c9931;
case 0x5c9933:c.instructions+=22;goto B5c9933;
case 0x5c9935:c.instructions+=21;goto B5c9935;
case 0x5c993c:c.instructions+=20;goto B5c993c;
case 0x5c993e:c.instructions+=19;goto B5c993e;
case 0x5c9943:c.instructions+=18;goto B5c9943;
case 0x5c9945:c.instructions+=17;goto B5c9945;
case 0x5c9947:c.instructions+=16;goto B5c9947;
case 0x5c9948:c.instructions+=15;goto B5c9948;
case 0x5c994a:c.instructions+=14;goto B5c994a;
case 0x5c994c:c.instructions+=13;goto B5c994c;
case 0x5c994e:c.instructions+=12;goto B5c994e;
case 0x5c9950:c.instructions+=11;goto B5c9950;
case 0x5c9951:c.instructions+=10;goto B5c9951;
case 0x5c9953:c.instructions+=9;goto B5c9953;
case 0x5c9955:c.instructions+=8;goto B5c9955;
case 0x5c995a:c.instructions+=7;goto B5c995a;
case 0x5c995c:c.instructions+=6;goto B5c995c;
case 0x5c9961:c.instructions+=5;goto B5c9961;
case 0x5c9963:c.instructions+=4;goto B5c9963;
case 0x5c9965:c.instructions+=3;goto B5c9965;
case 0x5c9966:c.instructions+=2;goto B5c9966;
case 0x5c9968:c.instructions+=1;goto B5c9968;
case 0x5c996d:goto L5c996d;
case 0x5c996f:c.instructions+=1;goto B5c996f;
case 0x5c9971:goto L5c9971;
case 0x5c9975:c.instructions+=1;goto B5c9975;
case 0x5c997c:goto L5c997c;
case 0x5c9982:c.instructions+=2;goto B5c9982;
case 0x5c9984:c.instructions+=1;goto B5c9984;
case 0x5c9986:goto L5c9986;
case 0x5c9987:c.instructions+=4;goto B5c9987;
case 0x5c9989:c.instructions+=3;goto B5c9989;
case 0x5c998a:c.instructions+=2;goto B5c998a;
case 0x5c998c:c.instructions+=1;goto B5c998c;
case 0x5c9991:goto L5c9991;
case 0x5c9992:c.instructions+=4;goto B5c9992;
case 0x5c9994:c.instructions+=3;goto B5c9994;
case 0x5c9995:c.instructions+=2;goto B5c9995;
case 0x5c9997:c.instructions+=1;goto B5c9997;
case 0x5c999c:goto L5c999c;
case 0x5c999d:c.instructions+=5;goto B5c999d;
case 0x5c999e:c.instructions+=4;goto B5c999e;
case 0x5c999f:c.instructions+=3;goto B5c999f;
case 0x5c99a0:c.instructions+=2;goto B5c99a0;
case 0x5c99a3:c.instructions+=1;goto B5c99a3;
case 0x5c99a6:goto L5c99a6;
case 0x5c99ab:c.instructions+=1;goto B5c99ab;
case 0x5c99b0:goto L5c99b0;
case 0x5c99b1:c.instructions+=2;goto B5c99b1;
case 0x5c99b6:c.instructions+=1;goto B5c99b6;
case 0x5c99bb:goto L5c99bb;
case 0x5c99be:goto L5c99be;
case 0x5c99bf:c.instructions+=5;goto B5c99bf;
case 0x5c99c0:c.instructions+=4;goto B5c99c0;
case 0x5c99c1:c.instructions+=3;goto B5c99c1;
case 0x5c99c2:c.instructions+=2;goto B5c99c2;
case 0x5c99c5:c.instructions+=1;goto B5c99c5;
case 0x5c99d0:goto L5c99d0;
case 0x5c99d1:c.instructions+=9;goto B5c99d1;
case 0x5c99d2:c.instructions+=8;goto B5c99d2;
case 0x5c99d3:c.instructions+=7;goto B5c99d3;
case 0x5c99d7:c.instructions+=6;goto B5c99d7;
case 0x5c99de:c.instructions+=5;goto B5c99de;
case 0x5c99e0:c.instructions+=4;goto B5c99e0;
case 0x5c99e7:c.instructions+=3;goto B5c99e7;
case 0x5c99e8:c.instructions+=2;goto B5c99e8;
case 0x5c99ea:c.instructions+=1;goto B5c99ea;
case 0x5c99f0:goto L5c99f0;
case 0x5c99f6:c.instructions+=2;goto B5c99f6;
case 0x5c99f8:c.instructions+=1;goto B5c99f8;
case 0x5c99fe:goto L5c99fe;
case 0x5c9a05:c.instructions+=2;goto B5c9a05;
case 0x5c9a07:c.instructions+=1;goto B5c9a07;
case 0x5c9a0d:goto L5c9a0d;
case 0x5c9a14:c.instructions+=2;goto B5c9a14;
case 0x5c9a16:c.instructions+=1;goto B5c9a16;
case 0x5c9a1c:goto L5c9a1c;
case 0x5c9a1e:c.instructions+=4;goto B5c9a1e;
case 0x5c9a24:c.instructions+=3;goto B5c9a24;
case 0x5c9a25:c.instructions+=2;goto B5c9a25;
case 0x5c9a27:c.instructions+=1;goto B5c9a27;
case 0x5c9a2c:goto L5c9a2c;
case 0x5c9a2e:c.instructions+=1;goto B5c9a2e;
case 0x5c9a30:goto L5c9a30;
case 0x5c9a34:c.instructions+=2;goto B5c9a34;
case 0x5c9a3b:c.instructions+=1;goto B5c9a3b;
case 0x5c9a41:goto L5c9a41;
case 0x5c9a43:c.instructions+=24;goto B5c9a43;
case 0x5c9a45:c.instructions+=23;goto B5c9a45;
case 0x5c9a47:c.instructions+=22;goto B5c9a47;
case 0x5c9a49:c.instructions+=21;goto B5c9a49;
case 0x5c9a4b:c.instructions+=20;goto B5c9a4b;
case 0x5c9a52:c.instructions+=19;goto B5c9a52;
case 0x5c9a57:c.instructions+=18;goto B5c9a57;
case 0x5c9a59:c.instructions+=17;goto B5c9a59;
case 0x5c9a5b:c.instructions+=16;goto B5c9a5b;
case 0x5c9a5c:c.instructions+=15;goto B5c9a5c;
case 0x5c9a5e:c.instructions+=14;goto B5c9a5e;
case 0x5c9a60:c.instructions+=13;goto B5c9a60;
case 0x5c9a62:c.instructions+=12;goto B5c9a62;
case 0x5c9a64:c.instructions+=11;goto B5c9a64;
case 0x5c9a65:c.instructions+=10;goto B5c9a65;
case 0x5c9a67:c.instructions+=9;goto B5c9a67;
case 0x5c9a69:c.instructions+=8;goto B5c9a69;
case 0x5c9a6e:c.instructions+=7;goto B5c9a6e;
case 0x5c9a70:c.instructions+=6;goto B5c9a70;
case 0x5c9a72:c.instructions+=5;goto B5c9a72;
case 0x5c9a74:c.instructions+=4;goto B5c9a74;
case 0x5c9a76:c.instructions+=3;goto B5c9a76;
case 0x5c9a77:c.instructions+=2;goto B5c9a77;
case 0x5c9a79:c.instructions+=1;goto B5c9a79;
case 0x5c9a7e:goto L5c9a7e;
case 0x5c9a80:c.instructions+=1;goto B5c9a80;
case 0x5c9a86:goto L5c9a86;
case 0x5c9a87:c.instructions+=5;goto B5c9a87;
case 0x5c9a8e:c.instructions+=4;goto B5c9a8e;
case 0x5c9a8f:c.instructions+=3;goto B5c9a8f;
case 0x5c9a90:c.instructions+=2;goto B5c9a90;
case 0x5c9a91:c.instructions+=1;goto B5c9a91;
case 0x5c9a94:goto L5c9a94;
case 0x5c9a96:c.instructions+=5;goto B5c9a96;
case 0x5c9a99:c.instructions+=4;goto B5c9a99;
case 0x5c9aa0:c.instructions+=3;goto B5c9aa0;
case 0x5c9aa2:c.instructions+=2;goto B5c9aa2;
case 0x5c9aa4:c.instructions+=1;goto B5c9aa4;
case 0x5c9aa6:goto L5c9aa6;
case 0x5c9aab:c.instructions+=26;goto B5c9aab;
case 0x5c9aad:c.instructions+=25;goto B5c9aad;
case 0x5c9aaf:c.instructions+=24;goto B5c9aaf;
case 0x5c9ab3:c.instructions+=23;goto B5c9ab3;
case 0x5c9ab5:c.instructions+=22;goto B5c9ab5;
case 0x5c9ab7:c.instructions+=21;goto B5c9ab7;
case 0x5c9ab9:c.instructions+=20;goto B5c9ab9;
case 0x5c9ac0:c.instructions+=19;goto B5c9ac0;
case 0x5c9ac5:c.instructions+=18;goto B5c9ac5;
case 0x5c9ac7:c.instructions+=17;goto B5c9ac7;
case 0x5c9ac9:c.instructions+=16;goto B5c9ac9;
case 0x5c9aca:c.instructions+=15;goto B5c9aca;
case 0x5c9acc:c.instructions+=14;goto B5c9acc;
case 0x5c9ace:c.instructions+=13;goto B5c9ace;
case 0x5c9ad0:c.instructions+=12;goto B5c9ad0;
case 0x5c9ad2:c.instructions+=11;goto B5c9ad2;
case 0x5c9ad3:c.instructions+=10;goto B5c9ad3;
case 0x5c9ad5:c.instructions+=9;goto B5c9ad5;
case 0x5c9ad7:c.instructions+=8;goto B5c9ad7;
case 0x5c9adc:c.instructions+=7;goto B5c9adc;
case 0x5c9ade:c.instructions+=6;goto B5c9ade;
case 0x5c9ae0:c.instructions+=5;goto B5c9ae0;
case 0x5c9ae2:c.instructions+=4;goto B5c9ae2;
case 0x5c9ae3:c.instructions+=3;goto B5c9ae3;
case 0x5c9ae5:c.instructions+=2;goto B5c9ae5;
case 0x5c9ae6:c.instructions+=1;goto B5c9ae6;
case 0x5c9aeb:goto L5c9aeb;
case 0x5c9aed:c.instructions+=1;goto B5c9aed;
case 0x5c9aef:goto L5c9aef;
case 0x5c9af3:c.instructions+=1;goto B5c9af3;
case 0x5c9afa:goto L5c9afa;
case 0x5c9afb:c.instructions+=4;goto B5c9afb;
case 0x5c9afd:c.instructions+=3;goto B5c9afd;
case 0x5c9afe:c.instructions+=2;goto B5c9afe;
case 0x5c9b00:c.instructions+=1;goto B5c9b00;
case 0x5c9b05:goto L5c9b05;
case 0x5c9b06:c.instructions+=4;goto B5c9b06;
case 0x5c9b07:c.instructions+=3;goto B5c9b07;
case 0x5c9b08:c.instructions+=2;goto B5c9b08;
case 0x5c9b09:c.instructions+=1;goto B5c9b09;
case 0x5c9b0c:goto L5c9b0c;
case 0x5c9b10:c.instructions+=2;goto B5c9b10;
case 0x5c9b17:c.instructions+=1;goto B5c9b17;
case 0x5c9b19:goto L5c9b19;
case 0x5c9b20:c.instructions+=4;goto B5c9b20;
case 0x5c9b21:c.instructions+=3;goto B5c9b21;
case 0x5c9b23:c.instructions+=2;goto B5c9b23;
case 0x5c9b24:c.instructions+=1;goto B5c9b24;
case 0x5c9b29:goto L5c9b29;
case 0x5c9b2a:c.instructions+=4;goto B5c9b2a;
case 0x5c9b2b:c.instructions+=3;goto B5c9b2b;
case 0x5c9b2c:c.instructions+=2;goto B5c9b2c;
case 0x5c9b2d:c.instructions+=1;goto B5c9b2d;
case 0x5c9b30:goto L5c9b30;
case 0x5c9b32:c.instructions+=23;goto B5c9b32;
case 0x5c9b34:c.instructions+=22;goto B5c9b34;
case 0x5c9b36:c.instructions+=21;goto B5c9b36;
case 0x5c9b38:c.instructions+=20;goto B5c9b38;
case 0x5c9b3a:c.instructions+=19;goto B5c9b3a;
case 0x5c9b41:c.instructions+=18;goto B5c9b41;
case 0x5c9b46:c.instructions+=17;goto B5c9b46;
case 0x5c9b48:c.instructions+=16;goto B5c9b48;
case 0x5c9b4a:c.instructions+=15;goto B5c9b4a;
case 0x5c9b4b:c.instructions+=14;goto B5c9b4b;
case 0x5c9b4d:c.instructions+=13;goto B5c9b4d;
case 0x5c9b4f:c.instructions+=12;goto B5c9b4f;
case 0x5c9b51:c.instructions+=11;goto B5c9b51;
case 0x5c9b53:c.instructions+=10;goto B5c9b53;
case 0x5c9b54:c.instructions+=9;goto B5c9b54;
case 0x5c9b56:c.instructions+=8;goto B5c9b56;
case 0x5c9b58:c.instructions+=7;goto B5c9b58;
case 0x5c9b5d:c.instructions+=6;goto B5c9b5d;
case 0x5c9b5f:c.instructions+=5;goto B5c9b5f;
case 0x5c9b61:c.instructions+=4;goto B5c9b61;
case 0x5c9b63:c.instructions+=3;goto B5c9b63;
case 0x5c9b65:c.instructions+=2;goto B5c9b65;
case 0x5c9b66:c.instructions+=1;goto B5c9b66;
case 0x5c9b6b:goto L5c9b6b;
case 0x5c9b6d:c.instructions+=1;goto B5c9b6d;
case 0x5c9b6f:goto L5c9b6f;
case 0x5c9b76:goto L5c9b76;
case 0x5c9b7d:c.instructions+=5;goto B5c9b7d;
case 0x5c9b7e:c.instructions+=4;goto B5c9b7e;
case 0x5c9b80:c.instructions+=3;goto B5c9b80;
case 0x5c9b81:c.instructions+=2;goto B5c9b81;
case 0x5c9b83:c.instructions+=1;goto B5c9b83;
case 0x5c9b88:goto L5c9b88;
case 0x5c9b89:c.instructions+=4;goto B5c9b89;
case 0x5c9b8a:c.instructions+=3;goto B5c9b8a;
case 0x5c9b8b:c.instructions+=2;goto B5c9b8b;
case 0x5c9b8c:c.instructions+=1;goto B5c9b8c;
case 0x5c9b8f:goto L5c9b8f;
case 0x5c9b94:c.instructions+=1;goto B5c9b94;
case 0x5c9b99:goto L5c9b99;
case 0x5c9b9a:c.instructions+=2;goto B5c9b9a;
case 0x5c9b9f:c.instructions+=1;goto B5c9b9f;
case 0x5c9ba4:goto L5c9ba4;
case 0x5c9ba7:goto L5c9ba7;
case 0x5c9ba8:c.instructions+=4;goto B5c9ba8;
case 0x5c9ba9:c.instructions+=3;goto B5c9ba9;
case 0x5c9baa:c.instructions+=2;goto B5c9baa;
case 0x5c9bab:c.instructions+=1;goto B5c9bab;
case 0x5c9bb0:goto L5c9bb0;
case 0x5c9bb1:c.instructions+=9;goto B5c9bb1;
case 0x5c9bb2:c.instructions+=8;goto B5c9bb2;
case 0x5c9bb3:c.instructions+=7;goto B5c9bb3;
case 0x5c9bb7:c.instructions+=6;goto B5c9bb7;
case 0x5c9bbe:c.instructions+=5;goto B5c9bbe;
case 0x5c9bc0:c.instructions+=4;goto B5c9bc0;
case 0x5c9bc7:c.instructions+=3;goto B5c9bc7;
case 0x5c9bc8:c.instructions+=2;goto B5c9bc8;
case 0x5c9bca:c.instructions+=1;goto B5c9bca;
case 0x5c9bd0:goto L5c9bd0;
case 0x5c9bd6:c.instructions+=2;goto B5c9bd6;
case 0x5c9bd8:c.instructions+=1;goto B5c9bd8;
case 0x5c9bde:goto L5c9bde;
case 0x5c9be5:c.instructions+=2;goto B5c9be5;
case 0x5c9be7:c.instructions+=1;goto B5c9be7;
case 0x5c9bed:goto L5c9bed;
case 0x5c9bf4:c.instructions+=2;goto B5c9bf4;
case 0x5c9bf6:c.instructions+=1;goto B5c9bf6;
case 0x5c9bfc:goto L5c9bfc;
case 0x5c9bfe:c.instructions+=4;goto B5c9bfe;
case 0x5c9c04:c.instructions+=3;goto B5c9c04;
case 0x5c9c05:c.instructions+=2;goto B5c9c05;
case 0x5c9c07:c.instructions+=1;goto B5c9c07;
case 0x5c9c0c:goto L5c9c0c;
case 0x5c9c0e:c.instructions+=1;goto B5c9c0e;
case 0x5c9c10:goto L5c9c10;
case 0x5c9c14:c.instructions+=2;goto B5c9c14;
case 0x5c9c1b:c.instructions+=1;goto B5c9c1b;
case 0x5c9c21:goto L5c9c21;
case 0x5c9c23:c.instructions+=24;goto B5c9c23;
case 0x5c9c25:c.instructions+=23;goto B5c9c25;
case 0x5c9c27:c.instructions+=22;goto B5c9c27;
case 0x5c9c29:c.instructions+=21;goto B5c9c29;
case 0x5c9c2b:c.instructions+=20;goto B5c9c2b;
case 0x5c9c32:c.instructions+=19;goto B5c9c32;
case 0x5c9c37:c.instructions+=18;goto B5c9c37;
case 0x5c9c39:c.instructions+=17;goto B5c9c39;
case 0x5c9c3b:c.instructions+=16;goto B5c9c3b;
case 0x5c9c3c:c.instructions+=15;goto B5c9c3c;
case 0x5c9c3e:c.instructions+=14;goto B5c9c3e;
case 0x5c9c40:c.instructions+=13;goto B5c9c40;
case 0x5c9c42:c.instructions+=12;goto B5c9c42;
case 0x5c9c44:c.instructions+=11;goto B5c9c44;
case 0x5c9c45:c.instructions+=10;goto B5c9c45;
case 0x5c9c47:c.instructions+=9;goto B5c9c47;
case 0x5c9c49:c.instructions+=8;goto B5c9c49;
case 0x5c9c4e:c.instructions+=7;goto B5c9c4e;
case 0x5c9c50:c.instructions+=6;goto B5c9c50;
case 0x5c9c52:c.instructions+=5;goto B5c9c52;
case 0x5c9c54:c.instructions+=4;goto B5c9c54;
case 0x5c9c56:c.instructions+=3;goto B5c9c56;
case 0x5c9c57:c.instructions+=2;goto B5c9c57;
case 0x5c9c59:c.instructions+=1;goto B5c9c59;
case 0x5c9c5e:goto L5c9c5e;
case 0x5c9c60:c.instructions+=1;goto B5c9c60;
case 0x5c9c66:goto L5c9c66;
case 0x5c9c67:c.instructions+=5;goto B5c9c67;
case 0x5c9c6e:c.instructions+=4;goto B5c9c6e;
case 0x5c9c6f:c.instructions+=3;goto B5c9c6f;
case 0x5c9c70:c.instructions+=2;goto B5c9c70;
case 0x5c9c71:c.instructions+=1;goto B5c9c71;
case 0x5c9c74:goto L5c9c74;
case 0x5c9c76:c.instructions+=5;goto B5c9c76;
case 0x5c9c79:c.instructions+=4;goto B5c9c79;
case 0x5c9c80:c.instructions+=3;goto B5c9c80;
case 0x5c9c82:c.instructions+=2;goto B5c9c82;
case 0x5c9c84:c.instructions+=1;goto B5c9c84;
case 0x5c9c86:goto L5c9c86;
case 0x5c9c8b:c.instructions+=26;goto B5c9c8b;
case 0x5c9c8d:c.instructions+=25;goto B5c9c8d;
case 0x5c9c8f:c.instructions+=24;goto B5c9c8f;
case 0x5c9c93:c.instructions+=23;goto B5c9c93;
case 0x5c9c95:c.instructions+=22;goto B5c9c95;
case 0x5c9c97:c.instructions+=21;goto B5c9c97;
case 0x5c9c99:c.instructions+=20;goto B5c9c99;
case 0x5c9ca0:c.instructions+=19;goto B5c9ca0;
case 0x5c9ca5:c.instructions+=18;goto B5c9ca5;
case 0x5c9ca7:c.instructions+=17;goto B5c9ca7;
case 0x5c9ca9:c.instructions+=16;goto B5c9ca9;
case 0x5c9caa:c.instructions+=15;goto B5c9caa;
case 0x5c9cac:c.instructions+=14;goto B5c9cac;
case 0x5c9cae:c.instructions+=13;goto B5c9cae;
case 0x5c9cb0:c.instructions+=12;goto B5c9cb0;
case 0x5c9cb2:c.instructions+=11;goto B5c9cb2;
case 0x5c9cb3:c.instructions+=10;goto B5c9cb3;
case 0x5c9cb5:c.instructions+=9;goto B5c9cb5;
case 0x5c9cb7:c.instructions+=8;goto B5c9cb7;
case 0x5c9cbc:c.instructions+=7;goto B5c9cbc;
case 0x5c9cbe:c.instructions+=6;goto B5c9cbe;
case 0x5c9cc0:c.instructions+=5;goto B5c9cc0;
case 0x5c9cc2:c.instructions+=4;goto B5c9cc2;
case 0x5c9cc3:c.instructions+=3;goto B5c9cc3;
case 0x5c9cc5:c.instructions+=2;goto B5c9cc5;
case 0x5c9cc6:c.instructions+=1;goto B5c9cc6;
case 0x5c9ccb:goto L5c9ccb;
case 0x5c9ccd:c.instructions+=1;goto B5c9ccd;
case 0x5c9ccf:goto L5c9ccf;
case 0x5c9cd3:c.instructions+=1;goto B5c9cd3;
case 0x5c9cda:goto L5c9cda;
case 0x5c9cdb:c.instructions+=4;goto B5c9cdb;
case 0x5c9cdd:c.instructions+=3;goto B5c9cdd;
case 0x5c9cde:c.instructions+=2;goto B5c9cde;
case 0x5c9ce0:c.instructions+=1;goto B5c9ce0;
case 0x5c9ce5:goto L5c9ce5;
case 0x5c9ce6:c.instructions+=4;goto B5c9ce6;
case 0x5c9ce7:c.instructions+=3;goto B5c9ce7;
case 0x5c9ce8:c.instructions+=2;goto B5c9ce8;
case 0x5c9ce9:c.instructions+=1;goto B5c9ce9;
case 0x5c9cec:goto L5c9cec;
case 0x5c9cf0:c.instructions+=2;goto B5c9cf0;
case 0x5c9cf7:c.instructions+=1;goto B5c9cf7;
case 0x5c9cf9:goto L5c9cf9;
case 0x5c9d00:c.instructions+=4;goto B5c9d00;
case 0x5c9d01:c.instructions+=3;goto B5c9d01;
case 0x5c9d03:c.instructions+=2;goto B5c9d03;
case 0x5c9d04:c.instructions+=1;goto B5c9d04;
case 0x5c9d09:goto L5c9d09;
case 0x5c9d0a:c.instructions+=4;goto B5c9d0a;
case 0x5c9d0b:c.instructions+=3;goto B5c9d0b;
case 0x5c9d0c:c.instructions+=2;goto B5c9d0c;
case 0x5c9d0d:c.instructions+=1;goto B5c9d0d;
case 0x5c9d10:goto L5c9d10;
case 0x5c9d12:c.instructions+=23;goto B5c9d12;
case 0x5c9d14:c.instructions+=22;goto B5c9d14;
case 0x5c9d16:c.instructions+=21;goto B5c9d16;
case 0x5c9d18:c.instructions+=20;goto B5c9d18;
case 0x5c9d1a:c.instructions+=19;goto B5c9d1a;
case 0x5c9d21:c.instructions+=18;goto B5c9d21;
case 0x5c9d26:c.instructions+=17;goto B5c9d26;
case 0x5c9d28:c.instructions+=16;goto B5c9d28;
case 0x5c9d2a:c.instructions+=15;goto B5c9d2a;
case 0x5c9d2b:c.instructions+=14;goto B5c9d2b;
case 0x5c9d2d:c.instructions+=13;goto B5c9d2d;
case 0x5c9d2f:c.instructions+=12;goto B5c9d2f;
case 0x5c9d31:c.instructions+=11;goto B5c9d31;
case 0x5c9d33:c.instructions+=10;goto B5c9d33;
case 0x5c9d34:c.instructions+=9;goto B5c9d34;
case 0x5c9d36:c.instructions+=8;goto B5c9d36;
case 0x5c9d38:c.instructions+=7;goto B5c9d38;
case 0x5c9d3d:c.instructions+=6;goto B5c9d3d;
case 0x5c9d3f:c.instructions+=5;goto B5c9d3f;
case 0x5c9d41:c.instructions+=4;goto B5c9d41;
case 0x5c9d43:c.instructions+=3;goto B5c9d43;
case 0x5c9d45:c.instructions+=2;goto B5c9d45;
case 0x5c9d46:c.instructions+=1;goto B5c9d46;
case 0x5c9d4b:goto L5c9d4b;
case 0x5c9d4d:c.instructions+=1;goto B5c9d4d;
case 0x5c9d4f:goto L5c9d4f;
case 0x5c9d56:goto L5c9d56;
case 0x5c9d5d:c.instructions+=5;goto B5c9d5d;
case 0x5c9d5e:c.instructions+=4;goto B5c9d5e;
case 0x5c9d60:c.instructions+=3;goto B5c9d60;
case 0x5c9d61:c.instructions+=2;goto B5c9d61;
case 0x5c9d63:c.instructions+=1;goto B5c9d63;
case 0x5c9d68:goto L5c9d68;
case 0x5c9d69:c.instructions+=4;goto B5c9d69;
case 0x5c9d6a:c.instructions+=3;goto B5c9d6a;
case 0x5c9d6b:c.instructions+=2;goto B5c9d6b;
case 0x5c9d6c:c.instructions+=1;goto B5c9d6c;
case 0x5c9d6f:goto L5c9d6f;
case 0x5c9d74:c.instructions+=1;goto B5c9d74;
case 0x5c9d79:goto L5c9d79;
case 0x5c9d7a:c.instructions+=2;goto B5c9d7a;
case 0x5c9d7f:c.instructions+=1;goto B5c9d7f;
case 0x5c9d84:goto L5c9d84;
case 0x5c9d87:goto L5c9d87;
case 0x5c9d88:c.instructions+=4;goto B5c9d88;
case 0x5c9d89:c.instructions+=3;goto B5c9d89;
case 0x5c9d8a:c.instructions+=2;goto B5c9d8a;
case 0x5c9d8b:c.instructions+=1;goto B5c9d8b;
case 0x5c9d90:goto L5c9d90;
case 0x5c9d91:c.instructions+=10;goto B5c9d91;
case 0x5c9d92:c.instructions+=9;goto B5c9d92;
case 0x5c9d93:c.instructions+=8;goto B5c9d93;
case 0x5c9d97:c.instructions+=7;goto B5c9d97;
case 0x5c9d98:c.instructions+=6;goto B5c9d98;
case 0x5c9d9a:c.instructions+=5;goto B5c9d9a;
case 0x5c9d9c:c.instructions+=4;goto B5c9d9c;
case 0x5c9da2:c.instructions+=3;goto B5c9da2;
case 0x5c9da3:c.instructions+=2;goto B5c9da3;
case 0x5c9da5:c.instructions+=1;goto B5c9da5;
case 0x5c9daa:goto L5c9daa;
case 0x5c9dac:c.instructions+=1;goto B5c9dac;
case 0x5c9dae:goto L5c9dae;
case 0x5c9db5:c.instructions+=2;goto B5c9db5;
case 0x5c9db7:c.instructions+=1;goto B5c9db7;
case 0x5c9db9:goto L5c9db9;
case 0x5c9dbb:c.instructions+=3;goto B5c9dbb;
case 0x5c9dbc:c.instructions+=2;goto B5c9dbc;
case 0x5c9dbe:c.instructions+=1;goto B5c9dbe;
case 0x5c9dc3:goto L5c9dc3;
case 0x5c9dcb:c.instructions+=1;goto B5c9dcb;
case 0x5c9dd3:goto L5c9dd3;
case 0x5c9dd5:c.instructions+=3;goto B5c9dd5;
case 0x5c9dd6:c.instructions+=2;goto B5c9dd6;
case 0x5c9dd8:c.instructions+=1;goto B5c9dd8;
case 0x5c9ddd:goto L5c9ddd;
case 0x5c9ddf:c.instructions+=1;goto B5c9ddf;
case 0x5c9de1:goto L5c9de1;
case 0x5c9de8:c.instructions+=2;goto B5c9de8;
case 0x5c9dea:c.instructions+=1;goto B5c9dea;
case 0x5c9dec:goto L5c9dec;
case 0x5c9dee:c.instructions+=3;goto B5c9dee;
case 0x5c9def:c.instructions+=2;goto B5c9def;
case 0x5c9df1:c.instructions+=1;goto B5c9df1;
case 0x5c9df6:goto L5c9df6;
case 0x5c9dfe:c.instructions+=1;goto B5c9dfe;
case 0x5c9e06:goto L5c9e06;
case 0x5c9e0d:c.instructions+=2;goto B5c9e0d;
case 0x5c9e0f:c.instructions+=1;goto B5c9e0f;
case 0x5c9e15:goto L5c9e15;
case 0x5c9e1c:c.instructions+=2;goto B5c9e1c;
case 0x5c9e1e:c.instructions+=1;goto B5c9e1e;
case 0x5c9e24:goto L5c9e24;
case 0x5c9e2b:c.instructions+=2;goto B5c9e2b;
case 0x5c9e2d:c.instructions+=1;goto B5c9e2d;
case 0x5c9e33:goto L5c9e33;
case 0x5c9e35:c.instructions+=3;goto B5c9e35;
case 0x5c9e36:c.instructions+=2;goto B5c9e36;
case 0x5c9e38:c.instructions+=1;goto B5c9e38;
case 0x5c9e3d:goto L5c9e3d;
case 0x5c9e3f:c.instructions+=2;goto B5c9e3f;
case 0x5c9e43:c.instructions+=1;goto B5c9e43;
case 0x5c9e45:goto L5c9e45;
case 0x5c9e4c:c.instructions+=1;goto B5c9e4c;
case 0x5c9e52:goto L5c9e52;
case 0x5c9e54:c.instructions+=24;goto B5c9e54;
case 0x5c9e56:c.instructions+=23;goto B5c9e56;
case 0x5c9e5b:c.instructions+=22;goto B5c9e5b;
case 0x5c9e60:c.instructions+=21;goto B5c9e60;
case 0x5c9e62:c.instructions+=20;goto B5c9e62;
case 0x5c9e64:c.instructions+=19;goto B5c9e64;
case 0x5c9e65:c.instructions+=18;goto B5c9e65;
case 0x5c9e66:c.instructions+=17;goto B5c9e66;
case 0x5c9e6d:c.instructions+=16;goto B5c9e6d;
case 0x5c9e6f:c.instructions+=15;goto B5c9e6f;
case 0x5c9e71:c.instructions+=14;goto B5c9e71;
case 0x5c9e73:c.instructions+=13;goto B5c9e73;
case 0x5c9e75:c.instructions+=12;goto B5c9e75;
case 0x5c9e77:c.instructions+=11;goto B5c9e77;
case 0x5c9e78:c.instructions+=10;goto B5c9e78;
case 0x5c9e7a:c.instructions+=9;goto B5c9e7a;
case 0x5c9e7c:c.instructions+=8;goto B5c9e7c;
case 0x5c9e81:c.instructions+=7;goto B5c9e81;
case 0x5c9e83:c.instructions+=6;goto B5c9e83;
case 0x5c9e85:c.instructions+=5;goto B5c9e85;
case 0x5c9e87:c.instructions+=4;goto B5c9e87;
case 0x5c9e89:c.instructions+=3;goto B5c9e89;
case 0x5c9e8a:c.instructions+=2;goto B5c9e8a;
case 0x5c9e8c:c.instructions+=1;goto B5c9e8c;
case 0x5c9e91:goto L5c9e91;
case 0x5c9e93:c.instructions+=1;goto B5c9e93;
case 0x5c9e99:goto L5c9e99;
case 0x5c9e9a:c.instructions+=5;goto B5c9e9a;
case 0x5c9ea1:c.instructions+=4;goto B5c9ea1;
case 0x5c9ea2:c.instructions+=3;goto B5c9ea2;
case 0x5c9ea3:c.instructions+=2;goto B5c9ea3;
case 0x5c9ea4:c.instructions+=1;goto B5c9ea4;
case 0x5c9ea7:goto L5c9ea7;
case 0x5c9ea9:c.instructions+=5;goto B5c9ea9;
case 0x5c9eac:c.instructions+=4;goto B5c9eac;
case 0x5c9eb3:c.instructions+=3;goto B5c9eb3;
case 0x5c9eb5:c.instructions+=2;goto B5c9eb5;
case 0x5c9eb7:c.instructions+=1;goto B5c9eb7;
case 0x5c9eb9:goto L5c9eb9;
case 0x5c9ebe:c.instructions+=26;goto B5c9ebe;
case 0x5c9ec0:c.instructions+=25;goto B5c9ec0;
case 0x5c9ec2:c.instructions+=24;goto B5c9ec2;
case 0x5c9ec7:c.instructions+=23;goto B5c9ec7;
case 0x5c9ece:c.instructions+=22;goto B5c9ece;
case 0x5c9ed3:c.instructions+=21;goto B5c9ed3;
case 0x5c9ed5:c.instructions+=20;goto B5c9ed5;
case 0x5c9ed7:c.instructions+=19;goto B5c9ed7;
case 0x5c9ed8:c.instructions+=18;goto B5c9ed8;
case 0x5c9ed9:c.instructions+=17;goto B5c9ed9;
case 0x5c9edb:c.instructions+=16;goto B5c9edb;
case 0x5c9edd:c.instructions+=15;goto B5c9edd;
case 0x5c9edf:c.instructions+=14;goto B5c9edf;
case 0x5c9ee1:c.instructions+=13;goto B5c9ee1;
case 0x5c9ee3:c.instructions+=12;goto B5c9ee3;
case 0x5c9ee4:c.instructions+=11;goto B5c9ee4;
case 0x5c9ee6:c.instructions+=10;goto B5c9ee6;
case 0x5c9ee8:c.instructions+=9;goto B5c9ee8;
case 0x5c9eed:c.instructions+=8;goto B5c9eed;
case 0x5c9eef:c.instructions+=7;goto B5c9eef;
case 0x5c9ef1:c.instructions+=6;goto B5c9ef1;
case 0x5c9ef3:c.instructions+=5;goto B5c9ef3;
case 0x5c9efa:c.instructions+=4;goto B5c9efa;
case 0x5c9efb:c.instructions+=3;goto B5c9efb;
case 0x5c9efd:c.instructions+=2;goto B5c9efd;
case 0x5c9efe:c.instructions+=1;goto B5c9efe;
case 0x5c9f03:goto L5c9f03;
case 0x5c9f05:c.instructions+=1;goto B5c9f05;
case 0x5c9f07:goto L5c9f07;
case 0x5c9f0e:goto L5c9f0e;
case 0x5c9f15:c.instructions+=5;goto B5c9f15;
case 0x5c9f16:c.instructions+=4;goto B5c9f16;
case 0x5c9f18:c.instructions+=3;goto B5c9f18;
case 0x5c9f19:c.instructions+=2;goto B5c9f19;
case 0x5c9f1b:c.instructions+=1;goto B5c9f1b;
case 0x5c9f20:goto L5c9f20;
case 0x5c9f21:c.instructions+=4;goto B5c9f21;
case 0x5c9f22:c.instructions+=3;goto B5c9f22;
case 0x5c9f23:c.instructions+=2;goto B5c9f23;
case 0x5c9f24:c.instructions+=1;goto B5c9f24;
case 0x5c9f27:goto L5c9f27;
case 0x5c9f2e:c.instructions+=1;goto B5c9f2e;
case 0x5c9f30:goto L5c9f30;
case 0x5c9f37:c.instructions+=4;goto B5c9f37;
case 0x5c9f38:c.instructions+=3;goto B5c9f38;
case 0x5c9f3a:c.instructions+=2;goto B5c9f3a;
case 0x5c9f3b:c.instructions+=1;goto B5c9f3b;
case 0x5c9f40:goto L5c9f40;
case 0x5c9f41:c.instructions+=4;goto B5c9f41;
case 0x5c9f42:c.instructions+=3;goto B5c9f42;
case 0x5c9f43:c.instructions+=2;goto B5c9f43;
case 0x5c9f44:c.instructions+=1;goto B5c9f44;
case 0x5c9f47:goto L5c9f47;
case 0x5c9f49:c.instructions+=23;goto B5c9f49;
case 0x5c9f4b:c.instructions+=22;goto B5c9f4b;
case 0x5c9f50:c.instructions+=21;goto B5c9f50;
case 0x5c9f55:c.instructions+=20;goto B5c9f55;
case 0x5c9f57:c.instructions+=19;goto B5c9f57;
case 0x5c9f59:c.instructions+=18;goto B5c9f59;
case 0x5c9f5a:c.instructions+=17;goto B5c9f5a;
case 0x5c9f5b:c.instructions+=16;goto B5c9f5b;
case 0x5c9f62:c.instructions+=15;goto B5c9f62;
case 0x5c9f64:c.instructions+=14;goto B5c9f64;
case 0x5c9f66:c.instructions+=13;goto B5c9f66;
case 0x5c9f68:c.instructions+=12;goto B5c9f68;
case 0x5c9f6a:c.instructions+=11;goto B5c9f6a;
case 0x5c9f6c:c.instructions+=10;goto B5c9f6c;
case 0x5c9f6d:c.instructions+=9;goto B5c9f6d;
case 0x5c9f6f:c.instructions+=8;goto B5c9f6f;
case 0x5c9f71:c.instructions+=7;goto B5c9f71;
case 0x5c9f76:c.instructions+=6;goto B5c9f76;
case 0x5c9f78:c.instructions+=5;goto B5c9f78;
case 0x5c9f7a:c.instructions+=4;goto B5c9f7a;
case 0x5c9f7c:c.instructions+=3;goto B5c9f7c;
case 0x5c9f7e:c.instructions+=2;goto B5c9f7e;
case 0x5c9f7f:c.instructions+=1;goto B5c9f7f;
case 0x5c9f84:goto L5c9f84;
case 0x5c9f86:c.instructions+=1;goto B5c9f86;
case 0x5c9f88:goto L5c9f88;
case 0x5c9f8f:goto L5c9f8f;
case 0x5c9f96:c.instructions+=5;goto B5c9f96;
case 0x5c9f97:c.instructions+=4;goto B5c9f97;
case 0x5c9f99:c.instructions+=3;goto B5c9f99;
case 0x5c9f9a:c.instructions+=2;goto B5c9f9a;
case 0x5c9f9c:c.instructions+=1;goto B5c9f9c;
case 0x5c9fa1:goto L5c9fa1;
case 0x5c9fa2:c.instructions+=4;goto B5c9fa2;
case 0x5c9fa3:c.instructions+=3;goto B5c9fa3;
case 0x5c9fa4:c.instructions+=2;goto B5c9fa4;
case 0x5c9fa5:c.instructions+=1;goto B5c9fa5;
case 0x5c9fa8:goto L5c9fa8;
case 0x5c9fad:c.instructions+=1;goto B5c9fad;
case 0x5c9fb2:goto L5c9fb2;
case 0x5c9fb3:c.instructions+=2;goto B5c9fb3;
case 0x5c9fb8:c.instructions+=1;goto B5c9fb8;
case 0x5c9fbd:goto L5c9fbd;
case 0x5c9fc0:goto L5c9fc0;
case 0x5c9fc1:c.instructions+=4;goto B5c9fc1;
case 0x5c9fc2:c.instructions+=3;goto B5c9fc2;
case 0x5c9fc3:c.instructions+=2;goto B5c9fc3;
case 0x5c9fc4:c.instructions+=1;goto B5c9fc4;
case 0x5c9fd0:goto L5c9fd0;
case 0x5c9fd3:c.instructions+=9;goto B5c9fd3;
case 0x5c9fd4:c.instructions+=8;goto B5c9fd4;
case 0x5c9fd8:c.instructions+=7;goto B5c9fd8;
case 0x5c9fde:c.instructions+=6;goto B5c9fde;
case 0x5c9fdf:c.instructions+=5;goto B5c9fdf;
case 0x5c9fe0:c.instructions+=4;goto B5c9fe0;
case 0x5c9fe1:c.instructions+=3;goto B5c9fe1;
case 0x5c9fe5:c.instructions+=2;goto B5c9fe5;
case 0x5c9fed:c.instructions+=1;goto B5c9fed;
case 0x5c9fef:goto L5c9fef;
case 0x5c9ff4:goto L5c9ff4;
case 0x5c9ff8:c.instructions+=2;goto B5c9ff8;
case 0x5c9fff:c.instructions+=1;goto B5c9fff;
default:missing_instruction(c.pc);}
B5c9006:L5c9006:{c.instructions+=6;NFSU2_TR(0x5c9006);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x38ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c900e:{NFSU2_TR(0x5c900e);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c9016:{NFSU2_TR(0x5c9016);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c901a:{NFSU2_TR(0x5c901a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c901c:{NFSU2_TR(0x5c901c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c901d:{NFSU2_TR(0x5c901d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9020ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c9020:L5c9020:{c.instructions+=4;NFSU2_TR(0x5c9020);
__builtin_memmove((R+24),(R+0),4);
}
B5c9022:{NFSU2_TR(0x5c9022);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c9024:{NFSU2_TR(0x5c9024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9025:{NFSU2_TR(0x5c9025);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c9035;}}
}
B5c9027:L5c9027:{c.instructions+=3;NFSU2_TR(0x5c9027);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9028:{NFSU2_TR(0x5c9028);
u8 U[4];
w4(U+0,u32(0x7a3fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c902d:{NFSU2_TR(0x5c902d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9032ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c9032:L5c9032:{c.instructions+=1;NFSU2_TR(0x5c9032);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c9035:L5c9035:{c.instructions+=5;NFSU2_TR(0x5c9035);
__builtin_memmove((R+0),(R+24),4);
}
B5c9037:{NFSU2_TR(0x5c9037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9038:{NFSU2_TR(0x5c9038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9039:{NFSU2_TR(0x5c9039);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x6cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x6cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x6cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c903c:{NFSU2_TR(0x5c903c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9040:L5c9040:{c.instructions+=3;NFSU2_TR(0x5c9040);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c9044:{NFSU2_TR(0x5c9044);
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
B5c9047:{NFSU2_TR(0x5c9047);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5c90e5;}}
}
B5c904d:L5c904d:{c.instructions+=1;NFSU2_TR(0x5c904d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5c90ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c9054:L5c9054:{c.instructions+=5;NFSU2_TR(0x5c9054);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c9058:{NFSU2_TR(0x5c9058);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c905a:{NFSU2_TR(0x5c905a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c905b:{NFSU2_TR(0x5c905b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2498ull))));
}
B5c9061:{NFSU2_TR(0x5c9061);
{goto L5c90c9;}
}
B5c9063:L5c9063:{c.instructions+=5;NFSU2_TR(0x5c9063);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c9067:{NFSU2_TR(0x5c9067);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9069:{NFSU2_TR(0x5c9069);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c906a:{NFSU2_TR(0x5c906a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24e8ull))));
}
B5c9070:{NFSU2_TR(0x5c9070);
{goto L5c90c9;}
}
B5c9072:L5c9072:{c.instructions+=5;NFSU2_TR(0x5c9072);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c9076:{NFSU2_TR(0x5c9076);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9078:{NFSU2_TR(0x5c9078);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9079:{NFSU2_TR(0x5c9079);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2498ull))));
}
B5c907f:{NFSU2_TR(0x5c907f);
{goto L5c90c9;}
}
B5c9081:L5c9081:{c.instructions+=5;NFSU2_TR(0x5c9081);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c9085:{NFSU2_TR(0x5c9085);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9087:{NFSU2_TR(0x5c9087);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9088:{NFSU2_TR(0x5c9088);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24e8ull))));
}
B5c908e:{NFSU2_TR(0x5c908e);
{goto L5c90c9;}
}
B5c9090:L5c9090:{c.instructions+=2;NFSU2_TR(0x5c9090);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9092:{NFSU2_TR(0x5c9092);
{goto L5c90be;}
}
B5c9094:L5c9094:{c.instructions+=4;NFSU2_TR(0x5c9094);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c9098:{NFSU2_TR(0x5c9098);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c909a:{NFSU2_TR(0x5c909a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c909b:{NFSU2_TR(0x5c909b);
{goto L5c90c3;}
}
B5c909d:L5c909d:{c.instructions+=2;NFSU2_TR(0x5c909d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c909f:{NFSU2_TR(0x5c909f);
{goto L5c90be;}
}
B5c90a1:L5c90a1:{c.instructions+=5;NFSU2_TR(0x5c90a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c90a5:{NFSU2_TR(0x5c90a5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c90a7:{NFSU2_TR(0x5c90a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c90a8:{NFSU2_TR(0x5c90a8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2498ull))));
}
B5c90ae:{NFSU2_TR(0x5c90ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c90b3ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5c90b3:L5c90b3:{c.instructions+=2;NFSU2_TR(0x5c90b3);
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
B5c90b5:{NFSU2_TR(0x5c90b5);
if(r1(R+518)){{goto L5c90e5;}}
}
B5c90b7:L5c90b7:{c.instructions+=2;NFSU2_TR(0x5c90b7);
w1(R+0,u8(0x1ull));
}
B5c90b9:{NFSU2_TR(0x5c90b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c90bc:L5c90bc:{c.instructions+=1;NFSU2_TR(0x5c90bc);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c90be:L5c90be:{c.instructions+=2;NFSU2_TR(0x5c90be);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c90c2:{NFSU2_TR(0x5c90c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c90c3:L5c90c3:{c.instructions+=1;NFSU2_TR(0x5c90c3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2538ull))));
}
B5c90c9:L5c90c9:{c.instructions+=1;NFSU2_TR(0x5c90c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c90ceull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5c90ce:L5c90ce:{c.instructions+=2;NFSU2_TR(0x5c90ce);
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
B5c90d0:{NFSU2_TR(0x5c90d0);
if(r1(R+518)){{goto L5c90e5;}}
}
B5c90d2:L5c90d2:{c.instructions+=2;NFSU2_TR(0x5c90d2);
w1(R+0,u8(0x1ull));
}
B5c90d4:{NFSU2_TR(0x5c90d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c90d7:L5c90d7:{c.instructions+=3;NFSU2_TR(0x5c90d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c90db:{NFSU2_TR(0x5c90db);
u8 U[18];
w4(U+0,u32(u32(u32(0x2220ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+16),(U+12),1);
w1(R+512,u8((r1(U+16))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+16),u8(0x1ull)));
w1(U+17,u8(u32(r1(U+16))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+17))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+17))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+17))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B5c90e3:{NFSU2_TR(0x5c90e3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c90d2u);}goto L5c90d2;}}
}
B5c90e5:L5c90e5:{c.instructions+=2;NFSU2_TR(0x5c90e5);
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
B5c90e7:{NFSU2_TR(0x5c90e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9120:L5c9120:{c.instructions+=4;NFSU2_TR(0x5c9120);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c9124:{NFSU2_TR(0x5c9124);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c912b:{NFSU2_TR(0x5c912b);
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
B5c912d:{NFSU2_TR(0x5c912d);
if(r1(R+518)){{goto L5c9145;}}
}
B5c912f:L5c912f:{c.instructions+=4;NFSU2_TR(0x5c912f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c9136:{NFSU2_TR(0x5c9136);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c913a:{NFSU2_TR(0x5c913a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2448ull))));
}
B5c9140:{NFSU2_TR(0x5c9140);
TAIL_STATIC(0x5c00b0u,5c0);
}
B5c9145:L5c9145:{c.instructions+=1;NFSU2_TR(0x5c9145);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9150:L5c9150:{c.instructions+=11;NFSU2_TR(0x5c9150);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9151:{NFSU2_TR(0x5c9151);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9152:{NFSU2_TR(0x5c9152);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9153:{NFSU2_TR(0x5c9153);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c9157:{NFSU2_TR(0x5c9157);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9158:{NFSU2_TR(0x5c9158);
__builtin_memmove((R+28),(R+4),4);
}
B5c915a:{NFSU2_TR(0x5c915a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c915c:{NFSU2_TR(0x5c915c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2498ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9162:{NFSU2_TR(0x5c9162);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9163:{NFSU2_TR(0x5c9163);
__builtin_memmove((R+4),(R+12),4);
}
B5c9165:{NFSU2_TR(0x5c9165);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c916aull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5c916a:L5c916a:{c.instructions+=2;NFSU2_TR(0x5c916a);
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
B5c916c:{NFSU2_TR(0x5c916c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c9377;}}
}
B5c9172:L5c9172:{c.instructions+=3;NFSU2_TR(0x5c9172);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9179:{NFSU2_TR(0x5c9179);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c917b:{NFSU2_TR(0x5c917b);
if(r1(R+518)){{goto L5c935f;}}
}
B5c9181:L5c9181:{c.instructions+=3;NFSU2_TR(0x5c9181);
u8 U[13];
w4(U+0,u32(u32(u32(0x2220ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5c9188:{NFSU2_TR(0x5c9188);
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
B5c918a:{NFSU2_TR(0x5c918a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c9377;}}
}
B5c9190:L5c9190:{c.instructions+=3;NFSU2_TR(0x5c9190);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9197:{NFSU2_TR(0x5c9197);
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
B5c9199:{NFSU2_TR(0x5c9199);
if(r1(R+518)){{goto L5c9377;}}
}
B5c919f:L5c919f:{c.instructions+=4;NFSU2_TR(0x5c919f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91a1:{NFSU2_TR(0x5c91a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91a2:{NFSU2_TR(0x5c91a2);
__builtin_memmove((R+4),(R+12),4);
}
B5c91a4:{NFSU2_TR(0x5c91a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c91a9ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5c91a9:L5c91a9:{c.instructions+=2;NFSU2_TR(0x5c91a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c91ab:{NFSU2_TR(0x5c91ab);
if(r1(R+518)){{goto L5c923d;}}
}
B5c91b1:L5c91b1:{c.instructions+=9;NFSU2_TR(0x5c91b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c91b5:{NFSU2_TR(0x5c91b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c91b9:{NFSU2_TR(0x5c91b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c91bd:{NFSU2_TR(0x5c91bd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91be:{NFSU2_TR(0x5c91be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91bf:{NFSU2_TR(0x5c91bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91c0:{NFSU2_TR(0x5c91c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91c1:{NFSU2_TR(0x5c91c1);
__builtin_memmove((R+4),(R+28),4);
}
B5c91c3:{NFSU2_TR(0x5c91c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c91c8ull));
TAIL_STATIC(0x5bfe20u,5bf);
}
B5c91c8:L5c91c8:{c.instructions+=2;NFSU2_TR(0x5c91c8);
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
B5c91ca:{NFSU2_TR(0x5c91ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c9377;}}
}
B5c91d0:L5c91d0:{c.instructions+=25;NFSU2_TR(0x5c91d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c91d4:{NFSU2_TR(0x5c91d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c91d8:{NFSU2_TR(0x5c91d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91da:{NFSU2_TR(0x5c91da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91dc:{NFSU2_TR(0x5c91dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91dd:{NFSU2_TR(0x5c91dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91de:{NFSU2_TR(0x5c91de);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c91e5:{NFSU2_TR(0x5c91e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91e6:{NFSU2_TR(0x5c91e6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91e7:{NFSU2_TR(0x5c91e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91e8:{NFSU2_TR(0x5c91e8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91ea:{NFSU2_TR(0x5c91ea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91ec:{NFSU2_TR(0x5c91ec);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91ee:{NFSU2_TR(0x5c91ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91f0:{NFSU2_TR(0x5c91f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91f1:{NFSU2_TR(0x5c91f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91f3:{NFSU2_TR(0x5c91f3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91f5:{NFSU2_TR(0x5c91f5);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91fa:{NFSU2_TR(0x5c91fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91fc:{NFSU2_TR(0x5c91fc);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c91fe:{NFSU2_TR(0x5c91fe);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9200:{NFSU2_TR(0x5c9200);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9202:{NFSU2_TR(0x5c9202);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9203:{NFSU2_TR(0x5c9203);
__builtin_memmove((R+4),(R+12),4);
}
B5c9205:{NFSU2_TR(0x5c9205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c920aull));
TAIL_STATIC(0x5c06a0u,5c0);
}
B5c920a:L5c920a:{c.instructions+=2;NFSU2_TR(0x5c920a);
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
B5c920c:{NFSU2_TR(0x5c920c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c9377;}}
}
B5c9212:L5c9212:{c.instructions+=13;NFSU2_TR(0x5c9212);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c9216:{NFSU2_TR(0x5c9216);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5c9219:{NFSU2_TR(0x5c9219);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c921c:{NFSU2_TR(0x5c921c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ba0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c9222:{NFSU2_TR(0x5c9222);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c9226:{NFSU2_TR(0x5c9226);
u8 U[12];
w4(U+0,u32(u32(u32(0xae9ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5c922d:{NFSU2_TR(0x5c922d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5c9230:{NFSU2_TR(0x5c9230);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9231:{NFSU2_TR(0x5c9231);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9232:{NFSU2_TR(0x5c9232);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ba8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c9238:{NFSU2_TR(0x5c9238);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9239:{NFSU2_TR(0x5c9239);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c923a:{NFSU2_TR(0x5c923a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c923d:L5c923d:{c.instructions+=5;NFSU2_TR(0x5c923d);
__builtin_memmove((R+0),(R+24),4);
}
B5c923f:{NFSU2_TR(0x5c923f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5c9242:{NFSU2_TR(0x5c9242);
u8 U[16];
w4(U+0,u32(u32(u32(0x24a8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5c9249:{NFSU2_TR(0x5c9249);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c924b:{NFSU2_TR(0x5c924b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c92dd;}}
}
B5c9251:L5c9251:{c.instructions+=29;NFSU2_TR(0x5c9251);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c9255:{NFSU2_TR(0x5c9255);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c9259:{NFSU2_TR(0x5c9259);
u8 U[4];
w4(U+0,u32(0x7bfc90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c925e:{NFSU2_TR(0x5c925e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c9262:{NFSU2_TR(0x5c9262);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9264:{NFSU2_TR(0x5c9264);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9266:{NFSU2_TR(0x5c9266);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9267:{NFSU2_TR(0x5c9267);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c926e:{NFSU2_TR(0x5c926e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c926f:{NFSU2_TR(0x5c926f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9270:{NFSU2_TR(0x5c9270);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9271:{NFSU2_TR(0x5c9271);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9272:{NFSU2_TR(0x5c9272);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9274:{NFSU2_TR(0x5c9274);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9276:{NFSU2_TR(0x5c9276);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9278:{NFSU2_TR(0x5c9278);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c927a:{NFSU2_TR(0x5c927a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c927b:{NFSU2_TR(0x5c927b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c927d:{NFSU2_TR(0x5c927d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c927f:{NFSU2_TR(0x5c927f);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9284:{NFSU2_TR(0x5c9284);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9286:{NFSU2_TR(0x5c9286);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9288:{NFSU2_TR(0x5c9288);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c928a:{NFSU2_TR(0x5c928a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c9291:{NFSU2_TR(0x5c9291);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9292:{NFSU2_TR(0x5c9292);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9294:{NFSU2_TR(0x5c9294);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9295:{NFSU2_TR(0x5c9295);
__builtin_memmove((R+4),(R+12),4);
}
B5c9297:{NFSU2_TR(0x5c9297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c929cull));
TAIL_STATIC(0x5c04e0u,5c0);
}
B5c929c:L5c929c:{c.instructions+=2;NFSU2_TR(0x5c929c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c929e:{NFSU2_TR(0x5c929e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c92c4;}}
}
B5c92a0:L5c92a0:{c.instructions+=8;NFSU2_TR(0x5c92a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c92a4:{NFSU2_TR(0x5c92a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c92a7:{NFSU2_TR(0x5c92a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c92aa:{NFSU2_TR(0x5c92aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ba0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c92b0:{NFSU2_TR(0x5c92b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c92b4:{NFSU2_TR(0x5c92b4);
u8 U[12];
w4(U+0,u32(u32(u32(0xae9ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5c92bb:{NFSU2_TR(0x5c92bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+20),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5c92be:{NFSU2_TR(0x5c92be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ba8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c92c4:L5c92c4:{c.instructions+=6;NFSU2_TR(0x5c92c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c92cb:{NFSU2_TR(0x5c92cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c92cc:{NFSU2_TR(0x5c92cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c92ce:{NFSU2_TR(0x5c92ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c92cf:{NFSU2_TR(0x5c92cf);
__builtin_memmove((R+4),(R+12),4);
}
B5c92d1:{NFSU2_TR(0x5c92d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c92d6ull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c92d6:L5c92d6:{c.instructions+=5;NFSU2_TR(0x5c92d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c92d7:{NFSU2_TR(0x5c92d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c92d8:{NFSU2_TR(0x5c92d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c92d9:{NFSU2_TR(0x5c92d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c92da:{NFSU2_TR(0x5c92da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c92dd:L5c92dd:{c.instructions+=9;NFSU2_TR(0x5c92dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c92e1:{NFSU2_TR(0x5c92e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c92e5:{NFSU2_TR(0x5c92e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c92e9:{NFSU2_TR(0x5c92e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c92ea:{NFSU2_TR(0x5c92ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c92eb:{NFSU2_TR(0x5c92eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c92ec:{NFSU2_TR(0x5c92ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c92ed:{NFSU2_TR(0x5c92ed);
__builtin_memmove((R+4),(R+28),4);
}
B5c92ef:{NFSU2_TR(0x5c92ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c92f4ull));
TAIL_STATIC(0x5bfe20u,5bf);
}
B5c92f4:L5c92f4:{c.instructions+=2;NFSU2_TR(0x5c92f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c92f6:{NFSU2_TR(0x5c92f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c92c4u);}goto L5c92c4;}}
}
B5c92f8:L5c92f8:{c.instructions+=25;NFSU2_TR(0x5c92f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c92fc:{NFSU2_TR(0x5c92fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c9300:{NFSU2_TR(0x5c9300);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9302:{NFSU2_TR(0x5c9302);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9304:{NFSU2_TR(0x5c9304);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9305:{NFSU2_TR(0x5c9305);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c930c:{NFSU2_TR(0x5c930c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c930d:{NFSU2_TR(0x5c930d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c930e:{NFSU2_TR(0x5c930e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c930f:{NFSU2_TR(0x5c930f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9310:{NFSU2_TR(0x5c9310);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9312:{NFSU2_TR(0x5c9312);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9314:{NFSU2_TR(0x5c9314);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9316:{NFSU2_TR(0x5c9316);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9318:{NFSU2_TR(0x5c9318);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9319:{NFSU2_TR(0x5c9319);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c931b:{NFSU2_TR(0x5c931b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c931d:{NFSU2_TR(0x5c931d);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9322:{NFSU2_TR(0x5c9322);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9324:{NFSU2_TR(0x5c9324);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9326:{NFSU2_TR(0x5c9326);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9328:{NFSU2_TR(0x5c9328);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c932a:{NFSU2_TR(0x5c932a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c932b:{NFSU2_TR(0x5c932b);
__builtin_memmove((R+4),(R+12),4);
}
B5c932d:{NFSU2_TR(0x5c932d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9332ull));
TAIL_STATIC(0x5c06a0u,5c0);
}
B5c9332:L5c9332:{c.instructions+=2;NFSU2_TR(0x5c9332);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c9334:{NFSU2_TR(0x5c9334);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c92c4u);}goto L5c92c4;}}
}
B5c9336:L5c9336:{c.instructions+=9;NFSU2_TR(0x5c9336);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c933a:{NFSU2_TR(0x5c933a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c933d:{NFSU2_TR(0x5c933d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c9340:{NFSU2_TR(0x5c9340);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ba0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c9346:{NFSU2_TR(0x5c9346);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c934a:{NFSU2_TR(0x5c934a);
u8 U[12];
w4(U+0,u32(u32(u32(0xae9ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5c9351:{NFSU2_TR(0x5c9351);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5c9354:{NFSU2_TR(0x5c9354);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ba8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c935a:{NFSU2_TR(0x5c935a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c92c4u);}goto L5c92c4;}
}
B5c935f:L5c935f:{c.instructions+=2;NFSU2_TR(0x5c935f);
u8 U[4];
w4(U+0,u32(0x7a4028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9364:{NFSU2_TR(0x5c9364);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9369ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c9369:L5c9369:{c.instructions+=3;NFSU2_TR(0x5c9369);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c936a:{NFSU2_TR(0x5c936a);
u8 U[4];
w4(U+0,u32(0x7a4010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c936f:{NFSU2_TR(0x5c936f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9374ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c9374:L5c9374:{c.instructions+=1;NFSU2_TR(0x5c9374);
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
B5c9377:L5c9377:{c.instructions+=5;NFSU2_TR(0x5c9377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9378:{NFSU2_TR(0x5c9378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9379:{NFSU2_TR(0x5c9379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c937a:{NFSU2_TR(0x5c937a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c937b:{NFSU2_TR(0x5c937b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9380:L5c9380:{c.instructions+=10;NFSU2_TR(0x5c9380);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9381:{NFSU2_TR(0x5c9381);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9382:{NFSU2_TR(0x5c9382);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9383:{NFSU2_TR(0x5c9383);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c9387:{NFSU2_TR(0x5c9387);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c938e:{NFSU2_TR(0x5c938e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c9390:{NFSU2_TR(0x5c9390);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B5c9397:{NFSU2_TR(0x5c9397);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9398:{NFSU2_TR(0x5c9398);
__builtin_memmove((R+12),(R+4),4);
}
B5c939a:{NFSU2_TR(0x5c939a);
if(r1(R+518)){{goto L5c9522;}}
}
B5c93a0:L5c93a0:{c.instructions+=3;NFSU2_TR(0x5c93a0);
u8 U[13];
w4(U+0,u32(u32(u32(0x2220ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5c93a7:{NFSU2_TR(0x5c93a7);
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
B5c93a9:{NFSU2_TR(0x5c93a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c953a;}}
}
B5c93af:L5c93af:{c.instructions+=3;NFSU2_TR(0x5c93af);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c93b6:{NFSU2_TR(0x5c93b6);
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
B5c93b8:{NFSU2_TR(0x5c93b8);
if(r1(R+518)){{goto L5c953a;}}
}
B5c93be:L5c93be:{c.instructions+=5;NFSU2_TR(0x5c93be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c93c0:{NFSU2_TR(0x5c93c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24e8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c93c6:{NFSU2_TR(0x5c93c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c93c7:{NFSU2_TR(0x5c93c7);
__builtin_memmove((R+4),(R+28),4);
}
B5c93c9:{NFSU2_TR(0x5c93c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c93ceull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5c93ce:L5c93ce:{c.instructions+=2;NFSU2_TR(0x5c93ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c93d0:{NFSU2_TR(0x5c93d0);
if(r1(R+518)){{goto L5c9449;}}
}
B5c93d2:L5c93d2:{c.instructions+=3;NFSU2_TR(0x5c93d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c93d6:{NFSU2_TR(0x5c93d6);
u8 U[30];
w4(U+0,u32(u32(u32(0x2bb8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(U+22))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+22),r4(R+20)));
w4(U+26,u32(u32(r4(U+22))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B5c93dd:{NFSU2_TR(0x5c93dd);
if(r1(R+518)){{goto L5c953a;}}
}
B5c93e3:L5c93e3:{c.instructions+=22;NFSU2_TR(0x5c93e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c93e5:{NFSU2_TR(0x5c93e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c93e7:{NFSU2_TR(0x5c93e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c93ee:{NFSU2_TR(0x5c93ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c93f0:{NFSU2_TR(0x5c93f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c93f2:{NFSU2_TR(0x5c93f2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c93f4:{NFSU2_TR(0x5c93f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c93f5:{NFSU2_TR(0x5c93f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c93f7:{NFSU2_TR(0x5c93f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c93f9:{NFSU2_TR(0x5c93f9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c93fb:{NFSU2_TR(0x5c93fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c93fd:{NFSU2_TR(0x5c93fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c93fe:{NFSU2_TR(0x5c93fe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9400:{NFSU2_TR(0x5c9400);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9402:{NFSU2_TR(0x5c9402);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9407:{NFSU2_TR(0x5c9407);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9409:{NFSU2_TR(0x5c9409);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c940b:{NFSU2_TR(0x5c940b);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c940d:{NFSU2_TR(0x5c940d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c940f:{NFSU2_TR(0x5c940f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9410:{NFSU2_TR(0x5c9410);
__builtin_memmove((R+4),(R+28),4);
}
B5c9412:{NFSU2_TR(0x5c9412);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9417ull));
TAIL_STATIC(0x5c0390u,5c0);
}
B5c9417:L5c9417:{c.instructions+=2;NFSU2_TR(0x5c9417);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c9419:{NFSU2_TR(0x5c9419);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c9422;}}
}
B5c941b:L5c941b:{c.instructions+=1;NFSU2_TR(0x5c941b);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bb8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c9422:L5c9422:{c.instructions+=3;NFSU2_TR(0x5c9422);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f86cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c9428:{NFSU2_TR(0x5c9428);
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
B5c942a:{NFSU2_TR(0x5c942a);
if(r1(R+518)){{goto L5c953a;}}
}
B5c9430:L5c9430:{c.instructions+=6;NFSU2_TR(0x5c9430);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c9437:{NFSU2_TR(0x5c9437);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9438:{NFSU2_TR(0x5c9438);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c943a:{NFSU2_TR(0x5c943a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c943b:{NFSU2_TR(0x5c943b);
__builtin_memmove((R+4),(R+28),4);
}
B5c943d:{NFSU2_TR(0x5c943d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9442ull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c9442:L5c9442:{c.instructions+=5;NFSU2_TR(0x5c9442);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9443:{NFSU2_TR(0x5c9443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9444:{NFSU2_TR(0x5c9444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9445:{NFSU2_TR(0x5c9445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9446:{NFSU2_TR(0x5c9446);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9449:L5c9449:{c.instructions+=6;NFSU2_TR(0x5c9449);
__builtin_memmove((R+4),(R+24),4);
}
B5c944b:{NFSU2_TR(0x5c944b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5c944e:{NFSU2_TR(0x5c944e);
u8 U[16];
w4(U+0,u32(u32(u32(0x24f8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5c9455:{NFSU2_TR(0x5c9455);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c9457:{NFSU2_TR(0x5c9457);
__builtin_memmove((R+4),(R+28),4);
}
B5c9459:{NFSU2_TR(0x5c9459);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c94b8;}}
}
B5c945b:L5c945b:{c.instructions+=24;NFSU2_TR(0x5c945b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c945f:{NFSU2_TR(0x5c945f);
u8 U[4];
w4(U+0,u32(0x7bfcf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9464:{NFSU2_TR(0x5c9464);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9466:{NFSU2_TR(0x5c9466);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9468:{NFSU2_TR(0x5c9468);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c946f:{NFSU2_TR(0x5c946f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9471:{NFSU2_TR(0x5c9471);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9473:{NFSU2_TR(0x5c9473);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9475:{NFSU2_TR(0x5c9475);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9476:{NFSU2_TR(0x5c9476);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9478:{NFSU2_TR(0x5c9478);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c947a:{NFSU2_TR(0x5c947a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c947c:{NFSU2_TR(0x5c947c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c947e:{NFSU2_TR(0x5c947e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c947f:{NFSU2_TR(0x5c947f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9481:{NFSU2_TR(0x5c9481);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9483:{NFSU2_TR(0x5c9483);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9488:{NFSU2_TR(0x5c9488);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c948a:{NFSU2_TR(0x5c948a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c948c:{NFSU2_TR(0x5c948c);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c948e:{NFSU2_TR(0x5c948e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c948f:{NFSU2_TR(0x5c948f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9491:{NFSU2_TR(0x5c9491);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9492:{NFSU2_TR(0x5c9492);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9497ull));
TAIL_STATIC(0x5c0200u,5c0);
}
B5c9497:L5c9497:{c.instructions+=2;NFSU2_TR(0x5c9497);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c9499:{NFSU2_TR(0x5c9499);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c94a6;}}
}
B5c949b:L5c949b:{c.instructions+=2;NFSU2_TR(0x5c949b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c949f:{NFSU2_TR(0x5c949f);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bb8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c94a6:L5c94a6:{c.instructions+=5;NFSU2_TR(0x5c94a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94a7:{NFSU2_TR(0x5c94a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94a9:{NFSU2_TR(0x5c94a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94aa:{NFSU2_TR(0x5c94aa);
__builtin_memmove((R+4),(R+28),4);
}
B5c94ac:{NFSU2_TR(0x5c94ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c94b1ull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c94b1:L5c94b1:{c.instructions+=5;NFSU2_TR(0x5c94b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c94b2:{NFSU2_TR(0x5c94b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c94b3:{NFSU2_TR(0x5c94b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c94b4:{NFSU2_TR(0x5c94b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c94b5:{NFSU2_TR(0x5c94b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c94b8:L5c94b8:{c.instructions+=3;NFSU2_TR(0x5c94b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c94bc:{NFSU2_TR(0x5c94bc);
u8 U[24];
w4(U+0,u32(u32(u32(0x2bb8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+20))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B5c94c3:{NFSU2_TR(0x5c94c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c94dc;}}
}
B5c94c5:L5c94c5:{c.instructions+=5;NFSU2_TR(0x5c94c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c94cc:{NFSU2_TR(0x5c94cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94cd:{NFSU2_TR(0x5c94cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94cf:{NFSU2_TR(0x5c94cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94d0:{NFSU2_TR(0x5c94d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c94d5ull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c94d5:L5c94d5:{c.instructions+=5;NFSU2_TR(0x5c94d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c94d6:{NFSU2_TR(0x5c94d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c94d7:{NFSU2_TR(0x5c94d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c94d8:{NFSU2_TR(0x5c94d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c94d9:{NFSU2_TR(0x5c94d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c94dc:L5c94dc:{c.instructions+=21;NFSU2_TR(0x5c94dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94de:{NFSU2_TR(0x5c94de);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94e0:{NFSU2_TR(0x5c94e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c94e7:{NFSU2_TR(0x5c94e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94e9:{NFSU2_TR(0x5c94e9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94eb:{NFSU2_TR(0x5c94eb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94ed:{NFSU2_TR(0x5c94ed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94ee:{NFSU2_TR(0x5c94ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94f0:{NFSU2_TR(0x5c94f0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94f2:{NFSU2_TR(0x5c94f2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94f4:{NFSU2_TR(0x5c94f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94f6:{NFSU2_TR(0x5c94f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94f7:{NFSU2_TR(0x5c94f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94f9:{NFSU2_TR(0x5c94f9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c94fb:{NFSU2_TR(0x5c94fb);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9500:{NFSU2_TR(0x5c9500);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9502:{NFSU2_TR(0x5c9502);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9504:{NFSU2_TR(0x5c9504);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9506:{NFSU2_TR(0x5c9506);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9508:{NFSU2_TR(0x5c9508);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9509:{NFSU2_TR(0x5c9509);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c950eull));
TAIL_STATIC(0x5c0390u,5c0);
}
B5c950e:L5c950e:{c.instructions+=2;NFSU2_TR(0x5c950e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c9510:{NFSU2_TR(0x5c9510);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c9430u);}goto L5c9430;}}
}
B5c9516:L5c9516:{c.instructions+=2;NFSU2_TR(0x5c9516);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bb8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c951d:{NFSU2_TR(0x5c951d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c9430u);}goto L5c9430;}
}
B5c9522:L5c9522:{c.instructions+=2;NFSU2_TR(0x5c9522);
u8 U[4];
w4(U+0,u32(0x7a4028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9527:{NFSU2_TR(0x5c9527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c952cull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c952c:L5c952c:{c.instructions+=3;NFSU2_TR(0x5c952c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c952d:{NFSU2_TR(0x5c952d);
u8 U[4];
w4(U+0,u32(0x7a4010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9532:{NFSU2_TR(0x5c9532);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9537ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c9537:L5c9537:{c.instructions+=1;NFSU2_TR(0x5c9537);
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
B5c953a:L5c953a:{c.instructions+=5;NFSU2_TR(0x5c953a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c953b:{NFSU2_TR(0x5c953b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c953c:{NFSU2_TR(0x5c953c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c953d:{NFSU2_TR(0x5c953d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c953e:{NFSU2_TR(0x5c953e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9550:L5c9550:{c.instructions+=17;NFSU2_TR(0x5c9550);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c9554:{NFSU2_TR(0x5c9554);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5c9555:{NFSU2_TR(0x5c9555);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9556:{NFSU2_TR(0x5c9556);
w4(R+24,u32(0x168ull));
}
B5c955b:{NFSU2_TR(0x5c955b);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5c955b);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5c955b);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5c955d:{NFSU2_TR(0x5c955d);
w4(R+0,u32(0x10624dd3ull));
}
B5c9562:{NFSU2_TR(0x5c9562);
u8 U[16];
w4(U+0,u32(u32(u32(0x25f0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5c9569:{NFSU2_TR(0x5c9569);
u8 U[32];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B5c956e:{NFSU2_TR(0x5c956e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5c9570:{NFSU2_TR(0x5c9570);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5c9573:{NFSU2_TR(0x5c9573);
__builtin_memmove((R+0),(R+8),4);
}
B5c9575:{NFSU2_TR(0x5c9575);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5c9578:{NFSU2_TR(0x5c9578);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5c957a:{NFSU2_TR(0x5c957a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c957b:{NFSU2_TR(0x5c957b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c957f:{NFSU2_TR(0x5c957f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9580:{NFSU2_TR(0x5c9580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9585ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c9380u);}goto L5c9380;}
}
B5c9585:L5c9585:{c.instructions+=2;NFSU2_TR(0x5c9585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9586:{NFSU2_TR(0x5c9586);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9590:L5c9590:{c.instructions+=12;NFSU2_TR(0x5c9590);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9591:{NFSU2_TR(0x5c9591);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9592:{NFSU2_TR(0x5c9592);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9593:{NFSU2_TR(0x5c9593);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c9597:{NFSU2_TR(0x5c9597);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9598:{NFSU2_TR(0x5c9598);
__builtin_memmove((R+12),(R+4),4);
}
B5c959a:{NFSU2_TR(0x5c959a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c959c:{NFSU2_TR(0x5c959c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2498ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c95a2:{NFSU2_TR(0x5c95a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c95a3:{NFSU2_TR(0x5c95a3);
__builtin_memmove((R+4),(R+28),4);
}
B5c95a5:{NFSU2_TR(0x5c95a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c95a9:{NFSU2_TR(0x5c95a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c95aeull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5c95ae:L5c95ae:{c.instructions+=2;NFSU2_TR(0x5c95ae);
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
B5c95b0:{NFSU2_TR(0x5c95b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c974b;}}
}
B5c95b6:L5c95b6:{c.instructions+=5;NFSU2_TR(0x5c95b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c95bd:{NFSU2_TR(0x5c95bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c95bf:{NFSU2_TR(0x5c95bf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c95c0:{NFSU2_TR(0x5c95c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B5c95c7:{NFSU2_TR(0x5c95c7);
if(r1(R+518)){{goto L5c9732;}}
}
B5c95cd:L5c95cd:{c.instructions+=3;NFSU2_TR(0x5c95cd);
u8 U[13];
w4(U+0,u32(u32(u32(0x2220ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5c95d4:{NFSU2_TR(0x5c95d4);
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
B5c95d6:{NFSU2_TR(0x5c95d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c974a;}}
}
B5c95dc:L5c95dc:{c.instructions+=3;NFSU2_TR(0x5c95dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c95e3:{NFSU2_TR(0x5c95e3);
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
B5c95e5:{NFSU2_TR(0x5c95e5);
if(r1(R+518)){{goto L5c974a;}}
}
B5c95eb:L5c95eb:{c.instructions+=4;NFSU2_TR(0x5c95eb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c95ed:{NFSU2_TR(0x5c95ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c95ee:{NFSU2_TR(0x5c95ee);
__builtin_memmove((R+4),(R+28),4);
}
B5c95f0:{NFSU2_TR(0x5c95f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c95f5ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5c95f5:L5c95f5:{c.instructions+=2;NFSU2_TR(0x5c95f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c95f7:{NFSU2_TR(0x5c95f7);
if(r1(R+518)){{goto L5c9660;}}
}
B5c95f9:L5c95f9:{c.instructions+=4;NFSU2_TR(0x5c95f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c95fd:{NFSU2_TR(0x5c95fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c9601:{NFSU2_TR(0x5c9601);
u8 U[30];
w4(U+0,u32(u32(u32(0x2bc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(U+22))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+22),r4(R+12)));
w4(U+26,u32(u32(r4(U+22))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B5c9608:{NFSU2_TR(0x5c9608);
if(r1(R+518)){{goto L5c974a;}}
}
B5c960e:L5c960e:{c.instructions+=23;NFSU2_TR(0x5c960e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9610:{NFSU2_TR(0x5c9610);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9612:{NFSU2_TR(0x5c9612);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9617:{NFSU2_TR(0x5c9617);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c961e:{NFSU2_TR(0x5c961e);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9623:{NFSU2_TR(0x5c9623);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9624:{NFSU2_TR(0x5c9624);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9625:{NFSU2_TR(0x5c9625);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9627:{NFSU2_TR(0x5c9627);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9629:{NFSU2_TR(0x5c9629);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c962b:{NFSU2_TR(0x5c962b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c962d:{NFSU2_TR(0x5c962d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c962f:{NFSU2_TR(0x5c962f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9630:{NFSU2_TR(0x5c9630);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9632:{NFSU2_TR(0x5c9632);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9634:{NFSU2_TR(0x5c9634);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9639:{NFSU2_TR(0x5c9639);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c963b:{NFSU2_TR(0x5c963b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c963d:{NFSU2_TR(0x5c963d);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c963f:{NFSU2_TR(0x5c963f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9641:{NFSU2_TR(0x5c9641);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9642:{NFSU2_TR(0x5c9642);
__builtin_memmove((R+4),(R+28),4);
}
B5c9644:{NFSU2_TR(0x5c9644);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9649ull));
TAIL_STATIC(0x5c06a0u,5c0);
}
B5c9649:L5c9649:{c.instructions+=2;NFSU2_TR(0x5c9649);
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
B5c964b:{NFSU2_TR(0x5c964b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c974a;}}
}
B5c9651:L5c9651:{c.instructions+=7;NFSU2_TR(0x5c9651);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c9658:{NFSU2_TR(0x5c9658);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9659:{NFSU2_TR(0x5c9659);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c965a:{NFSU2_TR(0x5c965a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c965b:{NFSU2_TR(0x5c965b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c965c:{NFSU2_TR(0x5c965c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c965d:{NFSU2_TR(0x5c965d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9660:L5c9660:{c.instructions+=6;NFSU2_TR(0x5c9660);
__builtin_memmove((R+4),(R+24),4);
}
B5c9662:{NFSU2_TR(0x5c9662);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5c9665:{NFSU2_TR(0x5c9665);
u8 U[16];
w4(U+0,u32(u32(u32(0x24acull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5c966c:{NFSU2_TR(0x5c966c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c966e:{NFSU2_TR(0x5c966e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c9672:{NFSU2_TR(0x5c9672);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c96d7;}}
}
B5c9674:L5c9674:{c.instructions+=25;NFSU2_TR(0x5c9674);
u8 U[4];
w4(U+0,u32(0x7bfc80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9679:{NFSU2_TR(0x5c9679);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c967b:{NFSU2_TR(0x5c967b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c967d:{NFSU2_TR(0x5c967d);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9682:{NFSU2_TR(0x5c9682);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c9689:{NFSU2_TR(0x5c9689);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c968e:{NFSU2_TR(0x5c968e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c968f:{NFSU2_TR(0x5c968f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9690:{NFSU2_TR(0x5c9690);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9692:{NFSU2_TR(0x5c9692);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9694:{NFSU2_TR(0x5c9694);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9696:{NFSU2_TR(0x5c9696);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9698:{NFSU2_TR(0x5c9698);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c969a:{NFSU2_TR(0x5c969a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c969b:{NFSU2_TR(0x5c969b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c969d:{NFSU2_TR(0x5c969d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c969f:{NFSU2_TR(0x5c969f);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c96a4:{NFSU2_TR(0x5c96a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c96a6:{NFSU2_TR(0x5c96a6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c96a8:{NFSU2_TR(0x5c96a8);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c96aa:{NFSU2_TR(0x5c96aa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c96ab:{NFSU2_TR(0x5c96ab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c96ad:{NFSU2_TR(0x5c96ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c96ae:{NFSU2_TR(0x5c96ae);
__builtin_memmove((R+4),(R+28),4);
}
B5c96b0:{NFSU2_TR(0x5c96b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c96b5ull));
TAIL_STATIC(0x5c04e0u,5c0);
}
B5c96b5:L5c96b5:{c.instructions+=2;NFSU2_TR(0x5c96b5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c96b7:{NFSU2_TR(0x5c96b7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c96c4;}}
}
B5c96b9:L5c96b9:{c.instructions+=2;NFSU2_TR(0x5c96b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c96bd:{NFSU2_TR(0x5c96bd);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bc8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c96c4:L5c96c4:{c.instructions+=5;NFSU2_TR(0x5c96c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c96c5:{NFSU2_TR(0x5c96c5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c96c7:{NFSU2_TR(0x5c96c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c96c8:{NFSU2_TR(0x5c96c8);
__builtin_memmove((R+4),(R+28),4);
}
B5c96ca:{NFSU2_TR(0x5c96ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c96cfull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c96cf:L5c96cf:{c.instructions+=6;NFSU2_TR(0x5c96cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c96d0:{NFSU2_TR(0x5c96d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c96d1:{NFSU2_TR(0x5c96d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c96d2:{NFSU2_TR(0x5c96d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c96d3:{NFSU2_TR(0x5c96d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c96d4:{NFSU2_TR(0x5c96d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c96d7:L5c96d7:{c.instructions+=4;NFSU2_TR(0x5c96d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c96db:{NFSU2_TR(0x5c96db);
u8 U[24];
w4(U+0,u32(u32(u32(0x2bc8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+12))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B5c96e2:{NFSU2_TR(0x5c96e2);
__builtin_memmove((R+4),(R+28),4);
}
B5c96e4:{NFSU2_TR(0x5c96e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c96f7;}}
}
B5c96e6:L5c96e6:{c.instructions+=4;NFSU2_TR(0x5c96e6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c96e7:{NFSU2_TR(0x5c96e7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c96e9:{NFSU2_TR(0x5c96e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c96ea:{NFSU2_TR(0x5c96ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c96efull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c96ef:L5c96ef:{c.instructions+=6;NFSU2_TR(0x5c96ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c96f0:{NFSU2_TR(0x5c96f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c96f1:{NFSU2_TR(0x5c96f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c96f2:{NFSU2_TR(0x5c96f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c96f3:{NFSU2_TR(0x5c96f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c96f4:{NFSU2_TR(0x5c96f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c96f7:L5c96f7:{c.instructions+=22;NFSU2_TR(0x5c96f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c96f9:{NFSU2_TR(0x5c96f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c96fb:{NFSU2_TR(0x5c96fb);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9700:{NFSU2_TR(0x5c9700);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c9707:{NFSU2_TR(0x5c9707);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c970c:{NFSU2_TR(0x5c970c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c970d:{NFSU2_TR(0x5c970d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c970e:{NFSU2_TR(0x5c970e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9710:{NFSU2_TR(0x5c9710);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9712:{NFSU2_TR(0x5c9712);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9714:{NFSU2_TR(0x5c9714);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9716:{NFSU2_TR(0x5c9716);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9718:{NFSU2_TR(0x5c9718);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9719:{NFSU2_TR(0x5c9719);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c971b:{NFSU2_TR(0x5c971b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c971d:{NFSU2_TR(0x5c971d);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9722:{NFSU2_TR(0x5c9722);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9724:{NFSU2_TR(0x5c9724);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9726:{NFSU2_TR(0x5c9726);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9728:{NFSU2_TR(0x5c9728);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c972a:{NFSU2_TR(0x5c972a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c972b:{NFSU2_TR(0x5c972b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9730ull));
TAIL_STATIC(0x5c06a0u,5c0);
}
B5c9730:L5c9730:{c.instructions+=1;NFSU2_TR(0x5c9730);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c96b5u);}goto L5c96b5;}
}
B5c9732:L5c9732:{c.instructions+=2;NFSU2_TR(0x5c9732);
u8 U[4];
w4(U+0,u32(0x7a4028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9737:{NFSU2_TR(0x5c9737);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c973cull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c973c:L5c973c:{c.instructions+=3;NFSU2_TR(0x5c973c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c973d:{NFSU2_TR(0x5c973d);
u8 U[4];
w4(U+0,u32(0x7a4010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9742:{NFSU2_TR(0x5c9742);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9747ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c9747:L5c9747:{c.instructions+=1;NFSU2_TR(0x5c9747);
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
B5c974a:L5c974a:{c.instructions+=1;NFSU2_TR(0x5c974a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c974b:L5c974b:{c.instructions+=5;NFSU2_TR(0x5c974b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c974c:{NFSU2_TR(0x5c974c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c974d:{NFSU2_TR(0x5c974d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c974e:{NFSU2_TR(0x5c974e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c974f:{NFSU2_TR(0x5c974f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9760:L5c9760:{c.instructions+=10;NFSU2_TR(0x5c9760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5c9763:{NFSU2_TR(0x5c9763);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9764:{NFSU2_TR(0x5c9764);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9765:{NFSU2_TR(0x5c9765);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9766:{NFSU2_TR(0x5c9766);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9767:{NFSU2_TR(0x5c9767);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c976b:{NFSU2_TR(0x5c976b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c976c:{NFSU2_TR(0x5c976c);
__builtin_memmove((R+28),(R+4),4);
}
B5c976e:{NFSU2_TR(0x5c976e);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5c9770:{NFSU2_TR(0x5c9770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9775ull));
TAIL_STATIC(0x75d7e0u,75d);
}
B5c9775:L5c9775:{c.instructions+=7;NFSU2_TR(0x5c9775);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c9779:{NFSU2_TR(0x5c9779);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c977d:{NFSU2_TR(0x5c977d);
u8 U[16];
w4(U+0,u32(u32(u32(0x2b90ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5c9784:{NFSU2_TR(0x5c9784);
__builtin_memmove((R+0),(R+4),4);
}
B5c9786:{NFSU2_TR(0x5c9786);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c9789:{NFSU2_TR(0x5c9789);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5c978b:{NFSU2_TR(0x5c978b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c97a7;}}
}
B5c978d:L5c978d:{c.instructions+=6;NFSU2_TR(0x5c978d);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5c9792:{NFSU2_TR(0x5c9792);
u8 U[16];
w4(U+0,u32(u32(u32(0x2b98ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B5c9799:{NFSU2_TR(0x5c9799);
__builtin_memmove((R+8),(R+0),4);
}
B5c979b:{NFSU2_TR(0x5c979b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
}
B5c979d:{NFSU2_TR(0x5c979d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x96ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x96ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5c97a3:{NFSU2_TR(0x5c97a3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c97e3;}}
}
B5c97a5:L5c97a5:{c.instructions+=1;NFSU2_TR(0x5c97a5);
{goto L5c97d3;}
}
B5c97a7:L5c97a7:{c.instructions+=2;NFSU2_TR(0x5c97a7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c97aa:{NFSU2_TR(0x5c97aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c97cc;}}
}
B5c97ac:L5c97ac:{c.instructions+=7;NFSU2_TR(0x5c97ac);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5c97b1:{NFSU2_TR(0x5c97b1);
u8 U[16];
w4(U+0,u32(u32(u32(0x2b98ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B5c97b8:{NFSU2_TR(0x5c97b8);
__builtin_memmove((R+8),(R+0),4);
}
B5c97ba:{NFSU2_TR(0x5c97ba);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
}
B5c97bc:{NFSU2_TR(0x5c97bc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3e8ull))));
}
B5c97c2:{NFSU2_TR(0x5c97c2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x96ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x96ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5c97c8:{NFSU2_TR(0x5c97c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c97e3;}}
}
B5c97ca:L5c97ca:{c.instructions+=1;NFSU2_TR(0x5c97ca);
{goto L5c97d3;}
}
B5c97cc:L5c97cc:{c.instructions+=1;NFSU2_TR(0x5c97cc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5c97e3;}}
}
B5c97ce:L5c97ce:{c.instructions+=1;NFSU2_TR(0x5c97ce);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5c97d3:L5c97d3:{c.instructions+=3;NFSU2_TR(0x5c97d3);
w1(R+12,u8(0x1ull));
}
B5c97d5:{NFSU2_TR(0x5c97d5);
u8 U[16];
w4(U+0,u32(u32(u32(0x2b90ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c97dc:{NFSU2_TR(0x5c97dc);
u8 U[16];
w4(U+0,u32(u32(u32(0x2b98ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c97e3:L5c97e3:{c.instructions+=4;NFSU2_TR(0x5c97e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c97ea:{NFSU2_TR(0x5c97ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c97ec:{NFSU2_TR(0x5c97ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B5c97f3:{NFSU2_TR(0x5c97f3);
if(r1(R+518)){{goto L5c99a6;}}
}
B5c97f9:L5c97f9:{c.instructions+=3;NFSU2_TR(0x5c97f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9800:{NFSU2_TR(0x5c9800);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c9802:{NFSU2_TR(0x5c9802);
if(r1(R+518)){{goto L5c99be;}}
}
B5c9808:L5c9808:{c.instructions+=2;NFSU2_TR(0x5c9808);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c980a:{NFSU2_TR(0x5c980a);
if(r1(R+518)){{goto L5c99be;}}
}
B5c9810:L5c9810:{c.instructions+=5;NFSU2_TR(0x5c9810);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9812:{NFSU2_TR(0x5c9812);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2538ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9818:{NFSU2_TR(0x5c9818);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9819:{NFSU2_TR(0x5c9819);
__builtin_memmove((R+4),(R+12),4);
}
B5c981b:{NFSU2_TR(0x5c981b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9820ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5c9820:L5c9820:{c.instructions+=2;NFSU2_TR(0x5c9820);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c9822:{NFSU2_TR(0x5c9822);
if(r1(R+518)){{goto L5c989c;}}
}
B5c9824:L5c9824:{c.instructions+=3;NFSU2_TR(0x5c9824);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c9828:{NFSU2_TR(0x5c9828);
u8 U[24];
w4(U+0,u32(u32(u32(0x2be0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B5c982f:{NFSU2_TR(0x5c982f);
if(r1(R+518)){{goto L5c9908;}}
}
B5c9835:L5c9835:{c.instructions+=25;NFSU2_TR(0x5c9835);
u8 U[4];
w4(U+0,u32(0x4e20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c983a:{NFSU2_TR(0x5c983a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c983c:{NFSU2_TR(0x5c983c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c983e:{NFSU2_TR(0x5c983e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9840:{NFSU2_TR(0x5c9840);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5c9847:{NFSU2_TR(0x5c9847);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9849:{NFSU2_TR(0x5c9849);
u8 U[4];
w4(U+0,u32(0x124f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c984e:{NFSU2_TR(0x5c984e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9850:{NFSU2_TR(0x5c9850);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9852:{NFSU2_TR(0x5c9852);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9853:{NFSU2_TR(0x5c9853);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9855:{NFSU2_TR(0x5c9855);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9857:{NFSU2_TR(0x5c9857);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9859:{NFSU2_TR(0x5c9859);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c985b:{NFSU2_TR(0x5c985b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c985c:{NFSU2_TR(0x5c985c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c985e:{NFSU2_TR(0x5c985e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9860:{NFSU2_TR(0x5c9860);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9865:{NFSU2_TR(0x5c9865);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9867:{NFSU2_TR(0x5c9867);
u8 U[4];
w4(U+0,u32(0x249f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c986c:{NFSU2_TR(0x5c986c);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c986e:{NFSU2_TR(0x5c986e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9870:{NFSU2_TR(0x5c9870);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9871:{NFSU2_TR(0x5c9871);
__builtin_memmove((R+4),(R+12),4);
}
B5c9873:{NFSU2_TR(0x5c9873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9878ull));
TAIL_STATIC(0x5c8ed0u,5c8);
}
B5c9878:L5c9878:{c.instructions+=2;NFSU2_TR(0x5c9878);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c987a:{NFSU2_TR(0x5c987a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c9887;}}
}
B5c987c:L5c987c:{c.instructions+=2;NFSU2_TR(0x5c987c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c9880:{NFSU2_TR(0x5c9880);
u8 U[16];
w4(U+0,u32(u32(u32(0x2be0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c9887:L5c9887:{c.instructions+=5;NFSU2_TR(0x5c9887);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9888:{NFSU2_TR(0x5c9888);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c988a:{NFSU2_TR(0x5c988a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c988b:{NFSU2_TR(0x5c988b);
__builtin_memmove((R+4),(R+12),4);
}
B5c988d:{NFSU2_TR(0x5c988d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9892ull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c9892:L5c9892:{c.instructions+=6;NFSU2_TR(0x5c9892);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9893:{NFSU2_TR(0x5c9893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9894:{NFSU2_TR(0x5c9894);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9895:{NFSU2_TR(0x5c9895);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9896:{NFSU2_TR(0x5c9896);
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
B5c9899:{NFSU2_TR(0x5c9899);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c989c:L5c989c:{c.instructions+=5;NFSU2_TR(0x5c989c);
__builtin_memmove((R+0),(R+24),4);
}
B5c989e:{NFSU2_TR(0x5c989e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5c98a1:{NFSU2_TR(0x5c98a1);
u8 U[16];
w4(U+0,u32(u32(u32(0x2548ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5c98a8:{NFSU2_TR(0x5c98a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c98aa:{NFSU2_TR(0x5c98aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c991d;}}
}
B5c98ac:L5c98ac:{c.instructions+=28;NFSU2_TR(0x5c98ac);
u8 U[4];
w4(U+0,u32(0x7bfce0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98b1:{NFSU2_TR(0x5c98b1);
u8 U[4];
w4(U+0,u32(0x4e20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98b6:{NFSU2_TR(0x5c98b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98b8:{NFSU2_TR(0x5c98b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c98bc:{NFSU2_TR(0x5c98bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98be:{NFSU2_TR(0x5c98be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98c0:{NFSU2_TR(0x5c98c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98c2:{NFSU2_TR(0x5c98c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c98c9:{NFSU2_TR(0x5c98c9);
u8 U[4];
w4(U+0,u32(0x124f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98ce:{NFSU2_TR(0x5c98ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98d0:{NFSU2_TR(0x5c98d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98d2:{NFSU2_TR(0x5c98d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98d3:{NFSU2_TR(0x5c98d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98d5:{NFSU2_TR(0x5c98d5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98d7:{NFSU2_TR(0x5c98d7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98d9:{NFSU2_TR(0x5c98d9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98db:{NFSU2_TR(0x5c98db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98dc:{NFSU2_TR(0x5c98dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98de:{NFSU2_TR(0x5c98de);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98e0:{NFSU2_TR(0x5c98e0);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98e5:{NFSU2_TR(0x5c98e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98e7:{NFSU2_TR(0x5c98e7);
u8 U[4];
w4(U+0,u32(0x249f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98ec:{NFSU2_TR(0x5c98ec);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98ee:{NFSU2_TR(0x5c98ee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98ef:{NFSU2_TR(0x5c98ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98f1:{NFSU2_TR(0x5c98f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c98f2:{NFSU2_TR(0x5c98f2);
__builtin_memmove((R+4),(R+12),4);
}
B5c98f4:{NFSU2_TR(0x5c98f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c98f9ull));
TAIL_STATIC(0x5c8d20u,5c8);
}
B5c98f9:L5c98f9:{c.instructions+=2;NFSU2_TR(0x5c98f9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c98fb:{NFSU2_TR(0x5c98fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c9908;}}
}
B5c98fd:L5c98fd:{c.instructions+=2;NFSU2_TR(0x5c98fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c9901:{NFSU2_TR(0x5c9901);
u8 U[16];
w4(U+0,u32(u32(u32(0x2be0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c9908:L5c9908:{c.instructions+=5;NFSU2_TR(0x5c9908);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9909:{NFSU2_TR(0x5c9909);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c990b:{NFSU2_TR(0x5c990b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c990c:{NFSU2_TR(0x5c990c);
__builtin_memmove((R+4),(R+12),4);
}
B5c990e:{NFSU2_TR(0x5c990e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9913ull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c9913:L5c9913:{c.instructions+=6;NFSU2_TR(0x5c9913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9914:{NFSU2_TR(0x5c9914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9915:{NFSU2_TR(0x5c9915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9916:{NFSU2_TR(0x5c9916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9917:{NFSU2_TR(0x5c9917);
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
B5c991a:{NFSU2_TR(0x5c991a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c991d:L5c991d:{c.instructions+=3;NFSU2_TR(0x5c991d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c9921:{NFSU2_TR(0x5c9921);
u8 U[24];
w4(U+0,u32(u32(u32(0x2be0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B5c9928:{NFSU2_TR(0x5c9928);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c9908u);}goto L5c9908;}}
}
B5c992a:L5c992a:{c.instructions+=25;NFSU2_TR(0x5c992a);
u8 U[4];
w4(U+0,u32(0x4e20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c992f:{NFSU2_TR(0x5c992f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9931:{NFSU2_TR(0x5c9931);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9933:{NFSU2_TR(0x5c9933);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9935:{NFSU2_TR(0x5c9935);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5c993c:{NFSU2_TR(0x5c993c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c993e:{NFSU2_TR(0x5c993e);
u8 U[4];
w4(U+0,u32(0x124f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9943:{NFSU2_TR(0x5c9943);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9945:{NFSU2_TR(0x5c9945);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9947:{NFSU2_TR(0x5c9947);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9948:{NFSU2_TR(0x5c9948);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c994a:{NFSU2_TR(0x5c994a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c994c:{NFSU2_TR(0x5c994c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c994e:{NFSU2_TR(0x5c994e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9950:{NFSU2_TR(0x5c9950);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9951:{NFSU2_TR(0x5c9951);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9953:{NFSU2_TR(0x5c9953);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9955:{NFSU2_TR(0x5c9955);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c995a:{NFSU2_TR(0x5c995a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c995c:{NFSU2_TR(0x5c995c);
u8 U[4];
w4(U+0,u32(0x249f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9961:{NFSU2_TR(0x5c9961);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9963:{NFSU2_TR(0x5c9963);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9965:{NFSU2_TR(0x5c9965);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9966:{NFSU2_TR(0x5c9966);
__builtin_memmove((R+4),(R+12),4);
}
B5c9968:{NFSU2_TR(0x5c9968);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c996dull));
TAIL_STATIC(0x5c8ed0u,5c8);
}
B5c996d:L5c996d:{c.instructions+=2;NFSU2_TR(0x5c996d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c996f:{NFSU2_TR(0x5c996f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c997c;}}
}
B5c9971:L5c9971:{c.instructions+=2;NFSU2_TR(0x5c9971);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c9975:{NFSU2_TR(0x5c9975);
u8 U[16];
w4(U+0,u32(u32(u32(0x2be0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c997c:L5c997c:{c.instructions+=3;NFSU2_TR(0x5c997c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f86cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c9982:{NFSU2_TR(0x5c9982);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c9984:{NFSU2_TR(0x5c9984);
if(r1(R+518)){{goto L5c9991;}}
}
B5c9986:L5c9986:{c.instructions+=5;NFSU2_TR(0x5c9986);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9987:{NFSU2_TR(0x5c9987);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9989:{NFSU2_TR(0x5c9989);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c998a:{NFSU2_TR(0x5c998a);
__builtin_memmove((R+4),(R+12),4);
}
B5c998c:{NFSU2_TR(0x5c998c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9991ull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5c9991:L5c9991:{c.instructions+=5;NFSU2_TR(0x5c9991);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9992:{NFSU2_TR(0x5c9992);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9994:{NFSU2_TR(0x5c9994);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9995:{NFSU2_TR(0x5c9995);
__builtin_memmove((R+4),(R+12),4);
}
B5c9997:{NFSU2_TR(0x5c9997);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c999cull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c999c:L5c999c:{c.instructions+=6;NFSU2_TR(0x5c999c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c999d:{NFSU2_TR(0x5c999d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c999e:{NFSU2_TR(0x5c999e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c999f:{NFSU2_TR(0x5c999f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c99a0:{NFSU2_TR(0x5c99a0);
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
B5c99a3:{NFSU2_TR(0x5c99a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c99a6:L5c99a6:{c.instructions+=2;NFSU2_TR(0x5c99a6);
u8 U[4];
w4(U+0,u32(0x7a4028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c99ab:{NFSU2_TR(0x5c99ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c99b0ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c99b0:L5c99b0:{c.instructions+=3;NFSU2_TR(0x5c99b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c99b1:{NFSU2_TR(0x5c99b1);
u8 U[4];
w4(U+0,u32(0x7a4010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c99b6:{NFSU2_TR(0x5c99b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c99bbull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c99bb:L5c99bb:{c.instructions+=1;NFSU2_TR(0x5c99bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5c99be:L5c99be:{c.instructions+=6;NFSU2_TR(0x5c99be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c99bf:{NFSU2_TR(0x5c99bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c99c0:{NFSU2_TR(0x5c99c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c99c1:{NFSU2_TR(0x5c99c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c99c2:{NFSU2_TR(0x5c99c2);
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
B5c99c5:{NFSU2_TR(0x5c99c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c99d0:L5c99d0:{c.instructions+=10;NFSU2_TR(0x5c99d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c99d1:{NFSU2_TR(0x5c99d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c99d2:{NFSU2_TR(0x5c99d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c99d3:{NFSU2_TR(0x5c99d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c99d7:{NFSU2_TR(0x5c99d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c99de:{NFSU2_TR(0x5c99de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c99e0:{NFSU2_TR(0x5c99e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B5c99e7:{NFSU2_TR(0x5c99e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c99e8:{NFSU2_TR(0x5c99e8);
__builtin_memmove((R+12),(R+4),4);
}
B5c99ea:{NFSU2_TR(0x5c99ea);
if(r1(R+518)){{goto L5c9b8f;}}
}
B5c99f0:L5c99f0:{c.instructions+=3;NFSU2_TR(0x5c99f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f86cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c99f6:{NFSU2_TR(0x5c99f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c99f8:{NFSU2_TR(0x5c99f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c9b8f;}}
}
B5c99fe:L5c99fe:{c.instructions+=3;NFSU2_TR(0x5c99fe);
u8 U[13];
w4(U+0,u32(u32(u32(0x2220ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5c9a05:{NFSU2_TR(0x5c9a05);
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
B5c9a07:{NFSU2_TR(0x5c9a07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c9ba7;}}
}
B5c9a0d:L5c9a0d:{c.instructions+=3;NFSU2_TR(0x5c9a0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9a14:{NFSU2_TR(0x5c9a14);
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
B5c9a16:{NFSU2_TR(0x5c9a16);
if(r1(R+518)){{goto L5c9ba7;}}
}
B5c9a1c:L5c9a1c:{c.instructions+=5;NFSU2_TR(0x5c9a1c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a1e:{NFSU2_TR(0x5c9a1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2538ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9a24:{NFSU2_TR(0x5c9a24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a25:{NFSU2_TR(0x5c9a25);
__builtin_memmove((R+4),(R+28),4);
}
B5c9a27:{NFSU2_TR(0x5c9a27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9a2cull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5c9a2c:L5c9a2c:{c.instructions+=2;NFSU2_TR(0x5c9a2c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c9a2e:{NFSU2_TR(0x5c9a2e);
if(r1(R+518)){{goto L5c9a94;}}
}
B5c9a30:L5c9a30:{c.instructions+=3;NFSU2_TR(0x5c9a30);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c9a34:{NFSU2_TR(0x5c9a34);
u8 U[30];
w4(U+0,u32(u32(u32(0x2be8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(U+22))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+22),r4(R+20)));
w4(U+26,u32(u32(r4(U+22))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B5c9a3b:{NFSU2_TR(0x5c9a3b);
if(r1(R+518)){{goto L5c9ba7;}}
}
B5c9a41:L5c9a41:{c.instructions+=25;NFSU2_TR(0x5c9a41);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a43:{NFSU2_TR(0x5c9a43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a45:{NFSU2_TR(0x5c9a45);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a47:{NFSU2_TR(0x5c9a47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a49:{NFSU2_TR(0x5c9a49);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a4b:{NFSU2_TR(0x5c9a4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9a52:{NFSU2_TR(0x5c9a52);
u8 U[4];
w4(U+0,u32(0xfde8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a57:{NFSU2_TR(0x5c9a57);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a59:{NFSU2_TR(0x5c9a59);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a5b:{NFSU2_TR(0x5c9a5b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a5c:{NFSU2_TR(0x5c9a5c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a5e:{NFSU2_TR(0x5c9a5e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a60:{NFSU2_TR(0x5c9a60);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a62:{NFSU2_TR(0x5c9a62);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a64:{NFSU2_TR(0x5c9a64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a65:{NFSU2_TR(0x5c9a65);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a67:{NFSU2_TR(0x5c9a67);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a69:{NFSU2_TR(0x5c9a69);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a6e:{NFSU2_TR(0x5c9a6e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a70:{NFSU2_TR(0x5c9a70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a72:{NFSU2_TR(0x5c9a72);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a74:{NFSU2_TR(0x5c9a74);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a76:{NFSU2_TR(0x5c9a76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9a77:{NFSU2_TR(0x5c9a77);
__builtin_memmove((R+4),(R+28),4);
}
B5c9a79:{NFSU2_TR(0x5c9a79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9a7eull));
TAIL_STATIC(0x5c8ed0u,5c8);
}
B5c9a7e:L5c9a7e:{c.instructions+=2;NFSU2_TR(0x5c9a7e);
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
B5c9a80:{NFSU2_TR(0x5c9a80);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c9ba7;}}
}
B5c9a86:L5c9a86:{c.instructions+=6;NFSU2_TR(0x5c9a86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9a87:{NFSU2_TR(0x5c9a87);
u8 U[16];
w4(U+0,u32(u32(u32(0x2be8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c9a8e:{NFSU2_TR(0x5c9a8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9a8f:{NFSU2_TR(0x5c9a8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9a90:{NFSU2_TR(0x5c9a90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9a91:{NFSU2_TR(0x5c9a91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9a94:L5c9a94:{c.instructions+=6;NFSU2_TR(0x5c9a94);
__builtin_memmove((R+4),(R+24),4);
}
B5c9a96:{NFSU2_TR(0x5c9a96);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5c9a99:{NFSU2_TR(0x5c9a99);
u8 U[16];
w4(U+0,u32(u32(u32(0x254cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5c9aa0:{NFSU2_TR(0x5c9aa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c9aa2:{NFSU2_TR(0x5c9aa2);
__builtin_memmove((R+4),(R+28),4);
}
B5c9aa4:{NFSU2_TR(0x5c9aa4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c9b0c;}}
}
B5c9aa6:L5c9aa6:{c.instructions+=27;NFSU2_TR(0x5c9aa6);
u8 U[4];
w4(U+0,u32(0x7bfcd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9aab:{NFSU2_TR(0x5c9aab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9aad:{NFSU2_TR(0x5c9aad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9aaf:{NFSU2_TR(0x5c9aaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c9ab3:{NFSU2_TR(0x5c9ab3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ab5:{NFSU2_TR(0x5c9ab5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ab7:{NFSU2_TR(0x5c9ab7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ab9:{NFSU2_TR(0x5c9ab9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9ac0:{NFSU2_TR(0x5c9ac0);
u8 U[4];
w4(U+0,u32(0xfde8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ac5:{NFSU2_TR(0x5c9ac5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ac7:{NFSU2_TR(0x5c9ac7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ac9:{NFSU2_TR(0x5c9ac9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9aca:{NFSU2_TR(0x5c9aca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9acc:{NFSU2_TR(0x5c9acc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ace:{NFSU2_TR(0x5c9ace);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ad0:{NFSU2_TR(0x5c9ad0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ad2:{NFSU2_TR(0x5c9ad2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ad3:{NFSU2_TR(0x5c9ad3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ad5:{NFSU2_TR(0x5c9ad5);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ad7:{NFSU2_TR(0x5c9ad7);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9adc:{NFSU2_TR(0x5c9adc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ade:{NFSU2_TR(0x5c9ade);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ae0:{NFSU2_TR(0x5c9ae0);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ae2:{NFSU2_TR(0x5c9ae2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ae3:{NFSU2_TR(0x5c9ae3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ae5:{NFSU2_TR(0x5c9ae5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ae6:{NFSU2_TR(0x5c9ae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9aebull));
TAIL_STATIC(0x5c8d20u,5c8);
}
B5c9aeb:L5c9aeb:{c.instructions+=2;NFSU2_TR(0x5c9aeb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c9aed:{NFSU2_TR(0x5c9aed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c9afa;}}
}
B5c9aef:L5c9aef:{c.instructions+=2;NFSU2_TR(0x5c9aef);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c9af3:{NFSU2_TR(0x5c9af3);
u8 U[16];
w4(U+0,u32(u32(u32(0x2be8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c9afa:L5c9afa:{c.instructions+=5;NFSU2_TR(0x5c9afa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9afb:{NFSU2_TR(0x5c9afb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9afd:{NFSU2_TR(0x5c9afd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9afe:{NFSU2_TR(0x5c9afe);
__builtin_memmove((R+4),(R+28),4);
}
B5c9b00:{NFSU2_TR(0x5c9b00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9b05ull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c9b05:L5c9b05:{c.instructions+=5;NFSU2_TR(0x5c9b05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9b06:{NFSU2_TR(0x5c9b06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9b07:{NFSU2_TR(0x5c9b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9b08:{NFSU2_TR(0x5c9b08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9b09:{NFSU2_TR(0x5c9b09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9b0c:L5c9b0c:{c.instructions+=3;NFSU2_TR(0x5c9b0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c9b10:{NFSU2_TR(0x5c9b10);
u8 U[24];
w4(U+0,u32(u32(u32(0x2be8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+20))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B5c9b17:{NFSU2_TR(0x5c9b17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c9b30;}}
}
B5c9b19:L5c9b19:{c.instructions+=5;NFSU2_TR(0x5c9b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c9b20:{NFSU2_TR(0x5c9b20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b21:{NFSU2_TR(0x5c9b21);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b23:{NFSU2_TR(0x5c9b23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b24:{NFSU2_TR(0x5c9b24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9b29ull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c9b29:L5c9b29:{c.instructions+=5;NFSU2_TR(0x5c9b29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9b2a:{NFSU2_TR(0x5c9b2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9b2b:{NFSU2_TR(0x5c9b2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9b2c:{NFSU2_TR(0x5c9b2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9b2d:{NFSU2_TR(0x5c9b2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9b30:L5c9b30:{c.instructions+=24;NFSU2_TR(0x5c9b30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b32:{NFSU2_TR(0x5c9b32);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b34:{NFSU2_TR(0x5c9b34);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b36:{NFSU2_TR(0x5c9b36);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b38:{NFSU2_TR(0x5c9b38);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b3a:{NFSU2_TR(0x5c9b3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c9b41:{NFSU2_TR(0x5c9b41);
u8 U[4];
w4(U+0,u32(0xfde8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b46:{NFSU2_TR(0x5c9b46);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b48:{NFSU2_TR(0x5c9b48);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b4a:{NFSU2_TR(0x5c9b4a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b4b:{NFSU2_TR(0x5c9b4b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b4d:{NFSU2_TR(0x5c9b4d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b4f:{NFSU2_TR(0x5c9b4f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b51:{NFSU2_TR(0x5c9b51);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b53:{NFSU2_TR(0x5c9b53);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b54:{NFSU2_TR(0x5c9b54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b56:{NFSU2_TR(0x5c9b56);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b58:{NFSU2_TR(0x5c9b58);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b5d:{NFSU2_TR(0x5c9b5d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b5f:{NFSU2_TR(0x5c9b5f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b61:{NFSU2_TR(0x5c9b61);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b63:{NFSU2_TR(0x5c9b63);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b65:{NFSU2_TR(0x5c9b65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b66:{NFSU2_TR(0x5c9b66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9b6bull));
TAIL_STATIC(0x5c8ed0u,5c8);
}
B5c9b6b:L5c9b6b:{c.instructions+=2;NFSU2_TR(0x5c9b6b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c9b6d:{NFSU2_TR(0x5c9b6d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c9b76;}}
}
B5c9b6f:L5c9b6f:{c.instructions+=1;NFSU2_TR(0x5c9b6f);
u8 U[16];
w4(U+0,u32(u32(u32(0x2be8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c9b76:L5c9b76:{c.instructions+=6;NFSU2_TR(0x5c9b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c9b7d:{NFSU2_TR(0x5c9b7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b7e:{NFSU2_TR(0x5c9b7e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b80:{NFSU2_TR(0x5c9b80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b81:{NFSU2_TR(0x5c9b81);
__builtin_memmove((R+4),(R+28),4);
}
B5c9b83:{NFSU2_TR(0x5c9b83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9b88ull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c9b88:L5c9b88:{c.instructions+=5;NFSU2_TR(0x5c9b88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9b89:{NFSU2_TR(0x5c9b89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9b8a:{NFSU2_TR(0x5c9b8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9b8b:{NFSU2_TR(0x5c9b8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9b8c:{NFSU2_TR(0x5c9b8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9b8f:L5c9b8f:{c.instructions+=2;NFSU2_TR(0x5c9b8f);
u8 U[4];
w4(U+0,u32(0x7a4028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b94:{NFSU2_TR(0x5c9b94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9b99ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c9b99:L5c9b99:{c.instructions+=3;NFSU2_TR(0x5c9b99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b9a:{NFSU2_TR(0x5c9b9a);
u8 U[4];
w4(U+0,u32(0x7a4010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9b9f:{NFSU2_TR(0x5c9b9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9ba4ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c9ba4:L5c9ba4:{c.instructions+=1;NFSU2_TR(0x5c9ba4);
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
B5c9ba7:L5c9ba7:{c.instructions+=5;NFSU2_TR(0x5c9ba7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9ba8:{NFSU2_TR(0x5c9ba8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9ba9:{NFSU2_TR(0x5c9ba9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9baa:{NFSU2_TR(0x5c9baa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9bab:{NFSU2_TR(0x5c9bab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9bb0:L5c9bb0:{c.instructions+=10;NFSU2_TR(0x5c9bb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9bb1:{NFSU2_TR(0x5c9bb1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9bb2:{NFSU2_TR(0x5c9bb2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9bb3:{NFSU2_TR(0x5c9bb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c9bb7:{NFSU2_TR(0x5c9bb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9bbe:{NFSU2_TR(0x5c9bbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c9bc0:{NFSU2_TR(0x5c9bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B5c9bc7:{NFSU2_TR(0x5c9bc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9bc8:{NFSU2_TR(0x5c9bc8);
__builtin_memmove((R+12),(R+4),4);
}
B5c9bca:{NFSU2_TR(0x5c9bca);
if(r1(R+518)){{goto L5c9d6f;}}
}
B5c9bd0:L5c9bd0:{c.instructions+=3;NFSU2_TR(0x5c9bd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f86cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c9bd6:{NFSU2_TR(0x5c9bd6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c9bd8:{NFSU2_TR(0x5c9bd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c9d6f;}}
}
B5c9bde:L5c9bde:{c.instructions+=3;NFSU2_TR(0x5c9bde);
u8 U[13];
w4(U+0,u32(u32(u32(0x2220ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5c9be5:{NFSU2_TR(0x5c9be5);
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
B5c9be7:{NFSU2_TR(0x5c9be7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c9d87;}}
}
B5c9bed:L5c9bed:{c.instructions+=3;NFSU2_TR(0x5c9bed);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9bf4:{NFSU2_TR(0x5c9bf4);
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
B5c9bf6:{NFSU2_TR(0x5c9bf6);
if(r1(R+518)){{goto L5c9d87;}}
}
B5c9bfc:L5c9bfc:{c.instructions+=5;NFSU2_TR(0x5c9bfc);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9bfe:{NFSU2_TR(0x5c9bfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2538ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9c04:{NFSU2_TR(0x5c9c04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c05:{NFSU2_TR(0x5c9c05);
__builtin_memmove((R+4),(R+28),4);
}
B5c9c07:{NFSU2_TR(0x5c9c07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9c0cull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5c9c0c:L5c9c0c:{c.instructions+=2;NFSU2_TR(0x5c9c0c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c9c0e:{NFSU2_TR(0x5c9c0e);
if(r1(R+518)){{goto L5c9c74;}}
}
B5c9c10:L5c9c10:{c.instructions+=3;NFSU2_TR(0x5c9c10);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c9c14:{NFSU2_TR(0x5c9c14);
u8 U[30];
w4(U+0,u32(u32(u32(0x2bf0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(U+22))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+22),r4(R+20)));
w4(U+26,u32(u32(r4(U+22))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B5c9c1b:{NFSU2_TR(0x5c9c1b);
if(r1(R+518)){{goto L5c9d87;}}
}
B5c9c21:L5c9c21:{c.instructions+=25;NFSU2_TR(0x5c9c21);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c23:{NFSU2_TR(0x5c9c23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c25:{NFSU2_TR(0x5c9c25);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c27:{NFSU2_TR(0x5c9c27);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c29:{NFSU2_TR(0x5c9c29);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c2b:{NFSU2_TR(0x5c9c2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9c32:{NFSU2_TR(0x5c9c32);
u8 U[4];
w4(U+0,u32(0x186a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c37:{NFSU2_TR(0x5c9c37);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c39:{NFSU2_TR(0x5c9c39);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c3b:{NFSU2_TR(0x5c9c3b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c3c:{NFSU2_TR(0x5c9c3c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c3e:{NFSU2_TR(0x5c9c3e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c40:{NFSU2_TR(0x5c9c40);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c42:{NFSU2_TR(0x5c9c42);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c44:{NFSU2_TR(0x5c9c44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c45:{NFSU2_TR(0x5c9c45);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c47:{NFSU2_TR(0x5c9c47);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c49:{NFSU2_TR(0x5c9c49);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c4e:{NFSU2_TR(0x5c9c4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c50:{NFSU2_TR(0x5c9c50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c52:{NFSU2_TR(0x5c9c52);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c54:{NFSU2_TR(0x5c9c54);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c56:{NFSU2_TR(0x5c9c56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c57:{NFSU2_TR(0x5c9c57);
__builtin_memmove((R+4),(R+28),4);
}
B5c9c59:{NFSU2_TR(0x5c9c59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9c5eull));
TAIL_STATIC(0x5c8ed0u,5c8);
}
B5c9c5e:L5c9c5e:{c.instructions+=2;NFSU2_TR(0x5c9c5e);
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
B5c9c60:{NFSU2_TR(0x5c9c60);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c9d87;}}
}
B5c9c66:L5c9c66:{c.instructions+=6;NFSU2_TR(0x5c9c66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9c67:{NFSU2_TR(0x5c9c67);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bf0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c9c6e:{NFSU2_TR(0x5c9c6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9c6f:{NFSU2_TR(0x5c9c6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9c70:{NFSU2_TR(0x5c9c70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9c71:{NFSU2_TR(0x5c9c71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9c74:L5c9c74:{c.instructions+=6;NFSU2_TR(0x5c9c74);
__builtin_memmove((R+4),(R+24),4);
}
B5c9c76:{NFSU2_TR(0x5c9c76);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5c9c79:{NFSU2_TR(0x5c9c79);
u8 U[16];
w4(U+0,u32(u32(u32(0x2550ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5c9c80:{NFSU2_TR(0x5c9c80);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c9c82:{NFSU2_TR(0x5c9c82);
__builtin_memmove((R+4),(R+28),4);
}
B5c9c84:{NFSU2_TR(0x5c9c84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c9cec;}}
}
B5c9c86:L5c9c86:{c.instructions+=27;NFSU2_TR(0x5c9c86);
u8 U[4];
w4(U+0,u32(0x7bfce0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c8b:{NFSU2_TR(0x5c9c8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c8d:{NFSU2_TR(0x5c9c8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c8f:{NFSU2_TR(0x5c9c8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c9c93:{NFSU2_TR(0x5c9c93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c95:{NFSU2_TR(0x5c9c95);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c97:{NFSU2_TR(0x5c9c97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9c99:{NFSU2_TR(0x5c9c99);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9ca0:{NFSU2_TR(0x5c9ca0);
u8 U[4];
w4(U+0,u32(0x186a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ca5:{NFSU2_TR(0x5c9ca5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ca7:{NFSU2_TR(0x5c9ca7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ca9:{NFSU2_TR(0x5c9ca9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9caa:{NFSU2_TR(0x5c9caa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cac:{NFSU2_TR(0x5c9cac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cae:{NFSU2_TR(0x5c9cae);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cb0:{NFSU2_TR(0x5c9cb0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cb2:{NFSU2_TR(0x5c9cb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cb3:{NFSU2_TR(0x5c9cb3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cb5:{NFSU2_TR(0x5c9cb5);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cb7:{NFSU2_TR(0x5c9cb7);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cbc:{NFSU2_TR(0x5c9cbc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cbe:{NFSU2_TR(0x5c9cbe);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cc0:{NFSU2_TR(0x5c9cc0);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cc2:{NFSU2_TR(0x5c9cc2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cc3:{NFSU2_TR(0x5c9cc3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cc5:{NFSU2_TR(0x5c9cc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cc6:{NFSU2_TR(0x5c9cc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9ccbull));
TAIL_STATIC(0x5c8d20u,5c8);
}
B5c9ccb:L5c9ccb:{c.instructions+=2;NFSU2_TR(0x5c9ccb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c9ccd:{NFSU2_TR(0x5c9ccd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c9cda;}}
}
B5c9ccf:L5c9ccf:{c.instructions+=2;NFSU2_TR(0x5c9ccf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c9cd3:{NFSU2_TR(0x5c9cd3);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bf0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c9cda:L5c9cda:{c.instructions+=5;NFSU2_TR(0x5c9cda);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cdb:{NFSU2_TR(0x5c9cdb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cdd:{NFSU2_TR(0x5c9cdd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9cde:{NFSU2_TR(0x5c9cde);
__builtin_memmove((R+4),(R+28),4);
}
B5c9ce0:{NFSU2_TR(0x5c9ce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9ce5ull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c9ce5:L5c9ce5:{c.instructions+=5;NFSU2_TR(0x5c9ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9ce6:{NFSU2_TR(0x5c9ce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9ce7:{NFSU2_TR(0x5c9ce7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9ce8:{NFSU2_TR(0x5c9ce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9ce9:{NFSU2_TR(0x5c9ce9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9cec:L5c9cec:{c.instructions+=3;NFSU2_TR(0x5c9cec);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c9cf0:{NFSU2_TR(0x5c9cf0);
u8 U[24];
w4(U+0,u32(u32(u32(0x2bf0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+20))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B5c9cf7:{NFSU2_TR(0x5c9cf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c9d10;}}
}
B5c9cf9:L5c9cf9:{c.instructions+=5;NFSU2_TR(0x5c9cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c9d00:{NFSU2_TR(0x5c9d00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d01:{NFSU2_TR(0x5c9d01);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d03:{NFSU2_TR(0x5c9d03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d04:{NFSU2_TR(0x5c9d04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9d09ull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c9d09:L5c9d09:{c.instructions+=5;NFSU2_TR(0x5c9d09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9d0a:{NFSU2_TR(0x5c9d0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9d0b:{NFSU2_TR(0x5c9d0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9d0c:{NFSU2_TR(0x5c9d0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9d0d:{NFSU2_TR(0x5c9d0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9d10:L5c9d10:{c.instructions+=24;NFSU2_TR(0x5c9d10);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d12:{NFSU2_TR(0x5c9d12);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d14:{NFSU2_TR(0x5c9d14);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d16:{NFSU2_TR(0x5c9d16);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d18:{NFSU2_TR(0x5c9d18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d1a:{NFSU2_TR(0x5c9d1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c9d21:{NFSU2_TR(0x5c9d21);
u8 U[4];
w4(U+0,u32(0x186a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d26:{NFSU2_TR(0x5c9d26);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d28:{NFSU2_TR(0x5c9d28);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d2a:{NFSU2_TR(0x5c9d2a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d2b:{NFSU2_TR(0x5c9d2b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d2d:{NFSU2_TR(0x5c9d2d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d2f:{NFSU2_TR(0x5c9d2f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d31:{NFSU2_TR(0x5c9d31);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d33:{NFSU2_TR(0x5c9d33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d34:{NFSU2_TR(0x5c9d34);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d36:{NFSU2_TR(0x5c9d36);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d38:{NFSU2_TR(0x5c9d38);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d3d:{NFSU2_TR(0x5c9d3d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d3f:{NFSU2_TR(0x5c9d3f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d41:{NFSU2_TR(0x5c9d41);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d43:{NFSU2_TR(0x5c9d43);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d45:{NFSU2_TR(0x5c9d45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d46:{NFSU2_TR(0x5c9d46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9d4bull));
TAIL_STATIC(0x5c8ed0u,5c8);
}
B5c9d4b:L5c9d4b:{c.instructions+=2;NFSU2_TR(0x5c9d4b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c9d4d:{NFSU2_TR(0x5c9d4d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c9d56;}}
}
B5c9d4f:L5c9d4f:{c.instructions+=1;NFSU2_TR(0x5c9d4f);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bf0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c9d56:L5c9d56:{c.instructions+=6;NFSU2_TR(0x5c9d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c9d5d:{NFSU2_TR(0x5c9d5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d5e:{NFSU2_TR(0x5c9d5e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d60:{NFSU2_TR(0x5c9d60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d61:{NFSU2_TR(0x5c9d61);
__builtin_memmove((R+4),(R+28),4);
}
B5c9d63:{NFSU2_TR(0x5c9d63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9d68ull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c9d68:L5c9d68:{c.instructions+=5;NFSU2_TR(0x5c9d68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9d69:{NFSU2_TR(0x5c9d69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9d6a:{NFSU2_TR(0x5c9d6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9d6b:{NFSU2_TR(0x5c9d6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9d6c:{NFSU2_TR(0x5c9d6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9d6f:L5c9d6f:{c.instructions+=2;NFSU2_TR(0x5c9d6f);
u8 U[4];
w4(U+0,u32(0x7a4028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d74:{NFSU2_TR(0x5c9d74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9d79ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c9d79:L5c9d79:{c.instructions+=3;NFSU2_TR(0x5c9d79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d7a:{NFSU2_TR(0x5c9d7a);
u8 U[4];
w4(U+0,u32(0x7a4010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d7f:{NFSU2_TR(0x5c9d7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9d84ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c9d84:L5c9d84:{c.instructions+=1;NFSU2_TR(0x5c9d84);
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
B5c9d87:L5c9d87:{c.instructions+=5;NFSU2_TR(0x5c9d87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9d88:{NFSU2_TR(0x5c9d88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9d89:{NFSU2_TR(0x5c9d89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9d8a:{NFSU2_TR(0x5c9d8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9d8b:{NFSU2_TR(0x5c9d8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9d90:L5c9d90:{c.instructions+=11;NFSU2_TR(0x5c9d90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d91:{NFSU2_TR(0x5c9d91);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d92:{NFSU2_TR(0x5c9d92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d93:{NFSU2_TR(0x5c9d93);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c9d97:{NFSU2_TR(0x5c9d97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d98:{NFSU2_TR(0x5c9d98);
__builtin_memmove((R+20),(R+4),4);
}
B5c9d9a:{NFSU2_TR(0x5c9d9a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9d9c:{NFSU2_TR(0x5c9d9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2498ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9da2:{NFSU2_TR(0x5c9da2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9da3:{NFSU2_TR(0x5c9da3);
__builtin_memmove((R+4),(R+28),4);
}
B5c9da5:{NFSU2_TR(0x5c9da5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9daaull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5c9daa:L5c9daa:{c.instructions+=2;NFSU2_TR(0x5c9daa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c9dac:{NFSU2_TR(0x5c9dac);
if(r1(R+518)){{goto L5c9dd3;}}
}
B5c9dae:L5c9dae:{c.instructions+=3;NFSU2_TR(0x5c9dae);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9db5:{NFSU2_TR(0x5c9db5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c9db7:{NFSU2_TR(0x5c9db7);
if(r1(R+518)){{goto L5c9dc3;}}
}
B5c9db9:L5c9db9:{c.instructions+=4;NFSU2_TR(0x5c9db9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9dbb:{NFSU2_TR(0x5c9dbb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9dbc:{NFSU2_TR(0x5c9dbc);
__builtin_memmove((R+4),(R+20),4);
}
B5c9dbe:{NFSU2_TR(0x5c9dbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9dc3ull));
TAIL_STATIC(0x5cd4b0u,5cd);
}
B5c9dc3:L5c9dc3:{c.instructions+=2;NFSU2_TR(0x5c9dc3);
u8 U[13];
w4(U+0,u32(u32(u32(0x2499ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5c9dcb:{NFSU2_TR(0x5c9dcb);
u8 U[13];
w4(U+0,u32(u32(u32(0x25d8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5c9dd3:L5c9dd3:{c.instructions+=4;NFSU2_TR(0x5c9dd3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9dd5:{NFSU2_TR(0x5c9dd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9dd6:{NFSU2_TR(0x5c9dd6);
__builtin_memmove((R+4),(R+28),4);
}
B5c9dd8:{NFSU2_TR(0x5c9dd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9dddull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5c9ddd:L5c9ddd:{c.instructions+=2;NFSU2_TR(0x5c9ddd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c9ddf:{NFSU2_TR(0x5c9ddf);
if(r1(R+518)){{goto L5c9e06;}}
}
B5c9de1:L5c9de1:{c.instructions+=3;NFSU2_TR(0x5c9de1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9de8:{NFSU2_TR(0x5c9de8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c9dea:{NFSU2_TR(0x5c9dea);
if(r1(R+518)){{goto L5c9df6;}}
}
B5c9dec:L5c9dec:{c.instructions+=4;NFSU2_TR(0x5c9dec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9dee:{NFSU2_TR(0x5c9dee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9def:{NFSU2_TR(0x5c9def);
__builtin_memmove((R+4),(R+20),4);
}
B5c9df1:{NFSU2_TR(0x5c9df1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9df6ull));
TAIL_STATIC(0x5cd4b0u,5cd);
}
B5c9df6:L5c9df6:{c.instructions+=2;NFSU2_TR(0x5c9df6);
u8 U[13];
w4(U+0,u32(u32(u32(0x2498ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5c9dfe:{NFSU2_TR(0x5c9dfe);
u8 U[13];
w4(U+0,u32(u32(u32(0x25daull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5c9e06:L5c9e06:{c.instructions+=3;NFSU2_TR(0x5c9e06);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9e0d:{NFSU2_TR(0x5c9e0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c9e0f:{NFSU2_TR(0x5c9e0f);
if(r1(R+518)){{goto L5c9fa8;}}
}
B5c9e15:L5c9e15:{c.instructions+=3;NFSU2_TR(0x5c9e15);
u8 U[13];
w4(U+0,u32(u32(u32(0x2220ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5c9e1c:{NFSU2_TR(0x5c9e1c);
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
B5c9e1e:{NFSU2_TR(0x5c9e1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c9fc0;}}
}
B5c9e24:L5c9e24:{c.instructions+=3;NFSU2_TR(0x5c9e24);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9e2b:{NFSU2_TR(0x5c9e2b);
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
B5c9e2d:{NFSU2_TR(0x5c9e2d);
if(r1(R+518)){{goto L5c9fc0;}}
}
B5c9e33:L5c9e33:{c.instructions+=4;NFSU2_TR(0x5c9e33);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e35:{NFSU2_TR(0x5c9e35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e36:{NFSU2_TR(0x5c9e36);
__builtin_memmove((R+4),(R+28),4);
}
B5c9e38:{NFSU2_TR(0x5c9e38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9e3dull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5c9e3d:L5c9e3d:{c.instructions+=3;NFSU2_TR(0x5c9e3d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c9e3f:{NFSU2_TR(0x5c9e3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c9e43:{NFSU2_TR(0x5c9e43);
if(r1(R+518)){{goto L5c9ea7;}}
}
B5c9e45:L5c9e45:{c.instructions+=2;NFSU2_TR(0x5c9e45);
u8 U[30];
w4(U+0,u32(u32(u32(0x2bf8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(U+22))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+22),r4(R+12)));
w4(U+26,u32(u32(r4(U+22))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B5c9e4c:{NFSU2_TR(0x5c9e4c);
if(r1(R+518)){{goto L5c9fc0;}}
}
B5c9e52:L5c9e52:{c.instructions+=25;NFSU2_TR(0x5c9e52);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e54:{NFSU2_TR(0x5c9e54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e56:{NFSU2_TR(0x5c9e56);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e5b:{NFSU2_TR(0x5c9e5b);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e60:{NFSU2_TR(0x5c9e60);
__builtin_memmove((R+0),(R+12),4);
}
B5c9e62:{NFSU2_TR(0x5c9e62);
w4(R+0,u32(0-u32(r4(R+0))));
}
B5c9e64:{NFSU2_TR(0x5c9e64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e65:{NFSU2_TR(0x5c9e65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e66:{NFSU2_TR(0x5c9e66);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9e6d:{NFSU2_TR(0x5c9e6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e6f:{NFSU2_TR(0x5c9e6f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e71:{NFSU2_TR(0x5c9e71);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e73:{NFSU2_TR(0x5c9e73);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e75:{NFSU2_TR(0x5c9e75);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e77:{NFSU2_TR(0x5c9e77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e78:{NFSU2_TR(0x5c9e78);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e7a:{NFSU2_TR(0x5c9e7a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e7c:{NFSU2_TR(0x5c9e7c);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e81:{NFSU2_TR(0x5c9e81);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e83:{NFSU2_TR(0x5c9e83);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e85:{NFSU2_TR(0x5c9e85);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e87:{NFSU2_TR(0x5c9e87);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e89:{NFSU2_TR(0x5c9e89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9e8a:{NFSU2_TR(0x5c9e8a);
__builtin_memmove((R+4),(R+28),4);
}
B5c9e8c:{NFSU2_TR(0x5c9e8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9e91ull));
TAIL_STATIC(0x5c06a0u,5c0);
}
B5c9e91:L5c9e91:{c.instructions+=2;NFSU2_TR(0x5c9e91);
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
B5c9e93:{NFSU2_TR(0x5c9e93);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c9fc0;}}
}
B5c9e99:L5c9e99:{c.instructions+=6;NFSU2_TR(0x5c9e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9e9a:{NFSU2_TR(0x5c9e9a);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bf8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c9ea1:{NFSU2_TR(0x5c9ea1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9ea2:{NFSU2_TR(0x5c9ea2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9ea3:{NFSU2_TR(0x5c9ea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9ea4:{NFSU2_TR(0x5c9ea4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9ea7:L5c9ea7:{c.instructions+=6;NFSU2_TR(0x5c9ea7);
__builtin_memmove((R+4),(R+24),4);
}
B5c9ea9:{NFSU2_TR(0x5c9ea9);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5c9eac:{NFSU2_TR(0x5c9eac);
u8 U[16];
w4(U+0,u32(u32(u32(0x24b0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5c9eb3:{NFSU2_TR(0x5c9eb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c9eb5:{NFSU2_TR(0x5c9eb5);
__builtin_memmove((R+4),(R+28),4);
}
B5c9eb7:{NFSU2_TR(0x5c9eb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c9f27;}}
}
B5c9eb9:L5c9eb9:{c.instructions+=27;NFSU2_TR(0x5c9eb9);
u8 U[4];
w4(U+0,u32(0x7bfc80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ebe:{NFSU2_TR(0x5c9ebe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ec0:{NFSU2_TR(0x5c9ec0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ec2:{NFSU2_TR(0x5c9ec2);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ec7:{NFSU2_TR(0x5c9ec7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c9ece:{NFSU2_TR(0x5c9ece);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ed3:{NFSU2_TR(0x5c9ed3);
__builtin_memmove((R+0),(R+12),4);
}
B5c9ed5:{NFSU2_TR(0x5c9ed5);
w4(R+0,u32(0-u32(r4(R+0))));
}
B5c9ed7:{NFSU2_TR(0x5c9ed7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ed8:{NFSU2_TR(0x5c9ed8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ed9:{NFSU2_TR(0x5c9ed9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9edb:{NFSU2_TR(0x5c9edb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9edd:{NFSU2_TR(0x5c9edd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9edf:{NFSU2_TR(0x5c9edf);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ee1:{NFSU2_TR(0x5c9ee1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ee3:{NFSU2_TR(0x5c9ee3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ee4:{NFSU2_TR(0x5c9ee4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ee6:{NFSU2_TR(0x5c9ee6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ee8:{NFSU2_TR(0x5c9ee8);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9eed:{NFSU2_TR(0x5c9eed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9eef:{NFSU2_TR(0x5c9eef);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ef1:{NFSU2_TR(0x5c9ef1);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9ef3:{NFSU2_TR(0x5c9ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c9efa:{NFSU2_TR(0x5c9efa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9efb:{NFSU2_TR(0x5c9efb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9efd:{NFSU2_TR(0x5c9efd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9efe:{NFSU2_TR(0x5c9efe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9f03ull));
TAIL_STATIC(0x5c04e0u,5c0);
}
B5c9f03:L5c9f03:{c.instructions+=2;NFSU2_TR(0x5c9f03);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c9f05:{NFSU2_TR(0x5c9f05);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c9f0e;}}
}
B5c9f07:L5c9f07:{c.instructions+=1;NFSU2_TR(0x5c9f07);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bf8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c9f0e:L5c9f0e:{c.instructions+=6;NFSU2_TR(0x5c9f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c9f15:{NFSU2_TR(0x5c9f15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f16:{NFSU2_TR(0x5c9f16);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f18:{NFSU2_TR(0x5c9f18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f19:{NFSU2_TR(0x5c9f19);
__builtin_memmove((R+4),(R+28),4);
}
B5c9f1b:{NFSU2_TR(0x5c9f1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9f20ull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c9f20:L5c9f20:{c.instructions+=5;NFSU2_TR(0x5c9f20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9f21:{NFSU2_TR(0x5c9f21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9f22:{NFSU2_TR(0x5c9f22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9f23:{NFSU2_TR(0x5c9f23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9f24:{NFSU2_TR(0x5c9f24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9f27:L5c9f27:{c.instructions+=2;NFSU2_TR(0x5c9f27);
u8 U[24];
w4(U+0,u32(u32(u32(0x2bf8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+12))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B5c9f2e:{NFSU2_TR(0x5c9f2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c9f47;}}
}
B5c9f30:L5c9f30:{c.instructions+=5;NFSU2_TR(0x5c9f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c9f37:{NFSU2_TR(0x5c9f37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f38:{NFSU2_TR(0x5c9f38);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f3a:{NFSU2_TR(0x5c9f3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f3b:{NFSU2_TR(0x5c9f3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9f40ull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c9f40:L5c9f40:{c.instructions+=5;NFSU2_TR(0x5c9f40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9f41:{NFSU2_TR(0x5c9f41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9f42:{NFSU2_TR(0x5c9f42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9f43:{NFSU2_TR(0x5c9f43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9f44:{NFSU2_TR(0x5c9f44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9f47:L5c9f47:{c.instructions+=24;NFSU2_TR(0x5c9f47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f49:{NFSU2_TR(0x5c9f49);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f4b:{NFSU2_TR(0x5c9f4b);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f50:{NFSU2_TR(0x5c9f50);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f55:{NFSU2_TR(0x5c9f55);
__builtin_memmove((R+0),(R+12),4);
}
B5c9f57:{NFSU2_TR(0x5c9f57);
w4(R+0,u32(0-u32(r4(R+0))));
}
B5c9f59:{NFSU2_TR(0x5c9f59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f5a:{NFSU2_TR(0x5c9f5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f5b:{NFSU2_TR(0x5c9f5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9f62:{NFSU2_TR(0x5c9f62);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f64:{NFSU2_TR(0x5c9f64);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f66:{NFSU2_TR(0x5c9f66);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f68:{NFSU2_TR(0x5c9f68);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f6a:{NFSU2_TR(0x5c9f6a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f6c:{NFSU2_TR(0x5c9f6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f6d:{NFSU2_TR(0x5c9f6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f6f:{NFSU2_TR(0x5c9f6f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f71:{NFSU2_TR(0x5c9f71);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f76:{NFSU2_TR(0x5c9f76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f78:{NFSU2_TR(0x5c9f78);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f7a:{NFSU2_TR(0x5c9f7a);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f7c:{NFSU2_TR(0x5c9f7c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f7e:{NFSU2_TR(0x5c9f7e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f7f:{NFSU2_TR(0x5c9f7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9f84ull));
TAIL_STATIC(0x5c06a0u,5c0);
}
B5c9f84:L5c9f84:{c.instructions+=2;NFSU2_TR(0x5c9f84);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c9f86:{NFSU2_TR(0x5c9f86);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c9f8f;}}
}
B5c9f88:L5c9f88:{c.instructions+=1;NFSU2_TR(0x5c9f88);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bf8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c9f8f:L5c9f8f:{c.instructions+=6;NFSU2_TR(0x5c9f8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c9f96:{NFSU2_TR(0x5c9f96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f97:{NFSU2_TR(0x5c9f97);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f99:{NFSU2_TR(0x5c9f99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9f9a:{NFSU2_TR(0x5c9f9a);
__builtin_memmove((R+4),(R+28),4);
}
B5c9f9c:{NFSU2_TR(0x5c9f9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9fa1ull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5c9fa1:L5c9fa1:{c.instructions+=5;NFSU2_TR(0x5c9fa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9fa2:{NFSU2_TR(0x5c9fa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9fa3:{NFSU2_TR(0x5c9fa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9fa4:{NFSU2_TR(0x5c9fa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9fa5:{NFSU2_TR(0x5c9fa5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9fa8:L5c9fa8:{c.instructions+=2;NFSU2_TR(0x5c9fa8);
u8 U[4];
w4(U+0,u32(0x7a4028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9fad:{NFSU2_TR(0x5c9fad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9fb2ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c9fb2:L5c9fb2:{c.instructions+=3;NFSU2_TR(0x5c9fb2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9fb3:{NFSU2_TR(0x5c9fb3);
u8 U[4];
w4(U+0,u32(0x7a4010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9fb8:{NFSU2_TR(0x5c9fb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c9fbdull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c9fbd:L5c9fbd:{c.instructions+=1;NFSU2_TR(0x5c9fbd);
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
B5c9fc0:L5c9fc0:{c.instructions+=5;NFSU2_TR(0x5c9fc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c9fc1:{NFSU2_TR(0x5c9fc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c9fc2:{NFSU2_TR(0x5c9fc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c9fc3:{NFSU2_TR(0x5c9fc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c9fc4:{NFSU2_TR(0x5c9fc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c9fd0:L5c9fd0:{c.instructions+=10;NFSU2_TR(0x5c9fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5c9fd3:{NFSU2_TR(0x5c9fd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9fd4:{NFSU2_TR(0x5c9fd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c9fd8:{NFSU2_TR(0x5c9fd8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x96ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x96ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c9fde:{NFSU2_TR(0x5c9fde);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9fdf:{NFSU2_TR(0x5c9fdf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9fe0:{NFSU2_TR(0x5c9fe0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c9fe1:{NFSU2_TR(0x5c9fe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c9fe5:{NFSU2_TR(0x5c9fe5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c9fed:{NFSU2_TR(0x5c9fed);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5c9ff4;}}
}
B5c9fef:L5c9fef:{c.instructions+=1;NFSU2_TR(0x5c9fef);
w4(R+12,u32(0x96ull));
}
B5c9ff4:L5c9ff4:{c.instructions+=3;NFSU2_TR(0x5c9ff4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c9ff8:{NFSU2_TR(0x5c9ff8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c9fff:{NFSU2_TR(0x5c9fff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
TAIL_STATIC(0x5ca001u,5ca);
}
XIT:NFSU2_TR_EXIT(0x5c9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
