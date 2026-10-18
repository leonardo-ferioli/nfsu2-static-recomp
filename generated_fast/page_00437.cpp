#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_40e(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_434(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_436(u8* __restrict R,Cpu& c);
u32 body_438(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_48e(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_611(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_61d(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_633(u8* __restrict R,Cpu& c);
u32 body_634(u8* __restrict R,Cpu& c);
u32 body_638(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x437,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x437,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_437(u8* __restrict R,Cpu& c);
u32 page_437(Cpu& c){return body_437(c.regs.data(),c);}
__attribute__((noinline)) u32 body_437(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x437004:goto L437004;
case 0x43700a:c.instructions+=1;goto B43700a;
case 0x437010:goto L437010;
case 0x437015:c.instructions+=1;goto B437015;
case 0x43701a:goto L43701a;
case 0x43701c:c.instructions+=1;goto B43701c;
case 0x43701e:goto L43701e;
case 0x437024:c.instructions+=4;goto B437024;
case 0x437026:c.instructions+=3;goto B437026;
case 0x43702b:c.instructions+=2;goto B43702b;
case 0x43702d:c.instructions+=1;goto B43702d;
case 0x437032:goto L437032;
case 0x437035:c.instructions+=11;goto B437035;
case 0x437038:c.instructions+=10;goto B437038;
case 0x43703b:c.instructions+=9;goto B43703b;
case 0x43703e:c.instructions+=8;goto B43703e;
case 0x437041:c.instructions+=7;goto B437041;
case 0x437044:c.instructions+=6;goto B437044;
case 0x43704a:c.instructions+=5;goto B43704a;
case 0x43704d:c.instructions+=4;goto B43704d;
case 0x43704f:c.instructions+=3;goto B43704f;
case 0x437051:c.instructions+=2;goto B437051;
case 0x437058:c.instructions+=1;goto B437058;
case 0x43705a:goto L43705a;
case 0x437060:goto L437060;
case 0x437067:c.instructions+=3;goto B437067;
case 0x437068:c.instructions+=2;goto B437068;
case 0x43706b:c.instructions+=1;goto B43706b;
case 0x437070:goto L437070;
case 0x437072:c.instructions+=1;goto B437072;
case 0x437074:goto L437074;
case 0x437076:c.instructions+=1;goto B437076;
case 0x43707b:goto L43707b;
case 0x43707e:c.instructions+=2;goto B43707e;
case 0x437080:c.instructions+=1;goto B437080;
case 0x437082:goto L437082;
case 0x437086:c.instructions+=6;goto B437086;
case 0x437088:c.instructions+=5;goto B437088;
case 0x43708b:c.instructions+=4;goto B43708b;
case 0x43708e:c.instructions+=3;goto B43708e;
case 0x437095:c.instructions+=2;goto B437095;
case 0x437098:c.instructions+=1;goto B437098;
case 0x43709a:goto L43709a;
case 0x43709c:goto L43709c;
case 0x43709f:c.instructions+=6;goto B43709f;
case 0x4370a1:c.instructions+=5;goto B4370a1;
case 0x4370a4:c.instructions+=4;goto B4370a4;
case 0x4370a7:c.instructions+=3;goto B4370a7;
case 0x4370aa:c.instructions+=2;goto B4370aa;
case 0x4370ac:c.instructions+=1;goto B4370ac;
case 0x4370b2:goto L4370b2;
case 0x4370b5:c.instructions+=3;goto B4370b5;
case 0x4370b6:c.instructions+=2;goto B4370b6;
case 0x4370b8:c.instructions+=1;goto B4370b8;
case 0x4370ba:goto L4370ba;
case 0x4370bd:c.instructions+=3;goto B4370bd;
case 0x4370c0:c.instructions+=2;goto B4370c0;
case 0x4370c2:c.instructions+=1;goto B4370c2;
case 0x4370c4:goto L4370c4;
case 0x4370c7:c.instructions+=4;goto B4370c7;
case 0x4370ca:c.instructions+=3;goto B4370ca;
case 0x4370d0:c.instructions+=2;goto B4370d0;
case 0x4370d6:c.instructions+=1;goto B4370d6;
case 0x4370d8:goto L4370d8;
case 0x4370da:c.instructions+=2;goto B4370da;
case 0x4370dd:c.instructions+=1;goto B4370dd;
case 0x4370e2:goto L4370e2;
case 0x4370e3:c.instructions+=1;goto B4370e3;
case 0x4370e8:goto L4370e8;
case 0x4370eb:c.instructions+=3;goto B4370eb;
case 0x4370ec:c.instructions+=2;goto B4370ec;
case 0x4370ef:c.instructions+=1;goto B4370ef;
case 0x4370f4:goto L4370f4;
case 0x4370f7:c.instructions+=11;goto B4370f7;
case 0x4370fa:c.instructions+=10;goto B4370fa;
case 0x4370fc:c.instructions+=9;goto B4370fc;
case 0x4370ff:c.instructions+=8;goto B4370ff;
case 0x437102:c.instructions+=7;goto B437102;
case 0x437104:c.instructions+=6;goto B437104;
case 0x437107:c.instructions+=5;goto B437107;
case 0x43710a:c.instructions+=4;goto B43710a;
case 0x43710c:c.instructions+=3;goto B43710c;
case 0x43710f:c.instructions+=2;goto B43710f;
case 0x437112:c.instructions+=1;goto B437112;
case 0x437114:goto L437114;
case 0x437117:c.instructions+=2;goto B437117;
case 0x43711e:c.instructions+=1;goto B43711e;
case 0x437123:goto L437123;
case 0x437126:c.instructions+=2;goto B437126;
case 0x437128:c.instructions+=1;goto B437128;
case 0x43712a:goto L43712a;
case 0x43712c:c.instructions+=1;goto B43712c;
case 0x43712e:goto L43712e;
case 0x437130:c.instructions+=11;goto B437130;
case 0x437132:c.instructions+=10;goto B437132;
case 0x437134:c.instructions+=9;goto B437134;
case 0x437137:c.instructions+=8;goto B437137;
case 0x437138:c.instructions+=7;goto B437138;
case 0x437139:c.instructions+=6;goto B437139;
case 0x43713c:c.instructions+=5;goto B43713c;
case 0x43713d:c.instructions+=4;goto B43713d;
case 0x437144:c.instructions+=3;goto B437144;
case 0x437146:c.instructions+=2;goto B437146;
case 0x437147:c.instructions+=1;goto B437147;
case 0x437160:goto L437160;
case 0x437161:c.instructions+=6;goto B437161;
case 0x437163:c.instructions+=5;goto B437163;
case 0x437166:c.instructions+=4;goto B437166;
case 0x437168:c.instructions+=3;goto B437168;
case 0x437169:c.instructions+=2;goto B437169;
case 0x43716c:c.instructions+=1;goto B43716c;
case 0x43716e:goto L43716e;
case 0x437173:c.instructions+=2;goto B437173;
case 0x437175:c.instructions+=1;goto B437175;
case 0x437177:goto L437177;
case 0x43717c:c.instructions+=1;goto B43717c;
case 0x43717e:goto L43717e;
case 0x437183:c.instructions+=1;goto B437183;
case 0x437188:goto L437188;
case 0x43718a:c.instructions+=3;goto B43718a;
case 0x43718c:c.instructions+=2;goto B43718c;
case 0x43718f:c.instructions+=1;goto B43718f;
case 0x437191:goto L437191;
case 0x437196:c.instructions+=2;goto B437196;
case 0x437198:c.instructions+=1;goto B437198;
case 0x43719a:goto L43719a;
case 0x43719f:c.instructions+=1;goto B43719f;
case 0x4371a1:goto L4371a1;
case 0x4371a3:c.instructions+=5;goto B4371a3;
case 0x4371a6:c.instructions+=4;goto B4371a6;
case 0x4371a9:c.instructions+=3;goto B4371a9;
case 0x4371aa:c.instructions+=2;goto B4371aa;
case 0x4371ad:c.instructions+=1;goto B4371ad;
case 0x4371af:goto L4371af;
case 0x4371b2:c.instructions+=12;goto B4371b2;
case 0x4371b3:c.instructions+=11;goto B4371b3;
case 0x4371b6:c.instructions+=10;goto B4371b6;
case 0x4371b7:c.instructions+=9;goto B4371b7;
case 0x4371ba:c.instructions+=8;goto B4371ba;
case 0x4371bb:c.instructions+=7;goto B4371bb;
case 0x4371bc:c.instructions+=6;goto B4371bc;
case 0x4371bd:c.instructions+=5;goto B4371bd;
case 0x4371c2:c.instructions+=4;goto B4371c2;
case 0x4371c3:c.instructions+=3;goto B4371c3;
case 0x4371c4:c.instructions+=2;goto B4371c4;
case 0x4371c9:c.instructions+=1;goto B4371c9;
case 0x4371ce:goto L4371ce;
case 0x4371d0:c.instructions+=2;goto B4371d0;
case 0x4371d2:c.instructions+=1;goto B4371d2;
case 0x4371d4:goto L4371d4;
case 0x4371d7:c.instructions+=4;goto B4371d7;
case 0x4371d8:c.instructions+=3;goto B4371d8;
case 0x4371d9:c.instructions+=2;goto B4371d9;
case 0x4371de:c.instructions+=1;goto B4371de;
case 0x4371e3:goto L4371e3;
case 0x4371e5:c.instructions+=1;goto B4371e5;
case 0x4371e7:goto L4371e7;
case 0x4371eb:goto L4371eb;
case 0x4371ee:c.instructions+=3;goto B4371ee;
case 0x4371ef:c.instructions+=2;goto B4371ef;
case 0x4371f0:c.instructions+=1;goto B4371f0;
case 0x437200:goto L437200;
case 0x437201:c.instructions+=6;goto B437201;
case 0x437203:c.instructions+=5;goto B437203;
case 0x437206:c.instructions+=4;goto B437206;
case 0x437208:c.instructions+=3;goto B437208;
case 0x437209:c.instructions+=2;goto B437209;
case 0x43720c:c.instructions+=1;goto B43720c;
case 0x43720e:goto L43720e;
case 0x437213:c.instructions+=2;goto B437213;
case 0x437215:c.instructions+=1;goto B437215;
case 0x437217:goto L437217;
case 0x43721c:c.instructions+=1;goto B43721c;
case 0x43721e:goto L43721e;
case 0x437220:c.instructions+=5;goto B437220;
case 0x437223:c.instructions+=4;goto B437223;
case 0x437226:c.instructions+=3;goto B437226;
case 0x437227:c.instructions+=2;goto B437227;
case 0x43722a:c.instructions+=1;goto B43722a;
case 0x43722c:goto L43722c;
case 0x43722f:c.instructions+=12;goto B43722f;
case 0x437230:c.instructions+=11;goto B437230;
case 0x437233:c.instructions+=10;goto B437233;
case 0x437234:c.instructions+=9;goto B437234;
case 0x437237:c.instructions+=8;goto B437237;
case 0x437238:c.instructions+=7;goto B437238;
case 0x437239:c.instructions+=6;goto B437239;
case 0x43723a:c.instructions+=5;goto B43723a;
case 0x43723f:c.instructions+=4;goto B43723f;
case 0x437240:c.instructions+=3;goto B437240;
case 0x437242:c.instructions+=2;goto B437242;
case 0x437247:c.instructions+=1;goto B437247;
case 0x43724c:goto L43724c;
case 0x43724e:c.instructions+=2;goto B43724e;
case 0x437250:c.instructions+=1;goto B437250;
case 0x437252:goto L437252;
case 0x437255:c.instructions+=4;goto B437255;
case 0x437256:c.instructions+=3;goto B437256;
case 0x437257:c.instructions+=2;goto B437257;
case 0x43725c:c.instructions+=1;goto B43725c;
case 0x437261:goto L437261;
case 0x437263:c.instructions+=1;goto B437263;
case 0x437265:goto L437265;
case 0x437269:goto L437269;
case 0x43726c:c.instructions+=3;goto B43726c;
case 0x43726d:c.instructions+=2;goto B43726d;
case 0x43726e:c.instructions+=1;goto B43726e;
case 0x437270:goto L437270;
case 0x437271:c.instructions+=20;goto B437271;
case 0x437273:c.instructions+=19;goto B437273;
case 0x437276:c.instructions+=18;goto B437276;
case 0x437279:c.instructions+=17;goto B437279;
case 0x43727a:c.instructions+=16;goto B43727a;
case 0x43727b:c.instructions+=15;goto B43727b;
case 0x43727d:c.instructions+=14;goto B43727d;
case 0x437280:c.instructions+=13;goto B437280;
case 0x437281:c.instructions+=12;goto B437281;
case 0x437286:c.instructions+=11;goto B437286;
case 0x437289:c.instructions+=10;goto B437289;
case 0x43728a:c.instructions+=9;goto B43728a;
case 0x43728d:c.instructions+=8;goto B43728d;
case 0x43728e:c.instructions+=7;goto B43728e;
case 0x437291:c.instructions+=6;goto B437291;
case 0x437292:c.instructions+=5;goto B437292;
case 0x437294:c.instructions+=4;goto B437294;
case 0x437295:c.instructions+=3;goto B437295;
case 0x437297:c.instructions+=2;goto B437297;
case 0x43729c:c.instructions+=1;goto B43729c;
case 0x4372a1:goto L4372a1;
case 0x4372a4:c.instructions+=1;goto B4372a4;
case 0x4372aa:goto L4372aa;
case 0x4372b0:c.instructions+=12;goto B4372b0;
case 0x4372b3:c.instructions+=11;goto B4372b3;
case 0x4372b6:c.instructions+=10;goto B4372b6;
case 0x4372b9:c.instructions+=9;goto B4372b9;
case 0x4372bc:c.instructions+=8;goto B4372bc;
case 0x4372bf:c.instructions+=7;goto B4372bf;
case 0x4372c4:c.instructions+=6;goto B4372c4;
case 0x4372c6:c.instructions+=5;goto B4372c6;
case 0x4372c8:c.instructions+=4;goto B4372c8;
case 0x4372cc:c.instructions+=3;goto B4372cc;
case 0x4372d0:c.instructions+=2;goto B4372d0;
case 0x4372d4:c.instructions+=1;goto B4372d4;
case 0x4372d6:goto L4372d6;
case 0x4372db:c.instructions+=2;goto B4372db;
case 0x4372dd:c.instructions+=1;goto B4372dd;
case 0x4372df:goto L4372df;
case 0x4372e1:c.instructions+=2;goto B4372e1;
case 0x4372e2:c.instructions+=1;goto B4372e2;
case 0x4372e7:goto L4372e7;
case 0x4372e9:goto L4372e9;
case 0x4372ee:c.instructions+=3;goto B4372ee;
case 0x4372f0:c.instructions+=2;goto B4372f0;
case 0x4372f5:c.instructions+=1;goto B4372f5;
case 0x4372f7:goto L4372f7;
case 0x4372fc:goto L4372fc;
case 0x4372fe:c.instructions+=2;goto B4372fe;
case 0x4372ff:c.instructions+=1;goto B4372ff;
case 0x437304:goto L437304;
case 0x437307:c.instructions+=2;goto B437307;
case 0x437309:c.instructions+=1;goto B437309;
case 0x43730b:goto L43730b;
case 0x43730e:c.instructions+=4;goto B43730e;
case 0x437312:c.instructions+=3;goto B437312;
case 0x437315:c.instructions+=2;goto B437315;
case 0x437319:c.instructions+=1;goto B437319;
case 0x43731b:goto L43731b;
case 0x43731d:c.instructions+=7;goto B43731d;
case 0x437322:c.instructions+=6;goto B437322;
case 0x437326:c.instructions+=5;goto B437326;
case 0x43732a:c.instructions+=4;goto B43732a;
case 0x43732b:c.instructions+=3;goto B43732b;
case 0x43732c:c.instructions+=2;goto B43732c;
case 0x43732d:c.instructions+=1;goto B43732d;
case 0x437332:goto L437332;
case 0x437337:c.instructions+=3;goto B437337;
case 0x43733a:c.instructions+=2;goto B43733a;
case 0x43733c:c.instructions+=1;goto B43733c;
case 0x43733e:goto L43733e;
case 0x437345:c.instructions+=1;goto B437345;
case 0x437347:goto L437347;
case 0x43734e:goto L43734e;
case 0x437352:c.instructions+=4;goto B437352;
case 0x437353:c.instructions+=3;goto B437353;
case 0x437355:c.instructions+=2;goto B437355;
case 0x43735a:c.instructions+=1;goto B43735a;
case 0x43735f:goto L43735f;
case 0x437361:c.instructions+=8;goto B437361;
case 0x437363:c.instructions+=7;goto B437363;
case 0x437365:c.instructions+=6;goto B437365;
case 0x437366:c.instructions+=5;goto B437366;
case 0x437369:c.instructions+=4;goto B437369;
case 0x43736a:c.instructions+=3;goto B43736a;
case 0x43736c:c.instructions+=2;goto B43736c;
case 0x43736d:c.instructions+=1;goto B43736d;
case 0x437370:goto L437370;
case 0x437371:c.instructions+=4;goto B437371;
case 0x437373:c.instructions+=3;goto B437373;
case 0x437376:c.instructions+=2;goto B437376;
case 0x437378:c.instructions+=1;goto B437378;
case 0x43737a:goto L43737a;
case 0x43737d:c.instructions+=4;goto B43737d;
case 0x43737e:c.instructions+=3;goto B43737e;
case 0x43737f:c.instructions+=2;goto B43737f;
case 0x437384:c.instructions+=1;goto B437384;
case 0x437389:goto L437389;
case 0x43738b:c.instructions+=1;goto B43738b;
case 0x43738d:goto L43738d;
case 0x437391:goto L437391;
case 0x437394:c.instructions+=2;goto B437394;
case 0x437395:c.instructions+=1;goto B437395;
case 0x4373a0:goto L4373a0;
case 0x4373a1:c.instructions+=7;goto B4373a1;
case 0x4373a2:c.instructions+=6;goto B4373a2;
case 0x4373a3:c.instructions+=5;goto B4373a3;
case 0x4373a5:c.instructions+=4;goto B4373a5;
case 0x4373a8:c.instructions+=3;goto B4373a8;
case 0x4373aa:c.instructions+=2;goto B4373aa;
case 0x4373ac:c.instructions+=1;goto B4373ac;
case 0x4373ae:goto L4373ae;
case 0x4373b1:c.instructions+=3;goto B4373b1;
case 0x4373b3:c.instructions+=2;goto B4373b3;
case 0x4373b6:c.instructions+=1;goto B4373b6;
case 0x4373b8:goto L4373b8;
case 0x4373b9:c.instructions+=1;goto B4373b9;
case 0x4373be:goto L4373be;
case 0x4373c1:c.instructions+=1;goto B4373c1;
case 0x4373c4:goto L4373c4;
case 0x4373c7:c.instructions+=3;goto B4373c7;
case 0x4373c9:c.instructions+=2;goto B4373c9;
case 0x4373cc:c.instructions+=1;goto B4373cc;
case 0x4373ce:goto L4373ce;
case 0x4373d0:c.instructions+=2;goto B4373d0;
case 0x4373d1:c.instructions+=1;goto B4373d1;
case 0x4373d7:goto L4373d7;
case 0x4373da:c.instructions+=1;goto B4373da;
case 0x4373dd:goto L4373dd;
case 0x4373e0:c.instructions+=2;goto B4373e0;
case 0x4373e3:c.instructions+=1;goto B4373e3;
case 0x4373e8:goto L4373e8;
case 0x4373eb:c.instructions+=2;goto B4373eb;
case 0x4373ed:c.instructions+=1;goto B4373ed;
case 0x4373ef:goto L4373ef;
case 0x4373f1:c.instructions+=1;goto B4373f1;
case 0x4373f6:goto L4373f6;
case 0x4373fc:c.instructions+=4;goto B4373fc;
case 0x437401:c.instructions+=3;goto B437401;
case 0x437402:c.instructions+=2;goto B437402;
case 0x437403:c.instructions+=1;goto B437403;
case 0x437408:goto L437408;
case 0x43740b:goto L43740b;
case 0x43740e:goto L43740e;
case 0x437411:c.instructions+=2;goto B437411;
case 0x437413:c.instructions+=1;goto B437413;
case 0x437415:goto L437415;
case 0x437417:c.instructions+=1;goto B437417;
case 0x43741c:goto L43741c;
case 0x437422:c.instructions+=3;goto B437422;
case 0x437423:c.instructions+=2;goto B437423;
case 0x437424:c.instructions+=1;goto B437424;
case 0x437429:goto L437429;
case 0x43742c:c.instructions+=1;goto B43742c;
case 0x43742f:goto L43742f;
case 0x437432:c.instructions+=2;goto B437432;
case 0x437434:c.instructions+=1;goto B437434;
case 0x437436:goto L437436;
case 0x437437:c.instructions+=1;goto B437437;
case 0x43743c:goto L43743c;
case 0x43743f:goto L43743f;
case 0x437440:c.instructions+=3;goto B437440;
case 0x437441:c.instructions+=2;goto B437441;
case 0x437442:c.instructions+=1;goto B437442;
case 0x437450:goto L437450;
case 0x437452:c.instructions+=21;goto B437452;
case 0x437457:c.instructions+=20;goto B437457;
case 0x43745d:c.instructions+=19;goto B43745d;
case 0x43745e:c.instructions+=18;goto B43745e;
case 0x437465:c.instructions+=17;goto B437465;
case 0x437466:c.instructions+=16;goto B437466;
case 0x437467:c.instructions+=15;goto B437467;
case 0x437468:c.instructions+=14;goto B437468;
case 0x43746a:c.instructions+=13;goto B43746a;
case 0x43746d:c.instructions+=12;goto B43746d;
case 0x43746e:c.instructions+=11;goto B43746e;
case 0x437475:c.instructions+=10;goto B437475;
case 0x437476:c.instructions+=9;goto B437476;
case 0x43747a:c.instructions+=8;goto B43747a;
case 0x43747c:c.instructions+=7;goto B43747c;
case 0x43747f:c.instructions+=6;goto B43747f;
case 0x437483:c.instructions+=5;goto B437483;
case 0x437487:c.instructions+=4;goto B437487;
case 0x43748a:c.instructions+=3;goto B43748a;
case 0x43748c:c.instructions+=2;goto B43748c;
case 0x437494:c.instructions+=1;goto B437494;
case 0x437496:goto L437496;
case 0x437499:c.instructions+=7;goto B437499;
case 0x43749b:c.instructions+=6;goto B43749b;
case 0x43749e:c.instructions+=5;goto B43749e;
case 0x4374a1:c.instructions+=4;goto B4374a1;
case 0x4374a3:c.instructions+=3;goto B4374a3;
case 0x4374a4:c.instructions+=2;goto B4374a4;
case 0x4374a7:c.instructions+=1;goto B4374a7;
case 0x4374ac:goto L4374ac;
case 0x4374af:c.instructions+=1;goto B4374af;
case 0x4374b4:goto L4374b4;
case 0x4374b6:c.instructions+=1;goto B4374b6;
case 0x4374b8:goto L4374b8;
case 0x4374bb:c.instructions+=1;goto B4374bb;
case 0x4374bd:goto L4374bd;
case 0x4374bf:goto L4374bf;
case 0x4374c0:c.instructions+=3;goto B4374c0;
case 0x4374c5:c.instructions+=2;goto B4374c5;
case 0x4374c7:c.instructions+=1;goto B4374c7;
case 0x4374cc:goto L4374cc;
case 0x4374ce:c.instructions+=1;goto B4374ce;
case 0x4374d0:goto L4374d0;
case 0x4374d4:c.instructions+=2;goto B4374d4;
case 0x4374d7:c.instructions+=1;goto B4374d7;
case 0x4374dc:goto L4374dc;
case 0x4374de:goto L4374de;
case 0x4374e2:c.instructions+=8;goto B4374e2;
case 0x4374e3:c.instructions+=7;goto B4374e3;
case 0x4374e4:c.instructions+=6;goto B4374e4;
case 0x4374e6:c.instructions+=5;goto B4374e6;
case 0x4374e7:c.instructions+=4;goto B4374e7;
case 0x4374e8:c.instructions+=3;goto B4374e8;
case 0x4374ef:c.instructions+=2;goto B4374ef;
case 0x4374f2:c.instructions+=1;goto B4374f2;
case 0x437500:goto L437500;
case 0x437502:c.instructions+=15;goto B437502;
case 0x437507:c.instructions+=14;goto B437507;
case 0x43750d:c.instructions+=13;goto B43750d;
case 0x43750e:c.instructions+=12;goto B43750e;
case 0x437515:c.instructions+=11;goto B437515;
case 0x437516:c.instructions+=10;goto B437516;
case 0x437517:c.instructions+=9;goto B437517;
case 0x437519:c.instructions+=8;goto B437519;
case 0x43751a:c.instructions+=7;goto B43751a;
case 0x43751e:c.instructions+=6;goto B43751e;
case 0x437524:c.instructions+=5;goto B437524;
case 0x437527:c.instructions+=4;goto B437527;
case 0x43752a:c.instructions+=3;goto B43752a;
case 0x43752c:c.instructions+=2;goto B43752c;
case 0x437534:c.instructions+=1;goto B437534;
case 0x437536:goto L437536;
case 0x437537:goto L437537;
case 0x43753a:c.instructions+=7;goto B43753a;
case 0x43753c:c.instructions+=6;goto B43753c;
case 0x43753f:c.instructions+=5;goto B43753f;
case 0x437542:c.instructions+=4;goto B437542;
case 0x437544:c.instructions+=3;goto B437544;
case 0x437545:c.instructions+=2;goto B437545;
case 0x437548:c.instructions+=1;goto B437548;
case 0x43754d:goto L43754d;
case 0x43754f:c.instructions+=3;goto B43754f;
case 0x437552:c.instructions+=2;goto B437552;
case 0x437554:c.instructions+=1;goto B437554;
case 0x437557:goto L437557;
case 0x437559:c.instructions+=3;goto B437559;
case 0x43755b:c.instructions+=2;goto B43755b;
case 0x43755d:c.instructions+=1;goto B43755d;
case 0x43755f:goto L43755f;
case 0x437561:c.instructions+=1;goto B437561;
case 0x437563:goto L437563;
case 0x437564:goto L437564;
case 0x437567:c.instructions+=2;goto B437567;
case 0x437569:c.instructions+=1;goto B437569;
case 0x43756b:goto L43756b;
case 0x43756d:c.instructions+=2;goto B43756d;
case 0x43756f:c.instructions+=1;goto B43756f;
case 0x437571:goto L437571;
case 0x437573:c.instructions+=3;goto B437573;
case 0x437575:c.instructions+=2;goto B437575;
case 0x43757d:c.instructions+=1;goto B43757d;
case 0x43757f:goto L43757f;
case 0x437580:goto L437580;
case 0x437582:c.instructions+=5;goto B437582;
case 0x437585:c.instructions+=4;goto B437585;
case 0x437587:c.instructions+=3;goto B437587;
case 0x437588:c.instructions+=2;goto B437588;
case 0x43758b:c.instructions+=1;goto B43758b;
case 0x437590:goto L437590;
case 0x437592:c.instructions+=3;goto B437592;
case 0x437595:c.instructions+=2;goto B437595;
case 0x437597:c.instructions+=1;goto B437597;
case 0x437599:goto L437599;
case 0x43759d:c.instructions+=5;goto B43759d;
case 0x43759e:c.instructions+=4;goto B43759e;
case 0x43759f:c.instructions+=3;goto B43759f;
case 0x4375a6:c.instructions+=2;goto B4375a6;
case 0x4375a9:c.instructions+=1;goto B4375a9;
case 0x4375b0:goto L4375b0;
case 0x4375b2:c.instructions+=15;goto B4375b2;
case 0x4375b7:c.instructions+=14;goto B4375b7;
case 0x4375bd:c.instructions+=13;goto B4375bd;
case 0x4375be:c.instructions+=12;goto B4375be;
case 0x4375c5:c.instructions+=11;goto B4375c5;
case 0x4375c6:c.instructions+=10;goto B4375c6;
case 0x4375c7:c.instructions+=9;goto B4375c7;
case 0x4375c8:c.instructions+=8;goto B4375c8;
case 0x4375ca:c.instructions+=7;goto B4375ca;
case 0x4375ce:c.instructions+=6;goto B4375ce;
case 0x4375d4:c.instructions+=5;goto B4375d4;
case 0x4375d7:c.instructions+=4;goto B4375d7;
case 0x4375da:c.instructions+=3;goto B4375da;
case 0x4375dc:c.instructions+=2;goto B4375dc;
case 0x4375e4:c.instructions+=1;goto B4375e4;
case 0x4375e6:goto L4375e6;
case 0x4375e9:c.instructions+=6;goto B4375e9;
case 0x4375eb:c.instructions+=5;goto B4375eb;
case 0x4375ee:c.instructions+=4;goto B4375ee;
case 0x4375f0:c.instructions+=3;goto B4375f0;
case 0x4375f1:c.instructions+=2;goto B4375f1;
case 0x4375f4:c.instructions+=1;goto B4375f4;
case 0x4375f9:goto L4375f9;
case 0x4375fb:c.instructions+=3;goto B4375fb;
case 0x4375fe:c.instructions+=2;goto B4375fe;
case 0x437600:c.instructions+=1;goto B437600;
case 0x437602:goto L437602;
case 0x437604:c.instructions+=3;goto B437604;
case 0x437606:c.instructions+=2;goto B437606;
case 0x43760e:c.instructions+=1;goto B43760e;
case 0x437610:goto L437610;
case 0x437612:c.instructions+=5;goto B437612;
case 0x437615:c.instructions+=4;goto B437615;
case 0x437617:c.instructions+=3;goto B437617;
case 0x437618:c.instructions+=2;goto B437618;
case 0x43761b:c.instructions+=1;goto B43761b;
case 0x437620:goto L437620;
case 0x437622:c.instructions+=3;goto B437622;
case 0x437625:c.instructions+=2;goto B437625;
case 0x437627:c.instructions+=1;goto B437627;
case 0x437629:goto L437629;
case 0x43762d:c.instructions+=5;goto B43762d;
case 0x43762e:c.instructions+=4;goto B43762e;
case 0x43762f:c.instructions+=3;goto B43762f;
case 0x437636:c.instructions+=2;goto B437636;
case 0x437639:c.instructions+=1;goto B437639;
case 0x437640:goto L437640;
case 0x437641:c.instructions+=2;goto B437641;
case 0x437643:c.instructions+=1;goto B437643;
case 0x437648:goto L437648;
case 0x43764d:c.instructions+=1;goto B43764d;
case 0x43764f:goto L43764f;
case 0x437650:c.instructions+=1;goto B437650;
case 0x437655:goto L437655;
case 0x437658:goto L437658;
case 0x43765a:c.instructions+=2;goto B43765a;
case 0x43765b:c.instructions+=1;goto B43765b;
case 0x437660:goto L437660;
case 0x437661:c.instructions+=4;goto B437661;
case 0x437662:c.instructions+=3;goto B437662;
case 0x437668:c.instructions+=2;goto B437668;
case 0x43766d:c.instructions+=1;goto B43766d;
case 0x437672:goto L437672;
case 0x437674:c.instructions+=2;goto B437674;
case 0x437676:c.instructions+=1;goto B437676;
case 0x437678:goto L437678;
case 0x437679:c.instructions+=1;goto B437679;
case 0x437680:goto L437680;
case 0x437683:c.instructions+=3;goto B437683;
case 0x437685:c.instructions+=2;goto B437685;
case 0x437687:c.instructions+=1;goto B437687;
case 0x43768c:goto L43768c;
case 0x43768f:c.instructions+=2;goto B43768f;
case 0x437690:c.instructions+=1;goto B437690;
case 0x437695:goto L437695;
case 0x437698:c.instructions+=3;goto B437698;
case 0x43769b:c.instructions+=2;goto B43769b;
case 0x43769d:c.instructions+=1;goto B43769d;
case 0x43769f:goto L43769f;
case 0x4376a2:c.instructions+=4;goto B4376a2;
case 0x4376a8:c.instructions+=3;goto B4376a8;
case 0x4376a9:c.instructions+=2;goto B4376a9;
case 0x4376ae:c.instructions+=1;goto B4376ae;
case 0x4376b3:goto L4376b3;
case 0x4376b5:goto L4376b5;
case 0x4376b8:c.instructions+=3;goto B4376b8;
case 0x4376be:c.instructions+=2;goto B4376be;
case 0x4376bf:c.instructions+=1;goto B4376bf;
case 0x4376c4:goto L4376c4;
case 0x4376c7:goto L4376c7;
case 0x4376c9:c.instructions+=5;goto B4376c9;
case 0x4376cc:c.instructions+=4;goto B4376cc;
case 0x4376ce:c.instructions+=3;goto B4376ce;
case 0x4376cf:c.instructions+=2;goto B4376cf;
case 0x4376d2:c.instructions+=1;goto B4376d2;
case 0x4376d7:goto L4376d7;
case 0x4376da:c.instructions+=3;goto B4376da;
case 0x4376dc:c.instructions+=2;goto B4376dc;
case 0x4376de:c.instructions+=1;goto B4376de;
case 0x4376e0:goto L4376e0;
case 0x4376e1:goto L4376e1;
case 0x4376e2:c.instructions+=2;goto B4376e2;
case 0x4376e3:c.instructions+=1;goto B4376e3;
case 0x4376f0:goto L4376f0;
case 0x4376f5:c.instructions+=2;goto B4376f5;
case 0x4376f7:c.instructions+=1;goto B4376f7;
case 0x4376f9:goto L4376f9;
case 0x4376fb:c.instructions+=1;goto B4376fb;
case 0x4376fe:goto L4376fe;
case 0x437703:goto L437703;
case 0x437708:c.instructions+=2;goto B437708;
case 0x43770a:c.instructions+=1;goto B43770a;
case 0x43770c:goto L43770c;
case 0x437712:c.instructions+=2;goto B437712;
case 0x437714:c.instructions+=1;goto B437714;
case 0x437719:goto L437719;
case 0x43771b:c.instructions+=1;goto B43771b;
case 0x437720:goto L437720;
case 0x437724:c.instructions+=3;goto B437724;
case 0x437725:c.instructions+=2;goto B437725;
case 0x437726:c.instructions+=1;goto B437726;
case 0x43772b:goto L43772b;
case 0x43772d:c.instructions+=2;goto B43772d;
case 0x43772f:c.instructions+=1;goto B43772f;
case 0x437731:goto L437731;
case 0x437735:c.instructions+=3;goto B437735;
case 0x437736:c.instructions+=2;goto B437736;
case 0x437738:c.instructions+=1;goto B437738;
case 0x43773d:goto L43773d;
case 0x43773f:c.instructions+=1;goto B43773f;
case 0x437741:goto L437741;
case 0x437744:c.instructions+=4;goto B437744;
case 0x437747:c.instructions+=3;goto B437747;
case 0x437749:c.instructions+=2;goto B437749;
case 0x43774c:c.instructions+=1;goto B43774c;
case 0x43774e:goto L43774e;
case 0x437750:c.instructions+=2;goto B437750;
case 0x437751:c.instructions+=1;goto B437751;
case 0x437754:goto L437754;
case 0x437756:c.instructions+=2;goto B437756;
case 0x437757:c.instructions+=1;goto B437757;
case 0x437760:goto L437760;
case 0x437761:c.instructions+=5;goto B437761;
case 0x437764:c.instructions+=4;goto B437764;
case 0x43776a:c.instructions+=3;goto B43776a;
case 0x43776c:c.instructions+=2;goto B43776c;
case 0x43776e:c.instructions+=1;goto B43776e;
case 0x437770:goto L437770;
case 0x437772:c.instructions+=5;goto B437772;
case 0x437775:c.instructions+=4;goto B437775;
case 0x437777:c.instructions+=3;goto B437777;
case 0x437778:c.instructions+=2;goto B437778;
case 0x43777b:c.instructions+=1;goto B43777b;
case 0x437780:goto L437780;
case 0x437782:c.instructions+=3;goto B437782;
case 0x437785:c.instructions+=2;goto B437785;
case 0x437787:c.instructions+=1;goto B437787;
case 0x437789:goto L437789;
case 0x43778a:c.instructions+=1;goto B43778a;
case 0x437790:goto L437790;
case 0x437792:c.instructions+=1;goto B437792;
case 0x437797:goto L437797;
case 0x43779a:c.instructions+=2;goto B43779a;
case 0x43779c:c.instructions+=1;goto B43779c;
case 0x43779e:goto L43779e;
case 0x4377a2:c.instructions+=18;goto B4377a2;
case 0x4377a5:c.instructions+=17;goto B4377a5;
case 0x4377ab:c.instructions+=16;goto B4377ab;
case 0x4377b2:c.instructions+=15;goto B4377b2;
case 0x4377b5:c.instructions+=14;goto B4377b5;
case 0x4377b7:c.instructions+=13;goto B4377b7;
case 0x4377ba:c.instructions+=12;goto B4377ba;
case 0x4377be:c.instructions+=11;goto B4377be;
case 0x4377c1:c.instructions+=10;goto B4377c1;
case 0x4377c4:c.instructions+=9;goto B4377c4;
case 0x4377c7:c.instructions+=8;goto B4377c7;
case 0x4377ca:c.instructions+=7;goto B4377ca;
case 0x4377d0:c.instructions+=6;goto B4377d0;
case 0x4377d3:c.instructions+=5;goto B4377d3;
case 0x4377d5:c.instructions+=4;goto B4377d5;
case 0x4377db:c.instructions+=3;goto B4377db;
case 0x4377de:c.instructions+=2;goto B4377de;
case 0x4377e4:c.instructions+=1;goto B4377e4;
case 0x4377e5:goto L4377e5;
case 0x4377e7:c.instructions+=1;goto B4377e7;
case 0x4377f0:goto L4377f0;
case 0x4377f1:c.instructions+=3;goto B4377f1;
case 0x4377f5:c.instructions+=2;goto B4377f5;
case 0x4377fb:c.instructions+=1;goto B4377fb;
case 0x4377fd:goto L4377fd;
case 0x437800:c.instructions+=8;goto B437800;
case 0x437801:c.instructions+=7;goto B437801;
case 0x437802:c.instructions+=6;goto B437802;
case 0x437803:c.instructions+=5;goto B437803;
case 0x437806:c.instructions+=4;goto B437806;
case 0x43780a:c.instructions+=3;goto B43780a;
case 0x43780c:c.instructions+=2;goto B43780c;
case 0x43780e:c.instructions+=1;goto B43780e;
case 0x437810:goto L437810;
case 0x437812:c.instructions+=2;goto B437812;
case 0x437815:c.instructions+=1;goto B437815;
case 0x437817:goto L437817;
case 0x43781c:c.instructions+=1;goto B43781c;
case 0x43781e:goto L43781e;
case 0x437821:c.instructions+=1;goto B437821;
case 0x437823:goto L437823;
case 0x437825:c.instructions+=1;goto B437825;
case 0x437827:goto L437827;
case 0x43782a:c.instructions+=8;goto B43782a;
case 0x43782d:c.instructions+=7;goto B43782d;
case 0x437830:c.instructions+=6;goto B437830;
case 0x437832:c.instructions+=5;goto B437832;
case 0x437836:c.instructions+=4;goto B437836;
case 0x437837:c.instructions+=3;goto B437837;
case 0x437838:c.instructions+=2;goto B437838;
case 0x43783a:c.instructions+=1;goto B43783a;
case 0x43783f:goto L43783f;
case 0x437841:goto L437841;
case 0x437842:c.instructions+=2;goto B437842;
case 0x437843:c.instructions+=1;goto B437843;
case 0x437848:goto L437848;
case 0x43784b:c.instructions+=1;goto B43784b;
case 0x43784d:goto L43784d;
case 0x437850:c.instructions+=3;goto B437850;
case 0x437854:c.instructions+=2;goto B437854;
case 0x437856:c.instructions+=1;goto B437856;
case 0x437858:goto L437858;
case 0x437859:c.instructions+=5;goto B437859;
case 0x43785a:c.instructions+=4;goto B43785a;
case 0x43785b:c.instructions+=3;goto B43785b;
case 0x437860:c.instructions+=2;goto B437860;
case 0x437861:c.instructions+=1;goto B437861;
case 0x437862:goto L437862;
case 0x437864:c.instructions+=2;goto B437864;
case 0x437865:c.instructions+=1;goto B437865;
case 0x437870:goto L437870;
case 0x437872:c.instructions+=17;goto B437872;
case 0x437877:c.instructions+=16;goto B437877;
case 0x43787d:c.instructions+=15;goto B43787d;
case 0x43787e:c.instructions+=14;goto B43787e;
case 0x437885:c.instructions+=13;goto B437885;
case 0x437886:c.instructions+=12;goto B437886;
case 0x437887:c.instructions+=11;goto B437887;
case 0x437889:c.instructions+=10;goto B437889;
case 0x43788d:c.instructions+=9;goto B43788d;
case 0x437893:c.instructions+=8;goto B437893;
case 0x437898:c.instructions+=7;goto B437898;
case 0x43789a:c.instructions+=6;goto B43789a;
case 0x43789c:c.instructions+=5;goto B43789c;
case 0x4378a2:c.instructions+=4;goto B4378a2;
case 0x4378a3:c.instructions+=3;goto B4378a3;
case 0x4378ab:c.instructions+=2;goto B4378ab;
case 0x4378b5:c.instructions+=1;goto B4378b5;
case 0x4378ba:goto L4378ba;
case 0x4378bd:c.instructions+=2;goto B4378bd;
case 0x4378c2:c.instructions+=1;goto B4378c2;
case 0x4378c7:goto L4378c7;
case 0x4378ca:c.instructions+=2;goto B4378ca;
case 0x4378cf:c.instructions+=1;goto B4378cf;
case 0x4378d4:goto L4378d4;
case 0x4378d7:c.instructions+=4;goto B4378d7;
case 0x4378da:c.instructions+=3;goto B4378da;
case 0x4378dc:c.instructions+=2;goto B4378dc;
case 0x4378e4:c.instructions+=1;goto B4378e4;
case 0x4378e6:goto L4378e6;
case 0x4378e8:c.instructions+=5;goto B4378e8;
case 0x4378eb:c.instructions+=4;goto B4378eb;
case 0x4378ed:c.instructions+=3;goto B4378ed;
case 0x4378ee:c.instructions+=2;goto B4378ee;
case 0x4378f1:c.instructions+=1;goto B4378f1;
case 0x4378f6:goto L4378f6;
case 0x4378f8:c.instructions+=3;goto B4378f8;
case 0x4378fb:c.instructions+=2;goto B4378fb;
case 0x4378fd:c.instructions+=1;goto B4378fd;
case 0x4378ff:goto L4378ff;
case 0x437903:c.instructions+=4;goto B437903;
case 0x437904:c.instructions+=3;goto B437904;
case 0x43790b:c.instructions+=2;goto B43790b;
case 0x43790e:c.instructions+=1;goto B43790e;
case 0x437910:goto L437910;
case 0x437911:c.instructions+=5;goto B437911;
case 0x437912:c.instructions+=4;goto B437912;
case 0x437914:c.instructions+=3;goto B437914;
case 0x437917:c.instructions+=2;goto B437917;
case 0x437919:c.instructions+=1;goto B437919;
case 0x43791f:goto L43791f;
case 0x437925:c.instructions+=7;goto B437925;
case 0x437928:c.instructions+=6;goto B437928;
case 0x437929:c.instructions+=5;goto B437929;
case 0x43792f:c.instructions+=4;goto B43792f;
case 0x437931:c.instructions+=3;goto B437931;
case 0x437933:c.instructions+=2;goto B437933;
case 0x437937:c.instructions+=1;goto B437937;
case 0x43793c:goto L43793c;
case 0x43793e:c.instructions+=1;goto B43793e;
case 0x437940:goto L437940;
case 0x437943:c.instructions+=4;goto B437943;
case 0x437945:c.instructions+=3;goto B437945;
case 0x437948:c.instructions+=2;goto B437948;
case 0x43794a:c.instructions+=1;goto B43794a;
case 0x43794c:goto L43794c;
case 0x437952:c.instructions+=15;goto B437952;
case 0x437955:c.instructions+=14;goto B437955;
case 0x43795b:c.instructions+=13;goto B43795b;
case 0x43795e:c.instructions+=12;goto B43795e;
case 0x437961:c.instructions+=11;goto B437961;
case 0x437963:c.instructions+=10;goto B437963;
case 0x437966:c.instructions+=9;goto B437966;
case 0x437969:c.instructions+=8;goto B437969;
case 0x43796d:c.instructions+=7;goto B43796d;
case 0x437971:c.instructions+=6;goto B437971;
case 0x437974:c.instructions+=5;goto B437974;
case 0x43797a:c.instructions+=4;goto B43797a;
case 0x43797b:c.instructions+=3;goto B43797b;
case 0x43797c:c.instructions+=2;goto B43797c;
case 0x43797e:c.instructions+=1;goto B43797e;
case 0x437983:goto L437983;
case 0x437988:c.instructions+=2;goto B437988;
case 0x43798a:c.instructions+=1;goto B43798a;
case 0x43798c:goto L43798c;
case 0x43798f:c.instructions+=6;goto B43798f;
case 0x437991:c.instructions+=5;goto B437991;
case 0x437997:c.instructions+=4;goto B437997;
case 0x43799a:c.instructions+=3;goto B43799a;
case 0x4379a0:c.instructions+=2;goto B4379a0;
case 0x4379a3:c.instructions+=1;goto B4379a3;
case 0x4379a8:goto L4379a8;
case 0x4379a9:c.instructions+=5;goto B4379a9;
case 0x4379ad:c.instructions+=4;goto B4379ad;
case 0x4379af:c.instructions+=3;goto B4379af;
case 0x4379b0:c.instructions+=2;goto B4379b0;
case 0x4379b1:c.instructions+=1;goto B4379b1;
case 0x4379b2:goto L4379b2;
case 0x4379b8:c.instructions+=15;goto B4379b8;
case 0x4379bb:c.instructions+=14;goto B4379bb;
case 0x4379c1:c.instructions+=13;goto B4379c1;
case 0x4379c4:c.instructions+=12;goto B4379c4;
case 0x4379c7:c.instructions+=11;goto B4379c7;
case 0x4379c9:c.instructions+=10;goto B4379c9;
case 0x4379cc:c.instructions+=9;goto B4379cc;
case 0x4379cf:c.instructions+=8;goto B4379cf;
case 0x4379d3:c.instructions+=7;goto B4379d3;
case 0x4379d7:c.instructions+=6;goto B4379d7;
case 0x4379da:c.instructions+=5;goto B4379da;
case 0x4379e0:c.instructions+=4;goto B4379e0;
case 0x4379e1:c.instructions+=3;goto B4379e1;
case 0x4379e2:c.instructions+=2;goto B4379e2;
case 0x4379e4:c.instructions+=1;goto B4379e4;
case 0x4379e9:goto L4379e9;
case 0x4379eb:c.instructions+=1;goto B4379eb;
case 0x4379f0:goto L4379f0;
case 0x4379f4:c.instructions+=1;goto B4379f4;
case 0x4379f5:goto L4379f5;
case 0x4379f7:c.instructions+=3;goto B4379f7;
case 0x4379f8:c.instructions+=2;goto B4379f8;
case 0x4379f9:c.instructions+=1;goto B4379f9;
case 0x437a00:goto L437a00;
case 0x437a01:c.instructions+=3;goto B437a01;
case 0x437a03:c.instructions+=2;goto B437a03;
case 0x437a05:c.instructions+=1;goto B437a05;
case 0x437a0a:goto L437a0a;
case 0x437a0c:c.instructions+=1;goto B437a0c;
case 0x437a0e:goto L437a0e;
case 0x437a11:c.instructions+=4;goto B437a11;
case 0x437a13:c.instructions+=3;goto B437a13;
case 0x437a16:c.instructions+=2;goto B437a16;
case 0x437a18:c.instructions+=1;goto B437a18;
case 0x437a1a:goto L437a1a;
case 0x437a1c:c.instructions+=2;goto B437a1c;
case 0x437a1e:c.instructions+=1;goto B437a1e;
case 0x437a23:goto L437a23;
case 0x437a25:c.instructions+=1;goto B437a25;
case 0x437a27:goto L437a27;
case 0x437a2e:c.instructions+=1;goto B437a2e;
case 0x437a30:goto L437a30;
case 0x437a32:c.instructions+=3;goto B437a32;
case 0x437a34:c.instructions+=2;goto B437a34;
case 0x437a36:c.instructions+=1;goto B437a36;
case 0x437a3b:goto L437a3b;
case 0x437a40:goto L437a40;
case 0x437a42:c.instructions+=2;goto B437a42;
case 0x437a44:c.instructions+=1;goto B437a44;
case 0x437a46:goto L437a46;
case 0x437a4c:c.instructions+=2;goto B437a4c;
case 0x437a50:c.instructions+=1;goto B437a50;
case 0x437a55:goto L437a55;
case 0x437a58:c.instructions+=2;goto B437a58;
case 0x437a5e:c.instructions+=1;goto B437a5e;
case 0x437a60:goto L437a60;
case 0x437a66:c.instructions+=1;goto B437a66;
case 0x437a6b:goto L437a6b;
case 0x437a6c:c.instructions+=1;goto B437a6c;
case 0x437a71:goto L437a71;
case 0x437a72:c.instructions+=1;goto B437a72;
case 0x437a80:goto L437a80;
case 0x437a81:c.instructions+=7;goto B437a81;
case 0x437a82:c.instructions+=6;goto B437a82;
case 0x437a84:c.instructions+=5;goto B437a84;
case 0x437a85:c.instructions+=4;goto B437a85;
case 0x437a88:c.instructions+=3;goto B437a88;
case 0x437a8b:c.instructions+=2;goto B437a8b;
case 0x437a8d:c.instructions+=1;goto B437a8d;
case 0x437a8f:goto L437a8f;
case 0x437a90:goto L437a90;
case 0x437a93:c.instructions+=3;goto B437a93;
case 0x437a95:c.instructions+=2;goto B437a95;
case 0x437a97:c.instructions+=1;goto B437a97;
case 0x437a9a:goto L437a9a;
case 0x437a9c:c.instructions+=3;goto B437a9c;
case 0x437a9e:c.instructions+=2;goto B437a9e;
case 0x437aa0:c.instructions+=1;goto B437aa0;
case 0x437aa2:goto L437aa2;
case 0x437aa5:c.instructions+=2;goto B437aa5;
case 0x437aa7:c.instructions+=1;goto B437aa7;
case 0x437aa9:goto L437aa9;
case 0x437aaa:goto L437aaa;
case 0x437aac:c.instructions+=1;goto B437aac;
case 0x437aae:goto L437aae;
case 0x437ab0:goto L437ab0;
case 0x437ab3:c.instructions+=6;goto B437ab3;
case 0x437ab5:c.instructions+=5;goto B437ab5;
case 0x437ab8:c.instructions+=4;goto B437ab8;
case 0x437aba:c.instructions+=3;goto B437aba;
case 0x437abb:c.instructions+=2;goto B437abb;
case 0x437abe:c.instructions+=1;goto B437abe;
case 0x437ac3:goto L437ac3;
case 0x437ac5:c.instructions+=3;goto B437ac5;
case 0x437ac8:c.instructions+=2;goto B437ac8;
case 0x437aca:c.instructions+=1;goto B437aca;
case 0x437acc:goto L437acc;
case 0x437acd:c.instructions+=3;goto B437acd;
case 0x437ace:c.instructions+=2;goto B437ace;
case 0x437acf:c.instructions+=1;goto B437acf;
case 0x437ad0:goto L437ad0;
case 0x437ad3:c.instructions+=4;goto B437ad3;
case 0x437ad4:c.instructions+=3;goto B437ad4;
case 0x437ad7:c.instructions+=2;goto B437ad7;
case 0x437ad9:c.instructions+=1;goto B437ad9;
case 0x437adb:goto L437adb;
case 0x437ae0:goto L437ae0;
case 0x437ae2:c.instructions+=5;goto B437ae2;
case 0x437ae5:c.instructions+=4;goto B437ae5;
case 0x437ae7:c.instructions+=3;goto B437ae7;
case 0x437ae8:c.instructions+=2;goto B437ae8;
case 0x437aeb:c.instructions+=1;goto B437aeb;
case 0x437af0:goto L437af0;
case 0x437af2:c.instructions+=3;goto B437af2;
case 0x437af5:c.instructions+=2;goto B437af5;
case 0x437af7:c.instructions+=1;goto B437af7;
case 0x437af9:goto L437af9;
case 0x437afa:c.instructions+=1;goto B437afa;
case 0x437b00:goto L437b00;
case 0x437b02:c.instructions+=15;goto B437b02;
case 0x437b07:c.instructions+=14;goto B437b07;
case 0x437b0d:c.instructions+=13;goto B437b0d;
case 0x437b0e:c.instructions+=12;goto B437b0e;
case 0x437b15:c.instructions+=11;goto B437b15;
case 0x437b16:c.instructions+=10;goto B437b16;
case 0x437b17:c.instructions+=9;goto B437b17;
case 0x437b18:c.instructions+=8;goto B437b18;
case 0x437b19:c.instructions+=7;goto B437b19;
case 0x437b1a:c.instructions+=6;goto B437b1a;
case 0x437b1c:c.instructions+=5;goto B437b1c;
case 0x437b20:c.instructions+=4;goto B437b20;
case 0x437b25:c.instructions+=3;goto B437b25;
case 0x437b26:c.instructions+=2;goto B437b26;
case 0x437b2a:c.instructions+=1;goto B437b2a;
case 0x437b2f:goto L437b2f;
case 0x437b32:c.instructions+=2;goto B437b32;
case 0x437b33:c.instructions+=1;goto B437b33;
case 0x437b38:goto L437b38;
case 0x437b3b:c.instructions+=2;goto B437b3b;
case 0x437b3e:c.instructions+=1;goto B437b3e;
case 0x437b40:goto L437b40;
case 0x437b42:c.instructions+=6;goto B437b42;
case 0x437b45:c.instructions+=5;goto B437b45;
case 0x437b48:c.instructions+=4;goto B437b48;
case 0x437b49:c.instructions+=3;goto B437b49;
case 0x437b4b:c.instructions+=2;goto B437b4b;
case 0x437b4e:c.instructions+=1;goto B437b4e;
case 0x437b50:goto L437b50;
case 0x437b55:c.instructions+=5;goto B437b55;
case 0x437b57:c.instructions+=4;goto B437b57;
case 0x437b59:c.instructions+=3;goto B437b59;
case 0x437b5a:c.instructions+=2;goto B437b5a;
case 0x437b5f:c.instructions+=1;goto B437b5f;
case 0x437b64:goto L437b64;
case 0x437b67:c.instructions+=4;goto B437b67;
case 0x437b6a:c.instructions+=3;goto B437b6a;
case 0x437b6c:c.instructions+=2;goto B437b6c;
case 0x437b71:c.instructions+=1;goto B437b71;
case 0x437b73:goto L437b73;
case 0x437b75:c.instructions+=5;goto B437b75;
case 0x437b78:c.instructions+=4;goto B437b78;
case 0x437b7a:c.instructions+=3;goto B437b7a;
case 0x437b7b:c.instructions+=2;goto B437b7b;
case 0x437b7e:c.instructions+=1;goto B437b7e;
case 0x437b83:goto L437b83;
case 0x437b85:c.instructions+=3;goto B437b85;
case 0x437b88:c.instructions+=2;goto B437b88;
case 0x437b8a:c.instructions+=1;goto B437b8a;
case 0x437b8c:goto L437b8c;
case 0x437b8e:c.instructions+=3;goto B437b8e;
case 0x437b90:c.instructions+=2;goto B437b90;
case 0x437b98:c.instructions+=1;goto B437b98;
case 0x437b9a:goto L437b9a;
case 0x437ba0:goto L437ba0;
case 0x437ba2:c.instructions+=5;goto B437ba2;
case 0x437ba5:c.instructions+=4;goto B437ba5;
case 0x437ba7:c.instructions+=3;goto B437ba7;
case 0x437ba8:c.instructions+=2;goto B437ba8;
case 0x437bab:c.instructions+=1;goto B437bab;
case 0x437bb0:goto L437bb0;
case 0x437bb6:c.instructions+=4;goto B437bb6;
case 0x437bb7:c.instructions+=3;goto B437bb7;
case 0x437bb8:c.instructions+=2;goto B437bb8;
case 0x437bbe:c.instructions+=1;goto B437bbe;
case 0x437bc3:goto L437bc3;
case 0x437bc5:c.instructions+=3;goto B437bc5;
case 0x437bc8:c.instructions+=2;goto B437bc8;
case 0x437bca:c.instructions+=1;goto B437bca;
case 0x437bcc:goto L437bcc;
case 0x437bd0:c.instructions+=7;goto B437bd0;
case 0x437bd1:c.instructions+=6;goto B437bd1;
case 0x437bd2:c.instructions+=5;goto B437bd2;
case 0x437bd3:c.instructions+=4;goto B437bd3;
case 0x437bd4:c.instructions+=3;goto B437bd4;
case 0x437bdb:c.instructions+=2;goto B437bdb;
case 0x437bde:c.instructions+=1;goto B437bde;
case 0x437be0:goto L437be0;
case 0x437be1:c.instructions+=14;goto B437be1;
case 0x437be3:c.instructions+=13;goto B437be3;
case 0x437be6:c.instructions+=12;goto B437be6;
case 0x437be8:c.instructions+=11;goto B437be8;
case 0x437bed:c.instructions+=10;goto B437bed;
case 0x437bf3:c.instructions+=9;goto B437bf3;
case 0x437bf4:c.instructions+=8;goto B437bf4;
case 0x437bfb:c.instructions+=7;goto B437bfb;
case 0x437c01:c.instructions+=6;goto B437c01;
case 0x437c02:c.instructions+=5;goto B437c02;
case 0x437c03:c.instructions+=4;goto B437c03;
case 0x437c05:c.instructions+=3;goto B437c05;
case 0x437c07:c.instructions+=2;goto B437c07;
case 0x437c08:c.instructions+=1;goto B437c08;
case 0x437c0b:goto L437c0b;
case 0x437c0e:c.instructions+=8;goto B437c0e;
case 0x437c10:c.instructions+=7;goto B437c10;
case 0x437c13:c.instructions+=6;goto B437c13;
case 0x437c16:c.instructions+=5;goto B437c16;
case 0x437c18:c.instructions+=4;goto B437c18;
case 0x437c1b:c.instructions+=3;goto B437c1b;
case 0x437c1e:c.instructions+=2;goto B437c1e;
case 0x437c1f:c.instructions+=1;goto B437c1f;
case 0x437c24:goto L437c24;
case 0x437c27:c.instructions+=5;goto B437c27;
case 0x437c2a:c.instructions+=4;goto B437c2a;
case 0x437c2b:c.instructions+=3;goto B437c2b;
case 0x437c2d:c.instructions+=2;goto B437c2d;
case 0x437c30:c.instructions+=1;goto B437c30;
case 0x437c35:goto L437c35;
case 0x437c38:c.instructions+=9;goto B437c38;
case 0x437c3b:c.instructions+=8;goto B437c3b;
case 0x437c41:c.instructions+=7;goto B437c41;
case 0x437c44:c.instructions+=6;goto B437c44;
case 0x437c47:c.instructions+=5;goto B437c47;
case 0x437c4a:c.instructions+=4;goto B437c4a;
case 0x437c4d:c.instructions+=3;goto B437c4d;
case 0x437c4e:c.instructions+=2;goto B437c4e;
case 0x437c4f:c.instructions+=1;goto B437c4f;
case 0x437c54:goto L437c54;
case 0x437c5a:c.instructions+=3;goto B437c5a;
case 0x437c5d:c.instructions+=2;goto B437c5d;
case 0x437c5f:c.instructions+=1;goto B437c5f;
case 0x437c61:goto L437c61;
case 0x437c63:c.instructions+=1;goto B437c63;
case 0x437c68:goto L437c68;
case 0x437c6e:c.instructions+=2;goto B437c6e;
case 0x437c6f:c.instructions+=1;goto B437c6f;
case 0x437c74:goto L437c74;
case 0x437c77:c.instructions+=5;goto B437c77;
case 0x437c7b:c.instructions+=4;goto B437c7b;
case 0x437c7d:c.instructions+=3;goto B437c7d;
case 0x437c80:c.instructions+=2;goto B437c80;
case 0x437c8b:c.instructions+=1;goto B437c8b;
case 0x437c8d:goto L437c8d;
case 0x437c90:c.instructions+=6;goto B437c90;
case 0x437c92:c.instructions+=5;goto B437c92;
case 0x437c95:c.instructions+=4;goto B437c95;
case 0x437c96:c.instructions+=3;goto B437c96;
case 0x437c97:c.instructions+=2;goto B437c97;
case 0x437c99:c.instructions+=1;goto B437c99;
case 0x437c9e:goto L437c9e;
case 0x437ca0:goto L437ca0;
case 0x437ca2:goto L437ca2;
case 0x437ca5:c.instructions+=4;goto B437ca5;
case 0x437caa:c.instructions+=3;goto B437caa;
case 0x437cab:c.instructions+=2;goto B437cab;
case 0x437cb6:c.instructions+=1;goto B437cb6;
case 0x437cbb:goto L437cbb;
case 0x437cbe:c.instructions+=2;goto B437cbe;
case 0x437cc0:c.instructions+=1;goto B437cc0;
case 0x437cc2:goto L437cc2;
case 0x437cc4:c.instructions+=1;goto B437cc4;
case 0x437cc9:goto L437cc9;
case 0x437ccb:goto L437ccb;
case 0x437ccd:goto L437ccd;
case 0x437cd0:c.instructions+=12;goto B437cd0;
case 0x437cd3:c.instructions+=11;goto B437cd3;
case 0x437cd9:c.instructions+=10;goto B437cd9;
case 0x437cdc:c.instructions+=9;goto B437cdc;
case 0x437cdf:c.instructions+=8;goto B437cdf;
case 0x437ce2:c.instructions+=7;goto B437ce2;
case 0x437ce5:c.instructions+=6;goto B437ce5;
case 0x437ce8:c.instructions+=5;goto B437ce8;
case 0x437ceb:c.instructions+=4;goto B437ceb;
case 0x437cf1:c.instructions+=3;goto B437cf1;
case 0x437cf3:c.instructions+=2;goto B437cf3;
case 0x437cf6:c.instructions+=1;goto B437cf6;
case 0x437cf8:goto L437cf8;
case 0x437cff:goto L437cff;
case 0x437d02:c.instructions+=2;goto B437d02;
case 0x437d04:c.instructions+=1;goto B437d04;
case 0x437d06:goto L437d06;
case 0x437d0b:c.instructions+=1;goto B437d0b;
case 0x437d0d:goto L437d0d;
case 0x437d0f:c.instructions+=1;goto B437d0f;
case 0x437d11:goto L437d11;
case 0x437d16:goto L437d16;
case 0x437d18:c.instructions+=1;goto B437d18;
case 0x437d1a:goto L437d1a;
case 0x437d1d:c.instructions+=1;goto B437d1d;
case 0x437d1f:goto L437d1f;
case 0x437d22:goto L437d22;
case 0x437d24:c.instructions+=1;goto B437d24;
case 0x437d26:goto L437d26;
case 0x437d2c:goto L437d2c;
case 0x437d2f:c.instructions+=1;goto B437d2f;
case 0x437d31:goto L437d31;
case 0x437d37:goto L437d37;
case 0x437d3a:c.instructions+=1;goto B437d3a;
case 0x437d3c:goto L437d3c;
case 0x437d42:goto L437d42;
case 0x437d45:c.instructions+=1;goto B437d45;
case 0x437d47:goto L437d47;
case 0x437d4d:goto L437d4d;
case 0x437d50:c.instructions+=5;goto B437d50;
case 0x437d53:c.instructions+=4;goto B437d53;
case 0x437d57:c.instructions+=3;goto B437d57;
case 0x437d5a:c.instructions+=2;goto B437d5a;
case 0x437d5c:c.instructions+=1;goto B437d5c;
case 0x437d5e:goto L437d5e;
case 0x437d5f:c.instructions+=1;goto B437d5f;
case 0x437d64:goto L437d64;
case 0x437d67:c.instructions+=2;goto B437d67;
case 0x437d69:c.instructions+=1;goto B437d69;
case 0x437d6f:goto L437d6f;
case 0x437d73:c.instructions+=2;goto B437d73;
case 0x437d74:c.instructions+=1;goto B437d74;
case 0x437d79:goto L437d79;
case 0x437d7b:c.instructions+=3;goto B437d7b;
case 0x437d7e:c.instructions+=2;goto B437d7e;
case 0x437d81:c.instructions+=1;goto B437d81;
case 0x437d83:goto L437d83;
case 0x437d86:c.instructions+=1;goto B437d86;
case 0x437d88:goto L437d88;
case 0x437d8b:c.instructions+=1;goto B437d8b;
case 0x437d8d:goto L437d8d;
case 0x437d93:c.instructions+=2;goto B437d93;
case 0x437d94:c.instructions+=1;goto B437d94;
case 0x437d99:goto L437d99;
case 0x437d9c:c.instructions+=2;goto B437d9c;
case 0x437d9e:c.instructions+=1;goto B437d9e;
case 0x437da4:goto L437da4;
case 0x437da8:c.instructions+=2;goto B437da8;
case 0x437da9:c.instructions+=1;goto B437da9;
case 0x437dae:goto L437dae;
case 0x437db0:c.instructions+=3;goto B437db0;
case 0x437db3:c.instructions+=2;goto B437db3;
case 0x437db6:c.instructions+=1;goto B437db6;
case 0x437db8:goto L437db8;
case 0x437dbb:c.instructions+=1;goto B437dbb;
case 0x437dbd:goto L437dbd;
case 0x437dc0:goto L437dc0;
case 0x437dc2:goto L437dc2;
case 0x437dc5:c.instructions+=3;goto B437dc5;
case 0x437dc8:c.instructions+=2;goto B437dc8;
case 0x437dca:c.instructions+=1;goto B437dca;
case 0x437dcc:goto L437dcc;
case 0x437dcf:c.instructions+=3;goto B437dcf;
case 0x437dd1:c.instructions+=2;goto B437dd1;
case 0x437dd2:c.instructions+=1;goto B437dd2;
case 0x437dd7:goto L437dd7;
case 0x437dda:c.instructions+=2;goto B437dda;
case 0x437ddc:c.instructions+=1;goto B437ddc;
case 0x437dde:goto L437dde;
case 0x437de1:c.instructions+=3;goto B437de1;
case 0x437de3:c.instructions+=2;goto B437de3;
case 0x437de4:c.instructions+=1;goto B437de4;
case 0x437de9:goto L437de9;
case 0x437dec:c.instructions+=2;goto B437dec;
case 0x437dee:c.instructions+=1;goto B437dee;
case 0x437df0:goto L437df0;
case 0x437df3:c.instructions+=3;goto B437df3;
case 0x437df5:c.instructions+=2;goto B437df5;
case 0x437df6:c.instructions+=1;goto B437df6;
case 0x437dfb:goto L437dfb;
case 0x437dfe:c.instructions+=3;goto B437dfe;
case 0x437e00:c.instructions+=2;goto B437e00;
case 0x437e05:c.instructions+=1;goto B437e05;
case 0x437e07:goto L437e07;
case 0x437e0a:c.instructions+=2;goto B437e0a;
case 0x437e0c:c.instructions+=1;goto B437e0c;
case 0x437e0e:goto L437e0e;
case 0x437e11:c.instructions+=3;goto B437e11;
case 0x437e13:c.instructions+=2;goto B437e13;
case 0x437e14:c.instructions+=1;goto B437e14;
case 0x437e19:goto L437e19;
case 0x437e1c:c.instructions+=6;goto B437e1c;
case 0x437e1f:c.instructions+=5;goto B437e1f;
case 0x437e24:c.instructions+=4;goto B437e24;
case 0x437e2a:c.instructions+=3;goto B437e2a;
case 0x437e2d:c.instructions+=2;goto B437e2d;
case 0x437e30:c.instructions+=1;goto B437e30;
case 0x437e35:goto L437e35;
case 0x437e38:c.instructions+=3;goto B437e38;
case 0x437e3b:c.instructions+=2;goto B437e3b;
case 0x437e3d:c.instructions+=1;goto B437e3d;
case 0x437e43:goto L437e43;
case 0x437e48:c.instructions+=2;goto B437e48;
case 0x437e4a:c.instructions+=1;goto B437e4a;
case 0x437e4c:goto L437e4c;
case 0x437e53:c.instructions+=1;goto B437e53;
case 0x437e55:goto L437e55;
case 0x437e59:c.instructions+=2;goto B437e59;
case 0x437e5d:c.instructions+=1;goto B437e5d;
case 0x437e63:goto L437e63;
case 0x437e65:c.instructions+=1;goto B437e65;
case 0x437e67:goto L437e67;
case 0x437e6b:c.instructions+=1;goto B437e6b;
case 0x437e6d:goto L437e6d;
case 0x437e73:c.instructions+=4;goto B437e73;
case 0x437e79:c.instructions+=3;goto B437e79;
case 0x437e7a:c.instructions+=2;goto B437e7a;
case 0x437e7b:c.instructions+=1;goto B437e7b;
case 0x437e80:goto L437e80;
case 0x437e83:c.instructions+=5;goto B437e83;
case 0x437e86:c.instructions+=4;goto B437e86;
case 0x437e89:c.instructions+=3;goto B437e89;
case 0x437e8c:c.instructions+=2;goto B437e8c;
case 0x437e92:c.instructions+=1;goto B437e92;
case 0x437e95:goto L437e95;
case 0x437e98:c.instructions+=2;goto B437e98;
case 0x437e9a:c.instructions+=1;goto B437e9a;
case 0x437e9c:goto L437e9c;
case 0x437ea0:c.instructions+=1;goto B437ea0;
case 0x437ea2:goto L437ea2;
case 0x437ea7:goto L437ea7;
case 0x437eaa:c.instructions+=2;goto B437eaa;
case 0x437eac:c.instructions+=1;goto B437eac;
case 0x437eb2:goto L437eb2;
case 0x437eb5:c.instructions+=2;goto B437eb5;
case 0x437eb7:c.instructions+=1;goto B437eb7;
case 0x437ebd:goto L437ebd;
case 0x437ebf:c.instructions+=1;goto B437ebf;
case 0x437ec4:goto L437ec4;
case 0x437ec8:c.instructions+=4;goto B437ec8;
case 0x437ec9:c.instructions+=3;goto B437ec9;
case 0x437ecb:c.instructions+=2;goto B437ecb;
case 0x437ecd:c.instructions+=1;goto B437ecd;
case 0x437ed2:goto L437ed2;
case 0x437ed5:c.instructions+=3;goto B437ed5;
case 0x437edb:c.instructions+=2;goto B437edb;
case 0x437edd:c.instructions+=1;goto B437edd;
case 0x437edf:goto L437edf;
case 0x437ee1:c.instructions+=1;goto B437ee1;
case 0x437ee6:goto L437ee6;
case 0x437ee9:c.instructions+=3;goto B437ee9;
case 0x437eed:c.instructions+=2;goto B437eed;
case 0x437ef1:c.instructions+=1;goto B437ef1;
case 0x437ef6:goto L437ef6;
case 0x437efa:c.instructions+=8;goto B437efa;
case 0x437efb:c.instructions+=7;goto B437efb;
case 0x437efd:c.instructions+=6;goto B437efd;
case 0x437eff:c.instructions+=5;goto B437eff;
case 0x437f03:c.instructions+=4;goto B437f03;
case 0x437f04:c.instructions+=3;goto B437f04;
case 0x437f0b:c.instructions+=2;goto B437f0b;
case 0x437f16:c.instructions+=1;goto B437f16;
case 0x437f1b:goto L437f1b;
case 0x437f1f:c.instructions+=2;goto B437f1f;
case 0x437f21:c.instructions+=1;goto B437f21;
case 0x437f23:goto L437f23;
case 0x437f26:c.instructions+=6;goto B437f26;
case 0x437f29:c.instructions+=5;goto B437f29;
case 0x437f2c:c.instructions+=4;goto B437f2c;
case 0x437f2d:c.instructions+=3;goto B437f2d;
case 0x437f31:c.instructions+=2;goto B437f31;
case 0x437f35:c.instructions+=1;goto B437f35;
case 0x437f3a:goto L437f3a;
case 0x437f3d:c.instructions+=8;goto B437f3d;
case 0x437f41:c.instructions+=7;goto B437f41;
case 0x437f44:c.instructions+=6;goto B437f44;
case 0x437f48:c.instructions+=5;goto B437f48;
case 0x437f49:c.instructions+=4;goto B437f49;
case 0x437f4f:c.instructions+=3;goto B437f4f;
case 0x437f53:c.instructions+=2;goto B437f53;
case 0x437f57:c.instructions+=1;goto B437f57;
case 0x437f5c:goto L437f5c;
case 0x437f5e:goto L437f5e;
case 0x437f60:goto L437f60;
case 0x437f64:c.instructions+=2;goto B437f64;
case 0x437f6f:c.instructions+=1;goto B437f6f;
case 0x437f74:goto L437f74;
case 0x437f78:c.instructions+=2;goto B437f78;
case 0x437f7a:c.instructions+=1;goto B437f7a;
case 0x437f7c:goto L437f7c;
case 0x437f7f:c.instructions+=2;goto B437f7f;
case 0x437f81:c.instructions+=1;goto B437f81;
case 0x437f83:goto L437f83;
case 0x437f87:c.instructions+=2;goto B437f87;
case 0x437f89:c.instructions+=1;goto B437f89;
case 0x437f8b:goto L437f8b;
case 0x437f8e:c.instructions+=2;goto B437f8e;
case 0x437f91:c.instructions+=1;goto B437f91;
case 0x437f93:goto L437f93;
case 0x437f95:c.instructions+=2;goto B437f95;
case 0x437f9a:c.instructions+=1;goto B437f9a;
case 0x437fa0:goto L437fa0;
case 0x437fa2:c.instructions+=2;goto B437fa2;
case 0x437fa3:c.instructions+=1;goto B437fa3;
case 0x437fa8:goto L437fa8;
case 0x437fab:c.instructions+=4;goto B437fab;
case 0x437fae:c.instructions+=3;goto B437fae;
case 0x437fb1:c.instructions+=2;goto B437fb1;
case 0x437fb3:c.instructions+=1;goto B437fb3;
case 0x437fb5:goto L437fb5;
case 0x437fb8:goto L437fb8;
case 0x437fbb:c.instructions+=3;goto B437fbb;
case 0x437fbc:c.instructions+=2;goto B437fbc;
case 0x437fc2:c.instructions+=1;goto B437fc2;
case 0x437fc4:goto L437fc4;
case 0x437fcb:c.instructions+=9;goto B437fcb;
case 0x437fcd:c.instructions+=8;goto B437fcd;
case 0x437fd4:c.instructions+=7;goto B437fd4;
case 0x437fdb:c.instructions+=6;goto B437fdb;
case 0x437fdc:c.instructions+=5;goto B437fdc;
case 0x437fdd:c.instructions+=4;goto B437fdd;
case 0x437fde:c.instructions+=3;goto B437fde;
case 0x437fe0:c.instructions+=2;goto B437fe0;
case 0x437fe1:c.instructions+=1;goto B437fe1;
case 0x437fe4:goto L437fe4;
case 0x437fe6:c.instructions+=4;goto B437fe6;
case 0x437fe9:c.instructions+=3;goto B437fe9;
case 0x437fec:c.instructions+=2;goto B437fec;
case 0x437ff0:c.instructions+=1;goto B437ff0;
case 0x437ff3:goto L437ff3;
case 0x437ff5:c.instructions+=2;goto B437ff5;
case 0x437ffc:c.instructions+=1;goto B437ffc;
default:missing_instruction(c.pc);}
B437004:L437004:{c.instructions+=2;NFSU2_TR(0x437004);
u8 U[8];
__builtin_memmove((U+0),gp(0x865018),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43700a:{NFSU2_TR(0x43700a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43712a;}}
}
B437010:L437010:{c.instructions+=2;NFSU2_TR(0x437010);
w4(R+4,u32(0x85ad40ull));
}
B437015:{NFSU2_TR(0x437015);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43701aull));
TAIL_STATIC(0x500aa0u,500);
}
B43701a:L43701a:{c.instructions+=2;NFSU2_TR(0x43701a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43701c:{NFSU2_TR(0x43701c);
if(r1(R+518)){{goto L437032;}}
}
B43701e:L43701e:{c.instructions+=5;NFSU2_TR(0x43701e);
__builtin_memmove((R+8),gp(0x865598),4);
}
B437024:{NFSU2_TR(0x437024);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B437026:{NFSU2_TR(0x437026);
__builtin_memmove((R+0),gp(0x865040),4);
}
B43702b:{NFSU2_TR(0x43702b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B43702d:{NFSU2_TR(0x43702d);
{goto L43712e;}
}
B437032:L437032:{c.instructions+=12;NFSU2_TR(0x437032);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437035:{NFSU2_TR(0x437035);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B437038:{NFSU2_TR(0x437038);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43703b:{NFSU2_TR(0x43703b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43703e:{NFSU2_TR(0x43703e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437041:{NFSU2_TR(0x437041);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437044:{NFSU2_TR(0x437044);
__builtin_memmove((R+12),gp(0x827ad4),4);
}
B43704a:{NFSU2_TR(0x43704a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43704d:{NFSU2_TR(0x43704d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43704f:{NFSU2_TR(0x43704f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437051:{NFSU2_TR(0x437051);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B437058:{NFSU2_TR(0x437058);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4370c4;}}
}
B43705a:L43705a:{c.instructions+=1;NFSU2_TR(0x43705a);
__builtin_memmove((R+12),(R+12),4);
}
B437060:L437060:{c.instructions+=4;NFSU2_TR(0x437060);
u8 U[12];
w4(U+0,u32(u32(u32(0x35cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B437067:{NFSU2_TR(0x437067);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437068:{NFSU2_TR(0x437068);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B43706b:{NFSU2_TR(0x43706b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437070ull));
TAIL_STATIC(0x431fb0u,431);
}
B437070:L437070:{c.instructions+=2;NFSU2_TR(0x437070);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B437072:{NFSU2_TR(0x437072);
if(r1(R+518)){{goto L4370b2;}}
}
B437074:L437074:{c.instructions+=2;NFSU2_TR(0x437074);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437076:{NFSU2_TR(0x437076);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43707bull));
TAIL_STATIC(0x575620u,575);
}
B43707b:L43707b:{c.instructions+=3;NFSU2_TR(0x43707b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43707e:{NFSU2_TR(0x43707e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437080:{NFSU2_TR(0x437080);
if(r1(R+518)){{goto L43709a;}}
}
B437082:L437082:{c.instructions+=7;NFSU2_TR(0x437082);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B437086:{NFSU2_TR(0x437086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B437088:{NFSU2_TR(0x437088);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43708b:{NFSU2_TR(0x43708b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43708e:{NFSU2_TR(0x43708e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B437095:{NFSU2_TR(0x437095);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437098:{NFSU2_TR(0x437098);
{goto L43709c;}
}
B43709a:L43709a:{c.instructions+=1;NFSU2_TR(0x43709a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43709c:L43709c:{c.instructions+=7;NFSU2_TR(0x43709c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43709f:{NFSU2_TR(0x43709f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4370a1:{NFSU2_TR(0x4370a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4370a4:{NFSU2_TR(0x4370a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4370a7:{NFSU2_TR(0x4370a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4370aa:{NFSU2_TR(0x4370aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4370ac:{NFSU2_TR(0x4370ac);
__builtin_memmove((R+12),gp(0x827ad4),4);
}
B4370b2:L4370b2:{c.instructions+=4;NFSU2_TR(0x4370b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4370b5:{NFSU2_TR(0x4370b5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4370b6:{NFSU2_TR(0x4370b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B4370b8:{NFSU2_TR(0x4370b8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437060u);}goto L437060;}}
}
B4370ba:L4370ba:{c.instructions+=4;NFSU2_TR(0x4370ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4370bd:{NFSU2_TR(0x4370bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4370c0:{NFSU2_TR(0x4370c0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4370c2:{NFSU2_TR(0x4370c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4370d8;}}
}
B4370c4:L4370c4:{c.instructions+=5;NFSU2_TR(0x4370c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4370c7:{NFSU2_TR(0x4370c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4370ca:{NFSU2_TR(0x4370ca);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4370d0:{NFSU2_TR(0x4370d0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4370d6:{NFSU2_TR(0x4370d6);
{goto L437114;}
}
B4370d8:L4370d8:{c.instructions+=3;NFSU2_TR(0x4370d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4370da:{NFSU2_TR(0x4370da);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4370dd:{NFSU2_TR(0x4370dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4370e2ull));
TAIL_STATIC(0x43be80u,43b);
}
B4370e2:L4370e2:{c.instructions+=2;NFSU2_TR(0x4370e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4370e3:{NFSU2_TR(0x4370e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4370e8ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4370e8:L4370e8:{c.instructions+=4;NFSU2_TR(0x4370e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4370eb:{NFSU2_TR(0x4370eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4370ec:{NFSU2_TR(0x4370ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4370ef:{NFSU2_TR(0x4370ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4370f4ull));
TAIL_STATIC(0x43be60u,43b);
}
B4370f4:L4370f4:{c.instructions+=12;NFSU2_TR(0x4370f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4370f7:{NFSU2_TR(0x4370f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4370fa:{NFSU2_TR(0x4370fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4370fc:{NFSU2_TR(0x4370fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4370ff:{NFSU2_TR(0x4370ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437102:{NFSU2_TR(0x437102);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B437104:{NFSU2_TR(0x437104);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437107:{NFSU2_TR(0x437107);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43710a:{NFSU2_TR(0x43710a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43710c:{NFSU2_TR(0x43710c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43710f:{NFSU2_TR(0x43710f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437112:{NFSU2_TR(0x437112);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B437114:L437114:{c.instructions+=3;NFSU2_TR(0x437114);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B437117:{NFSU2_TR(0x437117);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B43711e:{NFSU2_TR(0x43711e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437123ull));
TAIL_STATIC(0x4def30u,4de);
}
B437123:L437123:{c.instructions+=3;NFSU2_TR(0x437123);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B437126:{NFSU2_TR(0x437126);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B437128:{NFSU2_TR(0x437128);
{goto L43712e;}
}
B43712a:L43712a:{c.instructions+=2;NFSU2_TR(0x43712a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B43712c:{NFSU2_TR(0x43712c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B43712e:L43712e:{c.instructions+=12;NFSU2_TR(0x43712e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B437130:{NFSU2_TR(0x437130);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B437132:{NFSU2_TR(0x437132);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B437134:{NFSU2_TR(0x437134);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437137:{NFSU2_TR(0x437137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B437138:{NFSU2_TR(0x437138);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B437139:{NFSU2_TR(0x437139);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B43713c:{NFSU2_TR(0x43713c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43713d:{NFSU2_TR(0x43713d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437144:{NFSU2_TR(0x437144);
__builtin_memmove((R+16),(R+20),4);
}
B437146:{NFSU2_TR(0x437146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B437147:{NFSU2_TR(0x437147);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437160:L437160:{c.instructions+=7;NFSU2_TR(0x437160);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437161:{NFSU2_TR(0x437161);
__builtin_memmove((R+24),(R+4),4);
}
B437163:{NFSU2_TR(0x437163);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437166:{NFSU2_TR(0x437166);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437168:{NFSU2_TR(0x437168);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437169:{NFSU2_TR(0x437169);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43716c:{NFSU2_TR(0x43716c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4371ce;}}
}
B43716e:L43716e:{c.instructions+=3;NFSU2_TR(0x43716e);
__builtin_memmove((R+0),gp(0x827ee0),1);
}
B437173:{NFSU2_TR(0x437173);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B437175:{NFSU2_TR(0x437175);
if(r1(R+518)){{goto L43717e;}}
}
B437177:L437177:{c.instructions+=2;NFSU2_TR(0x437177);
w4(R+4,u32(0x4ull));
}
B43717c:{NFSU2_TR(0x43717c);
{goto L437191;}
}
B43717e:L43717e:{c.instructions+=2;NFSU2_TR(0x43717e);
w4(R+4,u32(0x89cf48ull));
}
B437183:{NFSU2_TR(0x437183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437188ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B437188:L437188:{c.instructions+=4;NFSU2_TR(0x437188);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B43718a:{NFSU2_TR(0x43718a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B43718c:{NFSU2_TR(0x43718c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B43718f:{NFSU2_TR(0x43718f);
__builtin_memmove((R+4),(R+0),4);
}
B437191:L437191:{c.instructions+=3;NFSU2_TR(0x437191);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B437196:{NFSU2_TR(0x437196);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437198:{NFSU2_TR(0x437198);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4371a1;}}
}
B43719a:L43719a:{c.instructions+=2;NFSU2_TR(0x43719a);
w4(R+0,u32(0x1ull));
}
B43719f:{NFSU2_TR(0x43719f);
{goto L4371af;}
}
B4371a1:L4371a1:{c.instructions+=6;NFSU2_TR(0x4371a1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4371a3:{NFSU2_TR(0x4371a3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4371a6:{NFSU2_TR(0x4371a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B4371a9:{NFSU2_TR(0x4371a9);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4371aa:{NFSU2_TR(0x4371aa);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B4371ad:{NFSU2_TR(0x4371ad);
__builtin_memmove((R+0),(R+8),4);
}
B4371af:L4371af:{c.instructions+=13;NFSU2_TR(0x4371af);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4371b2:{NFSU2_TR(0x4371b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4371b3:{NFSU2_TR(0x4371b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4371b6:{NFSU2_TR(0x4371b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4371b7:{NFSU2_TR(0x4371b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4371ba:{NFSU2_TR(0x4371ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4371bb:{NFSU2_TR(0x4371bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4371bc:{NFSU2_TR(0x4371bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4371bd:{NFSU2_TR(0x4371bd);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B4371c2:{NFSU2_TR(0x4371c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4371c3:{NFSU2_TR(0x4371c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4371c4:{NFSU2_TR(0x4371c4);
w4(R+4,u32(0x7ea23cull));
}
B4371c9:{NFSU2_TR(0x4371c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4371ceull));
TAIL_STATIC(0x436840u,436);
}
B4371ce:L4371ce:{c.instructions+=3;NFSU2_TR(0x4371ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4371d0:{NFSU2_TR(0x4371d0);
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
B4371d2:{NFSU2_TR(0x4371d2);
if(r1(R+518)){{goto L4371eb;}}
}
B4371d4:L4371d4:{c.instructions+=5;NFSU2_TR(0x4371d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4371d7:{NFSU2_TR(0x4371d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4371d8:{NFSU2_TR(0x4371d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4371d9:{NFSU2_TR(0x4371d9);
w4(R+4,u32(0x827b88ull));
}
B4371de:{NFSU2_TR(0x4371de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4371e3ull));
TAIL_STATIC(0x435be0u,435);
}
B4371e3:L4371e3:{c.instructions+=2;NFSU2_TR(0x4371e3);
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
B4371e5:{NFSU2_TR(0x4371e5);
if(r1(R+518)){{goto L4371eb;}}
}
B4371e7:L4371e7:{c.instructions+=1;NFSU2_TR(0x4371e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4371eb:L4371eb:{c.instructions+=4;NFSU2_TR(0x4371eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4371ee:{NFSU2_TR(0x4371ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4371ef:{NFSU2_TR(0x4371ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4371f0:{NFSU2_TR(0x4371f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437200:L437200:{c.instructions+=7;NFSU2_TR(0x437200);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437201:{NFSU2_TR(0x437201);
__builtin_memmove((R+24),(R+4),4);
}
B437203:{NFSU2_TR(0x437203);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437206:{NFSU2_TR(0x437206);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437208:{NFSU2_TR(0x437208);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437209:{NFSU2_TR(0x437209);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43720c:{NFSU2_TR(0x43720c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43724c;}}
}
B43720e:L43720e:{c.instructions+=3;NFSU2_TR(0x43720e);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B437213:{NFSU2_TR(0x437213);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437215:{NFSU2_TR(0x437215);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43721e;}}
}
B437217:L437217:{c.instructions+=2;NFSU2_TR(0x437217);
w4(R+0,u32(0x1ull));
}
B43721c:{NFSU2_TR(0x43721c);
{goto L43722c;}
}
B43721e:L43721e:{c.instructions+=6;NFSU2_TR(0x43721e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B437220:{NFSU2_TR(0x437220);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B437223:{NFSU2_TR(0x437223);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B437226:{NFSU2_TR(0x437226);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B437227:{NFSU2_TR(0x437227);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x2ull))));
}
B43722a:{NFSU2_TR(0x43722a);
__builtin_memmove((R+0),(R+4),4);
}
B43722c:L43722c:{c.instructions+=13;NFSU2_TR(0x43722c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B43722f:{NFSU2_TR(0x43722f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437230:{NFSU2_TR(0x437230);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+4),(U+0),4);
}
B437233:{NFSU2_TR(0x437233);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437234:{NFSU2_TR(0x437234);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+8),(U+0),4);
}
B437237:{NFSU2_TR(0x437237);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437238:{NFSU2_TR(0x437238);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437239:{NFSU2_TR(0x437239);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43723a:{NFSU2_TR(0x43723a);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B43723f:{NFSU2_TR(0x43723f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437240:{NFSU2_TR(0x437240);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437242:{NFSU2_TR(0x437242);
w4(R+4,u32(0x7ea23cull));
}
B437247:{NFSU2_TR(0x437247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43724cull));
TAIL_STATIC(0x436840u,436);
}
B43724c:L43724c:{c.instructions+=3;NFSU2_TR(0x43724c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B43724e:{NFSU2_TR(0x43724e);
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
B437250:{NFSU2_TR(0x437250);
if(r1(R+518)){{goto L437269;}}
}
B437252:L437252:{c.instructions+=5;NFSU2_TR(0x437252);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437255:{NFSU2_TR(0x437255);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437256:{NFSU2_TR(0x437256);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437257:{NFSU2_TR(0x437257);
w4(R+4,u32(0x827b88ull));
}
B43725c:{NFSU2_TR(0x43725c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437261ull));
TAIL_STATIC(0x435be0u,435);
}
B437261:L437261:{c.instructions+=2;NFSU2_TR(0x437261);
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
B437263:{NFSU2_TR(0x437263);
if(r1(R+518)){{goto L437269;}}
}
B437265:L437265:{c.instructions+=1;NFSU2_TR(0x437265);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B437269:L437269:{c.instructions+=4;NFSU2_TR(0x437269);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43726c:{NFSU2_TR(0x43726c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43726d:{NFSU2_TR(0x43726d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43726e:{NFSU2_TR(0x43726e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437270:L437270:{c.instructions+=21;NFSU2_TR(0x437270);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437271:{NFSU2_TR(0x437271);
__builtin_memmove((R+20),(R+16),4);
}
B437273:{NFSU2_TR(0x437273);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B437276:{NFSU2_TR(0x437276);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B437279:{NFSU2_TR(0x437279);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43727a:{NFSU2_TR(0x43727a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43727b:{NFSU2_TR(0x43727b);
__builtin_memmove((R+24),(R+4),4);
}
B43727d:{NFSU2_TR(0x43727d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B437280:{NFSU2_TR(0x437280);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437281:{NFSU2_TR(0x437281);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B437286:{NFSU2_TR(0x437286);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+4),(U+0),4);
}
B437289:{NFSU2_TR(0x437289);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43728a:{NFSU2_TR(0x43728a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+8),(U+0),4);
}
B43728d:{NFSU2_TR(0x43728d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43728e:{NFSU2_TR(0x43728e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+28),(U+0),4);
}
B437291:{NFSU2_TR(0x437291);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437292:{NFSU2_TR(0x437292);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437294:{NFSU2_TR(0x437294);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437295:{NFSU2_TR(0x437295);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437297:{NFSU2_TR(0x437297);
w4(R+4,u32(0x7ea23cull));
}
B43729c:{NFSU2_TR(0x43729c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4372a1ull));
TAIL_STATIC(0x436840u,436);
}
B4372a1:L4372a1:{c.instructions+=2;NFSU2_TR(0x4372a1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4372a4:{NFSU2_TR(0x4372a4);
if(r1(R+518)){{goto L43735f;}}
}
B4372aa:L4372aa:{c.instructions+=13;NFSU2_TR(0x4372aa);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4372b0:{NFSU2_TR(0x4372b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4372b3:{NFSU2_TR(0x4372b3);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4372b6:{NFSU2_TR(0x4372b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4372b9:{NFSU2_TR(0x4372b9);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4372bc:{NFSU2_TR(0x4372bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B4372bf:{NFSU2_TR(0x4372bf);
__builtin_memmove((R+0),gp(0x827ee8),1);
}
B4372c4:{NFSU2_TR(0x4372c4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4372c6:{NFSU2_TR(0x4372c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4372c8:{NFSU2_TR(0x4372c8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4372cc:{NFSU2_TR(0x4372cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4372d0:{NFSU2_TR(0x4372d0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4372d4:{NFSU2_TR(0x4372d4);
if(r1(R+518)){{goto L43731b;}}
}
B4372d6:L4372d6:{c.instructions+=3;NFSU2_TR(0x4372d6);
__builtin_memmove((R+0),gp(0x865020),4);
}
B4372db:{NFSU2_TR(0x4372db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4372dd:{NFSU2_TR(0x4372dd);
if(r1(R+518)){{goto L4372e9;}}
}
B4372df:L4372df:{c.instructions+=3;NFSU2_TR(0x4372df);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4372e1:{NFSU2_TR(0x4372e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4372e2:{NFSU2_TR(0x4372e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4372e7ull));
TAIL_STATIC(0x5d8620u,5d8);
}
B4372e7:L4372e7:{c.instructions+=1;NFSU2_TR(0x4372e7);
{goto L437304;}
}
B4372e9:L4372e9:{c.instructions+=4;NFSU2_TR(0x4372e9);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B4372ee:{NFSU2_TR(0x4372ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4372f0:{NFSU2_TR(0x4372f0);
w4(R+0,u32(0x785d18ull));
}
B4372f5:{NFSU2_TR(0x4372f5);
if(r1(R+518)){{goto L4372fc;}}
}
B4372f7:L4372f7:{c.instructions+=1;NFSU2_TR(0x4372f7);
w4(R+0,u32(0x785cf0ull));
}
B4372fc:L4372fc:{c.instructions+=3;NFSU2_TR(0x4372fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4372fe:{NFSU2_TR(0x4372fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4372ff:{NFSU2_TR(0x4372ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437304ull));
TAIL_STATIC(0x5d8660u,5d8);
}
B437304:L437304:{c.instructions+=3;NFSU2_TR(0x437304);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B437307:{NFSU2_TR(0x437307);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437309:{NFSU2_TR(0x437309);
if(r1(R+518)){{goto L43734e;}}
}
B43730b:L43730b:{c.instructions+=5;NFSU2_TR(0x43730b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43730e:{NFSU2_TR(0x43730e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437312:{NFSU2_TR(0x437312);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437315:{NFSU2_TR(0x437315);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437319:{NFSU2_TR(0x437319);
{goto L43734e;}
}
B43731b:L43731b:{c.instructions+=8;NFSU2_TR(0x43731b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43731d:{NFSU2_TR(0x43731d);
__builtin_memmove((R+0),gp(0x827ed8),1);
}
B437322:{NFSU2_TR(0x437322);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B437326:{NFSU2_TR(0x437326);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43732a:{NFSU2_TR(0x43732a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43732b:{NFSU2_TR(0x43732b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43732c:{NFSU2_TR(0x43732c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43732d:{NFSU2_TR(0x43732d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437332ull));
TAIL_STATIC(0x431930u,431);
}
B437332:L437332:{c.instructions+=4;NFSU2_TR(0x437332);
__builtin_memmove((R+0),gp(0x827ed8),1);
}
B437337:{NFSU2_TR(0x437337);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B43733a:{NFSU2_TR(0x43733a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43733c:{NFSU2_TR(0x43733c);
if(r1(R+518)){{goto L437347;}}
}
B43733e:L43733e:{c.instructions+=2;NFSU2_TR(0x43733e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B437345:{NFSU2_TR(0x437345);
{goto L43734e;}
}
B437347:L437347:{c.instructions+=1;NFSU2_TR(0x437347);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x41200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43734e:L43734e:{c.instructions+=5;NFSU2_TR(0x43734e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B437352:{NFSU2_TR(0x437352);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437353:{NFSU2_TR(0x437353);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437355:{NFSU2_TR(0x437355);
w4(R+4,u32(0x88eb00ull));
}
B43735a:{NFSU2_TR(0x43735a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43735full));
TAIL_STATIC(0x5d5fd0u,5d5);
}
B43735f:L43735f:{c.instructions+=9;NFSU2_TR(0x43735f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B437361:{NFSU2_TR(0x437361);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B437363:{NFSU2_TR(0x437363);
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
B437365:{NFSU2_TR(0x437365);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B437366:{NFSU2_TR(0x437366);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B437369:{NFSU2_TR(0x437369);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43736a:{NFSU2_TR(0x43736a);
__builtin_memmove((R+16),(R+20),4);
}
B43736c:{NFSU2_TR(0x43736c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43736d:{NFSU2_TR(0x43736d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437370:L437370:{c.instructions+=5;NFSU2_TR(0x437370);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437371:{NFSU2_TR(0x437371);
__builtin_memmove((R+24),(R+4),4);
}
B437373:{NFSU2_TR(0x437373);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437376:{NFSU2_TR(0x437376);
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
B437378:{NFSU2_TR(0x437378);
if(r1(R+518)){{goto L437391;}}
}
B43737a:L43737a:{c.instructions+=5;NFSU2_TR(0x43737a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43737d:{NFSU2_TR(0x43737d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43737e:{NFSU2_TR(0x43737e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43737f:{NFSU2_TR(0x43737f);
w4(R+4,u32(0x827b88ull));
}
B437384:{NFSU2_TR(0x437384);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437389ull));
TAIL_STATIC(0x435be0u,435);
}
B437389:L437389:{c.instructions+=2;NFSU2_TR(0x437389);
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
B43738b:{NFSU2_TR(0x43738b);
if(r1(R+518)){{goto L437391;}}
}
B43738d:L43738d:{c.instructions+=1;NFSU2_TR(0x43738d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B437391:L437391:{c.instructions+=3;NFSU2_TR(0x437391);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B437394:{NFSU2_TR(0x437394);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B437395:{NFSU2_TR(0x437395);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4373a0:L4373a0:{c.instructions+=8;NFSU2_TR(0x4373a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4373a1:{NFSU2_TR(0x4373a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4373a2:{NFSU2_TR(0x4373a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4373a3:{NFSU2_TR(0x4373a3);
__builtin_memmove((R+28),(R+4),4);
}
B4373a5:{NFSU2_TR(0x4373a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4373a8:{NFSU2_TR(0x4373a8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4373aa:{NFSU2_TR(0x4373aa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4373ac:{NFSU2_TR(0x4373ac);
if(r1(R+518)){{goto L43740e;}}
}
B4373ae:L4373ae:{c.instructions+=4;NFSU2_TR(0x4373ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4373b1:{NFSU2_TR(0x4373b1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4373b3:{NFSU2_TR(0x4373b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4373b6:{NFSU2_TR(0x4373b6);
if(r1(R+518)){{goto L4373c4;}}
}
B4373b8:L4373b8:{c.instructions+=2;NFSU2_TR(0x4373b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4373b9:{NFSU2_TR(0x4373b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4373beull));
TAIL_STATIC(0x575630u,575);
}
B4373be:L4373be:{c.instructions+=2;NFSU2_TR(0x4373be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4373c1:{NFSU2_TR(0x4373c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4373c4:L4373c4:{c.instructions+=4;NFSU2_TR(0x4373c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4373c7:{NFSU2_TR(0x4373c7);
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
B4373c9:{NFSU2_TR(0x4373c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4373cc:{NFSU2_TR(0x4373cc);
if(r1(R+518)){{goto L4373dd;}}
}
B4373ce:L4373ce:{c.instructions+=3;NFSU2_TR(0x4373ce);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4373d0:{NFSU2_TR(0x4373d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4373d1:{NFSU2_TR(0x4373d1);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4373d7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4373d7:L4373d7:{c.instructions+=2;NFSU2_TR(0x4373d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4373da:{NFSU2_TR(0x4373da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4373dd:L4373dd:{c.instructions+=3;NFSU2_TR(0x4373dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4373e0:{NFSU2_TR(0x4373e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4373e3:{NFSU2_TR(0x4373e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4373e8ull));
TAIL_STATIC(0x4315b0u,431);
}
B4373e8:L4373e8:{c.instructions+=3;NFSU2_TR(0x4373e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4373eb:{NFSU2_TR(0x4373eb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4373ed:{NFSU2_TR(0x4373ed);
if(r1(R+518)){{goto L43740b;}}
}
B4373ef:L4373ef:{c.instructions+=2;NFSU2_TR(0x4373ef);
__builtin_memmove((R+4),(R+24),4);
}
B4373f1:{NFSU2_TR(0x4373f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4373f6ull));
TAIL_STATIC(0x436650u,436);
}
B4373f6:L4373f6:{c.instructions+=5;NFSU2_TR(0x4373f6);
s4(0x827b70,u32(u32(m4(0x827b70))-u32(u32(0x1ull))));
}
B4373fc:{NFSU2_TR(0x4373fc);
__builtin_memmove((R+0),gp(0x827efc),4);
}
B437401:{NFSU2_TR(0x437401);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437402:{NFSU2_TR(0x437402);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437403:{NFSU2_TR(0x437403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437408ull));
TAIL_STATIC(0x43f920u,43f);
}
B437408:L437408:{c.instructions+=1;NFSU2_TR(0x437408);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43740b:L43740b:{c.instructions+=1;NFSU2_TR(0x43740b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43740e:L43740e:{c.instructions+=3;NFSU2_TR(0x43740e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B437411:{NFSU2_TR(0x437411);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B437413:{NFSU2_TR(0x437413);
if(r1(R+518)){{goto L43742f;}}
}
B437415:L437415:{c.instructions+=2;NFSU2_TR(0x437415);
__builtin_memmove((R+4),(R+24),4);
}
B437417:{NFSU2_TR(0x437417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43741cull));
TAIL_STATIC(0x633fd0u,633);
}
B43741c:L43741c:{c.instructions+=4;NFSU2_TR(0x43741c);
__builtin_memmove((R+4),gp(0x8a1d08),4);
}
B437422:{NFSU2_TR(0x437422);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437423:{NFSU2_TR(0x437423);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437424:{NFSU2_TR(0x437424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437429ull));
TAIL_STATIC(0x43f920u,43f);
}
B437429:L437429:{c.instructions+=2;NFSU2_TR(0x437429);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43742c:{NFSU2_TR(0x43742c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43742f:L43742f:{c.instructions+=3;NFSU2_TR(0x43742f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B437432:{NFSU2_TR(0x437432);
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
B437434:{NFSU2_TR(0x437434);
if(r1(R+518)){{goto L43743f;}}
}
B437436:L437436:{c.instructions+=2;NFSU2_TR(0x437436);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437437:{NFSU2_TR(0x437437);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43743cull));
TAIL_STATIC(0x61f5a0u,61f);
}
B43743c:L43743c:{c.instructions+=1;NFSU2_TR(0x43743c);
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
B43743f:L43743f:{c.instructions+=4;NFSU2_TR(0x43743f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B437440:{NFSU2_TR(0x437440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B437441:{NFSU2_TR(0x437441);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B437442:{NFSU2_TR(0x437442);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437450:L437450:{c.instructions+=22;NFSU2_TR(0x437450);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437452:{NFSU2_TR(0x437452);
u8 U[4];
w4(U+0,u32(0x771d6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437457:{NFSU2_TR(0x437457);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43745d:{NFSU2_TR(0x43745d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43745e:{NFSU2_TR(0x43745e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437465:{NFSU2_TR(0x437465);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437466:{NFSU2_TR(0x437466);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437467:{NFSU2_TR(0x437467);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437468:{NFSU2_TR(0x437468);
__builtin_memmove((R+20),(R+4),4);
}
B43746a:{NFSU2_TR(0x43746a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43746d:{NFSU2_TR(0x43746d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43746e:{NFSU2_TR(0x43746e);
u8 U[4];
w4(U+0,u32(0x786388ull));
s4(u32(r4(R+20)),r4(U+0));
}
B437475:{NFSU2_TR(0x437475);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437476:{NFSU2_TR(0x437476);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43747a:{NFSU2_TR(0x43747a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+12)),r4(U+0));
}
B43747c:{NFSU2_TR(0x43747c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43747f:{NFSU2_TR(0x43747f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437483:{NFSU2_TR(0x437483);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B437487:{NFSU2_TR(0x437487);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43748a:{NFSU2_TR(0x43748a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B43748c:{NFSU2_TR(0x43748c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B437494:{NFSU2_TR(0x437494);
if(r1(R+518)){{goto L4374d0;}}
}
B437496:L437496:{c.instructions+=8;NFSU2_TR(0x437496);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437499:{NFSU2_TR(0x437499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43749b:{NFSU2_TR(0x43749b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43749e:{NFSU2_TR(0x43749e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4374a1:{NFSU2_TR(0x4374a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4374a3:{NFSU2_TR(0x4374a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4374a4:{NFSU2_TR(0x4374a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4374a7:{NFSU2_TR(0x4374a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4374acull));
TAIL_STATIC(0x440ef0u,440);
}
B4374ac:L4374ac:{c.instructions+=2;NFSU2_TR(0x4374ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4374af:{NFSU2_TR(0x4374af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4374b4ull));
TAIL_STATIC(0x440ec0u,440);
}
B4374b4:L4374b4:{c.instructions+=2;NFSU2_TR(0x4374b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4374b6:{NFSU2_TR(0x4374b6);
if(r1(R+518)){{goto L4374bd;}}
}
B4374b8:L4374b8:{c.instructions+=2;NFSU2_TR(0x4374b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4374bb:{NFSU2_TR(0x4374bb);
{goto L4374bf;}
}
B4374bd:L4374bd:{c.instructions+=1;NFSU2_TR(0x4374bd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4374bf:L4374bf:{c.instructions+=4;NFSU2_TR(0x4374bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4374c0:{NFSU2_TR(0x4374c0);
u8 U[4];
w4(U+0,u32(0x4306a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4374c5:{NFSU2_TR(0x4374c5);
__builtin_memmove((R+4),(R+12),4);
}
B4374c7:{NFSU2_TR(0x4374c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4374ccull));
TAIL_STATIC(0x43bee0u,43b);
}
B4374cc:L4374cc:{c.instructions+=2;NFSU2_TR(0x4374cc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4374ce:{NFSU2_TR(0x4374ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437496u);}goto L437496;}}
}
B4374d0:L4374d0:{c.instructions+=3;NFSU2_TR(0x4374d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4374d4:{NFSU2_TR(0x4374d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4374d7:{NFSU2_TR(0x4374d7);
w4(R+4,u32(0x10ull));
}
B4374dc:L4374dc:{c.instructions+=1;NFSU2_TR(0x4374dc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4374de;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4374dcu);}goto L4374dc;}
}
B4374de:L4374de:{c.instructions+=9;NFSU2_TR(0x4374de);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4374e2:{NFSU2_TR(0x4374e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4374e3:{NFSU2_TR(0x4374e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4374e4:{NFSU2_TR(0x4374e4);
__builtin_memmove((R+0),(R+20),4);
}
B4374e6:{NFSU2_TR(0x4374e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4374e7:{NFSU2_TR(0x4374e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4374e8:{NFSU2_TR(0x4374e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4374ef:{NFSU2_TR(0x4374ef);
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
B4374f2:{NFSU2_TR(0x4374f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437500:L437500:{c.instructions+=16;NFSU2_TR(0x437500);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437502:{NFSU2_TR(0x437502);
u8 U[4];
w4(U+0,u32(0x771d4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437507:{NFSU2_TR(0x437507);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43750d:{NFSU2_TR(0x43750d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43750e:{NFSU2_TR(0x43750e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437515:{NFSU2_TR(0x437515);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437516:{NFSU2_TR(0x437516);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437517:{NFSU2_TR(0x437517);
__builtin_memmove((R+12),(R+4),4);
}
B437519:{NFSU2_TR(0x437519);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43751a:{NFSU2_TR(0x43751a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43751e:{NFSU2_TR(0x43751e);
u8 U[4];
w4(U+0,u32(0x78638cull));
s4(u32(r4(R+12)),r4(U+0));
}
B437524:{NFSU2_TR(0x437524);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437527:{NFSU2_TR(0x437527);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43752a:{NFSU2_TR(0x43752a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43752c:{NFSU2_TR(0x43752c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B437534:{NFSU2_TR(0x437534);
if(r1(R+518)){{goto L437564;}}
}
B437536:L437536:{c.instructions+=1;NFSU2_TR(0x437536);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437537:L437537:{c.instructions+=8;NFSU2_TR(0x437537);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43753a:{NFSU2_TR(0x43753a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43753c:{NFSU2_TR(0x43753c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43753f:{NFSU2_TR(0x43753f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B437542:{NFSU2_TR(0x437542);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B437544:{NFSU2_TR(0x437544);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437545:{NFSU2_TR(0x437545);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437548:{NFSU2_TR(0x437548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43754dull));
TAIL_STATIC(0x440ef0u,440);
}
B43754d:L43754d:{c.instructions+=4;NFSU2_TR(0x43754d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43754f:{NFSU2_TR(0x43754f);
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
B437552:{NFSU2_TR(0x437552);
__builtin_memmove((R+4),(R+24),4);
}
B437554:{NFSU2_TR(0x437554);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437557ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B437557:L437557:{c.instructions+=4;NFSU2_TR(0x437557);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B437559:{NFSU2_TR(0x437559);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43755b:{NFSU2_TR(0x43755b);
__builtin_memmove((R+4),(R+24),4);
}
B43755d:{NFSU2_TR(0x43755d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43755full));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B43755f:L43755f:{c.instructions+=2;NFSU2_TR(0x43755f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B437561:{NFSU2_TR(0x437561);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437537u);}goto L437537;}}
}
B437563:L437563:{c.instructions+=1;NFSU2_TR(0x437563);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B437564:L437564:{c.instructions+=3;NFSU2_TR(0x437564);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437567:{NFSU2_TR(0x437567);
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
B437569:{NFSU2_TR(0x437569);
if(r1(R+518)){{goto L437571;}}
}
B43756b:L43756b:{c.instructions+=3;NFSU2_TR(0x43756b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43756d:{NFSU2_TR(0x43756d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43756f:{NFSU2_TR(0x43756f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437571ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B437571:L437571:{c.instructions+=4;NFSU2_TR(0x437571);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B437573:{NFSU2_TR(0x437573);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B437575:{NFSU2_TR(0x437575);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B43757d:{NFSU2_TR(0x43757d);
if(r1(R+518)){{goto L437599;}}
}
B43757f:L43757f:{c.instructions+=1;NFSU2_TR(0x43757f);
}
B437580:L437580:{c.instructions+=6;NFSU2_TR(0x437580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B437582:{NFSU2_TR(0x437582);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437585:{NFSU2_TR(0x437585);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B437587:{NFSU2_TR(0x437587);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437588:{NFSU2_TR(0x437588);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43758b:{NFSU2_TR(0x43758b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437590ull));
TAIL_STATIC(0x440ef0u,440);
}
B437590:L437590:{c.instructions+=4;NFSU2_TR(0x437590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B437592:{NFSU2_TR(0x437592);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B437595:{NFSU2_TR(0x437595);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B437597:{NFSU2_TR(0x437597);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437580u);}goto L437580;}}
}
B437599:L437599:{c.instructions+=6;NFSU2_TR(0x437599);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43759d:{NFSU2_TR(0x43759d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43759e:{NFSU2_TR(0x43759e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43759f:{NFSU2_TR(0x43759f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4375a6:{NFSU2_TR(0x4375a6);
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
B4375a9:{NFSU2_TR(0x4375a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4375b0:L4375b0:{c.instructions+=16;NFSU2_TR(0x4375b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4375b2:{NFSU2_TR(0x4375b2);
u8 U[4];
w4(U+0,u32(0x771d6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4375b7:{NFSU2_TR(0x4375b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4375bd:{NFSU2_TR(0x4375bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4375be:{NFSU2_TR(0x4375be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4375c5:{NFSU2_TR(0x4375c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4375c6:{NFSU2_TR(0x4375c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4375c7:{NFSU2_TR(0x4375c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4375c8:{NFSU2_TR(0x4375c8);
__builtin_memmove((R+28),(R+4),4);
}
B4375ca:{NFSU2_TR(0x4375ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4375ce:{NFSU2_TR(0x4375ce);
u8 U[4];
w4(U+0,u32(0x786388ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4375d4:{NFSU2_TR(0x4375d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4375d7:{NFSU2_TR(0x4375d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4375da:{NFSU2_TR(0x4375da);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4375dc:{NFSU2_TR(0x4375dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4375e4:{NFSU2_TR(0x4375e4);
if(r1(R+518)){{goto L437602;}}
}
B4375e6:L4375e6:{c.instructions+=7;NFSU2_TR(0x4375e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4375e9:{NFSU2_TR(0x4375e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4375eb:{NFSU2_TR(0x4375eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4375ee:{NFSU2_TR(0x4375ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4375f0:{NFSU2_TR(0x4375f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4375f1:{NFSU2_TR(0x4375f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4375f4:{NFSU2_TR(0x4375f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4375f9ull));
TAIL_STATIC(0x440ef0u,440);
}
B4375f9:L4375f9:{c.instructions+=4;NFSU2_TR(0x4375f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4375fb:{NFSU2_TR(0x4375fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4375fe:{NFSU2_TR(0x4375fe);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B437600:{NFSU2_TR(0x437600);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4375e6u);}goto L4375e6;}}
}
B437602:L437602:{c.instructions+=4;NFSU2_TR(0x437602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B437604:{NFSU2_TR(0x437604);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B437606:{NFSU2_TR(0x437606);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B43760e:{NFSU2_TR(0x43760e);
if(r1(R+518)){{goto L437629;}}
}
B437610:L437610:{c.instructions+=6;NFSU2_TR(0x437610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B437612:{NFSU2_TR(0x437612);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437615:{NFSU2_TR(0x437615);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B437617:{NFSU2_TR(0x437617);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437618:{NFSU2_TR(0x437618);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43761b:{NFSU2_TR(0x43761b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437620ull));
TAIL_STATIC(0x440ef0u,440);
}
B437620:L437620:{c.instructions+=4;NFSU2_TR(0x437620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B437622:{NFSU2_TR(0x437622);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B437625:{NFSU2_TR(0x437625);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B437627:{NFSU2_TR(0x437627);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437610u);}goto L437610;}}
}
B437629:L437629:{c.instructions+=6;NFSU2_TR(0x437629);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43762d:{NFSU2_TR(0x43762d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43762e:{NFSU2_TR(0x43762e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43762f:{NFSU2_TR(0x43762f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437636:{NFSU2_TR(0x437636);
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
B437639:{NFSU2_TR(0x437639);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437640:L437640:{c.instructions+=3;NFSU2_TR(0x437640);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437641:{NFSU2_TR(0x437641);
__builtin_memmove((R+24),(R+4),4);
}
B437643:{NFSU2_TR(0x437643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437648ull));
TAIL_STATIC(0x435b30u,435);
}
B437648:L437648:{c.instructions+=2;NFSU2_TR(0x437648);
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
B43764d:{NFSU2_TR(0x43764d);
if(r1(R+518)){{goto L437658;}}
}
B43764f:L43764f:{c.instructions+=2;NFSU2_TR(0x43764f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437650:{NFSU2_TR(0x437650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437655ull));
TAIL_STATIC(0x575630u,575);
}
B437655:L437655:{c.instructions+=1;NFSU2_TR(0x437655);
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
B437658:L437658:{c.instructions+=3;NFSU2_TR(0x437658);
__builtin_memmove((R+0),(R+24),4);
}
B43765a:{NFSU2_TR(0x43765a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43765b:{NFSU2_TR(0x43765b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437660:L437660:{c.instructions+=5;NFSU2_TR(0x437660);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437661:{NFSU2_TR(0x437661);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437662:{NFSU2_TR(0x437662);
__builtin_memmove((R+24),gp(0x827c60),4);
}
B437668:{NFSU2_TR(0x437668);
w4(R+4,u32(0x827c60ull));
}
B43766d:{NFSU2_TR(0x43766d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437672ull));
TAIL_STATIC(0x502fd0u,502);
}
B437672:L437672:{c.instructions+=3;NFSU2_TR(0x437672);
__builtin_memmove((R+12),(R+0),4);
}
B437674:{NFSU2_TR(0x437674);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B437676:{NFSU2_TR(0x437676);
if(r1(R+518)){{goto L4376e1;}}
}
B437678:L437678:{c.instructions+=2;NFSU2_TR(0x437678);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437679:{NFSU2_TR(0x437679);
__builtin_memmove((R+16),(R+16),4);
}
B437680:L437680:{c.instructions+=4;NFSU2_TR(0x437680);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437683:{NFSU2_TR(0x437683);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B437685:{NFSU2_TR(0x437685);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437687:{NFSU2_TR(0x437687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43768cull));
TAIL_STATIC(0x571010u,571);
}
B43768c:L43768c:{c.instructions+=3;NFSU2_TR(0x43768c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43768f:{NFSU2_TR(0x43768f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437690:{NFSU2_TR(0x437690);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437695ull));
TAIL_STATIC(0x580e90u,580);
}
B437695:L437695:{c.instructions+=4;NFSU2_TR(0x437695);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B437698:{NFSU2_TR(0x437698);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43769b:{NFSU2_TR(0x43769b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43769d:{NFSU2_TR(0x43769d);
if(r1(R+518)){{goto L4376b5;}}
}
B43769f:L43769f:{c.instructions+=5;NFSU2_TR(0x43769f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4376a2:{NFSU2_TR(0x4376a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4376a8:{NFSU2_TR(0x4376a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4376a9:{NFSU2_TR(0x4376a9);
w4(R+4,u32(0x88eb00ull));
}
B4376ae:{NFSU2_TR(0x4376ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4376b3ull));
TAIL_STATIC(0x5d6130u,5d6);
}
B4376b3:L4376b3:{c.instructions+=1;NFSU2_TR(0x4376b3);
{goto L4376c7;}
}
B4376b5:L4376b5:{c.instructions+=4;NFSU2_TR(0x4376b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4376b8:{NFSU2_TR(0x4376b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4376be:{NFSU2_TR(0x4376be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4376bf:{NFSU2_TR(0x4376bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4376c4ull));
TAIL_STATIC(0x440540u,440);
}
B4376c4:L4376c4:{c.instructions+=1;NFSU2_TR(0x4376c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4376c7:L4376c7:{c.instructions+=6;NFSU2_TR(0x4376c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4376c9:{NFSU2_TR(0x4376c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4376cc:{NFSU2_TR(0x4376cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4376ce:{NFSU2_TR(0x4376ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4376cf:{NFSU2_TR(0x4376cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4376d2:{NFSU2_TR(0x4376d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4376d7ull));
TAIL_STATIC(0x575630u,575);
}
B4376d7:L4376d7:{c.instructions+=4;NFSU2_TR(0x4376d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4376da:{NFSU2_TR(0x4376da);
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
B4376dc:{NFSU2_TR(0x4376dc);
__builtin_memmove((R+24),(R+28),4);
}
B4376de:{NFSU2_TR(0x4376de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437680u);}goto L437680;}}
}
B4376e0:L4376e0:{c.instructions+=1;NFSU2_TR(0x4376e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4376e1:L4376e1:{c.instructions+=3;NFSU2_TR(0x4376e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4376e2:{NFSU2_TR(0x4376e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4376e3:{NFSU2_TR(0x4376e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4376f0:L4376f0:{c.instructions+=3;NFSU2_TR(0x4376f0);
__builtin_memmove((R+0),gp(0x827b00),1);
}
B4376f5:{NFSU2_TR(0x4376f5);
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
B4376f7:{NFSU2_TR(0x4376f7);
if(r1(R+518)){{goto L4376fe;}}
}
B4376f9:L4376f9:{c.instructions+=2;NFSU2_TR(0x4376f9);
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
B4376fb:{NFSU2_TR(0x4376fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4376fe:L4376fe:{c.instructions+=1;NFSU2_TR(0x4376fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437703ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437660u);}goto L437660;}
}
B437703:L437703:{c.instructions+=3;NFSU2_TR(0x437703);
__builtin_memmove((R+0),gp(0x827c38),1);
}
B437708:{NFSU2_TR(0x437708);
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
B43770a:{NFSU2_TR(0x43770a);
if(r1(R+518)){{goto L437719;}}
}
B43770c:L43770c:{c.instructions+=3;NFSU2_TR(0x43770c);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B437712:{NFSU2_TR(0x437712);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437714:{NFSU2_TR(0x437714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437719ull));
TAIL_STATIC(0x4791b0u,479);
}
B437719:L437719:{c.instructions+=2;NFSU2_TR(0x437719);
w1(R+0,u8(0x1ull));
}
B43771b:{NFSU2_TR(0x43771b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437720:L437720:{c.instructions+=4;NFSU2_TR(0x437720);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437724:{NFSU2_TR(0x437724);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437725:{NFSU2_TR(0x437725);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437726:{NFSU2_TR(0x437726);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43772bull));
TAIL_STATIC(0x432490u,432);
}
B43772b:L43772b:{c.instructions+=3;NFSU2_TR(0x43772b);
__builtin_memmove((R+24),(R+0),4);
}
B43772d:{NFSU2_TR(0x43772d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43772f:{NFSU2_TR(0x43772f);
if(r1(R+518)){{goto L437754;}}
}
B437731:L437731:{c.instructions+=4;NFSU2_TR(0x437731);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437735:{NFSU2_TR(0x437735);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437736:{NFSU2_TR(0x437736);
__builtin_memmove((R+4),(R+24),4);
}
B437738:{NFSU2_TR(0x437738);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43773dull));
TAIL_STATIC(0x432670u,432);
}
B43773d:L43773d:{c.instructions+=2;NFSU2_TR(0x43773d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43773f:{NFSU2_TR(0x43773f);
if(r1(R+518)){{goto L437754;}}
}
B437741:L437741:{c.instructions+=5;NFSU2_TR(0x437741);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B437744:{NFSU2_TR(0x437744);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B437747:{NFSU2_TR(0x437747);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B437749:{NFSU2_TR(0x437749);
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
B43774c:{NFSU2_TR(0x43774c);
if(r1(R+514)){{goto L437754;}}
}
B43774e:L43774e:{c.instructions+=3;NFSU2_TR(0x43774e);
w1(R+0,u8(0x1ull));
}
B437750:{NFSU2_TR(0x437750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B437751:{NFSU2_TR(0x437751);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437754:L437754:{c.instructions+=3;NFSU2_TR(0x437754);
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
B437756:{NFSU2_TR(0x437756);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B437757:{NFSU2_TR(0x437757);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437760:L437760:{c.instructions+=6;NFSU2_TR(0x437760);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437761:{NFSU2_TR(0x437761);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B437764:{NFSU2_TR(0x437764);
u8 U[4];
w4(U+0,u32(0x786390ull));
s4(u32(r4(R+4)),r4(U+0));
}
B43776a:{NFSU2_TR(0x43776a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43776c:{NFSU2_TR(0x43776c);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B43776e:{NFSU2_TR(0x43776e);
if(r1(R+518)){{goto L437789;}}
}
B437770:L437770:{c.instructions+=6;NFSU2_TR(0x437770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B437772:{NFSU2_TR(0x437772);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437775:{NFSU2_TR(0x437775);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B437777:{NFSU2_TR(0x437777);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437778:{NFSU2_TR(0x437778);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43777b:{NFSU2_TR(0x43777b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437780ull));
TAIL_STATIC(0x575630u,575);
}
B437780:L437780:{c.instructions+=4;NFSU2_TR(0x437780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B437782:{NFSU2_TR(0x437782);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B437785:{NFSU2_TR(0x437785);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B437787:{NFSU2_TR(0x437787);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437770u);}goto L437770;}}
}
B437789:L437789:{c.instructions+=2;NFSU2_TR(0x437789);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43778a:{NFSU2_TR(0x43778a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437790:L437790:{c.instructions+=2;NFSU2_TR(0x437790);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437792:{NFSU2_TR(0x437792);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437797ull));
TAIL_STATIC(0x575620u,575);
}
B437797:L437797:{c.instructions+=3;NFSU2_TR(0x437797);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43779a:{NFSU2_TR(0x43779a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43779c:{NFSU2_TR(0x43779c);
if(r1(R+518)){{goto L4377e5;}}
}
B43779e:L43779e:{c.instructions+=19;NFSU2_TR(0x43779e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4377a2:{NFSU2_TR(0x4377a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4377a5:{NFSU2_TR(0x4377a5);
u8 U[4];
w4(U+0,u32(0x786390ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4377ab:{NFSU2_TR(0x4377ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4377b2:{NFSU2_TR(0x4377b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4377b5:{NFSU2_TR(0x4377b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4377b7:{NFSU2_TR(0x4377b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4377ba:{NFSU2_TR(0x4377ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4377be:{NFSU2_TR(0x4377be);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4377c1:{NFSU2_TR(0x4377c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4377c4:{NFSU2_TR(0x4377c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4377c7:{NFSU2_TR(0x4377c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4377ca:{NFSU2_TR(0x4377ca);
__builtin_memmove((R+8),gp(0x827b84),4);
}
B4377d0:{NFSU2_TR(0x4377d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4377d3:{NFSU2_TR(0x4377d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4377d5:{NFSU2_TR(0x4377d5);
__builtin_memmove(gp(0x827b84),(R+4),4);
}
B4377db:{NFSU2_TR(0x4377db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4377de:{NFSU2_TR(0x4377de);
u8 U[4];
w4(U+0,u32(0x827b80ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4377e4:{NFSU2_TR(0x4377e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4377e5:L4377e5:{c.instructions+=2;NFSU2_TR(0x4377e5);
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
B4377e7:{NFSU2_TR(0x4377e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4377f0:L4377f0:{c.instructions+=4;NFSU2_TR(0x4377f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4377f1:{NFSU2_TR(0x4377f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4377f5:{NFSU2_TR(0x4377f5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80037020ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4377fb:{NFSU2_TR(0x4377fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L437862;}}
}
B4377fd:L4377fd:{c.instructions+=9;NFSU2_TR(0x4377fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437800:{NFSU2_TR(0x437800);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437801:{NFSU2_TR(0x437801);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437802:{NFSU2_TR(0x437802);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437803:{NFSU2_TR(0x437803);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B437806:{NFSU2_TR(0x437806);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B43780a:{NFSU2_TR(0x43780a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43780c:{NFSU2_TR(0x43780c);
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
B43780e:{NFSU2_TR(0x43780e);
if(r1(R+518)){{goto L437858;}}
}
B437810:L437810:{c.instructions+=3;NFSU2_TR(0x437810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B437812:{NFSU2_TR(0x437812);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B437815:{NFSU2_TR(0x437815);
if(r1(R+518)){{goto L43784d;}}
}
B437817:L437817:{c.instructions+=2;NFSU2_TR(0x437817);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x37030ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43781c:{NFSU2_TR(0x43781c);
if(r1(R+518)){{goto L437841;}}
}
B43781e:L43781e:{c.instructions+=2;NFSU2_TR(0x43781e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B437821:{NFSU2_TR(0x437821);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43784d;}}
}
B437823:L437823:{c.instructions+=2;NFSU2_TR(0x437823);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437825:{NFSU2_TR(0x437825);
if(r1(R+518)){{goto L43784d;}}
}
B437827:L437827:{c.instructions+=9;NFSU2_TR(0x437827);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43782a:{NFSU2_TR(0x43782a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43782d:{NFSU2_TR(0x43782d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B437830:{NFSU2_TR(0x437830);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B437832:{NFSU2_TR(0x437832);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B437836:{NFSU2_TR(0x437836);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437837:{NFSU2_TR(0x437837);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437838:{NFSU2_TR(0x437838);
__builtin_memmove((R+4),(R+28),4);
}
B43783a:{NFSU2_TR(0x43783a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43783full));
TAIL_STATIC(0x435e10u,435);
}
B43783f:L43783f:{c.instructions+=1;NFSU2_TR(0x43783f);
{goto L43784d;}
}
B437841:L437841:{c.instructions+=3;NFSU2_TR(0x437841);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437842:{NFSU2_TR(0x437842);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437843:{NFSU2_TR(0x437843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437848ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437790u);}goto L437790;}
}
B437848:L437848:{c.instructions+=2;NFSU2_TR(0x437848);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43784b:{NFSU2_TR(0x43784b);
__builtin_memmove((R+28),(R+0),4);
}
B43784d:L43784d:{c.instructions+=4;NFSU2_TR(0x43784d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437850:{NFSU2_TR(0x437850);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B437854:{NFSU2_TR(0x437854);
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
B437856:{NFSU2_TR(0x437856);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437810u);}goto L437810;}}
}
B437858:L437858:{c.instructions+=6;NFSU2_TR(0x437858);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B437859:{NFSU2_TR(0x437859);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43785a:{NFSU2_TR(0x43785a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43785b:{NFSU2_TR(0x43785b);
w4(R+0,u32(0x1ull));
}
B437860:{NFSU2_TR(0x437860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B437861:{NFSU2_TR(0x437861);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437862:L437862:{c.instructions+=3;NFSU2_TR(0x437862);
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
B437864:{NFSU2_TR(0x437864);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B437865:{NFSU2_TR(0x437865);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437870:L437870:{c.instructions+=18;NFSU2_TR(0x437870);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437872:{NFSU2_TR(0x437872);
u8 U[4];
w4(U+0,u32(0x771da1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437877:{NFSU2_TR(0x437877);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43787d:{NFSU2_TR(0x43787d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43787e:{NFSU2_TR(0x43787e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437885:{NFSU2_TR(0x437885);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437886:{NFSU2_TR(0x437886);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437887:{NFSU2_TR(0x437887);
__builtin_memmove((R+24),(R+4),4);
}
B437889:{NFSU2_TR(0x437889);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43788d:{NFSU2_TR(0x43788d);
u8 U[4];
w4(U+0,u32(0x786394ull));
s4(u32(r4(R+24)),r4(U+0));
}
B437893:{NFSU2_TR(0x437893);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437898:{NFSU2_TR(0x437898);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43789a:{NFSU2_TR(0x43789a);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43789c:{NFSU2_TR(0x43789c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4378a2:{NFSU2_TR(0x4378a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4378a3:{NFSU2_TR(0x4378a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4378ab:{NFSU2_TR(0x4378ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
w4(U+4,u32(0x7860d0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4378b5:{NFSU2_TR(0x4378b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4378baull));
TAIL_STATIC(0x75c401u,75c);
}
B4378ba:L4378ba:{c.instructions+=3;NFSU2_TR(0x4378ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4378bd:{NFSU2_TR(0x4378bd);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4378c2:{NFSU2_TR(0x4378c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4378c7ull));
TAIL_STATIC(0x4358e0u,435);
}
B4378c7:L4378c7:{c.instructions+=3;NFSU2_TR(0x4378c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4378ca:{NFSU2_TR(0x4378ca);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4378cf:{NFSU2_TR(0x4378cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4378d4ull));
TAIL_STATIC(0x4358e0u,435);
}
B4378d4:L4378d4:{c.instructions+=5;NFSU2_TR(0x4378d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4378d7:{NFSU2_TR(0x4378d7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B4378da:{NFSU2_TR(0x4378da);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4378dc:{NFSU2_TR(0x4378dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4378e4:{NFSU2_TR(0x4378e4);
if(r1(R+518)){{goto L4378ff;}}
}
B4378e6:L4378e6:{c.instructions+=6;NFSU2_TR(0x4378e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4378e8:{NFSU2_TR(0x4378e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4378eb:{NFSU2_TR(0x4378eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4378ed:{NFSU2_TR(0x4378ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4378ee:{NFSU2_TR(0x4378ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4378f1:{NFSU2_TR(0x4378f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4378f6ull));
TAIL_STATIC(0x440ef0u,440);
}
B4378f6:L4378f6:{c.instructions+=4;NFSU2_TR(0x4378f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4378f8:{NFSU2_TR(0x4378f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4378fb:{NFSU2_TR(0x4378fb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4378fd:{NFSU2_TR(0x4378fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4378e6u);}goto L4378e6;}}
}
B4378ff:L4378ff:{c.instructions+=5;NFSU2_TR(0x4378ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437903:{NFSU2_TR(0x437903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B437904:{NFSU2_TR(0x437904);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43790b:{NFSU2_TR(0x43790b);
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
B43790e:{NFSU2_TR(0x43790e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437910:L437910:{c.instructions+=6;NFSU2_TR(0x437910);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437911:{NFSU2_TR(0x437911);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437912:{NFSU2_TR(0x437912);
__builtin_memmove((R+24),(R+4),4);
}
B437914:{NFSU2_TR(0x437914);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B437917:{NFSU2_TR(0x437917);
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
B437919:{NFSU2_TR(0x437919);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4379f5;}}
}
B43791f:L43791f:{c.instructions+=8;NFSU2_TR(0x43791f);
__builtin_memmove((R+4),gp(0x8900ac),4);
}
B437925:{NFSU2_TR(0x437925);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437928:{NFSU2_TR(0x437928);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437929:{NFSU2_TR(0x437929);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x234ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43792f:{NFSU2_TR(0x43792f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437931:{NFSU2_TR(0x437931);
__builtin_memmove((R+4),(R+24),4);
}
B437933:{NFSU2_TR(0x437933);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B437937:{NFSU2_TR(0x437937);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43793cull));
TAIL_STATIC(0x4326b0u,432);
}
B43793c:L43793c:{c.instructions+=2;NFSU2_TR(0x43793c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43793e:{NFSU2_TR(0x43793e);
if(r1(R+518)){{goto L4379b2;}}
}
B437940:L437940:{c.instructions+=5;NFSU2_TR(0x437940);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437943:{NFSU2_TR(0x437943);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437945:{NFSU2_TR(0x437945);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B437948:{NFSU2_TR(0x437948);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43794a:{NFSU2_TR(0x43794a);
if(r1(R+518)){{goto L4379b2;}}
}
B43794c:L43794c:{c.instructions+=16;NFSU2_TR(0x43794c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B437952:{NFSU2_TR(0x437952);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437955:{NFSU2_TR(0x437955);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B43795b:{NFSU2_TR(0x43795b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43795e:{NFSU2_TR(0x43795e);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B437961:{NFSU2_TR(0x437961);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B437963:{NFSU2_TR(0x437963);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B437966:{NFSU2_TR(0x437966);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B437969:{NFSU2_TR(0x437969);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43796d:{NFSU2_TR(0x43796d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437971:{NFSU2_TR(0x437971);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B437974:{NFSU2_TR(0x437974);
__builtin_memmove((R+4),gp(0x827afc),4);
}
B43797a:{NFSU2_TR(0x43797a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43797b:{NFSU2_TR(0x43797b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43797c:{NFSU2_TR(0x43797c);
__builtin_memmove((R+4),(R+24),4);
}
B43797e:{NFSU2_TR(0x43797e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437983ull));
TAIL_STATIC(0x435ea0u,435);
}
B437983:L437983:{c.instructions+=3;NFSU2_TR(0x437983);
__builtin_memmove((R+0),gp(0x890118),4);
}
B437988:{NFSU2_TR(0x437988);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43798a:{NFSU2_TR(0x43798a);
if(r1(R+518)){{goto L4379e9;}}
}
B43798c:L43798c:{c.instructions+=7;NFSU2_TR(0x43798c);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43798f:{NFSU2_TR(0x43798f);
__builtin_memmove((R+4),(R+24),4);
}
B437991:{NFSU2_TR(0x437991);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B437997:{NFSU2_TR(0x437997);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43799a:{NFSU2_TR(0x43799a);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4379a0:{NFSU2_TR(0x4379a0);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4379a3:{NFSU2_TR(0x4379a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4379a8ull));
TAIL_STATIC(0x435f40u,435);
}
B4379a8:L4379a8:{c.instructions+=6;NFSU2_TR(0x4379a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4379a9:{NFSU2_TR(0x4379a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4379ad:{NFSU2_TR(0x4379ad);
w1(R+0,u8(0x1ull));
}
B4379af:{NFSU2_TR(0x4379af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4379b0:{NFSU2_TR(0x4379b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4379b1:{NFSU2_TR(0x4379b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4379b2:L4379b2:{c.instructions+=16;NFSU2_TR(0x4379b2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4379b8:{NFSU2_TR(0x4379b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4379bb:{NFSU2_TR(0x4379bb);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4379c1:{NFSU2_TR(0x4379c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4379c4:{NFSU2_TR(0x4379c4);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4379c7:{NFSU2_TR(0x4379c7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4379c9:{NFSU2_TR(0x4379c9);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4379cc:{NFSU2_TR(0x4379cc);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B4379cf:{NFSU2_TR(0x4379cf);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4379d3:{NFSU2_TR(0x4379d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4379d7:{NFSU2_TR(0x4379d7);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4379da:{NFSU2_TR(0x4379da);
__builtin_memmove((R+4),gp(0x827afc),4);
}
B4379e0:{NFSU2_TR(0x4379e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4379e1:{NFSU2_TR(0x4379e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4379e2:{NFSU2_TR(0x4379e2);
__builtin_memmove((R+4),(R+24),4);
}
B4379e4:{NFSU2_TR(0x4379e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4379e9ull));
TAIL_STATIC(0x435ea0u,435);
}
B4379e9:L4379e9:{c.instructions+=2;NFSU2_TR(0x4379e9);
__builtin_memmove((R+4),(R+24),4);
}
B4379eb:{NFSU2_TR(0x4379eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4379f0ull));
TAIL_STATIC(0x435f40u,435);
}
B4379f0:L4379f0:{c.instructions+=2;NFSU2_TR(0x4379f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4379f4:{NFSU2_TR(0x4379f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4379f5:L4379f5:{c.instructions+=4;NFSU2_TR(0x4379f5);
w1(R+0,u8(0x1ull));
}
B4379f7:{NFSU2_TR(0x4379f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4379f8:{NFSU2_TR(0x4379f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4379f9:{NFSU2_TR(0x4379f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437a00:L437a00:{c.instructions+=4;NFSU2_TR(0x437a00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437a01:{NFSU2_TR(0x437a01);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437a03:{NFSU2_TR(0x437a03);
__builtin_memmove((R+24),(R+4),4);
}
B437a05:{NFSU2_TR(0x437a05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437a0aull));
TAIL_STATIC(0x4326b0u,432);
}
B437a0a:L437a0a:{c.instructions+=2;NFSU2_TR(0x437a0a);
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
B437a0c:{NFSU2_TR(0x437a0c);
if(r1(R+518)){{goto L437a71;}}
}
B437a0e:L437a0e:{c.instructions+=5;NFSU2_TR(0x437a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437a11:{NFSU2_TR(0x437a11);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437a13:{NFSU2_TR(0x437a13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B437a16:{NFSU2_TR(0x437a16);
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
B437a18:{NFSU2_TR(0x437a18);
if(r1(R+518)){{goto L437a71;}}
}
B437a1a:L437a1a:{c.instructions+=3;NFSU2_TR(0x437a1a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437a1c:{NFSU2_TR(0x437a1c);
__builtin_memmove((R+4),(R+24),4);
}
B437a1e:{NFSU2_TR(0x437a1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437a23ull));
TAIL_STATIC(0x4326b0u,432);
}
B437a23:L437a23:{c.instructions+=2;NFSU2_TR(0x437a23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437a25:{NFSU2_TR(0x437a25);
if(r1(R+518)){{goto L437a30;}}
}
B437a27:L437a27:{c.instructions+=2;NFSU2_TR(0x437a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B437a2e:{NFSU2_TR(0x437a2e);
{goto L437a3b;}
}
B437a30:L437a30:{c.instructions+=4;NFSU2_TR(0x437a30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437a32:{NFSU2_TR(0x437a32);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437a34:{NFSU2_TR(0x437a34);
__builtin_memmove((R+4),(R+24),4);
}
B437a36:{NFSU2_TR(0x437a36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437a3bull));
TAIL_STATIC(0x435ef0u,435);
}
B437a3b:L437a3b:{c.instructions+=1;NFSU2_TR(0x437a3b);
w4(R+24,u32(0x827ba8ull));
}
B437a40:L437a40:{c.instructions+=3;NFSU2_TR(0x437a40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B437a42:{NFSU2_TR(0x437a42);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B437a44:{NFSU2_TR(0x437a44);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L437a55;}}
}
B437a46:L437a46:{c.instructions+=3;NFSU2_TR(0x437a46);
__builtin_memmove((R+4),gp(0x890080),4);
}
B437a4c:{NFSU2_TR(0x437a4c);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B437a50:{NFSU2_TR(0x437a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437a55ull));
TAIL_STATIC(0x5f6d50u,5f6);
}
B437a55:L437a55:{c.instructions+=3;NFSU2_TR(0x437a55);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B437a58:{NFSU2_TR(0x437a58);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x827c48ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x827c48ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B437a5e:{NFSU2_TR(0x437a5e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437a40u);}goto L437a40;}}
}
B437a60:L437a60:{c.instructions+=2;NFSU2_TR(0x437a60);
__builtin_memmove((R+4),gp(0x890118),4);
}
B437a66:{NFSU2_TR(0x437a66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437a6bull));
TAIL_STATIC(0x5ef090u,5ef);
}
B437a6b:L437a6b:{c.instructions+=2;NFSU2_TR(0x437a6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B437a6c:{NFSU2_TR(0x437a6c);
TAIL_STATIC(0x576cd0u,576);
}
B437a71:L437a71:{c.instructions+=2;NFSU2_TR(0x437a71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B437a72:{NFSU2_TR(0x437a72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437a80:L437a80:{c.instructions+=8;NFSU2_TR(0x437a80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437a81:{NFSU2_TR(0x437a81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437a82:{NFSU2_TR(0x437a82);
__builtin_memmove((R+20),(R+4),4);
}
B437a84:{NFSU2_TR(0x437a84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437a85:{NFSU2_TR(0x437a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B437a88:{NFSU2_TR(0x437a88);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+12),(U+0),4);
}
B437a8b:{NFSU2_TR(0x437a8b);
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
B437a8d:{NFSU2_TR(0x437a8d);
if(r1(R+518)){{goto L437aaa;}}
}
B437a8f:L437a8f:{c.instructions+=1;NFSU2_TR(0x437a8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437a90:L437a90:{c.instructions+=4;NFSU2_TR(0x437a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B437a93:{NFSU2_TR(0x437a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B437a95:{NFSU2_TR(0x437a95);
__builtin_memmove((R+4),(R+24),4);
}
B437a97:{NFSU2_TR(0x437a97);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437a9aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B437a9a:L437a9a:{c.instructions+=4;NFSU2_TR(0x437a9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B437a9c:{NFSU2_TR(0x437a9c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437a9e:{NFSU2_TR(0x437a9e);
__builtin_memmove((R+4),(R+24),4);
}
B437aa0:{NFSU2_TR(0x437aa0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437aa2ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B437aa2:L437aa2:{c.instructions+=3;NFSU2_TR(0x437aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B437aa5:{NFSU2_TR(0x437aa5);
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
B437aa7:{NFSU2_TR(0x437aa7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437a90u);}goto L437a90;}}
}
B437aa9:L437aa9:{c.instructions+=1;NFSU2_TR(0x437aa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B437aaa:L437aaa:{c.instructions+=2;NFSU2_TR(0x437aaa);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B437aac:{NFSU2_TR(0x437aac);
if(r1(R+518)){{goto L437acc;}}
}
B437aae:L437aae:{c.instructions+=1;NFSU2_TR(0x437aae);
__builtin_memmove((R+28),(R+28),4);
}
B437ab0:L437ab0:{c.instructions+=7;NFSU2_TR(0x437ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437ab3:{NFSU2_TR(0x437ab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B437ab5:{NFSU2_TR(0x437ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437ab8:{NFSU2_TR(0x437ab8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B437aba:{NFSU2_TR(0x437aba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437abb:{NFSU2_TR(0x437abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437abe:{NFSU2_TR(0x437abe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437ac3ull));
TAIL_STATIC(0x440ef0u,440);
}
B437ac3:L437ac3:{c.instructions+=4;NFSU2_TR(0x437ac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B437ac5:{NFSU2_TR(0x437ac5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B437ac8:{NFSU2_TR(0x437ac8);
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
B437aca:{NFSU2_TR(0x437aca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437ab0u);}goto L437ab0;}}
}
B437acc:L437acc:{c.instructions+=4;NFSU2_TR(0x437acc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B437acd:{NFSU2_TR(0x437acd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B437ace:{NFSU2_TR(0x437ace);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B437acf:{NFSU2_TR(0x437acf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437ad0:L437ad0:{c.instructions+=5;NFSU2_TR(0x437ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437ad3:{NFSU2_TR(0x437ad3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437ad4:{NFSU2_TR(0x437ad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((R+24),(U+0),4);
}
B437ad7:{NFSU2_TR(0x437ad7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B437ad9:{NFSU2_TR(0x437ad9);
if(r1(R+518)){{goto L437af9;}}
}
B437adb:L437adb:{c.instructions+=1;NFSU2_TR(0x437adb);
{goto L437ae0;}
}
B437ae0:L437ae0:{c.instructions+=6;NFSU2_TR(0x437ae0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B437ae2:{NFSU2_TR(0x437ae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437ae5:{NFSU2_TR(0x437ae5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B437ae7:{NFSU2_TR(0x437ae7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437ae8:{NFSU2_TR(0x437ae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437aeb:{NFSU2_TR(0x437aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437af0ull));
TAIL_STATIC(0x575630u,575);
}
B437af0:L437af0:{c.instructions+=4;NFSU2_TR(0x437af0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B437af2:{NFSU2_TR(0x437af2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B437af5:{NFSU2_TR(0x437af5);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B437af7:{NFSU2_TR(0x437af7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437ae0u);}goto L437ae0;}}
}
B437af9:L437af9:{c.instructions+=2;NFSU2_TR(0x437af9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B437afa:{NFSU2_TR(0x437afa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437b00:L437b00:{c.instructions+=16;NFSU2_TR(0x437b00);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437b02:{NFSU2_TR(0x437b02);
u8 U[4];
w4(U+0,u32(0x771dd9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437b07:{NFSU2_TR(0x437b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437b0d:{NFSU2_TR(0x437b0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437b0e:{NFSU2_TR(0x437b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437b15:{NFSU2_TR(0x437b15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437b16:{NFSU2_TR(0x437b16);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437b17:{NFSU2_TR(0x437b17);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437b18:{NFSU2_TR(0x437b18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437b19:{NFSU2_TR(0x437b19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437b1a:{NFSU2_TR(0x437b1a);
__builtin_memmove((R+28),(R+4),4);
}
B437b1c:{NFSU2_TR(0x437b1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437b20:{NFSU2_TR(0x437b20);
w4(R+24,u32(0x2ull));
}
B437b25:{NFSU2_TR(0x437b25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437b26:{NFSU2_TR(0x437b26);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437b2a:{NFSU2_TR(0x437b2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437b2full));
TAIL_STATIC(0x494610u,494);
}
B437b2f:L437b2f:{c.instructions+=3;NFSU2_TR(0x437b2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B437b32:{NFSU2_TR(0x437b32);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437b33:{NFSU2_TR(0x437b33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437b38ull));
TAIL_STATIC(0x48e3b0u,48e);
}
B437b38:L437b38:{c.instructions+=3;NFSU2_TR(0x437b38);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((R+20),(U+0),4);
}
B437b3b:{NFSU2_TR(0x437b3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B437b3e:{NFSU2_TR(0x437b3e);
__builtin_memmove((R+0),(R+20),4);
}
B437b40:L437b40:{c.instructions+=7;NFSU2_TR(0x437b40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B437b42:{NFSU2_TR(0x437b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437b45:{NFSU2_TR(0x437b45);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
}
B437b48:{NFSU2_TR(0x437b48);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B437b49:{NFSU2_TR(0x437b49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B437b4b:{NFSU2_TR(0x437b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437b4e:{NFSU2_TR(0x437b4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437b40u);}goto L437b40;}}
}
B437b50:L437b50:{c.instructions+=6;NFSU2_TR(0x437b50);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437b55:{NFSU2_TR(0x437b55);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437b57:{NFSU2_TR(0x437b57);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437b59:{NFSU2_TR(0x437b59);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437b5a:{NFSU2_TR(0x437b5a);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B437b5f:{NFSU2_TR(0x437b5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437b64ull));
TAIL_STATIC(0x75c401u,75c);
}
B437b64:L437b64:{c.instructions+=5;NFSU2_TR(0x437b64);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437b67:{NFSU2_TR(0x437b67);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((R+24),(U+0),4);
}
B437b6a:{NFSU2_TR(0x437b6a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B437b6c:{NFSU2_TR(0x437b6c);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B437b71:{NFSU2_TR(0x437b71);
if(r1(R+518)){{goto L437b8c;}}
}
B437b73:L437b73:{c.instructions+=6;NFSU2_TR(0x437b73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B437b75:{NFSU2_TR(0x437b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437b78:{NFSU2_TR(0x437b78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B437b7a:{NFSU2_TR(0x437b7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437b7b:{NFSU2_TR(0x437b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437b7e:{NFSU2_TR(0x437b7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437b83ull));
TAIL_STATIC(0x575630u,575);
}
B437b83:L437b83:{c.instructions+=4;NFSU2_TR(0x437b83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B437b85:{NFSU2_TR(0x437b85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B437b88:{NFSU2_TR(0x437b88);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B437b8a:{NFSU2_TR(0x437b8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437b73u);}goto L437b73;}}
}
B437b8c:L437b8c:{c.instructions+=4;NFSU2_TR(0x437b8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B437b8e:{NFSU2_TR(0x437b8e);
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
B437b90:{NFSU2_TR(0x437b90);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B437b98:{NFSU2_TR(0x437b98);
if(r1(R+518)){{goto L437bcc;}}
}
B437b9a:L437b9a:{c.instructions+=1;NFSU2_TR(0x437b9a);
__builtin_memmove((R+12),(R+12),4);
}
B437ba0:L437ba0:{c.instructions+=6;NFSU2_TR(0x437ba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B437ba2:{NFSU2_TR(0x437ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437ba5:{NFSU2_TR(0x437ba5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B437ba7:{NFSU2_TR(0x437ba7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437ba8:{NFSU2_TR(0x437ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437bab:{NFSU2_TR(0x437bab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437bb0ull));
TAIL_STATIC(0x4903e0u,490);
}
B437bb0:L437bb0:{c.instructions+=5;NFSU2_TR(0x437bb0);
__builtin_memmove((R+12),gp(0x82da44),4);
}
B437bb6:{NFSU2_TR(0x437bb6);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B437bb7:{NFSU2_TR(0x437bb7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437bb8:{NFSU2_TR(0x437bb8);
__builtin_memmove(gp(0x82da44),(R+12),4);
}
B437bbe:{NFSU2_TR(0x437bbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437bc3ull));
TAIL_STATIC(0x575630u,575);
}
B437bc3:L437bc3:{c.instructions+=4;NFSU2_TR(0x437bc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B437bc5:{NFSU2_TR(0x437bc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B437bc8:{NFSU2_TR(0x437bc8);
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
B437bca:{NFSU2_TR(0x437bca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437ba0u);}goto L437ba0;}}
}
B437bcc:L437bcc:{c.instructions+=8;NFSU2_TR(0x437bcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437bd0:{NFSU2_TR(0x437bd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B437bd1:{NFSU2_TR(0x437bd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B437bd2:{NFSU2_TR(0x437bd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B437bd3:{NFSU2_TR(0x437bd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B437bd4:{NFSU2_TR(0x437bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437bdb:{NFSU2_TR(0x437bdb);
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
B437bde:{NFSU2_TR(0x437bde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437be0:L437be0:{c.instructions+=15;NFSU2_TR(0x437be0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437be1:{NFSU2_TR(0x437be1);
__builtin_memmove((R+20),(R+16),4);
}
B437be3:{NFSU2_TR(0x437be3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B437be6:{NFSU2_TR(0x437be6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437be8:{NFSU2_TR(0x437be8);
u8 U[4];
w4(U+0,u32(0x771e09ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437bed:{NFSU2_TR(0x437bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437bf3:{NFSU2_TR(0x437bf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437bf4:{NFSU2_TR(0x437bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437bfb:{NFSU2_TR(0x437bfb);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x388ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x388ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x388ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B437c01:{NFSU2_TR(0x437c01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437c02:{NFSU2_TR(0x437c02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437c03:{NFSU2_TR(0x437c03);
__builtin_memmove((R+24),(R+4),4);
}
B437c05:{NFSU2_TR(0x437c05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B437c07:{NFSU2_TR(0x437c07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437c08:{NFSU2_TR(0x437c08);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437c0bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B437c0b:L437c0b:{c.instructions+=9;NFSU2_TR(0x437c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437c0e:{NFSU2_TR(0x437c0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B437c10:{NFSU2_TR(0x437c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437c13:{NFSU2_TR(0x437c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437c16:{NFSU2_TR(0x437c16);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B437c18:{NFSU2_TR(0x437c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437c1b:{NFSU2_TR(0x437c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437c1e:{NFSU2_TR(0x437c1e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437c1f:{NFSU2_TR(0x437c1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437c24ull));
TAIL_STATIC(0x638010u,638);
}
B437c24:L437c24:{c.instructions+=6;NFSU2_TR(0x437c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437c27:{NFSU2_TR(0x437c27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B437c2a:{NFSU2_TR(0x437c2a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437c2b:{NFSU2_TR(0x437c2b);
__builtin_memmove((R+4),(R+0),4);
}
B437c2d:{NFSU2_TR(0x437c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437c30:{NFSU2_TR(0x437c30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437c35ull));
TAIL_STATIC(0x6345b0u,634);
}
B437c35:L437c35:{c.instructions+=10;NFSU2_TR(0x437c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437c38:{NFSU2_TR(0x437c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437c3b:{NFSU2_TR(0x437c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437c41:{NFSU2_TR(0x437c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437c44:{NFSU2_TR(0x437c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B437c47:{NFSU2_TR(0x437c47);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x10ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B437c4a:{NFSU2_TR(0x437c4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B437c4d:{NFSU2_TR(0x437c4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437c4e:{NFSU2_TR(0x437c4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437c4f:{NFSU2_TR(0x437c4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437c54ull));
TAIL_STATIC(0x4012b0u,401);
}
B437c54:L437c54:{c.instructions+=4;NFSU2_TR(0x437c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437c5a:{NFSU2_TR(0x437c5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B437c5d:{NFSU2_TR(0x437c5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437c5f:{NFSU2_TR(0x437c5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L437c68;}}
}
B437c61:L437c61:{c.instructions+=2;NFSU2_TR(0x437c61);
__builtin_memmove((R+4),(R+28),4);
}
B437c63:{NFSU2_TR(0x437c63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437c68ull));
TAIL_STATIC(0x6147e0u,614);
}
B437c68:L437c68:{c.instructions+=3;NFSU2_TR(0x437c68);
__builtin_memmove((R+8),gp(0x8a1d08),4);
}
B437c6e:{NFSU2_TR(0x437c6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437c6f:{NFSU2_TR(0x437c6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437c74ull));
TAIL_STATIC(0x440e50u,440);
}
B437c74:L437c74:{c.instructions+=6;NFSU2_TR(0x437c74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B437c77:{NFSU2_TR(0x437c77);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437c7b:{NFSU2_TR(0x437c7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437c7d:{NFSU2_TR(0x437c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B437c80:{NFSU2_TR(0x437c80);
u8 U[8];
w4(U+0,u32(u32(u32(0x39cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B437c8b:{NFSU2_TR(0x437c8b);
if(r1(R+518)){{goto L437ca0;}}
}
B437c8d:L437c8d:{c.instructions+=7;NFSU2_TR(0x437c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437c90:{NFSU2_TR(0x437c90);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437c92:{NFSU2_TR(0x437c92);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B437c95:{NFSU2_TR(0x437c95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437c96:{NFSU2_TR(0x437c96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437c97:{NFSU2_TR(0x437c97);
__builtin_memmove((R+4),(R+0),4);
}
B437c99:{NFSU2_TR(0x437c99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437c9eull));
TAIL_STATIC(0x61d050u,61d);
}
B437c9e:L437c9e:{c.instructions+=1;NFSU2_TR(0x437c9e);
{goto L437ca2;}
}
B437ca0:L437ca0:{c.instructions+=1;NFSU2_TR(0x437ca0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B437ca2:L437ca2:{c.instructions+=5;NFSU2_TR(0x437ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437ca5:{NFSU2_TR(0x437ca5);
__builtin_memmove((R+0),gp(0x827b54),4);
}
B437caa:{NFSU2_TR(0x437caa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437cab:{NFSU2_TR(0x437cab);
u8 U[8];
w4(U+0,u32(u32(u32(0x3a0ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B437cb6:{NFSU2_TR(0x437cb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437cbbull));
TAIL_STATIC(0x440e50u,440);
}
B437cbb:L437cbb:{c.instructions+=3;NFSU2_TR(0x437cbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B437cbe:{NFSU2_TR(0x437cbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437cc0:{NFSU2_TR(0x437cc0);
if(r1(R+518)){{goto L437ccb;}}
}
B437cc2:L437cc2:{c.instructions+=2;NFSU2_TR(0x437cc2);
__builtin_memmove((R+4),(R+0),4);
}
B437cc4:{NFSU2_TR(0x437cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437cc9ull));
TAIL_STATIC(0x4364e0u,436);
}
B437cc9:L437cc9:{c.instructions+=1;NFSU2_TR(0x437cc9);
{goto L437ccd;}
}
B437ccb:L437ccb:{c.instructions+=1;NFSU2_TR(0x437ccb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B437ccd:L437ccd:{c.instructions+=13;NFSU2_TR(0x437ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437cd0:{NFSU2_TR(0x437cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437cd3:{NFSU2_TR(0x437cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437cd9:{NFSU2_TR(0x437cd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437cdc:{NFSU2_TR(0x437cdc);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B437cdf:{NFSU2_TR(0x437cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437ce2:{NFSU2_TR(0x437ce2);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B437ce5:{NFSU2_TR(0x437ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437ce8:{NFSU2_TR(0x437ce8);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B437ceb:{NFSU2_TR(0x437ceb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B437cf1:{NFSU2_TR(0x437cf1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B437cf3:{NFSU2_TR(0x437cf3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B437cf6:{NFSU2_TR(0x437cf6);
if(r1(R+514)){{goto L437cff;}}
}
B437cf8:L437cf8:{c.instructions+=1;NFSU2_TR(0x437cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B437cff:L437cff:{c.instructions+=3;NFSU2_TR(0x437cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437d02:{NFSU2_TR(0x437d02);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B437d04:{NFSU2_TR(0x437d04);
if(r1(R+518)){{goto L437d0d;}}
}
B437d06:L437d06:{c.instructions+=2;NFSU2_TR(0x437d06);
w4(R+12,u32(0x60ull));
}
B437d0b:{NFSU2_TR(0x437d0b);
{goto L437d16;}
}
B437d0d:L437d0d:{c.instructions+=2;NFSU2_TR(0x437d0d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B437d0f:{NFSU2_TR(0x437d0f);
if(r1(R+518)){{goto L437d16;}}
}
B437d11:L437d11:{c.instructions+=1;NFSU2_TR(0x437d11);
w4(R+12,u32(0x20ull));
}
B437d16:L437d16:{c.instructions+=2;NFSU2_TR(0x437d16);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B437d18:{NFSU2_TR(0x437d18);
if(r1(R+518)){{goto L437d1f;}}
}
B437d1a:L437d1a:{c.instructions+=2;NFSU2_TR(0x437d1a);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x10ull))));
}
B437d1d:{NFSU2_TR(0x437d1d);
{goto L437d22;}
}
B437d1f:L437d1f:{c.instructions+=1;NFSU2_TR(0x437d1f);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x8ull))));
}
B437d22:L437d22:{c.instructions+=2;NFSU2_TR(0x437d22);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B437d24:{NFSU2_TR(0x437d24);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L437d2c;}}
}
B437d26:L437d26:{c.instructions+=1;NFSU2_TR(0x437d26);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x80ull))));
}
B437d2c:L437d2c:{c.instructions+=2;NFSU2_TR(0x437d2c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B437d2f:{NFSU2_TR(0x437d2f);
if(r1(R+518)){{goto L437d37;}}
}
B437d31:L437d31:{c.instructions+=1;NFSU2_TR(0x437d31);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x100ull))));
}
B437d37:L437d37:{c.instructions+=2;NFSU2_TR(0x437d37);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B437d3a:{NFSU2_TR(0x437d3a);
if(r1(R+518)){{goto L437d42;}}
}
B437d3c:L437d3c:{c.instructions+=1;NFSU2_TR(0x437d3c);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x200ull))));
}
B437d42:L437d42:{c.instructions+=2;NFSU2_TR(0x437d42);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B437d45:{NFSU2_TR(0x437d45);
if(r1(R+518)){{goto L437d4d;}}
}
B437d47:L437d47:{c.instructions+=1;NFSU2_TR(0x437d47);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x400ull))));
}
B437d4d:L437d4d:{c.instructions+=6;NFSU2_TR(0x437d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437d50:{NFSU2_TR(0x437d50);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B437d53:{NFSU2_TR(0x437d53);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437d57:{NFSU2_TR(0x437d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437d5a:{NFSU2_TR(0x437d5a);
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
B437d5c:{NFSU2_TR(0x437d5c);
if(r1(R+518)){{goto L437d8d;}}
}
B437d5e:L437d5e:{c.instructions+=2;NFSU2_TR(0x437d5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437d5f:{NFSU2_TR(0x437d5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437d64ull));
TAIL_STATIC(0x434dc0u,434);
}
B437d64:L437d64:{c.instructions+=3;NFSU2_TR(0x437d64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B437d67:{NFSU2_TR(0x437d67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437d69:{NFSU2_TR(0x437d69);
if(r1(R+518)){TAIL_STATIC(0x43800cu,438);}
}
B437d6f:L437d6f:{c.instructions+=3;NFSU2_TR(0x437d6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437d73:{NFSU2_TR(0x437d73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437d74:{NFSU2_TR(0x437d74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437d79ull));
TAIL_STATIC(0x434f20u,434);
}
B437d79:L437d79:{c.instructions+=4;NFSU2_TR(0x437d79);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437d7b:{NFSU2_TR(0x437d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437d7e:{NFSU2_TR(0x437d7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437d81:{NFSU2_TR(0x437d81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L437d88;}}
}
B437d83:L437d83:{c.instructions+=2;NFSU2_TR(0x437d83);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x29ull))));
}
B437d86:{NFSU2_TR(0x437d86);
{goto L437dc2;}
}
B437d88:L437d88:{c.instructions+=2;NFSU2_TR(0x437d88);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x1ull))));
}
B437d8b:{NFSU2_TR(0x437d8b);
{goto L437dc0;}
}
B437d8d:L437d8d:{c.instructions+=3;NFSU2_TR(0x437d8d);
__builtin_memmove((R+8),gp(0x827f60),4);
}
B437d93:{NFSU2_TR(0x437d93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437d94:{NFSU2_TR(0x437d94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437d99ull));
TAIL_STATIC(0x434dc0u,434);
}
B437d99:L437d99:{c.instructions+=3;NFSU2_TR(0x437d99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B437d9c:{NFSU2_TR(0x437d9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437d9e:{NFSU2_TR(0x437d9e);
if(r1(R+518)){TAIL_STATIC(0x43800cu,438);}
}
B437da4:L437da4:{c.instructions+=3;NFSU2_TR(0x437da4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437da8:{NFSU2_TR(0x437da8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437da9:{NFSU2_TR(0x437da9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437daeull));
TAIL_STATIC(0x434f20u,434);
}
B437dae:L437dae:{c.instructions+=4;NFSU2_TR(0x437dae);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437db0:{NFSU2_TR(0x437db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437db3:{NFSU2_TR(0x437db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437db6:{NFSU2_TR(0x437db6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L437dbd;}}
}
B437db8:L437db8:{c.instructions+=2;NFSU2_TR(0x437db8);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x2aull))));
}
B437dbb:{NFSU2_TR(0x437dbb);
{goto L437dc2;}
}
B437dbd:L437dbd:{c.instructions+=1;NFSU2_TR(0x437dbd);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x2ull))));
}
B437dc0:L437dc0:{c.instructions+=1;NFSU2_TR(0x437dc0);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+12))));
}
B437dc2:L437dc2:{c.instructions+=4;NFSU2_TR(0x437dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437dc5:{NFSU2_TR(0x437dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437dc8:{NFSU2_TR(0x437dc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437dca:{NFSU2_TR(0x437dca);
if(r1(R+518)){{goto L437dd7;}}
}
B437dcc:L437dcc:{c.instructions+=4;NFSU2_TR(0x437dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437dcf:{NFSU2_TR(0x437dcf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437dd1:{NFSU2_TR(0x437dd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437dd2:{NFSU2_TR(0x437dd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437dd7ull));
TAIL_STATIC(0x434a80u,434);
}
B437dd7:L437dd7:{c.instructions+=3;NFSU2_TR(0x437dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437dda:{NFSU2_TR(0x437dda);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437ddc:{NFSU2_TR(0x437ddc);
if(r1(R+518)){{goto L437de9;}}
}
B437dde:L437dde:{c.instructions+=4;NFSU2_TR(0x437dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437de1:{NFSU2_TR(0x437de1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437de3:{NFSU2_TR(0x437de3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437de4:{NFSU2_TR(0x437de4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437de9ull));
TAIL_STATIC(0x434a80u,434);
}
B437de9:L437de9:{c.instructions+=3;NFSU2_TR(0x437de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437dec:{NFSU2_TR(0x437dec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437dee:{NFSU2_TR(0x437dee);
if(r1(R+518)){{goto L437dfb;}}
}
B437df0:L437df0:{c.instructions+=4;NFSU2_TR(0x437df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437df3:{NFSU2_TR(0x437df3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437df5:{NFSU2_TR(0x437df5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437df6:{NFSU2_TR(0x437df6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437dfbull));
TAIL_STATIC(0x434a80u,434);
}
B437dfb:L437dfb:{c.instructions+=4;NFSU2_TR(0x437dfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437dfe:{NFSU2_TR(0x437dfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437e00:{NFSU2_TR(0x437e00);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B437e05:{NFSU2_TR(0x437e05);
if(r1(R+518)){{goto L437e35;}}
}
B437e07:L437e07:{c.instructions+=3;NFSU2_TR(0x437e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437e0a:{NFSU2_TR(0x437e0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437e0c:{NFSU2_TR(0x437e0c);
if(r1(R+518)){{goto L437e35;}}
}
B437e0e:L437e0e:{c.instructions+=4;NFSU2_TR(0x437e0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437e11:{NFSU2_TR(0x437e11);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437e13:{NFSU2_TR(0x437e13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437e14:{NFSU2_TR(0x437e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437e19ull));
TAIL_STATIC(0x434a80u,434);
}
B437e19:L437e19:{c.instructions+=7;NFSU2_TR(0x437e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437e1c:{NFSU2_TR(0x437e1c);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B437e1f:{NFSU2_TR(0x437e1f);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B437e24:{NFSU2_TR(0x437e24);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B437e2a:{NFSU2_TR(0x437e2a);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B437e2d:{NFSU2_TR(0x437e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437e30:{NFSU2_TR(0x437e30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437e35ull));
TAIL_STATIC(0x611010u,611);
}
B437e35:L437e35:{c.instructions+=4;NFSU2_TR(0x437e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437e38:{NFSU2_TR(0x437e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437e3b:{NFSU2_TR(0x437e3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437e3d:{NFSU2_TR(0x437e3d);
if(r1(R+518)){TAIL_STATIC(0x43800cu,438);}
}
B437e43:L437e43:{c.instructions+=3;NFSU2_TR(0x437e43);
__builtin_memmove((R+0),gp(0x827b1c),1);
}
B437e48:{NFSU2_TR(0x437e48);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B437e4a:{NFSU2_TR(0x437e4a);
if(r1(R+518)){{goto L437e63;}}
}
B437e4c:L437e4c:{c.instructions+=2;NFSU2_TR(0x437e4c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8900bc),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B437e53:{NFSU2_TR(0x437e53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L437e63;}}
}
B437e55:L437e55:{c.instructions+=3;NFSU2_TR(0x437e55);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437e59:{NFSU2_TR(0x437e59);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B437e5d:{NFSU2_TR(0x437e5d);
if(r1(R+518)){TAIL_STATIC(0x43800cu,438);}
}
B437e63:L437e63:{c.instructions+=2;NFSU2_TR(0x437e63);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437e65:{NFSU2_TR(0x437e65);
if(r1(R+518)){{goto L437e95;}}
}
B437e67:L437e67:{c.instructions+=2;NFSU2_TR(0x437e67);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B437e6b:{NFSU2_TR(0x437e6b);
if(r1(R+518)){{goto L437e80;}}
}
B437e6d:L437e6d:{c.instructions+=5;NFSU2_TR(0x437e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437e73:{NFSU2_TR(0x437e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437e79:{NFSU2_TR(0x437e79);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437e7a:{NFSU2_TR(0x437e7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437e7b:{NFSU2_TR(0x437e7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437e80ull));
TAIL_STATIC(0x4313d0u,431);
}
B437e80:L437e80:{c.instructions+=6;NFSU2_TR(0x437e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437e83:{NFSU2_TR(0x437e83);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B437e86:{NFSU2_TR(0x437e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437e89:{NFSU2_TR(0x437e89);
{u32 ea_=u32(r4(R+0)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B437e8c:{NFSU2_TR(0x437e8c);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x80ull))));
}
B437e92:{NFSU2_TR(0x437e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437e95:L437e95:{c.instructions+=3;NFSU2_TR(0x437e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437e98:{NFSU2_TR(0x437e98);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437e9a:{NFSU2_TR(0x437e9a);
if(r1(R+518)){{goto L437ea7;}}
}
B437e9c:L437e9c:{c.instructions+=2;NFSU2_TR(0x437e9c);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x8ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B437ea0:{NFSU2_TR(0x437ea0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L437ea7;}}
}
B437ea2:L437ea2:{c.instructions+=1;NFSU2_TR(0x437ea2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437ea7ull));
TAIL_STATIC(0x43bd50u,43b);
}
B437ea7:L437ea7:{c.instructions+=3;NFSU2_TR(0x437ea7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B437eaa:{NFSU2_TR(0x437eaa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B437eac:{NFSU2_TR(0x437eac);
if(r1(R+518)){{goto L437f74;}}
}
B437eb2:L437eb2:{c.instructions+=3;NFSU2_TR(0x437eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437eb5:{NFSU2_TR(0x437eb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437eb7:{NFSU2_TR(0x437eb7);
if(r1(R+518)){{goto L437f74;}}
}
B437ebd:L437ebd:{c.instructions+=2;NFSU2_TR(0x437ebd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437ebf:{NFSU2_TR(0x437ebf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437ec4ull));
TAIL_STATIC(0x431400u,431);
}
B437ec4:L437ec4:{c.instructions+=5;NFSU2_TR(0x437ec4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B437ec8:{NFSU2_TR(0x437ec8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437ec9:{NFSU2_TR(0x437ec9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437ecb:{NFSU2_TR(0x437ecb);
__builtin_memmove((R+4),(R+24),4);
}
B437ecd:{NFSU2_TR(0x437ecd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437ed2ull));
TAIL_STATIC(0x431280u,431);
}
B437ed2:L437ed2:{c.instructions+=4;NFSU2_TR(0x437ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B437ed5:{NFSU2_TR(0x437ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437edb:{NFSU2_TR(0x437edb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B437edd:{NFSU2_TR(0x437edd);
if(r1(R+518)){{goto L437ee6;}}
}
B437edf:L437edf:{c.instructions+=2;NFSU2_TR(0x437edf);
__builtin_memmove((R+4),(R+12),4);
}
B437ee1:{NFSU2_TR(0x437ee1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437ee6ull));
TAIL_STATIC(0x60bb10u,60b);
}
B437ee6:L437ee6:{c.instructions+=4;NFSU2_TR(0x437ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437ee9:{NFSU2_TR(0x437ee9);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B437eed:{NFSU2_TR(0x437eed);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437ef1:{NFSU2_TR(0x437ef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437ef6ull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B437ef6:L437ef6:{c.instructions+=9;NFSU2_TR(0x437ef6);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B437efa:{NFSU2_TR(0x437efa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437efb:{NFSU2_TR(0x437efb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437efd:{NFSU2_TR(0x437efd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437eff:{NFSU2_TR(0x437eff);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B437f03:{NFSU2_TR(0x437f03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437f04:{NFSU2_TR(0x437f04);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B437f0b:{NFSU2_TR(0x437f0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3acull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B437f16:{NFSU2_TR(0x437f16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437f1bull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B437f1b:L437f1b:{c.instructions+=3;NFSU2_TR(0x437f1b);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B437f1f:{NFSU2_TR(0x437f1f);
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
B437f21:{NFSU2_TR(0x437f21);
if(r1(R+518)){{goto L437f5e;}}
}
B437f23:L437f23:{c.instructions+=7;NFSU2_TR(0x437f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437f26:{NFSU2_TR(0x437f26);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B437f29:{NFSU2_TR(0x437f29);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x50ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B437f2c:{NFSU2_TR(0x437f2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437f2d:{NFSU2_TR(0x437f2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B437f31:{NFSU2_TR(0x437f31);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B437f35:{NFSU2_TR(0x437f35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437f3aull));
TAIL_STATIC(0x4013d0u,401);
}
B437f3a:L437f3a:{c.instructions+=9;NFSU2_TR(0x437f3a);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B437f3d:{NFSU2_TR(0x437f3d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B437f41:{NFSU2_TR(0x437f41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437f44:{NFSU2_TR(0x437f44);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B437f48:{NFSU2_TR(0x437f48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437f49:{NFSU2_TR(0x437f49);
{u32 ea_=u32(u32(7887904u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B437f4f:{NFSU2_TR(0x437f4f);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B437f53:{NFSU2_TR(0x437f53);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B437f57:{NFSU2_TR(0x437f57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437f5cull));
TAIL_STATIC(0x40efe0u,40e);
}
B437f5c:L437f5c:{c.instructions+=1;NFSU2_TR(0x437f5c);
{goto L437f60;}
}
B437f5e:L437f5e:{c.instructions+=1;NFSU2_TR(0x437f5e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B437f60:L437f60:{c.instructions+=3;NFSU2_TR(0x437f60);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B437f64:{NFSU2_TR(0x437f64);
u8 U[8];
w4(U+0,u32(u32(u32(0x39cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B437f6f:{NFSU2_TR(0x437f6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437f74ull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B437f74:L437f74:{c.instructions+=3;NFSU2_TR(0x437f74);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B437f78:{NFSU2_TR(0x437f78);
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
B437f7a:{NFSU2_TR(0x437f7a);
if(r1(R+518)){{goto L437ff3;}}
}
B437f7c:L437f7c:{c.instructions+=3;NFSU2_TR(0x437f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437f7f:{NFSU2_TR(0x437f7f);
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
B437f81:{NFSU2_TR(0x437f81);
if(r1(R+518)){{goto L437ff3;}}
}
B437f83:L437f83:{c.instructions+=3;NFSU2_TR(0x437f83);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437f87:{NFSU2_TR(0x437f87);
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
B437f89:{NFSU2_TR(0x437f89);
if(r1(R+518)){{goto L437ff3;}}
}
B437f8b:L437f8b:{c.instructions+=3;NFSU2_TR(0x437f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B437f8e:{NFSU2_TR(0x437f8e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x23ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B437f91:{NFSU2_TR(0x437f91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L437fe4;}}
}
B437f93:L437f93:{c.instructions+=3;NFSU2_TR(0x437f93);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B437f95:{NFSU2_TR(0x437f95);
w4(R+28,u32(0x7ea110ull));
}
B437f9a:{NFSU2_TR(0x437f9a);
__builtin_memmove((R+12),(R+12),4);
}
B437fa0:L437fa0:{c.instructions+=3;NFSU2_TR(0x437fa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B437fa2:{NFSU2_TR(0x437fa2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B437fa3:{NFSU2_TR(0x437fa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x437fa8ull));
TAIL_STATIC(0x43db50u,43d);
}
B437fa8:L437fa8:{c.instructions+=5;NFSU2_TR(0x437fa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B437fab:{NFSU2_TR(0x437fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437fae:{NFSU2_TR(0x437fae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B437fb1:{NFSU2_TR(0x437fb1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B437fb3:{NFSU2_TR(0x437fb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L437fb8;}}
}
B437fb5:L437fb5:{c.instructions+=1;NFSU2_TR(0x437fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437fb8:L437fb8:{c.instructions+=4;NFSU2_TR(0x437fb8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x34ull))));
}
B437fbb:{NFSU2_TR(0x437fbb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B437fbc:{NFSU2_TR(0x437fbc);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ea1e0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ea1e0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ea1e0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B437fc2:{NFSU2_TR(0x437fc2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x437fa0u);}goto L437fa0;}}
}
B437fc4:L437fc4:{c.instructions+=10;NFSU2_TR(0x437fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B437fcb:{NFSU2_TR(0x437fcb);
w1(R+0,u8(0x1ull));
}
B437fcd:{NFSU2_TR(0x437fcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437fd4:{NFSU2_TR(0x437fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437fdb:{NFSU2_TR(0x437fdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B437fdc:{NFSU2_TR(0x437fdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B437fdd:{NFSU2_TR(0x437fdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B437fde:{NFSU2_TR(0x437fde);
__builtin_memmove((R+16),(R+20),4);
}
B437fe0:{NFSU2_TR(0x437fe0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B437fe1:{NFSU2_TR(0x437fe1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B437fe4:L437fe4:{c.instructions+=5;NFSU2_TR(0x437fe4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B437fe6:{NFSU2_TR(0x437fe6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B437fe9:{NFSU2_TR(0x437fe9);
__builtin_memmove((R+4),(R+518),1);
}
B437fec:{NFSU2_TR(0x437fec);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B437ff0:{NFSU2_TR(0x437ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B437ff3:L437ff3:{c.instructions+=3;NFSU2_TR(0x437ff3);
w1(R+0,u8(0x1ull));
}
B437ff5:{NFSU2_TR(0x437ff5);
u8 U[8];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B437ffc:{NFSU2_TR(0x437ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x438003u,438);
}
XIT:NFSU2_TR_EXIT(0x437,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
