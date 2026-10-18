#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6af(u8* __restrict R,Cpu& c);
u32 body_6b0(u8* __restrict R,Cpu& c);
u32 body_6b4(u8* __restrict R,Cpu& c);
u32 body_6b6(u8* __restrict R,Cpu& c);
u32 body_6b7(u8* __restrict R,Cpu& c);
u32 body_6b8(u8* __restrict R,Cpu& c);
u32 body_6ba(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6d2(u8* __restrict R,Cpu& c);
u32 body_6d3(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6b9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6b9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6b9(u8* __restrict R,Cpu& c);
u32 page_6b9(Cpu& c){return body_6b9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6b9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6b9003:goto L6b9003;
case 0x6b9006:c.instructions+=17;goto B6b9006;
case 0x6b9009:c.instructions+=16;goto B6b9009;
case 0x6b900c:c.instructions+=15;goto B6b900c;
case 0x6b900e:c.instructions+=14;goto B6b900e;
case 0x6b9010:c.instructions+=13;goto B6b9010;
case 0x6b9013:c.instructions+=12;goto B6b9013;
case 0x6b9015:c.instructions+=11;goto B6b9015;
case 0x6b9018:c.instructions+=10;goto B6b9018;
case 0x6b901b:c.instructions+=9;goto B6b901b;
case 0x6b901d:c.instructions+=8;goto B6b901d;
case 0x6b9023:c.instructions+=7;goto B6b9023;
case 0x6b9029:c.instructions+=6;goto B6b9029;
case 0x6b902c:c.instructions+=5;goto B6b902c;
case 0x6b9032:c.instructions+=4;goto B6b9032;
case 0x6b9033:c.instructions+=3;goto B6b9033;
case 0x6b9035:c.instructions+=2;goto B6b9035;
case 0x6b9038:c.instructions+=1;goto B6b9038;
case 0x6b903d:goto L6b903d;
case 0x6b903f:c.instructions+=1;goto B6b903f;
case 0x6b9045:goto L6b9045;
case 0x6b904b:c.instructions+=2;goto B6b904b;
case 0x6b9050:c.instructions+=1;goto B6b9050;
case 0x6b9056:goto L6b9056;
case 0x6b905c:c.instructions+=5;goto B6b905c;
case 0x6b905f:c.instructions+=4;goto B6b905f;
case 0x6b9065:c.instructions+=3;goto B6b9065;
case 0x6b9066:c.instructions+=2;goto B6b9066;
case 0x6b9068:c.instructions+=1;goto B6b9068;
case 0x6b906d:goto L6b906d;
case 0x6b906f:c.instructions+=1;goto B6b906f;
case 0x6b9075:goto L6b9075;
case 0x6b9078:c.instructions+=1;goto B6b9078;
case 0x6b907d:goto L6b907d;
case 0x6b9083:c.instructions+=1;goto B6b9083;
case 0x6b9085:goto L6b9085;
case 0x6b9086:c.instructions+=2;goto B6b9086;
case 0x6b9088:c.instructions+=1;goto B6b9088;
case 0x6b908d:goto L6b908d;
case 0x6b908f:c.instructions+=1;goto B6b908f;
case 0x6b9091:goto L6b9091;
case 0x6b9094:c.instructions+=3;goto B6b9094;
case 0x6b9096:c.instructions+=2;goto B6b9096;
case 0x6b909d:c.instructions+=1;goto B6b909d;
case 0x6b909f:goto L6b909f;
case 0x6b90a2:c.instructions+=1;goto B6b90a2;
case 0x6b90a5:goto L6b90a5;
case 0x6b90a7:c.instructions+=3;goto B6b90a7;
case 0x6b90aa:c.instructions+=2;goto B6b90aa;
case 0x6b90ae:c.instructions+=1;goto B6b90ae;
case 0x6b90b0:goto L6b90b0;
case 0x6b90b4:goto L6b90b4;
case 0x6b90b7:c.instructions+=2;goto B6b90b7;
case 0x6b90b8:c.instructions+=1;goto B6b90b8;
case 0x6b90ba:goto L6b90ba;
case 0x6b90be:c.instructions+=1;goto B6b90be;
case 0x6b90c0:goto L6b90c0;
case 0x6b90c3:c.instructions+=2;goto B6b90c3;
case 0x6b90c5:c.instructions+=1;goto B6b90c5;
case 0x6b90ca:goto L6b90ca;
case 0x6b90cc:c.instructions+=1;goto B6b90cc;
case 0x6b90d2:goto L6b90d2;
case 0x6b90d5:c.instructions+=6;goto B6b90d5;
case 0x6b90db:c.instructions+=5;goto B6b90db;
case 0x6b90e1:c.instructions+=4;goto B6b90e1;
case 0x6b90e4:c.instructions+=3;goto B6b90e4;
case 0x6b90ea:c.instructions+=2;goto B6b90ea;
case 0x6b90ed:c.instructions+=1;goto B6b90ed;
case 0x6b90ef:goto L6b90ef;
case 0x6b90f2:c.instructions+=2;goto B6b90f2;
case 0x6b90f4:c.instructions+=1;goto B6b90f4;
case 0x6b90f9:goto L6b90f9;
case 0x6b90fd:goto L6b90fd;
case 0x6b9101:c.instructions+=3;goto B6b9101;
case 0x6b9102:c.instructions+=2;goto B6b9102;
case 0x6b9104:c.instructions+=1;goto B6b9104;
case 0x6b9109:goto L6b9109;
case 0x6b910b:c.instructions+=1;goto B6b910b;
case 0x6b9111:goto L6b9111;
case 0x6b9115:c.instructions+=10;goto B6b9115;
case 0x6b9119:c.instructions+=9;goto B6b9119;
case 0x6b911c:c.instructions+=8;goto B6b911c;
case 0x6b911f:c.instructions+=7;goto B6b911f;
case 0x6b9120:c.instructions+=6;goto B6b9120;
case 0x6b9121:c.instructions+=5;goto B6b9121;
case 0x6b9122:c.instructions+=4;goto B6b9122;
case 0x6b9123:c.instructions+=3;goto B6b9123;
case 0x6b9126:c.instructions+=2;goto B6b9126;
case 0x6b9128:c.instructions+=1;goto B6b9128;
case 0x6b912a:goto L6b912a;
case 0x6b912d:goto L6b912d;
case 0x6b9130:c.instructions+=6;goto B6b9130;
case 0x6b9133:c.instructions+=5;goto B6b9133;
case 0x6b9136:c.instructions+=4;goto B6b9136;
case 0x6b9139:c.instructions+=3;goto B6b9139;
case 0x6b913c:c.instructions+=2;goto B6b913c;
case 0x6b9140:c.instructions+=1;goto B6b9140;
case 0x6b9142:goto L6b9142;
case 0x6b9145:c.instructions+=6;goto B6b9145;
case 0x6b9148:c.instructions+=5;goto B6b9148;
case 0x6b914c:c.instructions+=4;goto B6b914c;
case 0x6b914f:c.instructions+=3;goto B6b914f;
case 0x6b9152:c.instructions+=2;goto B6b9152;
case 0x6b9159:c.instructions+=1;goto B6b9159;
case 0x6b9160:goto L6b9160;
case 0x6b9163:c.instructions+=3;goto B6b9163;
case 0x6b9166:c.instructions+=2;goto B6b9166;
case 0x6b9169:c.instructions+=1;goto B6b9169;
case 0x6b916b:goto L6b916b;
case 0x6b916e:c.instructions+=12;goto B6b916e;
case 0x6b916f:c.instructions+=11;goto B6b916f;
case 0x6b9175:c.instructions+=10;goto B6b9175;
case 0x6b9176:c.instructions+=9;goto B6b9176;
case 0x6b9177:c.instructions+=8;goto B6b9177;
case 0x6b917a:c.instructions+=7;goto B6b917a;
case 0x6b917c:c.instructions+=6;goto B6b917c;
case 0x6b917f:c.instructions+=5;goto B6b917f;
case 0x6b9181:c.instructions+=4;goto B6b9181;
case 0x6b9184:c.instructions+=3;goto B6b9184;
case 0x6b9187:c.instructions+=2;goto B6b9187;
case 0x6b918d:c.instructions+=1;goto B6b918d;
case 0x6b9192:goto L6b9192;
case 0x6b9195:c.instructions+=1;goto B6b9195;
case 0x6b919b:goto L6b919b;
case 0x6b919e:c.instructions+=9;goto B6b919e;
case 0x6b91a1:c.instructions+=8;goto B6b91a1;
case 0x6b91a2:c.instructions+=7;goto B6b91a2;
case 0x6b91a3:c.instructions+=6;goto B6b91a3;
case 0x6b91a4:c.instructions+=5;goto B6b91a4;
case 0x6b91a5:c.instructions+=4;goto B6b91a5;
case 0x6b91a7:c.instructions+=3;goto B6b91a7;
case 0x6b91aa:c.instructions+=2;goto B6b91aa;
case 0x6b91ad:c.instructions+=1;goto B6b91ad;
case 0x6b91b3:goto L6b91b3;
case 0x6b91ba:c.instructions+=5;goto B6b91ba;
case 0x6b91bd:c.instructions+=4;goto B6b91bd;
case 0x6b91c0:c.instructions+=3;goto B6b91c0;
case 0x6b91c4:c.instructions+=2;goto B6b91c4;
case 0x6b91c7:c.instructions+=1;goto B6b91c7;
case 0x6b91c9:goto L6b91c9;
case 0x6b91cc:c.instructions+=2;goto B6b91cc;
case 0x6b91cf:c.instructions+=1;goto B6b91cf;
case 0x6b91d2:goto L6b91d2;
case 0x6b91d5:c.instructions+=2;goto B6b91d5;
case 0x6b91d8:c.instructions+=1;goto B6b91d8;
case 0x6b91da:goto L6b91da;
case 0x6b91dd:c.instructions+=1;goto B6b91dd;
case 0x6b91e3:goto L6b91e3;
case 0x6b91e6:c.instructions+=1;goto B6b91e6;
case 0x6b91ec:goto L6b91ec;
case 0x6b91f2:c.instructions+=7;goto B6b91f2;
case 0x6b91f5:c.instructions+=6;goto B6b91f5;
case 0x6b91f8:c.instructions+=5;goto B6b91f8;
case 0x6b91fb:c.instructions+=4;goto B6b91fb;
case 0x6b91fc:c.instructions+=3;goto B6b91fc;
case 0x6b91fe:c.instructions+=2;goto B6b91fe;
case 0x6b9201:c.instructions+=1;goto B6b9201;
case 0x6b9206:goto L6b9206;
case 0x6b9208:c.instructions+=1;goto B6b9208;
case 0x6b920a:goto L6b920a;
case 0x6b920d:c.instructions+=4;goto B6b920d;
case 0x6b920f:c.instructions+=3;goto B6b920f;
case 0x6b9214:c.instructions+=2;goto B6b9214;
case 0x6b9219:c.instructions+=1;goto B6b9219;
case 0x6b921b:goto L6b921b;
case 0x6b921f:c.instructions+=1;goto B6b921f;
case 0x6b9221:goto L6b9221;
case 0x6b9223:c.instructions+=2;goto B6b9223;
case 0x6b9226:c.instructions+=1;goto B6b9226;
case 0x6b9228:goto L6b9228;
case 0x6b922b:c.instructions+=1;goto B6b922b;
case 0x6b922d:goto L6b922d;
case 0x6b9230:goto L6b9230;
case 0x6b9233:c.instructions+=2;goto B6b9233;
case 0x6b9235:c.instructions+=1;goto B6b9235;
case 0x6b9237:goto L6b9237;
case 0x6b923a:c.instructions+=7;goto B6b923a;
case 0x6b923d:c.instructions+=6;goto B6b923d;
case 0x6b9240:c.instructions+=5;goto B6b9240;
case 0x6b9246:c.instructions+=4;goto B6b9246;
case 0x6b9249:c.instructions+=3;goto B6b9249;
case 0x6b924a:c.instructions+=2;goto B6b924a;
case 0x6b924d:c.instructions+=1;goto B6b924d;
case 0x6b924f:goto L6b924f;
case 0x6b9251:goto L6b9251;
case 0x6b9254:c.instructions+=5;goto B6b9254;
case 0x6b9257:c.instructions+=4;goto B6b9257;
case 0x6b925a:c.instructions+=3;goto B6b925a;
case 0x6b925d:c.instructions+=2;goto B6b925d;
case 0x6b9261:c.instructions+=1;goto B6b9261;
case 0x6b9268:goto L6b9268;
case 0x6b926b:c.instructions+=4;goto B6b926b;
case 0x6b926f:c.instructions+=3;goto B6b926f;
case 0x6b9271:c.instructions+=2;goto B6b9271;
case 0x6b9274:c.instructions+=1;goto B6b9274;
case 0x6b9276:goto L6b9276;
case 0x6b9279:c.instructions+=2;goto B6b9279;
case 0x6b927b:c.instructions+=1;goto B6b927b;
case 0x6b927d:goto L6b927d;
case 0x6b9280:c.instructions+=1;goto B6b9280;
case 0x6b9286:goto L6b9286;
case 0x6b9289:c.instructions+=4;goto B6b9289;
case 0x6b928a:c.instructions+=3;goto B6b928a;
case 0x6b928d:c.instructions+=2;goto B6b928d;
case 0x6b9290:c.instructions+=1;goto B6b9290;
case 0x6b9296:goto L6b9296;
case 0x6b9298:c.instructions+=3;goto B6b9298;
case 0x6b929a:c.instructions+=2;goto B6b929a;
case 0x6b929d:c.instructions+=1;goto B6b929d;
case 0x6b92a0:goto L6b92a0;
case 0x6b92a4:c.instructions+=2;goto B6b92a4;
case 0x6b92a6:c.instructions+=1;goto B6b92a6;
case 0x6b92a8:goto L6b92a8;
case 0x6b92ac:c.instructions+=1;goto B6b92ac;
case 0x6b92b2:goto L6b92b2;
case 0x6b92b4:c.instructions+=1;goto B6b92b4;
case 0x6b92b6:goto L6b92b6;
case 0x6b92ba:c.instructions+=1;goto B6b92ba;
case 0x6b92bc:goto L6b92bc;
case 0x6b92bd:c.instructions+=1;goto B6b92bd;
case 0x6b92c0:goto L6b92c0;
case 0x6b92c3:c.instructions+=2;goto B6b92c3;
case 0x6b92c6:c.instructions+=1;goto B6b92c6;
case 0x6b92c8:goto L6b92c8;
case 0x6b92ca:c.instructions+=1;goto B6b92ca;
case 0x6b92cf:goto L6b92cf;
case 0x6b92d1:c.instructions+=1;goto B6b92d1;
case 0x6b92d3:goto L6b92d3;
case 0x6b92d5:c.instructions+=1;goto B6b92d5;
case 0x6b92da:goto L6b92da;
case 0x6b92dc:goto L6b92dc;
case 0x6b92de:goto L6b92de;
case 0x6b92e0:c.instructions+=2;goto B6b92e0;
case 0x6b92e3:c.instructions+=1;goto B6b92e3;
case 0x6b92e9:goto L6b92e9;
case 0x6b92eb:c.instructions+=8;goto B6b92eb;
case 0x6b92ec:c.instructions+=7;goto B6b92ec;
case 0x6b92ef:c.instructions+=6;goto B6b92ef;
case 0x6b92f0:c.instructions+=5;goto B6b92f0;
case 0x6b92f6:c.instructions+=4;goto B6b92f6;
case 0x6b92fc:c.instructions+=3;goto B6b92fc;
case 0x6b92fd:c.instructions+=2;goto B6b92fd;
case 0x6b92ff:c.instructions+=1;goto B6b92ff;
case 0x6b9304:goto L6b9304;
case 0x6b9306:c.instructions+=2;goto B6b9306;
case 0x6b9309:c.instructions+=1;goto B6b9309;
case 0x6b930f:goto L6b930f;
case 0x6b9312:c.instructions+=2;goto B6b9312;
case 0x6b9315:c.instructions+=1;goto B6b9315;
case 0x6b931a:goto L6b931a;
case 0x6b931c:c.instructions+=2;goto B6b931c;
case 0x6b931f:c.instructions+=1;goto B6b931f;
case 0x6b9325:goto L6b9325;
case 0x6b9328:c.instructions+=5;goto B6b9328;
case 0x6b932c:c.instructions+=4;goto B6b932c;
case 0x6b932f:c.instructions+=3;goto B6b932f;
case 0x6b9333:c.instructions+=2;goto B6b9333;
case 0x6b9336:c.instructions+=1;goto B6b9336;
case 0x6b9339:goto L6b9339;
case 0x6b933d:c.instructions+=2;goto B6b933d;
case 0x6b9340:c.instructions+=1;goto B6b9340;
case 0x6b9346:goto L6b9346;
case 0x6b934a:c.instructions+=5;goto B6b934a;
case 0x6b934d:c.instructions+=4;goto B6b934d;
case 0x6b9350:c.instructions+=3;goto B6b9350;
case 0x6b9353:c.instructions+=2;goto B6b9353;
case 0x6b9356:c.instructions+=1;goto B6b9356;
case 0x6b9358:goto L6b9358;
case 0x6b935b:c.instructions+=10;goto B6b935b;
case 0x6b935d:c.instructions+=9;goto B6b935d;
case 0x6b9360:c.instructions+=8;goto B6b9360;
case 0x6b9361:c.instructions+=7;goto B6b9361;
case 0x6b9362:c.instructions+=6;goto B6b9362;
case 0x6b9365:c.instructions+=5;goto B6b9365;
case 0x6b9368:c.instructions+=4;goto B6b9368;
case 0x6b936a:c.instructions+=3;goto B6b936a;
case 0x6b936c:c.instructions+=2;goto B6b936c;
case 0x6b9372:c.instructions+=1;goto B6b9372;
case 0x6b9377:goto L6b9377;
case 0x6b937a:c.instructions+=1;goto B6b937a;
case 0x6b9380:goto L6b9380;
case 0x6b9383:c.instructions+=10;goto B6b9383;
case 0x6b9386:c.instructions+=9;goto B6b9386;
case 0x6b9389:c.instructions+=8;goto B6b9389;
case 0x6b938c:c.instructions+=7;goto B6b938c;
case 0x6b9390:c.instructions+=6;goto B6b9390;
case 0x6b9396:c.instructions+=5;goto B6b9396;
case 0x6b9399:c.instructions+=4;goto B6b9399;
case 0x6b939c:c.instructions+=3;goto B6b939c;
case 0x6b939e:c.instructions+=2;goto B6b939e;
case 0x6b93a1:c.instructions+=1;goto B6b93a1;
case 0x6b93a3:goto L6b93a3;
case 0x6b93a6:c.instructions+=3;goto B6b93a6;
case 0x6b93a9:c.instructions+=2;goto B6b93a9;
case 0x6b93ab:c.instructions+=1;goto B6b93ab;
case 0x6b93ad:goto L6b93ad;
case 0x6b93af:goto L6b93af;
case 0x6b93b0:c.instructions+=2;goto B6b93b0;
case 0x6b93b3:c.instructions+=1;goto B6b93b3;
case 0x6b93b5:goto L6b93b5;
case 0x6b93b7:goto L6b93b7;
case 0x6b93ba:c.instructions+=4;goto B6b93ba;
case 0x6b93bd:c.instructions+=3;goto B6b93bd;
case 0x6b93c3:c.instructions+=2;goto B6b93c3;
case 0x6b93ca:c.instructions+=1;goto B6b93ca;
case 0x6b93cd:goto L6b93cd;
case 0x6b93d0:c.instructions+=9;goto B6b93d0;
case 0x6b93d3:c.instructions+=8;goto B6b93d3;
case 0x6b93d6:c.instructions+=7;goto B6b93d6;
case 0x6b93d9:c.instructions+=6;goto B6b93d9;
case 0x6b93dc:c.instructions+=5;goto B6b93dc;
case 0x6b93df:c.instructions+=4;goto B6b93df;
case 0x6b93e2:c.instructions+=3;goto B6b93e2;
case 0x6b93e8:c.instructions+=2;goto B6b93e8;
case 0x6b93eb:c.instructions+=1;goto B6b93eb;
case 0x6b93f0:goto L6b93f0;
case 0x6b93f4:c.instructions+=2;goto B6b93f4;
case 0x6b93f7:c.instructions+=1;goto B6b93f7;
case 0x6b93fd:goto L6b93fd;
case 0x6b9400:c.instructions+=7;goto B6b9400;
case 0x6b9403:c.instructions+=6;goto B6b9403;
case 0x6b9406:c.instructions+=5;goto B6b9406;
case 0x6b9409:c.instructions+=4;goto B6b9409;
case 0x6b940d:c.instructions+=3;goto B6b940d;
case 0x6b9410:c.instructions+=2;goto B6b9410;
case 0x6b9413:c.instructions+=1;goto B6b9413;
case 0x6b9419:goto L6b9419;
case 0x6b941c:c.instructions+=10;goto B6b941c;
case 0x6b941e:c.instructions+=9;goto B6b941e;
case 0x6b9421:c.instructions+=8;goto B6b9421;
case 0x6b9422:c.instructions+=7;goto B6b9422;
case 0x6b9423:c.instructions+=6;goto B6b9423;
case 0x6b9426:c.instructions+=5;goto B6b9426;
case 0x6b9429:c.instructions+=4;goto B6b9429;
case 0x6b942b:c.instructions+=3;goto B6b942b;
case 0x6b942d:c.instructions+=2;goto B6b942d;
case 0x6b9433:c.instructions+=1;goto B6b9433;
case 0x6b9438:goto L6b9438;
case 0x6b943b:c.instructions+=1;goto B6b943b;
case 0x6b9441:goto L6b9441;
case 0x6b9444:c.instructions+=7;goto B6b9444;
case 0x6b9447:c.instructions+=6;goto B6b9447;
case 0x6b944a:c.instructions+=5;goto B6b944a;
case 0x6b944d:c.instructions+=4;goto B6b944d;
case 0x6b9450:c.instructions+=3;goto B6b9450;
case 0x6b9454:c.instructions+=2;goto B6b9454;
case 0x6b9457:c.instructions+=1;goto B6b9457;
case 0x6b945d:goto L6b945d;
case 0x6b9463:c.instructions+=1;goto B6b9463;
case 0x6b9469:goto L6b9469;
case 0x6b946f:c.instructions+=5;goto B6b946f;
case 0x6b9472:c.instructions+=4;goto B6b9472;
case 0x6b9474:c.instructions+=3;goto B6b9474;
case 0x6b9477:c.instructions+=2;goto B6b9477;
case 0x6b947a:c.instructions+=1;goto B6b947a;
case 0x6b947c:goto L6b947c;
case 0x6b947f:c.instructions+=3;goto B6b947f;
case 0x6b9482:c.instructions+=2;goto B6b9482;
case 0x6b9484:c.instructions+=1;goto B6b9484;
case 0x6b9486:goto L6b9486;
case 0x6b9488:goto L6b9488;
case 0x6b948b:c.instructions+=3;goto B6b948b;
case 0x6b948c:c.instructions+=2;goto B6b948c;
case 0x6b948f:c.instructions+=1;goto B6b948f;
case 0x6b9491:goto L6b9491;
case 0x6b9497:c.instructions+=3;goto B6b9497;
case 0x6b949a:c.instructions+=2;goto B6b949a;
case 0x6b949d:c.instructions+=1;goto B6b949d;
case 0x6b949f:goto L6b949f;
case 0x6b94a2:c.instructions+=4;goto B6b94a2;
case 0x6b94a5:c.instructions+=3;goto B6b94a5;
case 0x6b94ab:c.instructions+=2;goto B6b94ab;
case 0x6b94af:c.instructions+=1;goto B6b94af;
case 0x6b94b2:goto L6b94b2;
case 0x6b94b5:c.instructions+=9;goto B6b94b5;
case 0x6b94b8:c.instructions+=8;goto B6b94b8;
case 0x6b94be:c.instructions+=7;goto B6b94be;
case 0x6b94c1:c.instructions+=6;goto B6b94c1;
case 0x6b94c4:c.instructions+=5;goto B6b94c4;
case 0x6b94c7:c.instructions+=4;goto B6b94c7;
case 0x6b94ca:c.instructions+=3;goto B6b94ca;
case 0x6b94cd:c.instructions+=2;goto B6b94cd;
case 0x6b94d0:c.instructions+=1;goto B6b94d0;
case 0x6b94d3:goto L6b94d3;
case 0x6b94d6:c.instructions+=2;goto B6b94d6;
case 0x6b94da:c.instructions+=1;goto B6b94da;
case 0x6b94dd:goto L6b94dd;
case 0x6b94e0:c.instructions+=3;goto B6b94e0;
case 0x6b94e3:c.instructions+=2;goto B6b94e3;
case 0x6b94e6:c.instructions+=1;goto B6b94e6;
case 0x6b94ec:goto L6b94ec;
case 0x6b94ef:c.instructions+=5;goto B6b94ef;
case 0x6b94f3:c.instructions+=4;goto B6b94f3;
case 0x6b94f6:c.instructions+=3;goto B6b94f6;
case 0x6b94f9:c.instructions+=2;goto B6b94f9;
case 0x6b94fd:c.instructions+=1;goto B6b94fd;
case 0x6b9500:goto L6b9500;
case 0x6b9503:c.instructions+=3;goto B6b9503;
case 0x6b9507:c.instructions+=2;goto B6b9507;
case 0x6b950a:c.instructions+=1;goto B6b950a;
case 0x6b950c:goto L6b950c;
case 0x6b950f:c.instructions+=10;goto B6b950f;
case 0x6b9511:c.instructions+=9;goto B6b9511;
case 0x6b9514:c.instructions+=8;goto B6b9514;
case 0x6b9515:c.instructions+=7;goto B6b9515;
case 0x6b9516:c.instructions+=6;goto B6b9516;
case 0x6b9519:c.instructions+=5;goto B6b9519;
case 0x6b951c:c.instructions+=4;goto B6b951c;
case 0x6b951e:c.instructions+=3;goto B6b951e;
case 0x6b9520:c.instructions+=2;goto B6b9520;
case 0x6b9526:c.instructions+=1;goto B6b9526;
case 0x6b952b:goto L6b952b;
case 0x6b952e:c.instructions+=1;goto B6b952e;
case 0x6b9534:goto L6b9534;
case 0x6b9537:c.instructions+=7;goto B6b9537;
case 0x6b953a:c.instructions+=6;goto B6b953a;
case 0x6b953d:c.instructions+=5;goto B6b953d;
case 0x6b9540:c.instructions+=4;goto B6b9540;
case 0x6b9543:c.instructions+=3;goto B6b9543;
case 0x6b9546:c.instructions+=2;goto B6b9546;
case 0x6b9549:c.instructions+=1;goto B6b9549;
case 0x6b954b:goto L6b954b;
case 0x6b954e:c.instructions+=3;goto B6b954e;
case 0x6b9551:c.instructions+=2;goto B6b9551;
case 0x6b9554:c.instructions+=1;goto B6b9554;
case 0x6b9557:goto L6b9557;
case 0x6b955a:c.instructions+=5;goto B6b955a;
case 0x6b955d:c.instructions+=4;goto B6b955d;
case 0x6b9560:c.instructions+=3;goto B6b9560;
case 0x6b9563:c.instructions+=2;goto B6b9563;
case 0x6b9566:c.instructions+=1;goto B6b9566;
case 0x6b9568:goto L6b9568;
case 0x6b956b:c.instructions+=3;goto B6b956b;
case 0x6b956f:c.instructions+=2;goto B6b956f;
case 0x6b9572:c.instructions+=1;goto B6b9572;
case 0x6b9574:goto L6b9574;
case 0x6b9577:c.instructions+=10;goto B6b9577;
case 0x6b9579:c.instructions+=9;goto B6b9579;
case 0x6b957c:c.instructions+=8;goto B6b957c;
case 0x6b957d:c.instructions+=7;goto B6b957d;
case 0x6b957e:c.instructions+=6;goto B6b957e;
case 0x6b9581:c.instructions+=5;goto B6b9581;
case 0x6b9584:c.instructions+=4;goto B6b9584;
case 0x6b9586:c.instructions+=3;goto B6b9586;
case 0x6b9588:c.instructions+=2;goto B6b9588;
case 0x6b958e:c.instructions+=1;goto B6b958e;
case 0x6b9593:goto L6b9593;
case 0x6b9596:c.instructions+=1;goto B6b9596;
case 0x6b959c:goto L6b959c;
case 0x6b959f:c.instructions+=7;goto B6b959f;
case 0x6b95a2:c.instructions+=6;goto B6b95a2;
case 0x6b95a5:c.instructions+=5;goto B6b95a5;
case 0x6b95a8:c.instructions+=4;goto B6b95a8;
case 0x6b95ab:c.instructions+=3;goto B6b95ab;
case 0x6b95ae:c.instructions+=2;goto B6b95ae;
case 0x6b95b1:c.instructions+=1;goto B6b95b1;
case 0x6b95b3:goto L6b95b3;
case 0x6b95b6:c.instructions+=3;goto B6b95b6;
case 0x6b95b9:c.instructions+=2;goto B6b95b9;
case 0x6b95bc:c.instructions+=1;goto B6b95bc;
case 0x6b95bf:goto L6b95bf;
case 0x6b95c2:c.instructions+=2;goto B6b95c2;
case 0x6b95c5:c.instructions+=1;goto B6b95c5;
case 0x6b95c8:goto L6b95c8;
case 0x6b95cb:c.instructions+=1;goto B6b95cb;
case 0x6b95cf:goto L6b95cf;
case 0x6b95d3:c.instructions+=2;goto B6b95d3;
case 0x6b95d7:c.instructions+=1;goto B6b95d7;
case 0x6b95dd:goto L6b95dd;
case 0x6b95e3:c.instructions+=2;goto B6b95e3;
case 0x6b95e8:c.instructions+=1;goto B6b95e8;
case 0x6b95ee:goto L6b95ee;
case 0x6b95f4:c.instructions+=5;goto B6b95f4;
case 0x6b95f7:c.instructions+=4;goto B6b95f7;
case 0x6b95fd:c.instructions+=3;goto B6b95fd;
case 0x6b95fe:c.instructions+=2;goto B6b95fe;
case 0x6b9600:c.instructions+=1;goto B6b9600;
case 0x6b9605:goto L6b9605;
case 0x6b9607:c.instructions+=1;goto B6b9607;
case 0x6b960d:goto L6b960d;
case 0x6b9611:c.instructions+=1;goto B6b9611;
case 0x6b9613:goto L6b9613;
case 0x6b9616:c.instructions+=1;goto B6b9616;
case 0x6b9618:goto L6b9618;
case 0x6b961b:c.instructions+=5;goto B6b961b;
case 0x6b9622:c.instructions+=4;goto B6b9622;
case 0x6b9625:c.instructions+=3;goto B6b9625;
case 0x6b9628:c.instructions+=2;goto B6b9628;
case 0x6b962b:c.instructions+=1;goto B6b962b;
case 0x6b962d:goto L6b962d;
case 0x6b9630:goto L6b9630;
case 0x6b9631:c.instructions+=3;goto B6b9631;
case 0x6b9634:c.instructions+=2;goto B6b9634;
case 0x6b963b:c.instructions+=1;goto B6b963b;
case 0x6b963d:goto L6b963d;
case 0x6b9640:c.instructions+=3;goto B6b9640;
case 0x6b9642:c.instructions+=2;goto B6b9642;
case 0x6b9644:c.instructions+=1;goto B6b9644;
case 0x6b9646:goto L6b9646;
case 0x6b9649:c.instructions+=1;goto B6b9649;
case 0x6b964b:goto L6b964b;
case 0x6b964e:c.instructions+=9;goto B6b964e;
case 0x6b9651:c.instructions+=8;goto B6b9651;
case 0x6b9657:c.instructions+=7;goto B6b9657;
case 0x6b965a:c.instructions+=6;goto B6b965a;
case 0x6b965d:c.instructions+=5;goto B6b965d;
case 0x6b965e:c.instructions+=4;goto B6b965e;
case 0x6b965f:c.instructions+=3;goto B6b965f;
case 0x6b9662:c.instructions+=2;goto B6b9662;
case 0x6b9665:c.instructions+=1;goto B6b9665;
case 0x6b9667:goto L6b9667;
case 0x6b966a:c.instructions+=3;goto B6b966a;
case 0x6b966d:c.instructions+=2;goto B6b966d;
case 0x6b9670:c.instructions+=1;goto B6b9670;
case 0x6b9676:goto L6b9676;
case 0x6b9678:c.instructions+=2;goto B6b9678;
case 0x6b967b:c.instructions+=1;goto B6b967b;
case 0x6b967d:goto L6b967d;
case 0x6b967f:c.instructions+=1;goto B6b967f;
case 0x6b9681:goto L6b9681;
case 0x6b9687:c.instructions+=7;goto B6b9687;
case 0x6b968c:c.instructions+=6;goto B6b968c;
case 0x6b968d:c.instructions+=5;goto B6b968d;
case 0x6b9692:c.instructions+=4;goto B6b9692;
case 0x6b9697:c.instructions+=3;goto B6b9697;
case 0x6b969a:c.instructions+=2;goto B6b969a;
case 0x6b969b:c.instructions+=1;goto B6b969b;
case 0x6b96a0:goto L6b96a0;
case 0x6b96a3:c.instructions+=2;goto B6b96a3;
case 0x6b96aa:c.instructions+=1;goto B6b96aa;
case 0x6b96ac:goto L6b96ac;
case 0x6b96b3:c.instructions+=1;goto B6b96b3;
case 0x6b96b5:goto L6b96b5;
case 0x6b96b8:c.instructions+=5;goto B6b96b8;
case 0x6b96bd:c.instructions+=4;goto B6b96bd;
case 0x6b96c2:c.instructions+=3;goto B6b96c2;
case 0x6b96c5:c.instructions+=2;goto B6b96c5;
case 0x6b96c6:c.instructions+=1;goto B6b96c6;
case 0x6b96cb:goto L6b96cb;
case 0x6b96ce:c.instructions+=1;goto B6b96ce;
case 0x6b96d0:goto L6b96d0;
case 0x6b96d7:c.instructions+=1;goto B6b96d7;
case 0x6b96d9:goto L6b96d9;
case 0x6b96df:c.instructions+=3;goto B6b96df;
case 0x6b96e2:c.instructions+=2;goto B6b96e2;
case 0x6b96e4:c.instructions+=1;goto B6b96e4;
case 0x6b96e5:goto L6b96e5;
case 0x6b96e8:c.instructions+=1;goto B6b96e8;
case 0x6b96ea:goto L6b96ea;
case 0x6b96ed:goto L6b96ed;
case 0x6b96f0:c.instructions+=2;goto B6b96f0;
case 0x6b96f2:c.instructions+=1;goto B6b96f2;
case 0x6b96f4:goto L6b96f4;
case 0x6b96f6:c.instructions+=1;goto B6b96f6;
case 0x6b96fb:goto L6b96fb;
case 0x6b96fe:c.instructions+=2;goto B6b96fe;
case 0x6b9700:c.instructions+=1;goto B6b9700;
case 0x6b9702:goto L6b9702;
case 0x6b9704:c.instructions+=1;goto B6b9704;
case 0x6b9709:goto L6b9709;
case 0x6b970c:c.instructions+=5;goto B6b970c;
case 0x6b970d:c.instructions+=4;goto B6b970d;
case 0x6b970e:c.instructions+=3;goto B6b970e;
case 0x6b970f:c.instructions+=2;goto B6b970f;
case 0x6b9710:c.instructions+=1;goto B6b9710;
case 0x6b9711:goto L6b9711;
case 0x6b9713:c.instructions+=10;goto B6b9713;
case 0x6b9714:c.instructions+=9;goto B6b9714;
case 0x6b9716:c.instructions+=8;goto B6b9716;
case 0x6b9719:c.instructions+=7;goto B6b9719;
case 0x6b971a:c.instructions+=6;goto B6b971a;
case 0x6b971b:c.instructions+=5;goto B6b971b;
case 0x6b971d:c.instructions+=4;goto B6b971d;
case 0x6b971f:c.instructions+=3;goto B6b971f;
case 0x6b9722:c.instructions+=2;goto B6b9722;
case 0x6b9723:c.instructions+=1;goto B6b9723;
case 0x6b9725:goto L6b9725;
case 0x6b9728:c.instructions+=5;goto B6b9728;
case 0x6b972b:c.instructions+=4;goto B6b972b;
case 0x6b972f:c.instructions+=3;goto B6b972f;
case 0x6b9730:c.instructions+=2;goto B6b9730;
case 0x6b9733:c.instructions+=1;goto B6b9733;
case 0x6b9735:goto L6b9735;
case 0x6b9737:c.instructions+=2;goto B6b9737;
case 0x6b9739:c.instructions+=1;goto B6b9739;
case 0x6b973a:goto L6b973a;
case 0x6b9740:c.instructions+=3;goto B6b9740;
case 0x6b9743:c.instructions+=2;goto B6b9743;
case 0x6b9745:c.instructions+=1;goto B6b9745;
case 0x6b9747:goto L6b9747;
case 0x6b9748:c.instructions+=4;goto B6b9748;
case 0x6b9749:c.instructions+=3;goto B6b9749;
case 0x6b974c:c.instructions+=2;goto B6b974c;
case 0x6b974e:c.instructions+=1;goto B6b974e;
case 0x6b9753:goto L6b9753;
case 0x6b9759:c.instructions+=5;goto B6b9759;
case 0x6b975b:c.instructions+=4;goto B6b975b;
case 0x6b975e:c.instructions+=3;goto B6b975e;
case 0x6b9760:c.instructions+=2;goto B6b9760;
case 0x6b9763:c.instructions+=1;goto B6b9763;
case 0x6b9768:goto L6b9768;
case 0x6b976e:c.instructions+=3;goto B6b976e;
case 0x6b9771:c.instructions+=2;goto B6b9771;
case 0x6b9773:c.instructions+=1;goto B6b9773;
case 0x6b9775:goto L6b9775;
case 0x6b9778:goto L6b9778;
case 0x6b977b:c.instructions+=2;goto B6b977b;
case 0x6b977e:c.instructions+=1;goto B6b977e;
case 0x6b9780:goto L6b9780;
case 0x6b9782:c.instructions+=2;goto B6b9782;
case 0x6b9785:c.instructions+=1;goto B6b9785;
case 0x6b9787:goto L6b9787;
case 0x6b978a:c.instructions+=5;goto B6b978a;
case 0x6b978d:c.instructions+=4;goto B6b978d;
case 0x6b978f:c.instructions+=3;goto B6b978f;
case 0x6b9795:c.instructions+=2;goto B6b9795;
case 0x6b9796:c.instructions+=1;goto B6b9796;
case 0x6b979b:goto L6b979b;
case 0x6b979d:c.instructions+=1;goto B6b979d;
case 0x6b979f:goto L6b979f;
case 0x6b97a5:c.instructions+=1;goto B6b97a5;
case 0x6b97a7:goto L6b97a7;
case 0x6b97ad:c.instructions+=1;goto B6b97ad;
case 0x6b97af:goto L6b97af;
case 0x6b97b5:c.instructions+=3;goto B6b97b5;
case 0x6b97b7:c.instructions+=2;goto B6b97b7;
case 0x6b97bd:c.instructions+=1;goto B6b97bd;
case 0x6b97c3:goto L6b97c3;
case 0x6b97c6:c.instructions+=1;goto B6b97c6;
case 0x6b97c8:goto L6b97c8;
case 0x6b97ce:c.instructions+=4;goto B6b97ce;
case 0x6b97d1:c.instructions+=3;goto B6b97d1;
case 0x6b97d3:c.instructions+=2;goto B6b97d3;
case 0x6b97d5:c.instructions+=1;goto B6b97d5;
case 0x6b97d6:goto L6b97d6;
case 0x6b97d7:c.instructions+=2;goto B6b97d7;
case 0x6b97da:c.instructions+=1;goto B6b97da;
case 0x6b97dc:goto L6b97dc;
case 0x6b97e2:c.instructions+=4;goto B6b97e2;
case 0x6b97e4:c.instructions+=3;goto B6b97e4;
case 0x6b97e6:c.instructions+=2;goto B6b97e6;
case 0x6b97e9:c.instructions+=1;goto B6b97e9;
case 0x6b97eb:goto L6b97eb;
case 0x6b97f1:c.instructions+=2;goto B6b97f1;
case 0x6b97f3:c.instructions+=1;goto B6b97f3;
case 0x6b97f5:goto L6b97f5;
case 0x6b97f7:goto L6b97f7;
case 0x6b97f9:c.instructions+=1;goto B6b97f9;
case 0x6b97fb:goto L6b97fb;
case 0x6b97fe:goto L6b97fe;
case 0x6b9801:c.instructions+=2;goto B6b9801;
case 0x6b9802:c.instructions+=1;goto B6b9802;
case 0x6b9804:goto L6b9804;
case 0x6b9807:goto L6b9807;
case 0x6b980b:c.instructions+=4;goto B6b980b;
case 0x6b980e:c.instructions+=3;goto B6b980e;
case 0x6b980f:c.instructions+=2;goto B6b980f;
case 0x6b9811:c.instructions+=1;goto B6b9811;
case 0x6b9816:goto L6b9816;
case 0x6b9818:c.instructions+=1;goto B6b9818;
case 0x6b981e:goto L6b981e;
case 0x6b9821:c.instructions+=6;goto B6b9821;
case 0x6b9822:c.instructions+=5;goto B6b9822;
case 0x6b9828:c.instructions+=4;goto B6b9828;
case 0x6b982a:c.instructions+=3;goto B6b982a;
case 0x6b982c:c.instructions+=2;goto B6b982c;
case 0x6b9832:c.instructions+=1;goto B6b9832;
case 0x6b9837:goto L6b9837;
case 0x6b9839:c.instructions+=3;goto B6b9839;
case 0x6b983b:c.instructions+=2;goto B6b983b;
case 0x6b983e:c.instructions+=1;goto B6b983e;
case 0x6b9840:goto L6b9840;
case 0x6b9843:c.instructions+=3;goto B6b9843;
case 0x6b9846:c.instructions+=2;goto B6b9846;
case 0x6b9848:c.instructions+=1;goto B6b9848;
case 0x6b984a:goto L6b984a;
case 0x6b984c:c.instructions+=4;goto B6b984c;
case 0x6b984f:c.instructions+=3;goto B6b984f;
case 0x6b9855:c.instructions+=2;goto B6b9855;
case 0x6b9858:c.instructions+=1;goto B6b9858;
case 0x6b985a:goto L6b985a;
case 0x6b985c:c.instructions+=1;goto B6b985c;
case 0x6b985e:goto L6b985e;
case 0x6b985f:c.instructions+=1;goto B6b985f;
case 0x6b9864:goto L6b9864;
case 0x6b9866:c.instructions+=1;goto B6b9866;
case 0x6b9868:goto L6b9868;
case 0x6b986e:c.instructions+=1;goto B6b986e;
case 0x6b9870:goto L6b9870;
case 0x6b9876:c.instructions+=1;goto B6b9876;
case 0x6b9878:goto L6b9878;
case 0x6b987f:c.instructions+=1;goto B6b987f;
case 0x6b9880:goto L6b9880;
case 0x6b9886:c.instructions+=1;goto B6b9886;
case 0x6b988c:goto L6b988c;
case 0x6b988d:c.instructions+=2;goto B6b988d;
case 0x6b9890:c.instructions+=1;goto B6b9890;
case 0x6b9892:goto L6b9892;
case 0x6b9895:c.instructions+=6;goto B6b9895;
case 0x6b9896:c.instructions+=5;goto B6b9896;
case 0x6b9897:c.instructions+=4;goto B6b9897;
case 0x6b9899:c.instructions+=3;goto B6b9899;
case 0x6b989b:c.instructions+=2;goto B6b989b;
case 0x6b98a0:c.instructions+=1;goto B6b98a0;
case 0x6b98a5:goto L6b98a5;
case 0x6b98a8:c.instructions+=4;goto B6b98a8;
case 0x6b98ab:c.instructions+=3;goto B6b98ab;
case 0x6b98ad:c.instructions+=2;goto B6b98ad;
case 0x6b98b0:c.instructions+=1;goto B6b98b0;
case 0x6b98b2:goto L6b98b2;
case 0x6b98b5:c.instructions+=1;goto B6b98b5;
case 0x6b98bb:goto L6b98bb;
case 0x6b98bf:c.instructions+=1;goto B6b98bf;
case 0x6b98c5:goto L6b98c5;
case 0x6b98c9:c.instructions+=1;goto B6b98c9;
case 0x6b98cf:goto L6b98cf;
case 0x6b98d3:c.instructions+=2;goto B6b98d3;
case 0x6b98d7:c.instructions+=1;goto B6b98d7;
case 0x6b98dd:goto L6b98dd;
case 0x6b98e0:c.instructions+=5;goto B6b98e0;
case 0x6b98e3:c.instructions+=4;goto B6b98e3;
case 0x6b98e6:c.instructions+=3;goto B6b98e6;
case 0x6b98e8:c.instructions+=2;goto B6b98e8;
case 0x6b98eb:c.instructions+=1;goto B6b98eb;
case 0x6b98f1:goto L6b98f1;
case 0x6b98f3:c.instructions+=3;goto B6b98f3;
case 0x6b98f9:c.instructions+=2;goto B6b98f9;
case 0x6b98fa:c.instructions+=1;goto B6b98fa;
case 0x6b98ff:goto L6b98ff;
case 0x6b9901:c.instructions+=1;goto B6b9901;
case 0x6b9907:goto L6b9907;
case 0x6b990d:c.instructions+=1;goto B6b990d;
case 0x6b9913:goto L6b9913;
case 0x6b9916:c.instructions+=1;goto B6b9916;
case 0x6b9918:goto L6b9918;
case 0x6b991b:c.instructions+=1;goto B6b991b;
case 0x6b991e:goto L6b991e;
case 0x6b9920:c.instructions+=3;goto B6b9920;
case 0x6b9923:c.instructions+=2;goto B6b9923;
case 0x6b9927:c.instructions+=1;goto B6b9927;
case 0x6b9929:goto L6b9929;
case 0x6b992a:c.instructions+=3;goto B6b992a;
case 0x6b992d:c.instructions+=2;goto B6b992d;
case 0x6b9930:c.instructions+=1;goto B6b9930;
case 0x6b9932:goto L6b9932;
case 0x6b9935:goto L6b9935;
case 0x6b9937:goto L6b9937;
case 0x6b9939:c.instructions+=2;goto B6b9939;
case 0x6b993c:c.instructions+=1;goto B6b993c;
case 0x6b993e:goto L6b993e;
case 0x6b9941:c.instructions+=1;goto B6b9941;
case 0x6b9943:goto L6b9943;
case 0x6b9946:c.instructions+=1;goto B6b9946;
case 0x6b9949:goto L6b9949;
case 0x6b994b:c.instructions+=3;goto B6b994b;
case 0x6b994e:c.instructions+=2;goto B6b994e;
case 0x6b9952:c.instructions+=1;goto B6b9952;
case 0x6b9954:goto L6b9954;
case 0x6b9955:c.instructions+=3;goto B6b9955;
case 0x6b9958:c.instructions+=2;goto B6b9958;
case 0x6b995b:c.instructions+=1;goto B6b995b;
case 0x6b995d:goto L6b995d;
case 0x6b9960:goto L6b9960;
case 0x6b9962:goto L6b9962;
case 0x6b9965:c.instructions+=8;goto B6b9965;
case 0x6b9967:c.instructions+=7;goto B6b9967;
case 0x6b996a:c.instructions+=6;goto B6b996a;
case 0x6b996d:c.instructions+=5;goto B6b996d;
case 0x6b9970:c.instructions+=4;goto B6b9970;
case 0x6b9973:c.instructions+=3;goto B6b9973;
case 0x6b9976:c.instructions+=2;goto B6b9976;
case 0x6b997a:c.instructions+=1;goto B6b997a;
case 0x6b997c:goto L6b997c;
case 0x6b997e:c.instructions+=2;goto B6b997e;
case 0x6b9985:c.instructions+=1;goto B6b9985;
case 0x6b998a:goto L6b998a;
case 0x6b998c:c.instructions+=1;goto B6b998c;
case 0x6b998e:goto L6b998e;
case 0x6b998f:c.instructions+=1;goto B6b998f;
case 0x6b9994:goto L6b9994;
case 0x6b9996:c.instructions+=1;goto B6b9996;
case 0x6b9998:goto L6b9998;
case 0x6b999c:goto L6b999c;
case 0x6b999f:c.instructions+=3;goto B6b999f;
case 0x6b99a2:c.instructions+=2;goto B6b99a2;
case 0x6b99a5:c.instructions+=1;goto B6b99a5;
case 0x6b99ab:goto L6b99ab;
case 0x6b99ad:goto L6b99ad;
case 0x6b99b3:c.instructions+=2;goto B6b99b3;
case 0x6b99b8:c.instructions+=1;goto B6b99b8;
case 0x6b99be:goto L6b99be;
case 0x6b99c4:c.instructions+=2;goto B6b99c4;
case 0x6b99c7:c.instructions+=1;goto B6b99c7;
case 0x6b99cd:goto L6b99cd;
case 0x6b99d0:c.instructions+=2;goto B6b99d0;
case 0x6b99d3:c.instructions+=1;goto B6b99d3;
case 0x6b99d9:goto L6b99d9;
case 0x6b99dd:c.instructions+=4;goto B6b99dd;
case 0x6b99e0:c.instructions+=3;goto B6b99e0;
case 0x6b99e1:c.instructions+=2;goto B6b99e1;
case 0x6b99e3:c.instructions+=1;goto B6b99e3;
case 0x6b99e8:goto L6b99e8;
case 0x6b99ea:c.instructions+=1;goto B6b99ea;
case 0x6b99f0:goto L6b99f0;
case 0x6b99f3:c.instructions+=6;goto B6b99f3;
case 0x6b99f4:c.instructions+=5;goto B6b99f4;
case 0x6b99fa:c.instructions+=4;goto B6b99fa;
case 0x6b99fc:c.instructions+=3;goto B6b99fc;
case 0x6b99fe:c.instructions+=2;goto B6b99fe;
case 0x6b9a04:c.instructions+=1;goto B6b9a04;
case 0x6b9a09:goto L6b9a09;
case 0x6b9a0b:c.instructions+=3;goto B6b9a0b;
case 0x6b9a0d:c.instructions+=2;goto B6b9a0d;
case 0x6b9a10:c.instructions+=1;goto B6b9a10;
case 0x6b9a16:goto L6b9a16;
case 0x6b9a19:c.instructions+=3;goto B6b9a19;
case 0x6b9a1c:c.instructions+=2;goto B6b9a1c;
case 0x6b9a1e:c.instructions+=1;goto B6b9a1e;
case 0x6b9a20:goto L6b9a20;
case 0x6b9a22:c.instructions+=4;goto B6b9a22;
case 0x6b9a25:c.instructions+=3;goto B6b9a25;
case 0x6b9a2b:c.instructions+=2;goto B6b9a2b;
case 0x6b9a2e:c.instructions+=1;goto B6b9a2e;
case 0x6b9a30:goto L6b9a30;
case 0x6b9a32:c.instructions+=1;goto B6b9a32;
case 0x6b9a34:goto L6b9a34;
case 0x6b9a35:c.instructions+=1;goto B6b9a35;
case 0x6b9a3a:goto L6b9a3a;
case 0x6b9a3c:c.instructions+=1;goto B6b9a3c;
case 0x6b9a3e:goto L6b9a3e;
case 0x6b9a44:c.instructions+=1;goto B6b9a44;
case 0x6b9a46:goto L6b9a46;
case 0x6b9a4c:c.instructions+=1;goto B6b9a4c;
case 0x6b9a4e:goto L6b9a4e;
case 0x6b9a55:c.instructions+=1;goto B6b9a55;
case 0x6b9a56:goto L6b9a56;
case 0x6b9a5c:c.instructions+=1;goto B6b9a5c;
case 0x6b9a62:goto L6b9a62;
case 0x6b9a63:c.instructions+=2;goto B6b9a63;
case 0x6b9a66:c.instructions+=1;goto B6b9a66;
case 0x6b9a68:goto L6b9a68;
case 0x6b9a6d:goto L6b9a6d;
case 0x6b9a70:c.instructions+=2;goto B6b9a70;
case 0x6b9a74:c.instructions+=1;goto B6b9a74;
case 0x6b9a7a:goto L6b9a7a;
case 0x6b9a7c:c.instructions+=2;goto B6b9a7c;
case 0x6b9a7f:c.instructions+=1;goto B6b9a7f;
case 0x6b9a81:goto L6b9a81;
case 0x6b9a84:c.instructions+=3;goto B6b9a84;
case 0x6b9a87:c.instructions+=2;goto B6b9a87;
case 0x6b9a8b:c.instructions+=1;goto B6b9a8b;
case 0x6b9a8d:goto L6b9a8d;
case 0x6b9a94:goto L6b9a94;
case 0x6b9a9a:c.instructions+=2;goto B6b9a9a;
case 0x6b9aa0:c.instructions+=1;goto B6b9aa0;
case 0x6b9aa2:goto L6b9aa2;
case 0x6b9aa4:c.instructions+=3;goto B6b9aa4;
case 0x6b9aaa:c.instructions+=2;goto B6b9aaa;
case 0x6b9aae:c.instructions+=1;goto B6b9aae;
case 0x6b9ab0:goto L6b9ab0;
case 0x6b9ab1:c.instructions+=1;goto B6b9ab1;
case 0x6b9ab6:goto L6b9ab6;
case 0x6b9ab8:c.instructions+=1;goto B6b9ab8;
case 0x6b9aba:goto L6b9aba;
case 0x6b9ac0:c.instructions+=1;goto B6b9ac0;
case 0x6b9ac2:goto L6b9ac2;
case 0x6b9ac8:c.instructions+=1;goto B6b9ac8;
case 0x6b9aca:goto L6b9aca;
case 0x6b9ad0:c.instructions+=2;goto B6b9ad0;
case 0x6b9ad3:c.instructions+=1;goto B6b9ad3;
case 0x6b9ad9:goto L6b9ad9;
case 0x6b9ada:c.instructions+=2;goto B6b9ada;
case 0x6b9add:c.instructions+=1;goto B6b9add;
case 0x6b9adf:goto L6b9adf;
case 0x6b9ae1:goto L6b9ae1;
case 0x6b9ae2:c.instructions+=4;goto B6b9ae2;
case 0x6b9ae3:c.instructions+=3;goto B6b9ae3;
case 0x6b9ae4:c.instructions+=2;goto B6b9ae4;
case 0x6b9ae5:c.instructions+=1;goto B6b9ae5;
case 0x6b9ae6:goto L6b9ae6;
case 0x6b9aeb:c.instructions+=1;goto B6b9aeb;
case 0x6b9aed:goto L6b9aed;
case 0x6b9af2:c.instructions+=1;goto B6b9af2;
case 0x6b9af4:goto L6b9af4;
case 0x6b9af6:c.instructions+=10;goto B6b9af6;
case 0x6b9af7:c.instructions+=9;goto B6b9af7;
case 0x6b9af9:c.instructions+=8;goto B6b9af9;
case 0x6b9afc:c.instructions+=7;goto B6b9afc;
case 0x6b9afd:c.instructions+=6;goto B6b9afd;
case 0x6b9afe:c.instructions+=5;goto B6b9afe;
case 0x6b9b00:c.instructions+=4;goto B6b9b00;
case 0x6b9b02:c.instructions+=3;goto B6b9b02;
case 0x6b9b06:c.instructions+=2;goto B6b9b06;
case 0x6b9b09:c.instructions+=1;goto B6b9b09;
case 0x6b9b0b:goto L6b9b0b;
case 0x6b9b10:c.instructions+=1;goto B6b9b10;
case 0x6b9b15:goto L6b9b15;
case 0x6b9b16:c.instructions+=14;goto B6b9b16;
case 0x6b9b18:c.instructions+=13;goto B6b9b18;
case 0x6b9b1b:c.instructions+=12;goto B6b9b1b;
case 0x6b9b1c:c.instructions+=11;goto B6b9b1c;
case 0x6b9b1d:c.instructions+=10;goto B6b9b1d;
case 0x6b9b1e:c.instructions+=9;goto B6b9b1e;
case 0x6b9b1f:c.instructions+=8;goto B6b9b1f;
case 0x6b9b21:c.instructions+=7;goto B6b9b21;
case 0x6b9b24:c.instructions+=6;goto B6b9b24;
case 0x6b9b25:c.instructions+=5;goto B6b9b25;
case 0x6b9b26:c.instructions+=4;goto B6b9b26;
case 0x6b9b27:c.instructions+=3;goto B6b9b27;
case 0x6b9b2a:c.instructions+=2;goto B6b9b2a;
case 0x6b9b2b:c.instructions+=1;goto B6b9b2b;
case 0x6b9b2e:goto L6b9b2e;
case 0x6b9b34:c.instructions+=5;goto B6b9b34;
case 0x6b9b37:c.instructions+=4;goto B6b9b37;
case 0x6b9b3a:c.instructions+=3;goto B6b9b3a;
case 0x6b9b3c:c.instructions+=2;goto B6b9b3c;
case 0x6b9b3e:c.instructions+=1;goto B6b9b3e;
case 0x6b9b40:goto L6b9b40;
case 0x6b9b42:c.instructions+=2;goto B6b9b42;
case 0x6b9b44:c.instructions+=1;goto B6b9b44;
case 0x6b9b46:goto L6b9b46;
case 0x6b9b48:c.instructions+=5;goto B6b9b48;
case 0x6b9b4a:c.instructions+=4;goto B6b9b4a;
case 0x6b9b4c:c.instructions+=3;goto B6b9b4c;
case 0x6b9b52:c.instructions+=2;goto B6b9b52;
case 0x6b9b58:c.instructions+=1;goto B6b9b58;
case 0x6b9b5a:goto L6b9b5a;
case 0x6b9b60:c.instructions+=3;goto B6b9b60;
case 0x6b9b62:c.instructions+=2;goto B6b9b62;
case 0x6b9b68:c.instructions+=1;goto B6b9b68;
case 0x6b9b6a:goto L6b9b6a;
case 0x6b9b70:c.instructions+=1;goto B6b9b70;
case 0x6b9b72:goto L6b9b72;
case 0x6b9b75:c.instructions+=7;goto B6b9b75;
case 0x6b9b78:c.instructions+=6;goto B6b9b78;
case 0x6b9b7b:c.instructions+=5;goto B6b9b7b;
case 0x6b9b7e:c.instructions+=4;goto B6b9b7e;
case 0x6b9b81:c.instructions+=3;goto B6b9b81;
case 0x6b9b87:c.instructions+=2;goto B6b9b87;
case 0x6b9b89:c.instructions+=1;goto B6b9b89;
case 0x6b9b8b:goto L6b9b8b;
case 0x6b9b8e:c.instructions+=3;goto B6b9b8e;
case 0x6b9b91:c.instructions+=2;goto B6b9b91;
case 0x6b9b95:c.instructions+=1;goto B6b9b95;
case 0x6b9b97:goto L6b9b97;
case 0x6b9b99:goto L6b9b99;
case 0x6b9b9c:c.instructions+=1;goto B6b9b9c;
case 0x6b9ba0:goto L6b9ba0;
case 0x6b9ba2:c.instructions+=1;goto B6b9ba2;
case 0x6b9ba4:goto L6b9ba4;
case 0x6b9ba7:c.instructions+=3;goto B6b9ba7;
case 0x6b9baa:c.instructions+=2;goto B6b9baa;
case 0x6b9bad:c.instructions+=1;goto B6b9bad;
case 0x6b9bb3:goto L6b9bb3;
case 0x6b9bb5:c.instructions+=2;goto B6b9bb5;
case 0x6b9bb8:c.instructions+=1;goto B6b9bb8;
case 0x6b9bba:goto L6b9bba;
case 0x6b9bc0:c.instructions+=4;goto B6b9bc0;
case 0x6b9bc3:c.instructions+=3;goto B6b9bc3;
case 0x6b9bc5:c.instructions+=2;goto B6b9bc5;
case 0x6b9bc7:c.instructions+=1;goto B6b9bc7;
case 0x6b9bc9:goto L6b9bc9;
case 0x6b9bcb:c.instructions+=2;goto B6b9bcb;
case 0x6b9bcd:c.instructions+=1;goto B6b9bcd;
case 0x6b9bcf:goto L6b9bcf;
case 0x6b9bd5:c.instructions+=2;goto B6b9bd5;
case 0x6b9bdb:c.instructions+=1;goto B6b9bdb;
case 0x6b9bdd:goto L6b9bdd;
case 0x6b9be1:c.instructions+=2;goto B6b9be1;
case 0x6b9be3:c.instructions+=1;goto B6b9be3;
case 0x6b9be9:goto L6b9be9;
case 0x6b9beb:c.instructions+=2;goto B6b9beb;
case 0x6b9bed:c.instructions+=1;goto B6b9bed;
case 0x6b9bef:goto L6b9bef;
case 0x6b9bf0:c.instructions+=2;goto B6b9bf0;
case 0x6b9bf3:c.instructions+=1;goto B6b9bf3;
case 0x6b9bf5:goto L6b9bf5;
case 0x6b9bfb:c.instructions+=3;goto B6b9bfb;
case 0x6b9c00:c.instructions+=2;goto B6b9c00;
case 0x6b9c05:c.instructions+=1;goto B6b9c05;
case 0x6b9c07:goto L6b9c07;
case 0x6b9c09:c.instructions+=7;goto B6b9c09;
case 0x6b9c0c:c.instructions+=6;goto B6b9c0c;
case 0x6b9c0d:c.instructions+=5;goto B6b9c0d;
case 0x6b9c10:c.instructions+=4;goto B6b9c10;
case 0x6b9c13:c.instructions+=3;goto B6b9c13;
case 0x6b9c14:c.instructions+=2;goto B6b9c14;
case 0x6b9c16:c.instructions+=1;goto B6b9c16;
case 0x6b9c1b:goto L6b9c1b;
case 0x6b9c1d:c.instructions+=2;goto B6b9c1d;
case 0x6b9c1f:c.instructions+=1;goto B6b9c1f;
case 0x6b9c25:goto L6b9c25;
case 0x6b9c27:c.instructions+=7;goto B6b9c27;
case 0x6b9c2a:c.instructions+=6;goto B6b9c2a;
case 0x6b9c2b:c.instructions+=5;goto B6b9c2b;
case 0x6b9c2e:c.instructions+=4;goto B6b9c2e;
case 0x6b9c31:c.instructions+=3;goto B6b9c31;
case 0x6b9c32:c.instructions+=2;goto B6b9c32;
case 0x6b9c34:c.instructions+=1;goto B6b9c34;
case 0x6b9c39:goto L6b9c39;
case 0x6b9c3b:c.instructions+=2;goto B6b9c3b;
case 0x6b9c3d:c.instructions+=1;goto B6b9c3d;
case 0x6b9c43:goto L6b9c43;
case 0x6b9c45:c.instructions+=7;goto B6b9c45;
case 0x6b9c48:c.instructions+=6;goto B6b9c48;
case 0x6b9c49:c.instructions+=5;goto B6b9c49;
case 0x6b9c4c:c.instructions+=4;goto B6b9c4c;
case 0x6b9c4f:c.instructions+=3;goto B6b9c4f;
case 0x6b9c50:c.instructions+=2;goto B6b9c50;
case 0x6b9c52:c.instructions+=1;goto B6b9c52;
case 0x6b9c57:goto L6b9c57;
case 0x6b9c59:c.instructions+=2;goto B6b9c59;
case 0x6b9c5b:c.instructions+=1;goto B6b9c5b;
case 0x6b9c61:goto L6b9c61;
case 0x6b9c64:c.instructions+=6;goto B6b9c64;
case 0x6b9c65:c.instructions+=5;goto B6b9c65;
case 0x6b9c68:c.instructions+=4;goto B6b9c68;
case 0x6b9c6b:c.instructions+=3;goto B6b9c6b;
case 0x6b9c6c:c.instructions+=2;goto B6b9c6c;
case 0x6b9c6e:c.instructions+=1;goto B6b9c6e;
case 0x6b9c73:goto L6b9c73;
case 0x6b9c75:c.instructions+=2;goto B6b9c75;
case 0x6b9c77:c.instructions+=1;goto B6b9c77;
case 0x6b9c7d:goto L6b9c7d;
case 0x6b9c81:c.instructions+=3;goto B6b9c81;
case 0x6b9c84:c.instructions+=2;goto B6b9c84;
case 0x6b9c89:c.instructions+=1;goto B6b9c89;
case 0x6b9c8b:goto L6b9c8b;
case 0x6b9c8e:c.instructions+=3;goto B6b9c8e;
case 0x6b9c92:c.instructions+=2;goto B6b9c92;
case 0x6b9c94:c.instructions+=1;goto B6b9c94;
case 0x6b9c96:goto L6b9c96;
case 0x6b9c9c:c.instructions+=8;goto B6b9c9c;
case 0x6b9ca2:c.instructions+=7;goto B6b9ca2;
case 0x6b9ca3:c.instructions+=6;goto B6b9ca3;
case 0x6b9ca8:c.instructions+=5;goto B6b9ca8;
case 0x6b9cad:c.instructions+=4;goto B6b9cad;
case 0x6b9cb0:c.instructions+=3;goto B6b9cb0;
case 0x6b9cb2:c.instructions+=2;goto B6b9cb2;
case 0x6b9cb3:c.instructions+=1;goto B6b9cb3;
case 0x6b9cb8:goto L6b9cb8;
case 0x6b9cbb:c.instructions+=1;goto B6b9cbb;
case 0x6b9cc2:goto L6b9cc2;
case 0x6b9cc5:c.instructions+=3;goto B6b9cc5;
case 0x6b9cc8:c.instructions+=2;goto B6b9cc8;
case 0x6b9ccb:c.instructions+=1;goto B6b9ccb;
case 0x6b9ccd:goto L6b9ccd;
case 0x6b9ccf:c.instructions+=1;goto B6b9ccf;
case 0x6b9cd1:goto L6b9cd1;
case 0x6b9cd3:c.instructions+=2;goto B6b9cd3;
case 0x6b9cd6:c.instructions+=1;goto B6b9cd6;
case 0x6b9cd8:goto L6b9cd8;
case 0x6b9cdc:c.instructions+=5;goto B6b9cdc;
case 0x6b9ce2:c.instructions+=4;goto B6b9ce2;
case 0x6b9ce5:c.instructions+=3;goto B6b9ce5;
case 0x6b9ce6:c.instructions+=2;goto B6b9ce6;
case 0x6b9ce9:c.instructions+=1;goto B6b9ce9;
case 0x6b9ceb:goto L6b9ceb;
case 0x6b9cf1:c.instructions+=2;goto B6b9cf1;
case 0x6b9cf3:c.instructions+=1;goto B6b9cf3;
case 0x6b9cf8:goto L6b9cf8;
case 0x6b9cfb:c.instructions+=3;goto B6b9cfb;
case 0x6b9d02:c.instructions+=2;goto B6b9d02;
case 0x6b9d03:c.instructions+=1;goto B6b9d03;
case 0x6b9d05:goto L6b9d05;
case 0x6b9d07:c.instructions+=1;goto B6b9d07;
case 0x6b9d09:goto L6b9d09;
case 0x6b9d0b:goto L6b9d0b;
case 0x6b9d0e:c.instructions+=1;goto B6b9d0e;
case 0x6b9d10:goto L6b9d10;
case 0x6b9d16:c.instructions+=7;goto B6b9d16;
case 0x6b9d1b:c.instructions+=6;goto B6b9d1b;
case 0x6b9d1c:c.instructions+=5;goto B6b9d1c;
case 0x6b9d21:c.instructions+=4;goto B6b9d21;
case 0x6b9d26:c.instructions+=3;goto B6b9d26;
case 0x6b9d27:c.instructions+=2;goto B6b9d27;
case 0x6b9d28:c.instructions+=1;goto B6b9d28;
case 0x6b9d2d:goto L6b9d2d;
case 0x6b9d30:goto L6b9d30;
case 0x6b9d32:c.instructions+=1;goto B6b9d32;
case 0x6b9d33:goto L6b9d33;
case 0x6b9d34:c.instructions+=3;goto B6b9d34;
case 0x6b9d35:c.instructions+=2;goto B6b9d35;
case 0x6b9d36:c.instructions+=1;goto B6b9d36;
case 0x6b9d37:goto L6b9d37;
case 0x6b9d3c:c.instructions+=1;goto B6b9d3c;
case 0x6b9d3e:goto L6b9d3e;
case 0x6b9d40:c.instructions+=9;goto B6b9d40;
case 0x6b9d41:c.instructions+=8;goto B6b9d41;
case 0x6b9d43:c.instructions+=7;goto B6b9d43;
case 0x6b9d44:c.instructions+=6;goto B6b9d44;
case 0x6b9d45:c.instructions+=5;goto B6b9d45;
case 0x6b9d47:c.instructions+=4;goto B6b9d47;
case 0x6b9d4a:c.instructions+=3;goto B6b9d4a;
case 0x6b9d4b:c.instructions+=2;goto B6b9d4b;
case 0x6b9d4d:c.instructions+=1;goto B6b9d4d;
case 0x6b9d53:goto L6b9d53;
case 0x6b9d56:c.instructions+=5;goto B6b9d56;
case 0x6b9d5c:c.instructions+=4;goto B6b9d5c;
case 0x6b9d5f:c.instructions+=3;goto B6b9d5f;
case 0x6b9d61:c.instructions+=2;goto B6b9d61;
case 0x6b9d67:c.instructions+=1;goto B6b9d67;
case 0x6b9d6d:goto L6b9d6d;
case 0x6b9d70:c.instructions+=2;goto B6b9d70;
case 0x6b9d72:c.instructions+=1;goto B6b9d72;
case 0x6b9d74:goto L6b9d74;
case 0x6b9d78:c.instructions+=1;goto B6b9d78;
case 0x6b9d7a:goto L6b9d7a;
case 0x6b9d7d:c.instructions+=1;goto B6b9d7d;
case 0x6b9d83:goto L6b9d83;
case 0x6b9d89:c.instructions+=3;goto B6b9d89;
case 0x6b9d8b:c.instructions+=2;goto B6b9d8b;
case 0x6b9d8d:c.instructions+=1;goto B6b9d8d;
case 0x6b9d93:goto L6b9d93;
case 0x6b9d96:c.instructions+=5;goto B6b9d96;
case 0x6b9d99:c.instructions+=4;goto B6b9d99;
case 0x6b9d9b:c.instructions+=3;goto B6b9d9b;
case 0x6b9d9e:c.instructions+=2;goto B6b9d9e;
case 0x6b9da2:c.instructions+=1;goto B6b9da2;
case 0x6b9da8:goto L6b9da8;
case 0x6b9daa:c.instructions+=3;goto B6b9daa;
case 0x6b9daf:c.instructions+=2;goto B6b9daf;
case 0x6b9db4:c.instructions+=1;goto B6b9db4;
case 0x6b9dba:goto L6b9dba;
case 0x6b9dc0:goto L6b9dc0;
case 0x6b9dc5:c.instructions+=1;goto B6b9dc5;
case 0x6b9dcb:goto L6b9dcb;
case 0x6b9dd1:goto L6b9dd1;
case 0x6b9dd3:c.instructions+=1;goto B6b9dd3;
case 0x6b9dd9:goto L6b9dd9;
case 0x6b9dde:c.instructions+=1;goto B6b9dde;
case 0x6b9de0:goto L6b9de0;
case 0x6b9de5:c.instructions+=1;goto B6b9de5;
case 0x6b9de7:goto L6b9de7;
case 0x6b9dec:c.instructions+=1;goto B6b9dec;
case 0x6b9dee:goto L6b9dee;
case 0x6b9df3:c.instructions+=1;goto B6b9df3;
case 0x6b9df5:goto L6b9df5;
case 0x6b9dfa:c.instructions+=1;goto B6b9dfa;
case 0x6b9dfc:goto L6b9dfc;
case 0x6b9e01:c.instructions+=1;goto B6b9e01;
case 0x6b9e07:goto L6b9e07;
case 0x6b9e0d:c.instructions+=3;goto B6b9e0d;
case 0x6b9e12:c.instructions+=2;goto B6b9e12;
case 0x6b9e17:c.instructions+=1;goto B6b9e17;
case 0x6b9e19:goto L6b9e19;
case 0x6b9e1b:c.instructions+=1;goto B6b9e1b;
case 0x6b9e20:goto L6b9e20;
case 0x6b9e25:goto L6b9e25;
case 0x6b9e2a:c.instructions+=1;goto B6b9e2a;
case 0x6b9e2f:goto L6b9e2f;
case 0x6b9e31:c.instructions+=1;goto B6b9e31;
case 0x6b9e36:goto L6b9e36;
case 0x6b9e3b:goto L6b9e3b;
case 0x6b9e3d:c.instructions+=1;goto B6b9e3d;
case 0x6b9e42:goto L6b9e42;
case 0x6b9e47:goto L6b9e47;
case 0x6b9e49:c.instructions+=1;goto B6b9e49;
case 0x6b9e4e:goto L6b9e4e;
case 0x6b9e53:goto L6b9e53;
case 0x6b9e55:c.instructions+=1;goto B6b9e55;
case 0x6b9e5a:goto L6b9e5a;
case 0x6b9e5f:goto L6b9e5f;
case 0x6b9e61:c.instructions+=1;goto B6b9e61;
case 0x6b9e66:goto L6b9e66;
case 0x6b9e6b:goto L6b9e6b;
case 0x6b9e71:c.instructions+=2;goto B6b9e71;
case 0x6b9e74:c.instructions+=1;goto B6b9e74;
case 0x6b9e7a:goto L6b9e7a;
case 0x6b9e7d:c.instructions+=1;goto B6b9e7d;
case 0x6b9e7f:goto L6b9e7f;
case 0x6b9e85:c.instructions+=3;goto B6b9e85;
case 0x6b9e8a:c.instructions+=2;goto B6b9e8a;
case 0x6b9e8f:c.instructions+=1;goto B6b9e8f;
case 0x6b9e95:goto L6b9e95;
case 0x6b9e9b:c.instructions+=3;goto B6b9e9b;
case 0x6b9ea0:c.instructions+=2;goto B6b9ea0;
case 0x6b9ea5:c.instructions+=1;goto B6b9ea5;
case 0x6b9ea7:goto L6b9ea7;
case 0x6b9eac:c.instructions+=1;goto B6b9eac;
case 0x6b9eae:goto L6b9eae;
case 0x6b9eb1:c.instructions+=1;goto B6b9eb1;
case 0x6b9eb3:goto L6b9eb3;
case 0x6b9eb6:c.instructions+=10;goto B6b9eb6;
case 0x6b9eb8:c.instructions+=9;goto B6b9eb8;
case 0x6b9ebb:c.instructions+=8;goto B6b9ebb;
case 0x6b9ebe:c.instructions+=7;goto B6b9ebe;
case 0x6b9ec0:c.instructions+=6;goto B6b9ec0;
case 0x6b9ec3:c.instructions+=5;goto B6b9ec3;
case 0x6b9ec6:c.instructions+=4;goto B6b9ec6;
case 0x6b9ec9:c.instructions+=3;goto B6b9ec9;
case 0x6b9ecc:c.instructions+=2;goto B6b9ecc;
case 0x6b9ed2:c.instructions+=1;goto B6b9ed2;
case 0x6b9ed4:goto L6b9ed4;
case 0x6b9ed7:c.instructions+=4;goto B6b9ed7;
case 0x6b9edd:c.instructions+=3;goto B6b9edd;
case 0x6b9ee3:c.instructions+=2;goto B6b9ee3;
case 0x6b9ee6:c.instructions+=1;goto B6b9ee6;
case 0x6b9ee8:goto L6b9ee8;
case 0x6b9eec:c.instructions+=1;goto B6b9eec;
case 0x6b9eee:goto L6b9eee;
case 0x6b9ef1:c.instructions+=1;goto B6b9ef1;
case 0x6b9ef3:goto L6b9ef3;
case 0x6b9ef7:c.instructions+=1;goto B6b9ef7;
case 0x6b9ef9:goto L6b9ef9;
case 0x6b9efc:c.instructions+=1;goto B6b9efc;
case 0x6b9efe:goto L6b9efe;
case 0x6b9f01:c.instructions+=1;goto B6b9f01;
case 0x6b9f03:goto L6b9f03;
case 0x6b9f06:c.instructions+=2;goto B6b9f06;
case 0x6b9f09:c.instructions+=1;goto B6b9f09;
case 0x6b9f0b:goto L6b9f0b;
case 0x6b9f0e:c.instructions+=1;goto B6b9f0e;
case 0x6b9f10:goto L6b9f10;
case 0x6b9f13:c.instructions+=1;goto B6b9f13;
case 0x6b9f16:goto L6b9f16;
case 0x6b9f18:goto L6b9f18;
case 0x6b9f1a:c.instructions+=1;goto B6b9f1a;
case 0x6b9f1f:goto L6b9f1f;
case 0x6b9f24:goto L6b9f24;
case 0x6b9f26:c.instructions+=1;goto B6b9f26;
case 0x6b9f2b:goto L6b9f2b;
case 0x6b9f30:goto L6b9f30;
case 0x6b9f35:c.instructions+=1;goto B6b9f35;
case 0x6b9f37:goto L6b9f37;
case 0x6b9f3c:c.instructions+=1;goto B6b9f3c;
case 0x6b9f3e:goto L6b9f3e;
case 0x6b9f43:c.instructions+=1;goto B6b9f43;
case 0x6b9f45:goto L6b9f45;
case 0x6b9f4a:c.instructions+=1;goto B6b9f4a;
case 0x6b9f4c:goto L6b9f4c;
case 0x6b9f51:c.instructions+=1;goto B6b9f51;
case 0x6b9f53:goto L6b9f53;
case 0x6b9f58:c.instructions+=1;goto B6b9f58;
case 0x6b9f5e:goto L6b9f5e;
case 0x6b9f60:c.instructions+=1;goto B6b9f60;
case 0x6b9f65:goto L6b9f65;
case 0x6b9f6a:goto L6b9f6a;
case 0x6b9f6c:c.instructions+=1;goto B6b9f6c;
case 0x6b9f71:goto L6b9f71;
case 0x6b9f76:goto L6b9f76;
case 0x6b9f78:c.instructions+=1;goto B6b9f78;
case 0x6b9f7d:goto L6b9f7d;
case 0x6b9f82:goto L6b9f82;
case 0x6b9f87:c.instructions+=2;goto B6b9f87;
case 0x6b9f89:c.instructions+=1;goto B6b9f89;
case 0x6b9f8b:goto L6b9f8b;
case 0x6b9f8d:goto L6b9f8d;
case 0x6b9f92:c.instructions+=1;goto B6b9f92;
case 0x6b9f94:goto L6b9f94;
case 0x6b9f99:c.instructions+=1;goto B6b9f99;
case 0x6b9f9b:goto L6b9f9b;
case 0x6b9fa0:c.instructions+=1;goto B6b9fa0;
case 0x6b9fa2:goto L6b9fa2;
case 0x6b9fa7:c.instructions+=1;goto B6b9fa7;
case 0x6b9fa9:goto L6b9fa9;
case 0x6b9fae:c.instructions+=1;goto B6b9fae;
case 0x6b9fb0:goto L6b9fb0;
case 0x6b9fb5:c.instructions+=1;goto B6b9fb5;
case 0x6b9fb7:goto L6b9fb7;
case 0x6b9fbc:c.instructions+=1;goto B6b9fbc;
case 0x6b9fc2:goto L6b9fc2;
case 0x6b9fc4:c.instructions+=1;goto B6b9fc4;
case 0x6b9fc6:goto L6b9fc6;
case 0x6b9fc8:c.instructions+=1;goto B6b9fc8;
case 0x6b9fca:goto L6b9fca;
case 0x6b9fcc:c.instructions+=1;goto B6b9fcc;
case 0x6b9fce:goto L6b9fce;
case 0x6b9fd0:c.instructions+=1;goto B6b9fd0;
case 0x6b9fd2:goto L6b9fd2;
case 0x6b9fd4:c.instructions+=1;goto B6b9fd4;
case 0x6b9fd9:goto L6b9fd9;
case 0x6b9fdb:goto L6b9fdb;
case 0x6b9fdd:c.instructions+=1;goto B6b9fdd;
case 0x6b9fe2:goto L6b9fe2;
case 0x6b9fe4:goto L6b9fe4;
case 0x6b9fe6:c.instructions+=1;goto B6b9fe6;
case 0x6b9feb:goto L6b9feb;
case 0x6b9fed:goto L6b9fed;
case 0x6b9fef:c.instructions+=1;goto B6b9fef;
case 0x6b9ff1:goto L6b9ff1;
case 0x6b9ff6:c.instructions+=1;goto B6b9ff6;
case 0x6b9ff8:goto L6b9ff8;
case 0x6b9ffd:c.instructions+=1;goto B6b9ffd;
case 0x6b9fff:goto L6b9fff;
default:missing_instruction(c.pc);}
B6b9003:L6b9003:{c.instructions+=18;NFSU2_TR(0x6b9003);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9006:{NFSU2_TR(0x6b9006);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9009:{NFSU2_TR(0x6b9009);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b900c:{NFSU2_TR(0x6b900c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b900e:{NFSU2_TR(0x6b900e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b9010:{NFSU2_TR(0x6b9010);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9013:{NFSU2_TR(0x6b9013);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b9015:{NFSU2_TR(0x6b9015);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9018:{NFSU2_TR(0x6b9018);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b901b:{NFSU2_TR(0x6b901b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b901d:{NFSU2_TR(0x6b901d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9023:{NFSU2_TR(0x6b9023);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b9029:{NFSU2_TR(0x6b9029);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b902c:{NFSU2_TR(0x6b902c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9032:{NFSU2_TR(0x6b9032);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9033:{NFSU2_TR(0x6b9033);
__builtin_memmove((R+4),(R+24),4);
}
B6b9035:{NFSU2_TR(0x6b9035);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9038:{NFSU2_TR(0x6b9038);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b903dull));
TAIL_STATIC(0x699b26u,699);
}
B6b903d:L6b903d:{c.instructions+=2;NFSU2_TR(0x6b903d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b903f:{NFSU2_TR(0x6b903f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b96d0;}}
}
B6b9045:L6b9045:{c.instructions+=3;NFSU2_TR(0x6b9045);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b904b:{NFSU2_TR(0x6b904b);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6b9050:{NFSU2_TR(0x6b9050);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b96d0;}}
}
B6b9056:L6b9056:{c.instructions+=6;NFSU2_TR(0x6b9056);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b905c:{NFSU2_TR(0x6b905c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b905f:{NFSU2_TR(0x6b905f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9065:{NFSU2_TR(0x6b9065);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9066:{NFSU2_TR(0x6b9066);
__builtin_memmove((R+4),(R+24),4);
}
B6b9068:{NFSU2_TR(0x6b9068);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b906dull));
TAIL_STATIC(0x699b26u,699);
}
B6b906d:L6b906d:{c.instructions+=2;NFSU2_TR(0x6b906d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b906f:{NFSU2_TR(0x6b906f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b96d0;}}
}
B6b9075:L6b9075:{c.instructions+=2;NFSU2_TR(0x6b9075);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b9078:{NFSU2_TR(0x6b9078);
{goto L6b90fd;}
}
B6b907d:L6b907d:{c.instructions+=2;NFSU2_TR(0x6b907d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9083:{NFSU2_TR(0x6b9083);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b90c0;}}
}
B6b9085:L6b9085:{c.instructions+=3;NFSU2_TR(0x6b9085);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9086:{NFSU2_TR(0x6b9086);
__builtin_memmove((R+4),(R+24),4);
}
B6b9088:{NFSU2_TR(0x6b9088);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b908dull));
TAIL_STATIC(0x6b00efu,6b0);
}
B6b908d:L6b908d:{c.instructions+=2;NFSU2_TR(0x6b908d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b908f:{NFSU2_TR(0x6b908f);
if(r1(R+518)){{goto L6b90c0;}}
}
B6b9091:L6b9091:{c.instructions+=4;NFSU2_TR(0x6b9091);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9094:{NFSU2_TR(0x6b9094);
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
B6b9096:{NFSU2_TR(0x6b9096);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b909d:{NFSU2_TR(0x6b909d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b90ef;}}
}
B6b909f:L6b909f:{c.instructions+=2;NFSU2_TR(0x6b909f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b90a2:{NFSU2_TR(0x6b90a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b90a5:L6b90a5:{c.instructions+=4;NFSU2_TR(0x6b90a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b90a7:{NFSU2_TR(0x6b90a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b90aa:{NFSU2_TR(0x6b90aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b90ae:{NFSU2_TR(0x6b90ae);
if(r1(R+518)){{goto L6b90b4;}}
}
B6b90b0:L6b90b0:{c.instructions+=1;NFSU2_TR(0x6b90b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b90b4:L6b90b4:{c.instructions+=3;NFSU2_TR(0x6b90b4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b90b7:{NFSU2_TR(0x6b90b7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6b90b8:{NFSU2_TR(0x6b90b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b90a5u);}goto L6b90a5;}}
}
B6b90ba:L6b90ba:{c.instructions+=2;NFSU2_TR(0x6b90ba);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b90be:{NFSU2_TR(0x6b90be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b90ef;}}
}
B6b90c0:L6b90c0:{c.instructions+=3;NFSU2_TR(0x6b90c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b90c3:{NFSU2_TR(0x6b90c3);
__builtin_memmove((R+4),(R+24),4);
}
B6b90c5:{NFSU2_TR(0x6b90c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b90caull));
TAIL_STATIC(0x699b26u,699);
}
B6b90ca:L6b90ca:{c.instructions+=2;NFSU2_TR(0x6b90ca);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b90cc:{NFSU2_TR(0x6b90cc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b96d0;}}
}
B6b90d2:L6b90d2:{c.instructions+=7;NFSU2_TR(0x6b90d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b90d5:{NFSU2_TR(0x6b90d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b90db:{NFSU2_TR(0x6b90db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b90e1:{NFSU2_TR(0x6b90e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b90e4:{NFSU2_TR(0x6b90e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b90ea:{NFSU2_TR(0x6b90ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b90ed:{NFSU2_TR(0x6b90ed);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9075u);}goto L6b9075;}
}
B6b90ef:L6b90ef:{c.instructions+=3;NFSU2_TR(0x6b90ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b90f2:{NFSU2_TR(0x6b90f2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b90f4:{NFSU2_TR(0x6b90f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b90f9ull));
TAIL_STATIC(0x6739efu,673);
}
B6b90f9:L6b90f9:{c.instructions+=1;NFSU2_TR(0x6b90f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b90fd:L6b90fd:{c.instructions+=4;NFSU2_TR(0x6b90fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9101:{NFSU2_TR(0x6b9101);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9102:{NFSU2_TR(0x6b9102);
__builtin_memmove((R+4),(R+24),4);
}
B6b9104:{NFSU2_TR(0x6b9104);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9109ull));
TAIL_STATIC(0x6b00efu,6b0);
}
B6b9109:L6b9109:{c.instructions+=2;NFSU2_TR(0x6b9109);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b910b:{NFSU2_TR(0x6b910b);
if(r1(R+518)){{goto L6b963d;}}
}
B6b9111:L6b9111:{c.instructions+=11;NFSU2_TR(0x6b9111);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9115:{NFSU2_TR(0x6b9115);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9119:{NFSU2_TR(0x6b9119);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b911c:{NFSU2_TR(0x6b911c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b911f:{NFSU2_TR(0x6b911f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b9120:{NFSU2_TR(0x6b9120);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b9121:{NFSU2_TR(0x6b9121);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b9122:{NFSU2_TR(0x6b9122);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b9123:{NFSU2_TR(0x6b9123);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9126:{NFSU2_TR(0x6b9126);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9128:{NFSU2_TR(0x6b9128);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b916b;}}
}
B6b912a:L6b912a:{c.instructions+=1;NFSU2_TR(0x6b912a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b912d:L6b912d:{c.instructions+=7;NFSU2_TR(0x6b912d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b9130:{NFSU2_TR(0x6b9130);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9133:{NFSU2_TR(0x6b9133);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6b9136:{NFSU2_TR(0x6b9136);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b9139:{NFSU2_TR(0x6b9139);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b913c:{NFSU2_TR(0x6b913c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9140:{NFSU2_TR(0x6b9140);
if(r1(R+518)){{goto L6b9160;}}
}
B6b9142:L6b9142:{c.instructions+=7;NFSU2_TR(0x6b9142);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9145:{NFSU2_TR(0x6b9145);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b9148:{NFSU2_TR(0x6b9148);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b914c:{NFSU2_TR(0x6b914c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b914f:{NFSU2_TR(0x6b914f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b9152:{NFSU2_TR(0x6b9152);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b9159:{NFSU2_TR(0x6b9159);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9160:L6b9160:{c.instructions+=4;NFSU2_TR(0x6b9160);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9163:{NFSU2_TR(0x6b9163);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9166:{NFSU2_TR(0x6b9166);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6b9169:{NFSU2_TR(0x6b9169);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b912du);}goto L6b912d;}}
}
B6b916b:L6b916b:{c.instructions+=13;NFSU2_TR(0x6b916b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b916e:{NFSU2_TR(0x6b916e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b916f:{NFSU2_TR(0x6b916f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b9175:{NFSU2_TR(0x6b9175);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9176:{NFSU2_TR(0x6b9176);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9177:{NFSU2_TR(0x6b9177);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b917a:{NFSU2_TR(0x6b917a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b917c:{NFSU2_TR(0x6b917c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b917f:{NFSU2_TR(0x6b917f);
__builtin_memmove((R+4),(R+24),4);
}
B6b9181:{NFSU2_TR(0x6b9181);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9184:{NFSU2_TR(0x6b9184);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9187:{NFSU2_TR(0x6b9187);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b918d:{NFSU2_TR(0x6b918d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9192ull));
TAIL_STATIC(0x6b4b1bu,6b4);
}
B6b9192:L6b9192:{c.instructions+=2;NFSU2_TR(0x6b9192);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9195:{NFSU2_TR(0x6b9195);
if(r1(R+518)){{goto L6b9613;}}
}
B6b919b:L6b919b:{c.instructions+=10;NFSU2_TR(0x6b919b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b919e:{NFSU2_TR(0x6b919e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b91a1:{NFSU2_TR(0x6b91a1);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b91a2:{NFSU2_TR(0x6b91a2);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b91a3:{NFSU2_TR(0x6b91a3);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b91a4:{NFSU2_TR(0x6b91a4);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b91a5:{NFSU2_TR(0x6b91a5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b91a7:{NFSU2_TR(0x6b91a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b91aa:{NFSU2_TR(0x6b91aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b91ad:{NFSU2_TR(0x6b91ad);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b9296;}}
}
B6b91b3:L6b91b3:{c.instructions+=6;NFSU2_TR(0x6b91b3);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffefcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b91ba:{NFSU2_TR(0x6b91ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b91bd:{NFSU2_TR(0x6b91bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b91c0:{NFSU2_TR(0x6b91c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b91c4:{NFSU2_TR(0x6b91c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b91c7:{NFSU2_TR(0x6b91c7);
if(r1(R+518)){{goto L6b91d2;}}
}
B6b91c9:L6b91c9:{c.instructions+=3;NFSU2_TR(0x6b91c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b91cc:{NFSU2_TR(0x6b91cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b91cf:{NFSU2_TR(0x6b91cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b91d2:L6b91d2:{c.instructions+=3;NFSU2_TR(0x6b91d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b91d5:{NFSU2_TR(0x6b91d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b91d8:{NFSU2_TR(0x6b91d8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b91e3;}}
}
B6b91da:L6b91da:{c.instructions+=2;NFSU2_TR(0x6b91da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b91dd:{NFSU2_TR(0x6b91dd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b9286;}}
}
B6b91e3:L6b91e3:{c.instructions+=2;NFSU2_TR(0x6b91e3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b91e6:{NFSU2_TR(0x6b91e6);
if(r1(R+518)){{goto L6b9286;}}
}
B6b91ec:L6b91ec:{c.instructions+=8;NFSU2_TR(0x6b91ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b91f2:{NFSU2_TR(0x6b91f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b91f5:{NFSU2_TR(0x6b91f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b91f8:{NFSU2_TR(0x6b91f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b91fb:{NFSU2_TR(0x6b91fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b91fc:{NFSU2_TR(0x6b91fc);
__builtin_memmove((R+4),(R+24),4);
}
B6b91fe:{NFSU2_TR(0x6b91fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9201:{NFSU2_TR(0x6b9201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9206ull));
TAIL_STATIC(0x6b00efu,6b0);
}
B6b9206:L6b9206:{c.instructions+=2;NFSU2_TR(0x6b9206);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9208:{NFSU2_TR(0x6b9208);
if(r1(R+518)){{goto L6b9286;}}
}
B6b920a:L6b920a:{c.instructions+=5;NFSU2_TR(0x6b920a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b920d:{NFSU2_TR(0x6b920d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b920f:{NFSU2_TR(0x6b920f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b9214:{NFSU2_TR(0x6b9214);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9219:{NFSU2_TR(0x6b9219);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9268;}}
}
B6b921b:L6b921b:{c.instructions+=2;NFSU2_TR(0x6b921b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b921f:{NFSU2_TR(0x6b921f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9268;}}
}
B6b9221:L6b9221:{c.instructions+=3;NFSU2_TR(0x6b9221);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b9223:{NFSU2_TR(0x6b9223);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9226:{NFSU2_TR(0x6b9226);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b9268;}}
}
B6b9228:L6b9228:{c.instructions+=2;NFSU2_TR(0x6b9228);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b922b:{NFSU2_TR(0x6b922b);
{goto L6b9230;}
}
B6b922d:L6b922d:{c.instructions+=1;NFSU2_TR(0x6b922d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9230:L6b9230:{c.instructions+=3;NFSU2_TR(0x6b9230);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b9233:{NFSU2_TR(0x6b9233);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b9235:{NFSU2_TR(0x6b9235);
if(r1(R+518)){{goto L6b9251;}}
}
B6b9237:L6b9237:{c.instructions+=8;NFSU2_TR(0x6b9237);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b923a:{NFSU2_TR(0x6b923a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6b923d:{NFSU2_TR(0x6b923d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9240:{NFSU2_TR(0x6b9240);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9246:{NFSU2_TR(0x6b9246);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b9249:{NFSU2_TR(0x6b9249);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b924a:{NFSU2_TR(0x6b924a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b924d:{NFSU2_TR(0x6b924d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b922du);}goto L6b922d;}}
}
B6b924f:L6b924f:{c.instructions+=1;NFSU2_TR(0x6b924f);
{goto L6b9268;}
}
B6b9251:L6b9251:{c.instructions+=6;NFSU2_TR(0x6b9251);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9254:{NFSU2_TR(0x6b9254);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9257:{NFSU2_TR(0x6b9257);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b925a:{NFSU2_TR(0x6b925a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b925d:{NFSU2_TR(0x6b925d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b9261:{NFSU2_TR(0x6b9261);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9268:L6b9268:{c.instructions+=5;NFSU2_TR(0x6b9268);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b926b:{NFSU2_TR(0x6b926b);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6b926f:{NFSU2_TR(0x6b926f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b9271:{NFSU2_TR(0x6b9271);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9274:{NFSU2_TR(0x6b9274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b927d;}}
}
B6b9276:L6b9276:{c.instructions+=3;NFSU2_TR(0x6b9276);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9279:{NFSU2_TR(0x6b9279);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b927b:{NFSU2_TR(0x6b927b);
{goto L6b9286;}
}
B6b927d:L6b927d:{c.instructions+=2;NFSU2_TR(0x6b927d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9280:{NFSU2_TR(0x6b9280);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9681;}}
}
B6b9286:L6b9286:{c.instructions+=5;NFSU2_TR(0x6b9286);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9289:{NFSU2_TR(0x6b9289);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b928a:{NFSU2_TR(0x6b928a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b928d:{NFSU2_TR(0x6b928d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9290:{NFSU2_TR(0x6b9290);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b91b3u);}goto L6b91b3;}}
}
B6b9296:L6b9296:{c.instructions+=4;NFSU2_TR(0x6b9296);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b9298:{NFSU2_TR(0x6b9298);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b929a:{NFSU2_TR(0x6b929a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b929d:{NFSU2_TR(0x6b929d);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B6b92a0:L6b92a0:{c.instructions+=3;NFSU2_TR(0x6b92a0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b92a4:{NFSU2_TR(0x6b92a4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b92a6:{NFSU2_TR(0x6b92a6);
if(r1(R+518)){{goto L6b92b6;}}
}
B6b92a8:L6b92a8:{c.instructions+=2;NFSU2_TR(0x6b92a8);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+8))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b92ac:{NFSU2_TR(0x6b92ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9681;}}
}
B6b92b2:L6b92b2:{c.instructions+=2;NFSU2_TR(0x6b92b2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b92b4:{NFSU2_TR(0x6b92b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b92bc;}}
}
B6b92b6:L6b92b6:{c.instructions+=2;NFSU2_TR(0x6b92b6);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+8))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b92ba:{NFSU2_TR(0x6b92ba);
if(r1(R+518)){{goto L6b92c0;}}
}
B6b92bc:L6b92bc:{c.instructions+=2;NFSU2_TR(0x6b92bc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b92bd:{NFSU2_TR(0x6b92bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b92c0:L6b92c0:{c.instructions+=3;NFSU2_TR(0x6b92c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b92c3:{NFSU2_TR(0x6b92c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6b92c6:{NFSU2_TR(0x6b92c6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b92a0u);}goto L6b92a0;}}
}
B6b92c8:L6b92c8:{c.instructions+=2;NFSU2_TR(0x6b92c8);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b92ca:{NFSU2_TR(0x6b92ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b92cfull));
TAIL_STATIC(0x699317u,699);
}
B6b92cf:L6b92cf:{c.instructions+=2;NFSU2_TR(0x6b92cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b92d1:{NFSU2_TR(0x6b92d1);
if(r1(R+518)){{goto L6b92dc;}}
}
B6b92d3:L6b92d3:{c.instructions+=2;NFSU2_TR(0x6b92d3);
__builtin_memmove((R+4),(R+0),4);
}
B6b92d5:{NFSU2_TR(0x6b92d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b92daull));
TAIL_STATIC(0x698e7du,698);
}
B6b92da:L6b92da:{c.instructions+=1;NFSU2_TR(0x6b92da);
{goto L6b92de;}
}
B6b92dc:L6b92dc:{c.instructions+=1;NFSU2_TR(0x6b92dc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b92de:L6b92de:{c.instructions+=3;NFSU2_TR(0x6b92de);
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
B6b92e0:{NFSU2_TR(0x6b92e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b92e3:{NFSU2_TR(0x6b92e3);
if(r1(R+518)){{goto L6b96ac;}}
}
B6b92e9:L6b92e9:{c.instructions+=9;NFSU2_TR(0x6b92e9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b92eb:{NFSU2_TR(0x6b92eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b92ec:{NFSU2_TR(0x6b92ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6b92ef:{NFSU2_TR(0x6b92ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b92f0:{NFSU2_TR(0x6b92f0);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6b92f6:{NFSU2_TR(0x6b92f6);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x70100000ull))));
}
B6b92fc:{NFSU2_TR(0x6b92fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b92fd:{NFSU2_TR(0x6b92fd);
__builtin_memmove((R+4),(R+0),4);
}
B6b92ff:{NFSU2_TR(0x6b92ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9304ull));
TAIL_STATIC(0x699362u,699);
}
B6b9304:L6b9304:{c.instructions+=3;NFSU2_TR(0x6b9304);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b9306:{NFSU2_TR(0x6b9306);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9309:{NFSU2_TR(0x6b9309);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b96ed;}}
}
B6b930f:L6b930f:{c.instructions+=3;NFSU2_TR(0x6b930f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9312:{NFSU2_TR(0x6b9312);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9315:{NFSU2_TR(0x6b9315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b931aull));
TAIL_STATIC(0x698eb3u,698);
}
B6b931a:L6b931a:{c.instructions+=3;NFSU2_TR(0x6b931a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b931c:{NFSU2_TR(0x6b931c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b931f:{NFSU2_TR(0x6b931f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b96ed;}}
}
B6b9325:L6b9325:{c.instructions+=6;NFSU2_TR(0x6b9325);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9328:{NFSU2_TR(0x6b9328);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b932c:{NFSU2_TR(0x6b932c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b932f:{NFSU2_TR(0x6b932f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9333:{NFSU2_TR(0x6b9333);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9336:{NFSU2_TR(0x6b9336);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9339:L6b9339:{c.instructions+=3;NFSU2_TR(0x6b9339);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6b933d:{NFSU2_TR(0x6b933d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9340:{NFSU2_TR(0x6b9340);
if(r1(R+518)){{goto L6b93f0;}}
}
B6b9346:L6b9346:{c.instructions+=6;NFSU2_TR(0x6b9346);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b934a:{NFSU2_TR(0x6b934a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b934d:{NFSU2_TR(0x6b934d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9350:{NFSU2_TR(0x6b9350);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b9353:{NFSU2_TR(0x6b9353);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b9356:{NFSU2_TR(0x6b9356);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b93b7;}}
}
B6b9358:L6b9358:{c.instructions+=11;NFSU2_TR(0x6b9358);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b935b:{NFSU2_TR(0x6b935b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b935d:{NFSU2_TR(0x6b935d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b9360:{NFSU2_TR(0x6b9360);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9361:{NFSU2_TR(0x6b9361);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9362:{NFSU2_TR(0x6b9362);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b9365:{NFSU2_TR(0x6b9365);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9368:{NFSU2_TR(0x6b9368);
__builtin_memmove((R+4),(R+24),4);
}
B6b936a:{NFSU2_TR(0x6b936a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b936c:{NFSU2_TR(0x6b936c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9372:{NFSU2_TR(0x6b9372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9377ull));
TAIL_STATIC(0x699c39u,699);
}
B6b9377:L6b9377:{c.instructions+=2;NFSU2_TR(0x6b9377);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b937a:{NFSU2_TR(0x6b937a);
if(r1(R+518)){{goto L6b96d0;}}
}
B6b9380:L6b9380:{c.instructions+=11;NFSU2_TR(0x6b9380);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9383:{NFSU2_TR(0x6b9383);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b9386:{NFSU2_TR(0x6b9386);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b9389:{NFSU2_TR(0x6b9389);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b938c:{NFSU2_TR(0x6b938c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9390:{NFSU2_TR(0x6b9390);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9396:{NFSU2_TR(0x6b9396);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9399:{NFSU2_TR(0x6b9399);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b939c:{NFSU2_TR(0x6b939c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b939e:{NFSU2_TR(0x6b939e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b93a1:{NFSU2_TR(0x6b93a1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b93cd;}}
}
B6b93a3:L6b93a3:{c.instructions+=4;NFSU2_TR(0x6b93a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b93a6:{NFSU2_TR(0x6b93a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6b93a9:{NFSU2_TR(0x6b93a9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b93ab:{NFSU2_TR(0x6b93ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b93af;}}
}
B6b93ad:L6b93ad:{c.instructions+=1;NFSU2_TR(0x6b93ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6b93af:L6b93af:{c.instructions+=3;NFSU2_TR(0x6b93af);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b93b0:{NFSU2_TR(0x6b93b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b93b3:{NFSU2_TR(0x6b93b3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b93a3u);}goto L6b93a3;}}
}
B6b93b5:L6b93b5:{c.instructions+=1;NFSU2_TR(0x6b93b5);
{goto L6b93cd;}
}
B6b93b7:L6b93b7:{c.instructions+=5;NFSU2_TR(0x6b93b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b93ba:{NFSU2_TR(0x6b93ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b93bd:{NFSU2_TR(0x6b93bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b93c3:{NFSU2_TR(0x6b93c3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b93ca:{NFSU2_TR(0x6b93ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b93cd:L6b93cd:{c.instructions+=10;NFSU2_TR(0x6b93cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b93d0:{NFSU2_TR(0x6b93d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b93d3:{NFSU2_TR(0x6b93d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b93d6:{NFSU2_TR(0x6b93d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b93d9:{NFSU2_TR(0x6b93d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b93dc:{NFSU2_TR(0x6b93dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b93df:{NFSU2_TR(0x6b93df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b93e2:{NFSU2_TR(0x6b93e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x444ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b93e8:{NFSU2_TR(0x6b93e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b93eb:{NFSU2_TR(0x6b93eb);
{goto L6b94d3;}
}
B6b93f0:L6b93f0:{c.instructions+=3;NFSU2_TR(0x6b93f0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6b93f4:{NFSU2_TR(0x6b93f4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b93f7:{NFSU2_TR(0x6b93f7);
if(r1(R+518)){{goto L6b94dd;}}
}
B6b93fd:L6b93fd:{c.instructions+=8;NFSU2_TR(0x6b93fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b9400:{NFSU2_TR(0x6b9400);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9403:{NFSU2_TR(0x6b9403);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9406:{NFSU2_TR(0x6b9406);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6b9409:{NFSU2_TR(0x6b9409);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b940d:{NFSU2_TR(0x6b940d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9410:{NFSU2_TR(0x6b9410);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b9413:{NFSU2_TR(0x6b9413);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b949f;}}
}
B6b9419:L6b9419:{c.instructions+=11;NFSU2_TR(0x6b9419);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b941c:{NFSU2_TR(0x6b941c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b941e:{NFSU2_TR(0x6b941e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b9421:{NFSU2_TR(0x6b9421);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9422:{NFSU2_TR(0x6b9422);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9423:{NFSU2_TR(0x6b9423);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b9426:{NFSU2_TR(0x6b9426);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9429:{NFSU2_TR(0x6b9429);
__builtin_memmove((R+4),(R+24),4);
}
B6b942b:{NFSU2_TR(0x6b942b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b942d:{NFSU2_TR(0x6b942d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9433:{NFSU2_TR(0x6b9433);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9438ull));
TAIL_STATIC(0x699c39u,699);
}
B6b9438:L6b9438:{c.instructions+=2;NFSU2_TR(0x6b9438);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b943b:{NFSU2_TR(0x6b943b);
if(r1(R+518)){{goto L6b96d0;}}
}
B6b9441:L6b9441:{c.instructions+=8;NFSU2_TR(0x6b9441);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9444:{NFSU2_TR(0x6b9444);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b9447:{NFSU2_TR(0x6b9447);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b944a:{NFSU2_TR(0x6b944a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b944d:{NFSU2_TR(0x6b944d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9450:{NFSU2_TR(0x6b9450);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9454:{NFSU2_TR(0x6b9454);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9457:{NFSU2_TR(0x6b9457);
if(r1(R+518)){{goto L6b96b5;}}
}
B6b945d:L6b945d:{c.instructions+=2;NFSU2_TR(0x6b945d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9463:{NFSU2_TR(0x6b9463);
if(r1(R+518)){{goto L6b96b5;}}
}
B6b9469:L6b9469:{c.instructions+=6;NFSU2_TR(0x6b9469);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b946f:{NFSU2_TR(0x6b946f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b9472:{NFSU2_TR(0x6b9472);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b9474:{NFSU2_TR(0x6b9474);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9477:{NFSU2_TR(0x6b9477);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b947a:{NFSU2_TR(0x6b947a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b9491;}}
}
B6b947c:L6b947c:{c.instructions+=4;NFSU2_TR(0x6b947c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b947f:{NFSU2_TR(0x6b947f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6b9482:{NFSU2_TR(0x6b9482);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b9484:{NFSU2_TR(0x6b9484);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9488;}}
}
B6b9486:L6b9486:{c.instructions+=1;NFSU2_TR(0x6b9486);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b9488:L6b9488:{c.instructions+=4;NFSU2_TR(0x6b9488);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b948b:{NFSU2_TR(0x6b948b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b948c:{NFSU2_TR(0x6b948c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6b948f:{NFSU2_TR(0x6b948f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b947cu);}goto L6b947c;}}
}
B6b9491:L6b9491:{c.instructions+=4;NFSU2_TR(0x6b9491);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9497:{NFSU2_TR(0x6b9497);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b949a:{NFSU2_TR(0x6b949a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b949d:{NFSU2_TR(0x6b949d);
{goto L6b94b2;}
}
B6b949f:L6b949f:{c.instructions+=5;NFSU2_TR(0x6b949f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b94a2:{NFSU2_TR(0x6b94a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b94a5:{NFSU2_TR(0x6b94a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b94ab:{NFSU2_TR(0x6b94ab);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b94af:{NFSU2_TR(0x6b94af);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b94b2:L6b94b2:{c.instructions+=10;NFSU2_TR(0x6b94b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b94b5:{NFSU2_TR(0x6b94b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b94b8:{NFSU2_TR(0x6b94b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x440ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b94be:{NFSU2_TR(0x6b94be);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b94c1:{NFSU2_TR(0x6b94c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b94c4:{NFSU2_TR(0x6b94c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b94c7:{NFSU2_TR(0x6b94c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b94ca:{NFSU2_TR(0x6b94ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6b94cd:{NFSU2_TR(0x6b94cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b94d0:{NFSU2_TR(0x6b94d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b94d3:L6b94d3:{c.instructions+=3;NFSU2_TR(0x6b94d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b94d6:{NFSU2_TR(0x6b94d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b94da:{NFSU2_TR(0x6b94da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b94dd:L6b94dd:{c.instructions+=4;NFSU2_TR(0x6b94dd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b94e0:{NFSU2_TR(0x6b94e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6b94e3:{NFSU2_TR(0x6b94e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b94e6:{NFSU2_TR(0x6b94e6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9339u);}goto L6b9339;}}
}
B6b94ec:L6b94ec:{c.instructions+=6;NFSU2_TR(0x6b94ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b94ef:{NFSU2_TR(0x6b94ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b94f3:{NFSU2_TR(0x6b94f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b94f6:{NFSU2_TR(0x6b94f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b94f9:{NFSU2_TR(0x6b94f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b94fd:{NFSU2_TR(0x6b94fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9500:L6b9500:{c.instructions+=4;NFSU2_TR(0x6b9500);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9503:{NFSU2_TR(0x6b9503);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b9507:{NFSU2_TR(0x6b9507);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b950a:{NFSU2_TR(0x6b950a);
if(r1(R+518)){{goto L6b9568;}}
}
B6b950c:L6b950c:{c.instructions+=11;NFSU2_TR(0x6b950c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b950f:{NFSU2_TR(0x6b950f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b9511:{NFSU2_TR(0x6b9511);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b9514:{NFSU2_TR(0x6b9514);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9515:{NFSU2_TR(0x6b9515);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9516:{NFSU2_TR(0x6b9516);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b9519:{NFSU2_TR(0x6b9519);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b951c:{NFSU2_TR(0x6b951c);
__builtin_memmove((R+4),(R+24),4);
}
B6b951e:{NFSU2_TR(0x6b951e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9520:{NFSU2_TR(0x6b9520);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9526:{NFSU2_TR(0x6b9526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b952bull));
TAIL_STATIC(0x699c39u,699);
}
B6b952b:L6b952b:{c.instructions+=2;NFSU2_TR(0x6b952b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b952e:{NFSU2_TR(0x6b952e);
if(r1(R+518)){{goto L6b96d0;}}
}
B6b9534:L6b9534:{c.instructions+=8;NFSU2_TR(0x6b9534);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9537:{NFSU2_TR(0x6b9537);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b953a:{NFSU2_TR(0x6b953a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b953d:{NFSU2_TR(0x6b953d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9540:{NFSU2_TR(0x6b9540);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9543:{NFSU2_TR(0x6b9543);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b9546:{NFSU2_TR(0x6b9546);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9549:{NFSU2_TR(0x6b9549);
if(r1(R+518)){{goto L6b9557;}}
}
B6b954b:L6b954b:{c.instructions+=4;NFSU2_TR(0x6b954b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b954e:{NFSU2_TR(0x6b954e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b9551:{NFSU2_TR(0x6b9551);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b9554:{NFSU2_TR(0x6b9554);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9557:L6b9557:{c.instructions+=6;NFSU2_TR(0x6b9557);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b955a:{NFSU2_TR(0x6b955a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b955d:{NFSU2_TR(0x6b955d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6b9560:{NFSU2_TR(0x6b9560);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b9563:{NFSU2_TR(0x6b9563);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b9566:{NFSU2_TR(0x6b9566);
{goto L6b95c8;}
}
B6b9568:L6b9568:{c.instructions+=4;NFSU2_TR(0x6b9568);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b956b:{NFSU2_TR(0x6b956b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b956f:{NFSU2_TR(0x6b956f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9572:{NFSU2_TR(0x6b9572);
if(r1(R+518)){{goto L6b95cf;}}
}
B6b9574:L6b9574:{c.instructions+=11;NFSU2_TR(0x6b9574);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9577:{NFSU2_TR(0x6b9577);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b9579:{NFSU2_TR(0x6b9579);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b957c:{NFSU2_TR(0x6b957c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b957d:{NFSU2_TR(0x6b957d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b957e:{NFSU2_TR(0x6b957e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b9581:{NFSU2_TR(0x6b9581);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9584:{NFSU2_TR(0x6b9584);
__builtin_memmove((R+4),(R+24),4);
}
B6b9586:{NFSU2_TR(0x6b9586);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9588:{NFSU2_TR(0x6b9588);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b958e:{NFSU2_TR(0x6b958e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9593ull));
TAIL_STATIC(0x699c39u,699);
}
B6b9593:L6b9593:{c.instructions+=2;NFSU2_TR(0x6b9593);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9596:{NFSU2_TR(0x6b9596);
if(r1(R+518)){{goto L6b96d0;}}
}
B6b959c:L6b959c:{c.instructions+=8;NFSU2_TR(0x6b959c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b959f:{NFSU2_TR(0x6b959f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b95a2:{NFSU2_TR(0x6b95a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b95a5:{NFSU2_TR(0x6b95a5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b95a8:{NFSU2_TR(0x6b95a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b95ab:{NFSU2_TR(0x6b95ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b95ae:{NFSU2_TR(0x6b95ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b95b1:{NFSU2_TR(0x6b95b1);
if(r1(R+518)){{goto L6b95bf;}}
}
B6b95b3:L6b95b3:{c.instructions+=4;NFSU2_TR(0x6b95b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b95b6:{NFSU2_TR(0x6b95b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b95b9:{NFSU2_TR(0x6b95b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b95bc:{NFSU2_TR(0x6b95bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b95bf:L6b95bf:{c.instructions+=3;NFSU2_TR(0x6b95bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b95c2:{NFSU2_TR(0x6b95c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b95c5:{NFSU2_TR(0x6b95c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b95c8:L6b95c8:{c.instructions+=2;NFSU2_TR(0x6b95c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b95cb:{NFSU2_TR(0x6b95cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b95cf:L6b95cf:{c.instructions+=3;NFSU2_TR(0x6b95cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b95d3:{NFSU2_TR(0x6b95d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x10ull))));
}
B6b95d7:{NFSU2_TR(0x6b95d7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9500u);}goto L6b9500;}}
}
B6b95dd:L6b95dd:{c.instructions+=3;NFSU2_TR(0x6b95dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b95e3:{NFSU2_TR(0x6b95e3);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6b95e8:{NFSU2_TR(0x6b95e8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b96d0;}}
}
B6b95ee:L6b95ee:{c.instructions+=6;NFSU2_TR(0x6b95ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b95f4:{NFSU2_TR(0x6b95f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b95f7:{NFSU2_TR(0x6b95f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b95fd:{NFSU2_TR(0x6b95fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b95fe:{NFSU2_TR(0x6b95fe);
__builtin_memmove((R+4),(R+24),4);
}
B6b9600:{NFSU2_TR(0x6b9600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9605ull));
TAIL_STATIC(0x699b26u,699);
}
B6b9605:L6b9605:{c.instructions+=2;NFSU2_TR(0x6b9605);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b9607:{NFSU2_TR(0x6b9607);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b96d0;}}
}
B6b960d:L6b960d:{c.instructions+=2;NFSU2_TR(0x6b960d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9611:{NFSU2_TR(0x6b9611);
{goto L6b963d;}
}
B6b9613:L6b9613:{c.instructions+=2;NFSU2_TR(0x6b9613);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9616:{NFSU2_TR(0x6b9616);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b963d;}}
}
B6b9618:L6b9618:{c.instructions+=6;NFSU2_TR(0x6b9618);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b961b:{NFSU2_TR(0x6b961b);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffefcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b9622:{NFSU2_TR(0x6b9622);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b9625:{NFSU2_TR(0x6b9625);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b9628:{NFSU2_TR(0x6b9628);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b962b:{NFSU2_TR(0x6b962b);
if(r1(R+518)){{goto L6b9630;}}
}
B6b962d:L6b962d:{c.instructions+=1;NFSU2_TR(0x6b962d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b9630:L6b9630:{c.instructions+=4;NFSU2_TR(0x6b9630);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b9631:{NFSU2_TR(0x6b9631);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b9634:{NFSU2_TR(0x6b9634);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b963b:{NFSU2_TR(0x6b963b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9618u);}goto L6b9618;}}
}
B6b963d:L6b963d:{c.instructions+=4;NFSU2_TR(0x6b963d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9640:{NFSU2_TR(0x6b9640);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b9642:{NFSU2_TR(0x6b9642);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9644:{NFSU2_TR(0x6b9644);
if(r1(R+518)){{goto L6b9667;}}
}
B6b9646:L6b9646:{c.instructions+=2;NFSU2_TR(0x6b9646);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9649:{NFSU2_TR(0x6b9649);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b9667;}}
}
B6b964b:L6b964b:{c.instructions+=10;NFSU2_TR(0x6b964b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b964e:{NFSU2_TR(0x6b964e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b9651:{NFSU2_TR(0x6b9651);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b9657:{NFSU2_TR(0x6b9657);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b965a:{NFSU2_TR(0x6b965a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b965d:{NFSU2_TR(0x6b965d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6b965e:{NFSU2_TR(0x6b965e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b965f:{NFSU2_TR(0x6b965f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9662:{NFSU2_TR(0x6b9662);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6b9665:{NFSU2_TR(0x6b9665);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b964bu);}goto L6b964b;}}
}
B6b9667:L6b9667:{c.instructions+=4;NFSU2_TR(0x6b9667);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b966a:{NFSU2_TR(0x6b966a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b966d:{NFSU2_TR(0x6b966d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b9670:{NFSU2_TR(0x6b9670);
if(r1(R+512)){TAIL_STATIC(0x6b8e92u,6b8);}
}
B6b9676:L6b9676:{c.instructions+=3;NFSU2_TR(0x6b9676);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b9678:{NFSU2_TR(0x6b9678);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b967b:{NFSU2_TR(0x6b967b);
{goto L6b96e5;}
}
B6b967d:L6b967d:{c.instructions+=2;NFSU2_TR(0x6b967d);
__builtin_memmove((R+4),(R+28),4);
}
B6b967f:{NFSU2_TR(0x6b967f);
{goto L6b96f4;}
}
B6b9681:L6b9681:{c.instructions+=8;NFSU2_TR(0x6b9681);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9687:{NFSU2_TR(0x6b9687);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b968c:{NFSU2_TR(0x6b968c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b968d:{NFSU2_TR(0x6b968d);
u8 U[4];
w4(U+0,u32(0x7bcdf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9692:{NFSU2_TR(0x6b9692);
u8 U[4];
w4(U+0,u32(0x11b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9697:{NFSU2_TR(0x6b9697);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b969a:{NFSU2_TR(0x6b969a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b969b:{NFSU2_TR(0x6b969b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b96a0ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b96a0:L6b96a0:{c.instructions+=3;NFSU2_TR(0x6b96a0);
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
B6b96a3:{NFSU2_TR(0x6b96a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b96aa:{NFSU2_TR(0x6b96aa);
{goto L6b9709;}
}
B6b96ac:L6b96ac:{c.instructions+=2;NFSU2_TR(0x6b96ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b96b3:{NFSU2_TR(0x6b96b3);
{goto L6b9709;}
}
B6b96b5:L6b96b5:{c.instructions+=6;NFSU2_TR(0x6b96b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b96b8:{NFSU2_TR(0x6b96b8);
u8 U[4];
w4(U+0,u32(0x7bcdccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b96bd:{NFSU2_TR(0x6b96bd);
u8 U[4];
w4(U+0,u32(0x12caull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b96c2:{NFSU2_TR(0x6b96c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b96c5:{NFSU2_TR(0x6b96c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b96c6:{NFSU2_TR(0x6b96c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b96cbull));
TAIL_STATIC(0x69e936u,69e);
}
B6b96cb:L6b96cb:{c.instructions+=2;NFSU2_TR(0x6b96cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6b96ce:{NFSU2_TR(0x6b96ce);
{goto L6b96ed;}
}
B6b96d0:L6b96d0:{c.instructions+=2;NFSU2_TR(0x6b96d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b96d7:{NFSU2_TR(0x6b96d7);
{goto L6b96ed;}
}
B6b96d9:L6b96d9:{c.instructions+=4;NFSU2_TR(0x6b96d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b96df:{NFSU2_TR(0x6b96df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b96e2:{NFSU2_TR(0x6b96e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b96e4:{NFSU2_TR(0x6b96e4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b96e5:L6b96e5:{c.instructions+=2;NFSU2_TR(0x6b96e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b96e8:{NFSU2_TR(0x6b96e8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b96d9u);}goto L6b96d9;}}
}
B6b96ea:L6b96ea:{c.instructions+=1;NFSU2_TR(0x6b96ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b96ed:L6b96ed:{c.instructions+=3;NFSU2_TR(0x6b96ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b96f0:{NFSU2_TR(0x6b96f0);
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
B6b96f2:{NFSU2_TR(0x6b96f2);
if(r1(R+518)){{goto L6b96fb;}}
}
B6b96f4:L6b96f4:{c.instructions+=2;NFSU2_TR(0x6b96f4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b96f6:{NFSU2_TR(0x6b96f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b96fbull));
TAIL_STATIC(0x6739efu,673);
}
B6b96fb:L6b96fb:{c.instructions+=3;NFSU2_TR(0x6b96fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b96fe:{NFSU2_TR(0x6b96fe);
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
B6b9700:{NFSU2_TR(0x6b9700);
if(r1(R+518)){{goto L6b9709;}}
}
B6b9702:L6b9702:{c.instructions+=2;NFSU2_TR(0x6b9702);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9704:{NFSU2_TR(0x6b9704);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9709ull));
TAIL_STATIC(0x6739efu,673);
}
B6b9709:L6b9709:{c.instructions+=6;NFSU2_TR(0x6b9709);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b970c:{NFSU2_TR(0x6b970c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b970d:{NFSU2_TR(0x6b970d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b970e:{NFSU2_TR(0x6b970e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b970f:{NFSU2_TR(0x6b970f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b9710:{NFSU2_TR(0x6b9710);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b9711:L6b9711:{c.instructions+=11;NFSU2_TR(0x6b9711);
__builtin_memmove((R+28),(R+28),4);
}
B6b9713:{NFSU2_TR(0x6b9713);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9714:{NFSU2_TR(0x6b9714);
__builtin_memmove((R+20),(R+16),4);
}
B6b9716:{NFSU2_TR(0x6b9716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6b9719:{NFSU2_TR(0x6b9719);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b971a:{NFSU2_TR(0x6b971a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b971b:{NFSU2_TR(0x6b971b);
__builtin_memmove((R+24),(R+4),4);
}
B6b971d:{NFSU2_TR(0x6b971d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b971f:{NFSU2_TR(0x6b971f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9722:{NFSU2_TR(0x6b9722);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9723:{NFSU2_TR(0x6b9723);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b9735;}}
}
B6b9725:L6b9725:{c.instructions+=6;NFSU2_TR(0x6b9725);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9728:{NFSU2_TR(0x6b9728);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b972b:{NFSU2_TR(0x6b972b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b972f:{NFSU2_TR(0x6b972f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b9730:{NFSU2_TR(0x6b9730);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b9733:{NFSU2_TR(0x6b9733);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9725u);}goto L6b9725;}}
}
B6b9735:L6b9735:{c.instructions+=3;NFSU2_TR(0x6b9735);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b9737:{NFSU2_TR(0x6b9737);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b9739:{NFSU2_TR(0x6b9739);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b973a:L6b973a:{c.instructions+=4;NFSU2_TR(0x6b973a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9740:{NFSU2_TR(0x6b9740);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b9743:{NFSU2_TR(0x6b9743);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9745:{NFSU2_TR(0x6b9745);
if(r1(R+518)){{goto L6b9768;}}
}
B6b9747:L6b9747:{c.instructions+=5;NFSU2_TR(0x6b9747);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9748:{NFSU2_TR(0x6b9748);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9749:{NFSU2_TR(0x6b9749);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b974c:{NFSU2_TR(0x6b974c);
__builtin_memmove((R+4),(R+24),4);
}
B6b974e:{NFSU2_TR(0x6b974e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9753ull));
TAIL_STATIC(0x6c221du,6c2);
}
B6b9753:L6b9753:{c.instructions+=6;NFSU2_TR(0x6b9753);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9759:{NFSU2_TR(0x6b9759);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b975b:{NFSU2_TR(0x6b975b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b975e:{NFSU2_TR(0x6b975e);
__builtin_memmove((R+4),(R+24),4);
}
B6b9760:{NFSU2_TR(0x6b9760);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9763:{NFSU2_TR(0x6b9763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9768ull));
TAIL_STATIC(0x6c2263u,6c2);
}
B6b9768:L6b9768:{c.instructions+=4;NFSU2_TR(0x6b9768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b976e:{NFSU2_TR(0x6b976e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b9771:{NFSU2_TR(0x6b9771);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9773:{NFSU2_TR(0x6b9773);
if(r1(R+518)){{goto L6b9778;}}
}
B6b9775:L6b9775:{c.instructions+=1;NFSU2_TR(0x6b9775);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9778:L6b9778:{c.instructions+=3;NFSU2_TR(0x6b9778);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6b977b:{NFSU2_TR(0x6b977b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x18ull))));
}
B6b977e:{NFSU2_TR(0x6b977e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b973au);}goto L6b973a;}}
}
B6b9780:L6b9780:{c.instructions+=3;NFSU2_TR(0x6b9780);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b9782:{NFSU2_TR(0x6b9782);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9785:{NFSU2_TR(0x6b9785);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b97dc;}}
}
B6b9787:L6b9787:{c.instructions+=6;NFSU2_TR(0x6b9787);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b978a:{NFSU2_TR(0x6b978a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b978d:{NFSU2_TR(0x6b978d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b978f:{NFSU2_TR(0x6b978f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b9795:{NFSU2_TR(0x6b9795);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9796:{NFSU2_TR(0x6b9796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b979bull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b979b:L6b979b:{c.instructions+=2;NFSU2_TR(0x6b979b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b979d:{NFSU2_TR(0x6b979d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b97d6;}}
}
B6b979f:L6b979f:{c.instructions+=2;NFSU2_TR(0x6b979f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b97a5:{NFSU2_TR(0x6b97a5);
if(r1(R+518)){{goto L6b97d6;}}
}
B6b97a7:L6b97a7:{c.instructions+=2;NFSU2_TR(0x6b97a7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b97ad:{NFSU2_TR(0x6b97ad);
if(r1(R+518)){{goto L6b97d6;}}
}
B6b97af:L6b97af:{c.instructions+=4;NFSU2_TR(0x6b97af);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b97b5:{NFSU2_TR(0x6b97b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b97b7:{NFSU2_TR(0x6b97b7);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x200ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b97bd:{NFSU2_TR(0x6b97bd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b9aed;}}
}
B6b97c3:L6b97c3:{c.instructions+=2;NFSU2_TR(0x6b97c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b97c6:{NFSU2_TR(0x6b97c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b97d6;}}
}
B6b97c8:L6b97c8:{c.instructions+=5;NFSU2_TR(0x6b97c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b97ce:{NFSU2_TR(0x6b97ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b97d1:{NFSU2_TR(0x6b97d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6b97d3:{NFSU2_TR(0x6b97d3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b97d5:{NFSU2_TR(0x6b97d5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b97d6:L6b97d6:{c.instructions+=3;NFSU2_TR(0x6b97d6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b97d7:{NFSU2_TR(0x6b97d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b97da:{NFSU2_TR(0x6b97da);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9787u);}goto L6b9787;}}
}
B6b97dc:L6b97dc:{c.instructions+=5;NFSU2_TR(0x6b97dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b97e2:{NFSU2_TR(0x6b97e2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b97e4:{NFSU2_TR(0x6b97e4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b97e6:{NFSU2_TR(0x6b97e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b97e9:{NFSU2_TR(0x6b97e9);
if(r1(R+518)){{goto L6b9804;}}
}
B6b97eb:L6b97eb:{c.instructions+=3;NFSU2_TR(0x6b97eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b97f1:{NFSU2_TR(0x6b97f1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+8))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b97f3:{NFSU2_TR(0x6b97f3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b9804;}}
}
B6b97f5:L6b97f5:{c.instructions+=1;NFSU2_TR(0x6b97f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b97f7:L6b97f7:{c.instructions+=2;NFSU2_TR(0x6b97f7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b97f9:{NFSU2_TR(0x6b97f9);
if(r1(R+518)){{goto L6b97fe;}}
}
B6b97fb:L6b97fb:{c.instructions+=1;NFSU2_TR(0x6b97fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b97fe:L6b97fe:{c.instructions+=3;NFSU2_TR(0x6b97fe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6b9801:{NFSU2_TR(0x6b9801);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6b9802:{NFSU2_TR(0x6b9802);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b97f7u);}goto L6b97f7;}}
}
B6b9804:L6b9804:{c.instructions+=1;NFSU2_TR(0x6b9804);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9807:L6b9807:{c.instructions+=5;NFSU2_TR(0x6b9807);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b980b:{NFSU2_TR(0x6b980b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b980e:{NFSU2_TR(0x6b980e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b980f:{NFSU2_TR(0x6b980f);
__builtin_memmove((R+4),(R+24),4);
}
B6b9811:{NFSU2_TR(0x6b9811);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9816ull));
TAIL_STATIC(0x6b419eu,6b4);
}
B6b9816:L6b9816:{c.instructions+=2;NFSU2_TR(0x6b9816);
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
B6b9818:{NFSU2_TR(0x6b9818);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b9ae1;}}
}
B6b981e:L6b981e:{c.instructions+=7;NFSU2_TR(0x6b981e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b9821:{NFSU2_TR(0x6b9821);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9822:{NFSU2_TR(0x6b9822);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9828:{NFSU2_TR(0x6b9828);
__builtin_memmove((R+4),(R+24),4);
}
B6b982a:{NFSU2_TR(0x6b982a);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b982c:{NFSU2_TR(0x6b982c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9832:{NFSU2_TR(0x6b9832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9837ull));
TAIL_STATIC(0x6b866cu,6b8);
}
B6b9837:L6b9837:{c.instructions+=4;NFSU2_TR(0x6b9837);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b9839:{NFSU2_TR(0x6b9839);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b983b:{NFSU2_TR(0x6b983b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b983e:{NFSU2_TR(0x6b983e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b9892;}}
}
B6b9840:L6b9840:{c.instructions+=4;NFSU2_TR(0x6b9840);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9843:{NFSU2_TR(0x6b9843);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b9846:{NFSU2_TR(0x6b9846);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9848:{NFSU2_TR(0x6b9848);
if(r1(R+518)){{goto L6b988c;}}
}
B6b984a:L6b984a:{c.instructions+=5;NFSU2_TR(0x6b984a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b984c:{NFSU2_TR(0x6b984c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b984f:{NFSU2_TR(0x6b984f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b9855:{NFSU2_TR(0x6b9855);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9858:{NFSU2_TR(0x6b9858);
if(r1(R+518)){{goto L6b985e;}}
}
B6b985a:L6b985a:{c.instructions+=2;NFSU2_TR(0x6b985a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b985c:{NFSU2_TR(0x6b985c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9880;}}
}
B6b985e:L6b985e:{c.instructions+=2;NFSU2_TR(0x6b985e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b985f:{NFSU2_TR(0x6b985f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9864ull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b9864:L6b9864:{c.instructions+=2;NFSU2_TR(0x6b9864);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9866:{NFSU2_TR(0x6b9866);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9880;}}
}
B6b9868:L6b9868:{c.instructions+=2;NFSU2_TR(0x6b9868);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b986e:{NFSU2_TR(0x6b986e);
if(r1(R+518)){{goto L6b9880;}}
}
B6b9870:L6b9870:{c.instructions+=2;NFSU2_TR(0x6b9870);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9876:{NFSU2_TR(0x6b9876);
if(r1(R+518)){{goto L6b9880;}}
}
B6b9878:L6b9878:{c.instructions+=2;NFSU2_TR(0x6b9878);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a68f8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b987f:{NFSU2_TR(0x6b987f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b9880:L6b9880:{c.instructions+=2;NFSU2_TR(0x6b9880);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x200ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b9886:{NFSU2_TR(0x6b9886);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b9ae6;}}
}
B6b988c:L6b988c:{c.instructions+=3;NFSU2_TR(0x6b988c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b988d:{NFSU2_TR(0x6b988d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b9890:{NFSU2_TR(0x6b9890);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9840u);}goto L6b9840;}}
}
B6b9892:L6b9892:{c.instructions+=7;NFSU2_TR(0x6b9892);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b9895:{NFSU2_TR(0x6b9895);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9896:{NFSU2_TR(0x6b9896);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9897:{NFSU2_TR(0x6b9897);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9899:{NFSU2_TR(0x6b9899);
__builtin_memmove((R+4),(R+24),4);
}
B6b989b:{NFSU2_TR(0x6b989b);
u8 U[4];
w4(U+0,u32(0x8a68f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b98a0:{NFSU2_TR(0x6b98a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b98a5ull));
TAIL_STATIC(0x6b866cu,6b8);
}
B6b98a5:L6b98a5:{c.instructions+=5;NFSU2_TR(0x6b98a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b98a8:{NFSU2_TR(0x6b98a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b98ab:{NFSU2_TR(0x6b98ab);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6b98ad:{NFSU2_TR(0x6b98ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B6b98b0:{NFSU2_TR(0x6b98b0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b98cf;}}
}
B6b98b2:L6b98b2:{c.instructions+=2;NFSU2_TR(0x6b98b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b98b5:{NFSU2_TR(0x6b98b5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b9a6d;}}
}
B6b98bb:L6b98bb:{c.instructions+=2;NFSU2_TR(0x6b98bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b98bf:{NFSU2_TR(0x6b98bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9a6d;}}
}
B6b98c5:L6b98c5:{c.instructions+=2;NFSU2_TR(0x6b98c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b98c9:{NFSU2_TR(0x6b98c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9a6d;}}
}
B6b98cf:L6b98cf:{c.instructions+=3;NFSU2_TR(0x6b98cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b98d3:{NFSU2_TR(0x6b98d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b98d7:{NFSU2_TR(0x6b98d7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b99cd;}}
}
B6b98dd:L6b98dd:{c.instructions+=6;NFSU2_TR(0x6b98dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b98e0:{NFSU2_TR(0x6b98e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b98e3:{NFSU2_TR(0x6b98e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b98e6:{NFSU2_TR(0x6b98e6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b98e8:{NFSU2_TR(0x6b98e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b98eb:{NFSU2_TR(0x6b98eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b999c;}}
}
B6b98f1:L6b98f1:{c.instructions+=4;NFSU2_TR(0x6b98f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b98f3:{NFSU2_TR(0x6b98f3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b98f9:{NFSU2_TR(0x6b98f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b98fa:{NFSU2_TR(0x6b98fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b98ffull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b98ff:L6b98ff:{c.instructions+=2;NFSU2_TR(0x6b98ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9901:{NFSU2_TR(0x6b9901);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b999c;}}
}
B6b9907:L6b9907:{c.instructions+=2;NFSU2_TR(0x6b9907);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b990d:{NFSU2_TR(0x6b990d);
if(r1(R+518)){{goto L6b999c;}}
}
B6b9913:L6b9913:{c.instructions+=2;NFSU2_TR(0x6b9913);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9916:{NFSU2_TR(0x6b9916);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b9935;}}
}
B6b9918:L6b9918:{c.instructions+=2;NFSU2_TR(0x6b9918);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b991b:{NFSU2_TR(0x6b991b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b991e:L6b991e:{c.instructions+=4;NFSU2_TR(0x6b991e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6b9920:{NFSU2_TR(0x6b9920);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b9923:{NFSU2_TR(0x6b9923);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6b9927:{NFSU2_TR(0x6b9927);
if(r1(R+518)){{goto L6b9932;}}
}
B6b9929:L6b9929:{c.instructions+=4;NFSU2_TR(0x6b9929);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b992a:{NFSU2_TR(0x6b992a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b992d:{NFSU2_TR(0x6b992d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6b9930:{NFSU2_TR(0x6b9930);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b991eu);}goto L6b991e;}}
}
B6b9932:L6b9932:{c.instructions+=1;NFSU2_TR(0x6b9932);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9935:L6b9935:{c.instructions+=1;NFSU2_TR(0x6b9935);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b999c;}}
}
B6b9937:L6b9937:{c.instructions+=3;NFSU2_TR(0x6b9937);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b9939:{NFSU2_TR(0x6b9939);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b993c:{NFSU2_TR(0x6b993c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9962;}}
}
B6b993e:L6b993e:{c.instructions+=2;NFSU2_TR(0x6b993e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9941:{NFSU2_TR(0x6b9941);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b9960;}}
}
B6b9943:L6b9943:{c.instructions+=2;NFSU2_TR(0x6b9943);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b9946:{NFSU2_TR(0x6b9946);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9949:L6b9949:{c.instructions+=4;NFSU2_TR(0x6b9949);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6b994b:{NFSU2_TR(0x6b994b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b994e:{NFSU2_TR(0x6b994e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9952:{NFSU2_TR(0x6b9952);
if(r1(R+518)){{goto L6b995d;}}
}
B6b9954:L6b9954:{c.instructions+=4;NFSU2_TR(0x6b9954);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b9955:{NFSU2_TR(0x6b9955);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b9958:{NFSU2_TR(0x6b9958);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6b995b:{NFSU2_TR(0x6b995b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9949u);}goto L6b9949;}}
}
B6b995d:L6b995d:{c.instructions+=1;NFSU2_TR(0x6b995d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9960:L6b9960:{c.instructions+=1;NFSU2_TR(0x6b9960);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b999c;}}
}
B6b9962:L6b9962:{c.instructions+=9;NFSU2_TR(0x6b9962);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9965:{NFSU2_TR(0x6b9965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b9967:{NFSU2_TR(0x6b9967);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b996a:{NFSU2_TR(0x6b996a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b996d:{NFSU2_TR(0x6b996d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9970:{NFSU2_TR(0x6b9970);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9973:{NFSU2_TR(0x6b9973);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b9976:{NFSU2_TR(0x6b9976);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b997a:{NFSU2_TR(0x6b997a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b999c;}}
}
B6b997c:L6b997c:{c.instructions+=3;NFSU2_TR(0x6b997c);
__builtin_memmove((R+4),(R+24),4);
}
B6b997e:{NFSU2_TR(0x6b997e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9985:{NFSU2_TR(0x6b9985);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b998aull));
TAIL_STATIC(0x6b49a0u,6b4);
}
B6b998a:L6b998a:{c.instructions+=2;NFSU2_TR(0x6b998a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b998c:{NFSU2_TR(0x6b998c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9998;}}
}
B6b998e:L6b998e:{c.instructions+=2;NFSU2_TR(0x6b998e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b998f:{NFSU2_TR(0x6b998f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9994ull));
TAIL_STATIC(0x6b4ad4u,6b4);
}
B6b9994:L6b9994:{c.instructions+=2;NFSU2_TR(0x6b9994);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9996:{NFSU2_TR(0x6b9996);
if(r1(R+518)){{goto L6b99ad;}}
}
B6b9998:L6b9998:{c.instructions+=1;NFSU2_TR(0x6b9998);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b999c:L6b999c:{c.instructions+=4;NFSU2_TR(0x6b999c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b999f:{NFSU2_TR(0x6b999f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b99a2:{NFSU2_TR(0x6b99a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b99a5:{NFSU2_TR(0x6b99a5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b98ddu);}goto L6b98dd;}}
}
B6b99ab:L6b99ab:{c.instructions+=1;NFSU2_TR(0x6b99ab);
{goto L6b99cd;}
}
B6b99ad:L6b99ad:{c.instructions+=3;NFSU2_TR(0x6b99ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b99b3:{NFSU2_TR(0x6b99b3);
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
B6b99b8:{NFSU2_TR(0x6b99b8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b9ae6;}}
}
B6b99be:L6b99be:{c.instructions+=3;NFSU2_TR(0x6b99be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b99c4:{NFSU2_TR(0x6b99c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b99c7:{NFSU2_TR(0x6b99c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b99cd:L6b99cd:{c.instructions+=3;NFSU2_TR(0x6b99cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b99d0:{NFSU2_TR(0x6b99d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b99d3:{NFSU2_TR(0x6b99d3);
if(r1(R+518)){{goto L6b9a6d;}}
}
B6b99d9:L6b99d9:{c.instructions+=5;NFSU2_TR(0x6b99d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b99dd:{NFSU2_TR(0x6b99dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b99e0:{NFSU2_TR(0x6b99e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b99e1:{NFSU2_TR(0x6b99e1);
__builtin_memmove((R+4),(R+24),4);
}
B6b99e3:{NFSU2_TR(0x6b99e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b99e8ull));
TAIL_STATIC(0x6b419eu,6b4);
}
B6b99e8:L6b99e8:{c.instructions+=2;NFSU2_TR(0x6b99e8);
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
B6b99ea:{NFSU2_TR(0x6b99ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b9ae1;}}
}
B6b99f0:L6b99f0:{c.instructions+=7;NFSU2_TR(0x6b99f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b99f3:{NFSU2_TR(0x6b99f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b99f4:{NFSU2_TR(0x6b99f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b99fa:{NFSU2_TR(0x6b99fa);
__builtin_memmove((R+4),(R+24),4);
}
B6b99fc:{NFSU2_TR(0x6b99fc);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b99fe:{NFSU2_TR(0x6b99fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9a04:{NFSU2_TR(0x6b9a04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9a09ull));
TAIL_STATIC(0x6b866cu,6b8);
}
B6b9a09:L6b9a09:{c.instructions+=4;NFSU2_TR(0x6b9a09);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b9a0b:{NFSU2_TR(0x6b9a0b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b9a0d:{NFSU2_TR(0x6b9a0d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9a10:{NFSU2_TR(0x6b9a10);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9892u);}goto L6b9892;}}
}
B6b9a16:L6b9a16:{c.instructions+=4;NFSU2_TR(0x6b9a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9a19:{NFSU2_TR(0x6b9a19);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b9a1c:{NFSU2_TR(0x6b9a1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9a1e:{NFSU2_TR(0x6b9a1e);
if(r1(R+518)){{goto L6b9a62;}}
}
B6b9a20:L6b9a20:{c.instructions+=5;NFSU2_TR(0x6b9a20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b9a22:{NFSU2_TR(0x6b9a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9a25:{NFSU2_TR(0x6b9a25);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b9a2b:{NFSU2_TR(0x6b9a2b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9a2e:{NFSU2_TR(0x6b9a2e);
if(r1(R+518)){{goto L6b9a34;}}
}
B6b9a30:L6b9a30:{c.instructions+=2;NFSU2_TR(0x6b9a30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9a32:{NFSU2_TR(0x6b9a32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9a56;}}
}
B6b9a34:L6b9a34:{c.instructions+=2;NFSU2_TR(0x6b9a34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9a35:{NFSU2_TR(0x6b9a35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9a3aull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b9a3a:L6b9a3a:{c.instructions+=2;NFSU2_TR(0x6b9a3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9a3c:{NFSU2_TR(0x6b9a3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9a56;}}
}
B6b9a3e:L6b9a3e:{c.instructions+=2;NFSU2_TR(0x6b9a3e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9a44:{NFSU2_TR(0x6b9a44);
if(r1(R+518)){{goto L6b9a56;}}
}
B6b9a46:L6b9a46:{c.instructions+=2;NFSU2_TR(0x6b9a46);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9a4c:{NFSU2_TR(0x6b9a4c);
if(r1(R+518)){{goto L6b9a56;}}
}
B6b9a4e:L6b9a4e:{c.instructions+=2;NFSU2_TR(0x6b9a4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a68f8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b9a55:{NFSU2_TR(0x6b9a55);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b9a56:L6b9a56:{c.instructions+=2;NFSU2_TR(0x6b9a56);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x200ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b9a5c:{NFSU2_TR(0x6b9a5c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b9ae6;}}
}
B6b9a62:L6b9a62:{c.instructions+=3;NFSU2_TR(0x6b9a62);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b9a63:{NFSU2_TR(0x6b9a63);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b9a66:{NFSU2_TR(0x6b9a66);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9a16u);}goto L6b9a16;}}
}
B6b9a68:L6b9a68:{c.instructions+=1;NFSU2_TR(0x6b9a68);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9892u);}goto L6b9892;}
}
B6b9a6d:L6b9a6d:{c.instructions+=3;NFSU2_TR(0x6b9a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9a70:{NFSU2_TR(0x6b9a70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6b9a74:{NFSU2_TR(0x6b9a74);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9807u);}goto L6b9807;}}
}
B6b9a7a:L6b9a7a:{c.instructions+=3;NFSU2_TR(0x6b9a7a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b9a7c:{NFSU2_TR(0x6b9a7c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9a7f:{NFSU2_TR(0x6b9a7f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b9adf;}}
}
B6b9a81:L6b9a81:{c.instructions+=4;NFSU2_TR(0x6b9a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9a84:{NFSU2_TR(0x6b9a84);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b9a87:{NFSU2_TR(0x6b9a87);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9a8b:{NFSU2_TR(0x6b9a8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9a94;}}
}
B6b9a8d:L6b9a8d:{c.instructions+=1;NFSU2_TR(0x6b9a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9a94:L6b9a94:{c.instructions+=3;NFSU2_TR(0x6b9a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b9a9a:{NFSU2_TR(0x6b9a9a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x200ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b9aa0:{NFSU2_TR(0x6b9aa0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b9aed;}}
}
B6b9aa2:L6b9aa2:{c.instructions+=4;NFSU2_TR(0x6b9aa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b9aa4:{NFSU2_TR(0x6b9aa4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6b9aaa:{NFSU2_TR(0x6b9aaa);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9aae:{NFSU2_TR(0x6b9aae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9ad9;}}
}
B6b9ab0:L6b9ab0:{c.instructions+=2;NFSU2_TR(0x6b9ab0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9ab1:{NFSU2_TR(0x6b9ab1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9ab6ull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b9ab6:L6b9ab6:{c.instructions+=2;NFSU2_TR(0x6b9ab6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9ab8:{NFSU2_TR(0x6b9ab8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9ad9;}}
}
B6b9aba:L6b9aba:{c.instructions+=2;NFSU2_TR(0x6b9aba);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9ac0:{NFSU2_TR(0x6b9ac0);
if(r1(R+518)){{goto L6b9ad9;}}
}
B6b9ac2:L6b9ac2:{c.instructions+=2;NFSU2_TR(0x6b9ac2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9ac8:{NFSU2_TR(0x6b9ac8);
if(r1(R+518)){{goto L6b9ad9;}}
}
B6b9aca:L6b9aca:{c.instructions+=3;NFSU2_TR(0x6b9aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9ad0:{NFSU2_TR(0x6b9ad0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b9ad3:{NFSU2_TR(0x6b9ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9ad9:L6b9ad9:{c.instructions+=3;NFSU2_TR(0x6b9ad9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b9ada:{NFSU2_TR(0x6b9ada);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6b9add:{NFSU2_TR(0x6b9add);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9a81u);}goto L6b9a81;}}
}
B6b9adf:L6b9adf:{c.instructions+=1;NFSU2_TR(0x6b9adf);
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
B6b9ae1:L6b9ae1:{c.instructions+=5;NFSU2_TR(0x6b9ae1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b9ae2:{NFSU2_TR(0x6b9ae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b9ae3:{NFSU2_TR(0x6b9ae3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b9ae4:{NFSU2_TR(0x6b9ae4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b9ae5:{NFSU2_TR(0x6b9ae5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b9ae6:L6b9ae6:{c.instructions+=2;NFSU2_TR(0x6b9ae6);
w4(R+0,u32(0x8007000eull));
}
B6b9aeb:{NFSU2_TR(0x6b9aeb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9ae1u);}goto L6b9ae1;}
}
B6b9aed:L6b9aed:{c.instructions+=2;NFSU2_TR(0x6b9aed);
w4(R+0,u32(0x80004005ull));
}
B6b9af2:{NFSU2_TR(0x6b9af2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9ae1u);}goto L6b9ae1;}
}
B6b9af4:L6b9af4:{c.instructions+=11;NFSU2_TR(0x6b9af4);
__builtin_memmove((R+28),(R+28),4);
}
B6b9af6:{NFSU2_TR(0x6b9af6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9af7:{NFSU2_TR(0x6b9af7);
__builtin_memmove((R+20),(R+16),4);
}
B6b9af9:{NFSU2_TR(0x6b9af9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B6b9afc:{NFSU2_TR(0x6b9afc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9afd:{NFSU2_TR(0x6b9afd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9afe:{NFSU2_TR(0x6b9afe);
__builtin_memmove((R+24),(R+4),4);
}
B6b9b00:{NFSU2_TR(0x6b9b00);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b9b02:{NFSU2_TR(0x6b9b02);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
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
B6b9b06:{NFSU2_TR(0x6b9b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9b09:{NFSU2_TR(0x6b9b09);
if(r1(R+518)){{goto L6b9b15;}}
}
B6b9b0b:L6b9b0b:{c.instructions+=2;NFSU2_TR(0x6b9b0b);
w4(R+0,u32(0x80004005ull));
}
B6b9b10:{NFSU2_TR(0x6b9b10);
{goto L6b9d33;}
}
B6b9b15:L6b9b15:{c.instructions+=15;NFSU2_TR(0x6b9b15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9b16:{NFSU2_TR(0x6b9b16);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b9b18:{NFSU2_TR(0x6b9b18);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b9b1b:{NFSU2_TR(0x6b9b1b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b9b1c:{NFSU2_TR(0x6b9b1c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b9b1d:{NFSU2_TR(0x6b9b1d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b9b1e:{NFSU2_TR(0x6b9b1e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b9b1f:{NFSU2_TR(0x6b9b1f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b9b21:{NFSU2_TR(0x6b9b21);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b9b24:{NFSU2_TR(0x6b9b24);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b9b25:{NFSU2_TR(0x6b9b25);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b9b26:{NFSU2_TR(0x6b9b26);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b9b27:{NFSU2_TR(0x6b9b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9b2a:{NFSU2_TR(0x6b9b2a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b9b2b:{NFSU2_TR(0x6b9b2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9b2e:L6b9b2e:{c.instructions+=6;NFSU2_TR(0x6b9b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9b34:{NFSU2_TR(0x6b9b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9b37:{NFSU2_TR(0x6b9b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6b9b3a:{NFSU2_TR(0x6b9b3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b9b3c:{NFSU2_TR(0x6b9b3c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9b3e:{NFSU2_TR(0x6b9b3e);
if(r1(R+518)){{goto L6b9ba4;}}
}
B6b9b40:L6b9b40:{c.instructions+=3;NFSU2_TR(0x6b9b40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b9b42:{NFSU2_TR(0x6b9b42);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9b44:{NFSU2_TR(0x6b9b44);
if(r1(R+518)){{goto L6b9ba4;}}
}
B6b9b46:L6b9b46:{c.instructions+=6;NFSU2_TR(0x6b9b46);
__builtin_memmove((R+28),(R+8),4);
}
B6b9b48:{NFSU2_TR(0x6b9b48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b9b4a:{NFSU2_TR(0x6b9b4a);
__builtin_memmove((R+12),(R+28),4);
}
B6b9b4c:{NFSU2_TR(0x6b9b4c);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfff00000ull))));
}
B6b9b52:{NFSU2_TR(0x6b9b52);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9b58:{NFSU2_TR(0x6b9b58);
if(r1(R+518)){{goto L6b9b97;}}
}
B6b9b5a:L6b9b5a:{c.instructions+=4;NFSU2_TR(0x6b9b5a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b9b60:{NFSU2_TR(0x6b9b60);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b9b62:{NFSU2_TR(0x6b9b62);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9b68:{NFSU2_TR(0x6b9b68);
if(r1(R+518)){{goto L6b9b72;}}
}
B6b9b6a:L6b9b6a:{c.instructions+=2;NFSU2_TR(0x6b9b6a);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6b9b70:{NFSU2_TR(0x6b9b70);
__builtin_memmove((R+12),(R+28),4);
}
B6b9b72:L6b9b72:{c.instructions+=8;NFSU2_TR(0x6b9b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9b75:{NFSU2_TR(0x6b9b75);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b9b78:{NFSU2_TR(0x6b9b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b9b7b:{NFSU2_TR(0x6b9b7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b9b7e:{NFSU2_TR(0x6b9b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9b81:{NFSU2_TR(0x6b9b81);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9b87:{NFSU2_TR(0x6b9b87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b9b89:{NFSU2_TR(0x6b9b89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9b99;}}
}
B6b9b8b:L6b9b8b:{c.instructions+=4;NFSU2_TR(0x6b9b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b9b8e:{NFSU2_TR(0x6b9b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9b91:{NFSU2_TR(0x6b9b91);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b9b95:{NFSU2_TR(0x6b9b95);
{goto L6b9ba0;}
}
B6b9b97:L6b9b97:{c.instructions+=1;NFSU2_TR(0x6b9b97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b9b99:L6b9b99:{c.instructions+=2;NFSU2_TR(0x6b9b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b9b9c:{NFSU2_TR(0x6b9b9c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b9ba0:L6b9ba0:{c.instructions+=2;NFSU2_TR(0x6b9ba0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b9ba2:{NFSU2_TR(0x6b9ba2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b9ba4:L6b9ba4:{c.instructions+=4;NFSU2_TR(0x6b9ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9ba7:{NFSU2_TR(0x6b9ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9baa:{NFSU2_TR(0x6b9baa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b9bad:{NFSU2_TR(0x6b9bad);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9b2eu);}goto L6b9b2e;}}
}
B6b9bb3:L6b9bb3:{c.instructions+=3;NFSU2_TR(0x6b9bb3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b9bb5:{NFSU2_TR(0x6b9bb5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9bb8:{NFSU2_TR(0x6b9bb8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b9bf5;}}
}
B6b9bba:L6b9bba:{c.instructions+=5;NFSU2_TR(0x6b9bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9bc0:{NFSU2_TR(0x6b9bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6b9bc3:{NFSU2_TR(0x6b9bc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b9bc5:{NFSU2_TR(0x6b9bc5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9bc7:{NFSU2_TR(0x6b9bc7);
if(r1(R+518)){{goto L6b9bef;}}
}
B6b9bc9:L6b9bc9:{c.instructions+=3;NFSU2_TR(0x6b9bc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b9bcb:{NFSU2_TR(0x6b9bcb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9bcd:{NFSU2_TR(0x6b9bcd);
if(r1(R+518)){{goto L6b9bef;}}
}
B6b9bcf:L6b9bcf:{c.instructions+=3;NFSU2_TR(0x6b9bcf);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b9bd5:{NFSU2_TR(0x6b9bd5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9bdb:{NFSU2_TR(0x6b9bdb);
if(r1(R+518)){{goto L6b9bef;}}
}
B6b9bdd:L6b9bdd:{c.instructions+=3;NFSU2_TR(0x6b9bdd);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6b9be1:{NFSU2_TR(0x6b9be1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b9be3:{NFSU2_TR(0x6b9be3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9d37;}}
}
B6b9be9:L6b9be9:{c.instructions+=3;NFSU2_TR(0x6b9be9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b9beb:{NFSU2_TR(0x6b9beb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b9bed:{NFSU2_TR(0x6b9bed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b9bef:L6b9bef:{c.instructions+=3;NFSU2_TR(0x6b9bef);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b9bf0:{NFSU2_TR(0x6b9bf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6b9bf3:{NFSU2_TR(0x6b9bf3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9bbau);}goto L6b9bba;}}
}
B6b9bf5:L6b9bf5:{c.instructions+=4;NFSU2_TR(0x6b9bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9bfb:{NFSU2_TR(0x6b9bfb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b9c00:{NFSU2_TR(0x6b9c00);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x101ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x101ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9c05:{NFSU2_TR(0x6b9c05);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b9c25;}}
}
B6b9c07:L6b9c07:{c.instructions+=8;NFSU2_TR(0x6b9c07);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9c09:{NFSU2_TR(0x6b9c09);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b9c0c:{NFSU2_TR(0x6b9c0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9c0d:{NFSU2_TR(0x6b9c0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9c10:{NFSU2_TR(0x6b9c10);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b9c13:{NFSU2_TR(0x6b9c13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9c14:{NFSU2_TR(0x6b9c14);
__builtin_memmove((R+4),(R+24),4);
}
B6b9c16:{NFSU2_TR(0x6b9c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9c1bull));
TAIL_STATIC(0x6b6fd1u,6b6);
}
B6b9c1b:L6b9c1b:{c.instructions+=3;NFSU2_TR(0x6b9c1b);
__builtin_memmove((R+28),(R+0),4);
}
B6b9c1d:{NFSU2_TR(0x6b9c1d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6b9c1f:{NFSU2_TR(0x6b9c1f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b9d0b;}}
}
B6b9c25:L6b9c25:{c.instructions+=8;NFSU2_TR(0x6b9c25);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9c27:{NFSU2_TR(0x6b9c27);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b9c2a:{NFSU2_TR(0x6b9c2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9c2b:{NFSU2_TR(0x6b9c2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9c2e:{NFSU2_TR(0x6b9c2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b9c31:{NFSU2_TR(0x6b9c31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9c32:{NFSU2_TR(0x6b9c32);
__builtin_memmove((R+4),(R+24),4);
}
B6b9c34:{NFSU2_TR(0x6b9c34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9c39ull));
TAIL_STATIC(0x6b6fd1u,6b6);
}
B6b9c39:L6b9c39:{c.instructions+=3;NFSU2_TR(0x6b9c39);
__builtin_memmove((R+28),(R+0),4);
}
B6b9c3b:{NFSU2_TR(0x6b9c3b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6b9c3d:{NFSU2_TR(0x6b9c3d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b9d0b;}}
}
B6b9c43:L6b9c43:{c.instructions+=8;NFSU2_TR(0x6b9c43);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9c45:{NFSU2_TR(0x6b9c45);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b9c48:{NFSU2_TR(0x6b9c48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9c49:{NFSU2_TR(0x6b9c49);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9c4c:{NFSU2_TR(0x6b9c4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b9c4f:{NFSU2_TR(0x6b9c4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9c50:{NFSU2_TR(0x6b9c50);
__builtin_memmove((R+4),(R+24),4);
}
B6b9c52:{NFSU2_TR(0x6b9c52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9c57ull));
TAIL_STATIC(0x6b6fd1u,6b6);
}
B6b9c57:L6b9c57:{c.instructions+=3;NFSU2_TR(0x6b9c57);
__builtin_memmove((R+28),(R+0),4);
}
B6b9c59:{NFSU2_TR(0x6b9c59);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6b9c5b:{NFSU2_TR(0x6b9c5b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b9d0b;}}
}
B6b9c61:L6b9c61:{c.instructions+=7;NFSU2_TR(0x6b9c61);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b9c64:{NFSU2_TR(0x6b9c64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9c65:{NFSU2_TR(0x6b9c65);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9c68:{NFSU2_TR(0x6b9c68);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b9c6b:{NFSU2_TR(0x6b9c6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9c6c:{NFSU2_TR(0x6b9c6c);
__builtin_memmove((R+4),(R+24),4);
}
B6b9c6e:{NFSU2_TR(0x6b9c6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9c73ull));
TAIL_STATIC(0x6b6afdu,6b6);
}
B6b9c73:L6b9c73:{c.instructions+=3;NFSU2_TR(0x6b9c73);
__builtin_memmove((R+28),(R+0),4);
}
B6b9c75:{NFSU2_TR(0x6b9c75);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6b9c77:{NFSU2_TR(0x6b9c77);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b9d0b;}}
}
B6b9c7d:L6b9c7d:{c.instructions+=4;NFSU2_TR(0x6b9c7d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9c81:{NFSU2_TR(0x6b9c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9c84:{NFSU2_TR(0x6b9c84);
w4(R+12,u32(0x80004005ull));
}
B6b9c89:{NFSU2_TR(0x6b9c89);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b9ccd;}}
}
B6b9c8b:L6b9c8b:{c.instructions+=4;NFSU2_TR(0x6b9c8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9c8e:{NFSU2_TR(0x6b9c8e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b9c92:{NFSU2_TR(0x6b9c92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9c94:{NFSU2_TR(0x6b9c94);
if(r1(R+518)){{goto L6b9cc2;}}
}
B6b9c96:L6b9c96:{c.instructions+=9;NFSU2_TR(0x6b9c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9c9c:{NFSU2_TR(0x6b9c9c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B6b9ca2:{NFSU2_TR(0x6b9ca2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9ca3:{NFSU2_TR(0x6b9ca3);
u8 U[4];
w4(U+0,u32(0x7bceb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9ca8:{NFSU2_TR(0x6b9ca8);
u8 U[4];
w4(U+0,u32(0x11abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9cad:{NFSU2_TR(0x6b9cad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b9cb0:{NFSU2_TR(0x6b9cb0);
__builtin_memmove((R+28),(R+12),4);
}
B6b9cb2:{NFSU2_TR(0x6b9cb2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9cb3:{NFSU2_TR(0x6b9cb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9cb8ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b9cb8:L6b9cb8:{c.instructions+=2;NFSU2_TR(0x6b9cb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6b9cbb:{NFSU2_TR(0x6b9cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9cc2:L6b9cc2:{c.instructions+=4;NFSU2_TR(0x6b9cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9cc5:{NFSU2_TR(0x6b9cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9cc8:{NFSU2_TR(0x6b9cc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b9ccb:{NFSU2_TR(0x6b9ccb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9c8bu);}goto L6b9c8b;}}
}
B6b9ccd:L6b9ccd:{c.instructions+=2;NFSU2_TR(0x6b9ccd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9ccf:{NFSU2_TR(0x6b9ccf);
if(r1(R+518)){{goto L6b9d05;}}
}
B6b9cd1:L6b9cd1:{c.instructions+=3;NFSU2_TR(0x6b9cd1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b9cd3:{NFSU2_TR(0x6b9cd3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9cd6:{NFSU2_TR(0x6b9cd6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b9ceb;}}
}
B6b9cd8:L6b9cd8:{c.instructions+=6;NFSU2_TR(0x6b9cd8);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6b9cdc:{NFSU2_TR(0x6b9cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9ce2:{NFSU2_TR(0x6b9ce2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b9ce5:{NFSU2_TR(0x6b9ce5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b9ce6:{NFSU2_TR(0x6b9ce6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b9ce9:{NFSU2_TR(0x6b9ce9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9cd8u);}goto L6b9cd8;}}
}
B6b9ceb:L6b9ceb:{c.instructions+=3;NFSU2_TR(0x6b9ceb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b9cf1:{NFSU2_TR(0x6b9cf1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6b9cf3:{NFSU2_TR(0x6b9cf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9cf8ull));
TAIL_STATIC(0x575630u,575);
}
B6b9cf8:L6b9cf8:{c.instructions+=4;NFSU2_TR(0x6b9cf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6b9cfb:{NFSU2_TR(0x6b9cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b9d02:{NFSU2_TR(0x6b9d02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b9d03:{NFSU2_TR(0x6b9d03);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b9d05:L6b9d05:{c.instructions+=2;NFSU2_TR(0x6b9d05);
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
B6b9d07:{NFSU2_TR(0x6b9d07);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6b9d30;}}
}
B6b9d09:L6b9d09:{c.instructions+=1;NFSU2_TR(0x6b9d09);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b9d0b:L6b9d0b:{c.instructions+=2;NFSU2_TR(0x6b9d0b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B6b9d0e:{NFSU2_TR(0x6b9d0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9d30;}}
}
B6b9d10:L6b9d10:{c.instructions+=8;NFSU2_TR(0x6b9d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9d16:{NFSU2_TR(0x6b9d16);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b9d1b:{NFSU2_TR(0x6b9d1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9d1c:{NFSU2_TR(0x6b9d1c);
u8 U[4];
w4(U+0,u32(0x7bce30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9d21:{NFSU2_TR(0x6b9d21);
u8 U[4];
w4(U+0,u32(0x11abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9d26:{NFSU2_TR(0x6b9d26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9d27:{NFSU2_TR(0x6b9d27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9d28:{NFSU2_TR(0x6b9d28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9d2dull));
TAIL_STATIC(0x69e936u,69e);
}
B6b9d2d:L6b9d2d:{c.instructions+=1;NFSU2_TR(0x6b9d2d);
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
B6b9d30:L6b9d30:{c.instructions+=2;NFSU2_TR(0x6b9d30);
__builtin_memmove((R+0),(R+28),4);
}
B6b9d32:{NFSU2_TR(0x6b9d32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b9d33:L6b9d33:{c.instructions+=4;NFSU2_TR(0x6b9d33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b9d34:{NFSU2_TR(0x6b9d34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b9d35:{NFSU2_TR(0x6b9d35);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b9d36:{NFSU2_TR(0x6b9d36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b9d37:L6b9d37:{c.instructions+=2;NFSU2_TR(0x6b9d37);
w4(R+28,u32(0x80004005ull));
}
B6b9d3c:{NFSU2_TR(0x6b9d3c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b9d0bu);}goto L6b9d0b;}
}
B6b9d3e:L6b9d3e:{c.instructions+=10;NFSU2_TR(0x6b9d3e);
__builtin_memmove((R+28),(R+28),4);
}
B6b9d40:{NFSU2_TR(0x6b9d40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9d41:{NFSU2_TR(0x6b9d41);
__builtin_memmove((R+20),(R+16),4);
}
B6b9d43:{NFSU2_TR(0x6b9d43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9d44:{NFSU2_TR(0x6b9d44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9d45:{NFSU2_TR(0x6b9d45);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b9d47:{NFSU2_TR(0x6b9d47);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9d4a:{NFSU2_TR(0x6b9d4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9d4b:{NFSU2_TR(0x6b9d4b);
__builtin_memmove((R+24),(R+4),4);
}
B6b9d4d:{NFSU2_TR(0x6b9d4d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ba052u,6ba);}
}
B6b9d53:L6b9d53:{c.instructions+=6;NFSU2_TR(0x6b9d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9d56:{NFSU2_TR(0x6b9d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9d5c:{NFSU2_TR(0x6b9d5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b9d5f:{NFSU2_TR(0x6b9d5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9d61:{NFSU2_TR(0x6b9d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9d67:{NFSU2_TR(0x6b9d67);
if(r1(R+518)){TAIL_STATIC(0x6ba048u,6ba);}
}
B6b9d6d:L6b9d6d:{c.instructions+=3;NFSU2_TR(0x6b9d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9d70:{NFSU2_TR(0x6b9d70);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9d72:{NFSU2_TR(0x6b9d72);
if(r1(R+518)){{goto L6b9d83;}}
}
B6b9d74:L6b9d74:{c.instructions+=2;NFSU2_TR(0x6b9d74);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9d78:{NFSU2_TR(0x6b9d78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9d83;}}
}
B6b9d7a:L6b9d7a:{c.instructions+=2;NFSU2_TR(0x6b9d7a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6b9d7d:{NFSU2_TR(0x6b9d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b9d83:L6b9d83:{c.instructions+=4;NFSU2_TR(0x6b9d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b9d89:{NFSU2_TR(0x6b9d89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b9d8b:{NFSU2_TR(0x6b9d8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9d8d:{NFSU2_TR(0x6b9d8d);
if(r1(R+518)){TAIL_STATIC(0x6ba048u,6ba);}
}
B6b9d93:L6b9d93:{c.instructions+=6;NFSU2_TR(0x6b9d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9d96:{NFSU2_TR(0x6b9d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b9d99:{NFSU2_TR(0x6b9d99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b9d9b:{NFSU2_TR(0x6b9d9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b9d9e:{NFSU2_TR(0x6b9d9e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9da2:{NFSU2_TR(0x6b9da2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ba05bu,6ba);}
}
B6b9da8:L6b9da8:{c.instructions+=4;NFSU2_TR(0x6b9da8);
__builtin_memmove((R+0),(R+4),4);
}
B6b9daa:{NFSU2_TR(0x6b9daa);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b9daf:{NFSU2_TR(0x6b9daf);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x70300000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9db4:{NFSU2_TR(0x6b9db4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b9f82;}}
}
B6b9dba:L6b9dba:{c.instructions+=1;NFSU2_TR(0x6b9dba);
if(r1(R+518)){{goto L6b9fe4;}}
}
B6b9dc0:L6b9dc0:{c.instructions+=2;NFSU2_TR(0x6b9dc0);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x50000000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9dc5:{NFSU2_TR(0x6b9dc5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b9f30;}}
}
B6b9dcb:L6b9dcb:{c.instructions+=1;NFSU2_TR(0x6b9dcb);
if(r1(R+518)){{goto L6b9e6b;}}
}
B6b9dd1:L6b9dd1:{c.instructions+=2;NFSU2_TR(0x6b9dd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9dd3:{NFSU2_TR(0x6b9dd3);
if(r1(R+518)){TAIL_STATIC(0x6ba048u,6ba);}
}
B6b9dd9:L6b9dd9:{c.instructions+=2;NFSU2_TR(0x6b9dd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9dde:{NFSU2_TR(0x6b9dde);
if(r1(R+518)){{goto L6b9e5f;}}
}
B6b9de0:L6b9de0:{c.instructions+=2;NFSU2_TR(0x6b9de0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9de5:{NFSU2_TR(0x6b9de5);
if(r1(R+518)){{goto L6b9e53;}}
}
B6b9de7:L6b9de7:{c.instructions+=2;NFSU2_TR(0x6b9de7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9dec:{NFSU2_TR(0x6b9dec);
if(r1(R+518)){{goto L6b9e47;}}
}
B6b9dee:L6b9dee:{c.instructions+=2;NFSU2_TR(0x6b9dee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9df3:{NFSU2_TR(0x6b9df3);
if(r1(R+518)){{goto L6b9e3b;}}
}
B6b9df5:L6b9df5:{c.instructions+=2;NFSU2_TR(0x6b9df5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9dfa:{NFSU2_TR(0x6b9dfa);
if(r1(R+518)){{goto L6b9e2f;}}
}
B6b9dfc:L6b9dfc:{c.instructions+=2;NFSU2_TR(0x6b9dfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9e01:{NFSU2_TR(0x6b9e01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ba07eu,6ba);}
}
B6b9e07:L6b9e07:{c.instructions+=4;NFSU2_TR(0x6b9e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9e0d:{NFSU2_TR(0x6b9e0d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b9e12:{NFSU2_TR(0x6b9e12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9e17:{NFSU2_TR(0x6b9e17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9e25;}}
}
B6b9e19:L6b9e19:{c.instructions+=2;NFSU2_TR(0x6b9e19);
__builtin_memmove((R+4),(R+24),4);
}
B6b9e1b:{NFSU2_TR(0x6b9e1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9e20ull));
TAIL_STATIC(0x6d3941u,6d3);
}
B6b9e20:L6b9e20:{c.instructions+=1;NFSU2_TR(0x6b9e20);
TAIL_STATIC(0x6ba03du,6ba);
}
B6b9e25:L6b9e25:{c.instructions+=2;NFSU2_TR(0x6b9e25);
w4(R+0,u32(0x80004001ull));
}
B6b9e2a:{NFSU2_TR(0x6b9e2a);
TAIL_STATIC(0x6ba03du,6ba);
}
B6b9e2f:L6b9e2f:{c.instructions+=2;NFSU2_TR(0x6b9e2f);
__builtin_memmove((R+4),(R+24),4);
}
B6b9e31:{NFSU2_TR(0x6b9e31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9e36ull));
TAIL_STATIC(0x6d3870u,6d3);
}
B6b9e36:L6b9e36:{c.instructions+=1;NFSU2_TR(0x6b9e36);
TAIL_STATIC(0x6ba03du,6ba);
}
B6b9e3b:L6b9e3b:{c.instructions+=2;NFSU2_TR(0x6b9e3b);
__builtin_memmove((R+4),(R+24),4);
}
B6b9e3d:{NFSU2_TR(0x6b9e3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9e42ull));
TAIL_STATIC(0x6d3866u,6d3);
}
B6b9e42:L6b9e42:{c.instructions+=1;NFSU2_TR(0x6b9e42);
TAIL_STATIC(0x6ba03du,6ba);
}
B6b9e47:L6b9e47:{c.instructions+=2;NFSU2_TR(0x6b9e47);
__builtin_memmove((R+4),(R+24),4);
}
B6b9e49:{NFSU2_TR(0x6b9e49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9e4eull));
TAIL_STATIC(0x6d2485u,6d2);
}
B6b9e4e:L6b9e4e:{c.instructions+=1;NFSU2_TR(0x6b9e4e);
TAIL_STATIC(0x6ba03du,6ba);
}
B6b9e53:L6b9e53:{c.instructions+=2;NFSU2_TR(0x6b9e53);
__builtin_memmove((R+4),(R+24),4);
}
B6b9e55:{NFSU2_TR(0x6b9e55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9e5aull));
TAIL_STATIC(0x6d2c79u,6d2);
}
B6b9e5a:L6b9e5a:{c.instructions+=1;NFSU2_TR(0x6b9e5a);
TAIL_STATIC(0x6ba03du,6ba);
}
B6b9e5f:L6b9e5f:{c.instructions+=2;NFSU2_TR(0x6b9e5f);
__builtin_memmove((R+4),(R+24),4);
}
B6b9e61:{NFSU2_TR(0x6b9e61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9e66ull));
TAIL_STATIC(0x6d366fu,6d3);
}
B6b9e66:L6b9e66:{c.instructions+=1;NFSU2_TR(0x6b9e66);
TAIL_STATIC(0x6ba03du,6ba);
}
B6b9e6b:L6b9e6b:{c.instructions+=3;NFSU2_TR(0x6b9e6b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6b9e71:{NFSU2_TR(0x6b9e71);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9e74:{NFSU2_TR(0x6b9e74);
if(r1(R+518)){TAIL_STATIC(0x6ba07eu,6ba);}
}
B6b9e7a:L6b9e7a:{c.instructions+=2;NFSU2_TR(0x6b9e7a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9e7d:{NFSU2_TR(0x6b9e7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9e95;}}
}
B6b9e7f:L6b9e7f:{c.instructions+=4;NFSU2_TR(0x6b9e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9e85:{NFSU2_TR(0x6b9e85);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b9e8a:{NFSU2_TR(0x6b9e8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x101ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9e8f:{NFSU2_TR(0x6b9e8f);
if(r1(R+518)){{goto L6b9f18;}}
}
B6b9e95:L6b9e95:{c.instructions+=4;NFSU2_TR(0x6b9e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9e9b:{NFSU2_TR(0x6b9e9b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b9ea0:{NFSU2_TR(0x6b9ea0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x102ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9ea5:{NFSU2_TR(0x6b9ea5);
if(r1(R+518)){{goto L6b9eae;}}
}
B6b9ea7:L6b9ea7:{c.instructions+=2;NFSU2_TR(0x6b9ea7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x103ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9eac:{NFSU2_TR(0x6b9eac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9f24;}}
}
B6b9eae:L6b9eae:{c.instructions+=2;NFSU2_TR(0x6b9eae);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9eb1:{NFSU2_TR(0x6b9eb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9f24;}}
}
B6b9eb3:L6b9eb3:{c.instructions+=11;NFSU2_TR(0x6b9eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9eb6:{NFSU2_TR(0x6b9eb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b9eb8:{NFSU2_TR(0x6b9eb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b9ebb:{NFSU2_TR(0x6b9ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9ebe:{NFSU2_TR(0x6b9ebe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b9ec0:{NFSU2_TR(0x6b9ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9ec3:{NFSU2_TR(0x6b9ec3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b9ec6:{NFSU2_TR(0x6b9ec6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b9ec9:{NFSU2_TR(0x6b9ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9ecc:{NFSU2_TR(0x6b9ecc);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9ed2:{NFSU2_TR(0x6b9ed2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9efe;}}
}
B6b9ed4:L6b9ed4:{c.instructions+=5;NFSU2_TR(0x6b9ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b9ed7:{NFSU2_TR(0x6b9ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9edd:{NFSU2_TR(0x6b9edd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B6b9ee3:{NFSU2_TR(0x6b9ee3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9ee6:{NFSU2_TR(0x6b9ee6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9eee;}}
}
B6b9ee8:L6b9ee8:{c.instructions+=2;NFSU2_TR(0x6b9ee8);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9eec:{NFSU2_TR(0x6b9eec);
if(r1(R+518)){{goto L6b9ef9;}}
}
B6b9eee:L6b9eee:{c.instructions+=2;NFSU2_TR(0x6b9eee);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9ef1:{NFSU2_TR(0x6b9ef1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9f24;}}
}
B6b9ef3:L6b9ef3:{c.instructions+=2;NFSU2_TR(0x6b9ef3);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9ef7:{NFSU2_TR(0x6b9ef7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9f24;}}
}
B6b9ef9:L6b9ef9:{c.instructions+=2;NFSU2_TR(0x6b9ef9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9efc:{NFSU2_TR(0x6b9efc);
{goto L6b9f16;}
}
B6b9efe:L6b9efe:{c.instructions+=2;NFSU2_TR(0x6b9efe);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9f01:{NFSU2_TR(0x6b9f01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9f0b;}}
}
B6b9f03:L6b9f03:{c.instructions+=3;NFSU2_TR(0x6b9f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b9f06:{NFSU2_TR(0x6b9f06);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9f09:{NFSU2_TR(0x6b9f09);
if(r1(R+518)){{goto L6b9f18;}}
}
B6b9f0b:L6b9f0b:{c.instructions+=2;NFSU2_TR(0x6b9f0b);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9f0e:{NFSU2_TR(0x6b9f0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9f24;}}
}
B6b9f10:L6b9f10:{c.instructions+=2;NFSU2_TR(0x6b9f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b9f13:{NFSU2_TR(0x6b9f13);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b9f16:L6b9f16:{c.instructions+=1;NFSU2_TR(0x6b9f16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b9f24;}}
}
B6b9f18:L6b9f18:{c.instructions+=2;NFSU2_TR(0x6b9f18);
__builtin_memmove((R+4),(R+24),4);
}
B6b9f1a:{NFSU2_TR(0x6b9f1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9f1full));
TAIL_STATIC(0x6b7784u,6b7);
}
B6b9f1f:L6b9f1f:{c.instructions+=1;NFSU2_TR(0x6b9f1f);
TAIL_STATIC(0x6ba03du,6ba);
}
B6b9f24:L6b9f24:{c.instructions+=2;NFSU2_TR(0x6b9f24);
__builtin_memmove((R+4),(R+24),4);
}
B6b9f26:{NFSU2_TR(0x6b9f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9f2bull));
TAIL_STATIC(0x6d3884u,6d3);
}
B6b9f2b:L6b9f2b:{c.instructions+=1;NFSU2_TR(0x6b9f2b);
TAIL_STATIC(0x6ba03du,6ba);
}
B6b9f30:L6b9f30:{c.instructions+=2;NFSU2_TR(0x6b9f30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9f35:{NFSU2_TR(0x6b9f35);
if(r1(R+518)){{goto L6b9f76;}}
}
B6b9f37:L6b9f37:{c.instructions+=2;NFSU2_TR(0x6b9f37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9f3c:{NFSU2_TR(0x6b9f3c);
if(r1(R+518)){{goto L6b9f76;}}
}
B6b9f3e:L6b9f3e:{c.instructions+=2;NFSU2_TR(0x6b9f3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9f43:{NFSU2_TR(0x6b9f43);
if(r1(R+518)){{goto L6b9f6a;}}
}
B6b9f45:L6b9f45:{c.instructions+=2;NFSU2_TR(0x6b9f45);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9f4a:{NFSU2_TR(0x6b9f4a);
if(r1(R+518)){{goto L6b9f76;}}
}
B6b9f4c:L6b9f4c:{c.instructions+=2;NFSU2_TR(0x6b9f4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9f51:{NFSU2_TR(0x6b9f51);
if(r1(R+518)){{goto L6b9f76;}}
}
B6b9f53:L6b9f53:{c.instructions+=2;NFSU2_TR(0x6b9f53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9f58:{NFSU2_TR(0x6b9f58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ba07eu,6ba);}
}
B6b9f5e:L6b9f5e:{c.instructions+=2;NFSU2_TR(0x6b9f5e);
__builtin_memmove((R+4),(R+24),4);
}
B6b9f60:{NFSU2_TR(0x6b9f60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9f65ull));
TAIL_STATIC(0x6d2df8u,6d2);
}
B6b9f65:L6b9f65:{c.instructions+=1;NFSU2_TR(0x6b9f65);
TAIL_STATIC(0x6ba03du,6ba);
}
B6b9f6a:L6b9f6a:{c.instructions+=2;NFSU2_TR(0x6b9f6a);
__builtin_memmove((R+4),(R+24),4);
}
B6b9f6c:{NFSU2_TR(0x6b9f6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9f71ull));
TAIL_STATIC(0x6b7af1u,6b7);
}
B6b9f71:L6b9f71:{c.instructions+=1;NFSU2_TR(0x6b9f71);
TAIL_STATIC(0x6ba03du,6ba);
}
B6b9f76:L6b9f76:{c.instructions+=2;NFSU2_TR(0x6b9f76);
__builtin_memmove((R+4),(R+24),4);
}
B6b9f78:{NFSU2_TR(0x6b9f78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9f7dull));
TAIL_STATIC(0x6b7bc3u,6b7);
}
B6b9f7d:L6b9f7d:{c.instructions+=1;NFSU2_TR(0x6b9f7d);
TAIL_STATIC(0x6ba03du,6ba);
}
B6b9f82:L6b9f82:{c.instructions+=3;NFSU2_TR(0x6b9f82);
w4(R+4,u32(0x72600000ull));
}
B6b9f87:{NFSU2_TR(0x6b9f87);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b9f89:{NFSU2_TR(0x6b9f89);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b9ff1;}}
}
B6b9f8b:L6b9f8b:{c.instructions+=1;NFSU2_TR(0x6b9f8b);
if(r1(R+518)){{goto L6b9fed;}}
}
B6b9f8d:L6b9f8d:{c.instructions+=2;NFSU2_TR(0x6b9f8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9f92:{NFSU2_TR(0x6b9f92);
if(r1(R+518)){{goto L6b9fe4;}}
}
B6b9f94:L6b9f94:{c.instructions+=2;NFSU2_TR(0x6b9f94);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9f99:{NFSU2_TR(0x6b9f99);
if(r1(R+518)){{goto L6b9fdb;}}
}
B6b9f9b:L6b9f9b:{c.instructions+=2;NFSU2_TR(0x6b9f9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9fa0:{NFSU2_TR(0x6b9fa0);
if(r1(R+518)){{goto L6b9fd2;}}
}
B6b9fa2:L6b9fa2:{c.instructions+=2;NFSU2_TR(0x6b9fa2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9fa7:{NFSU2_TR(0x6b9fa7);
if(r1(R+518)){{goto L6b9fce;}}
}
B6b9fa9:L6b9fa9:{c.instructions+=2;NFSU2_TR(0x6b9fa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9fae:{NFSU2_TR(0x6b9fae);
if(r1(R+518)){{goto L6b9fca;}}
}
B6b9fb0:L6b9fb0:{c.instructions+=2;NFSU2_TR(0x6b9fb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9fb5:{NFSU2_TR(0x6b9fb5);
if(r1(R+518)){{goto L6b9fc6;}}
}
B6b9fb7:L6b9fb7:{c.instructions+=2;NFSU2_TR(0x6b9fb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9fbc:{NFSU2_TR(0x6b9fbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ba07eu,6ba);}
}
B6b9fc2:L6b9fc2:{c.instructions+=2;NFSU2_TR(0x6b9fc2);
u8 U[4];
w4(U+0,u32(0x4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9fc4:{NFSU2_TR(0x6b9fc4);
TAIL_STATIC(0x6ba036u,6ba);
}
B6b9fc6:L6b9fc6:{c.instructions+=2;NFSU2_TR(0x6b9fc6);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9fc8:{NFSU2_TR(0x6b9fc8);
TAIL_STATIC(0x6ba036u,6ba);
}
B6b9fca:L6b9fca:{c.instructions+=2;NFSU2_TR(0x6b9fca);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9fcc:{NFSU2_TR(0x6b9fcc);
TAIL_STATIC(0x6ba036u,6ba);
}
B6b9fce:L6b9fce:{c.instructions+=2;NFSU2_TR(0x6b9fce);
u8 U[4];
w4(U+0,u32(0x47ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9fd0:{NFSU2_TR(0x6b9fd0);
TAIL_STATIC(0x6ba036u,6ba);
}
B6b9fd2:L6b9fd2:{c.instructions+=2;NFSU2_TR(0x6b9fd2);
__builtin_memmove((R+4),(R+24),4);
}
B6b9fd4:{NFSU2_TR(0x6b9fd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9fd9ull));
TAIL_STATIC(0x6b7d14u,6b7);
}
B6b9fd9:L6b9fd9:{c.instructions+=1;NFSU2_TR(0x6b9fd9);
TAIL_STATIC(0x6ba03du,6ba);
}
B6b9fdb:L6b9fdb:{c.instructions+=2;NFSU2_TR(0x6b9fdb);
__builtin_memmove((R+4),(R+24),4);
}
B6b9fdd:{NFSU2_TR(0x6b9fdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9fe2ull));
TAIL_STATIC(0x6d394bu,6d3);
}
B6b9fe2:L6b9fe2:{c.instructions+=1;NFSU2_TR(0x6b9fe2);
TAIL_STATIC(0x6ba03du,6ba);
}
B6b9fe4:L6b9fe4:{c.instructions+=2;NFSU2_TR(0x6b9fe4);
__builtin_memmove((R+4),(R+24),4);
}
B6b9fe6:{NFSU2_TR(0x6b9fe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b9febull));
TAIL_STATIC(0x6d2fb9u,6d2);
}
B6b9feb:L6b9feb:{c.instructions+=1;NFSU2_TR(0x6b9feb);
TAIL_STATIC(0x6ba03du,6ba);
}
B6b9fed:L6b9fed:{c.instructions+=2;NFSU2_TR(0x6b9fed);
u8 U[4];
w4(U+0,u32(0x52ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b9fef:{NFSU2_TR(0x6b9fef);
TAIL_STATIC(0x6ba036u,6ba);
}
B6b9ff1:L6b9ff1:{c.instructions+=2;NFSU2_TR(0x6b9ff1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9ff6:{NFSU2_TR(0x6b9ff6);
if(r1(R+518)){TAIL_STATIC(0x6ba034u,6ba);}
}
B6b9ff8:L6b9ff8:{c.instructions+=2;NFSU2_TR(0x6b9ff8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b9ffd:{NFSU2_TR(0x6b9ffd);
if(r1(R+518)){TAIL_STATIC(0x6ba030u,6ba);}
}
B6b9fff:L6b9fff:{c.instructions+=1;NFSU2_TR(0x6b9fff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
TAIL_STATIC(0x6ba004u,6ba);
}
XIT:NFSU2_TR_EXIT(0x6b9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
