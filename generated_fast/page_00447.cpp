#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_442(u8* __restrict R,Cpu& c);
u32 body_448(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x447,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x447,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_447(u8* __restrict R,Cpu& c);
u32 page_447(Cpu& c){return body_447(c.regs.data(),c);}
__attribute__((noinline)) u32 body_447(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x447004:goto L447004;
case 0x447005:c.instructions+=10;goto B447005;
case 0x447008:c.instructions+=9;goto B447008;
case 0x44700b:c.instructions+=8;goto B44700b;
case 0x447011:c.instructions+=7;goto B447011;
case 0x447014:c.instructions+=6;goto B447014;
case 0x447017:c.instructions+=5;goto B447017;
case 0x44701d:c.instructions+=4;goto B44701d;
case 0x447020:c.instructions+=3;goto B447020;
case 0x447023:c.instructions+=2;goto B447023;
case 0x447025:c.instructions+=1;goto B447025;
case 0x447027:goto L447027;
case 0x447029:c.instructions+=1;goto B447029;
case 0x447030:goto L447030;
case 0x447033:c.instructions+=16;goto B447033;
case 0x447037:c.instructions+=15;goto B447037;
case 0x447039:c.instructions+=14;goto B447039;
case 0x44703c:c.instructions+=13;goto B44703c;
case 0x44703d:c.instructions+=12;goto B44703d;
case 0x447040:c.instructions+=11;goto B447040;
case 0x447043:c.instructions+=10;goto B447043;
case 0x447045:c.instructions+=9;goto B447045;
case 0x447048:c.instructions+=8;goto B447048;
case 0x44704a:c.instructions+=7;goto B44704a;
case 0x44704d:c.instructions+=6;goto B44704d;
case 0x447050:c.instructions+=5;goto B447050;
case 0x447053:c.instructions+=4;goto B447053;
case 0x447056:c.instructions+=3;goto B447056;
case 0x44705a:c.instructions+=2;goto B44705a;
case 0x44705c:c.instructions+=1;goto B44705c;
case 0x44705e:goto L44705e;
case 0x447062:c.instructions+=3;goto B447062;
case 0x447065:c.instructions+=2;goto B447065;
case 0x44706d:c.instructions+=1;goto B44706d;
case 0x44706f:goto L44706f;
case 0x447073:goto L447073;
case 0x447077:c.instructions+=21;goto B447077;
case 0x447078:c.instructions+=20;goto B447078;
case 0x44707e:c.instructions+=19;goto B44707e;
case 0x447080:c.instructions+=18;goto B447080;
case 0x447083:c.instructions+=17;goto B447083;
case 0x447086:c.instructions+=16;goto B447086;
case 0x447088:c.instructions+=15;goto B447088;
case 0x44708b:c.instructions+=14;goto B44708b;
case 0x44708d:c.instructions+=13;goto B44708d;
case 0x447091:c.instructions+=12;goto B447091;
case 0x447093:c.instructions+=11;goto B447093;
case 0x447097:c.instructions+=10;goto B447097;
case 0x44709b:c.instructions+=9;goto B44709b;
case 0x44709e:c.instructions+=8;goto B44709e;
case 0x4470a0:c.instructions+=7;goto B4470a0;
case 0x4470a4:c.instructions+=6;goto B4470a4;
case 0x4470a6:c.instructions+=5;goto B4470a6;
case 0x4470a9:c.instructions+=4;goto B4470a9;
case 0x4470ac:c.instructions+=3;goto B4470ac;
case 0x4470ae:c.instructions+=2;goto B4470ae;
case 0x4470af:c.instructions+=1;goto B4470af;
case 0x4470b0:goto L4470b0;
case 0x4470b1:c.instructions+=9;goto B4470b1;
case 0x4470b5:c.instructions+=8;goto B4470b5;
case 0x4470b6:c.instructions+=7;goto B4470b6;
case 0x4470b8:c.instructions+=6;goto B4470b8;
case 0x4470bb:c.instructions+=5;goto B4470bb;
case 0x4470bc:c.instructions+=4;goto B4470bc;
case 0x4470be:c.instructions+=3;goto B4470be;
case 0x4470c1:c.instructions+=2;goto B4470c1;
case 0x4470c5:c.instructions+=1;goto B4470c5;
case 0x4470ca:goto L4470ca;
case 0x4470cc:c.instructions+=3;goto B4470cc;
case 0x4470ce:c.instructions+=2;goto B4470ce;
case 0x4470d2:c.instructions+=1;goto B4470d2;
case 0x4470d4:goto L4470d4;
case 0x4470d7:c.instructions+=13;goto B4470d7;
case 0x4470d9:c.instructions+=12;goto B4470d9;
case 0x4470dd:c.instructions+=11;goto B4470dd;
case 0x4470df:c.instructions+=10;goto B4470df;
case 0x4470e2:c.instructions+=9;goto B4470e2;
case 0x4470e5:c.instructions+=8;goto B4470e5;
case 0x4470e8:c.instructions+=7;goto B4470e8;
case 0x4470eb:c.instructions+=6;goto B4470eb;
case 0x4470ee:c.instructions+=5;goto B4470ee;
case 0x4470ef:c.instructions+=4;goto B4470ef;
case 0x4470f2:c.instructions+=3;goto B4470f2;
case 0x4470f3:c.instructions+=2;goto B4470f3;
case 0x4470f4:c.instructions+=1;goto B4470f4;
case 0x4470f7:goto L4470f7;
case 0x4470fa:c.instructions+=2;goto B4470fa;
case 0x4470fc:c.instructions+=1;goto B4470fc;
case 0x4470fe:goto L4470fe;
case 0x447101:c.instructions+=15;goto B447101;
case 0x447105:c.instructions+=14;goto B447105;
case 0x447108:c.instructions+=13;goto B447108;
case 0x44710c:c.instructions+=12;goto B44710c;
case 0x44710e:c.instructions+=11;goto B44710e;
case 0x447110:c.instructions+=10;goto B447110;
case 0x447113:c.instructions+=9;goto B447113;
case 0x447116:c.instructions+=8;goto B447116;
case 0x447119:c.instructions+=7;goto B447119;
case 0x44711c:c.instructions+=6;goto B44711c;
case 0x44711f:c.instructions+=5;goto B44711f;
case 0x447120:c.instructions+=4;goto B447120;
case 0x447123:c.instructions+=3;goto B447123;
case 0x447124:c.instructions+=2;goto B447124;
case 0x447125:c.instructions+=1;goto B447125;
case 0x447128:goto L447128;
case 0x44712c:c.instructions+=4;goto B44712c;
case 0x447130:c.instructions+=3;goto B447130;
case 0x447132:c.instructions+=2;goto B447132;
case 0x447135:c.instructions+=1;goto B447135;
case 0x447137:goto L447137;
case 0x44713d:goto L44713d;
case 0x447141:c.instructions+=14;goto B447141;
case 0x447144:c.instructions+=13;goto B447144;
case 0x447147:c.instructions+=12;goto B447147;
case 0x447149:c.instructions+=11;goto B447149;
case 0x44714a:c.instructions+=10;goto B44714a;
case 0x44714d:c.instructions+=9;goto B44714d;
case 0x447150:c.instructions+=8;goto B447150;
case 0x447151:c.instructions+=7;goto B447151;
case 0x447154:c.instructions+=6;goto B447154;
case 0x447156:c.instructions+=5;goto B447156;
case 0x447157:c.instructions+=4;goto B447157;
case 0x44715b:c.instructions+=3;goto B44715b;
case 0x44715c:c.instructions+=2;goto B44715c;
case 0x44715e:c.instructions+=1;goto B44715e;
case 0x447163:goto L447163;
case 0x447164:c.instructions+=3;goto B447164;
case 0x447165:c.instructions+=2;goto B447165;
case 0x447166:c.instructions+=1;goto B447166;
case 0x447170:goto L447170;
case 0x447171:c.instructions+=9;goto B447171;
case 0x447175:c.instructions+=8;goto B447175;
case 0x447176:c.instructions+=7;goto B447176;
case 0x447178:c.instructions+=6;goto B447178;
case 0x44717b:c.instructions+=5;goto B44717b;
case 0x44717c:c.instructions+=4;goto B44717c;
case 0x44717e:c.instructions+=3;goto B44717e;
case 0x447181:c.instructions+=2;goto B447181;
case 0x447185:c.instructions+=1;goto B447185;
case 0x44718a:goto L44718a;
case 0x44718c:c.instructions+=3;goto B44718c;
case 0x44718e:c.instructions+=2;goto B44718e;
case 0x447192:c.instructions+=1;goto B447192;
case 0x447194:goto L447194;
case 0x447197:c.instructions+=9;goto B447197;
case 0x447199:c.instructions+=8;goto B447199;
case 0x44719d:c.instructions+=7;goto B44719d;
case 0x44719f:c.instructions+=6;goto B44719f;
case 0x4471a2:c.instructions+=5;goto B4471a2;
case 0x4471a3:c.instructions+=4;goto B4471a3;
case 0x4471a6:c.instructions+=3;goto B4471a6;
case 0x4471a7:c.instructions+=2;goto B4471a7;
case 0x4471a8:c.instructions+=1;goto B4471a8;
case 0x4471ab:goto L4471ab;
case 0x4471ae:c.instructions+=2;goto B4471ae;
case 0x4471b0:c.instructions+=1;goto B4471b0;
case 0x4471b2:goto L4471b2;
case 0x4471b5:c.instructions+=9;goto B4471b5;
case 0x4471b9:c.instructions+=8;goto B4471b9;
case 0x4471bd:c.instructions+=7;goto B4471bd;
case 0x4471bf:c.instructions+=6;goto B4471bf;
case 0x4471c3:c.instructions+=5;goto B4471c3;
case 0x4471c4:c.instructions+=4;goto B4471c4;
case 0x4471c7:c.instructions+=3;goto B4471c7;
case 0x4471c8:c.instructions+=2;goto B4471c8;
case 0x4471c9:c.instructions+=1;goto B4471c9;
case 0x4471cc:goto L4471cc;
case 0x4471d0:c.instructions+=4;goto B4471d0;
case 0x4471d4:c.instructions+=3;goto B4471d4;
case 0x4471d6:c.instructions+=2;goto B4471d6;
case 0x4471d9:c.instructions+=1;goto B4471d9;
case 0x4471db:goto L4471db;
case 0x4471e1:goto L4471e1;
case 0x4471e5:c.instructions+=13;goto B4471e5;
case 0x4471e8:c.instructions+=12;goto B4471e8;
case 0x4471ea:c.instructions+=11;goto B4471ea;
case 0x4471eb:c.instructions+=10;goto B4471eb;
case 0x4471ee:c.instructions+=9;goto B4471ee;
case 0x4471f0:c.instructions+=8;goto B4471f0;
case 0x4471f3:c.instructions+=7;goto B4471f3;
case 0x4471f4:c.instructions+=6;goto B4471f4;
case 0x4471f7:c.instructions+=5;goto B4471f7;
case 0x4471f9:c.instructions+=4;goto B4471f9;
case 0x4471fa:c.instructions+=3;goto B4471fa;
case 0x4471fe:c.instructions+=2;goto B4471fe;
case 0x4471ff:c.instructions+=1;goto B4471ff;
case 0x447204:goto L447204;
case 0x447205:c.instructions+=3;goto B447205;
case 0x447206:c.instructions+=2;goto B447206;
case 0x447207:c.instructions+=1;goto B447207;
case 0x447210:goto L447210;
case 0x447211:c.instructions+=2;goto B447211;
case 0x447213:c.instructions+=1;goto B447213;
case 0x447218:goto L447218;
case 0x44721d:c.instructions+=1;goto B44721d;
case 0x44721f:goto L44721f;
case 0x447220:c.instructions+=1;goto B447220;
case 0x447225:goto L447225;
case 0x447228:goto L447228;
case 0x44722a:c.instructions+=2;goto B44722a;
case 0x44722b:c.instructions+=1;goto B44722b;
case 0x447230:goto L447230;
case 0x447232:c.instructions+=13;goto B447232;
case 0x447237:c.instructions+=12;goto B447237;
case 0x44723d:c.instructions+=11;goto B44723d;
case 0x44723e:c.instructions+=10;goto B44723e;
case 0x447245:c.instructions+=9;goto B447245;
case 0x447246:c.instructions+=8;goto B447246;
case 0x447247:c.instructions+=7;goto B447247;
case 0x447249:c.instructions+=6;goto B447249;
case 0x44724d:c.instructions+=5;goto B44724d;
case 0x447253:c.instructions+=4;goto B447253;
case 0x447256:c.instructions+=3;goto B447256;
case 0x447257:c.instructions+=2;goto B447257;
case 0x44725f:c.instructions+=1;goto B44725f;
case 0x447264:goto L447264;
case 0x447268:c.instructions+=6;goto B447268;
case 0x44726b:c.instructions+=5;goto B44726b;
case 0x447271:c.instructions+=4;goto B447271;
case 0x447272:c.instructions+=3;goto B447272;
case 0x447279:c.instructions+=2;goto B447279;
case 0x44727c:c.instructions+=1;goto B44727c;
case 0x447280:goto L447280;
case 0x447281:c.instructions+=10;goto B447281;
case 0x447283:c.instructions+=9;goto B447283;
case 0x447286:c.instructions+=8;goto B447286;
case 0x44728c:c.instructions+=7;goto B44728c;
case 0x447291:c.instructions+=6;goto B447291;
case 0x447293:c.instructions+=5;goto B447293;
case 0x447294:c.instructions+=4;goto B447294;
case 0x447295:c.instructions+=3;goto B447295;
case 0x447296:c.instructions+=2;goto B447296;
case 0x447298:c.instructions+=1;goto B447298;
case 0x44729e:goto L44729e;
case 0x4472a1:c.instructions+=3;goto B4472a1;
case 0x4472a7:c.instructions+=2;goto B4472a7;
case 0x4472ac:c.instructions+=1;goto B4472ac;
case 0x4472ae:goto L4472ae;
case 0x4472b0:goto L4472b0;
case 0x4472b6:c.instructions+=3;goto B4472b6;
case 0x4472bb:c.instructions+=2;goto B4472bb;
case 0x4472bd:c.instructions+=1;goto B4472bd;
case 0x4472bf:goto L4472bf;
case 0x4472c4:c.instructions+=2;goto B4472c4;
case 0x4472c6:c.instructions+=1;goto B4472c6;
case 0x4472c8:goto L4472c8;
case 0x4472cd:c.instructions+=2;goto B4472cd;
case 0x4472cf:c.instructions+=1;goto B4472cf;
case 0x4472d1:goto L4472d1;
case 0x4472db:goto L4472db;
case 0x4472e0:c.instructions+=2;goto B4472e0;
case 0x4472e5:c.instructions+=1;goto B4472e5;
case 0x4472e9:goto L4472e9;
case 0x4472eb:goto L4472eb;
case 0x4472f2:c.instructions+=12;goto B4472f2;
case 0x4472f8:c.instructions+=11;goto B4472f8;
case 0x4472ff:c.instructions+=10;goto B4472ff;
case 0x447306:c.instructions+=9;goto B447306;
case 0x44730c:c.instructions+=8;goto B44730c;
case 0x447313:c.instructions+=7;goto B447313;
case 0x44731a:c.instructions+=6;goto B44731a;
case 0x447320:c.instructions+=5;goto B447320;
case 0x447324:c.instructions+=4;goto B447324;
case 0x44732f:c.instructions+=3;goto B44732f;
case 0x447330:c.instructions+=2;goto B447330;
case 0x447337:c.instructions+=1;goto B447337;
case 0x447339:goto L447339;
case 0x44733e:c.instructions+=2;goto B44733e;
case 0x447340:c.instructions+=1;goto B447340;
case 0x447342:goto L447342;
case 0x44734c:goto L44734c;
case 0x44734f:c.instructions+=1;goto B44734f;
case 0x447350:goto L447350;
case 0x447351:c.instructions+=1;goto B447351;
case 0x447356:goto L447356;
case 0x447359:c.instructions+=4;goto B447359;
case 0x44735d:c.instructions+=3;goto B44735d;
case 0x44735e:c.instructions+=2;goto B44735e;
case 0x44735f:c.instructions+=1;goto B44735f;
case 0x447364:goto L447364;
case 0x447368:c.instructions+=50;goto B447368;
case 0x44736b:c.instructions+=49;goto B44736b;
case 0x44736f:c.instructions+=48;goto B44736f;
case 0x447373:c.instructions+=47;goto B447373;
case 0x447374:c.instructions+=46;goto B447374;
case 0x447377:c.instructions+=45;goto B447377;
case 0x44737a:c.instructions+=44;goto B44737a;
case 0x44737b:c.instructions+=43;goto B44737b;
case 0x447383:c.instructions+=42;goto B447383;
case 0x447385:c.instructions+=41;goto B447385;
case 0x44738d:c.instructions+=40;goto B44738d;
case 0x447391:c.instructions+=39;goto B447391;
case 0x447399:c.instructions+=38;goto B447399;
case 0x44739c:c.instructions+=37;goto B44739c;
case 0x44739e:c.instructions+=36;goto B44739e;
case 0x4473a2:c.instructions+=35;goto B4473a2;
case 0x4473a6:c.instructions+=34;goto B4473a6;
case 0x4473a9:c.instructions+=33;goto B4473a9;
case 0x4473ad:c.instructions+=32;goto B4473ad;
case 0x4473b0:c.instructions+=31;goto B4473b0;
case 0x4473b2:c.instructions+=30;goto B4473b2;
case 0x4473b6:c.instructions+=29;goto B4473b6;
case 0x4473b9:c.instructions+=28;goto B4473b9;
case 0x4473bb:c.instructions+=27;goto B4473bb;
case 0x4473bf:c.instructions+=26;goto B4473bf;
case 0x4473c3:c.instructions+=25;goto B4473c3;
case 0x4473c6:c.instructions+=24;goto B4473c6;
case 0x4473ca:c.instructions+=23;goto B4473ca;
case 0x4473cd:c.instructions+=22;goto B4473cd;
case 0x4473cf:c.instructions+=21;goto B4473cf;
case 0x4473d3:c.instructions+=20;goto B4473d3;
case 0x4473d6:c.instructions+=19;goto B4473d6;
case 0x4473d8:c.instructions+=18;goto B4473d8;
case 0x4473dc:c.instructions+=17;goto B4473dc;
case 0x4473e0:c.instructions+=16;goto B4473e0;
case 0x4473e4:c.instructions+=15;goto B4473e4;
case 0x4473e7:c.instructions+=14;goto B4473e7;
case 0x4473e9:c.instructions+=13;goto B4473e9;
case 0x4473ec:c.instructions+=12;goto B4473ec;
case 0x4473ef:c.instructions+=11;goto B4473ef;
case 0x4473f2:c.instructions+=10;goto B4473f2;
case 0x4473f5:c.instructions+=9;goto B4473f5;
case 0x4473f8:c.instructions+=8;goto B4473f8;
case 0x4473fa:c.instructions+=7;goto B4473fa;
case 0x4473fd:c.instructions+=6;goto B4473fd;
case 0x4473ff:c.instructions+=5;goto B4473ff;
case 0x447401:c.instructions+=4;goto B447401;
case 0x447404:c.instructions+=3;goto B447404;
case 0x447406:c.instructions+=2;goto B447406;
case 0x447409:c.instructions+=1;goto B447409;
case 0x44740e:goto L44740e;
case 0x447414:c.instructions+=26;goto B447414;
case 0x447417:c.instructions+=25;goto B447417;
case 0x44741a:c.instructions+=24;goto B44741a;
case 0x44741e:c.instructions+=23;goto B44741e;
case 0x447420:c.instructions+=22;goto B447420;
case 0x447423:c.instructions+=21;goto B447423;
case 0x447425:c.instructions+=20;goto B447425;
case 0x447428:c.instructions+=19;goto B447428;
case 0x44742a:c.instructions+=18;goto B44742a;
case 0x44742d:c.instructions+=17;goto B44742d;
case 0x447431:c.instructions+=16;goto B447431;
case 0x447433:c.instructions+=15;goto B447433;
case 0x447436:c.instructions+=14;goto B447436;
case 0x447438:c.instructions+=13;goto B447438;
case 0x44743b:c.instructions+=12;goto B44743b;
case 0x44743e:c.instructions+=11;goto B44743e;
case 0x447441:c.instructions+=10;goto B447441;
case 0x447444:c.instructions+=9;goto B447444;
case 0x447447:c.instructions+=8;goto B447447;
case 0x447449:c.instructions+=7;goto B447449;
case 0x44744c:c.instructions+=6;goto B44744c;
case 0x44744f:c.instructions+=5;goto B44744f;
case 0x447452:c.instructions+=4;goto B447452;
case 0x447455:c.instructions+=3;goto B447455;
case 0x44745b:c.instructions+=2;goto B44745b;
case 0x44745d:c.instructions+=1;goto B44745d;
case 0x44745f:goto L44745f;
case 0x447464:c.instructions+=3;goto B447464;
case 0x447466:c.instructions+=2;goto B447466;
case 0x44746c:c.instructions+=1;goto B44746c;
case 0x447473:goto L447473;
case 0x447475:goto L447475;
case 0x44747f:goto L44747f;
case 0x447485:c.instructions+=4;goto B447485;
case 0x44748b:c.instructions+=3;goto B44748b;
case 0x44748d:c.instructions+=2;goto B44748d;
case 0x447490:c.instructions+=1;goto B447490;
case 0x447496:goto L447496;
case 0x44749c:c.instructions+=95;goto B44749c;
case 0x44749e:c.instructions+=94;goto B44749e;
case 0x4474a4:c.instructions+=93;goto B4474a4;
case 0x4474a7:c.instructions+=92;goto B4474a7;
case 0x4474ad:c.instructions+=91;goto B4474ad;
case 0x4474b0:c.instructions+=90;goto B4474b0;
case 0x4474b6:c.instructions+=89;goto B4474b6;
case 0x4474b9:c.instructions+=88;goto B4474b9;
case 0x4474bf:c.instructions+=87;goto B4474bf;
case 0x4474c5:c.instructions+=86;goto B4474c5;
case 0x4474c9:c.instructions+=85;goto B4474c9;
case 0x4474cd:c.instructions+=84;goto B4474cd;
case 0x4474cf:c.instructions+=83;goto B4474cf;
case 0x4474d5:c.instructions+=82;goto B4474d5;
case 0x4474db:c.instructions+=81;goto B4474db;
case 0x4474e1:c.instructions+=80;goto B4474e1;
case 0x4474e3:c.instructions+=79;goto B4474e3;
case 0x4474e9:c.instructions+=78;goto B4474e9;
case 0x4474ef:c.instructions+=77;goto B4474ef;
case 0x4474f1:c.instructions+=76;goto B4474f1;
case 0x4474f7:c.instructions+=75;goto B4474f7;
case 0x4474fd:c.instructions+=74;goto B4474fd;
case 0x4474ff:c.instructions+=73;goto B4474ff;
case 0x447505:c.instructions+=72;goto B447505;
case 0x44750b:c.instructions+=71;goto B44750b;
case 0x44750e:c.instructions+=70;goto B44750e;
case 0x447514:c.instructions+=69;goto B447514;
case 0x447517:c.instructions+=68;goto B447517;
case 0x44751d:c.instructions+=67;goto B44751d;
case 0x447520:c.instructions+=66;goto B447520;
case 0x447526:c.instructions+=65;goto B447526;
case 0x44752c:c.instructions+=64;goto B44752c;
case 0x447530:c.instructions+=63;goto B447530;
case 0x447534:c.instructions+=62;goto B447534;
case 0x447536:c.instructions+=61;goto B447536;
case 0x44753c:c.instructions+=60;goto B44753c;
case 0x447542:c.instructions+=59;goto B447542;
case 0x447548:c.instructions+=58;goto B447548;
case 0x44754a:c.instructions+=57;goto B44754a;
case 0x447550:c.instructions+=56;goto B447550;
case 0x447556:c.instructions+=55;goto B447556;
case 0x447558:c.instructions+=54;goto B447558;
case 0x44755e:c.instructions+=53;goto B44755e;
case 0x447564:c.instructions+=52;goto B447564;
case 0x447566:c.instructions+=51;goto B447566;
case 0x44756c:c.instructions+=50;goto B44756c;
case 0x447572:c.instructions+=49;goto B447572;
case 0x447575:c.instructions+=48;goto B447575;
case 0x44757b:c.instructions+=47;goto B44757b;
case 0x44757e:c.instructions+=46;goto B44757e;
case 0x447584:c.instructions+=45;goto B447584;
case 0x447587:c.instructions+=44;goto B447587;
case 0x44758d:c.instructions+=43;goto B44758d;
case 0x447591:c.instructions+=42;goto B447591;
case 0x447595:c.instructions+=41;goto B447595;
case 0x447597:c.instructions+=40;goto B447597;
case 0x44759d:c.instructions+=39;goto B44759d;
case 0x4475a3:c.instructions+=38;goto B4475a3;
case 0x4475a9:c.instructions+=37;goto B4475a9;
case 0x4475af:c.instructions+=36;goto B4475af;
case 0x4475b1:c.instructions+=35;goto B4475b1;
case 0x4475b7:c.instructions+=34;goto B4475b7;
case 0x4475bd:c.instructions+=33;goto B4475bd;
case 0x4475bf:c.instructions+=32;goto B4475bf;
case 0x4475c5:c.instructions+=31;goto B4475c5;
case 0x4475cb:c.instructions+=30;goto B4475cb;
case 0x4475cd:c.instructions+=29;goto B4475cd;
case 0x4475d3:c.instructions+=28;goto B4475d3;
case 0x4475d9:c.instructions+=27;goto B4475d9;
case 0x4475e0:c.instructions+=26;goto B4475e0;
case 0x4475e6:c.instructions+=25;goto B4475e6;
case 0x4475ed:c.instructions+=24;goto B4475ed;
case 0x4475f3:c.instructions+=23;goto B4475f3;
case 0x4475f6:c.instructions+=22;goto B4475f6;
case 0x4475fa:c.instructions+=21;goto B4475fa;
case 0x4475fc:c.instructions+=20;goto B4475fc;
case 0x447602:c.instructions+=19;goto B447602;
case 0x447608:c.instructions+=18;goto B447608;
case 0x44760e:c.instructions+=17;goto B44760e;
case 0x447610:c.instructions+=16;goto B447610;
case 0x447616:c.instructions+=15;goto B447616;
case 0x44761c:c.instructions+=14;goto B44761c;
case 0x447622:c.instructions+=13;goto B447622;
case 0x447624:c.instructions+=12;goto B447624;
case 0x44762a:c.instructions+=11;goto B44762a;
case 0x447630:c.instructions+=10;goto B447630;
case 0x447636:c.instructions+=9;goto B447636;
case 0x447638:c.instructions+=8;goto B447638;
case 0x44763e:c.instructions+=7;goto B44763e;
case 0x447644:c.instructions+=6;goto B447644;
case 0x44764a:c.instructions+=5;goto B44764a;
case 0x44764c:c.instructions+=4;goto B44764c;
case 0x447652:c.instructions+=3;goto B447652;
case 0x447656:c.instructions+=2;goto B447656;
case 0x447658:c.instructions+=1;goto B447658;
case 0x44765d:goto L44765d;
case 0x447664:c.instructions+=115;goto B447664;
case 0x447667:c.instructions+=114;goto B447667;
case 0x44766d:c.instructions+=113;goto B44766d;
case 0x447670:c.instructions+=112;goto B447670;
case 0x447676:c.instructions+=111;goto B447676;
case 0x447679:c.instructions+=110;goto B447679;
case 0x44767f:c.instructions+=109;goto B44767f;
case 0x447683:c.instructions+=108;goto B447683;
case 0x447686:c.instructions+=107;goto B447686;
case 0x44768a:c.instructions+=106;goto B44768a;
case 0x447690:c.instructions+=105;goto B447690;
case 0x447696:c.instructions+=104;goto B447696;
case 0x44769a:c.instructions+=103;goto B44769a;
case 0x44769e:c.instructions+=102;goto B44769e;
case 0x4476a0:c.instructions+=101;goto B4476a0;
case 0x4476a6:c.instructions+=100;goto B4476a6;
case 0x4476ac:c.instructions+=99;goto B4476ac;
case 0x4476b2:c.instructions+=98;goto B4476b2;
case 0x4476b4:c.instructions+=97;goto B4476b4;
case 0x4476ba:c.instructions+=96;goto B4476ba;
case 0x4476c0:c.instructions+=95;goto B4476c0;
case 0x4476c2:c.instructions+=94;goto B4476c2;
case 0x4476c8:c.instructions+=93;goto B4476c8;
case 0x4476ce:c.instructions+=92;goto B4476ce;
case 0x4476d0:c.instructions+=91;goto B4476d0;
case 0x4476d6:c.instructions+=90;goto B4476d6;
case 0x4476dc:c.instructions+=89;goto B4476dc;
case 0x4476de:c.instructions+=88;goto B4476de;
case 0x4476e4:c.instructions+=87;goto B4476e4;
case 0x4476ea:c.instructions+=86;goto B4476ea;
case 0x4476f0:c.instructions+=85;goto B4476f0;
case 0x4476f6:c.instructions+=84;goto B4476f6;
case 0x4476fc:c.instructions+=83;goto B4476fc;
case 0x447702:c.instructions+=82;goto B447702;
case 0x447708:c.instructions+=81;goto B447708;
case 0x44770e:c.instructions+=80;goto B44770e;
case 0x447712:c.instructions+=79;goto B447712;
case 0x447718:c.instructions+=78;goto B447718;
case 0x44771c:c.instructions+=77;goto B44771c;
case 0x447722:c.instructions+=76;goto B447722;
case 0x447728:c.instructions+=75;goto B447728;
case 0x44772c:c.instructions+=74;goto B44772c;
case 0x447730:c.instructions+=73;goto B447730;
case 0x447732:c.instructions+=72;goto B447732;
case 0x447738:c.instructions+=71;goto B447738;
case 0x44773e:c.instructions+=70;goto B44773e;
case 0x447744:c.instructions+=69;goto B447744;
case 0x447746:c.instructions+=68;goto B447746;
case 0x44774c:c.instructions+=67;goto B44774c;
case 0x447752:c.instructions+=66;goto B447752;
case 0x447754:c.instructions+=65;goto B447754;
case 0x44775a:c.instructions+=64;goto B44775a;
case 0x447760:c.instructions+=63;goto B447760;
case 0x447762:c.instructions+=62;goto B447762;
case 0x447768:c.instructions+=61;goto B447768;
case 0x44776e:c.instructions+=60;goto B44776e;
case 0x447770:c.instructions+=59;goto B447770;
case 0x447776:c.instructions+=58;goto B447776;
case 0x44777c:c.instructions+=57;goto B44777c;
case 0x447782:c.instructions+=56;goto B447782;
case 0x447788:c.instructions+=55;goto B447788;
case 0x44778e:c.instructions+=54;goto B44778e;
case 0x447794:c.instructions+=53;goto B447794;
case 0x44779a:c.instructions+=52;goto B44779a;
case 0x4477a0:c.instructions+=51;goto B4477a0;
case 0x4477a4:c.instructions+=50;goto B4477a4;
case 0x4477aa:c.instructions+=49;goto B4477aa;
case 0x4477ae:c.instructions+=48;goto B4477ae;
case 0x4477b4:c.instructions+=47;goto B4477b4;
case 0x4477ba:c.instructions+=46;goto B4477ba;
case 0x4477be:c.instructions+=45;goto B4477be;
case 0x4477c2:c.instructions+=44;goto B4477c2;
case 0x4477c4:c.instructions+=43;goto B4477c4;
case 0x4477ca:c.instructions+=42;goto B4477ca;
case 0x4477d0:c.instructions+=41;goto B4477d0;
case 0x4477d6:c.instructions+=40;goto B4477d6;
case 0x4477d8:c.instructions+=39;goto B4477d8;
case 0x4477de:c.instructions+=38;goto B4477de;
case 0x4477e4:c.instructions+=37;goto B4477e4;
case 0x4477e6:c.instructions+=36;goto B4477e6;
case 0x4477ec:c.instructions+=35;goto B4477ec;
case 0x4477f2:c.instructions+=34;goto B4477f2;
case 0x4477f4:c.instructions+=33;goto B4477f4;
case 0x4477fa:c.instructions+=32;goto B4477fa;
case 0x447800:c.instructions+=31;goto B447800;
case 0x447802:c.instructions+=30;goto B447802;
case 0x447808:c.instructions+=29;goto B447808;
case 0x44780e:c.instructions+=28;goto B44780e;
case 0x447814:c.instructions+=27;goto B447814;
case 0x44781a:c.instructions+=26;goto B44781a;
case 0x447820:c.instructions+=25;goto B447820;
case 0x447826:c.instructions+=24;goto B447826;
case 0x44782c:c.instructions+=23;goto B44782c;
case 0x447832:c.instructions+=22;goto B447832;
case 0x447836:c.instructions+=21;goto B447836;
case 0x44783c:c.instructions+=20;goto B44783c;
case 0x447840:c.instructions+=19;goto B447840;
case 0x447846:c.instructions+=18;goto B447846;
case 0x44784c:c.instructions+=17;goto B44784c;
case 0x447850:c.instructions+=16;goto B447850;
case 0x447854:c.instructions+=15;goto B447854;
case 0x447856:c.instructions+=14;goto B447856;
case 0x44785c:c.instructions+=13;goto B44785c;
case 0x447862:c.instructions+=12;goto B447862;
case 0x447868:c.instructions+=11;goto B447868;
case 0x44786a:c.instructions+=10;goto B44786a;
case 0x447870:c.instructions+=9;goto B447870;
case 0x447876:c.instructions+=8;goto B447876;
case 0x447878:c.instructions+=7;goto B447878;
case 0x44787e:c.instructions+=6;goto B44787e;
case 0x447884:c.instructions+=5;goto B447884;
case 0x447886:c.instructions+=4;goto B447886;
case 0x44788c:c.instructions+=3;goto B44788c;
case 0x447892:c.instructions+=2;goto B447892;
case 0x447898:c.instructions+=1;goto B447898;
case 0x44789e:goto L44789e;
case 0x44789f:c.instructions+=5;goto B44789f;
case 0x4478a0:c.instructions+=4;goto B4478a0;
case 0x4478a1:c.instructions+=3;goto B4478a1;
case 0x4478a3:c.instructions+=2;goto B4478a3;
case 0x4478a4:c.instructions+=1;goto B4478a4;
case 0x4478b0:goto L4478b0;
case 0x4478b4:c.instructions+=12;goto B4478b4;
case 0x4478b5:c.instructions+=11;goto B4478b5;
case 0x4478b6:c.instructions+=10;goto B4478b6;
case 0x4478b8:c.instructions+=9;goto B4478b8;
case 0x4478bc:c.instructions+=8;goto B4478bc;
case 0x4478bd:c.instructions+=7;goto B4478bd;
case 0x4478bf:c.instructions+=6;goto B4478bf;
case 0x4478c0:c.instructions+=5;goto B4478c0;
case 0x4478c3:c.instructions+=4;goto B4478c3;
case 0x4478c4:c.instructions+=3;goto B4478c4;
case 0x4478c7:c.instructions+=2;goto B4478c7;
case 0x4478cb:c.instructions+=1;goto B4478cb;
case 0x4478d0:goto L4478d0;
case 0x4478d4:c.instructions+=7;goto B4478d4;
case 0x4478d8:c.instructions+=6;goto B4478d8;
case 0x4478da:c.instructions+=5;goto B4478da;
case 0x4478e0:c.instructions+=4;goto B4478e0;
case 0x4478e2:c.instructions+=3;goto B4478e2;
case 0x4478e5:c.instructions+=2;goto B4478e5;
case 0x4478e9:c.instructions+=1;goto B4478e9;
case 0x4478ec:goto L4478ec;
case 0x4478ee:goto L4478ee;
case 0x4478f0:c.instructions+=2;goto B4478f0;
case 0x4478f3:c.instructions+=1;goto B4478f3;
case 0x4478f6:goto L4478f6;
case 0x4478f8:goto L4478f8;
case 0x4478fb:c.instructions+=7;goto B4478fb;
case 0x4478ff:c.instructions+=6;goto B4478ff;
case 0x447900:c.instructions+=5;goto B447900;
case 0x447903:c.instructions+=4;goto B447903;
case 0x447904:c.instructions+=3;goto B447904;
case 0x447906:c.instructions+=2;goto B447906;
case 0x447907:c.instructions+=1;goto B447907;
case 0x447910:goto L447910;
case 0x447914:c.instructions+=5;goto B447914;
case 0x447915:c.instructions+=4;goto B447915;
case 0x447918:c.instructions+=3;goto B447918;
case 0x44791a:c.instructions+=2;goto B44791a;
case 0x44791c:c.instructions+=1;goto B44791c;
case 0x44791e:goto L44791e;
case 0x447920:c.instructions+=4;goto B447920;
case 0x447926:c.instructions+=3;goto B447926;
case 0x447927:c.instructions+=2;goto B447927;
case 0x44792b:c.instructions+=1;goto B44792b;
case 0x447930:goto L447930;
case 0x447932:c.instructions+=4;goto B447932;
case 0x447936:c.instructions+=3;goto B447936;
case 0x447938:c.instructions+=2;goto B447938;
case 0x44793b:c.instructions+=1;goto B44793b;
case 0x44793d:goto L44793d;
case 0x44793e:c.instructions+=3;goto B44793e;
case 0x447944:c.instructions+=2;goto B447944;
case 0x447946:c.instructions+=1;goto B447946;
case 0x447948:goto L447948;
case 0x447949:goto L447949;
case 0x44794b:c.instructions+=6;goto B44794b;
case 0x44794d:c.instructions+=5;goto B44794d;
case 0x447950:c.instructions+=4;goto B447950;
case 0x447951:c.instructions+=3;goto B447951;
case 0x447953:c.instructions+=2;goto B447953;
case 0x447955:c.instructions+=1;goto B447955;
case 0x447957:goto L447957;
case 0x447959:goto L447959;
case 0x44795b:c.instructions+=2;goto B44795b;
case 0x44795c:c.instructions+=1;goto B44795c;
case 0x44795e:goto L44795e;
case 0x447964:c.instructions+=2;goto B447964;
case 0x447968:c.instructions+=1;goto B447968;
case 0x44796b:goto L44796b;
case 0x44796d:c.instructions+=1;goto B44796d;
case 0x447970:goto L447970;
case 0x447974:c.instructions+=10;goto B447974;
case 0x44797a:c.instructions+=9;goto B44797a;
case 0x44797b:c.instructions+=8;goto B44797b;
case 0x44797f:c.instructions+=7;goto B44797f;
case 0x447983:c.instructions+=6;goto B447983;
case 0x447984:c.instructions+=5;goto B447984;
case 0x44798a:c.instructions+=4;goto B44798a;
case 0x44798c:c.instructions+=3;goto B44798c;
case 0x44798e:c.instructions+=2;goto B44798e;
case 0x447994:c.instructions+=1;goto B447994;
case 0x447996:goto L447996;
case 0x44799c:goto L44799c;
case 0x4479a2:c.instructions+=10;goto B4479a2;
case 0x4479a8:c.instructions+=9;goto B4479a8;
case 0x4479aa:c.instructions+=8;goto B4479aa;
case 0x4479ac:c.instructions+=7;goto B4479ac;
case 0x4479ae:c.instructions+=6;goto B4479ae;
case 0x4479b4:c.instructions+=5;goto B4479b4;
case 0x4479b7:c.instructions+=4;goto B4479b7;
case 0x4479b8:c.instructions+=3;goto B4479b8;
case 0x4479be:c.instructions+=2;goto B4479be;
case 0x4479bf:c.instructions+=1;goto B4479bf;
case 0x4479d0:goto L4479d0;
case 0x4479d2:c.instructions+=7;goto B4479d2;
case 0x4479d8:c.instructions+=6;goto B4479d8;
case 0x4479d9:c.instructions+=5;goto B4479d9;
case 0x4479dd:c.instructions+=4;goto B4479dd;
case 0x4479de:c.instructions+=3;goto B4479de;
case 0x4479e4:c.instructions+=2;goto B4479e4;
case 0x4479e6:c.instructions+=1;goto B4479e6;
case 0x4479eb:goto L4479eb;
case 0x4479ed:goto L4479ed;
case 0x4479f3:c.instructions+=5;goto B4479f3;
case 0x4479f9:c.instructions+=4;goto B4479f9;
case 0x4479fa:c.instructions+=3;goto B4479fa;
case 0x447a00:c.instructions+=2;goto B447a00;
case 0x447a01:c.instructions+=1;goto B447a01;
case 0x447a10:goto L447a10;
case 0x447a16:c.instructions+=6;goto B447a16;
case 0x447a1c:c.instructions+=5;goto B447a1c;
case 0x447a1e:c.instructions+=4;goto B447a1e;
case 0x447a22:c.instructions+=3;goto B447a22;
case 0x447a24:c.instructions+=2;goto B447a24;
case 0x447a2b:c.instructions+=1;goto B447a2b;
case 0x447a30:goto L447a30;
case 0x447a34:c.instructions+=15;goto B447a34;
case 0x447a38:c.instructions+=14;goto B447a38;
case 0x447a39:c.instructions+=13;goto B447a39;
case 0x447a3c:c.instructions+=12;goto B447a3c;
case 0x447a40:c.instructions+=11;goto B447a40;
case 0x447a43:c.instructions+=10;goto B447a43;
case 0x447a45:c.instructions+=9;goto B447a45;
case 0x447a49:c.instructions+=8;goto B447a49;
case 0x447a4c:c.instructions+=7;goto B447a4c;
case 0x447a4f:c.instructions+=6;goto B447a4f;
case 0x447a52:c.instructions+=5;goto B447a52;
case 0x447a55:c.instructions+=4;goto B447a55;
case 0x447a5a:c.instructions+=3;goto B447a5a;
case 0x447a5c:c.instructions+=2;goto B447a5c;
case 0x447a5d:c.instructions+=1;goto B447a5d;
case 0x447a5f:goto L447a5f;
case 0x447a62:c.instructions+=2;goto B447a62;
case 0x447a64:c.instructions+=1;goto B447a64;
case 0x447a67:goto L447a67;
case 0x447a6b:c.instructions+=1;goto B447a6b;
case 0x447a6d:goto L447a6d;
case 0x447a6e:c.instructions+=2;goto B447a6e;
case 0x447a73:c.instructions+=1;goto B447a73;
case 0x447a78:goto L447a78;
case 0x447a80:goto L447a80;
case 0x447a84:c.instructions+=15;goto B447a84;
case 0x447a88:c.instructions+=14;goto B447a88;
case 0x447a89:c.instructions+=13;goto B447a89;
case 0x447a8c:c.instructions+=12;goto B447a8c;
case 0x447a90:c.instructions+=11;goto B447a90;
case 0x447a93:c.instructions+=10;goto B447a93;
case 0x447a95:c.instructions+=9;goto B447a95;
case 0x447a99:c.instructions+=8;goto B447a99;
case 0x447a9c:c.instructions+=7;goto B447a9c;
case 0x447a9f:c.instructions+=6;goto B447a9f;
case 0x447aa2:c.instructions+=5;goto B447aa2;
case 0x447aa5:c.instructions+=4;goto B447aa5;
case 0x447aaa:c.instructions+=3;goto B447aaa;
case 0x447aac:c.instructions+=2;goto B447aac;
case 0x447aad:c.instructions+=1;goto B447aad;
case 0x447aaf:goto L447aaf;
case 0x447ab2:c.instructions+=2;goto B447ab2;
case 0x447ab4:c.instructions+=1;goto B447ab4;
case 0x447ab7:goto L447ab7;
case 0x447abb:c.instructions+=1;goto B447abb;
case 0x447abd:goto L447abd;
case 0x447abe:c.instructions+=2;goto B447abe;
case 0x447ac3:c.instructions+=1;goto B447ac3;
case 0x447ac8:goto L447ac8;
case 0x447ad0:goto L447ad0;
case 0x447ad1:c.instructions+=9;goto B447ad1;
case 0x447ad2:c.instructions+=8;goto B447ad2;
case 0x447ad3:c.instructions+=7;goto B447ad3;
case 0x447ad6:c.instructions+=6;goto B447ad6;
case 0x447ad7:c.instructions+=5;goto B447ad7;
case 0x447ada:c.instructions+=4;goto B447ada;
case 0x447adc:c.instructions+=3;goto B447adc;
case 0x447ae0:c.instructions+=2;goto B447ae0;
case 0x447ae5:c.instructions+=1;goto B447ae5;
case 0x447ae7:goto L447ae7;
case 0x447ae8:c.instructions+=2;goto B447ae8;
case 0x447aec:c.instructions+=1;goto B447aec;
case 0x447aee:goto L447aee;
case 0x447af2:goto L447af2;
case 0x447af5:c.instructions+=7;goto B447af5;
case 0x447af6:c.instructions+=6;goto B447af6;
case 0x447af7:c.instructions+=5;goto B447af7;
case 0x447afa:c.instructions+=4;goto B447afa;
case 0x447afb:c.instructions+=3;goto B447afb;
case 0x447b00:c.instructions+=2;goto B447b00;
case 0x447b01:c.instructions+=1;goto B447b01;
case 0x447b06:goto L447b06;
case 0x447b09:c.instructions+=4;goto B447b09;
case 0x447b0a:c.instructions+=3;goto B447b0a;
case 0x447b0c:c.instructions+=2;goto B447b0c;
case 0x447b0d:c.instructions+=1;goto B447b0d;
case 0x447b12:goto L447b12;
case 0x447b17:c.instructions+=2;goto B447b17;
case 0x447b18:c.instructions+=1;goto B447b18;
case 0x447b1d:goto L447b1d;
case 0x447b1f:c.instructions+=3;goto B447b1f;
case 0x447b22:c.instructions+=2;goto B447b22;
case 0x447b24:c.instructions+=1;goto B447b24;
case 0x447b26:goto L447b26;
case 0x447b27:goto L447b27;
case 0x447b28:c.instructions+=4;goto B447b28;
case 0x447b29:c.instructions+=3;goto B447b29;
case 0x447b2a:c.instructions+=2;goto B447b2a;
case 0x447b2b:c.instructions+=1;goto B447b2b;
case 0x447b30:goto L447b30;
case 0x447b36:c.instructions+=14;goto B447b36;
case 0x447b38:c.instructions+=13;goto B447b38;
case 0x447b3d:c.instructions+=12;goto B447b3d;
case 0x447b3e:c.instructions+=11;goto B447b3e;
case 0x447b45:c.instructions+=10;goto B447b45;
case 0x447b46:c.instructions+=9;goto B447b46;
case 0x447b4a:c.instructions+=8;goto B447b4a;
case 0x447b4b:c.instructions+=7;goto B447b4b;
case 0x447b4f:c.instructions+=6;goto B447b4f;
case 0x447b52:c.instructions+=5;goto B447b52;
case 0x447b54:c.instructions+=4;goto B447b54;
case 0x447b55:c.instructions+=3;goto B447b55;
case 0x447b56:c.instructions+=2;goto B447b56;
case 0x447b58:c.instructions+=1;goto B447b58;
case 0x447b5a:goto L447b5a;
case 0x447b5e:c.instructions+=2;goto B447b5e;
case 0x447b60:c.instructions+=1;goto B447b60;
case 0x447b62:goto L447b62;
case 0x447b65:c.instructions+=5;goto B447b65;
case 0x447b68:c.instructions+=4;goto B447b68;
case 0x447b6a:c.instructions+=3;goto B447b6a;
case 0x447b6f:c.instructions+=2;goto B447b6f;
case 0x447b72:c.instructions+=1;goto B447b72;
case 0x447b77:goto L447b77;
case 0x447b7a:c.instructions+=4;goto B447b7a;
case 0x447b7e:c.instructions+=3;goto B447b7e;
case 0x447b80:c.instructions+=2;goto B447b80;
case 0x447b88:c.instructions+=1;goto B447b88;
case 0x447b8a:goto L447b8a;
case 0x447b8e:c.instructions+=9;goto B447b8e;
case 0x447b92:c.instructions+=8;goto B447b92;
case 0x447b93:c.instructions+=7;goto B447b93;
case 0x447b94:c.instructions+=6;goto B447b94;
case 0x447b95:c.instructions+=5;goto B447b95;
case 0x447b98:c.instructions+=4;goto B447b98;
case 0x447b99:c.instructions+=3;goto B447b99;
case 0x447b9a:c.instructions+=2;goto B447b9a;
case 0x447b9c:c.instructions+=1;goto B447b9c;
case 0x447ba1:goto L447ba1;
case 0x447ba4:c.instructions+=5;goto B447ba4;
case 0x447ba6:c.instructions+=4;goto B447ba6;
case 0x447ba9:c.instructions+=3;goto B447ba9;
case 0x447bac:c.instructions+=2;goto B447bac;
case 0x447bae:c.instructions+=1;goto B447bae;
case 0x447bb0:goto L447bb0;
case 0x447bb3:c.instructions+=6;goto B447bb3;
case 0x447bb5:c.instructions+=5;goto B447bb5;
case 0x447bb7:c.instructions+=4;goto B447bb7;
case 0x447bba:c.instructions+=3;goto B447bba;
case 0x447bbd:c.instructions+=2;goto B447bbd;
case 0x447bbf:c.instructions+=1;goto B447bbf;
case 0x447bc1:goto L447bc1;
case 0x447bc5:c.instructions+=5;goto B447bc5;
case 0x447bc7:c.instructions+=4;goto B447bc7;
case 0x447bcd:c.instructions+=3;goto B447bcd;
case 0x447bcf:c.instructions+=2;goto B447bcf;
case 0x447bd2:c.instructions+=1;goto B447bd2;
case 0x447bd5:goto L447bd5;
case 0x447bd7:goto L447bd7;
case 0x447bd9:c.instructions+=1;goto B447bd9;
case 0x447bdc:goto L447bdc;
case 0x447bde:goto L447bde;
case 0x447be2:c.instructions+=2;goto B447be2;
case 0x447be5:c.instructions+=1;goto B447be5;
case 0x447be8:goto L447be8;
case 0x447bec:c.instructions+=7;goto B447bec;
case 0x447bed:c.instructions+=6;goto B447bed;
case 0x447bee:c.instructions+=5;goto B447bee;
case 0x447bef:c.instructions+=4;goto B447bef;
case 0x447bf6:c.instructions+=3;goto B447bf6;
case 0x447bf7:c.instructions+=2;goto B447bf7;
case 0x447bfa:c.instructions+=1;goto B447bfa;
case 0x447c00:goto L447c00;
case 0x447c01:c.instructions+=6;goto B447c01;
case 0x447c02:c.instructions+=5;goto B447c02;
case 0x447c05:c.instructions+=4;goto B447c05;
case 0x447c06:c.instructions+=3;goto B447c06;
case 0x447c09:c.instructions+=2;goto B447c09;
case 0x447c0b:c.instructions+=1;goto B447c0b;
case 0x447c0d:goto L447c0d;
case 0x447c11:goto L447c11;
case 0x447c14:c.instructions+=3;goto B447c14;
case 0x447c15:c.instructions+=2;goto B447c15;
case 0x447c16:c.instructions+=1;goto B447c16;
case 0x447c1b:goto L447c1b;
case 0x447c1e:c.instructions+=2;goto B447c1e;
case 0x447c20:c.instructions+=1;goto B447c20;
case 0x447c22:goto L447c22;
case 0x447c24:c.instructions+=2;goto B447c24;
case 0x447c26:c.instructions+=1;goto B447c26;
case 0x447c28:goto L447c28;
case 0x447c29:c.instructions+=4;goto B447c29;
case 0x447c2a:c.instructions+=3;goto B447c2a;
case 0x447c2c:c.instructions+=2;goto B447c2c;
case 0x447c2d:c.instructions+=1;goto B447c2d;
case 0x447c30:goto L447c30;
case 0x447c31:c.instructions+=4;goto B447c31;
case 0x447c33:c.instructions+=3;goto B447c33;
case 0x447c34:c.instructions+=2;goto B447c34;
case 0x447c35:c.instructions+=1;goto B447c35;
case 0x447c40:goto L447c40;
case 0x447c42:c.instructions+=69;goto B447c42;
case 0x447c44:c.instructions+=68;goto B447c44;
case 0x447c49:c.instructions+=67;goto B447c49;
case 0x447c4f:c.instructions+=66;goto B447c4f;
case 0x447c55:c.instructions+=65;goto B447c55;
case 0x447c5b:c.instructions+=64;goto B447c5b;
case 0x447c61:c.instructions+=63;goto B447c61;
case 0x447c67:c.instructions+=62;goto B447c67;
case 0x447c6d:c.instructions+=61;goto B447c6d;
case 0x447c73:c.instructions+=60;goto B447c73;
case 0x447c7a:c.instructions+=59;goto B447c7a;
case 0x447c81:c.instructions+=58;goto B447c81;
case 0x447c87:c.instructions+=57;goto B447c87;
case 0x447c8d:c.instructions+=56;goto B447c8d;
case 0x447c93:c.instructions+=55;goto B447c93;
case 0x447c99:c.instructions+=54;goto B447c99;
case 0x447c9f:c.instructions+=53;goto B447c9f;
case 0x447ca5:c.instructions+=52;goto B447ca5;
case 0x447cab:c.instructions+=51;goto B447cab;
case 0x447cb1:c.instructions+=50;goto B447cb1;
case 0x447cb7:c.instructions+=49;goto B447cb7;
case 0x447cbd:c.instructions+=48;goto B447cbd;
case 0x447cc7:c.instructions+=47;goto B447cc7;
case 0x447ccd:c.instructions+=46;goto B447ccd;
case 0x447cd3:c.instructions+=45;goto B447cd3;
case 0x447cd9:c.instructions+=44;goto B447cd9;
case 0x447cdf:c.instructions+=43;goto B447cdf;
case 0x447ce5:c.instructions+=42;goto B447ce5;
case 0x447ceb:c.instructions+=41;goto B447ceb;
case 0x447cf1:c.instructions+=40;goto B447cf1;
case 0x447cf7:c.instructions+=39;goto B447cf7;
case 0x447cfd:c.instructions+=38;goto B447cfd;
case 0x447d03:c.instructions+=37;goto B447d03;
case 0x447d09:c.instructions+=36;goto B447d09;
case 0x447d0f:c.instructions+=35;goto B447d0f;
case 0x447d15:c.instructions+=34;goto B447d15;
case 0x447d1b:c.instructions+=33;goto B447d1b;
case 0x447d21:c.instructions+=32;goto B447d21;
case 0x447d24:c.instructions+=31;goto B447d24;
case 0x447d27:c.instructions+=30;goto B447d27;
case 0x447d2a:c.instructions+=29;goto B447d2a;
case 0x447d2d:c.instructions+=28;goto B447d2d;
case 0x447d30:c.instructions+=27;goto B447d30;
case 0x447d33:c.instructions+=26;goto B447d33;
case 0x447d35:c.instructions+=25;goto B447d35;
case 0x447d39:c.instructions+=24;goto B447d39;
case 0x447d3c:c.instructions+=23;goto B447d3c;
case 0x447d3f:c.instructions+=22;goto B447d3f;
case 0x447d45:c.instructions+=21;goto B447d45;
case 0x447d4b:c.instructions+=20;goto B447d4b;
case 0x447d51:c.instructions+=19;goto B447d51;
case 0x447d57:c.instructions+=18;goto B447d57;
case 0x447d5d:c.instructions+=17;goto B447d5d;
case 0x447d63:c.instructions+=16;goto B447d63;
case 0x447d69:c.instructions+=15;goto B447d69;
case 0x447d6f:c.instructions+=14;goto B447d6f;
case 0x447d75:c.instructions+=13;goto B447d75;
case 0x447d7b:c.instructions+=12;goto B447d7b;
case 0x447d81:c.instructions+=11;goto B447d81;
case 0x447d87:c.instructions+=10;goto B447d87;
case 0x447d8d:c.instructions+=9;goto B447d8d;
case 0x447d93:c.instructions+=8;goto B447d93;
case 0x447d99:c.instructions+=7;goto B447d99;
case 0x447d9f:c.instructions+=6;goto B447d9f;
case 0x447da5:c.instructions+=5;goto B447da5;
case 0x447da7:c.instructions+=4;goto B447da7;
case 0x447daa:c.instructions+=3;goto B447daa;
case 0x447dad:c.instructions+=2;goto B447dad;
case 0x447db0:c.instructions+=1;goto B447db0;
case 0x447dc0:goto L447dc0;
case 0x447dc1:c.instructions+=18;goto B447dc1;
case 0x447dc3:c.instructions+=17;goto B447dc3;
case 0x447dc6:c.instructions+=16;goto B447dc6;
case 0x447dc8:c.instructions+=15;goto B447dc8;
case 0x447dcd:c.instructions+=14;goto B447dcd;
case 0x447dd3:c.instructions+=13;goto B447dd3;
case 0x447dd4:c.instructions+=12;goto B447dd4;
case 0x447ddb:c.instructions+=11;goto B447ddb;
case 0x447dde:c.instructions+=10;goto B447dde;
case 0x447ddf:c.instructions+=9;goto B447ddf;
case 0x447de0:c.instructions+=8;goto B447de0;
case 0x447de3:c.instructions+=7;goto B447de3;
case 0x447de4:c.instructions+=6;goto B447de4;
case 0x447de8:c.instructions+=5;goto B447de8;
case 0x447dea:c.instructions+=4;goto B447dea;
case 0x447dec:c.instructions+=3;goto B447dec;
case 0x447df0:c.instructions+=2;goto B447df0;
case 0x447df4:c.instructions+=1;goto B447df4;
case 0x447df9:goto L447df9;
case 0x447dfc:c.instructions+=4;goto B447dfc;
case 0x447e00:c.instructions+=3;goto B447e00;
case 0x447e02:c.instructions+=2;goto B447e02;
case 0x447e0a:c.instructions+=1;goto B447e0a;
case 0x447e0c:goto L447e0c;
case 0x447e0d:c.instructions+=4;goto B447e0d;
case 0x447e0f:c.instructions+=3;goto B447e0f;
case 0x447e11:c.instructions+=2;goto B447e11;
case 0x447e13:c.instructions+=1;goto B447e13;
case 0x447e18:goto L447e18;
case 0x447e1a:goto L447e1a;
case 0x447e1c:goto L447e1c;
case 0x447e22:c.instructions+=14;goto B447e22;
case 0x447e25:c.instructions+=13;goto B447e25;
case 0x447e27:c.instructions+=12;goto B447e27;
case 0x447e2a:c.instructions+=11;goto B447e2a;
case 0x447e2f:c.instructions+=10;goto B447e2f;
case 0x447e31:c.instructions+=9;goto B447e31;
case 0x447e33:c.instructions+=8;goto B447e33;
case 0x447e36:c.instructions+=7;goto B447e36;
case 0x447e3a:c.instructions+=6;goto B447e3a;
case 0x447e3e:c.instructions+=5;goto B447e3e;
case 0x447e43:c.instructions+=4;goto B447e43;
case 0x447e45:c.instructions+=3;goto B447e45;
case 0x447e49:c.instructions+=2;goto B447e49;
case 0x447e4d:c.instructions+=1;goto B447e4d;
case 0x447e4f:goto L447e4f;
case 0x447e54:c.instructions+=1;goto B447e54;
case 0x447e56:goto L447e56;
case 0x447e5a:c.instructions+=1;goto B447e5a;
case 0x447e5c:goto L447e5c;
case 0x447e5e:c.instructions+=5;goto B447e5e;
case 0x447e66:c.instructions+=4;goto B447e66;
case 0x447e6e:c.instructions+=3;goto B447e6e;
case 0x447e76:c.instructions+=2;goto B447e76;
case 0x447e7e:c.instructions+=1;goto B447e7e;
case 0x447e80:goto L447e80;
case 0x447e86:c.instructions+=1;goto B447e86;
case 0x447e88:goto L447e88;
case 0x447e8c:c.instructions+=2;goto B447e8c;
case 0x447e8f:c.instructions+=1;goto B447e8f;
case 0x447e93:goto L447e93;
case 0x447e97:c.instructions+=3;goto B447e97;
case 0x447e99:c.instructions+=2;goto B447e99;
case 0x447e9b:c.instructions+=1;goto B447e9b;
case 0x447ea1:goto L447ea1;
case 0x447ea3:c.instructions+=1;goto B447ea3;
case 0x447ea5:goto L447ea5;
case 0x447ea9:c.instructions+=2;goto B447ea9;
case 0x447ead:c.instructions+=1;goto B447ead;
case 0x447eb0:goto L447eb0;
case 0x447eb3:c.instructions+=1;goto B447eb3;
case 0x447eb5:goto L447eb5;
case 0x447ebd:c.instructions+=1;goto B447ebd;
case 0x447ebf:goto L447ebf;
case 0x447ec3:c.instructions+=14;goto B447ec3;
case 0x447ec6:c.instructions+=13;goto B447ec6;
case 0x447eca:c.instructions+=12;goto B447eca;
case 0x447ece:c.instructions+=11;goto B447ece;
case 0x447ed2:c.instructions+=10;goto B447ed2;
case 0x447ed5:c.instructions+=9;goto B447ed5;
case 0x447ed9:c.instructions+=8;goto B447ed9;
case 0x447edf:c.instructions+=7;goto B447edf;
case 0x447ee3:c.instructions+=6;goto B447ee3;
case 0x447ee9:c.instructions+=5;goto B447ee9;
case 0x447eed:c.instructions+=4;goto B447eed;
case 0x447eef:c.instructions+=3;goto B447eef;
case 0x447ef1:c.instructions+=2;goto B447ef1;
case 0x447ef4:c.instructions+=1;goto B447ef4;
case 0x447ef6:goto L447ef6;
case 0x447ef8:c.instructions+=1;goto B447ef8;
case 0x447efc:goto L447efc;
case 0x447f01:c.instructions+=7;goto B447f01;
case 0x447f04:c.instructions+=6;goto B447f04;
case 0x447f08:c.instructions+=5;goto B447f08;
case 0x447f0c:c.instructions+=4;goto B447f0c;
case 0x447f12:c.instructions+=3;goto B447f12;
case 0x447f14:c.instructions+=2;goto B447f14;
case 0x447f18:c.instructions+=1;goto B447f18;
case 0x447f1a:goto L447f1a;
case 0x447f1c:c.instructions+=3;goto B447f1c;
case 0x447f1f:c.instructions+=2;goto B447f1f;
case 0x447f23:c.instructions+=1;goto B447f23;
case 0x447f25:goto L447f25;
case 0x447f29:c.instructions+=5;goto B447f29;
case 0x447f2a:c.instructions+=4;goto B447f2a;
case 0x447f2c:c.instructions+=3;goto B447f2c;
case 0x447f2d:c.instructions+=2;goto B447f2d;
case 0x447f32:c.instructions+=1;goto B447f32;
case 0x447f37:goto L447f37;
case 0x447f3b:c.instructions+=2;goto B447f3b;
case 0x447f3f:c.instructions+=1;goto B447f3f;
case 0x447f43:goto L447f43;
case 0x447f45:c.instructions+=3;goto B447f45;
case 0x447f49:c.instructions+=2;goto B447f49;
case 0x447f4d:c.instructions+=1;goto B447f4d;
case 0x447f4f:goto L447f4f;
case 0x447f53:c.instructions+=3;goto B447f53;
case 0x447f54:c.instructions+=2;goto B447f54;
case 0x447f56:c.instructions+=1;goto B447f56;
case 0x447f58:goto L447f58;
case 0x447f5c:c.instructions+=4;goto B447f5c;
case 0x447f62:c.instructions+=3;goto B447f62;
case 0x447f64:c.instructions+=2;goto B447f64;
case 0x447f67:c.instructions+=1;goto B447f67;
case 0x447f69:goto L447f69;
case 0x447f6b:c.instructions+=1;goto B447f6b;
case 0x447f6d:goto L447f6d;
case 0x447f71:c.instructions+=6;goto B447f71;
case 0x447f72:c.instructions+=5;goto B447f72;
case 0x447f73:c.instructions+=4;goto B447f73;
case 0x447f77:c.instructions+=3;goto B447f77;
case 0x447f78:c.instructions+=2;goto B447f78;
case 0x447f7a:c.instructions+=1;goto B447f7a;
case 0x447f7f:goto L447f7f;
case 0x447f81:goto L447f81;
case 0x447f85:c.instructions+=6;goto B447f85;
case 0x447f86:c.instructions+=5;goto B447f86;
case 0x447f88:c.instructions+=4;goto B447f88;
case 0x447f8c:c.instructions+=3;goto B447f8c;
case 0x447f8d:c.instructions+=2;goto B447f8d;
case 0x447f8f:c.instructions+=1;goto B447f8f;
case 0x447f94:goto L447f94;
case 0x447f98:c.instructions+=19;goto B447f98;
case 0x447f9c:c.instructions+=18;goto B447f9c;
case 0x447fa0:c.instructions+=17;goto B447fa0;
case 0x447fa6:c.instructions+=16;goto B447fa6;
case 0x447faa:c.instructions+=15;goto B447faa;
case 0x447fb2:c.instructions+=14;goto B447fb2;
case 0x447fb6:c.instructions+=13;goto B447fb6;
case 0x447fb9:c.instructions+=12;goto B447fb9;
case 0x447fbd:c.instructions+=11;goto B447fbd;
case 0x447fbf:c.instructions+=10;goto B447fbf;
case 0x447fc3:c.instructions+=9;goto B447fc3;
case 0x447fc7:c.instructions+=8;goto B447fc7;
case 0x447fc9:c.instructions+=7;goto B447fc9;
case 0x447fcb:c.instructions+=6;goto B447fcb;
case 0x447fce:c.instructions+=5;goto B447fce;
case 0x447fd1:c.instructions+=4;goto B447fd1;
case 0x447fd4:c.instructions+=3;goto B447fd4;
case 0x447fd8:c.instructions+=2;goto B447fd8;
case 0x447fdc:c.instructions+=1;goto B447fdc;
case 0x447fdf:goto L447fdf;
case 0x447fe3:c.instructions+=3;goto B447fe3;
case 0x447fe4:c.instructions+=2;goto B447fe4;
case 0x447fe6:c.instructions+=1;goto B447fe6;
case 0x447feb:goto L447feb;
case 0x447fed:c.instructions+=4;goto B447fed;
case 0x447ff1:c.instructions+=3;goto B447ff1;
case 0x447ff2:c.instructions+=2;goto B447ff2;
case 0x447ff4:c.instructions+=1;goto B447ff4;
case 0x447ffa:goto L447ffa;
case 0x447ffe:goto L447ffe;
default:missing_instruction(c.pc);}
B447004:L447004:{c.instructions+=11;NFSU2_TR(0x447004);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447005:{NFSU2_TR(0x447005);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447008:{NFSU2_TR(0x447008);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44700b:{NFSU2_TR(0x44700b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B447011:{NFSU2_TR(0x447011);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447014:{NFSU2_TR(0x447014);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447017:{NFSU2_TR(0x447017);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44701d:{NFSU2_TR(0x44701d);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447020:{NFSU2_TR(0x447020);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B447023:{NFSU2_TR(0x447023);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B447025:{NFSU2_TR(0x447025);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L44705e;}}
}
B447027:L447027:{c.instructions+=2;NFSU2_TR(0x447027);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B447029:{NFSU2_TR(0x447029);
__builtin_memmove((R+16),(R+16),4);
}
B447030:L447030:{c.instructions+=17;NFSU2_TR(0x447030);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447033:{NFSU2_TR(0x447033);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447037:{NFSU2_TR(0x447037);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B447039:{NFSU2_TR(0x447039);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44703c:{NFSU2_TR(0x44703c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B44703d:{NFSU2_TR(0x44703d);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447040:{NFSU2_TR(0x447040);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B447043:{NFSU2_TR(0x447043);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B447045:{NFSU2_TR(0x447045);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447048:{NFSU2_TR(0x447048);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44704a:{NFSU2_TR(0x44704a);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44704d:{NFSU2_TR(0x44704d);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447050:{NFSU2_TR(0x447050);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B447053:{NFSU2_TR(0x447053);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447056:{NFSU2_TR(0x447056);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B44705a:{NFSU2_TR(0x44705a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44705c:{NFSU2_TR(0x44705c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x447030u);}goto L447030;}}
}
B44705e:L44705e:{c.instructions+=4;NFSU2_TR(0x44705e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B447062:{NFSU2_TR(0x447062);
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
B447065:{NFSU2_TR(0x447065);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44706d:{NFSU2_TR(0x44706d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L447073;}}
}
B44706f:L44706f:{c.instructions+=1;NFSU2_TR(0x44706f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447073:L447073:{c.instructions+=22;NFSU2_TR(0x447073);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B447077:{NFSU2_TR(0x447077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B447078:{NFSU2_TR(0x447078);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B44707e:{NFSU2_TR(0x44707e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B447080:{NFSU2_TR(0x447080);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B447083:{NFSU2_TR(0x447083);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447086:{NFSU2_TR(0x447086);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B447088:{NFSU2_TR(0x447088);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44708b:{NFSU2_TR(0x44708b);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B44708d:{NFSU2_TR(0x44708d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447091:{NFSU2_TR(0x447091);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B447093:{NFSU2_TR(0x447093);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447097:{NFSU2_TR(0x447097);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44709b:{NFSU2_TR(0x44709b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44709e:{NFSU2_TR(0x44709e);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B4470a0:{NFSU2_TR(0x4470a0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4470a4:{NFSU2_TR(0x4470a4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4470a6:{NFSU2_TR(0x4470a6);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4470a9:{NFSU2_TR(0x4470a9);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4470ac:{NFSU2_TR(0x4470ac);
__builtin_memmove((R+16),(R+20),4);
}
B4470ae:{NFSU2_TR(0x4470ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4470af:{NFSU2_TR(0x4470af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4470b0:L4470b0:{c.instructions+=10;NFSU2_TR(0x4470b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4470b1:{NFSU2_TR(0x4470b1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4470b5:{NFSU2_TR(0x4470b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4470b6:{NFSU2_TR(0x4470b6);
__builtin_memmove((R+24),(R+4),4);
}
B4470b8:{NFSU2_TR(0x4470b8);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4470bb:{NFSU2_TR(0x4470bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4470bc:{NFSU2_TR(0x4470bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4470be:{NFSU2_TR(0x4470be);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4470c1:{NFSU2_TR(0x4470c1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4470c5:{NFSU2_TR(0x4470c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4470caull));
TAIL_STATIC(0x75bed4u,75b);
}
B4470ca:L4470ca:{c.instructions+=4;NFSU2_TR(0x4470ca);
__builtin_memmove((R+4),(R+0),4);
}
B4470cc:{NFSU2_TR(0x4470cc);
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
B4470ce:{NFSU2_TR(0x4470ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4470d2:{NFSU2_TR(0x4470d2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4470f7;}}
}
B4470d4:L4470d4:{c.instructions+=14;NFSU2_TR(0x4470d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4470d7:{NFSU2_TR(0x4470d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4470d9:{NFSU2_TR(0x4470d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4470dd:{NFSU2_TR(0x4470dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4470df:{NFSU2_TR(0x4470df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4470e2:{NFSU2_TR(0x4470e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4470e5:{NFSU2_TR(0x4470e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4470e8:{NFSU2_TR(0x4470e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4470eb:{NFSU2_TR(0x4470eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4470ee:{NFSU2_TR(0x4470ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4470ef:{NFSU2_TR(0x4470ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4470f2:{NFSU2_TR(0x4470f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4470f3:{NFSU2_TR(0x4470f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4470f4:{NFSU2_TR(0x4470f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4470f7:L4470f7:{c.instructions+=3;NFSU2_TR(0x4470f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B4470fa:{NFSU2_TR(0x4470fa);
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
B4470fc:{NFSU2_TR(0x4470fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L447128;}}
}
B4470fe:L4470fe:{c.instructions+=16;NFSU2_TR(0x4470fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447101:{NFSU2_TR(0x447101);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B447105:{NFSU2_TR(0x447105);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+28),4);
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+28))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B447108:{NFSU2_TR(0x447108);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B44710c:{NFSU2_TR(0x44710c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B44710e:{NFSU2_TR(0x44710e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B447110:{NFSU2_TR(0x447110);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447113:{NFSU2_TR(0x447113);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447116:{NFSU2_TR(0x447116);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447119:{NFSU2_TR(0x447119);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44711c:{NFSU2_TR(0x44711c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44711f:{NFSU2_TR(0x44711f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B447120:{NFSU2_TR(0x447120);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447123:{NFSU2_TR(0x447123);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B447124:{NFSU2_TR(0x447124);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B447125:{NFSU2_TR(0x447125);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B447128:L447128:{c.instructions+=5;NFSU2_TR(0x447128);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B44712c:{NFSU2_TR(0x44712c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B447130:{NFSU2_TR(0x447130);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B447132:{NFSU2_TR(0x447132);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B447135:{NFSU2_TR(0x447135);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44713d;}}
}
B447137:L447137:{c.instructions+=1;NFSU2_TR(0x447137);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44713d:L44713d:{c.instructions+=15;NFSU2_TR(0x44713d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447141:{NFSU2_TR(0x447141);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B447144:{NFSU2_TR(0x447144);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B447147:{NFSU2_TR(0x447147);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B447149:{NFSU2_TR(0x447149);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44714a:{NFSU2_TR(0x44714a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44714d:{NFSU2_TR(0x44714d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447150:{NFSU2_TR(0x447150);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447151:{NFSU2_TR(0x447151);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B447154:{NFSU2_TR(0x447154);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B447156:{NFSU2_TR(0x447156);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447157:{NFSU2_TR(0x447157);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44715b:{NFSU2_TR(0x44715b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44715c:{NFSU2_TR(0x44715c);
__builtin_memmove((R+4),(R+24),4);
}
B44715e:{NFSU2_TR(0x44715e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447163ull));
TAIL_STATIC(0x576690u,576);
}
B447163:L447163:{c.instructions+=4;NFSU2_TR(0x447163);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B447164:{NFSU2_TR(0x447164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B447165:{NFSU2_TR(0x447165);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B447166:{NFSU2_TR(0x447166);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B447170:L447170:{c.instructions+=10;NFSU2_TR(0x447170);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447171:{NFSU2_TR(0x447171);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447175:{NFSU2_TR(0x447175);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447176:{NFSU2_TR(0x447176);
__builtin_memmove((R+24),(R+4),4);
}
B447178:{NFSU2_TR(0x447178);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44717b:{NFSU2_TR(0x44717b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44717c:{NFSU2_TR(0x44717c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B44717e:{NFSU2_TR(0x44717e);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B447181:{NFSU2_TR(0x447181);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B447185:{NFSU2_TR(0x447185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44718aull));
TAIL_STATIC(0x75bed4u,75b);
}
B44718a:L44718a:{c.instructions+=4;NFSU2_TR(0x44718a);
__builtin_memmove((R+4),(R+0),4);
}
B44718c:{NFSU2_TR(0x44718c);
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
B44718e:{NFSU2_TR(0x44718e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447192:{NFSU2_TR(0x447192);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4471ab;}}
}
B447194:L447194:{c.instructions+=10;NFSU2_TR(0x447194);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B447197:{NFSU2_TR(0x447197);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B447199:{NFSU2_TR(0x447199);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44719d:{NFSU2_TR(0x44719d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B44719f:{NFSU2_TR(0x44719f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4471a2:{NFSU2_TR(0x4471a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4471a3:{NFSU2_TR(0x4471a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4471a6:{NFSU2_TR(0x4471a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4471a7:{NFSU2_TR(0x4471a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4471a8:{NFSU2_TR(0x4471a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4471ab:L4471ab:{c.instructions+=3;NFSU2_TR(0x4471ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B4471ae:{NFSU2_TR(0x4471ae);
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
B4471b0:{NFSU2_TR(0x4471b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4471cc;}}
}
B4471b2:L4471b2:{c.instructions+=10;NFSU2_TR(0x4471b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4471b5:{NFSU2_TR(0x4471b5);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4471b9:{NFSU2_TR(0x4471b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4471bd:{NFSU2_TR(0x4471bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4471bf:{NFSU2_TR(0x4471bf);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4471c3:{NFSU2_TR(0x4471c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4471c4:{NFSU2_TR(0x4471c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4471c7:{NFSU2_TR(0x4471c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4471c8:{NFSU2_TR(0x4471c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4471c9:{NFSU2_TR(0x4471c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4471cc:L4471cc:{c.instructions+=5;NFSU2_TR(0x4471cc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4471d0:{NFSU2_TR(0x4471d0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4471d4:{NFSU2_TR(0x4471d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4471d6:{NFSU2_TR(0x4471d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4471d9:{NFSU2_TR(0x4471d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4471e1;}}
}
B4471db:L4471db:{c.instructions+=1;NFSU2_TR(0x4471db);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4471e1:L4471e1:{c.instructions+=14;NFSU2_TR(0x4471e1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4471e5:{NFSU2_TR(0x4471e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4471e8:{NFSU2_TR(0x4471e8);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4471ea:{NFSU2_TR(0x4471ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4471eb:{NFSU2_TR(0x4471eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4471ee:{NFSU2_TR(0x4471ee);
__builtin_memmove((R+4),(R+24),4);
}
B4471f0:{NFSU2_TR(0x4471f0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4471f3:{NFSU2_TR(0x4471f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4471f4:{NFSU2_TR(0x4471f4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4471f7:{NFSU2_TR(0x4471f7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4471f9:{NFSU2_TR(0x4471f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4471fa:{NFSU2_TR(0x4471fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4471fe:{NFSU2_TR(0x4471fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4471ff:{NFSU2_TR(0x4471ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447204ull));
TAIL_STATIC(0x576650u,576);
}
B447204:L447204:{c.instructions+=4;NFSU2_TR(0x447204);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B447205:{NFSU2_TR(0x447205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B447206:{NFSU2_TR(0x447206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B447207:{NFSU2_TR(0x447207);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B447210:L447210:{c.instructions+=3;NFSU2_TR(0x447210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447211:{NFSU2_TR(0x447211);
__builtin_memmove((R+24),(R+4),4);
}
B447213:{NFSU2_TR(0x447213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447218ull));
{goto L447230;}
}
B447218:L447218:{c.instructions+=2;NFSU2_TR(0x447218);
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
B44721d:{NFSU2_TR(0x44721d);
if(r1(R+518)){{goto L447228;}}
}
B44721f:L44721f:{c.instructions+=2;NFSU2_TR(0x44721f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447220:{NFSU2_TR(0x447220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447225ull));
TAIL_STATIC(0x575630u,575);
}
B447225:L447225:{c.instructions+=1;NFSU2_TR(0x447225);
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
B447228:L447228:{c.instructions+=3;NFSU2_TR(0x447228);
__builtin_memmove((R+0),(R+24),4);
}
B44722a:{NFSU2_TR(0x44722a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44722b:{NFSU2_TR(0x44722b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B447230:L447230:{c.instructions+=14;NFSU2_TR(0x447230);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447232:{NFSU2_TR(0x447232);
u8 U[4];
w4(U+0,u32(0x772008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447237:{NFSU2_TR(0x447237);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44723d:{NFSU2_TR(0x44723d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44723e:{NFSU2_TR(0x44723e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447245:{NFSU2_TR(0x447245);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447246:{NFSU2_TR(0x447246);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447247:{NFSU2_TR(0x447247);
__builtin_memmove((R+24),(R+4),4);
}
B447249:{NFSU2_TR(0x447249);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44724d:{NFSU2_TR(0x44724d);
u8 U[4];
w4(U+0,u32(0x787af8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B447253:{NFSU2_TR(0x447253);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447256:{NFSU2_TR(0x447256);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447257:{NFSU2_TR(0x447257);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44725f:{NFSU2_TR(0x44725f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447264ull));
TAIL_STATIC(0x575630u,575);
}
B447264:L447264:{c.instructions+=7;NFSU2_TR(0x447264);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B447268:{NFSU2_TR(0x447268);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44726b:{NFSU2_TR(0x44726b);
u8 U[4];
w4(U+0,u32(0x787584ull));
s4(u32(r4(R+24)),r4(U+0));
}
B447271:{NFSU2_TR(0x447271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B447272:{NFSU2_TR(0x447272);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447279:{NFSU2_TR(0x447279);
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
B44727c:{NFSU2_TR(0x44727c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B447280:L447280:{c.instructions+=11;NFSU2_TR(0x447280);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447281:{NFSU2_TR(0x447281);
__builtin_memmove((R+20),(R+16),4);
}
B447283:{NFSU2_TR(0x447283);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B447286:{NFSU2_TR(0x447286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa4ull))));
}
B44728c:{NFSU2_TR(0x44728c);
__builtin_memmove((R+0),gp(0x828640),4);
}
B447291:{NFSU2_TR(0x447291);
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
B447293:{NFSU2_TR(0x447293);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447294:{NFSU2_TR(0x447294);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447295:{NFSU2_TR(0x447295);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447296:{NFSU2_TR(0x447296);
__builtin_memmove((R+12),(R+4),4);
}
B447298:{NFSU2_TR(0x447298);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44789e;}}
}
B44729e:L44729e:{c.instructions+=4;NFSU2_TR(0x44729e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4472a1:{NFSU2_TR(0x4472a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4472a7:{NFSU2_TR(0x4472a7);
w4(R+4,u32(0x34ull));
}
B4472ac:{NFSU2_TR(0x4472ac);
__builtin_memmove((R+24),(R+12),4);
}
B4472ae:L4472ae:{c.instructions+=1;NFSU2_TR(0x4472ae);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4472b0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4472aeu);}goto L4472ae;}
}
B4472b0:L4472b0:{c.instructions+=4;NFSU2_TR(0x4472b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x274ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4472b6:{NFSU2_TR(0x4472b6);
__builtin_memmove((R+0),gp(0x82a480),4);
}
B4472bb:{NFSU2_TR(0x4472bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4472bd:{NFSU2_TR(0x4472bd);
if(r1(R+518)){{goto L447339;}}
}
B4472bf:L4472bf:{c.instructions+=3;NFSU2_TR(0x4472bf);
__builtin_memmove((R+0),gp(0x865094),4);
}
B4472c4:{NFSU2_TR(0x4472c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4472c6:{NFSU2_TR(0x4472c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L447339;}}
}
B4472c8:L4472c8:{c.instructions+=3;NFSU2_TR(0x4472c8);
__builtin_memmove((R+0),gp(0x82a4f8),4);
}
B4472cd:{NFSU2_TR(0x4472cd);
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
B4472cf:{NFSU2_TR(0x4472cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4472db;}}
}
B4472d1:L4472d1:{c.instructions+=1;NFSU2_TR(0x4472d1);
s4(0x82a4f8,u32(0x1ull));
}
B4472db:L4472db:{c.instructions+=3;NFSU2_TR(0x4472db);
w4(R+4,u32(0x10ull));
}
B4472e0:{NFSU2_TR(0x4472e0);
w4(R+24,u32(0x82a490ull));
}
B4472e5:{NFSU2_TR(0x4472e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4472e9:L4472e9:{c.instructions+=1;NFSU2_TR(0x4472e9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4472eb;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4472e9u);}goto L4472e9;}
}
B4472eb:L4472eb:{c.instructions+=13;NFSU2_TR(0x4472eb);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4472f2:{NFSU2_TR(0x4472f2);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4472f8:{NFSU2_TR(0x4472f8);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4472ff:{NFSU2_TR(0x4472ff);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447306:{NFSU2_TR(0x447306);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44730c:{NFSU2_TR(0x44730c);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447313:{NFSU2_TR(0x447313);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44731a:{NFSU2_TR(0x44731a);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B447320:{NFSU2_TR(0x447320);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B447324:{NFSU2_TR(0x447324);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44732f:{NFSU2_TR(0x44732f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447330:{NFSU2_TR(0x447330);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447337:{NFSU2_TR(0x447337);
{goto L447350;}
}
B447339:L447339:{c.instructions+=3;NFSU2_TR(0x447339);
__builtin_memmove((R+0),gp(0x82a4f8),4);
}
B44733e:{NFSU2_TR(0x44733e);
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
B447340:{NFSU2_TR(0x447340);
if(r1(R+518)){{goto L44734c;}}
}
B447342:L447342:{c.instructions+=1;NFSU2_TR(0x447342);
s4(0x82a4f8,u32(0x0ull));
}
B44734c:L44734c:{c.instructions+=2;NFSU2_TR(0x44734c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44734f:{NFSU2_TR(0x44734f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447350:L447350:{c.instructions+=2;NFSU2_TR(0x447350);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447351:{NFSU2_TR(0x447351);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447356ull));
TAIL_STATIC(0x4012b0u,401);
}
B447356:L447356:{c.instructions+=5;NFSU2_TR(0x447356);
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
B447359:{NFSU2_TR(0x447359);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44735d:{NFSU2_TR(0x44735d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44735e:{NFSU2_TR(0x44735e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44735f:{NFSU2_TR(0x44735f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447364ull));
TAIL_STATIC(0x5baf80u,5ba);
}
B447364:L447364:{c.instructions+=51;NFSU2_TR(0x447364);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447368:{NFSU2_TR(0x447368);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44736b:{NFSU2_TR(0x44736b);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44736f:{NFSU2_TR(0x44736f);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447373:{NFSU2_TR(0x447373);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447374:{NFSU2_TR(0x447374);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B447377:{NFSU2_TR(0x447377);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44737a:{NFSU2_TR(0x44737a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44737b:{NFSU2_TR(0x44737b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B447383:{NFSU2_TR(0x447383);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B447385:{NFSU2_TR(0x447385);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44738d:{NFSU2_TR(0x44738d);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447391:{NFSU2_TR(0x447391);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B447399:{NFSU2_TR(0x447399);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44739c:{NFSU2_TR(0x44739c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44739e:{NFSU2_TR(0x44739e);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4473a2:{NFSU2_TR(0x4473a2);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4473a6:{NFSU2_TR(0x4473a6);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4473a9:{NFSU2_TR(0x4473a9);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4473ad:{NFSU2_TR(0x4473ad);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4473b0:{NFSU2_TR(0x4473b0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4473b2:{NFSU2_TR(0x4473b2);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4473b6:{NFSU2_TR(0x4473b6);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4473b9:{NFSU2_TR(0x4473b9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4473bb:{NFSU2_TR(0x4473bb);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4473bf:{NFSU2_TR(0x4473bf);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4473c3:{NFSU2_TR(0x4473c3);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4473c6:{NFSU2_TR(0x4473c6);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4473ca:{NFSU2_TR(0x4473ca);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4473cd:{NFSU2_TR(0x4473cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4473cf:{NFSU2_TR(0x4473cf);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4473d3:{NFSU2_TR(0x4473d3);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4473d6:{NFSU2_TR(0x4473d6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4473d8:{NFSU2_TR(0x4473d8);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4473dc:{NFSU2_TR(0x4473dc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4473e0:{NFSU2_TR(0x4473e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4473e4:{NFSU2_TR(0x4473e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4473e7:{NFSU2_TR(0x4473e7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4473e9:{NFSU2_TR(0x4473e9);
{u32 ea_=u32(r4(R+12)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4473ec:{NFSU2_TR(0x4473ec);
{u32 ea_=u32(r4(R+12)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4473ef:{NFSU2_TR(0x4473ef);
{u32 ea_=u32(r4(R+12)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4473f2:{NFSU2_TR(0x4473f2);
{u32 ea_=u32(r4(R+12)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4473f5:{NFSU2_TR(0x4473f5);
{u32 ea_=u32(r4(R+12)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4473f8:{NFSU2_TR(0x4473f8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4473fa:{NFSU2_TR(0x4473fa);
{u32 ea_=u32(r4(R+12)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4473fd:{NFSU2_TR(0x4473fd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4473ff:{NFSU2_TR(0x4473ff);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B447401:{NFSU2_TR(0x447401);
{u32 ea_=u32(r4(R+12)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447404:{NFSU2_TR(0x447404);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B447406:{NFSU2_TR(0x447406);
{u32 ea_=u32(r4(R+12)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447409:{NFSU2_TR(0x447409);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44740eull));
TAIL_STATIC(0x43cf10u,43c);
}
B44740e:L44740e:{c.instructions+=27;NFSU2_TR(0x44740e);
{u32 ea_=u32(r4(R+12)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447414:{NFSU2_TR(0x447414);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447417:{NFSU2_TR(0x447417);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44741a:{NFSU2_TR(0x44741a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44741e:{NFSU2_TR(0x44741e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B447420:{NFSU2_TR(0x447420);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B447423:{NFSU2_TR(0x447423);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B447425:{NFSU2_TR(0x447425);
{u32 ea_=u32(r4(R+12)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447428:{NFSU2_TR(0x447428);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44742a:{NFSU2_TR(0x44742a);
{u32 ea_=u32(r4(R+12)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44742d:{NFSU2_TR(0x44742d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447431:{NFSU2_TR(0x447431);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B447433:{NFSU2_TR(0x447433);
{u32 ea_=u32(r4(R+12)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447436:{NFSU2_TR(0x447436);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B447438:{NFSU2_TR(0x447438);
{u32 ea_=u32(r4(R+12)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44743b:{NFSU2_TR(0x44743b);
{u32 ea_=u32(r4(R+12)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44743e:{NFSU2_TR(0x44743e);
{u32 ea_=u32(r4(R+12)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447441:{NFSU2_TR(0x447441);
{u32 ea_=u32(r4(R+12)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B447444:{NFSU2_TR(0x447444);
{u32 ea_=u32(r4(R+12)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447447:{NFSU2_TR(0x447447);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B447449:{NFSU2_TR(0x447449);
{u32 ea_=u32(r4(R+12)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44744c:{NFSU2_TR(0x44744c);
{u32 ea_=u32(r4(R+12)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44744f:{NFSU2_TR(0x44744f);
{u32 ea_=u32(r4(R+12)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B447452:{NFSU2_TR(0x447452);
{u32 ea_=u32(r4(R+12)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447455:{NFSU2_TR(0x447455);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44745b:{NFSU2_TR(0x44745b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44745d:{NFSU2_TR(0x44745d);
if(r1(R+518)){{goto L44747f;}}
}
B44745f:L44745f:{c.instructions+=4;NFSU2_TR(0x44745f);
w4(R+4,u32(0x34ull));
}
B447464:{NFSU2_TR(0x447464);
__builtin_memmove((R+24),(R+12),4);
}
B447466:{NFSU2_TR(0x447466);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44746c:{NFSU2_TR(0x44746c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x270ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B447473:L447473:{c.instructions+=1;NFSU2_TR(0x447473);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L447475;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x447473u);}goto L447473;}
}
B447475:L447475:{c.instructions+=1;NFSU2_TR(0x447475);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x274ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44747f:L44747f:{c.instructions+=5;NFSU2_TR(0x44747f);
{u32 ea_=u32(r4(R+12)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447485:{NFSU2_TR(0x447485);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44748b:{NFSU2_TR(0x44748b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44748d:{NFSU2_TR(0x44748d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B447490:{NFSU2_TR(0x447490);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44789e;}}
}
B447496:L447496:{c.instructions+=96;NFSU2_TR(0x447496);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44749c:{NFSU2_TR(0x44749c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44749e:{NFSU2_TR(0x44749e);
{u32 ea_=u32(r4(R+12)+u32(628u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4474a4:{NFSU2_TR(0x4474a4);
{u32 ea_=u32(r4(R+12)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4474a7:{NFSU2_TR(0x4474a7);
{u32 ea_=u32(r4(R+12)+u32(272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4474ad:{NFSU2_TR(0x4474ad);
{u32 ea_=u32(r4(R+12)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4474b0:{NFSU2_TR(0x4474b0);
{u32 ea_=u32(r4(R+12)+u32(276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4474b6:{NFSU2_TR(0x4474b6);
{u32 ea_=u32(r4(R+12)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4474b9:{NFSU2_TR(0x4474b9);
{u32 ea_=u32(r4(R+12)+u32(280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4474bf:{NFSU2_TR(0x4474bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4474c5:{NFSU2_TR(0x4474c5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4474c9:{NFSU2_TR(0x4474c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4474cd:{NFSU2_TR(0x4474cd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4474cf:{NFSU2_TR(0x4474cf);
{u32 ea_=u32(r4(R+12)+u32(480u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4474d5:{NFSU2_TR(0x4474d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4474db:{NFSU2_TR(0x4474db);
{u32 ea_=u32(r4(R+12)+u32(484u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4474e1:{NFSU2_TR(0x4474e1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4474e3:{NFSU2_TR(0x4474e3);
{u32 ea_=u32(r4(R+12)+u32(480u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4474e9:{NFSU2_TR(0x4474e9);
{u32 ea_=u32(r4(R+12)+u32(480u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4474ef:{NFSU2_TR(0x4474ef);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4474f1:{NFSU2_TR(0x4474f1);
{u32 ea_=u32(r4(R+12)+u32(484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4474f7:{NFSU2_TR(0x4474f7);
{u32 ea_=u32(r4(R+12)+u32(484u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4474fd:{NFSU2_TR(0x4474fd);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4474ff:{NFSU2_TR(0x4474ff);
{u32 ea_=u32(r4(R+12)+u32(488u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B447505:{NFSU2_TR(0x447505);
{u32 ea_=u32(r4(R+12)+u32(488u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44750b:{NFSU2_TR(0x44750b);
{u32 ea_=u32(r4(R+12)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44750e:{NFSU2_TR(0x44750e);
{u32 ea_=u32(r4(R+12)+u32(288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B447514:{NFSU2_TR(0x447514);
{u32 ea_=u32(r4(R+12)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447517:{NFSU2_TR(0x447517);
{u32 ea_=u32(r4(R+12)+u32(292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44751d:{NFSU2_TR(0x44751d);
{u32 ea_=u32(r4(R+12)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447520:{NFSU2_TR(0x447520);
{u32 ea_=u32(r4(R+12)+u32(296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B447526:{NFSU2_TR(0x447526);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44752c:{NFSU2_TR(0x44752c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447530:{NFSU2_TR(0x447530);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B447534:{NFSU2_TR(0x447534);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B447536:{NFSU2_TR(0x447536);
{u32 ea_=u32(r4(R+12)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44753c:{NFSU2_TR(0x44753c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447542:{NFSU2_TR(0x447542);
{u32 ea_=u32(r4(R+12)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447548:{NFSU2_TR(0x447548);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B44754a:{NFSU2_TR(0x44754a);
{u32 ea_=u32(r4(R+12)+u32(496u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B447550:{NFSU2_TR(0x447550);
{u32 ea_=u32(r4(R+12)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447556:{NFSU2_TR(0x447556);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B447558:{NFSU2_TR(0x447558);
{u32 ea_=u32(r4(R+12)+u32(500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44755e:{NFSU2_TR(0x44755e);
{u32 ea_=u32(r4(R+12)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447564:{NFSU2_TR(0x447564);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B447566:{NFSU2_TR(0x447566);
{u32 ea_=u32(r4(R+12)+u32(504u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44756c:{NFSU2_TR(0x44756c);
{u32 ea_=u32(r4(R+12)+u32(504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447572:{NFSU2_TR(0x447572);
{u32 ea_=u32(r4(R+12)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447575:{NFSU2_TR(0x447575);
{u32 ea_=u32(r4(R+12)+u32(304u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44757b:{NFSU2_TR(0x44757b);
{u32 ea_=u32(r4(R+12)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44757e:{NFSU2_TR(0x44757e);
{u32 ea_=u32(r4(R+12)+u32(308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B447584:{NFSU2_TR(0x447584);
{u32 ea_=u32(r4(R+12)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447587:{NFSU2_TR(0x447587);
{u32 ea_=u32(r4(R+12)+u32(312u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44758d:{NFSU2_TR(0x44758d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447591:{NFSU2_TR(0x447591);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B447595:{NFSU2_TR(0x447595);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B447597:{NFSU2_TR(0x447597);
{u32 ea_=u32(r4(R+12)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44759d:{NFSU2_TR(0x44759d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x208ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4475a3:{NFSU2_TR(0x4475a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4475a9:{NFSU2_TR(0x4475a9);
{u32 ea_=u32(r4(R+12)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4475af:{NFSU2_TR(0x4475af);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4475b1:{NFSU2_TR(0x4475b1);
{u32 ea_=u32(r4(R+12)+u32(512u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4475b7:{NFSU2_TR(0x4475b7);
{u32 ea_=u32(r4(R+12)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4475bd:{NFSU2_TR(0x4475bd);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4475bf:{NFSU2_TR(0x4475bf);
{u32 ea_=u32(r4(R+12)+u32(516u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4475c5:{NFSU2_TR(0x4475c5);
{u32 ea_=u32(r4(R+12)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4475cb:{NFSU2_TR(0x4475cb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4475cd:{NFSU2_TR(0x4475cd);
{u32 ea_=u32(r4(R+12)+u32(520u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4475d3:{NFSU2_TR(0x4475d3);
{u32 ea_=u32(r4(R+12)+u32(520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4475d9:{NFSU2_TR(0x4475d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B4475e0:{NFSU2_TR(0x4475e0);
{u32 ea_=u32(r4(R+12)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4475e6:{NFSU2_TR(0x4475e6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+8,u16(u32(r2(R+8))-u32(r2(U+4))));
}
B4475ed:{NFSU2_TR(0x4475ed);
{u32 ea_=u32(r4(R+12)+u32(384u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4475f3:{NFSU2_TR(0x4475f3);
w4(R+0,u32(r2(R+8)));
}
B4475f6:{NFSU2_TR(0x4475f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4475fa:{NFSU2_TR(0x4475fa);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4475fc:{NFSU2_TR(0x4475fc);
{u32 ea_=u32(r4(R+12)+u32(592u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447602:{NFSU2_TR(0x447602);
{u32 ea_=u32(r4(R+12)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447608:{NFSU2_TR(0x447608);
{u32 ea_=u32(r4(R+12)+u32(388u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44760e:{NFSU2_TR(0x44760e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B447610:{NFSU2_TR(0x447610);
{u32 ea_=u32(r4(R+12)+u32(596u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447616:{NFSU2_TR(0x447616);
{u32 ea_=u32(r4(R+12)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44761c:{NFSU2_TR(0x44761c);
{u32 ea_=u32(r4(R+12)+u32(392u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B447622:{NFSU2_TR(0x447622);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B447624:{NFSU2_TR(0x447624);
{u32 ea_=u32(r4(R+12)+u32(600u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44762a:{NFSU2_TR(0x44762a);
{u32 ea_=u32(r4(R+12)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447630:{NFSU2_TR(0x447630);
{u32 ea_=u32(r4(R+12)+u32(396u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B447636:{NFSU2_TR(0x447636);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B447638:{NFSU2_TR(0x447638);
{u32 ea_=u32(r4(R+12)+u32(604u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44763e:{NFSU2_TR(0x44763e);
{u32 ea_=u32(r4(R+12)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447644:{NFSU2_TR(0x447644);
{u32 ea_=u32(r4(R+12)+u32(400u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44764a:{NFSU2_TR(0x44764a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44764c:{NFSU2_TR(0x44764c);
{u32 ea_=u32(r4(R+12)+u32(608u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447652:{NFSU2_TR(0x447652);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B447656:{NFSU2_TR(0x447656);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B447658:{NFSU2_TR(0x447658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44765dull));
TAIL_STATIC(0x75bed4u,75b);
}
B44765d:L44765d:{c.instructions+=116;NFSU2_TR(0x44765d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x264ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B447664:{NFSU2_TR(0x447664);
{u32 ea_=u32(r4(R+12)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447667:{NFSU2_TR(0x447667);
{u32 ea_=u32(r4(R+12)+u32(320u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44766d:{NFSU2_TR(0x44766d);
{u32 ea_=u32(r4(R+12)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447670:{NFSU2_TR(0x447670);
{u32 ea_=u32(r4(R+12)+u32(324u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B447676:{NFSU2_TR(0x447676);
{u32 ea_=u32(r4(R+12)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447679:{NFSU2_TR(0x447679);
{u32 ea_=u32(r4(R+12)+u32(328u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44767f:{NFSU2_TR(0x44767f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447683:{NFSU2_TR(0x447683);
{u32 ea_=u32(r4(R+12)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447686:{NFSU2_TR(0x447686);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44768a:{NFSU2_TR(0x44768a);
{u32 ea_=u32(r4(R+12)+u32(332u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B447690:{NFSU2_TR(0x447690);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447696:{NFSU2_TR(0x447696);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44769a:{NFSU2_TR(0x44769a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44769e:{NFSU2_TR(0x44769e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4476a0:{NFSU2_TR(0x4476a0);
{u32 ea_=u32(r4(R+12)+u32(528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4476a6:{NFSU2_TR(0x4476a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4476ac:{NFSU2_TR(0x4476ac);
{u32 ea_=u32(r4(R+12)+u32(532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4476b2:{NFSU2_TR(0x4476b2);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4476b4:{NFSU2_TR(0x4476b4);
{u32 ea_=u32(r4(R+12)+u32(528u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4476ba:{NFSU2_TR(0x4476ba);
{u32 ea_=u32(r4(R+12)+u32(528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4476c0:{NFSU2_TR(0x4476c0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4476c2:{NFSU2_TR(0x4476c2);
{u32 ea_=u32(r4(R+12)+u32(532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4476c8:{NFSU2_TR(0x4476c8);
{u32 ea_=u32(r4(R+12)+u32(532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4476ce:{NFSU2_TR(0x4476ce);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4476d0:{NFSU2_TR(0x4476d0);
{u32 ea_=u32(r4(R+12)+u32(536u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4476d6:{NFSU2_TR(0x4476d6);
{u32 ea_=u32(r4(R+12)+u32(536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4476dc:{NFSU2_TR(0x4476dc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4476de:{NFSU2_TR(0x4476de);
{u32 ea_=u32(r4(R+12)+u32(540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4476e4:{NFSU2_TR(0x4476e4);
{u32 ea_=u32(r4(R+12)+u32(540u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4476ea:{NFSU2_TR(0x4476ea);
{u32 ea_=u32(r4(R+12)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4476f0:{NFSU2_TR(0x4476f0);
{u32 ea_=u32(r4(R+12)+u32(352u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4476f6:{NFSU2_TR(0x4476f6);
{u32 ea_=u32(r4(R+12)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4476fc:{NFSU2_TR(0x4476fc);
{u32 ea_=u32(r4(R+12)+u32(356u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B447702:{NFSU2_TR(0x447702);
{u32 ea_=u32(r4(R+12)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447708:{NFSU2_TR(0x447708);
{u32 ea_=u32(r4(R+12)+u32(360u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44770e:{NFSU2_TR(0x44770e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447712:{NFSU2_TR(0x447712);
{u32 ea_=u32(r4(R+12)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447718:{NFSU2_TR(0x447718);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44771c:{NFSU2_TR(0x44771c);
{u32 ea_=u32(r4(R+12)+u32(364u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B447722:{NFSU2_TR(0x447722);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447728:{NFSU2_TR(0x447728);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44772c:{NFSU2_TR(0x44772c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B447730:{NFSU2_TR(0x447730);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B447732:{NFSU2_TR(0x447732);
{u32 ea_=u32(r4(R+12)+u32(560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447738:{NFSU2_TR(0x447738);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44773e:{NFSU2_TR(0x44773e);
{u32 ea_=u32(r4(R+12)+u32(564u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447744:{NFSU2_TR(0x447744);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B447746:{NFSU2_TR(0x447746);
{u32 ea_=u32(r4(R+12)+u32(560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44774c:{NFSU2_TR(0x44774c);
{u32 ea_=u32(r4(R+12)+u32(560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447752:{NFSU2_TR(0x447752);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B447754:{NFSU2_TR(0x447754);
{u32 ea_=u32(r4(R+12)+u32(564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44775a:{NFSU2_TR(0x44775a);
{u32 ea_=u32(r4(R+12)+u32(564u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447760:{NFSU2_TR(0x447760);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B447762:{NFSU2_TR(0x447762);
{u32 ea_=u32(r4(R+12)+u32(568u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B447768:{NFSU2_TR(0x447768);
{u32 ea_=u32(r4(R+12)+u32(568u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44776e:{NFSU2_TR(0x44776e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B447770:{NFSU2_TR(0x447770);
{u32 ea_=u32(r4(R+12)+u32(572u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B447776:{NFSU2_TR(0x447776);
{u32 ea_=u32(r4(R+12)+u32(572u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44777c:{NFSU2_TR(0x44777c);
{u32 ea_=u32(r4(R+12)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447782:{NFSU2_TR(0x447782);
{u32 ea_=u32(r4(R+12)+u32(336u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B447788:{NFSU2_TR(0x447788);
{u32 ea_=u32(r4(R+12)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44778e:{NFSU2_TR(0x44778e);
{u32 ea_=u32(r4(R+12)+u32(340u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B447794:{NFSU2_TR(0x447794);
{u32 ea_=u32(r4(R+12)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44779a:{NFSU2_TR(0x44779a);
{u32 ea_=u32(r4(R+12)+u32(344u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4477a0:{NFSU2_TR(0x4477a0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4477a4:{NFSU2_TR(0x4477a4);
{u32 ea_=u32(r4(R+12)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4477aa:{NFSU2_TR(0x4477aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4477ae:{NFSU2_TR(0x4477ae);
{u32 ea_=u32(r4(R+12)+u32(348u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4477b4:{NFSU2_TR(0x4477b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4477ba:{NFSU2_TR(0x4477ba);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4477be:{NFSU2_TR(0x4477be);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4477c2:{NFSU2_TR(0x4477c2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4477c4:{NFSU2_TR(0x4477c4);
{u32 ea_=u32(r4(R+12)+u32(544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4477ca:{NFSU2_TR(0x4477ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4477d0:{NFSU2_TR(0x4477d0);
{u32 ea_=u32(r4(R+12)+u32(548u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4477d6:{NFSU2_TR(0x4477d6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4477d8:{NFSU2_TR(0x4477d8);
{u32 ea_=u32(r4(R+12)+u32(544u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4477de:{NFSU2_TR(0x4477de);
{u32 ea_=u32(r4(R+12)+u32(544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4477e4:{NFSU2_TR(0x4477e4);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4477e6:{NFSU2_TR(0x4477e6);
{u32 ea_=u32(r4(R+12)+u32(548u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4477ec:{NFSU2_TR(0x4477ec);
{u32 ea_=u32(r4(R+12)+u32(548u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4477f2:{NFSU2_TR(0x4477f2);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4477f4:{NFSU2_TR(0x4477f4);
{u32 ea_=u32(r4(R+12)+u32(552u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4477fa:{NFSU2_TR(0x4477fa);
{u32 ea_=u32(r4(R+12)+u32(552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447800:{NFSU2_TR(0x447800);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B447802:{NFSU2_TR(0x447802);
{u32 ea_=u32(r4(R+12)+u32(556u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B447808:{NFSU2_TR(0x447808);
{u32 ea_=u32(r4(R+12)+u32(556u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44780e:{NFSU2_TR(0x44780e);
{u32 ea_=u32(r4(R+12)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447814:{NFSU2_TR(0x447814);
{u32 ea_=u32(r4(R+12)+u32(368u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44781a:{NFSU2_TR(0x44781a);
{u32 ea_=u32(r4(R+12)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447820:{NFSU2_TR(0x447820);
{u32 ea_=u32(r4(R+12)+u32(372u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B447826:{NFSU2_TR(0x447826);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44782c:{NFSU2_TR(0x44782c);
{u32 ea_=u32(r4(R+12)+u32(376u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B447832:{NFSU2_TR(0x447832);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447836:{NFSU2_TR(0x447836);
{u32 ea_=u32(r4(R+12)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44783c:{NFSU2_TR(0x44783c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B447840:{NFSU2_TR(0x447840);
{u32 ea_=u32(r4(R+12)+u32(380u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B447846:{NFSU2_TR(0x447846);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44784c:{NFSU2_TR(0x44784c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447850:{NFSU2_TR(0x447850);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B447854:{NFSU2_TR(0x447854);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B447856:{NFSU2_TR(0x447856);
{u32 ea_=u32(r4(R+12)+u32(576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44785c:{NFSU2_TR(0x44785c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447862:{NFSU2_TR(0x447862);
{u32 ea_=u32(r4(R+12)+u32(580u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447868:{NFSU2_TR(0x447868);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B44786a:{NFSU2_TR(0x44786a);
{u32 ea_=u32(r4(R+12)+u32(576u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B447870:{NFSU2_TR(0x447870);
{u32 ea_=u32(r4(R+12)+u32(576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447876:{NFSU2_TR(0x447876);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B447878:{NFSU2_TR(0x447878);
{u32 ea_=u32(r4(R+12)+u32(580u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44787e:{NFSU2_TR(0x44787e);
{u32 ea_=u32(r4(R+12)+u32(580u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447884:{NFSU2_TR(0x447884);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B447886:{NFSU2_TR(0x447886);
{u32 ea_=u32(r4(R+12)+u32(584u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44788c:{NFSU2_TR(0x44788c);
{u32 ea_=u32(r4(R+12)+u32(584u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447892:{NFSU2_TR(0x447892);
{u32 ea_=u32(r4(R+12)+u32(588u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B447898:{NFSU2_TR(0x447898);
{u32 ea_=u32(r4(R+12)+u32(588u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44789e:L44789e:{c.instructions+=6;NFSU2_TR(0x44789e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44789f:{NFSU2_TR(0x44789f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4478a0:{NFSU2_TR(0x4478a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4478a1:{NFSU2_TR(0x4478a1);
__builtin_memmove((R+16),(R+20),4);
}
B4478a3:{NFSU2_TR(0x4478a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4478a4:{NFSU2_TR(0x4478a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4478b0:L4478b0:{c.instructions+=13;NFSU2_TR(0x4478b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4478b4:{NFSU2_TR(0x4478b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4478b5:{NFSU2_TR(0x4478b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4478b6:{NFSU2_TR(0x4478b6);
__builtin_memmove((R+12),(R+4),4);
}
B4478b8:{NFSU2_TR(0x4478b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4478bc:{NFSU2_TR(0x4478bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4478bd:{NFSU2_TR(0x4478bd);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4478bf:{NFSU2_TR(0x4478bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4478c0:{NFSU2_TR(0x4478c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4478c3:{NFSU2_TR(0x4478c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4478c4:{NFSU2_TR(0x4478c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4478c7:{NFSU2_TR(0x4478c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4478cb:{NFSU2_TR(0x4478cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4478d0ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4478d0:L4478d0:{c.instructions+=8;NFSU2_TR(0x4478d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4478d4:{NFSU2_TR(0x4478d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4478d8:{NFSU2_TR(0x4478d8);
__builtin_memmove((R+4),(R+0),4);
}
B4478da:{NFSU2_TR(0x4478da);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4478e0:{NFSU2_TR(0x4478e0);
__builtin_memmove((R+8),(R+4),4);
}
B4478e2:{NFSU2_TR(0x4478e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B4478e5:{NFSU2_TR(0x4478e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4478e9:{NFSU2_TR(0x4478e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4478ec:L4478ec:{c.instructions+=1;NFSU2_TR(0x4478ec);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4478ee;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4478ecu);}goto L4478ec;}
}
B4478ee:L4478ee:{c.instructions+=3;NFSU2_TR(0x4478ee);
__builtin_memmove((R+4),(R+8),4);
}
B4478f0:{NFSU2_TR(0x4478f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4478f3:{NFSU2_TR(0x4478f3);
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
B4478f6:L4478f6:{c.instructions+=1;NFSU2_TR(0x4478f6);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L4478f8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4478f6u);}goto L4478f6;}
}
B4478f8:L4478f8:{c.instructions+=8;NFSU2_TR(0x4478f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4478fb:{NFSU2_TR(0x4478fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4478ff:{NFSU2_TR(0x4478ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B447900:{NFSU2_TR(0x447900);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447903:{NFSU2_TR(0x447903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B447904:{NFSU2_TR(0x447904);
__builtin_memmove((R+0),(R+12),4);
}
B447906:{NFSU2_TR(0x447906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B447907:{NFSU2_TR(0x447907);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B447910:L447910:{c.instructions+=6;NFSU2_TR(0x447910);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B447914:{NFSU2_TR(0x447914);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447915:{NFSU2_TR(0x447915);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B447918:{NFSU2_TR(0x447918);
__builtin_memmove((R+8),(R+28),4);
}
B44791a:{NFSU2_TR(0x44791a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44791c:{NFSU2_TR(0x44791c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L447949;}}
}
B44791e:L44791e:{c.instructions+=5;NFSU2_TR(0x44791e);
__builtin_memmove((R+0),(R+8),4);
}
B447920:{NFSU2_TR(0x447920);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B447926:{NFSU2_TR(0x447926);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447927:{NFSU2_TR(0x447927);
u8 U[12];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B44792b:{NFSU2_TR(0x44792b);
{goto L447930;}
}
B447930:L447930:{c.instructions+=5;NFSU2_TR(0x447930);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447932:{NFSU2_TR(0x447932);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B447936:{NFSU2_TR(0x447936);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B447938:{NFSU2_TR(0x447938);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44793b:{NFSU2_TR(0x44793b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L447948;}}
}
B44793d:L44793d:{c.instructions+=4;NFSU2_TR(0x44793d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B44793e:{NFSU2_TR(0x44793e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x88ull))));
}
B447944:{NFSU2_TR(0x447944);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B447946:{NFSU2_TR(0x447946);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x447930u);}goto L447930;}}
}
B447948:L447948:{c.instructions+=1;NFSU2_TR(0x447948);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B447949:L447949:{c.instructions+=7;NFSU2_TR(0x447949);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44794b:{NFSU2_TR(0x44794b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44794d:{NFSU2_TR(0x44794d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B447950:{NFSU2_TR(0x447950);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B447951:{NFSU2_TR(0x447951);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B447953:{NFSU2_TR(0x447953);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B447955:{NFSU2_TR(0x447955);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L447959;}}
}
B447957:L447957:{c.instructions+=1;NFSU2_TR(0x447957);
__builtin_memmove((R+0),(R+28),4);
}
B447959:L447959:{c.instructions+=3;NFSU2_TR(0x447959);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44795b:{NFSU2_TR(0x44795b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44795c:{NFSU2_TR(0x44795c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44796b;}}
}
B44795e:L44795e:{c.instructions+=3;NFSU2_TR(0x44795e);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x88ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B447964:{NFSU2_TR(0x447964);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B447968:{NFSU2_TR(0x447968);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44796b:L44796b:{c.instructions+=2;NFSU2_TR(0x44796b);
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
B44796d:{NFSU2_TR(0x44796d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B447970:L447970:{c.instructions+=11;NFSU2_TR(0x447970);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B447974:{NFSU2_TR(0x447974);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44797a:{NFSU2_TR(0x44797a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44797b:{NFSU2_TR(0x44797b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44797f:{NFSU2_TR(0x44797f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B447983:{NFSU2_TR(0x447983);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447984:{NFSU2_TR(0x447984);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44798a:{NFSU2_TR(0x44798a);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B44798c:{NFSU2_TR(0x44798c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B44798e:{NFSU2_TR(0x44798e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B447994:{NFSU2_TR(0x447994);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44799c;}}
}
B447996:L447996:{c.instructions+=1;NFSU2_TR(0x447996);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44799c:L44799c:{c.instructions+=11;NFSU2_TR(0x44799c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4479a2:{NFSU2_TR(0x4479a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4479a8:{NFSU2_TR(0x4479a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4479aa:{NFSU2_TR(0x4479aa);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B4479ac:{NFSU2_TR(0x4479ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4479ae:{NFSU2_TR(0x4479ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4479b4:{NFSU2_TR(0x4479b4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4479b7:{NFSU2_TR(0x4479b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4479b8:{NFSU2_TR(0x4479b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4479be:{NFSU2_TR(0x4479be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4479bf:{NFSU2_TR(0x4479bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4479d0:L4479d0:{c.instructions+=8;NFSU2_TR(0x4479d0);
__builtin_memmove((R+0),(R+4),4);
}
B4479d2:{NFSU2_TR(0x4479d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4479d8:{NFSU2_TR(0x4479d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4479d9:{NFSU2_TR(0x4479d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4479dd:{NFSU2_TR(0x4479dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4479de:{NFSU2_TR(0x4479de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4479e4:{NFSU2_TR(0x4479e4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B4479e6:{NFSU2_TR(0x4479e6);
w4(R+4,u32(0x22ull));
}
B4479eb:L4479eb:{c.instructions+=1;NFSU2_TR(0x4479eb);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4479ed;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4479ebu);}goto L4479eb;}
}
B4479ed:L4479ed:{c.instructions+=6;NFSU2_TR(0x4479ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4479f3:{NFSU2_TR(0x4479f3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x88ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x88ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x88ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4479f9:{NFSU2_TR(0x4479f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4479fa:{NFSU2_TR(0x4479fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447a00:{NFSU2_TR(0x447a00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B447a01:{NFSU2_TR(0x447a01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B447a10:L447a10:{c.instructions+=7;NFSU2_TR(0x447a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B447a16:{NFSU2_TR(0x447a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447a1c:{NFSU2_TR(0x447a1c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B447a1e:{NFSU2_TR(0x447a1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B447a22:{NFSU2_TR(0x447a22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B447a24:{NFSU2_TR(0x447a24);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x4ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x4ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B447a2b:{NFSU2_TR(0x447a2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B447a30:L447a30:{c.instructions+=16;NFSU2_TR(0x447a30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447a34:{NFSU2_TR(0x447a34);
u8 U[12];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B447a38:{NFSU2_TR(0x447a38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447a39:{NFSU2_TR(0x447a39);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B447a3c:{NFSU2_TR(0x447a3c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B447a40:{NFSU2_TR(0x447a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B447a43:{NFSU2_TR(0x447a43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B447a45:{NFSU2_TR(0x447a45);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B447a49:{NFSU2_TR(0x447a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B447a4c:{NFSU2_TR(0x447a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447a4f:{NFSU2_TR(0x447a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447a52:{NFSU2_TR(0x447a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447a55:{NFSU2_TR(0x447a55);
__builtin_memmove((R+0),gp(0x828649),1);
}
B447a5a:{NFSU2_TR(0x447a5a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B447a5c:{NFSU2_TR(0x447a5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B447a5d:{NFSU2_TR(0x447a5d);
if(r1(R+518)){{goto L447a67;}}
}
B447a5f:L447a5f:{c.instructions+=3;NFSU2_TR(0x447a5f);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447a62:{NFSU2_TR(0x447a62);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B447a64:{NFSU2_TR(0x447a64);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447a67:L447a67:{c.instructions+=2;NFSU2_TR(0x447a67);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x3ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x3ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B447a6b:{NFSU2_TR(0x447a6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L447a78;}}
}
B447a6d:L447a6d:{c.instructions+=3;NFSU2_TR(0x447a6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447a6e:{NFSU2_TR(0x447a6e);
w4(R+4,u32(0x828770ull));
}
B447a73:{NFSU2_TR(0x447a73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447a78ull));
TAIL_STATIC(0x4427c0u,442);
}
B447a78:L447a78:{c.instructions+=1;NFSU2_TR(0x447a78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B447a80:L447a80:{c.instructions+=16;NFSU2_TR(0x447a80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447a84:{NFSU2_TR(0x447a84);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B447a88:{NFSU2_TR(0x447a88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447a89:{NFSU2_TR(0x447a89);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B447a8c:{NFSU2_TR(0x447a8c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B447a90:{NFSU2_TR(0x447a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B447a93:{NFSU2_TR(0x447a93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B447a95:{NFSU2_TR(0x447a95);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B447a99:{NFSU2_TR(0x447a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B447a9c:{NFSU2_TR(0x447a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447a9f:{NFSU2_TR(0x447a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447aa2:{NFSU2_TR(0x447aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447aa5:{NFSU2_TR(0x447aa5);
__builtin_memmove((R+0),gp(0x828649),1);
}
B447aaa:{NFSU2_TR(0x447aaa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B447aac:{NFSU2_TR(0x447aac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B447aad:{NFSU2_TR(0x447aad);
if(r1(R+518)){{goto L447ab7;}}
}
B447aaf:L447aaf:{c.instructions+=3;NFSU2_TR(0x447aaf);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447ab2:{NFSU2_TR(0x447ab2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B447ab4:{NFSU2_TR(0x447ab4);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447ab7:L447ab7:{c.instructions+=2;NFSU2_TR(0x447ab7);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x3ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x3ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B447abb:{NFSU2_TR(0x447abb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L447ac8;}}
}
B447abd:L447abd:{c.instructions+=3;NFSU2_TR(0x447abd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447abe:{NFSU2_TR(0x447abe);
w4(R+4,u32(0x828770ull));
}
B447ac3:{NFSU2_TR(0x447ac3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447ac8ull));
TAIL_STATIC(0x4427c0u,442);
}
B447ac8:L447ac8:{c.instructions+=1;NFSU2_TR(0x447ac8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B447ad0:L447ad0:{c.instructions+=10;NFSU2_TR(0x447ad0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447ad1:{NFSU2_TR(0x447ad1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447ad2:{NFSU2_TR(0x447ad2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447ad3:{NFSU2_TR(0x447ad3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+20),(U+0),4);
}
B447ad6:{NFSU2_TR(0x447ad6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447ad7:{NFSU2_TR(0x447ad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B447ada:{NFSU2_TR(0x447ada);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B447adc:{NFSU2_TR(0x447adc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447ae0:{NFSU2_TR(0x447ae0);
w4(R+12,u32(0x1ull));
}
B447ae5:{NFSU2_TR(0x447ae5);
if(r1(R+518)){{goto L447b27;}}
}
B447ae7:L447ae7:{c.instructions+=3;NFSU2_TR(0x447ae7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447ae8:{NFSU2_TR(0x447ae8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B447aec:{NFSU2_TR(0x447aec);
{goto L447af2;}
}
B447aee:L447aee:{c.instructions+=1;NFSU2_TR(0x447aee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B447af2:L447af2:{c.instructions+=8;NFSU2_TR(0x447af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447af5:{NFSU2_TR(0x447af5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447af6:{NFSU2_TR(0x447af6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447af7:{NFSU2_TR(0x447af7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((R+4),(U+0),4);
}
B447afa:{NFSU2_TR(0x447afa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447afb:{NFSU2_TR(0x447afb);
u8 U[4];
w4(U+0,u32(0x787b10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b00:{NFSU2_TR(0x447b00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b01:{NFSU2_TR(0x447b01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447b06ull));
TAIL_STATIC(0x579c10u,579);
}
B447b06:L447b06:{c.instructions+=5;NFSU2_TR(0x447b06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B447b09:{NFSU2_TR(0x447b09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b0a:{NFSU2_TR(0x447b0a);
__builtin_memmove((R+4),(R+24),4);
}
B447b0c:{NFSU2_TR(0x447b0c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B447b0d:{NFSU2_TR(0x447b0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447b12ull));
TAIL_STATIC(0x4428d0u,442);
}
B447b12:L447b12:{c.instructions+=3;NFSU2_TR(0x447b12);
u8 U[4];
w4(U+0,u32(0x787b00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b17:{NFSU2_TR(0x447b17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b18:{NFSU2_TR(0x447b18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447b1dull));
TAIL_STATIC(0x579c10u,579);
}
B447b1d:L447b1d:{c.instructions+=4;NFSU2_TR(0x447b1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B447b1f:{NFSU2_TR(0x447b1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B447b22:{NFSU2_TR(0x447b22);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B447b24:{NFSU2_TR(0x447b24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x447aeeu);}goto L447aee;}}
}
B447b26:L447b26:{c.instructions+=1;NFSU2_TR(0x447b26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B447b27:L447b27:{c.instructions+=5;NFSU2_TR(0x447b27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B447b28:{NFSU2_TR(0x447b28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B447b29:{NFSU2_TR(0x447b29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B447b2a:{NFSU2_TR(0x447b2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B447b2b:{NFSU2_TR(0x447b2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B447b30:L447b30:{c.instructions+=15;NFSU2_TR(0x447b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447b36:{NFSU2_TR(0x447b36);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b38:{NFSU2_TR(0x447b38);
u8 U[4];
w4(U+0,u32(0x772034ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b3d:{NFSU2_TR(0x447b3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b3e:{NFSU2_TR(0x447b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447b45:{NFSU2_TR(0x447b45);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b46:{NFSU2_TR(0x447b46);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B447b4a:{NFSU2_TR(0x447b4a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b4b:{NFSU2_TR(0x447b4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B447b4f:{NFSU2_TR(0x447b4f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B447b52:{NFSU2_TR(0x447b52);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B447b54:{NFSU2_TR(0x447b54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b55:{NFSU2_TR(0x447b55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b56:{NFSU2_TR(0x447b56);
__builtin_memmove((R+28),(R+4),4);
}
B447b58:{NFSU2_TR(0x447b58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L447bc1;}}
}
B447b5a:L447b5a:{c.instructions+=3;NFSU2_TR(0x447b5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B447b5e:{NFSU2_TR(0x447b5e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B447b60:{NFSU2_TR(0x447b60);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L447bc1;}}
}
B447b62:L447b62:{c.instructions+=6;NFSU2_TR(0x447b62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B447b65:{NFSU2_TR(0x447b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447b68:{NFSU2_TR(0x447b68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B447b6a:{NFSU2_TR(0x447b6a);
u8 U[4];
w4(U+0,u32(0x1ab0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b6f:{NFSU2_TR(0x447b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447b72:{NFSU2_TR(0x447b72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447b77ull));
TAIL_STATIC(0x575620u,575);
}
B447b77:L447b77:{c.instructions+=5;NFSU2_TR(0x447b77);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B447b7a:{NFSU2_TR(0x447b7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447b7e:{NFSU2_TR(0x447b7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B447b80:{NFSU2_TR(0x447b80);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B447b88:{NFSU2_TR(0x447b88);
if(r1(R+518)){{goto L447bb0;}}
}
B447b8a:L447b8a:{c.instructions+=10;NFSU2_TR(0x447b8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B447b8e:{NFSU2_TR(0x447b8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B447b92:{NFSU2_TR(0x447b92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b93:{NFSU2_TR(0x447b93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b94:{NFSU2_TR(0x447b94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b95:{NFSU2_TR(0x447b95);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x12ull))));
}
B447b98:{NFSU2_TR(0x447b98);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b99:{NFSU2_TR(0x447b99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447b9a:{NFSU2_TR(0x447b9a);
__builtin_memmove((R+4),(R+0),4);
}
B447b9c:{NFSU2_TR(0x447b9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447ba1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4478b0u);}goto L4478b0;}
}
B447ba1:L447ba1:{c.instructions+=6;NFSU2_TR(0x447ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B447ba4:{NFSU2_TR(0x447ba4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B447ba6:{NFSU2_TR(0x447ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447ba9:{NFSU2_TR(0x447ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447bac:{NFSU2_TR(0x447bac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B447bae:{NFSU2_TR(0x447bae);
{goto L447be8;}
}
B447bb0:L447bb0:{c.instructions+=7;NFSU2_TR(0x447bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B447bb3:{NFSU2_TR(0x447bb3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B447bb5:{NFSU2_TR(0x447bb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B447bb7:{NFSU2_TR(0x447bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447bba:{NFSU2_TR(0x447bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447bbd:{NFSU2_TR(0x447bbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B447bbf:{NFSU2_TR(0x447bbf);
{goto L447be8;}
}
B447bc1:L447bc1:{c.instructions+=6;NFSU2_TR(0x447bc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B447bc5:{NFSU2_TR(0x447bc5);
__builtin_memmove((R+4),(R+12),4);
}
B447bc7:{NFSU2_TR(0x447bc7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B447bcd:{NFSU2_TR(0x447bcd);
__builtin_memmove((R+0),(R+4),4);
}
B447bcf:{NFSU2_TR(0x447bcf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B447bd2:{NFSU2_TR(0x447bd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B447bd5:L447bd5:{c.instructions+=1;NFSU2_TR(0x447bd5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L447bd7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x447bd5u);}goto L447bd5;}
}
B447bd7:L447bd7:{c.instructions+=2;NFSU2_TR(0x447bd7);
__builtin_memmove((R+4),(R+0),4);
}
B447bd9:{NFSU2_TR(0x447bd9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B447bdc:L447bdc:{c.instructions+=1;NFSU2_TR(0x447bdc);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L447bde;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x447bdcu);}goto L447bdc;}
}
B447bde:L447bde:{c.instructions+=3;NFSU2_TR(0x447bde);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B447be2:{NFSU2_TR(0x447be2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B447be5:{NFSU2_TR(0x447be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447be8:L447be8:{c.instructions+=8;NFSU2_TR(0x447be8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B447bec:{NFSU2_TR(0x447bec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B447bed:{NFSU2_TR(0x447bed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B447bee:{NFSU2_TR(0x447bee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B447bef:{NFSU2_TR(0x447bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447bf6:{NFSU2_TR(0x447bf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B447bf7:{NFSU2_TR(0x447bf7);
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
B447bfa:{NFSU2_TR(0x447bfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B447c00:L447c00:{c.instructions+=7;NFSU2_TR(0x447c00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447c01:{NFSU2_TR(0x447c01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447c02:{NFSU2_TR(0x447c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B447c05:{NFSU2_TR(0x447c05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447c06:{NFSU2_TR(0x447c06);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B447c09:{NFSU2_TR(0x447c09);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B447c0b:{NFSU2_TR(0x447c0b);
if(r1(R+518)){{goto L447c28;}}
}
B447c0d:L447c0d:{c.instructions+=1;NFSU2_TR(0x447c0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B447c11:L447c11:{c.instructions+=4;NFSU2_TR(0x447c11);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((R+0),(U+0),4);
}
B447c14:{NFSU2_TR(0x447c14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447c15:{NFSU2_TR(0x447c15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447c16:{NFSU2_TR(0x447c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447c1bull));
TAIL_STATIC(0x43dc30u,43d);
}
B447c1b:L447c1b:{c.instructions+=3;NFSU2_TR(0x447c1b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B447c1e:{NFSU2_TR(0x447c1e);
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
B447c20:{NFSU2_TR(0x447c20);
if(r1(R+518)){{goto L447c30;}}
}
B447c22:L447c22:{c.instructions+=3;NFSU2_TR(0x447c22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B447c24:{NFSU2_TR(0x447c24);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B447c26:{NFSU2_TR(0x447c26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x447c11u);}goto L447c11;}}
}
B447c28:L447c28:{c.instructions+=5;NFSU2_TR(0x447c28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B447c29:{NFSU2_TR(0x447c29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B447c2a:{NFSU2_TR(0x447c2a);
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
B447c2c:{NFSU2_TR(0x447c2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B447c2d:{NFSU2_TR(0x447c2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B447c30:L447c30:{c.instructions+=5;NFSU2_TR(0x447c30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B447c31:{NFSU2_TR(0x447c31);
__builtin_memmove((R+0),(R+24),4);
}
B447c33:{NFSU2_TR(0x447c33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B447c34:{NFSU2_TR(0x447c34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B447c35:{NFSU2_TR(0x447c35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B447c40:L447c40:{c.instructions+=70;NFSU2_TR(0x447c40);
__builtin_memmove((R+0),(R+4),4);
}
B447c42:{NFSU2_TR(0x447c42);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B447c44:{NFSU2_TR(0x447c44);
w4(R+8,u32(0x1ull));
}
B447c49:{NFSU2_TR(0x447c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447c4f:{NFSU2_TR(0x447c4f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cd5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B447c55:{NFSU2_TR(0x447c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447c5b:{NFSU2_TR(0x447c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447c61:{NFSU2_TR(0x447c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447c67:{NFSU2_TR(0x447c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447c6d:{NFSU2_TR(0x447c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447c73:{NFSU2_TR(0x447c73);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c84ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B447c7a:{NFSU2_TR(0x447c7a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c86ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B447c81:{NFSU2_TR(0x447c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447c87:{NFSU2_TR(0x447c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447c8d:{NFSU2_TR(0x447c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447c93:{NFSU2_TR(0x447c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447c99:{NFSU2_TR(0x447c99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447c9f:{NFSU2_TR(0x447c9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447ca5:{NFSU2_TR(0x447ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447cab:{NFSU2_TR(0x447cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447cb1:{NFSU2_TR(0x447cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447cb7:{NFSU2_TR(0x447cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447cbd:{NFSU2_TR(0x447cbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c5cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B447cc7:{NFSU2_TR(0x447cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447ccd:{NFSU2_TR(0x447ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447cd3:{NFSU2_TR(0x447cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447cd9:{NFSU2_TR(0x447cd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447cdf:{NFSU2_TR(0x447cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447ce5:{NFSU2_TR(0x447ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447ceb:{NFSU2_TR(0x447ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447cf1:{NFSU2_TR(0x447cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447cf7:{NFSU2_TR(0x447cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447cfd:{NFSU2_TR(0x447cfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d03:{NFSU2_TR(0x447d03);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cd4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B447d09:{NFSU2_TR(0x447d09);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cd6ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B447d0f:{NFSU2_TR(0x447d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d15:{NFSU2_TR(0x447d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d1b:{NFSU2_TR(0x447d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d21:{NFSU2_TR(0x447d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d24:{NFSU2_TR(0x447d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d27:{NFSU2_TR(0x447d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d2a:{NFSU2_TR(0x447d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d2d:{NFSU2_TR(0x447d2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d30:{NFSU2_TR(0x447d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d33:{NFSU2_TR(0x447d33);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B447d35:{NFSU2_TR(0x447d35);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B447d39:{NFSU2_TR(0x447d39);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B447d3c:{NFSU2_TR(0x447d3c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B447d3f:{NFSU2_TR(0x447d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d45:{NFSU2_TR(0x447d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d4b:{NFSU2_TR(0x447d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d51:{NFSU2_TR(0x447d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d57:{NFSU2_TR(0x447d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d5d:{NFSU2_TR(0x447d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d63:{NFSU2_TR(0x447d63);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B447d69:{NFSU2_TR(0x447d69);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B447d6f:{NFSU2_TR(0x447d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c8cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d75:{NFSU2_TR(0x447d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d7b:{NFSU2_TR(0x447d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c94ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d81:{NFSU2_TR(0x447d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d87:{NFSU2_TR(0x447d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c9cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d8d:{NFSU2_TR(0x447d8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ca0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d93:{NFSU2_TR(0x447d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ca4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d99:{NFSU2_TR(0x447d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ca8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447d9f:{NFSU2_TR(0x447d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447da5:{NFSU2_TR(0x447da5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B447da7:{NFSU2_TR(0x447da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447daa:{NFSU2_TR(0x447daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447dad:{NFSU2_TR(0x447dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447db0:{NFSU2_TR(0x447db0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B447dc0:L447dc0:{c.instructions+=19;NFSU2_TR(0x447dc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447dc1:{NFSU2_TR(0x447dc1);
__builtin_memmove((R+20),(R+16),4);
}
B447dc3:{NFSU2_TR(0x447dc3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B447dc6:{NFSU2_TR(0x447dc6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447dc8:{NFSU2_TR(0x447dc8);
u8 U[4];
w4(U+0,u32(0x772054ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447dcd:{NFSU2_TR(0x447dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447dd3:{NFSU2_TR(0x447dd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447dd4:{NFSU2_TR(0x447dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447ddb:{NFSU2_TR(0x447ddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B447dde:{NFSU2_TR(0x447dde);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447ddf:{NFSU2_TR(0x447ddf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447de0:{NFSU2_TR(0x447de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B447de3:{NFSU2_TR(0x447de3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447de4:{NFSU2_TR(0x447de4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B447de8:{NFSU2_TR(0x447de8);
__builtin_memmove((R+12),(R+4),4);
}
B447dea:{NFSU2_TR(0x447dea);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447dec:{NFSU2_TR(0x447dec);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447df0:{NFSU2_TR(0x447df0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447df4:{NFSU2_TR(0x447df4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447df9ull));
TAIL_STATIC(0x575620u,575);
}
B447df9:L447df9:{c.instructions+=5;NFSU2_TR(0x447df9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B447dfc:{NFSU2_TR(0x447dfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447e00:{NFSU2_TR(0x447e00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B447e02:{NFSU2_TR(0x447e02);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B447e0a:{NFSU2_TR(0x447e0a);
if(r1(R+518)){{goto L447e1a;}}
}
B447e0c:L447e0c:{c.instructions+=5;NFSU2_TR(0x447e0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447e0d:{NFSU2_TR(0x447e0d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447e0f:{NFSU2_TR(0x447e0f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447e11:{NFSU2_TR(0x447e11);
__builtin_memmove((R+4),(R+0),4);
}
B447e13:{NFSU2_TR(0x447e13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447e18ull));
TAIL_STATIC(0x57a300u,57a);
}
B447e18:L447e18:{c.instructions+=1;NFSU2_TR(0x447e18);
{goto L447e1c;}
}
B447e1a:L447e1a:{c.instructions+=1;NFSU2_TR(0x447e1a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B447e1c:L447e1c:{c.instructions+=15;NFSU2_TR(0x447e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447e22:{NFSU2_TR(0x447e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447e25:{NFSU2_TR(0x447e25);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B447e27:{NFSU2_TR(0x447e27);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B447e2a:{NFSU2_TR(0x447e2a);
w4(R+4,u32(0x0ull));
}
B447e2f:{NFSU2_TR(0x447e2f);
w1(R+0,u8(~u32(r1(R+0))));
}
B447e31:{NFSU2_TR(0x447e31);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B447e33:{NFSU2_TR(0x447e33);
__builtin_memmove((R+4),(R+518),1);
}
B447e36:{NFSU2_TR(0x447e36);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447e3a:{NFSU2_TR(0x447e3a);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B447e3e:{NFSU2_TR(0x447e3e);
u8 U[15];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B447e43:{NFSU2_TR(0x447e43);
__builtin_memmove((R+8),(R+4),4);
}
B447e45:{NFSU2_TR(0x447e45);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447e49:{NFSU2_TR(0x447e49);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447e4d:{NFSU2_TR(0x447e4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L447e5c;}}
}
B447e4f:L447e4f:{c.instructions+=2;NFSU2_TR(0x447e4f);
u8 U[15];
w4(U+0,u32(u32(u32(0x75ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B447e54:{NFSU2_TR(0x447e54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L447e5c;}}
}
B447e56:L447e56:{c.instructions+=2;NFSU2_TR(0x447e56);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447e5a:{NFSU2_TR(0x447e5a);
__builtin_memmove((R+8),(R+28),4);
}
B447e5c:L447e5c:{c.instructions+=6;NFSU2_TR(0x447e5c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B447e5e:{NFSU2_TR(0x447e5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B447e66:{NFSU2_TR(0x447e66);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B447e6e:{NFSU2_TR(0x447e6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B447e76:{NFSU2_TR(0x447e76);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B447e7e:{NFSU2_TR(0x447e7e);
if(r1(R+518)){{goto L447e88;}}
}
B447e80:L447e80:{c.instructions+=2;NFSU2_TR(0x447e80);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8cull))));
}
B447e86:{NFSU2_TR(0x447e86);
{goto L447e93;}
}
B447e88:L447e88:{c.instructions+=3;NFSU2_TR(0x447e88);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B447e8c:{NFSU2_TR(0x447e8c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B447e8f:{NFSU2_TR(0x447e8f);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B447e93:L447e93:{c.instructions+=4;NFSU2_TR(0x447e93);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447e97:{NFSU2_TR(0x447e97);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B447e99:{NFSU2_TR(0x447e99);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B447e9b:{NFSU2_TR(0x447e9b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L447ffe;}}
}
B447ea1:L447ea1:{c.instructions+=2;NFSU2_TR(0x447ea1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B447ea3:{NFSU2_TR(0x447ea3);
{goto L447eb0;}
}
B447ea5:L447ea5:{c.instructions+=3;NFSU2_TR(0x447ea5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B447ea9:{NFSU2_TR(0x447ea9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B447ead:{NFSU2_TR(0x447ead);
__builtin_memmove((R+4),(R+4),4);
}
B447eb0:L447eb0:{c.instructions+=2;NFSU2_TR(0x447eb0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B447eb3:{NFSU2_TR(0x447eb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L447ebf;}}
}
B447eb5:L447eb5:{c.instructions+=2;NFSU2_TR(0x447eb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B447ebd:{NFSU2_TR(0x447ebd);
{goto L447f1a;}
}
B447ebf:L447ebf:{c.instructions+=15;NFSU2_TR(0x447ebf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B447ec3:{NFSU2_TR(0x447ec3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B447ec6:{NFSU2_TR(0x447ec6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447eca:{NFSU2_TR(0x447eca);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B447ece:{NFSU2_TR(0x447ece);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B447ed2:{NFSU2_TR(0x447ed2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B447ed5:{NFSU2_TR(0x447ed5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447ed9:{NFSU2_TR(0x447ed9);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B447edf:{NFSU2_TR(0x447edf);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B447ee3:{NFSU2_TR(0x447ee3);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B447ee9:{NFSU2_TR(0x447ee9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B447eed:{NFSU2_TR(0x447eed);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B447eef:{NFSU2_TR(0x447eef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B447ef1:{NFSU2_TR(0x447ef1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B447ef4:{NFSU2_TR(0x447ef4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L447efc;}}
}
B447ef6:L447ef6:{c.instructions+=2;NFSU2_TR(0x447ef6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B447ef8:{NFSU2_TR(0x447ef8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447efc:L447efc:{c.instructions+=8;NFSU2_TR(0x447efc);
u8 U[13];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(s32(s8(r1(U+12)))));
}
B447f01:{NFSU2_TR(0x447f01);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B447f04:{NFSU2_TR(0x447f04);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447f08:{NFSU2_TR(0x447f08);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B447f0c:{NFSU2_TR(0x447f0c);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B447f12:{NFSU2_TR(0x447f12);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B447f14:{NFSU2_TR(0x447f14);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447f18:{NFSU2_TR(0x447f18);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B447f1a:L447f1a:{c.instructions+=4;NFSU2_TR(0x447f1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B447f1c:{NFSU2_TR(0x447f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447f1f:{NFSU2_TR(0x447f1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447f23:{NFSU2_TR(0x447f23);
if(r1(R+518)){{goto L447f43;}}
}
B447f25:L447f25:{c.instructions+=6;NFSU2_TR(0x447f25);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B447f29:{NFSU2_TR(0x447f29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447f2a:{NFSU2_TR(0x447f2a);
__builtin_memmove((R+8),(R+0),4);
}
B447f2c:{NFSU2_TR(0x447f2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447f2d:{NFSU2_TR(0x447f2d);
w4(R+4,u32(0x88f298ull));
}
B447f32:{NFSU2_TR(0x447f32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447f37ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B447f37:L447f37:{c.instructions+=3;NFSU2_TR(0x447f37);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B447f3b:{NFSU2_TR(0x447f3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B447f3f:{NFSU2_TR(0x447f3f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447f43:L447f43:{c.instructions+=4;NFSU2_TR(0x447f43);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B447f45:{NFSU2_TR(0x447f45);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447f49:{NFSU2_TR(0x447f49);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B447f4d:{NFSU2_TR(0x447f4d);
if(r1(R+518)){{goto L447f69;}}
}
B447f4f:L447f4f:{c.instructions+=4;NFSU2_TR(0x447f4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B447f53:{NFSU2_TR(0x447f53);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B447f54:{NFSU2_TR(0x447f54);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B447f56:{NFSU2_TR(0x447f56);
if(r1(R+518)){{goto L447f69;}}
}
B447f58:L447f58:{c.instructions+=5;NFSU2_TR(0x447f58);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447f5c:{NFSU2_TR(0x447f5c);
{u32 ea_=u32(u32(7893088u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B447f62:{NFSU2_TR(0x447f62);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B447f64:{NFSU2_TR(0x447f64);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B447f67:{NFSU2_TR(0x447f67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L447fdf;}}
}
B447f69:L447f69:{c.instructions+=2;NFSU2_TR(0x447f69);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B447f6b:{NFSU2_TR(0x447f6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L447f81;}}
}
B447f6d:L447f6d:{c.instructions+=7;NFSU2_TR(0x447f6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447f71:{NFSU2_TR(0x447f71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447f72:{NFSU2_TR(0x447f72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447f73:{NFSU2_TR(0x447f73);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B447f77:{NFSU2_TR(0x447f77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447f78:{NFSU2_TR(0x447f78);
__builtin_memmove((R+4),(R+24),4);
}
B447f7a:{NFSU2_TR(0x447f7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447f7full));
TAIL_STATIC(0x5dd360u,5dd);
}
B447f7f:L447f7f:{c.instructions+=1;NFSU2_TR(0x447f7f);
{goto L447f94;}
}
B447f81:L447f81:{c.instructions+=7;NFSU2_TR(0x447f81);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B447f85:{NFSU2_TR(0x447f85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447f86:{NFSU2_TR(0x447f86);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447f88:{NFSU2_TR(0x447f88);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B447f8c:{NFSU2_TR(0x447f8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447f8d:{NFSU2_TR(0x447f8d);
__builtin_memmove((R+4),(R+24),4);
}
B447f8f:{NFSU2_TR(0x447f8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447f94ull));
TAIL_STATIC(0x5dd490u,5dd);
}
B447f94:L447f94:{c.instructions+=20;NFSU2_TR(0x447f94);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447f98:{NFSU2_TR(0x447f98);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B447f9c:{NFSU2_TR(0x447f9c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B447fa0:{NFSU2_TR(0x447fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B447fa6:{NFSU2_TR(0x447fa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B447faa:{NFSU2_TR(0x447faa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B447fb2:{NFSU2_TR(0x447fb2);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B447fb6:{NFSU2_TR(0x447fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447fb9:{NFSU2_TR(0x447fb9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B447fbd:{NFSU2_TR(0x447fbd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B447fbf:{NFSU2_TR(0x447fbf);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447fc3:{NFSU2_TR(0x447fc3);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B447fc7:{NFSU2_TR(0x447fc7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B447fc9:{NFSU2_TR(0x447fc9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B447fcb:{NFSU2_TR(0x447fcb);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447fce:{NFSU2_TR(0x447fce);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447fd1:{NFSU2_TR(0x447fd1);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B447fd4:{NFSU2_TR(0x447fd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B447fd8:{NFSU2_TR(0x447fd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B447fdc:{NFSU2_TR(0x447fdc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B447fdf:L447fdf:{c.instructions+=4;NFSU2_TR(0x447fdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447fe3:{NFSU2_TR(0x447fe3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B447fe4:{NFSU2_TR(0x447fe4);
__builtin_memmove((R+4),(R+24),4);
}
B447fe6:{NFSU2_TR(0x447fe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x447febull));
TAIL_STATIC(0x5d8a40u,5d8);
}
B447feb:L447feb:{c.instructions+=5;NFSU2_TR(0x447feb);
__builtin_memmove((R+24),(R+0),4);
}
B447fed:{NFSU2_TR(0x447fed);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B447ff1:{NFSU2_TR(0x447ff1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B447ff2:{NFSU2_TR(0x447ff2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B447ff4:{NFSU2_TR(0x447ff4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x447ea5u);}goto L447ea5;}}
}
B447ffa:L447ffa:{c.instructions+=1;NFSU2_TR(0x447ffa);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B447ffe:L447ffe:{c.instructions+=1;NFSU2_TR(0x447ffe);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x448002u,448);
}
XIT:NFSU2_TR_EXIT(0x447,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
