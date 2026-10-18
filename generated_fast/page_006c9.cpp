#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6ca(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6c9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6c9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6c9(u8* __restrict R,Cpu& c);
u32 page_6c9(Cpu& c){return body_6c9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6c9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6c9002:goto L6c9002;
case 0x6c9005:c.instructions+=4;goto B6c9005;
case 0x6c9008:c.instructions+=3;goto B6c9008;
case 0x6c900b:c.instructions+=2;goto B6c900b;
case 0x6c900e:c.instructions+=1;goto B6c900e;
case 0x6c9010:goto L6c9010;
case 0x6c9013:c.instructions+=2;goto B6c9013;
case 0x6c9016:c.instructions+=1;goto B6c9016;
case 0x6c9019:goto L6c9019;
case 0x6c901a:c.instructions+=8;goto B6c901a;
case 0x6c901c:c.instructions+=7;goto B6c901c;
case 0x6c901d:c.instructions+=6;goto B6c901d;
case 0x6c9020:c.instructions+=5;goto B6c9020;
case 0x6c9023:c.instructions+=4;goto B6c9023;
case 0x6c9025:c.instructions+=3;goto B6c9025;
case 0x6c9028:c.instructions+=2;goto B6c9028;
case 0x6c902b:c.instructions+=1;goto B6c902b;
case 0x6c9030:goto L6c9030;
case 0x6c9032:c.instructions+=9;goto B6c9032;
case 0x6c9033:c.instructions+=8;goto B6c9033;
case 0x6c9034:c.instructions+=7;goto B6c9034;
case 0x6c9037:c.instructions+=6;goto B6c9037;
case 0x6c903a:c.instructions+=5;goto B6c903a;
case 0x6c903c:c.instructions+=4;goto B6c903c;
case 0x6c903f:c.instructions+=3;goto B6c903f;
case 0x6c9042:c.instructions+=2;goto B6c9042;
case 0x6c9045:c.instructions+=1;goto B6c9045;
case 0x6c904a:goto L6c904a;
case 0x6c904d:c.instructions+=3;goto B6c904d;
case 0x6c9050:c.instructions+=2;goto B6c9050;
case 0x6c9053:c.instructions+=1;goto B6c9053;
case 0x6c9059:goto L6c9059;
case 0x6c905d:c.instructions+=1;goto B6c905d;
case 0x6c9063:goto L6c9063;
case 0x6c9066:c.instructions+=36;goto B6c9066;
case 0x6c9069:c.instructions+=35;goto B6c9069;
case 0x6c906c:c.instructions+=34;goto B6c906c;
case 0x6c906f:c.instructions+=33;goto B6c906f;
case 0x6c9074:c.instructions+=32;goto B6c9074;
case 0x6c9076:c.instructions+=31;goto B6c9076;
case 0x6c9079:c.instructions+=30;goto B6c9079;
case 0x6c907c:c.instructions+=29;goto B6c907c;
case 0x6c907f:c.instructions+=28;goto B6c907f;
case 0x6c9082:c.instructions+=27;goto B6c9082;
case 0x6c9084:c.instructions+=26;goto B6c9084;
case 0x6c9087:c.instructions+=25;goto B6c9087;
case 0x6c908a:c.instructions+=24;goto B6c908a;
case 0x6c908d:c.instructions+=23;goto B6c908d;
case 0x6c9090:c.instructions+=22;goto B6c9090;
case 0x6c9093:c.instructions+=21;goto B6c9093;
case 0x6c9096:c.instructions+=20;goto B6c9096;
case 0x6c9099:c.instructions+=19;goto B6c9099;
case 0x6c909c:c.instructions+=18;goto B6c909c;
case 0x6c909f:c.instructions+=17;goto B6c909f;
case 0x6c90a2:c.instructions+=16;goto B6c90a2;
case 0x6c90a5:c.instructions+=15;goto B6c90a5;
case 0x6c90a8:c.instructions+=14;goto B6c90a8;
case 0x6c90ab:c.instructions+=13;goto B6c90ab;
case 0x6c90ae:c.instructions+=12;goto B6c90ae;
case 0x6c90b1:c.instructions+=11;goto B6c90b1;
case 0x6c90b4:c.instructions+=10;goto B6c90b4;
case 0x6c90b7:c.instructions+=9;goto B6c90b7;
case 0x6c90ba:c.instructions+=8;goto B6c90ba;
case 0x6c90c0:c.instructions+=7;goto B6c90c0;
case 0x6c90c3:c.instructions+=6;goto B6c90c3;
case 0x6c90c6:c.instructions+=5;goto B6c90c6;
case 0x6c90c9:c.instructions+=4;goto B6c90c9;
case 0x6c90cb:c.instructions+=3;goto B6c90cb;
case 0x6c90cc:c.instructions+=2;goto B6c90cc;
case 0x6c90ce:c.instructions+=1;goto B6c90ce;
case 0x6c90d1:goto L6c90d1;
case 0x6c90d3:c.instructions+=1;goto B6c90d3;
case 0x6c90d5:goto L6c90d5;
case 0x6c90d7:c.instructions+=2;goto B6c90d7;
case 0x6c90d8:c.instructions+=1;goto B6c90d8;
case 0x6c90da:goto L6c90da;
case 0x6c90e0:c.instructions+=2;goto B6c90e0;
case 0x6c90e1:c.instructions+=1;goto B6c90e1;
case 0x6c90e6:goto L6c90e6;
case 0x6c90e8:c.instructions+=1;goto B6c90e8;
case 0x6c90ea:goto L6c90ea;
case 0x6c90ef:goto L6c90ef;
case 0x6c90f2:c.instructions+=2;goto B6c90f2;
case 0x6c90f4:c.instructions+=1;goto B6c90f4;
case 0x6c90f6:goto L6c90f6;
case 0x6c90f8:c.instructions+=1;goto B6c90f8;
case 0x6c90fd:goto L6c90fd;
case 0x6c90ff:c.instructions+=5;goto B6c90ff;
case 0x6c9100:c.instructions+=4;goto B6c9100;
case 0x6c9101:c.instructions+=3;goto B6c9101;
case 0x6c9102:c.instructions+=2;goto B6c9102;
case 0x6c9103:c.instructions+=1;goto B6c9103;
case 0x6c9104:goto L6c9104;
case 0x6c9106:c.instructions+=5;goto B6c9106;
case 0x6c9107:c.instructions+=4;goto B6c9107;
case 0x6c9109:c.instructions+=3;goto B6c9109;
case 0x6c910f:c.instructions+=2;goto B6c910f;
case 0x6c9115:c.instructions+=1;goto B6c9115;
case 0x6c9117:goto L6c9117;
case 0x6c9119:c.instructions+=3;goto B6c9119;
case 0x6c911a:c.instructions+=2;goto B6c911a;
case 0x6c911b:c.instructions+=1;goto B6c911b;
case 0x6c911c:goto L6c911c;
case 0x6c911d:c.instructions+=2;goto B6c911d;
case 0x6c911f:c.instructions+=1;goto B6c911f;
case 0x6c9124:goto L6c9124;
case 0x6c9126:c.instructions+=1;goto B6c9126;
case 0x6c9128:goto L6c9128;
case 0x6c912a:c.instructions+=1;goto B6c912a;
case 0x6c912f:goto L6c912f;
case 0x6c9131:c.instructions+=1;goto B6c9131;
case 0x6c9133:goto L6c9133;
case 0x6c9135:goto L6c9135;
case 0x6c9137:c.instructions+=2;goto B6c9137;
case 0x6c9138:c.instructions+=1;goto B6c9138;
case 0x6c913a:goto L6c913a;
case 0x6c913f:c.instructions+=1;goto B6c913f;
case 0x6c9144:goto L6c9144;
case 0x6c9146:c.instructions+=5;goto B6c9146;
case 0x6c9148:c.instructions+=4;goto B6c9148;
case 0x6c914a:c.instructions+=3;goto B6c914a;
case 0x6c914f:c.instructions+=2;goto B6c914f;
case 0x6c9151:c.instructions+=1;goto B6c9151;
case 0x6c9156:goto L6c9156;
case 0x6c9158:c.instructions+=2;goto B6c9158;
case 0x6c915a:c.instructions+=1;goto B6c915a;
case 0x6c9160:goto L6c9160;
case 0x6c9166:c.instructions+=2;goto B6c9166;
case 0x6c9168:c.instructions+=1;goto B6c9168;
case 0x6c916d:goto L6c916d;
case 0x6c916f:c.instructions+=2;goto B6c916f;
case 0x6c9171:c.instructions+=1;goto B6c9171;
case 0x6c9173:goto L6c9173;
case 0x6c9179:c.instructions+=5;goto B6c9179;
case 0x6c917c:c.instructions+=4;goto B6c917c;
case 0x6c917e:c.instructions+=3;goto B6c917e;
case 0x6c9181:c.instructions+=2;goto B6c9181;
case 0x6c9183:c.instructions+=1;goto B6c9183;
case 0x6c9185:goto L6c9185;
case 0x6c918b:c.instructions+=7;goto B6c918b;
case 0x6c918e:c.instructions+=6;goto B6c918e;
case 0x6c9191:c.instructions+=5;goto B6c9191;
case 0x6c9194:c.instructions+=4;goto B6c9194;
case 0x6c9197:c.instructions+=3;goto B6c9197;
case 0x6c919a:c.instructions+=2;goto B6c919a;
case 0x6c919d:c.instructions+=1;goto B6c919d;
case 0x6c919f:goto L6c919f;
case 0x6c91a0:c.instructions+=8;goto B6c91a0;
case 0x6c91a2:c.instructions+=7;goto B6c91a2;
case 0x6c91a3:c.instructions+=6;goto B6c91a3;
case 0x6c91a6:c.instructions+=5;goto B6c91a6;
case 0x6c91a8:c.instructions+=4;goto B6c91a8;
case 0x6c91aa:c.instructions+=3;goto B6c91aa;
case 0x6c91ad:c.instructions+=2;goto B6c91ad;
case 0x6c91af:c.instructions+=1;goto B6c91af;
case 0x6c91b4:goto L6c91b4;
case 0x6c91b7:c.instructions+=1;goto B6c91b7;
case 0x6c91b9:goto L6c91b9;
case 0x6c91be:c.instructions+=1;goto B6c91be;
case 0x6c91c0:goto L6c91c0;
case 0x6c91c3:c.instructions+=7;goto B6c91c3;
case 0x6c91c6:c.instructions+=6;goto B6c91c6;
case 0x6c91c9:c.instructions+=5;goto B6c91c9;
case 0x6c91cc:c.instructions+=4;goto B6c91cc;
case 0x6c91ce:c.instructions+=3;goto B6c91ce;
case 0x6c91cf:c.instructions+=2;goto B6c91cf;
case 0x6c91d1:c.instructions+=1;goto B6c91d1;
case 0x6c91d4:goto L6c91d4;
case 0x6c91d6:c.instructions+=1;goto B6c91d6;
case 0x6c91d8:goto L6c91d8;
case 0x6c91da:c.instructions+=2;goto B6c91da;
case 0x6c91db:c.instructions+=1;goto B6c91db;
case 0x6c91dd:goto L6c91dd;
case 0x6c91e3:c.instructions+=2;goto B6c91e3;
case 0x6c91e4:c.instructions+=1;goto B6c91e4;
case 0x6c91e9:goto L6c91e9;
case 0x6c91eb:goto L6c91eb;
case 0x6c91ed:c.instructions+=2;goto B6c91ed;
case 0x6c91ef:c.instructions+=1;goto B6c91ef;
case 0x6c91f4:goto L6c91f4;
case 0x6c91f6:goto L6c91f6;
case 0x6c91f7:c.instructions+=3;goto B6c91f7;
case 0x6c91f8:c.instructions+=2;goto B6c91f8;
case 0x6c91f9:c.instructions+=1;goto B6c91f9;
case 0x6c91fa:goto L6c91fa;
case 0x6c91fc:c.instructions+=12;goto B6c91fc;
case 0x6c91fd:c.instructions+=11;goto B6c91fd;
case 0x6c91ff:c.instructions+=10;goto B6c91ff;
case 0x6c9202:c.instructions+=9;goto B6c9202;
case 0x6c9203:c.instructions+=8;goto B6c9203;
case 0x6c9206:c.instructions+=7;goto B6c9206;
case 0x6c9207:c.instructions+=6;goto B6c9207;
case 0x6c9208:c.instructions+=5;goto B6c9208;
case 0x6c920a:c.instructions+=4;goto B6c920a;
case 0x6c920c:c.instructions+=3;goto B6c920c;
case 0x6c920e:c.instructions+=2;goto B6c920e;
case 0x6c920f:c.instructions+=1;goto B6c920f;
case 0x6c9212:goto L6c9212;
case 0x6c9214:c.instructions+=1;goto B6c9214;
case 0x6c921a:goto L6c921a;
case 0x6c921d:c.instructions+=4;goto B6c921d;
case 0x6c9220:c.instructions+=3;goto B6c9220;
case 0x6c9224:c.instructions+=2;goto B6c9224;
case 0x6c9226:c.instructions+=1;goto B6c9226;
case 0x6c9228:goto L6c9228;
case 0x6c922b:c.instructions+=2;goto B6c922b;
case 0x6c922e:c.instructions+=1;goto B6c922e;
case 0x6c9231:goto L6c9231;
case 0x6c9233:c.instructions+=4;goto B6c9233;
case 0x6c9236:c.instructions+=3;goto B6c9236;
case 0x6c9239:c.instructions+=2;goto B6c9239;
case 0x6c923c:c.instructions+=1;goto B6c923c;
case 0x6c923e:goto L6c923e;
case 0x6c9241:goto L6c9241;
case 0x6c9244:c.instructions+=2;goto B6c9244;
case 0x6c9247:c.instructions+=1;goto B6c9247;
case 0x6c9249:goto L6c9249;
case 0x6c924c:goto L6c924c;
case 0x6c924f:c.instructions+=2;goto B6c924f;
case 0x6c9252:c.instructions+=1;goto B6c9252;
case 0x6c9254:goto L6c9254;
case 0x6c9257:c.instructions+=2;goto B6c9257;
case 0x6c9259:c.instructions+=1;goto B6c9259;
case 0x6c925f:goto L6c925f;
case 0x6c9262:c.instructions+=2;goto B6c9262;
case 0x6c9265:c.instructions+=1;goto B6c9265;
case 0x6c9268:goto L6c9268;
case 0x6c926b:c.instructions+=8;goto B6c926b;
case 0x6c926d:c.instructions+=7;goto B6c926d;
case 0x6c9270:c.instructions+=6;goto B6c9270;
case 0x6c9273:c.instructions+=5;goto B6c9273;
case 0x6c9276:c.instructions+=4;goto B6c9276;
case 0x6c9279:c.instructions+=3;goto B6c9279;
case 0x6c927c:c.instructions+=2;goto B6c927c;
case 0x6c9280:c.instructions+=1;goto B6c9280;
case 0x6c9286:goto L6c9286;
case 0x6c9289:c.instructions+=2;goto B6c9289;
case 0x6c928c:c.instructions+=1;goto B6c928c;
case 0x6c9292:goto L6c9292;
case 0x6c9293:c.instructions+=2;goto B6c9293;
case 0x6c9296:c.instructions+=1;goto B6c9296;
case 0x6c9298:goto L6c9298;
case 0x6c929b:c.instructions+=1;goto B6c929b;
case 0x6c929d:goto L6c929d;
case 0x6c92a0:c.instructions+=1;goto B6c92a0;
case 0x6c92a2:goto L6c92a2;
case 0x6c92a4:c.instructions+=2;goto B6c92a4;
case 0x6c92a7:c.instructions+=1;goto B6c92a7;
case 0x6c92a9:goto L6c92a9;
case 0x6c92ac:c.instructions+=1;goto B6c92ac;
case 0x6c92af:goto L6c92af;
case 0x6c92b2:c.instructions+=2;goto B6c92b2;
case 0x6c92b5:c.instructions+=1;goto B6c92b5;
case 0x6c92b7:goto L6c92b7;
case 0x6c92b8:c.instructions+=2;goto B6c92b8;
case 0x6c92bb:c.instructions+=1;goto B6c92bb;
case 0x6c92bd:goto L6c92bd;
case 0x6c92c0:c.instructions+=1;goto B6c92c0;
case 0x6c92c2:goto L6c92c2;
case 0x6c92c5:c.instructions+=3;goto B6c92c5;
case 0x6c92c9:c.instructions+=2;goto B6c92c9;
case 0x6c92cd:c.instructions+=1;goto B6c92cd;
case 0x6c92cf:goto L6c92cf;
case 0x6c92d2:c.instructions+=1;goto B6c92d2;
case 0x6c92d5:goto L6c92d5;
case 0x6c92d8:c.instructions+=6;goto B6c92d8;
case 0x6c92da:c.instructions+=5;goto B6c92da;
case 0x6c92dd:c.instructions+=4;goto B6c92dd;
case 0x6c92e0:c.instructions+=3;goto B6c92e0;
case 0x6c92e3:c.instructions+=2;goto B6c92e3;
case 0x6c92e6:c.instructions+=1;goto B6c92e6;
case 0x6c92e8:goto L6c92e8;
case 0x6c92eb:c.instructions+=4;goto B6c92eb;
case 0x6c92ee:c.instructions+=3;goto B6c92ee;
case 0x6c92f2:c.instructions+=2;goto B6c92f2;
case 0x6c92f5:c.instructions+=1;goto B6c92f5;
case 0x6c92f7:goto L6c92f7;
case 0x6c92fa:c.instructions+=2;goto B6c92fa;
case 0x6c92fd:c.instructions+=1;goto B6c92fd;
case 0x6c92ff:goto L6c92ff;
case 0x6c9302:c.instructions+=3;goto B6c9302;
case 0x6c9305:c.instructions+=2;goto B6c9305;
case 0x6c9308:c.instructions+=1;goto B6c9308;
case 0x6c930b:goto L6c930b;
case 0x6c930e:c.instructions+=2;goto B6c930e;
case 0x6c9311:c.instructions+=1;goto B6c9311;
case 0x6c9313:goto L6c9313;
case 0x6c9315:goto L6c9315;
case 0x6c9318:c.instructions+=2;goto B6c9318;
case 0x6c9319:c.instructions+=1;goto B6c9319;
case 0x6c931c:goto L6c931c;
case 0x6c9320:c.instructions+=2;goto B6c9320;
case 0x6c9323:c.instructions+=1;goto B6c9323;
case 0x6c9329:goto L6c9329;
case 0x6c932b:c.instructions+=2;goto B6c932b;
case 0x6c932e:c.instructions+=1;goto B6c932e;
case 0x6c9330:goto L6c9330;
case 0x6c9333:goto L6c9333;
case 0x6c9336:c.instructions+=7;goto B6c9336;
case 0x6c9339:c.instructions+=6;goto B6c9339;
case 0x6c933c:c.instructions+=5;goto B6c933c;
case 0x6c933e:c.instructions+=4;goto B6c933e;
case 0x6c9341:c.instructions+=3;goto B6c9341;
case 0x6c9344:c.instructions+=2;goto B6c9344;
case 0x6c9347:c.instructions+=1;goto B6c9347;
case 0x6c9349:goto L6c9349;
case 0x6c934c:c.instructions+=1;goto B6c934c;
case 0x6c934e:goto L6c934e;
case 0x6c934f:c.instructions+=2;goto B6c934f;
case 0x6c9352:c.instructions+=1;goto B6c9352;
case 0x6c9354:goto L6c9354;
case 0x6c9356:goto L6c9356;
case 0x6c9359:goto L6c9359;
case 0x6c935c:c.instructions+=1;goto B6c935c;
case 0x6c935e:goto L6c935e;
case 0x6c9360:c.instructions+=4;goto B6c9360;
case 0x6c9361:c.instructions+=3;goto B6c9361;
case 0x6c9362:c.instructions+=2;goto B6c9362;
case 0x6c9364:c.instructions+=1;goto B6c9364;
case 0x6c9367:goto L6c9367;
case 0x6c9369:c.instructions+=1;goto B6c9369;
case 0x6c936b:goto L6c936b;
case 0x6c936d:c.instructions+=1;goto B6c936d;
case 0x6c936f:goto L6c936f;
case 0x6c9371:c.instructions+=2;goto B6c9371;
case 0x6c9373:c.instructions+=1;goto B6c9373;
case 0x6c9378:goto L6c9378;
case 0x6c937a:c.instructions+=2;goto B6c937a;
case 0x6c937b:c.instructions+=1;goto B6c937b;
case 0x6c937d:goto L6c937d;
case 0x6c937f:c.instructions+=2;goto B6c937f;
case 0x6c9382:c.instructions+=1;goto B6c9382;
case 0x6c9384:goto L6c9384;
case 0x6c9387:c.instructions+=5;goto B6c9387;
case 0x6c938a:c.instructions+=4;goto B6c938a;
case 0x6c938d:c.instructions+=3;goto B6c938d;
case 0x6c938e:c.instructions+=2;goto B6c938e;
case 0x6c9391:c.instructions+=1;goto B6c9391;
case 0x6c9393:goto L6c9393;
case 0x6c9396:c.instructions+=3;goto B6c9396;
case 0x6c9399:c.instructions+=2;goto B6c9399;
case 0x6c939b:c.instructions+=1;goto B6c939b;
case 0x6c939d:goto L6c939d;
case 0x6c939f:c.instructions+=1;goto B6c939f;
case 0x6c93a4:goto L6c93a4;
case 0x6c93a7:c.instructions+=4;goto B6c93a7;
case 0x6c93aa:c.instructions+=3;goto B6c93aa;
case 0x6c93ac:c.instructions+=2;goto B6c93ac;
case 0x6c93af:c.instructions+=1;goto B6c93af;
case 0x6c93b1:goto L6c93b1;
case 0x6c93b4:c.instructions+=7;goto B6c93b4;
case 0x6c93b7:c.instructions+=6;goto B6c93b7;
case 0x6c93ba:c.instructions+=5;goto B6c93ba;
case 0x6c93bd:c.instructions+=4;goto B6c93bd;
case 0x6c93be:c.instructions+=3;goto B6c93be;
case 0x6c93c1:c.instructions+=2;goto B6c93c1;
case 0x6c93c4:c.instructions+=1;goto B6c93c4;
case 0x6c93c6:goto L6c93c6;
case 0x6c93c8:goto L6c93c8;
case 0x6c93c9:c.instructions+=4;goto B6c93c9;
case 0x6c93ca:c.instructions+=3;goto B6c93ca;
case 0x6c93cb:c.instructions+=2;goto B6c93cb;
case 0x6c93cc:c.instructions+=1;goto B6c93cc;
case 0x6c93cf:goto L6c93cf;
case 0x6c93d1:c.instructions+=11;goto B6c93d1;
case 0x6c93d2:c.instructions+=10;goto B6c93d2;
case 0x6c93d4:c.instructions+=9;goto B6c93d4;
case 0x6c93d7:c.instructions+=8;goto B6c93d7;
case 0x6c93dd:c.instructions+=7;goto B6c93dd;
case 0x6c93df:c.instructions+=6;goto B6c93df;
case 0x6c93e4:c.instructions+=5;goto B6c93e4;
case 0x6c93e5:c.instructions+=4;goto B6c93e5;
case 0x6c93e6:c.instructions+=3;goto B6c93e6;
case 0x6c93e7:c.instructions+=2;goto B6c93e7;
case 0x6c93ee:c.instructions+=1;goto B6c93ee;
case 0x6c93f0:goto L6c93f0;
case 0x6c93f6:c.instructions+=5;goto B6c93f6;
case 0x6c93f9:c.instructions+=4;goto B6c93f9;
case 0x6c93fc:c.instructions+=3;goto B6c93fc;
case 0x6c93ff:c.instructions+=2;goto B6c93ff;
case 0x6c9402:c.instructions+=1;goto B6c9402;
case 0x6c9405:goto L6c9405;
case 0x6c9408:c.instructions+=8;goto B6c9408;
case 0x6c940a:c.instructions+=7;goto B6c940a;
case 0x6c940d:c.instructions+=6;goto B6c940d;
case 0x6c9410:c.instructions+=5;goto B6c9410;
case 0x6c9412:c.instructions+=4;goto B6c9412;
case 0x6c9415:c.instructions+=3;goto B6c9415;
case 0x6c9418:c.instructions+=2;goto B6c9418;
case 0x6c941b:c.instructions+=1;goto B6c941b;
case 0x6c9421:goto L6c9421;
case 0x6c9424:c.instructions+=2;goto B6c9424;
case 0x6c9427:c.instructions+=1;goto B6c9427;
case 0x6c942d:goto L6c942d;
case 0x6c9430:c.instructions+=2;goto B6c9430;
case 0x6c9433:c.instructions+=1;goto B6c9433;
case 0x6c9439:goto L6c9439;
case 0x6c943c:c.instructions+=2;goto B6c943c;
case 0x6c943f:c.instructions+=1;goto B6c943f;
case 0x6c9441:goto L6c9441;
case 0x6c9444:c.instructions+=3;goto B6c9444;
case 0x6c9447:c.instructions+=2;goto B6c9447;
case 0x6c944d:c.instructions+=1;goto B6c944d;
case 0x6c944f:goto L6c944f;
case 0x6c9452:c.instructions+=4;goto B6c9452;
case 0x6c9456:c.instructions+=3;goto B6c9456;
case 0x6c945a:c.instructions+=2;goto B6c945a;
case 0x6c945d:c.instructions+=1;goto B6c945d;
case 0x6c945f:goto L6c945f;
case 0x6c9465:c.instructions+=8;goto B6c9465;
case 0x6c9467:c.instructions+=7;goto B6c9467;
case 0x6c946d:c.instructions+=6;goto B6c946d;
case 0x6c9473:c.instructions+=5;goto B6c9473;
case 0x6c9475:c.instructions+=4;goto B6c9475;
case 0x6c9477:c.instructions+=3;goto B6c9477;
case 0x6c947d:c.instructions+=2;goto B6c947d;
case 0x6c9480:c.instructions+=1;goto B6c9480;
case 0x6c9482:goto L6c9482;
case 0x6c9488:c.instructions+=6;goto B6c9488;
case 0x6c948b:c.instructions+=5;goto B6c948b;
case 0x6c948d:c.instructions+=4;goto B6c948d;
case 0x6c9490:c.instructions+=3;goto B6c9490;
case 0x6c9493:c.instructions+=2;goto B6c9493;
case 0x6c9497:c.instructions+=1;goto B6c9497;
case 0x6c9499:goto L6c9499;
case 0x6c949f:c.instructions+=5;goto B6c949f;
case 0x6c94a2:c.instructions+=4;goto B6c94a2;
case 0x6c94a5:c.instructions+=3;goto B6c94a5;
case 0x6c94a7:c.instructions+=2;goto B6c94a7;
case 0x6c94aa:c.instructions+=1;goto B6c94aa;
case 0x6c94ad:goto L6c94ad;
case 0x6c94af:goto L6c94af;
case 0x6c94b1:c.instructions+=1;goto B6c94b1;
case 0x6c94b4:goto L6c94b4;
case 0x6c94b6:goto L6c94b6;
case 0x6c94b8:goto L6c94b8;
case 0x6c94b9:c.instructions+=4;goto B6c94b9;
case 0x6c94ba:c.instructions+=3;goto B6c94ba;
case 0x6c94bb:c.instructions+=2;goto B6c94bb;
case 0x6c94bc:c.instructions+=1;goto B6c94bc;
case 0x6c94bd:goto L6c94bd;
case 0x6c94bf:c.instructions+=2;goto B6c94bf;
case 0x6c94c0:c.instructions+=1;goto B6c94c0;
case 0x6c94c2:goto L6c94c2;
case 0x6c94c4:c.instructions+=12;goto B6c94c4;
case 0x6c94c5:c.instructions+=11;goto B6c94c5;
case 0x6c94c7:c.instructions+=10;goto B6c94c7;
case 0x6c94ca:c.instructions+=9;goto B6c94ca;
case 0x6c94d0:c.instructions+=8;goto B6c94d0;
case 0x6c94d2:c.instructions+=7;goto B6c94d2;
case 0x6c94d8:c.instructions+=6;goto B6c94d8;
case 0x6c94d9:c.instructions+=5;goto B6c94d9;
case 0x6c94da:c.instructions+=4;goto B6c94da;
case 0x6c94db:c.instructions+=3;goto B6c94db;
case 0x6c94de:c.instructions+=2;goto B6c94de;
case 0x6c94e5:c.instructions+=1;goto B6c94e5;
case 0x6c94eb:goto L6c94eb;
case 0x6c94ee:c.instructions+=5;goto B6c94ee;
case 0x6c94f1:c.instructions+=4;goto B6c94f1;
case 0x6c94f4:c.instructions+=3;goto B6c94f4;
case 0x6c94f7:c.instructions+=2;goto B6c94f7;
case 0x6c94fa:c.instructions+=1;goto B6c94fa;
case 0x6c94fd:goto L6c94fd;
case 0x6c9500:c.instructions+=12;goto B6c9500;
case 0x6c9503:c.instructions+=11;goto B6c9503;
case 0x6c9506:c.instructions+=10;goto B6c9506;
case 0x6c9509:c.instructions+=9;goto B6c9509;
case 0x6c950c:c.instructions+=8;goto B6c950c;
case 0x6c950f:c.instructions+=7;goto B6c950f;
case 0x6c9512:c.instructions+=6;goto B6c9512;
case 0x6c9514:c.instructions+=5;goto B6c9514;
case 0x6c9517:c.instructions+=4;goto B6c9517;
case 0x6c951a:c.instructions+=3;goto B6c951a;
case 0x6c951d:c.instructions+=2;goto B6c951d;
case 0x6c951f:c.instructions+=1;goto B6c951f;
case 0x6c9521:goto L6c9521;
case 0x6c9524:c.instructions+=6;goto B6c9524;
case 0x6c952a:c.instructions+=5;goto B6c952a;
case 0x6c952d:c.instructions+=4;goto B6c952d;
case 0x6c9530:c.instructions+=3;goto B6c9530;
case 0x6c9533:c.instructions+=2;goto B6c9533;
case 0x6c9536:c.instructions+=1;goto B6c9536;
case 0x6c9538:goto L6c9538;
case 0x6c953b:c.instructions+=1;goto B6c953b;
case 0x6c953d:goto L6c953d;
case 0x6c9540:c.instructions+=2;goto B6c9540;
case 0x6c9543:c.instructions+=1;goto B6c9543;
case 0x6c9545:goto L6c9545;
case 0x6c9548:c.instructions+=5;goto B6c9548;
case 0x6c954b:c.instructions+=4;goto B6c954b;
case 0x6c954e:c.instructions+=3;goto B6c954e;
case 0x6c9553:c.instructions+=2;goto B6c9553;
case 0x6c9556:c.instructions+=1;goto B6c9556;
case 0x6c9558:goto L6c9558;
case 0x6c955b:c.instructions+=5;goto B6c955b;
case 0x6c955f:c.instructions+=4;goto B6c955f;
case 0x6c9563:c.instructions+=3;goto B6c9563;
case 0x6c9566:c.instructions+=2;goto B6c9566;
case 0x6c9569:c.instructions+=1;goto B6c9569;
case 0x6c956b:goto L6c956b;
case 0x6c9571:c.instructions+=7;goto B6c9571;
case 0x6c9573:c.instructions+=6;goto B6c9573;
case 0x6c9578:c.instructions+=5;goto B6c9578;
case 0x6c957d:c.instructions+=4;goto B6c957d;
case 0x6c957f:c.instructions+=3;goto B6c957f;
case 0x6c9585:c.instructions+=2;goto B6c9585;
case 0x6c9588:c.instructions+=1;goto B6c9588;
case 0x6c958a:goto L6c958a;
case 0x6c958b:c.instructions+=4;goto B6c958b;
case 0x6c958c:c.instructions+=3;goto B6c958c;
case 0x6c958d:c.instructions+=2;goto B6c958d;
case 0x6c958e:c.instructions+=1;goto B6c958e;
case 0x6c958f:goto L6c958f;
case 0x6c9591:c.instructions+=2;goto B6c9591;
case 0x6c9592:c.instructions+=1;goto B6c9592;
case 0x6c9594:goto L6c9594;
case 0x6c9596:c.instructions+=12;goto B6c9596;
case 0x6c9597:c.instructions+=11;goto B6c9597;
case 0x6c9599:c.instructions+=10;goto B6c9599;
case 0x6c959c:c.instructions+=9;goto B6c959c;
case 0x6c95a2:c.instructions+=8;goto B6c95a2;
case 0x6c95a4:c.instructions+=7;goto B6c95a4;
case 0x6c95a9:c.instructions+=6;goto B6c95a9;
case 0x6c95aa:c.instructions+=5;goto B6c95aa;
case 0x6c95ab:c.instructions+=4;goto B6c95ab;
case 0x6c95ac:c.instructions+=3;goto B6c95ac;
case 0x6c95af:c.instructions+=2;goto B6c95af;
case 0x6c95b6:c.instructions+=1;goto B6c95b6;
case 0x6c95bc:goto L6c95bc;
case 0x6c95bf:c.instructions+=7;goto B6c95bf;
case 0x6c95c5:c.instructions+=6;goto B6c95c5;
case 0x6c95c8:c.instructions+=5;goto B6c95c8;
case 0x6c95ca:c.instructions+=4;goto B6c95ca;
case 0x6c95cd:c.instructions+=3;goto B6c95cd;
case 0x6c95d0:c.instructions+=2;goto B6c95d0;
case 0x6c95d3:c.instructions+=1;goto B6c95d3;
case 0x6c95d6:goto L6c95d6;
case 0x6c95d9:c.instructions+=13;goto B6c95d9;
case 0x6c95dc:c.instructions+=12;goto B6c95dc;
case 0x6c95df:c.instructions+=11;goto B6c95df;
case 0x6c95e2:c.instructions+=10;goto B6c95e2;
case 0x6c95e5:c.instructions+=9;goto B6c95e5;
case 0x6c95e7:c.instructions+=8;goto B6c95e7;
case 0x6c95e9:c.instructions+=7;goto B6c95e9;
case 0x6c95ec:c.instructions+=6;goto B6c95ec;
case 0x6c95ef:c.instructions+=5;goto B6c95ef;
case 0x6c95f2:c.instructions+=4;goto B6c95f2;
case 0x6c95f5:c.instructions+=3;goto B6c95f5;
case 0x6c95f8:c.instructions+=2;goto B6c95f8;
case 0x6c95fb:c.instructions+=1;goto B6c95fb;
case 0x6c9601:goto L6c9601;
case 0x6c9604:c.instructions+=9;goto B6c9604;
case 0x6c960a:c.instructions+=8;goto B6c960a;
case 0x6c960d:c.instructions+=7;goto B6c960d;
case 0x6c9610:c.instructions+=6;goto B6c9610;
case 0x6c9613:c.instructions+=5;goto B6c9613;
case 0x6c9616:c.instructions+=4;goto B6c9616;
case 0x6c9619:c.instructions+=3;goto B6c9619;
case 0x6c961b:c.instructions+=2;goto B6c961b;
case 0x6c961e:c.instructions+=1;goto B6c961e;
case 0x6c9620:goto L6c9620;
case 0x6c9623:c.instructions+=1;goto B6c9623;
case 0x6c9629:goto L6c9629;
case 0x6c962c:c.instructions+=2;goto B6c962c;
case 0x6c962f:c.instructions+=1;goto B6c962f;
case 0x6c9635:goto L6c9635;
case 0x6c9638:c.instructions+=7;goto B6c9638;
case 0x6c963b:c.instructions+=6;goto B6c963b;
case 0x6c963e:c.instructions+=5;goto B6c963e;
case 0x6c9641:c.instructions+=4;goto B6c9641;
case 0x6c9647:c.instructions+=3;goto B6c9647;
case 0x6c9649:c.instructions+=2;goto B6c9649;
case 0x6c964c:c.instructions+=1;goto B6c964c;
case 0x6c964e:goto L6c964e;
case 0x6c9651:c.instructions+=3;goto B6c9651;
case 0x6c9654:c.instructions+=2;goto B6c9654;
case 0x6c9657:c.instructions+=1;goto B6c9657;
case 0x6c9659:goto L6c9659;
case 0x6c965c:c.instructions+=1;goto B6c965c;
case 0x6c965e:goto L6c965e;
case 0x6c9661:c.instructions+=2;goto B6c9661;
case 0x6c9664:c.instructions+=1;goto B6c9664;
case 0x6c9666:goto L6c9666;
case 0x6c9669:c.instructions+=4;goto B6c9669;
case 0x6c966c:c.instructions+=3;goto B6c966c;
case 0x6c9672:c.instructions+=2;goto B6c9672;
case 0x6c9675:c.instructions+=1;goto B6c9675;
case 0x6c9677:goto L6c9677;
case 0x6c967a:c.instructions+=4;goto B6c967a;
case 0x6c967e:c.instructions+=3;goto B6c967e;
case 0x6c9682:c.instructions+=2;goto B6c9682;
case 0x6c9685:c.instructions+=1;goto B6c9685;
case 0x6c968b:goto L6c968b;
case 0x6c9691:c.instructions+=10;goto B6c9691;
case 0x6c9693:c.instructions+=9;goto B6c9693;
case 0x6c9699:c.instructions+=8;goto B6c9699;
case 0x6c969f:c.instructions+=7;goto B6c969f;
case 0x6c96a1:c.instructions+=6;goto B6c96a1;
case 0x6c96a7:c.instructions+=5;goto B6c96a7;
case 0x6c96aa:c.instructions+=4;goto B6c96aa;
case 0x6c96b0:c.instructions+=3;goto B6c96b0;
case 0x6c96b3:c.instructions+=2;goto B6c96b3;
case 0x6c96b5:c.instructions+=1;goto B6c96b5;
case 0x6c96b8:goto L6c96b8;
case 0x6c96ba:goto L6c96ba;
case 0x6c96bc:goto L6c96bc;
case 0x6c96bd:c.instructions+=4;goto B6c96bd;
case 0x6c96be:c.instructions+=3;goto B6c96be;
case 0x6c96bf:c.instructions+=2;goto B6c96bf;
case 0x6c96c0:c.instructions+=1;goto B6c96c0;
case 0x6c96c1:goto L6c96c1;
case 0x6c96c3:c.instructions+=2;goto B6c96c3;
case 0x6c96c4:c.instructions+=1;goto B6c96c4;
case 0x6c96c6:goto L6c96c6;
case 0x6c96c8:c.instructions+=14;goto B6c96c8;
case 0x6c96c9:c.instructions+=13;goto B6c96c9;
case 0x6c96cb:c.instructions+=12;goto B6c96cb;
case 0x6c96cc:c.instructions+=11;goto B6c96cc;
case 0x6c96cd:c.instructions+=10;goto B6c96cd;
case 0x6c96d0:c.instructions+=9;goto B6c96d0;
case 0x6c96d3:c.instructions+=8;goto B6c96d3;
case 0x6c96d6:c.instructions+=7;goto B6c96d6;
case 0x6c96d9:c.instructions+=6;goto B6c96d9;
case 0x6c96db:c.instructions+=5;goto B6c96db;
case 0x6c96dc:c.instructions+=4;goto B6c96dc;
case 0x6c96dd:c.instructions+=3;goto B6c96dd;
case 0x6c96e0:c.instructions+=2;goto B6c96e0;
case 0x6c96e1:c.instructions+=1;goto B6c96e1;
case 0x6c96e7:goto L6c96e7;
case 0x6c96ea:c.instructions+=1;goto B6c96ea;
case 0x6c96f0:goto L6c96f0;
case 0x6c96f3:c.instructions+=2;goto B6c96f3;
case 0x6c96f5:c.instructions+=1;goto B6c96f5;
case 0x6c96fb:goto L6c96fb;
case 0x6c96fe:c.instructions+=6;goto B6c96fe;
case 0x6c9701:c.instructions+=5;goto B6c9701;
case 0x6c9703:c.instructions+=4;goto B6c9703;
case 0x6c9705:c.instructions+=3;goto B6c9705;
case 0x6c970b:c.instructions+=2;goto B6c970b;
case 0x6c9711:c.instructions+=1;goto B6c9711;
case 0x6c9717:goto L6c9717;
case 0x6c971b:c.instructions+=5;goto B6c971b;
case 0x6c9720:c.instructions+=4;goto B6c9720;
case 0x6c9723:c.instructions+=3;goto B6c9723;
case 0x6c9726:c.instructions+=2;goto B6c9726;
case 0x6c9728:c.instructions+=1;goto B6c9728;
case 0x6c972e:goto L6c972e;
case 0x6c9731:goto L6c9731;
case 0x6c9734:c.instructions+=2;goto B6c9734;
case 0x6c9736:c.instructions+=1;goto B6c9736;
case 0x6c9738:goto L6c9738;
case 0x6c973b:goto L6c973b;
case 0x6c973e:c.instructions+=3;goto B6c973e;
case 0x6c9741:c.instructions+=2;goto B6c9741;
case 0x6c9744:c.instructions+=1;goto B6c9744;
case 0x6c9746:goto L6c9746;
case 0x6c9749:c.instructions+=1;goto B6c9749;
case 0x6c974f:goto L6c974f;
case 0x6c9752:c.instructions+=13;goto B6c9752;
case 0x6c9755:c.instructions+=12;goto B6c9755;
case 0x6c9758:c.instructions+=11;goto B6c9758;
case 0x6c975b:c.instructions+=10;goto B6c975b;
case 0x6c975d:c.instructions+=9;goto B6c975d;
case 0x6c9760:c.instructions+=8;goto B6c9760;
case 0x6c9763:c.instructions+=7;goto B6c9763;
case 0x6c9765:c.instructions+=6;goto B6c9765;
case 0x6c9768:c.instructions+=5;goto B6c9768;
case 0x6c976b:c.instructions+=4;goto B6c976b;
case 0x6c976e:c.instructions+=3;goto B6c976e;
case 0x6c9771:c.instructions+=2;goto B6c9771;
case 0x6c9775:c.instructions+=1;goto B6c9775;
case 0x6c9777:goto L6c9777;
case 0x6c977a:c.instructions+=1;goto B6c977a;
case 0x6c977c:goto L6c977c;
case 0x6c977f:c.instructions+=6;goto B6c977f;
case 0x6c9781:c.instructions+=5;goto B6c9781;
case 0x6c9784:c.instructions+=4;goto B6c9784;
case 0x6c9787:c.instructions+=3;goto B6c9787;
case 0x6c978a:c.instructions+=2;goto B6c978a;
case 0x6c978e:c.instructions+=1;goto B6c978e;
case 0x6c9790:goto L6c9790;
case 0x6c9792:c.instructions+=1;goto B6c9792;
case 0x6c9795:goto L6c9795;
case 0x6c9798:c.instructions+=8;goto B6c9798;
case 0x6c979e:c.instructions+=7;goto B6c979e;
case 0x6c97a0:c.instructions+=6;goto B6c97a0;
case 0x6c97a3:c.instructions+=5;goto B6c97a3;
case 0x6c97a6:c.instructions+=4;goto B6c97a6;
case 0x6c97a8:c.instructions+=3;goto B6c97a8;
case 0x6c97aa:c.instructions+=2;goto B6c97aa;
case 0x6c97ad:c.instructions+=1;goto B6c97ad;
case 0x6c97af:goto L6c97af;
case 0x6c97b1:c.instructions+=5;goto B6c97b1;
case 0x6c97b4:c.instructions+=4;goto B6c97b4;
case 0x6c97b7:c.instructions+=3;goto B6c97b7;
case 0x6c97bd:c.instructions+=2;goto B6c97bd;
case 0x6c97c3:c.instructions+=1;goto B6c97c3;
case 0x6c97c5:goto L6c97c5;
case 0x6c97c8:c.instructions+=5;goto B6c97c8;
case 0x6c97ca:c.instructions+=4;goto B6c97ca;
case 0x6c97cd:c.instructions+=3;goto B6c97cd;
case 0x6c97cf:c.instructions+=2;goto B6c97cf;
case 0x6c97d1:c.instructions+=1;goto B6c97d1;
case 0x6c97d3:goto L6c97d3;
case 0x6c97d5:c.instructions+=1;goto B6c97d5;
case 0x6c97d6:goto L6c97d6;
case 0x6c97d7:c.instructions+=4;goto B6c97d7;
case 0x6c97d8:c.instructions+=3;goto B6c97d8;
case 0x6c97d9:c.instructions+=2;goto B6c97d9;
case 0x6c97da:c.instructions+=1;goto B6c97da;
case 0x6c97dd:goto L6c97dd;
case 0x6c97df:c.instructions+=20;goto B6c97df;
case 0x6c97e0:c.instructions+=19;goto B6c97e0;
case 0x6c97e2:c.instructions+=18;goto B6c97e2;
case 0x6c97e5:c.instructions+=17;goto B6c97e5;
case 0x6c97e8:c.instructions+=16;goto B6c97e8;
case 0x6c97e9:c.instructions+=15;goto B6c97e9;
case 0x6c97ea:c.instructions+=14;goto B6c97ea;
case 0x6c97ec:c.instructions+=13;goto B6c97ec;
case 0x6c97ed:c.instructions+=12;goto B6c97ed;
case 0x6c97ef:c.instructions+=11;goto B6c97ef;
case 0x6c97f2:c.instructions+=10;goto B6c97f2;
case 0x6c97f3:c.instructions+=9;goto B6c97f3;
case 0x6c97f4:c.instructions+=8;goto B6c97f4;
case 0x6c97f6:c.instructions+=7;goto B6c97f6;
case 0x6c97f7:c.instructions+=6;goto B6c97f7;
case 0x6c97fd:c.instructions+=5;goto B6c97fd;
case 0x6c9801:c.instructions+=4;goto B6c9801;
case 0x6c9804:c.instructions+=3;goto B6c9804;
case 0x6c9807:c.instructions+=2;goto B6c9807;
case 0x6c9808:c.instructions+=1;goto B6c9808;
case 0x6c980e:goto L6c980e;
case 0x6c9810:c.instructions+=2;goto B6c9810;
case 0x6c9812:c.instructions+=1;goto B6c9812;
case 0x6c9814:goto L6c9814;
case 0x6c9818:c.instructions+=7;goto B6c9818;
case 0x6c9819:c.instructions+=6;goto B6c9819;
case 0x6c981d:c.instructions+=5;goto B6c981d;
case 0x6c981e:c.instructions+=4;goto B6c981e;
case 0x6c9821:c.instructions+=3;goto B6c9821;
case 0x6c9824:c.instructions+=2;goto B6c9824;
case 0x6c9826:c.instructions+=1;goto B6c9826;
case 0x6c982b:goto L6c982b;
case 0x6c982d:c.instructions+=1;goto B6c982d;
case 0x6c9833:goto L6c9833;
case 0x6c9834:c.instructions+=2;goto B6c9834;
case 0x6c9836:c.instructions+=1;goto B6c9836;
case 0x6c9838:goto L6c9838;
case 0x6c983c:c.instructions+=2;goto B6c983c;
case 0x6c983e:c.instructions+=1;goto B6c983e;
case 0x6c9840:goto L6c9840;
case 0x6c9843:c.instructions+=6;goto B6c9843;
case 0x6c9846:c.instructions+=5;goto B6c9846;
case 0x6c9849:c.instructions+=4;goto B6c9849;
case 0x6c984c:c.instructions+=3;goto B6c984c;
case 0x6c984e:c.instructions+=2;goto B6c984e;
case 0x6c9850:c.instructions+=1;goto B6c9850;
case 0x6c9853:goto L6c9853;
case 0x6c9856:c.instructions+=4;goto B6c9856;
case 0x6c9858:c.instructions+=3;goto B6c9858;
case 0x6c985b:c.instructions+=2;goto B6c985b;
case 0x6c985e:c.instructions+=1;goto B6c985e;
case 0x6c9864:goto L6c9864;
case 0x6c9867:c.instructions+=2;goto B6c9867;
case 0x6c986b:c.instructions+=1;goto B6c986b;
case 0x6c9871:goto L6c9871;
case 0x6c9874:c.instructions+=3;goto B6c9874;
case 0x6c9877:c.instructions+=2;goto B6c9877;
case 0x6c987a:c.instructions+=1;goto B6c987a;
case 0x6c9880:goto L6c9880;
case 0x6c9883:c.instructions+=3;goto B6c9883;
case 0x6c9886:c.instructions+=2;goto B6c9886;
case 0x6c9889:c.instructions+=1;goto B6c9889;
case 0x6c988b:goto L6c988b;
case 0x6c988e:c.instructions+=3;goto B6c988e;
case 0x6c9890:c.instructions+=2;goto B6c9890;
case 0x6c9893:c.instructions+=1;goto B6c9893;
case 0x6c9899:goto L6c9899;
case 0x6c989b:c.instructions+=3;goto B6c989b;
case 0x6c989d:c.instructions+=2;goto B6c989d;
case 0x6c98a4:c.instructions+=1;goto B6c98a4;
case 0x6c98aa:goto L6c98aa;
case 0x6c98ad:c.instructions+=1;goto B6c98ad;
case 0x6c98b0:goto L6c98b0;
case 0x6c98b3:c.instructions+=2;goto B6c98b3;
case 0x6c98b6:c.instructions+=1;goto B6c98b6;
case 0x6c98b8:goto L6c98b8;
case 0x6c98bc:goto L6c98bc;
case 0x6c98bd:c.instructions+=2;goto B6c98bd;
case 0x6c98bf:c.instructions+=1;goto B6c98bf;
case 0x6c98c1:goto L6c98c1;
case 0x6c98c5:c.instructions+=1;goto B6c98c5;
case 0x6c98cb:goto L6c98cb;
case 0x6c98cc:c.instructions+=2;goto B6c98cc;
case 0x6c98cf:c.instructions+=1;goto B6c98cf;
case 0x6c98d1:goto L6c98d1;
case 0x6c98d3:goto L6c98d3;
case 0x6c98d7:c.instructions+=2;goto B6c98d7;
case 0x6c98d9:c.instructions+=1;goto B6c98d9;
case 0x6c98db:goto L6c98db;
case 0x6c98de:c.instructions+=3;goto B6c98de;
case 0x6c98e1:c.instructions+=2;goto B6c98e1;
case 0x6c98e4:c.instructions+=1;goto B6c98e4;
case 0x6c98e6:goto L6c98e6;
case 0x6c98e9:c.instructions+=4;goto B6c98e9;
case 0x6c98ec:c.instructions+=3;goto B6c98ec;
case 0x6c98ee:c.instructions+=2;goto B6c98ee;
case 0x6c98f1:c.instructions+=1;goto B6c98f1;
case 0x6c98f7:goto L6c98f7;
case 0x6c98fa:c.instructions+=3;goto B6c98fa;
case 0x6c9900:c.instructions+=2;goto B6c9900;
case 0x6c9906:c.instructions+=1;goto B6c9906;
case 0x6c990c:goto L6c990c;
case 0x6c990f:c.instructions+=3;goto B6c990f;
case 0x6c9912:c.instructions+=2;goto B6c9912;
case 0x6c9918:c.instructions+=1;goto B6c9918;
case 0x6c991e:goto L6c991e;
case 0x6c9921:c.instructions+=1;goto B6c9921;
case 0x6c9923:goto L6c9923;
case 0x6c9925:c.instructions+=2;goto B6c9925;
case 0x6c9927:c.instructions+=1;goto B6c9927;
case 0x6c992d:goto L6c992d;
case 0x6c992f:c.instructions+=1;goto B6c992f;
case 0x6c9935:goto L6c9935;
case 0x6c9938:c.instructions+=3;goto B6c9938;
case 0x6c993b:c.instructions+=2;goto B6c993b;
case 0x6c993e:c.instructions+=1;goto B6c993e;
case 0x6c9940:goto L6c9940;
case 0x6c9942:c.instructions+=1;goto B6c9942;
case 0x6c9947:goto L6c9947;
case 0x6c9949:c.instructions+=1;goto B6c9949;
case 0x6c994b:goto L6c994b;
case 0x6c994d:c.instructions+=1;goto B6c994d;
case 0x6c9952:goto L6c9952;
case 0x6c9954:c.instructions+=1;goto B6c9954;
case 0x6c9956:goto L6c9956;
case 0x6c9958:goto L6c9958;
case 0x6c995a:c.instructions+=1;goto B6c995a;
case 0x6c995c:goto L6c995c;
case 0x6c9961:c.instructions+=1;goto B6c9961;
case 0x6c9966:goto L6c9966;
case 0x6c9968:c.instructions+=9;goto B6c9968;
case 0x6c9969:c.instructions+=8;goto B6c9969;
case 0x6c996c:c.instructions+=7;goto B6c996c;
case 0x6c996d:c.instructions+=6;goto B6c996d;
case 0x6c996f:c.instructions+=5;goto B6c996f;
case 0x6c9974:c.instructions+=4;goto B6c9974;
case 0x6c9979:c.instructions+=3;goto B6c9979;
case 0x6c997a:c.instructions+=2;goto B6c997a;
case 0x6c997c:c.instructions+=1;goto B6c997c;
case 0x6c9981:goto L6c9981;
case 0x6c9983:c.instructions+=1;goto B6c9983;
case 0x6c9989:goto L6c9989;
case 0x6c998c:c.instructions+=2;goto B6c998c;
case 0x6c998e:c.instructions+=1;goto B6c998e;
case 0x6c9993:goto L6c9993;
case 0x6c9995:c.instructions+=1;goto B6c9995;
case 0x6c999b:goto L6c999b;
case 0x6c999e:c.instructions+=7;goto B6c999e;
case 0x6c99a1:c.instructions+=6;goto B6c99a1;
case 0x6c99a3:c.instructions+=5;goto B6c99a3;
case 0x6c99a6:c.instructions+=4;goto B6c99a6;
case 0x6c99a9:c.instructions+=3;goto B6c99a9;
case 0x6c99ab:c.instructions+=2;goto B6c99ab;
case 0x6c99ad:c.instructions+=1;goto B6c99ad;
case 0x6c99b0:goto L6c99b0;
case 0x6c99b2:goto L6c99b2;
case 0x6c99b4:c.instructions+=1;goto B6c99b4;
case 0x6c99b7:goto L6c99b7;
case 0x6c99b9:goto L6c99b9;
case 0x6c99bc:c.instructions+=3;goto B6c99bc;
case 0x6c99bf:c.instructions+=2;goto B6c99bf;
case 0x6c99c1:c.instructions+=1;goto B6c99c1;
case 0x6c99c4:goto L6c99c4;
case 0x6c99c6:goto L6c99c6;
case 0x6c99c8:c.instructions+=2;goto B6c99c8;
case 0x6c99cb:c.instructions+=1;goto B6c99cb;
case 0x6c99ce:goto L6c99ce;
case 0x6c99d0:goto L6c99d0;
case 0x6c99d3:c.instructions+=7;goto B6c99d3;
case 0x6c99d6:c.instructions+=6;goto B6c99d6;
case 0x6c99d9:c.instructions+=5;goto B6c99d9;
case 0x6c99db:c.instructions+=4;goto B6c99db;
case 0x6c99de:c.instructions+=3;goto B6c99de;
case 0x6c99e0:c.instructions+=2;goto B6c99e0;
case 0x6c99e2:c.instructions+=1;goto B6c99e2;
case 0x6c99e5:goto L6c99e5;
case 0x6c99e7:goto L6c99e7;
case 0x6c99e9:c.instructions+=1;goto B6c99e9;
case 0x6c99ec:goto L6c99ec;
case 0x6c99ee:goto L6c99ee;
case 0x6c99f1:c.instructions+=4;goto B6c99f1;
case 0x6c99f4:c.instructions+=3;goto B6c99f4;
case 0x6c99f6:c.instructions+=2;goto B6c99f6;
case 0x6c99f8:c.instructions+=1;goto B6c99f8;
case 0x6c99fb:goto L6c99fb;
case 0x6c99fd:goto L6c99fd;
case 0x6c99ff:c.instructions+=2;goto B6c99ff;
case 0x6c9a02:c.instructions+=1;goto B6c9a02;
case 0x6c9a05:goto L6c9a05;
case 0x6c9a07:goto L6c9a07;
case 0x6c9a0a:c.instructions+=13;goto B6c9a0a;
case 0x6c9a0d:c.instructions+=12;goto B6c9a0d;
case 0x6c9a0f:c.instructions+=11;goto B6c9a0f;
case 0x6c9a12:c.instructions+=10;goto B6c9a12;
case 0x6c9a15:c.instructions+=9;goto B6c9a15;
case 0x6c9a17:c.instructions+=8;goto B6c9a17;
case 0x6c9a1a:c.instructions+=7;goto B6c9a1a;
case 0x6c9a1d:c.instructions+=6;goto B6c9a1d;
case 0x6c9a20:c.instructions+=5;goto B6c9a20;
case 0x6c9a23:c.instructions+=4;goto B6c9a23;
case 0x6c9a26:c.instructions+=3;goto B6c9a26;
case 0x6c9a2a:c.instructions+=2;goto B6c9a2a;
case 0x6c9a2d:c.instructions+=1;goto B6c9a2d;
case 0x6c9a2f:goto L6c9a2f;
case 0x6c9a32:c.instructions+=2;goto B6c9a32;
case 0x6c9a35:c.instructions+=1;goto B6c9a35;
case 0x6c9a37:goto L6c9a37;
case 0x6c9a3a:c.instructions+=1;goto B6c9a3a;
case 0x6c9a3c:goto L6c9a3c;
case 0x6c9a3f:c.instructions+=2;goto B6c9a3f;
case 0x6c9a42:c.instructions+=1;goto B6c9a42;
case 0x6c9a44:goto L6c9a44;
case 0x6c9a47:c.instructions+=2;goto B6c9a47;
case 0x6c9a4d:c.instructions+=1;goto B6c9a4d;
case 0x6c9a4f:goto L6c9a4f;
case 0x6c9a51:goto L6c9a51;
case 0x6c9a54:goto L6c9a54;
case 0x6c9a58:c.instructions+=1;goto B6c9a58;
case 0x6c9a5a:goto L6c9a5a;
case 0x6c9a61:goto L6c9a61;
case 0x6c9a63:c.instructions+=4;goto B6c9a63;
case 0x6c9a65:c.instructions+=3;goto B6c9a65;
case 0x6c9a66:c.instructions+=2;goto B6c9a66;
case 0x6c9a68:c.instructions+=1;goto B6c9a68;
case 0x6c9a6b:goto L6c9a6b;
case 0x6c9a6d:c.instructions+=1;goto B6c9a6d;
case 0x6c9a6f:goto L6c9a6f;
case 0x6c9a72:c.instructions+=4;goto B6c9a72;
case 0x6c9a75:c.instructions+=3;goto B6c9a75;
case 0x6c9a78:c.instructions+=2;goto B6c9a78;
case 0x6c9a7c:c.instructions+=1;goto B6c9a7c;
case 0x6c9a7e:goto L6c9a7e;
case 0x6c9a82:c.instructions+=1;goto B6c9a82;
case 0x6c9a84:goto L6c9a84;
case 0x6c9a88:c.instructions+=1;goto B6c9a88;
case 0x6c9a8a:goto L6c9a8a;
case 0x6c9a8d:c.instructions+=4;goto B6c9a8d;
case 0x6c9a90:c.instructions+=3;goto B6c9a90;
case 0x6c9a93:c.instructions+=2;goto B6c9a93;
case 0x6c9a94:c.instructions+=1;goto B6c9a94;
case 0x6c9a99:goto L6c9a99;
case 0x6c9a9b:c.instructions+=1;goto B6c9a9b;
case 0x6c9a9d:goto L6c9a9d;
case 0x6c9a9f:c.instructions+=2;goto B6c9a9f;
case 0x6c9aa1:c.instructions+=1;goto B6c9aa1;
case 0x6c9aa6:goto L6c9aa6;
case 0x6c9aa9:c.instructions+=4;goto B6c9aa9;
case 0x6c9aac:c.instructions+=3;goto B6c9aac;
case 0x6c9aaf:c.instructions+=2;goto B6c9aaf;
case 0x6c9ab1:c.instructions+=1;goto B6c9ab1;
case 0x6c9ab3:goto L6c9ab3;
case 0x6c9ab6:goto L6c9ab6;
case 0x6c9ab8:c.instructions+=1;goto B6c9ab8;
case 0x6c9aba:goto L6c9aba;
case 0x6c9abc:c.instructions+=2;goto B6c9abc;
case 0x6c9abe:c.instructions+=1;goto B6c9abe;
case 0x6c9ac3:goto L6c9ac3;
case 0x6c9ac5:c.instructions+=1;goto B6c9ac5;
case 0x6c9ac6:goto L6c9ac6;
case 0x6c9ac7:c.instructions+=4;goto B6c9ac7;
case 0x6c9ac8:c.instructions+=3;goto B6c9ac8;
case 0x6c9ac9:c.instructions+=2;goto B6c9ac9;
case 0x6c9aca:c.instructions+=1;goto B6c9aca;
case 0x6c9acd:goto L6c9acd;
case 0x6c9acf:c.instructions+=11;goto B6c9acf;
case 0x6c9ad0:c.instructions+=10;goto B6c9ad0;
case 0x6c9ad2:c.instructions+=9;goto B6c9ad2;
case 0x6c9ad5:c.instructions+=8;goto B6c9ad5;
case 0x6c9ad6:c.instructions+=7;goto B6c9ad6;
case 0x6c9ad9:c.instructions+=6;goto B6c9ad9;
case 0x6c9adc:c.instructions+=5;goto B6c9adc;
case 0x6c9adf:c.instructions+=4;goto B6c9adf;
case 0x6c9ae2:c.instructions+=3;goto B6c9ae2;
case 0x6c9ae3:c.instructions+=2;goto B6c9ae3;
case 0x6c9ae4:c.instructions+=1;goto B6c9ae4;
case 0x6c9ae6:goto L6c9ae6;
case 0x6c9aea:c.instructions+=1;goto B6c9aea;
case 0x6c9aec:goto L6c9aec;
case 0x6c9aef:c.instructions+=3;goto B6c9aef;
case 0x6c9af1:c.instructions+=2;goto B6c9af1;
case 0x6c9af4:c.instructions+=1;goto B6c9af4;
case 0x6c9af6:goto L6c9af6;
case 0x6c9af9:c.instructions+=1;goto B6c9af9;
case 0x6c9afc:goto L6c9afc;
case 0x6c9afe:c.instructions+=4;goto B6c9afe;
case 0x6c9b00:c.instructions+=3;goto B6c9b00;
case 0x6c9b06:c.instructions+=2;goto B6c9b06;
case 0x6c9b0c:c.instructions+=1;goto B6c9b0c;
case 0x6c9b0e:goto L6c9b0e;
case 0x6c9b11:c.instructions+=3;goto B6c9b11;
case 0x6c9b13:c.instructions+=2;goto B6c9b13;
case 0x6c9b15:c.instructions+=1;goto B6c9b15;
case 0x6c9b17:goto L6c9b17;
case 0x6c9b1a:goto L6c9b1a;
case 0x6c9b1c:c.instructions+=1;goto B6c9b1c;
case 0x6c9b1e:goto L6c9b1e;
case 0x6c9b1f:c.instructions+=3;goto B6c9b1f;
case 0x6c9b22:c.instructions+=2;goto B6c9b22;
case 0x6c9b24:c.instructions+=1;goto B6c9b24;
case 0x6c9b26:goto L6c9b26;
case 0x6c9b27:c.instructions+=3;goto B6c9b27;
case 0x6c9b2a:c.instructions+=2;goto B6c9b2a;
case 0x6c9b2d:c.instructions+=1;goto B6c9b2d;
case 0x6c9b2f:goto L6c9b2f;
case 0x6c9b31:goto L6c9b31;
case 0x6c9b32:c.instructions+=4;goto B6c9b32;
case 0x6c9b33:c.instructions+=3;goto B6c9b33;
case 0x6c9b34:c.instructions+=2;goto B6c9b34;
case 0x6c9b35:c.instructions+=1;goto B6c9b35;
case 0x6c9b38:goto L6c9b38;
case 0x6c9b3a:c.instructions+=2;goto B6c9b3a;
case 0x6c9b3b:c.instructions+=1;goto B6c9b3b;
case 0x6c9b3d:goto L6c9b3d;
case 0x6c9b3f:c.instructions+=33;goto B6c9b3f;
case 0x6c9b40:c.instructions+=32;goto B6c9b40;
case 0x6c9b42:c.instructions+=31;goto B6c9b42;
case 0x6c9b48:c.instructions+=30;goto B6c9b48;
case 0x6c9b49:c.instructions+=29;goto B6c9b49;
case 0x6c9b4a:c.instructions+=28;goto B6c9b4a;
case 0x6c9b4b:c.instructions+=27;goto B6c9b4b;
case 0x6c9b4e:c.instructions+=26;goto B6c9b4e;
case 0x6c9b52:c.instructions+=25;goto B6c9b52;
case 0x6c9b56:c.instructions+=24;goto B6c9b56;
case 0x6c9b58:c.instructions+=23;goto B6c9b58;
case 0x6c9b5e:c.instructions+=22;goto B6c9b5e;
case 0x6c9b60:c.instructions+=21;goto B6c9b60;
case 0x6c9b66:c.instructions+=20;goto B6c9b66;
case 0x6c9b67:c.instructions+=19;goto B6c9b67;
case 0x6c9b6a:c.instructions+=18;goto B6c9b6a;
case 0x6c9b6b:c.instructions+=17;goto B6c9b6b;
case 0x6c9b71:c.instructions+=16;goto B6c9b71;
case 0x6c9b72:c.instructions+=15;goto B6c9b72;
case 0x6c9b75:c.instructions+=14;goto B6c9b75;
case 0x6c9b76:c.instructions+=13;goto B6c9b76;
case 0x6c9b79:c.instructions+=12;goto B6c9b79;
case 0x6c9b7a:c.instructions+=11;goto B6c9b7a;
case 0x6c9b7c:c.instructions+=10;goto B6c9b7c;
case 0x6c9b81:c.instructions+=9;goto B6c9b81;
case 0x6c9b82:c.instructions+=8;goto B6c9b82;
case 0x6c9b83:c.instructions+=7;goto B6c9b83;
case 0x6c9b85:c.instructions+=6;goto B6c9b85;
case 0x6c9b88:c.instructions+=5;goto B6c9b88;
case 0x6c9b8b:c.instructions+=4;goto B6c9b8b;
case 0x6c9b92:c.instructions+=3;goto B6c9b92;
case 0x6c9b99:c.instructions+=2;goto B6c9b99;
case 0x6c9b9c:c.instructions+=1;goto B6c9b9c;
case 0x6c9ba1:goto L6c9ba1;
case 0x6c9ba3:c.instructions+=1;goto B6c9ba3;
case 0x6c9ba5:goto L6c9ba5;
case 0x6c9ba8:c.instructions+=13;goto B6c9ba8;
case 0x6c9bab:c.instructions+=12;goto B6c9bab;
case 0x6c9bac:c.instructions+=11;goto B6c9bac;
case 0x6c9bad:c.instructions+=10;goto B6c9bad;
case 0x6c9bb3:c.instructions+=9;goto B6c9bb3;
case 0x6c9bb4:c.instructions+=8;goto B6c9bb4;
case 0x6c9bb7:c.instructions+=7;goto B6c9bb7;
case 0x6c9bb8:c.instructions+=6;goto B6c9bb8;
case 0x6c9bbb:c.instructions+=5;goto B6c9bbb;
case 0x6c9bbc:c.instructions+=4;goto B6c9bbc;
case 0x6c9bc1:c.instructions+=3;goto B6c9bc1;
case 0x6c9bc7:c.instructions+=2;goto B6c9bc7;
case 0x6c9bc9:c.instructions+=1;goto B6c9bc9;
case 0x6c9bce:goto L6c9bce;
case 0x6c9bd0:c.instructions+=1;goto B6c9bd0;
case 0x6c9bd2:goto L6c9bd2;
case 0x6c9bd4:c.instructions+=1;goto B6c9bd4;
case 0x6c9bd9:goto L6c9bd9;
case 0x6c9bdd:c.instructions+=4;goto B6c9bdd;
case 0x6c9be3:c.instructions+=3;goto B6c9be3;
case 0x6c9be6:c.instructions+=2;goto B6c9be6;
case 0x6c9bec:c.instructions+=1;goto B6c9bec;
case 0x6c9bef:goto L6c9bef;
case 0x6c9bf3:c.instructions+=2;goto B6c9bf3;
case 0x6c9bf5:c.instructions+=1;goto B6c9bf5;
case 0x6c9bf7:goto L6c9bf7;
case 0x6c9bfa:c.instructions+=5;goto B6c9bfa;
case 0x6c9bfd:c.instructions+=4;goto B6c9bfd;
case 0x6c9c00:c.instructions+=3;goto B6c9c00;
case 0x6c9c03:c.instructions+=2;goto B6c9c03;
case 0x6c9c06:c.instructions+=1;goto B6c9c06;
case 0x6c9c09:goto L6c9c09;
case 0x6c9c0d:c.instructions+=8;goto B6c9c0d;
case 0x6c9c10:c.instructions+=7;goto B6c9c10;
case 0x6c9c12:c.instructions+=6;goto B6c9c12;
case 0x6c9c15:c.instructions+=5;goto B6c9c15;
case 0x6c9c18:c.instructions+=4;goto B6c9c18;
case 0x6c9c1f:c.instructions+=3;goto B6c9c1f;
case 0x6c9c22:c.instructions+=2;goto B6c9c22;
case 0x6c9c25:c.instructions+=1;goto B6c9c25;
case 0x6c9c27:goto L6c9c27;
case 0x6c9c2a:c.instructions+=3;goto B6c9c2a;
case 0x6c9c2d:c.instructions+=2;goto B6c9c2d;
case 0x6c9c33:c.instructions+=1;goto B6c9c33;
case 0x6c9c35:goto L6c9c35;
case 0x6c9c38:c.instructions+=1;goto B6c9c38;
case 0x6c9c3a:goto L6c9c3a;
case 0x6c9c3d:c.instructions+=2;goto B6c9c3d;
case 0x6c9c40:c.instructions+=1;goto B6c9c40;
case 0x6c9c42:goto L6c9c42;
case 0x6c9c45:c.instructions+=2;goto B6c9c45;
case 0x6c9c48:c.instructions+=1;goto B6c9c48;
case 0x6c9c4a:goto L6c9c4a;
case 0x6c9c4d:c.instructions+=2;goto B6c9c4d;
case 0x6c9c50:c.instructions+=1;goto B6c9c50;
case 0x6c9c52:goto L6c9c52;
case 0x6c9c55:c.instructions+=2;goto B6c9c55;
case 0x6c9c58:c.instructions+=1;goto B6c9c58;
case 0x6c9c5a:goto L6c9c5a;
case 0x6c9c5d:c.instructions+=2;goto B6c9c5d;
case 0x6c9c60:c.instructions+=1;goto B6c9c60;
case 0x6c9c65:goto L6c9c65;
case 0x6c9c67:goto L6c9c67;
case 0x6c9c6a:c.instructions+=3;goto B6c9c6a;
case 0x6c9c6e:c.instructions+=2;goto B6c9c6e;
case 0x6c9c71:c.instructions+=1;goto B6c9c71;
case 0x6c9c73:goto L6c9c73;
case 0x6c9c76:c.instructions+=1;goto B6c9c76;
case 0x6c9c7c:goto L6c9c7c;
case 0x6c9c7e:c.instructions+=1;goto B6c9c7e;
case 0x6c9c83:goto L6c9c83;
case 0x6c9c85:c.instructions+=1;goto B6c9c85;
case 0x6c9c87:goto L6c9c87;
case 0x6c9c89:c.instructions+=1;goto B6c9c89;
case 0x6c9c8e:goto L6c9c8e;
case 0x6c9c90:c.instructions+=1;goto B6c9c90;
case 0x6c9c92:goto L6c9c92;
case 0x6c9c94:goto L6c9c94;
case 0x6c9c96:c.instructions+=1;goto B6c9c96;
case 0x6c9c9c:goto L6c9c9c;
case 0x6c9c9e:c.instructions+=9;goto B6c9c9e;
case 0x6c9c9f:c.instructions+=8;goto B6c9c9f;
case 0x6c9ca2:c.instructions+=7;goto B6c9ca2;
case 0x6c9ca3:c.instructions+=6;goto B6c9ca3;
case 0x6c9ca5:c.instructions+=5;goto B6c9ca5;
case 0x6c9caa:c.instructions+=4;goto B6c9caa;
case 0x6c9caf:c.instructions+=3;goto B6c9caf;
case 0x6c9cb0:c.instructions+=2;goto B6c9cb0;
case 0x6c9cb2:c.instructions+=1;goto B6c9cb2;
case 0x6c9cb7:goto L6c9cb7;
case 0x6c9cb9:c.instructions+=3;goto B6c9cb9;
case 0x6c9cbc:c.instructions+=2;goto B6c9cbc;
case 0x6c9cbe:c.instructions+=1;goto B6c9cbe;
case 0x6c9cc4:goto L6c9cc4;
case 0x6c9cca:c.instructions+=1;goto B6c9cca;
case 0x6c9ccf:goto L6c9ccf;
case 0x6c9cd1:c.instructions+=2;goto B6c9cd1;
case 0x6c9cd4:c.instructions+=1;goto B6c9cd4;
case 0x6c9cda:goto L6c9cda;
case 0x6c9ce0:c.instructions+=7;goto B6c9ce0;
case 0x6c9ce3:c.instructions+=6;goto B6c9ce3;
case 0x6c9ce5:c.instructions+=5;goto B6c9ce5;
case 0x6c9ce8:c.instructions+=4;goto B6c9ce8;
case 0x6c9ceb:c.instructions+=3;goto B6c9ceb;
case 0x6c9ced:c.instructions+=2;goto B6c9ced;
case 0x6c9cef:c.instructions+=1;goto B6c9cef;
case 0x6c9cf2:goto L6c9cf2;
case 0x6c9cf4:goto L6c9cf4;
case 0x6c9cf6:c.instructions+=1;goto B6c9cf6;
case 0x6c9cf9:goto L6c9cf9;
case 0x6c9cfb:goto L6c9cfb;
case 0x6c9cfe:c.instructions+=3;goto B6c9cfe;
case 0x6c9d00:c.instructions+=2;goto B6c9d00;
case 0x6c9d03:c.instructions+=1;goto B6c9d03;
case 0x6c9d09:goto L6c9d09;
case 0x6c9d0b:goto L6c9d0b;
case 0x6c9d0d:c.instructions+=1;goto B6c9d0d;
case 0x6c9d10:goto L6c9d10;
case 0x6c9d12:goto L6c9d12;
case 0x6c9d15:c.instructions+=4;goto B6c9d15;
case 0x6c9d18:c.instructions+=3;goto B6c9d18;
case 0x6c9d1a:c.instructions+=2;goto B6c9d1a;
case 0x6c9d1c:c.instructions+=1;goto B6c9d1c;
case 0x6c9d1f:goto L6c9d1f;
case 0x6c9d21:goto L6c9d21;
case 0x6c9d23:c.instructions+=2;goto B6c9d23;
case 0x6c9d26:c.instructions+=1;goto B6c9d26;
case 0x6c9d29:goto L6c9d29;
case 0x6c9d2b:goto L6c9d2b;
case 0x6c9d2e:c.instructions+=6;goto B6c9d2e;
case 0x6c9d31:c.instructions+=5;goto B6c9d31;
case 0x6c9d33:c.instructions+=4;goto B6c9d33;
case 0x6c9d35:c.instructions+=3;goto B6c9d35;
case 0x6c9d38:c.instructions+=2;goto B6c9d38;
case 0x6c9d3c:c.instructions+=1;goto B6c9d3c;
case 0x6c9d42:goto L6c9d42;
case 0x6c9d44:goto L6c9d44;
case 0x6c9d46:c.instructions+=1;goto B6c9d46;
case 0x6c9d49:goto L6c9d49;
case 0x6c9d4b:goto L6c9d4b;
case 0x6c9d4e:c.instructions+=14;goto B6c9d4e;
case 0x6c9d51:c.instructions+=13;goto B6c9d51;
case 0x6c9d54:c.instructions+=12;goto B6c9d54;
case 0x6c9d56:c.instructions+=11;goto B6c9d56;
case 0x6c9d59:c.instructions+=10;goto B6c9d59;
case 0x6c9d5c:c.instructions+=9;goto B6c9d5c;
case 0x6c9d5f:c.instructions+=8;goto B6c9d5f;
case 0x6c9d61:c.instructions+=7;goto B6c9d61;
case 0x6c9d64:c.instructions+=6;goto B6c9d64;
case 0x6c9d67:c.instructions+=5;goto B6c9d67;
case 0x6c9d6a:c.instructions+=4;goto B6c9d6a;
case 0x6c9d6d:c.instructions+=3;goto B6c9d6d;
case 0x6c9d70:c.instructions+=2;goto B6c9d70;
case 0x6c9d73:c.instructions+=1;goto B6c9d73;
case 0x6c9d75:goto L6c9d75;
case 0x6c9d78:c.instructions+=2;goto B6c9d78;
case 0x6c9d7b:c.instructions+=1;goto B6c9d7b;
case 0x6c9d7d:goto L6c9d7d;
case 0x6c9d80:goto L6c9d80;
case 0x6c9d83:c.instructions+=1;goto B6c9d83;
case 0x6c9d85:goto L6c9d85;
case 0x6c9d88:c.instructions+=2;goto B6c9d88;
case 0x6c9d8b:c.instructions+=1;goto B6c9d8b;
case 0x6c9d8d:goto L6c9d8d;
case 0x6c9d93:c.instructions+=1;goto B6c9d93;
case 0x6c9d95:goto L6c9d95;
case 0x6c9d99:c.instructions+=1;goto B6c9d99;
case 0x6c9d9b:goto L6c9d9b;
case 0x6c9da2:goto L6c9da2;
case 0x6c9da4:c.instructions+=4;goto B6c9da4;
case 0x6c9da6:c.instructions+=3;goto B6c9da6;
case 0x6c9da7:c.instructions+=2;goto B6c9da7;
case 0x6c9da9:c.instructions+=1;goto B6c9da9;
case 0x6c9dac:goto L6c9dac;
case 0x6c9dae:c.instructions+=1;goto B6c9dae;
case 0x6c9db0:goto L6c9db0;
case 0x6c9db3:c.instructions+=6;goto B6c9db3;
case 0x6c9db6:c.instructions+=5;goto B6c9db6;
case 0x6c9db9:c.instructions+=4;goto B6c9db9;
case 0x6c9dbc:c.instructions+=3;goto B6c9dbc;
case 0x6c9dbe:c.instructions+=2;goto B6c9dbe;
case 0x6c9dc2:c.instructions+=1;goto B6c9dc2;
case 0x6c9dc4:goto L6c9dc4;
case 0x6c9dc7:c.instructions+=1;goto B6c9dc7;
case 0x6c9dc9:goto L6c9dc9;
case 0x6c9dcd:c.instructions+=1;goto B6c9dcd;
case 0x6c9dcf:goto L6c9dcf;
case 0x6c9dd1:c.instructions+=2;goto B6c9dd1;
case 0x6c9dd3:c.instructions+=1;goto B6c9dd3;
case 0x6c9dd8:goto L6c9dd8;
case 0x6c9ddb:c.instructions+=1;goto B6c9ddb;
case 0x6c9dde:goto L6c9dde;
case 0x6c9de1:c.instructions+=4;goto B6c9de1;
case 0x6c9de5:c.instructions+=3;goto B6c9de5;
case 0x6c9de9:c.instructions+=2;goto B6c9de9;
case 0x6c9ded:c.instructions+=1;goto B6c9ded;
case 0x6c9df3:goto L6c9df3;
case 0x6c9df5:c.instructions+=1;goto B6c9df5;
case 0x6c9df6:goto L6c9df6;
case 0x6c9df7:c.instructions+=4;goto B6c9df7;
case 0x6c9df8:c.instructions+=3;goto B6c9df8;
case 0x6c9df9:c.instructions+=2;goto B6c9df9;
case 0x6c9dfa:c.instructions+=1;goto B6c9dfa;
case 0x6c9dfd:goto L6c9dfd;
case 0x6c9e02:c.instructions+=1;goto B6c9e02;
case 0x6c9e04:goto L6c9e04;
case 0x6c9e06:goto L6c9e06;
case 0x6c9e08:c.instructions+=1;goto B6c9e08;
case 0x6c9e0d:goto L6c9e0d;
case 0x6c9e10:c.instructions+=1;goto B6c9e10;
case 0x6c9e12:goto L6c9e12;
case 0x6c9e15:c.instructions+=1;goto B6c9e15;
case 0x6c9e17:goto L6c9e17;
case 0x6c9e1a:c.instructions+=3;goto B6c9e1a;
case 0x6c9e1c:c.instructions+=2;goto B6c9e1c;
case 0x6c9e1f:c.instructions+=1;goto B6c9e1f;
case 0x6c9e21:goto L6c9e21;
case 0x6c9e25:c.instructions+=1;goto B6c9e25;
case 0x6c9e27:goto L6c9e27;
case 0x6c9e2b:c.instructions+=1;goto B6c9e2b;
case 0x6c9e2d:goto L6c9e2d;
case 0x6c9e2f:c.instructions+=2;goto B6c9e2f;
case 0x6c9e31:c.instructions+=1;goto B6c9e31;
case 0x6c9e33:goto L6c9e33;
case 0x6c9e35:c.instructions+=1;goto B6c9e35;
case 0x6c9e37:goto L6c9e37;
case 0x6c9e39:c.instructions+=2;goto B6c9e39;
case 0x6c9e3b:c.instructions+=1;goto B6c9e3b;
case 0x6c9e40:goto L6c9e40;
case 0x6c9e46:c.instructions+=5;goto B6c9e46;
case 0x6c9e4b:c.instructions+=4;goto B6c9e4b;
case 0x6c9e50:c.instructions+=3;goto B6c9e50;
case 0x6c9e53:c.instructions+=2;goto B6c9e53;
case 0x6c9e54:c.instructions+=1;goto B6c9e54;
case 0x6c9e59:goto L6c9e59;
case 0x6c9e5c:c.instructions+=4;goto B6c9e5c;
case 0x6c9e5f:c.instructions+=3;goto B6c9e5f;
case 0x6c9e62:c.instructions+=2;goto B6c9e62;
case 0x6c9e64:c.instructions+=1;goto B6c9e64;
case 0x6c9e66:goto L6c9e66;
case 0x6c9e69:c.instructions+=1;goto B6c9e69;
case 0x6c9e6b:goto L6c9e6b;
case 0x6c9e6d:c.instructions+=2;goto B6c9e6d;
case 0x6c9e70:c.instructions+=1;goto B6c9e70;
case 0x6c9e72:goto L6c9e72;
case 0x6c9e76:c.instructions+=4;goto B6c9e76;
case 0x6c9e77:c.instructions+=3;goto B6c9e77;
case 0x6c9e7a:c.instructions+=2;goto B6c9e7a;
case 0x6c9e7c:c.instructions+=1;goto B6c9e7c;
case 0x6c9e7e:goto L6c9e7e;
case 0x6c9e81:c.instructions+=5;goto B6c9e81;
case 0x6c9e87:c.instructions+=4;goto B6c9e87;
case 0x6c9e89:c.instructions+=3;goto B6c9e89;
case 0x6c9e8c:c.instructions+=2;goto B6c9e8c;
case 0x6c9e8e:c.instructions+=1;goto B6c9e8e;
case 0x6c9e90:goto L6c9e90;
case 0x6c9e92:c.instructions+=1;goto B6c9e92;
case 0x6c9e97:goto L6c9e97;
case 0x6c9e99:c.instructions+=3;goto B6c9e99;
case 0x6c9e9c:c.instructions+=2;goto B6c9e9c;
case 0x6c9e9f:c.instructions+=1;goto B6c9e9f;
case 0x6c9ea1:goto L6c9ea1;
case 0x6c9ea7:c.instructions+=2;goto B6c9ea7;
case 0x6c9ea8:c.instructions+=1;goto B6c9ea8;
case 0x6c9ead:goto L6c9ead;
case 0x6c9eaf:c.instructions+=3;goto B6c9eaf;
case 0x6c9eb1:c.instructions+=2;goto B6c9eb1;
case 0x6c9eb3:c.instructions+=1;goto B6c9eb3;
case 0x6c9eb8:goto L6c9eb8;
case 0x6c9eba:c.instructions+=1;goto B6c9eba;
case 0x6c9ebc:goto L6c9ebc;
case 0x6c9ebe:c.instructions+=1;goto B6c9ebe;
case 0x6c9ec3:goto L6c9ec3;
case 0x6c9ec9:c.instructions+=3;goto B6c9ec9;
case 0x6c9eca:c.instructions+=2;goto B6c9eca;
case 0x6c9ecc:c.instructions+=1;goto B6c9ecc;
case 0x6c9ed1:goto L6c9ed1;
case 0x6c9ed3:c.instructions+=1;goto B6c9ed3;
case 0x6c9ed9:goto L6c9ed9;
case 0x6c9edb:c.instructions+=1;goto B6c9edb;
case 0x6c9ee0:goto L6c9ee0;
case 0x6c9ee2:c.instructions+=9;goto B6c9ee2;
case 0x6c9ee3:c.instructions+=8;goto B6c9ee3;
case 0x6c9ee5:c.instructions+=7;goto B6c9ee5;
case 0x6c9ee8:c.instructions+=6;goto B6c9ee8;
case 0x6c9ee9:c.instructions+=5;goto B6c9ee9;
case 0x6c9eea:c.instructions+=4;goto B6c9eea;
case 0x6c9eed:c.instructions+=3;goto B6c9eed;
case 0x6c9ef0:c.instructions+=2;goto B6c9ef0;
case 0x6c9ef2:c.instructions+=1;goto B6c9ef2;
case 0x6c9ef4:goto L6c9ef4;
case 0x6c9ef9:c.instructions+=1;goto B6c9ef9;
case 0x6c9efe:goto L6c9efe;
case 0x6c9f04:c.instructions+=3;goto B6c9f04;
case 0x6c9f07:c.instructions+=2;goto B6c9f07;
case 0x6c9f08:c.instructions+=1;goto B6c9f08;
case 0x6c9f0e:goto L6c9f0e;
case 0x6c9f11:c.instructions+=8;goto B6c9f11;
case 0x6c9f17:c.instructions+=7;goto B6c9f17;
case 0x6c9f1a:c.instructions+=6;goto B6c9f1a;
case 0x6c9f1d:c.instructions+=5;goto B6c9f1d;
case 0x6c9f1f:c.instructions+=4;goto B6c9f1f;
case 0x6c9f24:c.instructions+=3;goto B6c9f24;
case 0x6c9f29:c.instructions+=2;goto B6c9f29;
case 0x6c9f2c:c.instructions+=1;goto B6c9f2c;
case 0x6c9f32:goto L6c9f32;
case 0x6c9f36:c.instructions+=1;goto B6c9f36;
case 0x6c9f38:goto L6c9f38;
case 0x6c9f3d:c.instructions+=1;goto B6c9f3d;
case 0x6c9f43:goto L6c9f43;
case 0x6c9f48:c.instructions+=1;goto B6c9f48;
case 0x6c9f4e:goto L6c9f4e;
case 0x6c9f53:c.instructions+=1;goto B6c9f53;
case 0x6c9f55:goto L6c9f55;
case 0x6c9f5a:c.instructions+=1;goto B6c9f5a;
case 0x6c9f5c:goto L6c9f5c;
case 0x6c9f61:c.instructions+=1;goto B6c9f61;
case 0x6c9f63:goto L6c9f63;
case 0x6c9f68:c.instructions+=1;goto B6c9f68;
case 0x6c9f6e:goto L6c9f6e;
case 0x6c9f73:c.instructions+=2;goto B6c9f73;
case 0x6c9f7a:c.instructions+=1;goto B6c9f7a;
case 0x6c9f7c:goto L6c9f7c;
case 0x6c9f81:c.instructions+=1;goto B6c9f81;
case 0x6c9f83:goto L6c9f83;
case 0x6c9f87:goto L6c9f87;
case 0x6c9f8b:c.instructions+=2;goto B6c9f8b;
case 0x6c9f8e:c.instructions+=1;goto B6c9f8e;
case 0x6c9f94:goto L6c9f94;
case 0x6c9f97:c.instructions+=6;goto B6c9f97;
case 0x6c9f99:c.instructions+=5;goto B6c9f99;
case 0x6c9f9c:c.instructions+=4;goto B6c9f9c;
case 0x6c9f9f:c.instructions+=3;goto B6c9f9f;
case 0x6c9fa2:c.instructions+=2;goto B6c9fa2;
case 0x6c9fa4:c.instructions+=1;goto B6c9fa4;
case 0x6c9fa7:goto L6c9fa7;
case 0x6c9faa:c.instructions+=2;goto B6c9faa;
case 0x6c9fad:c.instructions+=1;goto B6c9fad;
case 0x6c9faf:goto L6c9faf;
case 0x6c9fb2:c.instructions+=2;goto B6c9fb2;
case 0x6c9fb4:c.instructions+=1;goto B6c9fb4;
case 0x6c9fb6:goto L6c9fb6;
case 0x6c9fbd:goto L6c9fbd;
case 0x6c9fc0:c.instructions+=2;goto B6c9fc0;
case 0x6c9fc3:c.instructions+=1;goto B6c9fc3;
case 0x6c9fc5:goto L6c9fc5;
case 0x6c9fc9:c.instructions+=1;goto B6c9fc9;
case 0x6c9fcf:goto L6c9fcf;
case 0x6c9fd4:c.instructions+=1;goto B6c9fd4;
case 0x6c9fd6:goto L6c9fd6;
case 0x6c9fdb:c.instructions+=1;goto B6c9fdb;
case 0x6c9fdd:goto L6c9fdd;
case 0x6c9fe0:c.instructions+=2;goto B6c9fe0;
case 0x6c9fe6:c.instructions+=1;goto B6c9fe6;
case 0x6c9fe8:goto L6c9fe8;
case 0x6c9feb:c.instructions+=1;goto B6c9feb;
case 0x6c9fee:goto L6c9fee;
case 0x6c9ff4:c.instructions+=4;goto B6c9ff4;
case 0x6c9ff7:c.instructions+=3;goto B6c9ff7;
case 0x6c9ffa:c.instructions+=2;goto B6c9ffa;
case 0x6c9ffd:c.instructions+=1;goto B6c9ffd;
default:missing_instruction(c.pc);}
B6c9002:L6c9002:{c.instructions+=5;NFSU2_TR(0x6c9002);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c9005:{NFSU2_TR(0x6c9005);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9008:{NFSU2_TR(0x6c9008);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c900b:{NFSU2_TR(0x6c900b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c900e:{NFSU2_TR(0x6c900e);
if(r1(R+518)){{goto L6c9019;}}
}
B6c9010:L6c9010:{c.instructions+=3;NFSU2_TR(0x6c9010);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9013:{NFSU2_TR(0x6c9013);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c9016:{NFSU2_TR(0x6c9016);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9019:L6c9019:{c.instructions+=9;NFSU2_TR(0x6c9019);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c901a:{NFSU2_TR(0x6c901a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c901c:{NFSU2_TR(0x6c901c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c901d:{NFSU2_TR(0x6c901d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c9020:{NFSU2_TR(0x6c9020);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c9023:{NFSU2_TR(0x6c9023);
__builtin_memmove((R+4),(R+12),4);
}
B6c9025:{NFSU2_TR(0x6c9025);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c9028:{NFSU2_TR(0x6c9028);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c902b:{NFSU2_TR(0x6c902b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9030ull));
TAIL_STATIC(0x699c39u,699);
}
B6c9030:L6c9030:{c.instructions+=10;NFSU2_TR(0x6c9030);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c9032:{NFSU2_TR(0x6c9032);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9033:{NFSU2_TR(0x6c9033);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9034:{NFSU2_TR(0x6c9034);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c9037:{NFSU2_TR(0x6c9037);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c903a:{NFSU2_TR(0x6c903a);
__builtin_memmove((R+4),(R+12),4);
}
B6c903c:{NFSU2_TR(0x6c903c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c903f:{NFSU2_TR(0x6c903f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9042:{NFSU2_TR(0x6c9042);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c9045:{NFSU2_TR(0x6c9045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c904aull));
TAIL_STATIC(0x699c39u,699);
}
B6c904a:L6c904a:{c.instructions+=4;NFSU2_TR(0x6c904a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c904d:{NFSU2_TR(0x6c904d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9050:{NFSU2_TR(0x6c9050);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c9053:{NFSU2_TR(0x6c9053);
if(r1(R+518)){{goto L6c90ea;}}
}
B6c9059:L6c9059:{c.instructions+=2;NFSU2_TR(0x6c9059);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c905d:{NFSU2_TR(0x6c905d);
if(r1(R+518)){{goto L6c90ea;}}
}
B6c9063:L6c9063:{c.instructions+=37;NFSU2_TR(0x6c9063);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9066:{NFSU2_TR(0x6c9066);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9069:{NFSU2_TR(0x6c9069);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c906c:{NFSU2_TR(0x6c906c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c906f:{NFSU2_TR(0x6c906f);
w4(R+4,u32(0x80000ull));
}
B6c9074:{NFSU2_TR(0x6c9074);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B6c9076:{NFSU2_TR(0x6c9076);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9079:{NFSU2_TR(0x6c9079);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c907c:{NFSU2_TR(0x6c907c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c907f:{NFSU2_TR(0x6c907f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6c9082:{NFSU2_TR(0x6c9082);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c9084:{NFSU2_TR(0x6c9084);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9087:{NFSU2_TR(0x6c9087);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c908a:{NFSU2_TR(0x6c908a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c908d:{NFSU2_TR(0x6c908d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9090:{NFSU2_TR(0x6c9090);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c9093:{NFSU2_TR(0x6c9093);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9096:{NFSU2_TR(0x6c9096);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9099:{NFSU2_TR(0x6c9099);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c909c:{NFSU2_TR(0x6c909c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c909f:{NFSU2_TR(0x6c909f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c90a2:{NFSU2_TR(0x6c90a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c90a5:{NFSU2_TR(0x6c90a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c90a8:{NFSU2_TR(0x6c90a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c90ab:{NFSU2_TR(0x6c90ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c90ae:{NFSU2_TR(0x6c90ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c90b1:{NFSU2_TR(0x6c90b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c90b4:{NFSU2_TR(0x6c90b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c90b7:{NFSU2_TR(0x6c90b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c90ba:{NFSU2_TR(0x6c90ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c90c0:{NFSU2_TR(0x6c90c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c90c3:{NFSU2_TR(0x6c90c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c90c6:{NFSU2_TR(0x6c90c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c90c9:{NFSU2_TR(0x6c90c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c90cb:{NFSU2_TR(0x6c90cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c90cc:{NFSU2_TR(0x6c90cc);
__builtin_memmove((R+4),(R+12),4);
}
B6c90ce:{NFSU2_TR(0x6c90ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c90d1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6c90d1:L6c90d1:{c.instructions+=2;NFSU2_TR(0x6c90d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c90d3:{NFSU2_TR(0x6c90d3);
if(r1(R+518)){{goto L6c90da;}}
}
B6c90d5:L6c90d5:{c.instructions+=3;NFSU2_TR(0x6c90d5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c90d7:{NFSU2_TR(0x6c90d7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c90d8:{NFSU2_TR(0x6c90d8);
{goto L6c90ef;}
}
B6c90da:L6c90da:{c.instructions+=3;NFSU2_TR(0x6c90da);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c90e0:{NFSU2_TR(0x6c90e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c90e1:{NFSU2_TR(0x6c90e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c90e6ull));
TAIL_STATIC(0x6995c1u,699);
}
B6c90e6:L6c90e6:{c.instructions+=2;NFSU2_TR(0x6c90e6);
__builtin_memmove((R+28),(R+0),4);
}
B6c90e8:{NFSU2_TR(0x6c90e8);
{goto L6c90ef;}
}
B6c90ea:L6c90ea:{c.instructions+=1;NFSU2_TR(0x6c90ea);
w4(R+28,u32(0x8007000eull));
}
B6c90ef:L6c90ef:{c.instructions+=3;NFSU2_TR(0x6c90ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c90f2:{NFSU2_TR(0x6c90f2);
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
B6c90f4:{NFSU2_TR(0x6c90f4);
if(r1(R+518)){{goto L6c90fd;}}
}
B6c90f6:L6c90f6:{c.instructions+=2;NFSU2_TR(0x6c90f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c90f8:{NFSU2_TR(0x6c90f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c90fdull));
TAIL_STATIC(0x6739efu,673);
}
B6c90fd:L6c90fd:{c.instructions+=6;NFSU2_TR(0x6c90fd);
__builtin_memmove((R+0),(R+28),4);
}
B6c90ff:{NFSU2_TR(0x6c90ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c9100:{NFSU2_TR(0x6c9100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c9101:{NFSU2_TR(0x6c9101);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c9102:{NFSU2_TR(0x6c9102);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c9103:{NFSU2_TR(0x6c9103);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c9104:L6c9104:{c.instructions+=6;NFSU2_TR(0x6c9104);
__builtin_memmove((R+28),(R+28),4);
}
B6c9106:{NFSU2_TR(0x6c9106);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9107:{NFSU2_TR(0x6c9107);
__builtin_memmove((R+24),(R+4),4);
}
B6c9109:{NFSU2_TR(0x6c9109);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c910f:{NFSU2_TR(0x6c910f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x50000002ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c9115:{NFSU2_TR(0x6c9115);
if(r1(R+518)){{goto L6c911c;}}
}
B6c9117:L6c9117:{c.instructions+=4;NFSU2_TR(0x6c9117);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c9119:{NFSU2_TR(0x6c9119);
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
B6c911a:{NFSU2_TR(0x6c911a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c911b:{NFSU2_TR(0x6c911b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c911c:L6c911c:{c.instructions+=3;NFSU2_TR(0x6c911c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c911d:{NFSU2_TR(0x6c911d);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c911f:{NFSU2_TR(0x6c911f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9124ull));
TAIL_STATIC(0x699317u,699);
}
B6c9124:L6c9124:{c.instructions+=2;NFSU2_TR(0x6c9124);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9126:{NFSU2_TR(0x6c9126);
if(r1(R+518)){{goto L6c9133;}}
}
B6c9128:L6c9128:{c.instructions+=2;NFSU2_TR(0x6c9128);
__builtin_memmove((R+4),(R+0),4);
}
B6c912a:{NFSU2_TR(0x6c912a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c912full));
TAIL_STATIC(0x698e7du,698);
}
B6c912f:L6c912f:{c.instructions+=2;NFSU2_TR(0x6c912f);
__builtin_memmove((R+28),(R+0),4);
}
B6c9131:{NFSU2_TR(0x6c9131);
{goto L6c9135;}
}
B6c9133:L6c9133:{c.instructions+=1;NFSU2_TR(0x6c9133);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c9135:L6c9135:{c.instructions+=3;NFSU2_TR(0x6c9135);
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
B6c9137:{NFSU2_TR(0x6c9137);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9138:{NFSU2_TR(0x6c9138);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9144;}}
}
B6c913a:L6c913a:{c.instructions+=2;NFSU2_TR(0x6c913a);
w4(R+12,u32(0x8007000eull));
}
B6c913f:{NFSU2_TR(0x6c913f);
{goto L6c91f4;}
}
B6c9144:L6c9144:{c.instructions+=6;NFSU2_TR(0x6c9144);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9146:{NFSU2_TR(0x6c9146);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9148:{NFSU2_TR(0x6c9148);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c914a:{NFSU2_TR(0x6c914a);
u8 U[4];
w4(U+0,u32(0x70800002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c914f:{NFSU2_TR(0x6c914f);
__builtin_memmove((R+4),(R+28),4);
}
B6c9151:{NFSU2_TR(0x6c9151);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9156ull));
TAIL_STATIC(0x699362u,699);
}
B6c9156:L6c9156:{c.instructions+=3;NFSU2_TR(0x6c9156);
__builtin_memmove((R+12),(R+0),4);
}
B6c9158:{NFSU2_TR(0x6c9158);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c915a:{NFSU2_TR(0x6c915a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c91eb;}}
}
B6c9160:L6c9160:{c.instructions+=3;NFSU2_TR(0x6c9160);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c9166:{NFSU2_TR(0x6c9166);
__builtin_memmove((R+4),(R+28),4);
}
B6c9168:{NFSU2_TR(0x6c9168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c916dull));
TAIL_STATIC(0x698eb3u,698);
}
B6c916d:L6c916d:{c.instructions+=3;NFSU2_TR(0x6c916d);
__builtin_memmove((R+12),(R+0),4);
}
B6c916f:{NFSU2_TR(0x6c916f);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c9171:{NFSU2_TR(0x6c9171);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c91eb;}}
}
B6c9173:L6c9173:{c.instructions+=6;NFSU2_TR(0x6c9173);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9179:{NFSU2_TR(0x6c9179);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c917c:{NFSU2_TR(0x6c917c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c917e:{NFSU2_TR(0x6c917e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9181:{NFSU2_TR(0x6c9181);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c9183:{NFSU2_TR(0x6c9183);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c9185:L6c9185:{c.instructions+=8;NFSU2_TR(0x6c9185);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c918b:{NFSU2_TR(0x6c918b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c918e:{NFSU2_TR(0x6c918e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c9191:{NFSU2_TR(0x6c9191);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9194:{NFSU2_TR(0x6c9194);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c9197:{NFSU2_TR(0x6c9197);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c919a:{NFSU2_TR(0x6c919a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6c919d:{NFSU2_TR(0x6c919d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9185u);}goto L6c9185;}}
}
B6c919f:L6c919f:{c.instructions+=9;NFSU2_TR(0x6c919f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c91a0:{NFSU2_TR(0x6c91a0);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c91a2:{NFSU2_TR(0x6c91a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c91a3:{NFSU2_TR(0x6c91a3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c91a6:{NFSU2_TR(0x6c91a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c91a8:{NFSU2_TR(0x6c91a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c91aa:{NFSU2_TR(0x6c91aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c91ad:{NFSU2_TR(0x6c91ad);
__builtin_memmove((R+4),(R+24),4);
}
B6c91af:{NFSU2_TR(0x6c91af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c91b4ull));
TAIL_STATIC(0x699c39u,699);
}
B6c91b4:L6c91b4:{c.instructions+=2;NFSU2_TR(0x6c91b4);
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
B6c91b7:{NFSU2_TR(0x6c91b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c91c0;}}
}
B6c91b9:L6c91b9:{c.instructions+=2;NFSU2_TR(0x6c91b9);
w4(R+0,u32(0x8007000eull));
}
B6c91be:{NFSU2_TR(0x6c91be);
{goto L6c91f6;}
}
B6c91c0:L6c91c0:{c.instructions+=8;NFSU2_TR(0x6c91c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c91c3:{NFSU2_TR(0x6c91c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c91c6:{NFSU2_TR(0x6c91c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c91c9:{NFSU2_TR(0x6c91c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c91cc:{NFSU2_TR(0x6c91cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c91ce:{NFSU2_TR(0x6c91ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c91cf:{NFSU2_TR(0x6c91cf);
__builtin_memmove((R+4),(R+24),4);
}
B6c91d1:{NFSU2_TR(0x6c91d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c91d4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6c91d4:L6c91d4:{c.instructions+=2;NFSU2_TR(0x6c91d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c91d6:{NFSU2_TR(0x6c91d6);
if(r1(R+518)){{goto L6c91dd;}}
}
B6c91d8:L6c91d8:{c.instructions+=3;NFSU2_TR(0x6c91d8);
w1(R+512,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c91da:{NFSU2_TR(0x6c91da);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c91db:{NFSU2_TR(0x6c91db);
{goto L6c91eb;}
}
B6c91dd:L6c91dd:{c.instructions+=3;NFSU2_TR(0x6c91dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c91e3:{NFSU2_TR(0x6c91e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c91e4:{NFSU2_TR(0x6c91e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c91e9ull));
TAIL_STATIC(0x6995c1u,699);
}
B6c91e9:L6c91e9:{c.instructions+=1;NFSU2_TR(0x6c91e9);
__builtin_memmove((R+12),(R+0),4);
}
B6c91eb:L6c91eb:{c.instructions+=3;NFSU2_TR(0x6c91eb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c91ed:{NFSU2_TR(0x6c91ed);
__builtin_memmove((R+4),(R+28),4);
}
B6c91ef:{NFSU2_TR(0x6c91ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c91f4ull));
TAIL_STATIC(0x6739efu,673);
}
B6c91f4:L6c91f4:{c.instructions+=1;NFSU2_TR(0x6c91f4);
__builtin_memmove((R+0),(R+12),4);
}
B6c91f6:L6c91f6:{c.instructions+=4;NFSU2_TR(0x6c91f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c91f7:{NFSU2_TR(0x6c91f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c91f8:{NFSU2_TR(0x6c91f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c91f9:{NFSU2_TR(0x6c91f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c91fa:L6c91fa:{c.instructions+=13;NFSU2_TR(0x6c91fa);
__builtin_memmove((R+28),(R+28),4);
}
B6c91fc:{NFSU2_TR(0x6c91fc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c91fd:{NFSU2_TR(0x6c91fd);
__builtin_memmove((R+20),(R+16),4);
}
B6c91ff:{NFSU2_TR(0x6c91ff);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c9202:{NFSU2_TR(0x6c9202);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9203:{NFSU2_TR(0x6c9203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c9206:{NFSU2_TR(0x6c9206);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9207:{NFSU2_TR(0x6c9207);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9208:{NFSU2_TR(0x6c9208);
__builtin_memmove((R+24),(R+4),4);
}
B6c920a:{NFSU2_TR(0x6c920a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c920c:{NFSU2_TR(0x6c920c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c920e:{NFSU2_TR(0x6c920e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c920f:{NFSU2_TR(0x6c920f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9212ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6c9212:L6c9212:{c.instructions+=2;NFSU2_TR(0x6c9212);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9214:{NFSU2_TR(0x6c9214);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c936b;}}
}
B6c921a:L6c921a:{c.instructions+=5;NFSU2_TR(0x6c921a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c921d:{NFSU2_TR(0x6c921d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9220:{NFSU2_TR(0x6c9220);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9224:{NFSU2_TR(0x6c9224);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9226:{NFSU2_TR(0x6c9226);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c9254;}}
}
B6c9228:L6c9228:{c.instructions+=3;NFSU2_TR(0x6c9228);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c922b:{NFSU2_TR(0x6c922b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c922e:{NFSU2_TR(0x6c922e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9231:L6c9231:{c.instructions+=5;NFSU2_TR(0x6c9231);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c9233:{NFSU2_TR(0x6c9233);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c9236:{NFSU2_TR(0x6c9236);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9239:{NFSU2_TR(0x6c9239);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6c923c:{NFSU2_TR(0x6c923c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c9241;}}
}
B6c923e:L6c923e:{c.instructions+=1;NFSU2_TR(0x6c923e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9241:L6c9241:{c.instructions+=3;NFSU2_TR(0x6c9241);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9244:{NFSU2_TR(0x6c9244);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9247:{NFSU2_TR(0x6c9247);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c924c;}}
}
B6c9249:L6c9249:{c.instructions+=1;NFSU2_TR(0x6c9249);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c924c:L6c924c:{c.instructions+=3;NFSU2_TR(0x6c924c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c924f:{NFSU2_TR(0x6c924f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c9252:{NFSU2_TR(0x6c9252);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9231u);}goto L6c9231;}}
}
B6c9254:L6c9254:{c.instructions+=3;NFSU2_TR(0x6c9254);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9257:{NFSU2_TR(0x6c9257);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9259:{NFSU2_TR(0x6c9259);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c9329;}}
}
B6c925f:L6c925f:{c.instructions+=3;NFSU2_TR(0x6c925f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9262:{NFSU2_TR(0x6c9262);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9265:{NFSU2_TR(0x6c9265);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9268:L6c9268:{c.instructions+=9;NFSU2_TR(0x6c9268);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c926b:{NFSU2_TR(0x6c926b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c926d:{NFSU2_TR(0x6c926d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9270:{NFSU2_TR(0x6c9270);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c9273:{NFSU2_TR(0x6c9273);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9276:{NFSU2_TR(0x6c9276);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9279:{NFSU2_TR(0x6c9279);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c927c:{NFSU2_TR(0x6c927c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c9280:{NFSU2_TR(0x6c9280);
if(r1(R+518)){{goto L6c931c;}}
}
B6c9286:L6c9286:{c.instructions+=3;NFSU2_TR(0x6c9286);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9289:{NFSU2_TR(0x6c9289);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c928c:{NFSU2_TR(0x6c928c);
if(r1(R+518)){{goto L6c931c;}}
}
B6c9292:L6c9292:{c.instructions+=3;NFSU2_TR(0x6c9292);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c9293:{NFSU2_TR(0x6c9293);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6c9296:{NFSU2_TR(0x6c9296);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c930b;}}
}
B6c9298:L6c9298:{c.instructions+=2;NFSU2_TR(0x6c9298);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c929b:{NFSU2_TR(0x6c929b);
{goto L6c930b;}
}
B6c929d:L6c929d:{c.instructions+=2;NFSU2_TR(0x6c929d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c92a0:{NFSU2_TR(0x6c92a0);
if(r1(R+518)){{goto L6c9315;}}
}
B6c92a2:L6c92a2:{c.instructions+=3;NFSU2_TR(0x6c92a2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c92a4:{NFSU2_TR(0x6c92a4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c92a7:{NFSU2_TR(0x6c92a7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c9315;}}
}
B6c92a9:L6c92a9:{c.instructions+=2;NFSU2_TR(0x6c92a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c92ac:{NFSU2_TR(0x6c92ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c92af:L6c92af:{c.instructions+=3;NFSU2_TR(0x6c92af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c92b2:{NFSU2_TR(0x6c92b2);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6c92b5:{NFSU2_TR(0x6c92b5);
if(r1(R+518)){{goto L6c92bd;}}
}
B6c92b7:L6c92b7:{c.instructions+=3;NFSU2_TR(0x6c92b7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c92b8:{NFSU2_TR(0x6c92b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c92bb:{NFSU2_TR(0x6c92bb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c92afu);}goto L6c92af;}}
}
B6c92bd:L6c92bd:{c.instructions+=2;NFSU2_TR(0x6c92bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c92c0:{NFSU2_TR(0x6c92c0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c9315;}}
}
B6c92c2:L6c92c2:{c.instructions+=4;NFSU2_TR(0x6c92c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c92c5:{NFSU2_TR(0x6c92c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c92c9:{NFSU2_TR(0x6c92c9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c92cd:{NFSU2_TR(0x6c92cd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c92f7;}}
}
B6c92cf:L6c92cf:{c.instructions+=2;NFSU2_TR(0x6c92cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c92d2:{NFSU2_TR(0x6c92d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c92d5:L6c92d5:{c.instructions+=7;NFSU2_TR(0x6c92d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c92d8:{NFSU2_TR(0x6c92d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c92da:{NFSU2_TR(0x6c92da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c92dd:{NFSU2_TR(0x6c92dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c92e0:{NFSU2_TR(0x6c92e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c92e3:{NFSU2_TR(0x6c92e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c92e6:{NFSU2_TR(0x6c92e6);
if(r1(R+518)){{goto L6c92f7;}}
}
B6c92e8:L6c92e8:{c.instructions+=5;NFSU2_TR(0x6c92e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c92eb:{NFSU2_TR(0x6c92eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c92ee:{NFSU2_TR(0x6c92ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c92f2:{NFSU2_TR(0x6c92f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c92f5:{NFSU2_TR(0x6c92f5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c92d5u);}goto L6c92d5;}}
}
B6c92f7:L6c92f7:{c.instructions+=3;NFSU2_TR(0x6c92f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c92fa:{NFSU2_TR(0x6c92fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c92fd:{NFSU2_TR(0x6c92fd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c9315;}}
}
B6c92ff:L6c92ff:{c.instructions+=4;NFSU2_TR(0x6c92ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9302:{NFSU2_TR(0x6c9302);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c9305:{NFSU2_TR(0x6c9305);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9308:{NFSU2_TR(0x6c9308);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c930b:L6c930b:{c.instructions+=3;NFSU2_TR(0x6c930b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c930e:{NFSU2_TR(0x6c930e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6c9311:{NFSU2_TR(0x6c9311);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c929du);}goto L6c929d;}}
}
B6c9313:L6c9313:{c.instructions+=1;NFSU2_TR(0x6c9313);
{goto L6c931c;}
}
B6c9315:L6c9315:{c.instructions+=3;NFSU2_TR(0x6c9315);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9318:{NFSU2_TR(0x6c9318);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6c9319:{NFSU2_TR(0x6c9319);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c931c:L6c931c:{c.instructions+=3;NFSU2_TR(0x6c931c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9320:{NFSU2_TR(0x6c9320);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c9323:{NFSU2_TR(0x6c9323);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9268u);}goto L6c9268;}}
}
B6c9329:L6c9329:{c.instructions+=3;NFSU2_TR(0x6c9329);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c932b:{NFSU2_TR(0x6c932b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c932e:{NFSU2_TR(0x6c932e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c9356;}}
}
B6c9330:L6c9330:{c.instructions+=1;NFSU2_TR(0x6c9330);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9333:L6c9333:{c.instructions+=8;NFSU2_TR(0x6c9333);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9336:{NFSU2_TR(0x6c9336);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c9339:{NFSU2_TR(0x6c9339);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c933c:{NFSU2_TR(0x6c933c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c933e:{NFSU2_TR(0x6c933e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c9341:{NFSU2_TR(0x6c9341);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c9344:{NFSU2_TR(0x6c9344);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c9347:{NFSU2_TR(0x6c9347);
if(r1(R+512)){{goto L6c934e;}}
}
B6c9349:L6c9349:{c.instructions+=2;NFSU2_TR(0x6c9349);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c934c:{NFSU2_TR(0x6c934c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c9359;}}
}
B6c934e:L6c934e:{c.instructions+=3;NFSU2_TR(0x6c934e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c934f:{NFSU2_TR(0x6c934f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c9352:{NFSU2_TR(0x6c9352);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9333u);}goto L6c9333;}}
}
B6c9354:L6c9354:{c.instructions+=1;NFSU2_TR(0x6c9354);
{goto L6c9359;}
}
B6c9356:L6c9356:{c.instructions+=1;NFSU2_TR(0x6c9356);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c9359:L6c9359:{c.instructions+=2;NFSU2_TR(0x6c9359);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c935c:{NFSU2_TR(0x6c935c);
if(r1(R+518)){{goto L6c936b;}}
}
B6c935e:L6c935e:{c.instructions+=5;NFSU2_TR(0x6c935e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c9360:{NFSU2_TR(0x6c9360);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9361:{NFSU2_TR(0x6c9361);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9362:{NFSU2_TR(0x6c9362);
__builtin_memmove((R+4),(R+24),4);
}
B6c9364:{NFSU2_TR(0x6c9364);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9367ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6c9367:L6c9367:{c.instructions+=2;NFSU2_TR(0x6c9367);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9369:{NFSU2_TR(0x6c9369);
if(r1(R+518)){{goto L6c937d;}}
}
B6c936b:L6c936b:{c.instructions+=2;NFSU2_TR(0x6c936b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c936d:{NFSU2_TR(0x6c936d);
if(r1(R+518)){{goto L6c9378;}}
}
B6c936f:L6c936f:{c.instructions+=3;NFSU2_TR(0x6c936f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9371:{NFSU2_TR(0x6c9371);
__builtin_memmove((R+4),(R+12),4);
}
B6c9373:{NFSU2_TR(0x6c9373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9378ull));
TAIL_STATIC(0x6739efu,673);
}
B6c9378:L6c9378:{c.instructions+=3;NFSU2_TR(0x6c9378);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c937a:{NFSU2_TR(0x6c937a);
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
B6c937b:{NFSU2_TR(0x6c937b);
{goto L6c93c8;}
}
B6c937d:L6c937d:{c.instructions+=3;NFSU2_TR(0x6c937d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c937f:{NFSU2_TR(0x6c937f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9382:{NFSU2_TR(0x6c9382);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c9393;}}
}
B6c9384:L6c9384:{c.instructions+=6;NFSU2_TR(0x6c9384);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9387:{NFSU2_TR(0x6c9387);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c938a:{NFSU2_TR(0x6c938a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6c938d:{NFSU2_TR(0x6c938d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c938e:{NFSU2_TR(0x6c938e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c9391:{NFSU2_TR(0x6c9391);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9384u);}goto L6c9384;}}
}
B6c9393:L6c9393:{c.instructions+=4;NFSU2_TR(0x6c9393);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9396:{NFSU2_TR(0x6c9396);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c9399:{NFSU2_TR(0x6c9399);
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
B6c939b:{NFSU2_TR(0x6c939b);
if(r1(R+518)){{goto L6c93a4;}}
}
B6c939d:L6c939d:{c.instructions+=2;NFSU2_TR(0x6c939d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c939f:{NFSU2_TR(0x6c939f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c93a4ull));
TAIL_STATIC(0x6739efu,673);
}
B6c93a4:L6c93a4:{c.instructions+=5;NFSU2_TR(0x6c93a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c93a7:{NFSU2_TR(0x6c93a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c93aa:{NFSU2_TR(0x6c93aa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c93ac:{NFSU2_TR(0x6c93ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c93af:{NFSU2_TR(0x6c93af);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c93c6;}}
}
B6c93b1:L6c93b1:{c.instructions+=8;NFSU2_TR(0x6c93b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c93b4:{NFSU2_TR(0x6c93b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c93b7:{NFSU2_TR(0x6c93b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c93ba:{NFSU2_TR(0x6c93ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c93bd:{NFSU2_TR(0x6c93bd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c93be:{NFSU2_TR(0x6c93be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c93c1:{NFSU2_TR(0x6c93c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c93c4:{NFSU2_TR(0x6c93c4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c93b1u);}goto L6c93b1;}}
}
B6c93c6:L6c93c6:{c.instructions+=1;NFSU2_TR(0x6c93c6);
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
B6c93c8:L6c93c8:{c.instructions+=5;NFSU2_TR(0x6c93c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c93c9:{NFSU2_TR(0x6c93c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c93ca:{NFSU2_TR(0x6c93ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c93cb:{NFSU2_TR(0x6c93cb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c93cc:{NFSU2_TR(0x6c93cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c93cf:L6c93cf:{c.instructions+=12;NFSU2_TR(0x6c93cf);
__builtin_memmove((R+28),(R+28),4);
}
B6c93d1:{NFSU2_TR(0x6c93d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c93d2:{NFSU2_TR(0x6c93d2);
__builtin_memmove((R+20),(R+16),4);
}
B6c93d4:{NFSU2_TR(0x6c93d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6c93d7:{NFSU2_TR(0x6c93d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c93dd:{NFSU2_TR(0x6c93dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c93df:{NFSU2_TR(0x6c93df);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6c93e4:{NFSU2_TR(0x6c93e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c93e5:{NFSU2_TR(0x6c93e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c93e6:{NFSU2_TR(0x6c93e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c93e7:{NFSU2_TR(0x6c93e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c93ee:{NFSU2_TR(0x6c93ee);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c945f;}}
}
B6c93f0:L6c93f0:{c.instructions+=6;NFSU2_TR(0x6c93f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c93f6:{NFSU2_TR(0x6c93f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c93f9:{NFSU2_TR(0x6c93f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c93fc:{NFSU2_TR(0x6c93fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c93ff:{NFSU2_TR(0x6c93ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6c9402:{NFSU2_TR(0x6c9402);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9405:L6c9405:{c.instructions+=9;NFSU2_TR(0x6c9405);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9408:{NFSU2_TR(0x6c9408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c940a:{NFSU2_TR(0x6c940a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c940d:{NFSU2_TR(0x6c940d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c9410:{NFSU2_TR(0x6c9410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c9412:{NFSU2_TR(0x6c9412);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c9415:{NFSU2_TR(0x6c9415);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c9418:{NFSU2_TR(0x6c9418);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c941b:{NFSU2_TR(0x6c941b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c94bd;}}
}
B6c9421:L6c9421:{c.instructions+=3;NFSU2_TR(0x6c9421);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c9424:{NFSU2_TR(0x6c9424);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9427:{NFSU2_TR(0x6c9427);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c94bd;}}
}
B6c942d:L6c942d:{c.instructions+=3;NFSU2_TR(0x6c942d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c9430:{NFSU2_TR(0x6c9430);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9433:{NFSU2_TR(0x6c9433);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c94bd;}}
}
B6c9439:L6c9439:{c.instructions+=3;NFSU2_TR(0x6c9439);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c943c:{NFSU2_TR(0x6c943c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c943f:{NFSU2_TR(0x6c943f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c94bd;}}
}
B6c9441:L6c9441:{c.instructions+=4;NFSU2_TR(0x6c9441);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9444:{NFSU2_TR(0x6c9444);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(U+4))));
}
B6c9447:{NFSU2_TR(0x6c9447);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c944d:{NFSU2_TR(0x6c944d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c94bd;}}
}
B6c944f:L6c944f:{c.instructions+=5;NFSU2_TR(0x6c944f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9452:{NFSU2_TR(0x6c9452);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9456:{NFSU2_TR(0x6c9456);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c945a:{NFSU2_TR(0x6c945a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6c945d:{NFSU2_TR(0x6c945d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9405u);}goto L6c9405;}}
}
B6c945f:L6c945f:{c.instructions+=9;NFSU2_TR(0x6c945f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9465:{NFSU2_TR(0x6c9465);
__builtin_memmove((R+8),(R+0),4);
}
B6c9467:{NFSU2_TR(0x6c9467);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B6c946d:{NFSU2_TR(0x6c946d);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x70000000ull))));
}
B6c9473:{NFSU2_TR(0x6c9473);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9475:{NFSU2_TR(0x6c9475);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6c9477:{NFSU2_TR(0x6c9477);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c947d:{NFSU2_TR(0x6c947d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9480:{NFSU2_TR(0x6c9480);
if(r1(R+518)){{goto L6c94b6;}}
}
B6c9482:L6c9482:{c.instructions+=7;NFSU2_TR(0x6c9482);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9488:{NFSU2_TR(0x6c9488);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c948b:{NFSU2_TR(0x6c948b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c948d:{NFSU2_TR(0x6c948d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9490:{NFSU2_TR(0x6c9490);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c9493:{NFSU2_TR(0x6c9493);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c9497:{NFSU2_TR(0x6c9497);
if(r1(R+518)){{goto L6c94b6;}}
}
B6c9499:L6c9499:{c.instructions+=6;NFSU2_TR(0x6c9499);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c949f:{NFSU2_TR(0x6c949f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c94a2:{NFSU2_TR(0x6c94a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c94a5:{NFSU2_TR(0x6c94a5);
__builtin_memmove((R+4),(R+0),4);
}
B6c94a7:{NFSU2_TR(0x6c94a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c94aa:{NFSU2_TR(0x6c94aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6c94ad:L6c94ad:{c.instructions+=1;NFSU2_TR(0x6c94ad);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c94af;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c94adu);}goto L6c94ad;}
}
B6c94af:L6c94af:{c.instructions+=2;NFSU2_TR(0x6c94af);
__builtin_memmove((R+4),(R+0),4);
}
B6c94b1:{NFSU2_TR(0x6c94b1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c94b4:L6c94b4:{c.instructions+=1;NFSU2_TR(0x6c94b4);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c94b6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c94b4u);}goto L6c94b4;}
}
B6c94b6:L6c94b6:{c.instructions+=1;NFSU2_TR(0x6c94b6);
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
B6c94b8:L6c94b8:{c.instructions+=5;NFSU2_TR(0x6c94b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c94b9:{NFSU2_TR(0x6c94b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c94ba:{NFSU2_TR(0x6c94ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c94bb:{NFSU2_TR(0x6c94bb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c94bc:{NFSU2_TR(0x6c94bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c94bd:L6c94bd:{c.instructions+=3;NFSU2_TR(0x6c94bd);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c94bf:{NFSU2_TR(0x6c94bf);
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
B6c94c0:{NFSU2_TR(0x6c94c0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c94b8u);}goto L6c94b8;}
}
B6c94c2:L6c94c2:{c.instructions+=13;NFSU2_TR(0x6c94c2);
__builtin_memmove((R+28),(R+28),4);
}
B6c94c4:{NFSU2_TR(0x6c94c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c94c5:{NFSU2_TR(0x6c94c5);
__builtin_memmove((R+20),(R+16),4);
}
B6c94c7:{NFSU2_TR(0x6c94c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B6c94ca:{NFSU2_TR(0x6c94ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c94d0:{NFSU2_TR(0x6c94d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c94d2:{NFSU2_TR(0x6c94d2);
w1(R+512,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6c94d8:{NFSU2_TR(0x6c94d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c94d9:{NFSU2_TR(0x6c94d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c94da:{NFSU2_TR(0x6c94da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c94db:{NFSU2_TR(0x6c94db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c94de:{NFSU2_TR(0x6c94de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c94e5:{NFSU2_TR(0x6c94e5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c956b;}}
}
B6c94eb:L6c94eb:{c.instructions+=6;NFSU2_TR(0x6c94eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c94ee:{NFSU2_TR(0x6c94ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c94f1:{NFSU2_TR(0x6c94f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c94f4:{NFSU2_TR(0x6c94f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c94f7:{NFSU2_TR(0x6c94f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c94fa:{NFSU2_TR(0x6c94fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c94fd:L6c94fd:{c.instructions+=13;NFSU2_TR(0x6c94fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9500:{NFSU2_TR(0x6c9500);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c9503:{NFSU2_TR(0x6c9503);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9506:{NFSU2_TR(0x6c9506);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c9509:{NFSU2_TR(0x6c9509);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c950c:{NFSU2_TR(0x6c950c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c950f:{NFSU2_TR(0x6c950f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c9512:{NFSU2_TR(0x6c9512);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6c9514:{NFSU2_TR(0x6c9514);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c9517:{NFSU2_TR(0x6c9517);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c951a:{NFSU2_TR(0x6c951a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c951d:{NFSU2_TR(0x6c951d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c951f:{NFSU2_TR(0x6c951f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c958f;}}
}
B6c9521:L6c9521:{c.instructions+=7;NFSU2_TR(0x6c9521);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9524:{NFSU2_TR(0x6c9524);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c952a:{NFSU2_TR(0x6c952a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c952d:{NFSU2_TR(0x6c952d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9530:{NFSU2_TR(0x6c9530);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c9533:{NFSU2_TR(0x6c9533);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+0))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6c9536:{NFSU2_TR(0x6c9536);
if(r1(R+518)){{goto L6c9545;}}
}
B6c9538:L6c9538:{c.instructions+=2;NFSU2_TR(0x6c9538);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c953b:{NFSU2_TR(0x6c953b);
if(r1(R+518)){{goto L6c958f;}}
}
B6c953d:L6c953d:{c.instructions+=3;NFSU2_TR(0x6c953d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9540:{NFSU2_TR(0x6c9540);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9543:{NFSU2_TR(0x6c9543);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c958f;}}
}
B6c9545:L6c9545:{c.instructions+=6;NFSU2_TR(0x6c9545);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9548:{NFSU2_TR(0x6c9548);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c954b:{NFSU2_TR(0x6c954b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c954e:{NFSU2_TR(0x6c954e);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0x80000ull))));
}
B6c9553:{NFSU2_TR(0x6c9553);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9556:{NFSU2_TR(0x6c9556);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c958f;}}
}
B6c9558:L6c9558:{c.instructions+=6;NFSU2_TR(0x6c9558);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c955b:{NFSU2_TR(0x6c955b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c955f:{NFSU2_TR(0x6c955f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9563:{NFSU2_TR(0x6c9563);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6c9566:{NFSU2_TR(0x6c9566);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9569:{NFSU2_TR(0x6c9569);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c94fdu);}goto L6c94fd;}}
}
B6c956b:L6c956b:{c.instructions+=8;NFSU2_TR(0x6c956b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9571:{NFSU2_TR(0x6c9571);
__builtin_memmove((R+0),(R+8),4);
}
B6c9573:{NFSU2_TR(0x6c9573);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c9578:{NFSU2_TR(0x6c9578);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70000000ull))));
}
B6c957d:{NFSU2_TR(0x6c957d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6c957f:{NFSU2_TR(0x6c957f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9585:{NFSU2_TR(0x6c9585);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9588:{NFSU2_TR(0x6c9588);
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
B6c958a:L6c958a:{c.instructions+=5;NFSU2_TR(0x6c958a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c958b:{NFSU2_TR(0x6c958b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c958c:{NFSU2_TR(0x6c958c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c958d:{NFSU2_TR(0x6c958d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c958e:{NFSU2_TR(0x6c958e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c958f:L6c958f:{c.instructions+=3;NFSU2_TR(0x6c958f);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c9591:{NFSU2_TR(0x6c9591);
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
B6c9592:{NFSU2_TR(0x6c9592);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c958au);}goto L6c958a;}
}
B6c9594:L6c9594:{c.instructions+=13;NFSU2_TR(0x6c9594);
__builtin_memmove((R+28),(R+28),4);
}
B6c9596:{NFSU2_TR(0x6c9596);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9597:{NFSU2_TR(0x6c9597);
__builtin_memmove((R+20),(R+16),4);
}
B6c9599:{NFSU2_TR(0x6c9599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B6c959c:{NFSU2_TR(0x6c959c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c95a2:{NFSU2_TR(0x6c95a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c95a4:{NFSU2_TR(0x6c95a4);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6c95a9:{NFSU2_TR(0x6c95a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c95aa:{NFSU2_TR(0x6c95aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c95ab:{NFSU2_TR(0x6c95ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c95ac:{NFSU2_TR(0x6c95ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c95af:{NFSU2_TR(0x6c95af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c95b6:{NFSU2_TR(0x6c95b6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c968b;}}
}
B6c95bc:L6c95bc:{c.instructions+=8;NFSU2_TR(0x6c95bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c95bf:{NFSU2_TR(0x6c95bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c95c5:{NFSU2_TR(0x6c95c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c95c8:{NFSU2_TR(0x6c95c8);
__builtin_memmove((R+4),(R+0),4);
}
B6c95ca:{NFSU2_TR(0x6c95ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c95cd:{NFSU2_TR(0x6c95cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c95d0:{NFSU2_TR(0x6c95d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6c95d3:{NFSU2_TR(0x6c95d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c95d6:L6c95d6:{c.instructions+=14;NFSU2_TR(0x6c95d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c95d9:{NFSU2_TR(0x6c95d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c95dc:{NFSU2_TR(0x6c95dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c95df:{NFSU2_TR(0x6c95df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c95e2:{NFSU2_TR(0x6c95e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c95e5:{NFSU2_TR(0x6c95e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c95e7:{NFSU2_TR(0x6c95e7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c95e9:{NFSU2_TR(0x6c95e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c95ec:{NFSU2_TR(0x6c95ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c95ef:{NFSU2_TR(0x6c95ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c95f2:{NFSU2_TR(0x6c95f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c95f5:{NFSU2_TR(0x6c95f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c95f8:{NFSU2_TR(0x6c95f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c95fb:{NFSU2_TR(0x6c95fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c96c1;}}
}
B6c9601:L6c9601:{c.instructions+=10;NFSU2_TR(0x6c9601);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9604:{NFSU2_TR(0x6c9604);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c960a:{NFSU2_TR(0x6c960a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c960d:{NFSU2_TR(0x6c960d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c9610:{NFSU2_TR(0x6c9610);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c9613:{NFSU2_TR(0x6c9613);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9616:{NFSU2_TR(0x6c9616);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9619:{NFSU2_TR(0x6c9619);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c961b:{NFSU2_TR(0x6c961b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c961e:{NFSU2_TR(0x6c961e);
if(r1(R+518)){{goto L6c9635;}}
}
B6c9620:L6c9620:{c.instructions+=2;NFSU2_TR(0x6c9620);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c9623:{NFSU2_TR(0x6c9623);
if(r1(R+518)){{goto L6c96c1;}}
}
B6c9629:L6c9629:{c.instructions+=3;NFSU2_TR(0x6c9629);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c962c:{NFSU2_TR(0x6c962c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c962f:{NFSU2_TR(0x6c962f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c96c1;}}
}
B6c9635:L6c9635:{c.instructions+=8;NFSU2_TR(0x6c9635);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c9638:{NFSU2_TR(0x6c9638);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c963b:{NFSU2_TR(0x6c963b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c963e:{NFSU2_TR(0x6c963e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9641:{NFSU2_TR(0x6c9641);
w4(R+28,u32(u32(r4(R+28))^u32(u32(0x80000ull))));
}
B6c9647:{NFSU2_TR(0x6c9647);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c9649:{NFSU2_TR(0x6c9649);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c964c:{NFSU2_TR(0x6c964c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c96c1;}}
}
B6c964e:L6c964e:{c.instructions+=4;NFSU2_TR(0x6c964e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9651:{NFSU2_TR(0x6c9651);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9654:{NFSU2_TR(0x6c9654);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9657:{NFSU2_TR(0x6c9657);
if(r1(R+518)){{goto L6c9666;}}
}
B6c9659:L6c9659:{c.instructions+=2;NFSU2_TR(0x6c9659);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c965c:{NFSU2_TR(0x6c965c);
if(r1(R+518)){{goto L6c96c1;}}
}
B6c965e:L6c965e:{c.instructions+=3;NFSU2_TR(0x6c965e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c9661:{NFSU2_TR(0x6c9661);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9664:{NFSU2_TR(0x6c9664);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c96c1;}}
}
B6c9666:L6c9666:{c.instructions+=5;NFSU2_TR(0x6c9666);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9669:{NFSU2_TR(0x6c9669);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c966c:{NFSU2_TR(0x6c966c);
w4(R+24,u32(u32(r4(R+24))^u32(u32(0x80000ull))));
}
B6c9672:{NFSU2_TR(0x6c9672);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9675:{NFSU2_TR(0x6c9675);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c96c1;}}
}
B6c9677:L6c9677:{c.instructions+=5;NFSU2_TR(0x6c9677);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c967a:{NFSU2_TR(0x6c967a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c967e:{NFSU2_TR(0x6c967e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9682:{NFSU2_TR(0x6c9682);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6c9685:{NFSU2_TR(0x6c9685);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c95d6u);}goto L6c95d6;}}
}
B6c968b:L6c968b:{c.instructions+=11;NFSU2_TR(0x6c968b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9691:{NFSU2_TR(0x6c9691);
__builtin_memmove((R+8),(R+0),4);
}
B6c9693:{NFSU2_TR(0x6c9693);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B6c9699:{NFSU2_TR(0x6c9699);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x70000000ull))));
}
B6c969f:{NFSU2_TR(0x6c969f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6c96a1:{NFSU2_TR(0x6c96a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c96a7:{NFSU2_TR(0x6c96a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c96aa:{NFSU2_TR(0x6c96aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c96b0:{NFSU2_TR(0x6c96b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c96b3:{NFSU2_TR(0x6c96b3);
__builtin_memmove((R+4),(R+0),4);
}
B6c96b5:{NFSU2_TR(0x6c96b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6c96b8:L6c96b8:{c.instructions+=1;NFSU2_TR(0x6c96b8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c96ba;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c96b8u);}goto L6c96b8;}
}
B6c96ba:L6c96ba:{c.instructions+=1;NFSU2_TR(0x6c96ba);
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
B6c96bc:L6c96bc:{c.instructions+=5;NFSU2_TR(0x6c96bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c96bd:{NFSU2_TR(0x6c96bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c96be:{NFSU2_TR(0x6c96be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c96bf:{NFSU2_TR(0x6c96bf);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c96c0:{NFSU2_TR(0x6c96c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c96c1:L6c96c1:{c.instructions+=3;NFSU2_TR(0x6c96c1);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c96c3:{NFSU2_TR(0x6c96c3);
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
B6c96c4:{NFSU2_TR(0x6c96c4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c96bcu);}goto L6c96bc;}
}
B6c96c6:L6c96c6:{c.instructions+=15;NFSU2_TR(0x6c96c6);
__builtin_memmove((R+28),(R+28),4);
}
B6c96c8:{NFSU2_TR(0x6c96c8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c96c9:{NFSU2_TR(0x6c96c9);
__builtin_memmove((R+20),(R+16),4);
}
B6c96cb:{NFSU2_TR(0x6c96cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c96cc:{NFSU2_TR(0x6c96cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c96cd:{NFSU2_TR(0x6c96cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c96d0:{NFSU2_TR(0x6c96d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c96d3:{NFSU2_TR(0x6c96d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c96d6:{NFSU2_TR(0x6c96d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c96d9:{NFSU2_TR(0x6c96d9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c96db:{NFSU2_TR(0x6c96db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c96dc:{NFSU2_TR(0x6c96dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c96dd:{NFSU2_TR(0x6c96dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c96e0:{NFSU2_TR(0x6c96e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c96e1:{NFSU2_TR(0x6c96e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c97d3;}}
}
B6c96e7:L6c96e7:{c.instructions+=2;NFSU2_TR(0x6c96e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c96ea:{NFSU2_TR(0x6c96ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c97d3;}}
}
B6c96f0:L6c96f0:{c.instructions+=3;NFSU2_TR(0x6c96f0);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B6c96f3:{NFSU2_TR(0x6c96f3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c96f5:{NFSU2_TR(0x6c96f5);
if(r1(R+518)){{goto L6c97d3;}}
}
B6c96fb:L6c96fb:{c.instructions+=7;NFSU2_TR(0x6c96fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c96fe:{NFSU2_TR(0x6c96fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c9701:{NFSU2_TR(0x6c9701);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c9703:{NFSU2_TR(0x6c9703);
__builtin_memmove((R+24),(R+0),4);
}
B6c9705:{NFSU2_TR(0x6c9705);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfff00000ull))));
}
B6c970b:{NFSU2_TR(0x6c970b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c9711:{NFSU2_TR(0x6c9711);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c97d3;}}
}
B6c9717:L6c9717:{c.instructions+=6;NFSU2_TR(0x6c9717);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c971b:{NFSU2_TR(0x6c971b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c9720:{NFSU2_TR(0x6c9720);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9723:{NFSU2_TR(0x6c9723);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9726:{NFSU2_TR(0x6c9726);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9728:{NFSU2_TR(0x6c9728);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c97d3;}}
}
B6c972e:L6c972e:{c.instructions+=1;NFSU2_TR(0x6c972e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9731:L6c9731:{c.instructions+=3;NFSU2_TR(0x6c9731);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c9734:{NFSU2_TR(0x6c9734);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c9736:{NFSU2_TR(0x6c9736);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c973b;}}
}
B6c9738:L6c9738:{c.instructions+=1;NFSU2_TR(0x6c9738);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c973b:L6c973b:{c.instructions+=4;NFSU2_TR(0x6c973b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c973e:{NFSU2_TR(0x6c973e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6c9741:{NFSU2_TR(0x6c9741);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6c9744:{NFSU2_TR(0x6c9744);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9731u);}goto L6c9731;}}
}
B6c9746:L6c9746:{c.instructions+=2;NFSU2_TR(0x6c9746);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c9749:{NFSU2_TR(0x6c9749);
if(r1(R+518)){{goto L6c97d3;}}
}
B6c974f:L6c974f:{c.instructions+=14;NFSU2_TR(0x6c974f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9752:{NFSU2_TR(0x6c9752);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6c9755:{NFSU2_TR(0x6c9755);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9758:{NFSU2_TR(0x6c9758);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c975b:{NFSU2_TR(0x6c975b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B6c975d:{NFSU2_TR(0x6c975d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6c9760:{NFSU2_TR(0x6c9760);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9763:{NFSU2_TR(0x6c9763);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6c9765:{NFSU2_TR(0x6c9765);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c9768:{NFSU2_TR(0x6c9768);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c976b:{NFSU2_TR(0x6c976b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c976e:{NFSU2_TR(0x6c976e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c9771:{NFSU2_TR(0x6c9771);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c9775:{NFSU2_TR(0x6c9775);
if(r1(R+518)){{goto L6c977c;}}
}
B6c9777:L6c9777:{c.instructions+=2;NFSU2_TR(0x6c9777);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c977a:{NFSU2_TR(0x6c977a);
{goto L6c9795;}
}
B6c977c:L6c977c:{c.instructions+=7;NFSU2_TR(0x6c977c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c977f:{NFSU2_TR(0x6c977f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6c9781:{NFSU2_TR(0x6c9781);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c9784:{NFSU2_TR(0x6c9784);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9787:{NFSU2_TR(0x6c9787);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c978a:{NFSU2_TR(0x6c978a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c978e:{NFSU2_TR(0x6c978e);
if(r1(R+518)){{goto L6c97d3;}}
}
B6c9790:L6c9790:{c.instructions+=2;NFSU2_TR(0x6c9790);
__builtin_memmove((R+8),(R+24),4);
}
B6c9792:{NFSU2_TR(0x6c9792);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9795:L6c9795:{c.instructions+=9;NFSU2_TR(0x6c9795);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9798:{NFSU2_TR(0x6c9798);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c979e:{NFSU2_TR(0x6c979e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c97a0:{NFSU2_TR(0x6c97a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c97a3:{NFSU2_TR(0x6c97a3);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c97a6:{NFSU2_TR(0x6c97a6);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c97a8:{NFSU2_TR(0x6c97a8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c97aa:{NFSU2_TR(0x6c97aa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c97ad:{NFSU2_TR(0x6c97ad);
if(r1(R+514)){{goto L6c97d3;}}
}
B6c97af:L6c97af:{c.instructions+=6;NFSU2_TR(0x6c97af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c97b1:{NFSU2_TR(0x6c97b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c97b4:{NFSU2_TR(0x6c97b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c97b7:{NFSU2_TR(0x6c97b7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1f0000ull))));
}
B6c97bd:{NFSU2_TR(0x6c97bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c97c3:{NFSU2_TR(0x6c97c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c97d3;}}
}
B6c97c5:L6c97c5:{c.instructions+=6;NFSU2_TR(0x6c97c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c97c8:{NFSU2_TR(0x6c97c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c97ca:{NFSU2_TR(0x6c97ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c97cd:{NFSU2_TR(0x6c97cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6c97cf:{NFSU2_TR(0x6c97cf);
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
B6c97d1:{NFSU2_TR(0x6c97d1);
{goto L6c97d6;}
}
B6c97d3:L6c97d3:{c.instructions+=2;NFSU2_TR(0x6c97d3);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c97d5:{NFSU2_TR(0x6c97d5);
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
B6c97d6:L6c97d6:{c.instructions+=5;NFSU2_TR(0x6c97d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c97d7:{NFSU2_TR(0x6c97d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c97d8:{NFSU2_TR(0x6c97d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c97d9:{NFSU2_TR(0x6c97d9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c97da:{NFSU2_TR(0x6c97da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c97dd:L6c97dd:{c.instructions+=21;NFSU2_TR(0x6c97dd);
__builtin_memmove((R+28),(R+28),4);
}
B6c97df:{NFSU2_TR(0x6c97df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c97e0:{NFSU2_TR(0x6c97e0);
__builtin_memmove((R+20),(R+16),4);
}
B6c97e2:{NFSU2_TR(0x6c97e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B6c97e5:{NFSU2_TR(0x6c97e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c97e8:{NFSU2_TR(0x6c97e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c97e9:{NFSU2_TR(0x6c97e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c97ea:{NFSU2_TR(0x6c97ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c97ec:{NFSU2_TR(0x6c97ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c97ed:{NFSU2_TR(0x6c97ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c97ef:{NFSU2_TR(0x6c97ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c97f2:{NFSU2_TR(0x6c97f2);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c97f3:{NFSU2_TR(0x6c97f3);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c97f4:{NFSU2_TR(0x6c97f4);
__builtin_memmove((R+12),(R+4),4);
}
B6c97f6:{NFSU2_TR(0x6c97f6);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c97f7:{NFSU2_TR(0x6c97f7);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6c97fd:{NFSU2_TR(0x6c97fd);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c9801:{NFSU2_TR(0x6c9801);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9804:{NFSU2_TR(0x6c9804);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9807:{NFSU2_TR(0x6c9807);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c9808:{NFSU2_TR(0x6c9808);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c98d3;}}
}
B6c980e:L6c980e:{c.instructions+=3;NFSU2_TR(0x6c980e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c9810:{NFSU2_TR(0x6c9810);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9812:{NFSU2_TR(0x6c9812);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c9838;}}
}
B6c9814:L6c9814:{c.instructions+=8;NFSU2_TR(0x6c9814);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6c9818:{NFSU2_TR(0x6c9818);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9819:{NFSU2_TR(0x6c9819);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6c981d:{NFSU2_TR(0x6c981d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c981e:{NFSU2_TR(0x6c981e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9821:{NFSU2_TR(0x6c9821);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6c9824:{NFSU2_TR(0x6c9824);
__builtin_memmove((R+4),(R+12),4);
}
B6c9826:{NFSU2_TR(0x6c9826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c982bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c96c6u);}goto L6c96c6;}
}
B6c982b:L6c982b:{c.instructions+=2;NFSU2_TR(0x6c982b);
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
B6c982d:{NFSU2_TR(0x6c982d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9ac6;}}
}
B6c9833:L6c9833:{c.instructions+=3;NFSU2_TR(0x6c9833);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c9834:{NFSU2_TR(0x6c9834);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6c9836:{NFSU2_TR(0x6c9836);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9814u);}goto L6c9814;}}
}
B6c9838:L6c9838:{c.instructions+=3;NFSU2_TR(0x6c9838);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c983c:{NFSU2_TR(0x6c983c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c983e:{NFSU2_TR(0x6c983e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c988b;}}
}
B6c9840:L6c9840:{c.instructions+=7;NFSU2_TR(0x6c9840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9843:{NFSU2_TR(0x6c9843);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c9846:{NFSU2_TR(0x6c9846);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6c9849:{NFSU2_TR(0x6c9849);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c984c:{NFSU2_TR(0x6c984c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6c984e:{NFSU2_TR(0x6c984e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6c9850:{NFSU2_TR(0x6c9850);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9853:L6c9853:{c.instructions+=5;NFSU2_TR(0x6c9853);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c9856:{NFSU2_TR(0x6c9856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c9858:{NFSU2_TR(0x6c9858);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c985b:{NFSU2_TR(0x6c985b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c985e:{NFSU2_TR(0x6c985e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9ac3;}}
}
B6c9864:L6c9864:{c.instructions+=3;NFSU2_TR(0x6c9864);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c9867:{NFSU2_TR(0x6c9867);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1full))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c986b:{NFSU2_TR(0x6c986b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9ac3;}}
}
B6c9871:L6c9871:{c.instructions+=4;NFSU2_TR(0x6c9871);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9874:{NFSU2_TR(0x6c9874);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c9877:{NFSU2_TR(0x6c9877);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6c987a:{NFSU2_TR(0x6c987a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9ac3;}}
}
B6c9880:L6c9880:{c.instructions+=4;NFSU2_TR(0x6c9880);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9883:{NFSU2_TR(0x6c9883);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c9886:{NFSU2_TR(0x6c9886);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6c9889:{NFSU2_TR(0x6c9889);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9853u);}goto L6c9853;}}
}
B6c988b:L6c988b:{c.instructions+=4;NFSU2_TR(0x6c988b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c988e:{NFSU2_TR(0x6c988e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c9890:{NFSU2_TR(0x6c9890);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9893:{NFSU2_TR(0x6c9893);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c9940;}}
}
B6c9899:L6c9899:{c.instructions+=4;NFSU2_TR(0x6c9899);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c989b:{NFSU2_TR(0x6c989b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c989d:{NFSU2_TR(0x6c989d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c98a4:{NFSU2_TR(0x6c98a4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c9ac3;}}
}
B6c98aa:L6c98aa:{c.instructions+=2;NFSU2_TR(0x6c98aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c98ad:{NFSU2_TR(0x6c98ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c98b0:L6c98b0:{c.instructions+=3;NFSU2_TR(0x6c98b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c98b3:{NFSU2_TR(0x6c98b3);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+0))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6c98b6:{NFSU2_TR(0x6c98b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c98bc;}}
}
B6c98b8:L6c98b8:{c.instructions+=1;NFSU2_TR(0x6c98b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c98bc:L6c98bc:{c.instructions+=3;NFSU2_TR(0x6c98bc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c98bd:{NFSU2_TR(0x6c98bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6c98bf:{NFSU2_TR(0x6c98bf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c98b0u);}goto L6c98b0;}}
}
B6c98c1:L6c98c1:{c.instructions+=2;NFSU2_TR(0x6c98c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c98c5:{NFSU2_TR(0x6c98c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9ac3;}}
}
B6c98cb:L6c98cb:{c.instructions+=3;NFSU2_TR(0x6c98cb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c98cc:{NFSU2_TR(0x6c98cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c98cf:{NFSU2_TR(0x6c98cf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9899u);}goto L6c9899;}}
}
B6c98d1:L6c98d1:{c.instructions+=1;NFSU2_TR(0x6c98d1);
{goto L6c9940;}
}
B6c98d3:L6c98d3:{c.instructions+=3;NFSU2_TR(0x6c98d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c98d7:{NFSU2_TR(0x6c98d7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c98d9:{NFSU2_TR(0x6c98d9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c9940;}}
}
B6c98db:L6c98db:{c.instructions+=4;NFSU2_TR(0x6c98db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c98de:{NFSU2_TR(0x6c98de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c98e1:{NFSU2_TR(0x6c98e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c98e4:{NFSU2_TR(0x6c98e4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B6c98e6:L6c98e6:{c.instructions+=5;NFSU2_TR(0x6c98e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c98e9:{NFSU2_TR(0x6c98e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c98ec:{NFSU2_TR(0x6c98ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c98ee:{NFSU2_TR(0x6c98ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c98f1:{NFSU2_TR(0x6c98f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9ac3;}}
}
B6c98f7:L6c98f7:{c.instructions+=4;NFSU2_TR(0x6c98f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c98fa:{NFSU2_TR(0x6c98fa);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1f0000ull))));
}
B6c9900:{NFSU2_TR(0x6c9900);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c9906:{NFSU2_TR(0x6c9906);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9ac3;}}
}
B6c990c:L6c990c:{c.instructions+=4;NFSU2_TR(0x6c990c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c990f:{NFSU2_TR(0x6c990f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9912:{NFSU2_TR(0x6c9912);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x1f0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9918:{NFSU2_TR(0x6c9918);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9ac3;}}
}
B6c991e:L6c991e:{c.instructions+=2;NFSU2_TR(0x6c991e);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c9921:{NFSU2_TR(0x6c9921);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9935;}}
}
B6c9923:L6c9923:{c.instructions+=3;NFSU2_TR(0x6c9923);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c9925:{NFSU2_TR(0x6c9925);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c9927:{NFSU2_TR(0x6c9927);
if(r1(R+518)){{goto L6c9ac3;}}
}
B6c992d:L6c992d:{c.instructions+=2;NFSU2_TR(0x6c992d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c992f:{NFSU2_TR(0x6c992f);
if(r1(R+518)){{goto L6c9ac3;}}
}
B6c9935:L6c9935:{c.instructions+=4;NFSU2_TR(0x6c9935);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9938:{NFSU2_TR(0x6c9938);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6c993b:{NFSU2_TR(0x6c993b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6c993e:{NFSU2_TR(0x6c993e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c98e6u);}goto L6c98e6;}}
}
B6c9940:L6c9940:{c.instructions+=2;NFSU2_TR(0x6c9940);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9942:{NFSU2_TR(0x6c9942);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9947ull));
TAIL_STATIC(0x699317u,699);
}
B6c9947:L6c9947:{c.instructions+=2;NFSU2_TR(0x6c9947);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9949:{NFSU2_TR(0x6c9949);
if(r1(R+518)){{goto L6c9956;}}
}
B6c994b:L6c994b:{c.instructions+=2;NFSU2_TR(0x6c994b);
__builtin_memmove((R+4),(R+0),4);
}
B6c994d:{NFSU2_TR(0x6c994d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9952ull));
TAIL_STATIC(0x698e7du,698);
}
B6c9952:L6c9952:{c.instructions+=2;NFSU2_TR(0x6c9952);
__builtin_memmove((R+12),(R+0),4);
}
B6c9954:{NFSU2_TR(0x6c9954);
{goto L6c9958;}
}
B6c9956:L6c9956:{c.instructions+=1;NFSU2_TR(0x6c9956);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c9958:L6c9958:{c.instructions+=2;NFSU2_TR(0x6c9958);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c995a:{NFSU2_TR(0x6c995a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9966;}}
}
B6c995c:L6c995c:{c.instructions+=2;NFSU2_TR(0x6c995c);
w4(R+0,u32(0x8007000eull));
}
B6c9961:{NFSU2_TR(0x6c9961);
{goto L6c9ac6;}
}
B6c9966:L6c9966:{c.instructions+=10;NFSU2_TR(0x6c9966);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9968:{NFSU2_TR(0x6c9968);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9969:{NFSU2_TR(0x6c9969);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c996c:{NFSU2_TR(0x6c996c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c996d:{NFSU2_TR(0x6c996d);
__builtin_memmove((R+0),(R+24),4);
}
B6c996f:{NFSU2_TR(0x6c996f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c9974:{NFSU2_TR(0x6c9974);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70100000ull))));
}
B6c9979:{NFSU2_TR(0x6c9979);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c997a:{NFSU2_TR(0x6c997a);
__builtin_memmove((R+4),(R+12),4);
}
B6c997c:{NFSU2_TR(0x6c997c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9981ull));
TAIL_STATIC(0x699362u,699);
}
B6c9981:L6c9981:{c.instructions+=2;NFSU2_TR(0x6c9981);
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
B6c9983:{NFSU2_TR(0x6c9983);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c9ac6;}}
}
B6c9989:L6c9989:{c.instructions+=3;NFSU2_TR(0x6c9989);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c998c:{NFSU2_TR(0x6c998c);
__builtin_memmove((R+4),(R+12),4);
}
B6c998e:{NFSU2_TR(0x6c998e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9993ull));
TAIL_STATIC(0x698eb3u,698);
}
B6c9993:L6c9993:{c.instructions+=2;NFSU2_TR(0x6c9993);
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
B6c9995:{NFSU2_TR(0x6c9995);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c9ac6;}}
}
B6c999b:L6c999b:{c.instructions+=8;NFSU2_TR(0x6c999b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c999e:{NFSU2_TR(0x6c999e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c99a1:{NFSU2_TR(0x6c99a1);
__builtin_memmove((R+0),(R+24),4);
}
B6c99a3:{NFSU2_TR(0x6c99a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c99a6:{NFSU2_TR(0x6c99a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c99a9:{NFSU2_TR(0x6c99a9);
__builtin_memmove((R+4),(R+0),4);
}
B6c99ab:{NFSU2_TR(0x6c99ab);
__builtin_memmove((R+8),(R+4),4);
}
B6c99ad:{NFSU2_TR(0x6c99ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c99b0:L6c99b0:{c.instructions+=1;NFSU2_TR(0x6c99b0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c99b2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c99b0u);}goto L6c99b0;}
}
B6c99b2:L6c99b2:{c.instructions+=2;NFSU2_TR(0x6c99b2);
__builtin_memmove((R+4),(R+8),4);
}
B6c99b4:{NFSU2_TR(0x6c99b4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c99b7:L6c99b7:{c.instructions+=1;NFSU2_TR(0x6c99b7);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c99b9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c99b7u);}goto L6c99b7;}
}
B6c99b9:L6c99b9:{c.instructions+=4;NFSU2_TR(0x6c99b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c99bc:{NFSU2_TR(0x6c99bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c99bf:{NFSU2_TR(0x6c99bf);
__builtin_memmove((R+4),(R+0),4);
}
B6c99c1:{NFSU2_TR(0x6c99c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c99c4:L6c99c4:{c.instructions+=1;NFSU2_TR(0x6c99c4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c99c6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c99c4u);}goto L6c99c4;}
}
B6c99c6:L6c99c6:{c.instructions+=3;NFSU2_TR(0x6c99c6);
__builtin_memmove((R+4),(R+8),4);
}
B6c99c8:{NFSU2_TR(0x6c99c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c99cb:{NFSU2_TR(0x6c99cb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c99ce:L6c99ce:{c.instructions+=1;NFSU2_TR(0x6c99ce);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c99d0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c99ceu);}goto L6c99ce;}
}
B6c99d0:L6c99d0:{c.instructions+=8;NFSU2_TR(0x6c99d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c99d3:{NFSU2_TR(0x6c99d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c99d6:{NFSU2_TR(0x6c99d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6c99d9:{NFSU2_TR(0x6c99d9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6c99db:{NFSU2_TR(0x6c99db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c99de:{NFSU2_TR(0x6c99de);
__builtin_memmove((R+4),(R+0),4);
}
B6c99e0:{NFSU2_TR(0x6c99e0);
__builtin_memmove((R+8),(R+4),4);
}
B6c99e2:{NFSU2_TR(0x6c99e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c99e5:L6c99e5:{c.instructions+=1;NFSU2_TR(0x6c99e5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c99e7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c99e5u);}goto L6c99e5;}
}
B6c99e7:L6c99e7:{c.instructions+=2;NFSU2_TR(0x6c99e7);
__builtin_memmove((R+4),(R+8),4);
}
B6c99e9:{NFSU2_TR(0x6c99e9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c99ec:L6c99ec:{c.instructions+=1;NFSU2_TR(0x6c99ec);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c99ee;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c99ecu);}goto L6c99ec;}
}
B6c99ee:L6c99ee:{c.instructions+=5;NFSU2_TR(0x6c99ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c99f1:{NFSU2_TR(0x6c99f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c99f4:{NFSU2_TR(0x6c99f4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6c99f6:{NFSU2_TR(0x6c99f6);
__builtin_memmove((R+4),(R+0),4);
}
B6c99f8:{NFSU2_TR(0x6c99f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c99fb:L6c99fb:{c.instructions+=1;NFSU2_TR(0x6c99fb);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c99fd;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c99fbu);}goto L6c99fb;}
}
B6c99fd:L6c99fd:{c.instructions+=3;NFSU2_TR(0x6c99fd);
__builtin_memmove((R+4),(R+0),4);
}
B6c99ff:{NFSU2_TR(0x6c99ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9a02:{NFSU2_TR(0x6c9a02);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c9a05:L6c9a05:{c.instructions+=1;NFSU2_TR(0x6c9a05);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c9a07;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9a05u);}goto L6c9a05;}
}
B6c9a07:L6c9a07:{c.instructions+=14;NFSU2_TR(0x6c9a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9a0a:{NFSU2_TR(0x6c9a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9a0d:{NFSU2_TR(0x6c9a0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c9a0f:{NFSU2_TR(0x6c9a0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c9a12:{NFSU2_TR(0x6c9a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9a15:{NFSU2_TR(0x6c9a15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c9a17:{NFSU2_TR(0x6c9a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c9a1a:{NFSU2_TR(0x6c9a1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c9a1d:{NFSU2_TR(0x6c9a1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c9a20:{NFSU2_TR(0x6c9a20);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c9a23:{NFSU2_TR(0x6c9a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9a26:{NFSU2_TR(0x6c9a26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9a2a:{NFSU2_TR(0x6c9a2a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9a2d:{NFSU2_TR(0x6c9a2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9a37;}}
}
B6c9a2f:L6c9a2f:{c.instructions+=3;NFSU2_TR(0x6c9a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c9a32:{NFSU2_TR(0x6c9a32);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9a35:{NFSU2_TR(0x6c9a35);
if(r1(R+518)){{goto L6c9a51;}}
}
B6c9a37:L6c9a37:{c.instructions+=2;NFSU2_TR(0x6c9a37);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9a3a:{NFSU2_TR(0x6c9a3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9a44;}}
}
B6c9a3c:L6c9a3c:{c.instructions+=3;NFSU2_TR(0x6c9a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9a3f:{NFSU2_TR(0x6c9a3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9a42:{NFSU2_TR(0x6c9a42);
if(r1(R+518)){{goto L6c9a51;}}
}
B6c9a44:L6c9a44:{c.instructions+=3;NFSU2_TR(0x6c9a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c9a47:{NFSU2_TR(0x6c9a47);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
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
B6c9a4d:{NFSU2_TR(0x6c9a4d);
if(r1(R+518)){{goto L6c9a61;}}
}
B6c9a4f:L6c9a4f:{c.instructions+=1;NFSU2_TR(0x6c9a4f);
{goto L6c9a54;}
}
B6c9a51:L6c9a51:{c.instructions+=1;NFSU2_TR(0x6c9a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c9a54:L6c9a54:{c.instructions+=2;NFSU2_TR(0x6c9a54);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6full))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6c9a58:{NFSU2_TR(0x6c9a58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9a61;}}
}
B6c9a5a:L6c9a5a:{c.instructions+=1;NFSU2_TR(0x6c9a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9a61:L6c9a61:{c.instructions+=5;NFSU2_TR(0x6c9a61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c9a63:{NFSU2_TR(0x6c9a63);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9a65:{NFSU2_TR(0x6c9a65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9a66:{NFSU2_TR(0x6c9a66);
__builtin_memmove((R+4),(R+28),4);
}
B6c9a68:{NFSU2_TR(0x6c9a68);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9a6bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6c9a6b:L6c9a6b:{c.instructions+=2;NFSU2_TR(0x6c9a6b);
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
B6c9a6d:{NFSU2_TR(0x6c9a6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9aba;}}
}
B6c9a6f:L6c9a6f:{c.instructions+=5;NFSU2_TR(0x6c9a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9a72:{NFSU2_TR(0x6c9a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9a75:{NFSU2_TR(0x6c9a75);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c9a78:{NFSU2_TR(0x6c9a78);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c9a7c:{NFSU2_TR(0x6c9a7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9a84;}}
}
B6c9a7e:L6c9a7e:{c.instructions+=2;NFSU2_TR(0x6c9a7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9a82:{NFSU2_TR(0x6c9a82);
if(r1(R+518)){{goto L6c9a8a;}}
}
B6c9a84:L6c9a84:{c.instructions+=2;NFSU2_TR(0x6c9a84);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6full))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6c9a88:{NFSU2_TR(0x6c9a88);
if(r1(R+518)){{goto L6c9aba;}}
}
B6c9a8a:L6c9a8a:{c.instructions+=5;NFSU2_TR(0x6c9a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9a8d:{NFSU2_TR(0x6c9a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9a90:{NFSU2_TR(0x6c9a90);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c9a93:{NFSU2_TR(0x6c9a93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9a94:{NFSU2_TR(0x6c9a94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9a99ull));
TAIL_STATIC(0x6995c1u,699);
}
B6c9a99:L6c9a99:{c.instructions+=2;NFSU2_TR(0x6c9a99);
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
B6c9a9b:{NFSU2_TR(0x6c9a9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c9ac6;}}
}
B6c9a9d:L6c9a9d:{c.instructions+=3;NFSU2_TR(0x6c9a9d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9a9f:{NFSU2_TR(0x6c9a9f);
__builtin_memmove((R+4),(R+12),4);
}
B6c9aa1:{NFSU2_TR(0x6c9aa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9aa6ull));
TAIL_STATIC(0x6739efu,673);
}
B6c9aa6:L6c9aa6:{c.instructions+=5;NFSU2_TR(0x6c9aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9aa9:{NFSU2_TR(0x6c9aa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6c9aac:{NFSU2_TR(0x6c9aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9aaf:{NFSU2_TR(0x6c9aaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9ab1:{NFSU2_TR(0x6c9ab1);
if(r1(R+518)){{goto L6c9ab6;}}
}
B6c9ab3:L6c9ab3:{c.instructions+=1;NFSU2_TR(0x6c9ab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6c9ab6:L6c9ab6:{c.instructions+=2;NFSU2_TR(0x6c9ab6);
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
B6c9ab8:{NFSU2_TR(0x6c9ab8);
{goto L6c9ac6;}
}
B6c9aba:L6c9aba:{c.instructions+=3;NFSU2_TR(0x6c9aba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9abc:{NFSU2_TR(0x6c9abc);
__builtin_memmove((R+4),(R+12),4);
}
B6c9abe:{NFSU2_TR(0x6c9abe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9ac3ull));
TAIL_STATIC(0x6739efu,673);
}
B6c9ac3:L6c9ac3:{c.instructions+=2;NFSU2_TR(0x6c9ac3);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c9ac5:{NFSU2_TR(0x6c9ac5);
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
B6c9ac6:L6c9ac6:{c.instructions+=5;NFSU2_TR(0x6c9ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c9ac7:{NFSU2_TR(0x6c9ac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c9ac8:{NFSU2_TR(0x6c9ac8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c9ac9:{NFSU2_TR(0x6c9ac9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c9aca:{NFSU2_TR(0x6c9aca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c9acd:L6c9acd:{c.instructions+=12;NFSU2_TR(0x6c9acd);
__builtin_memmove((R+28),(R+28),4);
}
B6c9acf:{NFSU2_TR(0x6c9acf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9ad0:{NFSU2_TR(0x6c9ad0);
__builtin_memmove((R+20),(R+16),4);
}
B6c9ad2:{NFSU2_TR(0x6c9ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9ad5:{NFSU2_TR(0x6c9ad5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9ad6:{NFSU2_TR(0x6c9ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c9ad9:{NFSU2_TR(0x6c9ad9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c9adc:{NFSU2_TR(0x6c9adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9adf:{NFSU2_TR(0x6c9adf);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c9ae2:{NFSU2_TR(0x6c9ae2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9ae3:{NFSU2_TR(0x6c9ae3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9ae4:{NFSU2_TR(0x6c9ae4);
if(r1(R+518)){{goto L6c9b2f;}}
}
B6c9ae6:L6c9ae6:{c.instructions+=2;NFSU2_TR(0x6c9ae6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c9aea:{NFSU2_TR(0x6c9aea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9b2f;}}
}
B6c9aec:L6c9aec:{c.instructions+=4;NFSU2_TR(0x6c9aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9aef:{NFSU2_TR(0x6c9aef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c9af1:{NFSU2_TR(0x6c9af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9af4:{NFSU2_TR(0x6c9af4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c9b2f;}}
}
B6c9af6:L6c9af6:{c.instructions+=2;NFSU2_TR(0x6c9af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9af9:{NFSU2_TR(0x6c9af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c9afc:L6c9afc:{c.instructions+=5;NFSU2_TR(0x6c9afc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c9afe:{NFSU2_TR(0x6c9afe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c9b00:{NFSU2_TR(0x6c9b00);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xf0000000ull))));
}
B6c9b06:{NFSU2_TR(0x6c9b06);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c9b0c:{NFSU2_TR(0x6c9b0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9b26;}}
}
B6c9b0e:L6c9b0e:{c.instructions+=4;NFSU2_TR(0x6c9b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9b11:{NFSU2_TR(0x6c9b11);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c9b13:{NFSU2_TR(0x6c9b13);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9b15:{NFSU2_TR(0x6c9b15);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c9b26;}}
}
B6c9b17:L6c9b17:{c.instructions+=1;NFSU2_TR(0x6c9b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9b1a:L6c9b1a:{c.instructions+=2;NFSU2_TR(0x6c9b1a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c9b1c:{NFSU2_TR(0x6c9b1c);
if(r1(R+518)){{goto L6c9b38;}}
}
B6c9b1e:L6c9b1e:{c.instructions+=4;NFSU2_TR(0x6c9b1e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c9b1f:{NFSU2_TR(0x6c9b1f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c9b22:{NFSU2_TR(0x6c9b22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6c9b24:{NFSU2_TR(0x6c9b24);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9b1au);}goto L6c9b1a;}}
}
B6c9b26:L6c9b26:{c.instructions+=4;NFSU2_TR(0x6c9b26);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c9b27:{NFSU2_TR(0x6c9b27);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c9b2a:{NFSU2_TR(0x6c9b2a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9b2d:{NFSU2_TR(0x6c9b2d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9afcu);}goto L6c9afc;}}
}
B6c9b2f:L6c9b2f:{c.instructions+=1;NFSU2_TR(0x6c9b2f);
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
B6c9b31:L6c9b31:{c.instructions+=5;NFSU2_TR(0x6c9b31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c9b32:{NFSU2_TR(0x6c9b32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c9b33:{NFSU2_TR(0x6c9b33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c9b34:{NFSU2_TR(0x6c9b34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6c9b35:{NFSU2_TR(0x6c9b35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c9b38:L6c9b38:{c.instructions+=3;NFSU2_TR(0x6c9b38);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c9b3a:{NFSU2_TR(0x6c9b3a);
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
B6c9b3b:{NFSU2_TR(0x6c9b3b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9b31u);}goto L6c9b31;}
}
B6c9b3d:L6c9b3d:{c.instructions+=34;NFSU2_TR(0x6c9b3d);
__builtin_memmove((R+28),(R+28),4);
}
B6c9b3f:{NFSU2_TR(0x6c9b3f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9b40:{NFSU2_TR(0x6c9b40);
__builtin_memmove((R+20),(R+16),4);
}
B6c9b42:{NFSU2_TR(0x6c9b42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x114ull))));
}
B6c9b48:{NFSU2_TR(0x6c9b48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9b49:{NFSU2_TR(0x6c9b49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9b4a:{NFSU2_TR(0x6c9b4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9b4b:{NFSU2_TR(0x6c9b4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c9b4e:{NFSU2_TR(0x6c9b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9b52:{NFSU2_TR(0x6c9b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9b56:{NFSU2_TR(0x6c9b56);
__builtin_memmove((R+28),(R+4),4);
}
B6c9b58:{NFSU2_TR(0x6c9b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9b5e:{NFSU2_TR(0x6c9b5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c9b60:{NFSU2_TR(0x6c9b60);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6c9b66:{NFSU2_TR(0x6c9b66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9b67:{NFSU2_TR(0x6c9b67);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c9b6a:{NFSU2_TR(0x6c9b6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9b6b:{NFSU2_TR(0x6c9b6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c9b71:{NFSU2_TR(0x6c9b71);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9b72:{NFSU2_TR(0x6c9b72);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c9b75:{NFSU2_TR(0x6c9b75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9b76:{NFSU2_TR(0x6c9b76);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c9b79:{NFSU2_TR(0x6c9b79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9b7a:{NFSU2_TR(0x6c9b7a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c9b7c:{NFSU2_TR(0x6c9b7c);
u8 U[4];
w4(U+0,u32(0x7bd680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9b81:{NFSU2_TR(0x6c9b81);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6c9b82:{NFSU2_TR(0x6c9b82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9b83:{NFSU2_TR(0x6c9b83);
__builtin_memmove((R+4),(R+28),4);
}
B6c9b85:{NFSU2_TR(0x6c9b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9b88:{NFSU2_TR(0x6c9b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9b8b:{NFSU2_TR(0x6c9b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9b92:{NFSU2_TR(0x6c9b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9b99:{NFSU2_TR(0x6c9b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9b9c:{NFSU2_TR(0x6c9b9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9ba1ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c9ba1:L6c9ba1:{c.instructions+=2;NFSU2_TR(0x6c9ba1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9ba3:{NFSU2_TR(0x6c9ba3);
if(r1(R+518)){{goto L6c9bd9;}}
}
B6c9ba5:L6c9ba5:{c.instructions+=14;NFSU2_TR(0x6c9ba5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c9ba8:{NFSU2_TR(0x6c9ba8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c9bab:{NFSU2_TR(0x6c9bab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9bac:{NFSU2_TR(0x6c9bac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9bad:{NFSU2_TR(0x6c9bad);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c9bb3:{NFSU2_TR(0x6c9bb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9bb4:{NFSU2_TR(0x6c9bb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c9bb7:{NFSU2_TR(0x6c9bb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9bb8:{NFSU2_TR(0x6c9bb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c9bbb:{NFSU2_TR(0x6c9bbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9bbc:{NFSU2_TR(0x6c9bbc);
u8 U[4];
w4(U+0,u32(0x7bd6e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9bc1:{NFSU2_TR(0x6c9bc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c9bc7:{NFSU2_TR(0x6c9bc7);
__builtin_memmove((R+4),(R+28),4);
}
B6c9bc9:{NFSU2_TR(0x6c9bc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9bceull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c9bce:L6c9bce:{c.instructions+=2;NFSU2_TR(0x6c9bce);
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
B6c9bd0:{NFSU2_TR(0x6c9bd0);
if(r1(R+518)){{goto L6c9bd9;}}
}
B6c9bd2:L6c9bd2:{c.instructions+=2;NFSU2_TR(0x6c9bd2);
__builtin_memmove((R+0),(R+12),4);
}
B6c9bd4:{NFSU2_TR(0x6c9bd4);
{goto L6c9df6;}
}
B6c9bd9:L6c9bd9:{c.instructions+=5;NFSU2_TR(0x6c9bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9bdd:{NFSU2_TR(0x6c9bdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c9be3:{NFSU2_TR(0x6c9be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9be6:{NFSU2_TR(0x6c9be6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c9bec:{NFSU2_TR(0x6c9bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9bef:L6c9bef:{c.instructions+=3;NFSU2_TR(0x6c9bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9bf3:{NFSU2_TR(0x6c9bf3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9bf5:{NFSU2_TR(0x6c9bf5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c9c73;}}
}
B6c9bf7:L6c9bf7:{c.instructions+=6;NFSU2_TR(0x6c9bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9bfa:{NFSU2_TR(0x6c9bfa);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c9bfd:{NFSU2_TR(0x6c9bfd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6c9c00:{NFSU2_TR(0x6c9c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9c03:{NFSU2_TR(0x6c9c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9c06:{NFSU2_TR(0x6c9c06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9c09:L6c9c09:{c.instructions+=9;NFSU2_TR(0x6c9c09);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9c0d:{NFSU2_TR(0x6c9c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9c10:{NFSU2_TR(0x6c9c10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c9c12:{NFSU2_TR(0x6c9c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9c15:{NFSU2_TR(0x6c9c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c9c18:{NFSU2_TR(0x6c9c18);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff1cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6c9c1f:{NFSU2_TR(0x6c9c1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c9c22:{NFSU2_TR(0x6c9c22);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c9c25:{NFSU2_TR(0x6c9c25);
if(r1(R+518)){{goto L6c9c3a;}}
}
B6c9c27:L6c9c27:{c.instructions+=4;NFSU2_TR(0x6c9c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c9c2a:{NFSU2_TR(0x6c9c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(U+4))));
}
B6c9c2d:{NFSU2_TR(0x6c9c2d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c9c33:{NFSU2_TR(0x6c9c33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9c73;}}
}
B6c9c35:L6c9c35:{c.instructions+=2;NFSU2_TR(0x6c9c35);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9c38:{NFSU2_TR(0x6c9c38);
{goto L6c9c65;}
}
B6c9c3a:L6c9c3a:{c.instructions+=3;NFSU2_TR(0x6c9c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9c3d:{NFSU2_TR(0x6c9c3d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9c40:{NFSU2_TR(0x6c9c40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9c73;}}
}
B6c9c42:L6c9c42:{c.instructions+=3;NFSU2_TR(0x6c9c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9c45:{NFSU2_TR(0x6c9c45);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9c48:{NFSU2_TR(0x6c9c48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9c73;}}
}
B6c9c4a:L6c9c4a:{c.instructions+=3;NFSU2_TR(0x6c9c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9c4d:{NFSU2_TR(0x6c9c4d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9c50:{NFSU2_TR(0x6c9c50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9c73;}}
}
B6c9c52:L6c9c52:{c.instructions+=3;NFSU2_TR(0x6c9c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9c55:{NFSU2_TR(0x6c9c55);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9c58:{NFSU2_TR(0x6c9c58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9c73;}}
}
B6c9c5a:L6c9c5a:{c.instructions+=3;NFSU2_TR(0x6c9c5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9c5d:{NFSU2_TR(0x6c9c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B6c9c60:{NFSU2_TR(0x6c9c60);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9c65:L6c9c65:{c.instructions+=1;NFSU2_TR(0x6c9c65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9c73;}}
}
B6c9c67:L6c9c67:{c.instructions+=4;NFSU2_TR(0x6c9c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9c6a:{NFSU2_TR(0x6c9c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9c6e:{NFSU2_TR(0x6c9c6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6c9c71:{NFSU2_TR(0x6c9c71);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9c09u);}goto L6c9c09;}}
}
B6c9c73:L6c9c73:{c.instructions+=2;NFSU2_TR(0x6c9c73);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9c76:{NFSU2_TR(0x6c9c76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9dde;}}
}
B6c9c7c:L6c9c7c:{c.instructions+=2;NFSU2_TR(0x6c9c7c);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9c7e:{NFSU2_TR(0x6c9c7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9c83ull));
TAIL_STATIC(0x699317u,699);
}
B6c9c83:L6c9c83:{c.instructions+=2;NFSU2_TR(0x6c9c83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9c85:{NFSU2_TR(0x6c9c85);
if(r1(R+518)){{goto L6c9c92;}}
}
B6c9c87:L6c9c87:{c.instructions+=2;NFSU2_TR(0x6c9c87);
__builtin_memmove((R+4),(R+0),4);
}
B6c9c89:{NFSU2_TR(0x6c9c89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9c8eull));
TAIL_STATIC(0x698e7du,698);
}
B6c9c8e:L6c9c8e:{c.instructions+=2;NFSU2_TR(0x6c9c8e);
__builtin_memmove((R+12),(R+0),4);
}
B6c9c90:{NFSU2_TR(0x6c9c90);
{goto L6c9c94;}
}
B6c9c92:L6c9c92:{c.instructions+=1;NFSU2_TR(0x6c9c92);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c9c94:L6c9c94:{c.instructions+=2;NFSU2_TR(0x6c9c94);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c9c96:{NFSU2_TR(0x6c9c96);
if(r1(R+518)){{goto L6c9dfd;}}
}
B6c9c9c:L6c9c9c:{c.instructions+=10;NFSU2_TR(0x6c9c9c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9c9e:{NFSU2_TR(0x6c9c9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9c9f:{NFSU2_TR(0x6c9c9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c9ca2:{NFSU2_TR(0x6c9ca2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9ca3:{NFSU2_TR(0x6c9ca3);
__builtin_memmove((R+0),(R+24),4);
}
B6c9ca5:{NFSU2_TR(0x6c9ca5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c9caa:{NFSU2_TR(0x6c9caa);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70100000ull))));
}
B6c9caf:{NFSU2_TR(0x6c9caf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9cb0:{NFSU2_TR(0x6c9cb0);
__builtin_memmove((R+4),(R+12),4);
}
B6c9cb2:{NFSU2_TR(0x6c9cb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9cb7ull));
TAIL_STATIC(0x699362u,699);
}
B6c9cb7:L6c9cb7:{c.instructions+=4;NFSU2_TR(0x6c9cb7);
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
B6c9cb9:{NFSU2_TR(0x6c9cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9cbc:{NFSU2_TR(0x6c9cbc);
__builtin_memmove((R+4),(R+12),4);
}
B6c9cbe:{NFSU2_TR(0x6c9cbe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c9e06;}}
}
B6c9cc4:L6c9cc4:{c.instructions+=2;NFSU2_TR(0x6c9cc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c9cca:{NFSU2_TR(0x6c9cca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9ccfull));
TAIL_STATIC(0x698eb3u,698);
}
B6c9ccf:L6c9ccf:{c.instructions+=3;NFSU2_TR(0x6c9ccf);
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
B6c9cd1:{NFSU2_TR(0x6c9cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9cd4:{NFSU2_TR(0x6c9cd4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c9e04;}}
}
B6c9cda:L6c9cda:{c.instructions+=8;NFSU2_TR(0x6c9cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9ce0:{NFSU2_TR(0x6c9ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c9ce3:{NFSU2_TR(0x6c9ce3);
__builtin_memmove((R+0),(R+24),4);
}
B6c9ce5:{NFSU2_TR(0x6c9ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9ce8:{NFSU2_TR(0x6c9ce8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c9ceb:{NFSU2_TR(0x6c9ceb);
__builtin_memmove((R+4),(R+0),4);
}
B6c9ced:{NFSU2_TR(0x6c9ced);
__builtin_memmove((R+8),(R+4),4);
}
B6c9cef:{NFSU2_TR(0x6c9cef);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c9cf2:L6c9cf2:{c.instructions+=1;NFSU2_TR(0x6c9cf2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c9cf4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9cf2u);}goto L6c9cf2;}
}
B6c9cf4:L6c9cf4:{c.instructions+=2;NFSU2_TR(0x6c9cf4);
__builtin_memmove((R+4),(R+8),4);
}
B6c9cf6:{NFSU2_TR(0x6c9cf6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c9cf9:L6c9cf9:{c.instructions+=1;NFSU2_TR(0x6c9cf9);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c9cfb;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9cf9u);}goto L6c9cf9;}
}
B6c9cfb:L6c9cfb:{c.instructions+=4;NFSU2_TR(0x6c9cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c9cfe:{NFSU2_TR(0x6c9cfe);
__builtin_memmove((R+4),(R+0),4);
}
B6c9d00:{NFSU2_TR(0x6c9d00);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c9d03:{NFSU2_TR(0x6c9d03);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff0cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c9d09:L6c9d09:{c.instructions+=1;NFSU2_TR(0x6c9d09);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c9d0b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9d09u);}goto L6c9d09;}
}
B6c9d0b:L6c9d0b:{c.instructions+=2;NFSU2_TR(0x6c9d0b);
__builtin_memmove((R+4),(R+8),4);
}
B6c9d0d:{NFSU2_TR(0x6c9d0d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c9d10:L6c9d10:{c.instructions+=1;NFSU2_TR(0x6c9d10);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c9d12;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9d10u);}goto L6c9d10;}
}
B6c9d12:L6c9d12:{c.instructions+=5;NFSU2_TR(0x6c9d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c9d15:{NFSU2_TR(0x6c9d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9d18:{NFSU2_TR(0x6c9d18);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6c9d1a:{NFSU2_TR(0x6c9d1a);
__builtin_memmove((R+4),(R+0),4);
}
B6c9d1c:{NFSU2_TR(0x6c9d1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c9d1f:L6c9d1f:{c.instructions+=1;NFSU2_TR(0x6c9d1f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c9d21;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9d1fu);}goto L6c9d1f;}
}
B6c9d21:L6c9d21:{c.instructions+=3;NFSU2_TR(0x6c9d21);
__builtin_memmove((R+4),(R+8),4);
}
B6c9d23:{NFSU2_TR(0x6c9d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9d26:{NFSU2_TR(0x6c9d26);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c9d29:L6c9d29:{c.instructions+=1;NFSU2_TR(0x6c9d29);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c9d2b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9d29u);}goto L6c9d29;}
}
B6c9d2b:L6c9d2b:{c.instructions+=7;NFSU2_TR(0x6c9d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c9d2e:{NFSU2_TR(0x6c9d2e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6c9d31:{NFSU2_TR(0x6c9d31);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6c9d33:{NFSU2_TR(0x6c9d33);
__builtin_memmove((R+4),(R+0),4);
}
B6c9d35:{NFSU2_TR(0x6c9d35);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c9d38:{NFSU2_TR(0x6c9d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9d3c:{NFSU2_TR(0x6c9d3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c9d42:L6c9d42:{c.instructions+=1;NFSU2_TR(0x6c9d42);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c9d44;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9d42u);}goto L6c9d42;}
}
B6c9d44:L6c9d44:{c.instructions+=2;NFSU2_TR(0x6c9d44);
__builtin_memmove((R+4),(R+0),4);
}
B6c9d46:{NFSU2_TR(0x6c9d46);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c9d49:L6c9d49:{c.instructions+=1;NFSU2_TR(0x6c9d49);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c9d4b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9d49u);}goto L6c9d49;}
}
B6c9d4b:L6c9d4b:{c.instructions+=15;NFSU2_TR(0x6c9d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9d4e:{NFSU2_TR(0x6c9d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9d51:{NFSU2_TR(0x6c9d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9d54:{NFSU2_TR(0x6c9d54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c9d56:{NFSU2_TR(0x6c9d56);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c9d59:{NFSU2_TR(0x6c9d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9d5c:{NFSU2_TR(0x6c9d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9d5f:{NFSU2_TR(0x6c9d5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c9d61:{NFSU2_TR(0x6c9d61);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c9d64:{NFSU2_TR(0x6c9d64);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c9d67:{NFSU2_TR(0x6c9d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9d6a:{NFSU2_TR(0x6c9d6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c9d6d:{NFSU2_TR(0x6c9d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9d70:{NFSU2_TR(0x6c9d70);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9d73:{NFSU2_TR(0x6c9d73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9d80;}}
}
B6c9d75:L6c9d75:{c.instructions+=3;NFSU2_TR(0x6c9d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9d78:{NFSU2_TR(0x6c9d78);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9d7b:{NFSU2_TR(0x6c9d7b);
if(r1(R+518)){{goto L6c9d95;}}
}
B6c9d7d:L6c9d7d:{c.instructions+=1;NFSU2_TR(0x6c9d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9d80:L6c9d80:{c.instructions+=2;NFSU2_TR(0x6c9d80);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9d83:{NFSU2_TR(0x6c9d83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9d8d;}}
}
B6c9d85:L6c9d85:{c.instructions+=3;NFSU2_TR(0x6c9d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9d88:{NFSU2_TR(0x6c9d88);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9d8b:{NFSU2_TR(0x6c9d8b);
if(r1(R+518)){{goto L6c9d95;}}
}
B6c9d8d:L6c9d8d:{c.instructions+=2;NFSU2_TR(0x6c9d8d);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
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
B6c9d93:{NFSU2_TR(0x6c9d93);
if(r1(R+518)){{goto L6c9da2;}}
}
B6c9d95:L6c9d95:{c.instructions+=2;NFSU2_TR(0x6c9d95);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6full))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6c9d99:{NFSU2_TR(0x6c9d99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9da2;}}
}
B6c9d9b:L6c9d9b:{c.instructions+=1;NFSU2_TR(0x6c9d9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9da2:L6c9da2:{c.instructions+=5;NFSU2_TR(0x6c9da2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c9da4:{NFSU2_TR(0x6c9da4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9da6:{NFSU2_TR(0x6c9da6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9da7:{NFSU2_TR(0x6c9da7);
__builtin_memmove((R+4),(R+24),4);
}
B6c9da9:{NFSU2_TR(0x6c9da9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9dacull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6c9dac:L6c9dac:{c.instructions+=2;NFSU2_TR(0x6c9dac);
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
B6c9dae:{NFSU2_TR(0x6c9dae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9dcf;}}
}
B6c9db0:L6c9db0:{c.instructions+=7;NFSU2_TR(0x6c9db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9db3:{NFSU2_TR(0x6c9db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9db6:{NFSU2_TR(0x6c9db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9db9:{NFSU2_TR(0x6c9db9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c9dbc:{NFSU2_TR(0x6c9dbc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c9dbe:{NFSU2_TR(0x6c9dbe);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c9dc2:{NFSU2_TR(0x6c9dc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9dc9;}}
}
B6c9dc4:L6c9dc4:{c.instructions+=2;NFSU2_TR(0x6c9dc4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9dc7:{NFSU2_TR(0x6c9dc7);
if(r1(R+518)){{goto L6c9e12;}}
}
B6c9dc9:L6c9dc9:{c.instructions+=2;NFSU2_TR(0x6c9dc9);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6full))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6c9dcd:{NFSU2_TR(0x6c9dcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9e12;}}
}
B6c9dcf:L6c9dcf:{c.instructions+=3;NFSU2_TR(0x6c9dcf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9dd1:{NFSU2_TR(0x6c9dd1);
__builtin_memmove((R+4),(R+12),4);
}
B6c9dd3:{NFSU2_TR(0x6c9dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9dd8ull));
TAIL_STATIC(0x6739efu,673);
}
B6c9dd8:L6c9dd8:{c.instructions+=2;NFSU2_TR(0x6c9dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9ddb:{NFSU2_TR(0x6c9ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c9dde:L6c9dde:{c.instructions+=5;NFSU2_TR(0x6c9dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9de1:{NFSU2_TR(0x6c9de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9de5:{NFSU2_TR(0x6c9de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9de9:{NFSU2_TR(0x6c9de9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6c9ded:{NFSU2_TR(0x6c9ded);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9befu);}goto L6c9bef;}}
}
B6c9df3:L6c9df3:{c.instructions+=2;NFSU2_TR(0x6c9df3);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c9df5:{NFSU2_TR(0x6c9df5);
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
B6c9df6:L6c9df6:{c.instructions+=5;NFSU2_TR(0x6c9df6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c9df7:{NFSU2_TR(0x6c9df7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c9df8:{NFSU2_TR(0x6c9df8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c9df9:{NFSU2_TR(0x6c9df9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c9dfa:{NFSU2_TR(0x6c9dfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c9dfd:L6c9dfd:{c.instructions+=2;NFSU2_TR(0x6c9dfd);
w4(R+0,u32(0x8007000eull));
}
B6c9e02:{NFSU2_TR(0x6c9e02);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9df6u);}goto L6c9df6;}
}
B6c9e04:L6c9e04:{c.instructions+=1;NFSU2_TR(0x6c9e04);
__builtin_memmove((R+4),(R+12),4);
}
B6c9e06:L6c9e06:{c.instructions+=2;NFSU2_TR(0x6c9e06);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9e08:{NFSU2_TR(0x6c9e08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9e0dull));
TAIL_STATIC(0x6739efu,673);
}
B6c9e0d:L6c9e0d:{c.instructions+=2;NFSU2_TR(0x6c9e0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9e10:{NFSU2_TR(0x6c9e10);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9df6u);}goto L6c9df6;}
}
B6c9e12:L6c9e12:{c.instructions+=2;NFSU2_TR(0x6c9e12);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9e15:{NFSU2_TR(0x6c9e15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9e21;}}
}
B6c9e17:L6c9e17:{c.instructions+=4;NFSU2_TR(0x6c9e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9e1a:{NFSU2_TR(0x6c9e1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c9e1c:{NFSU2_TR(0x6c9e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9e1f:{NFSU2_TR(0x6c9e1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6c9e21:L6c9e21:{c.instructions+=2;NFSU2_TR(0x6c9e21);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c9e25:{NFSU2_TR(0x6c9e25);
if(r1(R+518)){{goto L6c9e66;}}
}
B6c9e27:L6c9e27:{c.instructions+=2;NFSU2_TR(0x6c9e27);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c9e2b:{NFSU2_TR(0x6c9e2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9e66;}}
}
B6c9e2d:L6c9e2d:{c.instructions+=3;NFSU2_TR(0x6c9e2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c9e2f:{NFSU2_TR(0x6c9e2f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c9e31:{NFSU2_TR(0x6c9e31);
if(r1(R+518)){{goto L6c9e37;}}
}
B6c9e33:L6c9e33:{c.instructions+=2;NFSU2_TR(0x6c9e33);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c9e35:{NFSU2_TR(0x6c9e35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9e66;}}
}
B6c9e37:L6c9e37:{c.instructions+=3;NFSU2_TR(0x6c9e37);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9e39:{NFSU2_TR(0x6c9e39);
__builtin_memmove((R+4),(R+12),4);
}
B6c9e3b:{NFSU2_TR(0x6c9e3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9e40ull));
TAIL_STATIC(0x6739efu,673);
}
B6c9e40:L6c9e40:{c.instructions+=6;NFSU2_TR(0x6c9e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9e46:{NFSU2_TR(0x6c9e46);
u8 U[4];
w4(U+0,u32(0x7bf1f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9e4b:{NFSU2_TR(0x6c9e4b);
u8 U[4];
w4(U+0,u32(0x125full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9e50:{NFSU2_TR(0x6c9e50);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c9e53:{NFSU2_TR(0x6c9e53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9e54:{NFSU2_TR(0x6c9e54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9e59ull));
TAIL_STATIC(0x69e9bbu,69e);
}
B6c9e59:L6c9e59:{c.instructions+=5;NFSU2_TR(0x6c9e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9e5c:{NFSU2_TR(0x6c9e5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9e5f:{NFSU2_TR(0x6c9e5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6c9e62:{NFSU2_TR(0x6c9e62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c9e64:{NFSU2_TR(0x6c9e64);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9df3u);}goto L6c9df3;}
}
B6c9e66:L6c9e66:{c.instructions+=2;NFSU2_TR(0x6c9e66);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9e69:{NFSU2_TR(0x6c9e69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9ea1;}}
}
B6c9e6b:L6c9e6b:{c.instructions+=3;NFSU2_TR(0x6c9e6b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c9e6d:{NFSU2_TR(0x6c9e6d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9e70:{NFSU2_TR(0x6c9e70);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c9e7e;}}
}
B6c9e72:L6c9e72:{c.instructions+=5;NFSU2_TR(0x6c9e72);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c9e76:{NFSU2_TR(0x6c9e76);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c9e77:{NFSU2_TR(0x6c9e77);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c9e7a:{NFSU2_TR(0x6c9e7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c9e7c:{NFSU2_TR(0x6c9e7c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9e72u);}goto L6c9e72;}}
}
B6c9e7e:L6c9e7e:{c.instructions+=6;NFSU2_TR(0x6c9e7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9e81:{NFSU2_TR(0x6c9e81);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c9e87:{NFSU2_TR(0x6c9e87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c9e89:{NFSU2_TR(0x6c9e89);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c9e8c:{NFSU2_TR(0x6c9e8c);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B6c9e8e:{NFSU2_TR(0x6c9e8e);
if(r1(R+518)){{goto L6c9e97;}}
}
B6c9e90:L6c9e90:{c.instructions+=2;NFSU2_TR(0x6c9e90);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9e92:{NFSU2_TR(0x6c9e92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9e97ull));
TAIL_STATIC(0x6739efu,673);
}
B6c9e97:L6c9e97:{c.instructions+=4;NFSU2_TR(0x6c9e97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c9e99:{NFSU2_TR(0x6c9e99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9e9c:{NFSU2_TR(0x6c9e9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c9e9f:{NFSU2_TR(0x6c9e9f);
{goto L6c9ed9;}
}
B6c9ea1:L6c9ea1:{c.instructions+=3;NFSU2_TR(0x6c9ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9ea7:{NFSU2_TR(0x6c9ea7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9ea8:{NFSU2_TR(0x6c9ea8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9eadull));
TAIL_STATIC(0x6995c1u,699);
}
B6c9ead:L6c9ead:{c.instructions+=4;NFSU2_TR(0x6c9ead);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9eaf:{NFSU2_TR(0x6c9eaf);
__builtin_memmove((R+4),(R+12),4);
}
B6c9eb1:{NFSU2_TR(0x6c9eb1);
__builtin_memmove((R+28),(R+0),4);
}
B6c9eb3:{NFSU2_TR(0x6c9eb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9eb8ull));
TAIL_STATIC(0x6739efu,673);
}
B6c9eb8:L6c9eb8:{c.instructions+=2;NFSU2_TR(0x6c9eb8);
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
B6c9eba:{NFSU2_TR(0x6c9eba);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6c9ec3;}}
}
B6c9ebc:L6c9ebc:{c.instructions+=2;NFSU2_TR(0x6c9ebc);
__builtin_memmove((R+0),(R+28),4);
}
B6c9ebe:{NFSU2_TR(0x6c9ebe);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9df6u);}goto L6c9df6;}
}
B6c9ec3:L6c9ec3:{c.instructions+=4;NFSU2_TR(0x6c9ec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c9ec9:{NFSU2_TR(0x6c9ec9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9eca:{NFSU2_TR(0x6c9eca);
__builtin_memmove((R+4),(R+24),4);
}
B6c9ecc:{NFSU2_TR(0x6c9ecc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c9ed1ull));
TAIL_STATIC(0x698eb3u,698);
}
B6c9ed1:L6c9ed1:{c.instructions+=2;NFSU2_TR(0x6c9ed1);
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
B6c9ed3:{NFSU2_TR(0x6c9ed3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9df6u);}goto L6c9df6;}}
}
B6c9ed9:L6c9ed9:{c.instructions+=2;NFSU2_TR(0x6c9ed9);
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
B6c9edb:{NFSU2_TR(0x6c9edb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9df6u);}goto L6c9df6;}
}
B6c9ee0:L6c9ee0:{c.instructions+=10;NFSU2_TR(0x6c9ee0);
__builtin_memmove((R+28),(R+28),4);
}
B6c9ee2:{NFSU2_TR(0x6c9ee2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9ee3:{NFSU2_TR(0x6c9ee3);
__builtin_memmove((R+20),(R+16),4);
}
B6c9ee5:{NFSU2_TR(0x6c9ee5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6c9ee8:{NFSU2_TR(0x6c9ee8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9ee9:{NFSU2_TR(0x6c9ee9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9eea:{NFSU2_TR(0x6c9eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c9eed:{NFSU2_TR(0x6c9eed);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x1eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c9ef0:{NFSU2_TR(0x6c9ef0);
__builtin_memmove((R+24),(R+4),4);
}
B6c9ef2:{NFSU2_TR(0x6c9ef2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c9efe;}}
}
B6c9ef4:L6c9ef4:{c.instructions+=2;NFSU2_TR(0x6c9ef4);
w4(R+0,u32(0x80004005ull));
}
B6c9ef9:{NFSU2_TR(0x6c9ef9);
TAIL_STATIC(0x6ca0e1u,6ca);
}
B6c9efe:L6c9efe:{c.instructions+=4;NFSU2_TR(0x6c9efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9f04:{NFSU2_TR(0x6c9f04);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c9f07:{NFSU2_TR(0x6c9f07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c9f08:{NFSU2_TR(0x6c9f08);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x6ca0deu,6ca);}
}
B6c9f0e:L6c9f0e:{c.instructions+=9;NFSU2_TR(0x6c9f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c9f11:{NFSU2_TR(0x6c9f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9f17:{NFSU2_TR(0x6c9f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9f1a:{NFSU2_TR(0x6c9f1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c9f1d:{NFSU2_TR(0x6c9f1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c9f1f:{NFSU2_TR(0x6c9f1f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6c9f24:{NFSU2_TR(0x6c9f24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9f29:{NFSU2_TR(0x6c9f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9f2c:{NFSU2_TR(0x6c9f2c);
if(r1(R+518)){TAIL_STATIC(0x6ca0deu,6ca);}
}
B6c9f32:L6c9f32:{c.instructions+=2;NFSU2_TR(0x6c9f32);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9f36:{NFSU2_TR(0x6c9f36);
if(r1(R+518)){{goto L6c9f4e;}}
}
B6c9f38:L6c9f38:{c.instructions+=2;NFSU2_TR(0x6c9f38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9f3d:{NFSU2_TR(0x6c9f3d);
if(r1(R+518)){TAIL_STATIC(0x6ca0deu,6ca);}
}
B6c9f43:L6c9f43:{c.instructions+=2;NFSU2_TR(0x6c9f43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9f48:{NFSU2_TR(0x6c9f48);
if(r1(R+518)){TAIL_STATIC(0x6ca0deu,6ca);}
}
B6c9f4e:L6c9f4e:{c.instructions+=2;NFSU2_TR(0x6c9f4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9f53:{NFSU2_TR(0x6c9f53);
if(r1(R+518)){{goto L6c9f6e;}}
}
B6c9f55:L6c9f55:{c.instructions+=2;NFSU2_TR(0x6c9f55);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9f5a:{NFSU2_TR(0x6c9f5a);
if(r1(R+518)){{goto L6c9f6e;}}
}
B6c9f5c:L6c9f5c:{c.instructions+=2;NFSU2_TR(0x6c9f5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9f61:{NFSU2_TR(0x6c9f61);
if(r1(R+518)){{goto L6c9f6e;}}
}
B6c9f63:L6c9f63:{c.instructions+=2;NFSU2_TR(0x6c9f63);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9f68:{NFSU2_TR(0x6c9f68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ca098u,6ca);}
}
B6c9f6e:L6c9f6e:{c.instructions+=3;NFSU2_TR(0x6c9f6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9f73:{NFSU2_TR(0x6c9f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9f7a:{NFSU2_TR(0x6c9f7a);
if(r1(R+518)){{goto L6c9f83;}}
}
B6c9f7c:L6c9f7c:{c.instructions+=2;NFSU2_TR(0x6c9f7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9f81:{NFSU2_TR(0x6c9f81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9f87;}}
}
B6c9f83:L6c9f83:{c.instructions+=1;NFSU2_TR(0x6c9f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9f87:L6c9f87:{c.instructions+=3;NFSU2_TR(0x6c9f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9f8b:{NFSU2_TR(0x6c9f8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B6c9f8e:{NFSU2_TR(0x6c9f8e);
if(r1(R+512)){TAIL_STATIC(0x6ca05bu,6ca);}
}
B6c9f94:L6c9f94:{c.instructions+=7;NFSU2_TR(0x6c9f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9f97:{NFSU2_TR(0x6c9f97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c9f99:{NFSU2_TR(0x6c9f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c9f9c:{NFSU2_TR(0x6c9f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9f9f:{NFSU2_TR(0x6c9f9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c9fa2:{NFSU2_TR(0x6c9fa2);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B6c9fa4:{NFSU2_TR(0x6c9fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c9fa7:L6c9fa7:{c.instructions+=3;NFSU2_TR(0x6c9fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c9faa:{NFSU2_TR(0x6c9faa);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+12))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6c9fad:{NFSU2_TR(0x6c9fad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9fbd;}}
}
B6c9faf:L6c9faf:{c.instructions+=3;NFSU2_TR(0x6c9faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c9fb2:{NFSU2_TR(0x6c9fb2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c9fb4:{NFSU2_TR(0x6c9fb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c9fbd;}}
}
B6c9fb6:L6c9fb6:{c.instructions+=1;NFSU2_TR(0x6c9fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9fbd:L6c9fbd:{c.instructions+=3;NFSU2_TR(0x6c9fbd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c9fc0:{NFSU2_TR(0x6c9fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c9fc3:{NFSU2_TR(0x6c9fc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c9fa7u);}goto L6c9fa7;}}
}
B6c9fc5:L6c9fc5:{c.instructions+=2;NFSU2_TR(0x6c9fc5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c9fc9:{NFSU2_TR(0x6c9fc9);
if(r1(R+518)){TAIL_STATIC(0x6ca055u,6ca);}
}
B6c9fcf:L6c9fcf:{c.instructions+=2;NFSU2_TR(0x6c9fcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9fd4:{NFSU2_TR(0x6c9fd4);
if(r1(R+518)){{goto L6c9fe8;}}
}
B6c9fd6:L6c9fd6:{c.instructions+=2;NFSU2_TR(0x6c9fd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c9fdb:{NFSU2_TR(0x6c9fdb);
if(r1(R+518)){{goto L6c9fe8;}}
}
B6c9fdd:L6c9fdd:{c.instructions+=3;NFSU2_TR(0x6c9fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9fe0:{NFSU2_TR(0x6c9fe0);
u8 U[4];
w4(U+0,u32(0x73400000ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6c9fe6:{NFSU2_TR(0x6c9fe6);
{goto L6c9fee;}
}
B6c9fe8:L6c9fe8:{c.instructions+=2;NFSU2_TR(0x6c9fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c9feb:{NFSU2_TR(0x6c9feb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6c9fee:L6c9fee:{c.instructions+=5;NFSU2_TR(0x6c9fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c9ff4:{NFSU2_TR(0x6c9ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c9ff7:{NFSU2_TR(0x6c9ff7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c9ffa:{NFSU2_TR(0x6c9ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c9ffd:{NFSU2_TR(0x6c9ffd);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
TAIL_STATIC(0x6ca001u,6ca);
}
XIT:NFSU2_TR_EXIT(0x6c9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
