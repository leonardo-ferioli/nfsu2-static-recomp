#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_4ab(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4c8(u8* __restrict R,Cpu& c);
u32 body_4ca(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4c9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4c9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4c9(u8* __restrict R,Cpu& c);
u32 page_4c9(Cpu& c){return body_4c9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4c9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4c9000:goto L4c9000;
case 0x4c9005:goto L4c9005;
case 0x4c9008:c.instructions+=3;goto B4c9008;
case 0x4c9009:c.instructions+=2;goto B4c9009;
case 0x4c900a:c.instructions+=1;goto B4c900a;
case 0x4c9030:goto L4c9030;
case 0x4c9031:c.instructions+=4;goto B4c9031;
case 0x4c9033:c.instructions+=3;goto B4c9033;
case 0x4c9036:c.instructions+=2;goto B4c9036;
case 0x4c9038:c.instructions+=1;goto B4c9038;
case 0x4c903a:goto L4c903a;
case 0x4c903d:c.instructions+=2;goto B4c903d;
case 0x4c903e:c.instructions+=1;goto B4c903e;
case 0x4c9041:goto L4c9041;
case 0x4c9043:c.instructions+=2;goto B4c9043;
case 0x4c9045:c.instructions+=1;goto B4c9045;
case 0x4c9047:goto L4c9047;
case 0x4c9049:c.instructions+=1;goto B4c9049;
case 0x4c904b:goto L4c904b;
case 0x4c904d:c.instructions+=1;goto B4c904d;
case 0x4c9052:goto L4c9052;
case 0x4c9056:c.instructions+=2;goto B4c9056;
case 0x4c9059:c.instructions+=1;goto B4c9059;
case 0x4c905b:goto L4c905b;
case 0x4c905e:c.instructions+=1;goto B4c905e;
case 0x4c9060:goto L4c9060;
case 0x4c9061:c.instructions+=1;goto B4c9061;
case 0x4c9063:goto L4c9063;
case 0x4c9067:c.instructions+=3;goto B4c9067;
case 0x4c9068:c.instructions+=2;goto B4c9068;
case 0x4c906a:c.instructions+=1;goto B4c906a;
case 0x4c906f:goto L4c906f;
case 0x4c9070:c.instructions+=1;goto B4c9070;
case 0x4c9073:goto L4c9073;
case 0x4c9077:c.instructions+=3;goto B4c9077;
case 0x4c9078:c.instructions+=2;goto B4c9078;
case 0x4c907a:c.instructions+=1;goto B4c907a;
case 0x4c907f:goto L4c907f;
case 0x4c9080:c.instructions+=1;goto B4c9080;
case 0x4c9083:goto L4c9083;
case 0x4c9087:c.instructions+=3;goto B4c9087;
case 0x4c9088:c.instructions+=2;goto B4c9088;
case 0x4c908a:c.instructions+=1;goto B4c908a;
case 0x4c908f:goto L4c908f;
case 0x4c9090:c.instructions+=1;goto B4c9090;
case 0x4c9093:goto L4c9093;
case 0x4c9097:c.instructions+=3;goto B4c9097;
case 0x4c9098:c.instructions+=2;goto B4c9098;
case 0x4c909a:c.instructions+=1;goto B4c909a;
case 0x4c909f:goto L4c909f;
case 0x4c90a0:c.instructions+=1;goto B4c90a0;
case 0x4c90b0:goto L4c90b0;
case 0x4c90b1:c.instructions+=7;goto B4c90b1;
case 0x4c90b2:c.instructions+=6;goto B4c90b2;
case 0x4c90b3:c.instructions+=5;goto B4c90b3;
case 0x4c90b4:c.instructions+=4;goto B4c90b4;
case 0x4c90b6:c.instructions+=3;goto B4c90b6;
case 0x4c90b8:c.instructions+=2;goto B4c90b8;
case 0x4c90bb:c.instructions+=1;goto B4c90bb;
case 0x4c90c0:goto L4c90c0;
case 0x4c90c3:c.instructions+=1;goto B4c90c3;
case 0x4c90c5:goto L4c90c5;
case 0x4c90c9:c.instructions+=3;goto B4c90c9;
case 0x4c90cc:c.instructions+=2;goto B4c90cc;
case 0x4c90cf:c.instructions+=1;goto B4c90cf;
case 0x4c90d1:goto L4c90d1;
case 0x4c90d8:c.instructions+=1;goto B4c90d8;
case 0x4c90df:goto L4c90df;
case 0x4c90e1:c.instructions+=1;goto B4c90e1;
case 0x4c90e3:goto L4c90e3;
case 0x4c90e5:c.instructions+=1;goto B4c90e5;
case 0x4c90e7:goto L4c90e7;
case 0x4c90e9:c.instructions+=1;goto B4c90e9;
case 0x4c90eb:goto L4c90eb;
case 0x4c90ed:goto L4c90ed;
case 0x4c90ef:c.instructions+=1;goto B4c90ef;
case 0x4c90f1:goto L4c90f1;
case 0x4c90f8:c.instructions+=2;goto B4c90f8;
case 0x4c90fa:c.instructions+=1;goto B4c90fa;
case 0x4c9101:goto L4c9101;
case 0x4c9103:c.instructions+=1;goto B4c9103;
case 0x4c9105:goto L4c9105;
case 0x4c9107:c.instructions+=1;goto B4c9107;
case 0x4c9109:goto L4c9109;
case 0x4c910b:c.instructions+=1;goto B4c910b;
case 0x4c910d:goto L4c910d;
case 0x4c910f:c.instructions+=1;goto B4c910f;
case 0x4c9113:goto L4c9113;
case 0x4c9115:goto L4c9115;
case 0x4c9118:c.instructions+=2;goto B4c9118;
case 0x4c9119:c.instructions+=1;goto B4c9119;
case 0x4c911b:goto L4c911b;
case 0x4c911c:c.instructions+=4;goto B4c911c;
case 0x4c911d:c.instructions+=3;goto B4c911d;
case 0x4c911e:c.instructions+=2;goto B4c911e;
case 0x4c911f:c.instructions+=1;goto B4c911f;
case 0x4c9170:goto L4c9170;
case 0x4c9171:c.instructions+=7;goto B4c9171;
case 0x4c9172:c.instructions+=6;goto B4c9172;
case 0x4c9174:c.instructions+=5;goto B4c9174;
case 0x4c9178:c.instructions+=4;goto B4c9178;
case 0x4c9179:c.instructions+=3;goto B4c9179;
case 0x4c917c:c.instructions+=2;goto B4c917c;
case 0x4c917e:c.instructions+=1;goto B4c917e;
case 0x4c9180:goto L4c9180;
case 0x4c9183:c.instructions+=1;goto B4c9183;
case 0x4c9185:goto L4c9185;
case 0x4c9188:c.instructions+=1;goto B4c9188;
case 0x4c918a:goto L4c918a;
case 0x4c918b:c.instructions+=3;goto B4c918b;
case 0x4c918e:c.instructions+=2;goto B4c918e;
case 0x4c9191:c.instructions+=1;goto B4c9191;
case 0x4c9193:goto L4c9193;
case 0x4c9195:goto L4c9195;
case 0x4c9198:c.instructions+=3;goto B4c9198;
case 0x4c919c:c.instructions+=2;goto B4c919c;
case 0x4c919e:c.instructions+=1;goto B4c919e;
case 0x4c91a0:goto L4c91a0;
case 0x4c91a2:c.instructions+=1;goto B4c91a2;
case 0x4c91a4:goto L4c91a4;
case 0x4c91a7:c.instructions+=1;goto B4c91a7;
case 0x4c91a9:goto L4c91a9;
case 0x4c91aa:c.instructions+=3;goto B4c91aa;
case 0x4c91ad:c.instructions+=2;goto B4c91ad;
case 0x4c91b0:c.instructions+=1;goto B4c91b0;
case 0x4c91b2:goto L4c91b2;
case 0x4c91b3:c.instructions+=3;goto B4c91b3;
case 0x4c91b4:c.instructions+=2;goto B4c91b4;
case 0x4c91b5:c.instructions+=1;goto B4c91b5;
case 0x4c91b8:goto L4c91b8;
case 0x4c91b9:c.instructions+=9;goto B4c91b9;
case 0x4c91bc:c.instructions+=8;goto B4c91bc;
case 0x4c91c0:c.instructions+=7;goto B4c91c0;
case 0x4c91c1:c.instructions+=6;goto B4c91c1;
case 0x4c91c4:c.instructions+=5;goto B4c91c4;
case 0x4c91c8:c.instructions+=4;goto B4c91c8;
case 0x4c91c9:c.instructions+=3;goto B4c91c9;
case 0x4c91cc:c.instructions+=2;goto B4c91cc;
case 0x4c91cf:c.instructions+=1;goto B4c91cf;
case 0x4c91d2:goto L4c91d2;
case 0x4c91d5:c.instructions+=1;goto B4c91d5;
case 0x4c91d7:goto L4c91d7;
case 0x4c91db:c.instructions+=6;goto B4c91db;
case 0x4c91de:c.instructions+=5;goto B4c91de;
case 0x4c91e4:c.instructions+=4;goto B4c91e4;
case 0x4c91e7:c.instructions+=3;goto B4c91e7;
case 0x4c91ea:c.instructions+=2;goto B4c91ea;
case 0x4c91ec:c.instructions+=1;goto B4c91ec;
case 0x4c91ee:goto L4c91ee;
case 0x4c91f0:c.instructions+=1;goto B4c91f0;
case 0x4c91f2:goto L4c91f2;
case 0x4c91f4:c.instructions+=1;goto B4c91f4;
case 0x4c91f6:goto L4c91f6;
case 0x4c91f8:goto L4c91f8;
case 0x4c91fa:c.instructions+=1;goto B4c91fa;
case 0x4c91ff:goto L4c91ff;
case 0x4c9202:goto L4c9202;
case 0x4c9206:c.instructions+=1;goto B4c9206;
case 0x4c9209:goto L4c9209;
case 0x4c920a:c.instructions+=3;goto B4c920a;
case 0x4c920b:c.instructions+=2;goto B4c920b;
case 0x4c920c:c.instructions+=1;goto B4c920c;
case 0x4c9210:goto L4c9210;
case 0x4c9213:c.instructions+=10;goto B4c9213;
case 0x4c9214:c.instructions+=9;goto B4c9214;
case 0x4c9216:c.instructions+=8;goto B4c9216;
case 0x4c9219:c.instructions+=7;goto B4c9219;
case 0x4c921c:c.instructions+=6;goto B4c921c;
case 0x4c921f:c.instructions+=5;goto B4c921f;
case 0x4c9221:c.instructions+=4;goto B4c9221;
case 0x4c9224:c.instructions+=3;goto B4c9224;
case 0x4c9226:c.instructions+=2;goto B4c9226;
case 0x4c9228:c.instructions+=1;goto B4c9228;
case 0x4c922e:goto L4c922e;
case 0x4c9233:c.instructions+=6;goto B4c9233;
case 0x4c9237:c.instructions+=5;goto B4c9237;
case 0x4c923b:c.instructions+=4;goto B4c923b;
case 0x4c9241:c.instructions+=3;goto B4c9241;
case 0x4c9243:c.instructions+=2;goto B4c9243;
case 0x4c9246:c.instructions+=1;goto B4c9246;
case 0x4c924c:goto L4c924c;
case 0x4c9250:c.instructions+=3;goto B4c9250;
case 0x4c9256:c.instructions+=2;goto B4c9256;
case 0x4c925c:c.instructions+=1;goto B4c925c;
case 0x4c9261:goto L4c9261;
case 0x4c9263:c.instructions+=5;goto B4c9263;
case 0x4c9267:c.instructions+=4;goto B4c9267;
case 0x4c9268:c.instructions+=3;goto B4c9268;
case 0x4c926c:c.instructions+=2;goto B4c926c;
case 0x4c9270:c.instructions+=1;goto B4c9270;
case 0x4c9275:goto L4c9275;
case 0x4c9278:c.instructions+=5;goto B4c9278;
case 0x4c927c:c.instructions+=4;goto B4c927c;
case 0x4c927d:c.instructions+=3;goto B4c927d;
case 0x4c9282:c.instructions+=2;goto B4c9282;
case 0x4c9283:c.instructions+=1;goto B4c9283;
case 0x4c9288:goto L4c9288;
case 0x4c928c:c.instructions+=5;goto B4c928c;
case 0x4c9292:c.instructions+=4;goto B4c9292;
case 0x4c9295:c.instructions+=3;goto B4c9295;
case 0x4c9297:c.instructions+=2;goto B4c9297;
case 0x4c929a:c.instructions+=1;goto B4c929a;
case 0x4c929c:goto L4c929c;
case 0x4c929f:c.instructions+=3;goto B4c929f;
case 0x4c92a4:c.instructions+=2;goto B4c92a4;
case 0x4c92a5:c.instructions+=1;goto B4c92a5;
case 0x4c92aa:goto L4c92aa;
case 0x4c92ad:c.instructions+=2;goto B4c92ad;
case 0x4c92af:c.instructions+=1;goto B4c92af;
case 0x4c92b1:goto L4c92b1;
case 0x4c92b4:c.instructions+=4;goto B4c92b4;
case 0x4c92b6:c.instructions+=3;goto B4c92b6;
case 0x4c92bb:c.instructions+=2;goto B4c92bb;
case 0x4c92bc:c.instructions+=1;goto B4c92bc;
case 0x4c92c1:goto L4c92c1;
case 0x4c92c4:c.instructions+=3;goto B4c92c4;
case 0x4c92c5:c.instructions+=2;goto B4c92c5;
case 0x4c92c8:c.instructions+=1;goto B4c92c8;
case 0x4c92cb:goto L4c92cb;
case 0x4c92ce:c.instructions+=3;goto B4c92ce;
case 0x4c92d3:c.instructions+=2;goto B4c92d3;
case 0x4c92d4:c.instructions+=1;goto B4c92d4;
case 0x4c92d9:goto L4c92d9;
case 0x4c92dc:c.instructions+=2;goto B4c92dc;
case 0x4c92de:c.instructions+=1;goto B4c92de;
case 0x4c92e0:goto L4c92e0;
case 0x4c92e3:c.instructions+=4;goto B4c92e3;
case 0x4c92e5:c.instructions+=3;goto B4c92e5;
case 0x4c92ea:c.instructions+=2;goto B4c92ea;
case 0x4c92eb:c.instructions+=1;goto B4c92eb;
case 0x4c92f0:goto L4c92f0;
case 0x4c92f3:goto L4c92f3;
case 0x4c92f4:c.instructions+=2;goto B4c92f4;
case 0x4c92f7:c.instructions+=1;goto B4c92f7;
case 0x4c9300:goto L4c9300;
case 0x4c9303:c.instructions+=5;goto B4c9303;
case 0x4c9307:c.instructions+=4;goto B4c9307;
case 0x4c930a:c.instructions+=3;goto B4c930a;
case 0x4c9310:c.instructions+=2;goto B4c9310;
case 0x4c9311:c.instructions+=1;goto B4c9311;
case 0x4c9316:goto L4c9316;
case 0x4c9318:c.instructions+=2;goto B4c9318;
case 0x4c931c:c.instructions+=1;goto B4c931c;
case 0x4c9322:goto L4c9322;
case 0x4c9328:c.instructions+=3;goto B4c9328;
case 0x4c932b:c.instructions+=2;goto B4c932b;
case 0x4c932d:c.instructions+=1;goto B4c932d;
case 0x4c9333:goto L4c9333;
case 0x4c9334:c.instructions+=7;goto B4c9334;
case 0x4c9335:c.instructions+=6;goto B4c9335;
case 0x4c9336:c.instructions+=5;goto B4c9336;
case 0x4c9337:c.instructions+=4;goto B4c9337;
case 0x4c933c:c.instructions+=3;goto B4c933c;
case 0x4c9341:c.instructions+=2;goto B4c9341;
case 0x4c9349:c.instructions+=1;goto B4c9349;
case 0x4c9350:goto L4c9350;
case 0x4c9352:c.instructions+=1;goto B4c9352;
case 0x4c9358:goto L4c9358;
case 0x4c935c:c.instructions+=3;goto B4c935c;
case 0x4c935f:c.instructions+=2;goto B4c935f;
case 0x4c9361:c.instructions+=1;goto B4c9361;
case 0x4c9367:goto L4c9367;
case 0x4c9369:c.instructions+=2;goto B4c9369;
case 0x4c936b:c.instructions+=1;goto B4c936b;
case 0x4c9371:goto L4c9371;
case 0x4c9374:c.instructions+=2;goto B4c9374;
case 0x4c9376:c.instructions+=1;goto B4c9376;
case 0x4c937c:goto L4c937c;
case 0x4c937f:c.instructions+=3;goto B4c937f;
case 0x4c9385:c.instructions+=2;goto B4c9385;
case 0x4c9386:c.instructions+=1;goto B4c9386;
case 0x4c938b:goto L4c938b;
case 0x4c938e:c.instructions+=3;goto B4c938e;
case 0x4c9393:c.instructions+=2;goto B4c9393;
case 0x4c9396:c.instructions+=1;goto B4c9396;
case 0x4c939b:goto L4c939b;
case 0x4c939d:c.instructions+=1;goto B4c939d;
case 0x4c939f:goto L4c939f;
case 0x4c93a3:c.instructions+=3;goto B4c93a3;
case 0x4c93a4:c.instructions+=2;goto B4c93a4;
case 0x4c93a9:c.instructions+=1;goto B4c93a9;
case 0x4c93ae:goto L4c93ae;
case 0x4c93b0:c.instructions+=1;goto B4c93b0;
case 0x4c93b2:goto L4c93b2;
case 0x4c93b5:c.instructions+=2;goto B4c93b5;
case 0x4c93b6:c.instructions+=1;goto B4c93b6;
case 0x4c93b8:goto L4c93b8;
case 0x4c93bb:c.instructions+=2;goto B4c93bb;
case 0x4c93bf:c.instructions+=1;goto B4c93bf;
case 0x4c93c1:goto L4c93c1;
case 0x4c93c7:c.instructions+=2;goto B4c93c7;
case 0x4c93c9:c.instructions+=1;goto B4c93c9;
case 0x4c93cb:goto L4c93cb;
case 0x4c93cf:c.instructions+=4;goto B4c93cf;
case 0x4c93d2:c.instructions+=3;goto B4c93d2;
case 0x4c93d8:c.instructions+=2;goto B4c93d8;
case 0x4c93de:c.instructions+=1;goto B4c93de;
case 0x4c93e3:goto L4c93e3;
case 0x4c93e4:c.instructions+=1;goto B4c93e4;
case 0x4c93e6:goto L4c93e6;
case 0x4c93ec:c.instructions+=1;goto B4c93ec;
case 0x4c93ed:goto L4c93ed;
case 0x4c93ef:c.instructions+=2;goto B4c93ef;
case 0x4c93f0:c.instructions+=1;goto B4c93f0;
case 0x4c93f5:goto L4c93f5;
case 0x4c93f8:goto L4c93f8;
case 0x4c93fa:c.instructions+=1;goto B4c93fa;
case 0x4c93ff:goto L4c93ff;
case 0x4c9401:c.instructions+=1;goto B4c9401;
case 0x4c9403:goto L4c9403;
case 0x4c9407:c.instructions+=6;goto B4c9407;
case 0x4c940d:c.instructions+=5;goto B4c940d;
case 0x4c940e:c.instructions+=4;goto B4c940e;
case 0x4c940f:c.instructions+=3;goto B4c940f;
case 0x4c9412:c.instructions+=2;goto B4c9412;
case 0x4c9413:c.instructions+=1;goto B4c9413;
case 0x4c9418:goto L4c9418;
case 0x4c941a:goto L4c941a;
case 0x4c9421:goto L4c9421;
case 0x4c9426:c.instructions+=7;goto B4c9426;
case 0x4c942c:c.instructions+=6;goto B4c942c;
case 0x4c942f:c.instructions+=5;goto B4c942f;
case 0x4c9430:c.instructions+=4;goto B4c9430;
case 0x4c9433:c.instructions+=3;goto B4c9433;
case 0x4c9436:c.instructions+=2;goto B4c9436;
case 0x4c9438:c.instructions+=1;goto B4c9438;
case 0x4c943e:goto L4c943e;
case 0x4c943f:c.instructions+=3;goto B4c943f;
case 0x4c9440:c.instructions+=2;goto B4c9440;
case 0x4c9441:c.instructions+=1;goto B4c9441;
case 0x4c9442:goto L4c9442;
case 0x4c9445:c.instructions+=1;goto B4c9445;
case 0x4c944a:goto L4c944a;
case 0x4c944d:c.instructions+=1;goto B4c944d;
case 0x4c9450:goto L4c9450;
case 0x4c9453:c.instructions+=9;goto B4c9453;
case 0x4c9454:c.instructions+=8;goto B4c9454;
case 0x4c9455:c.instructions+=7;goto B4c9455;
case 0x4c9456:c.instructions+=6;goto B4c9456;
case 0x4c945a:c.instructions+=5;goto B4c945a;
case 0x4c945b:c.instructions+=4;goto B4c945b;
case 0x4c945d:c.instructions+=3;goto B4c945d;
case 0x4c9462:c.instructions+=2;goto B4c9462;
case 0x4c9467:c.instructions+=1;goto B4c9467;
case 0x4c9468:goto L4c9468;
case 0x4c946a:goto L4c946a;
case 0x4c946f:goto L4c946f;
case 0x4c9472:c.instructions+=8;goto B4c9472;
case 0x4c9475:c.instructions+=7;goto B4c9475;
case 0x4c947a:c.instructions+=6;goto B4c947a;
case 0x4c947e:c.instructions+=5;goto B4c947e;
case 0x4c9481:c.instructions+=4;goto B4c9481;
case 0x4c9488:c.instructions+=3;goto B4c9488;
case 0x4c9489:c.instructions+=2;goto B4c9489;
case 0x4c948d:c.instructions+=1;goto B4c948d;
case 0x4c9492:goto L4c9492;
case 0x4c9498:c.instructions+=6;goto B4c9498;
case 0x4c949a:c.instructions+=5;goto B4c949a;
case 0x4c949d:c.instructions+=4;goto B4c949d;
case 0x4c949f:c.instructions+=3;goto B4c949f;
case 0x4c94a1:c.instructions+=2;goto B4c94a1;
case 0x4c94a5:c.instructions+=1;goto B4c94a5;
case 0x4c94a7:goto L4c94a7;
case 0x4c94ac:c.instructions+=2;goto B4c94ac;
case 0x4c94ae:c.instructions+=1;goto B4c94ae;
case 0x4c94b0:goto L4c94b0;
case 0x4c94b6:c.instructions+=2;goto B4c94b6;
case 0x4c94b9:c.instructions+=1;goto B4c94b9;
case 0x4c94bb:goto L4c94bb;
case 0x4c94be:c.instructions+=9;goto B4c94be;
case 0x4c94c1:c.instructions+=8;goto B4c94c1;
case 0x4c94c2:c.instructions+=7;goto B4c94c2;
case 0x4c94c5:c.instructions+=6;goto B4c94c5;
case 0x4c94cb:c.instructions+=5;goto B4c94cb;
case 0x4c94d1:c.instructions+=4;goto B4c94d1;
case 0x4c94d4:c.instructions+=3;goto B4c94d4;
case 0x4c94da:c.instructions+=2;goto B4c94da;
case 0x4c94dc:c.instructions+=1;goto B4c94dc;
case 0x4c94de:goto L4c94de;
case 0x4c94e4:c.instructions+=1;goto B4c94e4;
case 0x4c94e9:goto L4c94e9;
case 0x4c94ee:c.instructions+=5;goto B4c94ee;
case 0x4c94f0:c.instructions+=4;goto B4c94f0;
case 0x4c94f2:c.instructions+=3;goto B4c94f2;
case 0x4c94f6:c.instructions+=2;goto B4c94f6;
case 0x4c94f9:c.instructions+=1;goto B4c94f9;
case 0x4c94ff:goto L4c94ff;
case 0x4c9504:c.instructions+=9;goto B4c9504;
case 0x4c9507:c.instructions+=8;goto B4c9507;
case 0x4c950c:c.instructions+=7;goto B4c950c;
case 0x4c950e:c.instructions+=6;goto B4c950e;
case 0x4c9512:c.instructions+=5;goto B4c9512;
case 0x4c9517:c.instructions+=4;goto B4c9517;
case 0x4c9519:c.instructions+=3;goto B4c9519;
case 0x4c951e:c.instructions+=2;goto B4c951e;
case 0x4c9521:c.instructions+=1;goto B4c9521;
case 0x4c9525:goto L4c9525;
case 0x4c9527:c.instructions+=1;goto B4c9527;
case 0x4c952d:goto L4c952d;
case 0x4c9534:c.instructions+=4;goto B4c9534;
case 0x4c9538:c.instructions+=3;goto B4c9538;
case 0x4c953b:c.instructions+=2;goto B4c953b;
case 0x4c9541:c.instructions+=1;goto B4c9541;
case 0x4c9543:goto L4c9543;
case 0x4c9546:c.instructions+=4;goto B4c9546;
case 0x4c954c:c.instructions+=3;goto B4c954c;
case 0x4c954e:c.instructions+=2;goto B4c954e;
case 0x4c9551:c.instructions+=1;goto B4c9551;
case 0x4c9553:goto L4c9553;
case 0x4c9556:c.instructions+=3;goto B4c9556;
case 0x4c9558:c.instructions+=2;goto B4c9558;
case 0x4c955b:c.instructions+=1;goto B4c955b;
case 0x4c955d:goto L4c955d;
case 0x4c9560:c.instructions+=4;goto B4c9560;
case 0x4c9566:c.instructions+=3;goto B4c9566;
case 0x4c9568:c.instructions+=2;goto B4c9568;
case 0x4c956b:c.instructions+=1;goto B4c956b;
case 0x4c956d:goto L4c956d;
case 0x4c9573:c.instructions+=3;goto B4c9573;
case 0x4c9575:c.instructions+=2;goto B4c9575;
case 0x4c9578:c.instructions+=1;goto B4c9578;
case 0x4c957a:goto L4c957a;
case 0x4c957d:c.instructions+=3;goto B4c957d;
case 0x4c957f:c.instructions+=2;goto B4c957f;
case 0x4c9582:c.instructions+=1;goto B4c9582;
case 0x4c9584:goto L4c9584;
case 0x4c9586:c.instructions+=1;goto B4c9586;
case 0x4c9589:goto L4c9589;
case 0x4c958c:c.instructions+=3;goto B4c958c;
case 0x4c958f:c.instructions+=2;goto B4c958f;
case 0x4c9591:c.instructions+=1;goto B4c9591;
case 0x4c9597:goto L4c9597;
case 0x4c959e:c.instructions+=4;goto B4c959e;
case 0x4c95a2:c.instructions+=3;goto B4c95a2;
case 0x4c95a5:c.instructions+=2;goto B4c95a5;
case 0x4c95ab:c.instructions+=1;goto B4c95ab;
case 0x4c95ad:goto L4c95ad;
case 0x4c95b0:c.instructions+=4;goto B4c95b0;
case 0x4c95b6:c.instructions+=3;goto B4c95b6;
case 0x4c95b8:c.instructions+=2;goto B4c95b8;
case 0x4c95bb:c.instructions+=1;goto B4c95bb;
case 0x4c95bd:goto L4c95bd;
case 0x4c95c0:c.instructions+=3;goto B4c95c0;
case 0x4c95c2:c.instructions+=2;goto B4c95c2;
case 0x4c95c5:c.instructions+=1;goto B4c95c5;
case 0x4c95c7:goto L4c95c7;
case 0x4c95ca:c.instructions+=4;goto B4c95ca;
case 0x4c95d0:c.instructions+=3;goto B4c95d0;
case 0x4c95d2:c.instructions+=2;goto B4c95d2;
case 0x4c95d5:c.instructions+=1;goto B4c95d5;
case 0x4c95d7:goto L4c95d7;
case 0x4c95dd:c.instructions+=3;goto B4c95dd;
case 0x4c95df:c.instructions+=2;goto B4c95df;
case 0x4c95e2:c.instructions+=1;goto B4c95e2;
case 0x4c95e4:goto L4c95e4;
case 0x4c95e7:c.instructions+=3;goto B4c95e7;
case 0x4c95e9:c.instructions+=2;goto B4c95e9;
case 0x4c95ec:c.instructions+=1;goto B4c95ec;
case 0x4c95ee:goto L4c95ee;
case 0x4c95f0:c.instructions+=1;goto B4c95f0;
case 0x4c95f3:goto L4c95f3;
case 0x4c95f5:c.instructions+=1;goto B4c95f5;
case 0x4c95fb:goto L4c95fb;
case 0x4c95ff:c.instructions+=4;goto B4c95ff;
case 0x4c9602:c.instructions+=3;goto B4c9602;
case 0x4c9605:c.instructions+=2;goto B4c9605;
case 0x4c960b:c.instructions+=1;goto B4c960b;
case 0x4c960d:goto L4c960d;
case 0x4c960f:c.instructions+=4;goto B4c960f;
case 0x4c9615:c.instructions+=3;goto B4c9615;
case 0x4c9617:c.instructions+=2;goto B4c9617;
case 0x4c961a:c.instructions+=1;goto B4c961a;
case 0x4c961c:goto L4c961c;
case 0x4c961e:c.instructions+=3;goto B4c961e;
case 0x4c9620:c.instructions+=2;goto B4c9620;
case 0x4c9623:c.instructions+=1;goto B4c9623;
case 0x4c9625:goto L4c9625;
case 0x4c9627:c.instructions+=4;goto B4c9627;
case 0x4c962d:c.instructions+=3;goto B4c962d;
case 0x4c962f:c.instructions+=2;goto B4c962f;
case 0x4c9632:c.instructions+=1;goto B4c9632;
case 0x4c9634:goto L4c9634;
case 0x4c963a:c.instructions+=3;goto B4c963a;
case 0x4c963c:c.instructions+=2;goto B4c963c;
case 0x4c963f:c.instructions+=1;goto B4c963f;
case 0x4c9641:goto L4c9641;
case 0x4c9643:c.instructions+=3;goto B4c9643;
case 0x4c9645:c.instructions+=2;goto B4c9645;
case 0x4c9648:c.instructions+=1;goto B4c9648;
case 0x4c964a:goto L4c964a;
case 0x4c964c:c.instructions+=1;goto B4c964c;
case 0x4c964e:goto L4c964e;
case 0x4c9650:c.instructions+=1;goto B4c9650;
case 0x4c9656:goto L4c9656;
case 0x4c965a:c.instructions+=4;goto B4c965a;
case 0x4c965d:c.instructions+=3;goto B4c965d;
case 0x4c9660:c.instructions+=2;goto B4c9660;
case 0x4c9666:c.instructions+=1;goto B4c9666;
case 0x4c9668:goto L4c9668;
case 0x4c966b:c.instructions+=4;goto B4c966b;
case 0x4c9671:c.instructions+=3;goto B4c9671;
case 0x4c9673:c.instructions+=2;goto B4c9673;
case 0x4c9676:c.instructions+=1;goto B4c9676;
case 0x4c9678:goto L4c9678;
case 0x4c967b:c.instructions+=3;goto B4c967b;
case 0x4c967d:c.instructions+=2;goto B4c967d;
case 0x4c9680:c.instructions+=1;goto B4c9680;
case 0x4c9682:goto L4c9682;
case 0x4c9685:c.instructions+=4;goto B4c9685;
case 0x4c968b:c.instructions+=3;goto B4c968b;
case 0x4c968d:c.instructions+=2;goto B4c968d;
case 0x4c9690:c.instructions+=1;goto B4c9690;
case 0x4c9692:goto L4c9692;
case 0x4c9698:c.instructions+=3;goto B4c9698;
case 0x4c969a:c.instructions+=2;goto B4c969a;
case 0x4c969d:c.instructions+=1;goto B4c969d;
case 0x4c969f:goto L4c969f;
case 0x4c96a2:c.instructions+=3;goto B4c96a2;
case 0x4c96a4:c.instructions+=2;goto B4c96a4;
case 0x4c96a7:c.instructions+=1;goto B4c96a7;
case 0x4c96a9:goto L4c96a9;
case 0x4c96ab:c.instructions+=1;goto B4c96ab;
case 0x4c96ae:goto L4c96ae;
case 0x4c96b3:c.instructions+=6;goto B4c96b3;
case 0x4c96b7:c.instructions+=5;goto B4c96b7;
case 0x4c96ba:c.instructions+=4;goto B4c96ba;
case 0x4c96bd:c.instructions+=3;goto B4c96bd;
case 0x4c96c0:c.instructions+=2;goto B4c96c0;
case 0x4c96c2:c.instructions+=1;goto B4c96c2;
case 0x4c96c8:goto L4c96c8;
case 0x4c96cc:goto L4c96cc;
case 0x4c96d2:c.instructions+=1;goto B4c96d2;
case 0x4c96d8:goto L4c96d8;
case 0x4c96de:c.instructions+=5;goto B4c96de;
case 0x4c96e1:c.instructions+=4;goto B4c96e1;
case 0x4c96e6:c.instructions+=3;goto B4c96e6;
case 0x4c96ea:c.instructions+=2;goto B4c96ea;
case 0x4c96ec:c.instructions+=1;goto B4c96ec;
case 0x4c96f0:goto L4c96f0;
case 0x4c96f2:c.instructions+=1;goto B4c96f2;
case 0x4c96f4:goto L4c96f4;
case 0x4c96f7:c.instructions+=4;goto B4c96f7;
case 0x4c96fb:c.instructions+=3;goto B4c96fb;
case 0x4c96fe:c.instructions+=2;goto B4c96fe;
case 0x4c9704:c.instructions+=1;goto B4c9704;
case 0x4c9706:goto L4c9706;
case 0x4c9708:c.instructions+=4;goto B4c9708;
case 0x4c970e:c.instructions+=3;goto B4c970e;
case 0x4c9710:c.instructions+=2;goto B4c9710;
case 0x4c9713:c.instructions+=1;goto B4c9713;
case 0x4c9715:goto L4c9715;
case 0x4c9717:c.instructions+=3;goto B4c9717;
case 0x4c9719:c.instructions+=2;goto B4c9719;
case 0x4c971c:c.instructions+=1;goto B4c971c;
case 0x4c971e:goto L4c971e;
case 0x4c9720:c.instructions+=4;goto B4c9720;
case 0x4c9726:c.instructions+=3;goto B4c9726;
case 0x4c9728:c.instructions+=2;goto B4c9728;
case 0x4c972b:c.instructions+=1;goto B4c972b;
case 0x4c972d:goto L4c972d;
case 0x4c9733:c.instructions+=3;goto B4c9733;
case 0x4c9735:c.instructions+=2;goto B4c9735;
case 0x4c9738:c.instructions+=1;goto B4c9738;
case 0x4c973a:goto L4c973a;
case 0x4c973c:c.instructions+=3;goto B4c973c;
case 0x4c973e:c.instructions+=2;goto B4c973e;
case 0x4c9741:c.instructions+=1;goto B4c9741;
case 0x4c9743:goto L4c9743;
case 0x4c9745:c.instructions+=1;goto B4c9745;
case 0x4c9747:goto L4c9747;
case 0x4c974c:c.instructions+=4;goto B4c974c;
case 0x4c974d:c.instructions+=3;goto B4c974d;
case 0x4c9750:c.instructions+=2;goto B4c9750;
case 0x4c9752:c.instructions+=1;goto B4c9752;
case 0x4c9754:goto L4c9754;
case 0x4c9758:goto L4c9758;
case 0x4c9759:c.instructions+=1;goto B4c9759;
case 0x4c975e:goto L4c975e;
case 0x4c9762:c.instructions+=7;goto B4c9762;
case 0x4c9765:c.instructions+=6;goto B4c9765;
case 0x4c9766:c.instructions+=5;goto B4c9766;
case 0x4c9767:c.instructions+=4;goto B4c9767;
case 0x4c9768:c.instructions+=3;goto B4c9768;
case 0x4c9769:c.instructions+=2;goto B4c9769;
case 0x4c976c:c.instructions+=1;goto B4c976c;
case 0x4c976d:goto L4c976d;
case 0x4c9771:c.instructions+=1;goto B4c9771;
case 0x4c9773:goto L4c9773;
case 0x4c9775:c.instructions+=1;goto B4c9775;
case 0x4c9780:goto L4c9780;
case 0x4c9781:c.instructions+=4;goto B4c9781;
case 0x4c9783:c.instructions+=3;goto B4c9783;
case 0x4c9787:c.instructions+=2;goto B4c9787;
case 0x4c978b:c.instructions+=1;goto B4c978b;
case 0x4c978d:goto L4c978d;
case 0x4c9790:c.instructions+=4;goto B4c9790;
case 0x4c9792:c.instructions+=3;goto B4c9792;
case 0x4c9797:c.instructions+=2;goto B4c9797;
case 0x4c9798:c.instructions+=1;goto B4c9798;
case 0x4c979d:goto L4c979d;
case 0x4c97a0:c.instructions+=2;goto B4c97a0;
case 0x4c97a1:c.instructions+=1;goto B4c97a1;
case 0x4c97a6:goto L4c97a6;
case 0x4c97a9:c.instructions+=1;goto B4c97a9;
case 0x4c97ae:goto L4c97ae;
case 0x4c97b2:c.instructions+=1;goto B4c97b2;
case 0x4c97b8:goto L4c97b8;
case 0x4c97bd:c.instructions+=2;goto B4c97bd;
case 0x4c97c0:c.instructions+=1;goto B4c97c0;
case 0x4c97c2:goto L4c97c2;
case 0x4c97c9:c.instructions+=1;goto B4c97c9;
case 0x4c97cf:goto L4c97cf;
case 0x4c97d1:goto L4c97d1;
case 0x4c97d5:c.instructions+=4;goto B4c97d5;
case 0x4c97d8:c.instructions+=3;goto B4c97d8;
case 0x4c97db:c.instructions+=2;goto B4c97db;
case 0x4c97df:c.instructions+=1;goto B4c97df;
case 0x4c97e1:goto L4c97e1;
case 0x4c97e3:c.instructions+=4;goto B4c97e3;
case 0x4c97e5:c.instructions+=3;goto B4c97e5;
case 0x4c97ea:c.instructions+=2;goto B4c97ea;
case 0x4c97ef:c.instructions+=1;goto B4c97ef;
case 0x4c97f1:goto L4c97f1;
case 0x4c97f6:c.instructions+=2;goto B4c97f6;
case 0x4c97fb:c.instructions+=1;goto B4c97fb;
case 0x4c97fd:goto L4c97fd;
case 0x4c97ff:c.instructions+=1;goto B4c97ff;
case 0x4c9801:goto L4c9801;
case 0x4c9807:c.instructions+=1;goto B4c9807;
case 0x4c9809:goto L4c9809;
case 0x4c980c:c.instructions+=1;goto B4c980c;
case 0x4c980e:goto L4c980e;
case 0x4c9814:c.instructions+=1;goto B4c9814;
case 0x4c9816:goto L4c9816;
case 0x4c981b:c.instructions+=1;goto B4c981b;
case 0x4c9820:goto L4c9820;
case 0x4c9822:c.instructions+=1;goto B4c9822;
case 0x4c9824:goto L4c9824;
case 0x4c9826:c.instructions+=1;goto B4c9826;
case 0x4c9828:goto L4c9828;
case 0x4c982a:c.instructions+=3;goto B4c982a;
case 0x4c982c:c.instructions+=2;goto B4c982c;
case 0x4c9831:c.instructions+=1;goto B4c9831;
case 0x4c9836:goto L4c9836;
case 0x4c9837:c.instructions+=3;goto B4c9837;
case 0x4c983a:c.instructions+=2;goto B4c983a;
case 0x4c983b:c.instructions+=1;goto B4c983b;
case 0x4c9840:goto L4c9840;
case 0x4c9843:c.instructions+=2;goto B4c9843;
case 0x4c9844:c.instructions+=1;goto B4c9844;
case 0x4c9849:goto L4c9849;
case 0x4c984c:c.instructions+=4;goto B4c984c;
case 0x4c984e:c.instructions+=3;goto B4c984e;
case 0x4c9853:c.instructions+=2;goto B4c9853;
case 0x4c9854:c.instructions+=1;goto B4c9854;
case 0x4c9859:goto L4c9859;
case 0x4c985c:goto L4c985c;
case 0x4c985e:c.instructions+=3;goto B4c985e;
case 0x4c9862:c.instructions+=2;goto B4c9862;
case 0x4c9866:c.instructions+=1;goto B4c9866;
case 0x4c9868:goto L4c9868;
case 0x4c9869:c.instructions+=1;goto B4c9869;
case 0x4c986d:goto L4c986d;
case 0x4c986e:c.instructions+=1;goto B4c986e;
case 0x4c9880:goto L4c9880;
case 0x4c9886:c.instructions+=1;goto B4c9886;
case 0x4c9890:goto L4c9890;
case 0x4c9891:c.instructions+=2;goto B4c9891;
case 0x4c9893:c.instructions+=1;goto B4c9893;
case 0x4c9898:goto L4c9898;
case 0x4c989d:c.instructions+=1;goto B4c989d;
case 0x4c989f:goto L4c989f;
case 0x4c98a0:c.instructions+=1;goto B4c98a0;
case 0x4c98a5:goto L4c98a5;
case 0x4c98a8:goto L4c98a8;
case 0x4c98aa:c.instructions+=2;goto B4c98aa;
case 0x4c98ab:c.instructions+=1;goto B4c98ab;
case 0x4c98b0:goto L4c98b0;
case 0x4c98b1:c.instructions+=5;goto B4c98b1;
case 0x4c98b3:c.instructions+=4;goto B4c98b3;
case 0x4c98b6:c.instructions+=3;goto B4c98b6;
case 0x4c98bb:c.instructions+=2;goto B4c98bb;
case 0x4c98bc:c.instructions+=1;goto B4c98bc;
case 0x4c98c1:goto L4c98c1;
case 0x4c98c5:c.instructions+=6;goto B4c98c5;
case 0x4c98cb:c.instructions+=5;goto B4c98cb;
case 0x4c98ce:c.instructions+=4;goto B4c98ce;
case 0x4c98d1:c.instructions+=3;goto B4c98d1;
case 0x4c98d6:c.instructions+=2;goto B4c98d6;
case 0x4c98d7:c.instructions+=1;goto B4c98d7;
case 0x4c98dc:goto L4c98dc;
case 0x4c98df:c.instructions+=2;goto B4c98df;
case 0x4c98e0:c.instructions+=1;goto B4c98e0;
case 0x4c98f0:goto L4c98f0;
case 0x4c98f1:c.instructions+=5;goto B4c98f1;
case 0x4c98f3:c.instructions+=4;goto B4c98f3;
case 0x4c98f6:c.instructions+=3;goto B4c98f6;
case 0x4c98fb:c.instructions+=2;goto B4c98fb;
case 0x4c98fc:c.instructions+=1;goto B4c98fc;
case 0x4c9901:goto L4c9901;
case 0x4c9905:c.instructions+=6;goto B4c9905;
case 0x4c990b:c.instructions+=5;goto B4c990b;
case 0x4c990e:c.instructions+=4;goto B4c990e;
case 0x4c9911:c.instructions+=3;goto B4c9911;
case 0x4c9916:c.instructions+=2;goto B4c9916;
case 0x4c9917:c.instructions+=1;goto B4c9917;
case 0x4c991c:goto L4c991c;
case 0x4c991f:c.instructions+=2;goto B4c991f;
case 0x4c9920:c.instructions+=1;goto B4c9920;
case 0x4c9930:goto L4c9930;
case 0x4c9931:c.instructions+=7;goto B4c9931;
case 0x4c9932:c.instructions+=6;goto B4c9932;
case 0x4c9934:c.instructions+=5;goto B4c9934;
case 0x4c9938:c.instructions+=4;goto B4c9938;
case 0x4c993a:c.instructions+=3;goto B4c993a;
case 0x4c993d:c.instructions+=2;goto B4c993d;
case 0x4c993e:c.instructions+=1;goto B4c993e;
case 0x4c9943:goto L4c9943;
case 0x4c9945:c.instructions+=1;goto B4c9945;
case 0x4c994a:goto L4c994a;
case 0x4c994d:c.instructions+=3;goto B4c994d;
case 0x4c9952:c.instructions+=2;goto B4c9952;
case 0x4c9953:c.instructions+=1;goto B4c9953;
case 0x4c9958:goto L4c9958;
case 0x4c995b:c.instructions+=4;goto B4c995b;
case 0x4c995c:c.instructions+=3;goto B4c995c;
case 0x4c9961:c.instructions+=2;goto B4c9961;
case 0x4c9962:c.instructions+=1;goto B4c9962;
case 0x4c9967:goto L4c9967;
case 0x4c996a:c.instructions+=3;goto B4c996a;
case 0x4c996b:c.instructions+=2;goto B4c996b;
case 0x4c996c:c.instructions+=1;goto B4c996c;
case 0x4c9970:goto L4c9970;
case 0x4c9972:c.instructions+=22;goto B4c9972;
case 0x4c9977:c.instructions+=21;goto B4c9977;
case 0x4c997d:c.instructions+=20;goto B4c997d;
case 0x4c997e:c.instructions+=19;goto B4c997e;
case 0x4c9985:c.instructions+=18;goto B4c9985;
case 0x4c9986:c.instructions+=17;goto B4c9986;
case 0x4c998a:c.instructions+=16;goto B4c998a;
case 0x4c998b:c.instructions+=15;goto B4c998b;
case 0x4c998d:c.instructions+=14;goto B4c998d;
case 0x4c9991:c.instructions+=13;goto B4c9991;
case 0x4c9992:c.instructions+=12;goto B4c9992;
case 0x4c9996:c.instructions+=11;goto B4c9996;
case 0x4c9999:c.instructions+=10;goto B4c9999;
case 0x4c999c:c.instructions+=9;goto B4c999c;
case 0x4c999e:c.instructions+=8;goto B4c999e;
case 0x4c99a4:c.instructions+=7;goto B4c99a4;
case 0x4c99a7:c.instructions+=6;goto B4c99a7;
case 0x4c99aa:c.instructions+=5;goto B4c99aa;
case 0x4c99ad:c.instructions+=4;goto B4c99ad;
case 0x4c99b2:c.instructions+=3;goto B4c99b2;
case 0x4c99b3:c.instructions+=2;goto B4c99b3;
case 0x4c99b7:c.instructions+=1;goto B4c99b7;
case 0x4c99bc:goto L4c99bc;
case 0x4c99c0:c.instructions+=9;goto B4c99c0;
case 0x4c99c3:c.instructions+=8;goto B4c99c3;
case 0x4c99c6:c.instructions+=7;goto B4c99c6;
case 0x4c99c9:c.instructions+=6;goto B4c99c9;
case 0x4c99ca:c.instructions+=5;goto B4c99ca;
case 0x4c99cc:c.instructions+=4;goto B4c99cc;
case 0x4c99cd:c.instructions+=3;goto B4c99cd;
case 0x4c99d4:c.instructions+=2;goto B4c99d4;
case 0x4c99d7:c.instructions+=1;goto B4c99d7;
case 0x4c99e0:goto L4c99e0;
case 0x4c99e4:c.instructions+=6;goto B4c99e4;
case 0x4c99e5:c.instructions+=5;goto B4c99e5;
case 0x4c99e7:c.instructions+=4;goto B4c99e7;
case 0x4c99ea:c.instructions+=3;goto B4c99ea;
case 0x4c99ec:c.instructions+=2;goto B4c99ec;
case 0x4c99ed:c.instructions+=1;goto B4c99ed;
case 0x4c99ef:goto L4c99ef;
case 0x4c99f5:c.instructions+=1;goto B4c99f5;
case 0x4c99f8:goto L4c99f8;
case 0x4c99fc:c.instructions+=3;goto B4c99fc;
case 0x4c99ff:c.instructions+=2;goto B4c99ff;
case 0x4c9a02:c.instructions+=1;goto B4c9a02;
case 0x4c9a07:goto L4c9a07;
case 0x4c9a09:c.instructions+=2;goto B4c9a09;
case 0x4c9a0b:c.instructions+=1;goto B4c9a0b;
case 0x4c9a0d:goto L4c9a0d;
case 0x4c9a12:c.instructions+=1;goto B4c9a12;
case 0x4c9a14:goto L4c9a14;
case 0x4c9a19:c.instructions+=8;goto B4c9a19;
case 0x4c9a1c:c.instructions+=7;goto B4c9a1c;
case 0x4c9a20:c.instructions+=6;goto B4c9a20;
case 0x4c9a24:c.instructions+=5;goto B4c9a24;
case 0x4c9a2a:c.instructions+=4;goto B4c9a2a;
case 0x4c9a30:c.instructions+=3;goto B4c9a30;
case 0x4c9a32:c.instructions+=2;goto B4c9a32;
case 0x4c9a35:c.instructions+=1;goto B4c9a35;
case 0x4c9a37:goto L4c9a37;
case 0x4c9a3a:c.instructions+=2;goto B4c9a3a;
case 0x4c9a3d:c.instructions+=1;goto B4c9a3d;
case 0x4c9a42:goto L4c9a42;
case 0x4c9a48:c.instructions+=2;goto B4c9a48;
case 0x4c9a4a:c.instructions+=1;goto B4c9a4a;
case 0x4c9a4d:goto L4c9a4d;
case 0x4c9a4f:c.instructions+=4;goto B4c9a4f;
case 0x4c9a52:c.instructions+=3;goto B4c9a52;
case 0x4c9a53:c.instructions+=2;goto B4c9a53;
case 0x4c9a56:c.instructions+=1;goto B4c9a56;
case 0x4c9a5b:goto L4c9a5b;
case 0x4c9a5e:c.instructions+=4;goto B4c9a5e;
case 0x4c9a5f:c.instructions+=3;goto B4c9a5f;
case 0x4c9a64:c.instructions+=2;goto B4c9a64;
case 0x4c9a65:c.instructions+=1;goto B4c9a65;
case 0x4c9a6a:goto L4c9a6a;
case 0x4c9a6d:c.instructions+=3;goto B4c9a6d;
case 0x4c9a6e:c.instructions+=2;goto B4c9a6e;
case 0x4c9a6f:c.instructions+=1;goto B4c9a6f;
case 0x4c9a72:goto L4c9a72;
case 0x4c9a75:c.instructions+=3;goto B4c9a75;
case 0x4c9a7a:c.instructions+=2;goto B4c9a7a;
case 0x4c9a7b:c.instructions+=1;goto B4c9a7b;
case 0x4c9a80:goto L4c9a80;
case 0x4c9a83:c.instructions+=3;goto B4c9a83;
case 0x4c9a84:c.instructions+=2;goto B4c9a84;
case 0x4c9a85:c.instructions+=1;goto B4c9a85;
case 0x4c9a90:goto L4c9a90;
case 0x4c9a91:c.instructions+=8;goto B4c9a91;
case 0x4c9a92:c.instructions+=7;goto B4c9a92;
case 0x4c9a94:c.instructions+=6;goto B4c9a94;
case 0x4c9a98:c.instructions+=5;goto B4c9a98;
case 0x4c9a9a:c.instructions+=4;goto B4c9a9a;
case 0x4c9a9d:c.instructions+=3;goto B4c9a9d;
case 0x4c9a9e:c.instructions+=2;goto B4c9a9e;
case 0x4c9aa4:c.instructions+=1;goto B4c9aa4;
case 0x4c9aa9:goto L4c9aa9;
case 0x4c9aae:c.instructions+=8;goto B4c9aae;
case 0x4c9ab0:c.instructions+=7;goto B4c9ab0;
case 0x4c9ab2:c.instructions+=6;goto B4c9ab2;
case 0x4c9ab4:c.instructions+=5;goto B4c9ab4;
case 0x4c9ab7:c.instructions+=4;goto B4c9ab7;
case 0x4c9aba:c.instructions+=3;goto B4c9aba;
case 0x4c9abb:c.instructions+=2;goto B4c9abb;
case 0x4c9ac0:c.instructions+=1;goto B4c9ac0;
case 0x4c9ac5:goto L4c9ac5;
case 0x4c9ac8:c.instructions+=2;goto B4c9ac8;
case 0x4c9ac9:c.instructions+=1;goto B4c9ac9;
case 0x4c9ace:goto L4c9ace;
case 0x4c9ad1:c.instructions+=3;goto B4c9ad1;
case 0x4c9ad2:c.instructions+=2;goto B4c9ad2;
case 0x4c9ad3:c.instructions+=1;goto B4c9ad3;
case 0x4c9ad8:goto L4c9ad8;
case 0x4c9adb:c.instructions+=4;goto B4c9adb;
case 0x4c9adc:c.instructions+=3;goto B4c9adc;
case 0x4c9ae1:c.instructions+=2;goto B4c9ae1;
case 0x4c9ae2:c.instructions+=1;goto B4c9ae2;
case 0x4c9ae7:goto L4c9ae7;
case 0x4c9aea:c.instructions+=3;goto B4c9aea;
case 0x4c9aeb:c.instructions+=2;goto B4c9aeb;
case 0x4c9aec:c.instructions+=1;goto B4c9aec;
case 0x4c9af0:goto L4c9af0;
case 0x4c9af1:c.instructions+=8;goto B4c9af1;
case 0x4c9af2:c.instructions+=7;goto B4c9af2;
case 0x4c9af4:c.instructions+=6;goto B4c9af4;
case 0x4c9af8:c.instructions+=5;goto B4c9af8;
case 0x4c9afa:c.instructions+=4;goto B4c9afa;
case 0x4c9afd:c.instructions+=3;goto B4c9afd;
case 0x4c9afe:c.instructions+=2;goto B4c9afe;
case 0x4c9b04:c.instructions+=1;goto B4c9b04;
case 0x4c9b09:goto L4c9b09;
case 0x4c9b0e:c.instructions+=9;goto B4c9b0e;
case 0x4c9b11:c.instructions+=8;goto B4c9b11;
case 0x4c9b13:c.instructions+=7;goto B4c9b13;
case 0x4c9b15:c.instructions+=6;goto B4c9b15;
case 0x4c9b17:c.instructions+=5;goto B4c9b17;
case 0x4c9b1c:c.instructions+=4;goto B4c9b1c;
case 0x4c9b21:c.instructions+=3;goto B4c9b21;
case 0x4c9b22:c.instructions+=2;goto B4c9b22;
case 0x4c9b23:c.instructions+=1;goto B4c9b23;
case 0x4c9b28:goto L4c9b28;
case 0x4c9b2b:c.instructions+=4;goto B4c9b2b;
case 0x4c9b2c:c.instructions+=3;goto B4c9b2c;
case 0x4c9b31:c.instructions+=2;goto B4c9b31;
case 0x4c9b32:c.instructions+=1;goto B4c9b32;
case 0x4c9b37:goto L4c9b37;
case 0x4c9b3a:c.instructions+=3;goto B4c9b3a;
case 0x4c9b3b:c.instructions+=2;goto B4c9b3b;
case 0x4c9b3c:c.instructions+=1;goto B4c9b3c;
case 0x4c9b40:goto L4c9b40;
case 0x4c9b41:c.instructions+=5;goto B4c9b41;
case 0x4c9b43:c.instructions+=4;goto B4c9b43;
case 0x4c9b46:c.instructions+=3;goto B4c9b46;
case 0x4c9b4b:c.instructions+=2;goto B4c9b4b;
case 0x4c9b4c:c.instructions+=1;goto B4c9b4c;
case 0x4c9b51:goto L4c9b51;
case 0x4c9b55:c.instructions+=6;goto B4c9b55;
case 0x4c9b5b:c.instructions+=5;goto B4c9b5b;
case 0x4c9b5e:c.instructions+=4;goto B4c9b5e;
case 0x4c9b64:c.instructions+=3;goto B4c9b64;
case 0x4c9b66:c.instructions+=2;goto B4c9b66;
case 0x4c9b69:c.instructions+=1;goto B4c9b69;
case 0x4c9b6b:goto L4c9b6b;
case 0x4c9b6d:c.instructions+=1;goto B4c9b6d;
case 0x4c9b73:goto L4c9b73;
case 0x4c9b78:c.instructions+=3;goto B4c9b78;
case 0x4c9b7b:c.instructions+=2;goto B4c9b7b;
case 0x4c9b7d:c.instructions+=1;goto B4c9b7d;
case 0x4c9b7f:goto L4c9b7f;
case 0x4c9b82:c.instructions+=4;goto B4c9b82;
case 0x4c9b85:c.instructions+=3;goto B4c9b85;
case 0x4c9b8a:c.instructions+=2;goto B4c9b8a;
case 0x4c9b8b:c.instructions+=1;goto B4c9b8b;
case 0x4c9b90:goto L4c9b90;
case 0x4c9b93:c.instructions+=3;goto B4c9b93;
case 0x4c9b98:c.instructions+=2;goto B4c9b98;
case 0x4c9b99:c.instructions+=1;goto B4c9b99;
case 0x4c9b9e:goto L4c9b9e;
case 0x4c9ba1:c.instructions+=2;goto B4c9ba1;
case 0x4c9ba2:c.instructions+=1;goto B4c9ba2;
case 0x4c9ba5:goto L4c9ba5;
case 0x4c9bab:c.instructions+=5;goto B4c9bab;
case 0x4c9bae:c.instructions+=4;goto B4c9bae;
case 0x4c9bb1:c.instructions+=3;goto B4c9bb1;
case 0x4c9bb6:c.instructions+=2;goto B4c9bb6;
case 0x4c9bb7:c.instructions+=1;goto B4c9bb7;
case 0x4c9bbc:goto L4c9bbc;
case 0x4c9bbf:c.instructions+=3;goto B4c9bbf;
case 0x4c9bc4:c.instructions+=2;goto B4c9bc4;
case 0x4c9bc5:c.instructions+=1;goto B4c9bc5;
case 0x4c9bca:goto L4c9bca;
case 0x4c9bcd:c.instructions+=2;goto B4c9bcd;
case 0x4c9bce:c.instructions+=1;goto B4c9bce;
case 0x4c9be0:goto L4c9be0;
case 0x4c9be1:c.instructions+=4;goto B4c9be1;
case 0x4c9be3:c.instructions+=3;goto B4c9be3;
case 0x4c9be7:c.instructions+=2;goto B4c9be7;
case 0x4c9be8:c.instructions+=1;goto B4c9be8;
case 0x4c9bed:goto L4c9bed;
case 0x4c9bf2:goto L4c9bf2;
case 0x4c9bf4:c.instructions+=4;goto B4c9bf4;
case 0x4c9bf7:c.instructions+=3;goto B4c9bf7;
case 0x4c9bfc:c.instructions+=2;goto B4c9bfc;
case 0x4c9bfd:c.instructions+=1;goto B4c9bfd;
case 0x4c9c02:goto L4c9c02;
case 0x4c9c05:c.instructions+=4;goto B4c9c05;
case 0x4c9c06:c.instructions+=3;goto B4c9c06;
case 0x4c9c0b:c.instructions+=2;goto B4c9c0b;
case 0x4c9c0c:c.instructions+=1;goto B4c9c0c;
case 0x4c9c11:goto L4c9c11;
case 0x4c9c14:c.instructions+=3;goto B4c9c14;
case 0x4c9c15:c.instructions+=2;goto B4c9c15;
case 0x4c9c16:c.instructions+=1;goto B4c9c16;
case 0x4c9c20:goto L4c9c20;
case 0x4c9c24:c.instructions+=10;goto B4c9c24;
case 0x4c9c25:c.instructions+=9;goto B4c9c25;
case 0x4c9c27:c.instructions+=8;goto B4c9c27;
case 0x4c9c2d:c.instructions+=7;goto B4c9c2d;
case 0x4c9c2f:c.instructions+=6;goto B4c9c2f;
case 0x4c9c32:c.instructions+=5;goto B4c9c32;
case 0x4c9c35:c.instructions+=4;goto B4c9c35;
case 0x4c9c3a:c.instructions+=3;goto B4c9c3a;
case 0x4c9c3b:c.instructions+=2;goto B4c9c3b;
case 0x4c9c3f:c.instructions+=1;goto B4c9c3f;
case 0x4c9c44:goto L4c9c44;
case 0x4c9c48:c.instructions+=1;goto B4c9c48;
case 0x4c9c4d:goto L4c9c4d;
case 0x4c9c50:c.instructions+=4;goto B4c9c50;
case 0x4c9c51:c.instructions+=3;goto B4c9c51;
case 0x4c9c56:c.instructions+=2;goto B4c9c56;
case 0x4c9c57:c.instructions+=1;goto B4c9c57;
case 0x4c9c5c:goto L4c9c5c;
case 0x4c9c5f:c.instructions+=2;goto B4c9c5f;
case 0x4c9c60:c.instructions+=1;goto B4c9c60;
case 0x4c9c70:goto L4c9c70;
case 0x4c9c73:c.instructions+=9;goto B4c9c73;
case 0x4c9c77:c.instructions+=8;goto B4c9c77;
case 0x4c9c78:c.instructions+=7;goto B4c9c78;
case 0x4c9c7a:c.instructions+=6;goto B4c9c7a;
case 0x4c9c80:c.instructions+=5;goto B4c9c80;
case 0x4c9c82:c.instructions+=4;goto B4c9c82;
case 0x4c9c85:c.instructions+=3;goto B4c9c85;
case 0x4c9c8b:c.instructions+=2;goto B4c9c8b;
case 0x4c9c91:c.instructions+=1;goto B4c9c91;
case 0x4c9c96:goto L4c9c96;
case 0x4c9c9a:c.instructions+=5;goto B4c9c9a;
case 0x4c9c9c:c.instructions+=4;goto B4c9c9c;
case 0x4c9ca0:c.instructions+=3;goto B4c9ca0;
case 0x4c9ca1:c.instructions+=2;goto B4c9ca1;
case 0x4c9ca5:c.instructions+=1;goto B4c9ca5;
case 0x4c9caa:goto L4c9caa;
case 0x4c9cad:c.instructions+=3;goto B4c9cad;
case 0x4c9cb2:c.instructions+=2;goto B4c9cb2;
case 0x4c9cb3:c.instructions+=1;goto B4c9cb3;
case 0x4c9cb8:goto L4c9cb8;
case 0x4c9cbb:c.instructions+=5;goto B4c9cbb;
case 0x4c9cbf:c.instructions+=4;goto B4c9cbf;
case 0x4c9cc0:c.instructions+=3;goto B4c9cc0;
case 0x4c9cc5:c.instructions+=2;goto B4c9cc5;
case 0x4c9cc6:c.instructions+=1;goto B4c9cc6;
case 0x4c9ccb:goto L4c9ccb;
case 0x4c9cce:c.instructions+=3;goto B4c9cce;
case 0x4c9ccf:c.instructions+=2;goto B4c9ccf;
case 0x4c9cd2:c.instructions+=1;goto B4c9cd2;
case 0x4c9ce0:goto L4c9ce0;
case 0x4c9ce3:c.instructions+=9;goto B4c9ce3;
case 0x4c9ce4:c.instructions+=8;goto B4c9ce4;
case 0x4c9ce5:c.instructions+=7;goto B4c9ce5;
case 0x4c9ce9:c.instructions+=6;goto B4c9ce9;
case 0x4c9cea:c.instructions+=5;goto B4c9cea;
case 0x4c9cec:c.instructions+=4;goto B4c9cec;
case 0x4c9cef:c.instructions+=3;goto B4c9cef;
case 0x4c9cf1:c.instructions+=2;goto B4c9cf1;
case 0x4c9cf2:c.instructions+=1;goto B4c9cf2;
case 0x4c9cf4:goto L4c9cf4;
case 0x4c9cf7:goto L4c9cf7;
case 0x4c9cfa:c.instructions+=2;goto B4c9cfa;
case 0x4c9cfc:c.instructions+=1;goto B4c9cfc;
case 0x4c9cfe:goto L4c9cfe;
case 0x4c9d01:c.instructions+=3;goto B4c9d01;
case 0x4c9d04:c.instructions+=2;goto B4c9d04;
case 0x4c9d07:c.instructions+=1;goto B4c9d07;
case 0x4c9d0a:goto L4c9d0a;
case 0x4c9d0d:c.instructions+=7;goto B4c9d0d;
case 0x4c9d10:c.instructions+=6;goto B4c9d10;
case 0x4c9d13:c.instructions+=5;goto B4c9d13;
case 0x4c9d16:c.instructions+=4;goto B4c9d16;
case 0x4c9d18:c.instructions+=3;goto B4c9d18;
case 0x4c9d1a:c.instructions+=2;goto B4c9d1a;
case 0x4c9d1c:c.instructions+=1;goto B4c9d1c;
case 0x4c9d22:goto L4c9d22;
case 0x4c9d25:c.instructions+=3;goto B4c9d25;
case 0x4c9d27:c.instructions+=2;goto B4c9d27;
case 0x4c9d2a:c.instructions+=1;goto B4c9d2a;
case 0x4c9d2c:goto L4c9d2c;
case 0x4c9d2f:c.instructions+=1;goto B4c9d2f;
case 0x4c9d31:goto L4c9d31;
case 0x4c9d33:goto L4c9d33;
case 0x4c9d35:c.instructions+=1;goto B4c9d35;
case 0x4c9d37:goto L4c9d37;
case 0x4c9d3a:c.instructions+=1;goto B4c9d3a;
case 0x4c9d3c:goto L4c9d3c;
case 0x4c9d3e:goto L4c9d3e;
case 0x4c9d40:c.instructions+=1;goto B4c9d40;
case 0x4c9d42:goto L4c9d42;
case 0x4c9d45:c.instructions+=6;goto B4c9d45;
case 0x4c9d48:c.instructions+=5;goto B4c9d48;
case 0x4c9d4a:c.instructions+=4;goto B4c9d4a;
case 0x4c9d4b:c.instructions+=3;goto B4c9d4b;
case 0x4c9d4c:c.instructions+=2;goto B4c9d4c;
case 0x4c9d4e:c.instructions+=1;goto B4c9d4e;
case 0x4c9d51:goto L4c9d51;
case 0x4c9d54:c.instructions+=2;goto B4c9d54;
case 0x4c9d56:c.instructions+=1;goto B4c9d56;
case 0x4c9d58:goto L4c9d58;
case 0x4c9d5b:c.instructions+=1;goto B4c9d5b;
case 0x4c9d5d:goto L4c9d5d;
case 0x4c9d62:c.instructions+=2;goto B4c9d62;
case 0x4c9d64:c.instructions+=1;goto B4c9d64;
case 0x4c9d66:goto L4c9d66;
case 0x4c9d6b:c.instructions+=2;goto B4c9d6b;
case 0x4c9d6d:c.instructions+=1;goto B4c9d6d;
case 0x4c9d73:goto L4c9d73;
case 0x4c9d76:c.instructions+=5;goto B4c9d76;
case 0x4c9d7c:c.instructions+=4;goto B4c9d7c;
case 0x4c9d81:c.instructions+=3;goto B4c9d81;
case 0x4c9d86:c.instructions+=2;goto B4c9d86;
case 0x4c9d88:c.instructions+=1;goto B4c9d88;
case 0x4c9d8a:goto L4c9d8a;
case 0x4c9d90:c.instructions+=3;goto B4c9d90;
case 0x4c9d95:c.instructions+=2;goto B4c9d95;
case 0x4c9d99:c.instructions+=1;goto B4c9d99;
case 0x4c9d9e:goto L4c9d9e;
case 0x4c9da1:c.instructions+=3;goto B4c9da1;
case 0x4c9da2:c.instructions+=2;goto B4c9da2;
case 0x4c9da3:c.instructions+=1;goto B4c9da3;
case 0x4c9da5:goto L4c9da5;
case 0x4c9dab:c.instructions+=3;goto B4c9dab;
case 0x4c9db0:c.instructions+=2;goto B4c9db0;
case 0x4c9db4:c.instructions+=1;goto B4c9db4;
case 0x4c9db9:goto L4c9db9;
case 0x4c9dbc:c.instructions+=2;goto B4c9dbc;
case 0x4c9dbd:c.instructions+=1;goto B4c9dbd;
case 0x4c9dbe:goto L4c9dbe;
case 0x4c9dc3:goto L4c9dc3;
case 0x4c9dc7:c.instructions+=2;goto B4c9dc7;
case 0x4c9dca:c.instructions+=1;goto B4c9dca;
case 0x4c9dcf:goto L4c9dcf;
case 0x4c9dd0:c.instructions+=4;goto B4c9dd0;
case 0x4c9dd3:c.instructions+=3;goto B4c9dd3;
case 0x4c9dd8:c.instructions+=2;goto B4c9dd8;
case 0x4c9dd9:c.instructions+=1;goto B4c9dd9;
case 0x4c9dde:goto L4c9dde;
case 0x4c9de3:c.instructions+=14;goto B4c9de3;
case 0x4c9dea:c.instructions+=13;goto B4c9dea;
case 0x4c9ded:c.instructions+=12;goto B4c9ded;
case 0x4c9df0:c.instructions+=11;goto B4c9df0;
case 0x4c9df7:c.instructions+=10;goto B4c9df7;
case 0x4c9dfa:c.instructions+=9;goto B4c9dfa;
case 0x4c9e00:c.instructions+=8;goto B4c9e00;
case 0x4c9e06:c.instructions+=7;goto B4c9e06;
case 0x4c9e08:c.instructions+=6;goto B4c9e08;
case 0x4c9e0e:c.instructions+=5;goto B4c9e0e;
case 0x4c9e12:c.instructions+=4;goto B4c9e12;
case 0x4c9e17:c.instructions+=3;goto B4c9e17;
case 0x4c9e1a:c.instructions+=2;goto B4c9e1a;
case 0x4c9e1b:c.instructions+=1;goto B4c9e1b;
case 0x4c9e20:goto L4c9e20;
case 0x4c9e23:c.instructions+=2;goto B4c9e23;
case 0x4c9e25:c.instructions+=1;goto B4c9e25;
case 0x4c9e27:goto L4c9e27;
case 0x4c9e29:c.instructions+=4;goto B4c9e29;
case 0x4c9e2f:c.instructions+=3;goto B4c9e2f;
case 0x4c9e31:c.instructions+=2;goto B4c9e31;
case 0x4c9e34:c.instructions+=1;goto B4c9e34;
case 0x4c9e36:goto L4c9e36;
case 0x4c9e39:c.instructions+=3;goto B4c9e39;
case 0x4c9e3b:c.instructions+=2;goto B4c9e3b;
case 0x4c9e3e:c.instructions+=1;goto B4c9e3e;
case 0x4c9e40:goto L4c9e40;
case 0x4c9e43:c.instructions+=5;goto B4c9e43;
case 0x4c9e45:c.instructions+=4;goto B4c9e45;
case 0x4c9e49:c.instructions+=3;goto B4c9e49;
case 0x4c9e4a:c.instructions+=2;goto B4c9e4a;
case 0x4c9e50:c.instructions+=1;goto B4c9e50;
case 0x4c9e55:goto L4c9e55;
case 0x4c9e5a:c.instructions+=13;goto B4c9e5a;
case 0x4c9e5d:c.instructions+=12;goto B4c9e5d;
case 0x4c9e63:c.instructions+=11;goto B4c9e63;
case 0x4c9e65:c.instructions+=10;goto B4c9e65;
case 0x4c9e67:c.instructions+=9;goto B4c9e67;
case 0x4c9e6b:c.instructions+=8;goto B4c9e6b;
case 0x4c9e6d:c.instructions+=7;goto B4c9e6d;
case 0x4c9e70:c.instructions+=6;goto B4c9e70;
case 0x4c9e75:c.instructions+=5;goto B4c9e75;
case 0x4c9e78:c.instructions+=4;goto B4c9e78;
case 0x4c9e7d:c.instructions+=3;goto B4c9e7d;
case 0x4c9e7e:c.instructions+=2;goto B4c9e7e;
case 0x4c9e7f:c.instructions+=1;goto B4c9e7f;
case 0x4c9e84:goto L4c9e84;
case 0x4c9e87:c.instructions+=4;goto B4c9e87;
case 0x4c9e88:c.instructions+=3;goto B4c9e88;
case 0x4c9e8b:c.instructions+=2;goto B4c9e8b;
case 0x4c9e8c:c.instructions+=1;goto B4c9e8c;
case 0x4c9e91:goto L4c9e91;
case 0x4c9e94:c.instructions+=4;goto B4c9e94;
case 0x4c9e95:c.instructions+=3;goto B4c9e95;
case 0x4c9e9a:c.instructions+=2;goto B4c9e9a;
case 0x4c9e9b:c.instructions+=1;goto B4c9e9b;
case 0x4c9ea0:goto L4c9ea0;
case 0x4c9ea3:c.instructions+=1;goto B4c9ea3;
case 0x4c9ea5:goto L4c9ea5;
case 0x4c9ea7:goto L4c9ea7;
case 0x4c9eaa:c.instructions+=2;goto B4c9eaa;
case 0x4c9eac:c.instructions+=1;goto B4c9eac;
case 0x4c9eb2:goto L4c9eb2;
case 0x4c9eb5:c.instructions+=7;goto B4c9eb5;
case 0x4c9ebb:c.instructions+=6;goto B4c9ebb;
case 0x4c9ec1:c.instructions+=5;goto B4c9ec1;
case 0x4c9ec7:c.instructions+=4;goto B4c9ec7;
case 0x4c9ecd:c.instructions+=3;goto B4c9ecd;
case 0x4c9ecf:c.instructions+=2;goto B4c9ecf;
case 0x4c9ed2:c.instructions+=1;goto B4c9ed2;
case 0x4c9ed4:goto L4c9ed4;
case 0x4c9ed7:c.instructions+=3;goto B4c9ed7;
case 0x4c9ed9:c.instructions+=2;goto B4c9ed9;
case 0x4c9edc:c.instructions+=1;goto B4c9edc;
case 0x4c9ede:goto L4c9ede;
case 0x4c9ee3:c.instructions+=2;goto B4c9ee3;
case 0x4c9ee5:c.instructions+=1;goto B4c9ee5;
case 0x4c9ee7:goto L4c9ee7;
case 0x4c9eec:c.instructions+=2;goto B4c9eec;
case 0x4c9eee:c.instructions+=1;goto B4c9eee;
case 0x4c9ef0:goto L4c9ef0;
case 0x4c9ef2:c.instructions+=3;goto B4c9ef2;
case 0x4c9ef6:c.instructions+=2;goto B4c9ef6;
case 0x4c9ef7:c.instructions+=1;goto B4c9ef7;
case 0x4c9efc:goto L4c9efc;
case 0x4c9f01:c.instructions+=10;goto B4c9f01;
case 0x4c9f03:c.instructions+=9;goto B4c9f03;
case 0x4c9f05:c.instructions+=8;goto B4c9f05;
case 0x4c9f09:c.instructions+=7;goto B4c9f09;
case 0x4c9f0a:c.instructions+=6;goto B4c9f0a;
case 0x4c9f0c:c.instructions+=5;goto B4c9f0c;
case 0x4c9f0f:c.instructions+=4;goto B4c9f0f;
case 0x4c9f12:c.instructions+=3;goto B4c9f12;
case 0x4c9f13:c.instructions+=2;goto B4c9f13;
case 0x4c9f18:c.instructions+=1;goto B4c9f18;
case 0x4c9f1d:goto L4c9f1d;
case 0x4c9f20:c.instructions+=4;goto B4c9f20;
case 0x4c9f23:c.instructions+=3;goto B4c9f23;
case 0x4c9f24:c.instructions+=2;goto B4c9f24;
case 0x4c9f25:c.instructions+=1;goto B4c9f25;
case 0x4c9f2a:goto L4c9f2a;
case 0x4c9f2d:goto L4c9f2d;
case 0x4c9f30:c.instructions+=4;goto B4c9f30;
case 0x4c9f31:c.instructions+=3;goto B4c9f31;
case 0x4c9f36:c.instructions+=2;goto B4c9f36;
case 0x4c9f37:c.instructions+=1;goto B4c9f37;
case 0x4c9f3c:goto L4c9f3c;
case 0x4c9f3f:goto L4c9f3f;
case 0x4c9f42:c.instructions+=2;goto B4c9f42;
case 0x4c9f44:c.instructions+=1;goto B4c9f44;
case 0x4c9f4a:goto L4c9f4a;
case 0x4c9f4d:c.instructions+=5;goto B4c9f4d;
case 0x4c9f53:c.instructions+=4;goto B4c9f53;
case 0x4c9f59:c.instructions+=3;goto B4c9f59;
case 0x4c9f5b:c.instructions+=2;goto B4c9f5b;
case 0x4c9f5e:c.instructions+=1;goto B4c9f5e;
case 0x4c9f64:goto L4c9f64;
case 0x4c9f67:c.instructions+=3;goto B4c9f67;
case 0x4c9f69:c.instructions+=2;goto B4c9f69;
case 0x4c9f6c:c.instructions+=1;goto B4c9f6c;
case 0x4c9f72:goto L4c9f72;
case 0x4c9f78:c.instructions+=5;goto B4c9f78;
case 0x4c9f7c:c.instructions+=4;goto B4c9f7c;
case 0x4c9f82:c.instructions+=3;goto B4c9f82;
case 0x4c9f84:c.instructions+=2;goto B4c9f84;
case 0x4c9f87:c.instructions+=1;goto B4c9f87;
case 0x4c9f89:goto L4c9f89;
case 0x4c9f8e:c.instructions+=1;goto B4c9f8e;
case 0x4c9f93:goto L4c9f93;
case 0x4c9f95:c.instructions+=1;goto B4c9f95;
case 0x4c9f97:goto L4c9f97;
case 0x4c9f9d:c.instructions+=1;goto B4c9f9d;
case 0x4c9f9f:goto L4c9f9f;
case 0x4c9fa3:c.instructions+=5;goto B4c9fa3;
case 0x4c9fa8:c.instructions+=4;goto B4c9fa8;
case 0x4c9fab:c.instructions+=3;goto B4c9fab;
case 0x4c9fae:c.instructions+=2;goto B4c9fae;
case 0x4c9fb3:c.instructions+=1;goto B4c9fb3;
case 0x4c9fb8:goto L4c9fb8;
case 0x4c9fbb:c.instructions+=4;goto B4c9fbb;
case 0x4c9fbe:c.instructions+=3;goto B4c9fbe;
case 0x4c9fbf:c.instructions+=2;goto B4c9fbf;
case 0x4c9fc0:c.instructions+=1;goto B4c9fc0;
case 0x4c9fc2:goto L4c9fc2;
case 0x4c9fc7:c.instructions+=1;goto B4c9fc7;
case 0x4c9fcc:goto L4c9fcc;
case 0x4c9fd0:c.instructions+=7;goto B4c9fd0;
case 0x4c9fd6:c.instructions+=6;goto B4c9fd6;
case 0x4c9fd9:c.instructions+=5;goto B4c9fd9;
case 0x4c9fda:c.instructions+=4;goto B4c9fda;
case 0x4c9fdd:c.instructions+=3;goto B4c9fdd;
case 0x4c9fe0:c.instructions+=2;goto B4c9fe0;
case 0x4c9fe5:c.instructions+=1;goto B4c9fe5;
case 0x4c9fea:goto L4c9fea;
case 0x4c9fed:c.instructions+=3;goto B4c9fed;
case 0x4c9ff0:c.instructions+=2;goto B4c9ff0;
case 0x4c9ff1:c.instructions+=1;goto B4c9ff1;
case 0x4c9ff2:goto L4c9ff2;
case 0x4c9ff7:goto L4c9ff7;
case 0x4c9ffa:goto L4c9ffa;
case 0x4c9ffd:c.instructions+=2;goto B4c9ffd;
case 0x4c9ffe:c.instructions+=1;goto B4c9ffe;
default:missing_instruction(c.pc);}
B4c9000:L4c9000:{c.instructions+=1;NFSU2_TR(0x4c9000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9005ull));
TAIL_STATIC(0x50c990u,50c);
}
B4c9005:L4c9005:{c.instructions+=4;NFSU2_TR(0x4c9005);
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
B4c9008:{NFSU2_TR(0x4c9008);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c9009:{NFSU2_TR(0x4c9009);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c900a:{NFSU2_TR(0x4c900a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9030:L4c9030:{c.instructions+=5;NFSU2_TR(0x4c9030);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9031:{NFSU2_TR(0x4c9031);
__builtin_memmove((R+24),(R+4),4);
}
B4c9033:{NFSU2_TR(0x4c9033);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c9036:{NFSU2_TR(0x4c9036);
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
B4c9038:{NFSU2_TR(0x4c9038);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9041;}}
}
B4c903a:L4c903a:{c.instructions+=3;NFSU2_TR(0x4c903a);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B4c903d:{NFSU2_TR(0x4c903d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c903e:{NFSU2_TR(0x4c903e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9041:L4c9041:{c.instructions+=3;NFSU2_TR(0x4c9041);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B4c9043:{NFSU2_TR(0x4c9043);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c9045:{NFSU2_TR(0x4c9045);
if(r1(R+518)){{goto L4c909f;}}
}
B4c9047:L4c9047:{c.instructions+=2;NFSU2_TR(0x4c9047);
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
B4c9049:{NFSU2_TR(0x4c9049);
if(r1(R+518)){{goto L4c909f;}}
}
B4c904b:L4c904b:{c.instructions+=2;NFSU2_TR(0x4c904b);
__builtin_memmove((R+4),(R+24),4);
}
B4c904d:{NFSU2_TR(0x4c904d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9052ull));
TAIL_STATIC(0x4c8ac0u,4c8);
}
B4c9052:L4c9052:{c.instructions+=3;NFSU2_TR(0x4c9052);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4c9056:{NFSU2_TR(0x4c9056);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4c9059:{NFSU2_TR(0x4c9059);
if(r1(R+518)){{goto L4c9093;}}
}
B4c905b:L4c905b:{c.instructions+=2;NFSU2_TR(0x4c905b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4c905e:{NFSU2_TR(0x4c905e);
if(r1(R+518)){{goto L4c9083;}}
}
B4c9060:L4c9060:{c.instructions+=2;NFSU2_TR(0x4c9060);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4c9061:{NFSU2_TR(0x4c9061);
if(r1(R+518)){{goto L4c9073;}}
}
B4c9063:L4c9063:{c.instructions+=4;NFSU2_TR(0x4c9063);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9067:{NFSU2_TR(0x4c9067);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9068:{NFSU2_TR(0x4c9068);
__builtin_memmove((R+4),(R+24),4);
}
B4c906a:{NFSU2_TR(0x4c906a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c906full));
TAIL_STATIC(0x4c8b80u,4c8);
}
B4c906f:L4c906f:{c.instructions+=2;NFSU2_TR(0x4c906f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c9070:{NFSU2_TR(0x4c9070);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9073:L4c9073:{c.instructions+=4;NFSU2_TR(0x4c9073);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9077:{NFSU2_TR(0x4c9077);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9078:{NFSU2_TR(0x4c9078);
__builtin_memmove((R+4),(R+24),4);
}
B4c907a:{NFSU2_TR(0x4c907a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c907full));
TAIL_STATIC(0x4aba30u,4ab);
}
B4c907f:L4c907f:{c.instructions+=2;NFSU2_TR(0x4c907f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c9080:{NFSU2_TR(0x4c9080);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9083:L4c9083:{c.instructions+=4;NFSU2_TR(0x4c9083);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c9087:{NFSU2_TR(0x4c9087);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9088:{NFSU2_TR(0x4c9088);
__builtin_memmove((R+4),(R+24),4);
}
B4c908a:{NFSU2_TR(0x4c908a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c908full));
TAIL_STATIC(0x4abaf0u,4ab);
}
B4c908f:L4c908f:{c.instructions+=2;NFSU2_TR(0x4c908f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c9090:{NFSU2_TR(0x4c9090);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9093:L4c9093:{c.instructions+=4;NFSU2_TR(0x4c9093);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9097:{NFSU2_TR(0x4c9097);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9098:{NFSU2_TR(0x4c9098);
__builtin_memmove((R+4),(R+24),4);
}
B4c909a:{NFSU2_TR(0x4c909a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c909full));
TAIL_STATIC(0x4c8dd0u,4c8);
}
B4c909f:L4c909f:{c.instructions+=2;NFSU2_TR(0x4c909f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c90a0:{NFSU2_TR(0x4c90a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c90b0:L4c90b0:{c.instructions+=8;NFSU2_TR(0x4c90b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c90b1:{NFSU2_TR(0x4c90b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c90b2:{NFSU2_TR(0x4c90b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c90b3:{NFSU2_TR(0x4c90b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c90b4:{NFSU2_TR(0x4c90b4);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4c90b6:{NFSU2_TR(0x4c90b6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c90b8:{NFSU2_TR(0x4c90b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c90bb:{NFSU2_TR(0x4c90bb);
w4(R+20,u32(0x8ull));
}
B4c90c0:L4c90c0:{c.instructions+=2;NFSU2_TR(0x4c90c0);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4c90c3:{NFSU2_TR(0x4c90c3);
if(r1(R+518)){{goto L4c9115;}}
}
B4c90c5:L4c90c5:{c.instructions+=4;NFSU2_TR(0x4c90c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4c90c9:{NFSU2_TR(0x4c90c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c90cc:{NFSU2_TR(0x4c90cc);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x13ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x13ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c90cf:{NFSU2_TR(0x4c90cf);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c9115;}}
}
B4c90d1:L4c90d1:{c.instructions+=2;NFSU2_TR(0x4c90d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4c9130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4c90d8:{NFSU2_TR(0x4c90d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4c9120ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c90df:L4c90df:{c.instructions+=2;NFSU2_TR(0x4c90df);
w1(R+8,u8(0x4ull));
}
B4c90e1:{NFSU2_TR(0x4c90e1);
{goto L4c90ed;}
}
B4c90e3:L4c90e3:{c.instructions+=2;NFSU2_TR(0x4c90e3);
w1(R+8,u8(0x3ull));
}
B4c90e5:{NFSU2_TR(0x4c90e5);
{goto L4c90ed;}
}
B4c90e7:L4c90e7:{c.instructions+=2;NFSU2_TR(0x4c90e7);
w1(R+8,u8(0x2ull));
}
B4c90e9:{NFSU2_TR(0x4c90e9);
{goto L4c90ed;}
}
B4c90eb:L4c90eb:{c.instructions+=1;NFSU2_TR(0x4c90eb);
w1(R+8,u8(0x1ull));
}
B4c90ed:L4c90ed:{c.instructions+=2;NFSU2_TR(0x4c90ed);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+8))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+8),r1(U+3)));
w1(U+4,u8(u32(r1(R+8))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c90ef:{NFSU2_TR(0x4c90ef);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4c9115;}}
}
B4c90f1:L4c90f1:{c.instructions+=3;NFSU2_TR(0x4c90f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4c9154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4c90f8:{NFSU2_TR(0x4c90f8);
__builtin_memmove((R+0),(R+28),4);
}
B4c90fa:{NFSU2_TR(0x4c90fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4c9144ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c9101:L4c9101:{c.instructions+=2;NFSU2_TR(0x4c9101);
w1(R+4,u8(0x4ull));
}
B4c9103:{NFSU2_TR(0x4c9103);
{goto L4c9113;}
}
B4c9105:L4c9105:{c.instructions+=2;NFSU2_TR(0x4c9105);
w1(R+4,u8(0x3ull));
}
B4c9107:{NFSU2_TR(0x4c9107);
{goto L4c9113;}
}
B4c9109:L4c9109:{c.instructions+=2;NFSU2_TR(0x4c9109);
w1(R+4,u8(0x2ull));
}
B4c910b:{NFSU2_TR(0x4c910b);
{goto L4c9113;}
}
B4c910d:L4c910d:{c.instructions+=2;NFSU2_TR(0x4c910d);
w1(R+4,u8(0x1ull));
}
B4c910f:{NFSU2_TR(0x4c910f);
{goto L4c9113;}
}
B4c9113:L4c9113:{c.instructions+=1;NFSU2_TR(0x4c9113);
__builtin_memmove((R+12),(R+4),1);
}
B4c9115:L4c9115:{c.instructions+=3;NFSU2_TR(0x4c9115);
w1(R+512,carry<u32>(r4(R+28),u32(0x14ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B4c9118:{NFSU2_TR(0x4c9118);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c9119:{NFSU2_TR(0x4c9119);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c90c0u);}goto L4c90c0;}}
}
B4c911b:L4c911b:{c.instructions+=5;NFSU2_TR(0x4c911b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c911c:{NFSU2_TR(0x4c911c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c911d:{NFSU2_TR(0x4c911d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c911e:{NFSU2_TR(0x4c911e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c911f:{NFSU2_TR(0x4c911f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9170:L4c9170:{c.instructions+=8;NFSU2_TR(0x4c9170);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9171:{NFSU2_TR(0x4c9171);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9172:{NFSU2_TR(0x4c9172);
__builtin_memmove((R+20),(R+4),4);
}
B4c9174:{NFSU2_TR(0x4c9174);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c9178:{NFSU2_TR(0x4c9178);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9179:{NFSU2_TR(0x4c9179);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c917c:{NFSU2_TR(0x4c917c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c917e:{NFSU2_TR(0x4c917e);
__builtin_memmove((R+8),(R+28),4);
}
B4c9180:L4c9180:{c.instructions+=2;NFSU2_TR(0x4c9180);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4c9183:{NFSU2_TR(0x4c9183);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c918a;}}
}
B4c9185:L4c9185:{c.instructions+=2;NFSU2_TR(0x4c9185);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4c9188:{NFSU2_TR(0x4c9188);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9195;}}
}
B4c918a:L4c918a:{c.instructions+=4;NFSU2_TR(0x4c918a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4c918b:{NFSU2_TR(0x4c918b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B4c918e:{NFSU2_TR(0x4c918e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c9191:{NFSU2_TR(0x4c9191);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c9180u);}goto L4c9180;}}
}
B4c9193:L4c9193:{c.instructions+=1;NFSU2_TR(0x4c9193);
{goto L4c91a0;}
}
B4c9195:L4c9195:{c.instructions+=4;NFSU2_TR(0x4c9195);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c9198:{NFSU2_TR(0x4c9198);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B4c919c:{NFSU2_TR(0x4c919c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c919e:{NFSU2_TR(0x4c919e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c91d2;}}
}
B4c91a0:L4c91a0:{c.instructions+=2;NFSU2_TR(0x4c91a0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c91a2:{NFSU2_TR(0x4c91a2);
__builtin_memmove((R+8),(R+28),4);
}
B4c91a4:L4c91a4:{c.instructions+=2;NFSU2_TR(0x4c91a4);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B4c91a7:{NFSU2_TR(0x4c91a7);
if(r1(R+518)){{goto L4c91b8;}}
}
B4c91a9:L4c91a9:{c.instructions+=4;NFSU2_TR(0x4c91a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4c91aa:{NFSU2_TR(0x4c91aa);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B4c91ad:{NFSU2_TR(0x4c91ad);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4c91b0:{NFSU2_TR(0x4c91b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c91a4u);}goto L4c91a4;}}
}
B4c91b2:L4c91b2:{c.instructions+=4;NFSU2_TR(0x4c91b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c91b3:{NFSU2_TR(0x4c91b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c91b4:{NFSU2_TR(0x4c91b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c91b5:{NFSU2_TR(0x4c91b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c91b8:L4c91b8:{c.instructions+=10;NFSU2_TR(0x4c91b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c91b9:{NFSU2_TR(0x4c91b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4c91bc:{NFSU2_TR(0x4c91bc);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4c91c0:{NFSU2_TR(0x4c91c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c91c1:{NFSU2_TR(0x4c91c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c91c4:{NFSU2_TR(0x4c91c4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c91c8:{NFSU2_TR(0x4c91c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c91c9:{NFSU2_TR(0x4c91c9);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+0)),r1(U+0));
}
B4c91cc:{NFSU2_TR(0x4c91cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c91cf:{NFSU2_TR(0x4c91cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c91d2:L4c91d2:{c.instructions+=2;NFSU2_TR(0x4c91d2);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x4ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x4ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B4c91d5:{NFSU2_TR(0x4c91d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9209;}}
}
B4c91d7:L4c91d7:{c.instructions+=7;NFSU2_TR(0x4c91d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c91db:{NFSU2_TR(0x4c91db);
u8 U[1];
w1(U+0,u8(0x2ull));
s1(u32(r4(R+24)),r1(U+0));
}
B4c91de:{NFSU2_TR(0x4c91de);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B4c91e4:{NFSU2_TR(0x4c91e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c91e7:{NFSU2_TR(0x4c91e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c91ea:{NFSU2_TR(0x4c91ea);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x14ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x14ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x14ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c91ec:{NFSU2_TR(0x4c91ec);
if(r1(R+518)){{goto L4c9202;}}
}
B4c91ee:L4c91ee:{c.instructions+=2;NFSU2_TR(0x4c91ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x13ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c91f0:{NFSU2_TR(0x4c91f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c91f6;}}
}
B4c91f2:L4c91f2:{c.instructions+=2;NFSU2_TR(0x4c91f2);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c91f4:{NFSU2_TR(0x4c91f4);
{goto L4c91f8;}
}
B4c91f6:L4c91f6:{c.instructions+=1;NFSU2_TR(0x4c91f6);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c91f8:L4c91f8:{c.instructions+=2;NFSU2_TR(0x4c91f8);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c91fa:{NFSU2_TR(0x4c91fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c91ffull));
TAIL_STATIC(0x51de30u,51d);
}
B4c91ff:L4c91ff:{c.instructions+=1;NFSU2_TR(0x4c91ff);
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
B4c9202:L4c9202:{c.instructions+=2;NFSU2_TR(0x4c9202);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9206:{NFSU2_TR(0x4c9206);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c9209:L4c9209:{c.instructions+=4;NFSU2_TR(0x4c9209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c920a:{NFSU2_TR(0x4c920a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c920b:{NFSU2_TR(0x4c920b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c920c:{NFSU2_TR(0x4c920c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9210:L4c9210:{c.instructions+=11;NFSU2_TR(0x4c9210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B4c9213:{NFSU2_TR(0x4c9213);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9214:{NFSU2_TR(0x4c9214);
__builtin_memmove((R+24),(R+4),4);
}
B4c9216:{NFSU2_TR(0x4c9216);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9219:{NFSU2_TR(0x4c9219);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c921c:{NFSU2_TR(0x4c921c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c921f:{NFSU2_TR(0x4c921f);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4c9221:{NFSU2_TR(0x4c9221);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9224:{NFSU2_TR(0x4c9224);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B4c9226:{NFSU2_TR(0x4c9226);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4c9228:{NFSU2_TR(0x4c9228);
if(r1(R+518)){{goto L4c92f3;}}
}
B4c922e:L4c922e:{c.instructions+=7;NFSU2_TR(0x4c922e);
__builtin_memmove((R+0),gp(0x85b944),4);
}
B4c9233:{NFSU2_TR(0x4c9233);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c9237:{NFSU2_TR(0x4c9237);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c923b:{NFSU2_TR(0x4c923b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c9241:{NFSU2_TR(0x4c9241);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9243:{NFSU2_TR(0x4c9243);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c9246:{NFSU2_TR(0x4c9246);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c92f3;}}
}
B4c924c:L4c924c:{c.instructions+=4;NFSU2_TR(0x4c924c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9250:{NFSU2_TR(0x4c9250);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c9256:{NFSU2_TR(0x4c9256);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4c925c:{NFSU2_TR(0x4c925c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9261ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4c9261:L4c9261:{c.instructions+=6;NFSU2_TR(0x4c9261);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9263:{NFSU2_TR(0x4c9263);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c9267:{NFSU2_TR(0x4c9267);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9268:{NFSU2_TR(0x4c9268);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c926c:{NFSU2_TR(0x4c926c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c9270:{NFSU2_TR(0x4c9270);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9275ull));
TAIL_STATIC(0x577240u,577);
}
B4c9275:L4c9275:{c.instructions+=6;NFSU2_TR(0x4c9275);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9278:{NFSU2_TR(0x4c9278);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c927c:{NFSU2_TR(0x4c927c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c927d:{NFSU2_TR(0x4c927d);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9282:{NFSU2_TR(0x4c9282);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9283:{NFSU2_TR(0x4c9283);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9288ull));
TAIL_STATIC(0x537be0u,537);
}
B4c9288:L4c9288:{c.instructions+=6;NFSU2_TR(0x4c9288);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c928c:{NFSU2_TR(0x4c928c);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c9292:{NFSU2_TR(0x4c9292);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c9295:{NFSU2_TR(0x4c9295);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9297:{NFSU2_TR(0x4c9297);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c929a:{NFSU2_TR(0x4c929a);
if(r1(R+514)){{goto L4c92cb;}}
}
B4c929c:L4c929c:{c.instructions+=4;NFSU2_TR(0x4c929c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c929f:{NFSU2_TR(0x4c929f);
u8 U[4];
w4(U+0,u32(0x795b34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c92a4:{NFSU2_TR(0x4c92a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c92a5:{NFSU2_TR(0x4c92a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c92aaull));
TAIL_STATIC(0x51d040u,51d);
}
B4c92aa:L4c92aa:{c.instructions+=3;NFSU2_TR(0x4c92aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c92ad:{NFSU2_TR(0x4c92ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c92af:{NFSU2_TR(0x4c92af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c92f3;}}
}
B4c92b1:L4c92b1:{c.instructions+=5;NFSU2_TR(0x4c92b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c92b4:{NFSU2_TR(0x4c92b4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c92b6:{NFSU2_TR(0x4c92b6);
u8 U[4];
w4(U+0,u32(0x795b34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c92bb:{NFSU2_TR(0x4c92bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c92bc:{NFSU2_TR(0x4c92bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c92c1ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c92c1:L4c92c1:{c.instructions+=4;NFSU2_TR(0x4c92c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c92c4:{NFSU2_TR(0x4c92c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c92c5:{NFSU2_TR(0x4c92c5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c92c8:{NFSU2_TR(0x4c92c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c92cb:L4c92cb:{c.instructions+=4;NFSU2_TR(0x4c92cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c92ce:{NFSU2_TR(0x4c92ce);
u8 U[4];
w4(U+0,u32(0x790eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c92d3:{NFSU2_TR(0x4c92d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c92d4:{NFSU2_TR(0x4c92d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c92d9ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c92d9:L4c92d9:{c.instructions+=3;NFSU2_TR(0x4c92d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c92dc:{NFSU2_TR(0x4c92dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c92de:{NFSU2_TR(0x4c92de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c92f3;}}
}
B4c92e0:L4c92e0:{c.instructions+=5;NFSU2_TR(0x4c92e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c92e3:{NFSU2_TR(0x4c92e3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c92e5:{NFSU2_TR(0x4c92e5);
u8 U[4];
w4(U+0,u32(0x790eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c92ea:{NFSU2_TR(0x4c92ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c92eb:{NFSU2_TR(0x4c92eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c92f0ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c92f0:L4c92f0:{c.instructions+=1;NFSU2_TR(0x4c92f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c92f3:L4c92f3:{c.instructions+=3;NFSU2_TR(0x4c92f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c92f4:{NFSU2_TR(0x4c92f4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c92f7:{NFSU2_TR(0x4c92f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9300:L4c9300:{c.instructions+=6;NFSU2_TR(0x4c9300);
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
B4c9303:{NFSU2_TR(0x4c9303);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9307:{NFSU2_TR(0x4c9307);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c930a:{NFSU2_TR(0x4c930a);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4c9310:{NFSU2_TR(0x4c9310);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9311:{NFSU2_TR(0x4c9311);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9316ull));
TAIL_STATIC(0x5eef60u,5ee);
}
B4c9316:L4c9316:{c.instructions+=3;NFSU2_TR(0x4c9316);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c9318:{NFSU2_TR(0x4c9318);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c931c:{NFSU2_TR(0x4c931c);
if(r1(R+518)){{goto L4c944a;}}
}
B4c9322:L4c9322:{c.instructions+=4;NFSU2_TR(0x4c9322);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4c9328:{NFSU2_TR(0x4c9328);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c932b:{NFSU2_TR(0x4c932b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c932d:{NFSU2_TR(0x4c932d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c9442;}}
}
B4c9333:L4c9333:{c.instructions+=8;NFSU2_TR(0x4c9333);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9334:{NFSU2_TR(0x4c9334);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9335:{NFSU2_TR(0x4c9335);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9336:{NFSU2_TR(0x4c9336);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9337:{NFSU2_TR(0x4c9337);
w4(R+20,u32(0x1ull));
}
B4c933c:{NFSU2_TR(0x4c933c);
w4(R+24,u32(0x83704cull));
}
B4c9341:{NFSU2_TR(0x4c9341);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xbd0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c9349:{NFSU2_TR(0x4c9349);
__builtin_memmove((R+16),(R+16),4);
}
B4c9350:L4c9350:{c.instructions+=2;NFSU2_TR(0x4c9350);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c9352:{NFSU2_TR(0x4c9352);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4c9421;}}
}
B4c9358:L4c9358:{c.instructions+=4;NFSU2_TR(0x4c9358);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c935c:{NFSU2_TR(0x4c935c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4c935f:{NFSU2_TR(0x4c935f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c9361:{NFSU2_TR(0x4c9361);
if(r1(R+518)){{goto L4c9421;}}
}
B4c9367:L4c9367:{c.instructions+=3;NFSU2_TR(0x4c9367);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4c9369:{NFSU2_TR(0x4c9369);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c936b:{NFSU2_TR(0x4c936b);
if(r1(R+518)){{goto L4c9421;}}
}
B4c9371:L4c9371:{c.instructions+=3;NFSU2_TR(0x4c9371);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9374:{NFSU2_TR(0x4c9374);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c9376:{NFSU2_TR(0x4c9376);
if(r1(R+518)){{goto L4c9421;}}
}
B4c937c:L4c937c:{c.instructions+=4;NFSU2_TR(0x4c937c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c937f:{NFSU2_TR(0x4c937f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9385:{NFSU2_TR(0x4c9385);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9386:{NFSU2_TR(0x4c9386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c938bull));
TAIL_STATIC(0x512080u,512);
}
B4c938b:L4c938b:{c.instructions+=4;NFSU2_TR(0x4c938b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c938e:{NFSU2_TR(0x4c938e);
w4(R+4,u32(0x89cf48ull));
}
B4c9393:{NFSU2_TR(0x4c9393);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c9396:{NFSU2_TR(0x4c9396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c939bull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4c939b:L4c939b:{c.instructions+=2;NFSU2_TR(0x4c939b);
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
B4c939d:{NFSU2_TR(0x4c939d);
if(r1(R+518)){{goto L4c93b8;}}
}
B4c939f:L4c939f:{c.instructions+=4;NFSU2_TR(0x4c939f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4c93a3:{NFSU2_TR(0x4c93a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c93a4:{NFSU2_TR(0x4c93a4);
w4(R+4,u32(0x89cf48ull));
}
B4c93a9:{NFSU2_TR(0x4c93a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c93aeull));
TAIL_STATIC(0x5f0220u,5f0);
}
B4c93ae:L4c93ae:{c.instructions+=2;NFSU2_TR(0x4c93ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c93b0:{NFSU2_TR(0x4c93b0);
if(r1(R+518)){{goto L4c93f8;}}
}
B4c93b2:L4c93b2:{c.instructions+=3;NFSU2_TR(0x4c93b2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
}
B4c93b5:{NFSU2_TR(0x4c93b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c93b6:{NFSU2_TR(0x4c93b6);
{goto L4c93ed;}
}
B4c93b8:L4c93b8:{c.instructions+=3;NFSU2_TR(0x4c93b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c93bb:{NFSU2_TR(0x4c93bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c93bf:{NFSU2_TR(0x4c93bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c93e6;}}
}
B4c93c1:L4c93c1:{c.instructions+=3;NFSU2_TR(0x4c93c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c93c7:{NFSU2_TR(0x4c93c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c93c9:{NFSU2_TR(0x4c93c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c93e6;}}
}
B4c93cb:L4c93cb:{c.instructions+=5;NFSU2_TR(0x4c93cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c93cf:{NFSU2_TR(0x4c93cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c93d2:{NFSU2_TR(0x4c93d2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4c93d8:{NFSU2_TR(0x4c93d8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x83a9e0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x83a9e0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x83a9e0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c93de:{NFSU2_TR(0x4c93de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c93e3ull));
TAIL_STATIC(0x502fd0u,502);
}
B4c93e3:L4c93e3:{c.instructions+=2;NFSU2_TR(0x4c93e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c93e4:{NFSU2_TR(0x4c93e4);
{goto L4c93ed;}
}
B4c93e6:L4c93e6:{c.instructions+=2;NFSU2_TR(0x4c93e6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x90cull))));
}
B4c93ec:{NFSU2_TR(0x4c93ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c93ed:L4c93ed:{c.instructions+=3;NFSU2_TR(0x4c93ed);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c93ef:{NFSU2_TR(0x4c93ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c93f0:{NFSU2_TR(0x4c93f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c93f5ull));
TAIL_STATIC(0x50c960u,50c);
}
B4c93f5:L4c93f5:{c.instructions+=1;NFSU2_TR(0x4c93f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c93f8:L4c93f8:{c.instructions+=2;NFSU2_TR(0x4c93f8);
__builtin_memmove((R+4),(R+12),4);
}
B4c93fa:{NFSU2_TR(0x4c93fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c93ffull));
TAIL_STATIC(0x5ee250u,5ee);
}
B4c93ff:L4c93ff:{c.instructions+=2;NFSU2_TR(0x4c93ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c9401:{NFSU2_TR(0x4c9401);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c941a;}}
}
B4c9403:L4c9403:{c.instructions+=7;NFSU2_TR(0x4c9403);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c9407:{NFSU2_TR(0x4c9407);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4c940d:{NFSU2_TR(0x4c940d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c940e:{NFSU2_TR(0x4c940e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c940f:{NFSU2_TR(0x4c940f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c9412:{NFSU2_TR(0x4c9412);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9413:{NFSU2_TR(0x4c9413);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9418ull));
TAIL_STATIC(0x5f82d0u,5f8);
}
B4c9418:L4c9418:{c.instructions+=1;NFSU2_TR(0x4c9418);
{goto L4c9421;}
}
B4c941a:L4c941a:{c.instructions+=1;NFSU2_TR(0x4c941a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c9421:L4c9421:{c.instructions+=8;NFSU2_TR(0x4c9421);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4c9426:{NFSU2_TR(0x4c9426);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4c942c:{NFSU2_TR(0x4c942c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c942f:{NFSU2_TR(0x4c942f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4c9430:{NFSU2_TR(0x4c9430);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c9433:{NFSU2_TR(0x4c9433);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x34ull))));
}
B4c9436:{NFSU2_TR(0x4c9436);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c9438:{NFSU2_TR(0x4c9438);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c9350u);}goto L4c9350;}}
}
B4c943e:L4c943e:{c.instructions+=4;NFSU2_TR(0x4c943e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c943f:{NFSU2_TR(0x4c943f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c9440:{NFSU2_TR(0x4c9440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c9441:{NFSU2_TR(0x4c9441);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c9442:L4c9442:{c.instructions+=2;NFSU2_TR(0x4c9442);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c9445:{NFSU2_TR(0x4c9445);
TAIL_STATIC(0x4ac040u,4ac);
}
B4c944a:L4c944a:{c.instructions+=2;NFSU2_TR(0x4c944a);
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
B4c944d:{NFSU2_TR(0x4c944d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9450:L4c9450:{c.instructions+=10;NFSU2_TR(0x4c9450);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4c9453:{NFSU2_TR(0x4c9453);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9454:{NFSU2_TR(0x4c9454);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9455:{NFSU2_TR(0x4c9455);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9456:{NFSU2_TR(0x4c9456);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c945a:{NFSU2_TR(0x4c945a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c945b:{NFSU2_TR(0x4c945b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c945d:{NFSU2_TR(0x4c945d);
w4(R+4,u32(0x6ull));
}
B4c9462:{NFSU2_TR(0x4c9462);
w4(R+28,u32(0x8362c8ull));
}
B4c9467:{NFSU2_TR(0x4c9467);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9468:L4c9468:{c.instructions+=1;NFSU2_TR(0x4c9468);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4c946a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c9468u);}goto L4c9468;}
}
B4c946a:L4c946a:{c.instructions+=1;NFSU2_TR(0x4c946a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c946full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c9300u);}goto L4c9300;}
}
B4c946f:L4c946f:{c.instructions+=9;NFSU2_TR(0x4c946f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9472:{NFSU2_TR(0x4c9472);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9475:{NFSU2_TR(0x4c9475);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4c947a:{NFSU2_TR(0x4c947a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4c947e:{NFSU2_TR(0x4c947e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9481:{NFSU2_TR(0x4c9481);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4c9488:{NFSU2_TR(0x4c9488);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9489:{NFSU2_TR(0x4c9489);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c948d:{NFSU2_TR(0x4c948d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9492ull));
TAIL_STATIC(0x575620u,575);
}
B4c9492:L4c9492:{c.instructions+=7;NFSU2_TR(0x4c9492);
__builtin_memmove((R+4),gp(0x7f6724),4);
}
B4c9498:{NFSU2_TR(0x4c9498);
__builtin_memmove((R+20),(R+0),4);
}
B4c949a:{NFSU2_TR(0x4c949a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c949d:{NFSU2_TR(0x4c949d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c949f:{NFSU2_TR(0x4c949f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c94a1:{NFSU2_TR(0x4c94a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c94a5:{NFSU2_TR(0x4c94a5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c94de;}}
}
B4c94a7:L4c94a7:{c.instructions+=3;NFSU2_TR(0x4c94a7);
w4(R+8,u32(0x8362c8ull));
}
B4c94ac:{NFSU2_TR(0x4c94ac);
__builtin_memmove((R+4),(R+20),4);
}
B4c94ae:{NFSU2_TR(0x4c94ae);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
}
B4c94b0:L4c94b0:{c.instructions+=3;NFSU2_TR(0x4c94b0);
__builtin_memmove((R+24),gp(0x890118),4);
}
B4c94b6:{NFSU2_TR(0x4c94b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4c94b9:{NFSU2_TR(0x4c94b9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c94de;}}
}
B4c94bb:L4c94bb:{c.instructions+=10;NFSU2_TR(0x4c94bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B4c94be:{NFSU2_TR(0x4c94be);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B4c94c1:{NFSU2_TR(0x4c94c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4c94c2:{NFSU2_TR(0x4c94c2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4c94c5:{NFSU2_TR(0x4c94c5);
{u32 ea_=u32(r4(R+24)+u32(8613960u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c94cb:{NFSU2_TR(0x4c94cb);
{u32 ea_=u32(u32(7932476u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c94d1:{NFSU2_TR(0x4c94d1);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c94d4:{NFSU2_TR(0x4c94d4);
__builtin_memmove((R+24),gp(0x7f6724),4);
}
B4c94da:{NFSU2_TR(0x4c94da);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c94dc:{NFSU2_TR(0x4c94dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c94b0u);}goto L4c94b0;}}
}
B4c94de:L4c94de:{c.instructions+=2;NFSU2_TR(0x4c94de);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4c94e4:{NFSU2_TR(0x4c94e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c94e9ull));
TAIL_STATIC(0x5eeea0u,5ee);
}
B4c94e9:L4c94e9:{c.instructions+=6;NFSU2_TR(0x4c94e9);
__builtin_memmove((R+0),gp(0x7f6724),4);
}
B4c94ee:{NFSU2_TR(0x4c94ee);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4c94f0:{NFSU2_TR(0x4c94f0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c94f2:{NFSU2_TR(0x4c94f2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4c94f6:{NFSU2_TR(0x4c94f6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c94f9:{NFSU2_TR(0x4c94f9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4c96cc;}}
}
B4c94ff:L4c94ff:{c.instructions+=10;NFSU2_TR(0x4c94ff);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4c9504:{NFSU2_TR(0x4c9504);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c9507:{NFSU2_TR(0x4c9507);
w4(R+0,u32(0x8362c8ull));
}
B4c950c:{NFSU2_TR(0x4c950c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B4c950e:{NFSU2_TR(0x4c950e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c9512:{NFSU2_TR(0x4c9512);
w4(R+0,u32(0x8362ccull));
}
B4c9517:{NFSU2_TR(0x4c9517);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B4c9519:{NFSU2_TR(0x4c9519);
w4(R+28,u32(0x3ull));
}
B4c951e:{NFSU2_TR(0x4c951e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c9521:{NFSU2_TR(0x4c9521);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c9525:L4c9525:{c.instructions+=2;NFSU2_TR(0x4c9525);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c9527:{NFSU2_TR(0x4c9527);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c9754;}}
}
B4c952d:L4c952d:{c.instructions+=5;NFSU2_TR(0x4c952d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8362c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4c9534:{NFSU2_TR(0x4c9534);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c9538:{NFSU2_TR(0x4c9538);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4c953b:{NFSU2_TR(0x4c953b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x837040ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c9541:{NFSU2_TR(0x4c9541);
if(r1(R+518)){{goto L4c9589;}}
}
B4c9543:L4c9543:{c.instructions+=5;NFSU2_TR(0x4c9543);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9546:{NFSU2_TR(0x4c9546);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c954c:{NFSU2_TR(0x4c954c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c954e:{NFSU2_TR(0x4c954e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c9551:{NFSU2_TR(0x4c9551);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c955d;}}
}
B4c9553:L4c9553:{c.instructions+=4;NFSU2_TR(0x4c9553);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c9556:{NFSU2_TR(0x4c9556);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9558:{NFSU2_TR(0x4c9558);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c955b:{NFSU2_TR(0x4c955b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4c9584;}}
}
B4c955d:L4c955d:{c.instructions+=5;NFSU2_TR(0x4c955d);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9560:{NFSU2_TR(0x4c9560);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c9566:{NFSU2_TR(0x4c9566);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9568:{NFSU2_TR(0x4c9568);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c956b:{NFSU2_TR(0x4c956b);
if(r1(R+514)){{goto L4c9589;}}
}
B4c956d:L4c956d:{c.instructions+=4;NFSU2_TR(0x4c956d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c9573:{NFSU2_TR(0x4c9573);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9575:{NFSU2_TR(0x4c9575);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c9578:{NFSU2_TR(0x4c9578);
if(r1(R+514)){{goto L4c9589;}}
}
B4c957a:L4c957a:{c.instructions+=4;NFSU2_TR(0x4c957a);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c957d:{NFSU2_TR(0x4c957d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c957f:{NFSU2_TR(0x4c957f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c9582:{NFSU2_TR(0x4c9582);
if(r1(R+514)){{goto L4c9589;}}
}
B4c9584:L4c9584:{c.instructions+=2;NFSU2_TR(0x4c9584);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c9586:{NFSU2_TR(0x4c9586);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9589:L4c9589:{c.instructions+=4;NFSU2_TR(0x4c9589);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c958c:{NFSU2_TR(0x4c958c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c958f:{NFSU2_TR(0x4c958f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c9591:{NFSU2_TR(0x4c9591);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c9754;}}
}
B4c9597:L4c9597:{c.instructions+=5;NFSU2_TR(0x4c9597);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8362ccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4c959e:{NFSU2_TR(0x4c959e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c95a2:{NFSU2_TR(0x4c95a2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4c95a5:{NFSU2_TR(0x4c95a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x837040ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c95ab:{NFSU2_TR(0x4c95ab);
if(r1(R+518)){{goto L4c95f3;}}
}
B4c95ad:L4c95ad:{c.instructions+=5;NFSU2_TR(0x4c95ad);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c95b0:{NFSU2_TR(0x4c95b0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c95b6:{NFSU2_TR(0x4c95b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c95b8:{NFSU2_TR(0x4c95b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c95bb:{NFSU2_TR(0x4c95bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c95c7;}}
}
B4c95bd:L4c95bd:{c.instructions+=4;NFSU2_TR(0x4c95bd);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c95c0:{NFSU2_TR(0x4c95c0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c95c2:{NFSU2_TR(0x4c95c2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c95c5:{NFSU2_TR(0x4c95c5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4c95ee;}}
}
B4c95c7:L4c95c7:{c.instructions+=5;NFSU2_TR(0x4c95c7);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c95ca:{NFSU2_TR(0x4c95ca);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c95d0:{NFSU2_TR(0x4c95d0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c95d2:{NFSU2_TR(0x4c95d2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c95d5:{NFSU2_TR(0x4c95d5);
if(r1(R+514)){{goto L4c95f3;}}
}
B4c95d7:L4c95d7:{c.instructions+=4;NFSU2_TR(0x4c95d7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c95dd:{NFSU2_TR(0x4c95dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c95df:{NFSU2_TR(0x4c95df);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c95e2:{NFSU2_TR(0x4c95e2);
if(r1(R+514)){{goto L4c95f3;}}
}
B4c95e4:L4c95e4:{c.instructions+=4;NFSU2_TR(0x4c95e4);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c95e7:{NFSU2_TR(0x4c95e7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c95e9:{NFSU2_TR(0x4c95e9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c95ec:{NFSU2_TR(0x4c95ec);
if(r1(R+514)){{goto L4c95f3;}}
}
B4c95ee:L4c95ee:{c.instructions+=2;NFSU2_TR(0x4c95ee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c95f0:{NFSU2_TR(0x4c95f0);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c95f3:L4c95f3:{c.instructions+=2;NFSU2_TR(0x4c95f3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c95f5:{NFSU2_TR(0x4c95f5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c976d;}}
}
B4c95fb:L4c95fb:{c.instructions+=5;NFSU2_TR(0x4c95fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c95ff:{NFSU2_TR(0x4c95ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4c9602:{NFSU2_TR(0x4c9602);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4c9605:{NFSU2_TR(0x4c9605);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x837040ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c960b:{NFSU2_TR(0x4c960b);
if(r1(R+518)){{goto L4c964e;}}
}
B4c960d:L4c960d:{c.instructions+=5;NFSU2_TR(0x4c960d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c960f:{NFSU2_TR(0x4c960f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c9615:{NFSU2_TR(0x4c9615);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9617:{NFSU2_TR(0x4c9617);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c961a:{NFSU2_TR(0x4c961a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9625;}}
}
B4c961c:L4c961c:{c.instructions+=4;NFSU2_TR(0x4c961c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c961e:{NFSU2_TR(0x4c961e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9620:{NFSU2_TR(0x4c9620);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c9623:{NFSU2_TR(0x4c9623);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4c964a;}}
}
B4c9625:L4c9625:{c.instructions+=5;NFSU2_TR(0x4c9625);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9627:{NFSU2_TR(0x4c9627);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c962d:{NFSU2_TR(0x4c962d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c962f:{NFSU2_TR(0x4c962f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c9632:{NFSU2_TR(0x4c9632);
if(r1(R+514)){{goto L4c964e;}}
}
B4c9634:L4c9634:{c.instructions+=4;NFSU2_TR(0x4c9634);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c963a:{NFSU2_TR(0x4c963a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c963c:{NFSU2_TR(0x4c963c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c963f:{NFSU2_TR(0x4c963f);
if(r1(R+514)){{goto L4c964e;}}
}
B4c9641:L4c9641:{c.instructions+=4;NFSU2_TR(0x4c9641);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c9643:{NFSU2_TR(0x4c9643);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9645:{NFSU2_TR(0x4c9645);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c9648:{NFSU2_TR(0x4c9648);
if(r1(R+514)){{goto L4c964e;}}
}
B4c964a:L4c964a:{c.instructions+=2;NFSU2_TR(0x4c964a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c964c:{NFSU2_TR(0x4c964c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c964e:L4c964e:{c.instructions+=2;NFSU2_TR(0x4c964e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c9650:{NFSU2_TR(0x4c9650);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c976d;}}
}
B4c9656:L4c9656:{c.instructions+=5;NFSU2_TR(0x4c9656);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c965a:{NFSU2_TR(0x4c965a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4c965d:{NFSU2_TR(0x4c965d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4c9660:{NFSU2_TR(0x4c9660);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x837040ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c9666:{NFSU2_TR(0x4c9666);
if(r1(R+518)){{goto L4c96ae;}}
}
B4c9668:L4c9668:{c.instructions+=5;NFSU2_TR(0x4c9668);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c966b:{NFSU2_TR(0x4c966b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c9671:{NFSU2_TR(0x4c9671);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9673:{NFSU2_TR(0x4c9673);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c9676:{NFSU2_TR(0x4c9676);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9682;}}
}
B4c9678:L4c9678:{c.instructions+=4;NFSU2_TR(0x4c9678);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c967b:{NFSU2_TR(0x4c967b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c967d:{NFSU2_TR(0x4c967d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c9680:{NFSU2_TR(0x4c9680);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4c96a9;}}
}
B4c9682:L4c9682:{c.instructions+=5;NFSU2_TR(0x4c9682);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9685:{NFSU2_TR(0x4c9685);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c968b:{NFSU2_TR(0x4c968b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c968d:{NFSU2_TR(0x4c968d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c9690:{NFSU2_TR(0x4c9690);
if(r1(R+514)){{goto L4c96ae;}}
}
B4c9692:L4c9692:{c.instructions+=4;NFSU2_TR(0x4c9692);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c9698:{NFSU2_TR(0x4c9698);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c969a:{NFSU2_TR(0x4c969a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c969d:{NFSU2_TR(0x4c969d);
if(r1(R+514)){{goto L4c96ae;}}
}
B4c969f:L4c969f:{c.instructions+=4;NFSU2_TR(0x4c969f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c96a2:{NFSU2_TR(0x4c96a2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c96a4:{NFSU2_TR(0x4c96a4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c96a7:{NFSU2_TR(0x4c96a7);
if(r1(R+514)){{goto L4c96ae;}}
}
B4c96a9:L4c96a9:{c.instructions+=2;NFSU2_TR(0x4c96a9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c96ab:{NFSU2_TR(0x4c96ab);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c96ae:L4c96ae:{c.instructions+=7;NFSU2_TR(0x4c96ae);
__builtin_memmove((R+0),gp(0x7f6724),4);
}
B4c96b3:{NFSU2_TR(0x4c96b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c96b7:{NFSU2_TR(0x4c96b7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4c96ba:{NFSU2_TR(0x4c96ba);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4c96bd:{NFSU2_TR(0x4c96bd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B4c96c0:{NFSU2_TR(0x4c96c0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c96c2:{NFSU2_TR(0x4c96c2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c9525u);}goto L4c9525;}}
}
B4c96c8:L4c96c8:{c.instructions+=1;NFSU2_TR(0x4c96c8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4c96cc:L4c96cc:{c.instructions+=2;NFSU2_TR(0x4c96cc);
u8 U[8];
__builtin_memmove((U+0),gp(0x7f6724),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c96d2:{NFSU2_TR(0x4c96d2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c9773;}}
}
B4c96d8:L4c96d8:{c.instructions+=6;NFSU2_TR(0x4c96d8);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4c96de:{NFSU2_TR(0x4c96de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c96e1:{NFSU2_TR(0x4c96e1);
w4(R+24,u32(0x8362c8ull));
}
B4c96e6:{NFSU2_TR(0x4c96e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4c96ea:{NFSU2_TR(0x4c96ea);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+20))));
}
B4c96ec:{NFSU2_TR(0x4c96ec);
__builtin_memmove((R+16),(R+16),4);
}
B4c96f0:L4c96f0:{c.instructions+=2;NFSU2_TR(0x4c96f0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c96f2:{NFSU2_TR(0x4c96f2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c9754;}}
}
B4c96f4:L4c96f4:{c.instructions+=5;NFSU2_TR(0x4c96f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4c96f7:{NFSU2_TR(0x4c96f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c96fb:{NFSU2_TR(0x4c96fb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4c96fe:{NFSU2_TR(0x4c96fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x837040ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c9704:{NFSU2_TR(0x4c9704);
if(r1(R+518)){{goto L4c9747;}}
}
B4c9706:L4c9706:{c.instructions+=5;NFSU2_TR(0x4c9706);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9708:{NFSU2_TR(0x4c9708);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c970e:{NFSU2_TR(0x4c970e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9710:{NFSU2_TR(0x4c9710);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c9713:{NFSU2_TR(0x4c9713);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c971e;}}
}
B4c9715:L4c9715:{c.instructions+=4;NFSU2_TR(0x4c9715);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c9717:{NFSU2_TR(0x4c9717);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9719:{NFSU2_TR(0x4c9719);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c971c:{NFSU2_TR(0x4c971c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4c9743;}}
}
B4c971e:L4c971e:{c.instructions+=5;NFSU2_TR(0x4c971e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9720:{NFSU2_TR(0x4c9720);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c9726:{NFSU2_TR(0x4c9726);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9728:{NFSU2_TR(0x4c9728);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c972b:{NFSU2_TR(0x4c972b);
if(r1(R+514)){{goto L4c9747;}}
}
B4c972d:L4c972d:{c.instructions+=4;NFSU2_TR(0x4c972d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c9733:{NFSU2_TR(0x4c9733);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9735:{NFSU2_TR(0x4c9735);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c9738:{NFSU2_TR(0x4c9738);
if(r1(R+514)){{goto L4c9747;}}
}
B4c973a:L4c973a:{c.instructions+=4;NFSU2_TR(0x4c973a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c973c:{NFSU2_TR(0x4c973c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c973e:{NFSU2_TR(0x4c973e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c9741:{NFSU2_TR(0x4c9741);
if(r1(R+514)){{goto L4c9747;}}
}
B4c9743:L4c9743:{c.instructions+=2;NFSU2_TR(0x4c9743);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c9745:{NFSU2_TR(0x4c9745);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9747:L4c9747:{c.instructions+=5;NFSU2_TR(0x4c9747);
__builtin_memmove((R+0),gp(0x7f6724),4);
}
B4c974c:{NFSU2_TR(0x4c974c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4c974d:{NFSU2_TR(0x4c974d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4c9750:{NFSU2_TR(0x4c9750);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c9752:{NFSU2_TR(0x4c9752);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c96f0u);}goto L4c96f0;}}
}
B4c9754:L4c9754:{c.instructions+=1;NFSU2_TR(0x4c9754);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c9758:L4c9758:{c.instructions+=2;NFSU2_TR(0x4c9758);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9759:{NFSU2_TR(0x4c9759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c975eull));
TAIL_STATIC(0x575630u,575);
}
B4c975e:L4c975e:{c.instructions+=8;NFSU2_TR(0x4c975e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9762:{NFSU2_TR(0x4c9762);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c9765:{NFSU2_TR(0x4c9765);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c9766:{NFSU2_TR(0x4c9766);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c9767:{NFSU2_TR(0x4c9767);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c9768:{NFSU2_TR(0x4c9768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c9769:{NFSU2_TR(0x4c9769);
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
B4c976c:{NFSU2_TR(0x4c976c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c976d:L4c976d:{c.instructions+=2;NFSU2_TR(0x4c976d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c9771:{NFSU2_TR(0x4c9771);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c9754u);}goto L4c9754;}
}
B4c9773:L4c9773:{c.instructions+=2;NFSU2_TR(0x4c9773);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c9775:{NFSU2_TR(0x4c9775);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c9758u);}goto L4c9758;}
}
B4c9780:L4c9780:{c.instructions+=5;NFSU2_TR(0x4c9780);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9781:{NFSU2_TR(0x4c9781);
__builtin_memmove((R+24),(R+4),4);
}
B4c9783:{NFSU2_TR(0x4c9783);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4c9787:{NFSU2_TR(0x4c9787);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x4ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B4c978b:{NFSU2_TR(0x4c978b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c97ae;}}
}
B4c978d:L4c978d:{c.instructions+=5;NFSU2_TR(0x4c978d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9790:{NFSU2_TR(0x4c9790);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9792:{NFSU2_TR(0x4c9792);
u8 U[4];
w4(U+0,u32(0x78ffe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9797:{NFSU2_TR(0x4c9797);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9798:{NFSU2_TR(0x4c9798);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c979dull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c979d:L4c979d:{c.instructions+=3;NFSU2_TR(0x4c979d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c97a0:{NFSU2_TR(0x4c97a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c97a1:{NFSU2_TR(0x4c97a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c97a6ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c97a6:L4c97a6:{c.instructions+=2;NFSU2_TR(0x4c97a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c97a9:{NFSU2_TR(0x4c97a9);
{goto L4c985c;}
}
B4c97ae:L4c97ae:{c.instructions+=2;NFSU2_TR(0x4c97ae);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B4c97b2:{NFSU2_TR(0x4c97b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c985c;}}
}
B4c97b8:L4c97b8:{c.instructions+=3;NFSU2_TR(0x4c97b8);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4c97bd:{NFSU2_TR(0x4c97bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c97c0:{NFSU2_TR(0x4c97c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c97f1;}}
}
B4c97c2:L4c97c2:{c.instructions+=2;NFSU2_TR(0x4c97c2);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c97c9:{NFSU2_TR(0x4c97c9);
if(r1(R+518)){{goto L4c985c;}}
}
B4c97cf:L4c97cf:{c.instructions+=1;NFSU2_TR(0x4c97cf);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4c97d1:L4c97d1:{c.instructions+=5;NFSU2_TR(0x4c97d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c97d5:{NFSU2_TR(0x4c97d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c97d8:{NFSU2_TR(0x4c97d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c97db:{NFSU2_TR(0x4c97db);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4c97df:{NFSU2_TR(0x4c97df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9828;}}
}
B4c97e1:L4c97e1:{c.instructions+=5;NFSU2_TR(0x4c97e1);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c97e3:{NFSU2_TR(0x4c97e3);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c97e5:{NFSU2_TR(0x4c97e5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x74b4bf22ull))));
}
B4c97ea:{NFSU2_TR(0x4c97ea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x783202b0ull))));
}
B4c97ef:{NFSU2_TR(0x4c97ef);
{goto L4c9836;}
}
B4c97f1:L4c97f1:{c.instructions+=3;NFSU2_TR(0x4c97f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c97f6:{NFSU2_TR(0x4c97f6);
w4(R+4,u32(0x8ull));
}
B4c97fb:{NFSU2_TR(0x4c97fb);
if(r1(R+518)){{goto L4c9801;}}
}
B4c97fd:L4c97fd:{c.instructions+=2;NFSU2_TR(0x4c97fd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c97ff:{NFSU2_TR(0x4c97ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9809;}}
}
B4c9801:L4c9801:{c.instructions+=2;NFSU2_TR(0x4c9801);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c9807:{NFSU2_TR(0x4c9807);
if(r1(R+518)){{goto L4c9816;}}
}
B4c9809:L4c9809:{c.instructions+=2;NFSU2_TR(0x4c9809);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c980c:{NFSU2_TR(0x4c980c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c97cfu);}goto L4c97cf;}}
}
B4c980e:L4c980e:{c.instructions+=2;NFSU2_TR(0x4c980e);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c9814:{NFSU2_TR(0x4c9814);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c97cfu);}goto L4c97cf;}}
}
B4c9816:L4c9816:{c.instructions+=2;NFSU2_TR(0x4c9816);
w4(R+4,u32(0x83aab4ull));
}
B4c981b:{NFSU2_TR(0x4c981b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9820ull));
TAIL_STATIC(0x502840u,502);
}
B4c9820:L4c9820:{c.instructions+=2;NFSU2_TR(0x4c9820);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c9822:{NFSU2_TR(0x4c9822);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c97cfu);}goto L4c97cf;}}
}
B4c9824:L4c9824:{c.instructions+=2;NFSU2_TR(0x4c9824);
w1(R+0,u8(0x1ull));
}
B4c9826:{NFSU2_TR(0x4c9826);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c97d1u);}goto L4c97d1;}
}
B4c9828:L4c9828:{c.instructions+=4;NFSU2_TR(0x4c9828);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c982a:{NFSU2_TR(0x4c982a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c982c:{NFSU2_TR(0x4c982c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xb4ca362ull))));
}
B4c9831:{NFSU2_TR(0x4c9831);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18b97380ull))));
}
B4c9836:L4c9836:{c.instructions+=4;NFSU2_TR(0x4c9836);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9837:{NFSU2_TR(0x4c9837);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c983a:{NFSU2_TR(0x4c983a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c983b:{NFSU2_TR(0x4c983b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9840ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c9840:L4c9840:{c.instructions+=3;NFSU2_TR(0x4c9840);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9843:{NFSU2_TR(0x4c9843);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9844:{NFSU2_TR(0x4c9844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9849ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c9849:L4c9849:{c.instructions+=5;NFSU2_TR(0x4c9849);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c984c:{NFSU2_TR(0x4c984c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c984e:{NFSU2_TR(0x4c984e);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9853:{NFSU2_TR(0x4c9853);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9854:{NFSU2_TR(0x4c9854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9859ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c9859:L4c9859:{c.instructions+=1;NFSU2_TR(0x4c9859);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4c985c:L4c985c:{c.instructions+=4;NFSU2_TR(0x4c985c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c985e:{NFSU2_TR(0x4c985e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4c9862:{NFSU2_TR(0x4c9862);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0x4ull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0x4ull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0x4ull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B4c9866:{NFSU2_TR(0x4c9866);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4c986d;}}
}
B4c9868:L4c9868:{c.instructions+=2;NFSU2_TR(0x4c9868);
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
B4c9869:{NFSU2_TR(0x4c9869);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4c986d:L4c986d:{c.instructions+=2;NFSU2_TR(0x4c986d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c986e:{NFSU2_TR(0x4c986e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9880:L4c9880:{c.instructions+=2;NFSU2_TR(0x4c9880);
u8 U[4];
w4(U+0,u32(0x795b40ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4c9886:{NFSU2_TR(0x4c9886);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9890:L4c9890:{c.instructions+=3;NFSU2_TR(0x4c9890);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9891:{NFSU2_TR(0x4c9891);
__builtin_memmove((R+24),(R+4),4);
}
B4c9893:{NFSU2_TR(0x4c9893);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9898ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c9880u);}goto L4c9880;}
}
B4c9898:L4c9898:{c.instructions+=2;NFSU2_TR(0x4c9898);
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
B4c989d:{NFSU2_TR(0x4c989d);
if(r1(R+518)){{goto L4c98a8;}}
}
B4c989f:L4c989f:{c.instructions+=2;NFSU2_TR(0x4c989f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c98a0:{NFSU2_TR(0x4c98a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c98a5ull));
TAIL_STATIC(0x575630u,575);
}
B4c98a5:L4c98a5:{c.instructions+=1;NFSU2_TR(0x4c98a5);
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
B4c98a8:L4c98a8:{c.instructions+=3;NFSU2_TR(0x4c98a8);
__builtin_memmove((R+0),(R+24),4);
}
B4c98aa:{NFSU2_TR(0x4c98aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c98ab:{NFSU2_TR(0x4c98ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c98b0:L4c98b0:{c.instructions+=6;NFSU2_TR(0x4c98b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c98b1:{NFSU2_TR(0x4c98b1);
__builtin_memmove((R+24),(R+4),4);
}
B4c98b3:{NFSU2_TR(0x4c98b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c98b6:{NFSU2_TR(0x4c98b6);
u8 U[4];
w4(U+0,u32(0x59bfb401ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c98bb:{NFSU2_TR(0x4c98bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c98bc:{NFSU2_TR(0x4c98bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c98c1ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c98c1:L4c98c1:{c.instructions+=7;NFSU2_TR(0x4c98c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c98c5:{NFSU2_TR(0x4c98c5);
{u32 ea_=u32(r4(R+4)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c98cb:{NFSU2_TR(0x4c98cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c98ce:{NFSU2_TR(0x4c98ce);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4c98d1:{NFSU2_TR(0x4c98d1);
u8 U[4];
w4(U+0,u32(0x795b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c98d6:{NFSU2_TR(0x4c98d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c98d7:{NFSU2_TR(0x4c98d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c98dcull));
TAIL_STATIC(0x537be0u,537);
}
B4c98dc:L4c98dc:{c.instructions+=3;NFSU2_TR(0x4c98dc);
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
B4c98df:{NFSU2_TR(0x4c98df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c98e0:{NFSU2_TR(0x4c98e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c98f0:L4c98f0:{c.instructions+=6;NFSU2_TR(0x4c98f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c98f1:{NFSU2_TR(0x4c98f1);
__builtin_memmove((R+24),(R+4),4);
}
B4c98f3:{NFSU2_TR(0x4c98f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c98f6:{NFSU2_TR(0x4c98f6);
u8 U[4];
w4(U+0,u32(0x2dab24e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c98fb:{NFSU2_TR(0x4c98fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c98fc:{NFSU2_TR(0x4c98fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9901ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c9901:L4c9901:{c.instructions+=7;NFSU2_TR(0x4c9901);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9905:{NFSU2_TR(0x4c9905);
{u32 ea_=u32(r4(R+4)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c990b:{NFSU2_TR(0x4c990b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c990e:{NFSU2_TR(0x4c990e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4c9911:{NFSU2_TR(0x4c9911);
u8 U[4];
w4(U+0,u32(0x795b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9916:{NFSU2_TR(0x4c9916);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9917:{NFSU2_TR(0x4c9917);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c991cull));
TAIL_STATIC(0x537be0u,537);
}
B4c991c:L4c991c:{c.instructions+=3;NFSU2_TR(0x4c991c);
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
B4c991f:{NFSU2_TR(0x4c991f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c9920:{NFSU2_TR(0x4c9920);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9930:L4c9930:{c.instructions+=8;NFSU2_TR(0x4c9930);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9931:{NFSU2_TR(0x4c9931);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9932:{NFSU2_TR(0x4c9932);
__builtin_memmove((R+24),(R+4),4);
}
B4c9934:{NFSU2_TR(0x4c9934);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9938:{NFSU2_TR(0x4c9938);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c993a:{NFSU2_TR(0x4c993a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c993d:{NFSU2_TR(0x4c993d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c993e:{NFSU2_TR(0x4c993e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9943ull));
TAIL_STATIC(0x5ee2b0u,5ee);
}
B4c9943:L4c9943:{c.instructions+=2;NFSU2_TR(0x4c9943);
__builtin_memmove((R+4),(R+0),4);
}
B4c9945:{NFSU2_TR(0x4c9945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c994aull));
TAIL_STATIC(0x577240u,577);
}
B4c994a:L4c994a:{c.instructions+=4;NFSU2_TR(0x4c994a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c994d:{NFSU2_TR(0x4c994d);
u8 U[4];
w4(U+0,u32(0x7a04c109ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9952:{NFSU2_TR(0x4c9952);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9953:{NFSU2_TR(0x4c9953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9958ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c9958:L4c9958:{c.instructions+=5;NFSU2_TR(0x4c9958);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c995b:{NFSU2_TR(0x4c995b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c995c:{NFSU2_TR(0x4c995c);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9961:{NFSU2_TR(0x4c9961);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9962:{NFSU2_TR(0x4c9962);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9967ull));
TAIL_STATIC(0x537be0u,537);
}
B4c9967:L4c9967:{c.instructions+=4;NFSU2_TR(0x4c9967);
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
B4c996a:{NFSU2_TR(0x4c996a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c996b:{NFSU2_TR(0x4c996b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c996c:{NFSU2_TR(0x4c996c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9970:L4c9970:{c.instructions+=23;NFSU2_TR(0x4c9970);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9972:{NFSU2_TR(0x4c9972);
u8 U[4];
w4(U+0,u32(0x774108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9977:{NFSU2_TR(0x4c9977);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c997d:{NFSU2_TR(0x4c997d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c997e:{NFSU2_TR(0x4c997e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c9985:{NFSU2_TR(0x4c9985);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9986:{NFSU2_TR(0x4c9986);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c998a:{NFSU2_TR(0x4c998a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c998b:{NFSU2_TR(0x4c998b);
__builtin_memmove((R+24),(R+4),4);
}
B4c998d:{NFSU2_TR(0x4c998d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9991:{NFSU2_TR(0x4c9991);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9992:{NFSU2_TR(0x4c9992);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c9996:{NFSU2_TR(0x4c9996);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c9999:{NFSU2_TR(0x4c9999);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c999c:{NFSU2_TR(0x4c999c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c999e:{NFSU2_TR(0x4c999e);
u8 U[4];
w4(U+0,u32(0x795b68ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c99a4:{NFSU2_TR(0x4c99a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c99a7:{NFSU2_TR(0x4c99a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c99aa:{NFSU2_TR(0x4c99aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c99ad:{NFSU2_TR(0x4c99ad);
u8 U[4];
w4(U+0,u32(0x32a2cd8eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c99b2:{NFSU2_TR(0x4c99b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c99b3:{NFSU2_TR(0x4c99b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c99b7:{NFSU2_TR(0x4c99b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c99bcull));
TAIL_STATIC(0x50c900u,50c);
}
B4c99bc:L4c99bc:{c.instructions+=10;NFSU2_TR(0x4c99bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c99c0:{NFSU2_TR(0x4c99c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c99c3:{NFSU2_TR(0x4c99c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c99c6:{NFSU2_TR(0x4c99c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c99c9:{NFSU2_TR(0x4c99c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c99ca:{NFSU2_TR(0x4c99ca);
__builtin_memmove((R+0),(R+24),4);
}
B4c99cc:{NFSU2_TR(0x4c99cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c99cd:{NFSU2_TR(0x4c99cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c99d4:{NFSU2_TR(0x4c99d4);
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
B4c99d7:{NFSU2_TR(0x4c99d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c99e0:L4c99e0:{c.instructions+=7;NFSU2_TR(0x4c99e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c99e4:{NFSU2_TR(0x4c99e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c99e5:{NFSU2_TR(0x4c99e5);
__builtin_memmove((R+24),(R+4),4);
}
B4c99e7:{NFSU2_TR(0x4c99e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c99ea:{NFSU2_TR(0x4c99ea);
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
B4c99ec:{NFSU2_TR(0x4c99ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c99ed:{NFSU2_TR(0x4c99ed);
if(r1(R+518)){{goto L4c99f8;}}
}
B4c99ef:L4c99ef:{c.instructions+=2;NFSU2_TR(0x4c99ef);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B4c99f5:{NFSU2_TR(0x4c99f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c99f8:L4c99f8:{c.instructions+=4;NFSU2_TR(0x4c99f8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c99fc:{NFSU2_TR(0x4c99fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c99ff:{NFSU2_TR(0x4c99ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9a02:{NFSU2_TR(0x4c9a02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9a07ull));
TAIL_STATIC(0x5ee270u,5ee);
}
B4c9a07:L4c9a07:{c.instructions+=3;NFSU2_TR(0x4c9a07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c9a09:{NFSU2_TR(0x4c9a09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c9a0b:{NFSU2_TR(0x4c9a0b);
if(r1(R+518)){{goto L4c9a72;}}
}
B4c9a0d:L4c9a0d:{c.instructions+=2;NFSU2_TR(0x4c9a0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c9a12:{NFSU2_TR(0x4c9a12);
if(r1(R+518)){{goto L4c9a72;}}
}
B4c9a14:L4c9a14:{c.instructions+=9;NFSU2_TR(0x4c9a14);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4c9a19:{NFSU2_TR(0x4c9a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4c9a1c:{NFSU2_TR(0x4c9a1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c9a20:{NFSU2_TR(0x4c9a20);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c9a24:{NFSU2_TR(0x4c9a24);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c9a2a:{NFSU2_TR(0x4c9a2a);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c9a30:{NFSU2_TR(0x4c9a30);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9a32:{NFSU2_TR(0x4c9a32);
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
B4c9a35:{NFSU2_TR(0x4c9a35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9a4d;}}
}
B4c9a37:L4c9a37:{c.instructions+=3;NFSU2_TR(0x4c9a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9a3a:{NFSU2_TR(0x4c9a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9a3d:{NFSU2_TR(0x4c9a3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9a42ull));
TAIL_STATIC(0x5ee270u,5ee);
}
B4c9a42:L4c9a42:{c.instructions+=3;NFSU2_TR(0x4c9a42);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B4c9a48:{NFSU2_TR(0x4c9a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+0))));
}
B4c9a4a:{NFSU2_TR(0x4c9a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c9a4d:L4c9a4d:{c.instructions+=5;NFSU2_TR(0x4c9a4d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9a4f:{NFSU2_TR(0x4c9a4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c9a52:{NFSU2_TR(0x4c9a52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9a53:{NFSU2_TR(0x4c9a53);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c9a56:{NFSU2_TR(0x4c9a56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9a5bull));
TAIL_STATIC(0x577240u,577);
}
B4c9a5b:L4c9a5b:{c.instructions+=5;NFSU2_TR(0x4c9a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9a5e:{NFSU2_TR(0x4c9a5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9a5f:{NFSU2_TR(0x4c9a5f);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9a64:{NFSU2_TR(0x4c9a64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9a65:{NFSU2_TR(0x4c9a65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9a6aull));
TAIL_STATIC(0x537be0u,537);
}
B4c9a6a:L4c9a6a:{c.instructions+=4;NFSU2_TR(0x4c9a6a);
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
B4c9a6d:{NFSU2_TR(0x4c9a6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c9a6e:{NFSU2_TR(0x4c9a6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c9a6f:{NFSU2_TR(0x4c9a6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9a72:L4c9a72:{c.instructions+=4;NFSU2_TR(0x4c9a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9a75:{NFSU2_TR(0x4c9a75);
u8 U[4];
w4(U+0,u32(0x61c9b7a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9a7a:{NFSU2_TR(0x4c9a7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9a7b:{NFSU2_TR(0x4c9a7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9a80ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c9a80:L4c9a80:{c.instructions+=4;NFSU2_TR(0x4c9a80);
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
B4c9a83:{NFSU2_TR(0x4c9a83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c9a84:{NFSU2_TR(0x4c9a84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c9a85:{NFSU2_TR(0x4c9a85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9a90:L4c9a90:{c.instructions+=9;NFSU2_TR(0x4c9a90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9a91:{NFSU2_TR(0x4c9a91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9a92:{NFSU2_TR(0x4c9a92);
__builtin_memmove((R+24),(R+4),4);
}
B4c9a94:{NFSU2_TR(0x4c9a94);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9a98:{NFSU2_TR(0x4c9a98);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9a9a:{NFSU2_TR(0x4c9a9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c9a9d:{NFSU2_TR(0x4c9a9d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9a9e:{NFSU2_TR(0x4c9a9e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1a8ull))));
}
B4c9aa4:{NFSU2_TR(0x4c9aa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9aa9ull));
TAIL_STATIC(0x577240u,577);
}
B4c9aa9:L4c9aa9:{c.instructions+=9;NFSU2_TR(0x4c9aa9);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4c9aae:{NFSU2_TR(0x4c9aae);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B4c9ab0:{NFSU2_TR(0x4c9ab0);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c9ab2:{NFSU2_TR(0x4c9ab2);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c9ab4:{NFSU2_TR(0x4c9ab4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffd8ull))));
}
B4c9ab7:{NFSU2_TR(0x4c9ab7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
}
B4c9aba:{NFSU2_TR(0x4c9aba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9abb:{NFSU2_TR(0x4c9abb);
u8 U[4];
w4(U+0,u32(0xc2be294dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9ac0:{NFSU2_TR(0x4c9ac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9ac5ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c9ac5:L4c9ac5:{c.instructions+=3;NFSU2_TR(0x4c9ac5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c9ac8:{NFSU2_TR(0x4c9ac8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9ac9:{NFSU2_TR(0x4c9ac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9aceull));
TAIL_STATIC(0x50b990u,50b);
}
B4c9ace:L4c9ace:{c.instructions+=4;NFSU2_TR(0x4c9ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9ad1:{NFSU2_TR(0x4c9ad1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9ad2:{NFSU2_TR(0x4c9ad2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9ad3:{NFSU2_TR(0x4c9ad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9ad8ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c9ad8:L4c9ad8:{c.instructions+=5;NFSU2_TR(0x4c9ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c9adb:{NFSU2_TR(0x4c9adb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9adc:{NFSU2_TR(0x4c9adc);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9ae1:{NFSU2_TR(0x4c9ae1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9ae2:{NFSU2_TR(0x4c9ae2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9ae7ull));
TAIL_STATIC(0x537be0u,537);
}
B4c9ae7:L4c9ae7:{c.instructions+=4;NFSU2_TR(0x4c9ae7);
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
B4c9aea:{NFSU2_TR(0x4c9aea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c9aeb:{NFSU2_TR(0x4c9aeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c9aec:{NFSU2_TR(0x4c9aec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9af0:L4c9af0:{c.instructions+=9;NFSU2_TR(0x4c9af0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9af1:{NFSU2_TR(0x4c9af1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9af2:{NFSU2_TR(0x4c9af2);
__builtin_memmove((R+24),(R+4),4);
}
B4c9af4:{NFSU2_TR(0x4c9af4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9af8:{NFSU2_TR(0x4c9af8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9afa:{NFSU2_TR(0x4c9afa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c9afd:{NFSU2_TR(0x4c9afd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9afe:{NFSU2_TR(0x4c9afe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1b4ull))));
}
B4c9b04:{NFSU2_TR(0x4c9b04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9b09ull));
TAIL_STATIC(0x577240u,577);
}
B4c9b09:L4c9b09:{c.instructions+=10;NFSU2_TR(0x4c9b09);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4c9b0e:{NFSU2_TR(0x4c9b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9b11:{NFSU2_TR(0x4c9b11);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B4c9b13:{NFSU2_TR(0x4c9b13);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c9b15:{NFSU2_TR(0x4c9b15);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c9b17:{NFSU2_TR(0x4c9b17);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xe3ae057aull))));
}
B4c9b1c:{NFSU2_TR(0x4c9b1c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xe591119dull))));
}
B4c9b21:{NFSU2_TR(0x4c9b21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9b22:{NFSU2_TR(0x4c9b22);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9b23:{NFSU2_TR(0x4c9b23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9b28ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c9b28:L4c9b28:{c.instructions+=5;NFSU2_TR(0x4c9b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c9b2b:{NFSU2_TR(0x4c9b2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9b2c:{NFSU2_TR(0x4c9b2c);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9b31:{NFSU2_TR(0x4c9b31);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9b32:{NFSU2_TR(0x4c9b32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9b37ull));
TAIL_STATIC(0x537be0u,537);
}
B4c9b37:L4c9b37:{c.instructions+=4;NFSU2_TR(0x4c9b37);
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
B4c9b3a:{NFSU2_TR(0x4c9b3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c9b3b:{NFSU2_TR(0x4c9b3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c9b3c:{NFSU2_TR(0x4c9b3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9b40:L4c9b40:{c.instructions+=6;NFSU2_TR(0x4c9b40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9b41:{NFSU2_TR(0x4c9b41);
__builtin_memmove((R+24),(R+4),4);
}
B4c9b43:{NFSU2_TR(0x4c9b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9b46:{NFSU2_TR(0x4c9b46);
u8 U[4];
w4(U+0,u32(0x823b1fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9b4b:{NFSU2_TR(0x4c9b4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9b4c:{NFSU2_TR(0x4c9b4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9b51ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c9b51:L4c9b51:{c.instructions+=7;NFSU2_TR(0x4c9b51);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9b55:{NFSU2_TR(0x4c9b55);
{u32 ea_=u32(r4(R+4)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9b5b:{NFSU2_TR(0x4c9b5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c9b5e:{NFSU2_TR(0x4c9b5e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c9b64:{NFSU2_TR(0x4c9b64);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9b66:{NFSU2_TR(0x4c9b66);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c9b69:{NFSU2_TR(0x4c9b69);
if(r1(R+518)){{goto L4c9b73;}}
}
B4c9b6b:L4c9b6b:{c.instructions+=2;NFSU2_TR(0x4c9b6b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c9b6d:{NFSU2_TR(0x4c9b6d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9b73:L4c9b73:{c.instructions+=4;NFSU2_TR(0x4c9b73);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4c9b78:{NFSU2_TR(0x4c9b78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4c9b7b:{NFSU2_TR(0x4c9b7b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c9b7d:{NFSU2_TR(0x4c9b7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9ba5;}}
}
B4c9b7f:L4c9b7f:{c.instructions+=5;NFSU2_TR(0x4c9b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c9b82:{NFSU2_TR(0x4c9b82);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4c9b85:{NFSU2_TR(0x4c9b85);
u8 U[4];
w4(U+0,u32(0x795b88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9b8a:{NFSU2_TR(0x4c9b8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9b8b:{NFSU2_TR(0x4c9b8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9b90ull));
TAIL_STATIC(0x537be0u,537);
}
B4c9b90:L4c9b90:{c.instructions+=4;NFSU2_TR(0x4c9b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9b93:{NFSU2_TR(0x4c9b93);
u8 U[4];
w4(U+0,u32(0x790af8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9b98:{NFSU2_TR(0x4c9b98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9b99:{NFSU2_TR(0x4c9b99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9b9eull));
TAIL_STATIC(0x537be0u,537);
}
B4c9b9e:L4c9b9e:{c.instructions+=3;NFSU2_TR(0x4c9b9e);
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
B4c9ba1:{NFSU2_TR(0x4c9ba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c9ba2:{NFSU2_TR(0x4c9ba2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9ba5:L4c9ba5:{c.instructions+=6;NFSU2_TR(0x4c9ba5);
{u32 ea_=u32(u32(7932660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c9bab:{NFSU2_TR(0x4c9bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9bae:{NFSU2_TR(0x4c9bae);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4c9bb1:{NFSU2_TR(0x4c9bb1);
u8 U[4];
w4(U+0,u32(0x795b88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9bb6:{NFSU2_TR(0x4c9bb6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9bb7:{NFSU2_TR(0x4c9bb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9bbcull));
TAIL_STATIC(0x537be0u,537);
}
B4c9bbc:L4c9bbc:{c.instructions+=4;NFSU2_TR(0x4c9bbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c9bbf:{NFSU2_TR(0x4c9bbf);
u8 U[4];
w4(U+0,u32(0xce8edab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9bc4:{NFSU2_TR(0x4c9bc4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9bc5:{NFSU2_TR(0x4c9bc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9bcaull));
TAIL_STATIC(0x50c900u,50c);
}
B4c9bca:L4c9bca:{c.instructions+=3;NFSU2_TR(0x4c9bca);
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
B4c9bcd:{NFSU2_TR(0x4c9bcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c9bce:{NFSU2_TR(0x4c9bce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9be0:L4c9be0:{c.instructions+=5;NFSU2_TR(0x4c9be0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9be1:{NFSU2_TR(0x4c9be1);
__builtin_memmove((R+24),(R+4),4);
}
B4c9be3:{NFSU2_TR(0x4c9be3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9be7:{NFSU2_TR(0x4c9be7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9be8:{NFSU2_TR(0x4c9be8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9bedull));
TAIL_STATIC(0x5ee2d0u,5ee);
}
B4c9bed:L4c9bed:{c.instructions+=1;NFSU2_TR(0x4c9bed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9bf2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4c9bf2:L4c9bf2:{c.instructions+=5;NFSU2_TR(0x4c9bf2);
__builtin_memmove((R+28),(R+0),4);
}
B4c9bf4:{NFSU2_TR(0x4c9bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9bf7:{NFSU2_TR(0x4c9bf7);
u8 U[4];
w4(U+0,u32(0x7a04c109ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9bfc:{NFSU2_TR(0x4c9bfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9bfd:{NFSU2_TR(0x4c9bfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9c02ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c9c02:L4c9c02:{c.instructions+=5;NFSU2_TR(0x4c9c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9c05:{NFSU2_TR(0x4c9c05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9c06:{NFSU2_TR(0x4c9c06);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9c0b:{NFSU2_TR(0x4c9c0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9c0c:{NFSU2_TR(0x4c9c0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9c11ull));
TAIL_STATIC(0x537be0u,537);
}
B4c9c11:L4c9c11:{c.instructions+=4;NFSU2_TR(0x4c9c11);
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
B4c9c14:{NFSU2_TR(0x4c9c14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c9c15:{NFSU2_TR(0x4c9c15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c9c16:{NFSU2_TR(0x4c9c16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9c20:L4c9c20:{c.instructions+=11;NFSU2_TR(0x4c9c20);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9c24:{NFSU2_TR(0x4c9c24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9c25:{NFSU2_TR(0x4c9c25);
__builtin_memmove((R+24),(R+4),4);
}
B4c9c27:{NFSU2_TR(0x4c9c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9c2d:{NFSU2_TR(0x4c9c2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c9c2f:{NFSU2_TR(0x4c9c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9c32:{NFSU2_TR(0x4c9c32);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9c35:{NFSU2_TR(0x4c9c35);
u8 U[4];
w4(U+0,u32(0xdb1a145ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9c3a:{NFSU2_TR(0x4c9c3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9c3b:{NFSU2_TR(0x4c9c3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c9c3f:{NFSU2_TR(0x4c9c3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9c44ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c9c44:L4c9c44:{c.instructions+=2;NFSU2_TR(0x4c9c44);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9c48:{NFSU2_TR(0x4c9c48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9c4dull));
TAIL_STATIC(0x75bed4u,75b);
}
B4c9c4d:L4c9c4d:{c.instructions+=5;NFSU2_TR(0x4c9c4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c9c50:{NFSU2_TR(0x4c9c50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9c51:{NFSU2_TR(0x4c9c51);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9c56:{NFSU2_TR(0x4c9c56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9c57:{NFSU2_TR(0x4c9c57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9c5cull));
TAIL_STATIC(0x537be0u,537);
}
B4c9c5c:L4c9c5c:{c.instructions+=3;NFSU2_TR(0x4c9c5c);
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
B4c9c5f:{NFSU2_TR(0x4c9c5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c9c60:{NFSU2_TR(0x4c9c60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9c70:L4c9c70:{c.instructions+=10;NFSU2_TR(0x4c9c70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4c9c73:{NFSU2_TR(0x4c9c73);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9c77:{NFSU2_TR(0x4c9c77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9c78:{NFSU2_TR(0x4c9c78);
__builtin_memmove((R+24),(R+4),4);
}
B4c9c7a:{NFSU2_TR(0x4c9c7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9c80:{NFSU2_TR(0x4c9c80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c9c82:{NFSU2_TR(0x4c9c82);
{u32 ea_=u32(r4(R+8)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9c85:{NFSU2_TR(0x4c9c85);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c9c8b:{NFSU2_TR(0x4c9c8b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4c9c91:{NFSU2_TR(0x4c9c91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9c96ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4c9c96:L4c9c96:{c.instructions+=6;NFSU2_TR(0x4c9c96);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c9c9a:{NFSU2_TR(0x4c9c9a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9c9c:{NFSU2_TR(0x4c9c9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4c9ca0:{NFSU2_TR(0x4c9ca0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9ca1:{NFSU2_TR(0x4c9ca1);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c9ca5:{NFSU2_TR(0x4c9ca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9caaull));
TAIL_STATIC(0x577240u,577);
}
B4c9caa:L4c9caa:{c.instructions+=4;NFSU2_TR(0x4c9caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9cad:{NFSU2_TR(0x4c9cad);
u8 U[4];
w4(U+0,u32(0x58b8df93ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9cb2:{NFSU2_TR(0x4c9cb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9cb3:{NFSU2_TR(0x4c9cb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9cb8ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c9cb8:L4c9cb8:{c.instructions+=6;NFSU2_TR(0x4c9cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9cbb:{NFSU2_TR(0x4c9cbb);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c9cbf:{NFSU2_TR(0x4c9cbf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9cc0:{NFSU2_TR(0x4c9cc0);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9cc5:{NFSU2_TR(0x4c9cc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9cc6:{NFSU2_TR(0x4c9cc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9ccbull));
TAIL_STATIC(0x537be0u,537);
}
B4c9ccb:L4c9ccb:{c.instructions+=4;NFSU2_TR(0x4c9ccb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4c9cce:{NFSU2_TR(0x4c9cce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c9ccf:{NFSU2_TR(0x4c9ccf);
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
B4c9cd2:{NFSU2_TR(0x4c9cd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c9ce0:L4c9ce0:{c.instructions+=10;NFSU2_TR(0x4c9ce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4c9ce3:{NFSU2_TR(0x4c9ce3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9ce4:{NFSU2_TR(0x4c9ce4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9ce5:{NFSU2_TR(0x4c9ce5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c9ce9:{NFSU2_TR(0x4c9ce9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9cea:{NFSU2_TR(0x4c9cea);
__builtin_memmove((R+24),(R+4),4);
}
B4c9cec:{NFSU2_TR(0x4c9cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9cef:{NFSU2_TR(0x4c9cef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c9cf1:{NFSU2_TR(0x4c9cf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9cf2:{NFSU2_TR(0x4c9cf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9cf7;}}
}
B4c9cf4:L4c9cf4:{c.instructions+=1;NFSU2_TR(0x4c9cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c9cf7:L4c9cf7:{c.instructions+=3;NFSU2_TR(0x4c9cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9cfa:{NFSU2_TR(0x4c9cfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c9cfc:{NFSU2_TR(0x4c9cfc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9d0a;}}
}
B4c9cfe:L4c9cfe:{c.instructions+=4;NFSU2_TR(0x4c9cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9d01:{NFSU2_TR(0x4c9d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9d04:{NFSU2_TR(0x4c9d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c9d07:{NFSU2_TR(0x4c9d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c9d0a:L4c9d0a:{c.instructions+=8;NFSU2_TR(0x4c9d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9d0d:{NFSU2_TR(0x4c9d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c9d10:{NFSU2_TR(0x4c9d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9d13:{NFSU2_TR(0x4c9d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c9d16:{NFSU2_TR(0x4c9d16);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B4c9d18:{NFSU2_TR(0x4c9d18);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B4c9d1a:{NFSU2_TR(0x4c9d1a);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4c9d1c:{NFSU2_TR(0x4c9d1c);
if(r1(R+518)){TAIL_STATIC(0x4ca00cu,4ca);}
}
B4c9d22:L4c9d22:{c.instructions+=4;NFSU2_TR(0x4c9d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9d25:{NFSU2_TR(0x4c9d25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c9d27:{NFSU2_TR(0x4c9d27);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c9d2a:{NFSU2_TR(0x4c9d2a);
if(r1(R+518)){{goto L4c9d31;}}
}
B4c9d2c:L4c9d2c:{c.instructions+=2;NFSU2_TR(0x4c9d2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c9d2f:{NFSU2_TR(0x4c9d2f);
{goto L4c9d33;}
}
B4c9d31:L4c9d31:{c.instructions+=1;NFSU2_TR(0x4c9d31);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c9d33:L4c9d33:{c.instructions+=2;NFSU2_TR(0x4c9d33);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c9d35:{NFSU2_TR(0x4c9d35);
if(r1(R+518)){{goto L4c9d3c;}}
}
B4c9d37:L4c9d37:{c.instructions+=2;NFSU2_TR(0x4c9d37);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c9d3a:{NFSU2_TR(0x4c9d3a);
{goto L4c9d3e;}
}
B4c9d3c:L4c9d3c:{c.instructions+=1;NFSU2_TR(0x4c9d3c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c9d3e:L4c9d3e:{c.instructions+=2;NFSU2_TR(0x4c9d3e);
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
B4c9d40:{NFSU2_TR(0x4c9d40);
if(r1(R+518)){{goto L4c9d5d;}}
}
B4c9d42:L4c9d42:{c.instructions+=7;NFSU2_TR(0x4c9d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9d45:{NFSU2_TR(0x4c9d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c9d48:{NFSU2_TR(0x4c9d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c9d4a:{NFSU2_TR(0x4c9d4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9d4b:{NFSU2_TR(0x4c9d4b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9d4c:{NFSU2_TR(0x4c9d4c);
__builtin_memmove((R+4),(R+28),4);
}
B4c9d4e:{NFSU2_TR(0x4c9d4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9d51ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c9d51:L4c9d51:{c.instructions+=3;NFSU2_TR(0x4c9d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c9d54:{NFSU2_TR(0x4c9d54);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c9d56:{NFSU2_TR(0x4c9d56);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c9d31u);}goto L4c9d31;}}
}
B4c9d58:L4c9d58:{c.instructions+=2;NFSU2_TR(0x4c9d58);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B4c9d5b:{NFSU2_TR(0x4c9d5b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c9d33u);}goto L4c9d33;}
}
B4c9d5d:L4c9d5d:{c.instructions+=3;NFSU2_TR(0x4c9d5d);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4c9d62:{NFSU2_TR(0x4c9d62);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c9d64:{NFSU2_TR(0x4c9d64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9d73;}}
}
B4c9d66:L4c9d66:{c.instructions+=3;NFSU2_TR(0x4c9d66);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4c9d6b:{NFSU2_TR(0x4c9d6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c9d6d:{NFSU2_TR(0x4c9d6d);
if(r1(R+518)){TAIL_STATIC(0x4ca00cu,4ca);}
}
B4c9d73:L4c9d73:{c.instructions+=6;NFSU2_TR(0x4c9d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9d76:{NFSU2_TR(0x4c9d76);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9d7c:{NFSU2_TR(0x4c9d7c);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4c9d81:{NFSU2_TR(0x4c9d81);
w4(R+12,u32(0x1ull));
}
B4c9d86:{NFSU2_TR(0x4c9d86);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4c9d88:{NFSU2_TR(0x4c9d88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9da5;}}
}
B4c9d8a:L4c9d8a:{c.instructions+=4;NFSU2_TR(0x4c9d8a);
{u32 ea_=u32(u32(7931132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c9d90:{NFSU2_TR(0x4c9d90);
u8 U[4];
w4(U+0,u32(0x8569a25full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9d95:{NFSU2_TR(0x4c9d95);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c9d99:{NFSU2_TR(0x4c9d99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9d9eull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c9d9e:L4c9d9e:{c.instructions+=4;NFSU2_TR(0x4c9d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9da1:{NFSU2_TR(0x4c9da1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9da2:{NFSU2_TR(0x4c9da2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9da3:{NFSU2_TR(0x4c9da3);
{goto L4c9dbe;}
}
B4c9da5:L4c9da5:{c.instructions+=4;NFSU2_TR(0x4c9da5);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c9dab:{NFSU2_TR(0x4c9dab);
u8 U[4];
w4(U+0,u32(0x8569ab44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9db0:{NFSU2_TR(0x4c9db0);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c9db4:{NFSU2_TR(0x4c9db4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9db9ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c9db9:L4c9db9:{c.instructions+=3;NFSU2_TR(0x4c9db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c9dbc:{NFSU2_TR(0x4c9dbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9dbd:{NFSU2_TR(0x4c9dbd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9dbe:L4c9dbe:{c.instructions+=1;NFSU2_TR(0x4c9dbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9dc3ull));
TAIL_STATIC(0x537be0u,537);
}
B4c9dc3:L4c9dc3:{c.instructions+=3;NFSU2_TR(0x4c9dc3);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9dc7:{NFSU2_TR(0x4c9dc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c9dca:{NFSU2_TR(0x4c9dca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9dcfull));
TAIL_STATIC(0x75bed4u,75b);
}
B4c9dcf:L4c9dcf:{c.instructions+=5;NFSU2_TR(0x4c9dcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9dd0:{NFSU2_TR(0x4c9dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9dd3:{NFSU2_TR(0x4c9dd3);
u8 U[4];
w4(U+0,u32(0x795ac0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9dd8:{NFSU2_TR(0x4c9dd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9dd9:{NFSU2_TR(0x4c9dd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9ddeull));
TAIL_STATIC(0x537be0u,537);
}
B4c9dde:L4c9dde:{c.instructions+=15;NFSU2_TR(0x4c9dde);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4c9de3:{NFSU2_TR(0x4c9de3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B4c9dea:{NFSU2_TR(0x4c9dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c9ded:{NFSU2_TR(0x4c9ded);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c9df0:{NFSU2_TR(0x4c9df0);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9df7:{NFSU2_TR(0x4c9df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9dfa:{NFSU2_TR(0x4c9dfa);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c9e00:{NFSU2_TR(0x4c9e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9e06:{NFSU2_TR(0x4c9e06);
__builtin_memmove((R+8),(R+4),4);
}
B4c9e08:{NFSU2_TR(0x4c9e08);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c9e0e:{NFSU2_TR(0x4c9e0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c9e12:{NFSU2_TR(0x4c9e12);
w4(R+4,u32(0x88f298ull));
}
B4c9e17:{NFSU2_TR(0x4c9e17);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c9e1a:{NFSU2_TR(0x4c9e1a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9e1b:{NFSU2_TR(0x4c9e1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9e20ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B4c9e20:L4c9e20:{c.instructions+=3;NFSU2_TR(0x4c9e20);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c9e23:{NFSU2_TR(0x4c9e23);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c9e25:{NFSU2_TR(0x4c9e25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9ea5;}}
}
B4c9e27:L4c9e27:{c.instructions+=5;NFSU2_TR(0x4c9e27);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4c9e29:{NFSU2_TR(0x4c9e29);
{u32 ea_=u32(u32(7906636u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c9e2f:{NFSU2_TR(0x4c9e2f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9e31:{NFSU2_TR(0x4c9e31);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c9e34:{NFSU2_TR(0x4c9e34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9ea7;}}
}
B4c9e36:L4c9e36:{c.instructions+=4;NFSU2_TR(0x4c9e36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9e39:{NFSU2_TR(0x4c9e39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c9e3b:{NFSU2_TR(0x4c9e3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c9e3e:{NFSU2_TR(0x4c9e3e);
if(r1(R+518)){{goto L4c9ea7;}}
}
B4c9e40:L4c9e40:{c.instructions+=6;NFSU2_TR(0x4c9e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9e43:{NFSU2_TR(0x4c9e43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9e45:{NFSU2_TR(0x4c9e45);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4c9e49:{NFSU2_TR(0x4c9e49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9e4a:{NFSU2_TR(0x4c9e4a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1b4ull))));
}
B4c9e50:{NFSU2_TR(0x4c9e50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9e55ull));
TAIL_STATIC(0x577240u,577);
}
B4c9e55:L4c9e55:{c.instructions+=14;NFSU2_TR(0x4c9e55);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4c9e5a:{NFSU2_TR(0x4c9e5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9e5d:{NFSU2_TR(0x4c9e5d);
{u32 ea_=u32(r4(R+4)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9e63:{NFSU2_TR(0x4c9e63);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B4c9e65:{NFSU2_TR(0x4c9e65);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c9e67:{NFSU2_TR(0x4c9e67);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c9e6b:{NFSU2_TR(0x4c9e6b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c9e6d:{NFSU2_TR(0x4c9e6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4c9e70:{NFSU2_TR(0x4c9e70);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xaeb1a31aull))));
}
B4c9e75:{NFSU2_TR(0x4c9e75);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4c9e78:{NFSU2_TR(0x4c9e78);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc76c65b4ull))));
}
B4c9e7d:{NFSU2_TR(0x4c9e7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9e7e:{NFSU2_TR(0x4c9e7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9e7f:{NFSU2_TR(0x4c9e7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9e84ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c9e84:L4c9e84:{c.instructions+=5;NFSU2_TR(0x4c9e84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c9e87:{NFSU2_TR(0x4c9e87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9e88:{NFSU2_TR(0x4c9e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9e8b:{NFSU2_TR(0x4c9e8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9e8c:{NFSU2_TR(0x4c9e8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9e91ull));
TAIL_STATIC(0x537be0u,537);
}
B4c9e91:L4c9e91:{c.instructions+=5;NFSU2_TR(0x4c9e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9e94:{NFSU2_TR(0x4c9e94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9e95:{NFSU2_TR(0x4c9e95);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9e9a:{NFSU2_TR(0x4c9e9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9e9b:{NFSU2_TR(0x4c9e9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9ea0ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c9ea0:L4c9ea0:{c.instructions+=2;NFSU2_TR(0x4c9ea0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4c9ea3:{NFSU2_TR(0x4c9ea3);
{goto L4c9ea7;}
}
B4c9ea5:L4c9ea5:{c.instructions+=1;NFSU2_TR(0x4c9ea5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c9ea7:L4c9ea7:{c.instructions+=3;NFSU2_TR(0x4c9ea7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x32ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c9eaa:{NFSU2_TR(0x4c9eaa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c9eac:{NFSU2_TR(0x4c9eac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9f3f;}}
}
B4c9eb2:L4c9eb2:{c.instructions+=8;NFSU2_TR(0x4c9eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9eb5:{NFSU2_TR(0x4c9eb5);
{u32 ea_=u32(r4(R+0)+u32(424u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c9ebb:{NFSU2_TR(0x4c9ebb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c9ec1:{NFSU2_TR(0x4c9ec1);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c9ec7:{NFSU2_TR(0x4c9ec7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c9ecd:{NFSU2_TR(0x4c9ecd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9ecf:{NFSU2_TR(0x4c9ecf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c9ed2:{NFSU2_TR(0x4c9ed2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4c9f3f;}}
}
B4c9ed4:L4c9ed4:{c.instructions+=4;NFSU2_TR(0x4c9ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9ed7:{NFSU2_TR(0x4c9ed7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c9ed9:{NFSU2_TR(0x4c9ed9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x32ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c9edc:{NFSU2_TR(0x4c9edc);
if(r1(R+518)){{goto L4c9f3f;}}
}
B4c9ede:L4c9ede:{c.instructions+=3;NFSU2_TR(0x4c9ede);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4c9ee3:{NFSU2_TR(0x4c9ee3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c9ee5:{NFSU2_TR(0x4c9ee5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9ef0;}}
}
B4c9ee7:L4c9ee7:{c.instructions+=3;NFSU2_TR(0x4c9ee7);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4c9eec:{NFSU2_TR(0x4c9eec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c9eee:{NFSU2_TR(0x4c9eee);
if(r1(R+518)){{goto L4c9f2d;}}
}
B4c9ef0:L4c9ef0:{c.instructions+=4;NFSU2_TR(0x4c9ef0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9ef2:{NFSU2_TR(0x4c9ef2);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c9ef6:{NFSU2_TR(0x4c9ef6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9ef7:{NFSU2_TR(0x4c9ef7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9efcull));
TAIL_STATIC(0x577240u,577);
}
B4c9efc:L4c9efc:{c.instructions+=11;NFSU2_TR(0x4c9efc);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4c9f01:{NFSU2_TR(0x4c9f01);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B4c9f03:{NFSU2_TR(0x4c9f03);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c9f05:{NFSU2_TR(0x4c9f05);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c9f09:{NFSU2_TR(0x4c9f09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9f0a:{NFSU2_TR(0x4c9f0a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c9f0c:{NFSU2_TR(0x4c9f0c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffd8ull))));
}
B4c9f0f:{NFSU2_TR(0x4c9f0f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
}
B4c9f12:{NFSU2_TR(0x4c9f12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9f13:{NFSU2_TR(0x4c9f13);
u8 U[4];
w4(U+0,u32(0xb6bb5e46ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9f18:{NFSU2_TR(0x4c9f18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9f1dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c9f1d:L4c9f1d:{c.instructions+=5;NFSU2_TR(0x4c9f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c9f20:{NFSU2_TR(0x4c9f20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c9f23:{NFSU2_TR(0x4c9f23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9f24:{NFSU2_TR(0x4c9f24);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9f25:{NFSU2_TR(0x4c9f25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9f2aull));
TAIL_STATIC(0x537be0u,537);
}
B4c9f2a:L4c9f2a:{c.instructions+=1;NFSU2_TR(0x4c9f2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c9f2d:L4c9f2d:{c.instructions+=5;NFSU2_TR(0x4c9f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9f30:{NFSU2_TR(0x4c9f30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9f31:{NFSU2_TR(0x4c9f31);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9f36:{NFSU2_TR(0x4c9f36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9f37:{NFSU2_TR(0x4c9f37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9f3cull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c9f3c:L4c9f3c:{c.instructions+=1;NFSU2_TR(0x4c9f3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c9f3f:L4c9f3f:{c.instructions+=3;NFSU2_TR(0x4c9f3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c9f42:{NFSU2_TR(0x4c9f42);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c9f44:{NFSU2_TR(0x4c9f44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4ca00cu,4ca);}
}
B4c9f4a:L4c9f4a:{c.instructions+=6;NFSU2_TR(0x4c9f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9f4d:{NFSU2_TR(0x4c9f4d);
{u32 ea_=u32(r4(R+4)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9f53:{NFSU2_TR(0x4c9f53);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c9f59:{NFSU2_TR(0x4c9f59);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9f5b:{NFSU2_TR(0x4c9f5b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c9f5e:{NFSU2_TR(0x4c9f5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4ca00cu,4ca);}
}
B4c9f64:L4c9f64:{c.instructions+=4;NFSU2_TR(0x4c9f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9f67:{NFSU2_TR(0x4c9f67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c9f69:{NFSU2_TR(0x4c9f69);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c9f6c:{NFSU2_TR(0x4c9f6c);
if(r1(R+518)){TAIL_STATIC(0x4ca00cu,4ca);}
}
B4c9f72:L4c9f72:{c.instructions+=6;NFSU2_TR(0x4c9f72);
{u32 ea_=u32(r4(R+4)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9f78:{NFSU2_TR(0x4c9f78);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4c9f7c:{NFSU2_TR(0x4c9f7c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c9f82:{NFSU2_TR(0x4c9f82);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c9f84:{NFSU2_TR(0x4c9f84);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c9f87:{NFSU2_TR(0x4c9f87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9ffa;}}
}
B4c9f89:L4c9f89:{c.instructions+=2;NFSU2_TR(0x4c9f89);
w4(R+4,u32(0x89e7a0ull));
}
B4c9f8e:{NFSU2_TR(0x4c9f8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9f93ull));
TAIL_STATIC(0x4018f0u,401);
}
B4c9f93:L4c9f93:{c.instructions+=2;NFSU2_TR(0x4c9f93);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c9f95:{NFSU2_TR(0x4c9f95);
if(r1(R+518)){{goto L4c9ffa;}}
}
B4c9f97:L4c9f97:{c.instructions+=2;NFSU2_TR(0x4c9f97);
u8 U[2];
__builtin_memmove((U+0),gp(0x83aa1a),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4c9f9d:{NFSU2_TR(0x4c9f9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c9fc2;}}
}
B4c9f9f:L4c9f9f:{c.instructions+=6;NFSU2_TR(0x4c9f9f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9fa3:{NFSU2_TR(0x4c9fa3);
u8 U[4];
w4(U+0,u32(0x790af8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9fa8:{NFSU2_TR(0x4c9fa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4c9fab:{NFSU2_TR(0x4c9fab);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4c9fae:{NFSU2_TR(0x4c9fae);
u8 U[4];
w4(U+0,u32(0xc35e2357ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9fb3:{NFSU2_TR(0x4c9fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9fb8ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c9fb8:L4c9fb8:{c.instructions+=5;NFSU2_TR(0x4c9fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c9fbb:{NFSU2_TR(0x4c9fbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c9fbe:{NFSU2_TR(0x4c9fbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9fbf:{NFSU2_TR(0x4c9fbf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9fc0:{NFSU2_TR(0x4c9fc0);
{goto L4c9ff2;}
}
B4c9fc2:L4c9fc2:{c.instructions+=2;NFSU2_TR(0x4c9fc2);
u8 U[4];
w4(U+0,u32(0xce8edab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9fc7:{NFSU2_TR(0x4c9fc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9fccull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c9fcc:L4c9fcc:{c.instructions+=8;NFSU2_TR(0x4c9fcc);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c9fd0:{NFSU2_TR(0x4c9fd0);
{u32 ea_=u32(u32(7932660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c9fd6:{NFSU2_TR(0x4c9fd6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c9fd9:{NFSU2_TR(0x4c9fd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9fda:{NFSU2_TR(0x4c9fda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4c9fdd:{NFSU2_TR(0x4c9fdd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4c9fe0:{NFSU2_TR(0x4c9fe0);
u8 U[4];
w4(U+0,u32(0xc35e2357ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9fe5:{NFSU2_TR(0x4c9fe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9feaull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c9fea:L4c9fea:{c.instructions+=4;NFSU2_TR(0x4c9fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c9fed:{NFSU2_TR(0x4c9fed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c9ff0:{NFSU2_TR(0x4c9ff0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9ff1:{NFSU2_TR(0x4c9ff1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9ff2:L4c9ff2:{c.instructions+=1;NFSU2_TR(0x4c9ff2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c9ff7ull));
TAIL_STATIC(0x537be0u,537);
}
B4c9ff7:L4c9ff7:{c.instructions+=1;NFSU2_TR(0x4c9ff7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4c9ffa:L4c9ffa:{c.instructions+=3;NFSU2_TR(0x4c9ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c9ffd:{NFSU2_TR(0x4c9ffd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c9ffe:{NFSU2_TR(0x4c9ffe);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x4ca003u,4ca);
}
XIT:NFSU2_TR_EXIT(0x4c9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
