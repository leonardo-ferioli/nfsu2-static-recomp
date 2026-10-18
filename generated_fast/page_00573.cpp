#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x573,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x573,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_573(u8* __restrict R,Cpu& c);
u32 page_573(Cpu& c){return body_573(c.regs.data(),c);}
__attribute__((noinline)) u32 body_573(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x573002:goto L573002;
case 0x573008:c.instructions+=2;goto B573008;
case 0x57300b:c.instructions+=1;goto B57300b;
case 0x573010:goto L573010;
case 0x573012:goto L573012;
case 0x573013:c.instructions+=3;goto B573013;
case 0x573015:c.instructions+=2;goto B573015;
case 0x573016:c.instructions+=1;goto B573016;
case 0x573020:goto L573020;
case 0x573023:c.instructions+=19;goto B573023;
case 0x573024:c.instructions+=18;goto B573024;
case 0x573025:c.instructions+=17;goto B573025;
case 0x573026:c.instructions+=16;goto B573026;
case 0x57302a:c.instructions+=15;goto B57302a;
case 0x57302c:c.instructions+=14;goto B57302c;
case 0x57302e:c.instructions+=13;goto B57302e;
case 0x573035:c.instructions+=12;goto B573035;
case 0x573039:c.instructions+=11;goto B573039;
case 0x57303c:c.instructions+=10;goto B57303c;
case 0x57303e:c.instructions+=9;goto B57303e;
case 0x573041:c.instructions+=8;goto B573041;
case 0x573043:c.instructions+=7;goto B573043;
case 0x573045:c.instructions+=6;goto B573045;
case 0x573048:c.instructions+=5;goto B573048;
case 0x57304b:c.instructions+=4;goto B57304b;
case 0x57304c:c.instructions+=3;goto B57304c;
case 0x57304e:c.instructions+=2;goto B57304e;
case 0x573050:c.instructions+=1;goto B573050;
case 0x573052:goto L573052;
case 0x573055:c.instructions+=5;goto B573055;
case 0x573058:c.instructions+=4;goto B573058;
case 0x57305b:c.instructions+=3;goto B57305b;
case 0x57305c:c.instructions+=2;goto B57305c;
case 0x57305e:c.instructions+=1;goto B57305e;
case 0x573060:goto L573060;
case 0x573063:c.instructions+=5;goto B573063;
case 0x573067:c.instructions+=4;goto B573067;
case 0x573068:c.instructions+=3;goto B573068;
case 0x573069:c.instructions+=2;goto B573069;
case 0x57306a:c.instructions+=1;goto B57306a;
case 0x573070:goto L573070;
case 0x573076:c.instructions+=3;goto B573076;
case 0x573078:c.instructions+=2;goto B573078;
case 0x57307a:c.instructions+=1;goto B57307a;
case 0x57307c:goto L57307c;
case 0x573081:c.instructions+=1;goto B573081;
case 0x573086:goto L573086;
case 0x573090:goto L573090;
case 0x573094:c.instructions+=5;goto B573094;
case 0x573097:c.instructions+=4;goto B573097;
case 0x573098:c.instructions+=3;goto B573098;
case 0x57309a:c.instructions+=2;goto B57309a;
case 0x57309c:c.instructions+=1;goto B57309c;
case 0x5730a2:goto L5730a2;
case 0x5730a6:c.instructions+=5;goto B5730a6;
case 0x5730a7:c.instructions+=4;goto B5730a7;
case 0x5730ad:c.instructions+=3;goto B5730ad;
case 0x5730ae:c.instructions+=2;goto B5730ae;
case 0x5730af:c.instructions+=1;goto B5730af;
case 0x5730b0:goto L5730b0;
case 0x5730b6:c.instructions+=1;goto B5730b6;
case 0x5730b8:goto L5730b8;
case 0x5730be:c.instructions+=10;goto B5730be;
case 0x5730c1:c.instructions+=9;goto B5730c1;
case 0x5730c4:c.instructions+=8;goto B5730c4;
case 0x5730c6:c.instructions+=7;goto B5730c6;
case 0x5730c9:c.instructions+=6;goto B5730c9;
case 0x5730cc:c.instructions+=5;goto B5730cc;
case 0x5730cd:c.instructions+=4;goto B5730cd;
case 0x5730cf:c.instructions+=3;goto B5730cf;
case 0x5730d1:c.instructions+=2;goto B5730d1;
case 0x5730d5:c.instructions+=1;goto B5730d5;
case 0x5730d7:goto L5730d7;
case 0x5730db:c.instructions+=2;goto B5730db;
case 0x5730dd:c.instructions+=1;goto B5730dd;
case 0x5730e0:goto L5730e0;
case 0x5730e3:c.instructions+=5;goto B5730e3;
case 0x5730e6:c.instructions+=4;goto B5730e6;
case 0x5730e8:c.instructions+=3;goto B5730e8;
case 0x5730e9:c.instructions+=2;goto B5730e9;
case 0x5730ea:c.instructions+=1;goto B5730ea;
case 0x5730ec:goto L5730ec;
case 0x5730f0:goto L5730f0;
case 0x5730f4:c.instructions+=4;goto B5730f4;
case 0x5730f8:c.instructions+=3;goto B5730f8;
case 0x5730fc:c.instructions+=2;goto B5730fc;
case 0x573102:c.instructions+=1;goto B573102;
case 0x573104:goto L573104;
case 0x573106:c.instructions+=1;goto B573106;
case 0x573108:goto L573108;
case 0x57310a:c.instructions+=1;goto B57310a;
case 0x573110:goto L573110;
case 0x573112:c.instructions+=6;goto B573112;
case 0x573114:c.instructions+=5;goto B573114;
case 0x573115:c.instructions+=4;goto B573115;
case 0x573118:c.instructions+=3;goto B573118;
case 0x573119:c.instructions+=2;goto B573119;
case 0x57311d:c.instructions+=1;goto B57311d;
case 0x57311f:goto L57311f;
case 0x573125:goto L573125;
case 0x573129:c.instructions+=1;goto B573129;
case 0x57312b:goto L57312b;
case 0x57312c:c.instructions+=2;goto B57312c;
case 0x57312d:c.instructions+=1;goto B57312d;
case 0x57312e:goto L57312e;
case 0x573130:c.instructions+=3;goto B573130;
case 0x573131:c.instructions+=2;goto B573131;
case 0x573134:c.instructions+=1;goto B573134;
case 0x573140:goto L573140;
case 0x573144:c.instructions+=16;goto B573144;
case 0x573146:c.instructions+=15;goto B573146;
case 0x57314a:c.instructions+=14;goto B57314a;
case 0x57314d:c.instructions+=13;goto B57314d;
case 0x57314f:c.instructions+=12;goto B57314f;
case 0x573151:c.instructions+=11;goto B573151;
case 0x573155:c.instructions+=10;goto B573155;
case 0x57315c:c.instructions+=9;goto B57315c;
case 0x57315f:c.instructions+=8;goto B57315f;
case 0x573162:c.instructions+=7;goto B573162;
case 0x573165:c.instructions+=6;goto B573165;
case 0x573168:c.instructions+=5;goto B573168;
case 0x57316b:c.instructions+=4;goto B57316b;
case 0x57316e:c.instructions+=3;goto B57316e;
case 0x573171:c.instructions+=2;goto B573171;
case 0x573174:c.instructions+=1;goto B573174;
case 0x573180:goto L573180;
case 0x573181:c.instructions+=9;goto B573181;
case 0x573183:c.instructions+=8;goto B573183;
case 0x573186:c.instructions+=7;goto B573186;
case 0x573189:c.instructions+=6;goto B573189;
case 0x57318a:c.instructions+=5;goto B57318a;
case 0x57318c:c.instructions+=4;goto B57318c;
case 0x573192:c.instructions+=3;goto B573192;
case 0x573197:c.instructions+=2;goto B573197;
case 0x573199:c.instructions+=1;goto B573199;
case 0x57319b:goto L57319b;
case 0x5731a1:goto L5731a1;
case 0x5731a4:c.instructions+=3;goto B5731a4;
case 0x5731a6:c.instructions+=2;goto B5731a6;
case 0x5731a9:c.instructions+=1;goto B5731a9;
case 0x5731ab:goto L5731ab;
case 0x5731ac:c.instructions+=1;goto B5731ac;
case 0x5731ae:goto L5731ae;
case 0x5731af:c.instructions+=1;goto B5731af;
case 0x5731b1:goto L5731b1;
case 0x5731b9:c.instructions+=1;goto B5731b9;
case 0x5731bb:goto L5731bb;
case 0x5731be:c.instructions+=1;goto B5731be;
case 0x5731c0:goto L5731c0;
case 0x5731c3:c.instructions+=3;goto B5731c3;
case 0x5731c4:c.instructions+=2;goto B5731c4;
case 0x5731c8:c.instructions+=1;goto B5731c8;
case 0x5731cc:goto L5731cc;
case 0x5731d0:goto L5731d0;
case 0x5731d2:c.instructions+=2;goto B5731d2;
case 0x5731d5:c.instructions+=1;goto B5731d5;
case 0x5731db:goto L5731db;
case 0x5731dc:c.instructions+=1;goto B5731dc;
case 0x5731e2:goto L5731e2;
case 0x5731e3:c.instructions+=1;goto B5731e3;
case 0x5731e9:goto L5731e9;
case 0x5731ec:c.instructions+=4;goto B5731ec;
case 0x5731f2:c.instructions+=3;goto B5731f2;
case 0x5731f4:c.instructions+=2;goto B5731f4;
case 0x5731f7:c.instructions+=1;goto B5731f7;
case 0x5731fd:goto L5731fd;
case 0x573200:c.instructions+=34;goto B573200;
case 0x573203:c.instructions+=33;goto B573203;
case 0x573205:c.instructions+=32;goto B573205;
case 0x573208:c.instructions+=31;goto B573208;
case 0x57320b:c.instructions+=30;goto B57320b;
case 0x57320e:c.instructions+=29;goto B57320e;
case 0x573211:c.instructions+=28;goto B573211;
case 0x573215:c.instructions+=27;goto B573215;
case 0x573217:c.instructions+=26;goto B573217;
case 0x57321c:c.instructions+=25;goto B57321c;
case 0x573222:c.instructions+=24;goto B573222;
case 0x573226:c.instructions+=23;goto B573226;
case 0x57322c:c.instructions+=22;goto B57322c;
case 0x57322f:c.instructions+=21;goto B57322f;
case 0x573235:c.instructions+=20;goto B573235;
case 0x573237:c.instructions+=19;goto B573237;
case 0x57323a:c.instructions+=18;goto B57323a;
case 0x573240:c.instructions+=17;goto B573240;
case 0x573243:c.instructions+=16;goto B573243;
case 0x573249:c.instructions+=15;goto B573249;
case 0x57324c:c.instructions+=14;goto B57324c;
case 0x57324f:c.instructions+=13;goto B57324f;
case 0x573252:c.instructions+=12;goto B573252;
case 0x573258:c.instructions+=11;goto B573258;
case 0x57325a:c.instructions+=10;goto B57325a;
case 0x573260:c.instructions+=9;goto B573260;
case 0x573262:c.instructions+=8;goto B573262;
case 0x573268:c.instructions+=7;goto B573268;
case 0x57326e:c.instructions+=6;goto B57326e;
case 0x573274:c.instructions+=5;goto B573274;
case 0x57327a:c.instructions+=4;goto B57327a;
case 0x57327b:c.instructions+=3;goto B57327b;
case 0x57327d:c.instructions+=2;goto B57327d;
case 0x57327e:c.instructions+=1;goto B57327e;
case 0x573281:goto L573281;
case 0x573284:c.instructions+=4;goto B573284;
case 0x573288:c.instructions+=3;goto B573288;
case 0x57328a:c.instructions+=2;goto B57328a;
case 0x57328d:c.instructions+=1;goto B57328d;
case 0x573293:goto L573293;
case 0x573296:c.instructions+=48;goto B573296;
case 0x573299:c.instructions+=47;goto B573299;
case 0x57329b:c.instructions+=46;goto B57329b;
case 0x57329e:c.instructions+=45;goto B57329e;
case 0x5732a1:c.instructions+=44;goto B5732a1;
case 0x5732a3:c.instructions+=43;goto B5732a3;
case 0x5732a6:c.instructions+=42;goto B5732a6;
case 0x5732aa:c.instructions+=41;goto B5732aa;
case 0x5732ae:c.instructions+=40;goto B5732ae;
case 0x5732b0:c.instructions+=39;goto B5732b0;
case 0x5732b3:c.instructions+=38;goto B5732b3;
case 0x5732b6:c.instructions+=37;goto B5732b6;
case 0x5732b9:c.instructions+=36;goto B5732b9;
case 0x5732bc:c.instructions+=35;goto B5732bc;
case 0x5732c0:c.instructions+=34;goto B5732c0;
case 0x5732c2:c.instructions+=33;goto B5732c2;
case 0x5732c8:c.instructions+=32;goto B5732c8;
case 0x5732cc:c.instructions+=31;goto B5732cc;
case 0x5732cf:c.instructions+=30;goto B5732cf;
case 0x5732d3:c.instructions+=29;goto B5732d3;
case 0x5732d9:c.instructions+=28;goto B5732d9;
case 0x5732db:c.instructions+=27;goto B5732db;
case 0x5732e1:c.instructions+=26;goto B5732e1;
case 0x5732e3:c.instructions+=25;goto B5732e3;
case 0x5732e5:c.instructions+=24;goto B5732e5;
case 0x5732eb:c.instructions+=23;goto B5732eb;
case 0x5732ed:c.instructions+=22;goto B5732ed;
case 0x5732f3:c.instructions+=21;goto B5732f3;
case 0x5732f6:c.instructions+=20;goto B5732f6;
case 0x5732f9:c.instructions+=19;goto B5732f9;
case 0x5732fb:c.instructions+=18;goto B5732fb;
case 0x5732fe:c.instructions+=17;goto B5732fe;
case 0x573300:c.instructions+=16;goto B573300;
case 0x573304:c.instructions+=15;goto B573304;
case 0x573307:c.instructions+=14;goto B573307;
case 0x57330a:c.instructions+=13;goto B57330a;
case 0x573310:c.instructions+=12;goto B573310;
case 0x573312:c.instructions+=11;goto B573312;
case 0x573317:c.instructions+=10;goto B573317;
case 0x57331d:c.instructions+=9;goto B57331d;
case 0x57331f:c.instructions+=8;goto B57331f;
case 0x573325:c.instructions+=7;goto B573325;
case 0x57332b:c.instructions+=6;goto B57332b;
case 0x573331:c.instructions+=5;goto B573331;
case 0x573337:c.instructions+=4;goto B573337;
case 0x573338:c.instructions+=3;goto B573338;
case 0x57333a:c.instructions+=2;goto B57333a;
case 0x57333b:c.instructions+=1;goto B57333b;
case 0x57333e:goto L57333e;
case 0x573342:c.instructions+=4;goto B573342;
case 0x573345:c.instructions+=3;goto B573345;
case 0x573346:c.instructions+=2;goto B573346;
case 0x573347:c.instructions+=1;goto B573347;
case 0x57334c:goto L57334c;
case 0x57334f:c.instructions+=2;goto B57334f;
case 0x573352:c.instructions+=1;goto B573352;
case 0x573354:goto L573354;
case 0x573357:c.instructions+=4;goto B573357;
case 0x57335d:c.instructions+=3;goto B57335d;
case 0x57335f:c.instructions+=2;goto B57335f;
case 0x573362:c.instructions+=1;goto B573362;
case 0x573364:goto L573364;
case 0x57336b:c.instructions+=1;goto B57336b;
case 0x57336d:goto L57336d;
case 0x573370:c.instructions+=4;goto B573370;
case 0x573374:c.instructions+=3;goto B573374;
case 0x573376:c.instructions+=2;goto B573376;
case 0x573379:c.instructions+=1;goto B573379;
case 0x57337b:goto L57337b;
case 0x57337f:c.instructions+=1;goto B57337f;
case 0x573382:goto L573382;
case 0x573385:c.instructions+=1;goto B573385;
case 0x57338a:goto L57338a;
case 0x57338d:c.instructions+=6;goto B57338d;
case 0x573390:c.instructions+=5;goto B573390;
case 0x573392:c.instructions+=4;goto B573392;
case 0x573393:c.instructions+=3;goto B573393;
case 0x573395:c.instructions+=2;goto B573395;
case 0x573396:c.instructions+=1;goto B573396;
case 0x5733a0:goto L5733a0;
case 0x5733a1:c.instructions+=10;goto B5733a1;
case 0x5733a3:c.instructions+=9;goto B5733a3;
case 0x5733a6:c.instructions+=8;goto B5733a6;
case 0x5733a9:c.instructions+=7;goto B5733a9;
case 0x5733ac:c.instructions+=6;goto B5733ac;
case 0x5733ad:c.instructions+=5;goto B5733ad;
case 0x5733b3:c.instructions+=4;goto B5733b3;
case 0x5733b4:c.instructions+=3;goto B5733b4;
case 0x5733b6:c.instructions+=2;goto B5733b6;
case 0x5733b9:c.instructions+=1;goto B5733b9;
case 0x5733be:goto L5733be;
case 0x5733c1:c.instructions+=15;goto B5733c1;
case 0x5733c4:c.instructions+=14;goto B5733c4;
case 0x5733c7:c.instructions+=13;goto B5733c7;
case 0x5733c9:c.instructions+=12;goto B5733c9;
case 0x5733cc:c.instructions+=11;goto B5733cc;
case 0x5733cf:c.instructions+=10;goto B5733cf;
case 0x5733d0:c.instructions+=9;goto B5733d0;
case 0x5733d1:c.instructions+=8;goto B5733d1;
case 0x5733d3:c.instructions+=7;goto B5733d3;
case 0x5733d7:c.instructions+=6;goto B5733d7;
case 0x5733d9:c.instructions+=5;goto B5733d9;
case 0x5733dc:c.instructions+=4;goto B5733dc;
case 0x5733e0:c.instructions+=3;goto B5733e0;
case 0x5733e3:c.instructions+=2;goto B5733e3;
case 0x5733e7:c.instructions+=1;goto B5733e7;
case 0x5733ec:goto L5733ec;
case 0x5733ed:c.instructions+=5;goto B5733ed;
case 0x5733f1:c.instructions+=4;goto B5733f1;
case 0x5733f2:c.instructions+=3;goto B5733f2;
case 0x5733f6:c.instructions+=2;goto B5733f6;
case 0x5733f7:c.instructions+=1;goto B5733f7;
case 0x5733fc:goto L5733fc;
case 0x5733ff:c.instructions+=8;goto B5733ff;
case 0x573402:c.instructions+=7;goto B573402;
case 0x573408:c.instructions+=6;goto B573408;
case 0x57340b:c.instructions+=5;goto B57340b;
case 0x57340c:c.instructions+=4;goto B57340c;
case 0x57340d:c.instructions+=3;goto B57340d;
case 0x57340f:c.instructions+=2;goto B57340f;
case 0x573412:c.instructions+=1;goto B573412;
case 0x573417:goto L573417;
case 0x573418:c.instructions+=5;goto B573418;
case 0x57341c:c.instructions+=4;goto B57341c;
case 0x57341d:c.instructions+=3;goto B57341d;
case 0x573421:c.instructions+=2;goto B573421;
case 0x573422:c.instructions+=1;goto B573422;
case 0x573427:goto L573427;
case 0x57342a:c.instructions+=8;goto B57342a;
case 0x57342d:c.instructions+=7;goto B57342d;
case 0x573433:c.instructions+=6;goto B573433;
case 0x573436:c.instructions+=5;goto B573436;
case 0x573437:c.instructions+=4;goto B573437;
case 0x573438:c.instructions+=3;goto B573438;
case 0x57343a:c.instructions+=2;goto B57343a;
case 0x57343d:c.instructions+=1;goto B57343d;
case 0x573442:goto L573442;
case 0x573443:c.instructions+=5;goto B573443;
case 0x573447:c.instructions+=4;goto B573447;
case 0x573448:c.instructions+=3;goto B573448;
case 0x57344c:c.instructions+=2;goto B57344c;
case 0x57344d:c.instructions+=1;goto B57344d;
case 0x573452:goto L573452;
case 0x573456:c.instructions+=11;goto B573456;
case 0x573459:c.instructions+=10;goto B573459;
case 0x57345d:c.instructions+=9;goto B57345d;
case 0x57345f:c.instructions+=8;goto B57345f;
case 0x573463:c.instructions+=7;goto B573463;
case 0x573466:c.instructions+=6;goto B573466;
case 0x573469:c.instructions+=5;goto B573469;
case 0x57346c:c.instructions+=4;goto B57346c;
case 0x57346d:c.instructions+=3;goto B57346d;
case 0x57346f:c.instructions+=2;goto B57346f;
case 0x573470:c.instructions+=1;goto B573470;
case 0x573480:goto L573480;
case 0x573481:c.instructions+=4;goto B573481;
case 0x573485:c.instructions+=3;goto B573485;
case 0x573486:c.instructions+=2;goto B573486;
case 0x573488:c.instructions+=1;goto B573488;
case 0x57348d:goto L57348d;
case 0x573491:c.instructions+=6;goto B573491;
case 0x573495:c.instructions+=5;goto B573495;
case 0x573499:c.instructions+=4;goto B573499;
case 0x57349d:c.instructions+=3;goto B57349d;
case 0x57349f:c.instructions+=2;goto B57349f;
case 0x5734a2:c.instructions+=1;goto B5734a2;
case 0x5734a4:goto L5734a4;
case 0x5734a8:c.instructions+=2;goto B5734a8;
case 0x5734ae:c.instructions+=1;goto B5734ae;
case 0x5734b2:goto L5734b2;
case 0x5734b6:c.instructions+=39;goto B5734b6;
case 0x5734b9:c.instructions+=38;goto B5734b9;
case 0x5734bd:c.instructions+=37;goto B5734bd;
case 0x5734c1:c.instructions+=36;goto B5734c1;
case 0x5734c5:c.instructions+=35;goto B5734c5;
case 0x5734c7:c.instructions+=34;goto B5734c7;
case 0x5734c9:c.instructions+=33;goto B5734c9;
case 0x5734cb:c.instructions+=32;goto B5734cb;
case 0x5734cd:c.instructions+=31;goto B5734cd;
case 0x5734d3:c.instructions+=30;goto B5734d3;
case 0x5734d5:c.instructions+=29;goto B5734d5;
case 0x5734d7:c.instructions+=28;goto B5734d7;
case 0x5734d9:c.instructions+=27;goto B5734d9;
case 0x5734df:c.instructions+=26;goto B5734df;
case 0x5734e3:c.instructions+=25;goto B5734e3;
case 0x5734e5:c.instructions+=24;goto B5734e5;
case 0x5734eb:c.instructions+=23;goto B5734eb;
case 0x5734ed:c.instructions+=22;goto B5734ed;
case 0x5734ef:c.instructions+=21;goto B5734ef;
case 0x5734f5:c.instructions+=20;goto B5734f5;
case 0x5734f9:c.instructions+=19;goto B5734f9;
case 0x5734fb:c.instructions+=18;goto B5734fb;
case 0x573501:c.instructions+=17;goto B573501;
case 0x573503:c.instructions+=16;goto B573503;
case 0x573509:c.instructions+=15;goto B573509;
case 0x57350f:c.instructions+=14;goto B57350f;
case 0x573513:c.instructions+=13;goto B573513;
case 0x573515:c.instructions+=12;goto B573515;
case 0x573517:c.instructions+=11;goto B573517;
case 0x573519:c.instructions+=10;goto B573519;
case 0x57351b:c.instructions+=9;goto B57351b;
case 0x57351d:c.instructions+=8;goto B57351d;
case 0x573523:c.instructions+=7;goto B573523;
case 0x573526:c.instructions+=6;goto B573526;
case 0x573527:c.instructions+=5;goto B573527;
case 0x573528:c.instructions+=4;goto B573528;
case 0x57352a:c.instructions+=3;goto B57352a;
case 0x57352c:c.instructions+=2;goto B57352c;
case 0x57352e:c.instructions+=1;goto B57352e;
case 0x573533:goto L573533;
case 0x573534:c.instructions+=2;goto B573534;
case 0x573535:c.instructions+=1;goto B573535;
case 0x573540:goto L573540;
case 0x573541:c.instructions+=4;goto B573541;
case 0x573543:c.instructions+=3;goto B573543;
case 0x573546:c.instructions+=2;goto B573546;
case 0x573548:c.instructions+=1;goto B573548;
case 0x57354a:goto L57354a;
case 0x57354d:c.instructions+=5;goto B57354d;
case 0x57354e:c.instructions+=4;goto B57354e;
case 0x573553:c.instructions+=3;goto B573553;
case 0x573555:c.instructions+=2;goto B573555;
case 0x57355c:c.instructions+=1;goto B57355c;
case 0x57355e:goto L57355e;
case 0x57355f:c.instructions+=1;goto B57355f;
case 0x573564:goto L573564;
case 0x573567:c.instructions+=5;goto B573567;
case 0x573569:c.instructions+=4;goto B573569;
case 0x57356c:c.instructions+=3;goto B57356c;
case 0x57356d:c.instructions+=2;goto B57356d;
case 0x57356e:c.instructions+=1;goto B57356e;
case 0x573573:goto L573573;
case 0x573576:c.instructions+=7;goto B573576;
case 0x573579:c.instructions+=6;goto B573579;
case 0x57357a:c.instructions+=5;goto B57357a;
case 0x57357d:c.instructions+=4;goto B57357d;
case 0x573580:c.instructions+=3;goto B573580;
case 0x573583:c.instructions+=2;goto B573583;
case 0x573585:c.instructions+=1;goto B573585;
case 0x573587:goto L573587;
case 0x573588:goto L573588;
case 0x57358f:c.instructions+=1;goto B57358f;
case 0x573590:goto L573590;
case 0x573593:c.instructions+=2;goto B573593;
case 0x573594:c.instructions+=1;goto B573594;
case 0x5735a0:goto L5735a0;
case 0x5735a4:c.instructions+=4;goto B5735a4;
case 0x5735aa:c.instructions+=3;goto B5735aa;
case 0x5735ab:c.instructions+=2;goto B5735ab;
case 0x5735ac:c.instructions+=1;goto B5735ac;
case 0x5735b1:goto L5735b1;
case 0x5735b4:c.instructions+=1;goto B5735b4;
case 0x5735c0:goto L5735c0;
case 0x5735c4:c.instructions+=9;goto B5735c4;
case 0x5735c7:c.instructions+=8;goto B5735c7;
case 0x5735cb:c.instructions+=7;goto B5735cb;
case 0x5735cc:c.instructions+=6;goto B5735cc;
case 0x5735cf:c.instructions+=5;goto B5735cf;
case 0x5735d1:c.instructions+=4;goto B5735d1;
case 0x5735d3:c.instructions+=3;goto B5735d3;
case 0x5735d6:c.instructions+=2;goto B5735d6;
case 0x5735d7:c.instructions+=1;goto B5735d7;
case 0x5735e0:goto L5735e0;
case 0x5735e4:c.instructions+=2;goto B5735e4;
case 0x5735eb:c.instructions+=1;goto B5735eb;
case 0x5735f0:goto L5735f0;
case 0x5735f1:c.instructions+=5;goto B5735f1;
case 0x5735f2:c.instructions+=4;goto B5735f2;
case 0x5735f4:c.instructions+=3;goto B5735f4;
case 0x5735f7:c.instructions+=2;goto B5735f7;
case 0x5735fa:c.instructions+=1;goto B5735fa;
case 0x5735fc:goto L5735fc;
case 0x5735fe:c.instructions+=3;goto B5735fe;
case 0x5735ff:c.instructions+=2;goto B5735ff;
case 0x573600:c.instructions+=1;goto B573600;
case 0x573603:goto L573603;
case 0x573604:c.instructions+=6;goto B573604;
case 0x573608:c.instructions+=5;goto B573608;
case 0x57360b:c.instructions+=4;goto B57360b;
case 0x57360d:c.instructions+=3;goto B57360d;
case 0x57360e:c.instructions+=2;goto B57360e;
case 0x57360f:c.instructions+=1;goto B57360f;
case 0x573611:goto L573611;
case 0x573612:c.instructions+=6;goto B573612;
case 0x573613:c.instructions+=5;goto B573613;
case 0x573614:c.instructions+=4;goto B573614;
case 0x573616:c.instructions+=3;goto B573616;
case 0x573617:c.instructions+=2;goto B573617;
case 0x573618:c.instructions+=1;goto B573618;
case 0x57361b:goto L57361b;
case 0x57361d:c.instructions+=1;goto B57361d;
case 0x57361f:goto L57361f;
case 0x573622:c.instructions+=5;goto B573622;
case 0x573625:c.instructions+=4;goto B573625;
case 0x573626:c.instructions+=3;goto B573626;
case 0x573629:c.instructions+=2;goto B573629;
case 0x57362a:c.instructions+=1;goto B57362a;
case 0x57362f:goto L57362f;
case 0x573632:c.instructions+=2;goto B573632;
case 0x573634:c.instructions+=1;goto B573634;
case 0x573636:goto L573636;
case 0x573639:c.instructions+=10;goto B573639;
case 0x57363c:c.instructions+=9;goto B57363c;
case 0x57363f:c.instructions+=8;goto B57363f;
case 0x573641:c.instructions+=7;goto B573641;
case 0x573643:c.instructions+=6;goto B573643;
case 0x573645:c.instructions+=5;goto B573645;
case 0x573648:c.instructions+=4;goto B573648;
case 0x57364e:c.instructions+=3;goto B57364e;
case 0x573650:c.instructions+=2;goto B573650;
case 0x573654:c.instructions+=1;goto B573654;
case 0x573656:goto L573656;
case 0x573659:c.instructions+=2;goto B573659;
case 0x57365b:c.instructions+=1;goto B57365b;
case 0x57365d:goto L57365d;
case 0x57365f:goto L57365f;
case 0x573662:c.instructions+=2;goto B573662;
case 0x573664:c.instructions+=1;goto B573664;
case 0x573666:goto L573666;
case 0x57366a:c.instructions+=1;goto B57366a;
case 0x57366c:goto L57366c;
case 0x57366e:c.instructions+=3;goto B57366e;
case 0x573670:c.instructions+=2;goto B573670;
case 0x573676:c.instructions+=1;goto B573676;
case 0x573678:goto L573678;
case 0x57367a:c.instructions+=3;goto B57367a;
case 0x57367c:c.instructions+=2;goto B57367c;
case 0x573682:c.instructions+=1;goto B573682;
case 0x573684:goto L573684;
case 0x573686:c.instructions+=1;goto B573686;
case 0x57368b:goto L57368b;
case 0x573690:c.instructions+=4;goto B573690;
case 0x573694:c.instructions+=3;goto B573694;
case 0x573697:c.instructions+=2;goto B573697;
case 0x573699:c.instructions+=1;goto B573699;
case 0x57369f:goto L57369f;
case 0x5736a2:c.instructions+=16;goto B5736a2;
case 0x5736a6:c.instructions+=15;goto B5736a6;
case 0x5736aa:c.instructions+=14;goto B5736aa;
case 0x5736ad:c.instructions+=13;goto B5736ad;
case 0x5736b0:c.instructions+=12;goto B5736b0;
case 0x5736b3:c.instructions+=11;goto B5736b3;
case 0x5736b7:c.instructions+=10;goto B5736b7;
case 0x5736ba:c.instructions+=9;goto B5736ba;
case 0x5736bb:c.instructions+=8;goto B5736bb;
case 0x5736bc:c.instructions+=7;goto B5736bc;
case 0x5736bd:c.instructions+=6;goto B5736bd;
case 0x5736c0:c.instructions+=5;goto B5736c0;
case 0x5736c1:c.instructions+=4;goto B5736c1;
case 0x5736c3:c.instructions+=3;goto B5736c3;
case 0x5736c4:c.instructions+=2;goto B5736c4;
case 0x5736c5:c.instructions+=1;goto B5736c5;
case 0x5736d0:goto L5736d0;
case 0x5736d2:c.instructions+=4;goto B5736d2;
case 0x5736d7:c.instructions+=3;goto B5736d7;
case 0x5736d9:c.instructions+=2;goto B5736d9;
case 0x5736db:c.instructions+=1;goto B5736db;
case 0x5736e0:goto L5736e0;
case 0x5736e3:c.instructions+=2;goto B5736e3;
case 0x5736e8:c.instructions+=1;goto B5736e8;
case 0x5736f0:goto L5736f0;
case 0x5736f4:c.instructions+=2;goto B5736f4;
case 0x5736f9:c.instructions+=1;goto B5736f9;
case 0x573700:goto L573700;
case 0x573704:c.instructions+=7;goto B573704;
case 0x573706:c.instructions+=6;goto B573706;
case 0x573709:c.instructions+=5;goto B573709;
case 0x57370f:c.instructions+=4;goto B57370f;
case 0x573710:c.instructions+=3;goto B573710;
case 0x573714:c.instructions+=2;goto B573714;
case 0x573716:c.instructions+=1;goto B573716;
case 0x573718:goto L573718;
case 0x57371c:c.instructions+=1;goto B57371c;
case 0x57371e:goto L57371e;
case 0x573720:c.instructions+=3;goto B573720;
case 0x573721:c.instructions+=2;goto B573721;
case 0x573724:c.instructions+=1;goto B573724;
case 0x573725:goto L573725;
case 0x573726:c.instructions+=17;goto B573726;
case 0x57372b:c.instructions+=16;goto B57372b;
case 0x57372e:c.instructions+=15;goto B57372e;
case 0x573731:c.instructions+=14;goto B573731;
case 0x573732:c.instructions+=13;goto B573732;
case 0x573734:c.instructions+=12;goto B573734;
case 0x573736:c.instructions+=11;goto B573736;
case 0x573739:c.instructions+=10;goto B573739;
case 0x57373f:c.instructions+=9;goto B57373f;
case 0x573743:c.instructions+=8;goto B573743;
case 0x573748:c.instructions+=7;goto B573748;
case 0x57374c:c.instructions+=6;goto B57374c;
case 0x573750:c.instructions+=5;goto B573750;
case 0x573756:c.instructions+=4;goto B573756;
case 0x57375a:c.instructions+=3;goto B57375a;
case 0x57375d:c.instructions+=2;goto B57375d;
case 0x573760:c.instructions+=1;goto B573760;
case 0x573766:goto L573766;
case 0x573767:goto L573767;
case 0x57376c:c.instructions+=1;goto B57376c;
case 0x57376e:goto L57376e;
case 0x573773:c.instructions+=3;goto B573773;
case 0x573777:c.instructions+=2;goto B573777;
case 0x573779:c.instructions+=1;goto B573779;
case 0x57377b:goto L57377b;
case 0x57377e:c.instructions+=9;goto B57377e;
case 0x573780:c.instructions+=8;goto B573780;
case 0x573783:c.instructions+=7;goto B573783;
case 0x573786:c.instructions+=6;goto B573786;
case 0x573788:c.instructions+=5;goto B573788;
case 0x57378b:c.instructions+=4;goto B57378b;
case 0x57378e:c.instructions+=3;goto B57378e;
case 0x57378f:c.instructions+=2;goto B57378f;
case 0x573791:c.instructions+=1;goto B573791;
case 0x573793:goto L573793;
case 0x573796:c.instructions+=4;goto B573796;
case 0x573799:c.instructions+=3;goto B573799;
case 0x57379a:c.instructions+=2;goto B57379a;
case 0x57379c:c.instructions+=1;goto B57379c;
case 0x57379e:goto L57379e;
case 0x5737a0:goto L5737a0;
case 0x5737a3:c.instructions+=10;goto B5737a3;
case 0x5737a5:c.instructions+=9;goto B5737a5;
case 0x5737a8:c.instructions+=8;goto B5737a8;
case 0x5737ab:c.instructions+=7;goto B5737ab;
case 0x5737ad:c.instructions+=6;goto B5737ad;
case 0x5737b0:c.instructions+=5;goto B5737b0;
case 0x5737b3:c.instructions+=4;goto B5737b3;
case 0x5737b6:c.instructions+=3;goto B5737b6;
case 0x5737b8:c.instructions+=2;goto B5737b8;
case 0x5737ba:c.instructions+=1;goto B5737ba;
case 0x5737c0:goto L5737c0;
case 0x5737c3:c.instructions+=4;goto B5737c3;
case 0x5737c6:c.instructions+=3;goto B5737c6;
case 0x5737c7:c.instructions+=2;goto B5737c7;
case 0x5737c9:c.instructions+=1;goto B5737c9;
case 0x5737cb:goto L5737cb;
case 0x5737d0:c.instructions+=5;goto B5737d0;
case 0x5737d4:c.instructions+=4;goto B5737d4;
case 0x5737d7:c.instructions+=3;goto B5737d7;
case 0x5737da:c.instructions+=2;goto B5737da;
case 0x5737dc:c.instructions+=1;goto B5737dc;
case 0x5737de:goto L5737de;
case 0x5737e0:c.instructions+=1;goto B5737e0;
case 0x5737e2:goto L5737e2;
case 0x5737e4:c.instructions+=3;goto B5737e4;
case 0x5737e6:c.instructions+=2;goto B5737e6;
case 0x5737e7:c.instructions+=1;goto B5737e7;
case 0x5737e8:goto L5737e8;
case 0x5737e9:goto L5737e9;
case 0x5737ee:c.instructions+=4;goto B5737ee;
case 0x5737f1:c.instructions+=3;goto B5737f1;
case 0x5737f5:c.instructions+=2;goto B5737f5;
case 0x5737fa:c.instructions+=1;goto B5737fa;
case 0x5737fc:goto L5737fc;
case 0x573800:c.instructions+=4;goto B573800;
case 0x573806:c.instructions+=3;goto B573806;
case 0x573807:c.instructions+=2;goto B573807;
case 0x57380b:c.instructions+=1;goto B57380b;
case 0x57380c:goto L57380c;
case 0x573812:c.instructions+=1;goto B573812;
case 0x573814:goto L573814;
case 0x573818:c.instructions+=4;goto B573818;
case 0x57381d:c.instructions+=3;goto B57381d;
case 0x57381e:c.instructions+=2;goto B57381e;
case 0x573822:c.instructions+=1;goto B573822;
case 0x573823:goto L573823;
case 0x573825:c.instructions+=1;goto B573825;
case 0x57382b:goto L57382b;
case 0x57382f:c.instructions+=1;goto B57382f;
case 0x573830:goto L573830;
case 0x573832:c.instructions+=5;goto B573832;
case 0x573833:c.instructions+=4;goto B573833;
case 0x573834:c.instructions+=3;goto B573834;
case 0x573835:c.instructions+=2;goto B573835;
case 0x573838:c.instructions+=1;goto B573838;
case 0x573840:goto L573840;
case 0x573846:c.instructions+=14;goto B573846;
case 0x57384d:c.instructions+=13;goto B57384d;
case 0x57384e:c.instructions+=12;goto B57384e;
case 0x57384f:c.instructions+=11;goto B57384f;
case 0x573850:c.instructions+=10;goto B573850;
case 0x573852:c.instructions+=9;goto B573852;
case 0x573854:c.instructions+=8;goto B573854;
case 0x573856:c.instructions+=7;goto B573856;
case 0x573858:c.instructions+=6;goto B573858;
case 0x57385a:c.instructions+=5;goto B57385a;
case 0x57385e:c.instructions+=4;goto B57385e;
case 0x573862:c.instructions+=3;goto B573862;
case 0x573866:c.instructions+=2;goto B573866;
case 0x57386a:c.instructions+=1;goto B57386a;
case 0x573870:goto L573870;
case 0x573876:c.instructions+=4;goto B573876;
case 0x573878:c.instructions+=3;goto B573878;
case 0x573879:c.instructions+=2;goto B573879;
case 0x57387e:c.instructions+=1;goto B57387e;
case 0x573880:goto L573880;
case 0x573882:c.instructions+=3;goto B573882;
case 0x573884:c.instructions+=2;goto B573884;
case 0x573886:c.instructions+=1;goto B573886;
case 0x573888:goto L573888;
case 0x57388a:c.instructions+=10;goto B57388a;
case 0x57388c:c.instructions+=9;goto B57388c;
case 0x57388e:c.instructions+=8;goto B57388e;
case 0x573890:c.instructions+=7;goto B573890;
case 0x573893:c.instructions+=6;goto B573893;
case 0x573897:c.instructions+=5;goto B573897;
case 0x57389a:c.instructions+=4;goto B57389a;
case 0x57389c:c.instructions+=3;goto B57389c;
case 0x57389e:c.instructions+=2;goto B57389e;
case 0x5738a2:c.instructions+=1;goto B5738a2;
case 0x5738a5:goto L5738a5;
case 0x5738a7:c.instructions+=4;goto B5738a7;
case 0x5738aa:c.instructions+=3;goto B5738aa;
case 0x5738ad:c.instructions+=2;goto B5738ad;
case 0x5738b0:c.instructions+=1;goto B5738b0;
case 0x5738b2:goto L5738b2;
case 0x5738b5:c.instructions+=13;goto B5738b5;
case 0x5738b8:c.instructions+=12;goto B5738b8;
case 0x5738ba:c.instructions+=11;goto B5738ba;
case 0x5738be:c.instructions+=10;goto B5738be;
case 0x5738c1:c.instructions+=9;goto B5738c1;
case 0x5738c3:c.instructions+=8;goto B5738c3;
case 0x5738c5:c.instructions+=7;goto B5738c5;
case 0x5738c7:c.instructions+=6;goto B5738c7;
case 0x5738ca:c.instructions+=5;goto B5738ca;
case 0x5738cc:c.instructions+=4;goto B5738cc;
case 0x5738ce:c.instructions+=3;goto B5738ce;
case 0x5738d2:c.instructions+=2;goto B5738d2;
case 0x5738d6:c.instructions+=1;goto B5738d6;
case 0x5738d9:goto L5738d9;
case 0x5738db:c.instructions+=1;goto B5738db;
case 0x5738dd:goto L5738dd;
case 0x5738e0:c.instructions+=1;goto B5738e0;
case 0x5738e2:goto L5738e2;
case 0x5738e5:c.instructions+=2;goto B5738e5;
case 0x5738e8:c.instructions+=1;goto B5738e8;
case 0x5738ea:goto L5738ea;
case 0x5738ed:c.instructions+=13;goto B5738ed;
case 0x5738f0:c.instructions+=12;goto B5738f0;
case 0x5738f2:c.instructions+=11;goto B5738f2;
case 0x5738f6:c.instructions+=10;goto B5738f6;
case 0x5738f9:c.instructions+=9;goto B5738f9;
case 0x5738fb:c.instructions+=8;goto B5738fb;
case 0x5738fd:c.instructions+=7;goto B5738fd;
case 0x5738ff:c.instructions+=6;goto B5738ff;
case 0x573902:c.instructions+=5;goto B573902;
case 0x573904:c.instructions+=4;goto B573904;
case 0x573906:c.instructions+=3;goto B573906;
case 0x57390a:c.instructions+=2;goto B57390a;
case 0x57390e:c.instructions+=1;goto B57390e;
case 0x573911:goto L573911;
case 0x573914:c.instructions+=2;goto B573914;
case 0x573917:c.instructions+=1;goto B573917;
case 0x573919:goto L573919;
case 0x57391c:c.instructions+=13;goto B57391c;
case 0x57391f:c.instructions+=12;goto B57391f;
case 0x573921:c.instructions+=11;goto B573921;
case 0x573925:c.instructions+=10;goto B573925;
case 0x573928:c.instructions+=9;goto B573928;
case 0x57392a:c.instructions+=8;goto B57392a;
case 0x57392c:c.instructions+=7;goto B57392c;
case 0x57392e:c.instructions+=6;goto B57392e;
case 0x573931:c.instructions+=5;goto B573931;
case 0x573933:c.instructions+=4;goto B573933;
case 0x573935:c.instructions+=3;goto B573935;
case 0x573939:c.instructions+=2;goto B573939;
case 0x57393d:c.instructions+=1;goto B57393d;
case 0x573940:goto L573940;
case 0x573945:c.instructions+=6;goto B573945;
case 0x573949:c.instructions+=5;goto B573949;
case 0x57394b:c.instructions+=4;goto B57394b;
case 0x57394e:c.instructions+=3;goto B57394e;
case 0x573951:c.instructions+=2;goto B573951;
case 0x573954:c.instructions+=1;goto B573954;
case 0x573956:goto L573956;
case 0x573959:c.instructions+=1;goto B573959;
case 0x57395b:goto L57395b;
case 0x57395e:c.instructions+=2;goto B57395e;
case 0x573961:c.instructions+=1;goto B573961;
case 0x573963:goto L573963;
case 0x573966:c.instructions+=13;goto B573966;
case 0x573969:c.instructions+=12;goto B573969;
case 0x57396b:c.instructions+=11;goto B57396b;
case 0x57396f:c.instructions+=10;goto B57396f;
case 0x573972:c.instructions+=9;goto B573972;
case 0x573974:c.instructions+=8;goto B573974;
case 0x573976:c.instructions+=7;goto B573976;
case 0x573978:c.instructions+=6;goto B573978;
case 0x57397b:c.instructions+=5;goto B57397b;
case 0x57397d:c.instructions+=4;goto B57397d;
case 0x57397f:c.instructions+=3;goto B57397f;
case 0x573983:c.instructions+=2;goto B573983;
case 0x573987:c.instructions+=1;goto B573987;
case 0x57398a:goto L57398a;
case 0x57398d:c.instructions+=2;goto B57398d;
case 0x573990:c.instructions+=1;goto B573990;
case 0x573992:goto L573992;
case 0x573995:c.instructions+=13;goto B573995;
case 0x573998:c.instructions+=12;goto B573998;
case 0x57399a:c.instructions+=11;goto B57399a;
case 0x57399e:c.instructions+=10;goto B57399e;
case 0x5739a1:c.instructions+=9;goto B5739a1;
case 0x5739a3:c.instructions+=8;goto B5739a3;
case 0x5739a5:c.instructions+=7;goto B5739a5;
case 0x5739a7:c.instructions+=6;goto B5739a7;
case 0x5739aa:c.instructions+=5;goto B5739aa;
case 0x5739ac:c.instructions+=4;goto B5739ac;
case 0x5739ae:c.instructions+=3;goto B5739ae;
case 0x5739b2:c.instructions+=2;goto B5739b2;
case 0x5739b6:c.instructions+=1;goto B5739b6;
case 0x5739b9:goto L5739b9;
case 0x5739be:c.instructions+=5;goto B5739be;
case 0x5739c2:c.instructions+=4;goto B5739c2;
case 0x5739c4:c.instructions+=3;goto B5739c4;
case 0x5739c7:c.instructions+=2;goto B5739c7;
case 0x5739ca:c.instructions+=1;goto B5739ca;
case 0x5739cd:goto L5739cd;
case 0x5739cf:goto L5739cf;
case 0x5739d2:c.instructions+=13;goto B5739d2;
case 0x5739d5:c.instructions+=12;goto B5739d5;
case 0x5739d7:c.instructions+=11;goto B5739d7;
case 0x5739db:c.instructions+=10;goto B5739db;
case 0x5739de:c.instructions+=9;goto B5739de;
case 0x5739e0:c.instructions+=8;goto B5739e0;
case 0x5739e2:c.instructions+=7;goto B5739e2;
case 0x5739e4:c.instructions+=6;goto B5739e4;
case 0x5739e6:c.instructions+=5;goto B5739e6;
case 0x5739e9:c.instructions+=4;goto B5739e9;
case 0x5739eb:c.instructions+=3;goto B5739eb;
case 0x5739ee:c.instructions+=2;goto B5739ee;
case 0x5739f2:c.instructions+=1;goto B5739f2;
case 0x5739f6:goto L5739f6;
case 0x5739f8:c.instructions+=5;goto B5739f8;
case 0x5739fb:c.instructions+=4;goto B5739fb;
case 0x5739fe:c.instructions+=3;goto B5739fe;
case 0x573a01:c.instructions+=2;goto B573a01;
case 0x573a05:c.instructions+=1;goto B573a05;
case 0x573a07:goto L573a07;
case 0x573a0a:c.instructions+=14;goto B573a0a;
case 0x573a0d:c.instructions+=13;goto B573a0d;
case 0x573a0f:c.instructions+=12;goto B573a0f;
case 0x573a13:c.instructions+=11;goto B573a13;
case 0x573a16:c.instructions+=10;goto B573a16;
case 0x573a18:c.instructions+=9;goto B573a18;
case 0x573a1a:c.instructions+=8;goto B573a1a;
case 0x573a1c:c.instructions+=7;goto B573a1c;
case 0x573a1e:c.instructions+=6;goto B573a1e;
case 0x573a21:c.instructions+=5;goto B573a21;
case 0x573a23:c.instructions+=4;goto B573a23;
case 0x573a27:c.instructions+=3;goto B573a27;
case 0x573a2b:c.instructions+=2;goto B573a2b;
case 0x573a2f:c.instructions+=1;goto B573a2f;
case 0x573a32:goto L573a32;
case 0x573a35:c.instructions+=8;goto B573a35;
case 0x573a37:c.instructions+=7;goto B573a37;
case 0x573a39:c.instructions+=6;goto B573a39;
case 0x573a3c:c.instructions+=5;goto B573a3c;
case 0x573a3f:c.instructions+=4;goto B573a3f;
case 0x573a42:c.instructions+=3;goto B573a42;
case 0x573a46:c.instructions+=2;goto B573a46;
case 0x573a4a:c.instructions+=1;goto B573a4a;
case 0x573a4c:goto L573a4c;
case 0x573a4f:c.instructions+=13;goto B573a4f;
case 0x573a53:c.instructions+=12;goto B573a53;
case 0x573a56:c.instructions+=11;goto B573a56;
case 0x573a58:c.instructions+=10;goto B573a58;
case 0x573a5b:c.instructions+=9;goto B573a5b;
case 0x573a5d:c.instructions+=8;goto B573a5d;
case 0x573a5f:c.instructions+=7;goto B573a5f;
case 0x573a61:c.instructions+=6;goto B573a61;
case 0x573a64:c.instructions+=5;goto B573a64;
case 0x573a66:c.instructions+=4;goto B573a66;
case 0x573a68:c.instructions+=3;goto B573a68;
case 0x573a6c:c.instructions+=2;goto B573a6c;
case 0x573a70:c.instructions+=1;goto B573a70;
case 0x573a73:goto L573a73;
case 0x573a75:c.instructions+=3;goto B573a75;
case 0x573a79:c.instructions+=2;goto B573a79;
case 0x573a81:c.instructions+=1;goto B573a81;
case 0x573a83:goto L573a83;
case 0x573a87:c.instructions+=1;goto B573a87;
case 0x573a90:goto L573a90;
case 0x573a94:c.instructions+=7;goto B573a94;
case 0x573a96:c.instructions+=6;goto B573a96;
case 0x573a9a:c.instructions+=5;goto B573a9a;
case 0x573a9c:c.instructions+=4;goto B573a9c;
case 0x573a9e:c.instructions+=3;goto B573a9e;
case 0x573aa2:c.instructions+=2;goto B573aa2;
case 0x573aa9:c.instructions+=1;goto B573aa9;
case 0x573aab:goto L573aab;
case 0x573aad:c.instructions+=4;goto B573aad;
case 0x573ab0:c.instructions+=3;goto B573ab0;
case 0x573ab3:c.instructions+=2;goto B573ab3;
case 0x573ab6:c.instructions+=1;goto B573ab6;
case 0x573ab8:goto L573ab8;
case 0x573abb:c.instructions+=11;goto B573abb;
case 0x573abf:c.instructions+=10;goto B573abf;
case 0x573ac2:c.instructions+=9;goto B573ac2;
case 0x573ac4:c.instructions+=8;goto B573ac4;
case 0x573ac7:c.instructions+=7;goto B573ac7;
case 0x573ac9:c.instructions+=6;goto B573ac9;
case 0x573acb:c.instructions+=5;goto B573acb;
case 0x573acd:c.instructions+=4;goto B573acd;
case 0x573acf:c.instructions+=3;goto B573acf;
case 0x573ad2:c.instructions+=2;goto B573ad2;
case 0x573ad4:c.instructions+=1;goto B573ad4;
case 0x573ad7:goto L573ad7;
case 0x573ada:c.instructions+=1;goto B573ada;
case 0x573adf:goto L573adf;
case 0x573ae5:c.instructions+=2;goto B573ae5;
case 0x573aea:c.instructions+=1;goto B573aea;
case 0x573aec:goto L573aec;
case 0x573af0:goto L573af0;
case 0x573af2:c.instructions+=3;goto B573af2;
case 0x573af3:c.instructions+=2;goto B573af3;
case 0x573af5:c.instructions+=1;goto B573af5;
case 0x573af7:goto L573af7;
case 0x573afc:c.instructions+=6;goto B573afc;
case 0x573afe:c.instructions+=5;goto B573afe;
case 0x573b00:c.instructions+=4;goto B573b00;
case 0x573b06:c.instructions+=3;goto B573b06;
case 0x573b08:c.instructions+=2;goto B573b08;
case 0x573b0a:c.instructions+=1;goto B573b0a;
case 0x573b0c:goto L573b0c;
case 0x573b12:c.instructions+=7;goto B573b12;
case 0x573b17:c.instructions+=6;goto B573b17;
case 0x573b19:c.instructions+=5;goto B573b19;
case 0x573b1b:c.instructions+=4;goto B573b1b;
case 0x573b1d:c.instructions+=3;goto B573b1d;
case 0x573b23:c.instructions+=2;goto B573b23;
case 0x573b25:c.instructions+=1;goto B573b25;
case 0x573b27:goto L573b27;
case 0x573b29:c.instructions+=1;goto B573b29;
case 0x573b2b:goto L573b2b;
case 0x573b2e:c.instructions+=12;goto B573b2e;
case 0x573b31:c.instructions+=11;goto B573b31;
case 0x573b33:c.instructions+=10;goto B573b33;
case 0x573b37:c.instructions+=9;goto B573b37;
case 0x573b3a:c.instructions+=8;goto B573b3a;
case 0x573b3c:c.instructions+=7;goto B573b3c;
case 0x573b3e:c.instructions+=6;goto B573b3e;
case 0x573b40:c.instructions+=5;goto B573b40;
case 0x573b42:c.instructions+=4;goto B573b42;
case 0x573b45:c.instructions+=3;goto B573b45;
case 0x573b47:c.instructions+=2;goto B573b47;
case 0x573b4a:c.instructions+=1;goto B573b4a;
case 0x573b50:goto L573b50;
case 0x573b52:c.instructions+=5;goto B573b52;
case 0x573b53:c.instructions+=4;goto B573b53;
case 0x573b56:c.instructions+=3;goto B573b56;
case 0x573b58:c.instructions+=2;goto B573b58;
case 0x573b59:c.instructions+=1;goto B573b59;
case 0x573b5b:goto L573b5b;
case 0x573b5e:c.instructions+=11;goto B573b5e;
case 0x573b61:c.instructions+=10;goto B573b61;
case 0x573b63:c.instructions+=9;goto B573b63;
case 0x573b67:c.instructions+=8;goto B573b67;
case 0x573b6a:c.instructions+=7;goto B573b6a;
case 0x573b6c:c.instructions+=6;goto B573b6c;
case 0x573b6e:c.instructions+=5;goto B573b6e;
case 0x573b70:c.instructions+=4;goto B573b70;
case 0x573b72:c.instructions+=3;goto B573b72;
case 0x573b75:c.instructions+=2;goto B573b75;
case 0x573b77:c.instructions+=1;goto B573b77;
case 0x573b7a:goto L573b7a;
case 0x573b7c:c.instructions+=1;goto B573b7c;
case 0x573b7e:goto L573b7e;
case 0x573b81:c.instructions+=1;goto B573b81;
case 0x573b87:goto L573b87;
case 0x573b8a:c.instructions+=2;goto B573b8a;
case 0x573b8c:c.instructions+=1;goto B573b8c;
case 0x573b8e:goto L573b8e;
case 0x573b93:c.instructions+=8;goto B573b93;
case 0x573b95:c.instructions+=7;goto B573b95;
case 0x573b97:c.instructions+=6;goto B573b97;
case 0x573b99:c.instructions+=5;goto B573b99;
case 0x573b9c:c.instructions+=4;goto B573b9c;
case 0x573b9e:c.instructions+=3;goto B573b9e;
case 0x573ba3:c.instructions+=2;goto B573ba3;
case 0x573ba5:c.instructions+=1;goto B573ba5;
case 0x573ba7:goto L573ba7;
case 0x573ba9:c.instructions+=1;goto B573ba9;
case 0x573bab:goto L573bab;
case 0x573bae:c.instructions+=11;goto B573bae;
case 0x573bb1:c.instructions+=10;goto B573bb1;
case 0x573bb3:c.instructions+=9;goto B573bb3;
case 0x573bb7:c.instructions+=8;goto B573bb7;
case 0x573bba:c.instructions+=7;goto B573bba;
case 0x573bbc:c.instructions+=6;goto B573bbc;
case 0x573bbe:c.instructions+=5;goto B573bbe;
case 0x573bc0:c.instructions+=4;goto B573bc0;
case 0x573bc2:c.instructions+=3;goto B573bc2;
case 0x573bc5:c.instructions+=2;goto B573bc5;
case 0x573bc7:c.instructions+=1;goto B573bc7;
case 0x573bca:goto L573bca;
case 0x573bcc:c.instructions+=5;goto B573bcc;
case 0x573bcf:c.instructions+=4;goto B573bcf;
case 0x573bd2:c.instructions+=3;goto B573bd2;
case 0x573bd5:c.instructions+=2;goto B573bd5;
case 0x573bd9:c.instructions+=1;goto B573bd9;
case 0x573bdb:goto L573bdb;
case 0x573bde:c.instructions+=11;goto B573bde;
case 0x573be1:c.instructions+=10;goto B573be1;
case 0x573be3:c.instructions+=9;goto B573be3;
case 0x573be7:c.instructions+=8;goto B573be7;
case 0x573bea:c.instructions+=7;goto B573bea;
case 0x573bec:c.instructions+=6;goto B573bec;
case 0x573bee:c.instructions+=5;goto B573bee;
case 0x573bf0:c.instructions+=4;goto B573bf0;
case 0x573bf2:c.instructions+=3;goto B573bf2;
case 0x573bf5:c.instructions+=2;goto B573bf5;
case 0x573bf7:c.instructions+=1;goto B573bf7;
case 0x573bfa:goto L573bfa;
case 0x573bfe:c.instructions+=7;goto B573bfe;
case 0x573c01:c.instructions+=6;goto B573c01;
case 0x573c03:c.instructions+=5;goto B573c03;
case 0x573c08:c.instructions+=4;goto B573c08;
case 0x573c0c:c.instructions+=3;goto B573c0c;
case 0x573c0e:c.instructions+=2;goto B573c0e;
case 0x573c12:c.instructions+=1;goto B573c12;
case 0x573c14:goto L573c14;
case 0x573c16:c.instructions+=1;goto B573c16;
case 0x573c18:goto L573c18;
case 0x573c1d:c.instructions+=6;goto B573c1d;
case 0x573c1f:c.instructions+=5;goto B573c1f;
case 0x573c21:c.instructions+=4;goto B573c21;
case 0x573c23:c.instructions+=3;goto B573c23;
case 0x573c25:c.instructions+=2;goto B573c25;
case 0x573c27:c.instructions+=1;goto B573c27;
case 0x573c29:goto L573c29;
case 0x573c2b:c.instructions+=1;goto B573c2b;
case 0x573c2d:goto L573c2d;
case 0x573c30:c.instructions+=11;goto B573c30;
case 0x573c33:c.instructions+=10;goto B573c33;
case 0x573c35:c.instructions+=9;goto B573c35;
case 0x573c39:c.instructions+=8;goto B573c39;
case 0x573c3c:c.instructions+=7;goto B573c3c;
case 0x573c3e:c.instructions+=6;goto B573c3e;
case 0x573c40:c.instructions+=5;goto B573c40;
case 0x573c42:c.instructions+=4;goto B573c42;
case 0x573c44:c.instructions+=3;goto B573c44;
case 0x573c47:c.instructions+=2;goto B573c47;
case 0x573c49:c.instructions+=1;goto B573c49;
case 0x573c4c:goto L573c4c;
case 0x573c51:c.instructions+=3;goto B573c51;
case 0x573c55:c.instructions+=2;goto B573c55;
case 0x573c57:c.instructions+=1;goto B573c57;
case 0x573c5b:goto L573c5b;
case 0x573c5d:c.instructions+=1;goto B573c5d;
case 0x573c61:goto L573c61;
case 0x573c65:c.instructions+=10;goto B573c65;
case 0x573c69:c.instructions+=9;goto B573c69;
case 0x573c6d:c.instructions+=8;goto B573c6d;
case 0x573c71:c.instructions+=7;goto B573c71;
case 0x573c73:c.instructions+=6;goto B573c73;
case 0x573c75:c.instructions+=5;goto B573c75;
case 0x573c79:c.instructions+=4;goto B573c79;
case 0x573c7b:c.instructions+=3;goto B573c7b;
case 0x573c7d:c.instructions+=2;goto B573c7d;
case 0x573c81:c.instructions+=1;goto B573c81;
case 0x573c83:goto L573c83;
case 0x573c87:c.instructions+=5;goto B573c87;
case 0x573c8c:c.instructions+=4;goto B573c8c;
case 0x573c8e:c.instructions+=3;goto B573c8e;
case 0x573c92:c.instructions+=2;goto B573c92;
case 0x573c94:c.instructions+=1;goto B573c94;
case 0x573c99:goto L573c99;
case 0x573c9d:c.instructions+=6;goto B573c9d;
case 0x573ca4:c.instructions+=5;goto B573ca4;
case 0x573ca5:c.instructions+=4;goto B573ca5;
case 0x573ca9:c.instructions+=3;goto B573ca9;
case 0x573cab:c.instructions+=2;goto B573cab;
case 0x573cad:c.instructions+=1;goto B573cad;
case 0x573cb3:goto L573cb3;
case 0x573cb5:c.instructions+=1;goto B573cb5;
case 0x573cbb:goto L573cbb;
case 0x573cbf:c.instructions+=7;goto B573cbf;
case 0x573cca:c.instructions+=6;goto B573cca;
case 0x573ccb:c.instructions+=5;goto B573ccb;
case 0x573ccf:c.instructions+=4;goto B573ccf;
case 0x573cd3:c.instructions+=3;goto B573cd3;
case 0x573cd7:c.instructions+=2;goto B573cd7;
case 0x573cde:c.instructions+=1;goto B573cde;
case 0x573ce3:goto L573ce3;
case 0x573ce6:c.instructions+=6;goto B573ce6;
case 0x573ce9:c.instructions+=5;goto B573ce9;
case 0x573ceb:c.instructions+=4;goto B573ceb;
case 0x573cee:c.instructions+=3;goto B573cee;
case 0x573cf1:c.instructions+=2;goto B573cf1;
case 0x573cf2:c.instructions+=1;goto B573cf2;
case 0x573cf4:goto L573cf4;
case 0x573cf8:c.instructions+=5;goto B573cf8;
case 0x573cfa:c.instructions+=4;goto B573cfa;
case 0x573cfc:c.instructions+=3;goto B573cfc;
case 0x573d00:c.instructions+=2;goto B573d00;
case 0x573d04:c.instructions+=1;goto B573d04;
case 0x573d0a:goto L573d0a;
case 0x573d0c:goto L573d0c;
case 0x573d0e:c.instructions+=1;goto B573d0e;
case 0x573d10:goto L573d10;
case 0x573d12:c.instructions+=2;goto B573d12;
case 0x573d14:c.instructions+=1;goto B573d14;
case 0x573d16:goto L573d16;
case 0x573d18:c.instructions+=4;goto B573d18;
case 0x573d1b:c.instructions+=3;goto B573d1b;
case 0x573d1e:c.instructions+=2;goto B573d1e;
case 0x573d21:c.instructions+=1;goto B573d21;
case 0x573d23:goto L573d23;
case 0x573d26:c.instructions+=11;goto B573d26;
case 0x573d29:c.instructions+=10;goto B573d29;
case 0x573d2b:c.instructions+=9;goto B573d2b;
case 0x573d2f:c.instructions+=8;goto B573d2f;
case 0x573d32:c.instructions+=7;goto B573d32;
case 0x573d34:c.instructions+=6;goto B573d34;
case 0x573d36:c.instructions+=5;goto B573d36;
case 0x573d38:c.instructions+=4;goto B573d38;
case 0x573d3a:c.instructions+=3;goto B573d3a;
case 0x573d3d:c.instructions+=2;goto B573d3d;
case 0x573d3f:c.instructions+=1;goto B573d3f;
case 0x573d42:goto L573d42;
case 0x573d45:c.instructions+=1;goto B573d45;
case 0x573d4a:goto L573d4a;
case 0x573d50:c.instructions+=2;goto B573d50;
case 0x573d55:c.instructions+=1;goto B573d55;
case 0x573d57:goto L573d57;
case 0x573d59:c.instructions+=3;goto B573d59;
case 0x573d5a:c.instructions+=2;goto B573d5a;
case 0x573d5c:c.instructions+=1;goto B573d5c;
case 0x573d5e:goto L573d5e;
case 0x573d63:c.instructions+=6;goto B573d63;
case 0x573d65:c.instructions+=5;goto B573d65;
case 0x573d67:c.instructions+=4;goto B573d67;
case 0x573d6d:c.instructions+=3;goto B573d6d;
case 0x573d6f:c.instructions+=2;goto B573d6f;
case 0x573d71:c.instructions+=1;goto B573d71;
case 0x573d73:goto L573d73;
case 0x573d79:c.instructions+=7;goto B573d79;
case 0x573d7e:c.instructions+=6;goto B573d7e;
case 0x573d80:c.instructions+=5;goto B573d80;
case 0x573d82:c.instructions+=4;goto B573d82;
case 0x573d84:c.instructions+=3;goto B573d84;
case 0x573d8a:c.instructions+=2;goto B573d8a;
case 0x573d8c:c.instructions+=1;goto B573d8c;
case 0x573d8e:goto L573d8e;
case 0x573d90:c.instructions+=1;goto B573d90;
case 0x573d92:goto L573d92;
case 0x573d95:c.instructions+=12;goto B573d95;
case 0x573d98:c.instructions+=11;goto B573d98;
case 0x573d9a:c.instructions+=10;goto B573d9a;
case 0x573d9e:c.instructions+=9;goto B573d9e;
case 0x573da1:c.instructions+=8;goto B573da1;
case 0x573da3:c.instructions+=7;goto B573da3;
case 0x573da5:c.instructions+=6;goto B573da5;
case 0x573da7:c.instructions+=5;goto B573da7;
case 0x573da9:c.instructions+=4;goto B573da9;
case 0x573dac:c.instructions+=3;goto B573dac;
case 0x573dae:c.instructions+=2;goto B573dae;
case 0x573db1:c.instructions+=1;goto B573db1;
case 0x573db3:goto L573db3;
case 0x573db5:c.instructions+=5;goto B573db5;
case 0x573db6:c.instructions+=4;goto B573db6;
case 0x573db9:c.instructions+=3;goto B573db9;
case 0x573dbb:c.instructions+=2;goto B573dbb;
case 0x573dbc:c.instructions+=1;goto B573dbc;
case 0x573dbe:goto L573dbe;
case 0x573dc1:c.instructions+=11;goto B573dc1;
case 0x573dc4:c.instructions+=10;goto B573dc4;
case 0x573dc6:c.instructions+=9;goto B573dc6;
case 0x573dca:c.instructions+=8;goto B573dca;
case 0x573dcd:c.instructions+=7;goto B573dcd;
case 0x573dcf:c.instructions+=6;goto B573dcf;
case 0x573dd1:c.instructions+=5;goto B573dd1;
case 0x573dd3:c.instructions+=4;goto B573dd3;
case 0x573dd5:c.instructions+=3;goto B573dd5;
case 0x573dd8:c.instructions+=2;goto B573dd8;
case 0x573dda:c.instructions+=1;goto B573dda;
case 0x573ddd:goto L573ddd;
case 0x573ddf:c.instructions+=1;goto B573ddf;
case 0x573de1:goto L573de1;
case 0x573de4:c.instructions+=1;goto B573de4;
case 0x573dea:goto L573dea;
case 0x573ded:c.instructions+=2;goto B573ded;
case 0x573def:c.instructions+=1;goto B573def;
case 0x573df1:goto L573df1;
case 0x573df6:c.instructions+=8;goto B573df6;
case 0x573df8:c.instructions+=7;goto B573df8;
case 0x573dfa:c.instructions+=6;goto B573dfa;
case 0x573dfc:c.instructions+=5;goto B573dfc;
case 0x573dff:c.instructions+=4;goto B573dff;
case 0x573e01:c.instructions+=3;goto B573e01;
case 0x573e06:c.instructions+=2;goto B573e06;
case 0x573e08:c.instructions+=1;goto B573e08;
case 0x573e0a:goto L573e0a;
case 0x573e0c:c.instructions+=1;goto B573e0c;
case 0x573e0e:goto L573e0e;
case 0x573e11:c.instructions+=11;goto B573e11;
case 0x573e14:c.instructions+=10;goto B573e14;
case 0x573e16:c.instructions+=9;goto B573e16;
case 0x573e1a:c.instructions+=8;goto B573e1a;
case 0x573e1d:c.instructions+=7;goto B573e1d;
case 0x573e1f:c.instructions+=6;goto B573e1f;
case 0x573e21:c.instructions+=5;goto B573e21;
case 0x573e23:c.instructions+=4;goto B573e23;
case 0x573e25:c.instructions+=3;goto B573e25;
case 0x573e28:c.instructions+=2;goto B573e28;
case 0x573e2a:c.instructions+=1;goto B573e2a;
case 0x573e2d:goto L573e2d;
case 0x573e2f:c.instructions+=5;goto B573e2f;
case 0x573e32:c.instructions+=4;goto B573e32;
case 0x573e35:c.instructions+=3;goto B573e35;
case 0x573e38:c.instructions+=2;goto B573e38;
case 0x573e3c:c.instructions+=1;goto B573e3c;
case 0x573e3e:goto L573e3e;
case 0x573e41:c.instructions+=11;goto B573e41;
case 0x573e44:c.instructions+=10;goto B573e44;
case 0x573e46:c.instructions+=9;goto B573e46;
case 0x573e4a:c.instructions+=8;goto B573e4a;
case 0x573e4d:c.instructions+=7;goto B573e4d;
case 0x573e4f:c.instructions+=6;goto B573e4f;
case 0x573e51:c.instructions+=5;goto B573e51;
case 0x573e53:c.instructions+=4;goto B573e53;
case 0x573e55:c.instructions+=3;goto B573e55;
case 0x573e58:c.instructions+=2;goto B573e58;
case 0x573e5a:c.instructions+=1;goto B573e5a;
case 0x573e5d:goto L573e5d;
case 0x573e61:c.instructions+=7;goto B573e61;
case 0x573e64:c.instructions+=6;goto B573e64;
case 0x573e66:c.instructions+=5;goto B573e66;
case 0x573e6b:c.instructions+=4;goto B573e6b;
case 0x573e6f:c.instructions+=3;goto B573e6f;
case 0x573e71:c.instructions+=2;goto B573e71;
case 0x573e75:c.instructions+=1;goto B573e75;
case 0x573e77:goto L573e77;
case 0x573e79:c.instructions+=1;goto B573e79;
case 0x573e7b:goto L573e7b;
case 0x573e80:c.instructions+=6;goto B573e80;
case 0x573e82:c.instructions+=5;goto B573e82;
case 0x573e84:c.instructions+=4;goto B573e84;
case 0x573e86:c.instructions+=3;goto B573e86;
case 0x573e88:c.instructions+=2;goto B573e88;
case 0x573e8a:c.instructions+=1;goto B573e8a;
case 0x573e8c:goto L573e8c;
case 0x573e8e:c.instructions+=1;goto B573e8e;
case 0x573e90:goto L573e90;
case 0x573e93:c.instructions+=11;goto B573e93;
case 0x573e96:c.instructions+=10;goto B573e96;
case 0x573e98:c.instructions+=9;goto B573e98;
case 0x573e9c:c.instructions+=8;goto B573e9c;
case 0x573e9f:c.instructions+=7;goto B573e9f;
case 0x573ea1:c.instructions+=6;goto B573ea1;
case 0x573ea3:c.instructions+=5;goto B573ea3;
case 0x573ea5:c.instructions+=4;goto B573ea5;
case 0x573ea7:c.instructions+=3;goto B573ea7;
case 0x573eaa:c.instructions+=2;goto B573eaa;
case 0x573eac:c.instructions+=1;goto B573eac;
case 0x573eaf:goto L573eaf;
case 0x573eb4:c.instructions+=3;goto B573eb4;
case 0x573eb8:c.instructions+=2;goto B573eb8;
case 0x573eba:c.instructions+=1;goto B573eba;
case 0x573ebe:goto L573ebe;
case 0x573ec0:c.instructions+=2;goto B573ec0;
case 0x573ec4:c.instructions+=1;goto B573ec4;
case 0x573ec8:goto L573ec8;
case 0x573ec9:c.instructions+=1;goto B573ec9;
case 0x573ed0:goto L573ed0;
case 0x573ed2:c.instructions+=3;goto B573ed2;
case 0x573ed5:c.instructions+=2;goto B573ed5;
case 0x573edd:c.instructions+=1;goto B573edd;
case 0x573edf:goto L573edf;
case 0x573ee0:goto L573ee0;
case 0x573ee2:c.instructions+=1;goto B573ee2;
case 0x573ee4:goto L573ee4;
case 0x573ee8:c.instructions+=9;goto B573ee8;
case 0x573eeb:c.instructions+=8;goto B573eeb;
case 0x573ef3:c.instructions+=7;goto B573ef3;
case 0x573ef7:c.instructions+=6;goto B573ef7;
case 0x573efe:c.instructions+=5;goto B573efe;
case 0x573eff:c.instructions+=4;goto B573eff;
case 0x573f01:c.instructions+=3;goto B573f01;
case 0x573f05:c.instructions+=2;goto B573f05;
case 0x573f09:c.instructions+=1;goto B573f09;
case 0x573f0f:goto L573f0f;
case 0x573f13:c.instructions+=1;goto B573f13;
case 0x573f17:goto L573f17;
case 0x573f1e:c.instructions+=2;goto B573f1e;
case 0x573f23:c.instructions+=1;goto B573f23;
case 0x573f28:goto L573f28;
case 0x573f2b:c.instructions+=6;goto B573f2b;
case 0x573f2e:c.instructions+=5;goto B573f2e;
case 0x573f30:c.instructions+=4;goto B573f30;
case 0x573f33:c.instructions+=3;goto B573f33;
case 0x573f36:c.instructions+=2;goto B573f36;
case 0x573f37:c.instructions+=1;goto B573f37;
case 0x573f39:goto L573f39;
case 0x573f40:c.instructions+=10;goto B573f40;
case 0x573f44:c.instructions+=9;goto B573f44;
case 0x573f4b:c.instructions+=8;goto B573f4b;
case 0x573f52:c.instructions+=7;goto B573f52;
case 0x573f56:c.instructions+=6;goto B573f56;
case 0x573f5a:c.instructions+=5;goto B573f5a;
case 0x573f5e:c.instructions+=4;goto B573f5e;
case 0x573f63:c.instructions+=3;goto B573f63;
case 0x573f65:c.instructions+=2;goto B573f65;
case 0x573f69:c.instructions+=1;goto B573f69;
case 0x573f6f:goto L573f6f;
case 0x573f74:c.instructions+=2;goto B573f74;
case 0x573f78:c.instructions+=1;goto B573f78;
case 0x573f80:goto L573f80;
case 0x573f83:c.instructions+=1;goto B573f83;
case 0x573f89:goto L573f89;
case 0x573f8e:c.instructions+=5;goto B573f8e;
case 0x573f90:c.instructions+=4;goto B573f90;
case 0x573f94:c.instructions+=3;goto B573f94;
case 0x573f96:c.instructions+=2;goto B573f96;
case 0x573f9a:c.instructions+=1;goto B573f9a;
case 0x573fa0:goto L573fa0;
case 0x573fa5:c.instructions+=10;goto B573fa5;
case 0x573fa9:c.instructions+=9;goto B573fa9;
case 0x573fad:c.instructions+=8;goto B573fad;
case 0x573fb1:c.instructions+=7;goto B573fb1;
case 0x573fb5:c.instructions+=6;goto B573fb5;
case 0x573fb8:c.instructions+=5;goto B573fb8;
case 0x573fbc:c.instructions+=4;goto B573fbc;
case 0x573fc0:c.instructions+=3;goto B573fc0;
case 0x573fc4:c.instructions+=2;goto B573fc4;
case 0x573fc8:c.instructions+=1;goto B573fc8;
case 0x573fca:goto L573fca;
case 0x573fce:c.instructions+=2;goto B573fce;
case 0x573fd2:c.instructions+=1;goto B573fd2;
case 0x573fd7:goto L573fd7;
case 0x573fd9:c.instructions+=1;goto B573fd9;
case 0x573fdb:goto L573fdb;
case 0x573fdf:c.instructions+=8;goto B573fdf;
case 0x573fe1:c.instructions+=7;goto B573fe1;
case 0x573fe3:c.instructions+=6;goto B573fe3;
case 0x573fe5:c.instructions+=5;goto B573fe5;
case 0x573fe7:c.instructions+=4;goto B573fe7;
case 0x573fea:c.instructions+=3;goto B573fea;
case 0x573fec:c.instructions+=2;goto B573fec;
case 0x573fef:c.instructions+=1;goto B573fef;
case 0x573ff2:goto L573ff2;
case 0x573ff4:goto L573ff4;
case 0x573ff6:c.instructions+=1;goto B573ff6;
case 0x573ff9:goto L573ff9;
case 0x573ffb:goto L573ffb;
case 0x573fff:c.instructions+=1;goto B573fff;
default:missing_instruction(c.pc);}
B573002:L573002:{c.instructions+=3;NFSU2_TR(0x573002);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((R+28),(U+0),4);
}
B573008:{NFSU2_TR(0x573008);
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
B57300b:{NFSU2_TR(0x57300b);
w4(R+4,u32(0x1000ull));
}
B573010:L573010:{c.instructions+=1;NFSU2_TR(0x573010);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L573012;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573010u);}goto L573010;}
}
B573012:L573012:{c.instructions+=4;NFSU2_TR(0x573012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B573013:{NFSU2_TR(0x573013);
__builtin_memmove((R+0),(R+24),4);
}
B573015:{NFSU2_TR(0x573015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B573016:{NFSU2_TR(0x573016);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B573020:L573020:{c.instructions+=20;NFSU2_TR(0x573020);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B573023:{NFSU2_TR(0x573023);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573024:{NFSU2_TR(0x573024);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573025:{NFSU2_TR(0x573025);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573026:{NFSU2_TR(0x573026);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57302a:{NFSU2_TR(0x57302a);
__builtin_memmove((R+0),(R+28),4);
}
B57302c:{NFSU2_TR(0x57302c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B57302e:{NFSU2_TR(0x57302e);
u8 U[12];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B573035:{NFSU2_TR(0x573035);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573039:{NFSU2_TR(0x573039);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B57303c:{NFSU2_TR(0x57303c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B57303e:{NFSU2_TR(0x57303e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+4,shl<u8>(r1(R+4),u64(r4(U+0))));
}
B573041:{NFSU2_TR(0x573041);
w1(R+4,u8(u32(r1(R+4))+u32(r1(R+8))));
}
B573043:{NFSU2_TR(0x573043);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B573045:{NFSU2_TR(0x573045);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B573048:{NFSU2_TR(0x573048);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57304b:{NFSU2_TR(0x57304b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57304c:{NFSU2_TR(0x57304c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57304e:{NFSU2_TR(0x57304e);
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
B573050:{NFSU2_TR(0x573050);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L573060;}}
}
B573052:L573052:{c.instructions+=6;NFSU2_TR(0x573052);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B573055:{NFSU2_TR(0x573055);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B573058:{NFSU2_TR(0x573058);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B57305b:{NFSU2_TR(0x57305b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B57305c:{NFSU2_TR(0x57305c);
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
B57305e:{NFSU2_TR(0x57305e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573052u);}goto L573052;}}
}
B573060:L573060:{c.instructions+=6;NFSU2_TR(0x573060);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B573063:{NFSU2_TR(0x573063);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B573067:{NFSU2_TR(0x573067);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B573068:{NFSU2_TR(0x573068);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B573069:{NFSU2_TR(0x573069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57306a:{NFSU2_TR(0x57306a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B573070:L573070:{c.instructions+=4;NFSU2_TR(0x573070);
__builtin_memmove((R+4),gp(0x8650d0),4);
}
B573076:{NFSU2_TR(0x573076);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B573078:{NFSU2_TR(0x573078);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B57307a:{NFSU2_TR(0x57307a);
if(r1(R+518)){{goto L573086;}}
}
B57307c:L57307c:{c.instructions+=2;NFSU2_TR(0x57307c);
__builtin_memmove(gp(0x8650d8),(R+0),4);
}
B573081:{NFSU2_TR(0x573081);
__builtin_memmove(gp(0x8650d0),(R+0),4);
}
B573086:L573086:{c.instructions+=1;NFSU2_TR(0x573086);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B573090:L573090:{c.instructions+=6;NFSU2_TR(0x573090);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573094:{NFSU2_TR(0x573094);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B573097:{NFSU2_TR(0x573097);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573098:{NFSU2_TR(0x573098);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B57309a:{NFSU2_TR(0x57309a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57309c:{NFSU2_TR(0x57309c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57312e;}}
}
B5730a2:L5730a2:{c.instructions+=6;NFSU2_TR(0x5730a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5730a6:{NFSU2_TR(0x5730a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5730a7:{NFSU2_TR(0x5730a7);
__builtin_memmove((R+12),gp(0x8650e4),4);
}
B5730ad:{NFSU2_TR(0x5730ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5730ae:{NFSU2_TR(0x5730ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5730af:{NFSU2_TR(0x5730af);
}
B5730b0:L5730b0:{c.instructions+=2;NFSU2_TR(0x5730b0);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650e0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5730b6:{NFSU2_TR(0x5730b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57312b;}}
}
B5730b8:L5730b8:{c.instructions+=11;NFSU2_TR(0x5730b8);
__builtin_memmove((R+4),gp(0x8650e8),4);
}
B5730be:{NFSU2_TR(0x5730be);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5730c1:{NFSU2_TR(0x5730c1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+4,u32(r1(U+0)));
}
B5730c4:{NFSU2_TR(0x5730c4);
__builtin_memmove((R+8),(R+4),4);
}
B5730c6:{NFSU2_TR(0x5730c6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B5730c9:{NFSU2_TR(0x5730c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5730cc:{NFSU2_TR(0x5730cc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5730cd:{NFSU2_TR(0x5730cd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5730cf:{NFSU2_TR(0x5730cf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5730d1:{NFSU2_TR(0x5730d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5730d5:{NFSU2_TR(0x5730d5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5730f0;}}
}
B5730d7:L5730d7:{c.instructions+=3;NFSU2_TR(0x5730d7);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5730db:{NFSU2_TR(0x5730db);
__builtin_memmove((R+4),(R+8),4);
}
B5730dd:{NFSU2_TR(0x5730dd);
__builtin_memmove((R+4),(R+4),4);
}
B5730e0:L5730e0:{c.instructions+=6;NFSU2_TR(0x5730e0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B5730e3:{NFSU2_TR(0x5730e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B5730e6:{NFSU2_TR(0x5730e6);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B5730e8:{NFSU2_TR(0x5730e8);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5730e9:{NFSU2_TR(0x5730e9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5730ea:{NFSU2_TR(0x5730ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5730e0u);}goto L5730e0;}}
}
B5730ec:L5730ec:{c.instructions+=1;NFSU2_TR(0x5730ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5730f0:L5730f0:{c.instructions+=5;NFSU2_TR(0x5730f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5730f4:{NFSU2_TR(0x5730f4);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5730f8:{NFSU2_TR(0x5730f8);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B5730fc:{NFSU2_TR(0x5730fc);
__builtin_memmove(gp(0x8650e4),(R+12),4);
}
B573102:{NFSU2_TR(0x573102);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L573125;}}
}
B573104:L573104:{c.instructions+=2;NFSU2_TR(0x573104);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573106:{NFSU2_TR(0x573106);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L573125;}}
}
B573108:L573108:{c.instructions+=2;NFSU2_TR(0x573108);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57310a:{NFSU2_TR(0x57310a);
__builtin_memmove((R+12),(R+12),4);
}
B573110:L573110:{c.instructions+=7;NFSU2_TR(0x573110);
__builtin_memmove((R+12),(R+28),4);
}
B573112:{NFSU2_TR(0x573112);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B573114:{NFSU2_TR(0x573114);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B573115:{NFSU2_TR(0x573115);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B573118:{NFSU2_TR(0x573118);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B573119:{NFSU2_TR(0x573119);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57311d:{NFSU2_TR(0x57311d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573110u);}goto L573110;}}
}
B57311f:L57311f:{c.instructions+=1;NFSU2_TR(0x57311f);
__builtin_memmove((R+12),gp(0x8650e4),4);
}
B573125:L573125:{c.instructions+=2;NFSU2_TR(0x573125);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B573129:{NFSU2_TR(0x573129);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5730b0u);}goto L5730b0;}}
}
B57312b:L57312b:{c.instructions+=3;NFSU2_TR(0x57312b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57312c:{NFSU2_TR(0x57312c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57312d:{NFSU2_TR(0x57312d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57312e:L57312e:{c.instructions+=4;NFSU2_TR(0x57312e);
__builtin_memmove((R+0),(R+20),4);
}
B573130:{NFSU2_TR(0x573130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B573131:{NFSU2_TR(0x573131);
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
B573134:{NFSU2_TR(0x573134);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B573140:L573140:{c.instructions+=17;NFSU2_TR(0x573140);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B573144:{NFSU2_TR(0x573144);
__builtin_memmove((R+0),(R+4),4);
}
B573146:{NFSU2_TR(0x573146);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57314a:{NFSU2_TR(0x57314a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57314d:{NFSU2_TR(0x57314d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57314f:{NFSU2_TR(0x57314f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B573151:{NFSU2_TR(0x573151);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B573155:{NFSU2_TR(0x573155);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57315c:{NFSU2_TR(0x57315c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57315f:{NFSU2_TR(0x57315f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573162:{NFSU2_TR(0x573162);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573165:{NFSU2_TR(0x573165);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573168:{NFSU2_TR(0x573168);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57316b:{NFSU2_TR(0x57316b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57316e:{NFSU2_TR(0x57316e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573171:{NFSU2_TR(0x573171);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573174:{NFSU2_TR(0x573174);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B573180:L573180:{c.instructions+=10;NFSU2_TR(0x573180);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573181:{NFSU2_TR(0x573181);
__builtin_memmove((R+20),(R+16),4);
}
B573183:{NFSU2_TR(0x573183);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B573186:{NFSU2_TR(0x573186);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B573189:{NFSU2_TR(0x573189);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57318a:{NFSU2_TR(0x57318a);
__builtin_memmove((R+24),(R+4),4);
}
B57318c:{NFSU2_TR(0x57318c);
__builtin_memmove((R+4),gp(0x866630),1);
}
B573192:{NFSU2_TR(0x573192);
w4(R+0,u32(0x1ull));
}
B573197:{NFSU2_TR(0x573197);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B573199:{NFSU2_TR(0x573199);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5731a1;}}
}
B57319b:L57319b:{c.instructions+=1;NFSU2_TR(0x57319b);
s4(0x866630,u32(u32(m4(0x866630))|u32(r4(R+0))));
}
B5731a1:L5731a1:{c.instructions+=4;NFSU2_TR(0x5731a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5731a4:{NFSU2_TR(0x5731a4);
__builtin_memmove((R+0),(R+4),4);
}
B5731a6:{NFSU2_TR(0x5731a6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5731a9:{NFSU2_TR(0x5731a9);
if(r1(R+518)){{goto L5731c0;}}
}
B5731ab:L5731ab:{c.instructions+=2;NFSU2_TR(0x5731ab);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5731ac:{NFSU2_TR(0x5731ac);
if(r1(R+518)){{goto L5731bb;}}
}
B5731ae:L5731ae:{c.instructions+=2;NFSU2_TR(0x5731ae);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5731af:{NFSU2_TR(0x5731af);
if(r1(R+518)){{goto L5731c0;}}
}
B5731b1:L5731b1:{c.instructions+=2;NFSU2_TR(0x5731b1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5731b9:{NFSU2_TR(0x5731b9);
{goto L5731d0;}
}
B5731bb:L5731bb:{c.instructions+=2;NFSU2_TR(0x5731bb);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5731be:{NFSU2_TR(0x5731be);
{goto L5731cc;}
}
B5731c0:L5731c0:{c.instructions+=4;NFSU2_TR(0x5731c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5731c3:{NFSU2_TR(0x5731c3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5731c4:{NFSU2_TR(0x5731c4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5731c8:{NFSU2_TR(0x5731c8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5731cc:L5731cc:{c.instructions+=1;NFSU2_TR(0x5731cc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5731d0:L5731d0:{c.instructions+=3;NFSU2_TR(0x5731d0);
__builtin_memmove((R+0),(R+4),4);
}
B5731d2:{NFSU2_TR(0x5731d2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5731d5:{NFSU2_TR(0x5731d5);
if(r1(R+518)){{goto L573354;}}
}
B5731db:L5731db:{c.instructions+=2;NFSU2_TR(0x5731db);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5731dc:{NFSU2_TR(0x5731dc);
if(r1(R+518)){{goto L57333e;}}
}
B5731e2:L5731e2:{c.instructions+=2;NFSU2_TR(0x5731e2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5731e3:{NFSU2_TR(0x5731e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L573382;}}
}
B5731e9:L5731e9:{c.instructions+=5;NFSU2_TR(0x5731e9);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5731ec:{NFSU2_TR(0x5731ec);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5731f2:{NFSU2_TR(0x5731f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5731f4:{NFSU2_TR(0x5731f4);
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
B5731f7:{NFSU2_TR(0x5731f7);
if(r1(R+514)){{goto L573281;}}
}
B5731fd:L5731fd:{c.instructions+=35;NFSU2_TR(0x5731fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573200:{NFSU2_TR(0x573200);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B573203:{NFSU2_TR(0x573203);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B573205:{NFSU2_TR(0x573205);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B573208:{NFSU2_TR(0x573208);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57320b:{NFSU2_TR(0x57320b);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57320e:{NFSU2_TR(0x57320e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B573211:{NFSU2_TR(0x573211);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B573215:{NFSU2_TR(0x573215);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B573217:{NFSU2_TR(0x573217);
w4(R+0,u32(0x866620ull));
}
B57321c:{NFSU2_TR(0x57321c);
{u32 ea_=u32(u32(8807968u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B573222:{NFSU2_TR(0x573222);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B573226:{NFSU2_TR(0x573226);
{u32 ea_=u32(u32(8807968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57322c:{NFSU2_TR(0x57322c);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57322f:{NFSU2_TR(0x57322f);
{u32 ea_=u32(u32(8807968u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B573235:{NFSU2_TR(0x573235);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B573237:{NFSU2_TR(0x573237);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57323a:{NFSU2_TR(0x57323a);
{u32 ea_=u32(u32(8807972u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B573240:{NFSU2_TR(0x573240);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B573243:{NFSU2_TR(0x573243);
{u32 ea_=u32(u32(8807976u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B573249:{NFSU2_TR(0x573249);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57324c:{NFSU2_TR(0x57324c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57324f:{NFSU2_TR(0x57324f);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B573252:{NFSU2_TR(0x573252);
{u32 ea_=u32(u32(8807968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B573258:{NFSU2_TR(0x573258);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B57325a:{NFSU2_TR(0x57325a);
{u32 ea_=u32(u32(8807968u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B573260:{NFSU2_TR(0x573260);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B573262:{NFSU2_TR(0x573262);
{u32 ea_=u32(u32(8807972u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B573268:{NFSU2_TR(0x573268);
{u32 ea_=u32(u32(8807972u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57326e:{NFSU2_TR(0x57326e);
{u32 ea_=u32(u32(8807976u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B573274:{NFSU2_TR(0x573274);
{u32 ea_=u32(u32(8807976u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57327a:{NFSU2_TR(0x57327a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57327b:{NFSU2_TR(0x57327b);
__builtin_memmove((R+16),(R+20),4);
}
B57327d:{NFSU2_TR(0x57327d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57327e:{NFSU2_TR(0x57327e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B573281:L573281:{c.instructions+=5;NFSU2_TR(0x573281);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B573284:{NFSU2_TR(0x573284);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B573288:{NFSU2_TR(0x573288);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57328a:{NFSU2_TR(0x57328a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57328d:{NFSU2_TR(0x57328d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L573382;}}
}
B573293:L573293:{c.instructions+=49;NFSU2_TR(0x573293);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573296:{NFSU2_TR(0x573296);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B573299:{NFSU2_TR(0x573299);
__builtin_memmove((R+4),(R+0),4);
}
B57329b:{NFSU2_TR(0x57329b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B57329e:{NFSU2_TR(0x57329e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5732a1:{NFSU2_TR(0x5732a1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5732a3:{NFSU2_TR(0x5732a3);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5732a6:{NFSU2_TR(0x5732a6);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5732aa:{NFSU2_TR(0x5732aa);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5732ae:{NFSU2_TR(0x5732ae);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5732b0:{NFSU2_TR(0x5732b0);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5732b3:{NFSU2_TR(0x5732b3);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5732b6:{NFSU2_TR(0x5732b6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5732b9:{NFSU2_TR(0x5732b9);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5732bc:{NFSU2_TR(0x5732bc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5732c0:{NFSU2_TR(0x5732c0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5732c2:{NFSU2_TR(0x5732c2);
{u32 ea_=u32(u32(8807968u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5732c8:{NFSU2_TR(0x5732c8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5732cc:{NFSU2_TR(0x5732cc);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5732cf:{NFSU2_TR(0x5732cf);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5732d3:{NFSU2_TR(0x5732d3);
{u32 ea_=u32(u32(8807968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5732d9:{NFSU2_TR(0x5732d9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5732db:{NFSU2_TR(0x5732db);
{u32 ea_=u32(u32(8807968u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5732e1:{NFSU2_TR(0x5732e1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5732e3:{NFSU2_TR(0x5732e3);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5732e5:{NFSU2_TR(0x5732e5);
{u32 ea_=u32(u32(8807972u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5732eb:{NFSU2_TR(0x5732eb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5732ed:{NFSU2_TR(0x5732ed);
{u32 ea_=u32(u32(8807976u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5732f3:{NFSU2_TR(0x5732f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5732f6:{NFSU2_TR(0x5732f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5732f9:{NFSU2_TR(0x5732f9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5732fb:{NFSU2_TR(0x5732fb);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5732fe:{NFSU2_TR(0x5732fe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B573300:{NFSU2_TR(0x573300);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B573304:{NFSU2_TR(0x573304);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B573307:{NFSU2_TR(0x573307);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57330a:{NFSU2_TR(0x57330a);
{u32 ea_=u32(u32(8807968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B573310:{NFSU2_TR(0x573310);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B573312:{NFSU2_TR(0x573312);
w4(R+0,u32(0x866620ull));
}
B573317:{NFSU2_TR(0x573317);
{u32 ea_=u32(u32(8807968u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57331d:{NFSU2_TR(0x57331d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B57331f:{NFSU2_TR(0x57331f);
{u32 ea_=u32(u32(8807972u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B573325:{NFSU2_TR(0x573325);
{u32 ea_=u32(u32(8807972u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57332b:{NFSU2_TR(0x57332b);
{u32 ea_=u32(u32(8807976u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B573331:{NFSU2_TR(0x573331);
{u32 ea_=u32(u32(8807976u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B573337:{NFSU2_TR(0x573337);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B573338:{NFSU2_TR(0x573338);
__builtin_memmove((R+16),(R+20),4);
}
B57333a:{NFSU2_TR(0x57333a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57333b:{NFSU2_TR(0x57333b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57333e:L57333e:{c.instructions+=5;NFSU2_TR(0x57333e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B573342:{NFSU2_TR(0x573342);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B573345:{NFSU2_TR(0x573345);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573346:{NFSU2_TR(0x573346);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573347:{NFSU2_TR(0x573347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57334cull));
TAIL_STATIC(0x43c240u,43c);
}
B57334c:L57334c:{c.instructions+=3;NFSU2_TR(0x57334c);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57334f:{NFSU2_TR(0x57334f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B573352:{NFSU2_TR(0x573352);
{goto L573382;}
}
B573354:L573354:{c.instructions+=5;NFSU2_TR(0x573354);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B573357:{NFSU2_TR(0x573357);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57335d:{NFSU2_TR(0x57335d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57335f:{NFSU2_TR(0x57335f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B573362:{NFSU2_TR(0x573362);
if(r1(R+514)){{goto L57336d;}}
}
B573364:L573364:{c.instructions+=2;NFSU2_TR(0x573364);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57336b:{NFSU2_TR(0x57336b);
{goto L573382;}
}
B57336d:L57336d:{c.instructions+=5;NFSU2_TR(0x57336d);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B573370:{NFSU2_TR(0x573370);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B573374:{NFSU2_TR(0x573374);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B573376:{NFSU2_TR(0x573376);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B573379:{NFSU2_TR(0x573379);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L573382;}}
}
B57337b:L57337b:{c.instructions+=2;NFSU2_TR(0x57337b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57337f:{NFSU2_TR(0x57337f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573382:L573382:{c.instructions+=2;NFSU2_TR(0x573382);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B573385:{NFSU2_TR(0x573385);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57338aull));
TAIL_STATIC(0x75bed4u,75b);
}
B57338a:L57338a:{c.instructions+=7;NFSU2_TR(0x57338a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57338d:{NFSU2_TR(0x57338d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B573390:{NFSU2_TR(0x573390);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B573392:{NFSU2_TR(0x573392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B573393:{NFSU2_TR(0x573393);
__builtin_memmove((R+16),(R+20),4);
}
B573395:{NFSU2_TR(0x573395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B573396:{NFSU2_TR(0x573396);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5733a0:L5733a0:{c.instructions+=11;NFSU2_TR(0x5733a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5733a1:{NFSU2_TR(0x5733a1);
__builtin_memmove((R+20),(R+16),4);
}
B5733a3:{NFSU2_TR(0x5733a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5733a6:{NFSU2_TR(0x5733a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B5733a9:{NFSU2_TR(0x5733a9);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5733ac:{NFSU2_TR(0x5733ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5733ad:{NFSU2_TR(0x5733ad);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5733b3:{NFSU2_TR(0x5733b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5733b4:{NFSU2_TR(0x5733b4);
__builtin_memmove((R+24),(R+4),4);
}
B5733b6:{NFSU2_TR(0x5733b6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5733b9:{NFSU2_TR(0x5733b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5733beull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573180u);}goto L573180;}
}
B5733be:L5733be:{c.instructions+=16;NFSU2_TR(0x5733be);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5733c1:{NFSU2_TR(0x5733c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5733c4:{NFSU2_TR(0x5733c4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5733c7:{NFSU2_TR(0x5733c7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5733c9:{NFSU2_TR(0x5733c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5733cc:{NFSU2_TR(0x5733cc);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5733cf:{NFSU2_TR(0x5733cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5733d0:{NFSU2_TR(0x5733d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5733d1:{NFSU2_TR(0x5733d1);
__builtin_memmove((R+4),(R+24),4);
}
B5733d3:{NFSU2_TR(0x5733d3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5733d7:{NFSU2_TR(0x5733d7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5733d9:{NFSU2_TR(0x5733d9);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5733dc:{NFSU2_TR(0x5733dc);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5733e0:{NFSU2_TR(0x5733e0);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5733e3:{NFSU2_TR(0x5733e3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5733e7:{NFSU2_TR(0x5733e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5733ecull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573180u);}goto L573180;}
}
B5733ec:L5733ec:{c.instructions+=6;NFSU2_TR(0x5733ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5733ed:{NFSU2_TR(0x5733ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5733f1:{NFSU2_TR(0x5733f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5733f2:{NFSU2_TR(0x5733f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5733f6:{NFSU2_TR(0x5733f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5733f7:{NFSU2_TR(0x5733f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5733fcull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5733fc:L5733fc:{c.instructions+=9;NFSU2_TR(0x5733fc);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5733ff:{NFSU2_TR(0x5733ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B573402:{NFSU2_TR(0x573402);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B573408:{NFSU2_TR(0x573408);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57340b:{NFSU2_TR(0x57340b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57340c:{NFSU2_TR(0x57340c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57340d:{NFSU2_TR(0x57340d);
__builtin_memmove((R+4),(R+24),4);
}
B57340f:{NFSU2_TR(0x57340f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B573412:{NFSU2_TR(0x573412);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x573417ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573180u);}goto L573180;}
}
B573417:L573417:{c.instructions+=6;NFSU2_TR(0x573417);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573418:{NFSU2_TR(0x573418);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57341c:{NFSU2_TR(0x57341c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57341d:{NFSU2_TR(0x57341d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B573421:{NFSU2_TR(0x573421);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573422:{NFSU2_TR(0x573422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x573427ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B573427:L573427:{c.instructions+=9;NFSU2_TR(0x573427);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57342a:{NFSU2_TR(0x57342a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57342d:{NFSU2_TR(0x57342d);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B573433:{NFSU2_TR(0x573433);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B573436:{NFSU2_TR(0x573436);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573437:{NFSU2_TR(0x573437);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573438:{NFSU2_TR(0x573438);
__builtin_memmove((R+4),(R+24),4);
}
B57343a:{NFSU2_TR(0x57343a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57343d:{NFSU2_TR(0x57343d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x573442ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573180u);}goto L573180;}
}
B573442:L573442:{c.instructions+=6;NFSU2_TR(0x573442);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573443:{NFSU2_TR(0x573443);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B573447:{NFSU2_TR(0x573447);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573448:{NFSU2_TR(0x573448);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57344c:{NFSU2_TR(0x57344c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57344d:{NFSU2_TR(0x57344d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x573452ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B573452:L573452:{c.instructions+=12;NFSU2_TR(0x573452);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B573456:{NFSU2_TR(0x573456);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573459:{NFSU2_TR(0x573459);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57345d:{NFSU2_TR(0x57345d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57345f:{NFSU2_TR(0x57345f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B573463:{NFSU2_TR(0x573463);
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
B573466:{NFSU2_TR(0x573466);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573469:{NFSU2_TR(0x573469);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57346c:{NFSU2_TR(0x57346c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57346d:{NFSU2_TR(0x57346d);
__builtin_memmove((R+16),(R+20),4);
}
B57346f:{NFSU2_TR(0x57346f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B573470:{NFSU2_TR(0x573470);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B573480:L573480:{c.instructions+=5;NFSU2_TR(0x573480);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573481:{NFSU2_TR(0x573481);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B573485:{NFSU2_TR(0x573485);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573486:{NFSU2_TR(0x573486);
__builtin_memmove((R+24),(R+4),4);
}
B573488:{NFSU2_TR(0x573488);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57348dull));
TAIL_STATIC(0x75bed4u,75b);
}
B57348d:L57348d:{c.instructions+=7;NFSU2_TR(0x57348d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573491:{NFSU2_TR(0x573491);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B573495:{NFSU2_TR(0x573495);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B573499:{NFSU2_TR(0x573499);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57349d:{NFSU2_TR(0x57349d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57349f:{NFSU2_TR(0x57349f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5734a2:{NFSU2_TR(0x5734a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5734b2;}}
}
B5734a4:L5734a4:{c.instructions+=3;NFSU2_TR(0x5734a4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5734a8:{NFSU2_TR(0x5734a8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5734ae:{NFSU2_TR(0x5734ae);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5734b2:L5734b2:{c.instructions+=40;NFSU2_TR(0x5734b2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5734b6:{NFSU2_TR(0x5734b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5734b9:{NFSU2_TR(0x5734b9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5734bd:{NFSU2_TR(0x5734bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5734c1:{NFSU2_TR(0x5734c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5734c5:{NFSU2_TR(0x5734c5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5734c7:{NFSU2_TR(0x5734c7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5734c9:{NFSU2_TR(0x5734c9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5734cb:{NFSU2_TR(0x5734cb);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5734cd:{NFSU2_TR(0x5734cd);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5734d3:{NFSU2_TR(0x5734d3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5734d5:{NFSU2_TR(0x5734d5);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5734d7:{NFSU2_TR(0x5734d7);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B5734d9:{NFSU2_TR(0x5734d9);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5734df:{NFSU2_TR(0x5734df);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5734e3:{NFSU2_TR(0x5734e3);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5734e5:{NFSU2_TR(0x5734e5);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5734eb:{NFSU2_TR(0x5734eb);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5734ed:{NFSU2_TR(0x5734ed);
__asm__ volatile(".byte 0xd8,0xc4":::"memory");
}
B5734ef:{NFSU2_TR(0x5734ef);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5734f5:{NFSU2_TR(0x5734f5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5734f9:{NFSU2_TR(0x5734f9);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5734fb:{NFSU2_TR(0x5734fb);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B573501:{NFSU2_TR(0x573501);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B573503:{NFSU2_TR(0x573503);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B573509:{NFSU2_TR(0x573509);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57350f:{NFSU2_TR(0x57350f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B573513:{NFSU2_TR(0x573513);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B573515:{NFSU2_TR(0x573515);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B573517:{NFSU2_TR(0x573517);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B573519:{NFSU2_TR(0x573519);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B57351b:{NFSU2_TR(0x57351b);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B57351d:{NFSU2_TR(0x57351d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B573523:{NFSU2_TR(0x573523);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B573526:{NFSU2_TR(0x573526);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573527:{NFSU2_TR(0x573527);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573528:{NFSU2_TR(0x573528);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B57352a:{NFSU2_TR(0x57352a);
__builtin_memmove((R+4),(R+24),4);
}
B57352c:{NFSU2_TR(0x57352c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B57352e:{NFSU2_TR(0x57352e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x573533ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5733a0u);}goto L5733a0;}
}
B573533:L573533:{c.instructions+=3;NFSU2_TR(0x573533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B573534:{NFSU2_TR(0x573534);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B573535:{NFSU2_TR(0x573535);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B573540:L573540:{c.instructions+=5;NFSU2_TR(0x573540);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573541:{NFSU2_TR(0x573541);
__builtin_memmove((R+24),(R+4),4);
}
B573543:{NFSU2_TR(0x573543);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573546:{NFSU2_TR(0x573546);
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
B573548:{NFSU2_TR(0x573548);
if(r1(R+518)){{goto L573590;}}
}
B57354a:L57354a:{c.instructions+=6;NFSU2_TR(0x57354a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57354d:{NFSU2_TR(0x57354d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57354e:{NFSU2_TR(0x57354e);
w4(R+28,u32(0x1ull));
}
B573553:{NFSU2_TR(0x573553);
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
B573555:{NFSU2_TR(0x573555);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57355c:{NFSU2_TR(0x57355c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L573588;}}
}
B57355e:L57355e:{c.instructions+=2;NFSU2_TR(0x57355e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57355f:{NFSU2_TR(0x57355f);
w4(R+12,u32(0x10ull));
}
B573564:L573564:{c.instructions+=6;NFSU2_TR(0x573564);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573567:{NFSU2_TR(0x573567);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B573569:{NFSU2_TR(0x573569);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57356c:{NFSU2_TR(0x57356c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57356d:{NFSU2_TR(0x57356d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57356e:{NFSU2_TR(0x57356e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x573573ull));
TAIL_STATIC(0x43ce10u,43c);
}
B573573:L573573:{c.instructions+=8;NFSU2_TR(0x573573);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B573576:{NFSU2_TR(0x573576);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B573579:{NFSU2_TR(0x573579);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B57357a:{NFSU2_TR(0x57357a);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57357d:{NFSU2_TR(0x57357d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573580:{NFSU2_TR(0x573580);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B573583:{NFSU2_TR(0x573583);
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
B573585:{NFSU2_TR(0x573585);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573564u);}goto L573564;}}
}
B573587:L573587:{c.instructions+=1;NFSU2_TR(0x573587);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B573588:L573588:{c.instructions+=2;NFSU2_TR(0x573588);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57358f:{NFSU2_TR(0x57358f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B573590:L573590:{c.instructions+=3;NFSU2_TR(0x573590);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B573593:{NFSU2_TR(0x573593);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B573594:{NFSU2_TR(0x573594);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5735a0:L5735a0:{c.instructions+=5;NFSU2_TR(0x5735a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5735a4:{NFSU2_TR(0x5735a4);
__builtin_memmove((R+4),gp(0x8650f0),4);
}
B5735aa:{NFSU2_TR(0x5735aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5735ab:{NFSU2_TR(0x5735ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5735ac:{NFSU2_TR(0x5735ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5735b1ull));
TAIL_STATIC(0x43f920u,43f);
}
B5735b1:L5735b1:{c.instructions+=2;NFSU2_TR(0x5735b1);
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
B5735b4:{NFSU2_TR(0x5735b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5735c0:L5735c0:{c.instructions+=10;NFSU2_TR(0x5735c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5735c4:{NFSU2_TR(0x5735c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5735c7:{NFSU2_TR(0x5735c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5735cb:{NFSU2_TR(0x5735cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5735cc:{NFSU2_TR(0x5735cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5735cf:{NFSU2_TR(0x5735cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5735d1:{NFSU2_TR(0x5735d1);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5735d3:{NFSU2_TR(0x5735d3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B5735d6:{NFSU2_TR(0x5735d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5735d7:{NFSU2_TR(0x5735d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5735e0:L5735e0:{c.instructions+=3;NFSU2_TR(0x5735e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5735e4:{NFSU2_TR(0x5735e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5735eb:{NFSU2_TR(0x5735eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5735f0:L5735f0:{c.instructions+=6;NFSU2_TR(0x5735f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5735f1:{NFSU2_TR(0x5735f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5735f2:{NFSU2_TR(0x5735f2);
__builtin_memmove((R+24),(R+4),4);
}
B5735f4:{NFSU2_TR(0x5735f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5735f7:{NFSU2_TR(0x5735f7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5735fa:{NFSU2_TR(0x5735fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L573603;}}
}
B5735fc:L5735fc:{c.instructions+=4;NFSU2_TR(0x5735fc);
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
B5735fe:{NFSU2_TR(0x5735fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5735ff:{NFSU2_TR(0x5735ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B573600:{NFSU2_TR(0x573600);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B573603:L573603:{c.instructions+=7;NFSU2_TR(0x573603);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573604:{NFSU2_TR(0x573604);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B573608:{NFSU2_TR(0x573608);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57360b:{NFSU2_TR(0x57360b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57360d:{NFSU2_TR(0x57360d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57360e:{NFSU2_TR(0x57360e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57360f:{NFSU2_TR(0x57360f);
if(r1(R+518)){{goto L57361b;}}
}
B573611:L573611:{c.instructions+=7;NFSU2_TR(0x573611);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B573612:{NFSU2_TR(0x573612);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B573613:{NFSU2_TR(0x573613);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B573614:{NFSU2_TR(0x573614);
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
B573616:{NFSU2_TR(0x573616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B573617:{NFSU2_TR(0x573617);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B573618:{NFSU2_TR(0x573618);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57361b:L57361b:{c.instructions+=2;NFSU2_TR(0x57361b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57361d:{NFSU2_TR(0x57361d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L573636;}}
}
B57361f:L57361f:{c.instructions+=6;NFSU2_TR(0x57361f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573622:{NFSU2_TR(0x573622);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B573625:{NFSU2_TR(0x573625);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573626:{NFSU2_TR(0x573626);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B573629:{NFSU2_TR(0x573629);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57362a:{NFSU2_TR(0x57362a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57362full));
TAIL_STATIC(0x43dc30u,43d);
}
B57362f:L57362f:{c.instructions+=3;NFSU2_TR(0x57362f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B573632:{NFSU2_TR(0x573632);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573634:{NFSU2_TR(0x573634);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573611u);}goto L573611;}}
}
B573636:L573636:{c.instructions+=11;NFSU2_TR(0x573636);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573639:{NFSU2_TR(0x573639);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57363c:{NFSU2_TR(0x57363c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57363f:{NFSU2_TR(0x57363f);
__builtin_memmove((R+28),(R+0),4);
}
B573641:{NFSU2_TR(0x573641);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B573643:{NFSU2_TR(0x573643);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B573645:{NFSU2_TR(0x573645);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B573648:{NFSU2_TR(0x573648);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffff800ull))));
}
B57364e:{NFSU2_TR(0x57364e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573650:{NFSU2_TR(0x573650);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573654:{NFSU2_TR(0x573654);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57366c;}}
}
B573656:L573656:{c.instructions+=3;NFSU2_TR(0x573656);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B573659:{NFSU2_TR(0x573659);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57365b:{NFSU2_TR(0x57365b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57365f;}}
}
B57365d:L57365d:{c.instructions+=1;NFSU2_TR(0x57365d);
__builtin_memmove((R+28),(R+4),4);
}
B57365f:L57365f:{c.instructions+=3;NFSU2_TR(0x57365f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B573662:{NFSU2_TR(0x573662);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B573664:{NFSU2_TR(0x573664);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57366c;}}
}
B573666:L573666:{c.instructions+=2;NFSU2_TR(0x573666);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57366a:{NFSU2_TR(0x57366a);
__builtin_memmove((R+0),(R+4),4);
}
B57366c:L57366c:{c.instructions+=4;NFSU2_TR(0x57366c);
__builtin_memmove((R+20),(R+0),4);
}
B57366e:{NFSU2_TR(0x57366e);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+28))));
}
B573670:{NFSU2_TR(0x573670);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B573676:{NFSU2_TR(0x573676);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573611u);}goto L573611;}}
}
B573678:L573678:{c.instructions+=4;NFSU2_TR(0x573678);
__builtin_memmove((R+8),(R+20),4);
}
B57367a:{NFSU2_TR(0x57367a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B57367c:{NFSU2_TR(0x57367c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B573682:{NFSU2_TR(0x573682);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573611u);}goto L573611;}}
}
B573684:L573684:{c.instructions+=2;NFSU2_TR(0x573684);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573686:{NFSU2_TR(0x573686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57368bull));
TAIL_STATIC(0x43e910u,43e);
}
B57368b:L57368b:{c.instructions+=5;NFSU2_TR(0x57368b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x40000ull))));
}
B573690:{NFSU2_TR(0x573690);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B573694:{NFSU2_TR(0x573694);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B573697:{NFSU2_TR(0x573697);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B573699:{NFSU2_TR(0x573699);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573611u);}goto L573611;}}
}
B57369f:L57369f:{c.instructions+=17;NFSU2_TR(0x57369f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5736a2:{NFSU2_TR(0x5736a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5736a6:{NFSU2_TR(0x5736a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5736aa:{NFSU2_TR(0x5736aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5736ad:{NFSU2_TR(0x5736ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5736b0:{NFSU2_TR(0x5736b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5736b3:{NFSU2_TR(0x5736b3);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5736b7:{NFSU2_TR(0x5736b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5736ba:{NFSU2_TR(0x5736ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5736bb:{NFSU2_TR(0x5736bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5736bc:{NFSU2_TR(0x5736bc);
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
B5736bd:{NFSU2_TR(0x5736bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5736c0:{NFSU2_TR(0x5736c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5736c1:{NFSU2_TR(0x5736c1);
w1(R+0,u8(0x1ull));
}
B5736c3:{NFSU2_TR(0x5736c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5736c4:{NFSU2_TR(0x5736c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5736c5:{NFSU2_TR(0x5736c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5736d0:L5736d0:{c.instructions+=5;NFSU2_TR(0x5736d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5736d2:{NFSU2_TR(0x5736d2);
u8 U[4];
w4(U+0,u32(0x7a0408ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5736d7:{NFSU2_TR(0x5736d7);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5736d9:{NFSU2_TR(0x5736d9);
u8 U[4];
w4(U+0,u32(0x7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5736db:{NFSU2_TR(0x5736db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5736e0ull));
TAIL_STATIC(0x440df0u,440);
}
B5736e0:L5736e0:{c.instructions+=3;NFSU2_TR(0x5736e0);
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
B5736e3:{NFSU2_TR(0x5736e3);
__builtin_memmove(gp(0x8650f0),(R+0),4);
}
B5736e8:{NFSU2_TR(0x5736e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5736f0:L5736f0:{c.instructions+=3;NFSU2_TR(0x5736f0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5736f4:{NFSU2_TR(0x5736f4);
__builtin_memmove(gp(0x7fb534),(R+0),1);
}
B5736f9:{NFSU2_TR(0x5736f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B573700:L573700:{c.instructions+=8;NFSU2_TR(0x573700);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B573704:{NFSU2_TR(0x573704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B573706:{NFSU2_TR(0x573706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B573709:{NFSU2_TR(0x573709);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5a4c444aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57370f:{NFSU2_TR(0x57370f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573710:{NFSU2_TR(0x573710);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B573714:{NFSU2_TR(0x573714);
__builtin_memmove((R+0),(R+8),4);
}
B573716:{NFSU2_TR(0x573716);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57371e;}}
}
B573718:L573718:{c.instructions+=2;NFSU2_TR(0x573718);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B57371c:{NFSU2_TR(0x57371c);
if(r1(R+518)){{goto L573725;}}
}
B57371e:L57371e:{c.instructions+=4;NFSU2_TR(0x57371e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B573720:{NFSU2_TR(0x573720);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B573721:{NFSU2_TR(0x573721);
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
B573724:{NFSU2_TR(0x573724);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B573725:L573725:{c.instructions+=18;NFSU2_TR(0x573725);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573726:{NFSU2_TR(0x573726);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+12,u16(r1(U+4)));
}
B57372b:{NFSU2_TR(0x57372b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57372e:{NFSU2_TR(0x57372e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B573731:{NFSU2_TR(0x573731);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573732:{NFSU2_TR(0x573732);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B573734:{NFSU2_TR(0x573734);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B573736:{NFSU2_TR(0x573736);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B573739:{NFSU2_TR(0x573739);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x100ull))));
}
B57373f:{NFSU2_TR(0x57373f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573743:{NFSU2_TR(0x573743);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+12,u16(r1(U+4)));
}
B573748:{NFSU2_TR(0x573748);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57374c:{NFSU2_TR(0x57374c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573750:{NFSU2_TR(0x573750);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x100ull))));
}
B573756:{NFSU2_TR(0x573756);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57375a:{NFSU2_TR(0x57375a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57375d:{NFSU2_TR(0x57375d);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x12ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B573760:{NFSU2_TR(0x573760);
if(r1(R+518)){{goto L573830;}}
}
B573766:L573766:{c.instructions+=1;NFSU2_TR(0x573766);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573767:L573767:{c.instructions+=2;NFSU2_TR(0x573767);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B57376c:{NFSU2_TR(0x57376c);
if(r1(R+518)){{goto L5737de;}}
}
B57376e:L57376e:{c.instructions+=4;NFSU2_TR(0x57376e);
u8 U[6];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B573773:{NFSU2_TR(0x573773);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B573777:{NFSU2_TR(0x573777);
__builtin_memmove((R+20),(R+28),4);
}
B573779:{NFSU2_TR(0x573779);
if(r1(R+518)){{goto L5737a0;}}
}
B57377b:L57377b:{c.instructions+=10;NFSU2_TR(0x57377b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+4,u32(r1(U+0)));
}
B57377e:{NFSU2_TR(0x57377e);
__builtin_memmove((R+0),(R+4),4);
}
B573780:{NFSU2_TR(0x573780);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B573783:{NFSU2_TR(0x573783);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B573786:{NFSU2_TR(0x573786);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
}
B573788:{NFSU2_TR(0x573788);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B57378b:{NFSU2_TR(0x57378b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B57378e:{NFSU2_TR(0x57378e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B57378f:{NFSU2_TR(0x57378f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B573791:{NFSU2_TR(0x573791);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
}
B573793:L573793:{c.instructions+=5;NFSU2_TR(0x573793);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B573796:{NFSU2_TR(0x573796);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B573799:{NFSU2_TR(0x573799);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57379a:{NFSU2_TR(0x57379a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57379c:{NFSU2_TR(0x57379c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573793u);}goto L573793;}}
}
B57379e:L57379e:{c.instructions+=1;NFSU2_TR(0x57379e);
{goto L5737cb;}
}
B5737a0:L5737a0:{c.instructions+=11;NFSU2_TR(0x5737a0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(r1(U+0)));
}
B5737a3:{NFSU2_TR(0x5737a3);
__builtin_memmove((R+4),(R+0),4);
}
B5737a5:{NFSU2_TR(0x5737a5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffffe0ull))));
}
B5737a8:{NFSU2_TR(0x5737a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5737ab:{NFSU2_TR(0x5737ab);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+24))));
}
B5737ad:{NFSU2_TR(0x5737ad);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B5737b0:{NFSU2_TR(0x5737b0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x11ull))));
}
B5737b3:{NFSU2_TR(0x5737b3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B5737b6:{NFSU2_TR(0x5737b6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5737b8:{NFSU2_TR(0x5737b8);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
}
B5737ba:{NFSU2_TR(0x5737ba);
__builtin_memmove((R+12),(R+12),4);
}
B5737c0:L5737c0:{c.instructions+=5;NFSU2_TR(0x5737c0);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B5737c3:{NFSU2_TR(0x5737c3);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B5737c6:{NFSU2_TR(0x5737c6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5737c7:{NFSU2_TR(0x5737c7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5737c9:{NFSU2_TR(0x5737c9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5737c0u);}goto L5737c0;}}
}
B5737cb:L5737cb:{c.instructions+=6;NFSU2_TR(0x5737cb);
u8 U[6];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,sar<u16>(r2(U+4),u64(u32(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B5737d0:{NFSU2_TR(0x5737d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5737d4:{NFSU2_TR(0x5737d4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B5737d7:{NFSU2_TR(0x5737d7);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x2ull))));
}
B5737da:{NFSU2_TR(0x5737da);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B5737dc:{NFSU2_TR(0x5737dc);
{goto L5737e9;}
}
B5737de:L5737de:{c.instructions+=2;NFSU2_TR(0x5737de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B5737e0:{NFSU2_TR(0x5737e0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5737e8;}}
}
B5737e2:L5737e2:{c.instructions+=4;NFSU2_TR(0x5737e2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B5737e4:{NFSU2_TR(0x5737e4);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B5737e6:{NFSU2_TR(0x5737e6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5737e7:{NFSU2_TR(0x5737e7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5737e8:L5737e8:{c.instructions+=1;NFSU2_TR(0x5737e8);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B5737e9:L5737e9:{c.instructions+=5;NFSU2_TR(0x5737e9);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5737ee:{NFSU2_TR(0x5737ee);
w2(R+0,sar<u16>(r2(R+0),u64(u32(0x1ull))));
}
B5737f1:{NFSU2_TR(0x5737f1);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B5737f5:{NFSU2_TR(0x5737f5);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5737fa:{NFSU2_TR(0x5737fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57380c;}}
}
B5737fc:L5737fc:{c.instructions+=5;NFSU2_TR(0x5737fc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w2(R+4,u16(r1(U+0)));
}
B573800:{NFSU2_TR(0x573800);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x100ull))));
}
B573806:{NFSU2_TR(0x573806);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B573807:{NFSU2_TR(0x573807);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57380b:{NFSU2_TR(0x57380b);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B57380c:L57380c:{c.instructions+=2;NFSU2_TR(0x57380c);
u8 U[10];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B573812:{NFSU2_TR(0x573812);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L573823;}}
}
B573814:L573814:{c.instructions+=5;NFSU2_TR(0x573814);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w2(R+0,u16(r1(U+0)));
}
B573818:{NFSU2_TR(0x573818);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x100ull))));
}
B57381d:{NFSU2_TR(0x57381d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B57381e:{NFSU2_TR(0x57381e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573822:{NFSU2_TR(0x573822);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B573823:L573823:{c.instructions+=2;NFSU2_TR(0x573823);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573825:{NFSU2_TR(0x573825);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573767u);}goto L573767;}}
}
B57382b:L57382b:{c.instructions+=2;NFSU2_TR(0x57382b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57382f:{NFSU2_TR(0x57382f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B573830:L573830:{c.instructions+=6;NFSU2_TR(0x573830);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B573832:{NFSU2_TR(0x573832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B573833:{NFSU2_TR(0x573833);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B573834:{NFSU2_TR(0x573834);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B573835:{NFSU2_TR(0x573835);
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
B573838:{NFSU2_TR(0x573838);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B573840:L573840:{c.instructions+=15;NFSU2_TR(0x573840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x408ull))));
}
B573846:{NFSU2_TR(0x573846);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57384d:{NFSU2_TR(0x57384d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57384e:{NFSU2_TR(0x57384e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57384f:{NFSU2_TR(0x57384f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573850:{NFSU2_TR(0x573850);
__builtin_memmove((R+28),(R+0),4);
}
B573852:{NFSU2_TR(0x573852);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B573854:{NFSU2_TR(0x573854);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B573856:{NFSU2_TR(0x573856);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B573858:{NFSU2_TR(0x573858);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57385a:{NFSU2_TR(0x57385a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57385e:{NFSU2_TR(0x57385e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573862:{NFSU2_TR(0x573862);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573866:{NFSU2_TR(0x573866);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57386a:{NFSU2_TR(0x57386a);
if(r1(R+518)){TAIL_STATIC(0x5744b0u,574);}
}
B573870:L573870:{c.instructions+=5;NFSU2_TR(0x573870);
__builtin_memmove((R+4),gp(0x8650f8),4);
}
B573876:{NFSU2_TR(0x573876);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B573878:{NFSU2_TR(0x573878);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B573879:{NFSU2_TR(0x573879);
w4(R+20,u32(0xfffffff0ull));
}
B57387e:{NFSU2_TR(0x57387e);
if(r1(R+518)){{goto L573888;}}
}
B573880:L573880:{c.instructions+=4;NFSU2_TR(0x573880);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B573882:{NFSU2_TR(0x573882);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573884:{NFSU2_TR(0x573884);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B573886:{NFSU2_TR(0x573886);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5738a5;}}
}
B573888:L573888:{c.instructions+=11;NFSU2_TR(0x573888);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B57388a:{NFSU2_TR(0x57388a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+9),(U+0),1);
}
B57388c:{NFSU2_TR(0x57388c);
__builtin_memmove((R+4),(R+20),4);
}
B57388e:{NFSU2_TR(0x57388e);
w4(R+4,u32(0-u32(r4(R+4))));
}
B573890:{NFSU2_TR(0x573890);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573893:{NFSU2_TR(0x573893);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573897:{NFSU2_TR(0x573897);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57389a:{NFSU2_TR(0x57389a);
__builtin_memmove((R+24),(R+8),4);
}
B57389c:{NFSU2_TR(0x57389c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B57389e:{NFSU2_TR(0x57389e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5738a2:{NFSU2_TR(0x5738a2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B5738a5:L5738a5:{c.instructions+=5;NFSU2_TR(0x5738a5);
__builtin_memmove((R+0),(R+24),4);
}
B5738a7:{NFSU2_TR(0x5738a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5738aa:{NFSU2_TR(0x5738aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5738ad:{NFSU2_TR(0x5738ad);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B5738b0:{NFSU2_TR(0x5738b0);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5738d9;}}
}
B5738b2:L5738b2:{c.instructions+=14;NFSU2_TR(0x5738b2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B5738b5:{NFSU2_TR(0x5738b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5738b8:{NFSU2_TR(0x5738b8);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5738ba:{NFSU2_TR(0x5738ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5738be:{NFSU2_TR(0x5738be);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5738c1:{NFSU2_TR(0x5738c1);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5738c3:{NFSU2_TR(0x5738c3);
__builtin_memmove((R+4),(R+20),4);
}
B5738c5:{NFSU2_TR(0x5738c5);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5738c7:{NFSU2_TR(0x5738c7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B5738ca:{NFSU2_TR(0x5738ca);
__builtin_memmove((R+24),(R+8),4);
}
B5738cc:{NFSU2_TR(0x5738cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B5738ce:{NFSU2_TR(0x5738ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5738d2:{NFSU2_TR(0x5738d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5738d6:{NFSU2_TR(0x5738d6);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B5738d9:L5738d9:{c.instructions+=2;NFSU2_TR(0x5738d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(r1(R+1))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5738db:{NFSU2_TR(0x5738db);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L573956;}}
}
B5738dd:L5738dd:{c.instructions+=2;NFSU2_TR(0x5738dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5738e0:{NFSU2_TR(0x5738e0);
if(r1(R+518)){{goto L573940;}}
}
B5738e2:L5738e2:{c.instructions+=3;NFSU2_TR(0x5738e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5738e5:{NFSU2_TR(0x5738e5);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B5738e8:{NFSU2_TR(0x5738e8);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L573911;}}
}
B5738ea:L5738ea:{c.instructions+=14;NFSU2_TR(0x5738ea);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B5738ed:{NFSU2_TR(0x5738ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5738f0:{NFSU2_TR(0x5738f0);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5738f2:{NFSU2_TR(0x5738f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5738f6:{NFSU2_TR(0x5738f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5738f9:{NFSU2_TR(0x5738f9);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5738fb:{NFSU2_TR(0x5738fb);
__builtin_memmove((R+4),(R+20),4);
}
B5738fd:{NFSU2_TR(0x5738fd);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5738ff:{NFSU2_TR(0x5738ff);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573902:{NFSU2_TR(0x573902);
__builtin_memmove((R+24),(R+8),4);
}
B573904:{NFSU2_TR(0x573904);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573906:{NFSU2_TR(0x573906);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57390a:{NFSU2_TR(0x57390a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57390e:{NFSU2_TR(0x57390e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B573911:L573911:{c.instructions+=3;NFSU2_TR(0x573911);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B573914:{NFSU2_TR(0x573914);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B573917:{NFSU2_TR(0x573917);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L573940;}}
}
B573919:L573919:{c.instructions+=14;NFSU2_TR(0x573919);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B57391c:{NFSU2_TR(0x57391c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B57391f:{NFSU2_TR(0x57391f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573921:{NFSU2_TR(0x573921);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B573925:{NFSU2_TR(0x573925);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573928:{NFSU2_TR(0x573928);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B57392a:{NFSU2_TR(0x57392a);
__builtin_memmove((R+4),(R+20),4);
}
B57392c:{NFSU2_TR(0x57392c);
w4(R+4,u32(0-u32(r4(R+4))));
}
B57392e:{NFSU2_TR(0x57392e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573931:{NFSU2_TR(0x573931);
__builtin_memmove((R+24),(R+8),4);
}
B573933:{NFSU2_TR(0x573933);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573935:{NFSU2_TR(0x573935);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573939:{NFSU2_TR(0x573939);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57393d:{NFSU2_TR(0x57393d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B573940:L573940:{c.instructions+=7;NFSU2_TR(0x573940);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffeffull))));
}
B573945:{NFSU2_TR(0x573945);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573949:{NFSU2_TR(0x573949);
__builtin_memmove((R+0),(R+24),4);
}
B57394b:{NFSU2_TR(0x57394b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B57394e:{NFSU2_TR(0x57394e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B573951:{NFSU2_TR(0x573951);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B573954:{NFSU2_TR(0x573954);
{goto L5739cd;}
}
B573956:L573956:{c.instructions+=2;NFSU2_TR(0x573956);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B573959:{NFSU2_TR(0x573959);
if(r1(R+518)){{goto L5739b9;}}
}
B57395b:L57395b:{c.instructions+=3;NFSU2_TR(0x57395b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B57395e:{NFSU2_TR(0x57395e);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B573961:{NFSU2_TR(0x573961);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L57398a;}}
}
B573963:L573963:{c.instructions+=14;NFSU2_TR(0x573963);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B573966:{NFSU2_TR(0x573966);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573969:{NFSU2_TR(0x573969);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B57396b:{NFSU2_TR(0x57396b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B57396f:{NFSU2_TR(0x57396f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573972:{NFSU2_TR(0x573972);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573974:{NFSU2_TR(0x573974);
__builtin_memmove((R+4),(R+20),4);
}
B573976:{NFSU2_TR(0x573976);
w4(R+4,u32(0-u32(r4(R+4))));
}
B573978:{NFSU2_TR(0x573978);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B57397b:{NFSU2_TR(0x57397b);
__builtin_memmove((R+24),(R+8),4);
}
B57397d:{NFSU2_TR(0x57397d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B57397f:{NFSU2_TR(0x57397f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573983:{NFSU2_TR(0x573983);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573987:{NFSU2_TR(0x573987);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B57398a:L57398a:{c.instructions+=3;NFSU2_TR(0x57398a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B57398d:{NFSU2_TR(0x57398d);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B573990:{NFSU2_TR(0x573990);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5739b9;}}
}
B573992:L573992:{c.instructions+=14;NFSU2_TR(0x573992);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B573995:{NFSU2_TR(0x573995);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573998:{NFSU2_TR(0x573998);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B57399a:{NFSU2_TR(0x57399a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B57399e:{NFSU2_TR(0x57399e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5739a1:{NFSU2_TR(0x5739a1);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5739a3:{NFSU2_TR(0x5739a3);
__builtin_memmove((R+4),(R+20),4);
}
B5739a5:{NFSU2_TR(0x5739a5);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5739a7:{NFSU2_TR(0x5739a7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B5739aa:{NFSU2_TR(0x5739aa);
__builtin_memmove((R+24),(R+8),4);
}
B5739ac:{NFSU2_TR(0x5739ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B5739ae:{NFSU2_TR(0x5739ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5739b2:{NFSU2_TR(0x5739b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5739b6:{NFSU2_TR(0x5739b6);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B5739b9:L5739b9:{c.instructions+=6;NFSU2_TR(0x5739b9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffeffull))));
}
B5739be:{NFSU2_TR(0x5739be);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5739c2:{NFSU2_TR(0x5739c2);
__builtin_memmove((R+0),(R+24),4);
}
B5739c4:{NFSU2_TR(0x5739c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5739c7:{NFSU2_TR(0x5739c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5739ca:{NFSU2_TR(0x5739ca);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B5739cd:L5739cd:{c.instructions+=1;NFSU2_TR(0x5739cd);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5739f6;}}
}
B5739cf:L5739cf:{c.instructions+=14;NFSU2_TR(0x5739cf);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B5739d2:{NFSU2_TR(0x5739d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5739d5:{NFSU2_TR(0x5739d5);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5739d7:{NFSU2_TR(0x5739d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5739db:{NFSU2_TR(0x5739db);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5739de:{NFSU2_TR(0x5739de);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5739e0:{NFSU2_TR(0x5739e0);
__builtin_memmove((R+4),(R+20),4);
}
B5739e2:{NFSU2_TR(0x5739e2);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5739e4:{NFSU2_TR(0x5739e4);
__builtin_memmove((R+24),(R+8),4);
}
B5739e6:{NFSU2_TR(0x5739e6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B5739e9:{NFSU2_TR(0x5739e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B5739eb:{NFSU2_TR(0x5739eb);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B5739ee:{NFSU2_TR(0x5739ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5739f2:{NFSU2_TR(0x5739f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5739f6:L5739f6:{c.instructions+=6;NFSU2_TR(0x5739f6);
__builtin_memmove((R+4),(R+24),4);
}
B5739f8:{NFSU2_TR(0x5739f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5739fb:{NFSU2_TR(0x5739fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5739fe:{NFSU2_TR(0x5739fe);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B573a01:{NFSU2_TR(0x573a01);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573a05:{NFSU2_TR(0x573a05);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L573a32;}}
}
B573a07:L573a07:{c.instructions+=15;NFSU2_TR(0x573a07);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B573a0a:{NFSU2_TR(0x573a0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573a0d:{NFSU2_TR(0x573a0d);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573a0f:{NFSU2_TR(0x573a0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B573a13:{NFSU2_TR(0x573a13);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573a16:{NFSU2_TR(0x573a16);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573a18:{NFSU2_TR(0x573a18);
__builtin_memmove((R+4),(R+20),4);
}
B573a1a:{NFSU2_TR(0x573a1a);
w4(R+4,u32(0-u32(r4(R+4))));
}
B573a1c:{NFSU2_TR(0x573a1c);
__builtin_memmove((R+24),(R+8),4);
}
B573a1e:{NFSU2_TR(0x573a1e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573a21:{NFSU2_TR(0x573a21);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573a23:{NFSU2_TR(0x573a23);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B573a27:{NFSU2_TR(0x573a27);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573a2b:{NFSU2_TR(0x573a2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573a2f:{NFSU2_TR(0x573a2f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B573a32:L573a32:{c.instructions+=9;NFSU2_TR(0x573a32);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B573a35:{NFSU2_TR(0x573a35);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B573a37:{NFSU2_TR(0x573a37);
__builtin_memmove((R+0),(R+24),4);
}
B573a39:{NFSU2_TR(0x573a39);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B573a3c:{NFSU2_TR(0x573a3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B573a3f:{NFSU2_TR(0x573a3f);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B573a42:{NFSU2_TR(0x573a42);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573a46:{NFSU2_TR(0x573a46);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573a4a:{NFSU2_TR(0x573a4a);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L573a73;}}
}
B573a4c:L573a4c:{c.instructions+=14;NFSU2_TR(0x573a4c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B573a4f:{NFSU2_TR(0x573a4f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B573a53:{NFSU2_TR(0x573a53);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573a56:{NFSU2_TR(0x573a56);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B573a58:{NFSU2_TR(0x573a58);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573a5b:{NFSU2_TR(0x573a5b);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573a5d:{NFSU2_TR(0x573a5d);
__builtin_memmove((R+4),(R+20),4);
}
B573a5f:{NFSU2_TR(0x573a5f);
w4(R+4,u32(0-u32(r4(R+4))));
}
B573a61:{NFSU2_TR(0x573a61);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573a64:{NFSU2_TR(0x573a64);
__builtin_memmove((R+24),(R+8),4);
}
B573a66:{NFSU2_TR(0x573a66);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573a68:{NFSU2_TR(0x573a68);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573a6c:{NFSU2_TR(0x573a6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573a70:{NFSU2_TR(0x573a70);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B573a73:L573a73:{c.instructions+=4;NFSU2_TR(0x573a73);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B573a75:{NFSU2_TR(0x573a75);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573a79:{NFSU2_TR(0x573a79);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B573a81:{NFSU2_TR(0x573a81);
{goto L573a90;}
}
B573a83:L573a83:{c.instructions+=2;NFSU2_TR(0x573a83);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573a87:{NFSU2_TR(0x573a87);
{goto L573a90;}
}
B573a90:L573a90:{c.instructions+=8;NFSU2_TR(0x573a90);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B573a94:{NFSU2_TR(0x573a94);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B573a96:{NFSU2_TR(0x573a96);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573a9a:{NFSU2_TR(0x573a9a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B573a9c:{NFSU2_TR(0x573a9c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B573a9e:{NFSU2_TR(0x573a9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B573aa2:{NFSU2_TR(0x573aa2);
u8 U[16];
w4(U+0,u32(u32(u32(0x1d8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B573aa9:{NFSU2_TR(0x573aa9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L573adf;}}
}
B573aab:L573aab:{c.instructions+=5;NFSU2_TR(0x573aab);
__builtin_memmove((R+12),(R+24),4);
}
B573aad:{NFSU2_TR(0x573aad);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B573ab0:{NFSU2_TR(0x573ab0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B573ab3:{NFSU2_TR(0x573ab3);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B573ab6:{NFSU2_TR(0x573ab6);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L573ad7;}}
}
B573ab8:L573ab8:{c.instructions+=12;NFSU2_TR(0x573ab8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B573abb:{NFSU2_TR(0x573abb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B573abf:{NFSU2_TR(0x573abf);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573ac2:{NFSU2_TR(0x573ac2);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B573ac4:{NFSU2_TR(0x573ac4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573ac7:{NFSU2_TR(0x573ac7);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573ac9:{NFSU2_TR(0x573ac9);
__builtin_memmove((R+4),(R+20),4);
}
B573acb:{NFSU2_TR(0x573acb);
w4(R+4,u32(0-u32(r4(R+4))));
}
B573acd:{NFSU2_TR(0x573acd);
__builtin_memmove((R+24),(R+8),4);
}
B573acf:{NFSU2_TR(0x573acf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573ad2:{NFSU2_TR(0x573ad2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573ad4:{NFSU2_TR(0x573ad4);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B573ad7:L573ad7:{c.instructions+=2;NFSU2_TR(0x573ad7);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x4ull))));
}
B573ada:{NFSU2_TR(0x573ada);
{goto L573c61;}
}
B573adf:L573adf:{c.instructions+=3;NFSU2_TR(0x573adf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffff0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573ae5:{NFSU2_TR(0x573ae5);
w4(R+0,u32(0x2ull));
}
B573aea:{NFSU2_TR(0x573aea);
if(r1(R+518)){{goto L573b50;}}
}
B573aec:L573aec:{c.instructions+=1;NFSU2_TR(0x573aec);
__builtin_memmove((R+16),(R+16),4);
}
B573af0:L573af0:{c.instructions+=4;NFSU2_TR(0x573af0);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B573af2:{NFSU2_TR(0x573af2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B573af3:{NFSU2_TR(0x573af3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B573af5:{NFSU2_TR(0x573af5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573af0u);}goto L573af0;}}
}
B573af7:L573af7:{c.instructions+=7;NFSU2_TR(0x573af7);
w4(R+4,u32(0x1ull));
}
B573afc:{NFSU2_TR(0x573afc);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B573afe:{NFSU2_TR(0x573afe);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B573b00:{NFSU2_TR(0x573b00);
__builtin_memmove((R+4),gp(0x8650f8),4);
}
B573b06:{NFSU2_TR(0x573b06);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B573b08:{NFSU2_TR(0x573b08);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573b0a:{NFSU2_TR(0x573b0a);
if(r1(R+518)){{goto L573b27;}}
}
B573b0c:L573b0c:{c.instructions+=8;NFSU2_TR(0x573b0c);
__builtin_memmove((R+12),gp(0x8650f8),4);
}
B573b12:{NFSU2_TR(0x573b12);
w4(R+4,u32(0x20ull));
}
B573b17:{NFSU2_TR(0x573b17);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B573b19:{NFSU2_TR(0x573b19);
__builtin_memmove((R+12),(R+24),4);
}
B573b1b:{NFSU2_TR(0x573b1b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B573b1d:{NFSU2_TR(0x573b1d);
__builtin_memmove((R+4),gp(0x8650f8),4);
}
B573b23:{NFSU2_TR(0x573b23);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573b25:{NFSU2_TR(0x573b25);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
}
B573b27:L573b27:{c.instructions+=2;NFSU2_TR(0x573b27);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B573b29:{NFSU2_TR(0x573b29);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L573b7e;}}
}
B573b2b:L573b2b:{c.instructions+=13;NFSU2_TR(0x573b2b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B573b2e:{NFSU2_TR(0x573b2e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573b31:{NFSU2_TR(0x573b31);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573b33:{NFSU2_TR(0x573b33);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B573b37:{NFSU2_TR(0x573b37);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573b3a:{NFSU2_TR(0x573b3a);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573b3c:{NFSU2_TR(0x573b3c);
__builtin_memmove((R+4),(R+20),4);
}
B573b3e:{NFSU2_TR(0x573b3e);
w4(R+4,u32(0-u32(r4(R+4))));
}
B573b40:{NFSU2_TR(0x573b40);
__builtin_memmove((R+24),(R+8),4);
}
B573b42:{NFSU2_TR(0x573b42);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573b45:{NFSU2_TR(0x573b45);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573b47:{NFSU2_TR(0x573b47);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B573b4a:{NFSU2_TR(0x573b4a);
{goto L573b7e;}
}
B573b50:L573b50:{c.instructions+=6;NFSU2_TR(0x573b50);
__builtin_memmove((R+12),(R+24),4);
}
B573b52:{NFSU2_TR(0x573b52);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B573b53:{NFSU2_TR(0x573b53);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B573b56:{NFSU2_TR(0x573b56);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B573b58:{NFSU2_TR(0x573b58);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B573b59:{NFSU2_TR(0x573b59);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L573b7a;}}
}
B573b5b:L573b5b:{c.instructions+=12;NFSU2_TR(0x573b5b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B573b5e:{NFSU2_TR(0x573b5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573b61:{NFSU2_TR(0x573b61);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573b63:{NFSU2_TR(0x573b63);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B573b67:{NFSU2_TR(0x573b67);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573b6a:{NFSU2_TR(0x573b6a);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573b6c:{NFSU2_TR(0x573b6c);
__builtin_memmove((R+4),(R+20),4);
}
B573b6e:{NFSU2_TR(0x573b6e);
w4(R+4,u32(0-u32(r4(R+4))));
}
B573b70:{NFSU2_TR(0x573b70);
__builtin_memmove((R+24),(R+8),4);
}
B573b72:{NFSU2_TR(0x573b72);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573b75:{NFSU2_TR(0x573b75);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573b77:{NFSU2_TR(0x573b77);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B573b7a:L573b7a:{c.instructions+=2;NFSU2_TR(0x573b7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573b7c:{NFSU2_TR(0x573b7c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573b50u);}goto L573b50;}}
}
B573b7e:L573b7e:{c.instructions+=2;NFSU2_TR(0x573b7e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B573b81:{NFSU2_TR(0x573b81);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L573c14;}}
}
B573b87:L573b87:{c.instructions+=3;NFSU2_TR(0x573b87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B573b8a:{NFSU2_TR(0x573b8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573b8c:{NFSU2_TR(0x573b8c);
if(r1(R+518)){{goto L573ba7;}}
}
B573b8e:L573b8e:{c.instructions+=9;NFSU2_TR(0x573b8e);
w4(R+4,u32(0x30ull));
}
B573b93:{NFSU2_TR(0x573b93);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B573b95:{NFSU2_TR(0x573b95);
__builtin_memmove((R+12),(R+24),4);
}
B573b97:{NFSU2_TR(0x573b97);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B573b99:{NFSU2_TR(0x573b99);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B573b9c:{NFSU2_TR(0x573b9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573b9e:{NFSU2_TR(0x573b9e);
w4(R+4,u32(0x10ull));
}
B573ba3:{NFSU2_TR(0x573ba3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B573ba5:{NFSU2_TR(0x573ba5);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B573ba7:L573ba7:{c.instructions+=2;NFSU2_TR(0x573ba7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B573ba9:{NFSU2_TR(0x573ba9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L573bca;}}
}
B573bab:L573bab:{c.instructions+=12;NFSU2_TR(0x573bab);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B573bae:{NFSU2_TR(0x573bae);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573bb1:{NFSU2_TR(0x573bb1);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573bb3:{NFSU2_TR(0x573bb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B573bb7:{NFSU2_TR(0x573bb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573bba:{NFSU2_TR(0x573bba);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573bbc:{NFSU2_TR(0x573bbc);
__builtin_memmove((R+4),(R+20),4);
}
B573bbe:{NFSU2_TR(0x573bbe);
w4(R+4,u32(0-u32(r4(R+4))));
}
B573bc0:{NFSU2_TR(0x573bc0);
__builtin_memmove((R+24),(R+8),4);
}
B573bc2:{NFSU2_TR(0x573bc2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573bc5:{NFSU2_TR(0x573bc5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573bc7:{NFSU2_TR(0x573bc7);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B573bca:L573bca:{c.instructions+=6;NFSU2_TR(0x573bca);
__builtin_memmove((R+4),(R+24),4);
}
B573bcc:{NFSU2_TR(0x573bcc);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B573bcf:{NFSU2_TR(0x573bcf);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B573bd2:{NFSU2_TR(0x573bd2);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B573bd5:{NFSU2_TR(0x573bd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573bd9:{NFSU2_TR(0x573bd9);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L573bfa;}}
}
B573bdb:L573bdb:{c.instructions+=12;NFSU2_TR(0x573bdb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B573bde:{NFSU2_TR(0x573bde);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573be1:{NFSU2_TR(0x573be1);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573be3:{NFSU2_TR(0x573be3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B573be7:{NFSU2_TR(0x573be7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573bea:{NFSU2_TR(0x573bea);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573bec:{NFSU2_TR(0x573bec);
__builtin_memmove((R+4),(R+20),4);
}
B573bee:{NFSU2_TR(0x573bee);
w4(R+4,u32(0-u32(r4(R+4))));
}
B573bf0:{NFSU2_TR(0x573bf0);
__builtin_memmove((R+24),(R+8),4);
}
B573bf2:{NFSU2_TR(0x573bf2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573bf5:{NFSU2_TR(0x573bf5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573bf7:{NFSU2_TR(0x573bf7);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B573bfa:L573bfa:{c.instructions+=8;NFSU2_TR(0x573bfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B573bfe:{NFSU2_TR(0x573bfe);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B573c01:{NFSU2_TR(0x573c01);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B573c03:{NFSU2_TR(0x573c03);
w4(R+4,u32(0x1ull));
}
B573c08:{NFSU2_TR(0x573c08);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573c0c:{NFSU2_TR(0x573c0c);
__builtin_memmove((R+4),(R+0),4);
}
B573c0e:{NFSU2_TR(0x573c0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573c12:{NFSU2_TR(0x573c12);
{goto L573c5b;}
}
B573c14:L573c14:{c.instructions+=2;NFSU2_TR(0x573c14);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573c16:{NFSU2_TR(0x573c16);
if(r1(R+518)){{goto L573c29;}}
}
B573c18:L573c18:{c.instructions+=7;NFSU2_TR(0x573c18);
w4(R+4,u32(0x20ull));
}
B573c1d:{NFSU2_TR(0x573c1d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B573c1f:{NFSU2_TR(0x573c1f);
__builtin_memmove((R+12),(R+24),4);
}
B573c21:{NFSU2_TR(0x573c21);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B573c23:{NFSU2_TR(0x573c23);
__builtin_memmove((R+4),(R+0),4);
}
B573c25:{NFSU2_TR(0x573c25);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573c27:{NFSU2_TR(0x573c27);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+0))));
}
B573c29:L573c29:{c.instructions+=2;NFSU2_TR(0x573c29);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B573c2b:{NFSU2_TR(0x573c2b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L573c4c;}}
}
B573c2d:L573c2d:{c.instructions+=12;NFSU2_TR(0x573c2d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B573c30:{NFSU2_TR(0x573c30);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573c33:{NFSU2_TR(0x573c33);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573c35:{NFSU2_TR(0x573c35);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B573c39:{NFSU2_TR(0x573c39);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573c3c:{NFSU2_TR(0x573c3c);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573c3e:{NFSU2_TR(0x573c3e);
__builtin_memmove((R+4),(R+20),4);
}
B573c40:{NFSU2_TR(0x573c40);
w4(R+4,u32(0-u32(r4(R+4))));
}
B573c42:{NFSU2_TR(0x573c42);
__builtin_memmove((R+24),(R+8),4);
}
B573c44:{NFSU2_TR(0x573c44);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573c47:{NFSU2_TR(0x573c47);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573c49:{NFSU2_TR(0x573c49);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B573c4c:L573c4c:{c.instructions+=4;NFSU2_TR(0x573c4c);
w4(R+4,u32(0x1ull));
}
B573c51:{NFSU2_TR(0x573c51);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573c55:{NFSU2_TR(0x573c55);
__builtin_memmove((R+4),(R+0),4);
}
B573c57:{NFSU2_TR(0x573c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573c5b:L573c5b:{c.instructions+=2;NFSU2_TR(0x573c5b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B573c5d:{NFSU2_TR(0x573c5d);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B573c61:L573c61:{c.instructions+=11;NFSU2_TR(0x573c61);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573c65:{NFSU2_TR(0x573c65);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B573c69:{NFSU2_TR(0x573c69);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B573c6d:{NFSU2_TR(0x573c6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573c71:{NFSU2_TR(0x573c71);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B573c73:{NFSU2_TR(0x573c73);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B573c75:{NFSU2_TR(0x573c75);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573c79:{NFSU2_TR(0x573c79);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B573c7b:{NFSU2_TR(0x573c7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573c7d:{NFSU2_TR(0x573c7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573c81:{NFSU2_TR(0x573c81);
if(r1(R+518)){{goto L573c99;}}
}
B573c83:L573c83:{c.instructions+=6;NFSU2_TR(0x573c83);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573c87:{NFSU2_TR(0x573c87);
w4(R+4,u32(0x10ull));
}
B573c8c:{NFSU2_TR(0x573c8c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B573c8e:{NFSU2_TR(0x573c8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573c92:{NFSU2_TR(0x573c92);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B573c94:{NFSU2_TR(0x573c94);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B573c99:L573c99:{c.instructions+=7;NFSU2_TR(0x573c99);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B573c9d:{NFSU2_TR(0x573c9d);
u8 U[16];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B573ca4:{NFSU2_TR(0x573ca4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B573ca5:{NFSU2_TR(0x573ca5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573ca9:{NFSU2_TR(0x573ca9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B573cab:{NFSU2_TR(0x573cab);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B573cad:{NFSU2_TR(0x573cad);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573a83u);}goto L573a83;}}
}
B573cb3:L573cb3:{c.instructions+=2;NFSU2_TR(0x573cb3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B573cb5:{NFSU2_TR(0x573cb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573a83u);}goto L573a83;}}
}
B573cbb:L573cbb:{c.instructions+=8;NFSU2_TR(0x573cbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573cbf:{NFSU2_TR(0x573cbf);
u8 U[16];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0xffffffffull));
s4(u32(r4(U+8)),r4(U+12));
}
B573cca:{NFSU2_TR(0x573cca);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B573ccb:{NFSU2_TR(0x573ccb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573ccf:{NFSU2_TR(0x573ccf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573cd3:{NFSU2_TR(0x573cd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573cd7:{NFSU2_TR(0x573cd7);
u8 U[4];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B573cde:{NFSU2_TR(0x573cde);
w4(R+12,u32(0x10ull));
}
B573ce3:L573ce3:{c.instructions+=7;NFSU2_TR(0x573ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573ce6:{NFSU2_TR(0x573ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573ce9:{NFSU2_TR(0x573ce9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B573ceb:{NFSU2_TR(0x573ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573cee:{NFSU2_TR(0x573cee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B573cf1:{NFSU2_TR(0x573cf1);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B573cf2:{NFSU2_TR(0x573cf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573ce3u);}goto L573ce3;}}
}
B573cf4:L573cf4:{c.instructions+=6;NFSU2_TR(0x573cf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B573cf8:{NFSU2_TR(0x573cf8);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0xffull))));
}
B573cfa:{NFSU2_TR(0x573cfa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B573cfc:{NFSU2_TR(0x573cfc);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B573d00:{NFSU2_TR(0x573d00);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573d04:{NFSU2_TR(0x573d04);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L573f17;}}
}
B573d0a:L573d0a:{c.instructions+=1;NFSU2_TR(0x573d0a);
{goto L573d10;}
}
B573d0c:L573d0c:{c.instructions+=2;NFSU2_TR(0x573d0c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B573d0e:{NFSU2_TR(0x573d0e);
__builtin_memmove((R+28),(R+28),4);
}
B573d10:L573d10:{c.instructions+=3;NFSU2_TR(0x573d10);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B573d12:{NFSU2_TR(0x573d12);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B573d14:{NFSU2_TR(0x573d14);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L573d4a;}}
}
B573d16:L573d16:{c.instructions+=5;NFSU2_TR(0x573d16);
__builtin_memmove((R+12),(R+24),4);
}
B573d18:{NFSU2_TR(0x573d18);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B573d1b:{NFSU2_TR(0x573d1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B573d1e:{NFSU2_TR(0x573d1e);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B573d21:{NFSU2_TR(0x573d21);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L573d42;}}
}
B573d23:L573d23:{c.instructions+=12;NFSU2_TR(0x573d23);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B573d26:{NFSU2_TR(0x573d26);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573d29:{NFSU2_TR(0x573d29);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573d2b:{NFSU2_TR(0x573d2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B573d2f:{NFSU2_TR(0x573d2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573d32:{NFSU2_TR(0x573d32);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573d34:{NFSU2_TR(0x573d34);
__builtin_memmove((R+4),(R+20),4);
}
B573d36:{NFSU2_TR(0x573d36);
w4(R+4,u32(0-u32(r4(R+4))));
}
B573d38:{NFSU2_TR(0x573d38);
__builtin_memmove((R+24),(R+8),4);
}
B573d3a:{NFSU2_TR(0x573d3a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573d3d:{NFSU2_TR(0x573d3d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573d3f:{NFSU2_TR(0x573d3f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B573d42:L573d42:{c.instructions+=2;NFSU2_TR(0x573d42);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x4ull))));
}
B573d45:{NFSU2_TR(0x573d45);
{goto L573ec8;}
}
B573d4a:L573d4a:{c.instructions+=3;NFSU2_TR(0x573d4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffff0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573d50:{NFSU2_TR(0x573d50);
w4(R+0,u32(0x2ull));
}
B573d55:{NFSU2_TR(0x573d55);
if(r1(R+518)){{goto L573db3;}}
}
B573d57:L573d57:{c.instructions+=4;NFSU2_TR(0x573d57);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B573d59:{NFSU2_TR(0x573d59);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B573d5a:{NFSU2_TR(0x573d5a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B573d5c:{NFSU2_TR(0x573d5c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573d57u);}goto L573d57;}}
}
B573d5e:L573d5e:{c.instructions+=7;NFSU2_TR(0x573d5e);
w4(R+4,u32(0x1ull));
}
B573d63:{NFSU2_TR(0x573d63);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B573d65:{NFSU2_TR(0x573d65);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B573d67:{NFSU2_TR(0x573d67);
__builtin_memmove((R+4),gp(0x8650f8),4);
}
B573d6d:{NFSU2_TR(0x573d6d);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B573d6f:{NFSU2_TR(0x573d6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573d71:{NFSU2_TR(0x573d71);
if(r1(R+518)){{goto L573d8e;}}
}
B573d73:L573d73:{c.instructions+=8;NFSU2_TR(0x573d73);
__builtin_memmove((R+12),gp(0x8650f8),4);
}
B573d79:{NFSU2_TR(0x573d79);
w4(R+4,u32(0x20ull));
}
B573d7e:{NFSU2_TR(0x573d7e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B573d80:{NFSU2_TR(0x573d80);
__builtin_memmove((R+12),(R+24),4);
}
B573d82:{NFSU2_TR(0x573d82);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B573d84:{NFSU2_TR(0x573d84);
__builtin_memmove((R+4),gp(0x8650f8),4);
}
B573d8a:{NFSU2_TR(0x573d8a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573d8c:{NFSU2_TR(0x573d8c);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
}
B573d8e:L573d8e:{c.instructions+=2;NFSU2_TR(0x573d8e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B573d90:{NFSU2_TR(0x573d90);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L573de1;}}
}
B573d92:L573d92:{c.instructions+=13;NFSU2_TR(0x573d92);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B573d95:{NFSU2_TR(0x573d95);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573d98:{NFSU2_TR(0x573d98);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573d9a:{NFSU2_TR(0x573d9a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B573d9e:{NFSU2_TR(0x573d9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573da1:{NFSU2_TR(0x573da1);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573da3:{NFSU2_TR(0x573da3);
__builtin_memmove((R+4),(R+20),4);
}
B573da5:{NFSU2_TR(0x573da5);
w4(R+4,u32(0-u32(r4(R+4))));
}
B573da7:{NFSU2_TR(0x573da7);
__builtin_memmove((R+24),(R+8),4);
}
B573da9:{NFSU2_TR(0x573da9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573dac:{NFSU2_TR(0x573dac);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573dae:{NFSU2_TR(0x573dae);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B573db1:{NFSU2_TR(0x573db1);
{goto L573de1;}
}
B573db3:L573db3:{c.instructions+=6;NFSU2_TR(0x573db3);
__builtin_memmove((R+12),(R+24),4);
}
B573db5:{NFSU2_TR(0x573db5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B573db6:{NFSU2_TR(0x573db6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B573db9:{NFSU2_TR(0x573db9);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B573dbb:{NFSU2_TR(0x573dbb);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B573dbc:{NFSU2_TR(0x573dbc);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L573ddd;}}
}
B573dbe:L573dbe:{c.instructions+=12;NFSU2_TR(0x573dbe);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B573dc1:{NFSU2_TR(0x573dc1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573dc4:{NFSU2_TR(0x573dc4);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573dc6:{NFSU2_TR(0x573dc6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B573dca:{NFSU2_TR(0x573dca);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573dcd:{NFSU2_TR(0x573dcd);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573dcf:{NFSU2_TR(0x573dcf);
__builtin_memmove((R+4),(R+20),4);
}
B573dd1:{NFSU2_TR(0x573dd1);
w4(R+4,u32(0-u32(r4(R+4))));
}
B573dd3:{NFSU2_TR(0x573dd3);
__builtin_memmove((R+24),(R+8),4);
}
B573dd5:{NFSU2_TR(0x573dd5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573dd8:{NFSU2_TR(0x573dd8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573dda:{NFSU2_TR(0x573dda);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B573ddd:L573ddd:{c.instructions+=2;NFSU2_TR(0x573ddd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573ddf:{NFSU2_TR(0x573ddf);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573db3u);}goto L573db3;}}
}
B573de1:L573de1:{c.instructions+=2;NFSU2_TR(0x573de1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B573de4:{NFSU2_TR(0x573de4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L573e77;}}
}
B573dea:L573dea:{c.instructions+=3;NFSU2_TR(0x573dea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B573ded:{NFSU2_TR(0x573ded);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573def:{NFSU2_TR(0x573def);
if(r1(R+518)){{goto L573e0a;}}
}
B573df1:L573df1:{c.instructions+=9;NFSU2_TR(0x573df1);
w4(R+4,u32(0x30ull));
}
B573df6:{NFSU2_TR(0x573df6);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B573df8:{NFSU2_TR(0x573df8);
__builtin_memmove((R+12),(R+24),4);
}
B573dfa:{NFSU2_TR(0x573dfa);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B573dfc:{NFSU2_TR(0x573dfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B573dff:{NFSU2_TR(0x573dff);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573e01:{NFSU2_TR(0x573e01);
w4(R+4,u32(0x10ull));
}
B573e06:{NFSU2_TR(0x573e06);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B573e08:{NFSU2_TR(0x573e08);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B573e0a:L573e0a:{c.instructions+=2;NFSU2_TR(0x573e0a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B573e0c:{NFSU2_TR(0x573e0c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L573e2d;}}
}
B573e0e:L573e0e:{c.instructions+=12;NFSU2_TR(0x573e0e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B573e11:{NFSU2_TR(0x573e11);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573e14:{NFSU2_TR(0x573e14);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573e16:{NFSU2_TR(0x573e16);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B573e1a:{NFSU2_TR(0x573e1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573e1d:{NFSU2_TR(0x573e1d);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573e1f:{NFSU2_TR(0x573e1f);
__builtin_memmove((R+4),(R+20),4);
}
B573e21:{NFSU2_TR(0x573e21);
w4(R+4,u32(0-u32(r4(R+4))));
}
B573e23:{NFSU2_TR(0x573e23);
__builtin_memmove((R+24),(R+8),4);
}
B573e25:{NFSU2_TR(0x573e25);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573e28:{NFSU2_TR(0x573e28);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573e2a:{NFSU2_TR(0x573e2a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B573e2d:L573e2d:{c.instructions+=6;NFSU2_TR(0x573e2d);
__builtin_memmove((R+4),(R+24),4);
}
B573e2f:{NFSU2_TR(0x573e2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B573e32:{NFSU2_TR(0x573e32);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B573e35:{NFSU2_TR(0x573e35);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B573e38:{NFSU2_TR(0x573e38);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573e3c:{NFSU2_TR(0x573e3c);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L573e5d;}}
}
B573e3e:L573e3e:{c.instructions+=12;NFSU2_TR(0x573e3e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B573e41:{NFSU2_TR(0x573e41);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573e44:{NFSU2_TR(0x573e44);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573e46:{NFSU2_TR(0x573e46);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B573e4a:{NFSU2_TR(0x573e4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573e4d:{NFSU2_TR(0x573e4d);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573e4f:{NFSU2_TR(0x573e4f);
__builtin_memmove((R+4),(R+20),4);
}
B573e51:{NFSU2_TR(0x573e51);
w4(R+4,u32(0-u32(r4(R+4))));
}
B573e53:{NFSU2_TR(0x573e53);
__builtin_memmove((R+24),(R+8),4);
}
B573e55:{NFSU2_TR(0x573e55);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573e58:{NFSU2_TR(0x573e58);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573e5a:{NFSU2_TR(0x573e5a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B573e5d:L573e5d:{c.instructions+=8;NFSU2_TR(0x573e5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B573e61:{NFSU2_TR(0x573e61);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B573e64:{NFSU2_TR(0x573e64);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B573e66:{NFSU2_TR(0x573e66);
w4(R+4,u32(0x1ull));
}
B573e6b:{NFSU2_TR(0x573e6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573e6f:{NFSU2_TR(0x573e6f);
__builtin_memmove((R+4),(R+0),4);
}
B573e71:{NFSU2_TR(0x573e71);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573e75:{NFSU2_TR(0x573e75);
{goto L573ebe;}
}
B573e77:L573e77:{c.instructions+=2;NFSU2_TR(0x573e77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573e79:{NFSU2_TR(0x573e79);
if(r1(R+518)){{goto L573e8c;}}
}
B573e7b:L573e7b:{c.instructions+=7;NFSU2_TR(0x573e7b);
w4(R+4,u32(0x20ull));
}
B573e80:{NFSU2_TR(0x573e80);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B573e82:{NFSU2_TR(0x573e82);
__builtin_memmove((R+12),(R+24),4);
}
B573e84:{NFSU2_TR(0x573e84);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B573e86:{NFSU2_TR(0x573e86);
__builtin_memmove((R+4),(R+0),4);
}
B573e88:{NFSU2_TR(0x573e88);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573e8a:{NFSU2_TR(0x573e8a);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+0))));
}
B573e8c:L573e8c:{c.instructions+=2;NFSU2_TR(0x573e8c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B573e8e:{NFSU2_TR(0x573e8e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L573eaf;}}
}
B573e90:L573e90:{c.instructions+=12;NFSU2_TR(0x573e90);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B573e93:{NFSU2_TR(0x573e93);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573e96:{NFSU2_TR(0x573e96);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573e98:{NFSU2_TR(0x573e98);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B573e9c:{NFSU2_TR(0x573e9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B573e9f:{NFSU2_TR(0x573e9f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B573ea1:{NFSU2_TR(0x573ea1);
__builtin_memmove((R+4),(R+20),4);
}
B573ea3:{NFSU2_TR(0x573ea3);
w4(R+4,u32(0-u32(r4(R+4))));
}
B573ea5:{NFSU2_TR(0x573ea5);
__builtin_memmove((R+24),(R+8),4);
}
B573ea7:{NFSU2_TR(0x573ea7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B573eaa:{NFSU2_TR(0x573eaa);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B573eac:{NFSU2_TR(0x573eac);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B573eaf:L573eaf:{c.instructions+=4;NFSU2_TR(0x573eaf);
w4(R+4,u32(0x1ull));
}
B573eb4:{NFSU2_TR(0x573eb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573eb8:{NFSU2_TR(0x573eb8);
__builtin_memmove((R+4),(R+0),4);
}
B573eba:{NFSU2_TR(0x573eba);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573ebe:L573ebe:{c.instructions+=3;NFSU2_TR(0x573ebe);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B573ec0:{NFSU2_TR(0x573ec0);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B573ec4:{NFSU2_TR(0x573ec4);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B573ec8:L573ec8:{c.instructions+=2;NFSU2_TR(0x573ec8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B573ec9:{NFSU2_TR(0x573ec9);
__builtin_memmove((R+16),(R+16),4);
}
B573ed0:L573ed0:{c.instructions+=4;NFSU2_TR(0x573ed0);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B573ed2:{NFSU2_TR(0x573ed2);
w4(R+4,u32(r1(R+0)));
}
B573ed5:{NFSU2_TR(0x573ed5);
u8 U[15];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B573edd:{NFSU2_TR(0x573edd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L573ee0;}}
}
B573edf:L573edf:{c.instructions+=1;NFSU2_TR(0x573edf);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B573ee0:L573ee0:{c.instructions+=2;NFSU2_TR(0x573ee0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573ee2:{NFSU2_TR(0x573ee2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573ed0u);}goto L573ed0;}}
}
B573ee4:L573ee4:{c.instructions+=10;NFSU2_TR(0x573ee4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B573ee8:{NFSU2_TR(0x573ee8);
w4(R+4,u32(r1(R+0)));
}
B573eeb:{NFSU2_TR(0x573eeb);
u8 U[13];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B573ef3:{NFSU2_TR(0x573ef3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B573ef7:{NFSU2_TR(0x573ef7);
u8 U[13];
w4(U+0,u32(u32(u32(0x318ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B573efe:{NFSU2_TR(0x573efe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B573eff:{NFSU2_TR(0x573eff);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B573f01:{NFSU2_TR(0x573f01);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B573f05:{NFSU2_TR(0x573f05);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573f09:{NFSU2_TR(0x573f09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573d0cu);}goto L573d0c;}}
}
B573f0f:L573f0f:{c.instructions+=2;NFSU2_TR(0x573f0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573f13:{NFSU2_TR(0x573f13);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573f17:L573f17:{c.instructions+=3;NFSU2_TR(0x573f17);
u8 U[4];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B573f1e:{NFSU2_TR(0x573f1e);
w4(R+12,u32(0x10ull));
}
B573f23:{NFSU2_TR(0x573f23);
w4(R+4,u32(0x40404040ull));
}
B573f28:L573f28:{c.instructions+=7;NFSU2_TR(0x573f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573f2b:{NFSU2_TR(0x573f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573f2e:{NFSU2_TR(0x573f2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B573f30:{NFSU2_TR(0x573f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573f33:{NFSU2_TR(0x573f33);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B573f36:{NFSU2_TR(0x573f36);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B573f37:{NFSU2_TR(0x573f37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573f28u);}goto L573f28;}}
}
B573f39:L573f39:{c.instructions+=11;NFSU2_TR(0x573f39);
u8 U[4];
w4(U+0,u32(u32(u32(0x318ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B573f40:{NFSU2_TR(0x573f40);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573f44:{NFSU2_TR(0x573f44);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B573f4b:{NFSU2_TR(0x573f4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B573f52:{NFSU2_TR(0x573f52);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573f56:{NFSU2_TR(0x573f56);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B573f5a:{NFSU2_TR(0x573f5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573f5e:{NFSU2_TR(0x573f5e);
w4(R+0,u32(0x1ull));
}
B573f63:{NFSU2_TR(0x573f63);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B573f65:{NFSU2_TR(0x573f65);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573f69:{NFSU2_TR(0x573f69);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x574070u,574);}
}
B573f6f:L573f6f:{c.instructions+=3;NFSU2_TR(0x573f6f);
w4(R+4,u32(0x7ull));
}
B573f74:{NFSU2_TR(0x573f74);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573f78:{NFSU2_TR(0x573f78);
{goto L573f80;}
}
B573f80:L573f80:{c.instructions+=2;NFSU2_TR(0x573f80);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B573f83:{NFSU2_TR(0x573f83);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x574070u,574);}
}
B573f89:L573f89:{c.instructions+=6;NFSU2_TR(0x573f89);
w4(R+12,u32(0x1ull));
}
B573f8e:{NFSU2_TR(0x573f8e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B573f90:{NFSU2_TR(0x573f90);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B573f94:{NFSU2_TR(0x573f94);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573f96:{NFSU2_TR(0x573f96);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573f9a:{NFSU2_TR(0x573f9a);
if(r1(R+518)){TAIL_STATIC(0x57404du,574);}
}
B573fa0:L573fa0:{c.instructions+=11;NFSU2_TR(0x573fa0);
u8 U[5];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B573fa5:{NFSU2_TR(0x573fa5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573fa9:{NFSU2_TR(0x573fa9);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B573fad:{NFSU2_TR(0x573fad);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573fb1:{NFSU2_TR(0x573fb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B573fb5:{NFSU2_TR(0x573fb5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(r1(U+0)));
}
B573fb8:{NFSU2_TR(0x573fb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573fbc:{NFSU2_TR(0x573fbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B573fc0:{NFSU2_TR(0x573fc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B573fc4:{NFSU2_TR(0x573fc4);
u8 U[16];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B573fc8:{NFSU2_TR(0x573fc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L573fd7;}}
}
B573fca:L573fca:{c.instructions+=3;NFSU2_TR(0x573fca);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B573fce:{NFSU2_TR(0x573fce);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B573fd2:{NFSU2_TR(0x573fd2);
w4(R+0,u32(0x60ull));
}
B573fd7:L573fd7:{c.instructions+=2;NFSU2_TR(0x573fd7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B573fd9:{NFSU2_TR(0x573fd9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x57403fu,574);}
}
B573fdb:L573fdb:{c.instructions+=9;NFSU2_TR(0x573fdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B573fdf:{NFSU2_TR(0x573fdf);
__builtin_memmove((R+4),(R+12),4);
}
B573fe1:{NFSU2_TR(0x573fe1);
__builtin_memmove((R+12),(R+0),1);
}
B573fe3:{NFSU2_TR(0x573fe3);
__builtin_memmove((R+13),(R+12),1);
}
B573fe5:{NFSU2_TR(0x573fe5);
__builtin_memmove((R+8),(R+4),4);
}
B573fe7:{NFSU2_TR(0x573fe7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B573fea:{NFSU2_TR(0x573fea);
__builtin_memmove((R+0),(R+12),4);
}
B573fec:{NFSU2_TR(0x573fec);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B573fef:{NFSU2_TR(0x573fef);
__builtin_memmove((R+0),(R+12),2);
}
B573ff2:L573ff2:{c.instructions+=1;NFSU2_TR(0x573ff2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L573ff4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573ff2u);}goto L573ff2;}
}
B573ff4:L573ff4:{c.instructions+=2;NFSU2_TR(0x573ff4);
__builtin_memmove((R+4),(R+8),4);
}
B573ff6:{NFSU2_TR(0x573ff6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B573ff9:L573ff9:{c.instructions+=1;NFSU2_TR(0x573ff9);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L573ffb;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x573ff9u);}goto L573ff9;}
}
B573ffb:L573ffb:{c.instructions+=2;NFSU2_TR(0x573ffb);
u8 U[5];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B573fff:{NFSU2_TR(0x573fff);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x574003u,574);
}
XIT:NFSU2_TR_EXIT(0x573,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
