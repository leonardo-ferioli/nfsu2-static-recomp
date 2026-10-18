#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b8(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5e9(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5b9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5b9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 page_5b9(Cpu& c){return body_5b9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5b9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5b9000:goto L5b9000;
case 0x5b9001:c.instructions+=3;goto B5b9001;
case 0x5b9006:c.instructions+=2;goto B5b9006;
case 0x5b9007:c.instructions+=1;goto B5b9007;
case 0x5b900a:goto L5b900a;
case 0x5b900f:c.instructions+=2;goto B5b900f;
case 0x5b9011:c.instructions+=1;goto B5b9011;
case 0x5b9013:goto L5b9013;
case 0x5b9018:c.instructions+=2;goto B5b9018;
case 0x5b901d:c.instructions+=1;goto B5b901d;
case 0x5b9022:goto L5b9022;
case 0x5b9025:c.instructions+=2;goto B5b9025;
case 0x5b9027:c.instructions+=1;goto B5b9027;
case 0x5b9029:goto L5b9029;
case 0x5b902a:c.instructions+=5;goto B5b902a;
case 0x5b902b:c.instructions+=4;goto B5b902b;
case 0x5b902c:c.instructions+=3;goto B5b902c;
case 0x5b9031:c.instructions+=2;goto B5b9031;
case 0x5b9032:c.instructions+=1;goto B5b9032;
case 0x5b9035:goto L5b9035;
case 0x5b903a:c.instructions+=2;goto B5b903a;
case 0x5b903f:c.instructions+=1;goto B5b903f;
case 0x5b9044:goto L5b9044;
case 0x5b9047:c.instructions+=2;goto B5b9047;
case 0x5b9049:c.instructions+=1;goto B5b9049;
case 0x5b904b:goto L5b904b;
case 0x5b904c:c.instructions+=5;goto B5b904c;
case 0x5b904d:c.instructions+=4;goto B5b904d;
case 0x5b904e:c.instructions+=3;goto B5b904e;
case 0x5b9053:c.instructions+=2;goto B5b9053;
case 0x5b9054:c.instructions+=1;goto B5b9054;
case 0x5b9057:goto L5b9057;
case 0x5b905c:c.instructions+=2;goto B5b905c;
case 0x5b9061:c.instructions+=1;goto B5b9061;
case 0x5b9066:goto L5b9066;
case 0x5b9069:c.instructions+=2;goto B5b9069;
case 0x5b906b:c.instructions+=1;goto B5b906b;
case 0x5b906d:goto L5b906d;
case 0x5b906e:c.instructions+=5;goto B5b906e;
case 0x5b906f:c.instructions+=4;goto B5b906f;
case 0x5b9070:c.instructions+=3;goto B5b9070;
case 0x5b9075:c.instructions+=2;goto B5b9075;
case 0x5b9076:c.instructions+=1;goto B5b9076;
case 0x5b9079:goto L5b9079;
case 0x5b907a:c.instructions+=5;goto B5b907a;
case 0x5b907b:c.instructions+=4;goto B5b907b;
case 0x5b907c:c.instructions+=3;goto B5b907c;
case 0x5b9081:c.instructions+=2;goto B5b9081;
case 0x5b9082:c.instructions+=1;goto B5b9082;
case 0x5b9090:goto L5b9090;
case 0x5b9093:c.instructions+=7;goto B5b9093;
case 0x5b9094:c.instructions+=6;goto B5b9094;
case 0x5b9098:c.instructions+=5;goto B5b9098;
case 0x5b9099:c.instructions+=4;goto B5b9099;
case 0x5b909b:c.instructions+=3;goto B5b909b;
case 0x5b90a0:c.instructions+=2;goto B5b90a0;
case 0x5b90a5:c.instructions+=1;goto B5b90a5;
case 0x5b90a9:goto L5b90a9;
case 0x5b90ab:goto L5b90ab;
case 0x5b90af:c.instructions+=20;goto B5b90af;
case 0x5b90b3:c.instructions+=19;goto B5b90b3;
case 0x5b90b7:c.instructions+=18;goto B5b90b7;
case 0x5b90bb:c.instructions+=17;goto B5b90bb;
case 0x5b90bf:c.instructions+=16;goto B5b90bf;
case 0x5b90c2:c.instructions+=15;goto B5b90c2;
case 0x5b90c3:c.instructions+=14;goto B5b90c3;
case 0x5b90c8:c.instructions+=13;goto B5b90c8;
case 0x5b90ca:c.instructions+=12;goto B5b90ca;
case 0x5b90ce:c.instructions+=11;goto B5b90ce;
case 0x5b90d3:c.instructions+=10;goto B5b90d3;
case 0x5b90d7:c.instructions+=9;goto B5b90d7;
case 0x5b90d9:c.instructions+=8;goto B5b90d9;
case 0x5b90da:c.instructions+=7;goto B5b90da;
case 0x5b90de:c.instructions+=6;goto B5b90de;
case 0x5b90e2:c.instructions+=5;goto B5b90e2;
case 0x5b90e6:c.instructions+=4;goto B5b90e6;
case 0x5b90ea:c.instructions+=3;goto B5b90ea;
case 0x5b90f2:c.instructions+=2;goto B5b90f2;
case 0x5b90fa:c.instructions+=1;goto B5b90fa;
case 0x5b90fd:goto L5b90fd;
case 0x5b90ff:c.instructions+=5;goto B5b90ff;
case 0x5b9103:c.instructions+=4;goto B5b9103;
case 0x5b9104:c.instructions+=3;goto B5b9104;
case 0x5b9105:c.instructions+=2;goto B5b9105;
case 0x5b9106:c.instructions+=1;goto B5b9106;
case 0x5b9109:goto L5b9109;
case 0x5b910a:c.instructions+=4;goto B5b910a;
case 0x5b910f:c.instructions+=3;goto B5b910f;
case 0x5b9110:c.instructions+=2;goto B5b9110;
case 0x5b9113:c.instructions+=1;goto B5b9113;
case 0x5b9120:goto L5b9120;
case 0x5b9127:c.instructions+=4;goto B5b9127;
case 0x5b912d:c.instructions+=3;goto B5b912d;
case 0x5b9130:c.instructions+=2;goto B5b9130;
case 0x5b9133:c.instructions+=1;goto B5b9133;
case 0x5b9139:goto L5b9139;
case 0x5b913e:c.instructions+=2;goto B5b913e;
case 0x5b9140:c.instructions+=1;goto B5b9140;
case 0x5b9146:goto L5b9146;
case 0x5b9148:c.instructions+=2;goto B5b9148;
case 0x5b9149:c.instructions+=1;goto B5b9149;
case 0x5b914c:goto L5b914c;
case 0x5b9151:c.instructions+=4;goto B5b9151;
case 0x5b9153:c.instructions+=3;goto B5b9153;
case 0x5b9158:c.instructions+=2;goto B5b9158;
case 0x5b9159:c.instructions+=1;goto B5b9159;
case 0x5b915c:goto L5b915c;
case 0x5b915e:c.instructions+=17;goto B5b915e;
case 0x5b9162:c.instructions+=16;goto B5b9162;
case 0x5b9166:c.instructions+=15;goto B5b9166;
case 0x5b916a:c.instructions+=14;goto B5b916a;
case 0x5b916e:c.instructions+=13;goto B5b916e;
case 0x5b9172:c.instructions+=12;goto B5b9172;
case 0x5b9177:c.instructions+=11;goto B5b9177;
case 0x5b917b:c.instructions+=10;goto B5b917b;
case 0x5b917c:c.instructions+=9;goto B5b917c;
case 0x5b9180:c.instructions+=8;goto B5b9180;
case 0x5b9184:c.instructions+=7;goto B5b9184;
case 0x5b9189:c.instructions+=6;goto B5b9189;
case 0x5b918b:c.instructions+=5;goto B5b918b;
case 0x5b9193:c.instructions+=4;goto B5b9193;
case 0x5b919b:c.instructions+=3;goto B5b919b;
case 0x5b919d:c.instructions+=2;goto B5b919d;
case 0x5b919e:c.instructions+=1;goto B5b919e;
case 0x5b91a1:goto L5b91a1;
case 0x5b91a6:c.instructions+=6;goto B5b91a6;
case 0x5b91a8:c.instructions+=5;goto B5b91a8;
case 0x5b91aa:c.instructions+=4;goto B5b91aa;
case 0x5b91ab:c.instructions+=3;goto B5b91ab;
case 0x5b91b0:c.instructions+=2;goto B5b91b0;
case 0x5b91b1:c.instructions+=1;goto B5b91b1;
case 0x5b91b4:goto L5b91b4;
case 0x5b91b9:c.instructions+=3;goto B5b91b9;
case 0x5b91bb:c.instructions+=2;goto B5b91bb;
case 0x5b91bc:c.instructions+=1;goto B5b91bc;
case 0x5b91bf:goto L5b91bf;
case 0x5b91c2:c.instructions+=1;goto B5b91c2;
case 0x5b91c3:goto L5b91c3;
case 0x5b91c9:c.instructions+=32;goto B5b91c9;
case 0x5b91ce:c.instructions+=31;goto B5b91ce;
case 0x5b91d4:c.instructions+=30;goto B5b91d4;
case 0x5b91d7:c.instructions+=29;goto B5b91d7;
case 0x5b91dd:c.instructions+=28;goto B5b91dd;
case 0x5b91e3:c.instructions+=27;goto B5b91e3;
case 0x5b91e9:c.instructions+=26;goto B5b91e9;
case 0x5b91ed:c.instructions+=25;goto B5b91ed;
case 0x5b91f3:c.instructions+=24;goto B5b91f3;
case 0x5b91f9:c.instructions+=23;goto B5b91f9;
case 0x5b91ff:c.instructions+=22;goto B5b91ff;
case 0x5b9203:c.instructions+=21;goto B5b9203;
case 0x5b9209:c.instructions+=20;goto B5b9209;
case 0x5b920f:c.instructions+=19;goto B5b920f;
case 0x5b9215:c.instructions+=18;goto B5b9215;
case 0x5b9219:c.instructions+=17;goto B5b9219;
case 0x5b921f:c.instructions+=16;goto B5b921f;
case 0x5b9225:c.instructions+=15;goto B5b9225;
case 0x5b922b:c.instructions+=14;goto B5b922b;
case 0x5b922f:c.instructions+=13;goto B5b922f;
case 0x5b9235:c.instructions+=12;goto B5b9235;
case 0x5b923b:c.instructions+=11;goto B5b923b;
case 0x5b9241:c.instructions+=10;goto B5b9241;
case 0x5b9245:c.instructions+=9;goto B5b9245;
case 0x5b924b:c.instructions+=8;goto B5b924b;
case 0x5b9251:c.instructions+=7;goto B5b9251;
case 0x5b9257:c.instructions+=6;goto B5b9257;
case 0x5b925b:c.instructions+=5;goto B5b925b;
case 0x5b9261:c.instructions+=4;goto B5b9261;
case 0x5b9267:c.instructions+=3;goto B5b9267;
case 0x5b926d:c.instructions+=2;goto B5b926d;
case 0x5b9271:c.instructions+=1;goto B5b9271;
case 0x5b9277:goto L5b9277;
case 0x5b927a:c.instructions+=1;goto B5b927a;
case 0x5b9280:goto L5b9280;
case 0x5b9285:c.instructions+=8;goto B5b9285;
case 0x5b9286:c.instructions+=7;goto B5b9286;
case 0x5b9289:c.instructions+=6;goto B5b9289;
case 0x5b928c:c.instructions+=5;goto B5b928c;
case 0x5b928e:c.instructions+=4;goto B5b928e;
case 0x5b9291:c.instructions+=3;goto B5b9291;
case 0x5b9292:c.instructions+=2;goto B5b9292;
case 0x5b9298:c.instructions+=1;goto B5b9298;
case 0x5b929d:goto L5b929d;
case 0x5b929f:goto L5b929f;
case 0x5b92a1:c.instructions+=1;goto B5b92a1;
case 0x5b92a4:goto L5b92a4;
case 0x5b92a6:goto L5b92a6;
case 0x5b92ab:c.instructions+=10;goto B5b92ab;
case 0x5b92b1:c.instructions+=9;goto B5b92b1;
case 0x5b92b6:c.instructions+=8;goto B5b92b6;
case 0x5b92bd:c.instructions+=7;goto B5b92bd;
case 0x5b92c2:c.instructions+=6;goto B5b92c2;
case 0x5b92c8:c.instructions+=5;goto B5b92c8;
case 0x5b92cb:c.instructions+=4;goto B5b92cb;
case 0x5b92ce:c.instructions+=3;goto B5b92ce;
case 0x5b92d0:c.instructions+=2;goto B5b92d0;
case 0x5b92d3:c.instructions+=1;goto B5b92d3;
case 0x5b92d8:goto L5b92d8;
case 0x5b92da:goto L5b92da;
case 0x5b92dc:c.instructions+=1;goto B5b92dc;
case 0x5b92df:goto L5b92df;
case 0x5b92e1:goto L5b92e1;
case 0x5b92e6:c.instructions+=10;goto B5b92e6;
case 0x5b92ec:c.instructions+=9;goto B5b92ec;
case 0x5b92f1:c.instructions+=8;goto B5b92f1;
case 0x5b92f8:c.instructions+=7;goto B5b92f8;
case 0x5b92fd:c.instructions+=6;goto B5b92fd;
case 0x5b9303:c.instructions+=5;goto B5b9303;
case 0x5b9306:c.instructions+=4;goto B5b9306;
case 0x5b9309:c.instructions+=3;goto B5b9309;
case 0x5b930b:c.instructions+=2;goto B5b930b;
case 0x5b930e:c.instructions+=1;goto B5b930e;
case 0x5b9313:goto L5b9313;
case 0x5b9315:goto L5b9315;
case 0x5b9317:c.instructions+=1;goto B5b9317;
case 0x5b931a:goto L5b931a;
case 0x5b931c:goto L5b931c;
case 0x5b9321:c.instructions+=10;goto B5b9321;
case 0x5b9327:c.instructions+=9;goto B5b9327;
case 0x5b932e:c.instructions+=8;goto B5b932e;
case 0x5b9334:c.instructions+=7;goto B5b9334;
case 0x5b9339:c.instructions+=6;goto B5b9339;
case 0x5b933e:c.instructions+=5;goto B5b933e;
case 0x5b9341:c.instructions+=4;goto B5b9341;
case 0x5b9344:c.instructions+=3;goto B5b9344;
case 0x5b9346:c.instructions+=2;goto B5b9346;
case 0x5b9349:c.instructions+=1;goto B5b9349;
case 0x5b934e:goto L5b934e;
case 0x5b9350:goto L5b9350;
case 0x5b9352:c.instructions+=1;goto B5b9352;
case 0x5b9355:goto L5b9355;
case 0x5b9357:goto L5b9357;
case 0x5b935c:c.instructions+=6;goto B5b935c;
case 0x5b9363:c.instructions+=5;goto B5b9363;
case 0x5b9369:c.instructions+=4;goto B5b9369;
case 0x5b936e:c.instructions+=3;goto B5b936e;
case 0x5b9373:c.instructions+=2;goto B5b9373;
case 0x5b9375:c.instructions+=1;goto B5b9375;
case 0x5b9380:goto L5b9380;
case 0x5b9386:c.instructions+=28;goto B5b9386;
case 0x5b938c:c.instructions+=27;goto B5b938c;
case 0x5b9392:c.instructions+=26;goto B5b9392;
case 0x5b9398:c.instructions+=25;goto B5b9398;
case 0x5b939e:c.instructions+=24;goto B5b939e;
case 0x5b93a0:c.instructions+=23;goto B5b93a0;
case 0x5b93a6:c.instructions+=22;goto B5b93a6;
case 0x5b93a8:c.instructions+=21;goto B5b93a8;
case 0x5b93ab:c.instructions+=20;goto B5b93ab;
case 0x5b93ae:c.instructions+=19;goto B5b93ae;
case 0x5b93b1:c.instructions+=18;goto B5b93b1;
case 0x5b93b4:c.instructions+=17;goto B5b93b4;
case 0x5b93b7:c.instructions+=16;goto B5b93b7;
case 0x5b93b9:c.instructions+=15;goto B5b93b9;
case 0x5b93bc:c.instructions+=14;goto B5b93bc;
case 0x5b93c2:c.instructions+=13;goto B5b93c2;
case 0x5b93c8:c.instructions+=12;goto B5b93c8;
case 0x5b93ce:c.instructions+=11;goto B5b93ce;
case 0x5b93d4:c.instructions+=10;goto B5b93d4;
case 0x5b93da:c.instructions+=9;goto B5b93da;
case 0x5b93e0:c.instructions+=8;goto B5b93e0;
case 0x5b93e6:c.instructions+=7;goto B5b93e6;
case 0x5b93ec:c.instructions+=6;goto B5b93ec;
case 0x5b93f2:c.instructions+=5;goto B5b93f2;
case 0x5b93f3:c.instructions+=4;goto B5b93f3;
case 0x5b93f9:c.instructions+=3;goto B5b93f9;
case 0x5b93fa:c.instructions+=2;goto B5b93fa;
case 0x5b9400:c.instructions+=1;goto B5b9400;
case 0x5b9405:goto L5b9405;
case 0x5b9408:c.instructions+=4;goto B5b9408;
case 0x5b940b:c.instructions+=3;goto B5b940b;
case 0x5b9411:c.instructions+=2;goto B5b9411;
case 0x5b9417:c.instructions+=1;goto B5b9417;
case 0x5b941d:goto L5b941d;
case 0x5b941e:c.instructions+=2;goto B5b941e;
case 0x5b941f:c.instructions+=1;goto B5b941f;
case 0x5b9420:goto L5b9420;
case 0x5b9423:c.instructions+=8;goto B5b9423;
case 0x5b9424:c.instructions+=7;goto B5b9424;
case 0x5b9425:c.instructions+=6;goto B5b9425;
case 0x5b9426:c.instructions+=5;goto B5b9426;
case 0x5b942a:c.instructions+=4;goto B5b942a;
case 0x5b942b:c.instructions+=3;goto B5b942b;
case 0x5b9433:c.instructions+=2;goto B5b9433;
case 0x5b9438:c.instructions+=1;goto B5b9438;
case 0x5b9440:goto L5b9440;
case 0x5b9447:c.instructions+=1;goto B5b9447;
case 0x5b9449:goto L5b9449;
case 0x5b944b:c.instructions+=4;goto B5b944b;
case 0x5b944d:c.instructions+=3;goto B5b944d;
case 0x5b944f:c.instructions+=2;goto B5b944f;
case 0x5b9451:c.instructions+=1;goto B5b9451;
case 0x5b9453:goto L5b9453;
case 0x5b9457:c.instructions+=3;goto B5b9457;
case 0x5b9458:c.instructions+=2;goto B5b9458;
case 0x5b945e:c.instructions+=1;goto B5b945e;
case 0x5b9463:goto L5b9463;
case 0x5b9465:c.instructions+=3;goto B5b9465;
case 0x5b9468:c.instructions+=2;goto B5b9468;
case 0x5b946b:c.instructions+=1;goto B5b946b;
case 0x5b946e:goto L5b946e;
case 0x5b9472:c.instructions+=2;goto B5b9472;
case 0x5b9478:c.instructions+=1;goto B5b9478;
case 0x5b947a:goto L5b947a;
case 0x5b947c:c.instructions+=36;goto B5b947c;
case 0x5b947f:c.instructions+=35;goto B5b947f;
case 0x5b9482:c.instructions+=34;goto B5b9482;
case 0x5b9485:c.instructions+=33;goto B5b9485;
case 0x5b9488:c.instructions+=32;goto B5b9488;
case 0x5b948b:c.instructions+=31;goto B5b948b;
case 0x5b948d:c.instructions+=30;goto B5b948d;
case 0x5b948f:c.instructions+=29;goto B5b948f;
case 0x5b9491:c.instructions+=28;goto B5b9491;
case 0x5b9493:c.instructions+=27;goto B5b9493;
case 0x5b9496:c.instructions+=26;goto B5b9496;
case 0x5b9499:c.instructions+=25;goto B5b9499;
case 0x5b949c:c.instructions+=24;goto B5b949c;
case 0x5b949f:c.instructions+=23;goto B5b949f;
case 0x5b94a2:c.instructions+=22;goto B5b94a2;
case 0x5b94a5:c.instructions+=21;goto B5b94a5;
case 0x5b94a8:c.instructions+=20;goto B5b94a8;
case 0x5b94ab:c.instructions+=19;goto B5b94ab;
case 0x5b94ad:c.instructions+=18;goto B5b94ad;
case 0x5b94af:c.instructions+=17;goto B5b94af;
case 0x5b94b1:c.instructions+=16;goto B5b94b1;
case 0x5b94b4:c.instructions+=15;goto B5b94b4;
case 0x5b94b7:c.instructions+=14;goto B5b94b7;
case 0x5b94ba:c.instructions+=13;goto B5b94ba;
case 0x5b94bd:c.instructions+=12;goto B5b94bd;
case 0x5b94c0:c.instructions+=11;goto B5b94c0;
case 0x5b94c3:c.instructions+=10;goto B5b94c3;
case 0x5b94c6:c.instructions+=9;goto B5b94c6;
case 0x5b94c9:c.instructions+=8;goto B5b94c9;
case 0x5b94cb:c.instructions+=7;goto B5b94cb;
case 0x5b94ce:c.instructions+=6;goto B5b94ce;
case 0x5b94d1:c.instructions+=5;goto B5b94d1;
case 0x5b94d3:c.instructions+=4;goto B5b94d3;
case 0x5b94d4:c.instructions+=3;goto B5b94d4;
case 0x5b94da:c.instructions+=2;goto B5b94da;
case 0x5b94df:c.instructions+=1;goto B5b94df;
case 0x5b94e0:goto L5b94e0;
case 0x5b94e2:c.instructions+=5;goto B5b94e2;
case 0x5b94e4:c.instructions+=4;goto B5b94e4;
case 0x5b94e7:c.instructions+=3;goto B5b94e7;
case 0x5b94ea:c.instructions+=2;goto B5b94ea;
case 0x5b94eb:c.instructions+=1;goto B5b94eb;
case 0x5b94ed:goto L5b94ed;
case 0x5b94ef:goto L5b94ef;
case 0x5b94f1:c.instructions+=27;goto B5b94f1;
case 0x5b94f3:c.instructions+=26;goto B5b94f3;
case 0x5b94f5:c.instructions+=25;goto B5b94f5;
case 0x5b94f8:c.instructions+=24;goto B5b94f8;
case 0x5b94fb:c.instructions+=23;goto B5b94fb;
case 0x5b94fe:c.instructions+=22;goto B5b94fe;
case 0x5b9500:c.instructions+=21;goto B5b9500;
case 0x5b9503:c.instructions+=20;goto B5b9503;
case 0x5b9505:c.instructions+=19;goto B5b9505;
case 0x5b9507:c.instructions+=18;goto B5b9507;
case 0x5b950a:c.instructions+=17;goto B5b950a;
case 0x5b950d:c.instructions+=16;goto B5b950d;
case 0x5b9510:c.instructions+=15;goto B5b9510;
case 0x5b9513:c.instructions+=14;goto B5b9513;
case 0x5b9515:c.instructions+=13;goto B5b9515;
case 0x5b9517:c.instructions+=12;goto B5b9517;
case 0x5b9519:c.instructions+=11;goto B5b9519;
case 0x5b951c:c.instructions+=10;goto B5b951c;
case 0x5b951f:c.instructions+=9;goto B5b951f;
case 0x5b9522:c.instructions+=8;goto B5b9522;
case 0x5b9525:c.instructions+=7;goto B5b9525;
case 0x5b9527:c.instructions+=6;goto B5b9527;
case 0x5b952a:c.instructions+=5;goto B5b952a;
case 0x5b952c:c.instructions+=4;goto B5b952c;
case 0x5b952d:c.instructions+=3;goto B5b952d;
case 0x5b952f:c.instructions+=2;goto B5b952f;
case 0x5b9531:c.instructions+=1;goto B5b9531;
case 0x5b9536:goto L5b9536;
case 0x5b9538:goto L5b9538;
case 0x5b953e:goto L5b953e;
case 0x5b9542:c.instructions+=5;goto B5b9542;
case 0x5b9543:c.instructions+=4;goto B5b9543;
case 0x5b9549:c.instructions+=3;goto B5b9549;
case 0x5b954f:c.instructions+=2;goto B5b954f;
case 0x5b9553:c.instructions+=1;goto B5b9553;
case 0x5b9559:goto L5b9559;
case 0x5b955a:c.instructions+=6;goto B5b955a;
case 0x5b955c:c.instructions+=5;goto B5b955c;
case 0x5b955d:c.instructions+=4;goto B5b955d;
case 0x5b955e:c.instructions+=3;goto B5b955e;
case 0x5b955f:c.instructions+=2;goto B5b955f;
case 0x5b9562:c.instructions+=1;goto B5b9562;
case 0x5b9570:goto L5b9570;
case 0x5b9573:c.instructions+=6;goto B5b9573;
case 0x5b9574:c.instructions+=5;goto B5b9574;
case 0x5b9578:c.instructions+=4;goto B5b9578;
case 0x5b9579:c.instructions+=3;goto B5b9579;
case 0x5b957a:c.instructions+=2;goto B5b957a;
case 0x5b957b:c.instructions+=1;goto B5b957b;
case 0x5b9583:goto L5b9583;
case 0x5b9585:c.instructions+=11;goto B5b9585;
case 0x5b9587:c.instructions+=10;goto B5b9587;
case 0x5b958a:c.instructions+=9;goto B5b958a;
case 0x5b958e:c.instructions+=8;goto B5b958e;
case 0x5b9591:c.instructions+=7;goto B5b9591;
case 0x5b9595:c.instructions+=6;goto B5b9595;
case 0x5b9598:c.instructions+=5;goto B5b9598;
case 0x5b959c:c.instructions+=4;goto B5b959c;
case 0x5b95a0:c.instructions+=3;goto B5b95a0;
case 0x5b95a3:c.instructions+=2;goto B5b95a3;
case 0x5b95a8:c.instructions+=1;goto B5b95a8;
case 0x5b95b0:goto L5b95b0;
case 0x5b95b7:c.instructions+=1;goto B5b95b7;
case 0x5b95b9:goto L5b95b9;
case 0x5b95bd:c.instructions+=3;goto B5b95bd;
case 0x5b95be:c.instructions+=2;goto B5b95be;
case 0x5b95c0:c.instructions+=1;goto B5b95c0;
case 0x5b95c5:goto L5b95c5;
case 0x5b95ca:c.instructions+=3;goto B5b95ca;
case 0x5b95ce:c.instructions+=2;goto B5b95ce;
case 0x5b95d0:c.instructions+=1;goto B5b95d0;
case 0x5b95d2:goto L5b95d2;
case 0x5b95d4:goto L5b95d4;
case 0x5b95d6:goto L5b95d6;
case 0x5b95dc:c.instructions+=2;goto B5b95dc;
case 0x5b95e2:c.instructions+=1;goto B5b95e2;
case 0x5b95e4:goto L5b95e4;
case 0x5b95ea:c.instructions+=1;goto B5b95ea;
case 0x5b95ec:goto L5b95ec;
case 0x5b95ee:c.instructions+=30;goto B5b95ee;
case 0x5b95f0:c.instructions+=29;goto B5b95f0;
case 0x5b95f6:c.instructions+=28;goto B5b95f6;
case 0x5b95f8:c.instructions+=27;goto B5b95f8;
case 0x5b95fb:c.instructions+=26;goto B5b95fb;
case 0x5b95fe:c.instructions+=25;goto B5b95fe;
case 0x5b9601:c.instructions+=24;goto B5b9601;
case 0x5b9604:c.instructions+=23;goto B5b9604;
case 0x5b9607:c.instructions+=22;goto B5b9607;
case 0x5b960a:c.instructions+=21;goto B5b960a;
case 0x5b960d:c.instructions+=20;goto B5b960d;
case 0x5b960f:c.instructions+=19;goto B5b960f;
case 0x5b9611:c.instructions+=18;goto B5b9611;
case 0x5b9617:c.instructions+=17;goto B5b9617;
case 0x5b9619:c.instructions+=16;goto B5b9619;
case 0x5b961c:c.instructions+=15;goto B5b961c;
case 0x5b961f:c.instructions+=14;goto B5b961f;
case 0x5b9622:c.instructions+=13;goto B5b9622;
case 0x5b9625:c.instructions+=12;goto B5b9625;
case 0x5b9628:c.instructions+=11;goto B5b9628;
case 0x5b962b:c.instructions+=10;goto B5b962b;
case 0x5b962e:c.instructions+=9;goto B5b962e;
case 0x5b9630:c.instructions+=8;goto B5b9630;
case 0x5b9633:c.instructions+=7;goto B5b9633;
case 0x5b9639:c.instructions+=6;goto B5b9639;
case 0x5b963b:c.instructions+=5;goto B5b963b;
case 0x5b9641:c.instructions+=4;goto B5b9641;
case 0x5b9642:c.instructions+=3;goto B5b9642;
case 0x5b9645:c.instructions+=2;goto B5b9645;
case 0x5b964a:c.instructions+=1;goto B5b964a;
case 0x5b9650:goto L5b9650;
case 0x5b9652:c.instructions+=5;goto B5b9652;
case 0x5b9655:c.instructions+=4;goto B5b9655;
case 0x5b9658:c.instructions+=3;goto B5b9658;
case 0x5b965b:c.instructions+=2;goto B5b965b;
case 0x5b965c:c.instructions+=1;goto B5b965c;
case 0x5b965e:goto L5b965e;
case 0x5b9662:c.instructions+=1;goto B5b9662;
case 0x5b9668:goto L5b9668;
case 0x5b9669:c.instructions+=6;goto B5b9669;
case 0x5b966a:c.instructions+=5;goto B5b966a;
case 0x5b966b:c.instructions+=4;goto B5b966b;
case 0x5b966d:c.instructions+=3;goto B5b966d;
case 0x5b966e:c.instructions+=2;goto B5b966e;
case 0x5b9671:c.instructions+=1;goto B5b9671;
case 0x5b9680:goto L5b9680;
case 0x5b9685:c.instructions+=1;goto B5b9685;
case 0x5b9690:goto L5b9690;
case 0x5b9694:c.instructions+=2;goto B5b9694;
case 0x5b9696:c.instructions+=1;goto B5b9696;
case 0x5b96a0:goto L5b96a0;
case 0x5b96a2:c.instructions+=10;goto B5b96a2;
case 0x5b96a5:c.instructions+=9;goto B5b96a5;
case 0x5b96a7:c.instructions+=8;goto B5b96a7;
case 0x5b96aa:c.instructions+=7;goto B5b96aa;
case 0x5b96ac:c.instructions+=6;goto B5b96ac;
case 0x5b96ae:c.instructions+=5;goto B5b96ae;
case 0x5b96b2:c.instructions+=4;goto B5b96b2;
case 0x5b96b3:c.instructions+=3;goto B5b96b3;
case 0x5b96b5:c.instructions+=2;goto B5b96b5;
case 0x5b96b6:c.instructions+=1;goto B5b96b6;
case 0x5b96b9:goto L5b96b9;
case 0x5b96bd:c.instructions+=2;goto B5b96bd;
case 0x5b96c0:c.instructions+=1;goto B5b96c0;
case 0x5b96d0:goto L5b96d0;
case 0x5b96d2:c.instructions+=5;goto B5b96d2;
case 0x5b96d5:c.instructions+=4;goto B5b96d5;
case 0x5b96d7:c.instructions+=3;goto B5b96d7;
case 0x5b96d9:c.instructions+=2;goto B5b96d9;
case 0x5b96da:c.instructions+=1;goto B5b96da;
case 0x5b96dd:goto L5b96dd;
case 0x5b96e0:goto L5b96e0;
case 0x5b96e3:c.instructions+=1;goto B5b96e3;
case 0x5b96f0:goto L5b96f0;
case 0x5b96f5:c.instructions+=4;goto B5b96f5;
case 0x5b96f6:c.instructions+=3;goto B5b96f6;
case 0x5b96f8:c.instructions+=2;goto B5b96f8;
case 0x5b96f9:c.instructions+=1;goto B5b96f9;
case 0x5b96fe:goto L5b96fe;
case 0x5b9701:c.instructions+=4;goto B5b9701;
case 0x5b9704:c.instructions+=3;goto B5b9704;
case 0x5b9706:c.instructions+=2;goto B5b9706;
case 0x5b9707:c.instructions+=1;goto B5b9707;
case 0x5b9710:goto L5b9710;
case 0x5b9714:c.instructions+=4;goto B5b9714;
case 0x5b971a:c.instructions+=3;goto B5b971a;
case 0x5b971b:c.instructions+=2;goto B5b971b;
case 0x5b971c:c.instructions+=1;goto B5b971c;
case 0x5b9721:goto L5b9721;
case 0x5b9724:c.instructions+=1;goto B5b9724;
case 0x5b9730:goto L5b9730;
case 0x5b9735:c.instructions+=2;goto B5b9735;
case 0x5b9737:c.instructions+=1;goto B5b9737;
case 0x5b9739:goto L5b9739;
case 0x5b973b:c.instructions+=3;goto B5b973b;
case 0x5b973f:c.instructions+=2;goto B5b973f;
case 0x5b9741:c.instructions+=1;goto B5b9741;
case 0x5b9744:goto L5b9744;
case 0x5b9750:goto L5b9750;
case 0x5b9753:c.instructions+=40;goto B5b9753;
case 0x5b9754:c.instructions+=39;goto B5b9754;
case 0x5b9756:c.instructions+=38;goto B5b9756;
case 0x5b9758:c.instructions+=37;goto B5b9758;
case 0x5b975d:c.instructions+=36;goto B5b975d;
case 0x5b9761:c.instructions+=35;goto B5b9761;
case 0x5b9765:c.instructions+=34;goto B5b9765;
case 0x5b976a:c.instructions+=33;goto B5b976a;
case 0x5b976e:c.instructions+=32;goto B5b976e;
case 0x5b976f:c.instructions+=31;goto B5b976f;
case 0x5b9774:c.instructions+=30;goto B5b9774;
case 0x5b9779:c.instructions+=29;goto B5b9779;
case 0x5b977d:c.instructions+=28;goto B5b977d;
case 0x5b9781:c.instructions+=27;goto B5b9781;
case 0x5b9785:c.instructions+=26;goto B5b9785;
case 0x5b978a:c.instructions+=25;goto B5b978a;
case 0x5b9791:c.instructions+=24;goto B5b9791;
case 0x5b9795:c.instructions+=23;goto B5b9795;
case 0x5b979a:c.instructions+=22;goto B5b979a;
case 0x5b979e:c.instructions+=21;goto B5b979e;
case 0x5b97a3:c.instructions+=20;goto B5b97a3;
case 0x5b97aa:c.instructions+=19;goto B5b97aa;
case 0x5b97af:c.instructions+=18;goto B5b97af;
case 0x5b97b3:c.instructions+=17;goto B5b97b3;
case 0x5b97b8:c.instructions+=16;goto B5b97b8;
case 0x5b97bc:c.instructions+=15;goto B5b97bc;
case 0x5b97c1:c.instructions+=14;goto B5b97c1;
case 0x5b97c8:c.instructions+=13;goto B5b97c8;
case 0x5b97cd:c.instructions+=12;goto B5b97cd;
case 0x5b97d1:c.instructions+=11;goto B5b97d1;
case 0x5b97d6:c.instructions+=10;goto B5b97d6;
case 0x5b97da:c.instructions+=9;goto B5b97da;
case 0x5b97e1:c.instructions+=8;goto B5b97e1;
case 0x5b97e6:c.instructions+=7;goto B5b97e6;
case 0x5b97eb:c.instructions+=6;goto B5b97eb;
case 0x5b97ef:c.instructions+=5;goto B5b97ef;
case 0x5b97f3:c.instructions+=4;goto B5b97f3;
case 0x5b97f7:c.instructions+=3;goto B5b97f7;
case 0x5b97f9:c.instructions+=2;goto B5b97f9;
case 0x5b97fa:c.instructions+=1;goto B5b97fa;
case 0x5b9800:goto L5b9800;
case 0x5b9805:c.instructions+=30;goto B5b9805;
case 0x5b980a:c.instructions+=29;goto B5b980a;
case 0x5b980e:c.instructions+=28;goto B5b980e;
case 0x5b980f:c.instructions+=27;goto B5b980f;
case 0x5b9814:c.instructions+=26;goto B5b9814;
case 0x5b9819:c.instructions+=25;goto B5b9819;
case 0x5b981e:c.instructions+=24;goto B5b981e;
case 0x5b9822:c.instructions+=23;goto B5b9822;
case 0x5b9827:c.instructions+=22;goto B5b9827;
case 0x5b982b:c.instructions+=21;goto B5b982b;
case 0x5b9830:c.instructions+=20;goto B5b9830;
case 0x5b9837:c.instructions+=19;goto B5b9837;
case 0x5b983c:c.instructions+=18;goto B5b983c;
case 0x5b9840:c.instructions+=17;goto B5b9840;
case 0x5b9845:c.instructions+=16;goto B5b9845;
case 0x5b9849:c.instructions+=15;goto B5b9849;
case 0x5b984e:c.instructions+=14;goto B5b984e;
case 0x5b9855:c.instructions+=13;goto B5b9855;
case 0x5b985a:c.instructions+=12;goto B5b985a;
case 0x5b985e:c.instructions+=11;goto B5b985e;
case 0x5b9863:c.instructions+=10;goto B5b9863;
case 0x5b9867:c.instructions+=9;goto B5b9867;
case 0x5b986e:c.instructions+=8;goto B5b986e;
case 0x5b9873:c.instructions+=7;goto B5b9873;
case 0x5b9878:c.instructions+=6;goto B5b9878;
case 0x5b987c:c.instructions+=5;goto B5b987c;
case 0x5b9880:c.instructions+=4;goto B5b9880;
case 0x5b9884:c.instructions+=3;goto B5b9884;
case 0x5b9886:c.instructions+=2;goto B5b9886;
case 0x5b9887:c.instructions+=1;goto B5b9887;
case 0x5b988d:goto L5b988d;
case 0x5b988e:c.instructions+=2;goto B5b988e;
case 0x5b9891:c.instructions+=1;goto B5b9891;
case 0x5b98a0:goto L5b98a0;
case 0x5b98a5:c.instructions+=1;goto B5b98a5;
case 0x5b98b0:goto L5b98b0;
case 0x5b98b2:c.instructions+=3;goto B5b98b2;
case 0x5b98b4:c.instructions+=2;goto B5b98b4;
case 0x5b98b9:c.instructions+=1;goto B5b98b9;
case 0x5b98be:goto L5b98be;
case 0x5b98c1:c.instructions+=2;goto B5b98c1;
case 0x5b98c2:c.instructions+=1;goto B5b98c2;
case 0x5b98c7:goto L5b98c7;
case 0x5b98ca:c.instructions+=5;goto B5b98ca;
case 0x5b98cc:c.instructions+=4;goto B5b98cc;
case 0x5b98ce:c.instructions+=3;goto B5b98ce;
case 0x5b98d3:c.instructions+=2;goto B5b98d3;
case 0x5b98d8:c.instructions+=1;goto B5b98d8;
case 0x5b98dd:goto L5b98dd;
case 0x5b98e0:c.instructions+=2;goto B5b98e0;
case 0x5b98e1:c.instructions+=1;goto B5b98e1;
case 0x5b98e6:goto L5b98e6;
case 0x5b98e9:c.instructions+=5;goto B5b98e9;
case 0x5b98eb:c.instructions+=4;goto B5b98eb;
case 0x5b98ed:c.instructions+=3;goto B5b98ed;
case 0x5b98f2:c.instructions+=2;goto B5b98f2;
case 0x5b98f7:c.instructions+=1;goto B5b98f7;
case 0x5b98fc:goto L5b98fc;
case 0x5b98ff:c.instructions+=2;goto B5b98ff;
case 0x5b9900:c.instructions+=1;goto B5b9900;
case 0x5b9905:goto L5b9905;
case 0x5b9908:c.instructions+=2;goto B5b9908;
case 0x5b990d:c.instructions+=1;goto B5b990d;
case 0x5b9910:goto L5b9910;
case 0x5b9911:c.instructions+=10;goto B5b9911;
case 0x5b9913:c.instructions+=9;goto B5b9913;
case 0x5b9916:c.instructions+=8;goto B5b9916;
case 0x5b9919:c.instructions+=7;goto B5b9919;
case 0x5b991e:c.instructions+=6;goto B5b991e;
case 0x5b9920:c.instructions+=5;goto B5b9920;
case 0x5b9921:c.instructions+=4;goto B5b9921;
case 0x5b9922:c.instructions+=3;goto B5b9922;
case 0x5b9923:c.instructions+=2;goto B5b9923;
case 0x5b9924:c.instructions+=1;goto B5b9924;
case 0x5b992a:goto L5b992a;
case 0x5b992c:c.instructions+=3;goto B5b992c;
case 0x5b992e:c.instructions+=2;goto B5b992e;
case 0x5b9933:c.instructions+=1;goto B5b9933;
case 0x5b9938:goto L5b9938;
case 0x5b993b:c.instructions+=2;goto B5b993b;
case 0x5b993c:c.instructions+=1;goto B5b993c;
case 0x5b9941:goto L5b9941;
case 0x5b9944:c.instructions+=5;goto B5b9944;
case 0x5b9946:c.instructions+=4;goto B5b9946;
case 0x5b9948:c.instructions+=3;goto B5b9948;
case 0x5b994d:c.instructions+=2;goto B5b994d;
case 0x5b9951:c.instructions+=1;goto B5b9951;
case 0x5b9956:goto L5b9956;
case 0x5b9959:c.instructions+=2;goto B5b9959;
case 0x5b995a:c.instructions+=1;goto B5b995a;
case 0x5b995f:goto L5b995f;
case 0x5b9962:c.instructions+=5;goto B5b9962;
case 0x5b9964:c.instructions+=4;goto B5b9964;
case 0x5b9966:c.instructions+=3;goto B5b9966;
case 0x5b996b:c.instructions+=2;goto B5b996b;
case 0x5b996f:c.instructions+=1;goto B5b996f;
case 0x5b9974:goto L5b9974;
case 0x5b9977:c.instructions+=2;goto B5b9977;
case 0x5b9978:c.instructions+=1;goto B5b9978;
case 0x5b997d:goto L5b997d;
case 0x5b9980:c.instructions+=5;goto B5b9980;
case 0x5b9982:c.instructions+=4;goto B5b9982;
case 0x5b9984:c.instructions+=3;goto B5b9984;
case 0x5b9989:c.instructions+=2;goto B5b9989;
case 0x5b998d:c.instructions+=1;goto B5b998d;
case 0x5b9992:goto L5b9992;
case 0x5b9995:c.instructions+=2;goto B5b9995;
case 0x5b9996:c.instructions+=1;goto B5b9996;
case 0x5b999b:goto L5b999b;
case 0x5b999e:c.instructions+=5;goto B5b999e;
case 0x5b99a0:c.instructions+=4;goto B5b99a0;
case 0x5b99a2:c.instructions+=3;goto B5b99a2;
case 0x5b99a7:c.instructions+=2;goto B5b99a7;
case 0x5b99ab:c.instructions+=1;goto B5b99ab;
case 0x5b99b0:goto L5b99b0;
case 0x5b99b3:c.instructions+=2;goto B5b99b3;
case 0x5b99b4:c.instructions+=1;goto B5b99b4;
case 0x5b99b9:goto L5b99b9;
case 0x5b99bc:c.instructions+=5;goto B5b99bc;
case 0x5b99be:c.instructions+=4;goto B5b99be;
case 0x5b99c0:c.instructions+=3;goto B5b99c0;
case 0x5b99c5:c.instructions+=2;goto B5b99c5;
case 0x5b99c9:c.instructions+=1;goto B5b99c9;
case 0x5b99ce:goto L5b99ce;
case 0x5b99d1:c.instructions+=2;goto B5b99d1;
case 0x5b99d2:c.instructions+=1;goto B5b99d2;
case 0x5b99d7:goto L5b99d7;
case 0x5b99da:c.instructions+=2;goto B5b99da;
case 0x5b99de:c.instructions+=1;goto B5b99de;
case 0x5b99e0:goto L5b99e0;
case 0x5b99e4:c.instructions+=10;goto B5b99e4;
case 0x5b99e7:c.instructions+=9;goto B5b99e7;
case 0x5b99ea:c.instructions+=8;goto B5b99ea;
case 0x5b99ec:c.instructions+=7;goto B5b99ec;
case 0x5b99ee:c.instructions+=6;goto B5b99ee;
case 0x5b99f0:c.instructions+=5;goto B5b99f0;
case 0x5b99f4:c.instructions+=4;goto B5b99f4;
case 0x5b99f5:c.instructions+=3;goto B5b99f5;
case 0x5b99f7:c.instructions+=2;goto B5b99f7;
case 0x5b99f8:c.instructions+=1;goto B5b99f8;
case 0x5b99fb:goto L5b99fb;
case 0x5b9a00:c.instructions+=9;goto B5b9a00;
case 0x5b9a02:c.instructions+=8;goto B5b9a02;
case 0x5b9a04:c.instructions+=7;goto B5b9a04;
case 0x5b9a06:c.instructions+=6;goto B5b9a06;
case 0x5b9a0a:c.instructions+=5;goto B5b9a0a;
case 0x5b9a0b:c.instructions+=4;goto B5b9a0b;
case 0x5b9a0d:c.instructions+=3;goto B5b9a0d;
case 0x5b9a0e:c.instructions+=2;goto B5b9a0e;
case 0x5b9a0f:c.instructions+=1;goto B5b9a0f;
case 0x5b9a12:goto L5b9a12;
case 0x5b9a15:c.instructions+=4;goto B5b9a15;
case 0x5b9a19:c.instructions+=3;goto B5b9a19;
case 0x5b9a1d:c.instructions+=2;goto B5b9a1d;
case 0x5b9a1f:c.instructions+=1;goto B5b9a1f;
case 0x5b9a22:goto L5b9a22;
case 0x5b9a24:goto L5b9a24;
case 0x5b9a26:c.instructions+=1;goto B5b9a26;
case 0x5b9a29:goto L5b9a29;
case 0x5b9a2b:goto L5b9a2b;
case 0x5b9a2e:c.instructions+=5;goto B5b9a2e;
case 0x5b9a31:c.instructions+=4;goto B5b9a31;
case 0x5b9a33:c.instructions+=3;goto B5b9a33;
case 0x5b9a35:c.instructions+=2;goto B5b9a35;
case 0x5b9a36:c.instructions+=1;goto B5b9a36;
case 0x5b9a39:goto L5b9a39;
case 0x5b9a3e:c.instructions+=5;goto B5b9a3e;
case 0x5b9a40:c.instructions+=4;goto B5b9a40;
case 0x5b9a42:c.instructions+=3;goto B5b9a42;
case 0x5b9a43:c.instructions+=2;goto B5b9a43;
case 0x5b9a44:c.instructions+=1;goto B5b9a44;
case 0x5b9a47:goto L5b9a47;
case 0x5b9a48:c.instructions+=2;goto B5b9a48;
case 0x5b9a4b:c.instructions+=1;goto B5b9a4b;
case 0x5b9a4d:goto L5b9a4d;
case 0x5b9a4e:c.instructions+=6;goto B5b9a4e;
case 0x5b9a4f:c.instructions+=5;goto B5b9a4f;
case 0x5b9a50:c.instructions+=4;goto B5b9a50;
case 0x5b9a51:c.instructions+=3;goto B5b9a51;
case 0x5b9a53:c.instructions+=2;goto B5b9a53;
case 0x5b9a54:c.instructions+=1;goto B5b9a54;
case 0x5b9a60:goto L5b9a60;
case 0x5b9a61:c.instructions+=3;goto B5b9a61;
case 0x5b9a63:c.instructions+=2;goto B5b9a63;
case 0x5b9a68:c.instructions+=1;goto B5b9a68;
case 0x5b9a6d:goto L5b9a6d;
case 0x5b9a6f:goto L5b9a6f;
case 0x5b9a74:c.instructions+=3;goto B5b9a74;
case 0x5b9a76:c.instructions+=2;goto B5b9a76;
case 0x5b9a78:c.instructions+=1;goto B5b9a78;
case 0x5b9a7a:goto L5b9a7a;
case 0x5b9a7f:c.instructions+=3;goto B5b9a7f;
case 0x5b9a84:c.instructions+=2;goto B5b9a84;
case 0x5b9a85:c.instructions+=1;goto B5b9a85;
case 0x5b9a8b:goto L5b9a8b;
case 0x5b9a91:c.instructions+=3;goto B5b9a91;
case 0x5b9a96:c.instructions+=2;goto B5b9a96;
case 0x5b9a97:c.instructions+=1;goto B5b9a97;
case 0x5b9a9d:goto L5b9a9d;
case 0x5b9aa3:c.instructions+=7;goto B5b9aa3;
case 0x5b9aa7:c.instructions+=6;goto B5b9aa7;
case 0x5b9aab:c.instructions+=5;goto B5b9aab;
case 0x5b9ab1:c.instructions+=4;goto B5b9ab1;
case 0x5b9ab8:c.instructions+=3;goto B5b9ab8;
case 0x5b9abd:c.instructions+=2;goto B5b9abd;
case 0x5b9ac3:c.instructions+=1;goto B5b9ac3;
case 0x5b9ac5:goto L5b9ac5;
case 0x5b9acb:c.instructions+=2;goto B5b9acb;
case 0x5b9ad5:c.instructions+=1;goto B5b9ad5;
case 0x5b9ad7:goto L5b9ad7;
case 0x5b9ae1:goto L5b9ae1;
case 0x5b9ae7:c.instructions+=22;goto B5b9ae7;
case 0x5b9aed:c.instructions+=21;goto B5b9aed;
case 0x5b9af3:c.instructions+=20;goto B5b9af3;
case 0x5b9af5:c.instructions+=19;goto B5b9af5;
case 0x5b9af7:c.instructions+=18;goto B5b9af7;
case 0x5b9afa:c.instructions+=17;goto B5b9afa;
case 0x5b9afd:c.instructions+=16;goto B5b9afd;
case 0x5b9b03:c.instructions+=15;goto B5b9b03;
case 0x5b9b09:c.instructions+=14;goto B5b9b09;
case 0x5b9b0b:c.instructions+=13;goto B5b9b0b;
case 0x5b9b0d:c.instructions+=12;goto B5b9b0d;
case 0x5b9b13:c.instructions+=11;goto B5b9b13;
case 0x5b9b19:c.instructions+=10;goto B5b9b19;
case 0x5b9b1f:c.instructions+=9;goto B5b9b1f;
case 0x5b9b25:c.instructions+=8;goto B5b9b25;
case 0x5b9b2b:c.instructions+=7;goto B5b9b2b;
case 0x5b9b31:c.instructions+=6;goto B5b9b31;
case 0x5b9b33:c.instructions+=5;goto B5b9b33;
case 0x5b9b3d:c.instructions+=4;goto B5b9b3d;
case 0x5b9b43:c.instructions+=3;goto B5b9b43;
case 0x5b9b49:c.instructions+=2;goto B5b9b49;
case 0x5b9b4e:c.instructions+=1;goto B5b9b4e;
case 0x5b9b50:goto L5b9b50;
case 0x5b9b5a:c.instructions+=3;goto B5b9b5a;
case 0x5b9b60:c.instructions+=2;goto B5b9b60;
case 0x5b9b61:c.instructions+=1;goto B5b9b61;
case 0x5b9b62:goto L5b9b62;
case 0x5b9b68:c.instructions+=3;goto B5b9b68;
case 0x5b9b6e:c.instructions+=2;goto B5b9b6e;
case 0x5b9b6f:c.instructions+=1;goto B5b9b6f;
case 0x5b9b70:goto L5b9b70;
case 0x5b9b76:c.instructions+=12;goto B5b9b76;
case 0x5b9b7b:c.instructions+=11;goto B5b9b7b;
case 0x5b9b7d:c.instructions+=10;goto B5b9b7d;
case 0x5b9b7e:c.instructions+=9;goto B5b9b7e;
case 0x5b9b83:c.instructions+=8;goto B5b9b83;
case 0x5b9b88:c.instructions+=7;goto B5b9b88;
case 0x5b9b8a:c.instructions+=6;goto B5b9b8a;
case 0x5b9b8b:c.instructions+=5;goto B5b9b8b;
case 0x5b9b91:c.instructions+=4;goto B5b9b91;
case 0x5b9b93:c.instructions+=3;goto B5b9b93;
case 0x5b9b94:c.instructions+=2;goto B5b9b94;
case 0x5b9b95:c.instructions+=1;goto B5b9b95;
case 0x5b9b98:goto L5b9b98;
case 0x5b9b9a:c.instructions+=2;goto B5b9b9a;
case 0x5b9b9c:c.instructions+=1;goto B5b9b9c;
case 0x5b9b9e:goto L5b9b9e;
case 0x5b9ba4:c.instructions+=11;goto B5b9ba4;
case 0x5b9ba9:c.instructions+=10;goto B5b9ba9;
case 0x5b9bab:c.instructions+=9;goto B5b9bab;
case 0x5b9bb0:c.instructions+=8;goto B5b9bb0;
case 0x5b9bb5:c.instructions+=7;goto B5b9bb5;
case 0x5b9bb7:c.instructions+=6;goto B5b9bb7;
case 0x5b9bb8:c.instructions+=5;goto B5b9bb8;
case 0x5b9bbe:c.instructions+=4;goto B5b9bbe;
case 0x5b9bc0:c.instructions+=3;goto B5b9bc0;
case 0x5b9bc1:c.instructions+=2;goto B5b9bc1;
case 0x5b9bc2:c.instructions+=1;goto B5b9bc2;
case 0x5b9bc5:goto L5b9bc5;
case 0x5b9bc7:goto L5b9bc7;
case 0x5b9bcd:c.instructions+=1;goto B5b9bcd;
case 0x5b9bcf:goto L5b9bcf;
case 0x5b9bd1:c.instructions+=1;goto B5b9bd1;
case 0x5b9bd3:goto L5b9bd3;
case 0x5b9bd8:c.instructions+=3;goto B5b9bd8;
case 0x5b9bda:c.instructions+=2;goto B5b9bda;
case 0x5b9bdb:c.instructions+=1;goto B5b9bdb;
case 0x5b9be1:goto L5b9be1;
case 0x5b9be6:c.instructions+=9;goto B5b9be6;
case 0x5b9be8:c.instructions+=8;goto B5b9be8;
case 0x5b9be9:c.instructions+=7;goto B5b9be9;
case 0x5b9bee:c.instructions+=6;goto B5b9bee;
case 0x5b9bef:c.instructions+=5;goto B5b9bef;
case 0x5b9bf1:c.instructions+=4;goto B5b9bf1;
case 0x5b9bf2:c.instructions+=3;goto B5b9bf2;
case 0x5b9bf3:c.instructions+=2;goto B5b9bf3;
case 0x5b9bf4:c.instructions+=1;goto B5b9bf4;
case 0x5b9bfa:goto L5b9bfa;
case 0x5b9bff:c.instructions+=3;goto B5b9bff;
case 0x5b9c01:c.instructions+=2;goto B5b9c01;
case 0x5b9c02:c.instructions+=1;goto B5b9c02;
case 0x5b9c08:goto L5b9c08;
case 0x5b9c0d:c.instructions+=7;goto B5b9c0d;
case 0x5b9c0f:c.instructions+=6;goto B5b9c0f;
case 0x5b9c10:c.instructions+=5;goto B5b9c10;
case 0x5b9c11:c.instructions+=4;goto B5b9c11;
case 0x5b9c12:c.instructions+=3;goto B5b9c12;
case 0x5b9c13:c.instructions+=2;goto B5b9c13;
case 0x5b9c14:c.instructions+=1;goto B5b9c14;
case 0x5b9c17:goto L5b9c17;
case 0x5b9c19:c.instructions+=2;goto B5b9c19;
case 0x5b9c1a:c.instructions+=1;goto B5b9c1a;
case 0x5b9c20:goto L5b9c20;
case 0x5b9c21:c.instructions+=5;goto B5b9c21;
case 0x5b9c25:c.instructions+=4;goto B5b9c25;
case 0x5b9c2f:c.instructions+=3;goto B5b9c2f;
case 0x5b9c34:c.instructions+=2;goto B5b9c34;
case 0x5b9c36:c.instructions+=1;goto B5b9c36;
case 0x5b9c3c:goto L5b9c3c;
case 0x5b9c43:c.instructions+=1;goto B5b9c43;
case 0x5b9c49:goto L5b9c49;
case 0x5b9c4a:c.instructions+=2;goto B5b9c4a;
case 0x5b9c4f:c.instructions+=1;goto B5b9c4f;
case 0x5b9c50:goto L5b9c50;
case 0x5b9c51:c.instructions+=1;goto B5b9c51;
case 0x5b9c56:goto L5b9c56;
case 0x5b9c59:c.instructions+=3;goto B5b9c59;
case 0x5b9c5c:c.instructions+=2;goto B5b9c5c;
case 0x5b9c5e:c.instructions+=1;goto B5b9c5e;
case 0x5b9c60:goto L5b9c60;
case 0x5b9c63:c.instructions+=3;goto B5b9c63;
case 0x5b9c66:c.instructions+=2;goto B5b9c66;
case 0x5b9c68:c.instructions+=1;goto B5b9c68;
case 0x5b9c6a:goto L5b9c6a;
case 0x5b9c70:c.instructions+=7;goto B5b9c70;
case 0x5b9c73:c.instructions+=6;goto B5b9c73;
case 0x5b9c76:c.instructions+=5;goto B5b9c76;
case 0x5b9c78:c.instructions+=4;goto B5b9c78;
case 0x5b9c79:c.instructions+=3;goto B5b9c79;
case 0x5b9c7c:c.instructions+=2;goto B5b9c7c;
case 0x5b9c82:c.instructions+=1;goto B5b9c82;
case 0x5b9c84:goto L5b9c84;
case 0x5b9c8a:c.instructions+=2;goto B5b9c8a;
case 0x5b9c8c:c.instructions+=1;goto B5b9c8c;
case 0x5b9c8e:goto L5b9c8e;
case 0x5b9c93:c.instructions+=1;goto B5b9c93;
case 0x5b9c95:goto L5b9c95;
case 0x5b9c9a:goto L5b9c9a;
case 0x5b9c9b:c.instructions+=2;goto B5b9c9b;
case 0x5b9c9c:c.instructions+=1;goto B5b9c9c;
case 0x5b9ca1:goto L5b9ca1;
case 0x5b9ca4:goto L5b9ca4;
case 0x5b9ca5:c.instructions+=2;goto B5b9ca5;
case 0x5b9ca8:c.instructions+=1;goto B5b9ca8;
case 0x5b9caa:goto L5b9caa;
case 0x5b9caf:c.instructions+=2;goto B5b9caf;
case 0x5b9cb1:c.instructions+=1;goto B5b9cb1;
case 0x5b9cb3:goto L5b9cb3;
case 0x5b9cb8:goto L5b9cb8;
case 0x5b9cb9:c.instructions+=1;goto B5b9cb9;
case 0x5b9cbe:goto L5b9cbe;
case 0x5b9cc1:c.instructions+=3;goto B5b9cc1;
case 0x5b9cc4:c.instructions+=2;goto B5b9cc4;
case 0x5b9cc6:c.instructions+=1;goto B5b9cc6;
case 0x5b9cc8:goto L5b9cc8;
case 0x5b9ccb:c.instructions+=3;goto B5b9ccb;
case 0x5b9cce:c.instructions+=2;goto B5b9cce;
case 0x5b9cd0:c.instructions+=1;goto B5b9cd0;
case 0x5b9cd2:goto L5b9cd2;
case 0x5b9cd8:c.instructions+=9;goto B5b9cd8;
case 0x5b9cdb:c.instructions+=8;goto B5b9cdb;
case 0x5b9cde:c.instructions+=7;goto B5b9cde;
case 0x5b9ce0:c.instructions+=6;goto B5b9ce0;
case 0x5b9ce5:c.instructions+=5;goto B5b9ce5;
case 0x5b9ce6:c.instructions+=4;goto B5b9ce6;
case 0x5b9ce7:c.instructions+=3;goto B5b9ce7;
case 0x5b9ce8:c.instructions+=2;goto B5b9ce8;
case 0x5b9cee:c.instructions+=1;goto B5b9cee;
case 0x5b9cf3:goto L5b9cf3;
case 0x5b9cf6:goto L5b9cf6;
case 0x5b9cf7:c.instructions+=2;goto B5b9cf7;
case 0x5b9cfa:c.instructions+=1;goto B5b9cfa;
case 0x5b9cfc:goto L5b9cfc;
case 0x5b9d01:c.instructions+=3;goto B5b9d01;
case 0x5b9d03:c.instructions+=2;goto B5b9d03;
case 0x5b9d04:c.instructions+=1;goto B5b9d04;
case 0x5b9d06:goto L5b9d06;
case 0x5b9d08:c.instructions+=1;goto B5b9d08;
case 0x5b9d0d:goto L5b9d0d;
case 0x5b9d10:c.instructions+=3;goto B5b9d10;
case 0x5b9d13:c.instructions+=2;goto B5b9d13;
case 0x5b9d15:c.instructions+=1;goto B5b9d15;
case 0x5b9d17:goto L5b9d17;
case 0x5b9d1a:c.instructions+=3;goto B5b9d1a;
case 0x5b9d1d:c.instructions+=2;goto B5b9d1d;
case 0x5b9d1f:c.instructions+=1;goto B5b9d1f;
case 0x5b9d21:goto L5b9d21;
case 0x5b9d27:c.instructions+=9;goto B5b9d27;
case 0x5b9d2a:c.instructions+=8;goto B5b9d2a;
case 0x5b9d2d:c.instructions+=7;goto B5b9d2d;
case 0x5b9d2f:c.instructions+=6;goto B5b9d2f;
case 0x5b9d34:c.instructions+=5;goto B5b9d34;
case 0x5b9d35:c.instructions+=4;goto B5b9d35;
case 0x5b9d36:c.instructions+=3;goto B5b9d36;
case 0x5b9d37:c.instructions+=2;goto B5b9d37;
case 0x5b9d3d:c.instructions+=1;goto B5b9d3d;
case 0x5b9d42:goto L5b9d42;
case 0x5b9d45:goto L5b9d45;
case 0x5b9d4a:c.instructions+=2;goto B5b9d4a;
case 0x5b9d4c:c.instructions+=1;goto B5b9d4c;
case 0x5b9d4e:goto L5b9d4e;
case 0x5b9d50:c.instructions+=1;goto B5b9d50;
case 0x5b9d55:goto L5b9d55;
case 0x5b9d58:c.instructions+=3;goto B5b9d58;
case 0x5b9d5b:c.instructions+=2;goto B5b9d5b;
case 0x5b9d5d:c.instructions+=1;goto B5b9d5d;
case 0x5b9d5f:goto L5b9d5f;
case 0x5b9d65:c.instructions+=9;goto B5b9d65;
case 0x5b9d68:c.instructions+=8;goto B5b9d68;
case 0x5b9d6b:c.instructions+=7;goto B5b9d6b;
case 0x5b9d6d:c.instructions+=6;goto B5b9d6d;
case 0x5b9d6f:c.instructions+=5;goto B5b9d6f;
case 0x5b9d70:c.instructions+=4;goto B5b9d70;
case 0x5b9d71:c.instructions+=3;goto B5b9d71;
case 0x5b9d72:c.instructions+=2;goto B5b9d72;
case 0x5b9d78:c.instructions+=1;goto B5b9d78;
case 0x5b9d7d:goto L5b9d7d;
case 0x5b9d80:goto L5b9d80;
case 0x5b9d82:c.instructions+=2;goto B5b9d82;
case 0x5b9d83:c.instructions+=1;goto B5b9d83;
case 0x5b9d90:goto L5b9d90;
case 0x5b9d91:c.instructions+=1;goto B5b9d91;
case 0x5b9d93:goto L5b9d93;
case 0x5b9d98:c.instructions+=5;goto B5b9d98;
case 0x5b9d9a:c.instructions+=4;goto B5b9d9a;
case 0x5b9d9c:c.instructions+=3;goto B5b9d9c;
case 0x5b9d9d:c.instructions+=2;goto B5b9d9d;
case 0x5b9d9e:c.instructions+=1;goto B5b9d9e;
case 0x5b9da4:goto L5b9da4;
case 0x5b9da5:c.instructions+=2;goto B5b9da5;
case 0x5b9da8:c.instructions+=1;goto B5b9da8;
case 0x5b9daa:goto L5b9daa;
case 0x5b9dab:c.instructions+=1;goto B5b9dab;
case 0x5b9db0:goto L5b9db0;
case 0x5b9db3:c.instructions+=30;goto B5b9db3;
case 0x5b9db5:c.instructions+=29;goto B5b9db5;
case 0x5b9db9:c.instructions+=28;goto B5b9db9;
case 0x5b9dbd:c.instructions+=27;goto B5b9dbd;
case 0x5b9dc1:c.instructions+=26;goto B5b9dc1;
case 0x5b9dc5:c.instructions+=25;goto B5b9dc5;
case 0x5b9dc9:c.instructions+=24;goto B5b9dc9;
case 0x5b9dcd:c.instructions+=23;goto B5b9dcd;
case 0x5b9dd1:c.instructions+=22;goto B5b9dd1;
case 0x5b9dd5:c.instructions+=21;goto B5b9dd5;
case 0x5b9dd9:c.instructions+=20;goto B5b9dd9;
case 0x5b9ddd:c.instructions+=19;goto B5b9ddd;
case 0x5b9de1:c.instructions+=18;goto B5b9de1;
case 0x5b9de5:c.instructions+=17;goto B5b9de5;
case 0x5b9de9:c.instructions+=16;goto B5b9de9;
case 0x5b9dec:c.instructions+=15;goto B5b9dec;
case 0x5b9df0:c.instructions+=14;goto B5b9df0;
case 0x5b9df4:c.instructions+=13;goto B5b9df4;
case 0x5b9df8:c.instructions+=12;goto B5b9df8;
case 0x5b9dfb:c.instructions+=11;goto B5b9dfb;
case 0x5b9dff:c.instructions+=10;goto B5b9dff;
case 0x5b9e03:c.instructions+=9;goto B5b9e03;
case 0x5b9e04:c.instructions+=8;goto B5b9e04;
case 0x5b9e06:c.instructions+=7;goto B5b9e06;
case 0x5b9e0a:c.instructions+=6;goto B5b9e0a;
case 0x5b9e0c:c.instructions+=5;goto B5b9e0c;
case 0x5b9e0d:c.instructions+=4;goto B5b9e0d;
case 0x5b9e12:c.instructions+=3;goto B5b9e12;
case 0x5b9e17:c.instructions+=2;goto B5b9e17;
case 0x5b9e1c:c.instructions+=1;goto B5b9e1c;
case 0x5b9e21:goto L5b9e21;
case 0x5b9e24:c.instructions+=1;goto B5b9e24;
case 0x5b9e30:goto L5b9e30;
case 0x5b9e33:c.instructions+=5;goto B5b9e33;
case 0x5b9e39:c.instructions+=4;goto B5b9e39;
case 0x5b9e3a:c.instructions+=3;goto B5b9e3a;
case 0x5b9e3c:c.instructions+=2;goto B5b9e3c;
case 0x5b9e41:c.instructions+=1;goto B5b9e41;
case 0x5b9e45:goto L5b9e45;
case 0x5b9e47:goto L5b9e47;
case 0x5b9e4d:c.instructions+=14;goto B5b9e4d;
case 0x5b9e52:c.instructions+=13;goto B5b9e52;
case 0x5b9e56:c.instructions+=12;goto B5b9e56;
case 0x5b9e5a:c.instructions+=11;goto B5b9e5a;
case 0x5b9e5b:c.instructions+=10;goto B5b9e5b;
case 0x5b9e5d:c.instructions+=9;goto B5b9e5d;
case 0x5b9e61:c.instructions+=8;goto B5b9e61;
case 0x5b9e65:c.instructions+=7;goto B5b9e65;
case 0x5b9e6a:c.instructions+=6;goto B5b9e6a;
case 0x5b9e6e:c.instructions+=5;goto B5b9e6e;
case 0x5b9e70:c.instructions+=4;goto B5b9e70;
case 0x5b9e71:c.instructions+=3;goto B5b9e71;
case 0x5b9e75:c.instructions+=2;goto B5b9e75;
case 0x5b9e7a:c.instructions+=1;goto B5b9e7a;
case 0x5b9e7f:goto L5b9e7f;
case 0x5b9e82:c.instructions+=3;goto B5b9e82;
case 0x5b9e83:c.instructions+=2;goto B5b9e83;
case 0x5b9e86:c.instructions+=1;goto B5b9e86;
case 0x5b9e90:goto L5b9e90;
case 0x5b9e96:c.instructions+=8;goto B5b9e96;
case 0x5b9e97:c.instructions+=7;goto B5b9e97;
case 0x5b9e98:c.instructions+=6;goto B5b9e98;
case 0x5b9e9f:c.instructions+=5;goto B5b9e9f;
case 0x5b9ea2:c.instructions+=4;goto B5b9ea2;
case 0x5b9ea6:c.instructions+=3;goto B5b9ea6;
case 0x5b9ea9:c.instructions+=2;goto B5b9ea9;
case 0x5b9eaa:c.instructions+=1;goto B5b9eaa;
case 0x5b9eaf:goto L5b9eaf;
case 0x5b9eb1:c.instructions+=4;goto B5b9eb1;
case 0x5b9eb4:c.instructions+=3;goto B5b9eb4;
case 0x5b9eb6:c.instructions+=2;goto B5b9eb6;
case 0x5b9eba:c.instructions+=1;goto B5b9eba;
case 0x5b9ec0:goto L5b9ec0;
case 0x5b9ec3:c.instructions+=6;goto B5b9ec3;
case 0x5b9ec5:c.instructions+=5;goto B5b9ec5;
case 0x5b9ec7:c.instructions+=4;goto B5b9ec7;
case 0x5b9ec8:c.instructions+=3;goto B5b9ec8;
case 0x5b9ec9:c.instructions+=2;goto B5b9ec9;
case 0x5b9ecd:c.instructions+=1;goto B5b9ecd;
case 0x5b9ecf:goto L5b9ecf;
case 0x5b9ed2:goto L5b9ed2;
case 0x5b9ed9:c.instructions+=10;goto B5b9ed9;
case 0x5b9edb:c.instructions+=9;goto B5b9edb;
case 0x5b9ede:c.instructions+=8;goto B5b9ede;
case 0x5b9ee1:c.instructions+=7;goto B5b9ee1;
case 0x5b9ee3:c.instructions+=6;goto B5b9ee3;
case 0x5b9ee6:c.instructions+=5;goto B5b9ee6;
case 0x5b9ee9:c.instructions+=4;goto B5b9ee9;
case 0x5b9eeb:c.instructions+=3;goto B5b9eeb;
case 0x5b9eed:c.instructions+=2;goto B5b9eed;
case 0x5b9eef:c.instructions+=1;goto B5b9eef;
case 0x5b9ef1:goto L5b9ef1;
case 0x5b9ef3:c.instructions+=3;goto B5b9ef3;
case 0x5b9ef6:c.instructions+=2;goto B5b9ef6;
case 0x5b9ef8:c.instructions+=1;goto B5b9ef8;
case 0x5b9f00:goto L5b9f00;
case 0x5b9f03:c.instructions+=11;goto B5b9f03;
case 0x5b9f06:c.instructions+=10;goto B5b9f06;
case 0x5b9f09:c.instructions+=9;goto B5b9f09;
case 0x5b9f0b:c.instructions+=8;goto B5b9f0b;
case 0x5b9f0f:c.instructions+=7;goto B5b9f0f;
case 0x5b9f12:c.instructions+=6;goto B5b9f12;
case 0x5b9f16:c.instructions+=5;goto B5b9f16;
case 0x5b9f19:c.instructions+=4;goto B5b9f19;
case 0x5b9f1a:c.instructions+=3;goto B5b9f1a;
case 0x5b9f1d:c.instructions+=2;goto B5b9f1d;
case 0x5b9f1f:c.instructions+=1;goto B5b9f1f;
case 0x5b9f21:goto L5b9f21;
case 0x5b9f25:goto L5b9f25;
case 0x5b9f28:c.instructions+=5;goto B5b9f28;
case 0x5b9f2c:c.instructions+=4;goto B5b9f2c;
case 0x5b9f2d:c.instructions+=3;goto B5b9f2d;
case 0x5b9f2f:c.instructions+=2;goto B5b9f2f;
case 0x5b9f33:c.instructions+=1;goto B5b9f33;
case 0x5b9f35:goto L5b9f35;
case 0x5b9f3a:c.instructions+=12;goto B5b9f3a;
case 0x5b9f40:c.instructions+=11;goto B5b9f40;
case 0x5b9f46:c.instructions+=10;goto B5b9f46;
case 0x5b9f4a:c.instructions+=9;goto B5b9f4a;
case 0x5b9f50:c.instructions+=8;goto B5b9f50;
case 0x5b9f54:c.instructions+=7;goto B5b9f54;
case 0x5b9f5a:c.instructions+=6;goto B5b9f5a;
case 0x5b9f5f:c.instructions+=5;goto B5b9f5f;
case 0x5b9f63:c.instructions+=4;goto B5b9f63;
case 0x5b9f65:c.instructions+=3;goto B5b9f65;
case 0x5b9f69:c.instructions+=2;goto B5b9f69;
case 0x5b9f6e:c.instructions+=1;goto B5b9f6e;
case 0x5b9f72:goto L5b9f72;
case 0x5b9f74:goto L5b9f74;
case 0x5b9f75:c.instructions+=3;goto B5b9f75;
case 0x5b9f7c:c.instructions+=2;goto B5b9f7c;
case 0x5b9f7e:c.instructions+=1;goto B5b9f7e;
case 0x5b9f80:goto L5b9f80;
case 0x5b9f84:c.instructions+=3;goto B5b9f84;
case 0x5b9f89:c.instructions+=2;goto B5b9f89;
case 0x5b9f8a:c.instructions+=1;goto B5b9f8a;
case 0x5b9f8f:goto L5b9f8f;
case 0x5b9f92:c.instructions+=2;goto B5b9f92;
case 0x5b9f94:c.instructions+=1;goto B5b9f94;
case 0x5b9f96:goto L5b9f96;
case 0x5b9f97:c.instructions+=1;goto B5b9f97;
case 0x5b9f9c:goto L5b9f9c;
case 0x5b9f9f:c.instructions+=1;goto B5b9f9f;
case 0x5b9fa1:goto L5b9fa1;
case 0x5b9fa2:c.instructions+=4;goto B5b9fa2;
case 0x5b9fa6:c.instructions+=3;goto B5b9fa6;
case 0x5b9fab:c.instructions+=2;goto B5b9fab;
case 0x5b9fac:c.instructions+=1;goto B5b9fac;
case 0x5b9fb1:goto L5b9fb1;
case 0x5b9fb5:c.instructions+=4;goto B5b9fb5;
case 0x5b9fba:c.instructions+=3;goto B5b9fba;
case 0x5b9fbb:c.instructions+=2;goto B5b9fbb;
case 0x5b9fbc:c.instructions+=1;goto B5b9fbc;
case 0x5b9fc1:goto L5b9fc1;
case 0x5b9fc4:c.instructions+=2;goto B5b9fc4;
case 0x5b9fc6:c.instructions+=1;goto B5b9fc6;
case 0x5b9fc8:goto L5b9fc8;
case 0x5b9fc9:c.instructions+=1;goto B5b9fc9;
case 0x5b9fce:goto L5b9fce;
case 0x5b9fd1:c.instructions+=1;goto B5b9fd1;
case 0x5b9fd3:goto L5b9fd3;
case 0x5b9fd7:goto L5b9fd7;
case 0x5b9fdc:c.instructions+=2;goto B5b9fdc;
case 0x5b9fdd:c.instructions+=1;goto B5b9fdd;
case 0x5b9fe2:goto L5b9fe2;
case 0x5b9fe4:c.instructions+=3;goto B5b9fe4;
case 0x5b9fe7:c.instructions+=2;goto B5b9fe7;
case 0x5b9fe9:c.instructions+=1;goto B5b9fe9;
case 0x5b9feb:goto L5b9feb;
case 0x5b9fee:c.instructions+=5;goto B5b9fee;
case 0x5b9ff1:c.instructions+=4;goto B5b9ff1;
case 0x5b9ff2:c.instructions+=3;goto B5b9ff2;
case 0x5b9ff3:c.instructions+=2;goto B5b9ff3;
case 0x5b9ff4:c.instructions+=1;goto B5b9ff4;
case 0x5b9ff9:goto L5b9ff9;
case 0x5b9ffc:c.instructions+=1;goto B5b9ffc;
default:missing_instruction(c.pc);}
B5b9000:L5b9000:{c.instructions+=4;NFSU2_TR(0x5b9000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b9001:{NFSU2_TR(0x5b9001);
w4(R+0,u32(0x7a34a4ull));
}
B5b9006:{NFSU2_TR(0x5b9006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b9007:{NFSU2_TR(0x5b9007);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b900a:L5b900a:{c.instructions+=3;NFSU2_TR(0x5b900a);
__builtin_memmove((R+0),gp(0x7fca00),4);
}
B5b900f:{NFSU2_TR(0x5b900f);
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
B5b9011:{NFSU2_TR(0x5b9011);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b9079;}}
}
B5b9013:L5b9013:{c.instructions+=3;NFSU2_TR(0x5b9013);
u8 U[4];
w4(U+0,u32(0x7a349cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9018:{NFSU2_TR(0x5b9018);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b901d:{NFSU2_TR(0x5b901d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9022ull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b9022:L5b9022:{c.instructions+=3;NFSU2_TR(0x5b9022);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b9025:{NFSU2_TR(0x5b9025);
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
B5b9027:{NFSU2_TR(0x5b9027);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b9035;}}
}
B5b9029:L5b9029:{c.instructions+=6;NFSU2_TR(0x5b9029);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b902a:{NFSU2_TR(0x5b902a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b902b:{NFSU2_TR(0x5b902b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b902c:{NFSU2_TR(0x5b902c);
w4(R+0,u32(0x7a3490ull));
}
B5b9031:{NFSU2_TR(0x5b9031);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b9032:{NFSU2_TR(0x5b9032);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9035:L5b9035:{c.instructions+=3;NFSU2_TR(0x5b9035);
u8 U[4];
w4(U+0,u32(0x7a348cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b903a:{NFSU2_TR(0x5b903a);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b903f:{NFSU2_TR(0x5b903f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9044ull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b9044:L5b9044:{c.instructions+=3;NFSU2_TR(0x5b9044);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b9047:{NFSU2_TR(0x5b9047);
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
B5b9049:{NFSU2_TR(0x5b9049);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b9057;}}
}
B5b904b:L5b904b:{c.instructions+=6;NFSU2_TR(0x5b904b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b904c:{NFSU2_TR(0x5b904c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b904d:{NFSU2_TR(0x5b904d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b904e:{NFSU2_TR(0x5b904e);
w4(R+0,u32(0x7a3480ull));
}
B5b9053:{NFSU2_TR(0x5b9053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b9054:{NFSU2_TR(0x5b9054);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9057:L5b9057:{c.instructions+=3;NFSU2_TR(0x5b9057);
u8 U[4];
w4(U+0,u32(0x7a3478ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b905c:{NFSU2_TR(0x5b905c);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9061:{NFSU2_TR(0x5b9061);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9066ull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b9066:L5b9066:{c.instructions+=3;NFSU2_TR(0x5b9066);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b9069:{NFSU2_TR(0x5b9069);
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
B5b906b:{NFSU2_TR(0x5b906b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b9079;}}
}
B5b906d:L5b906d:{c.instructions+=6;NFSU2_TR(0x5b906d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b906e:{NFSU2_TR(0x5b906e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b906f:{NFSU2_TR(0x5b906f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b9070:{NFSU2_TR(0x5b9070);
w4(R+0,u32(0x7a346cull));
}
B5b9075:{NFSU2_TR(0x5b9075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b9076:{NFSU2_TR(0x5b9076);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9079:L5b9079:{c.instructions+=6;NFSU2_TR(0x5b9079);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b907a:{NFSU2_TR(0x5b907a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b907b:{NFSU2_TR(0x5b907b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b907c:{NFSU2_TR(0x5b907c);
w4(R+0,u32(0x876728ull));
}
B5b9081:{NFSU2_TR(0x5b9081);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b9082:{NFSU2_TR(0x5b9082);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9090:L5b9090:{c.instructions+=8;NFSU2_TR(0x5b9090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B5b9093:{NFSU2_TR(0x5b9093);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9094:{NFSU2_TR(0x5b9094);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b9098:{NFSU2_TR(0x5b9098);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9099:{NFSU2_TR(0x5b9099);
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
B5b909b:{NFSU2_TR(0x5b909b);
w4(R+8,u32(0x18ull));
}
B5b90a0:{NFSU2_TR(0x5b90a0);
w4(R+4,u32(0x6ull));
}
B5b90a5:{NFSU2_TR(0x5b90a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5b90a9:L5b90a9:{c.instructions+=1;NFSU2_TR(0x5b90a9);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5b90ab;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b90a9u);}goto L5b90a9;}
}
B5b90ab:L5b90ab:{c.instructions+=21;NFSU2_TR(0x5b90ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b90af:{NFSU2_TR(0x5b90af);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b90b3:{NFSU2_TR(0x5b90b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b90b7:{NFSU2_TR(0x5b90b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b90bb:{NFSU2_TR(0x5b90bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b90bf:{NFSU2_TR(0x5b90bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b90c2:{NFSU2_TR(0x5b90c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b90c3:{NFSU2_TR(0x5b90c3);
w4(R+4,u32(0x10ull));
}
B5b90c8:{NFSU2_TR(0x5b90c8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b90ca:{NFSU2_TR(0x5b90ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b90ce:{NFSU2_TR(0x5b90ce);
w4(R+28,u32(0x2ull));
}
B5b90d3:{NFSU2_TR(0x5b90d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b90d7:{NFSU2_TR(0x5b90d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b90d9:{NFSU2_TR(0x5b90d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b90da:{NFSU2_TR(0x5b90da);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b90de:{NFSU2_TR(0x5b90de);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b90e2:{NFSU2_TR(0x5b90e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b90e6:{NFSU2_TR(0x5b90e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b90ea:{NFSU2_TR(0x5b90ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffff9cull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b90f2:{NFSU2_TR(0x5b90f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x64ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b90fa:{NFSU2_TR(0x5b90fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b90fdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b90fd:L5b90fd:{c.instructions+=6;NFSU2_TR(0x5b90fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b90ff:{NFSU2_TR(0x5b90ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b9103:{NFSU2_TR(0x5b9103);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9104:{NFSU2_TR(0x5b9104);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9105:{NFSU2_TR(0x5b9105);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9106:{NFSU2_TR(0x5b9106);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9109ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b9109:L5b9109:{c.instructions+=5;NFSU2_TR(0x5b9109);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b910a:{NFSU2_TR(0x5b910a);
w4(R+0,u32(0x1ull));
}
B5b910f:{NFSU2_TR(0x5b910f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b9110:{NFSU2_TR(0x5b9110);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b9113:{NFSU2_TR(0x5b9113);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9120:L5b9120:{c.instructions+=5;NFSU2_TR(0x5b9120);
s1(0x870768,u8(0x1ull));
}
B5b9127:{NFSU2_TR(0x5b9127);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b912d:{NFSU2_TR(0x5b912d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5b9130:{NFSU2_TR(0x5b9130);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b9133:{NFSU2_TR(0x5b9133);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b91c3;}}
}
B5b9139:L5b9139:{c.instructions+=3;NFSU2_TR(0x5b9139);
__builtin_memmove((R+0),gp(0x86e5c0),4);
}
B5b913e:{NFSU2_TR(0x5b913e);
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
B5b9140:{NFSU2_TR(0x5b9140);
if(r1(R+518)){{goto L5b9277;}}
}
B5b9146:L5b9146:{c.instructions+=3;NFSU2_TR(0x5b9146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b9148:{NFSU2_TR(0x5b9148);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9149:{NFSU2_TR(0x5b9149);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b914cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b914c:L5b914c:{c.instructions+=5;NFSU2_TR(0x5b914c);
__builtin_memmove((R+0),gp(0x86e5c0),4);
}
B5b9151:{NFSU2_TR(0x5b9151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b9153:{NFSU2_TR(0x5b9153);
u8 U[4];
w4(U+0,u32(0x7bfdb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9158:{NFSU2_TR(0x5b9158);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9159:{NFSU2_TR(0x5b9159);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b915cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b915c:L5b915c:{c.instructions+=18;NFSU2_TR(0x5b915c);
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
B5b915e:{NFSU2_TR(0x5b915e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5b9162:{NFSU2_TR(0x5b9162);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9166:{NFSU2_TR(0x5b9166);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b916a:{NFSU2_TR(0x5b916a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b916e:{NFSU2_TR(0x5b916e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9172:{NFSU2_TR(0x5b9172);
w4(R+0,u32(0x10ull));
}
B5b9177:{NFSU2_TR(0x5b9177);
__builtin_memmove((R+8),(R+16),4);
}
B5b917b:{NFSU2_TR(0x5b917b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b917c:{NFSU2_TR(0x5b917c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9180:{NFSU2_TR(0x5b9180);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9184:{NFSU2_TR(0x5b9184);
__builtin_memmove((R+0),gp(0x86e5c0),4);
}
B5b9189:{NFSU2_TR(0x5b9189);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b918b:{NFSU2_TR(0x5b918b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b9193:{NFSU2_TR(0x5b9193);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b919b:{NFSU2_TR(0x5b919b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b919d:{NFSU2_TR(0x5b919d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b919e:{NFSU2_TR(0x5b919e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b91a1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b91a1:L5b91a1:{c.instructions+=7;NFSU2_TR(0x5b91a1);
__builtin_memmove((R+0),gp(0x86e5c0),4);
}
B5b91a6:{NFSU2_TR(0x5b91a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b91a8:{NFSU2_TR(0x5b91a8);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b91aa:{NFSU2_TR(0x5b91aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b91ab:{NFSU2_TR(0x5b91ab);
u8 U[4];
w4(U+0,u32(0x5b9090ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b91b0:{NFSU2_TR(0x5b91b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b91b1:{NFSU2_TR(0x5b91b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b91b4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b91b4:L5b91b4:{c.instructions+=4;NFSU2_TR(0x5b91b4);
__builtin_memmove((R+0),gp(0x86e5c0),4);
}
B5b91b9:{NFSU2_TR(0x5b91b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b91bb:{NFSU2_TR(0x5b91bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b91bc:{NFSU2_TR(0x5b91bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b91bfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b91bf:L5b91bf:{c.instructions+=2;NFSU2_TR(0x5b91bf);
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
B5b91c2:{NFSU2_TR(0x5b91c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b91c3:L5b91c3:{c.instructions+=33;NFSU2_TR(0x5b91c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b91c9:{NFSU2_TR(0x5b91c9);
__builtin_memmove((R+0),gp(0x870760),4);
}
B5b91ce:{NFSU2_TR(0x5b91ce);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5b91d4:{NFSU2_TR(0x5b91d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5b91d7:{NFSU2_TR(0x5b91d7);
__builtin_memmove(gp(0x86f8b0),(R+8),4);
}
B5b91dd:{NFSU2_TR(0x5b91dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b91e3:{NFSU2_TR(0x5b91e3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5b91e9:{NFSU2_TR(0x5b91e9);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5b91ed:{NFSU2_TR(0x5b91ed);
__builtin_memmove(gp(0x86f8bc),(R+8),4);
}
B5b91f3:{NFSU2_TR(0x5b91f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b91f9:{NFSU2_TR(0x5b91f9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5b91ff:{NFSU2_TR(0x5b91ff);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5b9203:{NFSU2_TR(0x5b9203);
__builtin_memmove(gp(0x86f8b4),(R+8),4);
}
B5b9209:{NFSU2_TR(0x5b9209);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b920f:{NFSU2_TR(0x5b920f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5b9215:{NFSU2_TR(0x5b9215);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5b9219:{NFSU2_TR(0x5b9219);
__builtin_memmove(gp(0x86f8c0),(R+8),4);
}
B5b921f:{NFSU2_TR(0x5b921f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9225:{NFSU2_TR(0x5b9225);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5b922b:{NFSU2_TR(0x5b922b);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5b922f:{NFSU2_TR(0x5b922f);
__builtin_memmove(gp(0x86f8b8),(R+8),4);
}
B5b9235:{NFSU2_TR(0x5b9235);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b923b:{NFSU2_TR(0x5b923b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5b9241:{NFSU2_TR(0x5b9241);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5b9245:{NFSU2_TR(0x5b9245);
__builtin_memmove(gp(0x86f8c4),(R+8),4);
}
B5b924b:{NFSU2_TR(0x5b924b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9251:{NFSU2_TR(0x5b9251);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5b9257:{NFSU2_TR(0x5b9257);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5b925b:{NFSU2_TR(0x5b925b);
__builtin_memmove(gp(0x86f8c8),(R+8),4);
}
B5b9261:{NFSU2_TR(0x5b9261);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b9267:{NFSU2_TR(0x5b9267);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5b926d:{NFSU2_TR(0x5b926d);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5b9271:{NFSU2_TR(0x5b9271);
__builtin_memmove(gp(0x86f8cc),(R+8),4);
}
B5b9277:L5b9277:{c.instructions+=2;NFSU2_TR(0x5b9277);
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
B5b927a:{NFSU2_TR(0x5b927a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9280:L5b9280:{c.instructions+=9;NFSU2_TR(0x5b9280);
__builtin_memmove((R+0),gp(0x87076c),4);
}
B5b9285:{NFSU2_TR(0x5b9285);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9286:{NFSU2_TR(0x5b9286);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5b9289:{NFSU2_TR(0x5b9289);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5b928c:{NFSU2_TR(0x5b928c);
__builtin_memmove((R+0),(R+4),4);
}
B5b928e:{NFSU2_TR(0x5b928e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5b9291:{NFSU2_TR(0x5b9291);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9292:{NFSU2_TR(0x5b9292);
__builtin_memmove((R+28),gp(0x86e89c),4);
}
B5b9298:{NFSU2_TR(0x5b9298);
w4(R+24,u32(0x7fcac0ull));
}
B5b929d:L5b929d:{c.instructions+=1;NFSU2_TR(0x5b929d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5b929f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b929du);}goto L5b929d;}
}
B5b929f:L5b929f:{c.instructions+=2;NFSU2_TR(0x5b929f);
__builtin_memmove((R+4),(R+0),4);
}
B5b92a1:{NFSU2_TR(0x5b92a1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5b92a4:L5b92a4:{c.instructions+=1;NFSU2_TR(0x5b92a4);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5b92a6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b92a4u);}goto L5b92a4;}
}
B5b92a6:L5b92a6:{c.instructions+=11;NFSU2_TR(0x5b92a6);
__builtin_memmove((R+0),gp(0x87076c),4);
}
B5b92ab:{NFSU2_TR(0x5b92ab);
__builtin_memmove((R+28),gp(0x86e8a4),4);
}
B5b92b1:{NFSU2_TR(0x5b92b1);
__builtin_memmove(gp(0x86f354),(R+0),4);
}
B5b92b6:{NFSU2_TR(0x5b92b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5b92bd:{NFSU2_TR(0x5b92bd);
__builtin_memmove((R+0),gp(0x870770),4);
}
B5b92c2:{NFSU2_TR(0x5b92c2);
__builtin_memmove(gp(0x86f350),(R+4),4);
}
B5b92c8:{NFSU2_TR(0x5b92c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5b92cb:{NFSU2_TR(0x5b92cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5b92ce:{NFSU2_TR(0x5b92ce);
__builtin_memmove((R+8),(R+4),4);
}
B5b92d0:{NFSU2_TR(0x5b92d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5b92d3:{NFSU2_TR(0x5b92d3);
w4(R+24,u32(0x7fd330ull));
}
B5b92d8:L5b92d8:{c.instructions+=1;NFSU2_TR(0x5b92d8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5b92da;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b92d8u);}goto L5b92d8;}
}
B5b92da:L5b92da:{c.instructions+=2;NFSU2_TR(0x5b92da);
__builtin_memmove((R+4),(R+8),4);
}
B5b92dc:{NFSU2_TR(0x5b92dc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5b92df:L5b92df:{c.instructions+=1;NFSU2_TR(0x5b92df);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5b92e1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b92dfu);}goto L5b92df;}
}
B5b92e1:L5b92e1:{c.instructions+=11;NFSU2_TR(0x5b92e1);
__builtin_memmove((R+0),gp(0x870770),4);
}
B5b92e6:{NFSU2_TR(0x5b92e6);
__builtin_memmove((R+28),gp(0x86e8a8),4);
}
B5b92ec:{NFSU2_TR(0x5b92ec);
__builtin_memmove(gp(0x86f5e4),(R+0),4);
}
B5b92f1:{NFSU2_TR(0x5b92f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5b92f8:{NFSU2_TR(0x5b92f8);
__builtin_memmove((R+0),gp(0x870774),4);
}
B5b92fd:{NFSU2_TR(0x5b92fd);
__builtin_memmove(gp(0x86f5e0),(R+4),4);
}
B5b9303:{NFSU2_TR(0x5b9303);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5b9306:{NFSU2_TR(0x5b9306);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5b9309:{NFSU2_TR(0x5b9309);
__builtin_memmove((R+8),(R+4),4);
}
B5b930b:{NFSU2_TR(0x5b930b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5b930e:{NFSU2_TR(0x5b930e);
w4(R+24,u32(0x7fd650ull));
}
B5b9313:L5b9313:{c.instructions+=1;NFSU2_TR(0x5b9313);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5b9315;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9313u);}goto L5b9313;}
}
B5b9315:L5b9315:{c.instructions+=2;NFSU2_TR(0x5b9315);
__builtin_memmove((R+4),(R+8),4);
}
B5b9317:{NFSU2_TR(0x5b9317);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5b931a:L5b931a:{c.instructions+=1;NFSU2_TR(0x5b931a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5b931c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b931au);}goto L5b931a;}
}
B5b931c:L5b931c:{c.instructions+=11;NFSU2_TR(0x5b931c);
__builtin_memmove((R+0),gp(0x870774),4);
}
B5b9321:{NFSU2_TR(0x5b9321);
__builtin_memmove((R+28),gp(0x86e8a0),4);
}
B5b9327:{NFSU2_TR(0x5b9327);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5b932e:{NFSU2_TR(0x5b932e);
__builtin_memmove(gp(0x86f728),(R+4),4);
}
B5b9334:{NFSU2_TR(0x5b9334);
__builtin_memmove(gp(0x86f72c),(R+0),4);
}
B5b9339:{NFSU2_TR(0x5b9339);
__builtin_memmove((R+0),gp(0x870778),4);
}
B5b933e:{NFSU2_TR(0x5b933e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5b9341:{NFSU2_TR(0x5b9341);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5b9344:{NFSU2_TR(0x5b9344);
__builtin_memmove((R+8),(R+4),4);
}
B5b9346:{NFSU2_TR(0x5b9346);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5b9349:{NFSU2_TR(0x5b9349);
w4(R+24,u32(0x7fd7e0ull));
}
B5b934e:L5b934e:{c.instructions+=1;NFSU2_TR(0x5b934e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5b9350;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b934eu);}goto L5b934e;}
}
B5b9350:L5b9350:{c.instructions+=2;NFSU2_TR(0x5b9350);
__builtin_memmove((R+4),(R+8),4);
}
B5b9352:{NFSU2_TR(0x5b9352);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5b9355:L5b9355:{c.instructions+=1;NFSU2_TR(0x5b9355);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5b9357;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9355u);}goto L5b9355;}
}
B5b9357:L5b9357:{c.instructions+=7;NFSU2_TR(0x5b9357);
__builtin_memmove((R+0),gp(0x870778),4);
}
B5b935c:{NFSU2_TR(0x5b935c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5b9363:{NFSU2_TR(0x5b9363);
__builtin_memmove(gp(0x86f498),(R+4),4);
}
B5b9369:{NFSU2_TR(0x5b9369);
__builtin_memmove(gp(0x86f49c),(R+0),4);
}
B5b936e:{NFSU2_TR(0x5b936e);
w4(R+28,u32(0x86e89cull));
}
B5b9373:{NFSU2_TR(0x5b9373);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b9375:{NFSU2_TR(0x5b9375);
{goto L5b9380;}
}
B5b9380:L5b9380:{c.instructions+=29;NFSU2_TR(0x5b9380);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86fa04ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9386:{NFSU2_TR(0x5b9386);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86fa00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b938c:{NFSU2_TR(0x5b938c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f34cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9392:{NFSU2_TR(0x5b9392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f348ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9398:{NFSU2_TR(0x5b9398);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86fa14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b939e:{NFSU2_TR(0x5b939e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b93a0:{NFSU2_TR(0x5b93a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f35cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b93a6:{NFSU2_TR(0x5b93a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b93a8:{NFSU2_TR(0x5b93a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b93ab:{NFSU2_TR(0x5b93ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b93ae:{NFSU2_TR(0x5b93ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b93b1:{NFSU2_TR(0x5b93b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b93b4:{NFSU2_TR(0x5b93b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b93b7:{NFSU2_TR(0x5b93b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b93b9:{NFSU2_TR(0x5b93b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b93bc:{NFSU2_TR(0x5b93bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86fa24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b93c2:{NFSU2_TR(0x5b93c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86fa28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b93c8:{NFSU2_TR(0x5b93c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f36cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b93ce:{NFSU2_TR(0x5b93ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86fa2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b93d4:{NFSU2_TR(0x5b93d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f370ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b93da:{NFSU2_TR(0x5b93da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86fa44ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b93e0:{NFSU2_TR(0x5b93e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f374ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b93e6:{NFSU2_TR(0x5b93e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f358ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b93ec:{NFSU2_TR(0x5b93ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86fa30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b93f2:{NFSU2_TR(0x5b93f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b93f3:{NFSU2_TR(0x5b93f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f38cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b93f9:{NFSU2_TR(0x5b93f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b93fa:{NFSU2_TR(0x5b93fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f378ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9400:{NFSU2_TR(0x5b9400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9405ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5b9405:L5b9405:{c.instructions+=5;NFSU2_TR(0x5b9405);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5b9408:{NFSU2_TR(0x5b9408);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b940b:{NFSU2_TR(0x5b940b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x148ull))));
}
B5b9411:{NFSU2_TR(0x5b9411);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x86e8acull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x86e8acull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x86e8acull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b9417:{NFSU2_TR(0x5b9417);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9380u);}goto L5b9380;}}
}
B5b941d:L5b941d:{c.instructions+=3;NFSU2_TR(0x5b941d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b941e:{NFSU2_TR(0x5b941e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b941f:{NFSU2_TR(0x5b941f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9420:L5b9420:{c.instructions+=9;NFSU2_TR(0x5b9420);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5b9423:{NFSU2_TR(0x5b9423);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9424:{NFSU2_TR(0x5b9424);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9425:{NFSU2_TR(0x5b9425);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9426:{NFSU2_TR(0x5b9426);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b942a:{NFSU2_TR(0x5b942a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b942b:{NFSU2_TR(0x5b942b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b9433:{NFSU2_TR(0x5b9433);
w4(R+12,u32(0x874f84ull));
}
B5b9438:{NFSU2_TR(0x5b9438);
{goto L5b9440;}
}
B5b9440:L5b9440:{c.instructions+=2;NFSU2_TR(0x5b9440);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffeecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b9447:{NFSU2_TR(0x5b9447);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b9453;}}
}
B5b9449:L5b9449:{c.instructions+=5;NFSU2_TR(0x5b9449);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b944b:{NFSU2_TR(0x5b944b);
__builtin_memmove((R+4),(R+0),4);
}
B5b944d:{NFSU2_TR(0x5b944d);
__builtin_memmove((R+8),(R+0),4);
}
B5b944f:{NFSU2_TR(0x5b944f);
__builtin_memmove((R+28),(R+0),4);
}
B5b9451:{NFSU2_TR(0x5b9451);
{goto L5b946e;}
}
B5b9453:L5b9453:{c.instructions+=4;NFSU2_TR(0x5b9453);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b9457:{NFSU2_TR(0x5b9457);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9458:{NFSU2_TR(0x5b9458);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffcbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b945e:{NFSU2_TR(0x5b945e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9463ull));
TAIL_STATIC(0x5b8110u,5b8);
}
B5b9463:L5b9463:{c.instructions+=4;NFSU2_TR(0x5b9463);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b9465:{NFSU2_TR(0x5b9465);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9468:{NFSU2_TR(0x5b9468);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b946b:{NFSU2_TR(0x5b946b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b946e:L5b946e:{c.instructions+=3;NFSU2_TR(0x5b946e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b9472:{NFSU2_TR(0x5b9472);
u8 U[8];
__builtin_memmove((U+0),gp(0x870764),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b9478:{NFSU2_TR(0x5b9478);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b94ef;}}
}
B5b947a:L5b947a:{c.instructions+=37;NFSU2_TR(0x5b947a);
__builtin_memmove((R+20),(R+24),4);
}
B5b947c:{NFSU2_TR(0x5b947c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5b947f:{NFSU2_TR(0x5b947f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9482:{NFSU2_TR(0x5b9482);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9485:{NFSU2_TR(0x5b9485);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9488:{NFSU2_TR(0x5b9488);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5b948b:{NFSU2_TR(0x5b948b);
__builtin_memmove((R+8),(R+24),4);
}
B5b948d:{NFSU2_TR(0x5b948d);
__builtin_memmove((R+4),(R+12),4);
}
B5b948f:{NFSU2_TR(0x5b948f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b9491:{NFSU2_TR(0x5b9491);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b9493:{NFSU2_TR(0x5b9493);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b9496:{NFSU2_TR(0x5b9496);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9499:{NFSU2_TR(0x5b9499);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b949c:{NFSU2_TR(0x5b949c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b949f:{NFSU2_TR(0x5b949f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b94a2:{NFSU2_TR(0x5b94a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b94a5:{NFSU2_TR(0x5b94a5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5b94a8:{NFSU2_TR(0x5b94a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b94ab:{NFSU2_TR(0x5b94ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b94ad:{NFSU2_TR(0x5b94ad);
__builtin_memmove((R+0),(R+24),4);
}
B5b94af:{NFSU2_TR(0x5b94af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b94b1:{NFSU2_TR(0x5b94b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b94b4:{NFSU2_TR(0x5b94b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b94b7:{NFSU2_TR(0x5b94b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b94ba:{NFSU2_TR(0x5b94ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b94bd:{NFSU2_TR(0x5b94bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b94c0:{NFSU2_TR(0x5b94c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b94c3:{NFSU2_TR(0x5b94c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b94c6:{NFSU2_TR(0x5b94c6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5b94c9:{NFSU2_TR(0x5b94c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5b94cb:{NFSU2_TR(0x5b94cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5b94ce:{NFSU2_TR(0x5b94ce);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5b94d1:{NFSU2_TR(0x5b94d1);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B5b94d3:{NFSU2_TR(0x5b94d3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5b94d4:{NFSU2_TR(0x5b94d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffcd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b94da:{NFSU2_TR(0x5b94da);
w4(R+4,u32(0x20ull));
}
B5b94df:{NFSU2_TR(0x5b94df);
}
B5b94e0:L5b94e0:{c.instructions+=6;NFSU2_TR(0x5b94e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b94e2:{NFSU2_TR(0x5b94e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5b94e4:{NFSU2_TR(0x5b94e4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5b94e7:{NFSU2_TR(0x5b94e7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5b94ea:{NFSU2_TR(0x5b94ea);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5b94eb:{NFSU2_TR(0x5b94eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b94e0u);}goto L5b94e0;}}
}
B5b94ed:L5b94ed:{c.instructions+=1;NFSU2_TR(0x5b94ed);
{goto L5b953e;}
}
B5b94ef:L5b94ef:{c.instructions+=28;NFSU2_TR(0x5b94ef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b94f1:{NFSU2_TR(0x5b94f1);
__builtin_memmove((R+4),(R+24),4);
}
B5b94f3:{NFSU2_TR(0x5b94f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5b94f5:{NFSU2_TR(0x5b94f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b94f8:{NFSU2_TR(0x5b94f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b94fb:{NFSU2_TR(0x5b94fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b94fe:{NFSU2_TR(0x5b94fe);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5b9500:{NFSU2_TR(0x5b9500);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5b9503:{NFSU2_TR(0x5b9503);
__builtin_memmove((R+0),(R+24),4);
}
B5b9505:{NFSU2_TR(0x5b9505);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b9507:{NFSU2_TR(0x5b9507);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b950a:{NFSU2_TR(0x5b950a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b950d:{NFSU2_TR(0x5b950d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9510:{NFSU2_TR(0x5b9510);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5b9513:{NFSU2_TR(0x5b9513);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5b9515:{NFSU2_TR(0x5b9515);
__builtin_memmove((R+8),(R+24),4);
}
B5b9517:{NFSU2_TR(0x5b9517);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b9519:{NFSU2_TR(0x5b9519);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b951c:{NFSU2_TR(0x5b951c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b951f:{NFSU2_TR(0x5b951f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5b9522:{NFSU2_TR(0x5b9522);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9525:{NFSU2_TR(0x5b9525);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5b9527:{NFSU2_TR(0x5b9527);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5b952a:{NFSU2_TR(0x5b952a);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B5b952c:{NFSU2_TR(0x5b952c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5b952d:{NFSU2_TR(0x5b952d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b952f:{NFSU2_TR(0x5b952f);
__builtin_memmove((R+28),(R+24),4);
}
B5b9531:{NFSU2_TR(0x5b9531);
w4(R+4,u32(0x20ull));
}
B5b9536:L5b9536:{c.instructions+=1;NFSU2_TR(0x5b9536);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5b9538;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9536u);}goto L5b9536;}
}
B5b9538:L5b9538:{c.instructions+=1;NFSU2_TR(0x5b9538);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x80ull))));
}
B5b953e:L5b953e:{c.instructions+=6;NFSU2_TR(0x5b953e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9542:{NFSU2_TR(0x5b9542);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5b9543:{NFSU2_TR(0x5b9543);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x370ull))));
}
B5b9549:{NFSU2_TR(0x5b9549);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x876424ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x876424ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b954f:{NFSU2_TR(0x5b954f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9553:{NFSU2_TR(0x5b9553);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9440u);}goto L5b9440;}}
}
B5b9559:L5b9559:{c.instructions+=7;NFSU2_TR(0x5b9559);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b955a:{NFSU2_TR(0x5b955a);
__builtin_memmove((R+0),(R+24),4);
}
B5b955c:{NFSU2_TR(0x5b955c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b955d:{NFSU2_TR(0x5b955d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b955e:{NFSU2_TR(0x5b955e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b955f:{NFSU2_TR(0x5b955f);
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
B5b9562:{NFSU2_TR(0x5b9562);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9570:L5b9570:{c.instructions+=7;NFSU2_TR(0x5b9570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5b9573:{NFSU2_TR(0x5b9573);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9574:{NFSU2_TR(0x5b9574);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b9578:{NFSU2_TR(0x5b9578);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9579:{NFSU2_TR(0x5b9579);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b957a:{NFSU2_TR(0x5b957a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b957b:{NFSU2_TR(0x5b957b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b9583:L5b9583:{c.instructions+=12;NFSU2_TR(0x5b9583);
__builtin_memmove((R+0),(R+12),4);
}
B5b9585:{NFSU2_TR(0x5b9585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b9587:{NFSU2_TR(0x5b9587);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b958a:{NFSU2_TR(0x5b958a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b958e:{NFSU2_TR(0x5b958e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b9591:{NFSU2_TR(0x5b9591);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9595:{NFSU2_TR(0x5b9595);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9598:{NFSU2_TR(0x5b9598);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b959c:{NFSU2_TR(0x5b959c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b95a0:{NFSU2_TR(0x5b95a0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B5b95a3:{NFSU2_TR(0x5b95a3);
w4(R+20,u32(0x874c40ull));
}
B5b95a8:{NFSU2_TR(0x5b95a8);
{goto L5b95b0;}
}
B5b95b0:L5b95b0:{c.instructions+=2;NFSU2_TR(0x5b95b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b95b7:{NFSU2_TR(0x5b95b7);
if(r1(R+518)){{goto L5b95d6;}}
}
B5b95b9:L5b95b9:{c.instructions+=4;NFSU2_TR(0x5b95b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b95bd:{NFSU2_TR(0x5b95bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b95be:{NFSU2_TR(0x5b95be);
__builtin_memmove((R+4),(R+20),4);
}
B5b95c0:{NFSU2_TR(0x5b95c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b95c5ull));
TAIL_STATIC(0x5b8110u,5b8);
}
B5b95c5:L5b95c5:{c.instructions+=4;NFSU2_TR(0x5b95c5);
w4(R+4,u32(0x4ull));
}
B5b95ca:{NFSU2_TR(0x5b95ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5b95ce:{NFSU2_TR(0x5b95ce);
__builtin_memmove((R+24),(R+0),4);
}
B5b95d0:{NFSU2_TR(0x5b95d0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5b95d2:L5b95d2:{c.instructions+=1;NFSU2_TR(0x5b95d2);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5b95d4;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b95d2u);}goto L5b95d2;}}
}
B5b95d4:L5b95d4:{c.instructions+=1;NFSU2_TR(0x5b95d4);
if(r1(R+518)){{goto L5b95ec;}}
}
B5b95d6:L5b95d6:{c.instructions+=3;NFSU2_TR(0x5b95d6);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x370ull))));
}
B5b95dc:{NFSU2_TR(0x5b95dc);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8760e0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8760e0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b95e2:{NFSU2_TR(0x5b95e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b95b0u);}goto L5b95b0;}}
}
B5b95e4:L5b95e4:{c.instructions+=2;NFSU2_TR(0x5b95e4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xa5ull))));
}
B5b95ea:{NFSU2_TR(0x5b95ea);
{goto L5b965e;}
}
B5b95ec:L5b95ec:{c.instructions+=31;NFSU2_TR(0x5b95ec);
__builtin_memmove((R+4),(R+12),4);
}
B5b95ee:{NFSU2_TR(0x5b95ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b95f0:{NFSU2_TR(0x5b95f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x344ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b95f6:{NFSU2_TR(0x5b95f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b95f8:{NFSU2_TR(0x5b95f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b95fb:{NFSU2_TR(0x5b95fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b95fe:{NFSU2_TR(0x5b95fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9601:{NFSU2_TR(0x5b9601);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9604:{NFSU2_TR(0x5b9604);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b9607:{NFSU2_TR(0x5b9607);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b960a:{NFSU2_TR(0x5b960a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B5b960d:{NFSU2_TR(0x5b960d);
__builtin_memmove((R+0),(R+12),4);
}
B5b960f:{NFSU2_TR(0x5b960f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b9611:{NFSU2_TR(0x5b9611);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x354ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b9617:{NFSU2_TR(0x5b9617);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b9619:{NFSU2_TR(0x5b9619);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b961c:{NFSU2_TR(0x5b961c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b961f:{NFSU2_TR(0x5b961f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b9622:{NFSU2_TR(0x5b9622);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9625:{NFSU2_TR(0x5b9625);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b9628:{NFSU2_TR(0x5b9628);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B5b962b:{NFSU2_TR(0x5b962b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b962e:{NFSU2_TR(0x5b962e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b9630:{NFSU2_TR(0x5b9630);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5b9633:{NFSU2_TR(0x5b9633);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x364ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9639:{NFSU2_TR(0x5b9639);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+8),(U+0),1);
}
B5b963b:{NFSU2_TR(0x5b963b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x368ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9641:{NFSU2_TR(0x5b9641);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5b9642:{NFSU2_TR(0x5b9642);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x18ull))));
}
B5b9645:{NFSU2_TR(0x5b9645);
w4(R+0,u32(0x20ull));
}
B5b964a:{NFSU2_TR(0x5b964a);
__builtin_memmove((R+12),(R+12),4);
}
B5b9650:L5b9650:{c.instructions+=6;NFSU2_TR(0x5b9650);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b9652:{NFSU2_TR(0x5b9652);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5b9655:{NFSU2_TR(0x5b9655);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5b9658:{NFSU2_TR(0x5b9658);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B5b965b:{NFSU2_TR(0x5b965b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5b965c:{NFSU2_TR(0x5b965c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9650u);}goto L5b9650;}}
}
B5b965e:L5b965e:{c.instructions+=2;NFSU2_TR(0x5b965e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b9662:{NFSU2_TR(0x5b9662);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9583u);}goto L5b9583;}}
}
B5b9668:L5b9668:{c.instructions+=7;NFSU2_TR(0x5b9668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b9669:{NFSU2_TR(0x5b9669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b966a:{NFSU2_TR(0x5b966a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b966b:{NFSU2_TR(0x5b966b);
__builtin_memmove((R+0),(R+12),4);
}
B5b966d:{NFSU2_TR(0x5b966d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b966e:{NFSU2_TR(0x5b966e);
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
B5b9671:{NFSU2_TR(0x5b9671);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9680:L5b9680:{c.instructions+=2;NFSU2_TR(0x5b9680);
w4(R+0,u32(0x43eull));
}
B5b9685:{NFSU2_TR(0x5b9685);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9690:L5b9690:{c.instructions+=3;NFSU2_TR(0x5b9690);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b9694:{NFSU2_TR(0x5b9694);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5b9696:{NFSU2_TR(0x5b9696);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b96a0:L5b96a0:{c.instructions+=11;NFSU2_TR(0x5b96a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b96a2:{NFSU2_TR(0x5b96a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b96a5:{NFSU2_TR(0x5b96a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b96a7:{NFSU2_TR(0x5b96a7);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b96aa:{NFSU2_TR(0x5b96aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b96ac:{NFSU2_TR(0x5b96ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b96ae:{NFSU2_TR(0x5b96ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b96b2:{NFSU2_TR(0x5b96b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b96b3:{NFSU2_TR(0x5b96b3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b96b5:{NFSU2_TR(0x5b96b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b96b6:{NFSU2_TR(0x5b96b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b96b9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b96b9:L5b96b9:{c.instructions+=3;NFSU2_TR(0x5b96b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b96bd:{NFSU2_TR(0x5b96bd);
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
B5b96c0:{NFSU2_TR(0x5b96c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b96d0:L5b96d0:{c.instructions+=6;NFSU2_TR(0x5b96d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b96d2:{NFSU2_TR(0x5b96d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b96d5:{NFSU2_TR(0x5b96d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b96d7:{NFSU2_TR(0x5b96d7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b96d9:{NFSU2_TR(0x5b96d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b96da:{NFSU2_TR(0x5b96da);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b96ddull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b96dd:L5b96dd:{c.instructions+=1;NFSU2_TR(0x5b96dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b96e0:L5b96e0:{c.instructions+=2;NFSU2_TR(0x5b96e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b96e3:{NFSU2_TR(0x5b96e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b96f0:L5b96f0:{c.instructions+=5;NFSU2_TR(0x5b96f0);
__builtin_memmove((R+0),gp(0x870790),4);
}
B5b96f5:{NFSU2_TR(0x5b96f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b96f6:{NFSU2_TR(0x5b96f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5b96f8:{NFSU2_TR(0x5b96f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b96f9:{NFSU2_TR(0x5b96f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b96feull));
TAIL_STATIC(0x440e50u,440);
}
B5b96fe:L5b96fe:{c.instructions+=5;NFSU2_TR(0x5b96fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b9701:{NFSU2_TR(0x5b9701);
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
B5b9704:{NFSU2_TR(0x5b9704);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b9706:{NFSU2_TR(0x5b9706);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b9707:{NFSU2_TR(0x5b9707);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9710:L5b9710:{c.instructions+=5;NFSU2_TR(0x5b9710);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b9714:{NFSU2_TR(0x5b9714);
__builtin_memmove((R+4),gp(0x870790),4);
}
B5b971a:{NFSU2_TR(0x5b971a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b971b:{NFSU2_TR(0x5b971b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b971c:{NFSU2_TR(0x5b971c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9721ull));
TAIL_STATIC(0x43f920u,43f);
}
B5b9721:L5b9721:{c.instructions+=2;NFSU2_TR(0x5b9721);
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
B5b9724:{NFSU2_TR(0x5b9724);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9730:L5b9730:{c.instructions+=3;NFSU2_TR(0x5b9730);
__builtin_memmove((R+0),gp(0x870ce8),4);
}
B5b9735:{NFSU2_TR(0x5b9735);
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
B5b9737:{NFSU2_TR(0x5b9737);
if(r1(R+518)){{goto L5b9744;}}
}
B5b9739:L5b9739:{c.instructions+=4;NFSU2_TR(0x5b9739);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b973b:{NFSU2_TR(0x5b973b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b973f:{NFSU2_TR(0x5b973f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b9741:{NFSU2_TR(0x5b9741);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9744:L5b9744:{c.instructions+=1;NFSU2_TR(0x5b9744);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9750:L5b9750:{c.instructions+=41;NFSU2_TR(0x5b9750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B5b9753:{NFSU2_TR(0x5b9753);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9754:{NFSU2_TR(0x5b9754);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b9756:{NFSU2_TR(0x5b9756);
w1(R+0,u8(0x2ull));
}
B5b9758:{NFSU2_TR(0x5b9758);
u8 U[4];
w4(U+0,u32(0x86b7d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b975d:{NFSU2_TR(0x5b975d);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9761:{NFSU2_TR(0x5b9761);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9765:{NFSU2_TR(0x5b9765);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5b976a:{NFSU2_TR(0x5b976a);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b976e:{NFSU2_TR(0x5b976e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b976f:{NFSU2_TR(0x5b976f);
u8 U[6];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b9774:{NFSU2_TR(0x5b9774);
u8 U[6];
w4(U+0,u32(u32(u32(0x2eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b9779:{NFSU2_TR(0x5b9779);
u8 U[5];
w4(U+0,u32(u32(u32(0x31ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b977d:{NFSU2_TR(0x5b977d);
u8 U[5];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9781:{NFSU2_TR(0x5b9781);
u8 U[5];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9785:{NFSU2_TR(0x5b9785);
u8 U[6];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b978a:{NFSU2_TR(0x5b978a);
u8 U[6];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+16))));
w2(U+4,u16(0xcull));
s2(u32(r4(U+0)),r2(U+4));
}
B5b9791:{NFSU2_TR(0x5b9791);
u8 U[5];
w4(U+0,u32(u32(u32(0x39ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9795:{NFSU2_TR(0x5b9795);
u8 U[5];
w4(U+0,u32(u32(u32(0x3aull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b979a:{NFSU2_TR(0x5b979a);
u8 U[5];
w4(U+0,u32(u32(u32(0x3bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b979e:{NFSU2_TR(0x5b979e);
u8 U[6];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b97a3:{NFSU2_TR(0x5b97a3);
u8 U[6];
w4(U+0,u32(u32(u32(0x3eull))+u32(r4(R+16))));
w2(U+4,u16(0x18ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5b97aa:{NFSU2_TR(0x5b97aa);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b97af:{NFSU2_TR(0x5b97af);
u8 U[5];
w4(U+0,u32(u32(u32(0x41ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b97b3:{NFSU2_TR(0x5b97b3);
u8 U[5];
w4(U+0,u32(u32(u32(0x42ull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b97b8:{NFSU2_TR(0x5b97b8);
u8 U[5];
w4(U+0,u32(u32(u32(0x43ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b97bc:{NFSU2_TR(0x5b97bc);
u8 U[6];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b97c1:{NFSU2_TR(0x5b97c1);
u8 U[6];
w4(U+0,u32(u32(u32(0x46ull))+u32(r4(R+16))));
w2(U+4,u16(0x1cull));
s2(u32(r4(U+0)),r2(U+4));
}
B5b97c8:{NFSU2_TR(0x5b97c8);
u8 U[5];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b97cd:{NFSU2_TR(0x5b97cd);
u8 U[5];
w4(U+0,u32(u32(u32(0x49ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b97d1:{NFSU2_TR(0x5b97d1);
u8 U[5];
w4(U+0,u32(u32(u32(0x4aull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b97d6:{NFSU2_TR(0x5b97d6);
u8 U[5];
w4(U+0,u32(u32(u32(0x4bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b97da:{NFSU2_TR(0x5b97da);
u8 U[6];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w2(U+4,u16(0xffull));
s2(u32(r4(U+0)),r2(U+4));
}
B5b97e1:{NFSU2_TR(0x5b97e1);
u8 U[6];
w4(U+0,u32(u32(u32(0x4eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b97e6:{NFSU2_TR(0x5b97e6);
u8 U[5];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w1(U+4,u8(0x11ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b97eb:{NFSU2_TR(0x5b97eb);
u8 U[5];
w4(U+0,u32(u32(u32(0x51ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b97ef:{NFSU2_TR(0x5b97ef);
u8 U[5];
w4(U+0,u32(u32(u32(0x52ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b97f3:{NFSU2_TR(0x5b97f3);
u8 U[5];
w4(U+0,u32(u32(u32(0x53ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b97f7:{NFSU2_TR(0x5b97f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b97f9:{NFSU2_TR(0x5b97f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b97fa:{NFSU2_TR(0x5b97fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9800ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b9800:L5b9800:{c.instructions+=31;NFSU2_TR(0x5b9800);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5b9805:{NFSU2_TR(0x5b9805);
u8 U[4];
w4(U+0,u32(0x86b910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b980a:{NFSU2_TR(0x5b980a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b980e:{NFSU2_TR(0x5b980e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b980f:{NFSU2_TR(0x5b980f);
u8 U[6];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b9814:{NFSU2_TR(0x5b9814);
u8 U[6];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b9819:{NFSU2_TR(0x5b9819);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b981e:{NFSU2_TR(0x5b981e);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9822:{NFSU2_TR(0x5b9822);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x9ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b9827:{NFSU2_TR(0x5b9827);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b982b:{NFSU2_TR(0x5b982b);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b9830:{NFSU2_TR(0x5b9830);
u8 U[6];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
w2(U+4,u16(0x10ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5b9837:{NFSU2_TR(0x5b9837);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b983c:{NFSU2_TR(0x5b983c);
u8 U[5];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9840:{NFSU2_TR(0x5b9840);
u8 U[5];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b9845:{NFSU2_TR(0x5b9845);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9849:{NFSU2_TR(0x5b9849);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b984e:{NFSU2_TR(0x5b984e);
u8 U[6];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
w2(U+4,u16(0x14ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5b9855:{NFSU2_TR(0x5b9855);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b985a:{NFSU2_TR(0x5b985a);
u8 U[5];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b985e:{NFSU2_TR(0x5b985e);
u8 U[5];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b9863:{NFSU2_TR(0x5b9863);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9867:{NFSU2_TR(0x5b9867);
u8 U[6];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w2(U+4,u16(0xffull));
s2(u32(r4(U+0)),r2(U+4));
}
B5b986e:{NFSU2_TR(0x5b986e);
u8 U[6];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b9873:{NFSU2_TR(0x5b9873);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x11ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b9878:{NFSU2_TR(0x5b9878);
u8 U[5];
w4(U+0,u32(u32(u32(0x29ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b987c:{NFSU2_TR(0x5b987c);
u8 U[5];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9880:{NFSU2_TR(0x5b9880);
u8 U[5];
w4(U+0,u32(u32(u32(0x2bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9884:{NFSU2_TR(0x5b9884);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b9886:{NFSU2_TR(0x5b9886);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9887:{NFSU2_TR(0x5b9887);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b988dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b988d:L5b988d:{c.instructions+=3;NFSU2_TR(0x5b988d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b988e:{NFSU2_TR(0x5b988e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b9891:{NFSU2_TR(0x5b9891);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b98a0:L5b98a0:{c.instructions+=2;NFSU2_TR(0x5b98a0);
__builtin_memmove((R+0),gp(0x8707dc),4);
}
B5b98a5:{NFSU2_TR(0x5b98a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b98b0:L5b98b0:{c.instructions+=4;NFSU2_TR(0x5b98b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b98b2:{NFSU2_TR(0x5b98b2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b98b4:{NFSU2_TR(0x5b98b4);
u8 U[4];
w4(U+0,u32(0x7a35b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b98b9:{NFSU2_TR(0x5b98b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b98beull));
TAIL_STATIC(0x43db50u,43d);
}
B5b98be:L5b98be:{c.instructions+=3;NFSU2_TR(0x5b98be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b98c1:{NFSU2_TR(0x5b98c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b98c2:{NFSU2_TR(0x5b98c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b98c7ull));
TAIL_STATIC(0x4901d0u,490);
}
B5b98c7:L5b98c7:{c.instructions+=6;NFSU2_TR(0x5b98c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b98ca:{NFSU2_TR(0x5b98ca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b98cc:{NFSU2_TR(0x5b98cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b98ce:{NFSU2_TR(0x5b98ce);
u8 U[4];
w4(U+0,u32(0x7a35a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b98d3:{NFSU2_TR(0x5b98d3);
__builtin_memmove(gp(0x8707e8),(R+0),4);
}
B5b98d8:{NFSU2_TR(0x5b98d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b98ddull));
TAIL_STATIC(0x43db50u,43d);
}
B5b98dd:L5b98dd:{c.instructions+=3;NFSU2_TR(0x5b98dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b98e0:{NFSU2_TR(0x5b98e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b98e1:{NFSU2_TR(0x5b98e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b98e6ull));
TAIL_STATIC(0x4901d0u,490);
}
B5b98e6:L5b98e6:{c.instructions+=6;NFSU2_TR(0x5b98e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b98e9:{NFSU2_TR(0x5b98e9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b98eb:{NFSU2_TR(0x5b98eb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b98ed:{NFSU2_TR(0x5b98ed);
u8 U[4];
w4(U+0,u32(0x7a3590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b98f2:{NFSU2_TR(0x5b98f2);
__builtin_memmove(gp(0x8707ec),(R+0),4);
}
B5b98f7:{NFSU2_TR(0x5b98f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b98fcull));
TAIL_STATIC(0x43db50u,43d);
}
B5b98fc:L5b98fc:{c.instructions+=3;NFSU2_TR(0x5b98fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b98ff:{NFSU2_TR(0x5b98ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9900:{NFSU2_TR(0x5b9900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9905ull));
TAIL_STATIC(0x4901d0u,490);
}
B5b9905:L5b9905:{c.instructions+=3;NFSU2_TR(0x5b9905);
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
B5b9908:{NFSU2_TR(0x5b9908);
__builtin_memmove(gp(0x8707f0),(R+0),4);
}
B5b990d:{NFSU2_TR(0x5b990d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9910:L5b9910:{c.instructions+=11;NFSU2_TR(0x5b9910);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9911:{NFSU2_TR(0x5b9911);
__builtin_memmove((R+20),(R+16),4);
}
B5b9913:{NFSU2_TR(0x5b9913);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5b9916:{NFSU2_TR(0x5b9916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B5b9919:{NFSU2_TR(0x5b9919);
__builtin_memmove((R+0),gp(0x870cb8),4);
}
B5b991e:{NFSU2_TR(0x5b991e);
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
B5b9920:{NFSU2_TR(0x5b9920);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9921:{NFSU2_TR(0x5b9921);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9922:{NFSU2_TR(0x5b9922);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9923:{NFSU2_TR(0x5b9923);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9924:{NFSU2_TR(0x5b9924);
if(r1(R+518)){{goto L5b9a4d;}}
}
B5b992a:L5b992a:{c.instructions+=4;NFSU2_TR(0x5b992a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b992c:{NFSU2_TR(0x5b992c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b992e:{NFSU2_TR(0x5b992e);
u8 U[4];
w4(U+0,u32(0x7a35dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9933:{NFSU2_TR(0x5b9933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9938ull));
TAIL_STATIC(0x43db50u,43d);
}
B5b9938:L5b9938:{c.instructions+=3;NFSU2_TR(0x5b9938);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b993b:{NFSU2_TR(0x5b993b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b993c:{NFSU2_TR(0x5b993c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9941ull));
TAIL_STATIC(0x4901d0u,490);
}
B5b9941:L5b9941:{c.instructions+=6;NFSU2_TR(0x5b9941);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b9944:{NFSU2_TR(0x5b9944);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9946:{NFSU2_TR(0x5b9946);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9948:{NFSU2_TR(0x5b9948);
u8 U[4];
w4(U+0,u32(0x7a35d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b994d:{NFSU2_TR(0x5b994d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9951:{NFSU2_TR(0x5b9951);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9956ull));
TAIL_STATIC(0x43db50u,43d);
}
B5b9956:L5b9956:{c.instructions+=3;NFSU2_TR(0x5b9956);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b9959:{NFSU2_TR(0x5b9959);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b995a:{NFSU2_TR(0x5b995a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b995full));
TAIL_STATIC(0x4901d0u,490);
}
B5b995f:L5b995f:{c.instructions+=6;NFSU2_TR(0x5b995f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b9962:{NFSU2_TR(0x5b9962);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9964:{NFSU2_TR(0x5b9964);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9966:{NFSU2_TR(0x5b9966);
u8 U[4];
w4(U+0,u32(0x7a35ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b996b:{NFSU2_TR(0x5b996b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b996f:{NFSU2_TR(0x5b996f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9974ull));
TAIL_STATIC(0x43db50u,43d);
}
B5b9974:L5b9974:{c.instructions+=3;NFSU2_TR(0x5b9974);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b9977:{NFSU2_TR(0x5b9977);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9978:{NFSU2_TR(0x5b9978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b997dull));
TAIL_STATIC(0x4901d0u,490);
}
B5b997d:L5b997d:{c.instructions+=6;NFSU2_TR(0x5b997d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b9980:{NFSU2_TR(0x5b9980);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9982:{NFSU2_TR(0x5b9982);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9984:{NFSU2_TR(0x5b9984);
u8 U[4];
w4(U+0,u32(0x7a35c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9989:{NFSU2_TR(0x5b9989);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b998d:{NFSU2_TR(0x5b998d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9992ull));
TAIL_STATIC(0x43db50u,43d);
}
B5b9992:L5b9992:{c.instructions+=3;NFSU2_TR(0x5b9992);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b9995:{NFSU2_TR(0x5b9995);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9996:{NFSU2_TR(0x5b9996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b999bull));
TAIL_STATIC(0x4901d0u,490);
}
B5b999b:L5b999b:{c.instructions+=6;NFSU2_TR(0x5b999b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b999e:{NFSU2_TR(0x5b999e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b99a0:{NFSU2_TR(0x5b99a0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b99a2:{NFSU2_TR(0x5b99a2);
u8 U[4];
w4(U+0,u32(0x7a35bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b99a7:{NFSU2_TR(0x5b99a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b99ab:{NFSU2_TR(0x5b99ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b99b0ull));
TAIL_STATIC(0x43db50u,43d);
}
B5b99b0:L5b99b0:{c.instructions+=3;NFSU2_TR(0x5b99b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b99b3:{NFSU2_TR(0x5b99b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b99b4:{NFSU2_TR(0x5b99b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b99b9ull));
TAIL_STATIC(0x4901d0u,490);
}
B5b99b9:L5b99b9:{c.instructions+=6;NFSU2_TR(0x5b99b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b99bc:{NFSU2_TR(0x5b99bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b99be:{NFSU2_TR(0x5b99be);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b99c0:{NFSU2_TR(0x5b99c0);
u8 U[4];
w4(U+0,u32(0x7a35b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b99c5:{NFSU2_TR(0x5b99c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b99c9:{NFSU2_TR(0x5b99c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b99ceull));
TAIL_STATIC(0x43db50u,43d);
}
B5b99ce:L5b99ce:{c.instructions+=3;NFSU2_TR(0x5b99ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b99d1:{NFSU2_TR(0x5b99d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b99d2:{NFSU2_TR(0x5b99d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b99d7ull));
TAIL_STATIC(0x4901d0u,490);
}
B5b99d7:L5b99d7:{c.instructions+=3;NFSU2_TR(0x5b99d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b99da:{NFSU2_TR(0x5b99da);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b99de:{NFSU2_TR(0x5b99de);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b99e0:L5b99e0:{c.instructions+=11;NFSU2_TR(0x5b99e0);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B5b99e4:{NFSU2_TR(0x5b99e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b99e7:{NFSU2_TR(0x5b99e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b99ea:{NFSU2_TR(0x5b99ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b99ec:{NFSU2_TR(0x5b99ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b99ee:{NFSU2_TR(0x5b99ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b99f0:{NFSU2_TR(0x5b99f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b99f4:{NFSU2_TR(0x5b99f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b99f5:{NFSU2_TR(0x5b99f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b99f7:{NFSU2_TR(0x5b99f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b99f8:{NFSU2_TR(0x5b99f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b99fbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b99fb:L5b99fb:{c.instructions+=10;NFSU2_TR(0x5b99fb);
__builtin_memmove((R+0),gp(0x87088c),4);
}
B5b9a00:{NFSU2_TR(0x5b9a00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b9a02:{NFSU2_TR(0x5b9a02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9a04:{NFSU2_TR(0x5b9a04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9a06:{NFSU2_TR(0x5b9a06);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b9a0a:{NFSU2_TR(0x5b9a0a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9a0b:{NFSU2_TR(0x5b9a0b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9a0d:{NFSU2_TR(0x5b9a0d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9a0e:{NFSU2_TR(0x5b9a0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9a0f:{NFSU2_TR(0x5b9a0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9a12ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b9a12:L5b9a12:{c.instructions+=5;NFSU2_TR(0x5b9a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b9a15:{NFSU2_TR(0x5b9a15);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b9a19:{NFSU2_TR(0x5b9a19);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b9a1d:{NFSU2_TR(0x5b9a1d);
__builtin_memmove((R+0),(R+4),4);
}
B5b9a1f:{NFSU2_TR(0x5b9a1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5b9a22:L5b9a22:{c.instructions+=1;NFSU2_TR(0x5b9a22);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5b9a24;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9a22u);}goto L5b9a22;}
}
B5b9a24:L5b9a24:{c.instructions+=2;NFSU2_TR(0x5b9a24);
__builtin_memmove((R+4),(R+0),4);
}
B5b9a26:{NFSU2_TR(0x5b9a26);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b9a29:L5b9a29:{c.instructions+=1;NFSU2_TR(0x5b9a29);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5b9a2b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9a29u);}goto L5b9a29;}
}
B5b9a2b:L5b9a2b:{c.instructions+=6;NFSU2_TR(0x5b9a2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5b9a2e:{NFSU2_TR(0x5b9a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b9a31:{NFSU2_TR(0x5b9a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b9a33:{NFSU2_TR(0x5b9a33);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9a35:{NFSU2_TR(0x5b9a35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9a36:{NFSU2_TR(0x5b9a36);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9a39ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b9a39:L5b9a39:{c.instructions+=6;NFSU2_TR(0x5b9a39);
__builtin_memmove((R+0),gp(0x87088c),4);
}
B5b9a3e:{NFSU2_TR(0x5b9a3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b9a40:{NFSU2_TR(0x5b9a40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9a42:{NFSU2_TR(0x5b9a42);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9a43:{NFSU2_TR(0x5b9a43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9a44:{NFSU2_TR(0x5b9a44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9a47ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b9a47:L5b9a47:{c.instructions+=3;NFSU2_TR(0x5b9a47);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5b9a48:{NFSU2_TR(0x5b9a48);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5b9a4b:{NFSU2_TR(0x5b9a4b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b99e0u);}goto L5b99e0;}}
}
B5b9a4d:L5b9a4d:{c.instructions+=7;NFSU2_TR(0x5b9a4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b9a4e:{NFSU2_TR(0x5b9a4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b9a4f:{NFSU2_TR(0x5b9a4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b9a50:{NFSU2_TR(0x5b9a50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b9a51:{NFSU2_TR(0x5b9a51);
__builtin_memmove((R+16),(R+20),4);
}
B5b9a53:{NFSU2_TR(0x5b9a53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b9a54:{NFSU2_TR(0x5b9a54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9a60:L5b9a60:{c.instructions+=4;NFSU2_TR(0x5b9a60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9a61:{NFSU2_TR(0x5b9a61);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b9a63:{NFSU2_TR(0x5b9a63);
w4(R+4,u32(0xeull));
}
B5b9a68:{NFSU2_TR(0x5b9a68);
w4(R+28,u32(0x86f870ull));
}
B5b9a6d:L5b9a6d:{c.instructions+=1;NFSU2_TR(0x5b9a6d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5b9a6f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9a6du);}goto L5b9a6d;}
}
B5b9a6f:L5b9a6f:{c.instructions+=4;NFSU2_TR(0x5b9a6f);
__builtin_memmove((R+0),gp(0x87098c),4);
}
B5b9a74:{NFSU2_TR(0x5b9a74);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b9a76:{NFSU2_TR(0x5b9a76);
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
B5b9a78:{NFSU2_TR(0x5b9a78);
if(r1(R+518)){{goto L5b9a9d;}}
}
B5b9a7a:L5b9a7a:{c.instructions+=4;NFSU2_TR(0x5b9a7a);
__builtin_memmove((R+0),gp(0x870990),4);
}
B5b9a7f:{NFSU2_TR(0x5b9a7f);
u8 U[4];
w4(U+0,u32(0x86e754ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9a84:{NFSU2_TR(0x5b9a84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9a85:{NFSU2_TR(0x5b9a85);
u8 U[4];
__builtin_memmove((U+0),gp(0x783388),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9a8bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b9a8b:L5b9a8b:{c.instructions+=4;NFSU2_TR(0x5b9a8b);
__builtin_memmove((R+4),gp(0x870990),4);
}
B5b9a91:{NFSU2_TR(0x5b9a91);
u8 U[4];
w4(U+0,u32(0x86b790ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9a96:{NFSU2_TR(0x5b9a96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9a97:{NFSU2_TR(0x5b9a97);
u8 U[4];
__builtin_memmove((U+0),gp(0x783384),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9a9dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b9a9d:L5b9a9d:{c.instructions+=8;NFSU2_TR(0x5b9a9d);
__builtin_memmove((R+8),gp(0x87098c),4);
}
B5b9aa3:{NFSU2_TR(0x5b9aa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b9aa7:{NFSU2_TR(0x5b9aa7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b9aab:{NFSU2_TR(0x5b9aab);
__builtin_memmove(gp(0x86f890),(R+8),4);
}
B5b9ab1:{NFSU2_TR(0x5b9ab1);
u8 U[1];
w1(U+0,u8(u32(m1(0x86e5d8))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b9ab8:{NFSU2_TR(0x5b9ab8);
__builtin_memmove(gp(0x86f870),(R+0),4);
}
B5b9abd:{NFSU2_TR(0x5b9abd);
__builtin_memmove(gp(0x86f874),(R+4),4);
}
B5b9ac3:{NFSU2_TR(0x5b9ac3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b9ad7;}}
}
B5b9ac5:L5b9ac5:{c.instructions+=3;NFSU2_TR(0x5b9ac5);
u8 U[8];
__builtin_memmove((U+0),gp(0x8709a0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b9acb:{NFSU2_TR(0x5b9acb);
s4(0x86f888,u32(0x3ull));
}
B5b9ad5:{NFSU2_TR(0x5b9ad5);
if(r1(R+518)){{goto L5b9ae1;}}
}
B5b9ad7:L5b9ad7:{c.instructions+=1;NFSU2_TR(0x5b9ad7);
s4(0x86f888,u32(0x1ull));
}
B5b9ae1:L5b9ae1:{c.instructions+=23;NFSU2_TR(0x5b9ae1);
__builtin_memmove((R+8),gp(0x7fee68),4);
}
B5b9ae7:{NFSU2_TR(0x5b9ae7);
__builtin_memmove(gp(0x86f878),(R+8),4);
}
B5b9aed:{NFSU2_TR(0x5b9aed);
__builtin_memmove((R+8),gp(0x8707f4),4);
}
B5b9af3:{NFSU2_TR(0x5b9af3);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B5b9af5:{NFSU2_TR(0x5b9af5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5b9af7:{NFSU2_TR(0x5b9af7);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x5ull))));
}
B5b9afa:{NFSU2_TR(0x5b9afa);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4bull))));
}
B5b9afd:{NFSU2_TR(0x5b9afd);
__builtin_memmove(gp(0x86f898),(R+8),4);
}
B5b9b03:{NFSU2_TR(0x5b9b03);
__builtin_memmove((R+8),gp(0x870d24),4);
}
B5b9b09:{NFSU2_TR(0x5b9b09);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B5b9b0b:{NFSU2_TR(0x5b9b0b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5b9b0d:{NFSU2_TR(0x5b9b0d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000001ull))));
}
B5b9b13:{NFSU2_TR(0x5b9b13);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x80000000ull))));
}
B5b9b19:{NFSU2_TR(0x5b9b19);
__builtin_memmove(gp(0x86f8a4),(R+8),4);
}
B5b9b1f:{NFSU2_TR(0x5b9b1f);
__builtin_memmove((R+8),gp(0x870990),4);
}
B5b9b25:{NFSU2_TR(0x5b9b25);
__builtin_memmove(gp(0x86f88c),(R+8),4);
}
B5b9b2b:{NFSU2_TR(0x5b9b2b);
__builtin_memmove((R+8),gp(0x870d08),4);
}
B5b9b31:{NFSU2_TR(0x5b9b31);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5b9b33:{NFSU2_TR(0x5b9b33);
s4(0x86f894,u32(0x1ull));
}
B5b9b3d:{NFSU2_TR(0x5b9b3d);
__builtin_memmove(gp(0x86f89c),(R+28),4);
}
B5b9b43:{NFSU2_TR(0x5b9b43);
__builtin_memmove(gp(0x870984),(R+4),4);
}
B5b9b49:{NFSU2_TR(0x5b9b49);
__builtin_memmove(gp(0x870980),(R+0),4);
}
B5b9b4e:{NFSU2_TR(0x5b9b4e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b9b62;}}
}
B5b9b50:L5b9b50:{c.instructions+=4;NFSU2_TR(0x5b9b50);
s4(0x86f880,u32(0x1ull));
}
B5b9b5a:{NFSU2_TR(0x5b9b5a);
__builtin_memmove(gp(0x86f884),(R+8),4);
}
B5b9b60:{NFSU2_TR(0x5b9b60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b9b61:{NFSU2_TR(0x5b9b61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9b62:L5b9b62:{c.instructions+=4;NFSU2_TR(0x5b9b62);
__builtin_memmove(gp(0x86f880),(R+28),4);
}
B5b9b68:{NFSU2_TR(0x5b9b68);
__builtin_memmove(gp(0x86f884),(R+28),4);
}
B5b9b6e:{NFSU2_TR(0x5b9b6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b9b6f:{NFSU2_TR(0x5b9b6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9b70:L5b9b70:{c.instructions+=13;NFSU2_TR(0x5b9b70);
__builtin_memmove((R+8),gp(0x870990),4);
}
B5b9b76:{NFSU2_TR(0x5b9b76);
__builtin_memmove((R+0),gp(0x870970),4);
}
B5b9b7b:{NFSU2_TR(0x5b9b7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b9b7d:{NFSU2_TR(0x5b9b7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9b7e:{NFSU2_TR(0x5b9b7e);
u8 U[4];
w4(U+0,u32(0x870974ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9b83:{NFSU2_TR(0x5b9b83);
u8 U[4];
w4(U+0,u32(0x86f870ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9b88:{NFSU2_TR(0x5b9b88);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9b8a:{NFSU2_TR(0x5b9b8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9b8b:{NFSU2_TR(0x5b9b8b);
__builtin_memmove((R+8),gp(0x8709ac),4);
}
B5b9b91:{NFSU2_TR(0x5b9b91);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9b93:{NFSU2_TR(0x5b9b93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9b94:{NFSU2_TR(0x5b9b94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9b95:{NFSU2_TR(0x5b9b95);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9b98ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b9b98:L5b9b98:{c.instructions+=3;NFSU2_TR(0x5b9b98);
__builtin_memmove((R+24),(R+0),4);
}
B5b9b9a:{NFSU2_TR(0x5b9b9a);
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
B5b9b9c:{NFSU2_TR(0x5b9b9c);
if(r1(R+518)){{goto L5b9bc7;}}
}
B5b9b9e:L5b9b9e:{c.instructions+=12;NFSU2_TR(0x5b9b9e);
__builtin_memmove((R+8),gp(0x870990),4);
}
B5b9ba4:{NFSU2_TR(0x5b9ba4);
__builtin_memmove((R+0),gp(0x870970),4);
}
B5b9ba9:{NFSU2_TR(0x5b9ba9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b9bab:{NFSU2_TR(0x5b9bab);
u8 U[4];
w4(U+0,u32(0x870974ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9bb0:{NFSU2_TR(0x5b9bb0);
u8 U[4];
w4(U+0,u32(0x86f870ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9bb5:{NFSU2_TR(0x5b9bb5);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9bb7:{NFSU2_TR(0x5b9bb7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9bb8:{NFSU2_TR(0x5b9bb8);
__builtin_memmove((R+8),gp(0x8709ac),4);
}
B5b9bbe:{NFSU2_TR(0x5b9bbe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9bc0:{NFSU2_TR(0x5b9bc0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9bc1:{NFSU2_TR(0x5b9bc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9bc2:{NFSU2_TR(0x5b9bc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9bc5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b9bc5:L5b9bc5:{c.instructions+=1;NFSU2_TR(0x5b9bc5);
__builtin_memmove((R+24),(R+0),4);
}
B5b9bc7:L5b9bc7:{c.instructions+=2;NFSU2_TR(0x5b9bc7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8876086cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8876086cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8876086cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b9bcd:{NFSU2_TR(0x5b9bcd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b9c17;}}
}
B5b9bcf:L5b9bcf:{c.instructions+=2;NFSU2_TR(0x5b9bcf);
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
B5b9bd1:{NFSU2_TR(0x5b9bd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b9c17;}}
}
B5b9bd3:L5b9bd3:{c.instructions+=4;NFSU2_TR(0x5b9bd3);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5b9bd8:{NFSU2_TR(0x5b9bd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b9bda:{NFSU2_TR(0x5b9bda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9bdb:{NFSU2_TR(0x5b9bdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9be1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b9be1:L5b9be1:{c.instructions+=10;NFSU2_TR(0x5b9be1);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5b9be6:{NFSU2_TR(0x5b9be6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b9be8:{NFSU2_TR(0x5b9be8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9be9:{NFSU2_TR(0x5b9be9);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9bee:{NFSU2_TR(0x5b9bee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9bef:{NFSU2_TR(0x5b9bef);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9bf1:{NFSU2_TR(0x5b9bf1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9bf2:{NFSU2_TR(0x5b9bf2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9bf3:{NFSU2_TR(0x5b9bf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9bf4:{NFSU2_TR(0x5b9bf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9bfaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b9bfa:L5b9bfa:{c.instructions+=4;NFSU2_TR(0x5b9bfa);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5b9bff:{NFSU2_TR(0x5b9bff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b9c01:{NFSU2_TR(0x5b9c01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9c02:{NFSU2_TR(0x5b9c02);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9c08ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b9c08:L5b9c08:{c.instructions+=8;NFSU2_TR(0x5b9c08);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5b9c0d:{NFSU2_TR(0x5b9c0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b9c0f:{NFSU2_TR(0x5b9c0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9c10:{NFSU2_TR(0x5b9c10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9c11:{NFSU2_TR(0x5b9c11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9c12:{NFSU2_TR(0x5b9c12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9c13:{NFSU2_TR(0x5b9c13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9c14:{NFSU2_TR(0x5b9c14);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9c17ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b9c17:L5b9c17:{c.instructions+=3;NFSU2_TR(0x5b9c17);
__builtin_memmove((R+0),(R+24),4);
}
B5b9c19:{NFSU2_TR(0x5b9c19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b9c1a:{NFSU2_TR(0x5b9c1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9c20:L5b9c20:{c.instructions+=6;NFSU2_TR(0x5b9c20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9c21:{NFSU2_TR(0x5b9c21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b9c25:{NFSU2_TR(0x5b9c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6c0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b9c2f:{NFSU2_TR(0x5b9c2f);
__builtin_memmove((R+0),gp(0x7fee48),4);
}
B5b9c34:{NFSU2_TR(0x5b9c34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b9c36:{NFSU2_TR(0x5b9c36);
if(r1(R+518)){{goto L5b9d80;}}
}
B5b9c3c:L5b9c3c:{c.instructions+=2;NFSU2_TR(0x5b9c3c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b9c43:{NFSU2_TR(0x5b9c43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b9d80;}}
}
B5b9c49:L5b9c49:{c.instructions+=3;NFSU2_TR(0x5b9c49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9c4a:{NFSU2_TR(0x5b9c4a);
w4(R+28,u32(0x1ull));
}
B5b9c4f:{NFSU2_TR(0x5b9c4f);
}
B5b9c50:L5b9c50:{c.instructions+=2;NFSU2_TR(0x5b9c50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9c51:{NFSU2_TR(0x5b9c51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9c56ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5b9c56:L5b9c56:{c.instructions+=4;NFSU2_TR(0x5b9c56);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5b9c59:{NFSU2_TR(0x5b9c59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b9c5c:{NFSU2_TR(0x5b9c5c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b9c5e:{NFSU2_TR(0x5b9c5e);
if(r1(R+518)){{goto L5b9ca4;}}
}
B5b9c60:L5b9c60:{c.instructions+=4;NFSU2_TR(0x5b9c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b9c63:{NFSU2_TR(0x5b9c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9c66:{NFSU2_TR(0x5b9c66);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b9c68:{NFSU2_TR(0x5b9c68);
if(r1(R+518)){{goto L5b9ca4;}}
}
B5b9c6a:L5b9c6a:{c.instructions+=8;NFSU2_TR(0x5b9c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9c70:{NFSU2_TR(0x5b9c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5b9c73:{NFSU2_TR(0x5b9c73);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5b9c76:{NFSU2_TR(0x5b9c76);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B5b9c78:{NFSU2_TR(0x5b9c78);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5b9c79:{NFSU2_TR(0x5b9c79);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5b9c7c:{NFSU2_TR(0x5b9c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9c82:{NFSU2_TR(0x5b9c82);
if(r1(R+518)){{goto L5b9c95;}}
}
B5b9c84:L5b9c84:{c.instructions+=3;NFSU2_TR(0x5b9c84);
__builtin_memmove((R+8),gp(0x8707a4),4);
}
B5b9c8a:{NFSU2_TR(0x5b9c8a);
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
B5b9c8c:{NFSU2_TR(0x5b9c8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b9c95;}}
}
B5b9c8e:L5b9c8e:{c.instructions+=2;NFSU2_TR(0x5b9c8e);
u8 U[4];
w4(U+0,u32(0x6000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9c93:{NFSU2_TR(0x5b9c93);
{goto L5b9c9a;}
}
B5b9c95:L5b9c95:{c.instructions+=1;NFSU2_TR(0x5b9c95);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9c9a:L5b9c9a:{c.instructions+=3;NFSU2_TR(0x5b9c9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9c9b:{NFSU2_TR(0x5b9c9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9c9c:{NFSU2_TR(0x5b9c9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9ca1ull));
TAIL_STATIC(0x4888a0u,488);
}
B5b9ca1:L5b9ca1:{c.instructions+=1;NFSU2_TR(0x5b9ca1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b9ca4:L5b9ca4:{c.instructions+=3;NFSU2_TR(0x5b9ca4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b9ca5:{NFSU2_TR(0x5b9ca5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b9ca8:{NFSU2_TR(0x5b9ca8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9c50u);}goto L5b9c50;}}
}
B5b9caa:L5b9caa:{c.instructions+=3;NFSU2_TR(0x5b9caa);
__builtin_memmove((R+0),gp(0x870cb8),4);
}
B5b9caf:{NFSU2_TR(0x5b9caf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b9cb1:{NFSU2_TR(0x5b9cb1);
if(r1(R+518)){{goto L5b9cfc;}}
}
B5b9cb3:L5b9cb3:{c.instructions+=1;NFSU2_TR(0x5b9cb3);
w4(R+28,u32(0x10ull));
}
B5b9cb8:L5b9cb8:{c.instructions+=2;NFSU2_TR(0x5b9cb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9cb9:{NFSU2_TR(0x5b9cb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9cbeull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5b9cbe:L5b9cbe:{c.instructions+=4;NFSU2_TR(0x5b9cbe);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5b9cc1:{NFSU2_TR(0x5b9cc1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b9cc4:{NFSU2_TR(0x5b9cc4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b9cc6:{NFSU2_TR(0x5b9cc6);
if(r1(R+518)){{goto L5b9cf6;}}
}
B5b9cc8:L5b9cc8:{c.instructions+=4;NFSU2_TR(0x5b9cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9ccb:{NFSU2_TR(0x5b9ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b9cce:{NFSU2_TR(0x5b9cce);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b9cd0:{NFSU2_TR(0x5b9cd0);
if(r1(R+518)){{goto L5b9cf6;}}
}
B5b9cd2:L5b9cd2:{c.instructions+=10;NFSU2_TR(0x5b9cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9cd8:{NFSU2_TR(0x5b9cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5b9cdb:{NFSU2_TR(0x5b9cdb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5b9cde:{NFSU2_TR(0x5b9cde);
w1(R+512,carry<u32>(r4(R+4),r4(R+24)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B5b9ce0:{NFSU2_TR(0x5b9ce0);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9ce5:{NFSU2_TR(0x5b9ce5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9ce6:{NFSU2_TR(0x5b9ce6);
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
B5b9ce7:{NFSU2_TR(0x5b9ce7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9ce8:{NFSU2_TR(0x5b9ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9cee:{NFSU2_TR(0x5b9cee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9cf3ull));
TAIL_STATIC(0x4888a0u,488);
}
B5b9cf3:L5b9cf3:{c.instructions+=1;NFSU2_TR(0x5b9cf3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b9cf6:L5b9cf6:{c.instructions+=3;NFSU2_TR(0x5b9cf6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b9cf7:{NFSU2_TR(0x5b9cf7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b9cfa:{NFSU2_TR(0x5b9cfa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9cb8u);}goto L5b9cb8;}}
}
B5b9cfc:L5b9cfc:{c.instructions+=4;NFSU2_TR(0x5b9cfc);
__builtin_memmove((R+0),gp(0x870cd4),4);
}
B5b9d01:{NFSU2_TR(0x5b9d01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b9d03:{NFSU2_TR(0x5b9d03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b9d04:{NFSU2_TR(0x5b9d04);
if(r1(R+518)){{goto L5b9d45;}}
}
B5b9d06:L5b9d06:{c.instructions+=2;NFSU2_TR(0x5b9d06);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9d08:{NFSU2_TR(0x5b9d08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9d0dull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5b9d0d:L5b9d0d:{c.instructions+=4;NFSU2_TR(0x5b9d0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5b9d10:{NFSU2_TR(0x5b9d10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b9d13:{NFSU2_TR(0x5b9d13);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b9d15:{NFSU2_TR(0x5b9d15);
if(r1(R+518)){{goto L5b9d45;}}
}
B5b9d17:L5b9d17:{c.instructions+=4;NFSU2_TR(0x5b9d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b9d1a:{NFSU2_TR(0x5b9d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9d1d:{NFSU2_TR(0x5b9d1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b9d1f:{NFSU2_TR(0x5b9d1f);
if(r1(R+518)){{goto L5b9d45;}}
}
B5b9d21:L5b9d21:{c.instructions+=10;NFSU2_TR(0x5b9d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9d27:{NFSU2_TR(0x5b9d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5b9d2a:{NFSU2_TR(0x5b9d2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5b9d2d:{NFSU2_TR(0x5b9d2d);
w1(R+512,carry<u32>(r4(R+4),r4(R+24)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B5b9d2f:{NFSU2_TR(0x5b9d2f);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9d34:{NFSU2_TR(0x5b9d34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9d35:{NFSU2_TR(0x5b9d35);
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
B5b9d36:{NFSU2_TR(0x5b9d36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9d37:{NFSU2_TR(0x5b9d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9d3d:{NFSU2_TR(0x5b9d3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9d42ull));
TAIL_STATIC(0x4888a0u,488);
}
B5b9d42:L5b9d42:{c.instructions+=1;NFSU2_TR(0x5b9d42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b9d45:L5b9d45:{c.instructions+=3;NFSU2_TR(0x5b9d45);
__builtin_memmove((R+0),gp(0x870cc4),4);
}
B5b9d4a:{NFSU2_TR(0x5b9d4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b9d4c:{NFSU2_TR(0x5b9d4c);
if(r1(R+518)){{goto L5b9d80;}}
}
B5b9d4e:L5b9d4e:{c.instructions+=2;NFSU2_TR(0x5b9d4e);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9d50:{NFSU2_TR(0x5b9d50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9d55ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5b9d55:L5b9d55:{c.instructions+=4;NFSU2_TR(0x5b9d55);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5b9d58:{NFSU2_TR(0x5b9d58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b9d5b:{NFSU2_TR(0x5b9d5b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b9d5d:{NFSU2_TR(0x5b9d5d);
if(r1(R+518)){{goto L5b9d80;}}
}
B5b9d5f:L5b9d5f:{c.instructions+=10;NFSU2_TR(0x5b9d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9d65:{NFSU2_TR(0x5b9d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5b9d68:{NFSU2_TR(0x5b9d68);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5b9d6b:{NFSU2_TR(0x5b9d6b);
w1(R+512,carry<u32>(r4(R+4),r4(R+24)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B5b9d6d:{NFSU2_TR(0x5b9d6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9d6f:{NFSU2_TR(0x5b9d6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9d70:{NFSU2_TR(0x5b9d70);
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
B5b9d71:{NFSU2_TR(0x5b9d71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9d72:{NFSU2_TR(0x5b9d72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9d78:{NFSU2_TR(0x5b9d78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9d7dull));
TAIL_STATIC(0x4888a0u,488);
}
B5b9d7d:L5b9d7d:{c.instructions+=1;NFSU2_TR(0x5b9d7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b9d80:L5b9d80:{c.instructions+=3;NFSU2_TR(0x5b9d80);
__builtin_memmove((R+4),(R+24),4);
}
B5b9d82:{NFSU2_TR(0x5b9d82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b9d83:{NFSU2_TR(0x5b9d83);
TAIL_STATIC(0x5e9a30u,5e9);
}
B5b9d90:L5b9d90:{c.instructions+=2;NFSU2_TR(0x5b9d90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9d91:{NFSU2_TR(0x5b9d91);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b9d93:L5b9d93:{c.instructions+=6;NFSU2_TR(0x5b9d93);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5b9d98:{NFSU2_TR(0x5b9d98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b9d9a:{NFSU2_TR(0x5b9d9a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9d9c:{NFSU2_TR(0x5b9d9c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9d9d:{NFSU2_TR(0x5b9d9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9d9e:{NFSU2_TR(0x5b9d9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9da4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b9da4:L5b9da4:{c.instructions+=3;NFSU2_TR(0x5b9da4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5b9da5:{NFSU2_TR(0x5b9da5);
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
B5b9da8:{NFSU2_TR(0x5b9da8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9d93u);}goto L5b9d93;}}
}
B5b9daa:L5b9daa:{c.instructions+=2;NFSU2_TR(0x5b9daa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b9dab:{NFSU2_TR(0x5b9dab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9db0:L5b9db0:{c.instructions+=31;NFSU2_TR(0x5b9db0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5b9db3:{NFSU2_TR(0x5b9db3);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5b9db5:{NFSU2_TR(0x5b9db5);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+16)),r1(U+0));
}
B5b9db9:{NFSU2_TR(0x5b9db9);
u8 U[5];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9dbd:{NFSU2_TR(0x5b9dbd);
u8 U[5];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9dc1:{NFSU2_TR(0x5b9dc1);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9dc5:{NFSU2_TR(0x5b9dc5);
u8 U[5];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9dc9:{NFSU2_TR(0x5b9dc9);
u8 U[5];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9dcd:{NFSU2_TR(0x5b9dcd);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9dd1:{NFSU2_TR(0x5b9dd1);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9dd5:{NFSU2_TR(0x5b9dd5);
u8 U[5];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9dd9:{NFSU2_TR(0x5b9dd9);
u8 U[5];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9ddd:{NFSU2_TR(0x5b9ddd);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9de1:{NFSU2_TR(0x5b9de1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b9de5:{NFSU2_TR(0x5b9de5);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9de9:{NFSU2_TR(0x5b9de9);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5b9dec:{NFSU2_TR(0x5b9dec);
u8 U[5];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9df0:{NFSU2_TR(0x5b9df0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b9df4:{NFSU2_TR(0x5b9df4);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9df8:{NFSU2_TR(0x5b9df8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5b9dfb:{NFSU2_TR(0x5b9dfb);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9dff:{NFSU2_TR(0x5b9dff);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b9e03:{NFSU2_TR(0x5b9e03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9e04:{NFSU2_TR(0x5b9e04);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9e06:{NFSU2_TR(0x5b9e06);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b9e0a:{NFSU2_TR(0x5b9e0a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9e0c:{NFSU2_TR(0x5b9e0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9e0d:{NFSU2_TR(0x5b9e0d);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b9e12:{NFSU2_TR(0x5b9e12);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x20ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b9e17:{NFSU2_TR(0x5b9e17);
u8 U[5];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
w1(U+4,u8(0x28ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b9e1c:{NFSU2_TR(0x5b9e1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9e21ull));
TAIL_STATIC(0x75d794u,75d);
}
B5b9e21:L5b9e21:{c.instructions+=2;NFSU2_TR(0x5b9e21);
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
B5b9e24:{NFSU2_TR(0x5b9e24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9e30:L5b9e30:{c.instructions+=6;NFSU2_TR(0x5b9e30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B5b9e33:{NFSU2_TR(0x5b9e33);
__builtin_memmove((R+8),gp(0x7a35ec),4);
}
B5b9e39:{NFSU2_TR(0x5b9e39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9e3a:{NFSU2_TR(0x5b9e3a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b9e3c:{NFSU2_TR(0x5b9e3c);
w4(R+4,u32(0x7ull));
}
B5b9e41:{NFSU2_TR(0x5b9e41);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5b9e45:L5b9e45:{c.instructions+=1;NFSU2_TR(0x5b9e45);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5b9e47;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9e45u);}goto L5b9e45;}
}
B5b9e47:L5b9e47:{c.instructions+=15;NFSU2_TR(0x5b9e47);
__builtin_memmove((R+4),gp(0x7a35e8),4);
}
B5b9e4d:{NFSU2_TR(0x5b9e4d);
__builtin_memmove((R+0),gp(0x7a35e4),4);
}
B5b9e52:{NFSU2_TR(0x5b9e52);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9e56:{NFSU2_TR(0x5b9e56);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b9e5a:{NFSU2_TR(0x5b9e5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9e5b:{NFSU2_TR(0x5b9e5b);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9e5d:{NFSU2_TR(0x5b9e5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9e61:{NFSU2_TR(0x5b9e61);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9e65:{NFSU2_TR(0x5b9e65);
__builtin_memmove((R+0),gp(0x7a35f0),4);
}
B5b9e6a:{NFSU2_TR(0x5b9e6a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b9e6e:{NFSU2_TR(0x5b9e6e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9e70:{NFSU2_TR(0x5b9e70);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9e71:{NFSU2_TR(0x5b9e71);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9e75:{NFSU2_TR(0x5b9e75);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x2eull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b9e7a:{NFSU2_TR(0x5b9e7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9e7full));
TAIL_STATIC(0x75d794u,75d);
}
B5b9e7f:L5b9e7f:{c.instructions+=4;NFSU2_TR(0x5b9e7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5b9e82:{NFSU2_TR(0x5b9e82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b9e83:{NFSU2_TR(0x5b9e83);
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
B5b9e86:{NFSU2_TR(0x5b9e86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b9e90:L5b9e90:{c.instructions+=9;NFSU2_TR(0x5b9e90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x108ull))));
}
B5b9e96:{NFSU2_TR(0x5b9e96);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9e97:{NFSU2_TR(0x5b9e97);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9e98:{NFSU2_TR(0x5b9e98);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b9e9f:{NFSU2_TR(0x5b9e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b9ea2:{NFSU2_TR(0x5b9ea2);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B5b9ea6:{NFSU2_TR(0x5b9ea6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5b9ea9:{NFSU2_TR(0x5b9ea9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9eaa:{NFSU2_TR(0x5b9eaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9eafull));
TAIL_STATIC(0x575620u,575);
}
B5b9eaf:L5b9eaf:{c.instructions+=5;NFSU2_TR(0x5b9eaf);
__builtin_memmove((R+12),(R+0),4);
}
B5b9eb1:{NFSU2_TR(0x5b9eb1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b9eb4:{NFSU2_TR(0x5b9eb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b9eb6:{NFSU2_TR(0x5b9eb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9eba:{NFSU2_TR(0x5b9eba);
if(r1(R+518)){TAIL_STATIC(0x5ba01bu,5ba);}
}
B5b9ec0:L5b9ec0:{c.instructions+=7;NFSU2_TR(0x5b9ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b9ec3:{NFSU2_TR(0x5b9ec3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b9ec5:{NFSU2_TR(0x5b9ec5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b9ec7:{NFSU2_TR(0x5b9ec7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9ec8:{NFSU2_TR(0x5b9ec8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9ec9:{NFSU2_TR(0x5b9ec9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9ecd:{NFSU2_TR(0x5b9ecd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5b9f35;}}
}
B5b9ecf:L5b9ecf:{c.instructions+=1;NFSU2_TR(0x5b9ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9ed2:L5b9ed2:{c.instructions+=11;NFSU2_TR(0x5b9ed2);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b9ed9:{NFSU2_TR(0x5b9ed9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b9edb:{NFSU2_TR(0x5b9edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b9ede:{NFSU2_TR(0x5b9ede);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5b9ee1:{NFSU2_TR(0x5b9ee1);
__builtin_memmove((R+24),(R+8),4);
}
B5b9ee3:{NFSU2_TR(0x5b9ee3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5b9ee6:{NFSU2_TR(0x5b9ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B5b9ee9:{NFSU2_TR(0x5b9ee9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B5b9eeb:{NFSU2_TR(0x5b9eeb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b9eed:{NFSU2_TR(0x5b9eed);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b9eef:{NFSU2_TR(0x5b9eef);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5b9f25;}}
}
B5b9ef1:L5b9ef1:{c.instructions+=4;NFSU2_TR(0x5b9ef1);
__builtin_memmove((R+28),(R+4),4);
}
B5b9ef3:{NFSU2_TR(0x5b9ef3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b9ef6:{NFSU2_TR(0x5b9ef6);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B5b9ef8:{NFSU2_TR(0x5b9ef8);
{goto L5b9f00;}
}
B5b9f00:L5b9f00:{c.instructions+=12;NFSU2_TR(0x5b9f00);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B5b9f03:{NFSU2_TR(0x5b9f03);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9f06:{NFSU2_TR(0x5b9f06);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B5b9f09:{NFSU2_TR(0x5b9f09);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5b9f0b:{NFSU2_TR(0x5b9f0b);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B5b9f0f:{NFSU2_TR(0x5b9f0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9f12:{NFSU2_TR(0x5b9f12);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b9f16:{NFSU2_TR(0x5b9f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9f19:{NFSU2_TR(0x5b9f19);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5b9f1a:{NFSU2_TR(0x5b9f1a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5b9f1d:{NFSU2_TR(0x5b9f1d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B5b9f1f:{NFSU2_TR(0x5b9f1f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9f00u);}goto L5b9f00;}}
}
B5b9f21:L5b9f21:{c.instructions+=1;NFSU2_TR(0x5b9f21);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b9f25:L5b9f25:{c.instructions+=6;NFSU2_TR(0x5b9f25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b9f28:{NFSU2_TR(0x5b9f28);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b9f2c:{NFSU2_TR(0x5b9f2c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b9f2d:{NFSU2_TR(0x5b9f2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5b9f2f:{NFSU2_TR(0x5b9f2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9f33:{NFSU2_TR(0x5b9f33);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9ed2u);}goto L5b9ed2;}}
}
B5b9f35:L5b9f35:{c.instructions+=13;NFSU2_TR(0x5b9f35);
__builtin_memmove((R+0),gp(0x7a3610),4);
}
B5b9f3a:{NFSU2_TR(0x5b9f3a);
__builtin_memmove((R+4),gp(0x7a3614),4);
}
B5b9f40:{NFSU2_TR(0x5b9f40);
__builtin_memmove((R+8),gp(0x7a3618),4);
}
B5b9f46:{NFSU2_TR(0x5b9f46);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9f4a:{NFSU2_TR(0x5b9f4a);
__builtin_memmove((R+0),gp(0x7a361c),2);
}
B5b9f50:{NFSU2_TR(0x5b9f50);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9f54:{NFSU2_TR(0x5b9f54);
__builtin_memmove((R+4),gp(0x7a361e),1);
}
B5b9f5a:{NFSU2_TR(0x5b9f5a);
u8 U[6];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b9f5f:{NFSU2_TR(0x5b9f5f);
u8 U[5];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b9f63:{NFSU2_TR(0x5b9f63);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b9f65:{NFSU2_TR(0x5b9f65);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b9f69:{NFSU2_TR(0x5b9f69);
w4(R+4,u32(0x3cull));
}
B5b9f6e:{NFSU2_TR(0x5b9f6e);
u8 U[4];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5b9f72:L5b9f72:{c.instructions+=1;NFSU2_TR(0x5b9f72);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5b9f74;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9f72u);}goto L5b9f72;}
}
B5b9f74:L5b9f74:{c.instructions+=4;NFSU2_TR(0x5b9f74);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B5b9f75:{NFSU2_TR(0x5b9f75);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b9f7c:{NFSU2_TR(0x5b9f7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b9f7e:{NFSU2_TR(0x5b9f7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b9fd7;}}
}
B5b9f80:L5b9f80:{c.instructions+=4;NFSU2_TR(0x5b9f80);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b9f84:{NFSU2_TR(0x5b9f84);
u8 U[4];
w4(U+0,u32(0x7a35f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9f89:{NFSU2_TR(0x5b9f89);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9f8a:{NFSU2_TR(0x5b9f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9f8full));
TAIL_STATIC(0x75d406u,75d);
}
B5b9f8f:L5b9f8f:{c.instructions+=3;NFSU2_TR(0x5b9f8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b9f92:{NFSU2_TR(0x5b9f92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b9f94:{NFSU2_TR(0x5b9f94);
if(r1(R+518)){{goto L5b9fd3;}}
}
B5b9f96:L5b9f96:{c.instructions+=2;NFSU2_TR(0x5b9f96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9f97:{NFSU2_TR(0x5b9f97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9f9cull));
TAIL_STATIC(0x75d359u,75d);
}
B5b9f9c:L5b9f9c:{c.instructions+=2;NFSU2_TR(0x5b9f9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b9f9f:{NFSU2_TR(0x5b9f9f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b9fa1:L5b9fa1:{c.instructions+=5;NFSU2_TR(0x5b9fa1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9fa2:{NFSU2_TR(0x5b9fa2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b9fa6:{NFSU2_TR(0x5b9fa6);
u8 U[4];
w4(U+0,u32(0x7a3600ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9fab:{NFSU2_TR(0x5b9fab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9fac:{NFSU2_TR(0x5b9fac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9fb1ull));
TAIL_STATIC(0x75c784u,75c);
}
B5b9fb1:L5b9fb1:{c.instructions+=5;NFSU2_TR(0x5b9fb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b9fb5:{NFSU2_TR(0x5b9fb5);
u8 U[4];
w4(U+0,u32(0x7a35f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9fba:{NFSU2_TR(0x5b9fba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9fbb:{NFSU2_TR(0x5b9fbb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5b9fbc:{NFSU2_TR(0x5b9fbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9fc1ull));
TAIL_STATIC(0x75d406u,75d);
}
B5b9fc1:L5b9fc1:{c.instructions+=3;NFSU2_TR(0x5b9fc1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5b9fc4:{NFSU2_TR(0x5b9fc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b9fc6:{NFSU2_TR(0x5b9fc6);
if(r1(R+518)){{goto L5b9fd3;}}
}
B5b9fc8:L5b9fc8:{c.instructions+=2;NFSU2_TR(0x5b9fc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9fc9:{NFSU2_TR(0x5b9fc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9fceull));
TAIL_STATIC(0x75d359u,75d);
}
B5b9fce:L5b9fce:{c.instructions+=2;NFSU2_TR(0x5b9fce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b9fd1:{NFSU2_TR(0x5b9fd1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9fa1u);}goto L5b9fa1;}
}
B5b9fd3:L5b9fd3:{c.instructions+=1;NFSU2_TR(0x5b9fd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b9fd7:L5b9fd7:{c.instructions+=3;NFSU2_TR(0x5b9fd7);
u8 U[4];
w4(U+0,u32(0x7a35fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9fdc:{NFSU2_TR(0x5b9fdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9fdd:{NFSU2_TR(0x5b9fdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9fe2ull));
TAIL_STATIC(0x75d406u,75d);
}
B5b9fe2:L5b9fe2:{c.instructions+=4;NFSU2_TR(0x5b9fe2);
__builtin_memmove((R+24),(R+0),4);
}
B5b9fe4:{NFSU2_TR(0x5b9fe4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b9fe7:{NFSU2_TR(0x5b9fe7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b9fe9:{NFSU2_TR(0x5b9fe9);
if(r1(R+518)){TAIL_STATIC(0x5ba019u,5ba);}
}
B5b9feb:L5b9feb:{c.instructions+=6;NFSU2_TR(0x5b9feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b9fee:{NFSU2_TR(0x5b9fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b9ff1:{NFSU2_TR(0x5b9ff1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9ff2:{NFSU2_TR(0x5b9ff2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9ff3:{NFSU2_TR(0x5b9ff3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b9ff4:{NFSU2_TR(0x5b9ff4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b9ff9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b9db0u);}goto L5b9db0;}
}
B5b9ff9:L5b9ff9:{c.instructions+=2;NFSU2_TR(0x5b9ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b9ffc:{NFSU2_TR(0x5b9ffc);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
TAIL_STATIC(0x5ba000u,5ba);
}
XIT:NFSU2_TR_EXIT(0x5b9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
