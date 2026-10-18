#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_5d2(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5d9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5d9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 page_5d9(Cpu& c){return body_5d9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5d9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5d9002:goto L5d9002;
case 0x5d9003:c.instructions+=4;goto B5d9003;
case 0x5d9004:c.instructions+=3;goto B5d9004;
case 0x5d9005:c.instructions+=2;goto B5d9005;
case 0x5d9008:c.instructions+=1;goto B5d9008;
case 0x5d900d:goto L5d900d;
case 0x5d900f:c.instructions+=3;goto B5d900f;
case 0x5d9013:c.instructions+=2;goto B5d9013;
case 0x5d9015:c.instructions+=1;goto B5d9015;
case 0x5d9017:goto L5d9017;
case 0x5d9019:c.instructions+=2;goto B5d9019;
case 0x5d901b:c.instructions+=1;goto B5d901b;
case 0x5d901d:goto L5d901d;
case 0x5d9020:goto L5d9020;
case 0x5d9022:c.instructions+=1;goto B5d9022;
case 0x5d9024:goto L5d9024;
case 0x5d9028:c.instructions+=5;goto B5d9028;
case 0x5d9029:c.instructions+=4;goto B5d9029;
case 0x5d902a:c.instructions+=3;goto B5d902a;
case 0x5d902b:c.instructions+=2;goto B5d902b;
case 0x5d902d:c.instructions+=1;goto B5d902d;
case 0x5d9032:goto L5d9032;
case 0x5d9035:c.instructions+=3;goto B5d9035;
case 0x5d9037:c.instructions+=2;goto B5d9037;
case 0x5d9039:c.instructions+=1;goto B5d9039;
case 0x5d903b:goto L5d903b;
case 0x5d903f:goto L5d903f;
case 0x5d9043:c.instructions+=9;goto B5d9043;
case 0x5d9047:c.instructions+=8;goto B5d9047;
case 0x5d904b:c.instructions+=7;goto B5d904b;
case 0x5d9050:c.instructions+=6;goto B5d9050;
case 0x5d9051:c.instructions+=5;goto B5d9051;
case 0x5d9054:c.instructions+=4;goto B5d9054;
case 0x5d9056:c.instructions+=3;goto B5d9056;
case 0x5d905a:c.instructions+=2;goto B5d905a;
case 0x5d905e:c.instructions+=1;goto B5d905e;
case 0x5d9060:goto L5d9060;
case 0x5d9061:c.instructions+=6;goto B5d9061;
case 0x5d9062:c.instructions+=5;goto B5d9062;
case 0x5d9063:c.instructions+=4;goto B5d9063;
case 0x5d9065:c.instructions+=3;goto B5d9065;
case 0x5d9066:c.instructions+=2;goto B5d9066;
case 0x5d9069:c.instructions+=1;goto B5d9069;
case 0x5d9070:goto L5d9070;
case 0x5d9073:c.instructions+=26;goto B5d9073;
case 0x5d9074:c.instructions+=25;goto B5d9074;
case 0x5d9076:c.instructions+=24;goto B5d9076;
case 0x5d9078:c.instructions+=23;goto B5d9078;
case 0x5d907a:c.instructions+=22;goto B5d907a;
case 0x5d907d:c.instructions+=21;goto B5d907d;
case 0x5d9082:c.instructions+=20;goto B5d9082;
case 0x5d9085:c.instructions+=19;goto B5d9085;
case 0x5d9089:c.instructions+=18;goto B5d9089;
case 0x5d908d:c.instructions+=17;goto B5d908d;
case 0x5d908f:c.instructions+=16;goto B5d908f;
case 0x5d9093:c.instructions+=15;goto B5d9093;
case 0x5d9096:c.instructions+=14;goto B5d9096;
case 0x5d9098:c.instructions+=13;goto B5d9098;
case 0x5d909d:c.instructions+=12;goto B5d909d;
case 0x5d90a0:c.instructions+=11;goto B5d90a0;
case 0x5d90a6:c.instructions+=10;goto B5d90a6;
case 0x5d90aa:c.instructions+=9;goto B5d90aa;
case 0x5d90ad:c.instructions+=8;goto B5d90ad;
case 0x5d90b1:c.instructions+=7;goto B5d90b1;
case 0x5d90b5:c.instructions+=6;goto B5d90b5;
case 0x5d90b6:c.instructions+=5;goto B5d90b6;
case 0x5d90b9:c.instructions+=4;goto B5d90b9;
case 0x5d90ba:c.instructions+=3;goto B5d90ba;
case 0x5d90c0:c.instructions+=2;goto B5d90c0;
case 0x5d90c4:c.instructions+=1;goto B5d90c4;
case 0x5d90c9:goto L5d90c9;
case 0x5d90cd:c.instructions+=8;goto B5d90cd;
case 0x5d90d1:c.instructions+=7;goto B5d90d1;
case 0x5d90d5:c.instructions+=6;goto B5d90d5;
case 0x5d90d8:c.instructions+=5;goto B5d90d8;
case 0x5d90dd:c.instructions+=4;goto B5d90dd;
case 0x5d90e0:c.instructions+=3;goto B5d90e0;
case 0x5d90e1:c.instructions+=2;goto B5d90e1;
case 0x5d90e4:c.instructions+=1;goto B5d90e4;
case 0x5d90e9:goto L5d90e9;
case 0x5d90ed:c.instructions+=10;goto B5d90ed;
case 0x5d90ef:c.instructions+=9;goto B5d90ef;
case 0x5d90f3:c.instructions+=8;goto B5d90f3;
case 0x5d90f7:c.instructions+=7;goto B5d90f7;
case 0x5d90f9:c.instructions+=6;goto B5d90f9;
case 0x5d90fb:c.instructions+=5;goto B5d90fb;
case 0x5d90ff:c.instructions+=4;goto B5d90ff;
case 0x5d9101:c.instructions+=3;goto B5d9101;
case 0x5d9103:c.instructions+=2;goto B5d9103;
case 0x5d9106:c.instructions+=1;goto B5d9106;
case 0x5d9108:goto L5d9108;
case 0x5d910e:c.instructions+=1;goto B5d910e;
case 0x5d9113:goto L5d9113;
case 0x5d9115:c.instructions+=8;goto B5d9115;
case 0x5d9117:c.instructions+=7;goto B5d9117;
case 0x5d911a:c.instructions+=6;goto B5d911a;
case 0x5d911d:c.instructions+=5;goto B5d911d;
case 0x5d9121:c.instructions+=4;goto B5d9121;
case 0x5d9123:c.instructions+=3;goto B5d9123;
case 0x5d9124:c.instructions+=2;goto B5d9124;
case 0x5d9127:c.instructions+=1;goto B5d9127;
case 0x5d912a:goto L5d912a;
case 0x5d912c:c.instructions+=4;goto B5d912c;
case 0x5d912e:c.instructions+=3;goto B5d912e;
case 0x5d912f:c.instructions+=2;goto B5d912f;
case 0x5d9132:c.instructions+=1;goto B5d9132;
case 0x5d9140:goto L5d9140;
case 0x5d9143:c.instructions+=9;goto B5d9143;
case 0x5d9147:c.instructions+=8;goto B5d9147;
case 0x5d9148:c.instructions+=7;goto B5d9148;
case 0x5d9149:c.instructions+=6;goto B5d9149;
case 0x5d914b:c.instructions+=5;goto B5d914b;
case 0x5d914d:c.instructions+=4;goto B5d914d;
case 0x5d9153:c.instructions+=3;goto B5d9153;
case 0x5d9157:c.instructions+=2;goto B5d9157;
case 0x5d915f:c.instructions+=1;goto B5d915f;
case 0x5d9161:goto L5d9161;
case 0x5d9164:c.instructions+=5;goto B5d9164;
case 0x5d9165:c.instructions+=4;goto B5d9165;
case 0x5d9168:c.instructions+=3;goto B5d9168;
case 0x5d9169:c.instructions+=2;goto B5d9169;
case 0x5d916d:c.instructions+=1;goto B5d916d;
case 0x5d9170:goto L5d9170;
case 0x5d9173:c.instructions+=2;goto B5d9173;
case 0x5d9175:c.instructions+=1;goto B5d9175;
case 0x5d9177:goto L5d9177;
case 0x5d917b:c.instructions+=4;goto B5d917b;
case 0x5d917c:c.instructions+=3;goto B5d917c;
case 0x5d917d:c.instructions+=2;goto B5d917d;
case 0x5d9180:c.instructions+=1;goto B5d9180;
case 0x5d9185:goto L5d9185;
case 0x5d9187:c.instructions+=3;goto B5d9187;
case 0x5d918b:c.instructions+=2;goto B5d918b;
case 0x5d918d:c.instructions+=1;goto B5d918d;
case 0x5d918f:goto L5d918f;
case 0x5d9192:c.instructions+=2;goto B5d9192;
case 0x5d9194:c.instructions+=1;goto B5d9194;
case 0x5d9196:goto L5d9196;
case 0x5d9198:c.instructions+=1;goto B5d9198;
case 0x5d919a:goto L5d919a;
case 0x5d919e:c.instructions+=4;goto B5d919e;
case 0x5d919f:c.instructions+=3;goto B5d919f;
case 0x5d91a0:c.instructions+=2;goto B5d91a0;
case 0x5d91a2:c.instructions+=1;goto B5d91a2;
case 0x5d91a7:goto L5d91a7;
case 0x5d91aa:c.instructions+=3;goto B5d91aa;
case 0x5d91ac:c.instructions+=2;goto B5d91ac;
case 0x5d91ae:c.instructions+=1;goto B5d91ae;
case 0x5d91b0:goto L5d91b0;
case 0x5d91b4:goto L5d91b4;
case 0x5d91b8:c.instructions+=7;goto B5d91b8;
case 0x5d91bc:c.instructions+=6;goto B5d91bc;
case 0x5d91c1:c.instructions+=5;goto B5d91c1;
case 0x5d91c2:c.instructions+=4;goto B5d91c2;
case 0x5d91c5:c.instructions+=3;goto B5d91c5;
case 0x5d91c7:c.instructions+=2;goto B5d91c7;
case 0x5d91cb:c.instructions+=1;goto B5d91cb;
case 0x5d91cd:goto L5d91cd;
case 0x5d91ce:c.instructions+=1;goto B5d91ce;
case 0x5d91cf:goto L5d91cf;
case 0x5d91d0:c.instructions+=4;goto B5d91d0;
case 0x5d91d2:c.instructions+=3;goto B5d91d2;
case 0x5d91d3:c.instructions+=2;goto B5d91d3;
case 0x5d91d6:c.instructions+=1;goto B5d91d6;
case 0x5d91e0:goto L5d91e0;
case 0x5d91e3:c.instructions+=8;goto B5d91e3;
case 0x5d91e4:c.instructions+=7;goto B5d91e4;
case 0x5d91e5:c.instructions+=6;goto B5d91e5;
case 0x5d91e6:c.instructions+=5;goto B5d91e6;
case 0x5d91e7:c.instructions+=4;goto B5d91e7;
case 0x5d91ea:c.instructions+=3;goto B5d91ea;
case 0x5d91ed:c.instructions+=2;goto B5d91ed;
case 0x5d91f5:c.instructions+=1;goto B5d91f5;
case 0x5d9200:goto L5d9200;
case 0x5d9204:c.instructions+=4;goto B5d9204;
case 0x5d920a:c.instructions+=3;goto B5d920a;
case 0x5d920c:c.instructions+=2;goto B5d920c;
case 0x5d9210:c.instructions+=1;goto B5d9210;
case 0x5d9212:goto L5d9212;
case 0x5d9215:c.instructions+=2;goto B5d9215;
case 0x5d9217:c.instructions+=1;goto B5d9217;
case 0x5d9220:goto L5d9220;
case 0x5d9223:c.instructions+=4;goto B5d9223;
case 0x5d9229:c.instructions+=3;goto B5d9229;
case 0x5d922b:c.instructions+=2;goto B5d922b;
case 0x5d922e:c.instructions+=1;goto B5d922e;
case 0x5d9230:goto L5d9230;
case 0x5d9232:c.instructions+=2;goto B5d9232;
case 0x5d9234:c.instructions+=1;goto B5d9234;
case 0x5d9236:goto L5d9236;
case 0x5d9239:c.instructions+=3;goto B5d9239;
case 0x5d923b:c.instructions+=2;goto B5d923b;
case 0x5d923c:c.instructions+=1;goto B5d923c;
case 0x5d923e:goto L5d923e;
case 0x5d9242:c.instructions+=21;goto B5d9242;
case 0x5d9244:c.instructions+=20;goto B5d9244;
case 0x5d9246:c.instructions+=19;goto B5d9246;
case 0x5d924a:c.instructions+=18;goto B5d924a;
case 0x5d924e:c.instructions+=17;goto B5d924e;
case 0x5d9250:c.instructions+=16;goto B5d9250;
case 0x5d9253:c.instructions+=15;goto B5d9253;
case 0x5d9256:c.instructions+=14;goto B5d9256;
case 0x5d925a:c.instructions+=13;goto B5d925a;
case 0x5d925d:c.instructions+=12;goto B5d925d;
case 0x5d9261:c.instructions+=11;goto B5d9261;
case 0x5d9263:c.instructions+=10;goto B5d9263;
case 0x5d9267:c.instructions+=9;goto B5d9267;
case 0x5d926b:c.instructions+=8;goto B5d926b;
case 0x5d9271:c.instructions+=7;goto B5d9271;
case 0x5d9275:c.instructions+=6;goto B5d9275;
case 0x5d927b:c.instructions+=5;goto B5d927b;
case 0x5d927f:c.instructions+=4;goto B5d927f;
case 0x5d9281:c.instructions+=3;goto B5d9281;
case 0x5d9283:c.instructions+=2;goto B5d9283;
case 0x5d9286:c.instructions+=1;goto B5d9286;
case 0x5d9288:goto L5d9288;
case 0x5d928a:c.instructions+=1;goto B5d928a;
case 0x5d928e:goto L5d928e;
case 0x5d9293:c.instructions+=13;goto B5d9293;
case 0x5d9297:c.instructions+=12;goto B5d9297;
case 0x5d929a:c.instructions+=11;goto B5d929a;
case 0x5d929e:c.instructions+=10;goto B5d929e;
case 0x5d929f:c.instructions+=9;goto B5d929f;
case 0x5d92a1:c.instructions+=8;goto B5d92a1;
case 0x5d92a5:c.instructions+=7;goto B5d92a5;
case 0x5d92ab:c.instructions+=6;goto B5d92ab;
case 0x5d92ad:c.instructions+=5;goto B5d92ad;
case 0x5d92b1:c.instructions+=4;goto B5d92b1;
case 0x5d92b5:c.instructions+=3;goto B5d92b5;
case 0x5d92b6:c.instructions+=2;goto B5d92b6;
case 0x5d92b8:c.instructions+=1;goto B5d92b8;
case 0x5d92bd:goto L5d92bd;
case 0x5d92c1:c.instructions+=15;goto B5d92c1;
case 0x5d92c5:c.instructions+=14;goto B5d92c5;
case 0x5d92c8:c.instructions+=13;goto B5d92c8;
case 0x5d92cc:c.instructions+=12;goto B5d92cc;
case 0x5d92cf:c.instructions+=11;goto B5d92cf;
case 0x5d92d3:c.instructions+=10;goto B5d92d3;
case 0x5d92d7:c.instructions+=9;goto B5d92d7;
case 0x5d92db:c.instructions+=8;goto B5d92db;
case 0x5d92e1:c.instructions+=7;goto B5d92e1;
case 0x5d92e5:c.instructions+=6;goto B5d92e5;
case 0x5d92eb:c.instructions+=5;goto B5d92eb;
case 0x5d92ef:c.instructions+=4;goto B5d92ef;
case 0x5d92f1:c.instructions+=3;goto B5d92f1;
case 0x5d92f3:c.instructions+=2;goto B5d92f3;
case 0x5d92f6:c.instructions+=1;goto B5d92f6;
case 0x5d92f8:goto L5d92f8;
case 0x5d92fa:c.instructions+=1;goto B5d92fa;
case 0x5d92fe:goto L5d92fe;
case 0x5d9300:c.instructions+=3;goto B5d9300;
case 0x5d9302:c.instructions+=2;goto B5d9302;
case 0x5d9308:c.instructions+=1;goto B5d9308;
case 0x5d930d:goto L5d930d;
case 0x5d930f:c.instructions+=8;goto B5d930f;
case 0x5d9312:c.instructions+=7;goto B5d9312;
case 0x5d9316:c.instructions+=6;goto B5d9316;
case 0x5d931a:c.instructions+=5;goto B5d931a;
case 0x5d931d:c.instructions+=4;goto B5d931d;
case 0x5d9323:c.instructions+=3;goto B5d9323;
case 0x5d9324:c.instructions+=2;goto B5d9324;
case 0x5d9328:c.instructions+=1;goto B5d9328;
case 0x5d932e:goto L5d932e;
case 0x5d932f:c.instructions+=5;goto B5d932f;
case 0x5d9330:c.instructions+=4;goto B5d9330;
case 0x5d9331:c.instructions+=3;goto B5d9331;
case 0x5d9332:c.instructions+=2;goto B5d9332;
case 0x5d9335:c.instructions+=1;goto B5d9335;
case 0x5d9340:goto L5d9340;
case 0x5d9341:c.instructions+=7;goto B5d9341;
case 0x5d9342:c.instructions+=6;goto B5d9342;
case 0x5d9344:c.instructions+=5;goto B5d9344;
case 0x5d9349:c.instructions+=4;goto B5d9349;
case 0x5d934a:c.instructions+=3;goto B5d934a;
case 0x5d934e:c.instructions+=2;goto B5d934e;
case 0x5d9356:c.instructions+=1;goto B5d9356;
case 0x5d935c:goto L5d935c;
case 0x5d9360:c.instructions+=4;goto B5d9360;
case 0x5d9361:c.instructions+=3;goto B5d9361;
case 0x5d9367:c.instructions+=2;goto B5d9367;
case 0x5d9368:c.instructions+=1;goto B5d9368;
case 0x5d936d:goto L5d936d;
case 0x5d936f:c.instructions+=2;goto B5d936f;
case 0x5d9372:c.instructions+=1;goto B5d9372;
case 0x5d9378:goto L5d9378;
case 0x5d937c:c.instructions+=2;goto B5d937c;
case 0x5d937e:c.instructions+=1;goto B5d937e;
case 0x5d9380:goto L5d9380;
case 0x5d9382:c.instructions+=1;goto B5d9382;
case 0x5d9384:goto L5d9384;
case 0x5d9388:c.instructions+=4;goto B5d9388;
case 0x5d938b:c.instructions+=3;goto B5d938b;
case 0x5d938f:c.instructions+=2;goto B5d938f;
case 0x5d9393:c.instructions+=1;goto B5d9393;
case 0x5d9395:goto L5d9395;
case 0x5d9398:c.instructions+=3;goto B5d9398;
case 0x5d939b:c.instructions+=2;goto B5d939b;
case 0x5d939f:c.instructions+=1;goto B5d939f;
case 0x5d93a3:goto L5d93a3;
case 0x5d93a6:c.instructions+=3;goto B5d93a6;
case 0x5d93ac:c.instructions+=2;goto B5d93ac;
case 0x5d93ae:c.instructions+=1;goto B5d93ae;
case 0x5d93b0:goto L5d93b0;
case 0x5d93b4:c.instructions+=4;goto B5d93b4;
case 0x5d93b7:c.instructions+=3;goto B5d93b7;
case 0x5d93bb:c.instructions+=2;goto B5d93bb;
case 0x5d93bf:c.instructions+=1;goto B5d93bf;
case 0x5d93c1:goto L5d93c1;
case 0x5d93c4:c.instructions+=3;goto B5d93c4;
case 0x5d93c7:c.instructions+=2;goto B5d93c7;
case 0x5d93cb:c.instructions+=1;goto B5d93cb;
case 0x5d93cf:goto L5d93cf;
case 0x5d93d5:c.instructions+=8;goto B5d93d5;
case 0x5d93d6:c.instructions+=7;goto B5d93d6;
case 0x5d93d9:c.instructions+=6;goto B5d93d9;
case 0x5d93db:c.instructions+=5;goto B5d93db;
case 0x5d93e1:c.instructions+=4;goto B5d93e1;
case 0x5d93e4:c.instructions+=3;goto B5d93e4;
case 0x5d93e5:c.instructions+=2;goto B5d93e5;
case 0x5d93e7:c.instructions+=1;goto B5d93e7;
case 0x5d93ec:goto L5d93ec;
case 0x5d93f0:c.instructions+=7;goto B5d93f0;
case 0x5d93f4:c.instructions+=6;goto B5d93f4;
case 0x5d93f8:c.instructions+=5;goto B5d93f8;
case 0x5d93f9:c.instructions+=4;goto B5d93f9;
case 0x5d93fc:c.instructions+=3;goto B5d93fc;
case 0x5d93fe:c.instructions+=2;goto B5d93fe;
case 0x5d9402:c.instructions+=1;goto B5d9402;
case 0x5d9408:goto L5d9408;
case 0x5d9409:c.instructions+=1;goto B5d9409;
case 0x5d940a:goto L5d940a;
case 0x5d940f:c.instructions+=6;goto B5d940f;
case 0x5d9414:c.instructions+=5;goto B5d9414;
case 0x5d941c:c.instructions+=4;goto B5d941c;
case 0x5d941d:c.instructions+=3;goto B5d941d;
case 0x5d941e:c.instructions+=2;goto B5d941e;
case 0x5d941f:c.instructions+=1;goto B5d941f;
case 0x5d9430:goto L5d9430;
case 0x5d9432:c.instructions+=9;goto B5d9432;
case 0x5d9433:c.instructions+=8;goto B5d9433;
case 0x5d9434:c.instructions+=7;goto B5d9434;
case 0x5d9435:c.instructions+=6;goto B5d9435;
case 0x5d943f:c.instructions+=5;goto B5d943f;
case 0x5d9449:c.instructions+=4;goto B5d9449;
case 0x5d9453:c.instructions+=3;goto B5d9453;
case 0x5d9455:c.instructions+=2;goto B5d9455;
case 0x5d945a:c.instructions+=1;goto B5d945a;
case 0x5d9460:goto L5d9460;
case 0x5d9462:goto L5d9462;
case 0x5d9467:c.instructions+=1;goto B5d9467;
case 0x5d946d:goto L5d946d;
case 0x5d946f:goto L5d946f;
case 0x5d9474:c.instructions+=1;goto B5d9474;
case 0x5d947a:goto L5d947a;
case 0x5d947c:goto L5d947c;
case 0x5d947f:c.instructions+=6;goto B5d947f;
case 0x5d9481:c.instructions+=5;goto B5d9481;
case 0x5d9484:c.instructions+=4;goto B5d9484;
case 0x5d9486:c.instructions+=3;goto B5d9486;
case 0x5d9489:c.instructions+=2;goto B5d9489;
case 0x5d948c:c.instructions+=1;goto B5d948c;
case 0x5d9491:goto L5d9491;
case 0x5d9493:c.instructions+=2;goto B5d9493;
case 0x5d9495:c.instructions+=1;goto B5d9495;
case 0x5d9497:goto L5d9497;
case 0x5d949a:c.instructions+=3;goto B5d949a;
case 0x5d949d:c.instructions+=2;goto B5d949d;
case 0x5d94a0:c.instructions+=1;goto B5d94a0;
case 0x5d94a2:goto L5d94a2;
case 0x5d94a8:c.instructions+=2;goto B5d94a8;
case 0x5d94ae:c.instructions+=1;goto B5d94ae;
case 0x5d94b0:goto L5d94b0;
case 0x5d94b7:goto L5d94b7;
case 0x5d94bd:c.instructions+=3;goto B5d94bd;
case 0x5d94c0:c.instructions+=2;goto B5d94c0;
case 0x5d94c2:c.instructions+=1;goto B5d94c2;
case 0x5d94c4:goto L5d94c4;
case 0x5d94ca:c.instructions+=2;goto B5d94ca;
case 0x5d94d0:c.instructions+=1;goto B5d94d0;
case 0x5d94d2:goto L5d94d2;
case 0x5d94d9:c.instructions+=5;goto B5d94d9;
case 0x5d94dc:c.instructions+=4;goto B5d94dc;
case 0x5d94de:c.instructions+=3;goto B5d94de;
case 0x5d94e1:c.instructions+=2;goto B5d94e1;
case 0x5d94e4:c.instructions+=1;goto B5d94e4;
case 0x5d94e6:goto L5d94e6;
case 0x5d94ec:c.instructions+=1;goto B5d94ec;
case 0x5d94ee:goto L5d94ee;
case 0x5d94f4:c.instructions+=2;goto B5d94f4;
case 0x5d94fa:c.instructions+=1;goto B5d94fa;
case 0x5d94fc:goto L5d94fc;
case 0x5d9503:c.instructions+=5;goto B5d9503;
case 0x5d9506:c.instructions+=4;goto B5d9506;
case 0x5d9508:c.instructions+=3;goto B5d9508;
case 0x5d950b:c.instructions+=2;goto B5d950b;
case 0x5d950e:c.instructions+=1;goto B5d950e;
case 0x5d9510:goto L5d9510;
case 0x5d9516:goto L5d9516;
case 0x5d9519:c.instructions+=2;goto B5d9519;
case 0x5d951a:c.instructions+=1;goto B5d951a;
case 0x5d9520:goto L5d9520;
case 0x5d9521:c.instructions+=3;goto B5d9521;
case 0x5d9522:c.instructions+=2;goto B5d9522;
case 0x5d9523:c.instructions+=1;goto B5d9523;
case 0x5d9530:goto L5d9530;
case 0x5d9531:c.instructions+=5;goto B5d9531;
case 0x5d9533:c.instructions+=4;goto B5d9533;
case 0x5d9537:c.instructions+=3;goto B5d9537;
case 0x5d953a:c.instructions+=2;goto B5d953a;
case 0x5d953c:c.instructions+=1;goto B5d953c;
case 0x5d953e:goto L5d953e;
case 0x5d9542:c.instructions+=3;goto B5d9542;
case 0x5d9543:c.instructions+=2;goto B5d9543;
case 0x5d954b:c.instructions+=1;goto B5d954b;
case 0x5d9550:goto L5d9550;
case 0x5d9554:c.instructions+=2;goto B5d9554;
case 0x5d9557:c.instructions+=1;goto B5d9557;
case 0x5d9559:goto L5d9559;
case 0x5d955d:c.instructions+=3;goto B5d955d;
case 0x5d9563:c.instructions+=2;goto B5d9563;
case 0x5d9564:c.instructions+=1;goto B5d9564;
case 0x5d9567:goto L5d9567;
case 0x5d9569:c.instructions+=3;goto B5d9569;
case 0x5d956c:c.instructions+=2;goto B5d956c;
case 0x5d956e:c.instructions+=1;goto B5d956e;
case 0x5d9570:goto L5d9570;
case 0x5d9574:c.instructions+=1;goto B5d9574;
case 0x5d9576:goto L5d9576;
case 0x5d9578:goto L5d9578;
case 0x5d957e:c.instructions+=6;goto B5d957e;
case 0x5d9581:c.instructions+=5;goto B5d9581;
case 0x5d9588:c.instructions+=4;goto B5d9588;
case 0x5d958c:c.instructions+=3;goto B5d958c;
case 0x5d958e:c.instructions+=2;goto B5d958e;
case 0x5d958f:c.instructions+=1;goto B5d958f;
case 0x5d9592:goto L5d9592;
case 0x5d9596:c.instructions+=4;goto B5d9596;
case 0x5d9598:c.instructions+=3;goto B5d9598;
case 0x5d959a:c.instructions+=2;goto B5d959a;
case 0x5d95a2:c.instructions+=1;goto B5d95a2;
case 0x5d95a4:goto L5d95a4;
case 0x5d95a7:c.instructions+=2;goto B5d95a7;
case 0x5d95ad:c.instructions+=1;goto B5d95ad;
case 0x5d95af:goto L5d95af;
case 0x5d95b3:c.instructions+=1;goto B5d95b3;
case 0x5d95b5:goto L5d95b5;
case 0x5d95b7:goto L5d95b7;
case 0x5d95b9:c.instructions+=15;goto B5d95b9;
case 0x5d95be:c.instructions+=14;goto B5d95be;
case 0x5d95bf:c.instructions+=13;goto B5d95bf;
case 0x5d95c1:c.instructions+=12;goto B5d95c1;
case 0x5d95c6:c.instructions+=11;goto B5d95c6;
case 0x5d95c8:c.instructions+=10;goto B5d95c8;
case 0x5d95ca:c.instructions+=9;goto B5d95ca;
case 0x5d95cd:c.instructions+=8;goto B5d95cd;
case 0x5d95cf:c.instructions+=7;goto B5d95cf;
case 0x5d95d2:c.instructions+=6;goto B5d95d2;
case 0x5d95d4:c.instructions+=5;goto B5d95d4;
case 0x5d95d8:c.instructions+=4;goto B5d95d8;
case 0x5d95db:c.instructions+=3;goto B5d95db;
case 0x5d95dd:c.instructions+=2;goto B5d95dd;
case 0x5d95e1:c.instructions+=1;goto B5d95e1;
case 0x5d95e2:goto L5d95e2;
case 0x5d95e6:c.instructions+=2;goto B5d95e6;
case 0x5d95e7:c.instructions+=1;goto B5d95e7;
case 0x5d95ec:goto L5d95ec;
case 0x5d95ed:c.instructions+=1;goto B5d95ed;
case 0x5d95f0:goto L5d95f0;
case 0x5d95f1:c.instructions+=4;goto B5d95f1;
case 0x5d95f2:c.instructions+=3;goto B5d95f2;
case 0x5d95f3:c.instructions+=2;goto B5d95f3;
case 0x5d95f5:c.instructions+=1;goto B5d95f5;
case 0x5d95f8:goto L5d95f8;
case 0x5d95fa:c.instructions+=1;goto B5d95fa;
case 0x5d95fc:goto L5d95fc;
case 0x5d95fe:c.instructions+=2;goto B5d95fe;
case 0x5d9600:c.instructions+=1;goto B5d9600;
case 0x5d9602:goto L5d9602;
case 0x5d9609:c.instructions+=3;goto B5d9609;
case 0x5d960b:c.instructions+=2;goto B5d960b;
case 0x5d960f:c.instructions+=1;goto B5d960f;
case 0x5d9611:goto L5d9611;
case 0x5d9617:c.instructions+=1;goto B5d9617;
case 0x5d9620:goto L5d9620;
case 0x5d9626:c.instructions+=5;goto B5d9626;
case 0x5d962a:c.instructions+=4;goto B5d962a;
case 0x5d962b:c.instructions+=3;goto B5d962b;
case 0x5d962e:c.instructions+=2;goto B5d962e;
case 0x5d9630:c.instructions+=1;goto B5d9630;
case 0x5d9632:goto L5d9632;
case 0x5d9633:c.instructions+=3;goto B5d9633;
case 0x5d9636:c.instructions+=2;goto B5d9636;
case 0x5d963c:c.instructions+=1;goto B5d963c;
case 0x5d963e:goto L5d963e;
case 0x5d963f:c.instructions+=3;goto B5d963f;
case 0x5d9640:c.instructions+=2;goto B5d9640;
case 0x5d9641:c.instructions+=1;goto B5d9641;
case 0x5d9650:goto L5d9650;
case 0x5d9654:c.instructions+=6;goto B5d9654;
case 0x5d9655:c.instructions+=5;goto B5d9655;
case 0x5d9656:c.instructions+=4;goto B5d9656;
case 0x5d9657:c.instructions+=3;goto B5d9657;
case 0x5d965c:c.instructions+=2;goto B5d965c;
case 0x5d965f:c.instructions+=1;goto B5d965f;
case 0x5d9660:goto L5d9660;
case 0x5d9663:c.instructions+=2;goto B5d9663;
case 0x5d9665:c.instructions+=1;goto B5d9665;
case 0x5d9667:goto L5d9667;
case 0x5d966a:c.instructions+=2;goto B5d966a;
case 0x5d966c:c.instructions+=1;goto B5d966c;
case 0x5d966e:goto L5d966e;
case 0x5d9671:c.instructions+=7;goto B5d9671;
case 0x5d9673:c.instructions+=6;goto B5d9673;
case 0x5d9675:c.instructions+=5;goto B5d9675;
case 0x5d9677:c.instructions+=4;goto B5d9677;
case 0x5d967a:c.instructions+=3;goto B5d967a;
case 0x5d9680:c.instructions+=2;goto B5d9680;
case 0x5d9682:c.instructions+=1;goto B5d9682;
case 0x5d9685:goto L5d9685;
case 0x5d9688:c.instructions+=2;goto B5d9688;
case 0x5d968a:c.instructions+=1;goto B5d968a;
case 0x5d968c:goto L5d968c;
case 0x5d968e:c.instructions+=2;goto B5d968e;
case 0x5d9690:c.instructions+=1;goto B5d9690;
case 0x5d9692:goto L5d9692;
case 0x5d9695:c.instructions+=7;goto B5d9695;
case 0x5d9697:c.instructions+=6;goto B5d9697;
case 0x5d9699:c.instructions+=5;goto B5d9699;
case 0x5d969b:c.instructions+=4;goto B5d969b;
case 0x5d969e:c.instructions+=3;goto B5d969e;
case 0x5d96a4:c.instructions+=2;goto B5d96a4;
case 0x5d96a6:c.instructions+=1;goto B5d96a6;
case 0x5d96a9:goto L5d96a9;
case 0x5d96ab:c.instructions+=1;goto B5d96ab;
case 0x5d96ad:goto L5d96ad;
case 0x5d96b0:c.instructions+=2;goto B5d96b0;
case 0x5d96b2:c.instructions+=1;goto B5d96b2;
case 0x5d96b4:goto L5d96b4;
case 0x5d96b7:c.instructions+=7;goto B5d96b7;
case 0x5d96b9:c.instructions+=6;goto B5d96b9;
case 0x5d96bb:c.instructions+=5;goto B5d96bb;
case 0x5d96bd:c.instructions+=4;goto B5d96bd;
case 0x5d96c0:c.instructions+=3;goto B5d96c0;
case 0x5d96c6:c.instructions+=2;goto B5d96c6;
case 0x5d96c8:c.instructions+=1;goto B5d96c8;
case 0x5d96cb:goto L5d96cb;
case 0x5d96ce:c.instructions+=2;goto B5d96ce;
case 0x5d96d0:c.instructions+=1;goto B5d96d0;
case 0x5d96d2:goto L5d96d2;
case 0x5d96d5:c.instructions+=2;goto B5d96d5;
case 0x5d96d7:c.instructions+=1;goto B5d96d7;
case 0x5d96d9:goto L5d96d9;
case 0x5d96dc:c.instructions+=7;goto B5d96dc;
case 0x5d96de:c.instructions+=6;goto B5d96de;
case 0x5d96e0:c.instructions+=5;goto B5d96e0;
case 0x5d96e2:c.instructions+=4;goto B5d96e2;
case 0x5d96e5:c.instructions+=3;goto B5d96e5;
case 0x5d96eb:c.instructions+=2;goto B5d96eb;
case 0x5d96ed:c.instructions+=1;goto B5d96ed;
case 0x5d96f0:goto L5d96f0;
case 0x5d96f3:c.instructions+=4;goto B5d96f3;
case 0x5d96f6:c.instructions+=3;goto B5d96f6;
case 0x5d96f9:c.instructions+=2;goto B5d96f9;
case 0x5d96fe:c.instructions+=1;goto B5d96fe;
case 0x5d9704:goto L5d9704;
case 0x5d9705:c.instructions+=3;goto B5d9705;
case 0x5d9706:c.instructions+=2;goto B5d9706;
case 0x5d9707:c.instructions+=1;goto B5d9707;
case 0x5d9710:goto L5d9710;
case 0x5d9711:c.instructions+=12;goto B5d9711;
case 0x5d9713:c.instructions+=11;goto B5d9713;
case 0x5d9716:c.instructions+=10;goto B5d9716;
case 0x5d9719:c.instructions+=9;goto B5d9719;
case 0x5d971a:c.instructions+=8;goto B5d971a;
case 0x5d971b:c.instructions+=7;goto B5d971b;
case 0x5d971d:c.instructions+=6;goto B5d971d;
case 0x5d971e:c.instructions+=5;goto B5d971e;
case 0x5d971f:c.instructions+=4;goto B5d971f;
case 0x5d9723:c.instructions+=3;goto B5d9723;
case 0x5d9728:c.instructions+=2;goto B5d9728;
case 0x5d972b:c.instructions+=1;goto B5d972b;
case 0x5d9730:goto L5d9730;
case 0x5d9733:c.instructions+=3;goto B5d9733;
case 0x5d9735:c.instructions+=2;goto B5d9735;
case 0x5d973a:c.instructions+=1;goto B5d973a;
case 0x5d973c:goto L5d973c;
case 0x5d973f:c.instructions+=2;goto B5d973f;
case 0x5d9741:c.instructions+=1;goto B5d9741;
case 0x5d9743:goto L5d9743;
case 0x5d9746:goto L5d9746;
case 0x5d9749:c.instructions+=2;goto B5d9749;
case 0x5d974b:c.instructions+=1;goto B5d974b;
case 0x5d974d:goto L5d974d;
case 0x5d974f:c.instructions+=2;goto B5d974f;
case 0x5d9751:c.instructions+=1;goto B5d9751;
case 0x5d9753:goto L5d9753;
case 0x5d9756:goto L5d9756;
case 0x5d9758:c.instructions+=1;goto B5d9758;
case 0x5d975a:goto L5d975a;
case 0x5d975d:c.instructions+=2;goto B5d975d;
case 0x5d975f:c.instructions+=1;goto B5d975f;
case 0x5d9761:goto L5d9761;
case 0x5d9764:goto L5d9764;
case 0x5d9767:c.instructions+=2;goto B5d9767;
case 0x5d9769:c.instructions+=1;goto B5d9769;
case 0x5d976b:goto L5d976b;
case 0x5d976e:c.instructions+=2;goto B5d976e;
case 0x5d9770:c.instructions+=1;goto B5d9770;
case 0x5d9772:goto L5d9772;
case 0x5d9775:goto L5d9775;
case 0x5d9778:c.instructions+=2;goto B5d9778;
case 0x5d977a:c.instructions+=1;goto B5d977a;
case 0x5d977c:goto L5d977c;
case 0x5d977f:c.instructions+=2;goto B5d977f;
case 0x5d9781:c.instructions+=1;goto B5d9781;
case 0x5d9783:goto L5d9783;
case 0x5d9786:goto L5d9786;
case 0x5d9789:c.instructions+=2;goto B5d9789;
case 0x5d978b:c.instructions+=1;goto B5d978b;
case 0x5d978d:goto L5d978d;
case 0x5d9790:c.instructions+=2;goto B5d9790;
case 0x5d9792:c.instructions+=1;goto B5d9792;
case 0x5d9794:goto L5d9794;
case 0x5d9797:goto L5d9797;
case 0x5d979a:c.instructions+=2;goto B5d979a;
case 0x5d979c:c.instructions+=1;goto B5d979c;
case 0x5d979e:goto L5d979e;
case 0x5d97a1:c.instructions+=2;goto B5d97a1;
case 0x5d97a3:c.instructions+=1;goto B5d97a3;
case 0x5d97a5:goto L5d97a5;
case 0x5d97a8:goto L5d97a8;
case 0x5d97ab:c.instructions+=2;goto B5d97ab;
case 0x5d97ad:c.instructions+=1;goto B5d97ad;
case 0x5d97af:goto L5d97af;
case 0x5d97b2:c.instructions+=2;goto B5d97b2;
case 0x5d97b4:c.instructions+=1;goto B5d97b4;
case 0x5d97b6:goto L5d97b6;
case 0x5d97b9:goto L5d97b9;
case 0x5d97bc:c.instructions+=2;goto B5d97bc;
case 0x5d97be:c.instructions+=1;goto B5d97be;
case 0x5d97c0:goto L5d97c0;
case 0x5d97c3:c.instructions+=2;goto B5d97c3;
case 0x5d97c5:c.instructions+=1;goto B5d97c5;
case 0x5d97c7:goto L5d97c7;
case 0x5d97ca:goto L5d97ca;
case 0x5d97cd:c.instructions+=2;goto B5d97cd;
case 0x5d97cf:c.instructions+=1;goto B5d97cf;
case 0x5d97d1:goto L5d97d1;
case 0x5d97d4:c.instructions+=2;goto B5d97d4;
case 0x5d97d6:c.instructions+=1;goto B5d97d6;
case 0x5d97d8:goto L5d97d8;
case 0x5d97db:goto L5d97db;
case 0x5d97de:c.instructions+=4;goto B5d97de;
case 0x5d97e1:c.instructions+=3;goto B5d97e1;
case 0x5d97e4:c.instructions+=2;goto B5d97e4;
case 0x5d97ea:c.instructions+=1;goto B5d97ea;
case 0x5d97f0:goto L5d97f0;
case 0x5d97f5:c.instructions+=2;goto B5d97f5;
case 0x5d97f7:c.instructions+=1;goto B5d97f7;
case 0x5d97fd:goto L5d97fd;
case 0x5d97ff:c.instructions+=1;goto B5d97ff;
case 0x5d9803:goto L5d9803;
case 0x5d9809:c.instructions+=4;goto B5d9809;
case 0x5d980d:c.instructions+=3;goto B5d980d;
case 0x5d980f:c.instructions+=2;goto B5d980f;
case 0x5d9812:c.instructions+=1;goto B5d9812;
case 0x5d9818:goto L5d9818;
case 0x5d9819:c.instructions+=5;goto B5d9819;
case 0x5d981d:c.instructions+=4;goto B5d981d;
case 0x5d981e:c.instructions+=3;goto B5d981e;
case 0x5d9822:c.instructions+=2;goto B5d9822;
case 0x5d9823:c.instructions+=1;goto B5d9823;
case 0x5d9828:goto L5d9828;
case 0x5d982b:c.instructions+=6;goto B5d982b;
case 0x5d982c:c.instructions+=5;goto B5d982c;
case 0x5d9830:c.instructions+=4;goto B5d9830;
case 0x5d9831:c.instructions+=3;goto B5d9831;
case 0x5d9835:c.instructions+=2;goto B5d9835;
case 0x5d9836:c.instructions+=1;goto B5d9836;
case 0x5d983b:goto L5d983b;
case 0x5d983e:c.instructions+=2;goto B5d983e;
case 0x5d9840:c.instructions+=1;goto B5d9840;
case 0x5d9843:goto L5d9843;
case 0x5d9845:c.instructions+=1;goto B5d9845;
case 0x5d9847:goto L5d9847;
case 0x5d9849:c.instructions+=2;goto B5d9849;
case 0x5d984b:c.instructions+=1;goto B5d984b;
case 0x5d984d:goto L5d984d;
case 0x5d9850:c.instructions+=4;goto B5d9850;
case 0x5d9852:c.instructions+=3;goto B5d9852;
case 0x5d9855:c.instructions+=2;goto B5d9855;
case 0x5d9858:c.instructions+=1;goto B5d9858;
case 0x5d985a:goto L5d985a;
case 0x5d985d:c.instructions+=2;goto B5d985d;
case 0x5d985f:c.instructions+=1;goto B5d985f;
case 0x5d9861:goto L5d9861;
case 0x5d9864:c.instructions+=8;goto B5d9864;
case 0x5d9865:c.instructions+=7;goto B5d9865;
case 0x5d9868:c.instructions+=6;goto B5d9868;
case 0x5d9869:c.instructions+=5;goto B5d9869;
case 0x5d986d:c.instructions+=4;goto B5d986d;
case 0x5d986e:c.instructions+=3;goto B5d986e;
case 0x5d9872:c.instructions+=2;goto B5d9872;
case 0x5d9873:c.instructions+=1;goto B5d9873;
case 0x5d9878:goto L5d9878;
case 0x5d987b:c.instructions+=7;goto B5d987b;
case 0x5d987e:c.instructions+=6;goto B5d987e;
case 0x5d9880:c.instructions+=5;goto B5d9880;
case 0x5d9882:c.instructions+=4;goto B5d9882;
case 0x5d9887:c.instructions+=3;goto B5d9887;
case 0x5d988d:c.instructions+=2;goto B5d988d;
case 0x5d988f:c.instructions+=1;goto B5d988f;
case 0x5d9892:goto L5d9892;
case 0x5d9893:c.instructions+=3;goto B5d9893;
case 0x5d9896:c.instructions+=2;goto B5d9896;
case 0x5d989c:c.instructions+=1;goto B5d989c;
case 0x5d989e:goto L5d989e;
case 0x5d98a2:goto L5d98a2;
case 0x5d98a6:c.instructions+=4;goto B5d98a6;
case 0x5d98a9:c.instructions+=3;goto B5d98a9;
case 0x5d98aa:c.instructions+=2;goto B5d98aa;
case 0x5d98ae:c.instructions+=1;goto B5d98ae;
case 0x5d98b4:goto L5d98b4;
case 0x5d98b5:c.instructions+=6;goto B5d98b5;
case 0x5d98b6:c.instructions+=5;goto B5d98b6;
case 0x5d98b7:c.instructions+=4;goto B5d98b7;
case 0x5d98b8:c.instructions+=3;goto B5d98b8;
case 0x5d98ba:c.instructions+=2;goto B5d98ba;
case 0x5d98bb:c.instructions+=1;goto B5d98bb;
case 0x5d98c0:goto L5d98c0;
case 0x5d98c5:c.instructions+=6;goto B5d98c5;
case 0x5d98c6:c.instructions+=5;goto B5d98c6;
case 0x5d98c7:c.instructions+=4;goto B5d98c7;
case 0x5d98c9:c.instructions+=3;goto B5d98c9;
case 0x5d98cb:c.instructions+=2;goto B5d98cb;
case 0x5d98d0:c.instructions+=1;goto B5d98d0;
case 0x5d98d2:goto L5d98d2;
case 0x5d98d3:c.instructions+=2;goto B5d98d3;
case 0x5d98d5:c.instructions+=1;goto B5d98d5;
case 0x5d98e0:goto L5d98e0;
case 0x5d98e5:c.instructions+=23;goto B5d98e5;
case 0x5d98e9:c.instructions+=22;goto B5d98e9;
case 0x5d98ec:c.instructions+=21;goto B5d98ec;
case 0x5d98ef:c.instructions+=20;goto B5d98ef;
case 0x5d98f2:c.instructions+=19;goto B5d98f2;
case 0x5d98f5:c.instructions+=18;goto B5d98f5;
case 0x5d98f7:c.instructions+=17;goto B5d98f7;
case 0x5d98fa:c.instructions+=16;goto B5d98fa;
case 0x5d98fd:c.instructions+=15;goto B5d98fd;
case 0x5d98ff:c.instructions+=14;goto B5d98ff;
case 0x5d9901:c.instructions+=13;goto B5d9901;
case 0x5d9904:c.instructions+=12;goto B5d9904;
case 0x5d9907:c.instructions+=11;goto B5d9907;
case 0x5d990a:c.instructions+=10;goto B5d990a;
case 0x5d990c:c.instructions+=9;goto B5d990c;
case 0x5d9911:c.instructions+=8;goto B5d9911;
case 0x5d9913:c.instructions+=7;goto B5d9913;
case 0x5d9919:c.instructions+=6;goto B5d9919;
case 0x5d991c:c.instructions+=5;goto B5d991c;
case 0x5d9921:c.instructions+=4;goto B5d9921;
case 0x5d9922:c.instructions+=3;goto B5d9922;
case 0x5d9925:c.instructions+=2;goto B5d9925;
case 0x5d9927:c.instructions+=1;goto B5d9927;
case 0x5d9929:goto L5d9929;
case 0x5d992a:goto L5d992a;
case 0x5d992f:c.instructions+=2;goto B5d992f;
case 0x5d9932:c.instructions+=1;goto B5d9932;
case 0x5d9937:goto L5d9937;
case 0x5d993a:c.instructions+=2;goto B5d993a;
case 0x5d993c:c.instructions+=1;goto B5d993c;
case 0x5d993e:goto L5d993e;
case 0x5d9941:c.instructions+=2;goto B5d9941;
case 0x5d9943:c.instructions+=1;goto B5d9943;
case 0x5d9945:goto L5d9945;
case 0x5d9948:goto L5d9948;
case 0x5d994b:c.instructions+=2;goto B5d994b;
case 0x5d994d:c.instructions+=1;goto B5d994d;
case 0x5d994f:goto L5d994f;
case 0x5d9951:c.instructions+=2;goto B5d9951;
case 0x5d9953:c.instructions+=1;goto B5d9953;
case 0x5d9955:goto L5d9955;
case 0x5d9958:goto L5d9958;
case 0x5d995a:c.instructions+=1;goto B5d995a;
case 0x5d995c:goto L5d995c;
case 0x5d995f:c.instructions+=2;goto B5d995f;
case 0x5d9961:c.instructions+=1;goto B5d9961;
case 0x5d9963:goto L5d9963;
case 0x5d9966:goto L5d9966;
case 0x5d9969:c.instructions+=2;goto B5d9969;
case 0x5d996b:c.instructions+=1;goto B5d996b;
case 0x5d996d:goto L5d996d;
case 0x5d9970:c.instructions+=2;goto B5d9970;
case 0x5d9972:c.instructions+=1;goto B5d9972;
case 0x5d9974:goto L5d9974;
case 0x5d9977:goto L5d9977;
case 0x5d997a:c.instructions+=2;goto B5d997a;
case 0x5d997c:c.instructions+=1;goto B5d997c;
case 0x5d997e:goto L5d997e;
case 0x5d9981:c.instructions+=2;goto B5d9981;
case 0x5d9983:c.instructions+=1;goto B5d9983;
case 0x5d9985:goto L5d9985;
case 0x5d9988:goto L5d9988;
case 0x5d998b:c.instructions+=2;goto B5d998b;
case 0x5d998d:c.instructions+=1;goto B5d998d;
case 0x5d998f:goto L5d998f;
case 0x5d9992:c.instructions+=2;goto B5d9992;
case 0x5d9994:c.instructions+=1;goto B5d9994;
case 0x5d9996:goto L5d9996;
case 0x5d9999:goto L5d9999;
case 0x5d999c:c.instructions+=2;goto B5d999c;
case 0x5d999e:c.instructions+=1;goto B5d999e;
case 0x5d99a0:goto L5d99a0;
case 0x5d99a3:c.instructions+=2;goto B5d99a3;
case 0x5d99a5:c.instructions+=1;goto B5d99a5;
case 0x5d99a7:goto L5d99a7;
case 0x5d99aa:goto L5d99aa;
case 0x5d99ad:c.instructions+=2;goto B5d99ad;
case 0x5d99af:c.instructions+=1;goto B5d99af;
case 0x5d99b1:goto L5d99b1;
case 0x5d99b4:c.instructions+=2;goto B5d99b4;
case 0x5d99b6:c.instructions+=1;goto B5d99b6;
case 0x5d99b8:goto L5d99b8;
case 0x5d99bb:goto L5d99bb;
case 0x5d99be:c.instructions+=2;goto B5d99be;
case 0x5d99c0:c.instructions+=1;goto B5d99c0;
case 0x5d99c2:goto L5d99c2;
case 0x5d99c5:c.instructions+=2;goto B5d99c5;
case 0x5d99c7:c.instructions+=1;goto B5d99c7;
case 0x5d99c9:goto L5d99c9;
case 0x5d99cc:goto L5d99cc;
case 0x5d99cf:c.instructions+=2;goto B5d99cf;
case 0x5d99d1:c.instructions+=1;goto B5d99d1;
case 0x5d99d3:goto L5d99d3;
case 0x5d99d6:c.instructions+=2;goto B5d99d6;
case 0x5d99d8:c.instructions+=1;goto B5d99d8;
case 0x5d99da:goto L5d99da;
case 0x5d99dd:goto L5d99dd;
case 0x5d99e0:c.instructions+=4;goto B5d99e0;
case 0x5d99e3:c.instructions+=3;goto B5d99e3;
case 0x5d99e6:c.instructions+=2;goto B5d99e6;
case 0x5d99ec:c.instructions+=1;goto B5d99ec;
case 0x5d99f2:goto L5d99f2;
case 0x5d99f3:c.instructions+=2;goto B5d99f3;
case 0x5d99f4:c.instructions+=1;goto B5d99f4;
case 0x5d9a00:goto L5d9a00;
case 0x5d9a01:c.instructions+=8;goto B5d9a01;
case 0x5d9a02:c.instructions+=7;goto B5d9a02;
case 0x5d9a04:c.instructions+=6;goto B5d9a04;
case 0x5d9a06:c.instructions+=5;goto B5d9a06;
case 0x5d9a07:c.instructions+=4;goto B5d9a07;
case 0x5d9a09:c.instructions+=3;goto B5d9a09;
case 0x5d9a0b:c.instructions+=2;goto B5d9a0b;
case 0x5d9a0f:c.instructions+=1;goto B5d9a0f;
case 0x5d9a11:goto L5d9a11;
case 0x5d9a12:c.instructions+=1;goto B5d9a12;
case 0x5d9a13:goto L5d9a13;
case 0x5d9a16:c.instructions+=4;goto B5d9a16;
case 0x5d9a1d:c.instructions+=3;goto B5d9a1d;
case 0x5d9a1f:c.instructions+=2;goto B5d9a1f;
case 0x5d9a21:c.instructions+=1;goto B5d9a21;
case 0x5d9a23:goto L5d9a23;
case 0x5d9a25:c.instructions+=1;goto B5d9a25;
case 0x5d9a2a:goto L5d9a2a;
case 0x5d9a2b:c.instructions+=1;goto B5d9a2b;
case 0x5d9a30:goto L5d9a30;
case 0x5d9a33:c.instructions+=1;goto B5d9a33;
case 0x5d9a3d:goto L5d9a3d;
case 0x5d9a41:c.instructions+=6;goto B5d9a41;
case 0x5d9a43:c.instructions+=5;goto B5d9a43;
case 0x5d9a44:c.instructions+=4;goto B5d9a44;
case 0x5d9a4a:c.instructions+=3;goto B5d9a4a;
case 0x5d9a4c:c.instructions+=2;goto B5d9a4c;
case 0x5d9a50:c.instructions+=1;goto B5d9a50;
case 0x5d9a52:goto L5d9a52;
case 0x5d9a53:c.instructions+=1;goto B5d9a53;
case 0x5d9a54:goto L5d9a54;
case 0x5d9a55:c.instructions+=3;goto B5d9a55;
case 0x5d9a56:c.instructions+=2;goto B5d9a56;
case 0x5d9a57:c.instructions+=1;goto B5d9a57;
case 0x5d9a60:goto L5d9a60;
case 0x5d9a61:c.instructions+=3;goto B5d9a61;
case 0x5d9a62:c.instructions+=2;goto B5d9a62;
case 0x5d9a64:c.instructions+=1;goto B5d9a64;
case 0x5d9a69:goto L5d9a69;
case 0x5d9a6c:c.instructions+=3;goto B5d9a6c;
case 0x5d9a71:c.instructions+=2;goto B5d9a71;
case 0x5d9a73:c.instructions+=1;goto B5d9a73;
case 0x5d9a75:goto L5d9a75;
case 0x5d9a77:goto L5d9a77;
case 0x5d9a78:c.instructions+=5;goto B5d9a78;
case 0x5d9a7e:c.instructions+=4;goto B5d9a7e;
case 0x5d9a85:c.instructions+=3;goto B5d9a85;
case 0x5d9a8c:c.instructions+=2;goto B5d9a8c;
case 0x5d9a8d:c.instructions+=1;goto B5d9a8d;
case 0x5d9a90:goto L5d9a90;
case 0x5d9a91:c.instructions+=4;goto B5d9a91;
case 0x5d9a92:c.instructions+=3;goto B5d9a92;
case 0x5d9a96:c.instructions+=2;goto B5d9a96;
case 0x5d9a9c:c.instructions+=1;goto B5d9a9c;
case 0x5d9aa2:goto L5d9aa2;
case 0x5d9aa5:c.instructions+=5;goto B5d9aa5;
case 0x5d9aa9:c.instructions+=4;goto B5d9aa9;
case 0x5d9aac:c.instructions+=3;goto B5d9aac;
case 0x5d9aae:c.instructions+=2;goto B5d9aae;
case 0x5d9ab2:c.instructions+=1;goto B5d9ab2;
case 0x5d9ab8:goto L5d9ab8;
case 0x5d9ab9:c.instructions+=2;goto B5d9ab9;
case 0x5d9aba:c.instructions+=1;goto B5d9aba;
case 0x5d9ac0:goto L5d9ac0;
case 0x5d9ac2:c.instructions+=2;goto B5d9ac2;
case 0x5d9ac7:c.instructions+=1;goto B5d9ac7;
case 0x5d9ac9:goto L5d9ac9;
case 0x5d9acc:c.instructions+=6;goto B5d9acc;
case 0x5d9acf:c.instructions+=5;goto B5d9acf;
case 0x5d9ad4:c.instructions+=4;goto B5d9ad4;
case 0x5d9ad7:c.instructions+=3;goto B5d9ad7;
case 0x5d9ada:c.instructions+=2;goto B5d9ada;
case 0x5d9add:c.instructions+=1;goto B5d9add;
case 0x5d9ae2:goto L5d9ae2;
case 0x5d9ae7:c.instructions+=1;goto B5d9ae7;
case 0x5d9ae9:goto L5d9ae9;
case 0x5d9aec:c.instructions+=11;goto B5d9aec;
case 0x5d9aef:c.instructions+=10;goto B5d9aef;
case 0x5d9af2:c.instructions+=9;goto B5d9af2;
case 0x5d9af7:c.instructions+=8;goto B5d9af7;
case 0x5d9af9:c.instructions+=7;goto B5d9af9;
case 0x5d9afb:c.instructions+=6;goto B5d9afb;
case 0x5d9afd:c.instructions+=5;goto B5d9afd;
case 0x5d9aff:c.instructions+=4;goto B5d9aff;
case 0x5d9b02:c.instructions+=3;goto B5d9b02;
case 0x5d9b04:c.instructions+=2;goto B5d9b04;
case 0x5d9b06:c.instructions+=1;goto B5d9b06;
case 0x5d9b0c:goto L5d9b0c;
case 0x5d9b12:c.instructions+=1;goto B5d9b12;
case 0x5d9b14:goto L5d9b14;
case 0x5d9b18:c.instructions+=6;goto B5d9b18;
case 0x5d9b1c:c.instructions+=5;goto B5d9b1c;
case 0x5d9b1f:c.instructions+=4;goto B5d9b1f;
case 0x5d9b24:c.instructions+=3;goto B5d9b24;
case 0x5d9b25:c.instructions+=2;goto B5d9b25;
case 0x5d9b29:c.instructions+=1;goto B5d9b29;
case 0x5d9b2b:goto L5d9b2b;
case 0x5d9b30:goto L5d9b30;
case 0x5d9b35:c.instructions+=1;goto B5d9b35;
case 0x5d9b37:goto L5d9b37;
case 0x5d9b3a:c.instructions+=7;goto B5d9b3a;
case 0x5d9b40:c.instructions+=6;goto B5d9b40;
case 0x5d9b43:c.instructions+=5;goto B5d9b43;
case 0x5d9b49:c.instructions+=4;goto B5d9b49;
case 0x5d9b4b:c.instructions+=3;goto B5d9b4b;
case 0x5d9b4d:c.instructions+=2;goto B5d9b4d;
case 0x5d9b57:c.instructions+=1;goto B5d9b57;
case 0x5d9b59:goto L5d9b59;
case 0x5d9b60:goto L5d9b60;
case 0x5d9b66:c.instructions+=7;goto B5d9b66;
case 0x5d9b6a:c.instructions+=6;goto B5d9b6a;
case 0x5d9b70:c.instructions+=5;goto B5d9b70;
case 0x5d9b72:c.instructions+=4;goto B5d9b72;
case 0x5d9b78:c.instructions+=3;goto B5d9b78;
case 0x5d9b7a:c.instructions+=2;goto B5d9b7a;
case 0x5d9b7c:c.instructions+=1;goto B5d9b7c;
case 0x5d9b7e:goto L5d9b7e;
case 0x5d9b80:goto L5d9b80;
case 0x5d9b85:c.instructions+=1;goto B5d9b85;
case 0x5d9b87:goto L5d9b87;
case 0x5d9b8a:c.instructions+=6;goto B5d9b8a;
case 0x5d9b8d:c.instructions+=5;goto B5d9b8d;
case 0x5d9b92:c.instructions+=4;goto B5d9b92;
case 0x5d9b95:c.instructions+=3;goto B5d9b95;
case 0x5d9b98:c.instructions+=2;goto B5d9b98;
case 0x5d9b9b:c.instructions+=1;goto B5d9b9b;
case 0x5d9b9d:goto L5d9b9d;
case 0x5d9ba2:c.instructions+=1;goto B5d9ba2;
case 0x5d9ba4:goto L5d9ba4;
case 0x5d9ba7:c.instructions+=5;goto B5d9ba7;
case 0x5d9bad:c.instructions+=4;goto B5d9bad;
case 0x5d9bb2:c.instructions+=3;goto B5d9bb2;
case 0x5d9bb5:c.instructions+=2;goto B5d9bb5;
case 0x5d9bb8:c.instructions+=1;goto B5d9bb8;
case 0x5d9bbe:goto L5d9bbe;
case 0x5d9bc1:c.instructions+=3;goto B5d9bc1;
case 0x5d9bc5:c.instructions+=2;goto B5d9bc5;
case 0x5d9bc9:c.instructions+=1;goto B5d9bc9;
case 0x5d9bcf:goto L5d9bcf;
case 0x5d9bd0:c.instructions+=1;goto B5d9bd0;
case 0x5d9bd1:goto L5d9bd1;
case 0x5d9bd6:goto L5d9bd6;
case 0x5d9bdb:c.instructions+=3;goto B5d9bdb;
case 0x5d9bdc:c.instructions+=2;goto B5d9bdc;
case 0x5d9bdd:c.instructions+=1;goto B5d9bdd;
case 0x5d9be0:goto L5d9be0;
case 0x5d9be2:c.instructions+=3;goto B5d9be2;
case 0x5d9be3:c.instructions+=2;goto B5d9be3;
case 0x5d9be4:c.instructions+=1;goto B5d9be4;
case 0x5d9bf0:goto L5d9bf0;
case 0x5d9bf4:c.instructions+=8;goto B5d9bf4;
case 0x5d9bf5:c.instructions+=7;goto B5d9bf5;
case 0x5d9bfc:c.instructions+=6;goto B5d9bfc;
case 0x5d9bfd:c.instructions+=5;goto B5d9bfd;
case 0x5d9c04:c.instructions+=4;goto B5d9c04;
case 0x5d9c08:c.instructions+=3;goto B5d9c08;
case 0x5d9c0a:c.instructions+=2;goto B5d9c0a;
case 0x5d9c0b:c.instructions+=1;goto B5d9c0b;
case 0x5d9c0d:goto L5d9c0d;
case 0x5d9c11:c.instructions+=1;goto B5d9c11;
case 0x5d9c13:goto L5d9c13;
case 0x5d9c15:c.instructions+=1;goto B5d9c15;
case 0x5d9c17:goto L5d9c17;
case 0x5d9c1b:c.instructions+=1;goto B5d9c1b;
case 0x5d9c20:goto L5d9c20;
case 0x5d9c22:c.instructions+=1;goto B5d9c22;
case 0x5d9c24:goto L5d9c24;
case 0x5d9c26:c.instructions+=6;goto B5d9c26;
case 0x5d9c27:c.instructions+=5;goto B5d9c27;
case 0x5d9c2a:c.instructions+=4;goto B5d9c2a;
case 0x5d9c2b:c.instructions+=3;goto B5d9c2b;
case 0x5d9c2e:c.instructions+=2;goto B5d9c2e;
case 0x5d9c2f:c.instructions+=1;goto B5d9c2f;
case 0x5d9c34:goto L5d9c34;
case 0x5d9c37:c.instructions+=2;goto B5d9c37;
case 0x5d9c39:c.instructions+=1;goto B5d9c39;
case 0x5d9c3b:goto L5d9c3b;
case 0x5d9c3f:c.instructions+=5;goto B5d9c3f;
case 0x5d9c40:c.instructions+=4;goto B5d9c40;
case 0x5d9c43:c.instructions+=3;goto B5d9c43;
case 0x5d9c44:c.instructions+=2;goto B5d9c44;
case 0x5d9c45:c.instructions+=1;goto B5d9c45;
case 0x5d9c4a:goto L5d9c4a;
case 0x5d9c4d:c.instructions+=2;goto B5d9c4d;
case 0x5d9c4f:c.instructions+=1;goto B5d9c4f;
case 0x5d9c51:goto L5d9c51;
case 0x5d9c55:c.instructions+=3;goto B5d9c55;
case 0x5d9c57:c.instructions+=2;goto B5d9c57;
case 0x5d9c59:c.instructions+=1;goto B5d9c59;
case 0x5d9c5b:goto L5d9c5b;
case 0x5d9c5c:c.instructions+=4;goto B5d9c5c;
case 0x5d9c5d:c.instructions+=3;goto B5d9c5d;
case 0x5d9c5f:c.instructions+=2;goto B5d9c5f;
case 0x5d9c60:c.instructions+=1;goto B5d9c60;
case 0x5d9c63:goto L5d9c63;
case 0x5d9c64:c.instructions+=4;goto B5d9c64;
case 0x5d9c66:c.instructions+=3;goto B5d9c66;
case 0x5d9c67:c.instructions+=2;goto B5d9c67;
case 0x5d9c68:c.instructions+=1;goto B5d9c68;
case 0x5d9c70:goto L5d9c70;
case 0x5d9c74:c.instructions+=8;goto B5d9c74;
case 0x5d9c75:c.instructions+=7;goto B5d9c75;
case 0x5d9c76:c.instructions+=6;goto B5d9c76;
case 0x5d9c77:c.instructions+=5;goto B5d9c77;
case 0x5d9c79:c.instructions+=4;goto B5d9c79;
case 0x5d9c7b:c.instructions+=3;goto B5d9c7b;
case 0x5d9c7c:c.instructions+=2;goto B5d9c7c;
case 0x5d9c7e:c.instructions+=1;goto B5d9c7e;
case 0x5d9c80:goto L5d9c80;
case 0x5d9c82:goto L5d9c82;
case 0x5d9c85:c.instructions+=1;goto B5d9c85;
case 0x5d9c87:goto L5d9c87;
case 0x5d9c8b:c.instructions+=2;goto B5d9c8b;
case 0x5d9c8f:c.instructions+=1;goto B5d9c8f;
case 0x5d9c90:goto L5d9c90;
case 0x5d9c92:c.instructions+=4;goto B5d9c92;
case 0x5d9c94:c.instructions+=3;goto B5d9c94;
case 0x5d9c96:c.instructions+=2;goto B5d9c96;
case 0x5d9c98:c.instructions+=1;goto B5d9c98;
case 0x5d9c9a:goto L5d9c9a;
case 0x5d9c9c:c.instructions+=1;goto B5d9c9c;
case 0x5d9c9e:goto L5d9c9e;
case 0x5d9c9f:c.instructions+=4;goto B5d9c9f;
case 0x5d9ca0:c.instructions+=3;goto B5d9ca0;
case 0x5d9ca1:c.instructions+=2;goto B5d9ca1;
case 0x5d9ca3:c.instructions+=1;goto B5d9ca3;
case 0x5d9ca8:goto L5d9ca8;
case 0x5d9caa:c.instructions+=1;goto B5d9caa;
case 0x5d9cac:goto L5d9cac;
case 0x5d9cae:c.instructions+=3;goto B5d9cae;
case 0x5d9caf:c.instructions+=2;goto B5d9caf;
case 0x5d9cb2:c.instructions+=1;goto B5d9cb2;
case 0x5d9cb4:goto L5d9cb4;
case 0x5d9cb6:goto L5d9cb6;
case 0x5d9cb7:c.instructions+=4;goto B5d9cb7;
case 0x5d9cb8:c.instructions+=3;goto B5d9cb8;
case 0x5d9cb9:c.instructions+=2;goto B5d9cb9;
case 0x5d9cba:c.instructions+=1;goto B5d9cba;
case 0x5d9cc0:goto L5d9cc0;
case 0x5d9cc4:c.instructions+=6;goto B5d9cc4;
case 0x5d9cc7:c.instructions+=5;goto B5d9cc7;
case 0x5d9cca:c.instructions+=4;goto B5d9cca;
case 0x5d9ccb:c.instructions+=3;goto B5d9ccb;
case 0x5d9ccd:c.instructions+=2;goto B5d9ccd;
case 0x5d9cd2:c.instructions+=1;goto B5d9cd2;
case 0x5d9cd4:goto L5d9cd4;
case 0x5d9cd7:c.instructions+=1;goto B5d9cd7;
case 0x5d9cd9:goto L5d9cd9;
case 0x5d9cdb:c.instructions+=4;goto B5d9cdb;
case 0x5d9cdd:c.instructions+=3;goto B5d9cdd;
case 0x5d9ce1:c.instructions+=2;goto B5d9ce1;
case 0x5d9ce5:c.instructions+=1;goto B5d9ce5;
case 0x5d9ceb:goto L5d9ceb;
case 0x5d9cec:c.instructions+=7;goto B5d9cec;
case 0x5d9cef:c.instructions+=6;goto B5d9cef;
case 0x5d9cf0:c.instructions+=5;goto B5d9cf0;
case 0x5d9cf4:c.instructions+=4;goto B5d9cf4;
case 0x5d9cf8:c.instructions+=3;goto B5d9cf8;
case 0x5d9cf9:c.instructions+=2;goto B5d9cf9;
case 0x5d9cfd:c.instructions+=1;goto B5d9cfd;
case 0x5d9d01:goto L5d9d01;
case 0x5d9d05:c.instructions+=6;goto B5d9d05;
case 0x5d9d07:c.instructions+=5;goto B5d9d07;
case 0x5d9d09:c.instructions+=4;goto B5d9d09;
case 0x5d9d0b:c.instructions+=3;goto B5d9d0b;
case 0x5d9d0f:c.instructions+=2;goto B5d9d0f;
case 0x5d9d13:c.instructions+=1;goto B5d9d13;
case 0x5d9d19:goto L5d9d19;
case 0x5d9d20:goto L5d9d20;
case 0x5d9d23:c.instructions+=6;goto B5d9d23;
case 0x5d9d25:c.instructions+=5;goto B5d9d25;
case 0x5d9d2c:c.instructions+=4;goto B5d9d2c;
case 0x5d9d30:c.instructions+=3;goto B5d9d30;
case 0x5d9d34:c.instructions+=2;goto B5d9d34;
case 0x5d9d36:c.instructions+=1;goto B5d9d36;
case 0x5d9d3c:goto L5d9d3c;
case 0x5d9d3f:c.instructions+=5;goto B5d9d3f;
case 0x5d9d42:c.instructions+=4;goto B5d9d42;
case 0x5d9d45:c.instructions+=3;goto B5d9d45;
case 0x5d9d47:c.instructions+=2;goto B5d9d47;
case 0x5d9d49:c.instructions+=1;goto B5d9d49;
case 0x5d9d50:goto L5d9d50;
case 0x5d9d52:c.instructions+=1;goto B5d9d52;
case 0x5d9d54:goto L5d9d54;
case 0x5d9d56:c.instructions+=1;goto B5d9d56;
case 0x5d9d58:goto L5d9d58;
case 0x5d9d5b:c.instructions+=1;goto B5d9d5b;
case 0x5d9d5d:goto L5d9d5d;
case 0x5d9d5f:c.instructions+=9;goto B5d9d5f;
case 0x5d9d61:c.instructions+=8;goto B5d9d61;
case 0x5d9d64:c.instructions+=7;goto B5d9d64;
case 0x5d9d68:c.instructions+=6;goto B5d9d68;
case 0x5d9d6b:c.instructions+=5;goto B5d9d6b;
case 0x5d9d6e:c.instructions+=4;goto B5d9d6e;
case 0x5d9d72:c.instructions+=3;goto B5d9d72;
case 0x5d9d75:c.instructions+=2;goto B5d9d75;
case 0x5d9d79:c.instructions+=1;goto B5d9d79;
case 0x5d9d7b:goto L5d9d7b;
case 0x5d9d7e:c.instructions+=6;goto B5d9d7e;
case 0x5d9d80:c.instructions+=5;goto B5d9d80;
case 0x5d9d82:c.instructions+=4;goto B5d9d82;
case 0x5d9d84:c.instructions+=3;goto B5d9d84;
case 0x5d9d86:c.instructions+=2;goto B5d9d86;
case 0x5d9d89:c.instructions+=1;goto B5d9d89;
case 0x5d9d8b:goto L5d9d8b;
case 0x5d9d8e:c.instructions+=1;goto B5d9d8e;
case 0x5d9d90:goto L5d9d90;
case 0x5d9d93:c.instructions+=3;goto B5d9d93;
case 0x5d9d95:c.instructions+=2;goto B5d9d95;
case 0x5d9d98:c.instructions+=1;goto B5d9d98;
case 0x5d9d9a:goto L5d9d9a;
case 0x5d9d9d:goto L5d9d9d;
case 0x5d9da1:c.instructions+=14;goto B5d9da1;
case 0x5d9da5:c.instructions+=13;goto B5d9da5;
case 0x5d9da7:c.instructions+=12;goto B5d9da7;
case 0x5d9dab:c.instructions+=11;goto B5d9dab;
case 0x5d9daf:c.instructions+=10;goto B5d9daf;
case 0x5d9db3:c.instructions+=9;goto B5d9db3;
case 0x5d9db5:c.instructions+=8;goto B5d9db5;
case 0x5d9db7:c.instructions+=7;goto B5d9db7;
case 0x5d9db9:c.instructions+=6;goto B5d9db9;
case 0x5d9dbf:c.instructions+=5;goto B5d9dbf;
case 0x5d9dc1:c.instructions+=4;goto B5d9dc1;
case 0x5d9dc3:c.instructions+=3;goto B5d9dc3;
case 0x5d9dc5:c.instructions+=2;goto B5d9dc5;
case 0x5d9dc7:c.instructions+=1;goto B5d9dc7;
case 0x5d9dc9:goto L5d9dc9;
case 0x5d9dcd:c.instructions+=3;goto B5d9dcd;
case 0x5d9dcf:c.instructions+=2;goto B5d9dcf;
case 0x5d9dd2:c.instructions+=1;goto B5d9dd2;
case 0x5d9dd4:goto L5d9dd4;
case 0x5d9dd8:c.instructions+=2;goto B5d9dd8;
case 0x5d9ddc:c.instructions+=1;goto B5d9ddc;
case 0x5d9dde:goto L5d9dde;
case 0x5d9de0:goto L5d9de0;
case 0x5d9de3:c.instructions+=2;goto B5d9de3;
case 0x5d9de4:c.instructions+=1;goto B5d9de4;
case 0x5d9dea:goto L5d9dea;
case 0x5d9dee:c.instructions+=1;goto B5d9dee;
case 0x5d9df2:goto L5d9df2;
case 0x5d9df3:c.instructions+=3;goto B5d9df3;
case 0x5d9df5:c.instructions+=2;goto B5d9df5;
case 0x5d9df9:c.instructions+=1;goto B5d9df9;
case 0x5d9dff:goto L5d9dff;
case 0x5d9e03:c.instructions+=6;goto B5d9e03;
case 0x5d9e07:c.instructions+=5;goto B5d9e07;
case 0x5d9e0a:c.instructions+=4;goto B5d9e0a;
case 0x5d9e0b:c.instructions+=3;goto B5d9e0b;
case 0x5d9e0f:c.instructions+=2;goto B5d9e0f;
case 0x5d9e13:c.instructions+=1;goto B5d9e13;
case 0x5d9e19:goto L5d9e19;
case 0x5d9e1d:c.instructions+=6;goto B5d9e1d;
case 0x5d9e1e:c.instructions+=5;goto B5d9e1e;
case 0x5d9e1f:c.instructions+=4;goto B5d9e1f;
case 0x5d9e20:c.instructions+=3;goto B5d9e20;
case 0x5d9e21:c.instructions+=2;goto B5d9e21;
case 0x5d9e24:c.instructions+=1;goto B5d9e24;
case 0x5d9e27:goto L5d9e27;
case 0x5d9e29:c.instructions+=3;goto B5d9e29;
case 0x5d9e2a:c.instructions+=2;goto B5d9e2a;
case 0x5d9e2d:c.instructions+=1;goto B5d9e2d;
case 0x5d9e30:goto L5d9e30;
case 0x5d9e31:c.instructions+=12;goto B5d9e31;
case 0x5d9e33:c.instructions+=11;goto B5d9e33;
case 0x5d9e36:c.instructions+=10;goto B5d9e36;
case 0x5d9e39:c.instructions+=9;goto B5d9e39;
case 0x5d9e3c:c.instructions+=8;goto B5d9e3c;
case 0x5d9e3d:c.instructions+=7;goto B5d9e3d;
case 0x5d9e40:c.instructions+=6;goto B5d9e40;
case 0x5d9e41:c.instructions+=5;goto B5d9e41;
case 0x5d9e43:c.instructions+=4;goto B5d9e43;
case 0x5d9e45:c.instructions+=3;goto B5d9e45;
case 0x5d9e46:c.instructions+=2;goto B5d9e46;
case 0x5d9e48:c.instructions+=1;goto B5d9e48;
case 0x5d9e4e:goto L5d9e4e;
case 0x5d9e51:c.instructions+=3;goto B5d9e51;
case 0x5d9e53:c.instructions+=2;goto B5d9e53;
case 0x5d9e56:c.instructions+=1;goto B5d9e56;
case 0x5d9e58:goto L5d9e58;
case 0x5d9e5b:c.instructions+=5;goto B5d9e5b;
case 0x5d9e60:c.instructions+=4;goto B5d9e60;
case 0x5d9e62:c.instructions+=3;goto B5d9e62;
case 0x5d9e63:c.instructions+=2;goto B5d9e63;
case 0x5d9e65:c.instructions+=1;goto B5d9e65;
case 0x5d9e6a:goto L5d9e6a;
case 0x5d9e6c:c.instructions+=3;goto B5d9e6c;
case 0x5d9e6f:c.instructions+=2;goto B5d9e6f;
case 0x5d9e71:c.instructions+=1;goto B5d9e71;
case 0x5d9e73:goto L5d9e73;
case 0x5d9e76:c.instructions+=16;goto B5d9e76;
case 0x5d9e78:c.instructions+=15;goto B5d9e78;
case 0x5d9e7b:c.instructions+=14;goto B5d9e7b;
case 0x5d9e7e:c.instructions+=13;goto B5d9e7e;
case 0x5d9e81:c.instructions+=12;goto B5d9e81;
case 0x5d9e83:c.instructions+=11;goto B5d9e83;
case 0x5d9e85:c.instructions+=10;goto B5d9e85;
case 0x5d9e87:c.instructions+=9;goto B5d9e87;
case 0x5d9e89:c.instructions+=8;goto B5d9e89;
case 0x5d9e8b:c.instructions+=7;goto B5d9e8b;
case 0x5d9e8d:c.instructions+=6;goto B5d9e8d;
case 0x5d9e8f:c.instructions+=5;goto B5d9e8f;
case 0x5d9e91:c.instructions+=4;goto B5d9e91;
case 0x5d9e97:c.instructions+=3;goto B5d9e97;
case 0x5d9e99:c.instructions+=2;goto B5d9e99;
case 0x5d9e9c:c.instructions+=1;goto B5d9e9c;
case 0x5d9e9e:goto L5d9e9e;
case 0x5d9ea1:c.instructions+=5;goto B5d9ea1;
case 0x5d9ea6:c.instructions+=4;goto B5d9ea6;
case 0x5d9ea8:c.instructions+=3;goto B5d9ea8;
case 0x5d9ea9:c.instructions+=2;goto B5d9ea9;
case 0x5d9eab:c.instructions+=1;goto B5d9eab;
case 0x5d9eb0:goto L5d9eb0;
case 0x5d9eb2:c.instructions+=2;goto B5d9eb2;
case 0x5d9eb5:c.instructions+=1;goto B5d9eb5;
case 0x5d9eb7:goto L5d9eb7;
case 0x5d9eba:goto L5d9eba;
case 0x5d9ebc:c.instructions+=1;goto B5d9ebc;
case 0x5d9ebe:goto L5d9ebe;
case 0x5d9ec1:c.instructions+=18;goto B5d9ec1;
case 0x5d9ec4:c.instructions+=17;goto B5d9ec4;
case 0x5d9ec6:c.instructions+=16;goto B5d9ec6;
case 0x5d9ec9:c.instructions+=15;goto B5d9ec9;
case 0x5d9ecc:c.instructions+=14;goto B5d9ecc;
case 0x5d9ed3:c.instructions+=13;goto B5d9ed3;
case 0x5d9ed6:c.instructions+=12;goto B5d9ed6;
case 0x5d9ed9:c.instructions+=11;goto B5d9ed9;
case 0x5d9edc:c.instructions+=10;goto B5d9edc;
case 0x5d9edf:c.instructions+=9;goto B5d9edf;
case 0x5d9ee1:c.instructions+=8;goto B5d9ee1;
case 0x5d9ee4:c.instructions+=7;goto B5d9ee4;
case 0x5d9ee7:c.instructions+=6;goto B5d9ee7;
case 0x5d9ee8:c.instructions+=5;goto B5d9ee8;
case 0x5d9ee9:c.instructions+=4;goto B5d9ee9;
case 0x5d9eea:c.instructions+=3;goto B5d9eea;
case 0x5d9eec:c.instructions+=2;goto B5d9eec;
case 0x5d9eed:c.instructions+=1;goto B5d9eed;
case 0x5d9ef0:goto L5d9ef0;
case 0x5d9ef3:goto L5d9ef3;
case 0x5d9ef6:c.instructions+=4;goto B5d9ef6;
case 0x5d9ef7:c.instructions+=3;goto B5d9ef7;
case 0x5d9ef8:c.instructions+=2;goto B5d9ef8;
case 0x5d9efa:c.instructions+=1;goto B5d9efa;
case 0x5d9eff:goto L5d9eff;
case 0x5d9f03:c.instructions+=4;goto B5d9f03;
case 0x5d9f06:c.instructions+=3;goto B5d9f06;
case 0x5d9f09:c.instructions+=2;goto B5d9f09;
case 0x5d9f0c:c.instructions+=1;goto B5d9f0c;
case 0x5d9f12:goto L5d9f12;
case 0x5d9f16:c.instructions+=9;goto B5d9f16;
case 0x5d9f1a:c.instructions+=8;goto B5d9f1a;
case 0x5d9f1c:c.instructions+=7;goto B5d9f1c;
case 0x5d9f20:c.instructions+=6;goto B5d9f20;
case 0x5d9f24:c.instructions+=5;goto B5d9f24;
case 0x5d9f26:c.instructions+=4;goto B5d9f26;
case 0x5d9f28:c.instructions+=3;goto B5d9f28;
case 0x5d9f2a:c.instructions+=2;goto B5d9f2a;
case 0x5d9f2d:c.instructions+=1;goto B5d9f2d;
case 0x5d9f33:goto L5d9f33;
case 0x5d9f38:c.instructions+=5;goto B5d9f38;
case 0x5d9f3a:c.instructions+=4;goto B5d9f3a;
case 0x5d9f3c:c.instructions+=3;goto B5d9f3c;
case 0x5d9f3d:c.instructions+=2;goto B5d9f3d;
case 0x5d9f3f:c.instructions+=1;goto B5d9f3f;
case 0x5d9f44:goto L5d9f44;
case 0x5d9f46:c.instructions+=2;goto B5d9f46;
case 0x5d9f4a:c.instructions+=1;goto B5d9f4a;
case 0x5d9f50:goto L5d9f50;
case 0x5d9f54:c.instructions+=1;goto B5d9f54;
case 0x5d9f5a:goto L5d9f5a;
case 0x5d9f5e:c.instructions+=4;goto B5d9f5e;
case 0x5d9f5f:c.instructions+=3;goto B5d9f5f;
case 0x5d9f60:c.instructions+=2;goto B5d9f60;
case 0x5d9f62:c.instructions+=1;goto B5d9f62;
case 0x5d9f67:goto L5d9f67;
case 0x5d9f6b:c.instructions+=9;goto B5d9f6b;
case 0x5d9f6e:c.instructions+=8;goto B5d9f6e;
case 0x5d9f71:c.instructions+=7;goto B5d9f71;
case 0x5d9f77:c.instructions+=6;goto B5d9f77;
case 0x5d9f78:c.instructions+=5;goto B5d9f78;
case 0x5d9f7b:c.instructions+=4;goto B5d9f7b;
case 0x5d9f7c:c.instructions+=3;goto B5d9f7c;
case 0x5d9f80:c.instructions+=2;goto B5d9f80;
case 0x5d9f82:c.instructions+=1;goto B5d9f82;
case 0x5d9f87:goto L5d9f87;
case 0x5d9f89:c.instructions+=6;goto B5d9f89;
case 0x5d9f8f:c.instructions+=5;goto B5d9f8f;
case 0x5d9f95:c.instructions+=4;goto B5d9f95;
case 0x5d9f9b:c.instructions+=3;goto B5d9f9b;
case 0x5d9f9d:c.instructions+=2;goto B5d9f9d;
case 0x5d9fa0:c.instructions+=1;goto B5d9fa0;
case 0x5d9fa2:goto L5d9fa2;
case 0x5d9fa4:c.instructions+=1;goto B5d9fa4;
case 0x5d9faa:goto L5d9faa;
case 0x5d9fae:c.instructions+=6;goto B5d9fae;
case 0x5d9fb0:c.instructions+=5;goto B5d9fb0;
case 0x5d9fb4:c.instructions+=4;goto B5d9fb4;
case 0x5d9fb6:c.instructions+=3;goto B5d9fb6;
case 0x5d9fb8:c.instructions+=2;goto B5d9fb8;
case 0x5d9fbb:c.instructions+=1;goto B5d9fbb;
case 0x5d9fc1:goto L5d9fc1;
case 0x5d9fc4:c.instructions+=1;goto B5d9fc4;
case 0x5d9fc9:goto L5d9fc9;
case 0x5d9fcc:c.instructions+=7;goto B5d9fcc;
case 0x5d9fd0:c.instructions+=6;goto B5d9fd0;
case 0x5d9fd4:c.instructions+=5;goto B5d9fd4;
case 0x5d9fd6:c.instructions+=4;goto B5d9fd6;
case 0x5d9fd8:c.instructions+=3;goto B5d9fd8;
case 0x5d9fda:c.instructions+=2;goto B5d9fda;
case 0x5d9fdd:c.instructions+=1;goto B5d9fdd;
case 0x5d9fe3:goto L5d9fe3;
case 0x5d9fe8:c.instructions+=2;goto B5d9fe8;
case 0x5d9fec:c.instructions+=1;goto B5d9fec;
case 0x5d9fee:goto L5d9fee;
case 0x5d9ff1:goto L5d9ff1;
case 0x5d9ff5:c.instructions+=2;goto B5d9ff5;
case 0x5d9ff9:c.instructions+=1;goto B5d9ff9;
case 0x5d9fff:goto L5d9fff;
default:missing_instruction(c.pc);}
B5d9002:L5d9002:{c.instructions+=5;NFSU2_TR(0x5d9002);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9003:{NFSU2_TR(0x5d9003);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9004:{NFSU2_TR(0x5d9004);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9005:{NFSU2_TR(0x5d9005);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d9008:{NFSU2_TR(0x5d9008);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d900dull));
TAIL_STATIC(0x5d4b80u,5d4);
}
B5d900d:L5d900d:{c.instructions+=4;NFSU2_TR(0x5d900d);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B5d900f:{NFSU2_TR(0x5d900f);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d9013:{NFSU2_TR(0x5d9013);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d9015:{NFSU2_TR(0x5d9015);
if(r1(R+518)){{goto L5d903f;}}
}
B5d9017:L5d9017:{c.instructions+=3;NFSU2_TR(0x5d9017);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5d9019:{NFSU2_TR(0x5d9019);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d901b:{NFSU2_TR(0x5d901b);
if(r1(R+518)){{goto L5d903b;}}
}
B5d901d:L5d901d:{c.instructions+=1;NFSU2_TR(0x5d901d);
__builtin_memmove((R+4),(R+4),4);
}
B5d9020:L5d9020:{c.instructions+=2;NFSU2_TR(0x5d9020);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d9022:{NFSU2_TR(0x5d9022);
if(r1(R+518)){{goto L5d903b;}}
}
B5d9024:L5d9024:{c.instructions+=6;NFSU2_TR(0x5d9024);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d9028:{NFSU2_TR(0x5d9028);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9029:{NFSU2_TR(0x5d9029);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d902a:{NFSU2_TR(0x5d902a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d902b:{NFSU2_TR(0x5d902b);
__builtin_memmove((R+4),(R+24),4);
}
B5d902d:{NFSU2_TR(0x5d902d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9032ull));
TAIL_STATIC(0x5d4b80u,5d4);
}
B5d9032:L5d9032:{c.instructions+=4;NFSU2_TR(0x5d9032);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d9035:{NFSU2_TR(0x5d9035);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B5d9037:{NFSU2_TR(0x5d9037);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9039:{NFSU2_TR(0x5d9039);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9020u);}goto L5d9020;}}
}
B5d903b:L5d903b:{c.instructions+=1;NFSU2_TR(0x5d903b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d903f:L5d903f:{c.instructions+=10;NFSU2_TR(0x5d903f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d9043:{NFSU2_TR(0x5d9043);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d9047:{NFSU2_TR(0x5d9047);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d904b:{NFSU2_TR(0x5d904b);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(s32(s16(r2(U+12)))));
}
B5d9050:{NFSU2_TR(0x5d9050);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d9051:{NFSU2_TR(0x5d9051);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B5d9054:{NFSU2_TR(0x5d9054);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d9056:{NFSU2_TR(0x5d9056);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d905a:{NFSU2_TR(0x5d905a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d905e:{NFSU2_TR(0x5d905e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5d8ff7u,5d8);}
}
B5d9060:L5d9060:{c.instructions+=7;NFSU2_TR(0x5d9060);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d9061:{NFSU2_TR(0x5d9061);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9062:{NFSU2_TR(0x5d9062);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d9063:{NFSU2_TR(0x5d9063);
__builtin_memmove((R+0),(R+12),1);
}
B5d9065:{NFSU2_TR(0x5d9065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d9066:{NFSU2_TR(0x5d9066);
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
B5d9069:{NFSU2_TR(0x5d9069);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9070:L5d9070:{c.instructions+=27;NFSU2_TR(0x5d9070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5d9073:{NFSU2_TR(0x5d9073);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9074:{NFSU2_TR(0x5d9074);
__builtin_memmove((R+24),(R+4),4);
}
B5d9076:{NFSU2_TR(0x5d9076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d9078:{NFSU2_TR(0x5d9078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d907a:{NFSU2_TR(0x5d907a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d907d:{NFSU2_TR(0x5d907d);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B5d9082:{NFSU2_TR(0x5d9082);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d9085:{NFSU2_TR(0x5d9085);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9089:{NFSU2_TR(0x5d9089);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d908d:{NFSU2_TR(0x5d908d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d908f:{NFSU2_TR(0x5d908f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d9093:{NFSU2_TR(0x5d9093);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d9096:{NFSU2_TR(0x5d9096);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d9098:{NFSU2_TR(0x5d9098);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B5d909d:{NFSU2_TR(0x5d909d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d90a0:{NFSU2_TR(0x5d90a0);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d90a6:{NFSU2_TR(0x5d90a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d90aa:{NFSU2_TR(0x5d90aa);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x30ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d90ad:{NFSU2_TR(0x5d90ad);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d90b1:{NFSU2_TR(0x5d90b1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d90b5:{NFSU2_TR(0x5d90b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d90b6:{NFSU2_TR(0x5d90b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d90b9:{NFSU2_TR(0x5d90b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d90ba:{NFSU2_TR(0x5d90ba);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d90c0:{NFSU2_TR(0x5d90c0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d90c4:{NFSU2_TR(0x5d90c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d90c9ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5d90c9:L5d90c9:{c.instructions+=9;NFSU2_TR(0x5d90c9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d90cd:{NFSU2_TR(0x5d90cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d90d1:{NFSU2_TR(0x5d90d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d90d5:{NFSU2_TR(0x5d90d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5d90d8:{NFSU2_TR(0x5d90d8);
__builtin_memmove((R+0),gp(0x88e990),4);
}
B5d90dd:{NFSU2_TR(0x5d90dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d90e0:{NFSU2_TR(0x5d90e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d90e1:{NFSU2_TR(0x5d90e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5d90e4:{NFSU2_TR(0x5d90e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d90e9ull));
TAIL_STATIC(0x5764d0u,576);
}
B5d90e9:L5d90e9:{c.instructions+=11;NFSU2_TR(0x5d90e9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d90ed:{NFSU2_TR(0x5d90ed);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5d90ef:{NFSU2_TR(0x5d90ef);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d90f3:{NFSU2_TR(0x5d90f3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d90f7:{NFSU2_TR(0x5d90f7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d90f9:{NFSU2_TR(0x5d90f9);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d90fb:{NFSU2_TR(0x5d90fb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d90ff:{NFSU2_TR(0x5d90ff);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d9101:{NFSU2_TR(0x5d9101);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d9103:{NFSU2_TR(0x5d9103);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d9106:{NFSU2_TR(0x5d9106);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d912a;}}
}
B5d9108:L5d9108:{c.instructions+=2;NFSU2_TR(0x5d9108);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d910e:{NFSU2_TR(0x5d910e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9113ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d9113:L5d9113:{c.instructions+=9;NFSU2_TR(0x5d9113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d9115:{NFSU2_TR(0x5d9115);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d9117:{NFSU2_TR(0x5d9117);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d911a:{NFSU2_TR(0x5d911a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5d911d:{NFSU2_TR(0x5d911d);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5d9121:{NFSU2_TR(0x5d9121);
w1(R+0,u8(0x1ull));
}
B5d9123:{NFSU2_TR(0x5d9123);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9124:{NFSU2_TR(0x5d9124);
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
B5d9127:{NFSU2_TR(0x5d9127);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d912a:L5d912a:{c.instructions+=5;NFSU2_TR(0x5d912a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d912c:{NFSU2_TR(0x5d912c);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5d912e:{NFSU2_TR(0x5d912e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d912f:{NFSU2_TR(0x5d912f);
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
B5d9132:{NFSU2_TR(0x5d9132);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9140:L5d9140:{c.instructions+=10;NFSU2_TR(0x5d9140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5d9143:{NFSU2_TR(0x5d9143);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9147:{NFSU2_TR(0x5d9147);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9148:{NFSU2_TR(0x5d9148);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9149:{NFSU2_TR(0x5d9149);
__builtin_memmove((R+24),(R+4),4);
}
B5d914b:{NFSU2_TR(0x5d914b);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5d914d:{NFSU2_TR(0x5d914d);
u8 U[18];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w1(R+523,sborrow<u16>(r2(U+14),u16(0x0ull)));
w2(U+16,u16(u32(r2(U+14))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+16))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B5d9153:{NFSU2_TR(0x5d9153);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9157:{NFSU2_TR(0x5d9157);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d915f:{NFSU2_TR(0x5d915f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d91cf;}}
}
B5d9161:L5d9161:{c.instructions+=6;NFSU2_TR(0x5d9161);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d9164:{NFSU2_TR(0x5d9164);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9165:{NFSU2_TR(0x5d9165);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d9168:{NFSU2_TR(0x5d9168);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9169:{NFSU2_TR(0x5d9169);
u8 U[12];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5d916d:{NFSU2_TR(0x5d916d);
__builtin_memmove((R+4),(R+4),4);
}
B5d9170:L5d9170:{c.instructions+=3;NFSU2_TR(0x5d9170);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d9173:{NFSU2_TR(0x5d9173);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9175:{NFSU2_TR(0x5d9175);
if(r1(R+518)){{goto L5d91b4;}}
}
B5d9177:L5d9177:{c.instructions+=5;NFSU2_TR(0x5d9177);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d917b:{NFSU2_TR(0x5d917b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d917c:{NFSU2_TR(0x5d917c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d917d:{NFSU2_TR(0x5d917d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d9180:{NFSU2_TR(0x5d9180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9185ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9070u);}goto L5d9070;}
}
B5d9185:L5d9185:{c.instructions+=4;NFSU2_TR(0x5d9185);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B5d9187:{NFSU2_TR(0x5d9187);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d918b:{NFSU2_TR(0x5d918b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d918d:{NFSU2_TR(0x5d918d);
if(r1(R+518)){{goto L5d91b4;}}
}
B5d918f:L5d918f:{c.instructions+=3;NFSU2_TR(0x5d918f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5d9192:{NFSU2_TR(0x5d9192);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9194:{NFSU2_TR(0x5d9194);
if(r1(R+518)){{goto L5d91b0;}}
}
B5d9196:L5d9196:{c.instructions+=2;NFSU2_TR(0x5d9196);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d9198:{NFSU2_TR(0x5d9198);
if(r1(R+518)){{goto L5d91b0;}}
}
B5d919a:L5d919a:{c.instructions+=5;NFSU2_TR(0x5d919a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d919e:{NFSU2_TR(0x5d919e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d919f:{NFSU2_TR(0x5d919f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d91a0:{NFSU2_TR(0x5d91a0);
__builtin_memmove((R+4),(R+24),4);
}
B5d91a2:{NFSU2_TR(0x5d91a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d91a7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9070u);}goto L5d9070;}
}
B5d91a7:L5d91a7:{c.instructions+=4;NFSU2_TR(0x5d91a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d91aa:{NFSU2_TR(0x5d91aa);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B5d91ac:{NFSU2_TR(0x5d91ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d91ae:{NFSU2_TR(0x5d91ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9196u);}goto L5d9196;}}
}
B5d91b0:L5d91b0:{c.instructions+=1;NFSU2_TR(0x5d91b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d91b4:L5d91b4:{c.instructions+=8;NFSU2_TR(0x5d91b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d91b8:{NFSU2_TR(0x5d91b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d91bc:{NFSU2_TR(0x5d91bc);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B5d91c1:{NFSU2_TR(0x5d91c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d91c2:{NFSU2_TR(0x5d91c2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x40ull))));
}
B5d91c5:{NFSU2_TR(0x5d91c5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d91c7:{NFSU2_TR(0x5d91c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d91cb:{NFSU2_TR(0x5d91cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9170u);}goto L5d9170;}}
}
B5d91cd:L5d91cd:{c.instructions+=2;NFSU2_TR(0x5d91cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d91ce:{NFSU2_TR(0x5d91ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d91cf:L5d91cf:{c.instructions+=5;NFSU2_TR(0x5d91cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d91d0:{NFSU2_TR(0x5d91d0);
__builtin_memmove((R+0),(R+12),1);
}
B5d91d2:{NFSU2_TR(0x5d91d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d91d3:{NFSU2_TR(0x5d91d3);
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
B5d91d6:{NFSU2_TR(0x5d91d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d91e0:L5d91e0:{c.instructions+=9;NFSU2_TR(0x5d91e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5d91e3:{NFSU2_TR(0x5d91e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d91e4:{NFSU2_TR(0x5d91e4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d91e5:{NFSU2_TR(0x5d91e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d91e6:{NFSU2_TR(0x5d91e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d91e7:{NFSU2_TR(0x5d91e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d91ea:{NFSU2_TR(0x5d91ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d91ed:{NFSU2_TR(0x5d91ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d91f5:{NFSU2_TR(0x5d91f5);
{goto L5d9200;}
}
B5d9200:L5d9200:{c.instructions+=5;NFSU2_TR(0x5d9200);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B5d9204:{NFSU2_TR(0x5d9204);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d920a:{NFSU2_TR(0x5d920a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d920c:{NFSU2_TR(0x5d920c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9210:{NFSU2_TR(0x5d9210);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d923e;}}
}
B5d9212:L5d9212:{c.instructions+=3;NFSU2_TR(0x5d9212);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d9215:{NFSU2_TR(0x5d9215);
__builtin_memmove((R+8),(R+0),4);
}
B5d9217:{NFSU2_TR(0x5d9217);
{goto L5d9220;}
}
B5d9220:L5d9220:{c.instructions+=5;NFSU2_TR(0x5d9220);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d9223:{NFSU2_TR(0x5d9223);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d9229:{NFSU2_TR(0x5d9229);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d922b:{NFSU2_TR(0x5d922b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d922e:{NFSU2_TR(0x5d922e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9236;}}
}
B5d9230:L5d9230:{c.instructions+=3;NFSU2_TR(0x5d9230);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d9232:{NFSU2_TR(0x5d9232);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5d9234:{NFSU2_TR(0x5d9234);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5d9236:L5d9236:{c.instructions+=4;NFSU2_TR(0x5d9236);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B5d9239:{NFSU2_TR(0x5d9239);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d923b:{NFSU2_TR(0x5d923b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5d923c:{NFSU2_TR(0x5d923c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9220u);}goto L5d9220;}}
}
B5d923e:L5d923e:{c.instructions+=22;NFSU2_TR(0x5d923e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d9242:{NFSU2_TR(0x5d9242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d9244:{NFSU2_TR(0x5d9244);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5d9246:{NFSU2_TR(0x5d9246);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5d924a:{NFSU2_TR(0x5d924a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5d924e:{NFSU2_TR(0x5d924e);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B5d9250:{NFSU2_TR(0x5d9250);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d9253:{NFSU2_TR(0x5d9253);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5d9256:{NFSU2_TR(0x5d9256);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d925a:{NFSU2_TR(0x5d925a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d925d:{NFSU2_TR(0x5d925d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d9261:{NFSU2_TR(0x5d9261);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d9263:{NFSU2_TR(0x5d9263);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d9267:{NFSU2_TR(0x5d9267);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d926b:{NFSU2_TR(0x5d926b);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d9271:{NFSU2_TR(0x5d9271);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d9275:{NFSU2_TR(0x5d9275);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d927b:{NFSU2_TR(0x5d927b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d927f:{NFSU2_TR(0x5d927f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d9281:{NFSU2_TR(0x5d9281);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d9283:{NFSU2_TR(0x5d9283);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d9286:{NFSU2_TR(0x5d9286);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d928e;}}
}
B5d9288:L5d9288:{c.instructions+=2;NFSU2_TR(0x5d9288);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d928a:{NFSU2_TR(0x5d928a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d928e:L5d928e:{c.instructions+=14;NFSU2_TR(0x5d928e);
u8 U[13];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B5d9293:{NFSU2_TR(0x5d9293);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d9297:{NFSU2_TR(0x5d9297);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d929a:{NFSU2_TR(0x5d929a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d929e:{NFSU2_TR(0x5d929e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d929f:{NFSU2_TR(0x5d929f);
__builtin_memmove((R+4),(R+28),4);
}
B5d92a1:{NFSU2_TR(0x5d92a1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d92a5:{NFSU2_TR(0x5d92a5);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d92ab:{NFSU2_TR(0x5d92ab);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d92ad:{NFSU2_TR(0x5d92ad);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d92b1:{NFSU2_TR(0x5d92b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d92b5:{NFSU2_TR(0x5d92b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d92b6:{NFSU2_TR(0x5d92b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d92b8:{NFSU2_TR(0x5d92b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d92bdull));
TAIL_STATIC(0x5d8dc0u,5d8);
}
B5d92bd:L5d92bd:{c.instructions+=16;NFSU2_TR(0x5d92bd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5d92c1:{NFSU2_TR(0x5d92c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5d92c5:{NFSU2_TR(0x5d92c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d92c8:{NFSU2_TR(0x5d92c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d92cc:{NFSU2_TR(0x5d92cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5d92cf:{NFSU2_TR(0x5d92cf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d92d3:{NFSU2_TR(0x5d92d3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d92d7:{NFSU2_TR(0x5d92d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d92db:{NFSU2_TR(0x5d92db);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d92e1:{NFSU2_TR(0x5d92e1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d92e5:{NFSU2_TR(0x5d92e5);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d92eb:{NFSU2_TR(0x5d92eb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d92ef:{NFSU2_TR(0x5d92ef);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d92f1:{NFSU2_TR(0x5d92f1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d92f3:{NFSU2_TR(0x5d92f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d92f6:{NFSU2_TR(0x5d92f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d92fe;}}
}
B5d92f8:L5d92f8:{c.instructions+=2;NFSU2_TR(0x5d92f8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d92fa:{NFSU2_TR(0x5d92fa);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d92fe:L5d92fe:{c.instructions+=4;NFSU2_TR(0x5d92fe);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d9300:{NFSU2_TR(0x5d9300);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5d9302:{NFSU2_TR(0x5d9302);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d9308:{NFSU2_TR(0x5d9308);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d930dull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d930d:L5d930d:{c.instructions+=9;NFSU2_TR(0x5d930d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d930f:{NFSU2_TR(0x5d930f);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5d9312:{NFSU2_TR(0x5d9312);
u8 U[13];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5d9316:{NFSU2_TR(0x5d9316);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d931a:{NFSU2_TR(0x5d931a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x2ull))));
}
B5d931d:{NFSU2_TR(0x5d931d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
}
B5d9323:{NFSU2_TR(0x5d9323);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d9324:{NFSU2_TR(0x5d9324);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9328:{NFSU2_TR(0x5d9328);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9200u);}goto L5d9200;}}
}
B5d932e:L5d932e:{c.instructions+=6;NFSU2_TR(0x5d932e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d932f:{NFSU2_TR(0x5d932f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9330:{NFSU2_TR(0x5d9330);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d9331:{NFSU2_TR(0x5d9331);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d9332:{NFSU2_TR(0x5d9332);
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
B5d9335:{NFSU2_TR(0x5d9335);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9340:L5d9340:{c.instructions+=8;NFSU2_TR(0x5d9340);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9341:{NFSU2_TR(0x5d9341);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9342:{NFSU2_TR(0x5d9342);
__builtin_memmove((R+20),(R+4),4);
}
B5d9344:{NFSU2_TR(0x5d9344);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5d9349:{NFSU2_TR(0x5d9349);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d934a:{NFSU2_TR(0x5d934a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d934e:{NFSU2_TR(0x5d934e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9356:{NFSU2_TR(0x5d9356);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d940a;}}
}
B5d935c:L5d935c:{c.instructions+=5;NFSU2_TR(0x5d935c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d9360:{NFSU2_TR(0x5d9360);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9361:{NFSU2_TR(0x5d9361);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d9367:{NFSU2_TR(0x5d9367);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9368:{NFSU2_TR(0x5d9368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d936dull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d936d:L5d936d:{c.instructions+=3;NFSU2_TR(0x5d936d);
__builtin_memmove((R+12),(R+0),4);
}
B5d936f:{NFSU2_TR(0x5d936f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B5d9372:{NFSU2_TR(0x5d9372);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa2ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9378:L5d9378:{c.instructions+=3;NFSU2_TR(0x5d9378);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d937c:{NFSU2_TR(0x5d937c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d937e:{NFSU2_TR(0x5d937e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d93ec;}}
}
B5d9380:L5d9380:{c.instructions+=2;NFSU2_TR(0x5d9380);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9382:{NFSU2_TR(0x5d9382);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9395;}}
}
B5d9384:L5d9384:{c.instructions+=5;NFSU2_TR(0x5d9384);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5d9388:{NFSU2_TR(0x5d9388);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d938b:{NFSU2_TR(0x5d938b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d938f:{NFSU2_TR(0x5d938f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d9393:{NFSU2_TR(0x5d9393);
{goto L5d93a3;}
}
B5d9395:L5d9395:{c.instructions+=4;NFSU2_TR(0x5d9395);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B5d9398:{NFSU2_TR(0x5d9398);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5d939b:{NFSU2_TR(0x5d939b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d939f:{NFSU2_TR(0x5d939f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d93a3:L5d93a3:{c.instructions+=4;NFSU2_TR(0x5d93a3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d93a6:{NFSU2_TR(0x5d93a6);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d93ac:{NFSU2_TR(0x5d93ac);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d93ae:{NFSU2_TR(0x5d93ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d93c1;}}
}
B5d93b0:L5d93b0:{c.instructions+=5;NFSU2_TR(0x5d93b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5d93b4:{NFSU2_TR(0x5d93b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d93b7:{NFSU2_TR(0x5d93b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d93bb:{NFSU2_TR(0x5d93bb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d93bf:{NFSU2_TR(0x5d93bf);
{goto L5d93cf;}
}
B5d93c1:L5d93c1:{c.instructions+=4;NFSU2_TR(0x5d93c1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B5d93c4:{NFSU2_TR(0x5d93c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d93c7:{NFSU2_TR(0x5d93c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d93cb:{NFSU2_TR(0x5d93cb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d93cf:L5d93cf:{c.instructions+=9;NFSU2_TR(0x5d93cf);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d93d5:{NFSU2_TR(0x5d93d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d93d6:{NFSU2_TR(0x5d93d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffeaull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d93d9:{NFSU2_TR(0x5d93d9);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5d93db:{NFSU2_TR(0x5d93db);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d93e1:{NFSU2_TR(0x5d93e1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d93e4:{NFSU2_TR(0x5d93e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d93e5:{NFSU2_TR(0x5d93e5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d93e7:{NFSU2_TR(0x5d93e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d93ecull));
TAIL_STATIC(0x5d2ee0u,5d2);
}
B5d93ec:L5d93ec:{c.instructions+=8;NFSU2_TR(0x5d93ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d93f0:{NFSU2_TR(0x5d93f0);
u8 U[13];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5d93f4:{NFSU2_TR(0x5d93f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d93f8:{NFSU2_TR(0x5d93f8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d93f9:{NFSU2_TR(0x5d93f9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x38ull))));
}
B5d93fc:{NFSU2_TR(0x5d93fc);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5d93fe:{NFSU2_TR(0x5d93fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9402:{NFSU2_TR(0x5d9402);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9378u);}goto L5d9378;}}
}
B5d9408:L5d9408:{c.instructions+=2;NFSU2_TR(0x5d9408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9409:{NFSU2_TR(0x5d9409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d940a:L5d940a:{c.instructions+=7;NFSU2_TR(0x5d940a);
u8 U[13];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5d940f:{NFSU2_TR(0x5d940f);
u8 U[13];
w4(U+0,u32(u32(u32(0x75ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5d9414:{NFSU2_TR(0x5d9414);
u8 U[16];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x4479c000ull));
s4(u32(r4(U+8)),r4(U+12));
}
B5d941c:{NFSU2_TR(0x5d941c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d941d:{NFSU2_TR(0x5d941d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d941e:{NFSU2_TR(0x5d941e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d941f:{NFSU2_TR(0x5d941f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9430:L5d9430:{c.instructions+=10;NFSU2_TR(0x5d9430);
__builtin_memmove((R+8),(R+4),4);
}
B5d9432:{NFSU2_TR(0x5d9432);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9433:{NFSU2_TR(0x5d9433);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9434:{NFSU2_TR(0x5d9434);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9435:{NFSU2_TR(0x5d9435);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1784ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d943f:{NFSU2_TR(0x5d943f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ef8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9449:{NFSU2_TR(0x5d9449);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x434cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9453:{NFSU2_TR(0x5d9453);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d9455:{NFSU2_TR(0x5d9455);
w4(R+4,u32(0x5dcull));
}
B5d945a:{NFSU2_TR(0x5d945a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1788ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d9460:L5d9460:{c.instructions+=1;NFSU2_TR(0x5d9460);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5d9462;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9460u);}goto L5d9460;}
}
B5d9462:L5d9462:{c.instructions+=2;NFSU2_TR(0x5d9462);
w4(R+4,u32(0x514ull));
}
B5d9467:{NFSU2_TR(0x5d9467);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2efcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d946d:L5d946d:{c.instructions+=1;NFSU2_TR(0x5d946d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5d946f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d946du);}goto L5d946d;}
}
B5d946f:L5d946f:{c.instructions+=2;NFSU2_TR(0x5d946f);
w4(R+4,u32(0xc8ull));
}
B5d9474:{NFSU2_TR(0x5d9474);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4350ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d947a:L5d947a:{c.instructions+=1;NFSU2_TR(0x5d947a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5d947c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d947au);}goto L5d947a;}
}
B5d947c:L5d947c:{c.instructions+=7;NFSU2_TR(0x5d947c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d947f:{NFSU2_TR(0x5d947f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5d9481:{NFSU2_TR(0x5d9481);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9484:{NFSU2_TR(0x5d9484);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5d9486:{NFSU2_TR(0x5d9486);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9489:{NFSU2_TR(0x5d9489);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d948c:{NFSU2_TR(0x5d948c);
w4(R+12,u32(0x5dcull));
}
B5d9491:L5d9491:{c.instructions+=3;NFSU2_TR(0x5d9491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d9493:{NFSU2_TR(0x5d9493);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9495:{NFSU2_TR(0x5d9495);
if(r1(R+518)){{goto L5d9516;}}
}
B5d9497:L5d9497:{c.instructions+=4;NFSU2_TR(0x5d9497);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d949a:{NFSU2_TR(0x5d949a);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5d949d:{NFSU2_TR(0x5d949d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d94a0:{NFSU2_TR(0x5d94a0);
if(r1(R+518)){{goto L5d9516;}}
}
B5d94a2:L5d94a2:{c.instructions+=3;NFSU2_TR(0x5d94a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1784ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d94a8:{NFSU2_TR(0x5d94a8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5dcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5dcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d94ae:{NFSU2_TR(0x5d94ae);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d94b7;}}
}
B5d94b0:L5d94b0:{c.instructions+=1;NFSU2_TR(0x5d94b0);
u8 U[16];
w4(U+0,u32(u32(u32(0x1788ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5d94b7:L5d94b7:{c.instructions+=4;NFSU2_TR(0x5d94b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1784ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d94bd:{NFSU2_TR(0x5d94bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d94c0:{NFSU2_TR(0x5d94c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d94c2:{NFSU2_TR(0x5d94c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d94ee;}}
}
B5d94c4:L5d94c4:{c.instructions+=3;NFSU2_TR(0x5d94c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ef8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d94ca:{NFSU2_TR(0x5d94ca);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x514ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x514ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d94d0:{NFSU2_TR(0x5d94d0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d94e6;}}
}
B5d94d2:L5d94d2:{c.instructions+=6;NFSU2_TR(0x5d94d2);
u8 U[16];
w4(U+0,u32(u32(u32(0x2efcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5d94d9:{NFSU2_TR(0x5d94d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d94dc:{NFSU2_TR(0x5d94dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d94de:{NFSU2_TR(0x5d94de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d94e1:{NFSU2_TR(0x5d94e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d94e4:{NFSU2_TR(0x5d94e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d94e6:L5d94e6:{c.instructions+=2;NFSU2_TR(0x5d94e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ef8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d94ec:{NFSU2_TR(0x5d94ec);
{goto L5d9516;}
}
B5d94ee:L5d94ee:{c.instructions+=3;NFSU2_TR(0x5d94ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x434cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d94f4:{NFSU2_TR(0x5d94f4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xc8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d94fa:{NFSU2_TR(0x5d94fa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d9510;}}
}
B5d94fc:L5d94fc:{c.instructions+=6;NFSU2_TR(0x5d94fc);
u8 U[16];
w4(U+0,u32(u32(u32(0x4350ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5d9503:{NFSU2_TR(0x5d9503);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d9506:{NFSU2_TR(0x5d9506);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d9508:{NFSU2_TR(0x5d9508);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d950b:{NFSU2_TR(0x5d950b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d950e:{NFSU2_TR(0x5d950e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d9510:L5d9510:{c.instructions+=1;NFSU2_TR(0x5d9510);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x434cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9516:L5d9516:{c.instructions+=3;NFSU2_TR(0x5d9516);
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5d9519:{NFSU2_TR(0x5d9519);
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
B5d951a:{NFSU2_TR(0x5d951a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9491u);}goto L5d9491;}}
}
B5d9520:L5d9520:{c.instructions+=4;NFSU2_TR(0x5d9520);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d9521:{NFSU2_TR(0x5d9521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9522:{NFSU2_TR(0x5d9522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d9523:{NFSU2_TR(0x5d9523);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9530:L5d9530:{c.instructions+=6;NFSU2_TR(0x5d9530);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9531:{NFSU2_TR(0x5d9531);
__builtin_memmove((R+24),(R+4),4);
}
B5d9533:{NFSU2_TR(0x5d9533);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d9537:{NFSU2_TR(0x5d9537);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d953a:{NFSU2_TR(0x5d953a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d953c:{NFSU2_TR(0x5d953c);
if(r1(R+518)){{goto L5d9592;}}
}
B5d953e:L5d953e:{c.instructions+=4;NFSU2_TR(0x5d953e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d9542:{NFSU2_TR(0x5d9542);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9543:{NFSU2_TR(0x5d9543);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d954b:{NFSU2_TR(0x5d954b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9550ull));
TAIL_STATIC(0x571770u,571);
}
B5d9550:L5d9550:{c.instructions+=3;NFSU2_TR(0x5d9550);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d9554:{NFSU2_TR(0x5d9554);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5d9557:{NFSU2_TR(0x5d9557);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9567;}}
}
B5d9559:L5d9559:{c.instructions+=4;NFSU2_TR(0x5d9559);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d955d:{NFSU2_TR(0x5d955d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5d9563:{NFSU2_TR(0x5d9563);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9564:{NFSU2_TR(0x5d9564);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9567:L5d9567:{c.instructions+=4;NFSU2_TR(0x5d9567);
__builtin_memmove((R+0),(R+4),4);
}
B5d9569:{NFSU2_TR(0x5d9569);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5d956c:{NFSU2_TR(0x5d956c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d956e:{NFSU2_TR(0x5d956e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d9576;}}
}
B5d9570:L5d9570:{c.instructions+=2;NFSU2_TR(0x5d9570);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5d9574:{NFSU2_TR(0x5d9574);
{goto L5d9578;}
}
B5d9576:L5d9576:{c.instructions+=1;NFSU2_TR(0x5d9576);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d9578:L5d9578:{c.instructions+=7;NFSU2_TR(0x5d9578);
u8 U[6];
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d957e:{NFSU2_TR(0x5d957e);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5d9581:{NFSU2_TR(0x5d9581);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5d9588:{NFSU2_TR(0x5d9588);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d958c:{NFSU2_TR(0x5d958c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d958e:{NFSU2_TR(0x5d958e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d958f:{NFSU2_TR(0x5d958f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9592:L5d9592:{c.instructions+=5;NFSU2_TR(0x5d9592);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d9596:{NFSU2_TR(0x5d9596);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d9598:{NFSU2_TR(0x5d9598);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d959a:{NFSU2_TR(0x5d959a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d95a2:{NFSU2_TR(0x5d95a2);
if(r1(R+518)){{goto L5d95e2;}}
}
B5d95a4:L5d95a4:{c.instructions+=3;NFSU2_TR(0x5d95a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d95a7:{NFSU2_TR(0x5d95a7);
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B5d95ad:{NFSU2_TR(0x5d95ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d95b5;}}
}
B5d95af:L5d95af:{c.instructions+=2;NFSU2_TR(0x5d95af);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B5d95b3:{NFSU2_TR(0x5d95b3);
{goto L5d95b7;}
}
B5d95b5:L5d95b5:{c.instructions+=1;NFSU2_TR(0x5d95b5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5d95b7:L5d95b7:{c.instructions+=16;NFSU2_TR(0x5d95b7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B5d95b9:{NFSU2_TR(0x5d95b9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x8cull))));
}
B5d95be:{NFSU2_TR(0x5d95be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d95bf:{NFSU2_TR(0x5d95bf);
__builtin_memmove((R+28),(R+0),4);
}
B5d95c1:{NFSU2_TR(0x5d95c1);
w4(R+0,u32(0x92492493ull));
}
B5d95c6:{NFSU2_TR(0x5d95c6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5d95c8:{NFSU2_TR(0x5d95c8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B5d95ca:{NFSU2_TR(0x5d95ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5d95cd:{NFSU2_TR(0x5d95cd);
__builtin_memmove((R+0),(R+8),4);
}
B5d95cf:{NFSU2_TR(0x5d95cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d95d2:{NFSU2_TR(0x5d95d2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5d95d4:{NFSU2_TR(0x5d95d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5d95d8:{NFSU2_TR(0x5d95d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d95db:{NFSU2_TR(0x5d95db);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5d95dd:{NFSU2_TR(0x5d95dd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d95e1:{NFSU2_TR(0x5d95e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d95e2:L5d95e2:{c.instructions+=3;NFSU2_TR(0x5d95e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d95e6:{NFSU2_TR(0x5d95e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d95e7:{NFSU2_TR(0x5d95e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d95ecull));
TAIL_STATIC(0x571770u,571);
}
B5d95ec:L5d95ec:{c.instructions+=2;NFSU2_TR(0x5d95ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d95ed:{NFSU2_TR(0x5d95ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d95f0:L5d95f0:{c.instructions+=5;NFSU2_TR(0x5d95f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d95f1:{NFSU2_TR(0x5d95f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d95f2:{NFSU2_TR(0x5d95f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d95f3:{NFSU2_TR(0x5d95f3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5d95f5:{NFSU2_TR(0x5d95f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d95f8:L5d95f8:{c.instructions+=2;NFSU2_TR(0x5d95f8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d95fa:{NFSU2_TR(0x5d95fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d9632;}}
}
B5d95fc:L5d95fc:{c.instructions+=3;NFSU2_TR(0x5d95fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d95fe:{NFSU2_TR(0x5d95fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9600:{NFSU2_TR(0x5d9600);
if(r1(R+518)){{goto L5d9632;}}
}
B5d9602:L5d9602:{c.instructions+=4;NFSU2_TR(0x5d9602);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffeffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9609:{NFSU2_TR(0x5d9609);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d960b:{NFSU2_TR(0x5d960b);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),r2(R+8)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5d960f:{NFSU2_TR(0x5d960f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d9632;}}
}
B5d9611:L5d9611:{c.instructions+=2;NFSU2_TR(0x5d9611);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d9617:{NFSU2_TR(0x5d9617);
{goto L5d9620;}
}
B5d9620:L5d9620:{c.instructions+=6;NFSU2_TR(0x5d9620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xe1fbf7ffull))));
s4(u32(r4(R+0)),r4(U+0));
}
B5d9626:{NFSU2_TR(0x5d9626);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B5d962a:{NFSU2_TR(0x5d962a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5d962b:{NFSU2_TR(0x5d962b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
}
B5d962e:{NFSU2_TR(0x5d962e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d9630:{NFSU2_TR(0x5d9630);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9620u);}goto L5d9620;}}
}
B5d9632:L5d9632:{c.instructions+=4;NFSU2_TR(0x5d9632);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5d9633:{NFSU2_TR(0x5d9633);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5d9636:{NFSU2_TR(0x5d9636);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x5dcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5dcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5dcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d963c:{NFSU2_TR(0x5d963c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d95f8u);}goto L5d95f8;}}
}
B5d963e:L5d963e:{c.instructions+=4;NFSU2_TR(0x5d963e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d963f:{NFSU2_TR(0x5d963f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9640:{NFSU2_TR(0x5d9640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d9641:{NFSU2_TR(0x5d9641);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9650:L5d9650:{c.instructions+=7;NFSU2_TR(0x5d9650);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5d9654:{NFSU2_TR(0x5d9654);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9655:{NFSU2_TR(0x5d9655);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9656:{NFSU2_TR(0x5d9656);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9657:{NFSU2_TR(0x5d9657);
w4(R+24,u32(0x2ull));
}
B5d965c:{NFSU2_TR(0x5d965c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B5d965f:{NFSU2_TR(0x5d965f);
}
B5d9660:L5d9660:{c.instructions+=3;NFSU2_TR(0x5d9660);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d9663:{NFSU2_TR(0x5d9663);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d9665:{NFSU2_TR(0x5d9665);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d9685;}}
}
B5d9667:L5d9667:{c.instructions+=3;NFSU2_TR(0x5d9667);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d966a:{NFSU2_TR(0x5d966a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d966c:{NFSU2_TR(0x5d966c);
if(r1(R+518)){{goto L5d9685;}}
}
B5d966e:L5d966e:{c.instructions+=8;NFSU2_TR(0x5d966e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d9671:{NFSU2_TR(0x5d9671);
__builtin_memmove((R+12),(R+8),1);
}
B5d9673:{NFSU2_TR(0x5d9673);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B5d9675:{NFSU2_TR(0x5d9675);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5d9677:{NFSU2_TR(0x5d9677);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x40ull))));
}
B5d967a:{NFSU2_TR(0x5d967a);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffff53full))));
}
B5d9680:{NFSU2_TR(0x5d9680);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+28))));
}
B5d9682:{NFSU2_TR(0x5d9682);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9685:L5d9685:{c.instructions+=3;NFSU2_TR(0x5d9685);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d9688:{NFSU2_TR(0x5d9688);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d968a:{NFSU2_TR(0x5d968a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d96a9;}}
}
B5d968c:L5d968c:{c.instructions+=3;NFSU2_TR(0x5d968c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d968e:{NFSU2_TR(0x5d968e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9690:{NFSU2_TR(0x5d9690);
if(r1(R+518)){{goto L5d96a9;}}
}
B5d9692:L5d9692:{c.instructions+=8;NFSU2_TR(0x5d9692);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d9695:{NFSU2_TR(0x5d9695);
__builtin_memmove((R+12),(R+8),1);
}
B5d9697:{NFSU2_TR(0x5d9697);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B5d9699:{NFSU2_TR(0x5d9699);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5d969b:{NFSU2_TR(0x5d969b);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x40ull))));
}
B5d969e:{NFSU2_TR(0x5d969e);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffff53full))));
}
B5d96a4:{NFSU2_TR(0x5d96a4);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+28))));
}
B5d96a6:{NFSU2_TR(0x5d96a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d96a9:L5d96a9:{c.instructions+=2;NFSU2_TR(0x5d96a9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d96ab:{NFSU2_TR(0x5d96ab);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d96cb;}}
}
B5d96ad:L5d96ad:{c.instructions+=3;NFSU2_TR(0x5d96ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d96b0:{NFSU2_TR(0x5d96b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d96b2:{NFSU2_TR(0x5d96b2);
if(r1(R+518)){{goto L5d96cb;}}
}
B5d96b4:L5d96b4:{c.instructions+=8;NFSU2_TR(0x5d96b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d96b7:{NFSU2_TR(0x5d96b7);
__builtin_memmove((R+12),(R+8),1);
}
B5d96b9:{NFSU2_TR(0x5d96b9);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B5d96bb:{NFSU2_TR(0x5d96bb);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5d96bd:{NFSU2_TR(0x5d96bd);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x40ull))));
}
B5d96c0:{NFSU2_TR(0x5d96c0);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffff53full))));
}
B5d96c6:{NFSU2_TR(0x5d96c6);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+28))));
}
B5d96c8:{NFSU2_TR(0x5d96c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d96cb:L5d96cb:{c.instructions+=3;NFSU2_TR(0x5d96cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d96ce:{NFSU2_TR(0x5d96ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d96d0:{NFSU2_TR(0x5d96d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d96f0;}}
}
B5d96d2:L5d96d2:{c.instructions+=3;NFSU2_TR(0x5d96d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d96d5:{NFSU2_TR(0x5d96d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d96d7:{NFSU2_TR(0x5d96d7);
if(r1(R+518)){{goto L5d96f0;}}
}
B5d96d9:L5d96d9:{c.instructions+=8;NFSU2_TR(0x5d96d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d96dc:{NFSU2_TR(0x5d96dc);
__builtin_memmove((R+12),(R+8),1);
}
B5d96de:{NFSU2_TR(0x5d96de);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B5d96e0:{NFSU2_TR(0x5d96e0);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5d96e2:{NFSU2_TR(0x5d96e2);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x40ull))));
}
B5d96e5:{NFSU2_TR(0x5d96e5);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffff53full))));
}
B5d96eb:{NFSU2_TR(0x5d96eb);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+28))));
}
B5d96ed:{NFSU2_TR(0x5d96ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d96f0:L5d96f0:{c.instructions+=5;NFSU2_TR(0x5d96f0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5d96f3:{NFSU2_TR(0x5d96f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d96f6:{NFSU2_TR(0x5d96f6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5d96f9:{NFSU2_TR(0x5d96f9);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x5dcull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x5dcull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x5dcull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d96fe:{NFSU2_TR(0x5d96fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9660u);}goto L5d9660;}}
}
B5d9704:L5d9704:{c.instructions+=4;NFSU2_TR(0x5d9704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d9705:{NFSU2_TR(0x5d9705);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9706:{NFSU2_TR(0x5d9706);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d9707:{NFSU2_TR(0x5d9707);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9710:L5d9710:{c.instructions+=13;NFSU2_TR(0x5d9710);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9711:{NFSU2_TR(0x5d9711);
__builtin_memmove((R+20),(R+16),4);
}
B5d9713:{NFSU2_TR(0x5d9713);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5d9716:{NFSU2_TR(0x5d9716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5d9719:{NFSU2_TR(0x5d9719);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d971a:{NFSU2_TR(0x5d971a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d971b:{NFSU2_TR(0x5d971b);
__builtin_memmove((R+12),(R+4),4);
}
B5d971d:{NFSU2_TR(0x5d971d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d971e:{NFSU2_TR(0x5d971e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d971f:{NFSU2_TR(0x5d971f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9723:{NFSU2_TR(0x5d9723);
w4(R+8,u32(0x2ull));
}
B5d9728:{NFSU2_TR(0x5d9728);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d972b:{NFSU2_TR(0x5d972b);
{goto L5d9730;}
}
B5d9730:L5d9730:{c.instructions+=4;NFSU2_TR(0x5d9730);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d9733:{NFSU2_TR(0x5d9733);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d9735:{NFSU2_TR(0x5d9735);
w4(R+24,u32(0xffffefffull));
}
B5d973a:{NFSU2_TR(0x5d973a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d9746;}}
}
B5d973c:L5d973c:{c.instructions+=3;NFSU2_TR(0x5d973c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d973f:{NFSU2_TR(0x5d973f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9741:{NFSU2_TR(0x5d9741);
if(r1(R+518)){{goto L5d9746;}}
}
B5d9743:L5d9743:{c.instructions+=1;NFSU2_TR(0x5d9743);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9746:L5d9746:{c.instructions+=3;NFSU2_TR(0x5d9746);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d9749:{NFSU2_TR(0x5d9749);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d974b:{NFSU2_TR(0x5d974b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d9756;}}
}
B5d974d:L5d974d:{c.instructions+=3;NFSU2_TR(0x5d974d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d974f:{NFSU2_TR(0x5d974f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9751:{NFSU2_TR(0x5d9751);
if(r1(R+518)){{goto L5d9756;}}
}
B5d9753:L5d9753:{c.instructions+=1;NFSU2_TR(0x5d9753);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9756:L5d9756:{c.instructions+=2;NFSU2_TR(0x5d9756);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d9758:{NFSU2_TR(0x5d9758);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d9764;}}
}
B5d975a:L5d975a:{c.instructions+=3;NFSU2_TR(0x5d975a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d975d:{NFSU2_TR(0x5d975d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d975f:{NFSU2_TR(0x5d975f);
if(r1(R+518)){{goto L5d9764;}}
}
B5d9761:L5d9761:{c.instructions+=1;NFSU2_TR(0x5d9761);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9764:L5d9764:{c.instructions+=3;NFSU2_TR(0x5d9764);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d9767:{NFSU2_TR(0x5d9767);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d9769:{NFSU2_TR(0x5d9769);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d9775;}}
}
B5d976b:L5d976b:{c.instructions+=3;NFSU2_TR(0x5d976b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d976e:{NFSU2_TR(0x5d976e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9770:{NFSU2_TR(0x5d9770);
if(r1(R+518)){{goto L5d9775;}}
}
B5d9772:L5d9772:{c.instructions+=1;NFSU2_TR(0x5d9772);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9775:L5d9775:{c.instructions+=3;NFSU2_TR(0x5d9775);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d9778:{NFSU2_TR(0x5d9778);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d977a:{NFSU2_TR(0x5d977a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d9786;}}
}
B5d977c:L5d977c:{c.instructions+=3;NFSU2_TR(0x5d977c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d977f:{NFSU2_TR(0x5d977f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9781:{NFSU2_TR(0x5d9781);
if(r1(R+518)){{goto L5d9786;}}
}
B5d9783:L5d9783:{c.instructions+=1;NFSU2_TR(0x5d9783);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9786:L5d9786:{c.instructions+=3;NFSU2_TR(0x5d9786);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d9789:{NFSU2_TR(0x5d9789);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d978b:{NFSU2_TR(0x5d978b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d9797;}}
}
B5d978d:L5d978d:{c.instructions+=3;NFSU2_TR(0x5d978d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d9790:{NFSU2_TR(0x5d9790);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9792:{NFSU2_TR(0x5d9792);
if(r1(R+518)){{goto L5d9797;}}
}
B5d9794:L5d9794:{c.instructions+=1;NFSU2_TR(0x5d9794);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9797:L5d9797:{c.instructions+=3;NFSU2_TR(0x5d9797);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d979a:{NFSU2_TR(0x5d979a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d979c:{NFSU2_TR(0x5d979c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d97a8;}}
}
B5d979e:L5d979e:{c.instructions+=3;NFSU2_TR(0x5d979e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d97a1:{NFSU2_TR(0x5d97a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d97a3:{NFSU2_TR(0x5d97a3);
if(r1(R+518)){{goto L5d97a8;}}
}
B5d97a5:L5d97a5:{c.instructions+=1;NFSU2_TR(0x5d97a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d97a8:L5d97a8:{c.instructions+=3;NFSU2_TR(0x5d97a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d97ab:{NFSU2_TR(0x5d97ab);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d97ad:{NFSU2_TR(0x5d97ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d97b9;}}
}
B5d97af:L5d97af:{c.instructions+=3;NFSU2_TR(0x5d97af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d97b2:{NFSU2_TR(0x5d97b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d97b4:{NFSU2_TR(0x5d97b4);
if(r1(R+518)){{goto L5d97b9;}}
}
B5d97b6:L5d97b6:{c.instructions+=1;NFSU2_TR(0x5d97b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d97b9:L5d97b9:{c.instructions+=3;NFSU2_TR(0x5d97b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d97bc:{NFSU2_TR(0x5d97bc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d97be:{NFSU2_TR(0x5d97be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d97ca;}}
}
B5d97c0:L5d97c0:{c.instructions+=3;NFSU2_TR(0x5d97c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d97c3:{NFSU2_TR(0x5d97c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d97c5:{NFSU2_TR(0x5d97c5);
if(r1(R+518)){{goto L5d97ca;}}
}
B5d97c7:L5d97c7:{c.instructions+=1;NFSU2_TR(0x5d97c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d97ca:L5d97ca:{c.instructions+=3;NFSU2_TR(0x5d97ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d97cd:{NFSU2_TR(0x5d97cd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d97cf:{NFSU2_TR(0x5d97cf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d97db;}}
}
B5d97d1:L5d97d1:{c.instructions+=3;NFSU2_TR(0x5d97d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d97d4:{NFSU2_TR(0x5d97d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d97d6:{NFSU2_TR(0x5d97d6);
if(r1(R+518)){{goto L5d97db;}}
}
B5d97d8:L5d97d8:{c.instructions+=1;NFSU2_TR(0x5d97d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d97db:L5d97db:{c.instructions+=5;NFSU2_TR(0x5d97db);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xaull))));
}
B5d97de:{NFSU2_TR(0x5d97de);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d97e1:{NFSU2_TR(0x5d97e1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B5d97e4:{NFSU2_TR(0x5d97e4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5dcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5dcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d97ea:{NFSU2_TR(0x5d97ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9730u);}goto L5d9730;}}
}
B5d97f0:L5d97f0:{c.instructions+=3;NFSU2_TR(0x5d97f0);
__builtin_memmove((R+0),gp(0x88f730),4);
}
B5d97f5:{NFSU2_TR(0x5d97f5);
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
B5d97f7:{NFSU2_TR(0x5d97f7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d98b4;}}
}
B5d97fd:L5d97fd:{c.instructions+=2;NFSU2_TR(0x5d97fd);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5d97ff:{NFSU2_TR(0x5d97ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9803:L5d9803:{c.instructions+=5;NFSU2_TR(0x5d9803);
__builtin_memmove((R+8),gp(0x88f734),4);
}
B5d9809:{NFSU2_TR(0x5d9809);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5d980d:{NFSU2_TR(0x5d980d);
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
B5d980f:{NFSU2_TR(0x5d980f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5d9812:{NFSU2_TR(0x5d9812);
if(r1(R+518)){{goto L5d98a2;}}
}
B5d9818:L5d9818:{c.instructions+=6;NFSU2_TR(0x5d9818);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9819:{NFSU2_TR(0x5d9819);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d981d:{NFSU2_TR(0x5d981d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d981e:{NFSU2_TR(0x5d981e);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d9822:{NFSU2_TR(0x5d9822);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9823:{NFSU2_TR(0x5d9823);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9828ull));
TAIL_STATIC(0x43d250u,43d);
}
B5d9828:L5d9828:{c.instructions+=7;NFSU2_TR(0x5d9828);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B5d982b:{NFSU2_TR(0x5d982b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d982c:{NFSU2_TR(0x5d982c);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d9830:{NFSU2_TR(0x5d9830);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9831:{NFSU2_TR(0x5d9831);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d9835:{NFSU2_TR(0x5d9835);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9836:{NFSU2_TR(0x5d9836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d983bull));
TAIL_STATIC(0x43d270u,43d);
}
B5d983b:L5d983b:{c.instructions+=3;NFSU2_TR(0x5d983b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5d983e:{NFSU2_TR(0x5d983e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5d9840:{NFSU2_TR(0x5d9840);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B5d9843:L5d9843:{c.instructions+=2;NFSU2_TR(0x5d9843);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d9845:{NFSU2_TR(0x5d9845);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d9892;}}
}
B5d9847:L5d9847:{c.instructions+=3;NFSU2_TR(0x5d9847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5d9849:{NFSU2_TR(0x5d9849);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d984b:{NFSU2_TR(0x5d984b);
if(r1(R+518)){{goto L5d9892;}}
}
B5d984d:L5d984d:{c.instructions+=5;NFSU2_TR(0x5d984d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9850:{NFSU2_TR(0x5d9850);
__builtin_memmove((R+4),(R+0),4);
}
B5d9852:{NFSU2_TR(0x5d9852);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5d9855:{NFSU2_TR(0x5d9855);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d9858:{NFSU2_TR(0x5d9858);
if(r1(R+518)){{goto L5d9892;}}
}
B5d985a:L5d985a:{c.instructions+=3;NFSU2_TR(0x5d985a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d985d:{NFSU2_TR(0x5d985d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d985f:{NFSU2_TR(0x5d985f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9892;}}
}
B5d9861:L5d9861:{c.instructions+=9;NFSU2_TR(0x5d9861);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d9864:{NFSU2_TR(0x5d9864);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9865:{NFSU2_TR(0x5d9865);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d9868:{NFSU2_TR(0x5d9868);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9869:{NFSU2_TR(0x5d9869);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d986d:{NFSU2_TR(0x5d986d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d986e:{NFSU2_TR(0x5d986e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d9872:{NFSU2_TR(0x5d9872);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9873:{NFSU2_TR(0x5d9873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9878ull));
TAIL_STATIC(0x43d4c0u,43d);
}
B5d9878:L5d9878:{c.instructions+=8;NFSU2_TR(0x5d9878);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d987b:{NFSU2_TR(0x5d987b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d987e:{NFSU2_TR(0x5d987e);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5d9880:{NFSU2_TR(0x5d9880);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5d9882:{NFSU2_TR(0x5d9882);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1000ull))));
}
B5d9887:{NFSU2_TR(0x5d9887);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffefffull))));
}
B5d988d:{NFSU2_TR(0x5d988d);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B5d988f:{NFSU2_TR(0x5d988f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9892:L5d9892:{c.instructions+=4;NFSU2_TR(0x5d9892);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5d9893:{NFSU2_TR(0x5d9893);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5d9896:{NFSU2_TR(0x5d9896);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5dcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5dcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d989c:{NFSU2_TR(0x5d989c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9843u);}goto L5d9843;}}
}
B5d989e:L5d989e:{c.instructions+=1;NFSU2_TR(0x5d989e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d98a2:L5d98a2:{c.instructions+=5;NFSU2_TR(0x5d98a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d98a6:{NFSU2_TR(0x5d98a6);
w1(R+512,carry<u32>(r4(R+20),u32(0x24ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x24ull))));
}
B5d98a9:{NFSU2_TR(0x5d98a9);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d98aa:{NFSU2_TR(0x5d98aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d98ae:{NFSU2_TR(0x5d98ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9803u);}goto L5d9803;}}
}
B5d98b4:L5d98b4:{c.instructions+=7;NFSU2_TR(0x5d98b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d98b5:{NFSU2_TR(0x5d98b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d98b6:{NFSU2_TR(0x5d98b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d98b7:{NFSU2_TR(0x5d98b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d98b8:{NFSU2_TR(0x5d98b8);
__builtin_memmove((R+16),(R+20),4);
}
B5d98ba:{NFSU2_TR(0x5d98ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d98bb:{NFSU2_TR(0x5d98bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d98c0:L5d98c0:{c.instructions+=7;NFSU2_TR(0x5d98c0);
__builtin_memmove((R+0),gp(0x883db8),4);
}
B5d98c5:{NFSU2_TR(0x5d98c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d98c6:{NFSU2_TR(0x5d98c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d98c7:{NFSU2_TR(0x5d98c7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5d98c9:{NFSU2_TR(0x5d98c9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d98cb:{NFSU2_TR(0x5d98cb);
__builtin_memmove(gp(0x883db4),(R+0),4);
}
B5d98d0:{NFSU2_TR(0x5d98d0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5d992a;}}
}
B5d98d2:L5d98d2:{c.instructions+=3;NFSU2_TR(0x5d98d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d98d3:{NFSU2_TR(0x5d98d3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5d98d5:{NFSU2_TR(0x5d98d5);
{goto L5d98e0;}
}
B5d98e0:L5d98e0:{c.instructions+=24;NFSU2_TR(0x5d98e0);
__builtin_memmove((R+0),gp(0x883db0),4);
}
B5d98e5:{NFSU2_TR(0x5d98e5);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5d98e9:{NFSU2_TR(0x5d98e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5d98ec:{NFSU2_TR(0x5d98ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d98ef:{NFSU2_TR(0x5d98ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d98f2:{NFSU2_TR(0x5d98f2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B5d98f5:{NFSU2_TR(0x5d98f5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B5d98f7:{NFSU2_TR(0x5d98f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d98fa:{NFSU2_TR(0x5d98fa);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B5d98fd:{NFSU2_TR(0x5d98fd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B5d98ff:{NFSU2_TR(0x5d98ff);
__builtin_memmove((R+0),(R+8),4);
}
B5d9901:{NFSU2_TR(0x5d9901);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d9904:{NFSU2_TR(0x5d9904);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B5d9907:{NFSU2_TR(0x5d9907);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d990a:{NFSU2_TR(0x5d990a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B5d990c:{NFSU2_TR(0x5d990c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0ull))));
}
B5d9911:{NFSU2_TR(0x5d9911);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B5d9913:{NFSU2_TR(0x5d9913);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d9919:{NFSU2_TR(0x5d9919);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d991c:{NFSU2_TR(0x5d991c);
__builtin_memmove((R+0),gp(0x883db4),4);
}
B5d9921:{NFSU2_TR(0x5d9921);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5d9922:{NFSU2_TR(0x5d9922);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B5d9925:{NFSU2_TR(0x5d9925);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B5d9927:{NFSU2_TR(0x5d9927);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d98e0u);}goto L5d98e0;}}
}
B5d9929:L5d9929:{c.instructions+=1;NFSU2_TR(0x5d9929);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d992a:L5d992a:{c.instructions+=3;NFSU2_TR(0x5d992a);
w4(R+8,u32(0x2ull));
}
B5d992f:{NFSU2_TR(0x5d992f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d9932:{NFSU2_TR(0x5d9932);
w4(R+24,u32(0xfffffffdull));
}
B5d9937:L5d9937:{c.instructions+=3;NFSU2_TR(0x5d9937);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d993a:{NFSU2_TR(0x5d993a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d993c:{NFSU2_TR(0x5d993c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d9948;}}
}
B5d993e:L5d993e:{c.instructions+=3;NFSU2_TR(0x5d993e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d9941:{NFSU2_TR(0x5d9941);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9943:{NFSU2_TR(0x5d9943);
if(r1(R+518)){{goto L5d9948;}}
}
B5d9945:L5d9945:{c.instructions+=1;NFSU2_TR(0x5d9945);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9948:L5d9948:{c.instructions+=3;NFSU2_TR(0x5d9948);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d994b:{NFSU2_TR(0x5d994b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d994d:{NFSU2_TR(0x5d994d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d9958;}}
}
B5d994f:L5d994f:{c.instructions+=3;NFSU2_TR(0x5d994f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d9951:{NFSU2_TR(0x5d9951);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9953:{NFSU2_TR(0x5d9953);
if(r1(R+518)){{goto L5d9958;}}
}
B5d9955:L5d9955:{c.instructions+=1;NFSU2_TR(0x5d9955);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9958:L5d9958:{c.instructions+=2;NFSU2_TR(0x5d9958);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d995a:{NFSU2_TR(0x5d995a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d9966;}}
}
B5d995c:L5d995c:{c.instructions+=3;NFSU2_TR(0x5d995c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d995f:{NFSU2_TR(0x5d995f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9961:{NFSU2_TR(0x5d9961);
if(r1(R+518)){{goto L5d9966;}}
}
B5d9963:L5d9963:{c.instructions+=1;NFSU2_TR(0x5d9963);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9966:L5d9966:{c.instructions+=3;NFSU2_TR(0x5d9966);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d9969:{NFSU2_TR(0x5d9969);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d996b:{NFSU2_TR(0x5d996b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d9977;}}
}
B5d996d:L5d996d:{c.instructions+=3;NFSU2_TR(0x5d996d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d9970:{NFSU2_TR(0x5d9970);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9972:{NFSU2_TR(0x5d9972);
if(r1(R+518)){{goto L5d9977;}}
}
B5d9974:L5d9974:{c.instructions+=1;NFSU2_TR(0x5d9974);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9977:L5d9977:{c.instructions+=3;NFSU2_TR(0x5d9977);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d997a:{NFSU2_TR(0x5d997a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d997c:{NFSU2_TR(0x5d997c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d9988;}}
}
B5d997e:L5d997e:{c.instructions+=3;NFSU2_TR(0x5d997e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d9981:{NFSU2_TR(0x5d9981);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9983:{NFSU2_TR(0x5d9983);
if(r1(R+518)){{goto L5d9988;}}
}
B5d9985:L5d9985:{c.instructions+=1;NFSU2_TR(0x5d9985);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9988:L5d9988:{c.instructions+=3;NFSU2_TR(0x5d9988);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d998b:{NFSU2_TR(0x5d998b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d998d:{NFSU2_TR(0x5d998d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d9999;}}
}
B5d998f:L5d998f:{c.instructions+=3;NFSU2_TR(0x5d998f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d9992:{NFSU2_TR(0x5d9992);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9994:{NFSU2_TR(0x5d9994);
if(r1(R+518)){{goto L5d9999;}}
}
B5d9996:L5d9996:{c.instructions+=1;NFSU2_TR(0x5d9996);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9999:L5d9999:{c.instructions+=3;NFSU2_TR(0x5d9999);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d999c:{NFSU2_TR(0x5d999c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d999e:{NFSU2_TR(0x5d999e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d99aa;}}
}
B5d99a0:L5d99a0:{c.instructions+=3;NFSU2_TR(0x5d99a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d99a3:{NFSU2_TR(0x5d99a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d99a5:{NFSU2_TR(0x5d99a5);
if(r1(R+518)){{goto L5d99aa;}}
}
B5d99a7:L5d99a7:{c.instructions+=1;NFSU2_TR(0x5d99a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d99aa:L5d99aa:{c.instructions+=3;NFSU2_TR(0x5d99aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d99ad:{NFSU2_TR(0x5d99ad);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d99af:{NFSU2_TR(0x5d99af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d99bb;}}
}
B5d99b1:L5d99b1:{c.instructions+=3;NFSU2_TR(0x5d99b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d99b4:{NFSU2_TR(0x5d99b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d99b6:{NFSU2_TR(0x5d99b6);
if(r1(R+518)){{goto L5d99bb;}}
}
B5d99b8:L5d99b8:{c.instructions+=1;NFSU2_TR(0x5d99b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d99bb:L5d99bb:{c.instructions+=3;NFSU2_TR(0x5d99bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d99be:{NFSU2_TR(0x5d99be);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d99c0:{NFSU2_TR(0x5d99c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d99cc;}}
}
B5d99c2:L5d99c2:{c.instructions+=3;NFSU2_TR(0x5d99c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d99c5:{NFSU2_TR(0x5d99c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d99c7:{NFSU2_TR(0x5d99c7);
if(r1(R+518)){{goto L5d99cc;}}
}
B5d99c9:L5d99c9:{c.instructions+=1;NFSU2_TR(0x5d99c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d99cc:L5d99cc:{c.instructions+=3;NFSU2_TR(0x5d99cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d99cf:{NFSU2_TR(0x5d99cf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d99d1:{NFSU2_TR(0x5d99d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d99dd;}}
}
B5d99d3:L5d99d3:{c.instructions+=3;NFSU2_TR(0x5d99d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d99d6:{NFSU2_TR(0x5d99d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d99d8:{NFSU2_TR(0x5d99d8);
if(r1(R+518)){{goto L5d99dd;}}
}
B5d99da:L5d99da:{c.instructions+=1;NFSU2_TR(0x5d99da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d99dd:L5d99dd:{c.instructions+=5;NFSU2_TR(0x5d99dd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xaull))));
}
B5d99e0:{NFSU2_TR(0x5d99e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d99e3:{NFSU2_TR(0x5d99e3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B5d99e6:{NFSU2_TR(0x5d99e6);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x5dcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5dcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5dcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d99ec:{NFSU2_TR(0x5d99ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9937u);}goto L5d9937;}}
}
B5d99f2:L5d99f2:{c.instructions+=3;NFSU2_TR(0x5d99f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d99f3:{NFSU2_TR(0x5d99f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d99f4:{NFSU2_TR(0x5d99f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9a00:L5d9a00:{c.instructions+=9;NFSU2_TR(0x5d9a00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9a01:{NFSU2_TR(0x5d9a01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9a02:{NFSU2_TR(0x5d9a02);
__builtin_memmove((R+12),(R+4),4);
}
B5d9a04:{NFSU2_TR(0x5d9a04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d9a06:{NFSU2_TR(0x5d9a06);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9a07:{NFSU2_TR(0x5d9a07);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5d9a09:{NFSU2_TR(0x5d9a09);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5d9a0b:{NFSU2_TR(0x5d9a0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9a0f:{NFSU2_TR(0x5d9a0f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d9a54;}}
}
B5d9a11:L5d9a11:{c.instructions+=2;NFSU2_TR(0x5d9a11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9a12:{NFSU2_TR(0x5d9a12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9a13:L5d9a13:{c.instructions+=5;NFSU2_TR(0x5d9a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d9a16:{NFSU2_TR(0x5d9a16);
u8 U[16];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B5d9a1d:{NFSU2_TR(0x5d9a1d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B5d9a1f:{NFSU2_TR(0x5d9a1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9a21:{NFSU2_TR(0x5d9a21);
if(r1(R+518)){{goto L5d9a3d;}}
}
B5d9a23:L5d9a23:{c.instructions+=2;NFSU2_TR(0x5d9a23);
__builtin_memmove((R+4),(R+28),4);
}
B5d9a25:{NFSU2_TR(0x5d9a25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9a2aull));
TAIL_STATIC(0x5774a0u,577);
}
B5d9a2a:L5d9a2a:{c.instructions+=2;NFSU2_TR(0x5d9a2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9a2b:{NFSU2_TR(0x5d9a2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9a30ull));
TAIL_STATIC(0x575630u,575);
}
B5d9a30:L5d9a30:{c.instructions+=2;NFSU2_TR(0x5d9a30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d9a33:{NFSU2_TR(0x5d9a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9a3d:L5d9a3d:{c.instructions+=7;NFSU2_TR(0x5d9a3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9a41:{NFSU2_TR(0x5d9a41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d9a43:{NFSU2_TR(0x5d9a43);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d9a44:{NFSU2_TR(0x5d9a44);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xdcull))));
}
B5d9a4a:{NFSU2_TR(0x5d9a4a);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5d9a4c:{NFSU2_TR(0x5d9a4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9a50:{NFSU2_TR(0x5d9a50);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9a13u);}goto L5d9a13;}}
}
B5d9a52:L5d9a52:{c.instructions+=2;NFSU2_TR(0x5d9a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d9a53:{NFSU2_TR(0x5d9a53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9a54:L5d9a54:{c.instructions+=4;NFSU2_TR(0x5d9a54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d9a55:{NFSU2_TR(0x5d9a55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d9a56:{NFSU2_TR(0x5d9a56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d9a57:{NFSU2_TR(0x5d9a57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9a60:L5d9a60:{c.instructions+=4;NFSU2_TR(0x5d9a60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9a61:{NFSU2_TR(0x5d9a61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9a62:{NFSU2_TR(0x5d9a62);
__builtin_memmove((R+24),(R+4),4);
}
B5d9a64:{NFSU2_TR(0x5d9a64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9a69ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9a00u);}goto L5d9a00;}
}
B5d9a69:L5d9a69:{c.instructions+=4;NFSU2_TR(0x5d9a69);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d9a6c:{NFSU2_TR(0x5d9a6c);
w4(R+4,u32(0x107ull));
}
B5d9a71:{NFSU2_TR(0x5d9a71);
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
B5d9a73:{NFSU2_TR(0x5d9a73);
__builtin_memmove((R+28),(R+8),4);
}
B5d9a75:L5d9a75:{c.instructions+=1;NFSU2_TR(0x5d9a75);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5d9a77;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9a75u);}goto L5d9a75;}
}
B5d9a77:L5d9a77:{c.instructions+=6;NFSU2_TR(0x5d9a77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d9a78:{NFSU2_TR(0x5d9a78);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5d9a7e:{NFSU2_TR(0x5d9a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9a85:{NFSU2_TR(0x5d9a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w4(U+4,u32(0x43000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9a8c:{NFSU2_TR(0x5d9a8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9a8d:{NFSU2_TR(0x5d9a8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9a90:L5d9a90:{c.instructions+=5;NFSU2_TR(0x5d9a90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9a91:{NFSU2_TR(0x5d9a91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9a92:{NFSU2_TR(0x5d9a92);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d9a96:{NFSU2_TR(0x5d9a96);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80034147ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5d9a9c:{NFSU2_TR(0x5d9a9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9be0;}}
}
B5d9aa2:L5d9aa2:{c.instructions+=6;NFSU2_TR(0x5d9aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9aa5:{NFSU2_TR(0x5d9aa5);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d9aa9:{NFSU2_TR(0x5d9aa9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B5d9aac:{NFSU2_TR(0x5d9aac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d9aae:{NFSU2_TR(0x5d9aae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9ab2:{NFSU2_TR(0x5d9ab2);
if(r1(R+518)){{goto L5d9bd1;}}
}
B5d9ab8:L5d9ab8:{c.instructions+=3;NFSU2_TR(0x5d9ab8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9ab9:{NFSU2_TR(0x5d9ab9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9aba:{NFSU2_TR(0x5d9aba);
__builtin_memmove((R+12),(R+12),4);
}
B5d9ac0:L5d9ac0:{c.instructions+=3;NFSU2_TR(0x5d9ac0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d9ac2:{NFSU2_TR(0x5d9ac2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34148ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9ac7:{NFSU2_TR(0x5d9ac7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9ae2;}}
}
B5d9ac9:L5d9ac9:{c.instructions+=7;NFSU2_TR(0x5d9ac9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d9acc:{NFSU2_TR(0x5d9acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9acf:{NFSU2_TR(0x5d9acf);
w4(R+0,u32(0xaaaaaaabull));
}
B5d9ad4:{NFSU2_TR(0x5d9ad4);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B5d9ad7:{NFSU2_TR(0x5d9ad7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5d9ada:{NFSU2_TR(0x5d9ada);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9add:{NFSU2_TR(0x5d9add);
{goto L5d9bbe;}
}
B5d9ae2:L5d9ae2:{c.instructions+=2;NFSU2_TR(0x5d9ae2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34149ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9ae7:{NFSU2_TR(0x5d9ae7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9b30;}}
}
B5d9ae9:L5d9ae9:{c.instructions+=12;NFSU2_TR(0x5d9ae9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d9aec:{NFSU2_TR(0x5d9aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9aef:{NFSU2_TR(0x5d9aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d9af2:{NFSU2_TR(0x5d9af2);
w4(R+0,u32(0x29e4129full));
}
B5d9af7:{NFSU2_TR(0x5d9af7);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+24)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5d9af9:{NFSU2_TR(0x5d9af9);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B5d9afb:{NFSU2_TR(0x5d9afb);
w4(R+24,shr<u32>(r4(R+24),u64(u32(0x1ull))));
}
B5d9afd:{NFSU2_TR(0x5d9afd);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B5d9aff:{NFSU2_TR(0x5d9aff);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B5d9b02:{NFSU2_TR(0x5d9b02);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9b04:{NFSU2_TR(0x5d9b04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d9b06:{NFSU2_TR(0x5d9b06);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d9bbe;}}
}
B5d9b0c:L5d9b0c:{c.instructions+=2;NFSU2_TR(0x5d9b0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d9b12:{NFSU2_TR(0x5d9b12);
__builtin_memmove((R+8),(R+24),4);
}
B5d9b14:L5d9b14:{c.instructions+=7;NFSU2_TR(0x5d9b14);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B5d9b18:{NFSU2_TR(0x5d9b18);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9b1c:{NFSU2_TR(0x5d9b1c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+24,u32(r1(U+0)));
}
B5d9b1f:{NFSU2_TR(0x5d9b1f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xdcull))));
}
B5d9b24:{NFSU2_TR(0x5d9b24);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5d9b25:{NFSU2_TR(0x5d9b25);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9b29:{NFSU2_TR(0x5d9b29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9b14u);}goto L5d9b14;}}
}
B5d9b2b:L5d9b2b:{c.instructions+=1;NFSU2_TR(0x5d9b2b);
{goto L5d9bbe;}
}
B5d9b30:L5d9b30:{c.instructions+=2;NFSU2_TR(0x5d9b30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3414aull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9b35:{NFSU2_TR(0x5d9b35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9b80;}}
}
B5d9b37:L5d9b37:{c.instructions+=8;NFSU2_TR(0x5d9b37);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d9b3a:{NFSU2_TR(0x5d9b3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x43cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9b40:{NFSU2_TR(0x5d9b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d9b43:{NFSU2_TR(0x5d9b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x438ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9b49:{NFSU2_TR(0x5d9b49);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5d9b4b:{NFSU2_TR(0x5d9b4b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5d9b4d:{NFSU2_TR(0x5d9b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x434ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9b57:{NFSU2_TR(0x5d9b57);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d9bbe;}}
}
B5d9b59:L5d9b59:{c.instructions+=1;NFSU2_TR(0x5d9b59);
__builtin_memmove((R+16),(R+16),4);
}
B5d9b60:L5d9b60:{c.instructions+=8;NFSU2_TR(0x5d9b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9b66:{NFSU2_TR(0x5d9b66);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d9b6a:{NFSU2_TR(0x5d9b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d9b70:{NFSU2_TR(0x5d9b70);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5d9b72:{NFSU2_TR(0x5d9b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x43cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d9b78:{NFSU2_TR(0x5d9b78);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B5d9b7a:{NFSU2_TR(0x5d9b7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5d9b7c:{NFSU2_TR(0x5d9b7c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9b60u);}goto L5d9b60;}}
}
B5d9b7e:L5d9b7e:{c.instructions+=1;NFSU2_TR(0x5d9b7e);
{goto L5d9bbe;}
}
B5d9b80:L5d9b80:{c.instructions+=2;NFSU2_TR(0x5d9b80);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3414cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9b85:{NFSU2_TR(0x5d9b85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9b9d;}}
}
B5d9b87:L5d9b87:{c.instructions+=7;NFSU2_TR(0x5d9b87);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d9b8a:{NFSU2_TR(0x5d9b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9b8d:{NFSU2_TR(0x5d9b8d);
w4(R+0,u32(0xf0f0f0f1ull));
}
B5d9b92:{NFSU2_TR(0x5d9b92);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B5d9b95:{NFSU2_TR(0x5d9b95);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5d9b98:{NFSU2_TR(0x5d9b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9b9b:{NFSU2_TR(0x5d9b9b);
{goto L5d9bbe;}
}
B5d9b9d:L5d9b9d:{c.instructions+=2;NFSU2_TR(0x5d9b9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3414dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9ba2:{NFSU2_TR(0x5d9ba2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9bbe;}}
}
B5d9ba4:L5d9ba4:{c.instructions+=6;NFSU2_TR(0x5d9ba4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d9ba7:{NFSU2_TR(0x5d9ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x49cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9bad:{NFSU2_TR(0x5d9bad);
w4(R+0,u32(0x38e38e39ull));
}
B5d9bb2:{NFSU2_TR(0x5d9bb2);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B5d9bb5:{NFSU2_TR(0x5d9bb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5d9bb8:{NFSU2_TR(0x5d9bb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x498ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9bbe:L5d9bbe:{c.instructions+=4;NFSU2_TR(0x5d9bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9bc1:{NFSU2_TR(0x5d9bc1);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5d9bc5:{NFSU2_TR(0x5d9bc5);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d9bc9:{NFSU2_TR(0x5d9bc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9ac0u);}goto L5d9ac0;}}
}
B5d9bcf:L5d9bcf:{c.instructions+=2;NFSU2_TR(0x5d9bcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9bd0:{NFSU2_TR(0x5d9bd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d9bd1:L5d9bd1:{c.instructions+=1;NFSU2_TR(0x5d9bd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9bd6ull));
TAIL_STATIC(0x5d5630u,5d5);
}
B5d9bd6:L5d9bd6:{c.instructions+=4;NFSU2_TR(0x5d9bd6);
w4(R+0,u32(0x1ull));
}
B5d9bdb:{NFSU2_TR(0x5d9bdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d9bdc:{NFSU2_TR(0x5d9bdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d9bdd:{NFSU2_TR(0x5d9bdd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9be0:L5d9be0:{c.instructions+=4;NFSU2_TR(0x5d9be0);
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
B5d9be2:{NFSU2_TR(0x5d9be2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d9be3:{NFSU2_TR(0x5d9be3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d9be4:{NFSU2_TR(0x5d9be4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9bf0:L5d9bf0:{c.instructions+=9;NFSU2_TR(0x5d9bf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9bf4:{NFSU2_TR(0x5d9bf4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9bf5:{NFSU2_TR(0x5d9bf5);
u8 U[16];
w4(U+0,u32(u32(u32(0x444ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B5d9bfc:{NFSU2_TR(0x5d9bfc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9bfd:{NFSU2_TR(0x5d9bfd);
u8 U[16];
w4(U+0,u32(u32(u32(0x440ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B5d9c04:{NFSU2_TR(0x5d9c04);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9c08:{NFSU2_TR(0x5d9c08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9c0a:{NFSU2_TR(0x5d9c0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9c0b:{NFSU2_TR(0x5d9c0b);
if(r1(R+518)){{goto L5d9c13;}}
}
B5d9c0d:L5d9c0d:{c.instructions+=2;NFSU2_TR(0x5d9c0d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5d9c11:{NFSU2_TR(0x5d9c11);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5d9c13:L5d9c13:{c.instructions+=2;NFSU2_TR(0x5d9c13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B5d9c15:{NFSU2_TR(0x5d9c15);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d9c5b;}}
}
B5d9c17:L5d9c17:{c.instructions+=2;NFSU2_TR(0x5d9c17);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d9c1b:{NFSU2_TR(0x5d9c1b);
{goto L5d9c20;}
}
B5d9c20:L5d9c20:{c.instructions+=2;NFSU2_TR(0x5d9c20);
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
B5d9c22:{NFSU2_TR(0x5d9c22);
if(r1(R+518)){{goto L5d9c63;}}
}
B5d9c24:L5d9c24:{c.instructions+=7;NFSU2_TR(0x5d9c24);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9c26:{NFSU2_TR(0x5d9c26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9c27:{NFSU2_TR(0x5d9c27);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d9c2a:{NFSU2_TR(0x5d9c2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9c2b:{NFSU2_TR(0x5d9c2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d9c2e:{NFSU2_TR(0x5d9c2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9c2f:{NFSU2_TR(0x5d9c2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9c34ull));
TAIL_STATIC(0x43d410u,43d);
}
B5d9c34:L5d9c34:{c.instructions+=3;NFSU2_TR(0x5d9c34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d9c37:{NFSU2_TR(0x5d9c37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9c39:{NFSU2_TR(0x5d9c39);
if(r1(R+518)){{goto L5d9c51;}}
}
B5d9c3b:L5d9c3b:{c.instructions+=6;NFSU2_TR(0x5d9c3b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d9c3f:{NFSU2_TR(0x5d9c3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9c40:{NFSU2_TR(0x5d9c40);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d9c43:{NFSU2_TR(0x5d9c43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9c44:{NFSU2_TR(0x5d9c44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9c45:{NFSU2_TR(0x5d9c45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9c4aull));
TAIL_STATIC(0x43d890u,43d);
}
B5d9c4a:L5d9c4a:{c.instructions+=3;NFSU2_TR(0x5d9c4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5d9c4d:{NFSU2_TR(0x5d9c4d);
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
B5d9c4f:{NFSU2_TR(0x5d9c4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9c63;}}
}
B5d9c51:L5d9c51:{c.instructions+=4;NFSU2_TR(0x5d9c51);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d9c55:{NFSU2_TR(0x5d9c55);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B5d9c57:{NFSU2_TR(0x5d9c57);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B5d9c59:{NFSU2_TR(0x5d9c59);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9c20u);}goto L5d9c20;}}
}
B5d9c5b:L5d9c5b:{c.instructions+=5;NFSU2_TR(0x5d9c5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d9c5c:{NFSU2_TR(0x5d9c5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9c5d:{NFSU2_TR(0x5d9c5d);
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
B5d9c5f:{NFSU2_TR(0x5d9c5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d9c60:{NFSU2_TR(0x5d9c60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9c63:L5d9c63:{c.instructions+=5;NFSU2_TR(0x5d9c63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d9c64:{NFSU2_TR(0x5d9c64);
__builtin_memmove((R+0),(R+24),4);
}
B5d9c66:{NFSU2_TR(0x5d9c66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9c67:{NFSU2_TR(0x5d9c67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d9c68:{NFSU2_TR(0x5d9c68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9c70:L5d9c70:{c.instructions+=9;NFSU2_TR(0x5d9c70);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d9c74:{NFSU2_TR(0x5d9c74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9c75:{NFSU2_TR(0x5d9c75);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9c76:{NFSU2_TR(0x5d9c76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9c77:{NFSU2_TR(0x5d9c77);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5d9c79:{NFSU2_TR(0x5d9c79);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9c7b:{NFSU2_TR(0x5d9c7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9c7c:{NFSU2_TR(0x5d9c7c);
__builtin_memmove((R+12),(R+4),4);
}
B5d9c7e:{NFSU2_TR(0x5d9c7e);
if(r1(R+518)){{goto L5d9c82;}}
}
B5d9c80:L5d9c80:{c.instructions+=1;NFSU2_TR(0x5d9c80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5d9c82:L5d9c82:{c.instructions+=2;NFSU2_TR(0x5d9c82);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d9c85:{NFSU2_TR(0x5d9c85);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d9cb4;}}
}
B5d9c87:L5d9c87:{c.instructions+=3;NFSU2_TR(0x5d9c87);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d9c8b:{NFSU2_TR(0x5d9c8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d9c8f:{NFSU2_TR(0x5d9c8f);
}
B5d9c90:L5d9c90:{c.instructions+=5;NFSU2_TR(0x5d9c90);
__builtin_memmove((R+0),(R+20),4);
}
B5d9c92:{NFSU2_TR(0x5d9c92);
__builtin_memmove((R+4),(R+24),4);
}
B5d9c94:{NFSU2_TR(0x5d9c94);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r1(U+0))));
}
B5d9c96:{NFSU2_TR(0x5d9c96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9c98:{NFSU2_TR(0x5d9c98);
if(r1(R+518)){{goto L5d9cb4;}}
}
B5d9c9a:L5d9c9a:{c.instructions+=2;NFSU2_TR(0x5d9c9a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d9c9c:{NFSU2_TR(0x5d9c9c);
if(r1(R+518)){{goto L5d9cac;}}
}
B5d9c9e:L5d9c9e:{c.instructions+=5;NFSU2_TR(0x5d9c9e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9c9f:{NFSU2_TR(0x5d9c9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9ca0:{NFSU2_TR(0x5d9ca0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9ca1:{NFSU2_TR(0x5d9ca1);
__builtin_memmove((R+4),(R+12),4);
}
B5d9ca3:{NFSU2_TR(0x5d9ca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9ca8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9bf0u);}goto L5d9bf0;}
}
B5d9ca8:L5d9ca8:{c.instructions+=2;NFSU2_TR(0x5d9ca8);
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
B5d9caa:{NFSU2_TR(0x5d9caa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9cb6;}}
}
B5d9cac:L5d9cac:{c.instructions+=4;NFSU2_TR(0x5d9cac);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d9cae:{NFSU2_TR(0x5d9cae);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5d9caf:{NFSU2_TR(0x5d9caf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d9cb2:{NFSU2_TR(0x5d9cb2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9c90u);}goto L5d9c90;}}
}
B5d9cb4:L5d9cb4:{c.instructions+=1;NFSU2_TR(0x5d9cb4);
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
B5d9cb6:L5d9cb6:{c.instructions+=5;NFSU2_TR(0x5d9cb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d9cb7:{NFSU2_TR(0x5d9cb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9cb8:{NFSU2_TR(0x5d9cb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d9cb9:{NFSU2_TR(0x5d9cb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d9cba:{NFSU2_TR(0x5d9cba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9cc0:L5d9cc0:{c.instructions+=7;NFSU2_TR(0x5d9cc0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9cc4:{NFSU2_TR(0x5d9cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5d9cc7:{NFSU2_TR(0x5d9cc7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d9cca:{NFSU2_TR(0x5d9cca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9ccb:{NFSU2_TR(0x5d9ccb);
__builtin_memmove((R+28),(R+4),4);
}
B5d9ccd:{NFSU2_TR(0x5d9ccd);
w4(R+4,u32(0x1ull));
}
B5d9cd2:{NFSU2_TR(0x5d9cd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9cd9;}}
}
B5d9cd4:L5d9cd4:{c.instructions+=2;NFSU2_TR(0x5d9cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d9cd7:{NFSU2_TR(0x5d9cd7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d9cd9:L5d9cd9:{c.instructions+=5;NFSU2_TR(0x5d9cd9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d9cdb:{NFSU2_TR(0x5d9cdb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9cdd:{NFSU2_TR(0x5d9cdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9ce1:{NFSU2_TR(0x5d9ce1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9ce5:{NFSU2_TR(0x5d9ce5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d9e27;}}
}
B5d9ceb:L5d9ceb:{c.instructions+=8;NFSU2_TR(0x5d9ceb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9cec:{NFSU2_TR(0x5d9cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d9cef:{NFSU2_TR(0x5d9cef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9cf0:{NFSU2_TR(0x5d9cf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d9cf4:{NFSU2_TR(0x5d9cf4);
u8 U[12];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5d9cf8:{NFSU2_TR(0x5d9cf8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9cf9:{NFSU2_TR(0x5d9cf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9cfd:{NFSU2_TR(0x5d9cfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9d01:L5d9d01:{c.instructions+=7;NFSU2_TR(0x5d9d01);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9d05:{NFSU2_TR(0x5d9d05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5d9d07:{NFSU2_TR(0x5d9d07);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d9d09:{NFSU2_TR(0x5d9d09);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9d0b:{NFSU2_TR(0x5d9d0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9d0f:{NFSU2_TR(0x5d9d0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9d13:{NFSU2_TR(0x5d9d13);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d9dff;}}
}
B5d9d19:L5d9d19:{c.instructions+=1;NFSU2_TR(0x5d9d19);
__builtin_memmove((R+16),(R+16),4);
}
B5d9d20:L5d9d20:{c.instructions+=7;NFSU2_TR(0x5d9d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d9d23:{NFSU2_TR(0x5d9d23);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5d9d25:{NFSU2_TR(0x5d9d25);
u8 U[16];
w4(U+0,u32(u32(u32(0x1b4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5d9d2c:{NFSU2_TR(0x5d9d2c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d9d30:{NFSU2_TR(0x5d9d30);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d9d34:{NFSU2_TR(0x5d9d34);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d9d36:{NFSU2_TR(0x5d9d36);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d9df2;}}
}
B5d9d3c:L5d9d3c:{c.instructions+=6;NFSU2_TR(0x5d9d3c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5d9d3f:{NFSU2_TR(0x5d9d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5d9d42:{NFSU2_TR(0x5d9d42);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5d9d45:{NFSU2_TR(0x5d9d45);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5d9d47:{NFSU2_TR(0x5d9d47);
__builtin_memmove((R+4),(R+8),4);
}
B5d9d49:{NFSU2_TR(0x5d9d49);
__builtin_memmove((R+16),(R+16),4);
}
B5d9d50:L5d9d50:{c.instructions+=2;NFSU2_TR(0x5d9d50);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d9d52:{NFSU2_TR(0x5d9d52);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d9d58;}}
}
B5d9d54:L5d9d54:{c.instructions+=2;NFSU2_TR(0x5d9d54);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d9d56:{NFSU2_TR(0x5d9d56);
{goto L5d9d5d;}
}
B5d9d58:L5d9d58:{c.instructions+=2;NFSU2_TR(0x5d9d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d9d5b:{NFSU2_TR(0x5d9d5b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5d9d5d:L5d9d5d:{c.instructions+=10;NFSU2_TR(0x5d9d5d);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d9d5f:{NFSU2_TR(0x5d9d5f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d9d61:{NFSU2_TR(0x5d9d61);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d9d64:{NFSU2_TR(0x5d9d64);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d9d68:{NFSU2_TR(0x5d9d68);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d9d6b:{NFSU2_TR(0x5d9d6b);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d9d6e:{NFSU2_TR(0x5d9d6e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d9d72:{NFSU2_TR(0x5d9d72);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d9d75:{NFSU2_TR(0x5d9d75);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d9d79:{NFSU2_TR(0x5d9d79);
if(r1(R+518)){{goto L5d9d9d;}}
}
B5d9d7b:L5d9d7b:{c.instructions+=7;NFSU2_TR(0x5d9d7b);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d9d7e:{NFSU2_TR(0x5d9d7e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d9d80:{NFSU2_TR(0x5d9d80);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d9d82:{NFSU2_TR(0x5d9d82);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5d9d84:{NFSU2_TR(0x5d9d84);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d9d86:{NFSU2_TR(0x5d9d86);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d9d89:{NFSU2_TR(0x5d9d89);
if(r1(R+514)){{goto L5d9d90;}}
}
B5d9d8b:L5d9d8b:{c.instructions+=2;NFSU2_TR(0x5d9d8b);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d9d8e:{NFSU2_TR(0x5d9d8e);
{goto L5d9d9d;}
}
B5d9d90:L5d9d90:{c.instructions+=4;NFSU2_TR(0x5d9d90);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d9d93:{NFSU2_TR(0x5d9d93);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d9d95:{NFSU2_TR(0x5d9d95);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d9d98:{NFSU2_TR(0x5d9d98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9d9d;}}
}
B5d9d9a:L5d9d9a:{c.instructions+=1;NFSU2_TR(0x5d9d9a);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d9d9d:L5d9d9d:{c.instructions+=15;NFSU2_TR(0x5d9d9d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d9da1:{NFSU2_TR(0x5d9da1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9da5:{NFSU2_TR(0x5d9da5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9da7:{NFSU2_TR(0x5d9da7);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d9dab:{NFSU2_TR(0x5d9dab);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d9daf:{NFSU2_TR(0x5d9daf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d9db3:{NFSU2_TR(0x5d9db3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d9db5:{NFSU2_TR(0x5d9db5);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d9db7:{NFSU2_TR(0x5d9db7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d9db9:{NFSU2_TR(0x5d9db9);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d9dbf:{NFSU2_TR(0x5d9dbf);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5d9dc1:{NFSU2_TR(0x5d9dc1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d9dc3:{NFSU2_TR(0x5d9dc3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d9dc5:{NFSU2_TR(0x5d9dc5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d9dc7:{NFSU2_TR(0x5d9dc7);
if(r1(R+518)){{goto L5d9dd4;}}
}
B5d9dc9:L5d9dc9:{c.instructions+=4;NFSU2_TR(0x5d9dc9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d9dcd:{NFSU2_TR(0x5d9dcd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d9dcf:{NFSU2_TR(0x5d9dcf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d9dd2:{NFSU2_TR(0x5d9dd2);
if(r1(R+514)){{goto L5d9dde;}}
}
B5d9dd4:L5d9dd4:{c.instructions+=3;NFSU2_TR(0x5d9dd4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d9dd8:{NFSU2_TR(0x5d9dd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9ddc:{NFSU2_TR(0x5d9ddc);
{goto L5d9de0;}
}
B5d9dde:L5d9dde:{c.instructions+=1;NFSU2_TR(0x5d9dde);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d9de0:L5d9de0:{c.instructions+=3;NFSU2_TR(0x5d9de0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B5d9de3:{NFSU2_TR(0x5d9de3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5d9de4:{NFSU2_TR(0x5d9de4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9d50u);}goto L5d9d50;}}
}
B5d9dea:L5d9dea:{c.instructions+=2;NFSU2_TR(0x5d9dea);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d9dee:{NFSU2_TR(0x5d9dee);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d9df2:L5d9df2:{c.instructions+=4;NFSU2_TR(0x5d9df2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5d9df3:{NFSU2_TR(0x5d9df3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d9df5:{NFSU2_TR(0x5d9df5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9df9:{NFSU2_TR(0x5d9df9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9d20u);}goto L5d9d20;}}
}
B5d9dff:L5d9dff:{c.instructions+=7;NFSU2_TR(0x5d9dff);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d9e03:{NFSU2_TR(0x5d9e03);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9e07:{NFSU2_TR(0x5d9e07);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B5d9e0a:{NFSU2_TR(0x5d9e0a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d9e0b:{NFSU2_TR(0x5d9e0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9e0f:{NFSU2_TR(0x5d9e0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9e13:{NFSU2_TR(0x5d9e13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d9d01u);}goto L5d9d01;}}
}
B5d9e19:L5d9e19:{c.instructions+=7;NFSU2_TR(0x5d9e19);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9e1d:{NFSU2_TR(0x5d9e1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9e1e:{NFSU2_TR(0x5d9e1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d9e1f:{NFSU2_TR(0x5d9e1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d9e20:{NFSU2_TR(0x5d9e20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d9e21:{NFSU2_TR(0x5d9e21);
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
B5d9e24:{NFSU2_TR(0x5d9e24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9e27:L5d9e27:{c.instructions+=4;NFSU2_TR(0x5d9e27);
__builtin_memmove((R+0),(R+8),4);
}
B5d9e29:{NFSU2_TR(0x5d9e29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d9e2a:{NFSU2_TR(0x5d9e2a);
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
B5d9e2d:{NFSU2_TR(0x5d9e2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9e30:L5d9e30:{c.instructions+=13;NFSU2_TR(0x5d9e30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9e31:{NFSU2_TR(0x5d9e31);
__builtin_memmove((R+20),(R+16),4);
}
B5d9e33:{NFSU2_TR(0x5d9e33);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d9e36:{NFSU2_TR(0x5d9e36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B5d9e39:{NFSU2_TR(0x5d9e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9e3c:{NFSU2_TR(0x5d9e3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9e3d:{NFSU2_TR(0x5d9e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d9e40:{NFSU2_TR(0x5d9e40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9e41:{NFSU2_TR(0x5d9e41);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d9e43:{NFSU2_TR(0x5d9e43);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d9e45:{NFSU2_TR(0x5d9e45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9e46:{NFSU2_TR(0x5d9e46);
__builtin_memmove((R+28),(R+4),4);
}
B5d9e48:{NFSU2_TR(0x5d9e48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9ef0;}}
}
B5d9e4e:L5d9e4e:{c.instructions+=4;NFSU2_TR(0x5d9e4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d9e51:{NFSU2_TR(0x5d9e51);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d9e53:{NFSU2_TR(0x5d9e53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9e56:{NFSU2_TR(0x5d9e56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9e73;}}
}
B5d9e58:L5d9e58:{c.instructions+=6;NFSU2_TR(0x5d9e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d9e5b:{NFSU2_TR(0x5d9e5b);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9e60:{NFSU2_TR(0x5d9e60);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9e62:{NFSU2_TR(0x5d9e62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9e63:{NFSU2_TR(0x5d9e63);
__builtin_memmove((R+4),(R+28),4);
}
B5d9e65:{NFSU2_TR(0x5d9e65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9e6aull));
TAIL_STATIC(0x5d57a0u,5d5);
}
B5d9e6a:L5d9e6a:{c.instructions+=4;NFSU2_TR(0x5d9e6a);
__builtin_memmove((R+4),(R+0),4);
}
B5d9e6c:{NFSU2_TR(0x5d9e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9e6f:{NFSU2_TR(0x5d9e6f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d9e71:{NFSU2_TR(0x5d9e71);
{goto L5d9eba;}
}
B5d9e73:L5d9e73:{c.instructions+=17;NFSU2_TR(0x5d9e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9e76:{NFSU2_TR(0x5d9e76);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d9e78:{NFSU2_TR(0x5d9e78);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d9e7b:{NFSU2_TR(0x5d9e7b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d9e7e:{NFSU2_TR(0x5d9e7e);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d9e81:{NFSU2_TR(0x5d9e81);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d9e83:{NFSU2_TR(0x5d9e83);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d9e85:{NFSU2_TR(0x5d9e85);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d9e87:{NFSU2_TR(0x5d9e87);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d9e89:{NFSU2_TR(0x5d9e89);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d9e8b:{NFSU2_TR(0x5d9e8b);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d9e8d:{NFSU2_TR(0x5d9e8d);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5d9e8f:{NFSU2_TR(0x5d9e8f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d9e91:{NFSU2_TR(0x5d9e91);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d9e97:{NFSU2_TR(0x5d9e97);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d9e99:{NFSU2_TR(0x5d9e99);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d9e9c:{NFSU2_TR(0x5d9e9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9eb7;}}
}
B5d9e9e:L5d9e9e:{c.instructions+=6;NFSU2_TR(0x5d9e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9ea1:{NFSU2_TR(0x5d9ea1);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9ea6:{NFSU2_TR(0x5d9ea6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9ea8:{NFSU2_TR(0x5d9ea8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9ea9:{NFSU2_TR(0x5d9ea9);
__builtin_memmove((R+4),(R+28),4);
}
B5d9eab:{NFSU2_TR(0x5d9eab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9eb0ull));
TAIL_STATIC(0x5d57a0u,5d5);
}
B5d9eb0:L5d9eb0:{c.instructions+=3;NFSU2_TR(0x5d9eb0);
__builtin_memmove((R+4),(R+0),4);
}
B5d9eb2:{NFSU2_TR(0x5d9eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9eb5:{NFSU2_TR(0x5d9eb5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d9eb7:L5d9eb7:{c.instructions+=1;NFSU2_TR(0x5d9eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d9eba:L5d9eba:{c.instructions+=2;NFSU2_TR(0x5d9eba);
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
B5d9ebc:{NFSU2_TR(0x5d9ebc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9ef3;}}
}
B5d9ebe:L5d9ebe:{c.instructions+=19;NFSU2_TR(0x5d9ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9ec1:{NFSU2_TR(0x5d9ec1);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d9ec4:{NFSU2_TR(0x5d9ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d9ec6:{NFSU2_TR(0x5d9ec6);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d9ec9:{NFSU2_TR(0x5d9ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9ecc:{NFSU2_TR(0x5d9ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d9ed3:{NFSU2_TR(0x5d9ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9ed6:{NFSU2_TR(0x5d9ed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9ed9:{NFSU2_TR(0x5d9ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9edc:{NFSU2_TR(0x5d9edc);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d9edf:{NFSU2_TR(0x5d9edf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d9ee1:{NFSU2_TR(0x5d9ee1);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d9ee4:{NFSU2_TR(0x5d9ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9ee7:{NFSU2_TR(0x5d9ee7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d9ee8:{NFSU2_TR(0x5d9ee8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d9ee9:{NFSU2_TR(0x5d9ee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d9eea:{NFSU2_TR(0x5d9eea);
__builtin_memmove((R+16),(R+20),4);
}
B5d9eec:{NFSU2_TR(0x5d9eec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d9eed:{NFSU2_TR(0x5d9eed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d9ef0:L5d9ef0:{c.instructions+=1;NFSU2_TR(0x5d9ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d9ef3:L5d9ef3:{c.instructions+=5;NFSU2_TR(0x5d9ef3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d9ef6:{NFSU2_TR(0x5d9ef6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9ef7:{NFSU2_TR(0x5d9ef7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9ef8:{NFSU2_TR(0x5d9ef8);
__builtin_memmove((R+4),(R+28),4);
}
B5d9efa:{NFSU2_TR(0x5d9efa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9effull));
TAIL_STATIC(0x5d5a00u,5d5);
}
B5d9eff:L5d9eff:{c.instructions+=5;NFSU2_TR(0x5d9eff);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d9f03:{NFSU2_TR(0x5d9f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d9f06:{NFSU2_TR(0x5d9f06);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5d9f09:{NFSU2_TR(0x5d9f09);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5d9f0c:{NFSU2_TR(0x5d9f0c);
if(r1(R+518)){TAIL_STATIC(0x5da0b3u,5da);}
}
B5d9f12:L5d9f12:{c.instructions+=10;NFSU2_TR(0x5d9f12);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5d9f16:{NFSU2_TR(0x5d9f16);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d9f1a:{NFSU2_TR(0x5d9f1a);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5d9f1c:{NFSU2_TR(0x5d9f1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9f20:{NFSU2_TR(0x5d9f20);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d9f24:{NFSU2_TR(0x5d9f24);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d9f26:{NFSU2_TR(0x5d9f26);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5d9f28:{NFSU2_TR(0x5d9f28);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d9f2a:{NFSU2_TR(0x5d9f2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d9f2d:{NFSU2_TR(0x5d9f2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d9fc9;}}
}
B5d9f33:L5d9f33:{c.instructions+=6;NFSU2_TR(0x5d9f33);
u8 U[4];
w4(U+0,u32(0x43000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9f38:{NFSU2_TR(0x5d9f38);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d9f3a:{NFSU2_TR(0x5d9f3a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9f3c:{NFSU2_TR(0x5d9f3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9f3d:{NFSU2_TR(0x5d9f3d);
__builtin_memmove((R+4),(R+28),4);
}
B5d9f3f:{NFSU2_TR(0x5d9f3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9f44ull));
TAIL_STATIC(0x5d57a0u,5d5);
}
B5d9f44:L5d9f44:{c.instructions+=3;NFSU2_TR(0x5d9f44);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d9f46:{NFSU2_TR(0x5d9f46);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9f4a:{NFSU2_TR(0x5d9f4a);
if(r1(R+518)){TAIL_STATIC(0x5da0b3u,5da);}
}
B5d9f50:L5d9f50:{c.instructions+=2;NFSU2_TR(0x5d9f50);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5d9f54:{NFSU2_TR(0x5d9f54);
if(r1(R+518)){TAIL_STATIC(0x5da0b3u,5da);}
}
B5d9f5a:L5d9f5a:{c.instructions+=5;NFSU2_TR(0x5d9f5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d9f5e:{NFSU2_TR(0x5d9f5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9f5f:{NFSU2_TR(0x5d9f5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9f60:{NFSU2_TR(0x5d9f60);
__builtin_memmove((R+4),(R+28),4);
}
B5d9f62:{NFSU2_TR(0x5d9f62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9f67ull));
TAIL_STATIC(0x5d5a00u,5d5);
}
B5d9f67:L5d9f67:{c.instructions+=10;NFSU2_TR(0x5d9f67);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d9f6b:{NFSU2_TR(0x5d9f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9f6e:{NFSU2_TR(0x5d9f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d9f71:{NFSU2_TR(0x5d9f71);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d9f77:{NFSU2_TR(0x5d9f77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9f78:{NFSU2_TR(0x5d9f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d9f7b:{NFSU2_TR(0x5d9f7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d9f7c:{NFSU2_TR(0x5d9f7c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d9f80:{NFSU2_TR(0x5d9f80);
__builtin_memmove((R+4),(R+28),4);
}
B5d9f82:{NFSU2_TR(0x5d9f82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d9f87ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B5d9f87:L5d9f87:{c.instructions+=7;NFSU2_TR(0x5d9f87);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5d9f89:{NFSU2_TR(0x5d9f89);
{u32 ea_=u32(u32(7890136u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d9f8f:{NFSU2_TR(0x5d9f8f);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d9f95:{NFSU2_TR(0x5d9f95);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d9f9b:{NFSU2_TR(0x5d9f9b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d9f9d:{NFSU2_TR(0x5d9f9d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d9fa0:{NFSU2_TR(0x5d9fa0);
if(r1(R+514)){{goto L5d9faa;}}
}
B5d9fa2:L5d9fa2:{c.instructions+=2;NFSU2_TR(0x5d9fa2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d9fa4:{NFSU2_TR(0x5d9fa4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d9faa:L5d9faa:{c.instructions+=7;NFSU2_TR(0x5d9faa);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d9fae:{NFSU2_TR(0x5d9fae);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5d9fb0:{NFSU2_TR(0x5d9fb0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d9fb4:{NFSU2_TR(0x5d9fb4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d9fb6:{NFSU2_TR(0x5d9fb6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d9fb8:{NFSU2_TR(0x5d9fb8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d9fbb:{NFSU2_TR(0x5d9fbb);
if(r1(R+514)){TAIL_STATIC(0x5da0b3u,5da);}
}
B5d9fc1:L5d9fc1:{c.instructions+=2;NFSU2_TR(0x5d9fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9fc4:{NFSU2_TR(0x5d9fc4);
TAIL_STATIC(0x5da0b3u,5da);
}
B5d9fc9:L5d9fc9:{c.instructions+=8;NFSU2_TR(0x5d9fc9);
w4(R+4,u32(r1(R+4)));
}
B5d9fcc:{NFSU2_TR(0x5d9fcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9fd0:{NFSU2_TR(0x5d9fd0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d9fd4:{NFSU2_TR(0x5d9fd4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d9fd6:{NFSU2_TR(0x5d9fd6);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5d9fd8:{NFSU2_TR(0x5d9fd8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d9fda:{NFSU2_TR(0x5d9fda);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d9fdd:{NFSU2_TR(0x5d9fdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5da0b3u,5da);}
}
B5d9fe3:L5d9fe3:{c.instructions+=3;NFSU2_TR(0x5d9fe3);
w4(R+0,u32(0xcull));
}
B5d9fe8:{NFSU2_TR(0x5d9fe8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d9fec:{NFSU2_TR(0x5d9fec);
{goto L5d9ff1;}
}
B5d9fee:L5d9fee:{c.instructions+=1;NFSU2_TR(0x5d9fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d9ff1:L5d9ff1:{c.instructions+=3;NFSU2_TR(0x5d9ff1);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+0),(U+8),2);
}
B5d9ff5:{NFSU2_TR(0x5d9ff5);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B5d9ff9:{NFSU2_TR(0x5d9ff9);
if(r1(R+518)){TAIL_STATIC(0x5da09fu,5da);}
}
B5d9fff:L5d9fff:{c.instructions+=1;NFSU2_TR(0x5d9fff);
w4(R+0,u32(s32(s16(r2(R+0)))));
TAIL_STATIC(0x5da002u,5da);
}
XIT:NFSU2_TR_EXIT(0x5d9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
