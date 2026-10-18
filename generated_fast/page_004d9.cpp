#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_4a5(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_4a8(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 body_4c4(u8* __restrict R,Cpu& c);
u32 body_4c5(u8* __restrict R,Cpu& c);
u32 body_4c6(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4d6(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4da(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_523(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_6fb(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4d9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4d9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4d9(u8* __restrict R,Cpu& c);
u32 page_4d9(Cpu& c){return body_4d9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4d9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4d9002:goto L4d9002;
case 0x4d9007:c.instructions+=7;goto B4d9007;
case 0x4d900a:c.instructions+=6;goto B4d900a;
case 0x4d900b:c.instructions+=5;goto B4d900b;
case 0x4d900e:c.instructions+=4;goto B4d900e;
case 0x4d9011:c.instructions+=3;goto B4d9011;
case 0x4d9016:c.instructions+=2;goto B4d9016;
case 0x4d9017:c.instructions+=1;goto B4d9017;
case 0x4d901c:goto L4d901c;
case 0x4d901f:c.instructions+=2;goto B4d901f;
case 0x4d9020:c.instructions+=1;goto B4d9020;
case 0x4d9025:goto L4d9025;
case 0x4d9029:c.instructions+=11;goto B4d9029;
case 0x4d902c:c.instructions+=10;goto B4d902c;
case 0x4d9032:c.instructions+=9;goto B4d9032;
case 0x4d9038:c.instructions+=8;goto B4d9038;
case 0x4d903b:c.instructions+=7;goto B4d903b;
case 0x4d903e:c.instructions+=6;goto B4d903e;
case 0x4d9040:c.instructions+=5;goto B4d9040;
case 0x4d9041:c.instructions+=4;goto B4d9041;
case 0x4d9042:c.instructions+=3;goto B4d9042;
case 0x4d9049:c.instructions+=2;goto B4d9049;
case 0x4d904c:c.instructions+=1;goto B4d904c;
case 0x4d9050:goto L4d9050;
case 0x4d9052:c.instructions+=13;goto B4d9052;
case 0x4d9057:c.instructions+=12;goto B4d9057;
case 0x4d905d:c.instructions+=11;goto B4d905d;
case 0x4d905e:c.instructions+=10;goto B4d905e;
case 0x4d9065:c.instructions+=9;goto B4d9065;
case 0x4d9066:c.instructions+=8;goto B4d9066;
case 0x4d9067:c.instructions+=7;goto B4d9067;
case 0x4d9069:c.instructions+=6;goto B4d9069;
case 0x4d906d:c.instructions+=5;goto B4d906d;
case 0x4d9073:c.instructions+=4;goto B4d9073;
case 0x4d9078:c.instructions+=3;goto B4d9078;
case 0x4d907d:c.instructions+=2;goto B4d907d;
case 0x4d9085:c.instructions+=1;goto B4d9085;
case 0x4d908a:goto L4d908a;
case 0x4d908f:c.instructions+=1;goto B4d908f;
case 0x4d9094:goto L4d9094;
case 0x4d9097:c.instructions+=3;goto B4d9097;
case 0x4d909a:c.instructions+=2;goto B4d909a;
case 0x4d909f:c.instructions+=1;goto B4d909f;
case 0x4d90a4:goto L4d90a4;
case 0x4d90a7:c.instructions+=2;goto B4d90a7;
case 0x4d90ac:c.instructions+=1;goto B4d90ac;
case 0x4d90b1:goto L4d90b1;
case 0x4d90b3:c.instructions+=2;goto B4d90b3;
case 0x4d90bb:c.instructions+=1;goto B4d90bb;
case 0x4d90c0:goto L4d90c0;
case 0x4d90c4:c.instructions+=4;goto B4d90c4;
case 0x4d90c5:c.instructions+=3;goto B4d90c5;
case 0x4d90cc:c.instructions+=2;goto B4d90cc;
case 0x4d90cf:c.instructions+=1;goto B4d90cf;
case 0x4d90d0:goto L4d90d0;
case 0x4d90d1:c.instructions+=15;goto B4d90d1;
case 0x4d90d3:c.instructions+=14;goto B4d90d3;
case 0x4d90d6:c.instructions+=13;goto B4d90d6;
case 0x4d90d8:c.instructions+=12;goto B4d90d8;
case 0x4d90dd:c.instructions+=11;goto B4d90dd;
case 0x4d90e3:c.instructions+=10;goto B4d90e3;
case 0x4d90e4:c.instructions+=9;goto B4d90e4;
case 0x4d90eb:c.instructions+=8;goto B4d90eb;
case 0x4d90f1:c.instructions+=7;goto B4d90f1;
case 0x4d90f4:c.instructions+=6;goto B4d90f4;
case 0x4d90fa:c.instructions+=5;goto B4d90fa;
case 0x4d90fb:c.instructions+=4;goto B4d90fb;
case 0x4d90fc:c.instructions+=3;goto B4d90fc;
case 0x4d90fe:c.instructions+=2;goto B4d90fe;
case 0x4d9101:c.instructions+=1;goto B4d9101;
case 0x4d9103:goto L4d9103;
case 0x4d9106:c.instructions+=2;goto B4d9106;
case 0x4d9108:c.instructions+=1;goto B4d9108;
case 0x4d910a:goto L4d910a;
case 0x4d910d:c.instructions+=1;goto B4d910d;
case 0x4d910f:goto L4d910f;
case 0x4d9111:goto L4d9111;
case 0x4d9113:c.instructions+=1;goto B4d9113;
case 0x4d9115:goto L4d9115;
case 0x4d9118:c.instructions+=2;goto B4d9118;
case 0x4d911a:c.instructions+=1;goto B4d911a;
case 0x4d911c:goto L4d911c;
case 0x4d911f:c.instructions+=1;goto B4d911f;
case 0x4d9121:goto L4d9121;
case 0x4d9127:c.instructions+=1;goto B4d9127;
case 0x4d9129:goto L4d9129;
case 0x4d912c:c.instructions+=2;goto B4d912c;
case 0x4d912e:c.instructions+=1;goto B4d912e;
case 0x4d9130:goto L4d9130;
case 0x4d9133:c.instructions+=1;goto B4d9133;
case 0x4d9135:goto L4d9135;
case 0x4d9137:goto L4d9137;
case 0x4d9139:c.instructions+=1;goto B4d9139;
case 0x4d913b:goto L4d913b;
case 0x4d913e:c.instructions+=2;goto B4d913e;
case 0x4d9140:c.instructions+=1;goto B4d9140;
case 0x4d9142:goto L4d9142;
case 0x4d9145:c.instructions+=1;goto B4d9145;
case 0x4d9147:goto L4d9147;
case 0x4d9149:goto L4d9149;
case 0x4d914c:goto L4d914c;
case 0x4d914f:c.instructions+=1;goto B4d914f;
case 0x4d9155:goto L4d9155;
case 0x4d9158:c.instructions+=4;goto B4d9158;
case 0x4d915a:c.instructions+=3;goto B4d915a;
case 0x4d915c:c.instructions+=2;goto B4d915c;
case 0x4d915d:c.instructions+=1;goto B4d915d;
case 0x4d9162:goto L4d9162;
case 0x4d9163:c.instructions+=2;goto B4d9163;
case 0x4d9164:c.instructions+=1;goto B4d9164;
case 0x4d9169:goto L4d9169;
case 0x4d916c:c.instructions+=5;goto B4d916c;
case 0x4d9172:c.instructions+=4;goto B4d9172;
case 0x4d9178:c.instructions+=3;goto B4d9178;
case 0x4d917b:c.instructions+=2;goto B4d917b;
case 0x4d917d:c.instructions+=1;goto B4d917d;
case 0x4d917f:goto L4d917f;
case 0x4d9185:c.instructions+=2;goto B4d9185;
case 0x4d918a:c.instructions+=1;goto B4d918a;
case 0x4d918f:goto L4d918f;
case 0x4d9192:c.instructions+=2;goto B4d9192;
case 0x4d9194:c.instructions+=1;goto B4d9194;
case 0x4d9196:goto L4d9196;
case 0x4d919b:c.instructions+=1;goto B4d919b;
case 0x4d91a0:goto L4d91a0;
case 0x4d91a3:c.instructions+=1;goto B4d91a3;
case 0x4d91a5:goto L4d91a5;
case 0x4d91aa:c.instructions+=1;goto B4d91aa;
case 0x4d91af:goto L4d91af;
case 0x4d91b2:c.instructions+=2;goto B4d91b2;
case 0x4d91b4:c.instructions+=1;goto B4d91b4;
case 0x4d91b6:goto L4d91b6;
case 0x4d91bb:c.instructions+=1;goto B4d91bb;
case 0x4d91c0:goto L4d91c0;
case 0x4d91c3:c.instructions+=2;goto B4d91c3;
case 0x4d91c5:c.instructions+=1;goto B4d91c5;
case 0x4d91c7:goto L4d91c7;
case 0x4d91ca:goto L4d91ca;
case 0x4d91cc:c.instructions+=1;goto B4d91cc;
case 0x4d91ce:goto L4d91ce;
case 0x4d91cf:c.instructions+=2;goto B4d91cf;
case 0x4d91d1:c.instructions+=1;goto B4d91d1;
case 0x4d91d6:goto L4d91d6;
case 0x4d91dc:c.instructions+=2;goto B4d91dc;
case 0x4d91e2:c.instructions+=1;goto B4d91e2;
case 0x4d91e7:goto L4d91e7;
case 0x4d91eb:c.instructions+=1;goto B4d91eb;
case 0x4d91f0:goto L4d91f0;
case 0x4d91f3:c.instructions+=9;goto B4d91f3;
case 0x4d91f9:c.instructions+=8;goto B4d91f9;
case 0x4d91ff:c.instructions+=7;goto B4d91ff;
case 0x4d9201:c.instructions+=6;goto B4d9201;
case 0x4d9203:c.instructions+=5;goto B4d9203;
case 0x4d9205:c.instructions+=4;goto B4d9205;
case 0x4d9206:c.instructions+=3;goto B4d9206;
case 0x4d920a:c.instructions+=2;goto B4d920a;
case 0x4d9215:c.instructions+=1;goto B4d9215;
case 0x4d921a:goto L4d921a;
case 0x4d921c:c.instructions+=2;goto B4d921c;
case 0x4d9220:c.instructions+=1;goto B4d9220;
case 0x4d9225:goto L4d9225;
case 0x4d9229:c.instructions+=1;goto B4d9229;
case 0x4d922e:goto L4d922e;
case 0x4d9232:c.instructions+=1;goto B4d9232;
case 0x4d9237:goto L4d9237;
case 0x4d923c:c.instructions+=1;goto B4d923c;
case 0x4d9241:goto L4d9241;
case 0x4d9244:c.instructions+=2;goto B4d9244;
case 0x4d9246:c.instructions+=1;goto B4d9246;
case 0x4d9248:goto L4d9248;
case 0x4d924d:c.instructions+=1;goto B4d924d;
case 0x4d9252:goto L4d9252;
case 0x4d9255:c.instructions+=2;goto B4d9255;
case 0x4d9257:c.instructions+=1;goto B4d9257;
case 0x4d9259:goto L4d9259;
case 0x4d925e:c.instructions+=1;goto B4d925e;
case 0x4d9263:goto L4d9263;
case 0x4d9266:c.instructions+=2;goto B4d9266;
case 0x4d9268:c.instructions+=1;goto B4d9268;
case 0x4d926a:goto L4d926a;
case 0x4d926f:c.instructions+=1;goto B4d926f;
case 0x4d9274:goto L4d9274;
case 0x4d9277:c.instructions+=2;goto B4d9277;
case 0x4d9279:c.instructions+=1;goto B4d9279;
case 0x4d927b:goto L4d927b;
case 0x4d927e:c.instructions+=1;goto B4d927e;
case 0x4d9280:goto L4d9280;
case 0x4d9282:goto L4d9282;
case 0x4d9286:c.instructions+=3;goto B4d9286;
case 0x4d9287:c.instructions+=2;goto B4d9287;
case 0x4d928c:c.instructions+=1;goto B4d928c;
case 0x4d9291:goto L4d9291;
case 0x4d9293:c.instructions+=2;goto B4d9293;
case 0x4d929d:c.instructions+=1;goto B4d929d;
case 0x4d929f:goto L4d929f;
case 0x4d92a1:c.instructions+=3;goto B4d92a1;
case 0x4d92a6:c.instructions+=2;goto B4d92a6;
case 0x4d92a8:c.instructions+=1;goto B4d92a8;
case 0x4d92ad:goto L4d92ad;
case 0x4d92b4:c.instructions+=2;goto B4d92b4;
case 0x4d92bf:c.instructions+=1;goto B4d92bf;
case 0x4d92c4:goto L4d92c4;
case 0x4d92c6:c.instructions+=1;goto B4d92c6;
case 0x4d92cb:goto L4d92cb;
case 0x4d92ce:c.instructions+=4;goto B4d92ce;
case 0x4d92d4:c.instructions+=3;goto B4d92d4;
case 0x4d92d5:c.instructions+=2;goto B4d92d5;
case 0x4d92d8:c.instructions+=1;goto B4d92d8;
case 0x4d92dd:goto L4d92dd;
case 0x4d92e4:c.instructions+=6;goto B4d92e4;
case 0x4d92e5:c.instructions+=5;goto B4d92e5;
case 0x4d92ec:c.instructions+=4;goto B4d92ec;
case 0x4d92ed:c.instructions+=3;goto B4d92ed;
case 0x4d92ef:c.instructions+=2;goto B4d92ef;
case 0x4d92f0:c.instructions+=1;goto B4d92f0;
case 0x4d9300:goto L4d9300;
case 0x4d9301:c.instructions+=7;goto B4d9301;
case 0x4d9302:c.instructions+=6;goto B4d9302;
case 0x4d9303:c.instructions+=5;goto B4d9303;
case 0x4d9305:c.instructions+=4;goto B4d9305;
case 0x4d9308:c.instructions+=3;goto B4d9308;
case 0x4d930d:c.instructions+=2;goto B4d930d;
case 0x4d9312:c.instructions+=1;goto B4d9312;
case 0x4d9317:goto L4d9317;
case 0x4d9318:c.instructions+=2;goto B4d9318;
case 0x4d9319:c.instructions+=1;goto B4d9319;
case 0x4d931e:goto L4d931e;
case 0x4d9321:c.instructions+=2;goto B4d9321;
case 0x4d9322:c.instructions+=1;goto B4d9322;
case 0x4d9327:goto L4d9327;
case 0x4d932a:c.instructions+=4;goto B4d932a;
case 0x4d932d:c.instructions+=3;goto B4d932d;
case 0x4d9332:c.instructions+=2;goto B4d9332;
case 0x4d9337:c.instructions+=1;goto B4d9337;
case 0x4d933c:goto L4d933c;
case 0x4d933d:c.instructions+=2;goto B4d933d;
case 0x4d933e:c.instructions+=1;goto B4d933e;
case 0x4d9343:goto L4d9343;
case 0x4d9346:c.instructions+=2;goto B4d9346;
case 0x4d9347:c.instructions+=1;goto B4d9347;
case 0x4d934c:goto L4d934c;
case 0x4d934f:c.instructions+=4;goto B4d934f;
case 0x4d9352:c.instructions+=3;goto B4d9352;
case 0x4d9357:c.instructions+=2;goto B4d9357;
case 0x4d935c:c.instructions+=1;goto B4d935c;
case 0x4d9361:goto L4d9361;
case 0x4d9362:c.instructions+=2;goto B4d9362;
case 0x4d9363:c.instructions+=1;goto B4d9363;
case 0x4d9368:goto L4d9368;
case 0x4d936b:c.instructions+=2;goto B4d936b;
case 0x4d936c:c.instructions+=1;goto B4d936c;
case 0x4d9371:goto L4d9371;
case 0x4d9376:c.instructions+=4;goto B4d9376;
case 0x4d9379:c.instructions+=3;goto B4d9379;
case 0x4d937b:c.instructions+=2;goto B4d937b;
case 0x4d937d:c.instructions+=1;goto B4d937d;
case 0x4d937f:goto L4d937f;
case 0x4d9384:goto L4d9384;
case 0x4d9386:goto L4d9386;
case 0x4d938b:goto L4d938b;
case 0x4d938e:c.instructions+=3;goto B4d938e;
case 0x4d9390:c.instructions+=2;goto B4d9390;
case 0x4d9391:c.instructions+=1;goto B4d9391;
case 0x4d9396:goto L4d9396;
case 0x4d9399:c.instructions+=4;goto B4d9399;
case 0x4d939c:c.instructions+=3;goto B4d939c;
case 0x4d939f:c.instructions+=2;goto B4d939f;
case 0x4d93a0:c.instructions+=1;goto B4d93a0;
case 0x4d93a5:goto L4d93a5;
case 0x4d93a8:c.instructions+=3;goto B4d93a8;
case 0x4d93a9:c.instructions+=2;goto B4d93a9;
case 0x4d93ab:c.instructions+=1;goto B4d93ab;
case 0x4d93ae:goto L4d93ae;
case 0x4d93b0:c.instructions+=2;goto B4d93b0;
case 0x4d93b2:c.instructions+=1;goto B4d93b2;
case 0x4d93b5:goto L4d93b5;
case 0x4d93b7:c.instructions+=5;goto B4d93b7;
case 0x4d93b8:c.instructions+=4;goto B4d93b8;
case 0x4d93ba:c.instructions+=3;goto B4d93ba;
case 0x4d93bb:c.instructions+=2;goto B4d93bb;
case 0x4d93bc:c.instructions+=1;goto B4d93bc;
case 0x4d93c0:goto L4d93c0;
case 0x4d93c2:c.instructions+=12;goto B4d93c2;
case 0x4d93c7:c.instructions+=11;goto B4d93c7;
case 0x4d93cd:c.instructions+=10;goto B4d93cd;
case 0x4d93ce:c.instructions+=9;goto B4d93ce;
case 0x4d93d5:c.instructions+=8;goto B4d93d5;
case 0x4d93d6:c.instructions+=7;goto B4d93d6;
case 0x4d93da:c.instructions+=6;goto B4d93da;
case 0x4d93db:c.instructions+=5;goto B4d93db;
case 0x4d93dc:c.instructions+=4;goto B4d93dc;
case 0x4d93de:c.instructions+=3;goto B4d93de;
case 0x4d93df:c.instructions+=2;goto B4d93df;
case 0x4d93e3:c.instructions+=1;goto B4d93e3;
case 0x4d93e8:goto L4d93e8;
case 0x4d93ea:c.instructions+=9;goto B4d93ea;
case 0x4d93ec:c.instructions+=8;goto B4d93ec;
case 0x4d93f0:c.instructions+=7;goto B4d93f0;
case 0x4d93f6:c.instructions+=6;goto B4d93f6;
case 0x4d93fc:c.instructions+=5;goto B4d93fc;
case 0x4d9402:c.instructions+=4;goto B4d9402;
case 0x4d9408:c.instructions+=3;goto B4d9408;
case 0x4d940e:c.instructions+=2;goto B4d940e;
case 0x4d9418:c.instructions+=1;goto B4d9418;
case 0x4d941d:goto L4d941d;
case 0x4d9422:goto L4d9422;
case 0x4d9423:c.instructions+=1;goto B4d9423;
case 0x4d9428:goto L4d9428;
case 0x4d942b:c.instructions+=2;goto B4d942b;
case 0x4d942d:c.instructions+=1;goto B4d942d;
case 0x4d942f:goto L4d942f;
case 0x4d9432:c.instructions+=4;goto B4d9432;
case 0x4d9433:c.instructions+=3;goto B4d9433;
case 0x4d9438:c.instructions+=2;goto B4d9438;
case 0x4d9439:c.instructions+=1;goto B4d9439;
case 0x4d943e:goto L4d943e;
case 0x4d943f:c.instructions+=1;goto B4d943f;
case 0x4d9444:goto L4d9444;
case 0x4d9447:goto L4d9447;
case 0x4d944b:c.instructions+=7;goto B4d944b;
case 0x4d9451:c.instructions+=6;goto B4d9451;
case 0x4d9453:c.instructions+=5;goto B4d9453;
case 0x4d9454:c.instructions+=4;goto B4d9454;
case 0x4d9455:c.instructions+=3;goto B4d9455;
case 0x4d945c:c.instructions+=2;goto B4d945c;
case 0x4d945f:c.instructions+=1;goto B4d945f;
case 0x4d9470:goto L4d9470;
case 0x4d9476:c.instructions+=1;goto B4d9476;
case 0x4d9480:goto L4d9480;
case 0x4d9482:c.instructions+=11;goto B4d9482;
case 0x4d9487:c.instructions+=10;goto B4d9487;
case 0x4d948d:c.instructions+=9;goto B4d948d;
case 0x4d948e:c.instructions+=8;goto B4d948e;
case 0x4d9495:c.instructions+=7;goto B4d9495;
case 0x4d9496:c.instructions+=6;goto B4d9496;
case 0x4d949c:c.instructions+=5;goto B4d949c;
case 0x4d94a0:c.instructions+=4;goto B4d94a0;
case 0x4d94a2:c.instructions+=3;goto B4d94a2;
case 0x4d94a4:c.instructions+=2;goto B4d94a4;
case 0x4d94a8:c.instructions+=1;goto B4d94a8;
case 0x4d94aa:goto L4d94aa;
case 0x4d94ae:c.instructions+=2;goto B4d94ae;
case 0x4d94af:c.instructions+=1;goto B4d94af;
case 0x4d94b4:goto L4d94b4;
case 0x4d94b8:c.instructions+=3;goto B4d94b8;
case 0x4d94bf:c.instructions+=2;goto B4d94bf;
case 0x4d94c2:c.instructions+=1;goto B4d94c2;
case 0x4d94d0:goto L4d94d0;
case 0x4d94d1:c.instructions+=2;goto B4d94d1;
case 0x4d94d6:c.instructions+=1;goto B4d94d6;
case 0x4d94db:goto L4d94db;
case 0x4d94de:c.instructions+=2;goto B4d94de;
case 0x4d94e0:c.instructions+=1;goto B4d94e0;
case 0x4d94e2:goto L4d94e2;
case 0x4d94e5:c.instructions+=3;goto B4d94e5;
case 0x4d94e7:c.instructions+=2;goto B4d94e7;
case 0x4d94eb:c.instructions+=1;goto B4d94eb;
case 0x4d94ed:goto L4d94ed;
case 0x4d94f0:c.instructions+=2;goto B4d94f0;
case 0x4d94f2:c.instructions+=1;goto B4d94f2;
case 0x4d94f4:goto L4d94f4;
case 0x4d94f7:c.instructions+=3;goto B4d94f7;
case 0x4d94f8:c.instructions+=2;goto B4d94f8;
case 0x4d94fa:c.instructions+=1;goto B4d94fa;
case 0x4d94ff:goto L4d94ff;
case 0x4d9500:c.instructions+=1;goto B4d9500;
case 0x4d9501:goto L4d9501;
case 0x4d9502:c.instructions+=1;goto B4d9502;
case 0x4d9507:goto L4d9507;
case 0x4d950a:c.instructions+=2;goto B4d950a;
case 0x4d950b:c.instructions+=1;goto B4d950b;
case 0x4d950c:goto L4d950c;
case 0x4d950d:c.instructions+=1;goto B4d950d;
case 0x4d9520:goto L4d9520;
case 0x4d9521:c.instructions+=5;goto B4d9521;
case 0x4d9523:c.instructions+=4;goto B4d9523;
case 0x4d9526:c.instructions+=3;goto B4d9526;
case 0x4d9528:c.instructions+=2;goto B4d9528;
case 0x4d9529:c.instructions+=1;goto B4d9529;
case 0x4d952b:goto L4d952b;
case 0x4d952c:c.instructions+=1;goto B4d952c;
case 0x4d9531:goto L4d9531;
case 0x4d9534:c.instructions+=1;goto B4d9534;
case 0x4d953b:goto L4d953b;
case 0x4d953f:c.instructions+=2;goto B4d953f;
case 0x4d9541:c.instructions+=1;goto B4d9541;
case 0x4d9543:goto L4d9543;
case 0x4d9546:c.instructions+=2;goto B4d9546;
case 0x4d9548:c.instructions+=1;goto B4d9548;
case 0x4d954a:goto L4d954a;
case 0x4d954d:c.instructions+=4;goto B4d954d;
case 0x4d954e:c.instructions+=3;goto B4d954e;
case 0x4d9553:c.instructions+=2;goto B4d9553;
case 0x4d9554:c.instructions+=1;goto B4d9554;
case 0x4d9559:goto L4d9559;
case 0x4d955c:c.instructions+=2;goto B4d955c;
case 0x4d955d:c.instructions+=1;goto B4d955d;
case 0x4d9562:goto L4d9562;
case 0x4d9565:c.instructions+=5;goto B4d9565;
case 0x4d9567:c.instructions+=4;goto B4d9567;
case 0x4d9568:c.instructions+=3;goto B4d9568;
case 0x4d956d:c.instructions+=2;goto B4d956d;
case 0x4d956e:c.instructions+=1;goto B4d956e;
case 0x4d9573:goto L4d9573;
case 0x4d9576:goto L4d9576;
case 0x4d9577:c.instructions+=2;goto B4d9577;
case 0x4d9578:c.instructions+=1;goto B4d9578;
case 0x4d9580:goto L4d9580;
case 0x4d9582:c.instructions+=15;goto B4d9582;
case 0x4d9587:c.instructions+=14;goto B4d9587;
case 0x4d958d:c.instructions+=13;goto B4d958d;
case 0x4d958e:c.instructions+=12;goto B4d958e;
case 0x4d9595:c.instructions+=11;goto B4d9595;
case 0x4d9596:c.instructions+=10;goto B4d9596;
case 0x4d9597:c.instructions+=9;goto B4d9597;
case 0x4d9599:c.instructions+=8;goto B4d9599;
case 0x4d959a:c.instructions+=7;goto B4d959a;
case 0x4d959d:c.instructions+=6;goto B4d959d;
case 0x4d95a3:c.instructions+=5;goto B4d95a3;
case 0x4d95a7:c.instructions+=4;goto B4d95a7;
case 0x4d95a9:c.instructions+=3;goto B4d95a9;
case 0x4d95ac:c.instructions+=2;goto B4d95ac;
case 0x4d95b4:c.instructions+=1;goto B4d95b4;
case 0x4d95b9:goto L4d95b9;
case 0x4d95bc:c.instructions+=3;goto B4d95bc;
case 0x4d95c3:c.instructions+=2;goto B4d95c3;
case 0x4d95c5:c.instructions+=1;goto B4d95c5;
case 0x4d95c7:goto L4d95c7;
case 0x4d95ca:c.instructions+=1;goto B4d95ca;
case 0x4d95cc:goto L4d95cc;
case 0x4d95d1:goto L4d95d1;
case 0x4d95d3:c.instructions+=1;goto B4d95d3;
case 0x4d95d6:goto L4d95d6;
case 0x4d95d8:c.instructions+=2;goto B4d95d8;
case 0x4d95d9:c.instructions+=1;goto B4d95d9;
case 0x4d95db:goto L4d95db;
case 0x4d95e0:goto L4d95e0;
case 0x4d95e2:c.instructions+=2;goto B4d95e2;
case 0x4d95e5:c.instructions+=1;goto B4d95e5;
case 0x4d95e7:goto L4d95e7;
case 0x4d95e9:c.instructions+=1;goto B4d95e9;
case 0x4d95ee:goto L4d95ee;
case 0x4d95f1:c.instructions+=2;goto B4d95f1;
case 0x4d95f3:c.instructions+=1;goto B4d95f3;
case 0x4d95f5:goto L4d95f5;
case 0x4d95f7:c.instructions+=4;goto B4d95f7;
case 0x4d95fd:c.instructions+=3;goto B4d95fd;
case 0x4d9600:c.instructions+=2;goto B4d9600;
case 0x4d9603:c.instructions+=1;goto B4d9603;
case 0x4d9605:goto L4d9605;
case 0x4d9607:goto L4d9607;
case 0x4d960a:c.instructions+=4;goto B4d960a;
case 0x4d960c:c.instructions+=3;goto B4d960c;
case 0x4d960f:c.instructions+=2;goto B4d960f;
case 0x4d9612:c.instructions+=1;goto B4d9612;
case 0x4d9614:goto L4d9614;
case 0x4d9617:c.instructions+=2;goto B4d9617;
case 0x4d961d:c.instructions+=1;goto B4d961d;
case 0x4d961f:goto L4d961f;
case 0x4d9621:goto L4d9621;
case 0x4d9626:goto L4d9626;
case 0x4d9629:c.instructions+=3;goto B4d9629;
case 0x4d9630:c.instructions+=2;goto B4d9630;
case 0x4d9632:c.instructions+=1;goto B4d9632;
case 0x4d9634:goto L4d9634;
case 0x4d9637:c.instructions+=3;goto B4d9637;
case 0x4d9639:c.instructions+=2;goto B4d9639;
case 0x4d963c:c.instructions+=1;goto B4d963c;
case 0x4d963e:goto L4d963e;
case 0x4d9643:goto L4d9643;
case 0x4d9645:c.instructions+=2;goto B4d9645;
case 0x4d9647:c.instructions+=1;goto B4d9647;
case 0x4d9649:goto L4d9649;
case 0x4d964b:c.instructions+=1;goto B4d964b;
case 0x4d964d:goto L4d964d;
case 0x4d9652:goto L4d9652;
case 0x4d9654:c.instructions+=2;goto B4d9654;
case 0x4d9657:c.instructions+=1;goto B4d9657;
case 0x4d9659:goto L4d9659;
case 0x4d965b:c.instructions+=1;goto B4d965b;
case 0x4d9660:goto L4d9660;
case 0x4d9663:c.instructions+=2;goto B4d9663;
case 0x4d9665:c.instructions+=1;goto B4d9665;
case 0x4d9667:goto L4d9667;
case 0x4d9669:c.instructions+=4;goto B4d9669;
case 0x4d966f:c.instructions+=3;goto B4d966f;
case 0x4d9672:c.instructions+=2;goto B4d9672;
case 0x4d9675:c.instructions+=1;goto B4d9675;
case 0x4d9677:goto L4d9677;
case 0x4d9679:goto L4d9679;
case 0x4d967c:c.instructions+=4;goto B4d967c;
case 0x4d967e:c.instructions+=3;goto B4d967e;
case 0x4d9681:c.instructions+=2;goto B4d9681;
case 0x4d9684:c.instructions+=1;goto B4d9684;
case 0x4d9686:goto L4d9686;
case 0x4d9689:c.instructions+=2;goto B4d9689;
case 0x4d968f:c.instructions+=1;goto B4d968f;
case 0x4d9691:goto L4d9691;
case 0x4d9693:c.instructions+=3;goto B4d9693;
case 0x4d9695:c.instructions+=2;goto B4d9695;
case 0x4d9696:c.instructions+=1;goto B4d9696;
case 0x4d9698:goto L4d9698;
case 0x4d969b:c.instructions+=1;goto B4d969b;
case 0x4d969d:goto L4d969d;
case 0x4d969f:goto L4d969f;
case 0x4d96a2:c.instructions+=4;goto B4d96a2;
case 0x4d96a5:c.instructions+=3;goto B4d96a5;
case 0x4d96a6:c.instructions+=2;goto B4d96a6;
case 0x4d96ab:c.instructions+=1;goto B4d96ab;
case 0x4d96b0:goto L4d96b0;
case 0x4d96b3:c.instructions+=2;goto B4d96b3;
case 0x4d96b5:c.instructions+=1;goto B4d96b5;
case 0x4d96b7:goto L4d96b7;
case 0x4d96bc:goto L4d96bc;
case 0x4d96bf:c.instructions+=3;goto B4d96bf;
case 0x4d96c2:c.instructions+=2;goto B4d96c2;
case 0x4d96c4:c.instructions+=1;goto B4d96c4;
case 0x4d96c6:goto L4d96c6;
case 0x4d96c9:c.instructions+=1;goto B4d96c9;
case 0x4d96cb:goto L4d96cb;
case 0x4d96cd:goto L4d96cd;
case 0x4d96d0:goto L4d96d0;
case 0x4d96d3:c.instructions+=3;goto B4d96d3;
case 0x4d96d6:c.instructions+=2;goto B4d96d6;
case 0x4d96d7:c.instructions+=1;goto B4d96d7;
case 0x4d96dc:goto L4d96dc;
case 0x4d96e0:c.instructions+=7;goto B4d96e0;
case 0x4d96e3:c.instructions+=6;goto B4d96e3;
case 0x4d96e4:c.instructions+=5;goto B4d96e4;
case 0x4d96e6:c.instructions+=4;goto B4d96e6;
case 0x4d96e7:c.instructions+=3;goto B4d96e7;
case 0x4d96ee:c.instructions+=2;goto B4d96ee;
case 0x4d96f1:c.instructions+=1;goto B4d96f1;
case 0x4d9700:goto L4d9700;
case 0x4d9701:c.instructions+=2;goto B4d9701;
case 0x4d9703:c.instructions+=1;goto B4d9703;
case 0x4d9708:goto L4d9708;
case 0x4d970d:c.instructions+=1;goto B4d970d;
case 0x4d970f:goto L4d970f;
case 0x4d9710:c.instructions+=1;goto B4d9710;
case 0x4d9715:goto L4d9715;
case 0x4d9718:goto L4d9718;
case 0x4d971a:c.instructions+=2;goto B4d971a;
case 0x4d971b:c.instructions+=1;goto B4d971b;
case 0x4d9720:goto L4d9720;
case 0x4d9726:c.instructions+=2;goto B4d9726;
case 0x4d9729:c.instructions+=1;goto B4d9729;
case 0x4d9730:goto L4d9730;
case 0x4d9732:c.instructions+=7;goto B4d9732;
case 0x4d9737:c.instructions+=6;goto B4d9737;
case 0x4d973d:c.instructions+=5;goto B4d973d;
case 0x4d973e:c.instructions+=4;goto B4d973e;
case 0x4d9745:c.instructions+=3;goto B4d9745;
case 0x4d9746:c.instructions+=2;goto B4d9746;
case 0x4d9748:c.instructions+=1;goto B4d9748;
case 0x4d974d:goto L4d974d;
case 0x4d9750:c.instructions+=4;goto B4d9750;
case 0x4d9754:c.instructions+=3;goto B4d9754;
case 0x4d9756:c.instructions+=2;goto B4d9756;
case 0x4d975e:c.instructions+=1;goto B4d975e;
case 0x4d9760:goto L4d9760;
case 0x4d9762:c.instructions+=1;goto B4d9762;
case 0x4d9767:goto L4d9767;
case 0x4d976c:c.instructions+=4;goto B4d976c;
case 0x4d9770:c.instructions+=3;goto B4d9770;
case 0x4d9777:c.instructions+=2;goto B4d9777;
case 0x4d977a:c.instructions+=1;goto B4d977a;
case 0x4d977b:goto L4d977b;
case 0x4d977f:c.instructions+=5;goto B4d977f;
case 0x4d9781:c.instructions+=4;goto B4d9781;
case 0x4d9786:c.instructions+=3;goto B4d9786;
case 0x4d978d:c.instructions+=2;goto B4d978d;
case 0x4d9790:c.instructions+=1;goto B4d9790;
case 0x4d97a0:goto L4d97a0;
case 0x4d97a2:c.instructions+=7;goto B4d97a2;
case 0x4d97a7:c.instructions+=6;goto B4d97a7;
case 0x4d97ad:c.instructions+=5;goto B4d97ad;
case 0x4d97ae:c.instructions+=4;goto B4d97ae;
case 0x4d97b5:c.instructions+=3;goto B4d97b5;
case 0x4d97b6:c.instructions+=2;goto B4d97b6;
case 0x4d97b8:c.instructions+=1;goto B4d97b8;
case 0x4d97bd:goto L4d97bd;
case 0x4d97c0:c.instructions+=4;goto B4d97c0;
case 0x4d97c4:c.instructions+=3;goto B4d97c4;
case 0x4d97c6:c.instructions+=2;goto B4d97c6;
case 0x4d97ce:c.instructions+=1;goto B4d97ce;
case 0x4d97d0:goto L4d97d0;
case 0x4d97d4:c.instructions+=3;goto B4d97d4;
case 0x4d97d5:c.instructions+=2;goto B4d97d5;
case 0x4d97d7:c.instructions+=1;goto B4d97d7;
case 0x4d97dc:goto L4d97dc;
case 0x4d97e0:c.instructions+=3;goto B4d97e0;
case 0x4d97e7:c.instructions+=2;goto B4d97e7;
case 0x4d97ea:c.instructions+=1;goto B4d97ea;
case 0x4d97eb:goto L4d97eb;
case 0x4d97ef:c.instructions+=4;goto B4d97ef;
case 0x4d97f1:c.instructions+=3;goto B4d97f1;
case 0x4d97f8:c.instructions+=2;goto B4d97f8;
case 0x4d97fb:c.instructions+=1;goto B4d97fb;
case 0x4d9800:goto L4d9800;
case 0x4d9801:c.instructions+=21;goto B4d9801;
case 0x4d9803:c.instructions+=20;goto B4d9803;
case 0x4d9806:c.instructions+=19;goto B4d9806;
case 0x4d9808:c.instructions+=18;goto B4d9808;
case 0x4d980d:c.instructions+=17;goto B4d980d;
case 0x4d9813:c.instructions+=16;goto B4d9813;
case 0x4d9814:c.instructions+=15;goto B4d9814;
case 0x4d981b:c.instructions+=14;goto B4d981b;
case 0x4d9821:c.instructions+=13;goto B4d9821;
case 0x4d9824:c.instructions+=12;goto B4d9824;
case 0x4d9827:c.instructions+=11;goto B4d9827;
case 0x4d9828:c.instructions+=10;goto B4d9828;
case 0x4d982b:c.instructions+=9;goto B4d982b;
case 0x4d982c:c.instructions+=8;goto B4d982c;
case 0x4d982e:c.instructions+=7;goto B4d982e;
case 0x4d9831:c.instructions+=6;goto B4d9831;
case 0x4d9832:c.instructions+=5;goto B4d9832;
case 0x4d9833:c.instructions+=4;goto B4d9833;
case 0x4d9834:c.instructions+=3;goto B4d9834;
case 0x4d9835:c.instructions+=2;goto B4d9835;
case 0x4d9837:c.instructions+=1;goto B4d9837;
case 0x4d983c:goto L4d983c;
case 0x4d9842:c.instructions+=1;goto B4d9842;
case 0x4d9844:goto L4d9844;
case 0x4d984a:c.instructions+=1;goto B4d984a;
case 0x4d984c:goto L4d984c;
case 0x4d9852:c.instructions+=1;goto B4d9852;
case 0x4d9858:goto L4d9858;
case 0x4d985d:c.instructions+=2;goto B4d985d;
case 0x4d985f:c.instructions+=1;goto B4d985f;
case 0x4d9861:goto L4d9861;
case 0x4d9865:c.instructions+=3;goto B4d9865;
case 0x4d986b:c.instructions+=2;goto B4d986b;
case 0x4d986d:c.instructions+=1;goto B4d986d;
case 0x4d986f:goto L4d986f;
case 0x4d9872:c.instructions+=3;goto B4d9872;
case 0x4d9877:c.instructions+=2;goto B4d9877;
case 0x4d9879:c.instructions+=1;goto B4d9879;
case 0x4d987e:goto L4d987e;
case 0x4d9883:c.instructions+=5;goto B4d9883;
case 0x4d9886:c.instructions+=4;goto B4d9886;
case 0x4d9888:c.instructions+=3;goto B4d9888;
case 0x4d9889:c.instructions+=2;goto B4d9889;
case 0x4d988a:c.instructions+=1;goto B4d988a;
case 0x4d988f:goto L4d988f;
case 0x4d9892:c.instructions+=7;goto B4d9892;
case 0x4d9899:c.instructions+=6;goto B4d9899;
case 0x4d98a0:c.instructions+=5;goto B4d98a0;
case 0x4d98a1:c.instructions+=4;goto B4d98a1;
case 0x4d98a2:c.instructions+=3;goto B4d98a2;
case 0x4d98a4:c.instructions+=2;goto B4d98a4;
case 0x4d98a5:c.instructions+=1;goto B4d98a5;
case 0x4d98a8:goto L4d98a8;
case 0x4d98aa:c.instructions+=1;goto B4d98aa;
case 0x4d98af:goto L4d98af;
case 0x4d98b3:c.instructions+=1;goto B4d98b3;
case 0x4d98b8:goto L4d98b8;
case 0x4d98bd:c.instructions+=4;goto B4d98bd;
case 0x4d98be:c.instructions+=3;goto B4d98be;
case 0x4d98c3:c.instructions+=2;goto B4d98c3;
case 0x4d98ce:c.instructions+=1;goto B4d98ce;
case 0x4d98d3:goto L4d98d3;
case 0x4d98d5:c.instructions+=6;goto B4d98d5;
case 0x4d98d7:c.instructions+=5;goto B4d98d7;
case 0x4d98db:c.instructions+=4;goto B4d98db;
case 0x4d98dc:c.instructions+=3;goto B4d98dc;
case 0x4d98de:c.instructions+=2;goto B4d98de;
case 0x4d98e0:c.instructions+=1;goto B4d98e0;
case 0x4d98e3:goto L4d98e3;
case 0x4d98e8:c.instructions+=1;goto B4d98e8;
case 0x4d98ed:goto L4d98ed;
case 0x4d98f0:c.instructions+=2;goto B4d98f0;
case 0x4d98f2:c.instructions+=1;goto B4d98f2;
case 0x4d98f4:goto L4d98f4;
case 0x4d98f9:c.instructions+=1;goto B4d98f9;
case 0x4d98fe:goto L4d98fe;
case 0x4d9901:c.instructions+=2;goto B4d9901;
case 0x4d9903:c.instructions+=1;goto B4d9903;
case 0x4d9905:goto L4d9905;
case 0x4d990a:c.instructions+=1;goto B4d990a;
case 0x4d990f:goto L4d990f;
case 0x4d9912:c.instructions+=2;goto B4d9912;
case 0x4d9914:c.instructions+=1;goto B4d9914;
case 0x4d9916:goto L4d9916;
case 0x4d991b:c.instructions+=1;goto B4d991b;
case 0x4d9920:goto L4d9920;
case 0x4d9923:c.instructions+=2;goto B4d9923;
case 0x4d9925:c.instructions+=1;goto B4d9925;
case 0x4d9927:goto L4d9927;
case 0x4d992a:c.instructions+=1;goto B4d992a;
case 0x4d992c:goto L4d992c;
case 0x4d992e:goto L4d992e;
case 0x4d9932:c.instructions+=3;goto B4d9932;
case 0x4d9933:c.instructions+=2;goto B4d9933;
case 0x4d9938:c.instructions+=1;goto B4d9938;
case 0x4d993d:goto L4d993d;
case 0x4d993f:c.instructions+=2;goto B4d993f;
case 0x4d9949:c.instructions+=1;goto B4d9949;
case 0x4d994b:goto L4d994b;
case 0x4d994d:c.instructions+=3;goto B4d994d;
case 0x4d9952:c.instructions+=2;goto B4d9952;
case 0x4d9954:c.instructions+=1;goto B4d9954;
case 0x4d9959:goto L4d9959;
case 0x4d9960:c.instructions+=2;goto B4d9960;
case 0x4d996b:c.instructions+=1;goto B4d996b;
case 0x4d9970:goto L4d9970;
case 0x4d9977:c.instructions+=6;goto B4d9977;
case 0x4d9978:c.instructions+=5;goto B4d9978;
case 0x4d997f:c.instructions+=4;goto B4d997f;
case 0x4d9980:c.instructions+=3;goto B4d9980;
case 0x4d9982:c.instructions+=2;goto B4d9982;
case 0x4d9983:c.instructions+=1;goto B4d9983;
case 0x4d9990:goto L4d9990;
case 0x4d9992:c.instructions+=1;goto B4d9992;
case 0x4d9997:goto L4d9997;
case 0x4d9999:c.instructions+=3;goto B4d9999;
case 0x4d999c:c.instructions+=2;goto B4d999c;
case 0x4d999e:c.instructions+=1;goto B4d999e;
case 0x4d99a0:goto L4d99a0;
case 0x4d99a3:c.instructions+=13;goto B4d99a3;
case 0x4d99a6:c.instructions+=12;goto B4d99a6;
case 0x4d99a9:c.instructions+=11;goto B4d99a9;
case 0x4d99ac:c.instructions+=10;goto B4d99ac;
case 0x4d99af:c.instructions+=9;goto B4d99af;
case 0x4d99b2:c.instructions+=8;goto B4d99b2;
case 0x4d99b5:c.instructions+=7;goto B4d99b5;
case 0x4d99b8:c.instructions+=6;goto B4d99b8;
case 0x4d99bb:c.instructions+=5;goto B4d99bb;
case 0x4d99be:c.instructions+=4;goto B4d99be;
case 0x4d99c1:c.instructions+=3;goto B4d99c1;
case 0x4d99c4:c.instructions+=2;goto B4d99c4;
case 0x4d99c7:c.instructions+=1;goto B4d99c7;
case 0x4d99c9:goto L4d99c9;
case 0x4d99cb:goto L4d99cb;
case 0x4d99d0:c.instructions+=3;goto B4d99d0;
case 0x4d99d5:c.instructions+=2;goto B4d99d5;
case 0x4d99da:c.instructions+=1;goto B4d99da;
case 0x4d99df:goto L4d99df;
case 0x4d99e4:c.instructions+=2;goto B4d99e4;
case 0x4d99e9:c.instructions+=1;goto B4d99e9;
case 0x4d99ee:goto L4d99ee;
case 0x4d99f3:c.instructions+=2;goto B4d99f3;
case 0x4d99f8:c.instructions+=1;goto B4d99f8;
case 0x4d99fd:goto L4d99fd;
case 0x4d9a02:c.instructions+=2;goto B4d9a02;
case 0x4d9a07:c.instructions+=1;goto B4d9a07;
case 0x4d9a0c:goto L4d9a0c;
case 0x4d9a12:c.instructions+=2;goto B4d9a12;
case 0x4d9a15:c.instructions+=1;goto B4d9a15;
case 0x4d9a20:goto L4d9a20;
case 0x4d9a23:c.instructions+=6;goto B4d9a23;
case 0x4d9a24:c.instructions+=5;goto B4d9a24;
case 0x4d9a25:c.instructions+=4;goto B4d9a25;
case 0x4d9a27:c.instructions+=3;goto B4d9a27;
case 0x4d9a28:c.instructions+=2;goto B4d9a28;
case 0x4d9a2d:c.instructions+=1;goto B4d9a2d;
case 0x4d9a32:goto L4d9a32;
case 0x4d9a35:c.instructions+=5;goto B4d9a35;
case 0x4d9a36:c.instructions+=4;goto B4d9a36;
case 0x4d9a3b:c.instructions+=3;goto B4d9a3b;
case 0x4d9a3d:c.instructions+=2;goto B4d9a3d;
case 0x4d9a3e:c.instructions+=1;goto B4d9a3e;
case 0x4d9a43:goto L4d9a43;
case 0x4d9a48:c.instructions+=4;goto B4d9a48;
case 0x4d9a4b:c.instructions+=3;goto B4d9a4b;
case 0x4d9a50:c.instructions+=2;goto B4d9a50;
case 0x4d9a51:c.instructions+=1;goto B4d9a51;
case 0x4d9a56:goto L4d9a56;
case 0x4d9a59:c.instructions+=15;goto B4d9a59;
case 0x4d9a5e:c.instructions+=14;goto B4d9a5e;
case 0x4d9a62:c.instructions+=13;goto B4d9a62;
case 0x4d9a66:c.instructions+=12;goto B4d9a66;
case 0x4d9a69:c.instructions+=11;goto B4d9a69;
case 0x4d9a6c:c.instructions+=10;goto B4d9a6c;
case 0x4d9a6f:c.instructions+=9;goto B4d9a6f;
case 0x4d9a72:c.instructions+=8;goto B4d9a72;
case 0x4d9a76:c.instructions+=7;goto B4d9a76;
case 0x4d9a79:c.instructions+=6;goto B4d9a79;
case 0x4d9a7e:c.instructions+=5;goto B4d9a7e;
case 0x4d9a81:c.instructions+=4;goto B4d9a81;
case 0x4d9a83:c.instructions+=3;goto B4d9a83;
case 0x4d9a87:c.instructions+=2;goto B4d9a87;
case 0x4d9a8b:c.instructions+=1;goto B4d9a8b;
case 0x4d9a8d:goto L4d9a8d;
case 0x4d9a90:c.instructions+=3;goto B4d9a90;
case 0x4d9a94:c.instructions+=2;goto B4d9a94;
case 0x4d9a95:c.instructions+=1;goto B4d9a95;
case 0x4d9a9a:goto L4d9a9a;
case 0x4d9a9b:c.instructions+=4;goto B4d9a9b;
case 0x4d9a9c:c.instructions+=3;goto B4d9a9c;
case 0x4d9a9d:c.instructions+=2;goto B4d9a9d;
case 0x4d9aa0:c.instructions+=1;goto B4d9aa0;
case 0x4d9ab0:goto L4d9ab0;
case 0x4d9ab1:c.instructions+=9;goto B4d9ab1;
case 0x4d9ab6:c.instructions+=8;goto B4d9ab6;
case 0x4d9ab7:c.instructions+=7;goto B4d9ab7;
case 0x4d9ab8:c.instructions+=6;goto B4d9ab8;
case 0x4d9ab9:c.instructions+=5;goto B4d9ab9;
case 0x4d9abb:c.instructions+=4;goto B4d9abb;
case 0x4d9abc:c.instructions+=3;goto B4d9abc;
case 0x4d9ac1:c.instructions+=2;goto B4d9ac1;
case 0x4d9ac5:c.instructions+=1;goto B4d9ac5;
case 0x4d9aca:goto L4d9aca;
case 0x4d9ad0:c.instructions+=4;goto B4d9ad0;
case 0x4d9ad4:c.instructions+=3;goto B4d9ad4;
case 0x4d9ad6:c.instructions+=2;goto B4d9ad6;
case 0x4d9ad8:c.instructions+=1;goto B4d9ad8;
case 0x4d9ada:goto L4d9ada;
case 0x4d9add:c.instructions+=6;goto B4d9add;
case 0x4d9ae3:c.instructions+=5;goto B4d9ae3;
case 0x4d9ae6:c.instructions+=4;goto B4d9ae6;
case 0x4d9aec:c.instructions+=3;goto B4d9aec;
case 0x4d9aef:c.instructions+=2;goto B4d9aef;
case 0x4d9af5:c.instructions+=1;goto B4d9af5;
case 0x4d9af8:goto L4d9af8;
case 0x4d9afb:c.instructions+=5;goto B4d9afb;
case 0x4d9afe:c.instructions+=4;goto B4d9afe;
case 0x4d9aff:c.instructions+=3;goto B4d9aff;
case 0x4d9b00:c.instructions+=2;goto B4d9b00;
case 0x4d9b01:c.instructions+=1;goto B4d9b01;
case 0x4d9b06:goto L4d9b06;
case 0x4d9b07:c.instructions+=4;goto B4d9b07;
case 0x4d9b0a:c.instructions+=3;goto B4d9b0a;
case 0x4d9b0f:c.instructions+=2;goto B4d9b0f;
case 0x4d9b10:c.instructions+=1;goto B4d9b10;
case 0x4d9b15:goto L4d9b15;
case 0x4d9b17:c.instructions+=3;goto B4d9b17;
case 0x4d9b18:c.instructions+=2;goto B4d9b18;
case 0x4d9b1d:c.instructions+=1;goto B4d9b1d;
case 0x4d9b22:goto L4d9b22;
case 0x4d9b25:c.instructions+=4;goto B4d9b25;
case 0x4d9b28:c.instructions+=3;goto B4d9b28;
case 0x4d9b2a:c.instructions+=2;goto B4d9b2a;
case 0x4d9b2c:c.instructions+=1;goto B4d9b2c;
case 0x4d9b31:goto L4d9b31;
case 0x4d9b34:c.instructions+=7;goto B4d9b34;
case 0x4d9b37:c.instructions+=6;goto B4d9b37;
case 0x4d9b3a:c.instructions+=5;goto B4d9b3a;
case 0x4d9b41:c.instructions+=4;goto B4d9b41;
case 0x4d9b45:c.instructions+=3;goto B4d9b45;
case 0x4d9b48:c.instructions+=2;goto B4d9b48;
case 0x4d9b4e:c.instructions+=1;goto B4d9b4e;
case 0x4d9b50:goto L4d9b50;
case 0x4d9b54:c.instructions+=11;goto B4d9b54;
case 0x4d9b57:c.instructions+=10;goto B4d9b57;
case 0x4d9b59:c.instructions+=9;goto B4d9b59;
case 0x4d9b5b:c.instructions+=8;goto B4d9b5b;
case 0x4d9b61:c.instructions+=7;goto B4d9b61;
case 0x4d9b64:c.instructions+=6;goto B4d9b64;
case 0x4d9b65:c.instructions+=5;goto B4d9b65;
case 0x4d9b66:c.instructions+=4;goto B4d9b66;
case 0x4d9b68:c.instructions+=3;goto B4d9b68;
case 0x4d9b69:c.instructions+=2;goto B4d9b69;
case 0x4d9b6c:c.instructions+=1;goto B4d9b6c;
case 0x4d9b71:goto L4d9b71;
case 0x4d9b72:c.instructions+=5;goto B4d9b72;
case 0x4d9b73:c.instructions+=4;goto B4d9b73;
case 0x4d9b74:c.instructions+=3;goto B4d9b74;
case 0x4d9b75:c.instructions+=2;goto B4d9b75;
case 0x4d9b76:c.instructions+=1;goto B4d9b76;
case 0x4d9b80:goto L4d9b80;
case 0x4d9b81:c.instructions+=5;goto B4d9b81;
case 0x4d9b82:c.instructions+=4;goto B4d9b82;
case 0x4d9b84:c.instructions+=3;goto B4d9b84;
case 0x4d9b85:c.instructions+=2;goto B4d9b85;
case 0x4d9b8a:c.instructions+=1;goto B4d9b8a;
case 0x4d9b8f:goto L4d9b8f;
case 0x4d9b95:c.instructions+=4;goto B4d9b95;
case 0x4d9b99:c.instructions+=3;goto B4d9b99;
case 0x4d9b9b:c.instructions+=2;goto B4d9b9b;
case 0x4d9b9d:c.instructions+=1;goto B4d9b9d;
case 0x4d9b9f:goto L4d9b9f;
case 0x4d9ba2:c.instructions+=6;goto B4d9ba2;
case 0x4d9ba8:c.instructions+=5;goto B4d9ba8;
case 0x4d9bab:c.instructions+=4;goto B4d9bab;
case 0x4d9bb1:c.instructions+=3;goto B4d9bb1;
case 0x4d9bb4:c.instructions+=2;goto B4d9bb4;
case 0x4d9bba:c.instructions+=1;goto B4d9bba;
case 0x4d9bbd:goto L4d9bbd;
case 0x4d9bc0:c.instructions+=2;goto B4d9bc0;
case 0x4d9bc3:c.instructions+=1;goto B4d9bc3;
case 0x4d9bc5:goto L4d9bc5;
case 0x4d9bc8:c.instructions+=4;goto B4d9bc8;
case 0x4d9bc9:c.instructions+=3;goto B4d9bc9;
case 0x4d9bca:c.instructions+=2;goto B4d9bca;
case 0x4d9bcb:c.instructions+=1;goto B4d9bcb;
case 0x4d9bd0:goto L4d9bd0;
case 0x4d9bd1:c.instructions+=4;goto B4d9bd1;
case 0x4d9bd4:c.instructions+=3;goto B4d9bd4;
case 0x4d9bd9:c.instructions+=2;goto B4d9bd9;
case 0x4d9bda:c.instructions+=1;goto B4d9bda;
case 0x4d9bdf:goto L4d9bdf;
case 0x4d9be2:goto L4d9be2;
case 0x4d9be4:c.instructions+=3;goto B4d9be4;
case 0x4d9be5:c.instructions+=2;goto B4d9be5;
case 0x4d9bea:c.instructions+=1;goto B4d9bea;
case 0x4d9bef:goto L4d9bef;
case 0x4d9bf2:c.instructions+=3;goto B4d9bf2;
case 0x4d9bf4:c.instructions+=2;goto B4d9bf4;
case 0x4d9bf5:c.instructions+=1;goto B4d9bf5;
case 0x4d9bfa:goto L4d9bfa;
case 0x4d9bfd:c.instructions+=6;goto B4d9bfd;
case 0x4d9c00:c.instructions+=5;goto B4d9c00;
case 0x4d9c01:c.instructions+=4;goto B4d9c01;
case 0x4d9c02:c.instructions+=3;goto B4d9c02;
case 0x4d9c07:c.instructions+=2;goto B4d9c07;
case 0x4d9c0a:c.instructions+=1;goto B4d9c0a;
case 0x4d9c0f:goto L4d9c0f;
case 0x4d9c12:c.instructions+=11;goto B4d9c12;
case 0x4d9c15:c.instructions+=10;goto B4d9c15;
case 0x4d9c1b:c.instructions+=9;goto B4d9c1b;
case 0x4d9c1e:c.instructions+=8;goto B4d9c1e;
case 0x4d9c21:c.instructions+=7;goto B4d9c21;
case 0x4d9c24:c.instructions+=6;goto B4d9c24;
case 0x4d9c27:c.instructions+=5;goto B4d9c27;
case 0x4d9c2e:c.instructions+=4;goto B4d9c2e;
case 0x4d9c32:c.instructions+=3;goto B4d9c32;
case 0x4d9c35:c.instructions+=2;goto B4d9c35;
case 0x4d9c3b:c.instructions+=1;goto B4d9c3b;
case 0x4d9c3d:goto L4d9c3d;
case 0x4d9c40:c.instructions+=9;goto B4d9c40;
case 0x4d9c43:c.instructions+=8;goto B4d9c43;
case 0x4d9c46:c.instructions+=7;goto B4d9c46;
case 0x4d9c47:c.instructions+=6;goto B4d9c47;
case 0x4d9c48:c.instructions+=5;goto B4d9c48;
case 0x4d9c4b:c.instructions+=4;goto B4d9c4b;
case 0x4d9c4c:c.instructions+=3;goto B4d9c4c;
case 0x4d9c4f:c.instructions+=2;goto B4d9c4f;
case 0x4d9c50:c.instructions+=1;goto B4d9c50;
case 0x4d9c55:goto L4d9c55;
case 0x4d9c56:c.instructions+=3;goto B4d9c56;
case 0x4d9c57:c.instructions+=2;goto B4d9c57;
case 0x4d9c58:c.instructions+=1;goto B4d9c58;
case 0x4d9c60:goto L4d9c60;
case 0x4d9c61:c.instructions+=11;goto B4d9c61;
case 0x4d9c62:c.instructions+=10;goto B4d9c62;
case 0x4d9c64:c.instructions+=9;goto B4d9c64;
case 0x4d9c67:c.instructions+=8;goto B4d9c67;
case 0x4d9c6a:c.instructions+=7;goto B4d9c6a;
case 0x4d9c6d:c.instructions+=6;goto B4d9c6d;
case 0x4d9c6e:c.instructions+=5;goto B4d9c6e;
case 0x4d9c6f:c.instructions+=4;goto B4d9c6f;
case 0x4d9c70:c.instructions+=3;goto B4d9c70;
case 0x4d9c73:c.instructions+=2;goto B4d9c73;
case 0x4d9c74:c.instructions+=1;goto B4d9c74;
case 0x4d9c79:goto L4d9c79;
case 0x4d9c7e:c.instructions+=3;goto B4d9c7e;
case 0x4d9c80:c.instructions+=2;goto B4d9c80;
case 0x4d9c83:c.instructions+=1;goto B4d9c83;
case 0x4d9c88:goto L4d9c88;
case 0x4d9c89:c.instructions+=2;goto B4d9c89;
case 0x4d9c8a:c.instructions+=1;goto B4d9c8a;
case 0x4d9c8f:goto L4d9c8f;
case 0x4d9c90:c.instructions+=1;goto B4d9c90;
case 0x4d9c95:goto L4d9c95;
case 0x4d9c9a:c.instructions+=6;goto B4d9c9a;
case 0x4d9c9d:c.instructions+=5;goto B4d9c9d;
case 0x4d9c9f:c.instructions+=4;goto B4d9c9f;
case 0x4d9ca3:c.instructions+=3;goto B4d9ca3;
case 0x4d9ca4:c.instructions+=2;goto B4d9ca4;
case 0x4d9ca5:c.instructions+=1;goto B4d9ca5;
case 0x4d9caa:goto L4d9caa;
case 0x4d9cac:c.instructions+=3;goto B4d9cac;
case 0x4d9cad:c.instructions+=2;goto B4d9cad;
case 0x4d9cb2:c.instructions+=1;goto B4d9cb2;
case 0x4d9cb7:goto L4d9cb7;
case 0x4d9cba:c.instructions+=14;goto B4d9cba;
case 0x4d9cbc:c.instructions+=13;goto B4d9cbc;
case 0x4d9cbf:c.instructions+=12;goto B4d9cbf;
case 0x4d9cc5:c.instructions+=11;goto B4d9cc5;
case 0x4d9cc8:c.instructions+=10;goto B4d9cc8;
case 0x4d9ccb:c.instructions+=9;goto B4d9ccb;
case 0x4d9cce:c.instructions+=8;goto B4d9cce;
case 0x4d9cd1:c.instructions+=7;goto B4d9cd1;
case 0x4d9cd8:c.instructions+=6;goto B4d9cd8;
case 0x4d9cdc:c.instructions+=5;goto B4d9cdc;
case 0x4d9cdf:c.instructions+=4;goto B4d9cdf;
case 0x4d9ce5:c.instructions+=3;goto B4d9ce5;
case 0x4d9ce8:c.instructions+=2;goto B4d9ce8;
case 0x4d9cea:c.instructions+=1;goto B4d9cea;
case 0x4d9cec:goto L4d9cec;
case 0x4d9cef:c.instructions+=6;goto B4d9cef;
case 0x4d9cf0:c.instructions+=5;goto B4d9cf0;
case 0x4d9cf1:c.instructions+=4;goto B4d9cf1;
case 0x4d9cf4:c.instructions+=3;goto B4d9cf4;
case 0x4d9cf5:c.instructions+=2;goto B4d9cf5;
case 0x4d9cf6:c.instructions+=1;goto B4d9cf6;
case 0x4d9cfb:goto L4d9cfb;
case 0x4d9cfc:c.instructions+=3;goto B4d9cfc;
case 0x4d9cfd:c.instructions+=2;goto B4d9cfd;
case 0x4d9cfe:c.instructions+=1;goto B4d9cfe;
case 0x4d9d00:goto L4d9d00;
case 0x4d9d05:c.instructions+=6;goto B4d9d05;
case 0x4d9d07:c.instructions+=5;goto B4d9d07;
case 0x4d9d08:c.instructions+=4;goto B4d9d08;
case 0x4d9d09:c.instructions+=3;goto B4d9d09;
case 0x4d9d0a:c.instructions+=2;goto B4d9d0a;
case 0x4d9d0c:c.instructions+=1;goto B4d9d0c;
case 0x4d9d0e:goto L4d9d0e;
case 0x4d9d10:c.instructions+=3;goto B4d9d10;
case 0x4d9d12:c.instructions+=2;goto B4d9d12;
case 0x4d9d14:c.instructions+=1;goto B4d9d14;
case 0x4d9d19:goto L4d9d19;
case 0x4d9d1c:goto L4d9d1c;
case 0x4d9d20:c.instructions+=3;goto B4d9d20;
case 0x4d9d21:c.instructions+=2;goto B4d9d21;
case 0x4d9d24:c.instructions+=1;goto B4d9d24;
case 0x4d9d29:goto L4d9d29;
case 0x4d9d2c:c.instructions+=9;goto B4d9d2c;
case 0x4d9d32:c.instructions+=8;goto B4d9d32;
case 0x4d9d35:c.instructions+=7;goto B4d9d35;
case 0x4d9d38:c.instructions+=6;goto B4d9d38;
case 0x4d9d3a:c.instructions+=5;goto B4d9d3a;
case 0x4d9d3c:c.instructions+=4;goto B4d9d3c;
case 0x4d9d3e:c.instructions+=3;goto B4d9d3e;
case 0x4d9d41:c.instructions+=2;goto B4d9d41;
case 0x4d9d43:c.instructions+=1;goto B4d9d43;
case 0x4d9d45:goto L4d9d45;
case 0x4d9d4a:c.instructions+=1;goto B4d9d4a;
case 0x4d9d4f:goto L4d9d4f;
case 0x4d9d51:c.instructions+=8;goto B4d9d51;
case 0x4d9d57:c.instructions+=7;goto B4d9d57;
case 0x4d9d5a:c.instructions+=6;goto B4d9d5a;
case 0x4d9d5d:c.instructions+=5;goto B4d9d5d;
case 0x4d9d5e:c.instructions+=4;goto B4d9d5e;
case 0x4d9d5f:c.instructions+=3;goto B4d9d5f;
case 0x4d9d64:c.instructions+=2;goto B4d9d64;
case 0x4d9d65:c.instructions+=1;goto B4d9d65;
case 0x4d9d6a:goto L4d9d6a;
case 0x4d9d6f:c.instructions+=7;goto B4d9d6f;
case 0x4d9d72:c.instructions+=6;goto B4d9d72;
case 0x4d9d73:c.instructions+=5;goto B4d9d73;
case 0x4d9d74:c.instructions+=4;goto B4d9d74;
case 0x4d9d75:c.instructions+=3;goto B4d9d75;
case 0x4d9d78:c.instructions+=2;goto B4d9d78;
case 0x4d9d79:c.instructions+=1;goto B4d9d79;
case 0x4d9d7c:goto L4d9d7c;
case 0x4d9d7e:c.instructions+=1;goto B4d9d7e;
case 0x4d9d80:goto L4d9d80;
case 0x4d9d82:c.instructions+=8;goto B4d9d82;
case 0x4d9d85:c.instructions+=7;goto B4d9d85;
case 0x4d9d88:c.instructions+=6;goto B4d9d88;
case 0x4d9d8a:c.instructions+=5;goto B4d9d8a;
case 0x4d9d8d:c.instructions+=4;goto B4d9d8d;
case 0x4d9d8e:c.instructions+=3;goto B4d9d8e;
case 0x4d9d90:c.instructions+=2;goto B4d9d90;
case 0x4d9d91:c.instructions+=1;goto B4d9d91;
case 0x4d9d96:goto L4d9d96;
case 0x4d9d9b:c.instructions+=4;goto B4d9d9b;
case 0x4d9d9e:c.instructions+=3;goto B4d9d9e;
case 0x4d9da1:c.instructions+=2;goto B4d9da1;
case 0x4d9da2:c.instructions+=1;goto B4d9da2;
case 0x4d9da5:goto L4d9da5;
case 0x4d9da6:c.instructions+=3;goto B4d9da6;
case 0x4d9da7:c.instructions+=2;goto B4d9da7;
case 0x4d9da8:c.instructions+=1;goto B4d9da8;
case 0x4d9db0:goto L4d9db0;
case 0x4d9db3:c.instructions+=3;goto B4d9db3;
case 0x4d9db4:c.instructions+=2;goto B4d9db4;
case 0x4d9db9:c.instructions+=1;goto B4d9db9;
case 0x4d9dbe:goto L4d9dbe;
case 0x4d9dc0:c.instructions+=36;goto B4d9dc0;
case 0x4d9dc6:c.instructions+=35;goto B4d9dc6;
case 0x4d9dca:c.instructions+=34;goto B4d9dca;
case 0x4d9dd0:c.instructions+=33;goto B4d9dd0;
case 0x4d9dd6:c.instructions+=32;goto B4d9dd6;
case 0x4d9ddc:c.instructions+=31;goto B4d9ddc;
case 0x4d9de0:c.instructions+=30;goto B4d9de0;
case 0x4d9de4:c.instructions+=29;goto B4d9de4;
case 0x4d9de7:c.instructions+=28;goto B4d9de7;
case 0x4d9deb:c.instructions+=27;goto B4d9deb;
case 0x4d9dee:c.instructions+=26;goto B4d9dee;
case 0x4d9df2:c.instructions+=25;goto B4d9df2;
case 0x4d9df4:c.instructions+=24;goto B4d9df4;
case 0x4d9df5:c.instructions+=23;goto B4d9df5;
case 0x4d9df8:c.instructions+=22;goto B4d9df8;
case 0x4d9dfc:c.instructions+=21;goto B4d9dfc;
case 0x4d9e00:c.instructions+=20;goto B4d9e00;
case 0x4d9e04:c.instructions+=19;goto B4d9e04;
case 0x4d9e08:c.instructions+=18;goto B4d9e08;
case 0x4d9e0c:c.instructions+=17;goto B4d9e0c;
case 0x4d9e10:c.instructions+=16;goto B4d9e10;
case 0x4d9e14:c.instructions+=15;goto B4d9e14;
case 0x4d9e18:c.instructions+=14;goto B4d9e18;
case 0x4d9e1c:c.instructions+=13;goto B4d9e1c;
case 0x4d9e20:c.instructions+=12;goto B4d9e20;
case 0x4d9e28:c.instructions+=11;goto B4d9e28;
case 0x4d9e2c:c.instructions+=10;goto B4d9e2c;
case 0x4d9e30:c.instructions+=9;goto B4d9e30;
case 0x4d9e34:c.instructions+=8;goto B4d9e34;
case 0x4d9e38:c.instructions+=7;goto B4d9e38;
case 0x4d9e3c:c.instructions+=6;goto B4d9e3c;
case 0x4d9e40:c.instructions+=5;goto B4d9e40;
case 0x4d9e44:c.instructions+=4;goto B4d9e44;
case 0x4d9e48:c.instructions+=3;goto B4d9e48;
case 0x4d9e4c:c.instructions+=2;goto B4d9e4c;
case 0x4d9e50:c.instructions+=1;goto B4d9e50;
case 0x4d9e56:goto L4d9e56;
case 0x4d9e5d:goto L4d9e5d;
case 0x4d9e61:c.instructions+=5;goto B4d9e61;
case 0x4d9e62:c.instructions+=4;goto B4d9e62;
case 0x4d9e63:c.instructions+=3;goto B4d9e63;
case 0x4d9e64:c.instructions+=2;goto B4d9e64;
case 0x4d9e69:c.instructions+=1;goto B4d9e69;
case 0x4d9e6e:goto L4d9e6e;
case 0x4d9e6f:c.instructions+=1;goto B4d9e6f;
case 0x4d9e74:goto L4d9e74;
case 0x4d9e77:c.instructions+=3;goto B4d9e77;
case 0x4d9e78:c.instructions+=2;goto B4d9e78;
case 0x4d9e7b:c.instructions+=1;goto B4d9e7b;
case 0x4d9e7c:goto L4d9e7c;
case 0x4d9e81:c.instructions+=1;goto B4d9e81;
case 0x4d9e86:goto L4d9e86;
case 0x4d9e87:c.instructions+=1;goto B4d9e87;
case 0x4d9e8c:goto L4d9e8c;
case 0x4d9e8f:c.instructions+=3;goto B4d9e8f;
case 0x4d9e90:c.instructions+=2;goto B4d9e90;
case 0x4d9e93:c.instructions+=1;goto B4d9e93;
case 0x4d9e94:goto L4d9e94;
case 0x4d9e97:c.instructions+=8;goto B4d9e97;
case 0x4d9e99:c.instructions+=7;goto B4d9e99;
case 0x4d9e9b:c.instructions+=6;goto B4d9e9b;
case 0x4d9e9f:c.instructions+=5;goto B4d9e9f;
case 0x4d9ea2:c.instructions+=4;goto B4d9ea2;
case 0x4d9ea5:c.instructions+=3;goto B4d9ea5;
case 0x4d9ea6:c.instructions+=2;goto B4d9ea6;
case 0x4d9eab:c.instructions+=1;goto B4d9eab;
case 0x4d9eb0:goto L4d9eb0;
case 0x4d9eb1:c.instructions+=1;goto B4d9eb1;
case 0x4d9eb6:goto L4d9eb6;
case 0x4d9eb9:c.instructions+=3;goto B4d9eb9;
case 0x4d9eba:c.instructions+=2;goto B4d9eba;
case 0x4d9ebd:c.instructions+=1;goto B4d9ebd;
case 0x4d9ebe:goto L4d9ebe;
case 0x4d9ec4:c.instructions+=1;goto B4d9ec4;
case 0x4d9eca:goto L4d9eca;
case 0x4d9ecc:c.instructions+=3;goto B4d9ecc;
case 0x4d9ece:c.instructions+=2;goto B4d9ece;
case 0x4d9ed0:c.instructions+=1;goto B4d9ed0;
case 0x4d9ed5:goto L4d9ed5;
case 0x4d9ed8:c.instructions+=2;goto B4d9ed8;
case 0x4d9ed9:c.instructions+=1;goto B4d9ed9;
case 0x4d9ede:goto L4d9ede;
case 0x4d9ee1:c.instructions+=3;goto B4d9ee1;
case 0x4d9ee2:c.instructions+=2;goto B4d9ee2;
case 0x4d9ee5:c.instructions+=1;goto B4d9ee5;
case 0x4d9ee6:goto L4d9ee6;
case 0x4d9ee7:c.instructions+=2;goto B4d9ee7;
case 0x4d9eec:c.instructions+=1;goto B4d9eec;
case 0x4d9ef1:goto L4d9ef1;
case 0x4d9ef2:c.instructions+=1;goto B4d9ef2;
case 0x4d9ef7:goto L4d9ef7;
case 0x4d9efa:c.instructions+=3;goto B4d9efa;
case 0x4d9efb:c.instructions+=2;goto B4d9efb;
case 0x4d9efe:c.instructions+=1;goto B4d9efe;
case 0x4d9eff:goto L4d9eff;
case 0x4d9f00:c.instructions+=2;goto B4d9f00;
case 0x4d9f05:c.instructions+=1;goto B4d9f05;
case 0x4d9f0a:goto L4d9f0a;
case 0x4d9f0b:c.instructions+=1;goto B4d9f0b;
case 0x4d9f10:goto L4d9f10;
case 0x4d9f13:c.instructions+=3;goto B4d9f13;
case 0x4d9f14:c.instructions+=2;goto B4d9f14;
case 0x4d9f17:c.instructions+=1;goto B4d9f17;
case 0x4d9f18:goto L4d9f18;
case 0x4d9f19:c.instructions+=2;goto B4d9f19;
case 0x4d9f1e:c.instructions+=1;goto B4d9f1e;
case 0x4d9f23:goto L4d9f23;
case 0x4d9f24:c.instructions+=1;goto B4d9f24;
case 0x4d9f29:goto L4d9f29;
case 0x4d9f2c:c.instructions+=3;goto B4d9f2c;
case 0x4d9f2d:c.instructions+=2;goto B4d9f2d;
case 0x4d9f30:c.instructions+=1;goto B4d9f30;
case 0x4d9f31:goto L4d9f31;
case 0x4d9f32:c.instructions+=2;goto B4d9f32;
case 0x4d9f37:c.instructions+=1;goto B4d9f37;
case 0x4d9f3c:goto L4d9f3c;
case 0x4d9f3d:c.instructions+=1;goto B4d9f3d;
case 0x4d9f42:goto L4d9f42;
case 0x4d9f45:c.instructions+=3;goto B4d9f45;
case 0x4d9f46:c.instructions+=2;goto B4d9f46;
case 0x4d9f49:c.instructions+=1;goto B4d9f49;
case 0x4d9f4a:goto L4d9f4a;
case 0x4d9f4f:c.instructions+=1;goto B4d9f4f;
case 0x4d9f54:goto L4d9f54;
case 0x4d9f55:c.instructions+=1;goto B4d9f55;
case 0x4d9f5a:goto L4d9f5a;
case 0x4d9f5d:c.instructions+=3;goto B4d9f5d;
case 0x4d9f5e:c.instructions+=2;goto B4d9f5e;
case 0x4d9f61:c.instructions+=1;goto B4d9f61;
case 0x4d9f62:goto L4d9f62;
case 0x4d9f66:c.instructions+=3;goto B4d9f66;
case 0x4d9f67:c.instructions+=2;goto B4d9f67;
case 0x4d9f6c:c.instructions+=1;goto B4d9f6c;
case 0x4d9f71:goto L4d9f71;
case 0x4d9f72:c.instructions+=1;goto B4d9f72;
case 0x4d9f77:goto L4d9f77;
case 0x4d9f7a:c.instructions+=3;goto B4d9f7a;
case 0x4d9f7b:c.instructions+=2;goto B4d9f7b;
case 0x4d9f7e:c.instructions+=1;goto B4d9f7e;
case 0x4d9f7f:goto L4d9f7f;
case 0x4d9f80:c.instructions+=2;goto B4d9f80;
case 0x4d9f85:c.instructions+=1;goto B4d9f85;
case 0x4d9f8a:goto L4d9f8a;
case 0x4d9f8b:c.instructions+=1;goto B4d9f8b;
case 0x4d9f90:goto L4d9f90;
case 0x4d9f93:c.instructions+=3;goto B4d9f93;
case 0x4d9f94:c.instructions+=2;goto B4d9f94;
case 0x4d9f97:c.instructions+=1;goto B4d9f97;
case 0x4d9f98:goto L4d9f98;
case 0x4d9f99:c.instructions+=2;goto B4d9f99;
case 0x4d9f9e:c.instructions+=1;goto B4d9f9e;
case 0x4d9fa3:goto L4d9fa3;
case 0x4d9fa4:c.instructions+=1;goto B4d9fa4;
case 0x4d9fa9:goto L4d9fa9;
case 0x4d9fac:c.instructions+=3;goto B4d9fac;
case 0x4d9fad:c.instructions+=2;goto B4d9fad;
case 0x4d9fb0:c.instructions+=1;goto B4d9fb0;
case 0x4d9fb1:goto L4d9fb1;
case 0x4d9fb2:c.instructions+=3;goto B4d9fb2;
case 0x4d9fb3:c.instructions+=2;goto B4d9fb3;
case 0x4d9fb8:c.instructions+=1;goto B4d9fb8;
case 0x4d9fbd:goto L4d9fbd;
case 0x4d9fbe:c.instructions+=1;goto B4d9fbe;
case 0x4d9fc3:goto L4d9fc3;
case 0x4d9fc6:c.instructions+=3;goto B4d9fc6;
case 0x4d9fc7:c.instructions+=2;goto B4d9fc7;
case 0x4d9fca:c.instructions+=1;goto B4d9fca;
case 0x4d9fcb:goto L4d9fcb;
case 0x4d9fcf:c.instructions+=3;goto B4d9fcf;
case 0x4d9fd0:c.instructions+=2;goto B4d9fd0;
case 0x4d9fd5:c.instructions+=1;goto B4d9fd5;
case 0x4d9fda:goto L4d9fda;
case 0x4d9fdb:c.instructions+=1;goto B4d9fdb;
case 0x4d9fe0:goto L4d9fe0;
case 0x4d9fe3:c.instructions+=3;goto B4d9fe3;
case 0x4d9fe4:c.instructions+=2;goto B4d9fe4;
case 0x4d9fe7:c.instructions+=1;goto B4d9fe7;
case 0x4d9fe8:goto L4d9fe8;
case 0x4d9fed:c.instructions+=1;goto B4d9fed;
case 0x4d9ff2:goto L4d9ff2;
case 0x4d9ff3:c.instructions+=1;goto B4d9ff3;
case 0x4d9ff8:goto L4d9ff8;
case 0x4d9ffb:c.instructions+=3;goto B4d9ffb;
case 0x4d9ffc:c.instructions+=2;goto B4d9ffc;
case 0x4d9fff:c.instructions+=1;goto B4d9fff;
default:missing_instruction(c.pc);}
B4d9002:L4d9002:{c.instructions+=8;NFSU2_TR(0x4d9002);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4d9007:{NFSU2_TR(0x4d9007);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4d900a:{NFSU2_TR(0x4d900a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d900b:{NFSU2_TR(0x4d900b);
}
B4d900e:{NFSU2_TR(0x4d900e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d9011:{NFSU2_TR(0x4d9011);
u8 U[4];
w4(U+0,u32(0x5fd1f82full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9016:{NFSU2_TR(0x4d9016);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9017:{NFSU2_TR(0x4d9017);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d901cull));
TAIL_STATIC(0x537a10u,537);
}
B4d901c:L4d901c:{c.instructions+=3;NFSU2_TR(0x4d901c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d901f:{NFSU2_TR(0x4d901f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9020:{NFSU2_TR(0x4d9020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9025ull));
TAIL_STATIC(0x50c900u,50c);
}
B4d9025:L4d9025:{c.instructions+=12;NFSU2_TR(0x4d9025);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9029:{NFSU2_TR(0x4d9029);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d902c:{NFSU2_TR(0x4d902c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9032:{NFSU2_TR(0x4d9032);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9038:{NFSU2_TR(0x4d9038);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d903b:{NFSU2_TR(0x4d903b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d903e:{NFSU2_TR(0x4d903e);
__builtin_memmove((R+0),(R+24),4);
}
B4d9040:{NFSU2_TR(0x4d9040);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9041:{NFSU2_TR(0x4d9041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d9042:{NFSU2_TR(0x4d9042);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9049:{NFSU2_TR(0x4d9049);
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
B4d904c:{NFSU2_TR(0x4d904c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9050:L4d9050:{c.instructions+=14;NFSU2_TR(0x4d9050);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9052:{NFSU2_TR(0x4d9052);
u8 U[4];
w4(U+0,u32(0x774b3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9057:{NFSU2_TR(0x4d9057);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d905d:{NFSU2_TR(0x4d905d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d905e:{NFSU2_TR(0x4d905e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9065:{NFSU2_TR(0x4d9065);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9066:{NFSU2_TR(0x4d9066);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9067:{NFSU2_TR(0x4d9067);
__builtin_memmove((R+24),(R+4),4);
}
B4d9069:{NFSU2_TR(0x4d9069);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d906d:{NFSU2_TR(0x4d906d);
u8 U[4];
w4(U+0,u32(0x7964f4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d9073:{NFSU2_TR(0x4d9073);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9078:{NFSU2_TR(0x4d9078);
u8 U[4];
w4(U+0,u32(0x645e01dfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d907d:{NFSU2_TR(0x4d907d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d9085:{NFSU2_TR(0x4d9085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d908aull));
TAIL_STATIC(0x55dda0u,55d);
}
B4d908a:L4d908a:{c.instructions+=2;NFSU2_TR(0x4d908a);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d908f:{NFSU2_TR(0x4d908f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9094ull));
TAIL_STATIC(0x5379a0u,537);
}
B4d9094:L4d9094:{c.instructions+=4;NFSU2_TR(0x4d9094);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d9097:{NFSU2_TR(0x4d9097);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d909a:{NFSU2_TR(0x4d909a);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d909f:{NFSU2_TR(0x4d909f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d90a4ull));
TAIL_STATIC(0x52ea90u,52e);
}
B4d90a4:L4d90a4:{c.instructions+=3;NFSU2_TR(0x4d90a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d90a7:{NFSU2_TR(0x4d90a7);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d90ac:{NFSU2_TR(0x4d90ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d90b1ull));
TAIL_STATIC(0x479100u,479);
}
B4d90b1:L4d90b1:{c.instructions+=3;NFSU2_TR(0x4d90b1);
__builtin_memmove((R+4),(R+24),4);
}
B4d90b3:{NFSU2_TR(0x4d90b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d90bb:{NFSU2_TR(0x4d90bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d90c0ull));
TAIL_STATIC(0x510d40u,510);
}
B4d90c0:L4d90c0:{c.instructions+=5;NFSU2_TR(0x4d90c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d90c4:{NFSU2_TR(0x4d90c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d90c5:{NFSU2_TR(0x4d90c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d90cc:{NFSU2_TR(0x4d90cc);
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
B4d90cf:{NFSU2_TR(0x4d90cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d90d0:L4d90d0:{c.instructions+=16;NFSU2_TR(0x4d90d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d90d1:{NFSU2_TR(0x4d90d1);
__builtin_memmove((R+20),(R+16),4);
}
B4d90d3:{NFSU2_TR(0x4d90d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4d90d6:{NFSU2_TR(0x4d90d6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d90d8:{NFSU2_TR(0x4d90d8);
u8 U[4];
w4(U+0,u32(0x77389bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d90dd:{NFSU2_TR(0x4d90dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d90e3:{NFSU2_TR(0x4d90e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d90e4:{NFSU2_TR(0x4d90e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d90eb:{NFSU2_TR(0x4d90eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8fcull))));
}
B4d90f1:{NFSU2_TR(0x4d90f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d90f4:{NFSU2_TR(0x4d90f4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d90fa:{NFSU2_TR(0x4d90fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d90fb:{NFSU2_TR(0x4d90fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d90fc:{NFSU2_TR(0x4d90fc);
__builtin_memmove((R+28),(R+4),4);
}
B4d90fe:{NFSU2_TR(0x4d90fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9101:{NFSU2_TR(0x4d9101);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d9121;}}
}
B4d9103:L4d9103:{c.instructions+=3;NFSU2_TR(0x4d9103);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d9106:{NFSU2_TR(0x4d9106);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d9108:{NFSU2_TR(0x4d9108);
if(r1(R+518)){{goto L4d910f;}}
}
B4d910a:L4d910a:{c.instructions+=2;NFSU2_TR(0x4d910a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4d910d:{NFSU2_TR(0x4d910d);
{goto L4d9111;}
}
B4d910f:L4d910f:{c.instructions+=1;NFSU2_TR(0x4d910f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d9111:L4d9111:{c.instructions+=2;NFSU2_TR(0x4d9111);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d9113:{NFSU2_TR(0x4d9113);
if(r1(R+518)){{goto L4d914c;}}
}
B4d9115:L4d9115:{c.instructions+=3;NFSU2_TR(0x4d9115);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d9118:{NFSU2_TR(0x4d9118);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d911a:{NFSU2_TR(0x4d911a);
if(r1(R+518)){{goto L4d9147;}}
}
B4d911c:L4d911c:{c.instructions+=2;NFSU2_TR(0x4d911c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4d911f:{NFSU2_TR(0x4d911f);
{goto L4d9149;}
}
B4d9121:L4d9121:{c.instructions+=2;NFSU2_TR(0x4d9121);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d9127:{NFSU2_TR(0x4d9127);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d914c;}}
}
B4d9129:L4d9129:{c.instructions+=3;NFSU2_TR(0x4d9129);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d912c:{NFSU2_TR(0x4d912c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d912e:{NFSU2_TR(0x4d912e);
if(r1(R+518)){{goto L4d9135;}}
}
B4d9130:L4d9130:{c.instructions+=2;NFSU2_TR(0x4d9130);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4d9133:{NFSU2_TR(0x4d9133);
{goto L4d9137;}
}
B4d9135:L4d9135:{c.instructions+=1;NFSU2_TR(0x4d9135);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d9137:L4d9137:{c.instructions+=2;NFSU2_TR(0x4d9137);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d9139:{NFSU2_TR(0x4d9139);
if(r1(R+518)){{goto L4d914c;}}
}
B4d913b:L4d913b:{c.instructions+=3;NFSU2_TR(0x4d913b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d913e:{NFSU2_TR(0x4d913e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d9140:{NFSU2_TR(0x4d9140);
if(r1(R+518)){{goto L4d9147;}}
}
B4d9142:L4d9142:{c.instructions+=2;NFSU2_TR(0x4d9142);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4d9145:{NFSU2_TR(0x4d9145);
{goto L4d9149;}
}
B4d9147:L4d9147:{c.instructions+=1;NFSU2_TR(0x4d9147);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d9149:L4d9149:{c.instructions+=1;NFSU2_TR(0x4d9149);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d914c:L4d914c:{c.instructions+=2;NFSU2_TR(0x4d914c);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
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
B4d914f:{NFSU2_TR(0x4d914f);
if(r1(R+518)){{goto L4d92dd;}}
}
B4d9155:L4d9155:{c.instructions+=5;NFSU2_TR(0x4d9155);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4d9158:{NFSU2_TR(0x4d9158);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d915a:{NFSU2_TR(0x4d915a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d915c:{NFSU2_TR(0x4d915c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d915d:{NFSU2_TR(0x4d915d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9162ull));
TAIL_STATIC(0x50d260u,50d);
}
B4d9162:L4d9162:{c.instructions+=3;NFSU2_TR(0x4d9162);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9163:{NFSU2_TR(0x4d9163);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9164:{NFSU2_TR(0x4d9164);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9169ull));
TAIL_STATIC(0x51de60u,51d);
}
B4d9169:L4d9169:{c.instructions+=6;NFSU2_TR(0x4d9169);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d916c:{NFSU2_TR(0x4d916c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d9172:{NFSU2_TR(0x4d9172);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x844ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9178:{NFSU2_TR(0x4d9178);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4d917b:{NFSU2_TR(0x4d917b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d917d:{NFSU2_TR(0x4d917d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d91e7;}}
}
B4d917f:L4d917f:{c.instructions+=3;NFSU2_TR(0x4d917f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4d9185:{NFSU2_TR(0x4d9185);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d918a:{NFSU2_TR(0x4d918a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d918full));
TAIL_STATIC(0x52cf60u,52c);
}
B4d918f:L4d918f:{c.instructions+=3;NFSU2_TR(0x4d918f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9192:{NFSU2_TR(0x4d9192);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d9194:{NFSU2_TR(0x4d9194);
if(r1(R+518)){{goto L4d91a5;}}
}
B4d9196:L4d9196:{c.instructions+=2;NFSU2_TR(0x4d9196);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d919b:{NFSU2_TR(0x4d919b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d91a0ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4d91a0:L4d91a0:{c.instructions+=2;NFSU2_TR(0x4d91a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d91a3:{NFSU2_TR(0x4d91a3);
{goto L4d91ca;}
}
B4d91a5:L4d91a5:{c.instructions+=2;NFSU2_TR(0x4d91a5);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d91aa:{NFSU2_TR(0x4d91aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d91afull));
TAIL_STATIC(0x52cf60u,52c);
}
B4d91af:L4d91af:{c.instructions+=3;NFSU2_TR(0x4d91af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d91b2:{NFSU2_TR(0x4d91b2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d91b4:{NFSU2_TR(0x4d91b4);
if(r1(R+518)){{goto L4d91d6;}}
}
B4d91b6:L4d91b6:{c.instructions+=2;NFSU2_TR(0x4d91b6);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d91bb:{NFSU2_TR(0x4d91bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d91c0ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4d91c0:L4d91c0:{c.instructions+=3;NFSU2_TR(0x4d91c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d91c3:{NFSU2_TR(0x4d91c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d91c5:{NFSU2_TR(0x4d91c5);
if(r1(R+518)){{goto L4d91d6;}}
}
B4d91c7:L4d91c7:{c.instructions+=1;NFSU2_TR(0x4d91c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d91ca:L4d91ca:{c.instructions+=2;NFSU2_TR(0x4d91ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d91cc:{NFSU2_TR(0x4d91cc);
if(r1(R+518)){{goto L4d91d6;}}
}
B4d91ce:L4d91ce:{c.instructions+=3;NFSU2_TR(0x4d91ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d91cf:{NFSU2_TR(0x4d91cf);
__builtin_memmove((R+4),(R+0),4);
}
B4d91d1:{NFSU2_TR(0x4d91d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d91d6ull));
TAIL_STATIC(0x4a5ee0u,4a5);
}
B4d91d6:L4d91d6:{c.instructions+=3;NFSU2_TR(0x4d91d6);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4d91dc:{NFSU2_TR(0x4d91dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d91e2:{NFSU2_TR(0x4d91e2);
{goto L4d92c4;}
}
B4d91e7:L4d91e7:{c.instructions+=2;NFSU2_TR(0x4d91e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d91eb:{NFSU2_TR(0x4d91eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d91f0ull));
TAIL_STATIC(0x40c910u,40c);
}
B4d91f0:L4d91f0:{c.instructions+=10;NFSU2_TR(0x4d91f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d91f3:{NFSU2_TR(0x4d91f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d91f9:{NFSU2_TR(0x4d91f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d91ff:{NFSU2_TR(0x4d91ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9201:{NFSU2_TR(0x4d9201);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9203:{NFSU2_TR(0x4d9203);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9205:{NFSU2_TR(0x4d9205);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9206:{NFSU2_TR(0x4d9206);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d920a:{NFSU2_TR(0x4d920a);
u8 U[8];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d9215:{NFSU2_TR(0x4d9215);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d921aull));
TAIL_STATIC(0x610270u,610);
}
B4d921a:L4d921a:{c.instructions+=3;NFSU2_TR(0x4d921a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d921c:{NFSU2_TR(0x4d921c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d9220:{NFSU2_TR(0x4d9220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9225ull));
TAIL_STATIC(0x61c280u,61c);
}
B4d9225:L4d9225:{c.instructions+=2;NFSU2_TR(0x4d9225);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d9229:{NFSU2_TR(0x4d9229);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d922eull));
TAIL_STATIC(0x637190u,637);
}
B4d922e:L4d922e:{c.instructions+=2;NFSU2_TR(0x4d922e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d9232:{NFSU2_TR(0x4d9232);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9237ull));
TAIL_STATIC(0x6371e0u,637);
}
B4d9237:L4d9237:{c.instructions+=2;NFSU2_TR(0x4d9237);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d923c:{NFSU2_TR(0x4d923c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9241ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4d9241:L4d9241:{c.instructions+=3;NFSU2_TR(0x4d9241);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9244:{NFSU2_TR(0x4d9244);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d9246:{NFSU2_TR(0x4d9246);
if(r1(R+518)){{goto L4d9259;}}
}
B4d9248:L4d9248:{c.instructions+=2;NFSU2_TR(0x4d9248);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d924d:{NFSU2_TR(0x4d924d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9252ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4d9252:L4d9252:{c.instructions+=3;NFSU2_TR(0x4d9252);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9255:{NFSU2_TR(0x4d9255);
__builtin_memmove((R+24),(R+0),4);
}
B4d9257:{NFSU2_TR(0x4d9257);
{goto L4d9282;}
}
B4d9259:L4d9259:{c.instructions+=2;NFSU2_TR(0x4d9259);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d925e:{NFSU2_TR(0x4d925e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9263ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4d9263:L4d9263:{c.instructions+=3;NFSU2_TR(0x4d9263);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9266:{NFSU2_TR(0x4d9266);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d9268:{NFSU2_TR(0x4d9268);
if(r1(R+518)){{goto L4d9280;}}
}
B4d926a:L4d926a:{c.instructions+=2;NFSU2_TR(0x4d926a);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d926f:{NFSU2_TR(0x4d926f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9274ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4d9274:L4d9274:{c.instructions+=3;NFSU2_TR(0x4d9274);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9277:{NFSU2_TR(0x4d9277);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d9279:{NFSU2_TR(0x4d9279);
if(r1(R+518)){{goto L4d9280;}}
}
B4d927b:L4d927b:{c.instructions+=2;NFSU2_TR(0x4d927b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4d927e:{NFSU2_TR(0x4d927e);
{goto L4d9282;}
}
B4d9280:L4d9280:{c.instructions+=1;NFSU2_TR(0x4d9280);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4d9282:L4d9282:{c.instructions+=4;NFSU2_TR(0x4d9282);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d9286:{NFSU2_TR(0x4d9286);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9287:{NFSU2_TR(0x4d9287);
w4(R+4,u32(0x8371b0ull));
}
B4d928c:{NFSU2_TR(0x4d928c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9291ull));
TAIL_STATIC(0x413440u,413);
}
B4d9291:L4d9291:{c.instructions+=3;NFSU2_TR(0x4d9291);
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
B4d9293:{NFSU2_TR(0x4d9293);
s4(0x83623c,u32(0x1ull));
}
B4d929d:{NFSU2_TR(0x4d929d);
if(r1(R+518)){{goto L4d92ad;}}
}
B4d929f:L4d929f:{c.instructions+=4;NFSU2_TR(0x4d929f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d92a1:{NFSU2_TR(0x4d92a1);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d92a6:{NFSU2_TR(0x4d92a6);
__builtin_memmove((R+4),(R+24),4);
}
B4d92a8:{NFSU2_TR(0x4d92a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d92adull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4d92ad:L4d92ad:{c.instructions+=3;NFSU2_TR(0x4d92ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d92b4:{NFSU2_TR(0x4d92b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d92bf:{NFSU2_TR(0x4d92bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d92c4ull));
TAIL_STATIC(0x4022c0u,402);
}
B4d92c4:L4d92c4:{c.instructions+=2;NFSU2_TR(0x4d92c4);
__builtin_memmove((R+4),(R+28),4);
}
B4d92c6:{NFSU2_TR(0x4d92c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d92cbull));
TAIL_STATIC(0x4a7a50u,4a7);
}
B4d92cb:L4d92cb:{c.instructions+=5;NFSU2_TR(0x4d92cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d92ce:{NFSU2_TR(0x4d92ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d92d4:{NFSU2_TR(0x4d92d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d92d5:{NFSU2_TR(0x4d92d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d92d8:{NFSU2_TR(0x4d92d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d92ddull));
TAIL_STATIC(0x538700u,538);
}
B4d92dd:L4d92dd:{c.instructions+=7;NFSU2_TR(0x4d92dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d92e4:{NFSU2_TR(0x4d92e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d92e5:{NFSU2_TR(0x4d92e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d92ec:{NFSU2_TR(0x4d92ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d92ed:{NFSU2_TR(0x4d92ed);
__builtin_memmove((R+16),(R+20),4);
}
B4d92ef:{NFSU2_TR(0x4d92ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d92f0:{NFSU2_TR(0x4d92f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9300:L4d9300:{c.instructions+=8;NFSU2_TR(0x4d9300);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9301:{NFSU2_TR(0x4d9301);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9302:{NFSU2_TR(0x4d9302);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9303:{NFSU2_TR(0x4d9303);
__builtin_memmove((R+24),(R+4),4);
}
B4d9305:{NFSU2_TR(0x4d9305);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d9308:{NFSU2_TR(0x4d9308);
u8 U[4];
w4(U+0,u32(0x6c839fbeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d930d:{NFSU2_TR(0x4d930d);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9312:{NFSU2_TR(0x4d9312);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9317ull));
TAIL_STATIC(0x505450u,505);
}
B4d9317:L4d9317:{c.instructions+=3;NFSU2_TR(0x4d9317);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9318:{NFSU2_TR(0x4d9318);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9319:{NFSU2_TR(0x4d9319);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d931eull));
TAIL_STATIC(0x537a10u,537);
}
B4d931e:L4d931e:{c.instructions+=3;NFSU2_TR(0x4d931e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d9321:{NFSU2_TR(0x4d9321);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9322:{NFSU2_TR(0x4d9322);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9327ull));
TAIL_STATIC(0x50c900u,50c);
}
B4d9327:L4d9327:{c.instructions+=5;NFSU2_TR(0x4d9327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d932a:{NFSU2_TR(0x4d932a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d932d:{NFSU2_TR(0x4d932d);
u8 U[4];
w4(U+0,u32(0x933dd695ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9332:{NFSU2_TR(0x4d9332);
u8 U[4];
w4(U+0,u32(0x7955e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9337:{NFSU2_TR(0x4d9337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d933cull));
TAIL_STATIC(0x505450u,505);
}
B4d933c:L4d933c:{c.instructions+=3;NFSU2_TR(0x4d933c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d933d:{NFSU2_TR(0x4d933d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d933e:{NFSU2_TR(0x4d933e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9343ull));
TAIL_STATIC(0x537a10u,537);
}
B4d9343:L4d9343:{c.instructions+=3;NFSU2_TR(0x4d9343);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d9346:{NFSU2_TR(0x4d9346);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9347:{NFSU2_TR(0x4d9347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d934cull));
TAIL_STATIC(0x50c900u,50c);
}
B4d934c:L4d934c:{c.instructions+=5;NFSU2_TR(0x4d934c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d934f:{NFSU2_TR(0x4d934f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d9352:{NFSU2_TR(0x4d9352);
u8 U[4];
w4(U+0,u32(0x8202c364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9357:{NFSU2_TR(0x4d9357);
u8 U[4];
w4(U+0,u32(0x7955d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d935c:{NFSU2_TR(0x4d935c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9361ull));
TAIL_STATIC(0x505450u,505);
}
B4d9361:L4d9361:{c.instructions+=3;NFSU2_TR(0x4d9361);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9362:{NFSU2_TR(0x4d9362);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9363:{NFSU2_TR(0x4d9363);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9368ull));
TAIL_STATIC(0x537a10u,537);
}
B4d9368:L4d9368:{c.instructions+=3;NFSU2_TR(0x4d9368);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d936b:{NFSU2_TR(0x4d936b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d936c:{NFSU2_TR(0x4d936c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9371ull));
TAIL_STATIC(0x50c900u,50c);
}
B4d9371:L4d9371:{c.instructions+=5;NFSU2_TR(0x4d9371);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B4d9376:{NFSU2_TR(0x4d9376);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d9379:{NFSU2_TR(0x4d9379);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d937b:{NFSU2_TR(0x4d937b);
__builtin_memmove((R+4),(R+24),4);
}
B4d937d:{NFSU2_TR(0x4d937d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d9386;}}
}
B4d937f:L4d937f:{c.instructions+=1;NFSU2_TR(0x4d937f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9384ull));
TAIL_STATIC(0x4c2900u,4c2);
}
B4d9384:L4d9384:{c.instructions+=1;NFSU2_TR(0x4d9384);
{goto L4d938b;}
}
B4d9386:L4d9386:{c.instructions+=1;NFSU2_TR(0x4d9386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d938bull));
TAIL_STATIC(0x4c2bd0u,4c2);
}
B4d938b:L4d938b:{c.instructions+=4;NFSU2_TR(0x4d938b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d938e:{NFSU2_TR(0x4d938e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9390:{NFSU2_TR(0x4d9390);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9391:{NFSU2_TR(0x4d9391);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9396ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4d9396:L4d9396:{c.instructions+=5;NFSU2_TR(0x4d9396);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d9399:{NFSU2_TR(0x4d9399);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d939c:{NFSU2_TR(0x4d939c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d939f:{NFSU2_TR(0x4d939f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d93a0:{NFSU2_TR(0x4d93a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d93a5ull));
TAIL_STATIC(0x50b8a0u,50b);
}
B4d93a5:L4d93a5:{c.instructions+=4;NFSU2_TR(0x4d93a5);
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
B4d93a8:{NFSU2_TR(0x4d93a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d93a9:{NFSU2_TR(0x4d93a9);
__builtin_memmove((R+4),(R+28),4);
}
B4d93ab:{NFSU2_TR(0x4d93ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d93aeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4d93ae:L4d93ae:{c.instructions+=3;NFSU2_TR(0x4d93ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4d93b0:{NFSU2_TR(0x4d93b0);
__builtin_memmove((R+4),(R+28),4);
}
B4d93b2:{NFSU2_TR(0x4d93b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d93b5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4d93b5:L4d93b5:{c.instructions+=6;NFSU2_TR(0x4d93b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4d93b7:{NFSU2_TR(0x4d93b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d93b8:{NFSU2_TR(0x4d93b8);
__builtin_memmove((R+4),(R+24),4);
}
B4d93ba:{NFSU2_TR(0x4d93ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d93bb:{NFSU2_TR(0x4d93bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d93bc:{NFSU2_TR(0x4d93bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4d93c0:L4d93c0:{c.instructions+=13;NFSU2_TR(0x4d93c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d93c2:{NFSU2_TR(0x4d93c2);
u8 U[4];
w4(U+0,u32(0x776e28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d93c7:{NFSU2_TR(0x4d93c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d93cd:{NFSU2_TR(0x4d93cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d93ce:{NFSU2_TR(0x4d93ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d93d5:{NFSU2_TR(0x4d93d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d93d6:{NFSU2_TR(0x4d93d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d93da:{NFSU2_TR(0x4d93da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d93db:{NFSU2_TR(0x4d93db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d93dc:{NFSU2_TR(0x4d93dc);
__builtin_memmove((R+24),(R+4),4);
}
B4d93de:{NFSU2_TR(0x4d93de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d93df:{NFSU2_TR(0x4d93df);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d93e3:{NFSU2_TR(0x4d93e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d93e8ull));
TAIL_STATIC(0x552780u,552);
}
B4d93e8:L4d93e8:{c.instructions+=10;NFSU2_TR(0x4d93e8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d93ea:{NFSU2_TR(0x4d93ea);
__builtin_memmove((R+4),(R+24),4);
}
B4d93ec:{NFSU2_TR(0x4d93ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d93f0:{NFSU2_TR(0x4d93f0);
u8 U[4];
w4(U+0,u32(0x796504ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d93f6:{NFSU2_TR(0x4d93f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d93fc:{NFSU2_TR(0x4d93fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9402:{NFSU2_TR(0x4d9402);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9408:{NFSU2_TR(0x4d9408);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d940e:{NFSU2_TR(0x4d940e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d9418:{NFSU2_TR(0x4d9418);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d941dull));
TAIL_STATIC(0x4c4bd0u,4c4);
}
B4d941d:L4d941d:{c.instructions+=1;NFSU2_TR(0x4d941d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9422ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4d9422:L4d9422:{c.instructions+=2;NFSU2_TR(0x4d9422);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9423:{NFSU2_TR(0x4d9423);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9428ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4d9428:L4d9428:{c.instructions+=3;NFSU2_TR(0x4d9428);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d942b:{NFSU2_TR(0x4d942b);
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
B4d942d:{NFSU2_TR(0x4d942d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d9447;}}
}
B4d942f:L4d942f:{c.instructions+=5;NFSU2_TR(0x4d942f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d9432:{NFSU2_TR(0x4d9432);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9433:{NFSU2_TR(0x4d9433);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9438:{NFSU2_TR(0x4d9438);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9439:{NFSU2_TR(0x4d9439);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d943eull));
TAIL_STATIC(0x50cea0u,50c);
}
B4d943e:L4d943e:{c.instructions+=2;NFSU2_TR(0x4d943e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d943f:{NFSU2_TR(0x4d943f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9444ull));
TAIL_STATIC(0x555f10u,555);
}
B4d9444:L4d9444:{c.instructions+=1;NFSU2_TR(0x4d9444);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d9447:L4d9447:{c.instructions+=8;NFSU2_TR(0x4d9447);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d944b:{NFSU2_TR(0x4d944b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15bull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9451:{NFSU2_TR(0x4d9451);
__builtin_memmove((R+0),(R+24),4);
}
B4d9453:{NFSU2_TR(0x4d9453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9454:{NFSU2_TR(0x4d9454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d9455:{NFSU2_TR(0x4d9455);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d945c:{NFSU2_TR(0x4d945c);
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
B4d945f:{NFSU2_TR(0x4d945f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9470:L4d9470:{c.instructions+=2;NFSU2_TR(0x4d9470);
u8 U[4];
w4(U+0,u32(0x796504ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4d9476:{NFSU2_TR(0x4d9476);
TAIL_STATIC(0x4cbc30u,4cb);
}
B4d9480:L4d9480:{c.instructions+=12;NFSU2_TR(0x4d9480);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9482:{NFSU2_TR(0x4d9482);
u8 U[4];
w4(U+0,u32(0x774b62ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9487:{NFSU2_TR(0x4d9487);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d948d:{NFSU2_TR(0x4d948d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d948e:{NFSU2_TR(0x4d948e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9495:{NFSU2_TR(0x4d9495);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9496:{NFSU2_TR(0x4d9496);
__builtin_memmove((R+4),gp(0x836480),4);
}
B4d949c:{NFSU2_TR(0x4d949c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4d94a0:{NFSU2_TR(0x4d94a0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d94a2:{NFSU2_TR(0x4d94a2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d94a4:{NFSU2_TR(0x4d94a4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d94a8:{NFSU2_TR(0x4d94a8);
if(r1(R+518)){{goto L4d94b4;}}
}
B4d94aa:L4d94aa:{c.instructions+=3;NFSU2_TR(0x4d94aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d94ae:{NFSU2_TR(0x4d94ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d94af:{NFSU2_TR(0x4d94af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d94b4ull));
TAIL_STATIC(0x4c4c90u,4c4);
}
B4d94b4:L4d94b4:{c.instructions+=4;NFSU2_TR(0x4d94b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d94b8:{NFSU2_TR(0x4d94b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d94bf:{NFSU2_TR(0x4d94bf);
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
B4d94c2:{NFSU2_TR(0x4d94c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d94d0:L4d94d0:{c.instructions+=3;NFSU2_TR(0x4d94d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d94d1:{NFSU2_TR(0x4d94d1);
u8 U[4];
w4(U+0,u32(0x790744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d94d6:{NFSU2_TR(0x4d94d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d94dbull));
TAIL_STATIC(0x51bd10u,51b);
}
B4d94db:L4d94db:{c.instructions+=3;NFSU2_TR(0x4d94db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d94de:{NFSU2_TR(0x4d94de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d94e0:{NFSU2_TR(0x4d94e0);
if(r1(R+518)){{goto L4d950c;}}
}
B4d94e2:L4d94e2:{c.instructions+=4;NFSU2_TR(0x4d94e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d94e5:{NFSU2_TR(0x4d94e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d94e7:{NFSU2_TR(0x4d94e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4d94eb:{NFSU2_TR(0x4d94eb);
if(r1(R+518)){{goto L4d9501;}}
}
B4d94ed:L4d94ed:{c.instructions+=3;NFSU2_TR(0x4d94ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d94f0:{NFSU2_TR(0x4d94f0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d94f2:{NFSU2_TR(0x4d94f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d9501;}}
}
B4d94f4:L4d94f4:{c.instructions+=4;NFSU2_TR(0x4d94f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d94f7:{NFSU2_TR(0x4d94f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d94f8:{NFSU2_TR(0x4d94f8);
__builtin_memmove((R+4),(R+0),4);
}
B4d94fa:{NFSU2_TR(0x4d94fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d94ffull));
TAIL_STATIC(0x4a8480u,4a8);
}
B4d94ff:L4d94ff:{c.instructions+=2;NFSU2_TR(0x4d94ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9500:{NFSU2_TR(0x4d9500);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9501:L4d9501:{c.instructions+=2;NFSU2_TR(0x4d9501);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9502:{NFSU2_TR(0x4d9502);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9507ull));
TAIL_STATIC(0x490130u,490);
}
B4d9507:L4d9507:{c.instructions+=3;NFSU2_TR(0x4d9507);
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
B4d950a:{NFSU2_TR(0x4d950a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d950b:{NFSU2_TR(0x4d950b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d950c:L4d950c:{c.instructions+=2;NFSU2_TR(0x4d950c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d950d:{NFSU2_TR(0x4d950d);
TAIL_STATIC(0x490130u,490);
}
B4d9520:L4d9520:{c.instructions+=6;NFSU2_TR(0x4d9520);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9521:{NFSU2_TR(0x4d9521);
__builtin_memmove((R+24),(R+4),4);
}
B4d9523:{NFSU2_TR(0x4d9523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d9526:{NFSU2_TR(0x4d9526);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d9528:{NFSU2_TR(0x4d9528);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9529:{NFSU2_TR(0x4d9529);
if(r1(R+518)){{goto L4d953b;}}
}
B4d952b:L4d952b:{c.instructions+=2;NFSU2_TR(0x4d952b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d952c:{NFSU2_TR(0x4d952c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9531ull));
TAIL_STATIC(0x490130u,490);
}
B4d9531:L4d9531:{c.instructions+=2;NFSU2_TR(0x4d9531);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9534:{NFSU2_TR(0x4d9534);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d953b:L4d953b:{c.instructions+=3;NFSU2_TR(0x4d953b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d953f:{NFSU2_TR(0x4d953f);
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
B4d9541:{NFSU2_TR(0x4d9541);
if(r1(R+518)){{goto L4d9576;}}
}
B4d9543:L4d9543:{c.instructions+=3;NFSU2_TR(0x4d9543);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d9546:{NFSU2_TR(0x4d9546);
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
B4d9548:{NFSU2_TR(0x4d9548);
if(r1(R+518)){{goto L4d9576;}}
}
B4d954a:L4d954a:{c.instructions+=5;NFSU2_TR(0x4d954a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4d954d:{NFSU2_TR(0x4d954d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d954e:{NFSU2_TR(0x4d954e);
u8 U[4];
w4(U+0,u32(0xb08e7468ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9553:{NFSU2_TR(0x4d9553);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9554:{NFSU2_TR(0x4d9554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9559ull));
TAIL_STATIC(0x537a60u,537);
}
B4d9559:L4d9559:{c.instructions+=3;NFSU2_TR(0x4d9559);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d955c:{NFSU2_TR(0x4d955c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d955d:{NFSU2_TR(0x4d955d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9562ull));
TAIL_STATIC(0x50c990u,50c);
}
B4d9562:L4d9562:{c.instructions+=6;NFSU2_TR(0x4d9562);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d9565:{NFSU2_TR(0x4d9565);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9567:{NFSU2_TR(0x4d9567);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9568:{NFSU2_TR(0x4d9568);
u8 U[4];
w4(U+0,u32(0x4d94d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d956d:{NFSU2_TR(0x4d956d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d956e:{NFSU2_TR(0x4d956e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9573ull));
TAIL_STATIC(0x494d30u,494);
}
B4d9573:L4d9573:{c.instructions+=1;NFSU2_TR(0x4d9573);
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
B4d9576:L4d9576:{c.instructions+=3;NFSU2_TR(0x4d9576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d9577:{NFSU2_TR(0x4d9577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9578:{NFSU2_TR(0x4d9578);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9580:L4d9580:{c.instructions+=16;NFSU2_TR(0x4d9580);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9582:{NFSU2_TR(0x4d9582);
u8 U[4];
w4(U+0,u32(0x774b7bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9587:{NFSU2_TR(0x4d9587);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d958d:{NFSU2_TR(0x4d958d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d958e:{NFSU2_TR(0x4d958e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9595:{NFSU2_TR(0x4d9595);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9596:{NFSU2_TR(0x4d9596);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9597:{NFSU2_TR(0x4d9597);
__builtin_memmove((R+12),(R+4),4);
}
B4d9599:{NFSU2_TR(0x4d9599);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d959a:{NFSU2_TR(0x4d959a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d959d:{NFSU2_TR(0x4d959d);
u8 U[4];
w4(U+0,u32(0x796524ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4d95a3:{NFSU2_TR(0x4d95a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d95a7:{NFSU2_TR(0x4d95a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4d95a9:{NFSU2_TR(0x4d95a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d95ac:{NFSU2_TR(0x4d95ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d95b4:{NFSU2_TR(0x4d95b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d95b9ull));
TAIL_STATIC(0x570a30u,570);
}
B4d95b9:L4d95b9:{c.instructions+=4;NFSU2_TR(0x4d95b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4d95bc:{NFSU2_TR(0x4d95bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fa740ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4d95c3:{NFSU2_TR(0x4d95c3);
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
B4d95c5:{NFSU2_TR(0x4d95c5);
if(r1(R+518)){{goto L4d95cc;}}
}
B4d95c7:L4d95c7:{c.instructions+=2;NFSU2_TR(0x4d95c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d95ca:{NFSU2_TR(0x4d95ca);
{goto L4d95d6;}
}
B4d95cc:L4d95cc:{c.instructions+=1;NFSU2_TR(0x4d95cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d95d1ull));
TAIL_STATIC(0x570a30u,570);
}
B4d95d1:L4d95d1:{c.instructions+=2;NFSU2_TR(0x4d95d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d95d3:{NFSU2_TR(0x4d95d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4d95d6:L4d95d6:{c.instructions+=3;NFSU2_TR(0x4d95d6);
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
B4d95d8:{NFSU2_TR(0x4d95d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d95d9:{NFSU2_TR(0x4d95d9);
if(r1(R+518)){{goto L4d9621;}}
}
B4d95db:L4d95db:{c.instructions+=1;NFSU2_TR(0x4d95db);
w4(R+28,u32(0x7f6620ull));
}
B4d95e0:L4d95e0:{c.instructions+=3;NFSU2_TR(0x4d95e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4d95e2:{NFSU2_TR(0x4d95e2);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4d95e5:{NFSU2_TR(0x4d95e5);
if(r1(R+518)){{goto L4d9614;}}
}
B4d95e7:L4d95e7:{c.instructions+=2;NFSU2_TR(0x4d95e7);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d95e9:{NFSU2_TR(0x4d95e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d95eeull));
TAIL_STATIC(0x575620u,575);
}
B4d95ee:L4d95ee:{c.instructions+=3;NFSU2_TR(0x4d95ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d95f1:{NFSU2_TR(0x4d95f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d95f3:{NFSU2_TR(0x4d95f3);
if(r1(R+518)){{goto L4d9605;}}
}
B4d95f5:L4d95f5:{c.instructions+=5;NFSU2_TR(0x4d95f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4d95f7:{NFSU2_TR(0x4d95f7);
u8 U[4];
w4(U+0,u32(0x795914ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d95fd:{NFSU2_TR(0x4d95fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9600:{NFSU2_TR(0x4d9600);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4d9603:{NFSU2_TR(0x4d9603);
{goto L4d9607;}
}
B4d9605:L4d9605:{c.instructions+=1;NFSU2_TR(0x4d9605);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d9607:L4d9607:{c.instructions+=5;NFSU2_TR(0x4d9607);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d960a:{NFSU2_TR(0x4d960a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d960c:{NFSU2_TR(0x4d960c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d960f:{NFSU2_TR(0x4d960f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9612:{NFSU2_TR(0x4d9612);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4d9614:L4d9614:{c.instructions+=3;NFSU2_TR(0x4d9614);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4d9617:{NFSU2_TR(0x4d9617);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7f6654ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7f6654ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4d961d:{NFSU2_TR(0x4d961d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d95e0u);}goto L4d95e0;}}
}
B4d961f:L4d961f:{c.instructions+=1;NFSU2_TR(0x4d961f);
{goto L4d9691;}
}
B4d9621:L4d9621:{c.instructions+=1;NFSU2_TR(0x4d9621);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9626ull));
TAIL_STATIC(0x570a30u,570);
}
B4d9626:L4d9626:{c.instructions+=4;NFSU2_TR(0x4d9626);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4d9629:{NFSU2_TR(0x4d9629);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fa740ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4d9630:{NFSU2_TR(0x4d9630);
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
B4d9632:{NFSU2_TR(0x4d9632);
if(r1(R+518)){{goto L4d963e;}}
}
B4d9634:L4d9634:{c.instructions+=4;NFSU2_TR(0x4d9634);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4d9637:{NFSU2_TR(0x4d9637);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d9639:{NFSU2_TR(0x4d9639);
__builtin_memmove((R+0),(R+518),1);
}
B4d963c:{NFSU2_TR(0x4d963c);
{goto L4d9649;}
}
B4d963e:L4d963e:{c.instructions+=1;NFSU2_TR(0x4d963e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9643ull));
TAIL_STATIC(0x570a30u,570);
}
B4d9643:L4d9643:{c.instructions+=3;NFSU2_TR(0x4d9643);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4d9645:{NFSU2_TR(0x4d9645);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B4d9647:{NFSU2_TR(0x4d9647);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B4d9649:L4d9649:{c.instructions+=2;NFSU2_TR(0x4d9649);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d964b:{NFSU2_TR(0x4d964b);
if(r1(R+518)){{goto L4d9691;}}
}
B4d964d:L4d964d:{c.instructions+=1;NFSU2_TR(0x4d964d);
w4(R+28,u32(0x7f65e8ull));
}
B4d9652:L4d9652:{c.instructions+=3;NFSU2_TR(0x4d9652);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4d9654:{NFSU2_TR(0x4d9654);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4d9657:{NFSU2_TR(0x4d9657);
if(r1(R+518)){{goto L4d9686;}}
}
B4d9659:L4d9659:{c.instructions+=2;NFSU2_TR(0x4d9659);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d965b:{NFSU2_TR(0x4d965b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9660ull));
TAIL_STATIC(0x575620u,575);
}
B4d9660:L4d9660:{c.instructions+=3;NFSU2_TR(0x4d9660);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9663:{NFSU2_TR(0x4d9663);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d9665:{NFSU2_TR(0x4d9665);
if(r1(R+518)){{goto L4d9677;}}
}
B4d9667:L4d9667:{c.instructions+=5;NFSU2_TR(0x4d9667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4d9669:{NFSU2_TR(0x4d9669);
u8 U[4];
w4(U+0,u32(0x795914ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d966f:{NFSU2_TR(0x4d966f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9672:{NFSU2_TR(0x4d9672);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4d9675:{NFSU2_TR(0x4d9675);
{goto L4d9679;}
}
B4d9677:L4d9677:{c.instructions+=1;NFSU2_TR(0x4d9677);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d9679:L4d9679:{c.instructions+=5;NFSU2_TR(0x4d9679);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d967c:{NFSU2_TR(0x4d967c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d967e:{NFSU2_TR(0x4d967e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9681:{NFSU2_TR(0x4d9681);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9684:{NFSU2_TR(0x4d9684);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4d9686:L4d9686:{c.instructions+=3;NFSU2_TR(0x4d9686);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4d9689:{NFSU2_TR(0x4d9689);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7f6620ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7f6620ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4d968f:{NFSU2_TR(0x4d968f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d9652u);}goto L4d9652;}}
}
B4d9691:L4d9691:{c.instructions+=4;NFSU2_TR(0x4d9691);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4d9693:{NFSU2_TR(0x4d9693);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d9695:{NFSU2_TR(0x4d9695);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d9696:{NFSU2_TR(0x4d9696);
if(r1(R+518)){{goto L4d969d;}}
}
B4d9698:L4d9698:{c.instructions+=2;NFSU2_TR(0x4d9698);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d969b:{NFSU2_TR(0x4d969b);
{goto L4d969f;}
}
B4d969d:L4d969d:{c.instructions+=1;NFSU2_TR(0x4d969d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d969f:L4d969f:{c.instructions+=5;NFSU2_TR(0x4d969f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d96a2:{NFSU2_TR(0x4d96a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d96a5:{NFSU2_TR(0x4d96a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d96a6:{NFSU2_TR(0x4d96a6);
u8 U[4];
w4(U+0,u32(0x78eadcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d96ab:{NFSU2_TR(0x4d96ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d96b0ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B4d96b0:L4d96b0:{c.instructions+=3;NFSU2_TR(0x4d96b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d96b3:{NFSU2_TR(0x4d96b3);
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
B4d96b5:{NFSU2_TR(0x4d96b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d96d0;}}
}
B4d96b7:L4d96b7:{c.instructions+=1;NFSU2_TR(0x4d96b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d96bcull));
TAIL_STATIC(0x5bf540u,5bf);
}
B4d96bc:L4d96bc:{c.instructions+=4;NFSU2_TR(0x4d96bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d96bf:{NFSU2_TR(0x4d96bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d96c2:{NFSU2_TR(0x4d96c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d96c4:{NFSU2_TR(0x4d96c4);
if(r1(R+518)){{goto L4d96cb;}}
}
B4d96c6:L4d96c6:{c.instructions+=2;NFSU2_TR(0x4d96c6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffffcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffffcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d96c9:{NFSU2_TR(0x4d96c9);
{goto L4d96cd;}
}
B4d96cb:L4d96cb:{c.instructions+=1;NFSU2_TR(0x4d96cb);
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
B4d96cd:L4d96cd:{c.instructions+=1;NFSU2_TR(0x4d96cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d96d0:L4d96d0:{c.instructions+=4;NFSU2_TR(0x4d96d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d96d3:{NFSU2_TR(0x4d96d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d96d6:{NFSU2_TR(0x4d96d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d96d7:{NFSU2_TR(0x4d96d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d96dcull));
TAIL_STATIC(0x50c8d0u,50c);
}
B4d96dc:L4d96dc:{c.instructions+=8;NFSU2_TR(0x4d96dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d96e0:{NFSU2_TR(0x4d96e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d96e3:{NFSU2_TR(0x4d96e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d96e4:{NFSU2_TR(0x4d96e4);
__builtin_memmove((R+0),(R+12),4);
}
B4d96e6:{NFSU2_TR(0x4d96e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d96e7:{NFSU2_TR(0x4d96e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d96ee:{NFSU2_TR(0x4d96ee);
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
B4d96f1:{NFSU2_TR(0x4d96f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9700:L4d9700:{c.instructions+=3;NFSU2_TR(0x4d9700);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9701:{NFSU2_TR(0x4d9701);
__builtin_memmove((R+24),(R+4),4);
}
B4d9703:{NFSU2_TR(0x4d9703);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9708ull));
{goto L4d9720;}
}
B4d9708:L4d9708:{c.instructions+=2;NFSU2_TR(0x4d9708);
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
B4d970d:{NFSU2_TR(0x4d970d);
if(r1(R+518)){{goto L4d9718;}}
}
B4d970f:L4d970f:{c.instructions+=2;NFSU2_TR(0x4d970f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9710:{NFSU2_TR(0x4d9710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9715ull));
TAIL_STATIC(0x575630u,575);
}
B4d9715:L4d9715:{c.instructions+=1;NFSU2_TR(0x4d9715);
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
B4d9718:L4d9718:{c.instructions+=3;NFSU2_TR(0x4d9718);
__builtin_memmove((R+0),(R+24),4);
}
B4d971a:{NFSU2_TR(0x4d971a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d971b:{NFSU2_TR(0x4d971b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9720:L4d9720:{c.instructions+=3;NFSU2_TR(0x4d9720);
u8 U[4];
w4(U+0,u32(0x796524ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4d9726:{NFSU2_TR(0x4d9726);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4d9729:{NFSU2_TR(0x4d9729);
TAIL_STATIC(0x4358e0u,435);
}
B4d9730:L4d9730:{c.instructions+=8;NFSU2_TR(0x4d9730);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9732:{NFSU2_TR(0x4d9732);
u8 U[4];
w4(U+0,u32(0x774ba4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9737:{NFSU2_TR(0x4d9737);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d973d:{NFSU2_TR(0x4d973d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d973e:{NFSU2_TR(0x4d973e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9745:{NFSU2_TR(0x4d9745);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9746:{NFSU2_TR(0x4d9746);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9748:{NFSU2_TR(0x4d9748);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d974dull));
TAIL_STATIC(0x575620u,575);
}
B4d974d:L4d974d:{c.instructions+=5;NFSU2_TR(0x4d974d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9750:{NFSU2_TR(0x4d9750);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4d9754:{NFSU2_TR(0x4d9754);
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
B4d9756:{NFSU2_TR(0x4d9756);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d975e:{NFSU2_TR(0x4d975e);
if(r1(R+518)){{goto L4d977b;}}
}
B4d9760:L4d9760:{c.instructions+=2;NFSU2_TR(0x4d9760);
__builtin_memmove((R+4),(R+0),4);
}
B4d9762:{NFSU2_TR(0x4d9762);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9767ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d9580u);}goto L4d9580;}
}
B4d9767:L4d9767:{c.instructions+=5;NFSU2_TR(0x4d9767);
__builtin_memmove(gp(0x836488),(R+0),4);
}
B4d976c:{NFSU2_TR(0x4d976c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9770:{NFSU2_TR(0x4d9770);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9777:{NFSU2_TR(0x4d9777);
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
B4d977a:{NFSU2_TR(0x4d977a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d977b:L4d977b:{c.instructions+=6;NFSU2_TR(0x4d977b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d977f:{NFSU2_TR(0x4d977f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d9781:{NFSU2_TR(0x4d9781);
__builtin_memmove(gp(0x836488),(R+0),4);
}
B4d9786:{NFSU2_TR(0x4d9786);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d978d:{NFSU2_TR(0x4d978d);
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
B4d9790:{NFSU2_TR(0x4d9790);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d97a0:L4d97a0:{c.instructions+=8;NFSU2_TR(0x4d97a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d97a2:{NFSU2_TR(0x4d97a2);
u8 U[4];
w4(U+0,u32(0x774bc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d97a7:{NFSU2_TR(0x4d97a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d97ad:{NFSU2_TR(0x4d97ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d97ae:{NFSU2_TR(0x4d97ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d97b5:{NFSU2_TR(0x4d97b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d97b6:{NFSU2_TR(0x4d97b6);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d97b8:{NFSU2_TR(0x4d97b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d97bdull));
TAIL_STATIC(0x575620u,575);
}
B4d97bd:L4d97bd:{c.instructions+=5;NFSU2_TR(0x4d97bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d97c0:{NFSU2_TR(0x4d97c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4d97c4:{NFSU2_TR(0x4d97c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d97c6:{NFSU2_TR(0x4d97c6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d97ce:{NFSU2_TR(0x4d97ce);
if(r1(R+518)){{goto L4d97eb;}}
}
B4d97d0:L4d97d0:{c.instructions+=4;NFSU2_TR(0x4d97d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d97d4:{NFSU2_TR(0x4d97d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d97d5:{NFSU2_TR(0x4d97d5);
__builtin_memmove((R+4),(R+0),4);
}
B4d97d7:{NFSU2_TR(0x4d97d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d97dcull));
TAIL_STATIC(0x4c56c0u,4c5);
}
B4d97dc:L4d97dc:{c.instructions+=4;NFSU2_TR(0x4d97dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d97e0:{NFSU2_TR(0x4d97e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d97e7:{NFSU2_TR(0x4d97e7);
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
B4d97ea:{NFSU2_TR(0x4d97ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d97eb:L4d97eb:{c.instructions+=5;NFSU2_TR(0x4d97eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d97ef:{NFSU2_TR(0x4d97ef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d97f1:{NFSU2_TR(0x4d97f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d97f8:{NFSU2_TR(0x4d97f8);
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
B4d97fb:{NFSU2_TR(0x4d97fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9800:L4d9800:{c.instructions+=22;NFSU2_TR(0x4d9800);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9801:{NFSU2_TR(0x4d9801);
__builtin_memmove((R+20),(R+16),4);
}
B4d9803:{NFSU2_TR(0x4d9803);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4d9806:{NFSU2_TR(0x4d9806);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9808:{NFSU2_TR(0x4d9808);
u8 U[4];
w4(U+0,u32(0x77389bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d980d:{NFSU2_TR(0x4d980d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d9813:{NFSU2_TR(0x4d9813);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9814:{NFSU2_TR(0x4d9814);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d981b:{NFSU2_TR(0x4d981b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8fcull))));
}
B4d9821:{NFSU2_TR(0x4d9821);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d9824:{NFSU2_TR(0x4d9824);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d9827:{NFSU2_TR(0x4d9827);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9828:{NFSU2_TR(0x4d9828);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4d982b:{NFSU2_TR(0x4d982b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d982c:{NFSU2_TR(0x4d982c);
__builtin_memmove((R+28),(R+4),4);
}
B4d982e:{NFSU2_TR(0x4d982e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9831:{NFSU2_TR(0x4d9831);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9832:{NFSU2_TR(0x4d9832);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9833:{NFSU2_TR(0x4d9833);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9834:{NFSU2_TR(0x4d9834);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9835:{NFSU2_TR(0x4d9835);
__builtin_memmove((R+4),(R+28),4);
}
B4d9837:{NFSU2_TR(0x4d9837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d983cull));
TAIL_STATIC(0x543d40u,543);
}
B4d983c:L4d983c:{c.instructions+=2;NFSU2_TR(0x4d983c);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4d9842:{NFSU2_TR(0x4d9842);
if(r1(R+518)){{goto L4d98a8;}}
}
B4d9844:L4d9844:{c.instructions+=2;NFSU2_TR(0x4d9844);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3a2be557ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d984a:{NFSU2_TR(0x4d984a);
if(r1(R+518)){{goto L4d98af;}}
}
B4d984c:L4d984c:{c.instructions+=2;NFSU2_TR(0x4d984c);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4d9852:{NFSU2_TR(0x4d9852);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d9970;}}
}
B4d9858:L4d9858:{c.instructions+=3;NFSU2_TR(0x4d9858);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4d985d:{NFSU2_TR(0x4d985d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d985f:{NFSU2_TR(0x4d985f);
if(r1(R+518)){{goto L4d987e;}}
}
B4d9861:L4d9861:{c.instructions+=4;NFSU2_TR(0x4d9861);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d9865:{NFSU2_TR(0x4d9865);
__builtin_memmove((R+4),gp(0x844ad9),1);
}
B4d986b:{NFSU2_TR(0x4d986b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d986d:{NFSU2_TR(0x4d986d);
if(r1(R+518)){{goto L4d987e;}}
}
B4d986f:L4d986f:{c.instructions+=4;NFSU2_TR(0x4d986f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9872:{NFSU2_TR(0x4d9872);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9877:{NFSU2_TR(0x4d9877);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9879:{NFSU2_TR(0x4d9879);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d987eull));
TAIL_STATIC(0x6fbfccu,6fb);
}
B4d987e:L4d987e:{c.instructions+=6;NFSU2_TR(0x4d987e);
__builtin_memmove((R+0),gp(0x7f42c0),4);
}
B4d9883:{NFSU2_TR(0x4d9883);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9886:{NFSU2_TR(0x4d9886);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9888:{NFSU2_TR(0x4d9888);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9889:{NFSU2_TR(0x4d9889);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d988a:{NFSU2_TR(0x4d988a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d988full));
TAIL_STATIC(0x537980u,537);
}
B4d988f:L4d988f:{c.instructions+=8;NFSU2_TR(0x4d988f);
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
B4d9892:{NFSU2_TR(0x4d9892);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9899:{NFSU2_TR(0x4d9899);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d98a0:{NFSU2_TR(0x4d98a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d98a1:{NFSU2_TR(0x4d98a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d98a2:{NFSU2_TR(0x4d98a2);
__builtin_memmove((R+16),(R+20),4);
}
B4d98a4:{NFSU2_TR(0x4d98a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d98a5:{NFSU2_TR(0x4d98a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d98a8:L4d98a8:{c.instructions+=2;NFSU2_TR(0x4d98a8);
__builtin_memmove((R+4),(R+28),4);
}
B4d98aa:{NFSU2_TR(0x4d98aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d98afull));
TAIL_STATIC(0x4a9360u,4a9);
}
B4d98af:L4d98af:{c.instructions+=2;NFSU2_TR(0x4d98af);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d98b3:{NFSU2_TR(0x4d98b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d98b8ull));
TAIL_STATIC(0x40c910u,40c);
}
B4d98b8:L4d98b8:{c.instructions+=5;NFSU2_TR(0x4d98b8);
__builtin_memmove((R+0),gp(0x83aab8),4);
}
B4d98bd:{NFSU2_TR(0x4d98bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d98be:{NFSU2_TR(0x4d98be);
w4(R+4,u32(0x83ad90ull));
}
B4d98c3:{NFSU2_TR(0x4d98c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x910ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d98ce:{NFSU2_TR(0x4d98ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d98d3ull));
TAIL_STATIC(0x503510u,503);
}
B4d98d3:L4d98d3:{c.instructions+=7;NFSU2_TR(0x4d98d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4d98d5:{NFSU2_TR(0x4d98d5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d98d7:{NFSU2_TR(0x4d98d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d98db:{NFSU2_TR(0x4d98db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d98dc:{NFSU2_TR(0x4d98dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d98de:{NFSU2_TR(0x4d98de);
__builtin_memmove((R+4),(R+0),4);
}
B4d98e0:{NFSU2_TR(0x4d98e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d98e3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4d98e3:L4d98e3:{c.instructions+=2;NFSU2_TR(0x4d98e3);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d98e8:{NFSU2_TR(0x4d98e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d98edull));
TAIL_STATIC(0x52cf60u,52c);
}
B4d98ed:L4d98ed:{c.instructions+=3;NFSU2_TR(0x4d98ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d98f0:{NFSU2_TR(0x4d98f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d98f2:{NFSU2_TR(0x4d98f2);
if(r1(R+518)){{goto L4d9905;}}
}
B4d98f4:L4d98f4:{c.instructions+=2;NFSU2_TR(0x4d98f4);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d98f9:{NFSU2_TR(0x4d98f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d98feull));
TAIL_STATIC(0x51bd10u,51b);
}
B4d98fe:L4d98fe:{c.instructions+=3;NFSU2_TR(0x4d98fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9901:{NFSU2_TR(0x4d9901);
__builtin_memmove((R+24),(R+0),4);
}
B4d9903:{NFSU2_TR(0x4d9903);
{goto L4d992e;}
}
B4d9905:L4d9905:{c.instructions+=2;NFSU2_TR(0x4d9905);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d990a:{NFSU2_TR(0x4d990a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d990full));
TAIL_STATIC(0x52cf60u,52c);
}
B4d990f:L4d990f:{c.instructions+=3;NFSU2_TR(0x4d990f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9912:{NFSU2_TR(0x4d9912);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d9914:{NFSU2_TR(0x4d9914);
if(r1(R+518)){{goto L4d992c;}}
}
B4d9916:L4d9916:{c.instructions+=2;NFSU2_TR(0x4d9916);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d991b:{NFSU2_TR(0x4d991b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9920ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4d9920:L4d9920:{c.instructions+=3;NFSU2_TR(0x4d9920);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9923:{NFSU2_TR(0x4d9923);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d9925:{NFSU2_TR(0x4d9925);
if(r1(R+518)){{goto L4d992c;}}
}
B4d9927:L4d9927:{c.instructions+=2;NFSU2_TR(0x4d9927);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4d992a:{NFSU2_TR(0x4d992a);
{goto L4d992e;}
}
B4d992c:L4d992c:{c.instructions+=1;NFSU2_TR(0x4d992c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4d992e:L4d992e:{c.instructions+=4;NFSU2_TR(0x4d992e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d9932:{NFSU2_TR(0x4d9932);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9933:{NFSU2_TR(0x4d9933);
w4(R+4,u32(0x8371b0ull));
}
B4d9938:{NFSU2_TR(0x4d9938);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d993dull));
TAIL_STATIC(0x413440u,413);
}
B4d993d:L4d993d:{c.instructions+=3;NFSU2_TR(0x4d993d);
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
B4d993f:{NFSU2_TR(0x4d993f);
s4(0x83623c,u32(0x1ull));
}
B4d9949:{NFSU2_TR(0x4d9949);
if(r1(R+518)){{goto L4d9959;}}
}
B4d994b:L4d994b:{c.instructions+=4;NFSU2_TR(0x4d994b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d994d:{NFSU2_TR(0x4d994d);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9952:{NFSU2_TR(0x4d9952);
__builtin_memmove((R+4),(R+24),4);
}
B4d9954:{NFSU2_TR(0x4d9954);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9959ull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4d9959:L4d9959:{c.instructions+=3;NFSU2_TR(0x4d9959);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d9960:{NFSU2_TR(0x4d9960);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d996b:{NFSU2_TR(0x4d996b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9970ull));
TAIL_STATIC(0x4022c0u,402);
}
B4d9970:L4d9970:{c.instructions+=7;NFSU2_TR(0x4d9970);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9977:{NFSU2_TR(0x4d9977);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d9978:{NFSU2_TR(0x4d9978);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d997f:{NFSU2_TR(0x4d997f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9980:{NFSU2_TR(0x4d9980);
__builtin_memmove((R+16),(R+20),4);
}
B4d9982:{NFSU2_TR(0x4d9982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d9983:{NFSU2_TR(0x4d9983);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9990:L4d9990:{c.instructions+=2;NFSU2_TR(0x4d9990);
u8 U[4];
w4(U+0,u32(0x6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9992:{NFSU2_TR(0x4d9992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9997ull));
TAIL_STATIC(0x575620u,575);
}
B4d9997:L4d9997:{c.instructions+=4;NFSU2_TR(0x4d9997);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4d9999:{NFSU2_TR(0x4d9999);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d999c:{NFSU2_TR(0x4d999c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d999e:{NFSU2_TR(0x4d999e);
if(r1(R+518)){{goto L4d99c9;}}
}
B4d99a0:L4d99a0:{c.instructions+=14;NFSU2_TR(0x4d99a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d99a3:{NFSU2_TR(0x4d99a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d99a6:{NFSU2_TR(0x4d99a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d99a9:{NFSU2_TR(0x4d99a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d99ac:{NFSU2_TR(0x4d99ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d99af:{NFSU2_TR(0x4d99af);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d99b2:{NFSU2_TR(0x4d99b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d99b5:{NFSU2_TR(0x4d99b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d99b8:{NFSU2_TR(0x4d99b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d99bb:{NFSU2_TR(0x4d99bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d99be:{NFSU2_TR(0x4d99be);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d99c1:{NFSU2_TR(0x4d99c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d99c4:{NFSU2_TR(0x4d99c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d99c7:{NFSU2_TR(0x4d99c7);
{goto L4d99cb;}
}
B4d99c9:L4d99c9:{c.instructions+=1;NFSU2_TR(0x4d99c9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d99cb:L4d99cb:{c.instructions+=4;NFSU2_TR(0x4d99cb);
u8 U[4];
w4(U+0,u32(0x796564ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d99d0:{NFSU2_TR(0x4d99d0);
u8 U[4];
w4(U+0,u32(0x835f78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d99d5:{NFSU2_TR(0x4d99d5);
__builtin_memmove(gp(0x836498),(R+0),4);
}
B4d99da:{NFSU2_TR(0x4d99da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d99dfull));
TAIL_STATIC(0x43e000u,43e);
}
B4d99df:L4d99df:{c.instructions+=3;NFSU2_TR(0x4d99df);
u8 U[4];
w4(U+0,u32(0x796558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d99e4:{NFSU2_TR(0x4d99e4);
u8 U[4];
w4(U+0,u32(0x836288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d99e9:{NFSU2_TR(0x4d99e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d99eeull));
TAIL_STATIC(0x43e000u,43e);
}
B4d99ee:L4d99ee:{c.instructions+=3;NFSU2_TR(0x4d99ee);
u8 U[4];
w4(U+0,u32(0x796550ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d99f3:{NFSU2_TR(0x4d99f3);
u8 U[4];
w4(U+0,u32(0x8362e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d99f8:{NFSU2_TR(0x4d99f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d99fdull));
TAIL_STATIC(0x43e000u,43e);
}
B4d99fd:L4d99fd:{c.instructions+=3;NFSU2_TR(0x4d99fd);
u8 U[4];
w4(U+0,u32(0x796548ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9a02:{NFSU2_TR(0x4d9a02);
u8 U[4];
w4(U+0,u32(0x835bb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9a07:{NFSU2_TR(0x4d9a07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9a0cull));
TAIL_STATIC(0x43e000u,43e);
}
B4d9a0c:L4d9a0c:{c.instructions+=3;NFSU2_TR(0x4d9a0c);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4d9a12:{NFSU2_TR(0x4d9a12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4d9a15:{NFSU2_TR(0x4d9a15);
TAIL_STATIC(0x4c5d80u,4c5);
}
B4d9a20:L4d9a20:{c.instructions+=7;NFSU2_TR(0x4d9a20);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9a23:{NFSU2_TR(0x4d9a23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9a24:{NFSU2_TR(0x4d9a24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9a25:{NFSU2_TR(0x4d9a25);
__builtin_memmove((R+24),(R+4),4);
}
B4d9a27:{NFSU2_TR(0x4d9a27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9a28:{NFSU2_TR(0x4d9a28);
w4(R+4,u32(0x83a9e0ull));
}
B4d9a2d:{NFSU2_TR(0x4d9a2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9a32ull));
TAIL_STATIC(0x52a440u,52a);
}
B4d9a32:L4d9a32:{c.instructions+=6;NFSU2_TR(0x4d9a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9a35:{NFSU2_TR(0x4d9a35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9a36:{NFSU2_TR(0x4d9a36);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9a3b:{NFSU2_TR(0x4d9a3b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d9a3d:{NFSU2_TR(0x4d9a3d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9a3e:{NFSU2_TR(0x4d9a3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9a43ull));
TAIL_STATIC(0x4c65f0u,4c6);
}
B4d9a43:L4d9a43:{c.instructions+=5;NFSU2_TR(0x4d9a43);
u8 U[4];
w4(U+0,u32(0x79656cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9a48:{NFSU2_TR(0x4d9a48);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d9a4b:{NFSU2_TR(0x4d9a4b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9a50:{NFSU2_TR(0x4d9a50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9a51:{NFSU2_TR(0x4d9a51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9a56ull));
TAIL_STATIC(0x43dda0u,43d);
}
B4d9a56:L4d9a56:{c.instructions+=16;NFSU2_TR(0x4d9a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9a59:{NFSU2_TR(0x4d9a59);
w4(R+0,u32(0x1ull));
}
B4d9a5e:{NFSU2_TR(0x4d9a5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9a62:{NFSU2_TR(0x4d9a62);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9a66:{NFSU2_TR(0x4d9a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9a69:{NFSU2_TR(0x4d9a69);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9a6c:{NFSU2_TR(0x4d9a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9a6f:{NFSU2_TR(0x4d9a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9a72:{NFSU2_TR(0x4d9a72);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4d9a76:{NFSU2_TR(0x4d9a76);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9a79:{NFSU2_TR(0x4d9a79);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B4d9a7e:{NFSU2_TR(0x4d9a7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d9a81:{NFSU2_TR(0x4d9a81);
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
B4d9a83:{NFSU2_TR(0x4d9a83);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9a87:{NFSU2_TR(0x4d9a87);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9a8b:{NFSU2_TR(0x4d9a8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d9a9a;}}
}
B4d9a8d:L4d9a8d:{c.instructions+=4;NFSU2_TR(0x4d9a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9a90:{NFSU2_TR(0x4d9a90);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d9a94:{NFSU2_TR(0x4d9a94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9a95:{NFSU2_TR(0x4d9a95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9a9aull));
TAIL_STATIC(0x6fbf08u,6fb);
}
B4d9a9a:L4d9a9a:{c.instructions+=5;NFSU2_TR(0x4d9a9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d9a9b:{NFSU2_TR(0x4d9a9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9a9c:{NFSU2_TR(0x4d9a9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d9a9d:{NFSU2_TR(0x4d9a9d);
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
B4d9aa0:{NFSU2_TR(0x4d9aa0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9ab0:L4d9ab0:{c.instructions+=10;NFSU2_TR(0x4d9ab0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9ab1:{NFSU2_TR(0x4d9ab1);
__builtin_memmove((R+0),gp(0x844ad9),1);
}
B4d9ab6:{NFSU2_TR(0x4d9ab6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9ab7:{NFSU2_TR(0x4d9ab7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9ab8:{NFSU2_TR(0x4d9ab8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9ab9:{NFSU2_TR(0x4d9ab9);
__builtin_memmove((R+24),(R+4),4);
}
B4d9abb:{NFSU2_TR(0x4d9abb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9abc:{NFSU2_TR(0x4d9abc);
w4(R+4,u32(0x83a9d0ull));
}
B4d9ac1:{NFSU2_TR(0x4d9ac1);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9ac5:{NFSU2_TR(0x4d9ac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9acaull));
TAIL_STATIC(0x52a440u,52a);
}
B4d9aca:L4d9aca:{c.instructions+=5;NFSU2_TR(0x4d9aca);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4d9ad0:{NFSU2_TR(0x4d9ad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d9ad4:{NFSU2_TR(0x4d9ad4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d9ad6:{NFSU2_TR(0x4d9ad6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d9ad8:{NFSU2_TR(0x4d9ad8);
if(r1(R+518)){{goto L4d9af8;}}
}
B4d9ada:L4d9ada:{c.instructions+=7;NFSU2_TR(0x4d9ada);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9add:{NFSU2_TR(0x4d9add);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4d9ae3:{NFSU2_TR(0x4d9ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9ae6:{NFSU2_TR(0x4d9ae6);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4d9aec:{NFSU2_TR(0x4d9aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9aef:{NFSU2_TR(0x4d9aef);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4d9af5:{NFSU2_TR(0x4d9af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9af8:L4d9af8:{c.instructions+=6;NFSU2_TR(0x4d9af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d9afb:{NFSU2_TR(0x4d9afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9afe:{NFSU2_TR(0x4d9afe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9aff:{NFSU2_TR(0x4d9aff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b00:{NFSU2_TR(0x4d9b00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b01:{NFSU2_TR(0x4d9b01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9b06ull));
TAIL_STATIC(0x4c65f0u,4c6);
}
B4d9b06:L4d9b06:{c.instructions+=5;NFSU2_TR(0x4d9b06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b07:{NFSU2_TR(0x4d9b07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d9b0a:{NFSU2_TR(0x4d9b0a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b0f:{NFSU2_TR(0x4d9b0f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b10:{NFSU2_TR(0x4d9b10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9b15ull));
TAIL_STATIC(0x43dda0u,43d);
}
B4d9b15:L4d9b15:{c.instructions+=4;NFSU2_TR(0x4d9b15);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b17:{NFSU2_TR(0x4d9b17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b18:{NFSU2_TR(0x4d9b18);
u8 U[4];
w4(U+0,u32(0x835bb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b1d:{NFSU2_TR(0x4d9b1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9b22ull));
TAIL_STATIC(0x43e030u,43e);
}
B4d9b22:L4d9b22:{c.instructions+=5;NFSU2_TR(0x4d9b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9b25:{NFSU2_TR(0x4d9b25);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4d9b28:{NFSU2_TR(0x4d9b28);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b2a:{NFSU2_TR(0x4d9b2a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b2c:{NFSU2_TR(0x4d9b2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9b31ull));
TAIL_STATIC(0x6fbfccu,6fb);
}
B4d9b31:L4d9b31:{c.instructions+=8;NFSU2_TR(0x4d9b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9b34:{NFSU2_TR(0x4d9b34);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9b37:{NFSU2_TR(0x4d9b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9b3a:{NFSU2_TR(0x4d9b3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d9b41:{NFSU2_TR(0x4d9b41);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4d9b45:{NFSU2_TR(0x4d9b45);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9b48:{NFSU2_TR(0x4d9b48);
u8 U[14];
__builtin_memmove((U+6),gp(0x8650d0),4);
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
B4d9b4e:{NFSU2_TR(0x4d9b4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d9b71;}}
}
B4d9b50:L4d9b50:{c.instructions+=12;NFSU2_TR(0x4d9b50);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4d9b54:{NFSU2_TR(0x4d9b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d9b57:{NFSU2_TR(0x4d9b57);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4d9b59:{NFSU2_TR(0x4d9b59);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4d9b5b:{NFSU2_TR(0x4d9b5b);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4d9b61:{NFSU2_TR(0x4d9b61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B4d9b64:{NFSU2_TR(0x4d9b64);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b65:{NFSU2_TR(0x4d9b65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b66:{NFSU2_TR(0x4d9b66);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b68:{NFSU2_TR(0x4d9b68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b69:{NFSU2_TR(0x4d9b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9b6c:{NFSU2_TR(0x4d9b6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9b71ull));
TAIL_STATIC(0x6fbfc1u,6fb);
}
B4d9b71:L4d9b71:{c.instructions+=6;NFSU2_TR(0x4d9b71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d9b72:{NFSU2_TR(0x4d9b72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9b73:{NFSU2_TR(0x4d9b73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d9b74:{NFSU2_TR(0x4d9b74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d9b75:{NFSU2_TR(0x4d9b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d9b76:{NFSU2_TR(0x4d9b76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9b80:L4d9b80:{c.instructions+=6;NFSU2_TR(0x4d9b80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b81:{NFSU2_TR(0x4d9b81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b82:{NFSU2_TR(0x4d9b82);
__builtin_memmove((R+24),(R+4),4);
}
B4d9b84:{NFSU2_TR(0x4d9b84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9b85:{NFSU2_TR(0x4d9b85);
w4(R+4,u32(0x83a9d0ull));
}
B4d9b8a:{NFSU2_TR(0x4d9b8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9b8full));
TAIL_STATIC(0x52a440u,52a);
}
B4d9b8f:L4d9b8f:{c.instructions+=5;NFSU2_TR(0x4d9b8f);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4d9b95:{NFSU2_TR(0x4d9b95);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d9b99:{NFSU2_TR(0x4d9b99);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d9b9b:{NFSU2_TR(0x4d9b9b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d9b9d:{NFSU2_TR(0x4d9b9d);
if(r1(R+518)){{goto L4d9bbd;}}
}
B4d9b9f:L4d9b9f:{c.instructions+=7;NFSU2_TR(0x4d9b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9ba2:{NFSU2_TR(0x4d9ba2);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4d9ba8:{NFSU2_TR(0x4d9ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9bab:{NFSU2_TR(0x4d9bab);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4d9bb1:{NFSU2_TR(0x4d9bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9bb4:{NFSU2_TR(0x4d9bb4);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4d9bba:{NFSU2_TR(0x4d9bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9bbd:L4d9bbd:{c.instructions+=3;NFSU2_TR(0x4d9bbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9bc0:{NFSU2_TR(0x4d9bc0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4d9bc3:{NFSU2_TR(0x4d9bc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d9be2;}}
}
B4d9bc5:L4d9bc5:{c.instructions+=5;NFSU2_TR(0x4d9bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d9bc8:{NFSU2_TR(0x4d9bc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9bc9:{NFSU2_TR(0x4d9bc9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9bca:{NFSU2_TR(0x4d9bca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9bcb:{NFSU2_TR(0x4d9bcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9bd0ull));
TAIL_STATIC(0x4c65f0u,4c6);
}
B4d9bd0:L4d9bd0:{c.instructions+=5;NFSU2_TR(0x4d9bd0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9bd1:{NFSU2_TR(0x4d9bd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d9bd4:{NFSU2_TR(0x4d9bd4);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9bd9:{NFSU2_TR(0x4d9bd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9bda:{NFSU2_TR(0x4d9bda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9bdfull));
TAIL_STATIC(0x43dda0u,43d);
}
B4d9bdf:L4d9bdf:{c.instructions+=1;NFSU2_TR(0x4d9bdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d9be2:L4d9be2:{c.instructions+=4;NFSU2_TR(0x4d9be2);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9be4:{NFSU2_TR(0x4d9be4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9be5:{NFSU2_TR(0x4d9be5);
u8 U[4];
w4(U+0,u32(0x835bb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9bea:{NFSU2_TR(0x4d9bea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9befull));
TAIL_STATIC(0x43e030u,43e);
}
B4d9bef:L4d9bef:{c.instructions+=4;NFSU2_TR(0x4d9bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d9bf2:{NFSU2_TR(0x4d9bf2);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9bf4:{NFSU2_TR(0x4d9bf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9bf5:{NFSU2_TR(0x4d9bf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9bfaull));
TAIL_STATIC(0x440820u,440);
}
B4d9bfa:L4d9bfa:{c.instructions+=7;NFSU2_TR(0x4d9bfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9bfd:{NFSU2_TR(0x4d9bfd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4d9c00:{NFSU2_TR(0x4d9c00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9c01:{NFSU2_TR(0x4d9c01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9c02:{NFSU2_TR(0x4d9c02);
w4(R+4,u32(0x83a9d0ull));
}
B4d9c07:{NFSU2_TR(0x4d9c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9c0a:{NFSU2_TR(0x4d9c0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9c0full));
TAIL_STATIC(0x52a450u,52a);
}
B4d9c0f:L4d9c0f:{c.instructions+=12;NFSU2_TR(0x4d9c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d9c12:{NFSU2_TR(0x4d9c12);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d9c15:{NFSU2_TR(0x4d9c15);
u8 U[4];
w4(U+0,u32(0x10dull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d9c1b:{NFSU2_TR(0x4d9c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9c1e:{NFSU2_TR(0x4d9c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9c21:{NFSU2_TR(0x4d9c21);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9c24:{NFSU2_TR(0x4d9c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9c27:{NFSU2_TR(0x4d9c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d9c2e:{NFSU2_TR(0x4d9c2e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4d9c32:{NFSU2_TR(0x4d9c32);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9c35:{NFSU2_TR(0x4d9c35);
u8 U[14];
__builtin_memmove((U+6),gp(0x8650d0),4);
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
B4d9c3b:{NFSU2_TR(0x4d9c3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d9c55;}}
}
B4d9c3d:L4d9c3d:{c.instructions+=10;NFSU2_TR(0x4d9c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9c40:{NFSU2_TR(0x4d9c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d9c43:{NFSU2_TR(0x4d9c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9c46:{NFSU2_TR(0x4d9c46);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9c47:{NFSU2_TR(0x4d9c47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9c48:{NFSU2_TR(0x4d9c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9c4b:{NFSU2_TR(0x4d9c4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9c4c:{NFSU2_TR(0x4d9c4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d9c4f:{NFSU2_TR(0x4d9c4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9c50:{NFSU2_TR(0x4d9c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9c55ull));
TAIL_STATIC(0x6fbf13u,6fb);
}
B4d9c55:L4d9c55:{c.instructions+=4;NFSU2_TR(0x4d9c55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d9c56:{NFSU2_TR(0x4d9c56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9c57:{NFSU2_TR(0x4d9c57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d9c58:{NFSU2_TR(0x4d9c58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9c60:L4d9c60:{c.instructions+=12;NFSU2_TR(0x4d9c60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9c61:{NFSU2_TR(0x4d9c61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9c62:{NFSU2_TR(0x4d9c62);
__builtin_memmove((R+24),(R+4),4);
}
B4d9c64:{NFSU2_TR(0x4d9c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d9c67:{NFSU2_TR(0x4d9c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9c6a:{NFSU2_TR(0x4d9c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d9c6d:{NFSU2_TR(0x4d9c6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9c6e:{NFSU2_TR(0x4d9c6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9c6f:{NFSU2_TR(0x4d9c6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9c70:{NFSU2_TR(0x4d9c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9c73:{NFSU2_TR(0x4d9c73);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9c74:{NFSU2_TR(0x4d9c74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9c79ull));
TAIL_STATIC(0x4c65f0u,4c6);
}
B4d9c79:L4d9c79:{c.instructions+=4;NFSU2_TR(0x4d9c79);
w4(R+4,u32(0x83a9e0ull));
}
B4d9c7e:{NFSU2_TR(0x4d9c7e);
__builtin_memmove((R+12),(R+0),4);
}
B4d9c80:{NFSU2_TR(0x4d9c80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d9c83:{NFSU2_TR(0x4d9c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9c88ull));
TAIL_STATIC(0x502fd0u,502);
}
B4d9c88:L4d9c88:{c.instructions+=3;NFSU2_TR(0x4d9c88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9c89:{NFSU2_TR(0x4d9c89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9c8a:{NFSU2_TR(0x4d9c8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9c8full));
TAIL_STATIC(0x43dbd0u,43d);
}
B4d9c8f:L4d9c8f:{c.instructions+=2;NFSU2_TR(0x4d9c8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9c90:{NFSU2_TR(0x4d9c90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9c95ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4d9c95:L4d9c95:{c.instructions+=7;NFSU2_TR(0x4d9c95);
u8 U[13];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x20ull));
s1(u32(r4(U+8)),r1(U+12));
}
B4d9c9a:{NFSU2_TR(0x4d9c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9c9d:{NFSU2_TR(0x4d9c9d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9c9f:{NFSU2_TR(0x4d9c9f);
u8 U[12];
w4(U+0,u32(u32(u32(0x31ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4d9ca3:{NFSU2_TR(0x4d9ca3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9ca4:{NFSU2_TR(0x4d9ca4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9ca5:{NFSU2_TR(0x4d9ca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9caaull));
TAIL_STATIC(0x523cb0u,523);
}
B4d9caa:L4d9caa:{c.instructions+=4;NFSU2_TR(0x4d9caa);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9cac:{NFSU2_TR(0x4d9cac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9cad:{NFSU2_TR(0x4d9cad);
u8 U[4];
w4(U+0,u32(0x835bb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9cb2:{NFSU2_TR(0x4d9cb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9cb7ull));
TAIL_STATIC(0x43e030u,43e);
}
B4d9cb7:L4d9cb7:{c.instructions+=15;NFSU2_TR(0x4d9cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d9cba:{NFSU2_TR(0x4d9cba);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4d9cbc:{NFSU2_TR(0x4d9cbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d9cbf:{NFSU2_TR(0x4d9cbf);
u8 U[4];
w4(U+0,u32(0x10dull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d9cc5:{NFSU2_TR(0x4d9cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9cc8:{NFSU2_TR(0x4d9cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9ccb:{NFSU2_TR(0x4d9ccb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9cce:{NFSU2_TR(0x4d9cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9cd1:{NFSU2_TR(0x4d9cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d9cd8:{NFSU2_TR(0x4d9cd8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4d9cdc:{NFSU2_TR(0x4d9cdc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9cdf:{NFSU2_TR(0x4d9cdf);
__builtin_memmove((R+8),gp(0x8650d0),4);
}
B4d9ce5:{NFSU2_TR(0x4d9ce5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4d9ce8:{NFSU2_TR(0x4d9ce8);
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
B4d9cea:{NFSU2_TR(0x4d9cea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d9cfb;}}
}
B4d9cec:L4d9cec:{c.instructions+=7;NFSU2_TR(0x4d9cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9cef:{NFSU2_TR(0x4d9cef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9cf0:{NFSU2_TR(0x4d9cf0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9cf1:{NFSU2_TR(0x4d9cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9cf4:{NFSU2_TR(0x4d9cf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9cf5:{NFSU2_TR(0x4d9cf5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9cf6:{NFSU2_TR(0x4d9cf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9cfbull));
TAIL_STATIC(0x6fbf13u,6fb);
}
B4d9cfb:L4d9cfb:{c.instructions+=4;NFSU2_TR(0x4d9cfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d9cfc:{NFSU2_TR(0x4d9cfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9cfd:{NFSU2_TR(0x4d9cfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d9cfe:{NFSU2_TR(0x4d9cfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9d00:L4d9d00:{c.instructions+=7;NFSU2_TR(0x4d9d00);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4d9d05:{NFSU2_TR(0x4d9d05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d9d07:{NFSU2_TR(0x4d9d07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9d08:{NFSU2_TR(0x4d9d08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9d09:{NFSU2_TR(0x4d9d09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9d0a:{NFSU2_TR(0x4d9d0a);
__builtin_memmove((R+24),(R+4),4);
}
B4d9d0c:{NFSU2_TR(0x4d9d0c);
if(r1(R+518)){{goto L4d9d1c;}}
}
B4d9d0e:L4d9d0e:{c.instructions+=4;NFSU2_TR(0x4d9d0e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9d10:{NFSU2_TR(0x4d9d10);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9d12:{NFSU2_TR(0x4d9d12);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9d14:{NFSU2_TR(0x4d9d14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9d19ull));
TAIL_STATIC(0x57d670u,57d);
}
B4d9d19:L4d9d19:{c.instructions+=1;NFSU2_TR(0x4d9d19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d9d1c:L4d9d1c:{c.instructions+=4;NFSU2_TR(0x4d9d1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d9d20:{NFSU2_TR(0x4d9d20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9d21:{NFSU2_TR(0x4d9d21);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d9d24:{NFSU2_TR(0x4d9d24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9d29ull));
TAIL_STATIC(0x4a9500u,4a9);
}
B4d9d29:L4d9d29:{c.instructions+=10;NFSU2_TR(0x4d9d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d9d2c:{NFSU2_TR(0x4d9d2c);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4d9d32:{NFSU2_TR(0x4d9d32);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d9d35:{NFSU2_TR(0x4d9d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d9d38:{NFSU2_TR(0x4d9d38);
__builtin_memmove((R+24),(R+0),4);
}
B4d9d3a:{NFSU2_TR(0x4d9d3a);
w1(R+512,u8((r4(R+24))!=(u32(0x0ull))));
w4(R+24,u32(0-u32(r4(R+24))));
}
B4d9d3c:{NFSU2_TR(0x4d9d3c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4d9d3e:{NFSU2_TR(0x4d9d3e);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x2ull))));
}
B4d9d41:{NFSU2_TR(0x4d9d41);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d9d43:{NFSU2_TR(0x4d9d43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d9d7c;}}
}
B4d9d45:L4d9d45:{c.instructions+=2;NFSU2_TR(0x4d9d45);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9d4a:{NFSU2_TR(0x4d9d4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9d4full));
TAIL_STATIC(0x43dbb0u,43d);
}
B4d9d4f:L4d9d4f:{c.instructions+=9;NFSU2_TR(0x4d9d4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4d9d51:{NFSU2_TR(0x4d9d51);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4d9d57:{NFSU2_TR(0x4d9d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9d5a:{NFSU2_TR(0x4d9d5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9d5d:{NFSU2_TR(0x4d9d5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9d5e:{NFSU2_TR(0x4d9d5e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9d5f:{NFSU2_TR(0x4d9d5f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9d64:{NFSU2_TR(0x4d9d64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9d65:{NFSU2_TR(0x4d9d65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9d6aull));
TAIL_STATIC(0x4d6cf0u,4d6);
}
B4d9d6a:L4d9d6a:{c.instructions+=8;NFSU2_TR(0x4d9d6a);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4d9d6f:{NFSU2_TR(0x4d9d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9d72:{NFSU2_TR(0x4d9d72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d9d73:{NFSU2_TR(0x4d9d73);
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
B4d9d74:{NFSU2_TR(0x4d9d74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9d75:{NFSU2_TR(0x4d9d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9d78:{NFSU2_TR(0x4d9d78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d9d79:{NFSU2_TR(0x4d9d79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9d7c:L4d9d7c:{c.instructions+=2;NFSU2_TR(0x4d9d7c);
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
B4d9d7e:{NFSU2_TR(0x4d9d7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d9da5;}}
}
B4d9d80:L4d9d80:{c.instructions+=9;NFSU2_TR(0x4d9d80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4d9d82:{NFSU2_TR(0x4d9d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d9d85:{NFSU2_TR(0x4d9d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d9d88:{NFSU2_TR(0x4d9d88);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9d8a:{NFSU2_TR(0x4d9d8a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4d9d8d:{NFSU2_TR(0x4d9d8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9d8e:{NFSU2_TR(0x4d9d8e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B4d9d90:{NFSU2_TR(0x4d9d90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9d91:{NFSU2_TR(0x4d9d91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9d96ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4d9d96:L4d9d96:{c.instructions+=5;NFSU2_TR(0x4d9d96);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4d9d9b:{NFSU2_TR(0x4d9d9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9d9e:{NFSU2_TR(0x4d9d9e);
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d9da1:{NFSU2_TR(0x4d9da1);
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
B4d9da2:{NFSU2_TR(0x4d9da2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9da5:L4d9da5:{c.instructions+=4;NFSU2_TR(0x4d9da5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d9da6:{NFSU2_TR(0x4d9da6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9da7:{NFSU2_TR(0x4d9da7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d9da8:{NFSU2_TR(0x4d9da8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9db0:L4d9db0:{c.instructions+=4;NFSU2_TR(0x4d9db0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
}
B4d9db3:{NFSU2_TR(0x4d9db3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9db4:{NFSU2_TR(0x4d9db4);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9db9:{NFSU2_TR(0x4d9db9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9dbeull));
TAIL_STATIC(0x575620u,575);
}
B4d9dbe:L4d9dbe:{c.instructions+=37;NFSU2_TR(0x4d9dbe);
__builtin_memmove((R+24),(R+0),4);
}
B4d9dc0:{NFSU2_TR(0x4d9dc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x338ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d9dc6:{NFSU2_TR(0x4d9dc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9dca:{NFSU2_TR(0x4d9dca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36aull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d9dd0:{NFSU2_TR(0x4d9dd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x39cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d9dd6:{NFSU2_TR(0x4d9dd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ceull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d9ddc:{NFSU2_TR(0x4d9ddc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9de0:{NFSU2_TR(0x4d9de0);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d9de4:{NFSU2_TR(0x4d9de4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9de7:{NFSU2_TR(0x4d9de7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9deb:{NFSU2_TR(0x4d9deb);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B4d9dee:{NFSU2_TR(0x4d9dee);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9df2:{NFSU2_TR(0x4d9df2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d9df4:{NFSU2_TR(0x4d9df4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4d9df5:{NFSU2_TR(0x4d9df5);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9df8:{NFSU2_TR(0x4d9df8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9dfc:{NFSU2_TR(0x4d9dfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9e00:{NFSU2_TR(0x4d9e00);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9e04:{NFSU2_TR(0x4d9e04);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9e08:{NFSU2_TR(0x4d9e08);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9e0c:{NFSU2_TR(0x4d9e0c);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9e10:{NFSU2_TR(0x4d9e10);
u8 U[5];
w4(U+0,u32(u32(u32(0x35ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9e14:{NFSU2_TR(0x4d9e14);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9e18:{NFSU2_TR(0x4d9e18);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9e1c:{NFSU2_TR(0x4d9e1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9e20:{NFSU2_TR(0x4d9e20);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d9e28:{NFSU2_TR(0x4d9e28);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9e2c:{NFSU2_TR(0x4d9e2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9e30:{NFSU2_TR(0x4d9e30);
u8 U[5];
w4(U+0,u32(u32(u32(0x55ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9e34:{NFSU2_TR(0x4d9e34);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9e38:{NFSU2_TR(0x4d9e38);
u8 U[5];
w4(U+0,u32(u32(u32(0x59ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9e3c:{NFSU2_TR(0x4d9e3c);
u8 U[5];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9e40:{NFSU2_TR(0x4d9e40);
u8 U[5];
w4(U+0,u32(u32(u32(0x57ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9e44:{NFSU2_TR(0x4d9e44);
u8 U[5];
w4(U+0,u32(u32(u32(0x56ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9e48:{NFSU2_TR(0x4d9e48);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d9e4c:{NFSU2_TR(0x4d9e4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9e50:{NFSU2_TR(0x4d9e50);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4da031u,4da);}
}
B4d9e56:L4d9e56:{c.instructions+=1;NFSU2_TR(0x4d9e56);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4da040ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4d9e5d:L4d9e5d:{c.instructions+=6;NFSU2_TR(0x4d9e5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d9e61:{NFSU2_TR(0x4d9e61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9e62:{NFSU2_TR(0x4d9e62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9e63:{NFSU2_TR(0x4d9e63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9e64:{NFSU2_TR(0x4d9e64);
w4(R+4,u32(0x7f68c4ull));
}
B4d9e69:{NFSU2_TR(0x4d9e69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9e6eull));
TAIL_STATIC(0x4c6050u,4c6);
}
B4d9e6e:L4d9e6e:{c.instructions+=2;NFSU2_TR(0x4d9e6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9e6f:{NFSU2_TR(0x4d9e6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9e74ull));
TAIL_STATIC(0x575630u,575);
}
B4d9e74:L4d9e74:{c.instructions+=4;NFSU2_TR(0x4d9e74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9e77:{NFSU2_TR(0x4d9e77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9e78:{NFSU2_TR(0x4d9e78);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9e7b:{NFSU2_TR(0x4d9e7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9e7c:L4d9e7c:{c.instructions+=2;NFSU2_TR(0x4d9e7c);
w4(R+4,u32(0x7f68c4ull));
}
B4d9e81:{NFSU2_TR(0x4d9e81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9e86ull));
TAIL_STATIC(0x4a97d0u,4a9);
}
B4d9e86:L4d9e86:{c.instructions+=2;NFSU2_TR(0x4d9e86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9e87:{NFSU2_TR(0x4d9e87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9e8cull));
TAIL_STATIC(0x575630u,575);
}
B4d9e8c:L4d9e8c:{c.instructions+=4;NFSU2_TR(0x4d9e8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9e8f:{NFSU2_TR(0x4d9e8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9e90:{NFSU2_TR(0x4d9e90);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9e93:{NFSU2_TR(0x4d9e93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9e94:L4d9e94:{c.instructions+=9;NFSU2_TR(0x4d9e94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4d9e97:{NFSU2_TR(0x4d9e97);
__builtin_memmove((R+4),(R+16),4);
}
B4d9e99:{NFSU2_TR(0x4d9e99);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d9e9b:{NFSU2_TR(0x4d9e9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d9e9f:{NFSU2_TR(0x4d9e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9ea2:{NFSU2_TR(0x4d9ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d9ea5:{NFSU2_TR(0x4d9ea5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9ea6:{NFSU2_TR(0x4d9ea6);
w4(R+4,u32(0x7f68c4ull));
}
B4d9eab:{NFSU2_TR(0x4d9eab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9eb0ull));
TAIL_STATIC(0x4c61a0u,4c6);
}
B4d9eb0:L4d9eb0:{c.instructions+=2;NFSU2_TR(0x4d9eb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9eb1:{NFSU2_TR(0x4d9eb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9eb6ull));
TAIL_STATIC(0x575630u,575);
}
B4d9eb6:L4d9eb6:{c.instructions+=4;NFSU2_TR(0x4d9eb6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9eb9:{NFSU2_TR(0x4d9eb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9eba:{NFSU2_TR(0x4d9eba);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9ebd:{NFSU2_TR(0x4d9ebd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9ebe:L4d9ebe:{c.instructions+=2;NFSU2_TR(0x4d9ebe);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d9ec4:{NFSU2_TR(0x4d9ec4);
if(r1(R+518)){TAIL_STATIC(0x4da031u,4da);}
}
B4d9eca:L4d9eca:{c.instructions+=4;NFSU2_TR(0x4d9eca);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9ecc:{NFSU2_TR(0x4d9ecc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9ece:{NFSU2_TR(0x4d9ece);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9ed0:{NFSU2_TR(0x4d9ed0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9ed5ull));
TAIL_STATIC(0x57d670u,57d);
}
B4d9ed5:L4d9ed5:{c.instructions+=3;NFSU2_TR(0x4d9ed5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d9ed8:{NFSU2_TR(0x4d9ed8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9ed9:{NFSU2_TR(0x4d9ed9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9edeull));
TAIL_STATIC(0x575630u,575);
}
B4d9ede:L4d9ede:{c.instructions+=4;NFSU2_TR(0x4d9ede);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9ee1:{NFSU2_TR(0x4d9ee1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9ee2:{NFSU2_TR(0x4d9ee2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9ee5:{NFSU2_TR(0x4d9ee5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9ee6:L4d9ee6:{c.instructions+=3;NFSU2_TR(0x4d9ee6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9ee7:{NFSU2_TR(0x4d9ee7);
w4(R+4,u32(0x7f68c4ull));
}
B4d9eec:{NFSU2_TR(0x4d9eec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9ef1ull));
TAIL_STATIC(0x4c6270u,4c6);
}
B4d9ef1:L4d9ef1:{c.instructions+=2;NFSU2_TR(0x4d9ef1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9ef2:{NFSU2_TR(0x4d9ef2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9ef7ull));
TAIL_STATIC(0x575630u,575);
}
B4d9ef7:L4d9ef7:{c.instructions+=4;NFSU2_TR(0x4d9ef7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9efa:{NFSU2_TR(0x4d9efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9efb:{NFSU2_TR(0x4d9efb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9efe:{NFSU2_TR(0x4d9efe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9eff:L4d9eff:{c.instructions+=3;NFSU2_TR(0x4d9eff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9f00:{NFSU2_TR(0x4d9f00);
w4(R+4,u32(0x7f68c4ull));
}
B4d9f05:{NFSU2_TR(0x4d9f05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9f0aull));
TAIL_STATIC(0x4a9830u,4a9);
}
B4d9f0a:L4d9f0a:{c.instructions+=2;NFSU2_TR(0x4d9f0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9f0b:{NFSU2_TR(0x4d9f0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9f10ull));
TAIL_STATIC(0x575630u,575);
}
B4d9f10:L4d9f10:{c.instructions+=4;NFSU2_TR(0x4d9f10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9f13:{NFSU2_TR(0x4d9f13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9f14:{NFSU2_TR(0x4d9f14);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9f17:{NFSU2_TR(0x4d9f17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9f18:L4d9f18:{c.instructions+=3;NFSU2_TR(0x4d9f18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9f19:{NFSU2_TR(0x4d9f19);
w4(R+4,u32(0x7f68c4ull));
}
B4d9f1e:{NFSU2_TR(0x4d9f1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9f23ull));
TAIL_STATIC(0x4a9850u,4a9);
}
B4d9f23:L4d9f23:{c.instructions+=2;NFSU2_TR(0x4d9f23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9f24:{NFSU2_TR(0x4d9f24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9f29ull));
TAIL_STATIC(0x575630u,575);
}
B4d9f29:L4d9f29:{c.instructions+=4;NFSU2_TR(0x4d9f29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9f2c:{NFSU2_TR(0x4d9f2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9f2d:{NFSU2_TR(0x4d9f2d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9f30:{NFSU2_TR(0x4d9f30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9f31:L4d9f31:{c.instructions+=3;NFSU2_TR(0x4d9f31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9f32:{NFSU2_TR(0x4d9f32);
w4(R+4,u32(0x7f68c4ull));
}
B4d9f37:{NFSU2_TR(0x4d9f37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9f3cull));
TAIL_STATIC(0x4c6330u,4c6);
}
B4d9f3c:L4d9f3c:{c.instructions+=2;NFSU2_TR(0x4d9f3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9f3d:{NFSU2_TR(0x4d9f3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9f42ull));
TAIL_STATIC(0x575630u,575);
}
B4d9f42:L4d9f42:{c.instructions+=4;NFSU2_TR(0x4d9f42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9f45:{NFSU2_TR(0x4d9f45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9f46:{NFSU2_TR(0x4d9f46);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9f49:{NFSU2_TR(0x4d9f49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9f4a:L4d9f4a:{c.instructions+=2;NFSU2_TR(0x4d9f4a);
w4(R+4,u32(0x7f68c4ull));
}
B4d9f4f:{NFSU2_TR(0x4d9f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9f54ull));
TAIL_STATIC(0x4a9980u,4a9);
}
B4d9f54:L4d9f54:{c.instructions+=2;NFSU2_TR(0x4d9f54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9f55:{NFSU2_TR(0x4d9f55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9f5aull));
TAIL_STATIC(0x575630u,575);
}
B4d9f5a:L4d9f5a:{c.instructions+=4;NFSU2_TR(0x4d9f5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9f5d:{NFSU2_TR(0x4d9f5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9f5e:{NFSU2_TR(0x4d9f5e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9f61:{NFSU2_TR(0x4d9f61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9f62:L4d9f62:{c.instructions+=4;NFSU2_TR(0x4d9f62);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d9f66:{NFSU2_TR(0x4d9f66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9f67:{NFSU2_TR(0x4d9f67);
w4(R+4,u32(0x7f68c4ull));
}
B4d9f6c:{NFSU2_TR(0x4d9f6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9f71ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d9d00u);}goto L4d9d00;}
}
B4d9f71:L4d9f71:{c.instructions+=2;NFSU2_TR(0x4d9f71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9f72:{NFSU2_TR(0x4d9f72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9f77ull));
TAIL_STATIC(0x575630u,575);
}
B4d9f77:L4d9f77:{c.instructions+=4;NFSU2_TR(0x4d9f77);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9f7a:{NFSU2_TR(0x4d9f7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9f7b:{NFSU2_TR(0x4d9f7b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9f7e:{NFSU2_TR(0x4d9f7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9f7f:L4d9f7f:{c.instructions+=3;NFSU2_TR(0x4d9f7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9f80:{NFSU2_TR(0x4d9f80);
w4(R+4,u32(0x7f68c4ull));
}
B4d9f85:{NFSU2_TR(0x4d9f85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9f8aull));
TAIL_STATIC(0x4a99a0u,4a9);
}
B4d9f8a:L4d9f8a:{c.instructions+=2;NFSU2_TR(0x4d9f8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9f8b:{NFSU2_TR(0x4d9f8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9f90ull));
TAIL_STATIC(0x575630u,575);
}
B4d9f90:L4d9f90:{c.instructions+=4;NFSU2_TR(0x4d9f90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9f93:{NFSU2_TR(0x4d9f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9f94:{NFSU2_TR(0x4d9f94);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9f97:{NFSU2_TR(0x4d9f97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9f98:L4d9f98:{c.instructions+=3;NFSU2_TR(0x4d9f98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9f99:{NFSU2_TR(0x4d9f99);
w4(R+4,u32(0x7f68c4ull));
}
B4d9f9e:{NFSU2_TR(0x4d9f9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9fa3ull));
TAIL_STATIC(0x4a99f0u,4a9);
}
B4d9fa3:L4d9fa3:{c.instructions+=2;NFSU2_TR(0x4d9fa3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9fa4:{NFSU2_TR(0x4d9fa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9fa9ull));
TAIL_STATIC(0x575630u,575);
}
B4d9fa9:L4d9fa9:{c.instructions+=4;NFSU2_TR(0x4d9fa9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9fac:{NFSU2_TR(0x4d9fac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9fad:{NFSU2_TR(0x4d9fad);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9fb0:{NFSU2_TR(0x4d9fb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9fb1:L4d9fb1:{c.instructions+=4;NFSU2_TR(0x4d9fb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9fb2:{NFSU2_TR(0x4d9fb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9fb3:{NFSU2_TR(0x4d9fb3);
w4(R+4,u32(0x7f68c4ull));
}
B4d9fb8:{NFSU2_TR(0x4d9fb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9fbdull));
TAIL_STATIC(0x4c63c0u,4c6);
}
B4d9fbd:L4d9fbd:{c.instructions+=2;NFSU2_TR(0x4d9fbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9fbe:{NFSU2_TR(0x4d9fbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9fc3ull));
TAIL_STATIC(0x575630u,575);
}
B4d9fc3:L4d9fc3:{c.instructions+=4;NFSU2_TR(0x4d9fc3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9fc6:{NFSU2_TR(0x4d9fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9fc7:{NFSU2_TR(0x4d9fc7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9fca:{NFSU2_TR(0x4d9fca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9fcb:L4d9fcb:{c.instructions+=4;NFSU2_TR(0x4d9fcb);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d9fcf:{NFSU2_TR(0x4d9fcf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9fd0:{NFSU2_TR(0x4d9fd0);
w4(R+4,u32(0x7f68c4ull));
}
B4d9fd5:{NFSU2_TR(0x4d9fd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9fdaull));
TAIL_STATIC(0x4a9a20u,4a9);
}
B4d9fda:L4d9fda:{c.instructions+=2;NFSU2_TR(0x4d9fda);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9fdb:{NFSU2_TR(0x4d9fdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9fe0ull));
TAIL_STATIC(0x575630u,575);
}
B4d9fe0:L4d9fe0:{c.instructions+=4;NFSU2_TR(0x4d9fe0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9fe3:{NFSU2_TR(0x4d9fe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9fe4:{NFSU2_TR(0x4d9fe4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9fe7:{NFSU2_TR(0x4d9fe7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d9fe8:L4d9fe8:{c.instructions+=2;NFSU2_TR(0x4d9fe8);
w4(R+4,u32(0x7f68c4ull));
}
B4d9fed:{NFSU2_TR(0x4d9fed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9ff2ull));
TAIL_STATIC(0x4a9b50u,4a9);
}
B4d9ff2:L4d9ff2:{c.instructions+=2;NFSU2_TR(0x4d9ff2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d9ff3:{NFSU2_TR(0x4d9ff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9ff8ull));
TAIL_STATIC(0x575630u,575);
}
B4d9ff8:L4d9ff8:{c.instructions+=4;NFSU2_TR(0x4d9ff8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d9ffb:{NFSU2_TR(0x4d9ffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d9ffc:{NFSU2_TR(0x4d9ffc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d9fff:{NFSU2_TR(0x4d9fff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x4d9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
