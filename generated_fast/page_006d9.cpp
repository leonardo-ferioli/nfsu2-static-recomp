#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_6d8(u8* __restrict R,Cpu& c);
u32 body_6da(u8* __restrict R,Cpu& c);
u32 body_6db(u8* __restrict R,Cpu& c);
u32 body_6dc(u8* __restrict R,Cpu& c);
u32 body_6dd(u8* __restrict R,Cpu& c);
u32 body_6f4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6d9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6d9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6d9(u8* __restrict R,Cpu& c);
u32 page_6d9(Cpu& c){return body_6d9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6d9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6d9003:goto L6d9003;
case 0x6d9004:c.instructions+=1;goto B6d9004;
case 0x6d9010:goto L6d9010;
case 0x6d9015:goto L6d9015;
case 0x6d901b:c.instructions+=2;goto B6d901b;
case 0x6d9020:c.instructions+=1;goto B6d9020;
case 0x6d9022:goto L6d9022;
case 0x6d9027:c.instructions+=2;goto B6d9027;
case 0x6d902e:c.instructions+=1;goto B6d902e;
case 0x6d9030:goto L6d9030;
case 0x6d9037:goto L6d9037;
case 0x6d9040:goto L6d9040;
case 0x6d9043:c.instructions+=8;goto B6d9043;
case 0x6d9044:c.instructions+=7;goto B6d9044;
case 0x6d9046:c.instructions+=6;goto B6d9046;
case 0x6d9048:c.instructions+=5;goto B6d9048;
case 0x6d904a:c.instructions+=4;goto B6d904a;
case 0x6d904c:c.instructions+=3;goto B6d904c;
case 0x6d9050:c.instructions+=2;goto B6d9050;
case 0x6d9051:c.instructions+=1;goto B6d9051;
case 0x6d9057:goto L6d9057;
case 0x6d905b:c.instructions+=4;goto B6d905b;
case 0x6d905d:c.instructions+=3;goto B6d905d;
case 0x6d905e:c.instructions+=2;goto B6d905e;
case 0x6d9060:c.instructions+=1;goto B6d9060;
case 0x6d9066:goto L6d9066;
case 0x6d906a:c.instructions+=14;goto B6d906a;
case 0x6d906e:c.instructions+=13;goto B6d906e;
case 0x6d906f:c.instructions+=12;goto B6d906f;
case 0x6d9073:c.instructions+=11;goto B6d9073;
case 0x6d9077:c.instructions+=10;goto B6d9077;
case 0x6d9078:c.instructions+=9;goto B6d9078;
case 0x6d907a:c.instructions+=8;goto B6d907a;
case 0x6d907b:c.instructions+=7;goto B6d907b;
case 0x6d9080:c.instructions+=6;goto B6d9080;
case 0x6d9085:c.instructions+=5;goto B6d9085;
case 0x6d9087:c.instructions+=4;goto B6d9087;
case 0x6d908c:c.instructions+=3;goto B6d908c;
case 0x6d9091:c.instructions+=2;goto B6d9091;
case 0x6d9093:c.instructions+=1;goto B6d9093;
case 0x6d9099:goto L6d9099;
case 0x6d909b:c.instructions+=2;goto B6d909b;
case 0x6d909d:c.instructions+=1;goto B6d909d;
case 0x6d909f:goto L6d909f;
case 0x6d90a0:c.instructions+=2;goto B6d90a0;
case 0x6d90a3:c.instructions+=1;goto B6d90a3;
case 0x6d90a4:goto L6d90a4;
case 0x6d90a5:c.instructions+=1;goto B6d90a5;
case 0x6d90ab:goto L6d90ab;
case 0x6d90ad:c.instructions+=3;goto B6d90ad;
case 0x6d90ae:c.instructions+=2;goto B6d90ae;
case 0x6d90b1:c.instructions+=1;goto B6d90b1;
case 0x6d90c0:goto L6d90c0;
case 0x6d90c5:c.instructions+=2;goto B6d90c5;
case 0x6d90c7:c.instructions+=1;goto B6d90c7;
case 0x6d90c9:goto L6d90c9;
case 0x6d90cb:c.instructions+=1;goto B6d90cb;
case 0x6d90ce:goto L6d90ce;
case 0x6d90d1:c.instructions+=10;goto B6d90d1;
case 0x6d90d2:c.instructions+=9;goto B6d90d2;
case 0x6d90d6:c.instructions+=8;goto B6d90d6;
case 0x6d90d7:c.instructions+=7;goto B6d90d7;
case 0x6d90db:c.instructions+=6;goto B6d90db;
case 0x6d90dc:c.instructions+=5;goto B6d90dc;
case 0x6d90df:c.instructions+=4;goto B6d90df;
case 0x6d90e3:c.instructions+=3;goto B6d90e3;
case 0x6d90e4:c.instructions+=2;goto B6d90e4;
case 0x6d90e8:c.instructions+=1;goto B6d90e8;
case 0x6d90ea:goto L6d90ea;
case 0x6d90ee:c.instructions+=2;goto B6d90ee;
case 0x6d90f1:c.instructions+=1;goto B6d90f1;
case 0x6d90f3:goto L6d90f3;
case 0x6d90f5:c.instructions+=8;goto B6d90f5;
case 0x6d90f7:c.instructions+=7;goto B6d90f7;
case 0x6d90f9:c.instructions+=6;goto B6d90f9;
case 0x6d90fb:c.instructions+=5;goto B6d90fb;
case 0x6d90fc:c.instructions+=4;goto B6d90fc;
case 0x6d90fd:c.instructions+=3;goto B6d90fd;
case 0x6d90fe:c.instructions+=2;goto B6d90fe;
case 0x6d90ff:c.instructions+=1;goto B6d90ff;
case 0x6d9102:goto L6d9102;
case 0x6d9104:c.instructions+=1;goto B6d9104;
case 0x6d9106:goto L6d9106;
case 0x6d910b:c.instructions+=8;goto B6d910b;
case 0x6d910d:c.instructions+=7;goto B6d910d;
case 0x6d910f:c.instructions+=6;goto B6d910f;
case 0x6d9110:c.instructions+=5;goto B6d9110;
case 0x6d9111:c.instructions+=4;goto B6d9111;
case 0x6d9112:c.instructions+=3;goto B6d9112;
case 0x6d9113:c.instructions+=2;goto B6d9113;
case 0x6d9114:c.instructions+=1;goto B6d9114;
case 0x6d9117:goto L6d9117;
case 0x6d9119:c.instructions+=1;goto B6d9119;
case 0x6d911b:goto L6d911b;
case 0x6d911f:c.instructions+=10;goto B6d911f;
case 0x6d9123:c.instructions+=9;goto B6d9123;
case 0x6d9124:c.instructions+=8;goto B6d9124;
case 0x6d912a:c.instructions+=7;goto B6d912a;
case 0x6d912b:c.instructions+=6;goto B6d912b;
case 0x6d9132:c.instructions+=5;goto B6d9132;
case 0x6d9133:c.instructions+=4;goto B6d9133;
case 0x6d9139:c.instructions+=3;goto B6d9139;
case 0x6d913b:c.instructions+=2;goto B6d913b;
case 0x6d913c:c.instructions+=1;goto B6d913c;
case 0x6d913f:goto L6d913f;
case 0x6d9144:goto L6d9144;
case 0x6d9148:c.instructions+=1;goto B6d9148;
case 0x6d914a:goto L6d914a;
case 0x6d914e:c.instructions+=2;goto B6d914e;
case 0x6d9151:c.instructions+=1;goto B6d9151;
case 0x6d9153:goto L6d9153;
case 0x6d9155:c.instructions+=8;goto B6d9155;
case 0x6d9157:c.instructions+=7;goto B6d9157;
case 0x6d9159:c.instructions+=6;goto B6d9159;
case 0x6d915b:c.instructions+=5;goto B6d915b;
case 0x6d915c:c.instructions+=4;goto B6d915c;
case 0x6d915d:c.instructions+=3;goto B6d915d;
case 0x6d915e:c.instructions+=2;goto B6d915e;
case 0x6d915f:c.instructions+=1;goto B6d915f;
case 0x6d9162:goto L6d9162;
case 0x6d9164:c.instructions+=1;goto B6d9164;
case 0x6d9166:goto L6d9166;
case 0x6d916b:c.instructions+=8;goto B6d916b;
case 0x6d916d:c.instructions+=7;goto B6d916d;
case 0x6d916f:c.instructions+=6;goto B6d916f;
case 0x6d9170:c.instructions+=5;goto B6d9170;
case 0x6d9171:c.instructions+=4;goto B6d9171;
case 0x6d9172:c.instructions+=3;goto B6d9172;
case 0x6d9173:c.instructions+=2;goto B6d9173;
case 0x6d9174:c.instructions+=1;goto B6d9174;
case 0x6d9177:goto L6d9177;
case 0x6d9179:c.instructions+=1;goto B6d9179;
case 0x6d917b:goto L6d917b;
case 0x6d917f:c.instructions+=10;goto B6d917f;
case 0x6d9183:c.instructions+=9;goto B6d9183;
case 0x6d9184:c.instructions+=8;goto B6d9184;
case 0x6d918a:c.instructions+=7;goto B6d918a;
case 0x6d918b:c.instructions+=6;goto B6d918b;
case 0x6d9192:c.instructions+=5;goto B6d9192;
case 0x6d9193:c.instructions+=4;goto B6d9193;
case 0x6d9199:c.instructions+=3;goto B6d9199;
case 0x6d919b:c.instructions+=2;goto B6d919b;
case 0x6d919c:c.instructions+=1;goto B6d919c;
case 0x6d919f:goto L6d919f;
case 0x6d91a4:goto L6d91a4;
case 0x6d91a8:c.instructions+=1;goto B6d91a8;
case 0x6d91ae:goto L6d91ae;
case 0x6d91b2:c.instructions+=2;goto B6d91b2;
case 0x6d91b5:c.instructions+=1;goto B6d91b5;
case 0x6d91b7:goto L6d91b7;
case 0x6d91b9:c.instructions+=8;goto B6d91b9;
case 0x6d91bb:c.instructions+=7;goto B6d91bb;
case 0x6d91bd:c.instructions+=6;goto B6d91bd;
case 0x6d91bf:c.instructions+=5;goto B6d91bf;
case 0x6d91c0:c.instructions+=4;goto B6d91c0;
case 0x6d91c1:c.instructions+=3;goto B6d91c1;
case 0x6d91c2:c.instructions+=2;goto B6d91c2;
case 0x6d91c3:c.instructions+=1;goto B6d91c3;
case 0x6d91c6:goto L6d91c6;
case 0x6d91c8:c.instructions+=1;goto B6d91c8;
case 0x6d91ca:goto L6d91ca;
case 0x6d91cf:c.instructions+=8;goto B6d91cf;
case 0x6d91d1:c.instructions+=7;goto B6d91d1;
case 0x6d91d3:c.instructions+=6;goto B6d91d3;
case 0x6d91d4:c.instructions+=5;goto B6d91d4;
case 0x6d91d5:c.instructions+=4;goto B6d91d5;
case 0x6d91d6:c.instructions+=3;goto B6d91d6;
case 0x6d91d7:c.instructions+=2;goto B6d91d7;
case 0x6d91d8:c.instructions+=1;goto B6d91d8;
case 0x6d91db:goto L6d91db;
case 0x6d91dd:c.instructions+=1;goto B6d91dd;
case 0x6d91df:goto L6d91df;
case 0x6d91e3:c.instructions+=10;goto B6d91e3;
case 0x6d91e7:c.instructions+=9;goto B6d91e7;
case 0x6d91e8:c.instructions+=8;goto B6d91e8;
case 0x6d91ee:c.instructions+=7;goto B6d91ee;
case 0x6d91ef:c.instructions+=6;goto B6d91ef;
case 0x6d91f6:c.instructions+=5;goto B6d91f6;
case 0x6d91f7:c.instructions+=4;goto B6d91f7;
case 0x6d91fd:c.instructions+=3;goto B6d91fd;
case 0x6d91ff:c.instructions+=2;goto B6d91ff;
case 0x6d9200:c.instructions+=1;goto B6d9200;
case 0x6d9203:goto L6d9203;
case 0x6d9208:goto L6d9208;
case 0x6d920c:c.instructions+=1;goto B6d920c;
case 0x6d9212:goto L6d9212;
case 0x6d9216:c.instructions+=2;goto B6d9216;
case 0x6d9219:c.instructions+=1;goto B6d9219;
case 0x6d921b:goto L6d921b;
case 0x6d921d:c.instructions+=8;goto B6d921d;
case 0x6d921f:c.instructions+=7;goto B6d921f;
case 0x6d9221:c.instructions+=6;goto B6d9221;
case 0x6d9223:c.instructions+=5;goto B6d9223;
case 0x6d9224:c.instructions+=4;goto B6d9224;
case 0x6d9225:c.instructions+=3;goto B6d9225;
case 0x6d9226:c.instructions+=2;goto B6d9226;
case 0x6d9227:c.instructions+=1;goto B6d9227;
case 0x6d922a:goto L6d922a;
case 0x6d922c:c.instructions+=1;goto B6d922c;
case 0x6d922e:goto L6d922e;
case 0x6d9233:c.instructions+=8;goto B6d9233;
case 0x6d9235:c.instructions+=7;goto B6d9235;
case 0x6d9237:c.instructions+=6;goto B6d9237;
case 0x6d9238:c.instructions+=5;goto B6d9238;
case 0x6d9239:c.instructions+=4;goto B6d9239;
case 0x6d923a:c.instructions+=3;goto B6d923a;
case 0x6d923b:c.instructions+=2;goto B6d923b;
case 0x6d923c:c.instructions+=1;goto B6d923c;
case 0x6d923f:goto L6d923f;
case 0x6d9241:c.instructions+=1;goto B6d9241;
case 0x6d9243:goto L6d9243;
case 0x6d9247:c.instructions+=10;goto B6d9247;
case 0x6d924b:c.instructions+=9;goto B6d924b;
case 0x6d924c:c.instructions+=8;goto B6d924c;
case 0x6d9252:c.instructions+=7;goto B6d9252;
case 0x6d9253:c.instructions+=6;goto B6d9253;
case 0x6d925a:c.instructions+=5;goto B6d925a;
case 0x6d925b:c.instructions+=4;goto B6d925b;
case 0x6d9261:c.instructions+=3;goto B6d9261;
case 0x6d9263:c.instructions+=2;goto B6d9263;
case 0x6d9264:c.instructions+=1;goto B6d9264;
case 0x6d9267:goto L6d9267;
case 0x6d926c:goto L6d926c;
case 0x6d9270:c.instructions+=1;goto B6d9270;
case 0x6d9276:goto L6d9276;
case 0x6d927a:c.instructions+=2;goto B6d927a;
case 0x6d927d:c.instructions+=1;goto B6d927d;
case 0x6d9283:goto L6d9283;
case 0x6d9285:c.instructions+=8;goto B6d9285;
case 0x6d9287:c.instructions+=7;goto B6d9287;
case 0x6d9289:c.instructions+=6;goto B6d9289;
case 0x6d928b:c.instructions+=5;goto B6d928b;
case 0x6d928c:c.instructions+=4;goto B6d928c;
case 0x6d928d:c.instructions+=3;goto B6d928d;
case 0x6d928e:c.instructions+=2;goto B6d928e;
case 0x6d928f:c.instructions+=1;goto B6d928f;
case 0x6d9292:goto L6d9292;
case 0x6d9294:c.instructions+=1;goto B6d9294;
case 0x6d9296:goto L6d9296;
case 0x6d929b:c.instructions+=8;goto B6d929b;
case 0x6d929d:c.instructions+=7;goto B6d929d;
case 0x6d929f:c.instructions+=6;goto B6d929f;
case 0x6d92a0:c.instructions+=5;goto B6d92a0;
case 0x6d92a1:c.instructions+=4;goto B6d92a1;
case 0x6d92a2:c.instructions+=3;goto B6d92a2;
case 0x6d92a3:c.instructions+=2;goto B6d92a3;
case 0x6d92a4:c.instructions+=1;goto B6d92a4;
case 0x6d92a7:goto L6d92a7;
case 0x6d92a9:c.instructions+=1;goto B6d92a9;
case 0x6d92af:goto L6d92af;
case 0x6d92b4:c.instructions+=9;goto B6d92b4;
case 0x6d92b6:c.instructions+=8;goto B6d92b6;
case 0x6d92b8:c.instructions+=7;goto B6d92b8;
case 0x6d92ba:c.instructions+=6;goto B6d92ba;
case 0x6d92bc:c.instructions+=5;goto B6d92bc;
case 0x6d92bd:c.instructions+=4;goto B6d92bd;
case 0x6d92be:c.instructions+=3;goto B6d92be;
case 0x6d92bf:c.instructions+=2;goto B6d92bf;
case 0x6d92c0:c.instructions+=1;goto B6d92c0;
case 0x6d92c3:goto L6d92c3;
case 0x6d92c5:c.instructions+=1;goto B6d92c5;
case 0x6d92c7:goto L6d92c7;
case 0x6d92cc:c.instructions+=8;goto B6d92cc;
case 0x6d92ce:c.instructions+=7;goto B6d92ce;
case 0x6d92d0:c.instructions+=6;goto B6d92d0;
case 0x6d92d1:c.instructions+=5;goto B6d92d1;
case 0x6d92d2:c.instructions+=4;goto B6d92d2;
case 0x6d92d3:c.instructions+=3;goto B6d92d3;
case 0x6d92d4:c.instructions+=2;goto B6d92d4;
case 0x6d92d5:c.instructions+=1;goto B6d92d5;
case 0x6d92d8:goto L6d92d8;
case 0x6d92da:c.instructions+=1;goto B6d92da;
case 0x6d92dc:goto L6d92dc;
case 0x6d92e0:c.instructions+=10;goto B6d92e0;
case 0x6d92e4:c.instructions+=9;goto B6d92e4;
case 0x6d92e5:c.instructions+=8;goto B6d92e5;
case 0x6d92eb:c.instructions+=7;goto B6d92eb;
case 0x6d92ec:c.instructions+=6;goto B6d92ec;
case 0x6d92f3:c.instructions+=5;goto B6d92f3;
case 0x6d92f4:c.instructions+=4;goto B6d92f4;
case 0x6d92fa:c.instructions+=3;goto B6d92fa;
case 0x6d92fc:c.instructions+=2;goto B6d92fc;
case 0x6d92fd:c.instructions+=1;goto B6d92fd;
case 0x6d9300:goto L6d9300;
case 0x6d9305:goto L6d9305;
case 0x6d9309:c.instructions+=1;goto B6d9309;
case 0x6d930f:goto L6d930f;
case 0x6d9311:c.instructions+=8;goto B6d9311;
case 0x6d9313:c.instructions+=7;goto B6d9313;
case 0x6d9315:c.instructions+=6;goto B6d9315;
case 0x6d9317:c.instructions+=5;goto B6d9317;
case 0x6d9318:c.instructions+=4;goto B6d9318;
case 0x6d9319:c.instructions+=3;goto B6d9319;
case 0x6d931a:c.instructions+=2;goto B6d931a;
case 0x6d931b:c.instructions+=1;goto B6d931b;
case 0x6d931e:goto L6d931e;
case 0x6d9320:c.instructions+=3;goto B6d9320;
case 0x6d9325:c.instructions+=2;goto B6d9325;
case 0x6d9327:c.instructions+=1;goto B6d9327;
case 0x6d9329:goto L6d9329;
case 0x6d932b:c.instructions+=6;goto B6d932b;
case 0x6d932c:c.instructions+=5;goto B6d932c;
case 0x6d932d:c.instructions+=4;goto B6d932d;
case 0x6d932e:c.instructions+=3;goto B6d932e;
case 0x6d932f:c.instructions+=2;goto B6d932f;
case 0x6d9330:c.instructions+=1;goto B6d9330;
case 0x6d9333:goto L6d9333;
case 0x6d9335:c.instructions+=1;goto B6d9335;
case 0x6d933b:goto L6d933b;
case 0x6d933f:c.instructions+=10;goto B6d933f;
case 0x6d9343:c.instructions+=9;goto B6d9343;
case 0x6d9344:c.instructions+=8;goto B6d9344;
case 0x6d934a:c.instructions+=7;goto B6d934a;
case 0x6d934b:c.instructions+=6;goto B6d934b;
case 0x6d9352:c.instructions+=5;goto B6d9352;
case 0x6d9353:c.instructions+=4;goto B6d9353;
case 0x6d9359:c.instructions+=3;goto B6d9359;
case 0x6d935b:c.instructions+=2;goto B6d935b;
case 0x6d935c:c.instructions+=1;goto B6d935c;
case 0x6d935f:goto L6d935f;
case 0x6d9361:c.instructions+=7;goto B6d9361;
case 0x6d9363:c.instructions+=6;goto B6d9363;
case 0x6d9365:c.instructions+=5;goto B6d9365;
case 0x6d9366:c.instructions+=4;goto B6d9366;
case 0x6d9367:c.instructions+=3;goto B6d9367;
case 0x6d9368:c.instructions+=2;goto B6d9368;
case 0x6d9369:c.instructions+=1;goto B6d9369;
case 0x6d936c:goto L6d936c;
case 0x6d936e:c.instructions+=3;goto B6d936e;
case 0x6d9373:c.instructions+=2;goto B6d9373;
case 0x6d9375:c.instructions+=1;goto B6d9375;
case 0x6d9377:goto L6d9377;
case 0x6d9379:c.instructions+=6;goto B6d9379;
case 0x6d937a:c.instructions+=5;goto B6d937a;
case 0x6d937b:c.instructions+=4;goto B6d937b;
case 0x6d937c:c.instructions+=3;goto B6d937c;
case 0x6d937d:c.instructions+=2;goto B6d937d;
case 0x6d937e:c.instructions+=1;goto B6d937e;
case 0x6d9381:goto L6d9381;
case 0x6d9383:c.instructions+=1;goto B6d9383;
case 0x6d9389:goto L6d9389;
case 0x6d938d:c.instructions+=10;goto B6d938d;
case 0x6d9391:c.instructions+=9;goto B6d9391;
case 0x6d9392:c.instructions+=8;goto B6d9392;
case 0x6d9398:c.instructions+=7;goto B6d9398;
case 0x6d9399:c.instructions+=6;goto B6d9399;
case 0x6d93a0:c.instructions+=5;goto B6d93a0;
case 0x6d93a1:c.instructions+=4;goto B6d93a1;
case 0x6d93a7:c.instructions+=3;goto B6d93a7;
case 0x6d93a9:c.instructions+=2;goto B6d93a9;
case 0x6d93aa:c.instructions+=1;goto B6d93aa;
case 0x6d93ad:goto L6d93ad;
case 0x6d93af:c.instructions+=7;goto B6d93af;
case 0x6d93b1:c.instructions+=6;goto B6d93b1;
case 0x6d93b3:c.instructions+=5;goto B6d93b3;
case 0x6d93b4:c.instructions+=4;goto B6d93b4;
case 0x6d93b5:c.instructions+=3;goto B6d93b5;
case 0x6d93b6:c.instructions+=2;goto B6d93b6;
case 0x6d93b7:c.instructions+=1;goto B6d93b7;
case 0x6d93ba:goto L6d93ba;
case 0x6d93bc:c.instructions+=3;goto B6d93bc;
case 0x6d93c1:c.instructions+=2;goto B6d93c1;
case 0x6d93c3:c.instructions+=1;goto B6d93c3;
case 0x6d93c5:goto L6d93c5;
case 0x6d93c7:c.instructions+=6;goto B6d93c7;
case 0x6d93c8:c.instructions+=5;goto B6d93c8;
case 0x6d93c9:c.instructions+=4;goto B6d93c9;
case 0x6d93ca:c.instructions+=3;goto B6d93ca;
case 0x6d93cb:c.instructions+=2;goto B6d93cb;
case 0x6d93cc:c.instructions+=1;goto B6d93cc;
case 0x6d93cf:goto L6d93cf;
case 0x6d93d1:c.instructions+=1;goto B6d93d1;
case 0x6d93d3:goto L6d93d3;
case 0x6d93d7:c.instructions+=10;goto B6d93d7;
case 0x6d93db:c.instructions+=9;goto B6d93db;
case 0x6d93dc:c.instructions+=8;goto B6d93dc;
case 0x6d93e2:c.instructions+=7;goto B6d93e2;
case 0x6d93e3:c.instructions+=6;goto B6d93e3;
case 0x6d93ea:c.instructions+=5;goto B6d93ea;
case 0x6d93eb:c.instructions+=4;goto B6d93eb;
case 0x6d93f1:c.instructions+=3;goto B6d93f1;
case 0x6d93f3:c.instructions+=2;goto B6d93f3;
case 0x6d93f4:c.instructions+=1;goto B6d93f4;
case 0x6d93f7:goto L6d93f7;
case 0x6d93f9:c.instructions+=7;goto B6d93f9;
case 0x6d93fb:c.instructions+=6;goto B6d93fb;
case 0x6d93fd:c.instructions+=5;goto B6d93fd;
case 0x6d93fe:c.instructions+=4;goto B6d93fe;
case 0x6d93ff:c.instructions+=3;goto B6d93ff;
case 0x6d9400:c.instructions+=2;goto B6d9400;
case 0x6d9401:c.instructions+=1;goto B6d9401;
case 0x6d9404:goto L6d9404;
case 0x6d9406:c.instructions+=1;goto B6d9406;
case 0x6d9408:goto L6d9408;
case 0x6d940d:c.instructions+=8;goto B6d940d;
case 0x6d940f:c.instructions+=7;goto B6d940f;
case 0x6d9411:c.instructions+=6;goto B6d9411;
case 0x6d9412:c.instructions+=5;goto B6d9412;
case 0x6d9413:c.instructions+=4;goto B6d9413;
case 0x6d9414:c.instructions+=3;goto B6d9414;
case 0x6d9415:c.instructions+=2;goto B6d9415;
case 0x6d9416:c.instructions+=1;goto B6d9416;
case 0x6d9419:goto L6d9419;
case 0x6d941b:c.instructions+=1;goto B6d941b;
case 0x6d941d:goto L6d941d;
case 0x6d9421:c.instructions+=10;goto B6d9421;
case 0x6d9425:c.instructions+=9;goto B6d9425;
case 0x6d9426:c.instructions+=8;goto B6d9426;
case 0x6d942c:c.instructions+=7;goto B6d942c;
case 0x6d942d:c.instructions+=6;goto B6d942d;
case 0x6d9434:c.instructions+=5;goto B6d9434;
case 0x6d9435:c.instructions+=4;goto B6d9435;
case 0x6d943b:c.instructions+=3;goto B6d943b;
case 0x6d943d:c.instructions+=2;goto B6d943d;
case 0x6d943e:c.instructions+=1;goto B6d943e;
case 0x6d9441:goto L6d9441;
case 0x6d9442:c.instructions+=5;goto B6d9442;
case 0x6d9443:c.instructions+=4;goto B6d9443;
case 0x6d9444:c.instructions+=3;goto B6d9444;
case 0x6d9446:c.instructions+=2;goto B6d9446;
case 0x6d9447:c.instructions+=1;goto B6d9447;
case 0x6d9450:goto L6d9450;
case 0x6d9455:c.instructions+=1;goto B6d9455;
case 0x6d9460:goto L6d9460;
case 0x6d9465:c.instructions+=1;goto B6d9465;
case 0x6d9470:goto L6d9470;
case 0x6d9474:c.instructions+=3;goto B6d9474;
case 0x6d9477:c.instructions+=2;goto B6d9477;
case 0x6d947a:c.instructions+=1;goto B6d947a;
case 0x6d947c:goto L6d947c;
case 0x6d9483:goto L6d9483;
case 0x6d9488:c.instructions+=1;goto B6d9488;
case 0x6d9489:goto L6d9489;
case 0x6d948e:c.instructions+=1;goto B6d948e;
case 0x6d948f:goto L6d948f;
case 0x6d9494:c.instructions+=1;goto B6d9494;
case 0x6d9495:goto L6d9495;
case 0x6d949a:c.instructions+=1;goto B6d949a;
case 0x6d949b:goto L6d949b;
case 0x6d949d:c.instructions+=1;goto B6d949d;
case 0x6d94d0:goto L6d94d0;
case 0x6d94d3:c.instructions+=4;goto B6d94d3;
case 0x6d94d9:c.instructions+=3;goto B6d94d9;
case 0x6d94dd:c.instructions+=2;goto B6d94dd;
case 0x6d94df:c.instructions+=1;goto B6d94df;
case 0x6d94f0:goto L6d94f0;
case 0x6d94f3:c.instructions+=4;goto B6d94f3;
case 0x6d94f9:c.instructions+=3;goto B6d94f9;
case 0x6d94fd:c.instructions+=2;goto B6d94fd;
case 0x6d94ff:c.instructions+=1;goto B6d94ff;
case 0x6d9510:goto L6d9510;
case 0x6d9513:c.instructions+=4;goto B6d9513;
case 0x6d9519:c.instructions+=3;goto B6d9519;
case 0x6d951d:c.instructions+=2;goto B6d951d;
case 0x6d951f:c.instructions+=1;goto B6d951f;
case 0x6d9530:goto L6d9530;
case 0x6d9533:c.instructions+=5;goto B6d9533;
case 0x6d9539:c.instructions+=4;goto B6d9539;
case 0x6d953d:c.instructions+=3;goto B6d953d;
case 0x6d953f:c.instructions+=2;goto B6d953f;
case 0x6d9541:c.instructions+=1;goto B6d9541;
case 0x6d9550:goto L6d9550;
case 0x6d9553:c.instructions+=5;goto B6d9553;
case 0x6d9559:c.instructions+=4;goto B6d9559;
case 0x6d955d:c.instructions+=3;goto B6d955d;
case 0x6d955f:c.instructions+=2;goto B6d955f;
case 0x6d9561:c.instructions+=1;goto B6d9561;
case 0x6d9570:goto L6d9570;
case 0x6d9573:c.instructions+=5;goto B6d9573;
case 0x6d9579:c.instructions+=4;goto B6d9579;
case 0x6d957d:c.instructions+=3;goto B6d957d;
case 0x6d957f:c.instructions+=2;goto B6d957f;
case 0x6d9581:c.instructions+=1;goto B6d9581;
case 0x6d9590:goto L6d9590;
case 0x6d9591:c.instructions+=6;goto B6d9591;
case 0x6d9593:c.instructions+=5;goto B6d9593;
case 0x6d9596:c.instructions+=4;goto B6d9596;
case 0x6d959c:c.instructions+=3;goto B6d959c;
case 0x6d959f:c.instructions+=2;goto B6d959f;
case 0x6d95a1:c.instructions+=1;goto B6d95a1;
case 0x6d95a3:goto L6d95a3;
case 0x6d95a6:c.instructions+=4;goto B6d95a6;
case 0x6d95a9:c.instructions+=3;goto B6d95a9;
case 0x6d95aa:c.instructions+=2;goto B6d95aa;
case 0x6d95ac:c.instructions+=1;goto B6d95ac;
case 0x6d95b1:goto L6d95b1;
case 0x6d95b4:c.instructions+=3;goto B6d95b4;
case 0x6d95b7:c.instructions+=2;goto B6d95b7;
case 0x6d95b9:c.instructions+=1;goto B6d95b9;
case 0x6d95bb:goto L6d95bb;
case 0x6d95c0:c.instructions+=1;goto B6d95c0;
case 0x6d95c2:goto L6d95c2;
case 0x6d95c3:c.instructions+=1;goto B6d95c3;
case 0x6d95c8:goto L6d95c8;
case 0x6d95cb:goto L6d95cb;
case 0x6d95cd:c.instructions+=2;goto B6d95cd;
case 0x6d95ce:c.instructions+=1;goto B6d95ce;
case 0x6d95e0:goto L6d95e0;
case 0x6d95e1:c.instructions+=8;goto B6d95e1;
case 0x6d95e2:c.instructions+=7;goto B6d95e2;
case 0x6d95e4:c.instructions+=6;goto B6d95e4;
case 0x6d95e5:c.instructions+=5;goto B6d95e5;
case 0x6d95eb:c.instructions+=4;goto B6d95eb;
case 0x6d95f1:c.instructions+=3;goto B6d95f1;
case 0x6d95f3:c.instructions+=2;goto B6d95f3;
case 0x6d95f5:c.instructions+=1;goto B6d95f5;
case 0x6d95f7:goto L6d95f7;
case 0x6d95f8:c.instructions+=1;goto B6d95f8;
case 0x6d95fd:goto L6d95fd;
case 0x6d9600:c.instructions+=3;goto B6d9600;
case 0x6d9603:c.instructions+=2;goto B6d9603;
case 0x6d9605:c.instructions+=1;goto B6d9605;
case 0x6d9607:goto L6d9607;
case 0x6d960d:c.instructions+=2;goto B6d960d;
case 0x6d960f:c.instructions+=1;goto B6d960f;
case 0x6d9611:goto L6d9611;
case 0x6d9613:c.instructions+=2;goto B6d9613;
case 0x6d9614:c.instructions+=1;goto B6d9614;
case 0x6d9617:goto L6d9617;
case 0x6d961d:c.instructions+=2;goto B6d961d;
case 0x6d961f:c.instructions+=1;goto B6d961f;
case 0x6d9621:goto L6d9621;
case 0x6d9623:c.instructions+=2;goto B6d9623;
case 0x6d9624:c.instructions+=1;goto B6d9624;
case 0x6d9627:goto L6d9627;
case 0x6d962c:goto L6d962c;
case 0x6d9631:goto L6d9631;
case 0x6d9636:c.instructions+=2;goto B6d9636;
case 0x6d9638:c.instructions+=1;goto B6d9638;
case 0x6d963a:goto L6d963a;
case 0x6d963c:c.instructions+=2;goto B6d963c;
case 0x6d963d:c.instructions+=1;goto B6d963d;
case 0x6d9640:goto L6d9640;
case 0x6d9646:c.instructions+=2;goto B6d9646;
case 0x6d964c:c.instructions+=1;goto B6d964c;
case 0x6d964e:goto L6d964e;
case 0x6d9653:c.instructions+=2;goto B6d9653;
case 0x6d9655:c.instructions+=1;goto B6d9655;
case 0x6d9657:goto L6d9657;
case 0x6d9658:c.instructions+=1;goto B6d9658;
case 0x6d965e:goto L6d965e;
case 0x6d9664:goto L6d9664;
case 0x6d966a:c.instructions+=4;goto B6d966a;
case 0x6d966f:c.instructions+=3;goto B6d966f;
case 0x6d9670:c.instructions+=2;goto B6d9670;
case 0x6d9671:c.instructions+=1;goto B6d9671;
case 0x6d9677:goto L6d9677;
case 0x6d967d:goto L6d967d;
case 0x6d9683:c.instructions+=4;goto B6d9683;
case 0x6d9689:c.instructions+=3;goto B6d9689;
case 0x6d968a:c.instructions+=2;goto B6d968a;
case 0x6d968b:c.instructions+=1;goto B6d968b;
case 0x6d9691:goto L6d9691;
case 0x6d9697:c.instructions+=8;goto B6d9697;
case 0x6d969e:c.instructions+=7;goto B6d969e;
case 0x6d96a5:c.instructions+=6;goto B6d96a5;
case 0x6d96a8:c.instructions+=5;goto B6d96a8;
case 0x6d96ae:c.instructions+=4;goto B6d96ae;
case 0x6d96b1:c.instructions+=3;goto B6d96b1;
case 0x6d96b4:c.instructions+=2;goto B6d96b4;
case 0x6d96b6:c.instructions+=1;goto B6d96b6;
case 0x6d96b8:goto L6d96b8;
case 0x6d96bb:c.instructions+=4;goto B6d96bb;
case 0x6d96be:c.instructions+=3;goto B6d96be;
case 0x6d96bf:c.instructions+=2;goto B6d96bf;
case 0x6d96c1:c.instructions+=1;goto B6d96c1;
case 0x6d96c6:goto L6d96c6;
case 0x6d96c9:c.instructions+=2;goto B6d96c9;
case 0x6d96cc:c.instructions+=1;goto B6d96cc;
case 0x6d96ce:goto L6d96ce;
case 0x6d96cf:c.instructions+=3;goto B6d96cf;
case 0x6d96d0:c.instructions+=2;goto B6d96d0;
case 0x6d96d1:c.instructions+=1;goto B6d96d1;
case 0x6d96e0:goto L6d96e0;
case 0x6d96e5:c.instructions+=11;goto B6d96e5;
case 0x6d96e6:c.instructions+=10;goto B6d96e6;
case 0x6d96e7:c.instructions+=9;goto B6d96e7;
case 0x6d96e9:c.instructions+=8;goto B6d96e9;
case 0x6d96ec:c.instructions+=7;goto B6d96ec;
case 0x6d96f2:c.instructions+=6;goto B6d96f2;
case 0x6d96f4:c.instructions+=5;goto B6d96f4;
case 0x6d96f5:c.instructions+=4;goto B6d96f5;
case 0x6d96fa:c.instructions+=3;goto B6d96fa;
case 0x6d96fb:c.instructions+=2;goto B6d96fb;
case 0x6d96fc:c.instructions+=1;goto B6d96fc;
case 0x6d96ff:goto L6d96ff;
case 0x6d9705:c.instructions+=13;goto B6d9705;
case 0x6d970f:c.instructions+=12;goto B6d970f;
case 0x6d9712:c.instructions+=11;goto B6d9712;
case 0x6d9715:c.instructions+=10;goto B6d9715;
case 0x6d971a:c.instructions+=9;goto B6d971a;
case 0x6d971f:c.instructions+=8;goto B6d971f;
case 0x6d9722:c.instructions+=7;goto B6d9722;
case 0x6d9725:c.instructions+=6;goto B6d9725;
case 0x6d972a:c.instructions+=5;goto B6d972a;
case 0x6d972d:c.instructions+=4;goto B6d972d;
case 0x6d972e:c.instructions+=3;goto B6d972e;
case 0x6d9731:c.instructions+=2;goto B6d9731;
case 0x6d9734:c.instructions+=1;goto B6d9734;
case 0x6d9739:goto L6d9739;
case 0x6d973b:c.instructions+=4;goto B6d973b;
case 0x6d973d:c.instructions+=3;goto B6d973d;
case 0x6d9740:c.instructions+=2;goto B6d9740;
case 0x6d9742:c.instructions+=1;goto B6d9742;
case 0x6d9744:goto L6d9744;
case 0x6d9747:c.instructions+=9;goto B6d9747;
case 0x6d9748:c.instructions+=8;goto B6d9748;
case 0x6d974e:c.instructions+=7;goto B6d974e;
case 0x6d974f:c.instructions+=6;goto B6d974f;
case 0x6d9750:c.instructions+=5;goto B6d9750;
case 0x6d9756:c.instructions+=4;goto B6d9756;
case 0x6d9757:c.instructions+=3;goto B6d9757;
case 0x6d9758:c.instructions+=2;goto B6d9758;
case 0x6d975a:c.instructions+=1;goto B6d975a;
case 0x6d975f:goto L6d975f;
case 0x6d9761:c.instructions+=1;goto B6d9761;
case 0x6d9763:goto L6d9763;
case 0x6d9769:c.instructions+=2;goto B6d9769;
case 0x6d976a:c.instructions+=1;goto B6d976a;
case 0x6d976f:goto L6d976f;
case 0x6d9772:c.instructions+=2;goto B6d9772;
case 0x6d9775:c.instructions+=1;goto B6d9775;
case 0x6d9778:goto L6d9778;
case 0x6d977d:c.instructions+=2;goto B6d977d;
case 0x6d977e:c.instructions+=1;goto B6d977e;
case 0x6d9783:goto L6d9783;
case 0x6d9786:c.instructions+=13;goto B6d9786;
case 0x6d9789:c.instructions+=12;goto B6d9789;
case 0x6d978c:c.instructions+=11;goto B6d978c;
case 0x6d978f:c.instructions+=10;goto B6d978f;
case 0x6d9792:c.instructions+=9;goto B6d9792;
case 0x6d9793:c.instructions+=8;goto B6d9793;
case 0x6d9796:c.instructions+=7;goto B6d9796;
case 0x6d9798:c.instructions+=6;goto B6d9798;
case 0x6d9799:c.instructions+=5;goto B6d9799;
case 0x6d979e:c.instructions+=4;goto B6d979e;
case 0x6d97a3:c.instructions+=3;goto B6d97a3;
case 0x6d97a8:c.instructions+=2;goto B6d97a8;
case 0x6d97a9:c.instructions+=1;goto B6d97a9;
case 0x6d97b0:goto L6d97b0;
case 0x6d97b6:c.instructions+=4;goto B6d97b6;
case 0x6d97b7:c.instructions+=3;goto B6d97b7;
case 0x6d97b8:c.instructions+=2;goto B6d97b8;
case 0x6d97ba:c.instructions+=1;goto B6d97ba;
case 0x6d97bf:goto L6d97bf;
case 0x6d97c2:c.instructions+=4;goto B6d97c2;
case 0x6d97c8:c.instructions+=3;goto B6d97c8;
case 0x6d97ca:c.instructions+=2;goto B6d97ca;
case 0x6d97cc:c.instructions+=1;goto B6d97cc;
case 0x6d97ce:goto L6d97ce;
case 0x6d97d0:c.instructions+=2;goto B6d97d0;
case 0x6d97d1:c.instructions+=1;goto B6d97d1;
case 0x6d97d4:goto L6d97d4;
case 0x6d97d7:c.instructions+=1;goto B6d97d7;
case 0x6d97dd:goto L6d97dd;
case 0x6d97e0:c.instructions+=3;goto B6d97e0;
case 0x6d97e6:c.instructions+=2;goto B6d97e6;
case 0x6d97e8:c.instructions+=1;goto B6d97e8;
case 0x6d97ea:goto L6d97ea;
case 0x6d97ec:c.instructions+=2;goto B6d97ec;
case 0x6d97ed:c.instructions+=1;goto B6d97ed;
case 0x6d97f0:goto L6d97f0;
case 0x6d97f3:c.instructions+=1;goto B6d97f3;
case 0x6d97f9:goto L6d97f9;
case 0x6d97fe:goto L6d97fe;
case 0x6d9803:goto L6d9803;
case 0x6d9808:goto L6d9808;
case 0x6d980d:goto L6d980d;
case 0x6d9812:goto L6d9812;
case 0x6d9815:c.instructions+=6;goto B6d9815;
case 0x6d981b:c.instructions+=5;goto B6d981b;
case 0x6d9821:c.instructions+=4;goto B6d9821;
case 0x6d9827:c.instructions+=3;goto B6d9827;
case 0x6d9829:c.instructions+=2;goto B6d9829;
case 0x6d982a:c.instructions+=1;goto B6d982a;
case 0x6d982c:goto L6d982c;
case 0x6d9831:goto L6d9831;
case 0x6d9833:goto L6d9833;
case 0x6d9838:goto L6d9838;
case 0x6d983e:c.instructions+=1;goto B6d983e;
case 0x6d9840:goto L6d9840;
case 0x6d9846:c.instructions+=3;goto B6d9846;
case 0x6d9849:c.instructions+=2;goto B6d9849;
case 0x6d984a:c.instructions+=1;goto B6d984a;
case 0x6d984f:goto L6d984f;
case 0x6d9852:c.instructions+=3;goto B6d9852;
case 0x6d9855:c.instructions+=2;goto B6d9855;
case 0x6d9857:c.instructions+=1;goto B6d9857;
case 0x6d985a:goto L6d985a;
case 0x6d985d:c.instructions+=4;goto B6d985d;
case 0x6d9860:c.instructions+=3;goto B6d9860;
case 0x6d9862:c.instructions+=2;goto B6d9862;
case 0x6d9865:c.instructions+=1;goto B6d9865;
case 0x6d9867:goto L6d9867;
case 0x6d986a:c.instructions+=10;goto B6d986a;
case 0x6d986b:c.instructions+=9;goto B6d986b;
case 0x6d986e:c.instructions+=8;goto B6d986e;
case 0x6d986f:c.instructions+=7;goto B6d986f;
case 0x6d9875:c.instructions+=6;goto B6d9875;
case 0x6d9876:c.instructions+=5;goto B6d9876;
case 0x6d987c:c.instructions+=4;goto B6d987c;
case 0x6d987d:c.instructions+=3;goto B6d987d;
case 0x6d987e:c.instructions+=2;goto B6d987e;
case 0x6d9880:c.instructions+=1;goto B6d9880;
case 0x6d9885:goto L6d9885;
case 0x6d9887:c.instructions+=1;goto B6d9887;
case 0x6d9889:goto L6d9889;
case 0x6d988a:c.instructions+=4;goto B6d988a;
case 0x6d988f:c.instructions+=3;goto B6d988f;
case 0x6d9890:c.instructions+=2;goto B6d9890;
case 0x6d9896:c.instructions+=1;goto B6d9896;
case 0x6d9897:goto L6d9897;
case 0x6d98a1:c.instructions+=4;goto B6d98a1;
case 0x6d98a4:c.instructions+=3;goto B6d98a4;
case 0x6d98a7:c.instructions+=2;goto B6d98a7;
case 0x6d98ad:c.instructions+=1;goto B6d98ad;
case 0x6d98af:goto L6d98af;
case 0x6d98b5:goto L6d98b5;
case 0x6d98ba:c.instructions+=5;goto B6d98ba;
case 0x6d98bc:c.instructions+=4;goto B6d98bc;
case 0x6d98bd:c.instructions+=3;goto B6d98bd;
case 0x6d98c2:c.instructions+=2;goto B6d98c2;
case 0x6d98c3:c.instructions+=1;goto B6d98c3;
case 0x6d98c6:goto L6d98c6;
case 0x6d98c8:c.instructions+=2;goto B6d98c8;
case 0x6d98ce:c.instructions+=1;goto B6d98ce;
case 0x6d98d4:goto L6d98d4;
case 0x6d98d9:c.instructions+=3;goto B6d98d9;
case 0x6d98db:c.instructions+=2;goto B6d98db;
case 0x6d98dc:c.instructions+=1;goto B6d98dc;
case 0x6d98de:goto L6d98de;
case 0x6d98e4:c.instructions+=3;goto B6d98e4;
case 0x6d98e6:c.instructions+=2;goto B6d98e6;
case 0x6d98e7:c.instructions+=1;goto B6d98e7;
case 0x6d98e9:goto L6d98e9;
case 0x6d98ef:c.instructions+=2;goto B6d98ef;
case 0x6d98f0:c.instructions+=1;goto B6d98f0;
case 0x6d98f6:goto L6d98f6;
case 0x6d98f8:c.instructions+=1;goto B6d98f8;
case 0x6d98fe:goto L6d98fe;
case 0x6d9903:c.instructions+=3;goto B6d9903;
case 0x6d9905:c.instructions+=2;goto B6d9905;
case 0x6d9906:c.instructions+=1;goto B6d9906;
case 0x6d9909:goto L6d9909;
case 0x6d990e:c.instructions+=1;goto B6d990e;
case 0x6d9914:goto L6d9914;
case 0x6d9917:c.instructions+=6;goto B6d9917;
case 0x6d991d:c.instructions+=5;goto B6d991d;
case 0x6d9922:c.instructions+=4;goto B6d9922;
case 0x6d9928:c.instructions+=3;goto B6d9928;
case 0x6d992a:c.instructions+=2;goto B6d992a;
case 0x6d992b:c.instructions+=1;goto B6d992b;
case 0x6d992d:goto L6d992d;
case 0x6d9932:goto L6d9932;
case 0x6d9934:goto L6d9934;
case 0x6d9939:goto L6d9939;
case 0x6d993f:c.instructions+=1;goto B6d993f;
case 0x6d9941:goto L6d9941;
case 0x6d9947:c.instructions+=2;goto B6d9947;
case 0x6d9948:c.instructions+=1;goto B6d9948;
case 0x6d994d:goto L6d994d;
case 0x6d9950:c.instructions+=2;goto B6d9950;
case 0x6d9953:c.instructions+=1;goto B6d9953;
case 0x6d9956:goto L6d9956;
case 0x6d9959:c.instructions+=4;goto B6d9959;
case 0x6d995c:c.instructions+=3;goto B6d995c;
case 0x6d995e:c.instructions+=2;goto B6d995e;
case 0x6d9961:c.instructions+=1;goto B6d9961;
case 0x6d9963:goto L6d9963;
case 0x6d9966:c.instructions+=10;goto B6d9966;
case 0x6d9967:c.instructions+=9;goto B6d9967;
case 0x6d996a:c.instructions+=8;goto B6d996a;
case 0x6d996b:c.instructions+=7;goto B6d996b;
case 0x6d9971:c.instructions+=6;goto B6d9971;
case 0x6d9972:c.instructions+=5;goto B6d9972;
case 0x6d9978:c.instructions+=4;goto B6d9978;
case 0x6d9979:c.instructions+=3;goto B6d9979;
case 0x6d997a:c.instructions+=2;goto B6d997a;
case 0x6d997c:c.instructions+=1;goto B6d997c;
case 0x6d9981:goto L6d9981;
case 0x6d9983:c.instructions+=1;goto B6d9983;
case 0x6d9985:goto L6d9985;
case 0x6d9986:c.instructions+=5;goto B6d9986;
case 0x6d9987:c.instructions+=4;goto B6d9987;
case 0x6d998c:c.instructions+=3;goto B6d998c;
case 0x6d998d:c.instructions+=2;goto B6d998d;
case 0x6d9993:c.instructions+=1;goto B6d9993;
case 0x6d9994:goto L6d9994;
case 0x6d999e:c.instructions+=4;goto B6d999e;
case 0x6d99a1:c.instructions+=3;goto B6d99a1;
case 0x6d99a4:c.instructions+=2;goto B6d99a4;
case 0x6d99aa:c.instructions+=1;goto B6d99aa;
case 0x6d99ac:goto L6d99ac;
case 0x6d99b2:goto L6d99b2;
case 0x6d99b7:c.instructions+=4;goto B6d99b7;
case 0x6d99b9:c.instructions+=3;goto B6d99b9;
case 0x6d99be:c.instructions+=2;goto B6d99be;
case 0x6d99bf:c.instructions+=1;goto B6d99bf;
case 0x6d99c2:goto L6d99c2;
case 0x6d99c4:c.instructions+=1;goto B6d99c4;
case 0x6d99ca:goto L6d99ca;
case 0x6d99cf:c.instructions+=2;goto B6d99cf;
case 0x6d99d0:c.instructions+=1;goto B6d99d0;
case 0x6d99d6:goto L6d99d6;
case 0x6d99dc:c.instructions+=3;goto B6d99dc;
case 0x6d99de:c.instructions+=2;goto B6d99de;
case 0x6d99df:c.instructions+=1;goto B6d99df;
case 0x6d99e1:goto L6d99e1;
case 0x6d99e7:c.instructions+=2;goto B6d99e7;
case 0x6d99e8:c.instructions+=1;goto B6d99e8;
case 0x6d99ee:goto L6d99ee;
case 0x6d99ef:c.instructions+=1;goto B6d99ef;
case 0x6d99f5:goto L6d99f5;
case 0x6d99f8:c.instructions+=3;goto B6d99f8;
case 0x6d99fe:c.instructions+=2;goto B6d99fe;
case 0x6d9a01:c.instructions+=1;goto B6d9a01;
case 0x6d9a03:goto L6d9a03;
case 0x6d9a0a:goto L6d9a0a;
case 0x6d9a10:c.instructions+=4;goto B6d9a10;
case 0x6d9a14:c.instructions+=3;goto B6d9a14;
case 0x6d9a15:c.instructions+=2;goto B6d9a15;
case 0x6d9a16:c.instructions+=1;goto B6d9a16;
case 0x6d9a1b:goto L6d9a1b;
case 0x6d9a20:c.instructions+=1;goto B6d9a20;
case 0x6d9a22:goto L6d9a22;
case 0x6d9a28:c.instructions+=4;goto B6d9a28;
case 0x6d9a2c:c.instructions+=3;goto B6d9a2c;
case 0x6d9a2d:c.instructions+=2;goto B6d9a2d;
case 0x6d9a2e:c.instructions+=1;goto B6d9a2e;
case 0x6d9a33:goto L6d9a33;
case 0x6d9a38:goto L6d9a38;
case 0x6d9a3b:goto L6d9a3b;
case 0x6d9a3d:c.instructions+=1;goto B6d9a3d;
case 0x6d9a42:goto L6d9a42;
case 0x6d9a47:goto L6d9a47;
case 0x6d9a4d:c.instructions+=2;goto B6d9a4d;
case 0x6d9a52:c.instructions+=1;goto B6d9a52;
case 0x6d9a54:goto L6d9a54;
case 0x6d9a59:c.instructions+=2;goto B6d9a59;
case 0x6d9a60:c.instructions+=1;goto B6d9a60;
case 0x6d9a62:goto L6d9a62;
case 0x6d9a68:goto L6d9a68;
case 0x6d9a6d:goto L6d9a6d;
case 0x6d9a70:c.instructions+=8;goto B6d9a70;
case 0x6d9a75:c.instructions+=7;goto B6d9a75;
case 0x6d9a77:c.instructions+=6;goto B6d9a77;
case 0x6d9a7d:c.instructions+=5;goto B6d9a7d;
case 0x6d9a7e:c.instructions+=4;goto B6d9a7e;
case 0x6d9a7f:c.instructions+=3;goto B6d9a7f;
case 0x6d9a80:c.instructions+=2;goto B6d9a80;
case 0x6d9a81:c.instructions+=1;goto B6d9a81;
case 0x6d9a84:goto L6d9a84;
case 0x6d9a8a:c.instructions+=1;goto B6d9a8a;
case 0x6d9a8c:goto L6d9a8c;
case 0x6d9a8f:c.instructions+=6;goto B6d9a8f;
case 0x6d9a94:c.instructions+=5;goto B6d9a94;
case 0x6d9a96:c.instructions+=4;goto B6d9a96;
case 0x6d9a9c:c.instructions+=3;goto B6d9a9c;
case 0x6d9a9d:c.instructions+=2;goto B6d9a9d;
case 0x6d9a9e:c.instructions+=1;goto B6d9a9e;
case 0x6d9aa4:goto L6d9aa4;
case 0x6d9aa9:goto L6d9aa9;
case 0x6d9aae:goto L6d9aae;
case 0x6d9ab3:goto L6d9ab3;
case 0x6d9ab8:goto L6d9ab8;
case 0x6d9abd:goto L6d9abd;
case 0x6d9ac4:c.instructions+=6;goto B6d9ac4;
case 0x6d9ac9:c.instructions+=5;goto B6d9ac9;
case 0x6d9acb:c.instructions+=4;goto B6d9acb;
case 0x6d9acc:c.instructions+=3;goto B6d9acc;
case 0x6d9ad1:c.instructions+=2;goto B6d9ad1;
case 0x6d9ad2:c.instructions+=1;goto B6d9ad2;
case 0x6d9ad8:goto L6d9ad8;
case 0x6d9add:goto L6d9add;
case 0x6d9ae3:c.instructions+=3;goto B6d9ae3;
case 0x6d9ae5:c.instructions+=2;goto B6d9ae5;
case 0x6d9ae7:c.instructions+=1;goto B6d9ae7;
case 0x6d9ae9:goto L6d9ae9;
case 0x6d9af0:goto L6d9af0;
case 0x6d9af3:c.instructions+=1;goto B6d9af3;
case 0x6d9af5:goto L6d9af5;
case 0x6d9af8:c.instructions+=2;goto B6d9af8;
case 0x6d9afd:c.instructions+=1;goto B6d9afd;
case 0x6d9aff:goto L6d9aff;
case 0x6d9b01:c.instructions+=4;goto B6d9b01;
case 0x6d9b03:c.instructions+=3;goto B6d9b03;
case 0x6d9b04:c.instructions+=2;goto B6d9b04;
case 0x6d9b05:c.instructions+=1;goto B6d9b05;
case 0x6d9b0b:goto L6d9b0b;
case 0x6d9b0d:goto L6d9b0d;
case 0x6d9b0f:c.instructions+=4;goto B6d9b0f;
case 0x6d9b10:c.instructions+=3;goto B6d9b10;
case 0x6d9b11:c.instructions+=2;goto B6d9b11;
case 0x6d9b12:c.instructions+=1;goto B6d9b12;
case 0x6d9b18:goto L6d9b18;
case 0x6d9b19:c.instructions+=2;goto B6d9b19;
case 0x6d9b1b:c.instructions+=1;goto B6d9b1b;
case 0x6d9b1d:goto L6d9b1d;
case 0x6d9b23:c.instructions+=6;goto B6d9b23;
case 0x6d9b28:c.instructions+=5;goto B6d9b28;
case 0x6d9b2a:c.instructions+=4;goto B6d9b2a;
case 0x6d9b2b:c.instructions+=3;goto B6d9b2b;
case 0x6d9b30:c.instructions+=2;goto B6d9b30;
case 0x6d9b31:c.instructions+=1;goto B6d9b31;
case 0x6d9b37:goto L6d9b37;
case 0x6d9b3d:c.instructions+=3;goto B6d9b3d;
case 0x6d9b3f:c.instructions+=2;goto B6d9b3f;
case 0x6d9b44:c.instructions+=1;goto B6d9b44;
case 0x6d9b48:goto L6d9b48;
case 0x6d9b4a:goto L6d9b4a;
case 0x6d9b4c:c.instructions+=11;goto B6d9b4c;
case 0x6d9b4e:c.instructions+=10;goto B6d9b4e;
case 0x6d9b52:c.instructions+=9;goto B6d9b52;
case 0x6d9b56:c.instructions+=8;goto B6d9b56;
case 0x6d9b5a:c.instructions+=7;goto B6d9b5a;
case 0x6d9b5f:c.instructions+=6;goto B6d9b5f;
case 0x6d9b63:c.instructions+=5;goto B6d9b63;
case 0x6d9b64:c.instructions+=4;goto B6d9b64;
case 0x6d9b68:c.instructions+=3;goto B6d9b68;
case 0x6d9b6a:c.instructions+=2;goto B6d9b6a;
case 0x6d9b6b:c.instructions+=1;goto B6d9b6b;
case 0x6d9b71:goto L6d9b71;
case 0x6d9b73:goto L6d9b73;
case 0x6d9b74:c.instructions+=4;goto B6d9b74;
case 0x6d9b75:c.instructions+=3;goto B6d9b75;
case 0x6d9b76:c.instructions+=2;goto B6d9b76;
case 0x6d9b7c:c.instructions+=1;goto B6d9b7c;
case 0x6d9b90:goto L6d9b90;
case 0x6d9b95:c.instructions+=5;goto B6d9b95;
case 0x6d9b9b:c.instructions+=4;goto B6d9b9b;
case 0x6d9b9d:c.instructions+=3;goto B6d9b9d;
case 0x6d9b9e:c.instructions+=2;goto B6d9b9e;
case 0x6d9ba0:c.instructions+=1;goto B6d9ba0;
case 0x6d9ba2:goto L6d9ba2;
case 0x6d9ba7:c.instructions+=3;goto B6d9ba7;
case 0x6d9ba8:c.instructions+=2;goto B6d9ba8;
case 0x6d9bae:c.instructions+=1;goto B6d9bae;
case 0x6d9bb1:goto L6d9bb1;
case 0x6d9bb4:c.instructions+=8;goto B6d9bb4;
case 0x6d9bba:c.instructions+=7;goto B6d9bba;
case 0x6d9bc0:c.instructions+=6;goto B6d9bc0;
case 0x6d9bc3:c.instructions+=5;goto B6d9bc3;
case 0x6d9bc6:c.instructions+=4;goto B6d9bc6;
case 0x6d9bc8:c.instructions+=3;goto B6d9bc8;
case 0x6d9bc9:c.instructions+=2;goto B6d9bc9;
case 0x6d9bce:c.instructions+=1;goto B6d9bce;
case 0x6d9bd0:goto L6d9bd0;
case 0x6d9bd6:c.instructions+=12;goto B6d9bd6;
case 0x6d9bd9:c.instructions+=11;goto B6d9bd9;
case 0x6d9bdc:c.instructions+=10;goto B6d9bdc;
case 0x6d9bdd:c.instructions+=9;goto B6d9bdd;
case 0x6d9be0:c.instructions+=8;goto B6d9be0;
case 0x6d9be1:c.instructions+=7;goto B6d9be1;
case 0x6d9be4:c.instructions+=6;goto B6d9be4;
case 0x6d9bea:c.instructions+=5;goto B6d9bea;
case 0x6d9beb:c.instructions+=4;goto B6d9beb;
case 0x6d9bec:c.instructions+=3;goto B6d9bec;
case 0x6d9bed:c.instructions+=2;goto B6d9bed;
case 0x6d9bef:c.instructions+=1;goto B6d9bef;
case 0x6d9bf4:goto L6d9bf4;
case 0x6d9bfa:c.instructions+=4;goto B6d9bfa;
case 0x6d9bfd:c.instructions+=3;goto B6d9bfd;
case 0x6d9c00:c.instructions+=2;goto B6d9c00;
case 0x6d9c06:c.instructions+=1;goto B6d9c06;
case 0x6d9c08:goto L6d9c08;
case 0x6d9c12:goto L6d9c12;
case 0x6d9c15:c.instructions+=14;goto B6d9c15;
case 0x6d9c1a:c.instructions+=13;goto B6d9c1a;
case 0x6d9c1f:c.instructions+=12;goto B6d9c1f;
case 0x6d9c25:c.instructions+=11;goto B6d9c25;
case 0x6d9c2b:c.instructions+=10;goto B6d9c2b;
case 0x6d9c30:c.instructions+=9;goto B6d9c30;
case 0x6d9c32:c.instructions+=8;goto B6d9c32;
case 0x6d9c37:c.instructions+=7;goto B6d9c37;
case 0x6d9c38:c.instructions+=6;goto B6d9c38;
case 0x6d9c3b:c.instructions+=5;goto B6d9c3b;
case 0x6d9c41:c.instructions+=4;goto B6d9c41;
case 0x6d9c42:c.instructions+=3;goto B6d9c42;
case 0x6d9c43:c.instructions+=2;goto B6d9c43;
case 0x6d9c44:c.instructions+=1;goto B6d9c44;
case 0x6d9c47:goto L6d9c47;
case 0x6d9c49:c.instructions+=2;goto B6d9c49;
case 0x6d9c4c:c.instructions+=1;goto B6d9c4c;
case 0x6d9c52:goto L6d9c52;
case 0x6d9c55:c.instructions+=3;goto B6d9c55;
case 0x6d9c58:c.instructions+=2;goto B6d9c58;
case 0x6d9c5a:c.instructions+=1;goto B6d9c5a;
case 0x6d9c5c:goto L6d9c5c;
case 0x6d9c62:c.instructions+=12;goto B6d9c62;
case 0x6d9c65:c.instructions+=11;goto B6d9c65;
case 0x6d9c68:c.instructions+=10;goto B6d9c68;
case 0x6d9c69:c.instructions+=9;goto B6d9c69;
case 0x6d9c6c:c.instructions+=8;goto B6d9c6c;
case 0x6d9c6d:c.instructions+=7;goto B6d9c6d;
case 0x6d9c73:c.instructions+=6;goto B6d9c73;
case 0x6d9c76:c.instructions+=5;goto B6d9c76;
case 0x6d9c77:c.instructions+=4;goto B6d9c77;
case 0x6d9c78:c.instructions+=3;goto B6d9c78;
case 0x6d9c79:c.instructions+=2;goto B6d9c79;
case 0x6d9c7b:c.instructions+=1;goto B6d9c7b;
case 0x6d9c80:goto L6d9c80;
case 0x6d9c86:c.instructions+=4;goto B6d9c86;
case 0x6d9c89:c.instructions+=3;goto B6d9c89;
case 0x6d9c8c:c.instructions+=2;goto B6d9c8c;
case 0x6d9c92:c.instructions+=1;goto B6d9c92;
case 0x6d9c94:goto L6d9c94;
case 0x6d9c9e:goto L6d9c9e;
case 0x6d9ca1:c.instructions+=14;goto B6d9ca1;
case 0x6d9ca6:c.instructions+=13;goto B6d9ca6;
case 0x6d9cab:c.instructions+=12;goto B6d9cab;
case 0x6d9cb1:c.instructions+=11;goto B6d9cb1;
case 0x6d9cb7:c.instructions+=10;goto B6d9cb7;
case 0x6d9cbc:c.instructions+=9;goto B6d9cbc;
case 0x6d9cbe:c.instructions+=8;goto B6d9cbe;
case 0x6d9cc0:c.instructions+=7;goto B6d9cc0;
case 0x6d9cc1:c.instructions+=6;goto B6d9cc1;
case 0x6d9cc4:c.instructions+=5;goto B6d9cc4;
case 0x6d9cca:c.instructions+=4;goto B6d9cca;
case 0x6d9ccb:c.instructions+=3;goto B6d9ccb;
case 0x6d9ccc:c.instructions+=2;goto B6d9ccc;
case 0x6d9ccd:c.instructions+=1;goto B6d9ccd;
case 0x6d9cd0:goto L6d9cd0;
case 0x6d9cd3:goto L6d9cd3;
case 0x6d9cd6:c.instructions+=3;goto B6d9cd6;
case 0x6d9cd8:c.instructions+=2;goto B6d9cd8;
case 0x6d9cd9:c.instructions+=1;goto B6d9cd9;
case 0x6d9cdb:goto L6d9cdb;
case 0x6d9cdd:c.instructions+=3;goto B6d9cdd;
case 0x6d9cde:c.instructions+=2;goto B6d9cde;
case 0x6d9ce4:c.instructions+=1;goto B6d9ce4;
case 0x6d9ce7:goto L6d9ce7;
case 0x6d9cea:c.instructions+=8;goto B6d9cea;
case 0x6d9cef:c.instructions+=7;goto B6d9cef;
case 0x6d9cf1:c.instructions+=6;goto B6d9cf1;
case 0x6d9cf7:c.instructions+=5;goto B6d9cf7;
case 0x6d9cf8:c.instructions+=4;goto B6d9cf8;
case 0x6d9cfa:c.instructions+=3;goto B6d9cfa;
case 0x6d9cfc:c.instructions+=2;goto B6d9cfc;
case 0x6d9cfd:c.instructions+=1;goto B6d9cfd;
case 0x6d9d00:goto L6d9d00;
case 0x6d9d05:c.instructions+=2;goto B6d9d05;
case 0x6d9d07:c.instructions+=1;goto B6d9d07;
case 0x6d9d09:goto L6d9d09;
case 0x6d9d0c:c.instructions+=6;goto B6d9d0c;
case 0x6d9d11:c.instructions+=5;goto B6d9d11;
case 0x6d9d13:c.instructions+=4;goto B6d9d13;
case 0x6d9d19:c.instructions+=3;goto B6d9d19;
case 0x6d9d1a:c.instructions+=2;goto B6d9d1a;
case 0x6d9d1b:c.instructions+=1;goto B6d9d1b;
case 0x6d9d21:goto L6d9d21;
case 0x6d9d24:c.instructions+=3;goto B6d9d24;
case 0x6d9d27:c.instructions+=2;goto B6d9d27;
case 0x6d9d28:c.instructions+=1;goto B6d9d28;
case 0x6d9d2d:goto L6d9d2d;
case 0x6d9d30:c.instructions+=8;goto B6d9d30;
case 0x6d9d33:c.instructions+=7;goto B6d9d33;
case 0x6d9d36:c.instructions+=6;goto B6d9d36;
case 0x6d9d39:c.instructions+=5;goto B6d9d39;
case 0x6d9d3c:c.instructions+=4;goto B6d9d3c;
case 0x6d9d42:c.instructions+=3;goto B6d9d42;
case 0x6d9d45:c.instructions+=2;goto B6d9d45;
case 0x6d9d48:c.instructions+=1;goto B6d9d48;
case 0x6d9d4a:goto L6d9d4a;
case 0x6d9d51:goto L6d9d51;
case 0x6d9d57:c.instructions+=4;goto B6d9d57;
case 0x6d9d5b:c.instructions+=3;goto B6d9d5b;
case 0x6d9d5c:c.instructions+=2;goto B6d9d5c;
case 0x6d9d5d:c.instructions+=1;goto B6d9d5d;
case 0x6d9d62:goto L6d9d62;
case 0x6d9d67:c.instructions+=1;goto B6d9d67;
case 0x6d9d69:goto L6d9d69;
case 0x6d9d6e:c.instructions+=4;goto B6d9d6e;
case 0x6d9d72:c.instructions+=3;goto B6d9d72;
case 0x6d9d73:c.instructions+=2;goto B6d9d73;
case 0x6d9d74:c.instructions+=1;goto B6d9d74;
case 0x6d9d79:goto L6d9d79;
case 0x6d9d7e:goto L6d9d7e;
case 0x6d9d81:goto L6d9d81;
case 0x6d9d88:c.instructions+=2;goto B6d9d88;
case 0x6d9d8a:c.instructions+=1;goto B6d9d8a;
case 0x6d9d8c:goto L6d9d8c;
case 0x6d9d8e:c.instructions+=1;goto B6d9d8e;
case 0x6d9d93:goto L6d9d93;
case 0x6d9d95:c.instructions+=1;goto B6d9d95;
case 0x6d9d9a:goto L6d9d9a;
case 0x6d9d9d:c.instructions+=3;goto B6d9d9d;
case 0x6d9d9e:c.instructions+=2;goto B6d9d9e;
case 0x6d9da4:c.instructions+=1;goto B6d9da4;
case 0x6d9dc0:goto L6d9dc0;
case 0x6d9dc5:c.instructions+=4;goto B6d9dc5;
case 0x6d9dc6:c.instructions+=3;goto B6d9dc6;
case 0x6d9dc8:c.instructions+=2;goto B6d9dc8;
case 0x6d9dce:c.instructions+=1;goto B6d9dce;
case 0x6d9dd0:goto L6d9dd0;
case 0x6d9dd1:c.instructions+=1;goto B6d9dd1;
case 0x6d9dd6:goto L6d9dd6;
case 0x6d9dd9:goto L6d9dd9;
case 0x6d9ddb:c.instructions+=2;goto B6d9ddb;
case 0x6d9ddc:c.instructions+=1;goto B6d9ddc;
case 0x6d9de0:goto L6d9de0;
case 0x6d9de5:c.instructions+=4;goto B6d9de5;
case 0x6d9de6:c.instructions+=3;goto B6d9de6;
case 0x6d9de8:c.instructions+=2;goto B6d9de8;
case 0x6d9dee:c.instructions+=1;goto B6d9dee;
case 0x6d9df0:goto L6d9df0;
case 0x6d9df1:c.instructions+=1;goto B6d9df1;
case 0x6d9df6:goto L6d9df6;
case 0x6d9df9:goto L6d9df9;
case 0x6d9dfb:c.instructions+=2;goto B6d9dfb;
case 0x6d9dfc:c.instructions+=1;goto B6d9dfc;
case 0x6d9e00:goto L6d9e00;
case 0x6d9e01:c.instructions+=71;goto B6d9e01;
case 0x6d9e03:c.instructions+=70;goto B6d9e03;
case 0x6d9e04:c.instructions+=69;goto B6d9e04;
case 0x6d9e06:c.instructions+=68;goto B6d9e06;
case 0x6d9e09:c.instructions+=67;goto B6d9e09;
case 0x6d9e0f:c.instructions+=66;goto B6d9e0f;
case 0x6d9e12:c.instructions+=65;goto B6d9e12;
case 0x6d9e15:c.instructions+=64;goto B6d9e15;
case 0x6d9e18:c.instructions+=63;goto B6d9e18;
case 0x6d9e1b:c.instructions+=62;goto B6d9e1b;
case 0x6d9e1e:c.instructions+=61;goto B6d9e1e;
case 0x6d9e24:c.instructions+=60;goto B6d9e24;
case 0x6d9e27:c.instructions+=59;goto B6d9e27;
case 0x6d9e2a:c.instructions+=58;goto B6d9e2a;
case 0x6d9e2d:c.instructions+=57;goto B6d9e2d;
case 0x6d9e30:c.instructions+=56;goto B6d9e30;
case 0x6d9e33:c.instructions+=55;goto B6d9e33;
case 0x6d9e39:c.instructions+=54;goto B6d9e39;
case 0x6d9e3c:c.instructions+=53;goto B6d9e3c;
case 0x6d9e43:c.instructions+=52;goto B6d9e43;
case 0x6d9e49:c.instructions+=51;goto B6d9e49;
case 0x6d9e53:c.instructions+=50;goto B6d9e53;
case 0x6d9e59:c.instructions+=49;goto B6d9e59;
case 0x6d9e5f:c.instructions+=48;goto B6d9e5f;
case 0x6d9e63:c.instructions+=47;goto B6d9e63;
case 0x6d9e64:c.instructions+=46;goto B6d9e64;
case 0x6d9e69:c.instructions+=45;goto B6d9e69;
case 0x6d9e6f:c.instructions+=44;goto B6d9e6f;
case 0x6d9e72:c.instructions+=43;goto B6d9e72;
case 0x6d9e77:c.instructions+=42;goto B6d9e77;
case 0x6d9e7d:c.instructions+=41;goto B6d9e7d;
case 0x6d9e83:c.instructions+=40;goto B6d9e83;
case 0x6d9e86:c.instructions+=39;goto B6d9e86;
case 0x6d9e89:c.instructions+=38;goto B6d9e89;
case 0x6d9e8c:c.instructions+=37;goto B6d9e8c;
case 0x6d9e8f:c.instructions+=36;goto B6d9e8f;
case 0x6d9e92:c.instructions+=35;goto B6d9e92;
case 0x6d9e95:c.instructions+=34;goto B6d9e95;
case 0x6d9e98:c.instructions+=33;goto B6d9e98;
case 0x6d9e9b:c.instructions+=32;goto B6d9e9b;
case 0x6d9e9e:c.instructions+=31;goto B6d9e9e;
case 0x6d9ea2:c.instructions+=30;goto B6d9ea2;
case 0x6d9ea9:c.instructions+=29;goto B6d9ea9;
case 0x6d9eac:c.instructions+=28;goto B6d9eac;
case 0x6d9eaf:c.instructions+=27;goto B6d9eaf;
case 0x6d9eb2:c.instructions+=26;goto B6d9eb2;
case 0x6d9eb5:c.instructions+=25;goto B6d9eb5;
case 0x6d9ebb:c.instructions+=24;goto B6d9ebb;
case 0x6d9ec5:c.instructions+=23;goto B6d9ec5;
case 0x6d9ecb:c.instructions+=22;goto B6d9ecb;
case 0x6d9ed1:c.instructions+=21;goto B6d9ed1;
case 0x6d9ed7:c.instructions+=20;goto B6d9ed7;
case 0x6d9edd:c.instructions+=19;goto B6d9edd;
case 0x6d9ee4:c.instructions+=18;goto B6d9ee4;
case 0x6d9eea:c.instructions+=17;goto B6d9eea;
case 0x6d9ef0:c.instructions+=16;goto B6d9ef0;
case 0x6d9ef6:c.instructions+=15;goto B6d9ef6;
case 0x6d9efc:c.instructions+=14;goto B6d9efc;
case 0x6d9f02:c.instructions+=13;goto B6d9f02;
case 0x6d9f08:c.instructions+=12;goto B6d9f08;
case 0x6d9f0d:c.instructions+=11;goto B6d9f0d;
case 0x6d9f0e:c.instructions+=10;goto B6d9f0e;
case 0x6d9f14:c.instructions+=9;goto B6d9f14;
case 0x6d9f1a:c.instructions+=8;goto B6d9f1a;
case 0x6d9f20:c.instructions+=7;goto B6d9f20;
case 0x6d9f26:c.instructions+=6;goto B6d9f26;
case 0x6d9f29:c.instructions+=5;goto B6d9f29;
case 0x6d9f2c:c.instructions+=4;goto B6d9f2c;
case 0x6d9f2f:c.instructions+=3;goto B6d9f2f;
case 0x6d9f36:c.instructions+=2;goto B6d9f36;
case 0x6d9f3c:c.instructions+=1;goto B6d9f3c;
case 0x6d9f42:goto L6d9f42;
case 0x6d9f48:c.instructions+=17;goto B6d9f48;
case 0x6d9f4e:c.instructions+=16;goto B6d9f4e;
case 0x6d9f50:c.instructions+=15;goto B6d9f50;
case 0x6d9f56:c.instructions+=14;goto B6d9f56;
case 0x6d9f59:c.instructions+=13;goto B6d9f59;
case 0x6d9f5c:c.instructions+=12;goto B6d9f5c;
case 0x6d9f62:c.instructions+=11;goto B6d9f62;
case 0x6d9f68:c.instructions+=10;goto B6d9f68;
case 0x6d9f6e:c.instructions+=9;goto B6d9f6e;
case 0x6d9f6f:c.instructions+=8;goto B6d9f6f;
case 0x6d9f75:c.instructions+=7;goto B6d9f75;
case 0x6d9f7f:c.instructions+=6;goto B6d9f7f;
case 0x6d9f89:c.instructions+=5;goto B6d9f89;
case 0x6d9f93:c.instructions+=4;goto B6d9f93;
case 0x6d9f95:c.instructions+=3;goto B6d9f95;
case 0x6d9f96:c.instructions+=2;goto B6d9f96;
case 0x6d9f97:c.instructions+=1;goto B6d9f97;
case 0x6d9fa0:goto L6d9fa0;
case 0x6d9fa1:c.instructions+=2;goto B6d9fa1;
case 0x6d9fa3:c.instructions+=1;goto B6d9fa3;
case 0x6d9fa8:goto L6d9fa8;
case 0x6d9fad:c.instructions+=1;goto B6d9fad;
case 0x6d9faf:goto L6d9faf;
case 0x6d9fb4:c.instructions+=2;goto B6d9fb4;
case 0x6d9fb5:c.instructions+=1;goto B6d9fb5;
case 0x6d9fbb:goto L6d9fbb;
case 0x6d9fbe:goto L6d9fbe;
case 0x6d9fc0:c.instructions+=2;goto B6d9fc0;
case 0x6d9fc1:c.instructions+=1;goto B6d9fc1;
case 0x6d9fd0:goto L6d9fd0;
case 0x6d9fd1:c.instructions+=5;goto B6d9fd1;
case 0x6d9fd3:c.instructions+=4;goto B6d9fd3;
case 0x6d9fd6:c.instructions+=3;goto B6d9fd6;
case 0x6d9fdc:c.instructions+=2;goto B6d9fdc;
case 0x6d9fde:c.instructions+=1;goto B6d9fde;
case 0x6d9fe4:goto L6d9fe4;
case 0x6d9fea:c.instructions+=2;goto B6d9fea;
case 0x6d9ff0:c.instructions+=1;goto B6d9ff0;
case 0x6d9ff2:goto L6d9ff2;
case 0x6d9ff8:c.instructions+=2;goto B6d9ff8;
case 0x6d9ffe:c.instructions+=1;goto B6d9ffe;
default:missing_instruction(c.pc);}
B6d9003:L6d9003:{c.instructions+=2;NFSU2_TR(0x6d9003);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d9004:{NFSU2_TR(0x6d9004);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9010:L6d9010:{c.instructions+=1;NFSU2_TR(0x6d9010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9015ull));
TAIL_STATIC(0x6da260u,6da);
}
B6d9015:L6d9015:{c.instructions+=3;NFSU2_TR(0x6d9015);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d901b:{NFSU2_TR(0x6d901b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x80000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d9020:{NFSU2_TR(0x6d9020);
if(r1(R+518)){{goto L6d9030;}}
}
B6d9022:L6d9022:{c.instructions+=3;NFSU2_TR(0x6d9022);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x10000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d9027:{NFSU2_TR(0x6d9027);
s1(0x8a79ad,u8(0x1ull));
}
B6d902e:{NFSU2_TR(0x6d902e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d9037;}}
}
B6d9030:L6d9030:{c.instructions+=1;NFSU2_TR(0x6d9030);
s1(0x8a79ad,u8(0x0ull));
}
B6d9037:L6d9037:{c.instructions+=1;NFSU2_TR(0x6d9037);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9040:L6d9040:{c.instructions+=9;NFSU2_TR(0x6d9040);
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
B6d9043:{NFSU2_TR(0x6d9043);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9044:{NFSU2_TR(0x6d9044);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9046:{NFSU2_TR(0x6d9046);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9048:{NFSU2_TR(0x6d9048);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d904a:{NFSU2_TR(0x6d904a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d904c:{NFSU2_TR(0x6d904c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6d9050:{NFSU2_TR(0x6d9050);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9051:{NFSU2_TR(0x6d9051);
u8 U[4];
__builtin_memmove((U+0),gp(0x78338c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9057ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d9057:L6d9057:{c.instructions+=5;NFSU2_TR(0x6d9057);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d905b:{NFSU2_TR(0x6d905b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d905d:{NFSU2_TR(0x6d905d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d905e:{NFSU2_TR(0x6d905e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9060:{NFSU2_TR(0x6d9060);
u8 U[4];
__builtin_memmove((U+0),gp(0x783348),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9066ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d9066:L6d9066:{c.instructions+=15;NFSU2_TR(0x6d9066);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d906a:{NFSU2_TR(0x6d906a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d906e:{NFSU2_TR(0x6d906e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d906f:{NFSU2_TR(0x6d906f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B6d9073:{NFSU2_TR(0x6d9073);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9077:{NFSU2_TR(0x6d9077);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9078:{NFSU2_TR(0x6d9078);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d907a:{NFSU2_TR(0x6d907a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d907b:{NFSU2_TR(0x6d907b);
u8 U[4];
w4(U+0,u32(0x80000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9080:{NFSU2_TR(0x6d9080);
u8 U[4];
w4(U+0,u32(0x80000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9085:{NFSU2_TR(0x6d9085);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9087:{NFSU2_TR(0x6d9087);
u8 U[4];
w4(U+0,u32(0x7c08bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d908c:{NFSU2_TR(0x6d908c);
u8 U[4];
w4(U+0,u32(0x7c08bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9091:{NFSU2_TR(0x6d9091);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9093:{NFSU2_TR(0x6d9093);
u8 U[4];
__builtin_memmove((U+0),gp(0x78334c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9099ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d9099:L6d9099:{c.instructions+=3;NFSU2_TR(0x6d9099);
__builtin_memmove((R+24),(R+0),4);
}
B6d909b:{NFSU2_TR(0x6d909b);
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
B6d909d:{NFSU2_TR(0x6d909d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d90a4;}}
}
B6d909f:L6d909f:{c.instructions+=3;NFSU2_TR(0x6d909f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d90a0:{NFSU2_TR(0x6d90a0);
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
B6d90a3:{NFSU2_TR(0x6d90a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d90a4:L6d90a4:{c.instructions+=2;NFSU2_TR(0x6d90a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d90a5:{NFSU2_TR(0x6d90a5);
u8 U[4];
__builtin_memmove((U+0),gp(0x783350),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d90abull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d90ab:L6d90ab:{c.instructions+=4;NFSU2_TR(0x6d90ab);
__builtin_memmove((R+0),(R+24),4);
}
B6d90ad:{NFSU2_TR(0x6d90ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d90ae:{NFSU2_TR(0x6d90ae);
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
B6d90b1:{NFSU2_TR(0x6d90b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d90c0:L6d90c0:{c.instructions+=3;NFSU2_TR(0x6d90c0);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d90c5:{NFSU2_TR(0x6d90c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d90c7:{NFSU2_TR(0x6d90c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d90ce;}}
}
B6d90c9:L6d90c9:{c.instructions+=2;NFSU2_TR(0x6d90c9);
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
B6d90cb:{NFSU2_TR(0x6d90cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d90ce:L6d90ce:{c.instructions+=11;NFSU2_TR(0x6d90ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d90d1:{NFSU2_TR(0x6d90d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d90d2:{NFSU2_TR(0x6d90d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d90d6:{NFSU2_TR(0x6d90d6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d90d7:{NFSU2_TR(0x6d90d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6d90db:{NFSU2_TR(0x6d90db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d90dc:{NFSU2_TR(0x6d90dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d90df:{NFSU2_TR(0x6d90df);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x10ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6d90e3:{NFSU2_TR(0x6d90e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d90e4:{NFSU2_TR(0x6d90e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d90e8:{NFSU2_TR(0x6d90e8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6d9144;}}
}
B6d90ea:L6d90ea:{c.instructions+=3;NFSU2_TR(0x6d90ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d90ee:{NFSU2_TR(0x6d90ee);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6d90f1:{NFSU2_TR(0x6d90f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d9144;}}
}
B6d90f3:L6d90f3:{c.instructions+=9;NFSU2_TR(0x6d90f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d90f5:{NFSU2_TR(0x6d90f5);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d90f7:{NFSU2_TR(0x6d90f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d90f9:{NFSU2_TR(0x6d90f9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d90fb:{NFSU2_TR(0x6d90fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d90fc:{NFSU2_TR(0x6d90fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d90fd:{NFSU2_TR(0x6d90fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d90fe:{NFSU2_TR(0x6d90fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d90ff:{NFSU2_TR(0x6d90ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9102ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9102:L6d9102:{c.instructions+=2;NFSU2_TR(0x6d9102);
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
B6d9104:{NFSU2_TR(0x6d9104);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d913f;}}
}
B6d9106:L6d9106:{c.instructions+=9;NFSU2_TR(0x6d9106);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d910b:{NFSU2_TR(0x6d910b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d910d:{NFSU2_TR(0x6d910d);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d910f:{NFSU2_TR(0x6d910f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9110:{NFSU2_TR(0x6d9110);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9111:{NFSU2_TR(0x6d9111);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9112:{NFSU2_TR(0x6d9112);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9113:{NFSU2_TR(0x6d9113);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9114:{NFSU2_TR(0x6d9114);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9117ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9117:L6d9117:{c.instructions+=2;NFSU2_TR(0x6d9117);
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
B6d9119:{NFSU2_TR(0x6d9119);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d913f;}}
}
B6d911b:L6d911b:{c.instructions+=11;NFSU2_TR(0x6d911b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d911f:{NFSU2_TR(0x6d911f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9123:{NFSU2_TR(0x6d9123);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d9124:{NFSU2_TR(0x6d9124);
u8 U[4];
w4(U+0,u32(0x50ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6d912a:{NFSU2_TR(0x6d912a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d912b:{NFSU2_TR(0x6d912b);
u8 U[4];
w4(U+0,u32(0x10ull));
s4(u32(r4(R+20)),r4(U+0));
}
B6d9132:{NFSU2_TR(0x6d9132);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d9133:{NFSU2_TR(0x6d9133);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B6d9139:{NFSU2_TR(0x6d9139);
w1(R+0,u8(0x1ull));
}
B6d913b:{NFSU2_TR(0x6d913b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d913c:{NFSU2_TR(0x6d913c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d913f:L6d913f:{c.instructions+=1;NFSU2_TR(0x6d913f);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d9144:L6d9144:{c.instructions+=2;NFSU2_TR(0x6d9144);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0xfull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6d9148:{NFSU2_TR(0x6d9148);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6d91a4;}}
}
B6d914a:L6d914a:{c.instructions+=3;NFSU2_TR(0x6d914a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d914e:{NFSU2_TR(0x6d914e);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x1ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6d9151:{NFSU2_TR(0x6d9151);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6d91a4;}}
}
B6d9153:L6d9153:{c.instructions+=9;NFSU2_TR(0x6d9153);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d9155:{NFSU2_TR(0x6d9155);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9157:{NFSU2_TR(0x6d9157);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9159:{NFSU2_TR(0x6d9159);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d915b:{NFSU2_TR(0x6d915b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d915c:{NFSU2_TR(0x6d915c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d915d:{NFSU2_TR(0x6d915d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d915e:{NFSU2_TR(0x6d915e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d915f:{NFSU2_TR(0x6d915f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9162ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9162:L6d9162:{c.instructions+=2;NFSU2_TR(0x6d9162);
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
B6d9164:{NFSU2_TR(0x6d9164);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d919f;}}
}
B6d9166:L6d9166:{c.instructions+=9;NFSU2_TR(0x6d9166);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d916b:{NFSU2_TR(0x6d916b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d916d:{NFSU2_TR(0x6d916d);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d916f:{NFSU2_TR(0x6d916f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9170:{NFSU2_TR(0x6d9170);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9171:{NFSU2_TR(0x6d9171);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9172:{NFSU2_TR(0x6d9172);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9173:{NFSU2_TR(0x6d9173);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9174:{NFSU2_TR(0x6d9174);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9177ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9177:L6d9177:{c.instructions+=2;NFSU2_TR(0x6d9177);
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
B6d9179:{NFSU2_TR(0x6d9179);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d919f;}}
}
B6d917b:L6d917b:{c.instructions+=11;NFSU2_TR(0x6d917b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d917f:{NFSU2_TR(0x6d917f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9183:{NFSU2_TR(0x6d9183);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d9184:{NFSU2_TR(0x6d9184);
u8 U[4];
w4(U+0,u32(0x49ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6d918a:{NFSU2_TR(0x6d918a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d918b:{NFSU2_TR(0x6d918b);
u8 U[4];
w4(U+0,u32(0xfull));
s4(u32(r4(R+20)),r4(U+0));
}
B6d9192:{NFSU2_TR(0x6d9192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d9193:{NFSU2_TR(0x6d9193);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+4)),r4(U+0));
}
B6d9199:{NFSU2_TR(0x6d9199);
w1(R+0,u8(0x1ull));
}
B6d919b:{NFSU2_TR(0x6d919b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d919c:{NFSU2_TR(0x6d919c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d919f:L6d919f:{c.instructions+=1;NFSU2_TR(0x6d919f);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d91a4:L6d91a4:{c.instructions+=2;NFSU2_TR(0x6d91a4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x18ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6d91a8:{NFSU2_TR(0x6d91a8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6d9305;}}
}
B6d91ae:L6d91ae:{c.instructions+=3;NFSU2_TR(0x6d91ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d91b2:{NFSU2_TR(0x6d91b2);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6d91b5:{NFSU2_TR(0x6d91b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d9208;}}
}
B6d91b7:L6d91b7:{c.instructions+=9;NFSU2_TR(0x6d91b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d91b9:{NFSU2_TR(0x6d91b9);
u8 U[4];
w4(U+0,u32(0x4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d91bb:{NFSU2_TR(0x6d91bb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d91bd:{NFSU2_TR(0x6d91bd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d91bf:{NFSU2_TR(0x6d91bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d91c0:{NFSU2_TR(0x6d91c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d91c1:{NFSU2_TR(0x6d91c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d91c2:{NFSU2_TR(0x6d91c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d91c3:{NFSU2_TR(0x6d91c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d91c6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d91c6:L6d91c6:{c.instructions+=2;NFSU2_TR(0x6d91c6);
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
B6d91c8:{NFSU2_TR(0x6d91c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d9203;}}
}
B6d91ca:L6d91ca:{c.instructions+=9;NFSU2_TR(0x6d91ca);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d91cf:{NFSU2_TR(0x6d91cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d91d1:{NFSU2_TR(0x6d91d1);
u8 U[4];
w4(U+0,u32(0x4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d91d3:{NFSU2_TR(0x6d91d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d91d4:{NFSU2_TR(0x6d91d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d91d5:{NFSU2_TR(0x6d91d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d91d6:{NFSU2_TR(0x6d91d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d91d7:{NFSU2_TR(0x6d91d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d91d8:{NFSU2_TR(0x6d91d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d91dbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d91db:L6d91db:{c.instructions+=2;NFSU2_TR(0x6d91db);
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
B6d91dd:{NFSU2_TR(0x6d91dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d9203;}}
}
B6d91df:L6d91df:{c.instructions+=11;NFSU2_TR(0x6d91df);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d91e3:{NFSU2_TR(0x6d91e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d91e7:{NFSU2_TR(0x6d91e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d91e8:{NFSU2_TR(0x6d91e8);
u8 U[4];
w4(U+0,u32(0x4dull));
s4(u32(r4(R+0)),r4(U+0));
}
B6d91ee:{NFSU2_TR(0x6d91ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d91ef:{NFSU2_TR(0x6d91ef);
u8 U[4];
w4(U+0,u32(0x18ull));
s4(u32(r4(R+20)),r4(U+0));
}
B6d91f6:{NFSU2_TR(0x6d91f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d91f7:{NFSU2_TR(0x6d91f7);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B6d91fd:{NFSU2_TR(0x6d91fd);
w1(R+0,u8(0x1ull));
}
B6d91ff:{NFSU2_TR(0x6d91ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d9200:{NFSU2_TR(0x6d9200);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9203:L6d9203:{c.instructions+=1;NFSU2_TR(0x6d9203);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d9208:L6d9208:{c.instructions+=2;NFSU2_TR(0x6d9208);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x18ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6d920c:{NFSU2_TR(0x6d920c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6d9305;}}
}
B6d9212:L6d9212:{c.instructions+=3;NFSU2_TR(0x6d9212);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9216:{NFSU2_TR(0x6d9216);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x8ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6d9219:{NFSU2_TR(0x6d9219);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6d926c;}}
}
B6d921b:L6d921b:{c.instructions+=9;NFSU2_TR(0x6d921b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d921d:{NFSU2_TR(0x6d921d);
u8 U[4];
w4(U+0,u32(0x4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d921f:{NFSU2_TR(0x6d921f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9221:{NFSU2_TR(0x6d9221);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9223:{NFSU2_TR(0x6d9223);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9224:{NFSU2_TR(0x6d9224);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9225:{NFSU2_TR(0x6d9225);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9226:{NFSU2_TR(0x6d9226);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9227:{NFSU2_TR(0x6d9227);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d922aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d922a:L6d922a:{c.instructions+=2;NFSU2_TR(0x6d922a);
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
B6d922c:{NFSU2_TR(0x6d922c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d9267;}}
}
B6d922e:L6d922e:{c.instructions+=9;NFSU2_TR(0x6d922e);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d9233:{NFSU2_TR(0x6d9233);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d9235:{NFSU2_TR(0x6d9235);
u8 U[4];
w4(U+0,u32(0x4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9237:{NFSU2_TR(0x6d9237);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9238:{NFSU2_TR(0x6d9238);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9239:{NFSU2_TR(0x6d9239);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d923a:{NFSU2_TR(0x6d923a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d923b:{NFSU2_TR(0x6d923b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d923c:{NFSU2_TR(0x6d923c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d923full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d923f:L6d923f:{c.instructions+=2;NFSU2_TR(0x6d923f);
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
B6d9241:{NFSU2_TR(0x6d9241);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d9267;}}
}
B6d9243:L6d9243:{c.instructions+=11;NFSU2_TR(0x6d9243);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9247:{NFSU2_TR(0x6d9247);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d924b:{NFSU2_TR(0x6d924b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d924c:{NFSU2_TR(0x6d924c);
u8 U[4];
w4(U+0,u32(0x4bull));
s4(u32(r4(R+0)),r4(U+0));
}
B6d9252:{NFSU2_TR(0x6d9252);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d9253:{NFSU2_TR(0x6d9253);
u8 U[4];
w4(U+0,u32(0x18ull));
s4(u32(r4(R+20)),r4(U+0));
}
B6d925a:{NFSU2_TR(0x6d925a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d925b:{NFSU2_TR(0x6d925b);
u8 U[4];
w4(U+0,u32(0x8ull));
s4(u32(r4(R+4)),r4(U+0));
}
B6d9261:{NFSU2_TR(0x6d9261);
w1(R+0,u8(0x1ull));
}
B6d9263:{NFSU2_TR(0x6d9263);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d9264:{NFSU2_TR(0x6d9264);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9267:L6d9267:{c.instructions+=1;NFSU2_TR(0x6d9267);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d926c:L6d926c:{c.instructions+=2;NFSU2_TR(0x6d926c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x18ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6d9270:{NFSU2_TR(0x6d9270);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6d9305;}}
}
B6d9276:L6d9276:{c.instructions+=3;NFSU2_TR(0x6d9276);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d927a:{NFSU2_TR(0x6d927a);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
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
B6d927d:{NFSU2_TR(0x6d927d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6d9305;}}
}
B6d9283:L6d9283:{c.instructions+=9;NFSU2_TR(0x6d9283);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d9285:{NFSU2_TR(0x6d9285);
u8 U[4];
w4(U+0,u32(0x4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9287:{NFSU2_TR(0x6d9287);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9289:{NFSU2_TR(0x6d9289);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d928b:{NFSU2_TR(0x6d928b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d928c:{NFSU2_TR(0x6d928c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d928d:{NFSU2_TR(0x6d928d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d928e:{NFSU2_TR(0x6d928e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d928f:{NFSU2_TR(0x6d928f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9292ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9292:L6d9292:{c.instructions+=2;NFSU2_TR(0x6d9292);
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
B6d9294:{NFSU2_TR(0x6d9294);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d9300;}}
}
B6d9296:L6d9296:{c.instructions+=9;NFSU2_TR(0x6d9296);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d929b:{NFSU2_TR(0x6d929b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d929d:{NFSU2_TR(0x6d929d);
u8 U[4];
w4(U+0,u32(0x4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d929f:{NFSU2_TR(0x6d929f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92a0:{NFSU2_TR(0x6d92a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92a1:{NFSU2_TR(0x6d92a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92a2:{NFSU2_TR(0x6d92a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92a3:{NFSU2_TR(0x6d92a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92a4:{NFSU2_TR(0x6d92a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d92a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d92a7:L6d92a7:{c.instructions+=2;NFSU2_TR(0x6d92a7);
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
B6d92a9:{NFSU2_TR(0x6d92a9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d93d3;}}
}
B6d92af:L6d92af:{c.instructions+=10;NFSU2_TR(0x6d92af);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d92b4:{NFSU2_TR(0x6d92b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d92b6:{NFSU2_TR(0x6d92b6);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92b8:{NFSU2_TR(0x6d92b8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92ba:{NFSU2_TR(0x6d92ba);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92bc:{NFSU2_TR(0x6d92bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92bd:{NFSU2_TR(0x6d92bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92be:{NFSU2_TR(0x6d92be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92bf:{NFSU2_TR(0x6d92bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92c0:{NFSU2_TR(0x6d92c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d92c3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d92c3:L6d92c3:{c.instructions+=2;NFSU2_TR(0x6d92c3);
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
B6d92c5:{NFSU2_TR(0x6d92c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d9300;}}
}
B6d92c7:L6d92c7:{c.instructions+=9;NFSU2_TR(0x6d92c7);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d92cc:{NFSU2_TR(0x6d92cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d92ce:{NFSU2_TR(0x6d92ce);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92d0:{NFSU2_TR(0x6d92d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92d1:{NFSU2_TR(0x6d92d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92d2:{NFSU2_TR(0x6d92d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92d3:{NFSU2_TR(0x6d92d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92d4:{NFSU2_TR(0x6d92d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d92d5:{NFSU2_TR(0x6d92d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d92d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d92d8:L6d92d8:{c.instructions+=2;NFSU2_TR(0x6d92d8);
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
B6d92da:{NFSU2_TR(0x6d92da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d9300;}}
}
B6d92dc:L6d92dc:{c.instructions+=11;NFSU2_TR(0x6d92dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d92e0:{NFSU2_TR(0x6d92e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d92e4:{NFSU2_TR(0x6d92e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d92e5:{NFSU2_TR(0x6d92e5);
u8 U[4];
w4(U+0,u32(0x50ull));
s4(u32(r4(R+8)),r4(U+0));
}
B6d92eb:{NFSU2_TR(0x6d92eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d92ec:{NFSU2_TR(0x6d92ec);
u8 U[4];
w4(U+0,u32(0x10ull));
s4(u32(r4(R+20)),r4(U+0));
}
B6d92f3:{NFSU2_TR(0x6d92f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d92f4:{NFSU2_TR(0x6d92f4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6d92fa:{NFSU2_TR(0x6d92fa);
w1(R+0,u8(0x1ull));
}
B6d92fc:{NFSU2_TR(0x6d92fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d92fd:{NFSU2_TR(0x6d92fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9300:L6d9300:{c.instructions+=1;NFSU2_TR(0x6d9300);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d9305:L6d9305:{c.instructions+=2;NFSU2_TR(0x6d9305);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x20ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6d9309:{NFSU2_TR(0x6d9309);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6d9441;}}
}
B6d930f:L6d930f:{c.instructions+=9;NFSU2_TR(0x6d930f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d9311:{NFSU2_TR(0x6d9311);
u8 U[4];
w4(U+0,u32(0x47ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9313:{NFSU2_TR(0x6d9313);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9315:{NFSU2_TR(0x6d9315);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9317:{NFSU2_TR(0x6d9317);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9318:{NFSU2_TR(0x6d9318);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9319:{NFSU2_TR(0x6d9319);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d931a:{NFSU2_TR(0x6d931a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d931b:{NFSU2_TR(0x6d931b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d931eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d931e:L6d931e:{c.instructions+=4;NFSU2_TR(0x6d931e);
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
B6d9320:{NFSU2_TR(0x6d9320);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d9325:{NFSU2_TR(0x6d9325);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d9327:{NFSU2_TR(0x6d9327);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d935f;}}
}
B6d9329:L6d9329:{c.instructions+=7;NFSU2_TR(0x6d9329);
u8 U[4];
w4(U+0,u32(0x47ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d932b:{NFSU2_TR(0x6d932b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d932c:{NFSU2_TR(0x6d932c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d932d:{NFSU2_TR(0x6d932d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d932e:{NFSU2_TR(0x6d932e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d932f:{NFSU2_TR(0x6d932f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9330:{NFSU2_TR(0x6d9330);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9333ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9333:L6d9333:{c.instructions+=2;NFSU2_TR(0x6d9333);
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
B6d9335:{NFSU2_TR(0x6d9335);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d9441;}}
}
B6d933b:L6d933b:{c.instructions+=11;NFSU2_TR(0x6d933b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d933f:{NFSU2_TR(0x6d933f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9343:{NFSU2_TR(0x6d9343);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d9344:{NFSU2_TR(0x6d9344);
u8 U[4];
w4(U+0,u32(0x47ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6d934a:{NFSU2_TR(0x6d934a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d934b:{NFSU2_TR(0x6d934b);
u8 U[4];
w4(U+0,u32(0x20ull));
s4(u32(r4(R+20)),r4(U+0));
}
B6d9352:{NFSU2_TR(0x6d9352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d9353:{NFSU2_TR(0x6d9353);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B6d9359:{NFSU2_TR(0x6d9359);
w1(R+0,u8(0x1ull));
}
B6d935b:{NFSU2_TR(0x6d935b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d935c:{NFSU2_TR(0x6d935c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d935f:L6d935f:{c.instructions+=8;NFSU2_TR(0x6d935f);
u8 U[4];
w4(U+0,u32(0x4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9361:{NFSU2_TR(0x6d9361);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9363:{NFSU2_TR(0x6d9363);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9365:{NFSU2_TR(0x6d9365);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9366:{NFSU2_TR(0x6d9366);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9367:{NFSU2_TR(0x6d9367);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9368:{NFSU2_TR(0x6d9368);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9369:{NFSU2_TR(0x6d9369);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d936cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d936c:L6d936c:{c.instructions+=4;NFSU2_TR(0x6d936c);
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
B6d936e:{NFSU2_TR(0x6d936e);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d9373:{NFSU2_TR(0x6d9373);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d9375:{NFSU2_TR(0x6d9375);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d93ad;}}
}
B6d9377:L6d9377:{c.instructions+=7;NFSU2_TR(0x6d9377);
u8 U[4];
w4(U+0,u32(0x4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9379:{NFSU2_TR(0x6d9379);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d937a:{NFSU2_TR(0x6d937a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d937b:{NFSU2_TR(0x6d937b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d937c:{NFSU2_TR(0x6d937c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d937d:{NFSU2_TR(0x6d937d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d937e:{NFSU2_TR(0x6d937e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9381ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9381:L6d9381:{c.instructions+=2;NFSU2_TR(0x6d9381);
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
B6d9383:{NFSU2_TR(0x6d9383);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d9441;}}
}
B6d9389:L6d9389:{c.instructions+=11;NFSU2_TR(0x6d9389);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d938d:{NFSU2_TR(0x6d938d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9391:{NFSU2_TR(0x6d9391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d9392:{NFSU2_TR(0x6d9392);
u8 U[4];
w4(U+0,u32(0x4bull));
s4(u32(r4(R+8)),r4(U+0));
}
B6d9398:{NFSU2_TR(0x6d9398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d9399:{NFSU2_TR(0x6d9399);
u8 U[4];
w4(U+0,u32(0x18ull));
s4(u32(r4(R+20)),r4(U+0));
}
B6d93a0:{NFSU2_TR(0x6d93a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d93a1:{NFSU2_TR(0x6d93a1);
u8 U[4];
w4(U+0,u32(0x8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6d93a7:{NFSU2_TR(0x6d93a7);
w1(R+0,u8(0x1ull));
}
B6d93a9:{NFSU2_TR(0x6d93a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d93aa:{NFSU2_TR(0x6d93aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d93ad:L6d93ad:{c.instructions+=8;NFSU2_TR(0x6d93ad);
u8 U[4];
w4(U+0,u32(0x4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93af:{NFSU2_TR(0x6d93af);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93b1:{NFSU2_TR(0x6d93b1);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93b3:{NFSU2_TR(0x6d93b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93b4:{NFSU2_TR(0x6d93b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93b5:{NFSU2_TR(0x6d93b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93b6:{NFSU2_TR(0x6d93b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93b7:{NFSU2_TR(0x6d93b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d93baull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d93ba:L6d93ba:{c.instructions+=4;NFSU2_TR(0x6d93ba);
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
B6d93bc:{NFSU2_TR(0x6d93bc);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d93c1:{NFSU2_TR(0x6d93c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d93c3:{NFSU2_TR(0x6d93c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d93f7;}}
}
B6d93c5:L6d93c5:{c.instructions+=7;NFSU2_TR(0x6d93c5);
u8 U[4];
w4(U+0,u32(0x4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93c7:{NFSU2_TR(0x6d93c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93c8:{NFSU2_TR(0x6d93c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93c9:{NFSU2_TR(0x6d93c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93ca:{NFSU2_TR(0x6d93ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93cb:{NFSU2_TR(0x6d93cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93cc:{NFSU2_TR(0x6d93cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d93cfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d93cf:L6d93cf:{c.instructions+=2;NFSU2_TR(0x6d93cf);
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
B6d93d1:{NFSU2_TR(0x6d93d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d9441;}}
}
B6d93d3:L6d93d3:{c.instructions+=11;NFSU2_TR(0x6d93d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d93d7:{NFSU2_TR(0x6d93d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d93db:{NFSU2_TR(0x6d93db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d93dc:{NFSU2_TR(0x6d93dc);
u8 U[4];
w4(U+0,u32(0x4full));
s4(u32(r4(R+0)),r4(U+0));
}
B6d93e2:{NFSU2_TR(0x6d93e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d93e3:{NFSU2_TR(0x6d93e3);
u8 U[4];
w4(U+0,u32(0x18ull));
s4(u32(r4(R+20)),r4(U+0));
}
B6d93ea:{NFSU2_TR(0x6d93ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d93eb:{NFSU2_TR(0x6d93eb);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B6d93f1:{NFSU2_TR(0x6d93f1);
w1(R+0,u8(0x1ull));
}
B6d93f3:{NFSU2_TR(0x6d93f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d93f4:{NFSU2_TR(0x6d93f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d93f7:L6d93f7:{c.instructions+=8;NFSU2_TR(0x6d93f7);
u8 U[4];
w4(U+0,u32(0x4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93f9:{NFSU2_TR(0x6d93f9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93fb:{NFSU2_TR(0x6d93fb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93fd:{NFSU2_TR(0x6d93fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93fe:{NFSU2_TR(0x6d93fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d93ff:{NFSU2_TR(0x6d93ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9400:{NFSU2_TR(0x6d9400);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9401:{NFSU2_TR(0x6d9401);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9404ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9404:L6d9404:{c.instructions+=2;NFSU2_TR(0x6d9404);
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
B6d9406:{NFSU2_TR(0x6d9406);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d9441;}}
}
B6d9408:L6d9408:{c.instructions+=9;NFSU2_TR(0x6d9408);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d940d:{NFSU2_TR(0x6d940d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d940f:{NFSU2_TR(0x6d940f);
u8 U[4];
w4(U+0,u32(0x4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9411:{NFSU2_TR(0x6d9411);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9412:{NFSU2_TR(0x6d9412);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9413:{NFSU2_TR(0x6d9413);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9414:{NFSU2_TR(0x6d9414);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9415:{NFSU2_TR(0x6d9415);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9416:{NFSU2_TR(0x6d9416);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9419ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9419:L6d9419:{c.instructions+=2;NFSU2_TR(0x6d9419);
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
B6d941b:{NFSU2_TR(0x6d941b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d9441;}}
}
B6d941d:L6d941d:{c.instructions+=11;NFSU2_TR(0x6d941d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9421:{NFSU2_TR(0x6d9421);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9425:{NFSU2_TR(0x6d9425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d9426:{NFSU2_TR(0x6d9426);
u8 U[4];
w4(U+0,u32(0x4dull));
s4(u32(r4(R+8)),r4(U+0));
}
B6d942c:{NFSU2_TR(0x6d942c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d942d:{NFSU2_TR(0x6d942d);
u8 U[4];
w4(U+0,u32(0x18ull));
s4(u32(r4(R+20)),r4(U+0));
}
B6d9434:{NFSU2_TR(0x6d9434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d9435:{NFSU2_TR(0x6d9435);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6d943b:{NFSU2_TR(0x6d943b);
w1(R+0,u8(0x1ull));
}
B6d943d:{NFSU2_TR(0x6d943d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d943e:{NFSU2_TR(0x6d943e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9441:L6d9441:{c.instructions+=6;NFSU2_TR(0x6d9441);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d9442:{NFSU2_TR(0x6d9442);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d9443:{NFSU2_TR(0x6d9443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d9444:{NFSU2_TR(0x6d9444);
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
B6d9446:{NFSU2_TR(0x6d9446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d9447:{NFSU2_TR(0x6d9447);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9450:L6d9450:{c.instructions+=2;NFSU2_TR(0x6d9450);
__builtin_memmove((R+0),gp(0x8a79ac),1);
}
B6d9455:{NFSU2_TR(0x6d9455);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9460:L6d9460:{c.instructions+=2;NFSU2_TR(0x6d9460);
__builtin_memmove((R+0),gp(0x8a79ad),1);
}
B6d9465:{NFSU2_TR(0x6d9465);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9470:L6d9470:{c.instructions+=4;NFSU2_TR(0x6d9470);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9474:{NFSU2_TR(0x6d9474);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffecull))));
}
B6d9477:{NFSU2_TR(0x6d9477);
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
B6d947a:{NFSU2_TR(0x6d947a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6d949b;}}
}
B6d947c:L6d947c:{c.instructions+=1;NFSU2_TR(0x6d947c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6d94a0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9483:L6d9483:{c.instructions+=2;NFSU2_TR(0x6d9483);
w4(R+0,u32(0x18ull));
}
B6d9488:{NFSU2_TR(0x6d9488);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9489:L6d9489:{c.instructions+=2;NFSU2_TR(0x6d9489);
w4(R+0,u32(0x20ull));
}
B6d948e:{NFSU2_TR(0x6d948e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d948f:L6d948f:{c.instructions+=2;NFSU2_TR(0x6d948f);
w4(R+0,u32(0x10ull));
}
B6d9494:{NFSU2_TR(0x6d9494);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9495:L6d9495:{c.instructions+=2;NFSU2_TR(0x6d9495);
w4(R+0,u32(0x8ull));
}
B6d949a:{NFSU2_TR(0x6d949a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d949b:L6d949b:{c.instructions+=2;NFSU2_TR(0x6d949b);
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
B6d949d:{NFSU2_TR(0x6d949d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d94d0:L6d94d0:{c.instructions+=5;NFSU2_TR(0x6d94d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d94d3:{NFSU2_TR(0x6d94d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d94d9:{NFSU2_TR(0x6d94d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d94dd:{NFSU2_TR(0x6d94dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6d94df:{NFSU2_TR(0x6d94df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d94f0:L6d94f0:{c.instructions+=5;NFSU2_TR(0x6d94f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d94f3:{NFSU2_TR(0x6d94f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d94f9:{NFSU2_TR(0x6d94f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d94fd:{NFSU2_TR(0x6d94fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6d94ff:{NFSU2_TR(0x6d94ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9510:L6d9510:{c.instructions+=5;NFSU2_TR(0x6d9510);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9513:{NFSU2_TR(0x6d9513);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6d9519:{NFSU2_TR(0x6d9519);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d951d:{NFSU2_TR(0x6d951d);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+8)),r1(U+0));
}
B6d951f:{NFSU2_TR(0x6d951f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9530:L6d9530:{c.instructions+=6;NFSU2_TR(0x6d9530);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9533:{NFSU2_TR(0x6d9533);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9539:{NFSU2_TR(0x6d9539);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d953d:{NFSU2_TR(0x6d953d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6d953f:{NFSU2_TR(0x6d953f);
w1(R+0,u8(0x1ull));
}
B6d9541:{NFSU2_TR(0x6d9541);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9550:L6d9550:{c.instructions+=6;NFSU2_TR(0x6d9550);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9553:{NFSU2_TR(0x6d9553);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9559:{NFSU2_TR(0x6d9559);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d955d:{NFSU2_TR(0x6d955d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6d955f:{NFSU2_TR(0x6d955f);
w1(R+0,u8(0x1ull));
}
B6d9561:{NFSU2_TR(0x6d9561);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9570:L6d9570:{c.instructions+=6;NFSU2_TR(0x6d9570);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9573:{NFSU2_TR(0x6d9573);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9579:{NFSU2_TR(0x6d9579);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d957d:{NFSU2_TR(0x6d957d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6d957f:{NFSU2_TR(0x6d957f);
w1(R+0,u8(0x1ull));
}
B6d9581:{NFSU2_TR(0x6d9581);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9590:L6d9590:{c.instructions+=7;NFSU2_TR(0x6d9590);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9591:{NFSU2_TR(0x6d9591);
__builtin_memmove((R+24),(R+4),4);
}
B6d9593:{NFSU2_TR(0x6d9593);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9596:{NFSU2_TR(0x6d9596);
u8 U[4];
w4(U+0,u32(0x7c08acull));
s4(u32(r4(R+24)),r4(U+0));
}
B6d959c:{NFSU2_TR(0x6d959c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d959f:{NFSU2_TR(0x6d959f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d95a1:{NFSU2_TR(0x6d95a1);
if(r1(R+518)){{goto L6d95bb;}}
}
B6d95a3:L6d95a3:{c.instructions+=5;NFSU2_TR(0x6d95a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d95a6:{NFSU2_TR(0x6d95a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d95a9:{NFSU2_TR(0x6d95a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d95aa:{NFSU2_TR(0x6d95aa);
__builtin_memmove((R+4),(R+24),4);
}
B6d95ac:{NFSU2_TR(0x6d95ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d95b1ull));
TAIL_STATIC(0x6d82e0u,6d8);
}
B6d95b1:L6d95b1:{c.instructions+=4;NFSU2_TR(0x6d95b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d95b4:{NFSU2_TR(0x6d95b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d95b7:{NFSU2_TR(0x6d95b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d95b9:{NFSU2_TR(0x6d95b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d95a3u);}goto L6d95a3;}}
}
B6d95bb:L6d95bb:{c.instructions+=2;NFSU2_TR(0x6d95bb);
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
B6d95c0:{NFSU2_TR(0x6d95c0);
if(r1(R+518)){{goto L6d95cb;}}
}
B6d95c2:L6d95c2:{c.instructions+=2;NFSU2_TR(0x6d95c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d95c3:{NFSU2_TR(0x6d95c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d95c8ull));
TAIL_STATIC(0x575630u,575);
}
B6d95c8:L6d95c8:{c.instructions+=1;NFSU2_TR(0x6d95c8);
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
B6d95cb:L6d95cb:{c.instructions+=3;NFSU2_TR(0x6d95cb);
__builtin_memmove((R+0),(R+24),4);
}
B6d95cd:{NFSU2_TR(0x6d95cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d95ce:{NFSU2_TR(0x6d95ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d95e0:L6d95e0:{c.instructions+=9;NFSU2_TR(0x6d95e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d95e1:{NFSU2_TR(0x6d95e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d95e2:{NFSU2_TR(0x6d95e2);
__builtin_memmove((R+24),(R+4),4);
}
B6d95e4:{NFSU2_TR(0x6d95e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d95e5:{NFSU2_TR(0x6d95e5);
u8 U[4];
w4(U+0,u32(0x7c08dcull));
s4(u32(r4(R+24)),r4(U+0));
}
B6d95eb:{NFSU2_TR(0x6d95eb);
__builtin_memmove((R+28),gp(0x8a79a4),4);
}
B6d95f1:{NFSU2_TR(0x6d95f1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d95f3:{NFSU2_TR(0x6d95f3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d95f5:{NFSU2_TR(0x6d95f5);
if(r1(R+518)){{goto L6d9607;}}
}
B6d95f7:L6d95f7:{c.instructions+=2;NFSU2_TR(0x6d95f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d95f8:{NFSU2_TR(0x6d95f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d95fdull));
TAIL_STATIC(0x6dadd0u,6da);
}
B6d95fd:L6d95fd:{c.instructions+=4;NFSU2_TR(0x6d95fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d9600:{NFSU2_TR(0x6d9600);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d9603:{NFSU2_TR(0x6d9603);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d9605:{NFSU2_TR(0x6d9605);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d95f7u);}goto L6d95f7;}}
}
B6d9607:L6d9607:{c.instructions+=3;NFSU2_TR(0x6d9607);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d960d:{NFSU2_TR(0x6d960d);
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
B6d960f:{NFSU2_TR(0x6d960f);
if(r1(R+518)){{goto L6d9617;}}
}
B6d9611:L6d9611:{c.instructions+=3;NFSU2_TR(0x6d9611);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d9613:{NFSU2_TR(0x6d9613);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9614:{NFSU2_TR(0x6d9614);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9617ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9617:L6d9617:{c.instructions+=3;NFSU2_TR(0x6d9617);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d961d:{NFSU2_TR(0x6d961d);
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
B6d961f:{NFSU2_TR(0x6d961f);
if(r1(R+518)){{goto L6d9627;}}
}
B6d9621:L6d9621:{c.instructions+=3;NFSU2_TR(0x6d9621);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d9623:{NFSU2_TR(0x6d9623);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9624:{NFSU2_TR(0x6d9624);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9627ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9627:L6d9627:{c.instructions+=1;NFSU2_TR(0x6d9627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d962cull));
TAIL_STATIC(0x6dce70u,6dc);
}
B6d962c:L6d962c:{c.instructions+=1;NFSU2_TR(0x6d962c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9631ull));
TAIL_STATIC(0x6dd010u,6dd);
}
B6d9631:L6d9631:{c.instructions+=3;NFSU2_TR(0x6d9631);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6d9636:{NFSU2_TR(0x6d9636);
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
B6d9638:{NFSU2_TR(0x6d9638);
if(r1(R+518)){{goto L6d9640;}}
}
B6d963a:L6d963a:{c.instructions+=3;NFSU2_TR(0x6d963a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d963c:{NFSU2_TR(0x6d963c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d963d:{NFSU2_TR(0x6d963d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9640ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9640:L6d9640:{c.instructions+=3;NFSU2_TR(0x6d9640);
u8 U[5];
__builtin_memmove((U+3),gp(0x8a79b9),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d9646:{NFSU2_TR(0x6d9646);
__builtin_memmove(gp(0x8a79a0),(R+12),4);
}
B6d964c:{NFSU2_TR(0x6d964c);
if(r1(R+518)){{goto L6d967d;}}
}
B6d964e:L6d964e:{c.instructions+=3;NFSU2_TR(0x6d964e);
__builtin_memmove((R+0),gp(0x8a730c),4);
}
B6d9653:{NFSU2_TR(0x6d9653);
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
B6d9655:{NFSU2_TR(0x6d9655);
if(r1(R+518)){{goto L6d9664;}}
}
B6d9657:L6d9657:{c.instructions+=2;NFSU2_TR(0x6d9657);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9658:{NFSU2_TR(0x6d9658);
u8 U[4];
__builtin_memmove((U+0),gp(0x783368),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d965eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d965e:L6d965e:{c.instructions+=1;NFSU2_TR(0x6d965e);
__builtin_memmove(gp(0x8a730c),(R+12),4);
}
B6d9664:L6d9664:{c.instructions+=5;NFSU2_TR(0x6d9664);
__builtin_memmove((R+8),gp(0x80c0cc),4);
}
B6d966a:{NFSU2_TR(0x6d966a);
__builtin_memmove((R+0),gp(0x80c0e0),4);
}
B6d966f:{NFSU2_TR(0x6d966f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9670:{NFSU2_TR(0x6d9670);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9671:{NFSU2_TR(0x6d9671);
u8 U[4];
__builtin_memmove((U+0),gp(0x783390),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9677ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d9677:L6d9677:{c.instructions+=1;NFSU2_TR(0x6d9677);
__builtin_memmove(gp(0x8a79b9),(R+12),1);
}
B6d967d:L6d967d:{c.instructions+=5;NFSU2_TR(0x6d967d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9683:{NFSU2_TR(0x6d9683);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9689:{NFSU2_TR(0x6d9689);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d968a:{NFSU2_TR(0x6d968a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d968b:{NFSU2_TR(0x6d968b);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9691ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d9691:L6d9691:{c.instructions+=9;NFSU2_TR(0x6d9691);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9697:{NFSU2_TR(0x6d9697);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x7c08d8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d969e:{NFSU2_TR(0x6d969e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x7c08d4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d96a5:{NFSU2_TR(0x6d96a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d96a8:{NFSU2_TR(0x6d96a8);
u8 U[4];
w4(U+0,u32(0x7c08acull));
s4(u32(r4(R+24)),r4(U+0));
}
B6d96ae:{NFSU2_TR(0x6d96ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d96b1:{NFSU2_TR(0x6d96b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d96b4:{NFSU2_TR(0x6d96b4);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6d96b6:{NFSU2_TR(0x6d96b6);
if(r1(R+518)){{goto L6d96ce;}}
}
B6d96b8:L6d96b8:{c.instructions+=5;NFSU2_TR(0x6d96b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d96bb:{NFSU2_TR(0x6d96bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d96be:{NFSU2_TR(0x6d96be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d96bf:{NFSU2_TR(0x6d96bf);
__builtin_memmove((R+4),(R+24),4);
}
B6d96c1:{NFSU2_TR(0x6d96c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d96c6ull));
TAIL_STATIC(0x6d82e0u,6d8);
}
B6d96c6:L6d96c6:{c.instructions+=3;NFSU2_TR(0x6d96c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d96c9:{NFSU2_TR(0x6d96c9);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B6d96cc:{NFSU2_TR(0x6d96cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d96b8u);}goto L6d96b8;}}
}
B6d96ce:L6d96ce:{c.instructions+=4;NFSU2_TR(0x6d96ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d96cf:{NFSU2_TR(0x6d96cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d96d0:{NFSU2_TR(0x6d96d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d96d1:{NFSU2_TR(0x6d96d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d96e0:L6d96e0:{c.instructions+=12;NFSU2_TR(0x6d96e0);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d96e5:{NFSU2_TR(0x6d96e5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d96e6:{NFSU2_TR(0x6d96e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d96e7:{NFSU2_TR(0x6d96e7);
__builtin_memmove((R+24),(R+4),4);
}
B6d96e9:{NFSU2_TR(0x6d96e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d96ec:{NFSU2_TR(0x6d96ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d96f2:{NFSU2_TR(0x6d96f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d96f4:{NFSU2_TR(0x6d96f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d96f5:{NFSU2_TR(0x6d96f5);
u8 U[4];
w4(U+0,u32(0x8a7318ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d96fa:{NFSU2_TR(0x6d96fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d96fb:{NFSU2_TR(0x6d96fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d96fc:{NFSU2_TR(0x6d96fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d96ffull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d96ff:L6d96ff:{c.instructions+=14;NFSU2_TR(0x6d96ff);
__builtin_memmove((R+4),gp(0x8a7324),4);
}
B6d9705:{NFSU2_TR(0x6d9705);
s4(0x8a7348,u32(0x1ull));
}
B6d970f:{NFSU2_TR(0x6d970f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9712:{NFSU2_TR(0x6d9712);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9715:{NFSU2_TR(0x6d9715);
__builtin_memmove((R+0),gp(0x8a7324),4);
}
B6d971a:{NFSU2_TR(0x6d971a);
__builtin_memmove(gp(0x8a7334),(R+0),4);
}
B6d971f:{NFSU2_TR(0x6d971f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9722:{NFSU2_TR(0x6d9722);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9725:{NFSU2_TR(0x6d9725);
__builtin_memmove((R+0),gp(0x8a7334),4);
}
B6d972a:{NFSU2_TR(0x6d972a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d972d:{NFSU2_TR(0x6d972d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d972e:{NFSU2_TR(0x6d972e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d9731:{NFSU2_TR(0x6d9731);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d9734:{NFSU2_TR(0x6d9734);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9739ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d9470u);}goto L6d9470;}
}
B6d9739:L6d9739:{c.instructions+=5;NFSU2_TR(0x6d9739);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6d973b:{NFSU2_TR(0x6d973b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+0))));
}
B6d973d:{NFSU2_TR(0x6d973d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d9740:{NFSU2_TR(0x6d9740);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d9742:{NFSU2_TR(0x6d9742);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d9763;}}
}
B6d9744:L6d9744:{c.instructions+=10;NFSU2_TR(0x6d9744);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d9747:{NFSU2_TR(0x6d9747);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9748:{NFSU2_TR(0x6d9748);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d974e:{NFSU2_TR(0x6d974e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d974f:{NFSU2_TR(0x6d974f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9750:{NFSU2_TR(0x6d9750);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9756:{NFSU2_TR(0x6d9756);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9757:{NFSU2_TR(0x6d9757);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9758:{NFSU2_TR(0x6d9758);
__builtin_memmove((R+4),(R+24),4);
}
B6d975a:{NFSU2_TR(0x6d975a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d975full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d90c0u);}goto L6d90c0;}
}
B6d975f:L6d975f:{c.instructions+=2;NFSU2_TR(0x6d975f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d9761:{NFSU2_TR(0x6d9761);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d9778;}}
}
B6d9763:L6d9763:{c.instructions+=3;NFSU2_TR(0x6d9763);
__builtin_memmove((R+4),gp(0x8a7334),4);
}
B6d9769:{NFSU2_TR(0x6d9769);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d976a:{NFSU2_TR(0x6d976a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d976full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d9470u);}goto L6d9470;}
}
B6d976f:L6d976f:{c.instructions+=3;NFSU2_TR(0x6d976f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9772:{NFSU2_TR(0x6d9772);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d9775:{NFSU2_TR(0x6d9775);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9778:L6d9778:{c.instructions+=3;NFSU2_TR(0x6d9778);
__builtin_memmove((R+0),gp(0x8a7334),4);
}
B6d977d:{NFSU2_TR(0x6d977d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d977e:{NFSU2_TR(0x6d977e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9783ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d9470u);}goto L6d9470;}
}
B6d9783:L6d9783:{c.instructions+=14;NFSU2_TR(0x6d9783);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9786:{NFSU2_TR(0x6d9786);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9789:{NFSU2_TR(0x6d9789);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d978c:{NFSU2_TR(0x6d978c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d978f:{NFSU2_TR(0x6d978f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d9792:{NFSU2_TR(0x6d9792);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d9793:{NFSU2_TR(0x6d9793);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9796:{NFSU2_TR(0x6d9796);
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
B6d9798:{NFSU2_TR(0x6d9798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d9799:{NFSU2_TR(0x6d9799);
__builtin_memmove(gp(0x8a7358),(R+0),4);
}
B6d979e:{NFSU2_TR(0x6d979e);
__builtin_memmove(gp(0x8a735c),(R+0),4);
}
B6d97a3:{NFSU2_TR(0x6d97a3);
w4(R+0,u32(0x1ull));
}
B6d97a8:{NFSU2_TR(0x6d97a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d97a9:{NFSU2_TR(0x6d97a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d97b0:L6d97b0:{c.instructions+=5;NFSU2_TR(0x6d97b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x144ull))));
}
B6d97b6:{NFSU2_TR(0x6d97b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d97b7:{NFSU2_TR(0x6d97b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d97b8:{NFSU2_TR(0x6d97b8);
__builtin_memmove((R+24),(R+4),4);
}
B6d97ba:{NFSU2_TR(0x6d97ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d97bfull));
TAIL_STATIC(0x6dc9c0u,6dc);
}
B6d97bf:L6d97bf:{c.instructions+=5;NFSU2_TR(0x6d97bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d97c2:{NFSU2_TR(0x6d97c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d97c8:{NFSU2_TR(0x6d97c8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d97ca:{NFSU2_TR(0x6d97ca);
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
B6d97cc:{NFSU2_TR(0x6d97cc);
if(r1(R+518)){{goto L6d97dd;}}
}
B6d97ce:L6d97ce:{c.instructions+=3;NFSU2_TR(0x6d97ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d97d0:{NFSU2_TR(0x6d97d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d97d1:{NFSU2_TR(0x6d97d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d97d4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d97d4:L6d97d4:{c.instructions+=2;NFSU2_TR(0x6d97d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d97d7:{NFSU2_TR(0x6d97d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d97dd:L6d97dd:{c.instructions+=4;NFSU2_TR(0x6d97dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d97e0:{NFSU2_TR(0x6d97e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d97e6:{NFSU2_TR(0x6d97e6);
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
B6d97e8:{NFSU2_TR(0x6d97e8);
if(r1(R+518)){{goto L6d97f9;}}
}
B6d97ea:L6d97ea:{c.instructions+=3;NFSU2_TR(0x6d97ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d97ec:{NFSU2_TR(0x6d97ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d97ed:{NFSU2_TR(0x6d97ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d97f0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d97f0:L6d97f0:{c.instructions+=2;NFSU2_TR(0x6d97f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d97f3:{NFSU2_TR(0x6d97f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d97f9:L6d97f9:{c.instructions+=1;NFSU2_TR(0x6d97f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d97feull));
TAIL_STATIC(0x6db170u,6db);
}
B6d97fe:L6d97fe:{c.instructions+=1;NFSU2_TR(0x6d97fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9803ull));
TAIL_STATIC(0x6dd100u,6dd);
}
B6d9803:L6d9803:{c.instructions+=1;NFSU2_TR(0x6d9803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9808ull));
TAIL_STATIC(0x4022c0u,402);
}
B6d9808:L6d9808:{c.instructions+=1;NFSU2_TR(0x6d9808);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d980dull));
TAIL_STATIC(0x6dcae0u,6dc);
}
B6d980d:L6d980d:{c.instructions+=1;NFSU2_TR(0x6d980d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9812ull));
TAIL_STATIC(0x6dcb80u,6dc);
}
B6d9812:L6d9812:{c.instructions+=7;NFSU2_TR(0x6d9812);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9815:{NFSU2_TR(0x6d9815);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d981b:{NFSU2_TR(0x6d981b);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a7348),4);
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
B6d9821:{NFSU2_TR(0x6d9821);
__builtin_memmove(gp(0x8a7354),(R+4),4);
}
B6d9827:{NFSU2_TR(0x6d9827);
__builtin_memmove((R+4),(R+24),4);
}
B6d9829:{NFSU2_TR(0x6d9829);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d982a:{NFSU2_TR(0x6d982a);
if(r1(R+518)){{goto L6d9833;}}
}
B6d982c:L6d982c:{c.instructions+=1;NFSU2_TR(0x6d982c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9831ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d96e0u);}goto L6d96e0;}
}
B6d9831:L6d9831:{c.instructions+=1;NFSU2_TR(0x6d9831);
{goto L6d9838;}
}
B6d9833:L6d9833:{c.instructions+=1;NFSU2_TR(0x6d9833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9838ull));
TAIL_STATIC(0x6d89f0u,6d8);
}
B6d9838:L6d9838:{c.instructions+=2;NFSU2_TR(0x6d9838);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a7348),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d983e:{NFSU2_TR(0x6d983e);
if(r1(R+518)){{goto L6d985a;}}
}
B6d9840:L6d9840:{c.instructions+=4;NFSU2_TR(0x6d9840);
__builtin_memmove((R+8),gp(0x8a7334),4);
}
B6d9846:{NFSU2_TR(0x6d9846);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9849:{NFSU2_TR(0x6d9849);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d984a:{NFSU2_TR(0x6d984a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d984full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d9470u);}goto L6d9470;}
}
B6d984f:L6d984f:{c.instructions+=4;NFSU2_TR(0x6d984f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9852:{NFSU2_TR(0x6d9852);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d9855:{NFSU2_TR(0x6d9855);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6d9857:{NFSU2_TR(0x6d9857);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d985a:L6d985a:{c.instructions+=5;NFSU2_TR(0x6d985a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d985d:{NFSU2_TR(0x6d985d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9860:{NFSU2_TR(0x6d9860);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6d9862:{NFSU2_TR(0x6d9862);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d9865:{NFSU2_TR(0x6d9865);
if(r1(R+518)){{goto L6d98af;}}
}
B6d9867:L6d9867:{c.instructions+=11;NFSU2_TR(0x6d9867);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d986a:{NFSU2_TR(0x6d986a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d986b:{NFSU2_TR(0x6d986b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d986e:{NFSU2_TR(0x6d986e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d986f:{NFSU2_TR(0x6d986f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9875:{NFSU2_TR(0x6d9875);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9876:{NFSU2_TR(0x6d9876);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d987c:{NFSU2_TR(0x6d987c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d987d:{NFSU2_TR(0x6d987d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d987e:{NFSU2_TR(0x6d987e);
__builtin_memmove((R+4),(R+24),4);
}
B6d9880:{NFSU2_TR(0x6d9880);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9885ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d90c0u);}goto L6d90c0;}
}
B6d9885:L6d9885:{c.instructions+=2;NFSU2_TR(0x6d9885);
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
B6d9887:{NFSU2_TR(0x6d9887);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d9897;}}
}
B6d9889:L6d9889:{c.instructions+=5;NFSU2_TR(0x6d9889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d988a:{NFSU2_TR(0x6d988a);
w4(R+0,u32(0x80004005ull));
}
B6d988f:{NFSU2_TR(0x6d988f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d9890:{NFSU2_TR(0x6d9890);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x144ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x144ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x144ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d9896:{NFSU2_TR(0x6d9896);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9897:L6d9897:{c.instructions+=5;NFSU2_TR(0x6d9897);
s4(0x8a734c,u32(0x1ull));
}
B6d98a1:{NFSU2_TR(0x6d98a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d98a4:{NFSU2_TR(0x6d98a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d98a7:{NFSU2_TR(0x6d98a7);
__builtin_memmove(gp(0x8a7350),(R+4),4);
}
B6d98ad:{NFSU2_TR(0x6d98ad);
{goto L6d98b5;}
}
B6d98af:L6d98af:{c.instructions+=1;NFSU2_TR(0x6d98af);
__builtin_memmove(gp(0x8a734c),(R+12),4);
}
B6d98b5:L6d98b5:{c.instructions+=6;NFSU2_TR(0x6d98b5);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6d98ba:{NFSU2_TR(0x6d98ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d98bc:{NFSU2_TR(0x6d98bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d98bd:{NFSU2_TR(0x6d98bd);
u8 U[4];
w4(U+0,u32(0x8a732cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d98c2:{NFSU2_TR(0x6d98c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d98c3:{NFSU2_TR(0x6d98c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d98c6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d98c6:L6d98c6:{c.instructions+=3;NFSU2_TR(0x6d98c6);
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
B6d98c8:{NFSU2_TR(0x6d98c8);
__builtin_memmove((R+28),gp(0x783360),4);
}
B6d98ce:{NFSU2_TR(0x6d98ce);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d99ca;}}
}
B6d98d4:L6d98d4:{c.instructions+=4;NFSU2_TR(0x6d98d4);
__builtin_memmove((R+0),gp(0x8a730c),4);
}
B6d98d9:{NFSU2_TR(0x6d98d9);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d98db:{NFSU2_TR(0x6d98db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d98dc:{NFSU2_TR(0x6d98dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d98deull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d98de:L6d98de:{c.instructions+=4;NFSU2_TR(0x6d98de);
__builtin_memmove((R+4),gp(0x8a730c),4);
}
B6d98e4:{NFSU2_TR(0x6d98e4);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d98e6:{NFSU2_TR(0x6d98e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d98e7:{NFSU2_TR(0x6d98e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d98e9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d98e9:L6d98e9:{c.instructions+=3;NFSU2_TR(0x6d98e9);
__builtin_memmove((R+8),gp(0x8a730c),4);
}
B6d98ef:{NFSU2_TR(0x6d98ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d98f0:{NFSU2_TR(0x6d98f0);
u8 U[4];
__builtin_memmove((U+0),gp(0x783394),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d98f6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d98f6:L6d98f6:{c.instructions+=2;NFSU2_TR(0x6d98f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d98f8:{NFSU2_TR(0x6d98f8);
u8 U[4];
__builtin_memmove((U+0),gp(0x783150),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d98feull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d98fe:L6d98fe:{c.instructions+=4;NFSU2_TR(0x6d98fe);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6d9903:{NFSU2_TR(0x6d9903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d9905:{NFSU2_TR(0x6d9905);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9906:{NFSU2_TR(0x6d9906);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9909ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9909:L6d9909:{c.instructions+=2;NFSU2_TR(0x6d9909);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x88760869ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d990e:{NFSU2_TR(0x6d990e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d9b73;}}
}
B6d9914:L6d9914:{c.instructions+=7;NFSU2_TR(0x6d9914);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9917:{NFSU2_TR(0x6d9917);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d991d:{NFSU2_TR(0x6d991d);
__builtin_memmove(gp(0x8a7354),(R+0),4);
}
B6d9922:{NFSU2_TR(0x6d9922);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a7348),4);
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
B6d9928:{NFSU2_TR(0x6d9928);
__builtin_memmove((R+4),(R+24),4);
}
B6d992a:{NFSU2_TR(0x6d992a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d992b:{NFSU2_TR(0x6d992b);
if(r1(R+518)){{goto L6d9934;}}
}
B6d992d:L6d992d:{c.instructions+=1;NFSU2_TR(0x6d992d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9932ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d96e0u);}goto L6d96e0;}
}
B6d9932:L6d9932:{c.instructions+=1;NFSU2_TR(0x6d9932);
{goto L6d9939;}
}
B6d9934:L6d9934:{c.instructions+=1;NFSU2_TR(0x6d9934);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9939ull));
TAIL_STATIC(0x6d89f0u,6d8);
}
B6d9939:L6d9939:{c.instructions+=2;NFSU2_TR(0x6d9939);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a7348),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d993f:{NFSU2_TR(0x6d993f);
if(r1(R+518)){{goto L6d9956;}}
}
B6d9941:L6d9941:{c.instructions+=3;NFSU2_TR(0x6d9941);
__builtin_memmove((R+4),gp(0x8a7334),4);
}
B6d9947:{NFSU2_TR(0x6d9947);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9948:{NFSU2_TR(0x6d9948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d994dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d9470u);}goto L6d9470;}
}
B6d994d:L6d994d:{c.instructions+=3;NFSU2_TR(0x6d994d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9950:{NFSU2_TR(0x6d9950);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d9953:{NFSU2_TR(0x6d9953);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9956:L6d9956:{c.instructions+=5;NFSU2_TR(0x6d9956);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9959:{NFSU2_TR(0x6d9959);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d995c:{NFSU2_TR(0x6d995c);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6d995e:{NFSU2_TR(0x6d995e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d9961:{NFSU2_TR(0x6d9961);
if(r1(R+518)){{goto L6d99ac;}}
}
B6d9963:L6d9963:{c.instructions+=11;NFSU2_TR(0x6d9963);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d9966:{NFSU2_TR(0x6d9966);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9967:{NFSU2_TR(0x6d9967);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d996a:{NFSU2_TR(0x6d996a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d996b:{NFSU2_TR(0x6d996b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9971:{NFSU2_TR(0x6d9971);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9972:{NFSU2_TR(0x6d9972);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9978:{NFSU2_TR(0x6d9978);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9979:{NFSU2_TR(0x6d9979);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d997a:{NFSU2_TR(0x6d997a);
__builtin_memmove((R+4),(R+24),4);
}
B6d997c:{NFSU2_TR(0x6d997c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9981ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d90c0u);}goto L6d90c0;}
}
B6d9981:L6d9981:{c.instructions+=2;NFSU2_TR(0x6d9981);
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
B6d9983:{NFSU2_TR(0x6d9983);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d9994;}}
}
B6d9985:L6d9985:{c.instructions+=6;NFSU2_TR(0x6d9985);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d9986:{NFSU2_TR(0x6d9986);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d9987:{NFSU2_TR(0x6d9987);
w4(R+0,u32(0x80004005ull));
}
B6d998c:{NFSU2_TR(0x6d998c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d998d:{NFSU2_TR(0x6d998d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x144ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x144ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x144ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d9993:{NFSU2_TR(0x6d9993);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9994:L6d9994:{c.instructions+=5;NFSU2_TR(0x6d9994);
s4(0x8a734c,u32(0x1ull));
}
B6d999e:{NFSU2_TR(0x6d999e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d99a1:{NFSU2_TR(0x6d99a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d99a4:{NFSU2_TR(0x6d99a4);
__builtin_memmove(gp(0x8a7350),(R+4),4);
}
B6d99aa:{NFSU2_TR(0x6d99aa);
{goto L6d99b2;}
}
B6d99ac:L6d99ac:{c.instructions+=1;NFSU2_TR(0x6d99ac);
__builtin_memmove(gp(0x8a734c),(R+12),4);
}
B6d99b2:L6d99b2:{c.instructions+=5;NFSU2_TR(0x6d99b2);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6d99b7:{NFSU2_TR(0x6d99b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d99b9:{NFSU2_TR(0x6d99b9);
u8 U[4];
w4(U+0,u32(0x8a732cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d99be:{NFSU2_TR(0x6d99be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d99bf:{NFSU2_TR(0x6d99bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d99c2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d99c2:L6d99c2:{c.instructions+=2;NFSU2_TR(0x6d99c2);
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
B6d99c4:{NFSU2_TR(0x6d99c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d9b73;}}
}
B6d99ca:L6d99ca:{c.instructions+=3;NFSU2_TR(0x6d99ca);
__builtin_memmove((R+0),gp(0x8a730c),4);
}
B6d99cf:{NFSU2_TR(0x6d99cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d99d0:{NFSU2_TR(0x6d99d0);
u8 U[4];
__builtin_memmove((U+0),gp(0x783358),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d99d6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d99d6:L6d99d6:{c.instructions+=4;NFSU2_TR(0x6d99d6);
__builtin_memmove((R+4),gp(0x8a730c),4);
}
B6d99dc:{NFSU2_TR(0x6d99dc);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d99de:{NFSU2_TR(0x6d99de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d99df:{NFSU2_TR(0x6d99df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d99e1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d99e1:L6d99e1:{c.instructions+=3;NFSU2_TR(0x6d99e1);
__builtin_memmove((R+8),gp(0x8a730c),4);
}
B6d99e7:{NFSU2_TR(0x6d99e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d99e8:{NFSU2_TR(0x6d99e8);
u8 U[4];
__builtin_memmove((U+0),gp(0x783350),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d99eeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d99ee:L6d99ee:{c.instructions+=2;NFSU2_TR(0x6d99ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d99ef:{NFSU2_TR(0x6d99ef);
u8 U[4];
__builtin_memmove((U+0),gp(0x783354),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d99f5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d99f5:L6d99f5:{c.instructions+=4;NFSU2_TR(0x6d99f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d99f8:{NFSU2_TR(0x6d99f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d99fe:{NFSU2_TR(0x6d99fe);
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
B6d9a01:{NFSU2_TR(0x6d9a01);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6d9a3b;}}
}
B6d9a03:L6d9a03:{c.instructions+=1;NFSU2_TR(0x6d9a03);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6d9b80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9a0a:L6d9a0a:{c.instructions+=5;NFSU2_TR(0x6d9a0a);
__builtin_memmove((R+8),gp(0x8a79a0),4);
}
B6d9a10:{NFSU2_TR(0x6d9a10);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6d9a14:{NFSU2_TR(0x6d9a14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9a15:{NFSU2_TR(0x6d9a15);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9a16:{NFSU2_TR(0x6d9a16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9a1bull));
TAIL_STATIC(0x6f43d0u,6f4);
}
B6d9a1b:L6d9a1b:{c.instructions+=2;NFSU2_TR(0x6d9a1b);
__builtin_memmove(gp(0x8a79b4),(R+0),4);
}
B6d9a20:{NFSU2_TR(0x6d9a20);
{goto L6d9a38;}
}
B6d9a22:L6d9a22:{c.instructions+=5;NFSU2_TR(0x6d9a22);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6d9a28:{NFSU2_TR(0x6d9a28);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6d9a2c:{NFSU2_TR(0x6d9a2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9a2d:{NFSU2_TR(0x6d9a2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9a2e:{NFSU2_TR(0x6d9a2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9a33ull));
TAIL_STATIC(0x6f43d0u,6f4);
}
B6d9a33:L6d9a33:{c.instructions+=1;NFSU2_TR(0x6d9a33);
__builtin_memmove(gp(0x8a79b0),(R+0),4);
}
B6d9a38:L6d9a38:{c.instructions+=1;NFSU2_TR(0x6d9a38);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d9a3b:L6d9a3b:{c.instructions+=2;NFSU2_TR(0x6d9a3b);
__builtin_memmove((R+4),(R+24),4);
}
B6d9a3d:{NFSU2_TR(0x6d9a3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9a42ull));
TAIL_STATIC(0x6d8f90u,6d8);
}
B6d9a42:L6d9a42:{c.instructions+=1;NFSU2_TR(0x6d9a42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9a47ull));
TAIL_STATIC(0x6da260u,6da);
}
B6d9a47:L6d9a47:{c.instructions+=3;NFSU2_TR(0x6d9a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9a4d:{NFSU2_TR(0x6d9a4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d9a52:{NFSU2_TR(0x6d9a52);
if(r1(R+518)){{goto L6d9a62;}}
}
B6d9a54:L6d9a54:{c.instructions+=3;NFSU2_TR(0x6d9a54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d9a59:{NFSU2_TR(0x6d9a59);
s1(0x8a79ad,u8(0x1ull));
}
B6d9a60:{NFSU2_TR(0x6d9a60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d9a68;}}
}
B6d9a62:L6d9a62:{c.instructions+=1;NFSU2_TR(0x6d9a62);
__builtin_memmove(gp(0x8a79ad),(R+12),1);
}
B6d9a68:L6d9a68:{c.instructions+=1;NFSU2_TR(0x6d9a68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9a6dull));
TAIL_STATIC(0x6dca30u,6dc);
}
B6d9a6d:L6d9a6d:{c.instructions+=9;NFSU2_TR(0x6d9a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9a70:{NFSU2_TR(0x6d9a70);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6d9a75:{NFSU2_TR(0x6d9a75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d9a77:{NFSU2_TR(0x6d9a77);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xf4ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xf4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d9a7d:{NFSU2_TR(0x6d9a7d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9a7e:{NFSU2_TR(0x6d9a7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9a7f:{NFSU2_TR(0x6d9a7f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9a80:{NFSU2_TR(0x6d9a80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9a81:{NFSU2_TR(0x6d9a81);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9a84ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9a84:L6d9a84:{c.instructions+=2;NFSU2_TR(0x6d9a84);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a734c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d9a8a:{NFSU2_TR(0x6d9a8a);
if(r1(R+518)){{goto L6d9aa4;}}
}
B6d9a8c:L6d9a8c:{c.instructions+=7;NFSU2_TR(0x6d9a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9a8f:{NFSU2_TR(0x6d9a8f);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6d9a94:{NFSU2_TR(0x6d9a94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d9a96:{NFSU2_TR(0x6d9a96);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xf8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xf8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d9a9c:{NFSU2_TR(0x6d9a9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9a9d:{NFSU2_TR(0x6d9a9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9a9e:{NFSU2_TR(0x6d9a9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9aa4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9aa4:L6d9aa4:{c.instructions+=1;NFSU2_TR(0x6d9aa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9aa9ull));
TAIL_STATIC(0x6dcb40u,6dc);
}
B6d9aa9:L6d9aa9:{c.instructions+=1;NFSU2_TR(0x6d9aa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9aaeull));
TAIL_STATIC(0x6dcbc0u,6dc);
}
B6d9aae:L6d9aae:{c.instructions+=1;NFSU2_TR(0x6d9aae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9ab3ull));
TAIL_STATIC(0x6db1d0u,6db);
}
B6d9ab3:L6d9ab3:{c.instructions+=1;NFSU2_TR(0x6d9ab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9ab8ull));
TAIL_STATIC(0x6dd140u,6dd);
}
B6d9ab8:L6d9ab8:{c.instructions+=1;NFSU2_TR(0x6d9ab8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9abdull));
TAIL_STATIC(0x6dd1c0u,6dd);
}
B6d9abd:L6d9abd:{c.instructions+=7;NFSU2_TR(0x6d9abd);
w4(R+4,u32(m1(0x8a7bc8)));
}
B6d9ac4:{NFSU2_TR(0x6d9ac4);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6d9ac9:{NFSU2_TR(0x6d9ac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d9acb:{NFSU2_TR(0x6d9acb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9acc:{NFSU2_TR(0x6d9acc);
u8 U[4];
w4(U+0,u32(0x89ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9ad1:{NFSU2_TR(0x6d9ad1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9ad2:{NFSU2_TR(0x6d9ad2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9ad8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9ad8:L6d9ad8:{c.instructions+=1;NFSU2_TR(0x6d9ad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9addull));
TAIL_STATIC(0x6da260u,6da);
}
B6d9add:L6d9add:{c.instructions+=4;NFSU2_TR(0x6d9add);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d9ae3:{NFSU2_TR(0x6d9ae3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d9ae5:{NFSU2_TR(0x6d9ae5);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6d9ae7:{NFSU2_TR(0x6d9ae7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d9b1d;}}
}
B6d9ae9:L6d9ae9:{c.instructions+=1;NFSU2_TR(0x6d9ae9);
__builtin_memmove((R+16),(R+16),4);
}
B6d9af0:L6d9af0:{c.instructions+=2;NFSU2_TR(0x6d9af0);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6d9af3:{NFSU2_TR(0x6d9af3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d9b1d;}}
}
B6d9af5:L6d9af5:{c.instructions+=3;NFSU2_TR(0x6d9af5);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6d9af8:{NFSU2_TR(0x6d9af8);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6d9afd:{NFSU2_TR(0x6d9afd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d9b0d;}}
}
B6d9aff:L6d9aff:{c.instructions+=5;NFSU2_TR(0x6d9aff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d9b01:{NFSU2_TR(0x6d9b01);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9b03:{NFSU2_TR(0x6d9b03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9b04:{NFSU2_TR(0x6d9b04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9b05:{NFSU2_TR(0x6d9b05);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9b0bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9b0b:L6d9b0b:{c.instructions+=1;NFSU2_TR(0x6d9b0b);
{goto L6d9b18;}
}
B6d9b0d:L6d9b0d:{c.instructions+=5;NFSU2_TR(0x6d9b0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d9b0f:{NFSU2_TR(0x6d9b0f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9b10:{NFSU2_TR(0x6d9b10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9b11:{NFSU2_TR(0x6d9b11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9b12:{NFSU2_TR(0x6d9b12);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9b18ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9b18:L6d9b18:{c.instructions+=3;NFSU2_TR(0x6d9b18);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d9b19:{NFSU2_TR(0x6d9b19);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d9b1b:{NFSU2_TR(0x6d9b1b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d9af0u);}goto L6d9af0;}}
}
B6d9b1d:L6d9b1d:{c.instructions+=7;NFSU2_TR(0x6d9b1d);
__builtin_memmove((R+4),gp(0x8a7bcc),4);
}
B6d9b23:{NFSU2_TR(0x6d9b23);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6d9b28:{NFSU2_TR(0x6d9b28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d9b2a:{NFSU2_TR(0x6d9b2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9b2b:{NFSU2_TR(0x6d9b2b);
u8 U[4];
w4(U+0,u32(0x8bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9b30:{NFSU2_TR(0x6d9b30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9b31:{NFSU2_TR(0x6d9b31);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9b37ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9b37:L6d9b37:{c.instructions+=4;NFSU2_TR(0x6d9b37);
__builtin_memmove((R+8),gp(0x80c090),4);
}
B6d9b3d:{NFSU2_TR(0x6d9b3d);
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
B6d9b3f:{NFSU2_TR(0x6d9b3f);
w4(R+4,u32(0x11ull));
}
B6d9b44:{NFSU2_TR(0x6d9b44);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B6d9b48:L6d9b48:{c.instructions+=1;NFSU2_TR(0x6d9b48);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d9b4a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d9b48u);}goto L6d9b48;}
}
B6d9b4a:L6d9b4a:{c.instructions+=12;NFSU2_TR(0x6d9b4a);
__builtin_memmove((R+0),(R+8),4);
}
B6d9b4c:{NFSU2_TR(0x6d9b4c);
__builtin_memmove((R+4),(R+8),4);
}
B6d9b4e:{NFSU2_TR(0x6d9b4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9b52:{NFSU2_TR(0x6d9b52);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9b56:{NFSU2_TR(0x6d9b56);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9b5a:{NFSU2_TR(0x6d9b5a);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6d9b5f:{NFSU2_TR(0x6d9b5f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6d9b63:{NFSU2_TR(0x6d9b63);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9b64:{NFSU2_TR(0x6d9b64);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9b68:{NFSU2_TR(0x6d9b68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d9b6a:{NFSU2_TR(0x6d9b6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9b6b:{NFSU2_TR(0x6d9b6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9b71ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9b71:L6d9b71:{c.instructions+=1;NFSU2_TR(0x6d9b71);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d9b73:L6d9b73:{c.instructions+=5;NFSU2_TR(0x6d9b73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d9b74:{NFSU2_TR(0x6d9b74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d9b75:{NFSU2_TR(0x6d9b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d9b76:{NFSU2_TR(0x6d9b76);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x144ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x144ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x144ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d9b7c:{NFSU2_TR(0x6d9b7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9b90:L6d9b90:{c.instructions+=6;NFSU2_TR(0x6d9b90);
__builtin_memmove((R+0),gp(0x8a730c),4);
}
B6d9b95:{NFSU2_TR(0x6d9b95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B6d9b9b:{NFSU2_TR(0x6d9b9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d9b9d:{NFSU2_TR(0x6d9b9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9b9e:{NFSU2_TR(0x6d9b9e);
__builtin_memmove((R+24),(R+4),4);
}
B6d9ba0:{NFSU2_TR(0x6d9ba0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d9bb1;}}
}
B6d9ba2:L6d9ba2:{c.instructions+=4;NFSU2_TR(0x6d9ba2);
w4(R+0,u32(0x80004005ull));
}
B6d9ba7:{NFSU2_TR(0x6d9ba7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d9ba8:{NFSU2_TR(0x6d9ba8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d9bae:{NFSU2_TR(0x6d9bae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9bb1:L6d9bb1:{c.instructions+=9;NFSU2_TR(0x6d9bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9bb4:{NFSU2_TR(0x6d9bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9bba:{NFSU2_TR(0x6d9bba);
__builtin_memmove(gp(0x8a7354),(R+4),4);
}
B6d9bc0:{NFSU2_TR(0x6d9bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9bc3:{NFSU2_TR(0x6d9bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9bc6:{NFSU2_TR(0x6d9bc6);
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
B6d9bc8:{NFSU2_TR(0x6d9bc8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9bc9:{NFSU2_TR(0x6d9bc9);
w4(R+28,u32(0x1ull));
}
B6d9bce:{NFSU2_TR(0x6d9bce);
if(r1(R+518)){{goto L6d9c08;}}
}
B6d9bd0:L6d9bd0:{c.instructions+=13;NFSU2_TR(0x6d9bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9bd6:{NFSU2_TR(0x6d9bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9bd9:{NFSU2_TR(0x6d9bd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d9bdc:{NFSU2_TR(0x6d9bdc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9bdd:{NFSU2_TR(0x6d9bdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d9be0:{NFSU2_TR(0x6d9be0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9be1:{NFSU2_TR(0x6d9be1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d9be4:{NFSU2_TR(0x6d9be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9bea:{NFSU2_TR(0x6d9bea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9beb:{NFSU2_TR(0x6d9beb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9bec:{NFSU2_TR(0x6d9bec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9bed:{NFSU2_TR(0x6d9bed);
__builtin_memmove((R+4),(R+24),4);
}
B6d9bef:{NFSU2_TR(0x6d9bef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9bf4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d90c0u);}goto L6d90c0;}
}
B6d9bf4:L6d9bf4:{c.instructions+=5;NFSU2_TR(0x6d9bf4);
__builtin_memmove(gp(0x8a734c),(R+28),4);
}
B6d9bfa:{NFSU2_TR(0x6d9bfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9bfd:{NFSU2_TR(0x6d9bfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9c00:{NFSU2_TR(0x6d9c00);
__builtin_memmove(gp(0x8a7350),(R+8),4);
}
B6d9c06:{NFSU2_TR(0x6d9c06);
{goto L6d9c12;}
}
B6d9c08:L6d9c08:{c.instructions+=1;NFSU2_TR(0x6d9c08);
s4(0x8a734c,u32(0x0ull));
}
B6d9c12:L6d9c12:{c.instructions+=15;NFSU2_TR(0x6d9c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9c15:{NFSU2_TR(0x6d9c15);
u8 U[4];
w4(U+0,u32(0x8a79a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9c1a:{NFSU2_TR(0x6d9c1a);
u8 U[4];
w4(U+0,u32(0x8a732cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9c1f:{NFSU2_TR(0x6d9c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9c25:{NFSU2_TR(0x6d9c25);
__builtin_memmove((R+8),gp(0x8a730c),4);
}
B6d9c2b:{NFSU2_TR(0x6d9c2b);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d9c30:{NFSU2_TR(0x6d9c30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d9c32:{NFSU2_TR(0x6d9c32);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9c37:{NFSU2_TR(0x6d9c37);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9c38:{NFSU2_TR(0x6d9c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9c3b:{NFSU2_TR(0x6d9c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9c41:{NFSU2_TR(0x6d9c41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9c42:{NFSU2_TR(0x6d9c42);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9c43:{NFSU2_TR(0x6d9c43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9c44:{NFSU2_TR(0x6d9c44);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9c47ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9c47:L6d9c47:{c.instructions+=3;NFSU2_TR(0x6d9c47);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d9c49:{NFSU2_TR(0x6d9c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9c4c:{NFSU2_TR(0x6d9c4c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d9cd3;}}
}
B6d9c52:L6d9c52:{c.instructions+=4;NFSU2_TR(0x6d9c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9c55:{NFSU2_TR(0x6d9c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9c58:{NFSU2_TR(0x6d9c58);
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
B6d9c5a:{NFSU2_TR(0x6d9c5a);
if(r1(R+518)){{goto L6d9c94;}}
}
B6d9c5c:L6d9c5c:{c.instructions+=13;NFSU2_TR(0x6d9c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9c62:{NFSU2_TR(0x6d9c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9c65:{NFSU2_TR(0x6d9c65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d9c68:{NFSU2_TR(0x6d9c68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9c69:{NFSU2_TR(0x6d9c69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d9c6c:{NFSU2_TR(0x6d9c6c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9c6d:{NFSU2_TR(0x6d9c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9c73:{NFSU2_TR(0x6d9c73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d9c76:{NFSU2_TR(0x6d9c76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9c77:{NFSU2_TR(0x6d9c77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9c78:{NFSU2_TR(0x6d9c78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9c79:{NFSU2_TR(0x6d9c79);
__builtin_memmove((R+4),(R+24),4);
}
B6d9c7b:{NFSU2_TR(0x6d9c7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9c80ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d90c0u);}goto L6d90c0;}
}
B6d9c80:L6d9c80:{c.instructions+=5;NFSU2_TR(0x6d9c80);
__builtin_memmove(gp(0x8a734c),(R+28),4);
}
B6d9c86:{NFSU2_TR(0x6d9c86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9c89:{NFSU2_TR(0x6d9c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9c8c:{NFSU2_TR(0x6d9c8c);
__builtin_memmove(gp(0x8a7350),(R+4),4);
}
B6d9c92:{NFSU2_TR(0x6d9c92);
{goto L6d9c9e;}
}
B6d9c94:L6d9c94:{c.instructions+=1;NFSU2_TR(0x6d9c94);
s4(0x8a734c,u32(0x0ull));
}
B6d9c9e:L6d9c9e:{c.instructions+=15;NFSU2_TR(0x6d9c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9ca1:{NFSU2_TR(0x6d9ca1);
u8 U[4];
w4(U+0,u32(0x8a79a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9ca6:{NFSU2_TR(0x6d9ca6);
u8 U[4];
w4(U+0,u32(0x8a732cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9cab:{NFSU2_TR(0x6d9cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9cb1:{NFSU2_TR(0x6d9cb1);
__builtin_memmove((R+8),gp(0x8a730c),4);
}
B6d9cb7:{NFSU2_TR(0x6d9cb7);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d9cbc:{NFSU2_TR(0x6d9cbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d9cbe:{NFSU2_TR(0x6d9cbe);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9cc0:{NFSU2_TR(0x6d9cc0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9cc1:{NFSU2_TR(0x6d9cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9cc4:{NFSU2_TR(0x6d9cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9cca:{NFSU2_TR(0x6d9cca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9ccb:{NFSU2_TR(0x6d9ccb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9ccc:{NFSU2_TR(0x6d9ccc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9ccd:{NFSU2_TR(0x6d9ccd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9cd0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9cd0:L6d9cd0:{c.instructions+=1;NFSU2_TR(0x6d9cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9cd3:L6d9cd3:{c.instructions+=4;NFSU2_TR(0x6d9cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9cd6:{NFSU2_TR(0x6d9cd6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d9cd8:{NFSU2_TR(0x6d9cd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d9cd9:{NFSU2_TR(0x6d9cd9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d9ce7;}}
}
B6d9cdb:L6d9cdb:{c.instructions+=4;NFSU2_TR(0x6d9cdb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d9cdd:{NFSU2_TR(0x6d9cdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d9cde:{NFSU2_TR(0x6d9cde);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d9ce4:{NFSU2_TR(0x6d9ce4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9ce7:L6d9ce7:{c.instructions+=9;NFSU2_TR(0x6d9ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9cea:{NFSU2_TR(0x6d9cea);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6d9cef:{NFSU2_TR(0x6d9cef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d9cf1:{NFSU2_TR(0x6d9cf1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0xf4ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0xf4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xf4ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d9cf7:{NFSU2_TR(0x6d9cf7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9cf8:{NFSU2_TR(0x6d9cf8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9cfa:{NFSU2_TR(0x6d9cfa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9cfc:{NFSU2_TR(0x6d9cfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9cfd:{NFSU2_TR(0x6d9cfd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9d00ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9d00:L6d9d00:{c.instructions+=3;NFSU2_TR(0x6d9d00);
__builtin_memmove((R+0),gp(0x8a734c),4);
}
B6d9d05:{NFSU2_TR(0x6d9d05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d9d07:{NFSU2_TR(0x6d9d07);
if(r1(R+518)){{goto L6d9d21;}}
}
B6d9d09:L6d9d09:{c.instructions+=7;NFSU2_TR(0x6d9d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9d0c:{NFSU2_TR(0x6d9d0c);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6d9d11:{NFSU2_TR(0x6d9d11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d9d13:{NFSU2_TR(0x6d9d13);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0xf8ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0xf8ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d9d19:{NFSU2_TR(0x6d9d19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9d1a:{NFSU2_TR(0x6d9d1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9d1b:{NFSU2_TR(0x6d9d1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9d21ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9d21:L6d9d21:{c.instructions+=4;NFSU2_TR(0x6d9d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9d24:{NFSU2_TR(0x6d9d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9d27:{NFSU2_TR(0x6d9d27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9d28:{NFSU2_TR(0x6d9d28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9d2dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d9470u);}goto L6d9470;}
}
B6d9d2d:L6d9d2d:{c.instructions+=9;NFSU2_TR(0x6d9d2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9d30:{NFSU2_TR(0x6d9d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9d33:{NFSU2_TR(0x6d9d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9d36:{NFSU2_TR(0x6d9d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9d39:{NFSU2_TR(0x6d9d39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d9d3c:{NFSU2_TR(0x6d9d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9d42:{NFSU2_TR(0x6d9d42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d9d45:{NFSU2_TR(0x6d9d45);
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
B6d9d48:{NFSU2_TR(0x6d9d48);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6d9d81;}}
}
B6d9d4a:L6d9d4a:{c.instructions+=1;NFSU2_TR(0x6d9d4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6d9da8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d9d51:L6d9d51:{c.instructions+=5;NFSU2_TR(0x6d9d51);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6d9d57:{NFSU2_TR(0x6d9d57);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6d9d5b:{NFSU2_TR(0x6d9d5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9d5c:{NFSU2_TR(0x6d9d5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9d5d:{NFSU2_TR(0x6d9d5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9d62ull));
TAIL_STATIC(0x6f43d0u,6f4);
}
B6d9d62:L6d9d62:{c.instructions+=2;NFSU2_TR(0x6d9d62);
__builtin_memmove(gp(0x8a79b4),(R+0),4);
}
B6d9d67:{NFSU2_TR(0x6d9d67);
{goto L6d9d7e;}
}
B6d9d69:L6d9d69:{c.instructions+=5;NFSU2_TR(0x6d9d69);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6d9d6e:{NFSU2_TR(0x6d9d6e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6d9d72:{NFSU2_TR(0x6d9d72);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9d73:{NFSU2_TR(0x6d9d73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9d74:{NFSU2_TR(0x6d9d74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9d79ull));
TAIL_STATIC(0x6f43d0u,6f4);
}
B6d9d79:L6d9d79:{c.instructions+=1;NFSU2_TR(0x6d9d79);
__builtin_memmove(gp(0x8a79b0),(R+0),4);
}
B6d9d7e:L6d9d7e:{c.instructions+=1;NFSU2_TR(0x6d9d7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d9d81:L6d9d81:{c.instructions+=3;NFSU2_TR(0x6d9d81);
u8 U[5];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6d9d88:{NFSU2_TR(0x6d9d88);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d9d8a:{NFSU2_TR(0x6d9d8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d9d9a;}}
}
B6d9d8c:L6d9d8c:{c.instructions+=2;NFSU2_TR(0x6d9d8c);
__builtin_memmove((R+4),(R+24),4);
}
B6d9d8e:{NFSU2_TR(0x6d9d8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9d93ull));
TAIL_STATIC(0x6d8f90u,6d8);
}
B6d9d93:L6d9d93:{c.instructions+=2;NFSU2_TR(0x6d9d93);
__builtin_memmove((R+4),(R+24),4);
}
B6d9d95:{NFSU2_TR(0x6d9d95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9d9aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d9010u);}goto L6d9010;}
}
B6d9d9a:L6d9d9a:{c.instructions+=4;NFSU2_TR(0x6d9d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9d9d:{NFSU2_TR(0x6d9d9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d9d9e:{NFSU2_TR(0x6d9d9e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d9da4:{NFSU2_TR(0x6d9da4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9dc0:L6d9dc0:{c.instructions+=5;NFSU2_TR(0x6d9dc0);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B6d9dc5:{NFSU2_TR(0x6d9dc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9dc6:{NFSU2_TR(0x6d9dc6);
__builtin_memmove((R+24),(R+4),4);
}
B6d9dc8:{NFSU2_TR(0x6d9dc8);
u8 U[4];
w4(U+0,u32(0x7c08d4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6d9dce:{NFSU2_TR(0x6d9dce);
if(r1(R+518)){{goto L6d9dd9;}}
}
B6d9dd0:L6d9dd0:{c.instructions+=2;NFSU2_TR(0x6d9dd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9dd1:{NFSU2_TR(0x6d9dd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9dd6ull));
TAIL_STATIC(0x575630u,575);
}
B6d9dd6:L6d9dd6:{c.instructions+=1;NFSU2_TR(0x6d9dd6);
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
B6d9dd9:L6d9dd9:{c.instructions+=3;NFSU2_TR(0x6d9dd9);
__builtin_memmove((R+0),(R+24),4);
}
B6d9ddb:{NFSU2_TR(0x6d9ddb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d9ddc:{NFSU2_TR(0x6d9ddc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9de0:L6d9de0:{c.instructions+=5;NFSU2_TR(0x6d9de0);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B6d9de5:{NFSU2_TR(0x6d9de5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9de6:{NFSU2_TR(0x6d9de6);
__builtin_memmove((R+24),(R+4),4);
}
B6d9de8:{NFSU2_TR(0x6d9de8);
u8 U[4];
w4(U+0,u32(0x7c08d8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6d9dee:{NFSU2_TR(0x6d9dee);
if(r1(R+518)){{goto L6d9df9;}}
}
B6d9df0:L6d9df0:{c.instructions+=2;NFSU2_TR(0x6d9df0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9df1:{NFSU2_TR(0x6d9df1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9df6ull));
TAIL_STATIC(0x575630u,575);
}
B6d9df6:L6d9df6:{c.instructions+=1;NFSU2_TR(0x6d9df6);
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
B6d9df9:L6d9df9:{c.instructions+=3;NFSU2_TR(0x6d9df9);
__builtin_memmove((R+0),(R+24),4);
}
B6d9dfb:{NFSU2_TR(0x6d9dfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d9dfc:{NFSU2_TR(0x6d9dfc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9e00:L6d9e00:{c.instructions+=72;NFSU2_TR(0x6d9e00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9e01:{NFSU2_TR(0x6d9e01);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d9e03:{NFSU2_TR(0x6d9e03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9e04:{NFSU2_TR(0x6d9e04);
__builtin_memmove((R+24),(R+4),4);
}
B6d9e06:{NFSU2_TR(0x6d9e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e09:{NFSU2_TR(0x6d9e09);
u8 U[4];
w4(U+0,u32(0x7c08dcull));
s4(u32(r4(R+24)),r4(U+0));
}
B6d9e0f:{NFSU2_TR(0x6d9e0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d9e12:{NFSU2_TR(0x6d9e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e15:{NFSU2_TR(0x6d9e15);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d9e18:{NFSU2_TR(0x6d9e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e1b:{NFSU2_TR(0x6d9e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e1e:{NFSU2_TR(0x6d9e1e);
u8 U[4];
w4(U+0,u32(0x7c08d4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B6d9e24:{NFSU2_TR(0x6d9e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e27:{NFSU2_TR(0x6d9e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e2a:{NFSU2_TR(0x6d9e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e2d:{NFSU2_TR(0x6d9e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e30:{NFSU2_TR(0x6d9e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e33:{NFSU2_TR(0x6d9e33);
u8 U[4];
w4(U+0,u32(0x7c08d8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6d9e39:{NFSU2_TR(0x6d9e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e3c:{NFSU2_TR(0x6d9e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e43:{NFSU2_TR(0x6d9e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e49:{NFSU2_TR(0x6d9e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
w4(U+4,u32(0x100ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e53:{NFSU2_TR(0x6d9e53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e59:{NFSU2_TR(0x6d9e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e5f:{NFSU2_TR(0x6d9e5f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9e63:{NFSU2_TR(0x6d9e63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9e64:{NFSU2_TR(0x6d9e64);
w4(R+28,u32(0x1ull));
}
B6d9e69:{NFSU2_TR(0x6d9e69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e6f:{NFSU2_TR(0x6d9e6f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d9e72:{NFSU2_TR(0x6d9e72);
w4(R+4,u32(0x3f800000ull));
}
B6d9e77:{NFSU2_TR(0x6d9e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e7d:{NFSU2_TR(0x6d9e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e83:{NFSU2_TR(0x6d9e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e86:{NFSU2_TR(0x6d9e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e89:{NFSU2_TR(0x6d9e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e8c:{NFSU2_TR(0x6d9e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e8f:{NFSU2_TR(0x6d9e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e92:{NFSU2_TR(0x6d9e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e95:{NFSU2_TR(0x6d9e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e98:{NFSU2_TR(0x6d9e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e9b:{NFSU2_TR(0x6d9e9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9e9e:{NFSU2_TR(0x6d9e9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6d9ea2:{NFSU2_TR(0x6d9ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d9ea9:{NFSU2_TR(0x6d9ea9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6d9eac:{NFSU2_TR(0x6d9eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9eaf:{NFSU2_TR(0x6d9eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9eb2:{NFSU2_TR(0x6d9eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9eb5:{NFSU2_TR(0x6d9eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9ebb:{NFSU2_TR(0x6d9ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d9ec5:{NFSU2_TR(0x6d9ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9ecb:{NFSU2_TR(0x6d9ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9ed1:{NFSU2_TR(0x6d9ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9ed7:{NFSU2_TR(0x6d9ed7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6d9edd:{NFSU2_TR(0x6d9edd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x99ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6d9ee4:{NFSU2_TR(0x6d9ee4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9aull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6d9eea:{NFSU2_TR(0x6d9eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9ef0:{NFSU2_TR(0x6d9ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9ef6:{NFSU2_TR(0x6d9ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9efc:{NFSU2_TR(0x6d9efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f02:{NFSU2_TR(0x6d9f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9f08:{NFSU2_TR(0x6d9f08);
u8 U[4];
w4(U+0,u32(0x7c08f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9f0d:{NFSU2_TR(0x6d9f0d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9f0e:{NFSU2_TR(0x6d9f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f14:{NFSU2_TR(0x6d9f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f1a:{NFSU2_TR(0x6d9f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f20:{NFSU2_TR(0x6d9f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f26:{NFSU2_TR(0x6d9f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f29:{NFSU2_TR(0x6d9f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f2c:{NFSU2_TR(0x6d9f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f2f:{NFSU2_TR(0x6d9f2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6d9f36:{NFSU2_TR(0x6d9f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f3c:{NFSU2_TR(0x6d9f3c);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9f42ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d9f42:L6d9f42:{c.instructions+=18;NFSU2_TR(0x6d9f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f48:{NFSU2_TR(0x6d9f48);
__builtin_memmove((R+8),gp(0x7c08ec),4);
}
B6d9f4e:{NFSU2_TR(0x6d9f4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6d9f50:{NFSU2_TR(0x6d9f50);
__builtin_memmove((R+4),gp(0x7c08f0),4);
}
B6d9f56:{NFSU2_TR(0x6d9f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f59:{NFSU2_TR(0x6d9f59);
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
B6d9f5c:{NFSU2_TR(0x6d9f5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6d9f62:{NFSU2_TR(0x6d9f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f68:{NFSU2_TR(0x6d9f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f6e:{NFSU2_TR(0x6d9f6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d9f6f:{NFSU2_TR(0x6d9f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f75:{NFSU2_TR(0x6d9f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x6d8800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f7f:{NFSU2_TR(0x6d9f7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
w4(U+4,u32(0x4022c0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f89:{NFSU2_TR(0x6d9f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
w4(U+4,u32(0x6d8810ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d9f93:{NFSU2_TR(0x6d9f93);
__builtin_memmove((R+0),(R+24),4);
}
B6d9f95:{NFSU2_TR(0x6d9f95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d9f96:{NFSU2_TR(0x6d9f96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d9f97:{NFSU2_TR(0x6d9f97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9fa0:L6d9fa0:{c.instructions+=3;NFSU2_TR(0x6d9fa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9fa1:{NFSU2_TR(0x6d9fa1);
__builtin_memmove((R+24),(R+4),4);
}
B6d9fa3:{NFSU2_TR(0x6d9fa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9fa8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d95e0u);}goto L6d95e0;}
}
B6d9fa8:L6d9fa8:{c.instructions+=2;NFSU2_TR(0x6d9fa8);
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
B6d9fad:{NFSU2_TR(0x6d9fad);
if(r1(R+518)){{goto L6d9fbe;}}
}
B6d9faf:L6d9faf:{c.instructions+=3;NFSU2_TR(0x6d9faf);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9fb4:{NFSU2_TR(0x6d9fb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9fb5:{NFSU2_TR(0x6d9fb5);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d9fbbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d9fbb:L6d9fbb:{c.instructions+=1;NFSU2_TR(0x6d9fbb);
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
B6d9fbe:L6d9fbe:{c.instructions+=3;NFSU2_TR(0x6d9fbe);
__builtin_memmove((R+0),(R+24),4);
}
B6d9fc0:{NFSU2_TR(0x6d9fc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d9fc1:{NFSU2_TR(0x6d9fc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d9fd0:L6d9fd0:{c.instructions+=6;NFSU2_TR(0x6d9fd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d9fd1:{NFSU2_TR(0x6d9fd1);
__builtin_memmove((R+24),(R+4),4);
}
B6d9fd3:{NFSU2_TR(0x6d9fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d9fd6:{NFSU2_TR(0x6d9fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9fdc:{NFSU2_TR(0x6d9fdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d9fde:{NFSU2_TR(0x6d9fde);
if(r1(R+518)){TAIL_STATIC(0x6da0f3u,6da);}
}
B6d9fe4:L6d9fe4:{c.instructions+=3;NFSU2_TR(0x6d9fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d9fea:{NFSU2_TR(0x6d9fea);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d9ff0:{NFSU2_TR(0x6d9ff0);
if(r1(R+518)){TAIL_STATIC(0x6da01cu,6da);}
}
B6d9ff2:L6d9ff2:{c.instructions+=3;NFSU2_TR(0x6d9ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d9ff8:{NFSU2_TR(0x6d9ff8);
__builtin_memmove((R+4),gp(0x8a730c),4);
}
B6d9ffe:{NFSU2_TR(0x6d9ffe);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
TAIL_STATIC(0x6da000u,6da);
}
XIT:NFSU2_TR_EXIT(0x6d9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
