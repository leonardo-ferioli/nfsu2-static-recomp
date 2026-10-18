#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_49c(u8* __restrict R,Cpu& c);
u32 body_49d(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_49f(u8* __restrict R,Cpu& c);
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 body_4b8(u8* __restrict R,Cpu& c);
u32 body_4bc(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_55e(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4b9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4b9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4b9(u8* __restrict R,Cpu& c);
u32 page_4b9(Cpu& c){return body_4b9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4b9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4b9002:goto L4b9002;
case 0x4b9006:c.instructions+=8;goto B4b9006;
case 0x4b9009:c.instructions+=7;goto B4b9009;
case 0x4b900c:c.instructions+=6;goto B4b900c;
case 0x4b900d:c.instructions+=5;goto B4b900d;
case 0x4b900e:c.instructions+=4;goto B4b900e;
case 0x4b9013:c.instructions+=3;goto B4b9013;
case 0x4b9018:c.instructions+=2;goto B4b9018;
case 0x4b9019:c.instructions+=1;goto B4b9019;
case 0x4b901e:goto L4b901e;
case 0x4b9021:c.instructions+=3;goto B4b9021;
case 0x4b9023:c.instructions+=2;goto B4b9023;
case 0x4b9024:c.instructions+=1;goto B4b9024;
case 0x4b9030:goto L4b9030;
case 0x4b9035:c.instructions+=2;goto B4b9035;
case 0x4b9037:c.instructions+=1;goto B4b9037;
case 0x4b9039:goto L4b9039;
case 0x4b903e:c.instructions+=1;goto B4b903e;
case 0x4b9040:goto L4b9040;
case 0x4b9045:goto L4b9045;
case 0x4b904c:c.instructions+=1;goto B4b904c;
case 0x4b904e:goto L4b904e;
case 0x4b9052:c.instructions+=4;goto B4b9052;
case 0x4b9054:c.instructions+=3;goto B4b9054;
case 0x4b9059:c.instructions+=2;goto B4b9059;
case 0x4b905e:c.instructions+=1;goto B4b905e;
case 0x4b9063:goto L4b9063;
case 0x4b9064:goto L4b9064;
case 0x4b9069:goto L4b9069;
case 0x4b906b:c.instructions+=2;goto B4b906b;
case 0x4b9070:c.instructions+=1;goto B4b9070;
case 0x4b9075:goto L4b9075;
case 0x4b907a:goto L4b907a;
case 0x4b907c:c.instructions+=1;goto B4b907c;
case 0x4b9090:goto L4b9090;
case 0x4b9094:c.instructions+=3;goto B4b9094;
case 0x4b9097:c.instructions+=2;goto B4b9097;
case 0x4b9099:c.instructions+=1;goto B4b9099;
case 0x4b909b:goto L4b909b;
case 0x4b90a2:c.instructions+=9;goto B4b90a2;
case 0x4b90a5:c.instructions+=8;goto B4b90a5;
case 0x4b90a6:c.instructions+=7;goto B4b90a6;
case 0x4b90aa:c.instructions+=6;goto B4b90aa;
case 0x4b90ad:c.instructions+=5;goto B4b90ad;
case 0x4b90b0:c.instructions+=4;goto B4b90b0;
case 0x4b90b2:c.instructions+=3;goto B4b90b2;
case 0x4b90b4:c.instructions+=2;goto B4b90b4;
case 0x4b90b7:c.instructions+=1;goto B4b90b7;
case 0x4b90b9:goto L4b90b9;
case 0x4b90ba:c.instructions+=1;goto B4b90ba;
case 0x4b90bf:goto L4b90bf;
case 0x4b90c2:c.instructions+=1;goto B4b90c2;
case 0x4b90c8:goto L4b90c8;
case 0x4b90cb:c.instructions+=10;goto B4b90cb;
case 0x4b90ce:c.instructions+=9;goto B4b90ce;
case 0x4b90d3:c.instructions+=8;goto B4b90d3;
case 0x4b90d5:c.instructions+=7;goto B4b90d5;
case 0x4b90da:c.instructions+=6;goto B4b90da;
case 0x4b90df:c.instructions+=5;goto B4b90df;
case 0x4b90e4:c.instructions+=4;goto B4b90e4;
case 0x4b90e9:c.instructions+=3;goto B4b90e9;
case 0x4b90ee:c.instructions+=2;goto B4b90ee;
case 0x4b90ef:c.instructions+=1;goto B4b90ef;
case 0x4b90f4:goto L4b90f4;
case 0x4b90f7:c.instructions+=3;goto B4b90f7;
case 0x4b90f9:c.instructions+=2;goto B4b90f9;
case 0x4b90fa:c.instructions+=1;goto B4b90fa;
case 0x4b90fb:goto L4b90fb;
case 0x4b90fd:c.instructions+=2;goto B4b90fd;
case 0x4b9102:c.instructions+=1;goto B4b9102;
case 0x4b9107:goto L4b9107;
case 0x4b9110:goto L4b9110;
case 0x4b9111:c.instructions+=8;goto B4b9111;
case 0x4b9112:c.instructions+=7;goto B4b9112;
case 0x4b9116:c.instructions+=6;goto B4b9116;
case 0x4b9119:c.instructions+=5;goto B4b9119;
case 0x4b911b:c.instructions+=4;goto B4b911b;
case 0x4b911c:c.instructions+=3;goto B4b911c;
case 0x4b9121:c.instructions+=2;goto B4b9121;
case 0x4b9126:c.instructions+=1;goto B4b9126;
case 0x4b912c:goto L4b912c;
case 0x4b9131:c.instructions+=2;goto B4b9131;
case 0x4b9136:c.instructions+=1;goto B4b9136;
case 0x4b9138:goto L4b9138;
case 0x4b913d:c.instructions+=1;goto B4b913d;
case 0x4b9142:goto L4b9142;
case 0x4b9147:c.instructions+=1;goto B4b9147;
case 0x4b9149:goto L4b9149;
case 0x4b914e:c.instructions+=1;goto B4b914e;
case 0x4b9153:goto L4b9153;
case 0x4b9158:c.instructions+=1;goto B4b9158;
case 0x4b915a:goto L4b915a;
case 0x4b915f:c.instructions+=1;goto B4b915f;
case 0x4b9164:goto L4b9164;
case 0x4b9169:c.instructions+=1;goto B4b9169;
case 0x4b916b:goto L4b916b;
case 0x4b9170:c.instructions+=1;goto B4b9170;
case 0x4b9172:goto L4b9172;
case 0x4b9177:c.instructions+=1;goto B4b9177;
case 0x4b9179:goto L4b9179;
case 0x4b917e:goto L4b917e;
case 0x4b9184:c.instructions+=1;goto B4b9184;
case 0x4b9186:goto L4b9186;
case 0x4b918b:c.instructions+=1;goto B4b918b;
case 0x4b918d:goto L4b918d;
case 0x4b9191:c.instructions+=2;goto B4b9191;
case 0x4b9193:c.instructions+=1;goto B4b9193;
case 0x4b9198:goto L4b9198;
case 0x4b919e:c.instructions+=8;goto B4b919e;
case 0x4b91a1:c.instructions+=7;goto B4b91a1;
case 0x4b91a4:c.instructions+=6;goto B4b91a4;
case 0x4b91a7:c.instructions+=5;goto B4b91a7;
case 0x4b91aa:c.instructions+=4;goto B4b91aa;
case 0x4b91ab:c.instructions+=3;goto B4b91ab;
case 0x4b91ac:c.instructions+=2;goto B4b91ac;
case 0x4b91ad:c.instructions+=1;goto B4b91ad;
case 0x4b91ae:goto L4b91ae;
case 0x4b91b3:c.instructions+=1;goto B4b91b3;
case 0x4b91b5:goto L4b91b5;
case 0x4b91ba:c.instructions+=2;goto B4b91ba;
case 0x4b91c0:c.instructions+=1;goto B4b91c0;
case 0x4b91c2:goto L4b91c2;
case 0x4b91c7:c.instructions+=1;goto B4b91c7;
case 0x4b91c9:goto L4b91c9;
case 0x4b91ce:c.instructions+=1;goto B4b91ce;
case 0x4b91d0:goto L4b91d0;
case 0x4b91d5:c.instructions+=1;goto B4b91d5;
case 0x4b91d7:goto L4b91d7;
case 0x4b91dc:c.instructions+=1;goto B4b91dc;
case 0x4b91de:goto L4b91de;
case 0x4b91e3:c.instructions+=1;goto B4b91e3;
case 0x4b91e8:goto L4b91e8;
case 0x4b91ec:c.instructions+=9;goto B4b91ec;
case 0x4b91f2:c.instructions+=8;goto B4b91f2;
case 0x4b91f5:c.instructions+=7;goto B4b91f5;
case 0x4b91f6:c.instructions+=6;goto B4b91f6;
case 0x4b91f9:c.instructions+=5;goto B4b91f9;
case 0x4b91fc:c.instructions+=4;goto B4b91fc;
case 0x4b91fd:c.instructions+=3;goto B4b91fd;
case 0x4b91fe:c.instructions+=2;goto B4b91fe;
case 0x4b9201:c.instructions+=1;goto B4b9201;
case 0x4b9206:goto L4b9206;
case 0x4b9207:c.instructions+=3;goto B4b9207;
case 0x4b9208:c.instructions+=2;goto B4b9208;
case 0x4b9209:c.instructions+=1;goto B4b9209;
case 0x4b920a:goto L4b920a;
case 0x4b920c:c.instructions+=2;goto B4b920c;
case 0x4b9211:c.instructions+=1;goto B4b9211;
case 0x4b9216:goto L4b9216;
case 0x4b9217:c.instructions+=3;goto B4b9217;
case 0x4b9218:c.instructions+=2;goto B4b9218;
case 0x4b9219:c.instructions+=1;goto B4b9219;
case 0x4b9220:goto L4b9220;
case 0x4b9221:c.instructions+=4;goto B4b9221;
case 0x4b9225:c.instructions+=3;goto B4b9225;
case 0x4b9228:c.instructions+=2;goto B4b9228;
case 0x4b922a:c.instructions+=1;goto B4b922a;
case 0x4b922c:goto L4b922c;
case 0x4b922d:c.instructions+=4;goto B4b922d;
case 0x4b9231:c.instructions+=3;goto B4b9231;
case 0x4b9233:c.instructions+=2;goto B4b9233;
case 0x4b9235:c.instructions+=1;goto B4b9235;
case 0x4b9237:goto L4b9237;
case 0x4b9238:c.instructions+=1;goto B4b9238;
case 0x4b923d:goto L4b923d;
case 0x4b9240:c.instructions+=1;goto B4b9240;
case 0x4b9246:goto L4b9246;
case 0x4b9249:c.instructions+=7;goto B4b9249;
case 0x4b924c:c.instructions+=6;goto B4b924c;
case 0x4b9251:c.instructions+=5;goto B4b9251;
case 0x4b9256:c.instructions+=4;goto B4b9256;
case 0x4b925b:c.instructions+=3;goto B4b925b;
case 0x4b9260:c.instructions+=2;goto B4b9260;
case 0x4b9261:c.instructions+=1;goto B4b9261;
case 0x4b9266:goto L4b9266;
case 0x4b9268:c.instructions+=9;goto B4b9268;
case 0x4b926f:c.instructions+=8;goto B4b926f;
case 0x4b9272:c.instructions+=7;goto B4b9272;
case 0x4b9275:c.instructions+=6;goto B4b9275;
case 0x4b9278:c.instructions+=5;goto B4b9278;
case 0x4b927b:c.instructions+=4;goto B4b927b;
case 0x4b927e:c.instructions+=3;goto B4b927e;
case 0x4b927f:c.instructions+=2;goto B4b927f;
case 0x4b9280:c.instructions+=1;goto B4b9280;
case 0x4b9281:goto L4b9281;
case 0x4b9283:c.instructions+=2;goto B4b9283;
case 0x4b9288:c.instructions+=1;goto B4b9288;
case 0x4b928d:goto L4b928d;
case 0x4b928e:c.instructions+=1;goto B4b928e;
case 0x4b9290:goto L4b9290;
case 0x4b9292:c.instructions+=11;goto B4b9292;
case 0x4b9297:c.instructions+=10;goto B4b9297;
case 0x4b929d:c.instructions+=9;goto B4b929d;
case 0x4b929e:c.instructions+=8;goto B4b929e;
case 0x4b92a5:c.instructions+=7;goto B4b92a5;
case 0x4b92a6:c.instructions+=6;goto B4b92a6;
case 0x4b92aa:c.instructions+=5;goto B4b92aa;
case 0x4b92ab:c.instructions+=4;goto B4b92ab;
case 0x4b92ad:c.instructions+=3;goto B4b92ad;
case 0x4b92ae:c.instructions+=2;goto B4b92ae;
case 0x4b92b2:c.instructions+=1;goto B4b92b2;
case 0x4b92b7:goto L4b92b7;
case 0x4b92b9:c.instructions+=25;goto B4b92b9;
case 0x4b92bf:c.instructions+=24;goto B4b92bf;
case 0x4b92c2:c.instructions+=23;goto B4b92c2;
case 0x4b92c5:c.instructions+=22;goto B4b92c5;
case 0x4b92c9:c.instructions+=21;goto B4b92c9;
case 0x4b92cc:c.instructions+=20;goto B4b92cc;
case 0x4b92cf:c.instructions+=19;goto B4b92cf;
case 0x4b92d2:c.instructions+=18;goto B4b92d2;
case 0x4b92d5:c.instructions+=17;goto B4b92d5;
case 0x4b92d8:c.instructions+=16;goto B4b92d8;
case 0x4b92db:c.instructions+=15;goto B4b92db;
case 0x4b92de:c.instructions+=14;goto B4b92de;
case 0x4b92e1:c.instructions+=13;goto B4b92e1;
case 0x4b92e4:c.instructions+=12;goto B4b92e4;
case 0x4b92e7:c.instructions+=11;goto B4b92e7;
case 0x4b92e8:c.instructions+=10;goto B4b92e8;
case 0x4b92ed:c.instructions+=9;goto B4b92ed;
case 0x4b92ef:c.instructions+=8;goto B4b92ef;
case 0x4b92f0:c.instructions+=7;goto B4b92f0;
case 0x4b92f3:c.instructions+=6;goto B4b92f3;
case 0x4b92f6:c.instructions+=5;goto B4b92f6;
case 0x4b92fb:c.instructions+=4;goto B4b92fb;
case 0x4b92ff:c.instructions+=3;goto B4b92ff;
case 0x4b9304:c.instructions+=2;goto B4b9304;
case 0x4b930a:c.instructions+=1;goto B4b930a;
case 0x4b930f:goto L4b930f;
case 0x4b9313:c.instructions+=6;goto B4b9313;
case 0x4b9316:c.instructions+=5;goto B4b9316;
case 0x4b9318:c.instructions+=4;goto B4b9318;
case 0x4b9319:c.instructions+=3;goto B4b9319;
case 0x4b9320:c.instructions+=2;goto B4b9320;
case 0x4b9323:c.instructions+=1;goto B4b9323;
case 0x4b9330:goto L4b9330;
case 0x4b9332:c.instructions+=17;goto B4b9332;
case 0x4b9337:c.instructions+=16;goto B4b9337;
case 0x4b933d:c.instructions+=15;goto B4b933d;
case 0x4b933e:c.instructions+=14;goto B4b933e;
case 0x4b9345:c.instructions+=13;goto B4b9345;
case 0x4b9346:c.instructions+=12;goto B4b9346;
case 0x4b9347:c.instructions+=11;goto B4b9347;
case 0x4b9348:c.instructions+=10;goto B4b9348;
case 0x4b934a:c.instructions+=9;goto B4b934a;
case 0x4b934e:c.instructions+=8;goto B4b934e;
case 0x4b9354:c.instructions+=7;goto B4b9354;
case 0x4b9356:c.instructions+=6;goto B4b9356;
case 0x4b935c:c.instructions+=5;goto B4b935c;
case 0x4b9362:c.instructions+=4;goto B4b9362;
case 0x4b9365:c.instructions+=3;goto B4b9365;
case 0x4b9367:c.instructions+=2;goto B4b9367;
case 0x4b936b:c.instructions+=1;goto B4b936b;
case 0x4b936d:goto L4b936d;
case 0x4b936e:c.instructions+=1;goto B4b936e;
case 0x4b9373:goto L4b9373;
case 0x4b9376:c.instructions+=1;goto B4b9376;
case 0x4b9379:goto L4b9379;
case 0x4b937b:c.instructions+=2;goto B4b937b;
case 0x4b9383:c.instructions+=1;goto B4b9383;
case 0x4b9388:goto L4b9388;
case 0x4b938c:c.instructions+=5;goto B4b938c;
case 0x4b938d:c.instructions+=4;goto B4b938d;
case 0x4b938e:c.instructions+=3;goto B4b938e;
case 0x4b9395:c.instructions+=2;goto B4b9395;
case 0x4b9398:c.instructions+=1;goto B4b9398;
case 0x4b93a0:goto L4b93a0;
case 0x4b93a5:c.instructions+=2;goto B4b93a5;
case 0x4b93ac:c.instructions+=1;goto B4b93ac;
case 0x4b93b1:goto L4b93b1;
case 0x4b93b3:c.instructions+=1;goto B4b93b3;
case 0x4b93b5:goto L4b93b5;
case 0x4b93b6:c.instructions+=3;goto B4b93b6;
case 0x4b93b8:c.instructions+=2;goto B4b93b8;
case 0x4b93bd:c.instructions+=1;goto B4b93bd;
case 0x4b93c2:goto L4b93c2;
case 0x4b93c7:c.instructions+=5;goto B4b93c7;
case 0x4b93ca:c.instructions+=4;goto B4b93ca;
case 0x4b93d0:c.instructions+=3;goto B4b93d0;
case 0x4b93d3:c.instructions+=2;goto B4b93d3;
case 0x4b93d5:c.instructions+=1;goto B4b93d5;
case 0x4b93d7:goto L4b93d7;
case 0x4b93d8:goto L4b93d8;
case 0x4b93db:c.instructions+=3;goto B4b93db;
case 0x4b93de:c.instructions+=2;goto B4b93de;
case 0x4b93df:c.instructions+=1;goto B4b93df;
case 0x4b93e4:goto L4b93e4;
case 0x4b93e7:c.instructions+=2;goto B4b93e7;
case 0x4b93e9:c.instructions+=1;goto B4b93e9;
case 0x4b93eb:goto L4b93eb;
case 0x4b93ee:c.instructions+=2;goto B4b93ee;
case 0x4b93ef:c.instructions+=1;goto B4b93ef;
case 0x4b93f4:goto L4b93f4;
case 0x4b93f7:goto L4b93f7;
case 0x4b93f9:c.instructions+=2;goto B4b93f9;
case 0x4b93fb:c.instructions+=1;goto B4b93fb;
case 0x4b93fd:goto L4b93fd;
case 0x4b93fe:goto L4b93fe;
case 0x4b9400:c.instructions+=4;goto B4b9400;
case 0x4b9405:c.instructions+=3;goto B4b9405;
case 0x4b940a:c.instructions+=2;goto B4b940a;
case 0x4b940f:c.instructions+=1;goto B4b940f;
case 0x4b9414:goto L4b9414;
case 0x4b9417:c.instructions+=2;goto B4b9417;
case 0x4b9418:c.instructions+=1;goto B4b9418;
case 0x4b9419:goto L4b9419;
case 0x4b941e:c.instructions+=2;goto B4b941e;
case 0x4b9423:c.instructions+=1;goto B4b9423;
case 0x4b9428:goto L4b9428;
case 0x4b942b:c.instructions+=1;goto B4b942b;
case 0x4b9430:goto L4b9430;
case 0x4b9432:c.instructions+=12;goto B4b9432;
case 0x4b9437:c.instructions+=11;goto B4b9437;
case 0x4b943d:c.instructions+=10;goto B4b943d;
case 0x4b943e:c.instructions+=9;goto B4b943e;
case 0x4b9445:c.instructions+=8;goto B4b9445;
case 0x4b9446:c.instructions+=7;goto B4b9446;
case 0x4b9447:c.instructions+=6;goto B4b9447;
case 0x4b9448:c.instructions+=5;goto B4b9448;
case 0x4b944c:c.instructions+=4;goto B4b944c;
case 0x4b944e:c.instructions+=3;goto B4b944e;
case 0x4b944f:c.instructions+=2;goto B4b944f;
case 0x4b9453:c.instructions+=1;goto B4b9453;
case 0x4b9458:goto L4b9458;
case 0x4b945e:c.instructions+=10;goto B4b945e;
case 0x4b9461:c.instructions+=9;goto B4b9461;
case 0x4b9464:c.instructions+=8;goto B4b9464;
case 0x4b946a:c.instructions+=7;goto B4b946a;
case 0x4b9470:c.instructions+=6;goto B4b9470;
case 0x4b9475:c.instructions+=5;goto B4b9475;
case 0x4b9476:c.instructions+=4;goto B4b9476;
case 0x4b9477:c.instructions+=3;goto B4b9477;
case 0x4b9478:c.instructions+=2;goto B4b9478;
case 0x4b9480:c.instructions+=1;goto B4b9480;
case 0x4b9485:goto L4b9485;
case 0x4b9487:c.instructions+=4;goto B4b9487;
case 0x4b948c:c.instructions+=3;goto B4b948c;
case 0x4b948f:c.instructions+=2;goto B4b948f;
case 0x4b9494:c.instructions+=1;goto B4b9494;
case 0x4b9496:goto L4b9496;
case 0x4b9499:c.instructions+=3;goto B4b9499;
case 0x4b949e:c.instructions+=2;goto B4b949e;
case 0x4b94a3:c.instructions+=1;goto B4b94a3;
case 0x4b94a8:goto L4b94a8;
case 0x4b94a9:c.instructions+=2;goto B4b94a9;
case 0x4b94aa:c.instructions+=1;goto B4b94aa;
case 0x4b94af:goto L4b94af;
case 0x4b94b2:c.instructions+=2;goto B4b94b2;
case 0x4b94b3:c.instructions+=1;goto B4b94b3;
case 0x4b94b8:goto L4b94b8;
case 0x4b94bb:c.instructions+=4;goto B4b94bb;
case 0x4b94bd:c.instructions+=3;goto B4b94bd;
case 0x4b94bf:c.instructions+=2;goto B4b94bf;
case 0x4b94c1:c.instructions+=1;goto B4b94c1;
case 0x4b94c6:goto L4b94c6;
case 0x4b94c8:goto L4b94c8;
case 0x4b94ce:c.instructions+=2;goto B4b94ce;
case 0x4b94cf:c.instructions+=1;goto B4b94cf;
case 0x4b94d1:goto L4b94d1;
case 0x4b94d7:c.instructions+=1;goto B4b94d7;
case 0x4b94d9:goto L4b94d9;
case 0x4b94db:c.instructions+=1;goto B4b94db;
case 0x4b94dd:goto L4b94dd;
case 0x4b94df:goto L4b94df;
case 0x4b94e4:c.instructions+=2;goto B4b94e4;
case 0x4b94e8:c.instructions+=1;goto B4b94e8;
case 0x4b94ed:goto L4b94ed;
case 0x4b94ef:c.instructions+=1;goto B4b94ef;
case 0x4b94f1:goto L4b94f1;
case 0x4b94f6:c.instructions+=2;goto B4b94f6;
case 0x4b94f8:c.instructions+=1;goto B4b94f8;
case 0x4b94fa:goto L4b94fa;
case 0x4b94fc:c.instructions+=5;goto B4b94fc;
case 0x4b9501:c.instructions+=4;goto B4b9501;
case 0x4b9503:c.instructions+=3;goto B4b9503;
case 0x4b9509:c.instructions+=2;goto B4b9509;
case 0x4b950f:c.instructions+=1;goto B4b950f;
case 0x4b9511:goto L4b9511;
case 0x4b9514:c.instructions+=3;goto B4b9514;
case 0x4b9515:c.instructions+=2;goto B4b9515;
case 0x4b951a:c.instructions+=1;goto B4b951a;
case 0x4b951f:goto L4b951f;
case 0x4b9520:c.instructions+=2;goto B4b9520;
case 0x4b9521:c.instructions+=1;goto B4b9521;
case 0x4b9526:goto L4b9526;
case 0x4b9529:c.instructions+=2;goto B4b9529;
case 0x4b952a:c.instructions+=1;goto B4b952a;
case 0x4b952f:goto L4b952f;
case 0x4b9533:c.instructions+=5;goto B4b9533;
case 0x4b9536:c.instructions+=4;goto B4b9536;
case 0x4b9538:c.instructions+=3;goto B4b9538;
case 0x4b9539:c.instructions+=2;goto B4b9539;
case 0x4b953b:c.instructions+=1;goto B4b953b;
case 0x4b9540:goto L4b9540;
case 0x4b9541:goto L4b9541;
case 0x4b9548:c.instructions+=1;goto B4b9548;
case 0x4b954a:goto L4b954a;
case 0x4b954c:c.instructions+=1;goto B4b954c;
case 0x4b9551:goto L4b9551;
case 0x4b9554:c.instructions+=3;goto B4b9554;
case 0x4b9556:c.instructions+=2;goto B4b9556;
case 0x4b955b:c.instructions+=1;goto B4b955b;
case 0x4b9560:goto L4b9560;
case 0x4b956a:c.instructions+=1;goto B4b956a;
case 0x4b956c:goto L4b956c;
case 0x4b9571:c.instructions+=2;goto B4b9571;
case 0x4b9573:c.instructions+=1;goto B4b9573;
case 0x4b9575:goto L4b9575;
case 0x4b957a:c.instructions+=1;goto B4b957a;
case 0x4b957f:goto L4b957f;
case 0x4b9582:c.instructions+=9;goto B4b9582;
case 0x4b9586:c.instructions+=8;goto B4b9586;
case 0x4b958a:c.instructions+=7;goto B4b958a;
case 0x4b958e:c.instructions+=6;goto B4b958e;
case 0x4b958f:c.instructions+=5;goto B4b958f;
case 0x4b9591:c.instructions+=4;goto B4b9591;
case 0x4b9592:c.instructions+=3;goto B4b9592;
case 0x4b9599:c.instructions+=2;goto B4b9599;
case 0x4b959c:c.instructions+=1;goto B4b959c;
case 0x4b95a0:goto L4b95a0;
case 0x4b95a1:c.instructions+=2;goto B4b95a1;
case 0x4b95a3:c.instructions+=1;goto B4b95a3;
case 0x4b95a8:goto L4b95a8;
case 0x4b95ad:c.instructions+=1;goto B4b95ad;
case 0x4b95af:goto L4b95af;
case 0x4b95b0:c.instructions+=1;goto B4b95b0;
case 0x4b95b5:goto L4b95b5;
case 0x4b95b8:goto L4b95b8;
case 0x4b95ba:c.instructions+=2;goto B4b95ba;
case 0x4b95bb:c.instructions+=1;goto B4b95bb;
case 0x4b95c0:goto L4b95c0;
case 0x4b95c1:c.instructions+=8;goto B4b95c1;
case 0x4b95c3:c.instructions+=7;goto B4b95c3;
case 0x4b95c6:c.instructions+=6;goto B4b95c6;
case 0x4b95ca:c.instructions+=5;goto B4b95ca;
case 0x4b95ce:c.instructions+=4;goto B4b95ce;
case 0x4b95d2:c.instructions+=3;goto B4b95d2;
case 0x4b95d6:c.instructions+=2;goto B4b95d6;
case 0x4b95d9:c.instructions+=1;goto B4b95d9;
case 0x4b95db:goto L4b95db;
case 0x4b95de:c.instructions+=1;goto B4b95de;
case 0x4b95e3:goto L4b95e3;
case 0x4b95e6:c.instructions+=2;goto B4b95e6;
case 0x4b95e7:c.instructions+=1;goto B4b95e7;
case 0x4b95ec:goto L4b95ec;
case 0x4b95ef:c.instructions+=2;goto B4b95ef;
case 0x4b95f0:c.instructions+=1;goto B4b95f0;
case 0x4b95f3:goto L4b95f3;
case 0x4b95f6:c.instructions+=1;goto B4b95f6;
case 0x4b95f8:goto L4b95f8;
case 0x4b95fb:c.instructions+=1;goto B4b95fb;
case 0x4b9600:goto L4b9600;
case 0x4b9602:c.instructions+=2;goto B4b9602;
case 0x4b9607:c.instructions+=1;goto B4b9607;
case 0x4b960c:goto L4b960c;
case 0x4b960f:c.instructions+=3;goto B4b960f;
case 0x4b9612:c.instructions+=2;goto B4b9612;
case 0x4b9613:c.instructions+=1;goto B4b9613;
case 0x4b9618:goto L4b9618;
case 0x4b961b:c.instructions+=2;goto B4b961b;
case 0x4b961c:c.instructions+=1;goto B4b961c;
case 0x4b961f:goto L4b961f;
case 0x4b9622:c.instructions+=1;goto B4b9622;
case 0x4b9624:goto L4b9624;
case 0x4b9626:c.instructions+=1;goto B4b9626;
case 0x4b9628:goto L4b9628;
case 0x4b962d:goto L4b962d;
case 0x4b9637:goto L4b9637;
case 0x4b963a:c.instructions+=2;goto B4b963a;
case 0x4b963b:c.instructions+=1;goto B4b963b;
case 0x4b9640:goto L4b9640;
case 0x4b9643:c.instructions+=2;goto B4b9643;
case 0x4b9644:c.instructions+=1;goto B4b9644;
case 0x4b9650:goto L4b9650;
case 0x4b9651:c.instructions+=6;goto B4b9651;
case 0x4b9652:c.instructions+=5;goto B4b9652;
case 0x4b9658:c.instructions+=4;goto B4b9658;
case 0x4b9659:c.instructions+=3;goto B4b9659;
case 0x4b965f:c.instructions+=2;goto B4b965f;
case 0x4b9661:c.instructions+=1;goto B4b9661;
case 0x4b9663:goto L4b9663;
case 0x4b9667:goto L4b9667;
case 0x4b966a:c.instructions+=3;goto B4b966a;
case 0x4b966b:c.instructions+=2;goto B4b966b;
case 0x4b966c:c.instructions+=1;goto B4b966c;
case 0x4b9671:goto L4b9671;
case 0x4b9674:c.instructions+=2;goto B4b9674;
case 0x4b9676:c.instructions+=1;goto B4b9676;
case 0x4b9678:goto L4b9678;
case 0x4b967a:c.instructions+=2;goto B4b967a;
case 0x4b967c:c.instructions+=1;goto B4b967c;
case 0x4b967e:goto L4b967e;
case 0x4b967f:c.instructions+=4;goto B4b967f;
case 0x4b9680:c.instructions+=3;goto B4b9680;
case 0x4b9682:c.instructions+=2;goto B4b9682;
case 0x4b9683:c.instructions+=1;goto B4b9683;
case 0x4b9686:goto L4b9686;
case 0x4b9687:c.instructions+=4;goto B4b9687;
case 0x4b9689:c.instructions+=3;goto B4b9689;
case 0x4b968a:c.instructions+=2;goto B4b968a;
case 0x4b968b:c.instructions+=1;goto B4b968b;
case 0x4b9690:goto L4b9690;
case 0x4b9691:c.instructions+=6;goto B4b9691;
case 0x4b9692:c.instructions+=5;goto B4b9692;
case 0x4b9694:c.instructions+=4;goto B4b9694;
case 0x4b969a:c.instructions+=3;goto B4b969a;
case 0x4b969d:c.instructions+=2;goto B4b969d;
case 0x4b969e:c.instructions+=1;goto B4b969e;
case 0x4b96a1:goto L4b96a1;
case 0x4b96a3:c.instructions+=3;goto B4b96a3;
case 0x4b96a4:c.instructions+=2;goto B4b96a4;
case 0x4b96a6:c.instructions+=1;goto B4b96a6;
case 0x4b96ab:goto L4b96ab;
case 0x4b96ad:c.instructions+=4;goto B4b96ad;
case 0x4b96ae:c.instructions+=3;goto B4b96ae;
case 0x4b96af:c.instructions+=2;goto B4b96af;
case 0x4b96b5:c.instructions+=1;goto B4b96b5;
case 0x4b96ba:goto L4b96ba;
case 0x4b96c0:c.instructions+=3;goto B4b96c0;
case 0x4b96c1:c.instructions+=2;goto B4b96c1;
case 0x4b96c2:c.instructions+=1;goto B4b96c2;
case 0x4b96c7:goto L4b96c7;
case 0x4b96ca:c.instructions+=5;goto B4b96ca;
case 0x4b96cc:c.instructions+=4;goto B4b96cc;
case 0x4b96cd:c.instructions+=3;goto B4b96cd;
case 0x4b96ce:c.instructions+=2;goto B4b96ce;
case 0x4b96cf:c.instructions+=1;goto B4b96cf;
case 0x4b96d1:goto L4b96d1;
case 0x4b96d7:c.instructions+=2;goto B4b96d7;
case 0x4b96d9:c.instructions+=1;goto B4b96d9;
case 0x4b96db:goto L4b96db;
case 0x4b96dd:c.instructions+=2;goto B4b96dd;
case 0x4b96df:c.instructions+=1;goto B4b96df;
case 0x4b96e1:goto L4b96e1;
case 0x4b96eb:goto L4b96eb;
case 0x4b96f0:goto L4b96f0;
case 0x4b96f1:c.instructions+=6;goto B4b96f1;
case 0x4b96f2:c.instructions+=5;goto B4b96f2;
case 0x4b96f4:c.instructions+=4;goto B4b96f4;
case 0x4b96fa:c.instructions+=3;goto B4b96fa;
case 0x4b96fd:c.instructions+=2;goto B4b96fd;
case 0x4b96fe:c.instructions+=1;goto B4b96fe;
case 0x4b9701:goto L4b9701;
case 0x4b9703:c.instructions+=3;goto B4b9703;
case 0x4b9704:c.instructions+=2;goto B4b9704;
case 0x4b9706:c.instructions+=1;goto B4b9706;
case 0x4b970b:goto L4b970b;
case 0x4b970d:c.instructions+=4;goto B4b970d;
case 0x4b970e:c.instructions+=3;goto B4b970e;
case 0x4b970f:c.instructions+=2;goto B4b970f;
case 0x4b9715:c.instructions+=1;goto B4b9715;
case 0x4b971a:goto L4b971a;
case 0x4b9720:c.instructions+=3;goto B4b9720;
case 0x4b9721:c.instructions+=2;goto B4b9721;
case 0x4b9722:c.instructions+=1;goto B4b9722;
case 0x4b9727:goto L4b9727;
case 0x4b972a:c.instructions+=5;goto B4b972a;
case 0x4b972c:c.instructions+=4;goto B4b972c;
case 0x4b972d:c.instructions+=3;goto B4b972d;
case 0x4b972e:c.instructions+=2;goto B4b972e;
case 0x4b972f:c.instructions+=1;goto B4b972f;
case 0x4b9731:goto L4b9731;
case 0x4b9737:c.instructions+=2;goto B4b9737;
case 0x4b9739:c.instructions+=1;goto B4b9739;
case 0x4b973b:goto L4b973b;
case 0x4b973d:c.instructions+=2;goto B4b973d;
case 0x4b973f:c.instructions+=1;goto B4b973f;
case 0x4b9741:goto L4b9741;
case 0x4b974b:goto L4b974b;
case 0x4b9750:goto L4b9750;
case 0x4b9752:c.instructions+=7;goto B4b9752;
case 0x4b9757:c.instructions+=6;goto B4b9757;
case 0x4b975d:c.instructions+=5;goto B4b975d;
case 0x4b975e:c.instructions+=4;goto B4b975e;
case 0x4b9765:c.instructions+=3;goto B4b9765;
case 0x4b9766:c.instructions+=2;goto B4b9766;
case 0x4b9768:c.instructions+=1;goto B4b9768;
case 0x4b976d:goto L4b976d;
case 0x4b9770:c.instructions+=4;goto B4b9770;
case 0x4b9774:c.instructions+=3;goto B4b9774;
case 0x4b9776:c.instructions+=2;goto B4b9776;
case 0x4b977e:c.instructions+=1;goto B4b977e;
case 0x4b9780:goto L4b9780;
case 0x4b9784:c.instructions+=3;goto B4b9784;
case 0x4b9785:c.instructions+=2;goto B4b9785;
case 0x4b9787:c.instructions+=1;goto B4b9787;
case 0x4b978c:goto L4b978c;
case 0x4b9790:c.instructions+=3;goto B4b9790;
case 0x4b9797:c.instructions+=2;goto B4b9797;
case 0x4b979a:c.instructions+=1;goto B4b979a;
case 0x4b979b:goto L4b979b;
case 0x4b979f:c.instructions+=4;goto B4b979f;
case 0x4b97a1:c.instructions+=3;goto B4b97a1;
case 0x4b97a8:c.instructions+=2;goto B4b97a8;
case 0x4b97ab:c.instructions+=1;goto B4b97ab;
case 0x4b97b0:goto L4b97b0;
case 0x4b97b1:c.instructions+=2;goto B4b97b1;
case 0x4b97b3:c.instructions+=1;goto B4b97b3;
case 0x4b97b8:goto L4b97b8;
case 0x4b97bd:c.instructions+=1;goto B4b97bd;
case 0x4b97bf:goto L4b97bf;
case 0x4b97c0:c.instructions+=1;goto B4b97c0;
case 0x4b97c5:goto L4b97c5;
case 0x4b97c8:goto L4b97c8;
case 0x4b97ca:c.instructions+=2;goto B4b97ca;
case 0x4b97cb:c.instructions+=1;goto B4b97cb;
case 0x4b97d0:goto L4b97d0;
case 0x4b97d4:c.instructions+=5;goto B4b97d4;
case 0x4b97d9:c.instructions+=4;goto B4b97d9;
case 0x4b97da:c.instructions+=3;goto B4b97da;
case 0x4b97db:c.instructions+=2;goto B4b97db;
case 0x4b97dd:c.instructions+=1;goto B4b97dd;
case 0x4b97e3:goto L4b97e3;
case 0x4b97e8:c.instructions+=1;goto B4b97e8;
case 0x4b97ee:goto L4b97ee;
case 0x4b97f3:c.instructions+=1;goto B4b97f3;
case 0x4b97f9:goto L4b97f9;
case 0x4b97fe:goto L4b97fe;
case 0x4b9801:c.instructions+=1;goto B4b9801;
case 0x4b9807:goto L4b9807;
case 0x4b980a:c.instructions+=2;goto B4b980a;
case 0x4b980c:c.instructions+=1;goto B4b980c;
case 0x4b9812:goto L4b9812;
case 0x4b9817:c.instructions+=2;goto B4b9817;
case 0x4b981c:c.instructions+=1;goto B4b981c;
case 0x4b981e:goto L4b981e;
case 0x4b9820:goto L4b9820;
case 0x4b9825:c.instructions+=1;goto B4b9825;
case 0x4b9827:goto L4b9827;
case 0x4b982c:c.instructions+=1;goto B4b982c;
case 0x4b982e:goto L4b982e;
case 0x4b9833:c.instructions+=1;goto B4b9833;
case 0x4b9835:goto L4b9835;
case 0x4b983a:c.instructions+=1;goto B4b983a;
case 0x4b983c:goto L4b983c;
case 0x4b9841:c.instructions+=1;goto B4b9841;
case 0x4b9843:goto L4b9843;
case 0x4b9848:c.instructions+=1;goto B4b9848;
case 0x4b984a:goto L4b984a;
case 0x4b984f:goto L4b984f;
case 0x4b9852:c.instructions+=1;goto B4b9852;
case 0x4b9857:goto L4b9857;
case 0x4b9858:c.instructions+=3;goto B4b9858;
case 0x4b985d:c.instructions+=2;goto B4b985d;
case 0x4b9862:c.instructions+=1;goto B4b9862;
case 0x4b9864:goto L4b9864;
case 0x4b9869:c.instructions+=1;goto B4b9869;
case 0x4b986b:goto L4b986b;
case 0x4b9870:c.instructions+=1;goto B4b9870;
case 0x4b9872:goto L4b9872;
case 0x4b9877:c.instructions+=1;goto B4b9877;
case 0x4b9879:goto L4b9879;
case 0x4b987e:goto L4b987e;
case 0x4b9881:c.instructions+=1;goto B4b9881;
case 0x4b9886:goto L4b9886;
case 0x4b9887:c.instructions+=6;goto B4b9887;
case 0x4b988c:c.instructions+=5;goto B4b988c;
case 0x4b9891:c.instructions+=4;goto B4b9891;
case 0x4b9896:c.instructions+=3;goto B4b9896;
case 0x4b989b:c.instructions+=2;goto B4b989b;
case 0x4b989c:c.instructions+=1;goto B4b989c;
case 0x4b98a1:goto L4b98a1;
case 0x4b98a4:c.instructions+=4;goto B4b98a4;
case 0x4b98a5:c.instructions+=3;goto B4b98a5;
case 0x4b98a8:c.instructions+=2;goto B4b98a8;
case 0x4b98a9:c.instructions+=1;goto B4b98a9;
case 0x4b98ac:goto L4b98ac;
case 0x4b98b1:c.instructions+=1;goto B4b98b1;
case 0x4b98b3:goto L4b98b3;
case 0x4b98b6:c.instructions+=1;goto B4b98b6;
case 0x4b98b8:goto L4b98b8;
case 0x4b98bb:c.instructions+=2;goto B4b98bb;
case 0x4b98bd:c.instructions+=1;goto B4b98bd;
case 0x4b98bf:goto L4b98bf;
case 0x4b98c2:c.instructions+=2;goto B4b98c2;
case 0x4b98c7:c.instructions+=1;goto B4b98c7;
case 0x4b98cc:goto L4b98cc;
case 0x4b98cd:c.instructions+=2;goto B4b98cd;
case 0x4b98d2:c.instructions+=1;goto B4b98d2;
case 0x4b98d7:goto L4b98d7;
case 0x4b98dc:c.instructions+=3;goto B4b98dc;
case 0x4b98e1:c.instructions+=2;goto B4b98e1;
case 0x4b98e2:c.instructions+=1;goto B4b98e2;
case 0x4b98e7:goto L4b98e7;
case 0x4b98ea:c.instructions+=4;goto B4b98ea;
case 0x4b98eb:c.instructions+=3;goto B4b98eb;
case 0x4b98ee:c.instructions+=2;goto B4b98ee;
case 0x4b98ef:c.instructions+=1;goto B4b98ef;
case 0x4b98f2:goto L4b98f2;
case 0x4b98f4:c.instructions+=1;goto B4b98f4;
case 0x4b98f6:goto L4b98f6;
case 0x4b98fc:c.instructions+=1;goto B4b98fc;
case 0x4b9901:goto L4b9901;
case 0x4b9902:c.instructions+=2;goto B4b9902;
case 0x4b9903:c.instructions+=1;goto B4b9903;
case 0x4b9906:goto L4b9906;
case 0x4b9909:c.instructions+=3;goto B4b9909;
case 0x4b990a:c.instructions+=2;goto B4b990a;
case 0x4b990e:c.instructions+=1;goto B4b990e;
case 0x4b9913:goto L4b9913;
case 0x4b9916:goto L4b9916;
case 0x4b9917:c.instructions+=2;goto B4b9917;
case 0x4b9918:c.instructions+=1;goto B4b9918;
case 0x4b9920:goto L4b9920;
case 0x4b9923:c.instructions+=6;goto B4b9923;
case 0x4b9924:c.instructions+=5;goto B4b9924;
case 0x4b9926:c.instructions+=4;goto B4b9926;
case 0x4b9929:c.instructions+=3;goto B4b9929;
case 0x4b992e:c.instructions+=2;goto B4b992e;
case 0x4b992f:c.instructions+=1;goto B4b992f;
case 0x4b9934:goto L4b9934;
case 0x4b9939:c.instructions+=5;goto B4b9939;
case 0x4b993f:c.instructions+=4;goto B4b993f;
case 0x4b9944:c.instructions+=3;goto B4b9944;
case 0x4b9947:c.instructions+=2;goto B4b9947;
case 0x4b9949:c.instructions+=1;goto B4b9949;
case 0x4b994b:goto L4b994b;
case 0x4b994e:c.instructions+=3;goto B4b994e;
case 0x4b9953:c.instructions+=2;goto B4b9953;
case 0x4b9954:c.instructions+=1;goto B4b9954;
case 0x4b9959:goto L4b9959;
case 0x4b995c:c.instructions+=3;goto B4b995c;
case 0x4b995d:c.instructions+=2;goto B4b995d;
case 0x4b9960:c.instructions+=1;goto B4b9960;
case 0x4b9961:goto L4b9961;
case 0x4b9962:c.instructions+=1;goto B4b9962;
case 0x4b9967:goto L4b9967;
case 0x4b996a:c.instructions+=2;goto B4b996a;
case 0x4b996d:c.instructions+=1;goto B4b996d;
case 0x4b996f:goto L4b996f;
case 0x4b9975:c.instructions+=6;goto B4b9975;
case 0x4b9977:c.instructions+=5;goto B4b9977;
case 0x4b997d:c.instructions+=4;goto B4b997d;
case 0x4b997e:c.instructions+=3;goto B4b997e;
case 0x4b9982:c.instructions+=2;goto B4b9982;
case 0x4b9983:c.instructions+=1;goto B4b9983;
case 0x4b9988:goto L4b9988;
case 0x4b998b:c.instructions+=6;goto B4b998b;
case 0x4b998f:c.instructions+=5;goto B4b998f;
case 0x4b9990:c.instructions+=4;goto B4b9990;
case 0x4b9995:c.instructions+=3;goto B4b9995;
case 0x4b9996:c.instructions+=2;goto B4b9996;
case 0x4b999b:c.instructions+=1;goto B4b999b;
case 0x4b99a0:goto L4b99a0;
case 0x4b99a3:c.instructions+=3;goto B4b99a3;
case 0x4b99a4:c.instructions+=2;goto B4b99a4;
case 0x4b99a7:c.instructions+=1;goto B4b99a7;
case 0x4b99a8:goto L4b99a8;
case 0x4b99ad:c.instructions+=6;goto B4b99ad;
case 0x4b99b0:c.instructions+=5;goto B4b99b0;
case 0x4b99b5:c.instructions+=4;goto B4b99b5;
case 0x4b99b6:c.instructions+=3;goto B4b99b6;
case 0x4b99bb:c.instructions+=2;goto B4b99bb;
case 0x4b99bc:c.instructions+=1;goto B4b99bc;
case 0x4b99c1:goto L4b99c1;
case 0x4b99c4:c.instructions+=3;goto B4b99c4;
case 0x4b99c5:c.instructions+=2;goto B4b99c5;
case 0x4b99c8:c.instructions+=1;goto B4b99c8;
case 0x4b99d0:goto L4b99d0;
case 0x4b99d1:c.instructions+=5;goto B4b99d1;
case 0x4b99d3:c.instructions+=4;goto B4b99d3;
case 0x4b99d6:c.instructions+=3;goto B4b99d6;
case 0x4b99db:c.instructions+=2;goto B4b99db;
case 0x4b99dc:c.instructions+=1;goto B4b99dc;
case 0x4b99e1:goto L4b99e1;
case 0x4b99e7:c.instructions+=3;goto B4b99e7;
case 0x4b99ea:c.instructions+=2;goto B4b99ea;
case 0x4b99ec:c.instructions+=1;goto B4b99ec;
case 0x4b99ee:goto L4b99ee;
case 0x4b99f1:c.instructions+=1;goto B4b99f1;
case 0x4b99f3:goto L4b99f3;
case 0x4b99f6:c.instructions+=3;goto B4b99f6;
case 0x4b99fb:c.instructions+=2;goto B4b99fb;
case 0x4b99fc:c.instructions+=1;goto B4b99fc;
case 0x4b9a01:goto L4b9a01;
case 0x4b9a04:c.instructions+=2;goto B4b9a04;
case 0x4b9a05:c.instructions+=1;goto B4b9a05;
case 0x4b9a06:goto L4b9a06;
case 0x4b9a09:c.instructions+=4;goto B4b9a09;
case 0x4b9a0a:c.instructions+=3;goto B4b9a0a;
case 0x4b9a0f:c.instructions+=2;goto B4b9a0f;
case 0x4b9a10:c.instructions+=1;goto B4b9a10;
case 0x4b9a15:goto L4b9a15;
case 0x4b9a18:c.instructions+=2;goto B4b9a18;
case 0x4b9a19:c.instructions+=1;goto B4b9a19;
case 0x4b9a20:goto L4b9a20;
case 0x4b9a24:c.instructions+=13;goto B4b9a24;
case 0x4b9a25:c.instructions+=12;goto B4b9a25;
case 0x4b9a29:c.instructions+=11;goto B4b9a29;
case 0x4b9a2a:c.instructions+=10;goto B4b9a2a;
case 0x4b9a2b:c.instructions+=9;goto B4b9a2b;
case 0x4b9a2f:c.instructions+=8;goto B4b9a2f;
case 0x4b9a31:c.instructions+=7;goto B4b9a31;
case 0x4b9a35:c.instructions+=6;goto B4b9a35;
case 0x4b9a36:c.instructions+=5;goto B4b9a36;
case 0x4b9a37:c.instructions+=4;goto B4b9a37;
case 0x4b9a38:c.instructions+=3;goto B4b9a38;
case 0x4b9a39:c.instructions+=2;goto B4b9a39;
case 0x4b9a3b:c.instructions+=1;goto B4b9a3b;
case 0x4b9a40:goto L4b9a40;
case 0x4b9a46:c.instructions+=1;goto B4b9a46;
case 0x4b9a4c:goto L4b9a4c;
case 0x4b9a4e:goto L4b9a4e;
case 0x4b9a54:c.instructions+=1;goto B4b9a54;
case 0x4b9a56:goto L4b9a56;
case 0x4b9a5c:c.instructions+=1;goto B4b9a5c;
case 0x4b9a5e:goto L4b9a5e;
case 0x4b9a64:c.instructions+=1;goto B4b9a64;
case 0x4b9a6a:goto L4b9a6a;
case 0x4b9a6b:c.instructions+=4;goto B4b9a6b;
case 0x4b9a72:c.instructions+=3;goto B4b9a72;
case 0x4b9a73:c.instructions+=2;goto B4b9a73;
case 0x4b9a74:c.instructions+=1;goto B4b9a74;
case 0x4b9a77:goto L4b9a77;
case 0x4b9a7a:c.instructions+=2;goto B4b9a7a;
case 0x4b9a7b:c.instructions+=1;goto B4b9a7b;
case 0x4b9a80:goto L4b9a80;
case 0x4b9a83:c.instructions+=4;goto B4b9a83;
case 0x4b9a84:c.instructions+=3;goto B4b9a84;
case 0x4b9a85:c.instructions+=2;goto B4b9a85;
case 0x4b9a86:c.instructions+=1;goto B4b9a86;
case 0x4b9a89:goto L4b9a89;
case 0x4b9a90:c.instructions+=1;goto B4b9a90;
case 0x4b9a92:goto L4b9a92;
case 0x4b9a93:c.instructions+=4;goto B4b9a93;
case 0x4b9a9a:c.instructions+=3;goto B4b9a9a;
case 0x4b9a9b:c.instructions+=2;goto B4b9a9b;
case 0x4b9a9c:c.instructions+=1;goto B4b9a9c;
case 0x4b9a9f:goto L4b9a9f;
case 0x4b9aa1:c.instructions+=1;goto B4b9aa1;
case 0x4b9aa3:goto L4b9aa3;
case 0x4b9aaa:c.instructions+=1;goto B4b9aaa;
case 0x4b9aac:goto L4b9aac;
case 0x4b9aaf:c.instructions+=3;goto B4b9aaf;
case 0x4b9ab1:c.instructions+=2;goto B4b9ab1;
case 0x4b9ab2:c.instructions+=1;goto B4b9ab2;
case 0x4b9ab7:goto L4b9ab7;
case 0x4b9aba:goto L4b9aba;
case 0x4b9abd:c.instructions+=1;goto B4b9abd;
case 0x4b9abe:goto L4b9abe;
case 0x4b9ac3:goto L4b9ac3;
case 0x4b9ac6:c.instructions+=2;goto B4b9ac6;
case 0x4b9acb:c.instructions+=1;goto B4b9acb;
case 0x4b9ad0:goto L4b9ad0;
case 0x4b9ad3:c.instructions+=2;goto B4b9ad3;
case 0x4b9ad5:c.instructions+=1;goto B4b9ad5;
case 0x4b9ad7:goto L4b9ad7;
case 0x4b9ade:c.instructions+=1;goto B4b9ade;
case 0x4b9ae0:goto L4b9ae0;
case 0x4b9ae2:c.instructions+=3;goto B4b9ae2;
case 0x4b9ae7:c.instructions+=2;goto B4b9ae7;
case 0x4b9ae8:c.instructions+=1;goto B4b9ae8;
case 0x4b9aed:goto L4b9aed;
case 0x4b9af0:goto L4b9af0;
case 0x4b9af1:c.instructions+=3;goto B4b9af1;
case 0x4b9af2:c.instructions+=2;goto B4b9af2;
case 0x4b9af3:c.instructions+=1;goto B4b9af3;
case 0x4b9af6:goto L4b9af6;
case 0x4b9afc:c.instructions+=1;goto B4b9afc;
case 0x4b9afe:goto L4b9afe;
case 0x4b9b04:c.instructions+=1;goto B4b9b04;
case 0x4b9b06:goto L4b9b06;
case 0x4b9b0c:c.instructions+=1;goto B4b9b0c;
case 0x4b9b0e:goto L4b9b0e;
case 0x4b9b11:c.instructions+=6;goto B4b9b11;
case 0x4b9b13:c.instructions+=5;goto B4b9b13;
case 0x4b9b16:c.instructions+=4;goto B4b9b16;
case 0x4b9b17:c.instructions+=3;goto B4b9b17;
case 0x4b9b1d:c.instructions+=2;goto B4b9b1d;
case 0x4b9b1e:c.instructions+=1;goto B4b9b1e;
case 0x4b9b23:goto L4b9b23;
case 0x4b9b24:c.instructions+=1;goto B4b9b24;
case 0x4b9b29:goto L4b9b29;
case 0x4b9b2c:c.instructions+=9;goto B4b9b2c;
case 0x4b9b2e:c.instructions+=8;goto B4b9b2e;
case 0x4b9b30:c.instructions+=7;goto B4b9b30;
case 0x4b9b33:c.instructions+=6;goto B4b9b33;
case 0x4b9b34:c.instructions+=5;goto B4b9b34;
case 0x4b9b35:c.instructions+=4;goto B4b9b35;
case 0x4b9b3b:c.instructions+=3;goto B4b9b3b;
case 0x4b9b3c:c.instructions+=2;goto B4b9b3c;
case 0x4b9b3d:c.instructions+=1;goto B4b9b3d;
case 0x4b9b40:goto L4b9b40;
case 0x4b9b42:c.instructions+=1;goto B4b9b42;
case 0x4b9b47:goto L4b9b47;
case 0x4b9b48:c.instructions+=3;goto B4b9b48;
case 0x4b9b49:c.instructions+=2;goto B4b9b49;
case 0x4b9b4a:c.instructions+=1;goto B4b9b4a;
case 0x4b9b4d:goto L4b9b4d;
case 0x4b9b53:c.instructions+=2;goto B4b9b53;
case 0x4b9b55:c.instructions+=1;goto B4b9b55;
case 0x4b9b57:goto L4b9b57;
case 0x4b9b5a:c.instructions+=2;goto B4b9b5a;
case 0x4b9b5b:c.instructions+=1;goto B4b9b5b;
case 0x4b9b60:goto L4b9b60;
case 0x4b9b66:c.instructions+=2;goto B4b9b66;
case 0x4b9b69:c.instructions+=1;goto B4b9b69;
case 0x4b9b6b:goto L4b9b6b;
case 0x4b9b6e:c.instructions+=2;goto B4b9b6e;
case 0x4b9b73:c.instructions+=1;goto B4b9b73;
case 0x4b9b78:goto L4b9b78;
case 0x4b9b79:c.instructions+=6;goto B4b9b79;
case 0x4b9b7b:c.instructions+=5;goto B4b9b7b;
case 0x4b9b7d:c.instructions+=4;goto B4b9b7d;
case 0x4b9b82:c.instructions+=3;goto B4b9b82;
case 0x4b9b87:c.instructions+=2;goto B4b9b87;
case 0x4b9b88:c.instructions+=1;goto B4b9b88;
case 0x4b9b8d:goto L4b9b8d;
case 0x4b9b90:c.instructions+=5;goto B4b9b90;
case 0x4b9b91:c.instructions+=4;goto B4b9b91;
case 0x4b9b9b:c.instructions+=3;goto B4b9b9b;
case 0x4b9b9c:c.instructions+=2;goto B4b9b9c;
case 0x4b9b9d:c.instructions+=1;goto B4b9b9d;
case 0x4b9ba0:goto L4b9ba0;
case 0x4b9ba3:c.instructions+=1;goto B4b9ba3;
case 0x4b9ba9:goto L4b9ba9;
case 0x4b9bab:c.instructions+=5;goto B4b9bab;
case 0x4b9bad:c.instructions+=4;goto B4b9bad;
case 0x4b9bb3:c.instructions+=3;goto B4b9bb3;
case 0x4b9bb4:c.instructions+=2;goto B4b9bb4;
case 0x4b9bb6:c.instructions+=1;goto B4b9bb6;
case 0x4b9bbb:goto L4b9bbb;
case 0x4b9bbe:c.instructions+=2;goto B4b9bbe;
case 0x4b9bc0:c.instructions+=1;goto B4b9bc0;
case 0x4b9bc5:goto L4b9bc5;
case 0x4b9bc8:c.instructions+=2;goto B4b9bc8;
case 0x4b9bcd:c.instructions+=1;goto B4b9bcd;
case 0x4b9bd2:goto L4b9bd2;
case 0x4b9bd3:c.instructions+=6;goto B4b9bd3;
case 0x4b9bd8:c.instructions+=5;goto B4b9bd8;
case 0x4b9bdd:c.instructions+=4;goto B4b9bdd;
case 0x4b9be2:c.instructions+=3;goto B4b9be2;
case 0x4b9be7:c.instructions+=2;goto B4b9be7;
case 0x4b9be8:c.instructions+=1;goto B4b9be8;
case 0x4b9bed:goto L4b9bed;
case 0x4b9bf0:c.instructions+=2;goto B4b9bf0;
case 0x4b9bf2:c.instructions+=1;goto B4b9bf2;
case 0x4b9bf7:goto L4b9bf7;
case 0x4b9bf8:c.instructions+=4;goto B4b9bf8;
case 0x4b9c02:c.instructions+=3;goto B4b9c02;
case 0x4b9c03:c.instructions+=2;goto B4b9c03;
case 0x4b9c04:c.instructions+=1;goto B4b9c04;
case 0x4b9c10:goto L4b9c10;
case 0x4b9c18:c.instructions+=1;goto B4b9c18;
case 0x4b9c1a:goto L4b9c1a;
case 0x4b9c1f:c.instructions+=1;goto B4b9c1f;
case 0x4b9c26:goto L4b9c26;
case 0x4b9c30:goto L4b9c30;
case 0x4b9c33:c.instructions+=3;goto B4b9c33;
case 0x4b9c38:c.instructions+=2;goto B4b9c38;
case 0x4b9c39:c.instructions+=1;goto B4b9c39;
case 0x4b9c3e:goto L4b9c3e;
case 0x4b9c41:c.instructions+=1;goto B4b9c41;
case 0x4b9c50:goto L4b9c50;
case 0x4b9c58:c.instructions+=1;goto B4b9c58;
case 0x4b9c5a:goto L4b9c5a;
case 0x4b9c5f:c.instructions+=1;goto B4b9c5f;
case 0x4b9c66:goto L4b9c66;
case 0x4b9c70:goto L4b9c70;
case 0x4b9c73:c.instructions+=3;goto B4b9c73;
case 0x4b9c78:c.instructions+=2;goto B4b9c78;
case 0x4b9c79:c.instructions+=1;goto B4b9c79;
case 0x4b9c7e:goto L4b9c7e;
case 0x4b9c81:c.instructions+=1;goto B4b9c81;
case 0x4b9c90:goto L4b9c90;
case 0x4b9c94:c.instructions+=9;goto B4b9c94;
case 0x4b9c98:c.instructions+=8;goto B4b9c98;
case 0x4b9c99:c.instructions+=7;goto B4b9c99;
case 0x4b9c9b:c.instructions+=6;goto B4b9c9b;
case 0x4b9c9f:c.instructions+=5;goto B4b9c9f;
case 0x4b9ca0:c.instructions+=4;goto B4b9ca0;
case 0x4b9ca1:c.instructions+=3;goto B4b9ca1;
case 0x4b9ca2:c.instructions+=2;goto B4b9ca2;
case 0x4b9ca4:c.instructions+=1;goto B4b9ca4;
case 0x4b9ca9:goto L4b9ca9;
case 0x4b9cad:c.instructions+=7;goto B4b9cad;
case 0x4b9cb3:c.instructions+=6;goto B4b9cb3;
case 0x4b9cb6:c.instructions+=5;goto B4b9cb6;
case 0x4b9cbc:c.instructions+=4;goto B4b9cbc;
case 0x4b9cbf:c.instructions+=3;goto B4b9cbf;
case 0x4b9cc1:c.instructions+=2;goto B4b9cc1;
case 0x4b9cc2:c.instructions+=1;goto B4b9cc2;
case 0x4b9cd0:goto L4b9cd0;
case 0x4b9cd8:c.instructions+=1;goto B4b9cd8;
case 0x4b9cda:goto L4b9cda;
case 0x4b9cdf:c.instructions+=1;goto B4b9cdf;
case 0x4b9ce6:goto L4b9ce6;
case 0x4b9cf0:goto L4b9cf0;
case 0x4b9cf3:c.instructions+=5;goto B4b9cf3;
case 0x4b9cf4:c.instructions+=4;goto B4b9cf4;
case 0x4b9cf7:c.instructions+=3;goto B4b9cf7;
case 0x4b9cf8:c.instructions+=2;goto B4b9cf8;
case 0x4b9cfd:c.instructions+=1;goto B4b9cfd;
case 0x4b9d02:goto L4b9d02;
case 0x4b9d05:c.instructions+=3;goto B4b9d05;
case 0x4b9d06:c.instructions+=2;goto B4b9d06;
case 0x4b9d07:c.instructions+=1;goto B4b9d07;
case 0x4b9d0c:goto L4b9d0c;
case 0x4b9d0f:c.instructions+=2;goto B4b9d0f;
case 0x4b9d10:c.instructions+=1;goto B4b9d10;
case 0x4b9d20:goto L4b9d20;
case 0x4b9d22:c.instructions+=10;goto B4b9d22;
case 0x4b9d27:c.instructions+=9;goto B4b9d27;
case 0x4b9d2d:c.instructions+=8;goto B4b9d2d;
case 0x4b9d2e:c.instructions+=7;goto B4b9d2e;
case 0x4b9d35:c.instructions+=6;goto B4b9d35;
case 0x4b9d36:c.instructions+=5;goto B4b9d36;
case 0x4b9d37:c.instructions+=4;goto B4b9d37;
case 0x4b9d39:c.instructions+=3;goto B4b9d39;
case 0x4b9d3a:c.instructions+=2;goto B4b9d3a;
case 0x4b9d3f:c.instructions+=1;goto B4b9d3f;
case 0x4b9d44:goto L4b9d44;
case 0x4b9d49:c.instructions+=2;goto B4b9d49;
case 0x4b9d4b:c.instructions+=1;goto B4b9d4b;
case 0x4b9d50:goto L4b9d50;
case 0x4b9d57:c.instructions+=2;goto B4b9d57;
case 0x4b9d5a:c.instructions+=1;goto B4b9d5a;
case 0x4b9d5c:goto L4b9d5c;
case 0x4b9d5f:c.instructions+=1;goto B4b9d5f;
case 0x4b9d61:goto L4b9d61;
case 0x4b9d63:c.instructions+=2;goto B4b9d63;
case 0x4b9d6a:c.instructions+=1;goto B4b9d6a;
case 0x4b9d6f:goto L4b9d6f;
case 0x4b9d71:c.instructions+=5;goto B4b9d71;
case 0x4b9d74:c.instructions+=4;goto B4b9d74;
case 0x4b9d78:c.instructions+=3;goto B4b9d78;
case 0x4b9d7a:c.instructions+=2;goto B4b9d7a;
case 0x4b9d82:c.instructions+=1;goto B4b9d82;
case 0x4b9d84:goto L4b9d84;
case 0x4b9d86:c.instructions+=2;goto B4b9d86;
case 0x4b9d8b:c.instructions+=1;goto B4b9d8b;
case 0x4b9d90:goto L4b9d90;
case 0x4b9d91:c.instructions+=6;goto B4b9d91;
case 0x4b9d97:c.instructions+=5;goto B4b9d97;
case 0x4b9d98:c.instructions+=4;goto B4b9d98;
case 0x4b9d9e:c.instructions+=3;goto B4b9d9e;
case 0x4b9d9f:c.instructions+=2;goto B4b9d9f;
case 0x4b9da1:c.instructions+=1;goto B4b9da1;
case 0x4b9da6:goto L4b9da6;
case 0x4b9da8:goto L4b9da8;
case 0x4b9daa:goto L4b9daa;
case 0x4b9dab:c.instructions+=3;goto B4b9dab;
case 0x4b9dad:c.instructions+=2;goto B4b9dad;
case 0x4b9db5:c.instructions+=1;goto B4b9db5;
case 0x4b9dba:goto L4b9dba;
case 0x4b9dbc:c.instructions+=1;goto B4b9dbc;
case 0x4b9dc1:goto L4b9dc1;
case 0x4b9dc3:c.instructions+=5;goto B4b9dc3;
case 0x4b9dc6:c.instructions+=4;goto B4b9dc6;
case 0x4b9dca:c.instructions+=3;goto B4b9dca;
case 0x4b9dcc:c.instructions+=2;goto B4b9dcc;
case 0x4b9dd4:c.instructions+=1;goto B4b9dd4;
case 0x4b9dd6:goto L4b9dd6;
case 0x4b9dd8:c.instructions+=6;goto B4b9dd8;
case 0x4b9dde:c.instructions+=5;goto B4b9dde;
case 0x4b9ddf:c.instructions+=4;goto B4b9ddf;
case 0x4b9de5:c.instructions+=3;goto B4b9de5;
case 0x4b9de6:c.instructions+=2;goto B4b9de6;
case 0x4b9de8:c.instructions+=1;goto B4b9de8;
case 0x4b9ded:goto L4b9ded;
case 0x4b9df3:c.instructions+=3;goto B4b9df3;
case 0x4b9df9:c.instructions+=2;goto B4b9df9;
case 0x4b9dfc:c.instructions+=1;goto B4b9dfc;
case 0x4b9dfe:goto L4b9dfe;
case 0x4b9e00:goto L4b9e00;
case 0x4b9e01:c.instructions+=3;goto B4b9e01;
case 0x4b9e03:c.instructions+=2;goto B4b9e03;
case 0x4b9e0b:c.instructions+=1;goto B4b9e0b;
case 0x4b9e10:goto L4b9e10;
case 0x4b9e12:c.instructions+=1;goto B4b9e12;
case 0x4b9e17:goto L4b9e17;
case 0x4b9e19:c.instructions+=5;goto B4b9e19;
case 0x4b9e1c:c.instructions+=4;goto B4b9e1c;
case 0x4b9e20:c.instructions+=3;goto B4b9e20;
case 0x4b9e22:c.instructions+=2;goto B4b9e22;
case 0x4b9e2a:c.instructions+=1;goto B4b9e2a;
case 0x4b9e2c:goto L4b9e2c;
case 0x4b9e2e:c.instructions+=6;goto B4b9e2e;
case 0x4b9e34:c.instructions+=5;goto B4b9e34;
case 0x4b9e35:c.instructions+=4;goto B4b9e35;
case 0x4b9e3b:c.instructions+=3;goto B4b9e3b;
case 0x4b9e3c:c.instructions+=2;goto B4b9e3c;
case 0x4b9e3e:c.instructions+=1;goto B4b9e3e;
case 0x4b9e43:goto L4b9e43;
case 0x4b9e49:c.instructions+=3;goto B4b9e49;
case 0x4b9e4f:c.instructions+=2;goto B4b9e4f;
case 0x4b9e52:c.instructions+=1;goto B4b9e52;
case 0x4b9e54:goto L4b9e54;
case 0x4b9e56:goto L4b9e56;
case 0x4b9e57:c.instructions+=3;goto B4b9e57;
case 0x4b9e59:c.instructions+=2;goto B4b9e59;
case 0x4b9e61:c.instructions+=1;goto B4b9e61;
case 0x4b9e66:goto L4b9e66;
case 0x4b9e68:c.instructions+=2;goto B4b9e68;
case 0x4b9e6a:c.instructions+=1;goto B4b9e6a;
case 0x4b9e6f:goto L4b9e6f;
case 0x4b9e73:c.instructions+=5;goto B4b9e73;
case 0x4b9e74:c.instructions+=4;goto B4b9e74;
case 0x4b9e75:c.instructions+=3;goto B4b9e75;
case 0x4b9e7c:c.instructions+=2;goto B4b9e7c;
case 0x4b9e7f:c.instructions+=1;goto B4b9e7f;
case 0x4b9e80:goto L4b9e80;
case 0x4b9e82:c.instructions+=8;goto B4b9e82;
case 0x4b9e87:c.instructions+=7;goto B4b9e87;
case 0x4b9e8d:c.instructions+=6;goto B4b9e8d;
case 0x4b9e8e:c.instructions+=5;goto B4b9e8e;
case 0x4b9e95:c.instructions+=4;goto B4b9e95;
case 0x4b9e96:c.instructions+=3;goto B4b9e96;
case 0x4b9e97:c.instructions+=2;goto B4b9e97;
case 0x4b9e9c:c.instructions+=1;goto B4b9e9c;
case 0x4b9ea1:goto L4b9ea1;
case 0x4b9ea3:c.instructions+=6;goto B4b9ea3;
case 0x4b9ea6:c.instructions+=5;goto B4b9ea6;
case 0x4b9eaa:c.instructions+=4;goto B4b9eaa;
case 0x4b9eac:c.instructions+=3;goto B4b9eac;
case 0x4b9eae:c.instructions+=2;goto B4b9eae;
case 0x4b9eb2:c.instructions+=1;goto B4b9eb2;
case 0x4b9eb4:goto L4b9eb4;
case 0x4b9eb8:c.instructions+=3;goto B4b9eb8;
case 0x4b9eb9:c.instructions+=2;goto B4b9eb9;
case 0x4b9ebb:c.instructions+=1;goto B4b9ebb;
case 0x4b9ec0:goto L4b9ec0;
case 0x4b9ec6:c.instructions+=1;goto B4b9ec6;
case 0x4b9ec8:goto L4b9ec8;
case 0x4b9ecc:c.instructions+=4;goto B4b9ecc;
case 0x4b9ecd:c.instructions+=3;goto B4b9ecd;
case 0x4b9ed4:c.instructions+=2;goto B4b9ed4;
case 0x4b9ed7:c.instructions+=1;goto B4b9ed7;
case 0x4b9ee0:goto L4b9ee0;
case 0x4b9ee4:c.instructions+=2;goto B4b9ee4;
case 0x4b9ee9:c.instructions+=1;goto B4b9ee9;
case 0x4b9eeb:goto L4b9eeb;
case 0x4b9ef0:c.instructions+=1;goto B4b9ef0;
case 0x4b9ef2:goto L4b9ef2;
case 0x4b9ef6:c.instructions+=1;goto B4b9ef6;
case 0x4b9efb:goto L4b9efb;
case 0x4b9eff:c.instructions+=2;goto B4b9eff;
case 0x4b9f01:c.instructions+=1;goto B4b9f01;
case 0x4b9f03:goto L4b9f03;
case 0x4b9f08:c.instructions+=3;goto B4b9f08;
case 0x4b9f0f:c.instructions+=2;goto B4b9f0f;
case 0x4b9f15:c.instructions+=1;goto B4b9f15;
case 0x4b9f1a:goto L4b9f1a;
case 0x4b9f1d:goto L4b9f1d;
case 0x4b9f23:c.instructions+=1;goto B4b9f23;
case 0x4b9f28:goto L4b9f28;
case 0x4b9f30:goto L4b9f30;
case 0x4b9f32:c.instructions+=26;goto B4b9f32;
case 0x4b9f37:c.instructions+=25;goto B4b9f37;
case 0x4b9f3d:c.instructions+=24;goto B4b9f3d;
case 0x4b9f3e:c.instructions+=23;goto B4b9f3e;
case 0x4b9f45:c.instructions+=22;goto B4b9f45;
case 0x4b9f46:c.instructions+=21;goto B4b9f46;
case 0x4b9f4a:c.instructions+=20;goto B4b9f4a;
case 0x4b9f4e:c.instructions+=19;goto B4b9f4e;
case 0x4b9f4f:c.instructions+=18;goto B4b9f4f;
case 0x4b9f50:c.instructions+=17;goto B4b9f50;
case 0x4b9f54:c.instructions+=16;goto B4b9f54;
case 0x4b9f55:c.instructions+=15;goto B4b9f55;
case 0x4b9f59:c.instructions+=14;goto B4b9f59;
case 0x4b9f5b:c.instructions+=13;goto B4b9f5b;
case 0x4b9f5f:c.instructions+=12;goto B4b9f5f;
case 0x4b9f60:c.instructions+=11;goto B4b9f60;
case 0x4b9f64:c.instructions+=10;goto B4b9f64;
case 0x4b9f65:c.instructions+=9;goto B4b9f65;
case 0x4b9f66:c.instructions+=8;goto B4b9f66;
case 0x4b9f6a:c.instructions+=7;goto B4b9f6a;
case 0x4b9f6b:c.instructions+=6;goto B4b9f6b;
case 0x4b9f6c:c.instructions+=5;goto B4b9f6c;
case 0x4b9f6d:c.instructions+=4;goto B4b9f6d;
case 0x4b9f6f:c.instructions+=3;goto B4b9f6f;
case 0x4b9f71:c.instructions+=2;goto B4b9f71;
case 0x4b9f75:c.instructions+=1;goto B4b9f75;
case 0x4b9f7a:goto L4b9f7a;
case 0x4b9f7c:c.instructions+=6;goto B4b9f7c;
case 0x4b9f80:c.instructions+=5;goto B4b9f80;
case 0x4b9f88:c.instructions+=4;goto B4b9f88;
case 0x4b9f8e:c.instructions+=3;goto B4b9f8e;
case 0x4b9f94:c.instructions+=2;goto B4b9f94;
case 0x4b9f9b:c.instructions+=1;goto B4b9f9b;
case 0x4b9f9d:goto L4b9f9d;
case 0x4b9f9f:c.instructions+=1;goto B4b9f9f;
case 0x4b9fa1:goto L4b9fa1;
case 0x4b9fa6:c.instructions+=1;goto B4b9fa6;
case 0x4b9fab:goto L4b9fab;
case 0x4b9fae:goto L4b9fae;
case 0x4b9fb3:c.instructions+=4;goto B4b9fb3;
case 0x4b9fb4:c.instructions+=3;goto B4b9fb4;
case 0x4b9fb7:c.instructions+=2;goto B4b9fb7;
case 0x4b9fb8:c.instructions+=1;goto B4b9fb8;
case 0x4b9fbd:goto L4b9fbd;
case 0x4b9fc1:c.instructions+=7;goto B4b9fc1;
case 0x4b9fc4:c.instructions+=6;goto B4b9fc4;
case 0x4b9fc5:c.instructions+=5;goto B4b9fc5;
case 0x4b9fc7:c.instructions+=4;goto B4b9fc7;
case 0x4b9fc8:c.instructions+=3;goto B4b9fc8;
case 0x4b9fcf:c.instructions+=2;goto B4b9fcf;
case 0x4b9fd2:c.instructions+=1;goto B4b9fd2;
case 0x4b9fe0:goto L4b9fe0;
case 0x4b9fe6:c.instructions+=2;goto B4b9fe6;
case 0x4b9fe8:c.instructions+=1;goto B4b9fe8;
case 0x4b9fea:goto L4b9fea;
case 0x4b9fef:goto L4b9fef;
default:missing_instruction(c.pc);}
B4b9002:L4b9002:{c.instructions+=9;NFSU2_TR(0x4b9002);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b9006:{NFSU2_TR(0x4b9006);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9009:{NFSU2_TR(0x4b9009);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b900c:{NFSU2_TR(0x4b900c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b900d:{NFSU2_TR(0x4b900d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b900e:{NFSU2_TR(0x4b900e);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9013:{NFSU2_TR(0x4b9013);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9018:{NFSU2_TR(0x4b9018);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9019:{NFSU2_TR(0x4b9019);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b901eull));
TAIL_STATIC(0x558610u,558);
}
B4b901e:L4b901e:{c.instructions+=4;NFSU2_TR(0x4b901e);
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
B4b9021:{NFSU2_TR(0x4b9021);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4b9023:{NFSU2_TR(0x4b9023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9024:{NFSU2_TR(0x4b9024);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9030:L4b9030:{c.instructions+=3;NFSU2_TR(0x4b9030);
__builtin_memmove((R+0),gp(0x8500cc),1);
}
B4b9035:{NFSU2_TR(0x4b9035);
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
B4b9037:{NFSU2_TR(0x4b9037);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9063;}}
}
B4b9039:L4b9039:{c.instructions+=2;NFSU2_TR(0x4b9039);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B4b903e:{NFSU2_TR(0x4b903e);
if(r1(R+518)){{goto L4b9069;}}
}
B4b9040:L4b9040:{c.instructions+=1;NFSU2_TR(0x4b9040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9045ull));
TAIL_STATIC(0x4a0000u,4a0);
}
B4b9045:L4b9045:{c.instructions+=2;NFSU2_TR(0x4b9045);
u8 U[8];
__builtin_memmove((U+0),gp(0x8500d0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xbull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b904c:{NFSU2_TR(0x4b904c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4b9064;}}
}
B4b904e:L4b904e:{c.instructions+=5;NFSU2_TR(0x4b904e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9052:{NFSU2_TR(0x4b9052);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9054:{NFSU2_TR(0x4b9054);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9059:{NFSU2_TR(0x4b9059);
u8 U[4];
w4(U+0,u32(0x13138f54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b905e:{NFSU2_TR(0x4b905e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9063ull));
TAIL_STATIC(0x4b8fa0u,4b8);
}
B4b9063:L4b9063:{c.instructions+=1;NFSU2_TR(0x4b9063);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9064:L4b9064:{c.instructions+=1;NFSU2_TR(0x4b9064);
TAIL_STATIC(0x4bc270u,4bc);
}
B4b9069:L4b9069:{c.instructions+=3;NFSU2_TR(0x4b9069);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b906b:{NFSU2_TR(0x4b906b);
w4(R+4,u32(0x850080ull));
}
B4b9070:{NFSU2_TR(0x4b9070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9075ull));
TAIL_STATIC(0x5031b0u,503);
}
B4b9075:L4b9075:{c.instructions+=1;NFSU2_TR(0x4b9075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b907aull));
TAIL_STATIC(0x582b60u,582);
}
B4b907a:L4b907a:{c.instructions+=2;NFSU2_TR(0x4b907a);
__builtin_memmove((R+4),(R+0),4);
}
B4b907c:{NFSU2_TR(0x4b907c);
TAIL_STATIC(0x582e20u,582);
}
B4b9090:L4b9090:{c.instructions+=4;NFSU2_TR(0x4b9090);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9094:{NFSU2_TR(0x4b9094);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9097:{NFSU2_TR(0x4b9097);
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
B4b9099:{NFSU2_TR(0x4b9099);
if(r1(R+518)){{goto L4b90fb;}}
}
B4b909b:L4b909b:{c.instructions+=10;NFSU2_TR(0x4b909b);
s1(0x8500cc,u8(0x1ull));
}
B4b90a2:{NFSU2_TR(0x4b90a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b90a5:{NFSU2_TR(0x4b90a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b90a6:{NFSU2_TR(0x4b90a6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b90aa:{NFSU2_TR(0x4b90aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b90ad:{NFSU2_TR(0x4b90ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b90b0:{NFSU2_TR(0x4b90b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b90b2:{NFSU2_TR(0x4b90b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b90b4:{NFSU2_TR(0x4b90b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b90b7:{NFSU2_TR(0x4b90b7);
if(r1(R+518)){{goto L4b90c8;}}
}
B4b90b9:L4b90b9:{c.instructions+=2;NFSU2_TR(0x4b90b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b90ba:{NFSU2_TR(0x4b90ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b90bfull));
TAIL_STATIC(0x540a60u,540);
}
B4b90bf:L4b90bf:{c.instructions+=2;NFSU2_TR(0x4b90bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b90c2:{NFSU2_TR(0x4b90c2);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b90c8:L4b90c8:{c.instructions+=11;NFSU2_TR(0x4b90c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b90cb:{NFSU2_TR(0x4b90cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b90ce:{NFSU2_TR(0x4b90ce);
u8 U[4];
w4(U+0,u32(0x5a6f817full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b90d3:{NFSU2_TR(0x4b90d3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b90d5:{NFSU2_TR(0x4b90d5);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b90da:{NFSU2_TR(0x4b90da);
u8 U[4];
w4(U+0,u32(0x73c044ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b90df:{NFSU2_TR(0x4b90df);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b90e4:{NFSU2_TR(0x4b90e4);
u8 U[4];
w4(U+0,u32(0x39df715ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b90e9:{NFSU2_TR(0x4b90e9);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b90ee:{NFSU2_TR(0x4b90ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b90ef:{NFSU2_TR(0x4b90ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b90f4ull));
TAIL_STATIC(0x558860u,558);
}
B4b90f4:L4b90f4:{c.instructions+=4;NFSU2_TR(0x4b90f4);
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
B4b90f7:{NFSU2_TR(0x4b90f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4b90f9:{NFSU2_TR(0x4b90f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b90fa:{NFSU2_TR(0x4b90fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b90fb:L4b90fb:{c.instructions+=3;NFSU2_TR(0x4b90fb);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b90fd:{NFSU2_TR(0x4b90fd);
w4(R+4,u32(0x850080ull));
}
B4b9102:{NFSU2_TR(0x4b9102);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9107ull));
TAIL_STATIC(0x5031b0u,503);
}
B4b9107:L4b9107:{c.instructions+=1;NFSU2_TR(0x4b9107);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9110:L4b9110:{c.instructions+=9;NFSU2_TR(0x4b9110);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9111:{NFSU2_TR(0x4b9111);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9112:{NFSU2_TR(0x4b9112);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b9116:{NFSU2_TR(0x4b9116);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9119:{NFSU2_TR(0x4b9119);
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
B4b911b:{NFSU2_TR(0x4b911b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b911c:{NFSU2_TR(0x4b911c);
w4(R+8,u32(0x106ae8c8ull));
}
B4b9121:{NFSU2_TR(0x4b9121);
w4(R+28,u32(0x904aca43ull));
}
B4b9126:{NFSU2_TR(0x4b9126);
if(r1(R+518)){{goto L4b920a;}}
}
B4b912c:L4b912c:{c.instructions+=3;NFSU2_TR(0x4b912c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6c6f676eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9131:{NFSU2_TR(0x4b9131);
w4(R+12,u32(0x1ull));
}
B4b9136:{NFSU2_TR(0x4b9136);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9142;}}
}
B4b9138:L4b9138:{c.instructions+=2;NFSU2_TR(0x4b9138);
w4(R+8,u32(0x6cacf1ecull));
}
B4b913d:{NFSU2_TR(0x4b913d);
{goto L4b91e8;}
}
B4b9142:L4b9142:{c.instructions+=2;NFSU2_TR(0x4b9142);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x626c616bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9147:{NFSU2_TR(0x4b9147);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9153;}}
}
B4b9149:L4b9149:{c.instructions+=2;NFSU2_TR(0x4b9149);
w4(R+8,u32(0x7190cabull));
}
B4b914e:{NFSU2_TR(0x4b914e);
{goto L4b91e8;}
}
B4b9153:L4b9153:{c.instructions+=2;NFSU2_TR(0x4b9153);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x696d7374ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9158:{NFSU2_TR(0x4b9158);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9164;}}
}
B4b915a:L4b915a:{c.instructions+=2;NFSU2_TR(0x4b915a);
w4(R+8,u32(0x4a69f7aaull));
}
B4b915f:{NFSU2_TR(0x4b915f);
{goto L4b91e8;}
}
B4b9164:L4b9164:{c.instructions+=2;NFSU2_TR(0x4b9164);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70617373ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9169:{NFSU2_TR(0x4b9169);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9172;}}
}
B4b916b:L4b916b:{c.instructions+=2;NFSU2_TR(0x4b916b);
w4(R+8,u32(0xc042c11cull));
}
B4b9170:{NFSU2_TR(0x4b9170);
{goto L4b91e8;}
}
B4b9172:L4b9172:{c.instructions+=2;NFSU2_TR(0x4b9172);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x696b6579ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9177:{NFSU2_TR(0x4b9177);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b91ae;}}
}
B4b9179:L4b9179:{c.instructions+=1;NFSU2_TR(0x4b9179);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b917eull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4b917e:L4b917e:{c.instructions+=2;NFSU2_TR(0x4b917e);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4b9184:{NFSU2_TR(0x4b9184);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b918d;}}
}
B4b9186:L4b9186:{c.instructions+=2;NFSU2_TR(0x4b9186);
w4(R+8,u32(0x1973da3aull));
}
B4b918b:{NFSU2_TR(0x4b918b);
{goto L4b91e8;}
}
B4b918d:L4b918d:{c.instructions+=3;NFSU2_TR(0x4b918d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b9191:{NFSU2_TR(0x4b9191);
__builtin_memmove((R+4),(R+28),4);
}
B4b9193:{NFSU2_TR(0x4b9193);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9198ull));
TAIL_STATIC(0x49d870u,49d);
}
B4b9198:L4b9198:{c.instructions+=9;NFSU2_TR(0x4b9198);
__builtin_memmove(gp(0x8500cc),(R+12),1);
}
B4b919e:{NFSU2_TR(0x4b919e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b91a1:{NFSU2_TR(0x4b91a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b91a4:{NFSU2_TR(0x4b91a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b91a7:{NFSU2_TR(0x4b91a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b91aa:{NFSU2_TR(0x4b91aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b91ab:{NFSU2_TR(0x4b91ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b91ac:{NFSU2_TR(0x4b91ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b91ad:{NFSU2_TR(0x4b91ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b91ae:L4b91ae:{c.instructions+=2;NFSU2_TR(0x4b91ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x746f7361ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b91b3:{NFSU2_TR(0x4b91b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b91c2;}}
}
B4b91b5:L4b91b5:{c.instructions+=3;NFSU2_TR(0x4b91b5);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4b91ba:{NFSU2_TR(0x4b91ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b91c0:{NFSU2_TR(0x4b91c0);
{goto L4b91e8;}
}
B4b91c2:L4b91c2:{c.instructions+=2;NFSU2_TR(0x4b91c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x64626572ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b91c7:{NFSU2_TR(0x4b91c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b91d0;}}
}
B4b91c9:L4b91c9:{c.instructions+=2;NFSU2_TR(0x4b91c9);
w4(R+8,u32(0x25cb7f0cull));
}
B4b91ce:{NFSU2_TR(0x4b91ce);
{goto L4b91e8;}
}
B4b91d0:L4b91d0:{c.instructions+=2;NFSU2_TR(0x4b91d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6c6f636bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b91d5:{NFSU2_TR(0x4b91d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b91de;}}
}
B4b91d7:L4b91d7:{c.instructions+=2;NFSU2_TR(0x4b91d7);
w4(R+8,u32(0x3b33c4fcull));
}
B4b91dc:{NFSU2_TR(0x4b91dc);
{goto L4b91e8;}
}
B4b91de:L4b91de:{c.instructions+=2;NFSU2_TR(0x4b91de);
w4(R+8,u32(0x106ae8c8ull));
}
B4b91e3:{NFSU2_TR(0x4b91e3);
w4(R+28,u32(0x2c0e485aull));
}
B4b91e8:L4b91e8:{c.instructions+=10;NFSU2_TR(0x4b91e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b91ec:{NFSU2_TR(0x4b91ec);
__builtin_memmove(gp(0x8500cc),(R+12),1);
}
B4b91f2:{NFSU2_TR(0x4b91f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b91f5:{NFSU2_TR(0x4b91f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b91f6:{NFSU2_TR(0x4b91f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b91f9:{NFSU2_TR(0x4b91f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b91fc:{NFSU2_TR(0x4b91fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b91fd:{NFSU2_TR(0x4b91fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b91fe:{NFSU2_TR(0x4b91fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9201:{NFSU2_TR(0x4b9201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9206ull));
TAIL_STATIC(0x4b8fa0u,4b8);
}
B4b9206:L4b9206:{c.instructions+=4;NFSU2_TR(0x4b9206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9207:{NFSU2_TR(0x4b9207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9208:{NFSU2_TR(0x4b9208);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b9209:{NFSU2_TR(0x4b9209);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b920a:L4b920a:{c.instructions+=3;NFSU2_TR(0x4b920a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b920c:{NFSU2_TR(0x4b920c);
w4(R+4,u32(0x850080ull));
}
B4b9211:{NFSU2_TR(0x4b9211);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9216ull));
TAIL_STATIC(0x5031b0u,503);
}
B4b9216:L4b9216:{c.instructions+=4;NFSU2_TR(0x4b9216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9217:{NFSU2_TR(0x4b9217);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9218:{NFSU2_TR(0x4b9218);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b9219:{NFSU2_TR(0x4b9219);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9220:L4b9220:{c.instructions+=5;NFSU2_TR(0x4b9220);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9221:{NFSU2_TR(0x4b9221);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b9225:{NFSU2_TR(0x4b9225);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9228:{NFSU2_TR(0x4b9228);
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
B4b922a:{NFSU2_TR(0x4b922a);
if(r1(R+518)){{goto L4b9281;}}
}
B4b922c:L4b922c:{c.instructions+=5;NFSU2_TR(0x4b922c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b922d:{NFSU2_TR(0x4b922d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b9231:{NFSU2_TR(0x4b9231);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b9233:{NFSU2_TR(0x4b9233);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9235:{NFSU2_TR(0x4b9235);
if(r1(R+518)){{goto L4b9246;}}
}
B4b9237:L4b9237:{c.instructions+=2;NFSU2_TR(0x4b9237);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9238:{NFSU2_TR(0x4b9238);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b923dull));
TAIL_STATIC(0x540a60u,540);
}
B4b923d:L4b923d:{c.instructions+=2;NFSU2_TR(0x4b923d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b9240:{NFSU2_TR(0x4b9240);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b9246:L4b9246:{c.instructions+=8;NFSU2_TR(0x4b9246);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9249:{NFSU2_TR(0x4b9249);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b924c:{NFSU2_TR(0x4b924c);
u8 U[4];
w4(U+0,u32(0xc04643b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9251:{NFSU2_TR(0x4b9251);
u8 U[4];
w4(U+0,u32(0xaa54bf29ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9256:{NFSU2_TR(0x4b9256);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b925b:{NFSU2_TR(0x4b925b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9260:{NFSU2_TR(0x4b9260);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9261:{NFSU2_TR(0x4b9261);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9266ull));
TAIL_STATIC(0x558610u,558);
}
B4b9266:L4b9266:{c.instructions+=10;NFSU2_TR(0x4b9266);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4b9268:{NFSU2_TR(0x4b9268);
s1(0x8500cc,u8(0x1ull));
}
B4b926f:{NFSU2_TR(0x4b926f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9272:{NFSU2_TR(0x4b9272);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9275:{NFSU2_TR(0x4b9275);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b9278:{NFSU2_TR(0x4b9278);
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
B4b927b:{NFSU2_TR(0x4b927b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b927e:{NFSU2_TR(0x4b927e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b927f:{NFSU2_TR(0x4b927f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9280:{NFSU2_TR(0x4b9280);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9281:L4b9281:{c.instructions+=3;NFSU2_TR(0x4b9281);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9283:{NFSU2_TR(0x4b9283);
w4(R+4,u32(0x850080ull));
}
B4b9288:{NFSU2_TR(0x4b9288);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b928dull));
TAIL_STATIC(0x5031b0u,503);
}
B4b928d:L4b928d:{c.instructions+=2;NFSU2_TR(0x4b928d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b928e:{NFSU2_TR(0x4b928e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9290:L4b9290:{c.instructions+=12;NFSU2_TR(0x4b9290);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9292:{NFSU2_TR(0x4b9292);
u8 U[4];
w4(U+0,u32(0x7736f3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9297:{NFSU2_TR(0x4b9297);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b929d:{NFSU2_TR(0x4b929d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b929e:{NFSU2_TR(0x4b929e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b92a5:{NFSU2_TR(0x4b92a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b92a6:{NFSU2_TR(0x4b92a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b92aa:{NFSU2_TR(0x4b92aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b92ab:{NFSU2_TR(0x4b92ab);
__builtin_memmove((R+24),(R+4),4);
}
B4b92ad:{NFSU2_TR(0x4b92ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b92ae:{NFSU2_TR(0x4b92ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b92b2:{NFSU2_TR(0x4b92b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b92b7ull));
TAIL_STATIC(0x551de0u,551);
}
B4b92b7:L4b92b7:{c.instructions+=26;NFSU2_TR(0x4b92b7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b92b9:{NFSU2_TR(0x4b92b9);
u8 U[4];
w4(U+0,u32(0x794668ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b92bf:{NFSU2_TR(0x4b92bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b92c2:{NFSU2_TR(0x4b92c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b92c5:{NFSU2_TR(0x4b92c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b92c9:{NFSU2_TR(0x4b92c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b92cc:{NFSU2_TR(0x4b92cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b92cf:{NFSU2_TR(0x4b92cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b92d2:{NFSU2_TR(0x4b92d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b92d5:{NFSU2_TR(0x4b92d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b92d8:{NFSU2_TR(0x4b92d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b92db:{NFSU2_TR(0x4b92db);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b92de:{NFSU2_TR(0x4b92de);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b92e1:{NFSU2_TR(0x4b92e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b92e4:{NFSU2_TR(0x4b92e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b92e7:{NFSU2_TR(0x4b92e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b92e8:{NFSU2_TR(0x4b92e8);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b92ed:{NFSU2_TR(0x4b92ed);
w1(R+4,u8(0x1ull));
}
B4b92ef:{NFSU2_TR(0x4b92ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b92f0:{NFSU2_TR(0x4b92f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b92f3:{NFSU2_TR(0x4b92f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b92f6:{NFSU2_TR(0x4b92f6);
u8 U[4];
w4(U+0,u32(0x78fca8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b92fb:{NFSU2_TR(0x4b92fb);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b92ff:{NFSU2_TR(0x4b92ff);
__builtin_memmove(gp(0x83636c),(R+0),1);
}
B4b9304:{NFSU2_TR(0x4b9304);
__builtin_memmove(gp(0x836368),(R+24),4);
}
B4b930a:{NFSU2_TR(0x4b930a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b930full));
TAIL_STATIC(0x555ee0u,555);
}
B4b930f:L4b930f:{c.instructions+=7;NFSU2_TR(0x4b930f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9313:{NFSU2_TR(0x4b9313);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4b9316:{NFSU2_TR(0x4b9316);
__builtin_memmove((R+0),(R+24),4);
}
B4b9318:{NFSU2_TR(0x4b9318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9319:{NFSU2_TR(0x4b9319);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9320:{NFSU2_TR(0x4b9320);
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
B4b9323:{NFSU2_TR(0x4b9323);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9330:L4b9330:{c.instructions+=18;NFSU2_TR(0x4b9330);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9332:{NFSU2_TR(0x4b9332);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9337:{NFSU2_TR(0x4b9337);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b933d:{NFSU2_TR(0x4b933d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b933e:{NFSU2_TR(0x4b933e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9345:{NFSU2_TR(0x4b9345);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9346:{NFSU2_TR(0x4b9346);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9347:{NFSU2_TR(0x4b9347);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9348:{NFSU2_TR(0x4b9348);
__builtin_memmove((R+24),(R+4),4);
}
B4b934a:{NFSU2_TR(0x4b934a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b934e:{NFSU2_TR(0x4b934e);
u8 U[4];
w4(U+0,u32(0x794668ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b9354:{NFSU2_TR(0x4b9354);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4b9356:{NFSU2_TR(0x4b9356);
__builtin_memmove(gp(0x8383b4),(R+12),1);
}
B4b935c:{NFSU2_TR(0x4b935c);
__builtin_memmove(gp(0x836368),(R+12),4);
}
B4b9362:{NFSU2_TR(0x4b9362);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9365:{NFSU2_TR(0x4b9365);
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
B4b9367:{NFSU2_TR(0x4b9367);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b936b:{NFSU2_TR(0x4b936b);
if(r1(R+518)){{goto L4b9379;}}
}
B4b936d:L4b936d:{c.instructions+=2;NFSU2_TR(0x4b936d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b936e:{NFSU2_TR(0x4b936e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9373ull));
TAIL_STATIC(0x540a60u,540);
}
B4b9373:L4b9373:{c.instructions+=2;NFSU2_TR(0x4b9373);
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
B4b9376:{NFSU2_TR(0x4b9376);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9379:L4b9379:{c.instructions+=3;NFSU2_TR(0x4b9379);
__builtin_memmove((R+4),(R+24),4);
}
B4b937b:{NFSU2_TR(0x4b937b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b9383:{NFSU2_TR(0x4b9383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9388ull));
TAIL_STATIC(0x510d40u,510);
}
B4b9388:L4b9388:{c.instructions+=6;NFSU2_TR(0x4b9388);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b938c:{NFSU2_TR(0x4b938c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b938d:{NFSU2_TR(0x4b938d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b938e:{NFSU2_TR(0x4b938e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9395:{NFSU2_TR(0x4b9395);
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
B4b9398:{NFSU2_TR(0x4b9398);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b93a0:L4b93a0:{c.instructions+=3;NFSU2_TR(0x4b93a0);
w4(R+4,u32(0x89cf48ull));
}
B4b93a5:{NFSU2_TR(0x4b93a5);
s1(0x8383b4,u8(0x0ull));
}
B4b93ac:{NFSU2_TR(0x4b93ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b93b1ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4b93b1:L4b93b1:{c.instructions+=2;NFSU2_TR(0x4b93b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b93b3:{NFSU2_TR(0x4b93b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9419;}}
}
B4b93b5:L4b93b5:{c.instructions+=4;NFSU2_TR(0x4b93b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b93b6:{NFSU2_TR(0x4b93b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b93b8:{NFSU2_TR(0x4b93b8);
__builtin_memmove(gp(0x838521),(R+0),1);
}
B4b93bd:{NFSU2_TR(0x4b93bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b93c2ull));
TAIL_STATIC(0x4a0140u,4a0);
}
B4b93c2:L4b93c2:{c.instructions+=6;NFSU2_TR(0x4b93c2);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B4b93c7:{NFSU2_TR(0x4b93c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b93ca:{NFSU2_TR(0x4b93ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b93d0:{NFSU2_TR(0x4b93d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b93d3:{NFSU2_TR(0x4b93d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b93d5:{NFSU2_TR(0x4b93d5);
if(r1(R+518)){{goto L4b93fe;}}
}
B4b93d7:L4b93d7:{c.instructions+=1;NFSU2_TR(0x4b93d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b93d8:L4b93d8:{c.instructions+=4;NFSU2_TR(0x4b93d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b93db:{NFSU2_TR(0x4b93db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b93de:{NFSU2_TR(0x4b93de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b93df:{NFSU2_TR(0x4b93df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b93e4ull));
TAIL_STATIC(0x49ffa0u,49f);
}
B4b93e4:L4b93e4:{c.instructions+=3;NFSU2_TR(0x4b93e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b93e7:{NFSU2_TR(0x4b93e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b93e9:{NFSU2_TR(0x4b93e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b93f7;}}
}
B4b93eb:L4b93eb:{c.instructions+=3;NFSU2_TR(0x4b93eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b93ee:{NFSU2_TR(0x4b93ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b93ef:{NFSU2_TR(0x4b93ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b93f4ull));
TAIL_STATIC(0x5379a0u,537);
}
B4b93f4:L4b93f4:{c.instructions+=1;NFSU2_TR(0x4b93f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b93f7:L4b93f7:{c.instructions+=3;NFSU2_TR(0x4b93f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b93f9:{NFSU2_TR(0x4b93f9);
__builtin_memmove((R+24),(R+28),4);
}
B4b93fb:{NFSU2_TR(0x4b93fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b93d8u);}goto L4b93d8;}}
}
B4b93fd:L4b93fd:{c.instructions+=1;NFSU2_TR(0x4b93fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b93fe:L4b93fe:{c.instructions+=5;NFSU2_TR(0x4b93fe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9400:{NFSU2_TR(0x4b9400);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9405:{NFSU2_TR(0x4b9405);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b940a:{NFSU2_TR(0x4b940a);
u8 U[4];
w4(U+0,u32(0x78f530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b940f:{NFSU2_TR(0x4b940f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9414ull));
TAIL_STATIC(0x555f10u,555);
}
B4b9414:L4b9414:{c.instructions+=3;NFSU2_TR(0x4b9414);
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
B4b9417:{NFSU2_TR(0x4b9417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9418:{NFSU2_TR(0x4b9418);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9419:L4b9419:{c.instructions+=3;NFSU2_TR(0x4b9419);
u8 U[4];
w4(U+0,u32(0x78f138ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b941e:{NFSU2_TR(0x4b941e);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9423:{NFSU2_TR(0x4b9423);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9428ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4b9428:L4b9428:{c.instructions+=2;NFSU2_TR(0x4b9428);
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
B4b942b:{NFSU2_TR(0x4b942b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9430:L4b9430:{c.instructions+=13;NFSU2_TR(0x4b9430);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9432:{NFSU2_TR(0x4b9432);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9437:{NFSU2_TR(0x4b9437);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b943d:{NFSU2_TR(0x4b943d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b943e:{NFSU2_TR(0x4b943e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9445:{NFSU2_TR(0x4b9445);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9446:{NFSU2_TR(0x4b9446);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9447:{NFSU2_TR(0x4b9447);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9448:{NFSU2_TR(0x4b9448);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b944c:{NFSU2_TR(0x4b944c);
__builtin_memmove((R+24),(R+4),4);
}
B4b944e:{NFSU2_TR(0x4b944e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b944f:{NFSU2_TR(0x4b944f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9453:{NFSU2_TR(0x4b9453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9458ull));
TAIL_STATIC(0x551de0u,551);
}
B4b9458:L4b9458:{c.instructions+=11;NFSU2_TR(0x4b9458);
u8 U[4];
w4(U+0,u32(0x78fce8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b945e:{NFSU2_TR(0x4b945e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9461:{NFSU2_TR(0x4b9461);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9464:{NFSU2_TR(0x4b9464);
__builtin_memmove((R+4),gp(0x836238),4);
}
B4b946a:{NFSU2_TR(0x4b946a);
__builtin_memmove((R+8),gp(0x835978),4);
}
B4b9470:{NFSU2_TR(0x4b9470);
__builtin_memmove((R+0),gp(0x835e34),4);
}
B4b9475:{NFSU2_TR(0x4b9475);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9476:{NFSU2_TR(0x4b9476);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9477:{NFSU2_TR(0x4b9477);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9478:{NFSU2_TR(0x4b9478);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b9480:{NFSU2_TR(0x4b9480);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9485ull));
TAIL_STATIC(0x49da40u,49d);
}
B4b9485:L4b9485:{c.instructions+=5;NFSU2_TR(0x4b9485);
__builtin_memmove((R+28),(R+0),4);
}
B4b9487:{NFSU2_TR(0x4b9487);
__builtin_memmove((R+0),gp(0x836238),4);
}
B4b948c:{NFSU2_TR(0x4b948c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b948f:{NFSU2_TR(0x4b948f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10073c4full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9494:{NFSU2_TR(0x4b9494);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b94c8;}}
}
B4b9496:L4b9496:{c.instructions+=4;NFSU2_TR(0x4b9496);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b9499:{NFSU2_TR(0x4b9499);
u8 U[4];
w4(U+0,u32(0x10073c4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b949e:{NFSU2_TR(0x4b949e);
u8 U[4];
w4(U+0,u32(0x78fcf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b94a3:{NFSU2_TR(0x4b94a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b94a8ull));
TAIL_STATIC(0x505450u,505);
}
B4b94a8:L4b94a8:{c.instructions+=3;NFSU2_TR(0x4b94a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b94a9:{NFSU2_TR(0x4b94a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b94aa:{NFSU2_TR(0x4b94aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b94afull));
TAIL_STATIC(0x537a10u,537);
}
B4b94af:L4b94af:{c.instructions+=3;NFSU2_TR(0x4b94af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b94b2:{NFSU2_TR(0x4b94b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b94b3:{NFSU2_TR(0x4b94b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b94b8ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b94b8:L4b94b8:{c.instructions+=5;NFSU2_TR(0x4b94b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b94bb:{NFSU2_TR(0x4b94bb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b94bd:{NFSU2_TR(0x4b94bd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b94bf:{NFSU2_TR(0x4b94bf);
__builtin_memmove((R+4),(R+24),4);
}
B4b94c1:{NFSU2_TR(0x4b94c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b94c6ull));
TAIL_STATIC(0x49db00u,49d);
}
B4b94c6:L4b94c6:{c.instructions+=1;NFSU2_TR(0x4b94c6);
{goto L4b9541;}
}
B4b94c8:L4b94c8:{c.instructions+=3;NFSU2_TR(0x4b94c8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xa3f55e1full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b94ce:{NFSU2_TR(0x4b94ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b94cf:{NFSU2_TR(0x4b94cf);
if(r1(R+518)){{goto L4b94dd;}}
}
B4b94d1:L4b94d1:{c.instructions+=2;NFSU2_TR(0x4b94d1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5a6f817full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b94d7:{NFSU2_TR(0x4b94d7);
if(r1(R+518)){{goto L4b94dd;}}
}
B4b94d9:L4b94d9:{c.instructions+=2;NFSU2_TR(0x4b94d9);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4b94db:{NFSU2_TR(0x4b94db);
{goto L4b94df;}
}
B4b94dd:L4b94dd:{c.instructions+=1;NFSU2_TR(0x4b94dd);
w1(R+12,u8(0x1ull));
}
B4b94df:L4b94df:{c.instructions+=3;NFSU2_TR(0x4b94df);
w4(R+4,u32(0x89cf48ull));
}
B4b94e4:{NFSU2_TR(0x4b94e4);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b94e8:{NFSU2_TR(0x4b94e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b94edull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4b94ed:L4b94ed:{c.instructions+=2;NFSU2_TR(0x4b94ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b94ef:{NFSU2_TR(0x4b94ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b94fa;}}
}
B4b94f1:L4b94f1:{c.instructions+=3;NFSU2_TR(0x4b94f1);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4b94f6:{NFSU2_TR(0x4b94f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b94f8:{NFSU2_TR(0x4b94f8);
if(r1(R+518)){{goto L4b9511;}}
}
B4b94fa:L4b94fa:{c.instructions+=6;NFSU2_TR(0x4b94fa);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B4b94fc:{NFSU2_TR(0x4b94fc);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b9501:{NFSU2_TR(0x4b9501);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4b9503:{NFSU2_TR(0x4b9503);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xafdc7a93ull))));
}
B4b9509:{NFSU2_TR(0x4b9509);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x3f920248ull))));
}
B4b950f:{NFSU2_TR(0x4b950f);
__builtin_memmove((R+28),(R+12),4);
}
B4b9511:L4b9511:{c.instructions+=4;NFSU2_TR(0x4b9511);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b9514:{NFSU2_TR(0x4b9514);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9515:{NFSU2_TR(0x4b9515);
u8 U[4];
w4(U+0,u32(0x78fcf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b951a:{NFSU2_TR(0x4b951a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b951full));
TAIL_STATIC(0x505450u,505);
}
B4b951f:L4b951f:{c.instructions+=3;NFSU2_TR(0x4b951f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9520:{NFSU2_TR(0x4b9520);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9521:{NFSU2_TR(0x4b9521);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9526ull));
TAIL_STATIC(0x537a10u,537);
}
B4b9526:L4b9526:{c.instructions+=3;NFSU2_TR(0x4b9526);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b9529:{NFSU2_TR(0x4b9529);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b952a:{NFSU2_TR(0x4b952a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b952full));
TAIL_STATIC(0x50c900u,50c);
}
B4b952f:L4b952f:{c.instructions+=6;NFSU2_TR(0x4b952f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9533:{NFSU2_TR(0x4b9533);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b9536:{NFSU2_TR(0x4b9536);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9538:{NFSU2_TR(0x4b9538);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9539:{NFSU2_TR(0x4b9539);
__builtin_memmove((R+4),(R+24),4);
}
B4b953b:{NFSU2_TR(0x4b953b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9540ull));
TAIL_STATIC(0x49db00u,49d);
}
B4b9540:L4b9540:{c.instructions+=1;NFSU2_TR(0x4b9540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b9541:L4b9541:{c.instructions+=2;NFSU2_TR(0x4b9541);
u8 U[8];
__builtin_memmove((U+0),gp(0x8500d0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4b9548:{NFSU2_TR(0x4b9548);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4b957f;}}
}
B4b954a:L4b954a:{c.instructions+=2;NFSU2_TR(0x4b954a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b954c:{NFSU2_TR(0x4b954c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9551ull));
TAIL_STATIC(0x58fd50u,58f);
}
B4b9551:L4b9551:{c.instructions+=4;NFSU2_TR(0x4b9551);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b9554:{NFSU2_TR(0x4b9554);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9556:{NFSU2_TR(0x4b9556);
w4(R+4,u32(0x89cf48ull));
}
B4b955b:{NFSU2_TR(0x4b955b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9560ull));
TAIL_STATIC(0x5fe2b0u,5fe);
}
B4b9560:L4b9560:{c.instructions+=2;NFSU2_TR(0x4b9560);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b956a:{NFSU2_TR(0x4b956a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b957f;}}
}
B4b956c:L4b956c:{c.instructions+=3;NFSU2_TR(0x4b956c);
__builtin_memmove((R+0),gp(0x8500c7),1);
}
B4b9571:{NFSU2_TR(0x4b9571);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b9573:{NFSU2_TR(0x4b9573);
if(r1(R+518)){{goto L4b957f;}}
}
B4b9575:L4b9575:{c.instructions+=2;NFSU2_TR(0x4b9575);
w4(R+4,u32(0x89cf48ull));
}
B4b957a:{NFSU2_TR(0x4b957a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b957full));
TAIL_STATIC(0x5f08f0u,5f0);
}
B4b957f:L4b957f:{c.instructions+=10;NFSU2_TR(0x4b957f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9582:{NFSU2_TR(0x4b9582);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9586:{NFSU2_TR(0x4b9586);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b958a:{NFSU2_TR(0x4b958a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b958e:{NFSU2_TR(0x4b958e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b958f:{NFSU2_TR(0x4b958f);
__builtin_memmove((R+0),(R+24),4);
}
B4b9591:{NFSU2_TR(0x4b9591);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9592:{NFSU2_TR(0x4b9592);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9599:{NFSU2_TR(0x4b9599);
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
B4b959c:{NFSU2_TR(0x4b959c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b95a0:L4b95a0:{c.instructions+=3;NFSU2_TR(0x4b95a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b95a1:{NFSU2_TR(0x4b95a1);
__builtin_memmove((R+24),(R+4),4);
}
B4b95a3:{NFSU2_TR(0x4b95a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b95a8ull));
TAIL_STATIC(0x49da30u,49d);
}
B4b95a8:L4b95a8:{c.instructions+=2;NFSU2_TR(0x4b95a8);
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
B4b95ad:{NFSU2_TR(0x4b95ad);
if(r1(R+518)){{goto L4b95b8;}}
}
B4b95af:L4b95af:{c.instructions+=2;NFSU2_TR(0x4b95af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b95b0:{NFSU2_TR(0x4b95b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b95b5ull));
TAIL_STATIC(0x575630u,575);
}
B4b95b5:L4b95b5:{c.instructions+=1;NFSU2_TR(0x4b95b5);
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
B4b95b8:L4b95b8:{c.instructions+=3;NFSU2_TR(0x4b95b8);
__builtin_memmove((R+0),(R+24),4);
}
B4b95ba:{NFSU2_TR(0x4b95ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b95bb:{NFSU2_TR(0x4b95bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b95c0:L4b95c0:{c.instructions+=9;NFSU2_TR(0x4b95c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b95c1:{NFSU2_TR(0x4b95c1);
__builtin_memmove((R+24),(R+4),4);
}
B4b95c3:{NFSU2_TR(0x4b95c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b95c6:{NFSU2_TR(0x4b95c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b95ca:{NFSU2_TR(0x4b95ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b95ce:{NFSU2_TR(0x4b95ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b95d2:{NFSU2_TR(0x4b95d2);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4b95d6:{NFSU2_TR(0x4b95d6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b95d9:{NFSU2_TR(0x4b95d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b95f3;}}
}
B4b95db:L4b95db:{c.instructions+=2;NFSU2_TR(0x4b95db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b95de:{NFSU2_TR(0x4b95de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b95e3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b93a0u);}goto L4b93a0;}
}
B4b95e3:L4b95e3:{c.instructions+=3;NFSU2_TR(0x4b95e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b95e6:{NFSU2_TR(0x4b95e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b95e7:{NFSU2_TR(0x4b95e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b95ecull));
TAIL_STATIC(0x5379a0u,537);
}
B4b95ec:L4b95ec:{c.instructions+=3;NFSU2_TR(0x4b95ec);
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
B4b95ef:{NFSU2_TR(0x4b95ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b95f0:{NFSU2_TR(0x4b95f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b95f3:L4b95f3:{c.instructions+=2;NFSU2_TR(0x4b95f3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b95f6:{NFSU2_TR(0x4b95f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b961f;}}
}
B4b95f8:L4b95f8:{c.instructions+=2;NFSU2_TR(0x4b95f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b95fb:{NFSU2_TR(0x4b95fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9600ull));
TAIL_STATIC(0x49d950u,49d);
}
B4b9600:L4b9600:{c.instructions+=3;NFSU2_TR(0x4b9600);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9602:{NFSU2_TR(0x4b9602);
u8 U[4];
w4(U+0,u32(0xd15504ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9607:{NFSU2_TR(0x4b9607);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b960cull));
TAIL_STATIC(0x55dde0u,55d);
}
B4b960c:L4b960c:{c.instructions+=4;NFSU2_TR(0x4b960c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b960f:{NFSU2_TR(0x4b960f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b9612:{NFSU2_TR(0x4b9612);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9613:{NFSU2_TR(0x4b9613);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9618ull));
TAIL_STATIC(0x5379a0u,537);
}
B4b9618:L4b9618:{c.instructions+=3;NFSU2_TR(0x4b9618);
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
B4b961b:{NFSU2_TR(0x4b961b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b961c:{NFSU2_TR(0x4b961c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b961f:L4b961f:{c.instructions+=2;NFSU2_TR(0x4b961f);
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
B4b9622:{NFSU2_TR(0x4b9622);
if(r1(R+518)){{goto L4b9628;}}
}
B4b9624:L4b9624:{c.instructions+=2;NFSU2_TR(0x4b9624);
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
B4b9626:{NFSU2_TR(0x4b9626);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9637;}}
}
B4b9628:L4b9628:{c.instructions+=1;NFSU2_TR(0x4b9628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b962dull));
TAIL_STATIC(0x5b7c40u,5b7);
}
B4b962d:L4b962d:{c.instructions+=1;NFSU2_TR(0x4b962d);
s4(0x864f4c,u32(0x1ull));
}
B4b9637:L4b9637:{c.instructions+=3;NFSU2_TR(0x4b9637);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b963a:{NFSU2_TR(0x4b963a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b963b:{NFSU2_TR(0x4b963b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9640ull));
TAIL_STATIC(0x5379a0u,537);
}
B4b9640:L4b9640:{c.instructions+=3;NFSU2_TR(0x4b9640);
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
B4b9643:{NFSU2_TR(0x4b9643);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9644:{NFSU2_TR(0x4b9644);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9650:L4b9650:{c.instructions+=7;NFSU2_TR(0x4b9650);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9651:{NFSU2_TR(0x4b9651);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9652:{NFSU2_TR(0x4b9652);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b9658:{NFSU2_TR(0x4b9658);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9659:{NFSU2_TR(0x4b9659);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b965f:{NFSU2_TR(0x4b965f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b9661:{NFSU2_TR(0x4b9661);
if(r1(R+518)){{goto L4b967e;}}
}
B4b9663:L4b9663:{c.instructions+=1;NFSU2_TR(0x4b9663);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b9667:L4b9667:{c.instructions+=4;NFSU2_TR(0x4b9667);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b966a:{NFSU2_TR(0x4b966a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b966b:{NFSU2_TR(0x4b966b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b966c:{NFSU2_TR(0x4b966c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9671ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B4b9671:L4b9671:{c.instructions+=3;NFSU2_TR(0x4b9671);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b9674:{NFSU2_TR(0x4b9674);
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
B4b9676:{NFSU2_TR(0x4b9676);
if(r1(R+518)){{goto L4b9686;}}
}
B4b9678:L4b9678:{c.instructions+=3;NFSU2_TR(0x4b9678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4b967a:{NFSU2_TR(0x4b967a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b967c:{NFSU2_TR(0x4b967c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b9667u);}goto L4b9667;}}
}
B4b967e:L4b967e:{c.instructions+=5;NFSU2_TR(0x4b967e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b967f:{NFSU2_TR(0x4b967f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9680:{NFSU2_TR(0x4b9680);
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
B4b9682:{NFSU2_TR(0x4b9682);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b9683:{NFSU2_TR(0x4b9683);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9686:L4b9686:{c.instructions+=5;NFSU2_TR(0x4b9686);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9687:{NFSU2_TR(0x4b9687);
__builtin_memmove((R+0),(R+24),4);
}
B4b9689:{NFSU2_TR(0x4b9689);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b968a:{NFSU2_TR(0x4b968a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b968b:{NFSU2_TR(0x4b968b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9690:L4b9690:{c.instructions+=7;NFSU2_TR(0x4b9690);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9691:{NFSU2_TR(0x4b9691);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9692:{NFSU2_TR(0x4b9692);
__builtin_memmove((R+24),(R+4),4);
}
B4b9694:{NFSU2_TR(0x4b9694);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b969a:{NFSU2_TR(0x4b969a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b969d:{NFSU2_TR(0x4b969d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b969e:{NFSU2_TR(0x4b969e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b96a1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b96a1:L4b96a1:{c.instructions+=4;NFSU2_TR(0x4b96a1);
__builtin_memmove((R+28),(R+0),4);
}
B4b96a3:{NFSU2_TR(0x4b96a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b96a4:{NFSU2_TR(0x4b96a4);
__builtin_memmove((R+4),(R+24),4);
}
B4b96a6:{NFSU2_TR(0x4b96a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b96abull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b9650u);}goto L4b9650;}
}
B4b96ab:L4b96ab:{c.instructions+=5;NFSU2_TR(0x4b96ab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b96ad:{NFSU2_TR(0x4b96ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b96ae:{NFSU2_TR(0x4b96ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b96af:{NFSU2_TR(0x4b96af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b96b5:{NFSU2_TR(0x4b96b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b96baull));
TAIL_STATIC(0x537980u,537);
}
B4b96ba:L4b96ba:{c.instructions+=4;NFSU2_TR(0x4b96ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b96c0:{NFSU2_TR(0x4b96c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b96c1:{NFSU2_TR(0x4b96c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b96c2:{NFSU2_TR(0x4b96c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b96c7ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B4b96c7:L4b96c7:{c.instructions+=6;NFSU2_TR(0x4b96c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b96ca:{NFSU2_TR(0x4b96ca);
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
B4b96cc:{NFSU2_TR(0x4b96cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b96cd:{NFSU2_TR(0x4b96cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b96ce:{NFSU2_TR(0x4b96ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b96cf:{NFSU2_TR(0x4b96cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b96eb;}}
}
B4b96d1:L4b96d1:{c.instructions+=3;NFSU2_TR(0x4b96d1);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4b96d7:{NFSU2_TR(0x4b96d7);
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
B4b96d9:{NFSU2_TR(0x4b96d9);
if(r1(R+518)){{goto L4b96e1;}}
}
B4b96db:L4b96db:{c.instructions+=3;NFSU2_TR(0x4b96db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b96dd:{NFSU2_TR(0x4b96dd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b96df:{NFSU2_TR(0x4b96df);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b96e1ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4b96e1:L4b96e1:{c.instructions+=1;NFSU2_TR(0x4b96e1);
s4(0x836370,u32(0x0ull));
}
B4b96eb:L4b96eb:{c.instructions+=1;NFSU2_TR(0x4b96eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b96f0:L4b96f0:{c.instructions+=7;NFSU2_TR(0x4b96f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b96f1:{NFSU2_TR(0x4b96f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b96f2:{NFSU2_TR(0x4b96f2);
__builtin_memmove((R+24),(R+4),4);
}
B4b96f4:{NFSU2_TR(0x4b96f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b96fa:{NFSU2_TR(0x4b96fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b96fd:{NFSU2_TR(0x4b96fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b96fe:{NFSU2_TR(0x4b96fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9701ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b9701:L4b9701:{c.instructions+=4;NFSU2_TR(0x4b9701);
__builtin_memmove((R+28),(R+0),4);
}
B4b9703:{NFSU2_TR(0x4b9703);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9704:{NFSU2_TR(0x4b9704);
__builtin_memmove((R+4),(R+24),4);
}
B4b9706:{NFSU2_TR(0x4b9706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b970bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b9650u);}goto L4b9650;}
}
B4b970b:L4b970b:{c.instructions+=5;NFSU2_TR(0x4b970b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b970d:{NFSU2_TR(0x4b970d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b970e:{NFSU2_TR(0x4b970e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b970f:{NFSU2_TR(0x4b970f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9715:{NFSU2_TR(0x4b9715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b971aull));
TAIL_STATIC(0x537980u,537);
}
B4b971a:L4b971a:{c.instructions+=4;NFSU2_TR(0x4b971a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9720:{NFSU2_TR(0x4b9720);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9721:{NFSU2_TR(0x4b9721);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9722:{NFSU2_TR(0x4b9722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9727ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B4b9727:L4b9727:{c.instructions+=6;NFSU2_TR(0x4b9727);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b972a:{NFSU2_TR(0x4b972a);
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
B4b972c:{NFSU2_TR(0x4b972c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b972d:{NFSU2_TR(0x4b972d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b972e:{NFSU2_TR(0x4b972e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b972f:{NFSU2_TR(0x4b972f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b974b;}}
}
B4b9731:L4b9731:{c.instructions+=3;NFSU2_TR(0x4b9731);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4b9737:{NFSU2_TR(0x4b9737);
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
B4b9739:{NFSU2_TR(0x4b9739);
if(r1(R+518)){{goto L4b9741;}}
}
B4b973b:L4b973b:{c.instructions+=3;NFSU2_TR(0x4b973b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b973d:{NFSU2_TR(0x4b973d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b973f:{NFSU2_TR(0x4b973f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9741ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4b9741:L4b9741:{c.instructions+=1;NFSU2_TR(0x4b9741);
s4(0x836370,u32(0x0ull));
}
B4b974b:L4b974b:{c.instructions+=1;NFSU2_TR(0x4b974b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9750:L4b9750:{c.instructions+=8;NFSU2_TR(0x4b9750);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9752:{NFSU2_TR(0x4b9752);
u8 U[4];
w4(U+0,u32(0x773714ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9757:{NFSU2_TR(0x4b9757);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b975d:{NFSU2_TR(0x4b975d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b975e:{NFSU2_TR(0x4b975e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9765:{NFSU2_TR(0x4b9765);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9766:{NFSU2_TR(0x4b9766);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9768:{NFSU2_TR(0x4b9768);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b976dull));
TAIL_STATIC(0x575620u,575);
}
B4b976d:L4b976d:{c.instructions+=5;NFSU2_TR(0x4b976d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b9770:{NFSU2_TR(0x4b9770);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4b9774:{NFSU2_TR(0x4b9774);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9776:{NFSU2_TR(0x4b9776);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b977e:{NFSU2_TR(0x4b977e);
if(r1(R+518)){{goto L4b979b;}}
}
B4b9780:L4b9780:{c.instructions+=4;NFSU2_TR(0x4b9780);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9784:{NFSU2_TR(0x4b9784);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9785:{NFSU2_TR(0x4b9785);
__builtin_memmove((R+4),(R+0),4);
}
B4b9787:{NFSU2_TR(0x4b9787);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b978cull));
TAIL_STATIC(0x49de10u,49d);
}
B4b978c:L4b978c:{c.instructions+=4;NFSU2_TR(0x4b978c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9790:{NFSU2_TR(0x4b9790);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9797:{NFSU2_TR(0x4b9797);
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
B4b979a:{NFSU2_TR(0x4b979a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b979b:L4b979b:{c.instructions+=5;NFSU2_TR(0x4b979b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b979f:{NFSU2_TR(0x4b979f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b97a1:{NFSU2_TR(0x4b97a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b97a8:{NFSU2_TR(0x4b97a8);
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
B4b97ab:{NFSU2_TR(0x4b97ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b97b0:L4b97b0:{c.instructions+=3;NFSU2_TR(0x4b97b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b97b1:{NFSU2_TR(0x4b97b1);
__builtin_memmove((R+24),(R+4),4);
}
B4b97b3:{NFSU2_TR(0x4b97b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b97b8ull));
TAIL_STATIC(0x49deb0u,49d);
}
B4b97b8:L4b97b8:{c.instructions+=2;NFSU2_TR(0x4b97b8);
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
B4b97bd:{NFSU2_TR(0x4b97bd);
if(r1(R+518)){{goto L4b97c8;}}
}
B4b97bf:L4b97bf:{c.instructions+=2;NFSU2_TR(0x4b97bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b97c0:{NFSU2_TR(0x4b97c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b97c5ull));
TAIL_STATIC(0x575630u,575);
}
B4b97c5:L4b97c5:{c.instructions+=1;NFSU2_TR(0x4b97c5);
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
B4b97c8:L4b97c8:{c.instructions+=3;NFSU2_TR(0x4b97c8);
__builtin_memmove((R+0),(R+24),4);
}
B4b97ca:{NFSU2_TR(0x4b97ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b97cb:{NFSU2_TR(0x4b97cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b97d0:L4b97d0:{c.instructions+=6;NFSU2_TR(0x4b97d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b97d4:{NFSU2_TR(0x4b97d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b97d9:{NFSU2_TR(0x4b97d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b97da:{NFSU2_TR(0x4b97da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b97db:{NFSU2_TR(0x4b97db);
__builtin_memmove((R+24),(R+4),4);
}
B4b97dd:{NFSU2_TR(0x4b97dd);
if(r1(R+518)){{goto L4b9906;}}
}
B4b97e3:L4b97e3:{c.instructions+=2;NFSU2_TR(0x4b97e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b97e8:{NFSU2_TR(0x4b97e8);
if(r1(R+518)){{goto L4b9906;}}
}
B4b97ee:L4b97ee:{c.instructions+=2;NFSU2_TR(0x4b97ee);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b97f3:{NFSU2_TR(0x4b97f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9916;}}
}
B4b97f9:L4b97f9:{c.instructions+=1;NFSU2_TR(0x4b97f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b97feull));
TAIL_STATIC(0x49df20u,49d);
}
B4b97fe:L4b97fe:{c.instructions+=2;NFSU2_TR(0x4b97fe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b9801:{NFSU2_TR(0x4b9801);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b98b3;}}
}
B4b9807:L4b9807:{c.instructions+=3;NFSU2_TR(0x4b9807);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b980a:{NFSU2_TR(0x4b980a);
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
B4b980c:{NFSU2_TR(0x4b980c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9916;}}
}
B4b9812:L4b9812:{c.instructions+=3;NFSU2_TR(0x4b9812);
__builtin_memmove((R+0),gp(0x8667e0),4);
}
B4b9817:{NFSU2_TR(0x4b9817);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2d646966ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2d646966ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b981c:{NFSU2_TR(0x4b981c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4b9864;}}
}
B4b981e:L4b981e:{c.instructions+=1;NFSU2_TR(0x4b981e);
if(r1(R+518)){{goto L4b984a;}}
}
B4b9820:L4b9820:{c.instructions+=2;NFSU2_TR(0x4b9820);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2d617468ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9825:{NFSU2_TR(0x4b9825);
if(r1(R+518)){{goto L4b9843;}}
}
B4b9827:L4b9827:{c.instructions+=2;NFSU2_TR(0x4b9827);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2d636667ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b982c:{NFSU2_TR(0x4b982c);
if(r1(R+518)){{goto L4b983c;}}
}
B4b982e:L4b982e:{c.instructions+=2;NFSU2_TR(0x4b982e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2d646576ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9833:{NFSU2_TR(0x4b9833);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9872;}}
}
B4b9835:L4b9835:{c.instructions+=2;NFSU2_TR(0x4b9835);
u8 U[4];
w4(U+0,u32(0x8645e0d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b983a:{NFSU2_TR(0x4b983a);
{goto L4b984f;}
}
B4b983c:L4b983c:{c.instructions+=2;NFSU2_TR(0x4b983c);
u8 U[4];
w4(U+0,u32(0xb9bcde4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9841:{NFSU2_TR(0x4b9841);
{goto L4b984f;}
}
B4b9843:L4b9843:{c.instructions+=2;NFSU2_TR(0x4b9843);
u8 U[4];
w4(U+0,u32(0xe097de5full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9848:{NFSU2_TR(0x4b9848);
{goto L4b987e;}
}
B4b984a:L4b984a:{c.instructions+=1;NFSU2_TR(0x4b984a);
u8 U[4];
w4(U+0,u32(0x81273f29ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b984f:L4b984f:{c.instructions+=2;NFSU2_TR(0x4b984f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b9852:{NFSU2_TR(0x4b9852);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9857ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b9857:L4b9857:{c.instructions+=4;NFSU2_TR(0x4b9857);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9858:{NFSU2_TR(0x4b9858);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b985d:{NFSU2_TR(0x4b985d);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9862:{NFSU2_TR(0x4b9862);
{goto L4b98d7;}
}
B4b9864:L4b9864:{c.instructions+=2;NFSU2_TR(0x4b9864);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2d696e69ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9869:{NFSU2_TR(0x4b9869);
if(r1(R+518)){{goto L4b98ac;}}
}
B4b986b:L4b986b:{c.instructions+=2;NFSU2_TR(0x4b986b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2d6c6e6bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9870:{NFSU2_TR(0x4b9870);
if(r1(R+518)){{goto L4b9879;}}
}
B4b9872:L4b9872:{c.instructions+=2;NFSU2_TR(0x4b9872);
u8 U[4];
w4(U+0,u32(0xe156e946ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9877:{NFSU2_TR(0x4b9877);
{goto L4b987e;}
}
B4b9879:L4b9879:{c.instructions+=1;NFSU2_TR(0x4b9879);
u8 U[4];
w4(U+0,u32(0x31d451c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b987e:L4b987e:{c.instructions+=2;NFSU2_TR(0x4b987e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b9881:{NFSU2_TR(0x4b9881);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9886ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b9886:L4b9886:{c.instructions+=7;NFSU2_TR(0x4b9886);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9887:{NFSU2_TR(0x4b9887);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b988c:{NFSU2_TR(0x4b988c);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9891:{NFSU2_TR(0x4b9891);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9896:{NFSU2_TR(0x4b9896);
u8 U[4];
w4(U+0,u32(0x790038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b989b:{NFSU2_TR(0x4b989b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b989c:{NFSU2_TR(0x4b989c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b98a1ull));
TAIL_STATIC(0x558540u,558);
}
B4b98a1:L4b98a1:{c.instructions+=5;NFSU2_TR(0x4b98a1);
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
B4b98a4:{NFSU2_TR(0x4b98a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b98a5:{NFSU2_TR(0x4b98a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b98a8:{NFSU2_TR(0x4b98a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b98a9:{NFSU2_TR(0x4b98a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b98ac:L4b98ac:{c.instructions+=2;NFSU2_TR(0x4b98ac);
u8 U[4];
w4(U+0,u32(0x82ec0f03ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b98b1:{NFSU2_TR(0x4b98b1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b984fu);}goto L4b984f;}
}
B4b98b3:L4b98b3:{c.instructions+=2;NFSU2_TR(0x4b98b3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b98b6:{NFSU2_TR(0x4b98b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b98f2;}}
}
B4b98b8:L4b98b8:{c.instructions+=3;NFSU2_TR(0x4b98b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b98bb:{NFSU2_TR(0x4b98bb);
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
B4b98bd:{NFSU2_TR(0x4b98bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9916;}}
}
B4b98bf:L4b98bf:{c.instructions+=3;NFSU2_TR(0x4b98bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b98c2:{NFSU2_TR(0x4b98c2);
u8 U[4];
w4(U+0,u32(0x33ce3d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b98c7:{NFSU2_TR(0x4b98c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b98ccull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b98cc:L4b98cc:{c.instructions+=3;NFSU2_TR(0x4b98cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b98cd:{NFSU2_TR(0x4b98cd);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b98d2:{NFSU2_TR(0x4b98d2);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b98d7:L4b98d7:{c.instructions+=4;NFSU2_TR(0x4b98d7);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b98dc:{NFSU2_TR(0x4b98dc);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b98e1:{NFSU2_TR(0x4b98e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b98e2:{NFSU2_TR(0x4b98e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b98e7ull));
TAIL_STATIC(0x558540u,558);
}
B4b98e7:L4b98e7:{c.instructions+=5;NFSU2_TR(0x4b98e7);
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
B4b98ea:{NFSU2_TR(0x4b98ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b98eb:{NFSU2_TR(0x4b98eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b98ee:{NFSU2_TR(0x4b98ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b98ef:{NFSU2_TR(0x4b98ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b98f2:L4b98f2:{c.instructions+=2;NFSU2_TR(0x4b98f2);
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
B4b98f4:{NFSU2_TR(0x4b98f4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4b9916;}}
}
B4b98f6:L4b98f6:{c.instructions+=2;NFSU2_TR(0x4b98f6);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4b98fc:{NFSU2_TR(0x4b98fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9901ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b9690u);}goto L4b9690;}
}
B4b9901:L4b9901:{c.instructions+=3;NFSU2_TR(0x4b9901);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9902:{NFSU2_TR(0x4b9902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9903:{NFSU2_TR(0x4b9903);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9906:L4b9906:{c.instructions+=4;NFSU2_TR(0x4b9906);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9909:{NFSU2_TR(0x4b9909);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b990a:{NFSU2_TR(0x4b990a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b990e:{NFSU2_TR(0x4b990e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9913ull));
TAIL_STATIC(0x4a0140u,4a0);
}
B4b9913:L4b9913:{c.instructions+=1;NFSU2_TR(0x4b9913);
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
B4b9916:L4b9916:{c.instructions+=3;NFSU2_TR(0x4b9916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9917:{NFSU2_TR(0x4b9917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9918:{NFSU2_TR(0x4b9918);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9920:L4b9920:{c.instructions+=7;NFSU2_TR(0x4b9920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B4b9923:{NFSU2_TR(0x4b9923);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9924:{NFSU2_TR(0x4b9924);
__builtin_memmove((R+24),(R+4),4);
}
B4b9926:{NFSU2_TR(0x4b9926);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9929:{NFSU2_TR(0x4b9929);
u8 U[4];
w4(U+0,u32(0x5b2b70full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b992e:{NFSU2_TR(0x4b992e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b992f:{NFSU2_TR(0x4b992f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9934ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b9934:L4b9934:{c.instructions+=6;NFSU2_TR(0x4b9934);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4b9939:{NFSU2_TR(0x4b9939);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4b993f:{NFSU2_TR(0x4b993f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
}
B4b9944:{NFSU2_TR(0x4b9944);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b9947:{NFSU2_TR(0x4b9947);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b9949:{NFSU2_TR(0x4b9949);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9961;}}
}
B4b994b:L4b994b:{c.instructions+=4;NFSU2_TR(0x4b994b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b994e:{NFSU2_TR(0x4b994e);
u8 U[4];
w4(U+0,u32(0xbb298a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9953:{NFSU2_TR(0x4b9953);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9954:{NFSU2_TR(0x4b9954);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9959ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b9959:L4b9959:{c.instructions+=4;NFSU2_TR(0x4b9959);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b995c:{NFSU2_TR(0x4b995c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b995d:{NFSU2_TR(0x4b995d);
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
B4b9960:{NFSU2_TR(0x4b9960);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9961:L4b9961:{c.instructions+=2;NFSU2_TR(0x4b9961);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9962:{NFSU2_TR(0x4b9962);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9967ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4b9967:L4b9967:{c.instructions+=3;NFSU2_TR(0x4b9967);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b996a:{NFSU2_TR(0x4b996a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x12ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b996d:{NFSU2_TR(0x4b996d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4b99a8;}}
}
B4b996f:L4b996f:{c.instructions+=7;NFSU2_TR(0x4b996f);
__builtin_memmove((R+8),gp(0x836370),4);
}
B4b9975:{NFSU2_TR(0x4b9975);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9977:{NFSU2_TR(0x4b9977);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x88ull))));
}
B4b997d:{NFSU2_TR(0x4b997d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b997e:{NFSU2_TR(0x4b997e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4b9982:{NFSU2_TR(0x4b9982);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9983:{NFSU2_TR(0x4b9983);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9988ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4b9988:L4b9988:{c.instructions+=7;NFSU2_TR(0x4b9988);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b998b:{NFSU2_TR(0x4b998b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b998f:{NFSU2_TR(0x4b998f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9990:{NFSU2_TR(0x4b9990);
u8 U[4];
w4(U+0,u32(0x7946c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9995:{NFSU2_TR(0x4b9995);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9996:{NFSU2_TR(0x4b9996);
u8 U[5];
w4(U+0,u32(u32(u32(0x2eull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b999b:{NFSU2_TR(0x4b999b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b99a0ull));
TAIL_STATIC(0x537be0u,537);
}
B4b99a0:L4b99a0:{c.instructions+=4;NFSU2_TR(0x4b99a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4b99a3:{NFSU2_TR(0x4b99a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b99a4:{NFSU2_TR(0x4b99a4);
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
B4b99a7:{NFSU2_TR(0x4b99a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b99a8:L4b99a8:{c.instructions+=7;NFSU2_TR(0x4b99a8);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4b99ad:{NFSU2_TR(0x4b99ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b99b0:{NFSU2_TR(0x4b99b0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
}
B4b99b5:{NFSU2_TR(0x4b99b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b99b6:{NFSU2_TR(0x4b99b6);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b99bb:{NFSU2_TR(0x4b99bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b99bc:{NFSU2_TR(0x4b99bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b99c1ull));
TAIL_STATIC(0x537be0u,537);
}
B4b99c1:L4b99c1:{c.instructions+=4;NFSU2_TR(0x4b99c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b99c4:{NFSU2_TR(0x4b99c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b99c5:{NFSU2_TR(0x4b99c5);
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
B4b99c8:{NFSU2_TR(0x4b99c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b99d0:L4b99d0:{c.instructions+=6;NFSU2_TR(0x4b99d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b99d1:{NFSU2_TR(0x4b99d1);
__builtin_memmove((R+24),(R+4),4);
}
B4b99d3:{NFSU2_TR(0x4b99d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b99d6:{NFSU2_TR(0x4b99d6);
u8 U[4];
w4(U+0,u32(0x5b2b70full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b99db:{NFSU2_TR(0x4b99db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b99dc:{NFSU2_TR(0x4b99dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b99e1ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b99e1:L4b99e1:{c.instructions+=4;NFSU2_TR(0x4b99e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b99e7:{NFSU2_TR(0x4b99e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b99ea:{NFSU2_TR(0x4b99ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b99ec:{NFSU2_TR(0x4b99ec);
if(r1(R+518)){{goto L4b9a06;}}
}
B4b99ee:L4b99ee:{c.instructions+=2;NFSU2_TR(0x4b99ee);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4b99f1:{NFSU2_TR(0x4b99f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9a06;}}
}
B4b99f3:L4b99f3:{c.instructions+=4;NFSU2_TR(0x4b99f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b99f6:{NFSU2_TR(0x4b99f6);
u8 U[4];
w4(U+0,u32(0xbb298a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b99fb:{NFSU2_TR(0x4b99fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b99fc:{NFSU2_TR(0x4b99fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9a01ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b9a01:L4b9a01:{c.instructions+=3;NFSU2_TR(0x4b9a01);
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
B4b9a04:{NFSU2_TR(0x4b9a04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9a05:{NFSU2_TR(0x4b9a05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9a06:L4b9a06:{c.instructions+=5;NFSU2_TR(0x4b9a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b9a09:{NFSU2_TR(0x4b9a09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9a0a:{NFSU2_TR(0x4b9a0a);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9a0f:{NFSU2_TR(0x4b9a0f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9a10:{NFSU2_TR(0x4b9a10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9a15ull));
TAIL_STATIC(0x537be0u,537);
}
B4b9a15:L4b9a15:{c.instructions+=3;NFSU2_TR(0x4b9a15);
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
B4b9a18:{NFSU2_TR(0x4b9a18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9a19:{NFSU2_TR(0x4b9a19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9a20:L4b9a20:{c.instructions+=14;NFSU2_TR(0x4b9a20);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9a24:{NFSU2_TR(0x4b9a24);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9a25:{NFSU2_TR(0x4b9a25);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b9a29:{NFSU2_TR(0x4b9a29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9a2a:{NFSU2_TR(0x4b9a2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9a2b:{NFSU2_TR(0x4b9a2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b9a2f:{NFSU2_TR(0x4b9a2f);
__builtin_memmove((R+24),(R+4),4);
}
B4b9a31:{NFSU2_TR(0x4b9a31);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9a35:{NFSU2_TR(0x4b9a35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9a36:{NFSU2_TR(0x4b9a36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9a37:{NFSU2_TR(0x4b9a37);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9a38:{NFSU2_TR(0x4b9a38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9a39:{NFSU2_TR(0x4b9a39);
__builtin_memmove((R+4),(R+24),4);
}
B4b9a3b:{NFSU2_TR(0x4b9a3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9a40ull));
TAIL_STATIC(0x556020u,556);
}
B4b9a40:L4b9a40:{c.instructions+=2;NFSU2_TR(0x4b9a40);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b9a46:{NFSU2_TR(0x4b9a46);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b9af6;}}
}
B4b9a4c:L4b9a4c:{c.instructions+=1;NFSU2_TR(0x4b9a4c);
if(r1(R+518)){{goto L4b9a9f;}}
}
B4b9a4e:L4b9a4e:{c.instructions+=2;NFSU2_TR(0x4b9a4e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b9a54:{NFSU2_TR(0x4b9a54);
if(r1(R+518)){{goto L4b9a89;}}
}
B4b9a56:L4b9a56:{c.instructions+=2;NFSU2_TR(0x4b9a56);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2c0e485aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b9a5c:{NFSU2_TR(0x4b9a5c);
if(r1(R+518)){{goto L4b9a77;}}
}
B4b9a5e:L4b9a5e:{c.instructions+=2;NFSU2_TR(0x4b9a5e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x34dc1becull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x34dc1becull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x34dc1becull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b9a64:{NFSU2_TR(0x4b9a64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9af0;}}
}
B4b9a6a:L4b9a6a:{c.instructions+=5;NFSU2_TR(0x4b9a6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9a6b:{NFSU2_TR(0x4b9a6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b9a72:{NFSU2_TR(0x4b9a72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9a73:{NFSU2_TR(0x4b9a73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b9a74:{NFSU2_TR(0x4b9a74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9a77:L4b9a77:{c.instructions+=3;NFSU2_TR(0x4b9a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b9a7a:{NFSU2_TR(0x4b9a7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9a7b:{NFSU2_TR(0x4b9a7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9a80ull));
TAIL_STATIC(0x4a0140u,4a0);
}
B4b9a80:L4b9a80:{c.instructions+=5;NFSU2_TR(0x4b9a80);
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
B4b9a83:{NFSU2_TR(0x4b9a83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9a84:{NFSU2_TR(0x4b9a84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9a85:{NFSU2_TR(0x4b9a85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b9a86:{NFSU2_TR(0x4b9a86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9a89:L4b9a89:{c.instructions+=2;NFSU2_TR(0x4b9a89);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xd79b07a0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xd79b07a0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xd79b07a0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b9a90:{NFSU2_TR(0x4b9a90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9af0;}}
}
B4b9a92:L4b9a92:{c.instructions+=5;NFSU2_TR(0x4b9a92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9a93:{NFSU2_TR(0x4b9a93);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b9a9a:{NFSU2_TR(0x4b9a9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9a9b:{NFSU2_TR(0x4b9a9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b9a9c:{NFSU2_TR(0x4b9a9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9a9f:L4b9a9f:{c.instructions+=2;NFSU2_TR(0x4b9a9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9aa1:{NFSU2_TR(0x4b9aa1);
if(r1(R+518)){{goto L4b9aba;}}
}
B4b9aa3:L4b9aa3:{c.instructions+=2;NFSU2_TR(0x4b9aa3);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xd79b07a0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b9aaa:{NFSU2_TR(0x4b9aaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9aba;}}
}
B4b9aac:L4b9aac:{c.instructions+=4;NFSU2_TR(0x4b9aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9aaf:{NFSU2_TR(0x4b9aaf);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9ab1:{NFSU2_TR(0x4b9ab1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9ab2:{NFSU2_TR(0x4b9ab2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9ab7ull));
TAIL_STATIC(0x51de60u,51d);
}
B4b9ab7:L4b9ab7:{c.instructions+=1;NFSU2_TR(0x4b9ab7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b9aba:L4b9aba:{c.instructions+=2;NFSU2_TR(0x4b9aba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9abd:{NFSU2_TR(0x4b9abd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9abe:L4b9abe:{c.instructions+=1;NFSU2_TR(0x4b9abe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9ac3ull));
TAIL_STATIC(0x5379a0u,537);
}
B4b9ac3:L4b9ac3:{c.instructions+=3;NFSU2_TR(0x4b9ac3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b9ac6:{NFSU2_TR(0x4b9ac6);
u8 U[4];
w4(U+0,u32(0x78f250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9acb:{NFSU2_TR(0x4b9acb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9ad0ull));
TAIL_STATIC(0x51cd60u,51c);
}
B4b9ad0:L4b9ad0:{c.instructions+=3;NFSU2_TR(0x4b9ad0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b9ad3:{NFSU2_TR(0x4b9ad3);
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
B4b9ad5:{NFSU2_TR(0x4b9ad5);
if(r1(R+518)){{goto L4b9af0;}}
}
B4b9ad7:L4b9ad7:{c.instructions+=2;NFSU2_TR(0x4b9ad7);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xb2980babull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xb2980babull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xb2980babull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b9ade:{NFSU2_TR(0x4b9ade);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9af0;}}
}
B4b9ae0:L4b9ae0:{c.instructions+=4;NFSU2_TR(0x4b9ae0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9ae2:{NFSU2_TR(0x4b9ae2);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9ae7:{NFSU2_TR(0x4b9ae7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9ae8:{NFSU2_TR(0x4b9ae8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9aedull));
TAIL_STATIC(0x51cf70u,51c);
}
B4b9aed:L4b9aed:{c.instructions+=1;NFSU2_TR(0x4b9aed);
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
B4b9af0:L4b9af0:{c.instructions+=4;NFSU2_TR(0x4b9af0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9af1:{NFSU2_TR(0x4b9af1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9af2:{NFSU2_TR(0x4b9af2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b9af3:{NFSU2_TR(0x4b9af3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9af6:L4b9af6:{c.instructions+=2;NFSU2_TR(0x4b9af6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b9afc:{NFSU2_TR(0x4b9afc);
if(r1(R+518)){{goto L4b9b4d;}}
}
B4b9afe:L4b9afe:{c.instructions+=2;NFSU2_TR(0x4b9afe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc9d30688ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b9b04:{NFSU2_TR(0x4b9b04);
if(r1(R+518)){{goto L4b9b40;}}
}
B4b9b06:L4b9b06:{c.instructions+=2;NFSU2_TR(0x4b9b06);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xda5b8712ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xda5b8712ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xda5b8712ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b9b0c:{NFSU2_TR(0x4b9b0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b9af0u);}goto L4b9af0;}}
}
B4b9b0e:L4b9b0e:{c.instructions+=7;NFSU2_TR(0x4b9b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b9b11:{NFSU2_TR(0x4b9b11);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9b13:{NFSU2_TR(0x4b9b13);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4cull))));
}
B4b9b16:{NFSU2_TR(0x4b9b16);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9b17:{NFSU2_TR(0x4b9b17);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9b1d:{NFSU2_TR(0x4b9b1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9b1e:{NFSU2_TR(0x4b9b1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9b23ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4b9b23:L4b9b23:{c.instructions+=2;NFSU2_TR(0x4b9b23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9b24:{NFSU2_TR(0x4b9b24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9b29ull));
TAIL_STATIC(0x49e1c0u,49e);
}
B4b9b29:L4b9b29:{c.instructions+=10;NFSU2_TR(0x4b9b29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4b9b2c:{NFSU2_TR(0x4b9b2c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4b9b2e:{NFSU2_TR(0x4b9b2e);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b9b30:{NFSU2_TR(0x4b9b30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B4b9b33:{NFSU2_TR(0x4b9b33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9b34:{NFSU2_TR(0x4b9b34);
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
B4b9b35:{NFSU2_TR(0x4b9b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9b3b:{NFSU2_TR(0x4b9b3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9b3c:{NFSU2_TR(0x4b9b3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b9b3d:{NFSU2_TR(0x4b9b3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9b40:L4b9b40:{c.instructions+=2;NFSU2_TR(0x4b9b40);
__builtin_memmove((R+4),(R+24),4);
}
B4b9b42:{NFSU2_TR(0x4b9b42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9b47ull));
TAIL_STATIC(0x51ff40u,51f);
}
B4b9b47:L4b9b47:{c.instructions+=4;NFSU2_TR(0x4b9b47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9b48:{NFSU2_TR(0x4b9b48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9b49:{NFSU2_TR(0x4b9b49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b9b4a:{NFSU2_TR(0x4b9b4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9b4d:L4b9b4d:{c.instructions+=3;NFSU2_TR(0x4b9b4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b9b53:{NFSU2_TR(0x4b9b53);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b9b55:{NFSU2_TR(0x4b9b55);
if(r1(R+518)){{goto L4b9b60;}}
}
B4b9b57:L4b9b57:{c.instructions+=3;NFSU2_TR(0x4b9b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b9b5a:{NFSU2_TR(0x4b9b5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9b5b:{NFSU2_TR(0x4b9b5b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b9abeu);}goto L4b9abe;}
}
B4b9b60:L4b9b60:{c.instructions+=3;NFSU2_TR(0x4b9b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9b66:{NFSU2_TR(0x4b9b66);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b9b69:{NFSU2_TR(0x4b9b69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9ba0;}}
}
B4b9b6b:L4b9b6b:{c.instructions+=3;NFSU2_TR(0x4b9b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b9b6e:{NFSU2_TR(0x4b9b6e);
u8 U[4];
w4(U+0,u32(0x7e77208cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9b73:{NFSU2_TR(0x4b9b73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9b78ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b9b78:L4b9b78:{c.instructions+=7;NFSU2_TR(0x4b9b78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9b79:{NFSU2_TR(0x4b9b79);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9b7b:{NFSU2_TR(0x4b9b7b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9b7d:{NFSU2_TR(0x4b9b7d);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9b82:{NFSU2_TR(0x4b9b82);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9b87:{NFSU2_TR(0x4b9b87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9b88:{NFSU2_TR(0x4b9b88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9b8dull));
TAIL_STATIC(0x558540u,558);
}
B4b9b8d:L4b9b8d:{c.instructions+=6;NFSU2_TR(0x4b9b8d);
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
B4b9b90:{NFSU2_TR(0x4b9b90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9b91:{NFSU2_TR(0x4b9b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b9b9b:{NFSU2_TR(0x4b9b9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9b9c:{NFSU2_TR(0x4b9b9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b9b9d:{NFSU2_TR(0x4b9b9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9ba0:L4b9ba0:{c.instructions+=2;NFSU2_TR(0x4b9ba0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4b9ba3:{NFSU2_TR(0x4b9ba3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b9af0u);}goto L4b9af0;}}
}
B4b9ba9:L4b9ba9:{c.instructions+=6;NFSU2_TR(0x4b9ba9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9bab:{NFSU2_TR(0x4b9bab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9bad:{NFSU2_TR(0x4b9bad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b9bb3:{NFSU2_TR(0x4b9bb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9bb4:{NFSU2_TR(0x4b9bb4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9bb6:{NFSU2_TR(0x4b9bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9bbbull));
TAIL_STATIC(0x58b940u,58b);
}
B4b9bbb:L4b9bbb:{c.instructions+=3;NFSU2_TR(0x4b9bbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b9bbe:{NFSU2_TR(0x4b9bbe);
__builtin_memmove((R+4),(R+0),4);
}
B4b9bc0:{NFSU2_TR(0x4b9bc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9bc5ull));
TAIL_STATIC(0x587150u,587);
}
B4b9bc5:L4b9bc5:{c.instructions+=3;NFSU2_TR(0x4b9bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b9bc8:{NFSU2_TR(0x4b9bc8);
u8 U[4];
w4(U+0,u32(0xd4966f2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9bcd:{NFSU2_TR(0x4b9bcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9bd2ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b9bd2:L4b9bd2:{c.instructions+=7;NFSU2_TR(0x4b9bd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9bd3:{NFSU2_TR(0x4b9bd3);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9bd8:{NFSU2_TR(0x4b9bd8);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9bdd:{NFSU2_TR(0x4b9bdd);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9be2:{NFSU2_TR(0x4b9be2);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9be7:{NFSU2_TR(0x4b9be7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9be8:{NFSU2_TR(0x4b9be8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9bedull));
TAIL_STATIC(0x558540u,558);
}
B4b9bed:L4b9bed:{c.instructions+=3;NFSU2_TR(0x4b9bed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4b9bf0:{NFSU2_TR(0x4b9bf0);
__builtin_memmove((R+4),(R+24),4);
}
B4b9bf2:{NFSU2_TR(0x4b9bf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9bf7ull));
TAIL_STATIC(0x51ff40u,51f);
}
B4b9bf7:L4b9bf7:{c.instructions+=5;NFSU2_TR(0x4b9bf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9bf8:{NFSU2_TR(0x4b9bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b9c02:{NFSU2_TR(0x4b9c02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9c03:{NFSU2_TR(0x4b9c03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b9c04:{NFSU2_TR(0x4b9c04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9c10:L4b9c10:{c.instructions+=2;NFSU2_TR(0x4b9c10);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b9c18:{NFSU2_TR(0x4b9c18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9c26;}}
}
B4b9c1a:L4b9c1a:{c.instructions+=2;NFSU2_TR(0x4b9c1a);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4b9c1f:{NFSU2_TR(0x4b9c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b9c26:L4b9c26:{c.instructions+=1;NFSU2_TR(0x4b9c26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9c30:L4b9c30:{c.instructions+=4;NFSU2_TR(0x4b9c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9c33:{NFSU2_TR(0x4b9c33);
u8 U[4];
w4(U+0,u32(0xed21b47full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9c38:{NFSU2_TR(0x4b9c38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9c39:{NFSU2_TR(0x4b9c39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9c3eull));
TAIL_STATIC(0x50c900u,50c);
}
B4b9c3e:L4b9c3e:{c.instructions+=2;NFSU2_TR(0x4b9c3e);
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
B4b9c41:{NFSU2_TR(0x4b9c41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9c50:L4b9c50:{c.instructions+=2;NFSU2_TR(0x4b9c50);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b9c58:{NFSU2_TR(0x4b9c58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9c66;}}
}
B4b9c5a:L4b9c5a:{c.instructions+=2;NFSU2_TR(0x4b9c5a);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4b9c5f:{NFSU2_TR(0x4b9c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b9c66:L4b9c66:{c.instructions+=1;NFSU2_TR(0x4b9c66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9c70:L4b9c70:{c.instructions+=4;NFSU2_TR(0x4b9c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9c73:{NFSU2_TR(0x4b9c73);
u8 U[4];
w4(U+0,u32(0x36e79b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9c78:{NFSU2_TR(0x4b9c78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9c79:{NFSU2_TR(0x4b9c79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9c7eull));
TAIL_STATIC(0x50c900u,50c);
}
B4b9c7e:L4b9c7e:{c.instructions+=2;NFSU2_TR(0x4b9c7e);
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
B4b9c81:{NFSU2_TR(0x4b9c81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9c90:L4b9c90:{c.instructions+=10;NFSU2_TR(0x4b9c90);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9c94:{NFSU2_TR(0x4b9c94);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b9c98:{NFSU2_TR(0x4b9c98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9c99:{NFSU2_TR(0x4b9c99);
__builtin_memmove((R+24),(R+4),4);
}
B4b9c9b:{NFSU2_TR(0x4b9c9b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9c9f:{NFSU2_TR(0x4b9c9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9ca0:{NFSU2_TR(0x4b9ca0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9ca1:{NFSU2_TR(0x4b9ca1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9ca2:{NFSU2_TR(0x4b9ca2);
__builtin_memmove((R+4),(R+24),4);
}
B4b9ca4:{NFSU2_TR(0x4b9ca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9ca9ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4b9ca9:L4b9ca9:{c.instructions+=8;NFSU2_TR(0x4b9ca9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9cad:{NFSU2_TR(0x4b9cad);
__builtin_memmove((R+4),gp(0x78dfa8),4);
}
B4b9cb3:{NFSU2_TR(0x4b9cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9cb6:{NFSU2_TR(0x4b9cb6);
u8 U[4];
w4(U+0,u32(0x794790ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b9cbc:{NFSU2_TR(0x4b9cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9cbf:{NFSU2_TR(0x4b9cbf);
__builtin_memmove((R+0),(R+24),4);
}
B4b9cc1:{NFSU2_TR(0x4b9cc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9cc2:{NFSU2_TR(0x4b9cc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9cd0:L4b9cd0:{c.instructions+=2;NFSU2_TR(0x4b9cd0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b9cd8:{NFSU2_TR(0x4b9cd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9ce6;}}
}
B4b9cda:L4b9cda:{c.instructions+=2;NFSU2_TR(0x4b9cda);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4b9cdf:{NFSU2_TR(0x4b9cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b9ce6:L4b9ce6:{c.instructions+=1;NFSU2_TR(0x4b9ce6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9cf0:L4b9cf0:{c.instructions+=6;NFSU2_TR(0x4b9cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9cf3:{NFSU2_TR(0x4b9cf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9cf4:{NFSU2_TR(0x4b9cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b9cf7:{NFSU2_TR(0x4b9cf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9cf8:{NFSU2_TR(0x4b9cf8);
u8 U[4];
w4(U+0,u32(0x3d0447aaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9cfd:{NFSU2_TR(0x4b9cfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9d02ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b9d02:L4b9d02:{c.instructions+=4;NFSU2_TR(0x4b9d02);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b9d05:{NFSU2_TR(0x4b9d05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9d06:{NFSU2_TR(0x4b9d06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9d07:{NFSU2_TR(0x4b9d07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9d0cull));
TAIL_STATIC(0x537be0u,537);
}
B4b9d0c:L4b9d0c:{c.instructions+=3;NFSU2_TR(0x4b9d0c);
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
B4b9d0f:{NFSU2_TR(0x4b9d0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9d10:{NFSU2_TR(0x4b9d10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9d20:L4b9d20:{c.instructions+=11;NFSU2_TR(0x4b9d20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9d22:{NFSU2_TR(0x4b9d22);
u8 U[4];
w4(U+0,u32(0x77375cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9d27:{NFSU2_TR(0x4b9d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9d2d:{NFSU2_TR(0x4b9d2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9d2e:{NFSU2_TR(0x4b9d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9d35:{NFSU2_TR(0x4b9d35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9d36:{NFSU2_TR(0x4b9d36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9d37:{NFSU2_TR(0x4b9d37);
__builtin_memmove((R+24),(R+4),4);
}
B4b9d39:{NFSU2_TR(0x4b9d39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9d3a:{NFSU2_TR(0x4b9d3a);
w4(R+4,u32(0x850080ull));
}
B4b9d3f:{NFSU2_TR(0x4b9d3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9d44ull));
TAIL_STATIC(0x5031d0u,503);
}
B4b9d44:L4b9d44:{c.instructions+=3;NFSU2_TR(0x4b9d44);
w4(R+4,u32(0x850080ull));
}
B4b9d49:{NFSU2_TR(0x4b9d49);
__builtin_memmove((R+28),(R+0),4);
}
B4b9d4b:{NFSU2_TR(0x4b9d4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9d50ull));
TAIL_STATIC(0x503210u,503);
}
B4b9d50:L4b9d50:{c.instructions+=3;NFSU2_TR(0x4b9d50);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b9d57:{NFSU2_TR(0x4b9d57);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4b9d5a:{NFSU2_TR(0x4b9d5a);
if(r1(R+518)){{goto L4b9dba;}}
}
B4b9d5c:L4b9d5c:{c.instructions+=2;NFSU2_TR(0x4b9d5c);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4b9d5f:{NFSU2_TR(0x4b9d5f);
if(r1(R+518)){{goto L4b9dba;}}
}
B4b9d61:L4b9d61:{c.instructions+=3;NFSU2_TR(0x4b9d61);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9d63:{NFSU2_TR(0x4b9d63);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b9d6a:{NFSU2_TR(0x4b9d6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9d6full));
TAIL_STATIC(0x575620u,575);
}
B4b9d6f:L4b9d6f:{c.instructions+=6;NFSU2_TR(0x4b9d6f);
__builtin_memmove((R+28),(R+0),4);
}
B4b9d71:{NFSU2_TR(0x4b9d71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b9d74:{NFSU2_TR(0x4b9d74);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9d78:{NFSU2_TR(0x4b9d78);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9d7a:{NFSU2_TR(0x4b9d7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b9d82:{NFSU2_TR(0x4b9d82);
if(r1(R+518)){{goto L4b9da8;}}
}
B4b9d84:L4b9d84:{c.instructions+=3;NFSU2_TR(0x4b9d84);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9d86:{NFSU2_TR(0x4b9d86);
w4(R+4,u32(0x850080ull));
}
B4b9d8b:{NFSU2_TR(0x4b9d8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9d90ull));
TAIL_STATIC(0x5031d0u,503);
}
B4b9d90:L4b9d90:{c.instructions+=7;NFSU2_TR(0x4b9d90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9d91:{NFSU2_TR(0x4b9d91);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b9d97:{NFSU2_TR(0x4b9d97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9d98:{NFSU2_TR(0x4b9d98);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b9d9e:{NFSU2_TR(0x4b9d9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9d9f:{NFSU2_TR(0x4b9d9f);
__builtin_memmove((R+4),(R+28),4);
}
B4b9da1:{NFSU2_TR(0x4b9da1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9da6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b9c90u);}goto L4b9c90;}
}
B4b9da6:L4b9da6:{c.instructions+=1;NFSU2_TR(0x4b9da6);
{goto L4b9daa;}
}
B4b9da8:L4b9da8:{c.instructions+=1;NFSU2_TR(0x4b9da8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b9daa:L4b9daa:{c.instructions+=4;NFSU2_TR(0x4b9daa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9dab:{NFSU2_TR(0x4b9dab);
__builtin_memmove((R+4),(R+24),4);
}
B4b9dad:{NFSU2_TR(0x4b9dad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b9db5:{NFSU2_TR(0x4b9db5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9dbaull));
TAIL_STATIC(0x54ee40u,54e);
}
B4b9dba:L4b9dba:{c.instructions+=2;NFSU2_TR(0x4b9dba);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9dbc:{NFSU2_TR(0x4b9dbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9dc1ull));
TAIL_STATIC(0x575620u,575);
}
B4b9dc1:L4b9dc1:{c.instructions+=6;NFSU2_TR(0x4b9dc1);
__builtin_memmove((R+28),(R+0),4);
}
B4b9dc3:{NFSU2_TR(0x4b9dc3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b9dc6:{NFSU2_TR(0x4b9dc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9dca:{NFSU2_TR(0x4b9dca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9dcc:{NFSU2_TR(0x4b9dcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b9dd4:{NFSU2_TR(0x4b9dd4);
if(r1(R+518)){{goto L4b9dfe;}}
}
B4b9dd6:L4b9dd6:{c.instructions+=7;NFSU2_TR(0x4b9dd6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9dd8:{NFSU2_TR(0x4b9dd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b9dde:{NFSU2_TR(0x4b9dde);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9ddf:{NFSU2_TR(0x4b9ddf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b9de5:{NFSU2_TR(0x4b9de5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9de6:{NFSU2_TR(0x4b9de6);
__builtin_memmove((R+4),(R+28),4);
}
B4b9de8:{NFSU2_TR(0x4b9de8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9dedull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4b9ded:L4b9ded:{c.instructions+=4;NFSU2_TR(0x4b9ded);
__builtin_memmove((R+4),gp(0x78dfa8),4);
}
B4b9df3:{NFSU2_TR(0x4b9df3);
u8 U[4];
w4(U+0,u32(0x794710ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b9df9:{NFSU2_TR(0x4b9df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9dfc:{NFSU2_TR(0x4b9dfc);
{goto L4b9e00;}
}
B4b9dfe:L4b9dfe:{c.instructions+=1;NFSU2_TR(0x4b9dfe);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b9e00:L4b9e00:{c.instructions+=4;NFSU2_TR(0x4b9e00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9e01:{NFSU2_TR(0x4b9e01);
__builtin_memmove((R+4),(R+24),4);
}
B4b9e03:{NFSU2_TR(0x4b9e03);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b9e0b:{NFSU2_TR(0x4b9e0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9e10ull));
TAIL_STATIC(0x54ee40u,54e);
}
B4b9e10:L4b9e10:{c.instructions+=2;NFSU2_TR(0x4b9e10);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9e12:{NFSU2_TR(0x4b9e12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9e17ull));
TAIL_STATIC(0x575620u,575);
}
B4b9e17:L4b9e17:{c.instructions+=6;NFSU2_TR(0x4b9e17);
__builtin_memmove((R+28),(R+0),4);
}
B4b9e19:{NFSU2_TR(0x4b9e19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b9e1c:{NFSU2_TR(0x4b9e1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9e20:{NFSU2_TR(0x4b9e20);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9e22:{NFSU2_TR(0x4b9e22);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b9e2a:{NFSU2_TR(0x4b9e2a);
if(r1(R+518)){{goto L4b9e54;}}
}
B4b9e2c:L4b9e2c:{c.instructions+=7;NFSU2_TR(0x4b9e2c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9e2e:{NFSU2_TR(0x4b9e2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b9e34:{NFSU2_TR(0x4b9e34);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9e35:{NFSU2_TR(0x4b9e35);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b9e3b:{NFSU2_TR(0x4b9e3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9e3c:{NFSU2_TR(0x4b9e3c);
__builtin_memmove((R+4),(R+28),4);
}
B4b9e3e:{NFSU2_TR(0x4b9e3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9e43ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4b9e43:L4b9e43:{c.instructions+=4;NFSU2_TR(0x4b9e43);
__builtin_memmove((R+4),gp(0x78dfa8),4);
}
B4b9e49:{NFSU2_TR(0x4b9e49);
u8 U[4];
w4(U+0,u32(0x794750ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b9e4f:{NFSU2_TR(0x4b9e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9e52:{NFSU2_TR(0x4b9e52);
{goto L4b9e56;}
}
B4b9e54:L4b9e54:{c.instructions+=1;NFSU2_TR(0x4b9e54);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b9e56:L4b9e56:{c.instructions+=4;NFSU2_TR(0x4b9e56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9e57:{NFSU2_TR(0x4b9e57);
__builtin_memmove((R+4),(R+24),4);
}
B4b9e59:{NFSU2_TR(0x4b9e59);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b9e61:{NFSU2_TR(0x4b9e61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9e66ull));
TAIL_STATIC(0x54ee40u,54e);
}
B4b9e66:L4b9e66:{c.instructions+=3;NFSU2_TR(0x4b9e66);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9e68:{NFSU2_TR(0x4b9e68);
__builtin_memmove((R+4),(R+24),4);
}
B4b9e6a:{NFSU2_TR(0x4b9e6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9e6full));
TAIL_STATIC(0x539650u,539);
}
B4b9e6f:L4b9e6f:{c.instructions+=6;NFSU2_TR(0x4b9e6f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9e73:{NFSU2_TR(0x4b9e73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9e74:{NFSU2_TR(0x4b9e74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9e75:{NFSU2_TR(0x4b9e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9e7c:{NFSU2_TR(0x4b9e7c);
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
B4b9e7f:{NFSU2_TR(0x4b9e7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9e80:L4b9e80:{c.instructions+=9;NFSU2_TR(0x4b9e80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9e82:{NFSU2_TR(0x4b9e82);
u8 U[4];
w4(U+0,u32(0x773784ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9e87:{NFSU2_TR(0x4b9e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9e8d:{NFSU2_TR(0x4b9e8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9e8e:{NFSU2_TR(0x4b9e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9e95:{NFSU2_TR(0x4b9e95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9e96:{NFSU2_TR(0x4b9e96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9e97:{NFSU2_TR(0x4b9e97);
u8 U[4];
w4(U+0,u32(0x530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9e9c:{NFSU2_TR(0x4b9e9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9ea1ull));
TAIL_STATIC(0x575620u,575);
}
B4b9ea1:L4b9ea1:{c.instructions+=7;NFSU2_TR(0x4b9ea1);
__builtin_memmove((R+24),(R+0),4);
}
B4b9ea3:{NFSU2_TR(0x4b9ea3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b9ea6:{NFSU2_TR(0x4b9ea6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9eaa:{NFSU2_TR(0x4b9eaa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b9eac:{NFSU2_TR(0x4b9eac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b9eae:{NFSU2_TR(0x4b9eae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9eb2:{NFSU2_TR(0x4b9eb2);
if(r1(R+518)){{goto L4b9ec8;}}
}
B4b9eb4:L4b9eb4:{c.instructions+=4;NFSU2_TR(0x4b9eb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9eb8:{NFSU2_TR(0x4b9eb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9eb9:{NFSU2_TR(0x4b9eb9);
__builtin_memmove((R+4),(R+24),4);
}
B4b9ebb:{NFSU2_TR(0x4b9ebb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9ec0ull));
TAIL_STATIC(0x49ccb0u,49c);
}
B4b9ec0:L4b9ec0:{c.instructions+=2;NFSU2_TR(0x4b9ec0);
u8 U[4];
w4(U+0,u32(0x78fd6cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b9ec6:{NFSU2_TR(0x4b9ec6);
__builtin_memmove((R+0),(R+24),4);
}
B4b9ec8:L4b9ec8:{c.instructions+=5;NFSU2_TR(0x4b9ec8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9ecc:{NFSU2_TR(0x4b9ecc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9ecd:{NFSU2_TR(0x4b9ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9ed4:{NFSU2_TR(0x4b9ed4);
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
B4b9ed7:{NFSU2_TR(0x4b9ed7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9ee0:L4b9ee0:{c.instructions+=3;NFSU2_TR(0x4b9ee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9ee4:{NFSU2_TR(0x4b9ee4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b9ee9:{NFSU2_TR(0x4b9ee9);
if(r1(R+518)){{goto L4b9f1d;}}
}
B4b9eeb:L4b9eeb:{c.instructions+=2;NFSU2_TR(0x4b9eeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb19ba115ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9ef0:{NFSU2_TR(0x4b9ef0);
if(r1(R+518)){{goto L4b9efb;}}
}
B4b9ef2:L4b9ef2:{c.instructions+=2;NFSU2_TR(0x4b9ef2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9ef6:{NFSU2_TR(0x4b9ef6);
TAIL_STATIC(0x4b8bb0u,4b8);
}
B4b9efb:L4b9efb:{c.instructions+=3;NFSU2_TR(0x4b9efb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9eff:{NFSU2_TR(0x4b9eff);
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
B4b9f01:{NFSU2_TR(0x4b9f01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9f1d;}}
}
B4b9f03:L4b9f03:{c.instructions+=4;NFSU2_TR(0x4b9f03);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4b9f08:{NFSU2_TR(0x4b9f08);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x151ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b9f0f:{NFSU2_TR(0x4b9f0f);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4b9f15:{NFSU2_TR(0x4b9f15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9f1aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b9690u);}goto L4b9690;}
}
B4b9f1a:L4b9f1a:{c.instructions+=1;NFSU2_TR(0x4b9f1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9f1d:L4b9f1d:{c.instructions+=2;NFSU2_TR(0x4b9f1d);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4b9f23:{NFSU2_TR(0x4b9f23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9f28ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b96f0u);}goto L4b96f0;}
}
B4b9f28:L4b9f28:{c.instructions+=1;NFSU2_TR(0x4b9f28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9f30:L4b9f30:{c.instructions+=27;NFSU2_TR(0x4b9f30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9f32:{NFSU2_TR(0x4b9f32);
u8 U[4];
w4(U+0,u32(0x773818ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9f37:{NFSU2_TR(0x4b9f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9f3d:{NFSU2_TR(0x4b9f3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9f3e:{NFSU2_TR(0x4b9f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9f45:{NFSU2_TR(0x4b9f45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9f46:{NFSU2_TR(0x4b9f46);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9f4a:{NFSU2_TR(0x4b9f4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b9f4e:{NFSU2_TR(0x4b9f4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9f4f:{NFSU2_TR(0x4b9f4f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9f50:{NFSU2_TR(0x4b9f50);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b9f54:{NFSU2_TR(0x4b9f54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9f55:{NFSU2_TR(0x4b9f55);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b9f59:{NFSU2_TR(0x4b9f59);
__builtin_memmove((R+24),(R+4),4);
}
B4b9f5b:{NFSU2_TR(0x4b9f5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9f5f:{NFSU2_TR(0x4b9f5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9f60:{NFSU2_TR(0x4b9f60);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9f64:{NFSU2_TR(0x4b9f64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9f65:{NFSU2_TR(0x4b9f65);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9f66:{NFSU2_TR(0x4b9f66);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b9f6a:{NFSU2_TR(0x4b9f6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9f6b:{NFSU2_TR(0x4b9f6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9f6c:{NFSU2_TR(0x4b9f6c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9f6d:{NFSU2_TR(0x4b9f6d);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9f6f:{NFSU2_TR(0x4b9f6f);
__builtin_memmove((R+4),(R+24),4);
}
B4b9f71:{NFSU2_TR(0x4b9f71);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9f75:{NFSU2_TR(0x4b9f75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9f7aull));
TAIL_STATIC(0x51e9e0u,51e);
}
B4b9f7a:L4b9f7a:{c.instructions+=7;NFSU2_TR(0x4b9f7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b9f7c:{NFSU2_TR(0x4b9f7c);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b9f80:{NFSU2_TR(0x4b9f80);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b9f88:{NFSU2_TR(0x4b9f88);
u8 U[4];
w4(U+0,u32(0x794820ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b9f8e:{NFSU2_TR(0x4b9f8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b9f94:{NFSU2_TR(0x4b9f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0xc2fa0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b9f9b:{NFSU2_TR(0x4b9f9b);
if(r1(R+518)){{goto L4b9fa1;}}
}
B4b9f9d:L4b9f9d:{c.instructions+=2;NFSU2_TR(0x4b9f9d);
__builtin_memmove((R+0),(R+28),4);
}
B4b9f9f:{NFSU2_TR(0x4b9f9f);
{goto L4b9fae;}
}
B4b9fa1:L4b9fa1:{c.instructions+=2;NFSU2_TR(0x4b9fa1);
u8 U[4];
w4(U+0,u32(0x9700a5adull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9fa6:{NFSU2_TR(0x4b9fa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9fabull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b9fab:L4b9fab:{c.instructions+=1;NFSU2_TR(0x4b9fab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b9fae:L4b9fae:{c.instructions+=5;NFSU2_TR(0x4b9fae);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9fb3:{NFSU2_TR(0x4b9fb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9fb4:{NFSU2_TR(0x4b9fb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b9fb7:{NFSU2_TR(0x4b9fb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b9fb8:{NFSU2_TR(0x4b9fb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b9fbdull));
TAIL_STATIC(0x43dc00u,43d);
}
B4b9fbd:L4b9fbd:{c.instructions+=8;NFSU2_TR(0x4b9fbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b9fc1:{NFSU2_TR(0x4b9fc1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b9fc4:{NFSU2_TR(0x4b9fc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b9fc5:{NFSU2_TR(0x4b9fc5);
__builtin_memmove((R+0),(R+24),4);
}
B4b9fc7:{NFSU2_TR(0x4b9fc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b9fc8:{NFSU2_TR(0x4b9fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b9fcf:{NFSU2_TR(0x4b9fcf);
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
B4b9fd2:{NFSU2_TR(0x4b9fd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b9fe0:L4b9fe0:{c.instructions+=3;NFSU2_TR(0x4b9fe0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b9fe6:{NFSU2_TR(0x4b9fe6);
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
B4b9fe8:{NFSU2_TR(0x4b9fe8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b9fef;}}
}
B4b9fea:L4b9fea:{c.instructions+=1;NFSU2_TR(0x4b9fea);
TAIL_STATIC(0x55e120u,55e);
}
B4b9fef:L4b9fef:{c.instructions+=1;NFSU2_TR(0x4b9fef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x4b9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
