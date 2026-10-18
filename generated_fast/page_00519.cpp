#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_518(u8* __restrict R,Cpu& c);
u32 body_51a(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x519,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x519,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_519(u8* __restrict R,Cpu& c);
u32 page_519(Cpu& c){return body_519(c.regs.data(),c);}
__attribute__((noinline)) u32 body_519(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x519000:goto L519000;
case 0x519002:c.instructions+=1;goto B519002;
case 0x519004:goto L519004;
case 0x519007:c.instructions+=11;goto B519007;
case 0x51900d:c.instructions+=10;goto B51900d;
case 0x519010:c.instructions+=9;goto B519010;
case 0x519012:c.instructions+=8;goto B519012;
case 0x519015:c.instructions+=7;goto B519015;
case 0x519018:c.instructions+=6;goto B519018;
case 0x51901b:c.instructions+=5;goto B51901b;
case 0x51901f:c.instructions+=4;goto B51901f;
case 0x519020:c.instructions+=3;goto B519020;
case 0x519022:c.instructions+=2;goto B519022;
case 0x519027:c.instructions+=1;goto B519027;
case 0x51902a:goto L51902a;
case 0x51902c:goto L51902c;
case 0x51902e:goto L51902e;
case 0x519031:c.instructions+=11;goto B519031;
case 0x519035:c.instructions+=10;goto B519035;
case 0x519038:c.instructions+=9;goto B519038;
case 0x51903a:c.instructions+=8;goto B51903a;
case 0x51903d:c.instructions+=7;goto B51903d;
case 0x519043:c.instructions+=6;goto B519043;
case 0x519046:c.instructions+=5;goto B519046;
case 0x51904a:c.instructions+=4;goto B51904a;
case 0x51904d:c.instructions+=3;goto B51904d;
case 0x51904f:c.instructions+=2;goto B51904f;
case 0x519052:c.instructions+=1;goto B519052;
case 0x519054:goto L519054;
case 0x519055:c.instructions+=2;goto B519055;
case 0x519057:c.instructions+=1;goto B519057;
case 0x519059:goto L519059;
case 0x51905c:c.instructions+=1;goto B51905c;
case 0x51905e:goto L51905e;
case 0x519060:c.instructions+=5;goto B519060;
case 0x519061:c.instructions+=4;goto B519061;
case 0x519063:c.instructions+=3;goto B519063;
case 0x519065:c.instructions+=2;goto B519065;
case 0x519067:c.instructions+=1;goto B519067;
case 0x519069:goto L519069;
case 0x51906b:goto L51906b;
case 0x519071:c.instructions+=6;goto B519071;
case 0x519072:c.instructions+=5;goto B519072;
case 0x519076:c.instructions+=4;goto B519076;
case 0x519077:c.instructions+=3;goto B519077;
case 0x519078:c.instructions+=2;goto B519078;
case 0x519079:c.instructions+=1;goto B519079;
case 0x51907f:goto L51907f;
case 0x519082:c.instructions+=4;goto B519082;
case 0x519085:c.instructions+=3;goto B519085;
case 0x519086:c.instructions+=2;goto B519086;
case 0x519088:c.instructions+=1;goto B519088;
case 0x51908e:goto L51908e;
case 0x51908f:c.instructions+=5;goto B51908f;
case 0x519090:c.instructions+=4;goto B519090;
case 0x519091:c.instructions+=3;goto B519091;
case 0x519093:c.instructions+=2;goto B519093;
case 0x519094:c.instructions+=1;goto B519094;
case 0x519097:goto L519097;
case 0x51909a:c.instructions+=1;goto B51909a;
case 0x5190a0:goto L5190a0;
case 0x5190a3:c.instructions+=3;goto B5190a3;
case 0x5190a5:c.instructions+=2;goto B5190a5;
case 0x5190a7:c.instructions+=1;goto B5190a7;
case 0x5190ad:goto L5190ad;
case 0x5190b0:goto L5190b0;
case 0x5190b3:c.instructions+=10;goto B5190b3;
case 0x5190b9:c.instructions+=9;goto B5190b9;
case 0x5190bc:c.instructions+=8;goto B5190bc;
case 0x5190bf:c.instructions+=7;goto B5190bf;
case 0x5190c2:c.instructions+=6;goto B5190c2;
case 0x5190c6:c.instructions+=5;goto B5190c6;
case 0x5190ca:c.instructions+=4;goto B5190ca;
case 0x5190ce:c.instructions+=3;goto B5190ce;
case 0x5190d0:c.instructions+=2;goto B5190d0;
case 0x5190d2:c.instructions+=1;goto B5190d2;
case 0x5190d4:goto L5190d4;
case 0x5190d7:c.instructions+=11;goto B5190d7;
case 0x5190da:c.instructions+=10;goto B5190da;
case 0x5190dc:c.instructions+=9;goto B5190dc;
case 0x5190df:c.instructions+=8;goto B5190df;
case 0x5190e5:c.instructions+=7;goto B5190e5;
case 0x5190e8:c.instructions+=6;goto B5190e8;
case 0x5190eb:c.instructions+=5;goto B5190eb;
case 0x5190ef:c.instructions+=4;goto B5190ef;
case 0x5190f0:c.instructions+=3;goto B5190f0;
case 0x5190f2:c.instructions+=2;goto B5190f2;
case 0x5190f7:c.instructions+=1;goto B5190f7;
case 0x5190fa:goto L5190fa;
case 0x5190fc:goto L5190fc;
case 0x5190fe:goto L5190fe;
case 0x519101:c.instructions+=15;goto B519101;
case 0x519104:c.instructions+=14;goto B519104;
case 0x519106:c.instructions+=13;goto B519106;
case 0x51910c:c.instructions+=12;goto B51910c;
case 0x51910f:c.instructions+=11;goto B51910f;
case 0x519113:c.instructions+=10;goto B519113;
case 0x519116:c.instructions+=9;goto B519116;
case 0x51911a:c.instructions+=8;goto B51911a;
case 0x51911d:c.instructions+=7;goto B51911d;
case 0x519120:c.instructions+=6;goto B519120;
case 0x519123:c.instructions+=5;goto B519123;
case 0x519125:c.instructions+=4;goto B519125;
case 0x519126:c.instructions+=3;goto B519126;
case 0x519128:c.instructions+=2;goto B519128;
case 0x519129:c.instructions+=1;goto B519129;
case 0x51912e:goto L51912e;
case 0x519131:c.instructions+=6;goto B519131;
case 0x519132:c.instructions+=5;goto B519132;
case 0x519136:c.instructions+=4;goto B519136;
case 0x519137:c.instructions+=3;goto B519137;
case 0x519138:c.instructions+=2;goto B519138;
case 0x51913a:c.instructions+=1;goto B51913a;
case 0x51913d:goto L51913d;
case 0x519140:c.instructions+=3;goto B519140;
case 0x519141:c.instructions+=2;goto B519141;
case 0x519143:c.instructions+=1;goto B519143;
case 0x519149:goto L519149;
case 0x51914a:c.instructions+=5;goto B51914a;
case 0x51914b:c.instructions+=4;goto B51914b;
case 0x51914c:c.instructions+=3;goto B51914c;
case 0x51914e:c.instructions+=2;goto B51914e;
case 0x51914f:c.instructions+=1;goto B51914f;
case 0x519152:goto L519152;
case 0x519158:c.instructions+=1;goto B519158;
case 0x51915e:goto L51915e;
case 0x519161:c.instructions+=3;goto B519161;
case 0x519163:c.instructions+=2;goto B519163;
case 0x519165:c.instructions+=1;goto B519165;
case 0x51916b:goto L51916b;
case 0x519173:goto L519173;
case 0x519176:c.instructions+=8;goto B519176;
case 0x51917c:c.instructions+=7;goto B51917c;
case 0x51917e:c.instructions+=6;goto B51917e;
case 0x519183:c.instructions+=5;goto B519183;
case 0x519187:c.instructions+=4;goto B519187;
case 0x519188:c.instructions+=3;goto B519188;
case 0x51918a:c.instructions+=2;goto B51918a;
case 0x51918e:c.instructions+=1;goto B51918e;
case 0x519190:goto L519190;
case 0x519193:c.instructions+=9;goto B519193;
case 0x519199:c.instructions+=8;goto B519199;
case 0x51919c:c.instructions+=7;goto B51919c;
case 0x51919e:c.instructions+=6;goto B51919e;
case 0x5191a1:c.instructions+=5;goto B5191a1;
case 0x5191a4:c.instructions+=4;goto B5191a4;
case 0x5191a5:c.instructions+=3;goto B5191a5;
case 0x5191a8:c.instructions+=2;goto B5191a8;
case 0x5191ad:c.instructions+=1;goto B5191ad;
case 0x5191b0:goto L5191b0;
case 0x5191b2:goto L5191b2;
case 0x5191b4:goto L5191b4;
case 0x5191b7:c.instructions+=11;goto B5191b7;
case 0x5191bb:c.instructions+=10;goto B5191bb;
case 0x5191be:c.instructions+=9;goto B5191be;
case 0x5191c0:c.instructions+=8;goto B5191c0;
case 0x5191c3:c.instructions+=7;goto B5191c3;
case 0x5191c9:c.instructions+=6;goto B5191c9;
case 0x5191cc:c.instructions+=5;goto B5191cc;
case 0x5191d0:c.instructions+=4;goto B5191d0;
case 0x5191d3:c.instructions+=3;goto B5191d3;
case 0x5191d5:c.instructions+=2;goto B5191d5;
case 0x5191d8:c.instructions+=1;goto B5191d8;
case 0x5191da:goto L5191da;
case 0x5191db:c.instructions+=2;goto B5191db;
case 0x5191dd:c.instructions+=1;goto B5191dd;
case 0x5191df:goto L5191df;
case 0x5191e2:c.instructions+=1;goto B5191e2;
case 0x5191e4:goto L5191e4;
case 0x5191e6:c.instructions+=5;goto B5191e6;
case 0x5191e7:c.instructions+=4;goto B5191e7;
case 0x5191e9:c.instructions+=3;goto B5191e9;
case 0x5191eb:c.instructions+=2;goto B5191eb;
case 0x5191ed:c.instructions+=1;goto B5191ed;
case 0x5191ef:goto L5191ef;
case 0x5191f1:goto L5191f1;
case 0x5191f7:c.instructions+=6;goto B5191f7;
case 0x5191f8:c.instructions+=5;goto B5191f8;
case 0x5191fb:c.instructions+=4;goto B5191fb;
case 0x5191fc:c.instructions+=3;goto B5191fc;
case 0x5191fd:c.instructions+=2;goto B5191fd;
case 0x5191fe:c.instructions+=1;goto B5191fe;
case 0x519204:goto L519204;
case 0x519208:c.instructions+=7;goto B519208;
case 0x51920b:c.instructions+=6;goto B51920b;
case 0x51920e:c.instructions+=5;goto B51920e;
case 0x51920f:c.instructions+=4;goto B51920f;
case 0x519212:c.instructions+=3;goto B519212;
case 0x519214:c.instructions+=2;goto B519214;
case 0x519218:c.instructions+=1;goto B519218;
case 0x51921e:goto L51921e;
case 0x51921f:c.instructions+=5;goto B51921f;
case 0x519220:c.instructions+=4;goto B519220;
case 0x519221:c.instructions+=3;goto B519221;
case 0x519223:c.instructions+=2;goto B519223;
case 0x519224:c.instructions+=1;goto B519224;
case 0x519227:goto L519227;
case 0x51922a:c.instructions+=1;goto B51922a;
case 0x519230:goto L519230;
case 0x519233:c.instructions+=3;goto B519233;
case 0x519235:c.instructions+=2;goto B519235;
case 0x519237:c.instructions+=1;goto B519237;
case 0x51923d:goto L51923d;
case 0x519245:goto L519245;
case 0x519248:c.instructions+=8;goto B519248;
case 0x51924e:c.instructions+=7;goto B51924e;
case 0x519250:c.instructions+=6;goto B519250;
case 0x519255:c.instructions+=5;goto B519255;
case 0x519259:c.instructions+=4;goto B519259;
case 0x51925a:c.instructions+=3;goto B51925a;
case 0x51925c:c.instructions+=2;goto B51925c;
case 0x519260:c.instructions+=1;goto B519260;
case 0x519262:goto L519262;
case 0x519265:c.instructions+=9;goto B519265;
case 0x51926b:c.instructions+=8;goto B51926b;
case 0x51926e:c.instructions+=7;goto B51926e;
case 0x519270:c.instructions+=6;goto B519270;
case 0x519273:c.instructions+=5;goto B519273;
case 0x519276:c.instructions+=4;goto B519276;
case 0x519277:c.instructions+=3;goto B519277;
case 0x51927a:c.instructions+=2;goto B51927a;
case 0x51927f:c.instructions+=1;goto B51927f;
case 0x519282:goto L519282;
case 0x519284:goto L519284;
case 0x519286:goto L519286;
case 0x519289:c.instructions+=15;goto B519289;
case 0x51928d:c.instructions+=14;goto B51928d;
case 0x519290:c.instructions+=13;goto B519290;
case 0x519292:c.instructions+=12;goto B519292;
case 0x519295:c.instructions+=11;goto B519295;
case 0x51929b:c.instructions+=10;goto B51929b;
case 0x51929e:c.instructions+=9;goto B51929e;
case 0x5192a2:c.instructions+=8;goto B5192a2;
case 0x5192a5:c.instructions+=7;goto B5192a5;
case 0x5192a8:c.instructions+=6;goto B5192a8;
case 0x5192ab:c.instructions+=5;goto B5192ab;
case 0x5192ad:c.instructions+=4;goto B5192ad;
case 0x5192ae:c.instructions+=3;goto B5192ae;
case 0x5192b0:c.instructions+=2;goto B5192b0;
case 0x5192b1:c.instructions+=1;goto B5192b1;
case 0x5192b6:goto L5192b6;
case 0x5192b9:c.instructions+=6;goto B5192b9;
case 0x5192bc:c.instructions+=5;goto B5192bc;
case 0x5192bd:c.instructions+=4;goto B5192bd;
case 0x5192be:c.instructions+=3;goto B5192be;
case 0x5192bf:c.instructions+=2;goto B5192bf;
case 0x5192c1:c.instructions+=1;goto B5192c1;
case 0x5192c4:goto L5192c4;
case 0x5192c8:c.instructions+=6;goto B5192c8;
case 0x5192cb:c.instructions+=5;goto B5192cb;
case 0x5192cc:c.instructions+=4;goto B5192cc;
case 0x5192cf:c.instructions+=3;goto B5192cf;
case 0x5192d1:c.instructions+=2;goto B5192d1;
case 0x5192d5:c.instructions+=1;goto B5192d5;
case 0x5192db:goto L5192db;
case 0x5192dc:c.instructions+=5;goto B5192dc;
case 0x5192dd:c.instructions+=4;goto B5192dd;
case 0x5192de:c.instructions+=3;goto B5192de;
case 0x5192e0:c.instructions+=2;goto B5192e0;
case 0x5192e1:c.instructions+=1;goto B5192e1;
case 0x5192e4:goto L5192e4;
case 0x5192e6:c.instructions+=1;goto B5192e6;
case 0x5192ec:goto L5192ec;
case 0x5192ef:c.instructions+=8;goto B5192ef;
case 0x5192f2:c.instructions+=7;goto B5192f2;
case 0x5192f5:c.instructions+=6;goto B5192f5;
case 0x5192f9:c.instructions+=5;goto B5192f9;
case 0x5192fc:c.instructions+=4;goto B5192fc;
case 0x5192fd:c.instructions+=3;goto B5192fd;
case 0x519301:c.instructions+=2;goto B519301;
case 0x519302:c.instructions+=1;goto B519302;
case 0x519307:goto L519307;
case 0x51930b:c.instructions+=4;goto B51930b;
case 0x519311:c.instructions+=3;goto B519311;
case 0x519314:c.instructions+=2;goto B519314;
case 0x519316:c.instructions+=1;goto B519316;
case 0x51931c:goto L51931c;
case 0x51931f:c.instructions+=2;goto B51931f;
case 0x519323:c.instructions+=1;goto B519323;
case 0x519329:goto L519329;
case 0x51932d:c.instructions+=1;goto B51932d;
case 0x519330:goto L519330;
case 0x519334:c.instructions+=7;goto B519334;
case 0x51933a:c.instructions+=6;goto B51933a;
case 0x51933e:c.instructions+=5;goto B51933e;
case 0x519342:c.instructions+=4;goto B519342;
case 0x519346:c.instructions+=3;goto B519346;
case 0x519348:c.instructions+=2;goto B519348;
case 0x51934a:c.instructions+=1;goto B51934a;
case 0x51934c:goto L51934c;
case 0x519350:goto L519350;
case 0x519353:c.instructions+=16;goto B519353;
case 0x519357:c.instructions+=15;goto B519357;
case 0x519359:c.instructions+=14;goto B519359;
case 0x51935c:c.instructions+=13;goto B51935c;
case 0x51935e:c.instructions+=12;goto B51935e;
case 0x519364:c.instructions+=11;goto B519364;
case 0x519366:c.instructions+=10;goto B519366;
case 0x519369:c.instructions+=9;goto B519369;
case 0x51936c:c.instructions+=8;goto B51936c;
case 0x51936f:c.instructions+=7;goto B51936f;
case 0x519373:c.instructions+=6;goto B519373;
case 0x519376:c.instructions+=5;goto B519376;
case 0x519378:c.instructions+=4;goto B519378;
case 0x51937a:c.instructions+=3;goto B51937a;
case 0x51937b:c.instructions+=2;goto B51937b;
case 0x51937d:c.instructions+=1;goto B51937d;
case 0x519382:goto L519382;
case 0x519384:goto L519384;
case 0x519386:goto L519386;
case 0x519389:c.instructions+=12;goto B519389;
case 0x51938d:c.instructions+=11;goto B51938d;
case 0x519390:c.instructions+=10;goto B519390;
case 0x519396:c.instructions+=9;goto B519396;
case 0x519398:c.instructions+=8;goto B519398;
case 0x51939b:c.instructions+=7;goto B51939b;
case 0x51939f:c.instructions+=6;goto B51939f;
case 0x5193a2:c.instructions+=5;goto B5193a2;
case 0x5193a6:c.instructions+=4;goto B5193a6;
case 0x5193a9:c.instructions+=3;goto B5193a9;
case 0x5193ab:c.instructions+=2;goto B5193ab;
case 0x5193ae:c.instructions+=1;goto B5193ae;
case 0x5193b0:goto L5193b0;
case 0x5193b1:c.instructions+=2;goto B5193b1;
case 0x5193b3:c.instructions+=1;goto B5193b3;
case 0x5193b5:goto L5193b5;
case 0x5193b8:c.instructions+=1;goto B5193b8;
case 0x5193ba:goto L5193ba;
case 0x5193bc:c.instructions+=5;goto B5193bc;
case 0x5193bd:c.instructions+=4;goto B5193bd;
case 0x5193bf:c.instructions+=3;goto B5193bf;
case 0x5193c1:c.instructions+=2;goto B5193c1;
case 0x5193c3:c.instructions+=1;goto B5193c3;
case 0x5193c5:goto L5193c5;
case 0x5193c7:goto L5193c7;
case 0x5193cb:c.instructions+=6;goto B5193cb;
case 0x5193cc:c.instructions+=5;goto B5193cc;
case 0x5193cd:c.instructions+=4;goto B5193cd;
case 0x5193d3:c.instructions+=3;goto B5193d3;
case 0x5193d4:c.instructions+=2;goto B5193d4;
case 0x5193d5:c.instructions+=1;goto B5193d5;
case 0x5193db:goto L5193db;
case 0x5193df:c.instructions+=8;goto B5193df;
case 0x5193e2:c.instructions+=7;goto B5193e2;
case 0x5193e5:c.instructions+=6;goto B5193e5;
case 0x5193e6:c.instructions+=5;goto B5193e6;
case 0x5193e9:c.instructions+=4;goto B5193e9;
case 0x5193eb:c.instructions+=3;goto B5193eb;
case 0x5193ef:c.instructions+=2;goto B5193ef;
case 0x5193f3:c.instructions+=1;goto B5193f3;
case 0x5193f9:goto L5193f9;
case 0x5193fa:c.instructions+=5;goto B5193fa;
case 0x5193fb:c.instructions+=4;goto B5193fb;
case 0x5193fc:c.instructions+=3;goto B5193fc;
case 0x5193fe:c.instructions+=2;goto B5193fe;
case 0x5193ff:c.instructions+=1;goto B5193ff;
case 0x519402:goto L519402;
case 0x519405:c.instructions+=1;goto B519405;
case 0x51940b:goto L51940b;
case 0x51940e:c.instructions+=2;goto B51940e;
case 0x519412:c.instructions+=1;goto B519412;
case 0x519418:goto L519418;
case 0x51941c:c.instructions+=1;goto B51941c;
case 0x519420:goto L519420;
case 0x519426:c.instructions+=7;goto B519426;
case 0x51942a:c.instructions+=6;goto B51942a;
case 0x51942e:c.instructions+=5;goto B51942e;
case 0x519432:c.instructions+=4;goto B519432;
case 0x519436:c.instructions+=3;goto B519436;
case 0x519438:c.instructions+=2;goto B519438;
case 0x51943a:c.instructions+=1;goto B51943a;
case 0x51943c:goto L51943c;
case 0x519440:goto L519440;
case 0x519443:c.instructions+=16;goto B519443;
case 0x519447:c.instructions+=15;goto B519447;
case 0x519449:c.instructions+=14;goto B519449;
case 0x51944c:c.instructions+=13;goto B51944c;
case 0x51944e:c.instructions+=12;goto B51944e;
case 0x519454:c.instructions+=11;goto B519454;
case 0x519456:c.instructions+=10;goto B519456;
case 0x519459:c.instructions+=9;goto B519459;
case 0x51945c:c.instructions+=8;goto B51945c;
case 0x51945f:c.instructions+=7;goto B51945f;
case 0x519463:c.instructions+=6;goto B519463;
case 0x519466:c.instructions+=5;goto B519466;
case 0x519468:c.instructions+=4;goto B519468;
case 0x51946a:c.instructions+=3;goto B51946a;
case 0x51946b:c.instructions+=2;goto B51946b;
case 0x51946d:c.instructions+=1;goto B51946d;
case 0x519472:goto L519472;
case 0x519474:goto L519474;
case 0x519476:goto L519476;
case 0x519479:c.instructions+=18;goto B519479;
case 0x51947d:c.instructions+=17;goto B51947d;
case 0x519480:c.instructions+=16;goto B519480;
case 0x519486:c.instructions+=15;goto B519486;
case 0x51948a:c.instructions+=14;goto B51948a;
case 0x51948c:c.instructions+=13;goto B51948c;
case 0x51948f:c.instructions+=12;goto B51948f;
case 0x519492:c.instructions+=11;goto B519492;
case 0x519496:c.instructions+=10;goto B519496;
case 0x51949a:c.instructions+=9;goto B51949a;
case 0x51949d:c.instructions+=8;goto B51949d;
case 0x5194a0:c.instructions+=7;goto B5194a0;
case 0x5194a3:c.instructions+=6;goto B5194a3;
case 0x5194a5:c.instructions+=5;goto B5194a5;
case 0x5194a6:c.instructions+=4;goto B5194a6;
case 0x5194a7:c.instructions+=3;goto B5194a7;
case 0x5194a9:c.instructions+=2;goto B5194a9;
case 0x5194aa:c.instructions+=1;goto B5194aa;
case 0x5194af:goto L5194af;
case 0x5194b2:c.instructions+=4;goto B5194b2;
case 0x5194b3:c.instructions+=3;goto B5194b3;
case 0x5194b4:c.instructions+=2;goto B5194b4;
case 0x5194b6:c.instructions+=1;goto B5194b6;
case 0x5194b9:goto L5194b9;
case 0x5194bd:c.instructions+=7;goto B5194bd;
case 0x5194c0:c.instructions+=6;goto B5194c0;
case 0x5194c1:c.instructions+=5;goto B5194c1;
case 0x5194c4:c.instructions+=4;goto B5194c4;
case 0x5194c6:c.instructions+=3;goto B5194c6;
case 0x5194ca:c.instructions+=2;goto B5194ca;
case 0x5194ce:c.instructions+=1;goto B5194ce;
case 0x5194d4:goto L5194d4;
case 0x5194d5:c.instructions+=5;goto B5194d5;
case 0x5194d6:c.instructions+=4;goto B5194d6;
case 0x5194d7:c.instructions+=3;goto B5194d7;
case 0x5194d9:c.instructions+=2;goto B5194d9;
case 0x5194da:c.instructions+=1;goto B5194da;
case 0x5194dd:goto L5194dd;
case 0x5194e3:c.instructions+=1;goto B5194e3;
case 0x5194e9:goto L5194e9;
case 0x5194ec:c.instructions+=3;goto B5194ec;
case 0x5194ee:c.instructions+=2;goto B5194ee;
case 0x5194f2:c.instructions+=1;goto B5194f2;
case 0x5194f8:goto L5194f8;
case 0x5194fc:c.instructions+=1;goto B5194fc;
case 0x519500:goto L519500;
case 0x519503:c.instructions+=11;goto B519503;
case 0x519507:c.instructions+=10;goto B519507;
case 0x51950d:c.instructions+=9;goto B51950d;
case 0x51950e:c.instructions+=8;goto B51950e;
case 0x519511:c.instructions+=7;goto B519511;
case 0x519513:c.instructions+=6;goto B519513;
case 0x519516:c.instructions+=5;goto B519516;
case 0x519519:c.instructions+=4;goto B519519;
case 0x51951b:c.instructions+=3;goto B51951b;
case 0x51951f:c.instructions+=2;goto B51951f;
case 0x519523:c.instructions+=1;goto B519523;
case 0x519525:goto L519525;
case 0x519528:c.instructions+=16;goto B519528;
case 0x51952c:c.instructions+=15;goto B51952c;
case 0x51952e:c.instructions+=14;goto B51952e;
case 0x519531:c.instructions+=13;goto B519531;
case 0x519533:c.instructions+=12;goto B519533;
case 0x519539:c.instructions+=11;goto B519539;
case 0x51953b:c.instructions+=10;goto B51953b;
case 0x51953d:c.instructions+=9;goto B51953d;
case 0x519540:c.instructions+=8;goto B519540;
case 0x519546:c.instructions+=7;goto B519546;
case 0x519549:c.instructions+=6;goto B519549;
case 0x51954b:c.instructions+=5;goto B51954b;
case 0x51954e:c.instructions+=4;goto B51954e;
case 0x519551:c.instructions+=3;goto B519551;
case 0x519553:c.instructions+=2;goto B519553;
case 0x519554:c.instructions+=1;goto B519554;
case 0x519559:goto L519559;
case 0x51955b:goto L51955b;
case 0x51955d:goto L51955d;
case 0x519563:c.instructions+=7;goto B519563;
case 0x519567:c.instructions+=6;goto B519567;
case 0x51956b:c.instructions+=5;goto B51956b;
case 0x51956f:c.instructions+=4;goto B51956f;
case 0x519572:c.instructions+=3;goto B519572;
case 0x519574:c.instructions+=2;goto B519574;
case 0x519577:c.instructions+=1;goto B519577;
case 0x519579:goto L519579;
case 0x51957a:c.instructions+=2;goto B51957a;
case 0x51957c:c.instructions+=1;goto B51957c;
case 0x51957e:goto L51957e;
case 0x519581:c.instructions+=1;goto B519581;
case 0x519583:goto L519583;
case 0x519585:c.instructions+=5;goto B519585;
case 0x519586:c.instructions+=4;goto B519586;
case 0x519588:c.instructions+=3;goto B519588;
case 0x51958a:c.instructions+=2;goto B51958a;
case 0x51958c:c.instructions+=1;goto B51958c;
case 0x51958e:goto L51958e;
case 0x519590:goto L519590;
case 0x519593:c.instructions+=6;goto B519593;
case 0x519599:c.instructions+=5;goto B519599;
case 0x51959a:c.instructions+=4;goto B51959a;
case 0x51959b:c.instructions+=3;goto B51959b;
case 0x51959c:c.instructions+=2;goto B51959c;
case 0x51959d:c.instructions+=1;goto B51959d;
case 0x5195a3:goto L5195a3;
case 0x5195a7:c.instructions+=9;goto B5195a7;
case 0x5195ab:c.instructions+=8;goto B5195ab;
case 0x5195ae:c.instructions+=7;goto B5195ae;
case 0x5195b1:c.instructions+=6;goto B5195b1;
case 0x5195b2:c.instructions+=5;goto B5195b2;
case 0x5195b5:c.instructions+=4;goto B5195b5;
case 0x5195b7:c.instructions+=3;goto B5195b7;
case 0x5195bb:c.instructions+=2;goto B5195bb;
case 0x5195bf:c.instructions+=1;goto B5195bf;
case 0x5195c5:goto L5195c5;
case 0x5195c6:c.instructions+=5;goto B5195c6;
case 0x5195c7:c.instructions+=4;goto B5195c7;
case 0x5195c8:c.instructions+=3;goto B5195c8;
case 0x5195ca:c.instructions+=2;goto B5195ca;
case 0x5195cb:c.instructions+=1;goto B5195cb;
case 0x5195ce:goto L5195ce;
case 0x5195d1:c.instructions+=1;goto B5195d1;
case 0x5195d7:goto L5195d7;
case 0x5195da:c.instructions+=3;goto B5195da;
case 0x5195dc:c.instructions+=2;goto B5195dc;
case 0x5195e0:c.instructions+=1;goto B5195e0;
case 0x5195e6:goto L5195e6;
case 0x5195ea:c.instructions+=1;goto B5195ea;
case 0x5195f0:goto L5195f0;
case 0x5195f3:c.instructions+=11;goto B5195f3;
case 0x5195f7:c.instructions+=10;goto B5195f7;
case 0x5195f8:c.instructions+=9;goto B5195f8;
case 0x5195fb:c.instructions+=8;goto B5195fb;
case 0x5195fd:c.instructions+=7;goto B5195fd;
case 0x519600:c.instructions+=6;goto B519600;
case 0x519606:c.instructions+=5;goto B519606;
case 0x519609:c.instructions+=4;goto B519609;
case 0x51960b:c.instructions+=3;goto B51960b;
case 0x51960f:c.instructions+=2;goto B51960f;
case 0x519613:c.instructions+=1;goto B519613;
case 0x519615:goto L519615;
case 0x519618:c.instructions+=16;goto B519618;
case 0x51961c:c.instructions+=15;goto B51961c;
case 0x51961e:c.instructions+=14;goto B51961e;
case 0x519621:c.instructions+=13;goto B519621;
case 0x519623:c.instructions+=12;goto B519623;
case 0x519629:c.instructions+=11;goto B519629;
case 0x51962b:c.instructions+=10;goto B51962b;
case 0x51962d:c.instructions+=9;goto B51962d;
case 0x519630:c.instructions+=8;goto B519630;
case 0x519636:c.instructions+=7;goto B519636;
case 0x519639:c.instructions+=6;goto B519639;
case 0x51963b:c.instructions+=5;goto B51963b;
case 0x51963e:c.instructions+=4;goto B51963e;
case 0x519641:c.instructions+=3;goto B519641;
case 0x519643:c.instructions+=2;goto B519643;
case 0x519644:c.instructions+=1;goto B519644;
case 0x519649:goto L519649;
case 0x51964b:goto L51964b;
case 0x51964d:goto L51964d;
case 0x519653:c.instructions+=12;goto B519653;
case 0x519657:c.instructions+=11;goto B519657;
case 0x51965b:c.instructions+=10;goto B51965b;
case 0x51965f:c.instructions+=9;goto B51965f;
case 0x519662:c.instructions+=8;goto B519662;
case 0x519665:c.instructions+=7;goto B519665;
case 0x519668:c.instructions+=6;goto B519668;
case 0x51966a:c.instructions+=5;goto B51966a;
case 0x51966b:c.instructions+=4;goto B51966b;
case 0x51966d:c.instructions+=3;goto B51966d;
case 0x51966e:c.instructions+=2;goto B51966e;
case 0x519672:c.instructions+=1;goto B519672;
case 0x519677:goto L519677;
case 0x51967a:c.instructions+=7;goto B51967a;
case 0x51967b:c.instructions+=6;goto B51967b;
case 0x51967e:c.instructions+=5;goto B51967e;
case 0x51967f:c.instructions+=4;goto B51967f;
case 0x519683:c.instructions+=3;goto B519683;
case 0x519684:c.instructions+=2;goto B519684;
case 0x519686:c.instructions+=1;goto B519686;
case 0x519689:goto L519689;
case 0x51968d:c.instructions+=7;goto B51968d;
case 0x519690:c.instructions+=6;goto B519690;
case 0x519691:c.instructions+=5;goto B519691;
case 0x519694:c.instructions+=4;goto B519694;
case 0x519696:c.instructions+=3;goto B519696;
case 0x51969a:c.instructions+=2;goto B51969a;
case 0x51969e:c.instructions+=1;goto B51969e;
case 0x5196a4:goto L5196a4;
case 0x5196a5:c.instructions+=5;goto B5196a5;
case 0x5196a6:c.instructions+=4;goto B5196a6;
case 0x5196a7:c.instructions+=3;goto B5196a7;
case 0x5196a9:c.instructions+=2;goto B5196a9;
case 0x5196aa:c.instructions+=1;goto B5196aa;
case 0x5196b0:goto L5196b0;
case 0x5196b1:c.instructions+=13;goto B5196b1;
case 0x5196b5:c.instructions+=12;goto B5196b5;
case 0x5196b9:c.instructions+=11;goto B5196b9;
case 0x5196ba:c.instructions+=10;goto B5196ba;
case 0x5196be:c.instructions+=9;goto B5196be;
case 0x5196bf:c.instructions+=8;goto B5196bf;
case 0x5196c3:c.instructions+=7;goto B5196c3;
case 0x5196c5:c.instructions+=6;goto B5196c5;
case 0x5196c7:c.instructions+=5;goto B5196c7;
case 0x5196c9:c.instructions+=4;goto B5196c9;
case 0x5196cd:c.instructions+=3;goto B5196cd;
case 0x5196d1:c.instructions+=2;goto B5196d1;
case 0x5196d5:c.instructions+=1;goto B5196d5;
case 0x5196db:goto L5196db;
case 0x5196dc:c.instructions+=2;goto B5196dc;
case 0x5196dd:c.instructions+=1;goto B5196dd;
case 0x5196e0:goto L5196e0;
case 0x5196e4:c.instructions+=1;goto B5196e4;
case 0x5196ea:goto L5196ea;
case 0x5196f0:goto L5196f0;
case 0x5196f3:c.instructions+=4;goto B5196f3;
case 0x5196f5:c.instructions+=3;goto B5196f5;
case 0x5196f8:c.instructions+=2;goto B5196f8;
case 0x5196fa:c.instructions+=1;goto B5196fa;
case 0x5196fc:goto L5196fc;
case 0x519704:c.instructions+=1;goto B519704;
case 0x519706:goto L519706;
case 0x519708:c.instructions+=1;goto B519708;
case 0x51970a:goto L51970a;
case 0x51970c:c.instructions+=2;goto B51970c;
case 0x51970d:c.instructions+=1;goto B51970d;
case 0x51970f:goto L51970f;
case 0x519712:c.instructions+=2;goto B519712;
case 0x519714:c.instructions+=1;goto B519714;
case 0x519716:goto L519716;
case 0x519718:c.instructions+=1;goto B519718;
case 0x51971a:goto L51971a;
case 0x51971b:c.instructions+=3;goto B51971b;
case 0x51971d:c.instructions+=2;goto B51971d;
case 0x51971f:c.instructions+=1;goto B51971f;
case 0x519721:goto L519721;
case 0x519724:c.instructions+=1;goto B519724;
case 0x519726:goto L519726;
case 0x519728:c.instructions+=5;goto B519728;
case 0x519729:c.instructions+=4;goto B519729;
case 0x51972b:c.instructions+=3;goto B51972b;
case 0x51972d:c.instructions+=2;goto B51972d;
case 0x51972f:c.instructions+=1;goto B51972f;
case 0x519731:goto L519731;
case 0x519733:goto L519733;
case 0x519737:goto L519737;
case 0x51973a:c.instructions+=5;goto B51973a;
case 0x51973c:c.instructions+=4;goto B51973c;
case 0x519740:c.instructions+=3;goto B519740;
case 0x519743:c.instructions+=2;goto B519743;
case 0x519745:c.instructions+=1;goto B519745;
case 0x519747:goto L519747;
case 0x51974a:c.instructions+=1;goto B51974a;
case 0x51974c:goto L51974c;
case 0x51974e:c.instructions+=1;goto B51974e;
case 0x519750:goto L519750;
case 0x519751:c.instructions+=1;goto B519751;
case 0x519753:goto L519753;
case 0x519756:c.instructions+=2;goto B519756;
case 0x519758:c.instructions+=1;goto B519758;
case 0x51975a:goto L51975a;
case 0x51975c:c.instructions+=1;goto B51975c;
case 0x51975e:goto L51975e;
case 0x51975f:c.instructions+=3;goto B51975f;
case 0x519761:c.instructions+=2;goto B519761;
case 0x519763:c.instructions+=1;goto B519763;
case 0x519765:goto L519765;
case 0x519768:c.instructions+=1;goto B519768;
case 0x51976a:goto L51976a;
case 0x51976c:c.instructions+=5;goto B51976c;
case 0x51976d:c.instructions+=4;goto B51976d;
case 0x51976f:c.instructions+=3;goto B51976f;
case 0x519771:c.instructions+=2;goto B519771;
case 0x519773:c.instructions+=1;goto B519773;
case 0x519775:goto L519775;
case 0x519777:goto L519777;
case 0x51977b:c.instructions+=11;goto B51977b;
case 0x51977e:c.instructions+=10;goto B51977e;
case 0x519784:c.instructions+=9;goto B519784;
case 0x519786:c.instructions+=8;goto B519786;
case 0x519789:c.instructions+=7;goto B519789;
case 0x51978d:c.instructions+=6;goto B51978d;
case 0x519790:c.instructions+=5;goto B519790;
case 0x519793:c.instructions+=4;goto B519793;
case 0x519797:c.instructions+=3;goto B519797;
case 0x519798:c.instructions+=2;goto B519798;
case 0x51979a:c.instructions+=1;goto B51979a;
case 0x5197a0:goto L5197a0;
case 0x5197a4:goto L5197a4;
case 0x5197a8:c.instructions+=5;goto B5197a8;
case 0x5197ac:c.instructions+=4;goto B5197ac;
case 0x5197ad:c.instructions+=3;goto B5197ad;
case 0x5197af:c.instructions+=2;goto B5197af;
case 0x5197b3:c.instructions+=1;goto B5197b3;
case 0x5197b9:goto L5197b9;
case 0x5197ba:c.instructions+=1;goto B5197ba;
case 0x5197bb:goto L5197bb;
case 0x5197bc:c.instructions+=3;goto B5197bc;
case 0x5197bd:c.instructions+=2;goto B5197bd;
case 0x5197be:c.instructions+=1;goto B5197be;
case 0x5197d0:goto L5197d0;
case 0x5197d1:c.instructions+=13;goto B5197d1;
case 0x5197d5:c.instructions+=12;goto B5197d5;
case 0x5197d9:c.instructions+=11;goto B5197d9;
case 0x5197da:c.instructions+=10;goto B5197da;
case 0x5197de:c.instructions+=9;goto B5197de;
case 0x5197df:c.instructions+=8;goto B5197df;
case 0x5197e3:c.instructions+=7;goto B5197e3;
case 0x5197e5:c.instructions+=6;goto B5197e5;
case 0x5197e7:c.instructions+=5;goto B5197e7;
case 0x5197e9:c.instructions+=4;goto B5197e9;
case 0x5197ed:c.instructions+=3;goto B5197ed;
case 0x5197f1:c.instructions+=2;goto B5197f1;
case 0x5197f5:c.instructions+=1;goto B5197f5;
case 0x5197fb:goto L5197fb;
case 0x5197fc:c.instructions+=2;goto B5197fc;
case 0x5197fd:c.instructions+=1;goto B5197fd;
case 0x519800:goto L519800;
case 0x519804:c.instructions+=1;goto B519804;
case 0x51980a:goto L51980a;
case 0x519810:goto L519810;
case 0x519813:c.instructions+=4;goto B519813;
case 0x519815:c.instructions+=3;goto B519815;
case 0x519818:c.instructions+=2;goto B519818;
case 0x51981a:c.instructions+=1;goto B51981a;
case 0x51981c:goto L51981c;
case 0x519824:c.instructions+=1;goto B519824;
case 0x519826:goto L519826;
case 0x519828:c.instructions+=1;goto B519828;
case 0x51982a:goto L51982a;
case 0x51982c:c.instructions+=2;goto B51982c;
case 0x51982d:c.instructions+=1;goto B51982d;
case 0x51982f:goto L51982f;
case 0x519832:c.instructions+=2;goto B519832;
case 0x519834:c.instructions+=1;goto B519834;
case 0x519836:goto L519836;
case 0x519838:c.instructions+=1;goto B519838;
case 0x51983a:goto L51983a;
case 0x51983b:c.instructions+=3;goto B51983b;
case 0x51983d:c.instructions+=2;goto B51983d;
case 0x51983f:c.instructions+=1;goto B51983f;
case 0x519841:goto L519841;
case 0x519844:c.instructions+=1;goto B519844;
case 0x519846:goto L519846;
case 0x519848:c.instructions+=5;goto B519848;
case 0x519849:c.instructions+=4;goto B519849;
case 0x51984b:c.instructions+=3;goto B51984b;
case 0x51984d:c.instructions+=2;goto B51984d;
case 0x51984f:c.instructions+=1;goto B51984f;
case 0x519851:goto L519851;
case 0x519853:goto L519853;
case 0x519857:goto L519857;
case 0x51985a:c.instructions+=5;goto B51985a;
case 0x51985c:c.instructions+=4;goto B51985c;
case 0x519860:c.instructions+=3;goto B519860;
case 0x519863:c.instructions+=2;goto B519863;
case 0x519865:c.instructions+=1;goto B519865;
case 0x519867:goto L519867;
case 0x51986a:c.instructions+=1;goto B51986a;
case 0x51986c:goto L51986c;
case 0x51986e:c.instructions+=1;goto B51986e;
case 0x519870:goto L519870;
case 0x519871:c.instructions+=1;goto B519871;
case 0x519873:goto L519873;
case 0x519876:c.instructions+=2;goto B519876;
case 0x519878:c.instructions+=1;goto B519878;
case 0x51987a:goto L51987a;
case 0x51987c:c.instructions+=1;goto B51987c;
case 0x51987e:goto L51987e;
case 0x51987f:c.instructions+=3;goto B51987f;
case 0x519881:c.instructions+=2;goto B519881;
case 0x519883:c.instructions+=1;goto B519883;
case 0x519885:goto L519885;
case 0x519888:c.instructions+=1;goto B519888;
case 0x51988a:goto L51988a;
case 0x51988c:c.instructions+=5;goto B51988c;
case 0x51988d:c.instructions+=4;goto B51988d;
case 0x51988f:c.instructions+=3;goto B51988f;
case 0x519891:c.instructions+=2;goto B519891;
case 0x519893:c.instructions+=1;goto B519893;
case 0x519895:goto L519895;
case 0x519897:goto L519897;
case 0x51989b:c.instructions+=15;goto B51989b;
case 0x51989e:c.instructions+=14;goto B51989e;
case 0x5198a4:c.instructions+=13;goto B5198a4;
case 0x5198a6:c.instructions+=12;goto B5198a6;
case 0x5198a9:c.instructions+=11;goto B5198a9;
case 0x5198ac:c.instructions+=10;goto B5198ac;
case 0x5198b0:c.instructions+=9;goto B5198b0;
case 0x5198b4:c.instructions+=8;goto B5198b4;
case 0x5198b6:c.instructions+=7;goto B5198b6;
case 0x5198b8:c.instructions+=6;goto B5198b8;
case 0x5198bb:c.instructions+=5;goto B5198bb;
case 0x5198be:c.instructions+=4;goto B5198be;
case 0x5198c2:c.instructions+=3;goto B5198c2;
case 0x5198c3:c.instructions+=2;goto B5198c3;
case 0x5198c5:c.instructions+=1;goto B5198c5;
case 0x5198cb:goto L5198cb;
case 0x5198cf:goto L5198cf;
case 0x5198d3:c.instructions+=5;goto B5198d3;
case 0x5198d7:c.instructions+=4;goto B5198d7;
case 0x5198d8:c.instructions+=3;goto B5198d8;
case 0x5198da:c.instructions+=2;goto B5198da;
case 0x5198de:c.instructions+=1;goto B5198de;
case 0x5198e4:goto L5198e4;
case 0x5198e5:c.instructions+=1;goto B5198e5;
case 0x5198e6:goto L5198e6;
case 0x5198e7:c.instructions+=3;goto B5198e7;
case 0x5198e8:c.instructions+=2;goto B5198e8;
case 0x5198e9:c.instructions+=1;goto B5198e9;
case 0x5198f0:goto L5198f0;
case 0x5198f1:c.instructions+=13;goto B5198f1;
case 0x5198f5:c.instructions+=12;goto B5198f5;
case 0x5198f9:c.instructions+=11;goto B5198f9;
case 0x5198fa:c.instructions+=10;goto B5198fa;
case 0x5198fe:c.instructions+=9;goto B5198fe;
case 0x5198ff:c.instructions+=8;goto B5198ff;
case 0x519903:c.instructions+=7;goto B519903;
case 0x519905:c.instructions+=6;goto B519905;
case 0x519907:c.instructions+=5;goto B519907;
case 0x519909:c.instructions+=4;goto B519909;
case 0x51990d:c.instructions+=3;goto B51990d;
case 0x519911:c.instructions+=2;goto B519911;
case 0x519915:c.instructions+=1;goto B519915;
case 0x51991b:goto L51991b;
case 0x51991c:c.instructions+=2;goto B51991c;
case 0x51991d:c.instructions+=1;goto B51991d;
case 0x519920:goto L519920;
case 0x519924:c.instructions+=1;goto B519924;
case 0x51992a:goto L51992a;
case 0x519930:goto L519930;
case 0x519933:c.instructions+=4;goto B519933;
case 0x519935:c.instructions+=3;goto B519935;
case 0x519938:c.instructions+=2;goto B519938;
case 0x51993a:c.instructions+=1;goto B51993a;
case 0x51993c:goto L51993c;
case 0x519944:c.instructions+=1;goto B519944;
case 0x519946:goto L519946;
case 0x519948:c.instructions+=1;goto B519948;
case 0x51994a:goto L51994a;
case 0x51994c:c.instructions+=2;goto B51994c;
case 0x51994d:c.instructions+=1;goto B51994d;
case 0x51994f:goto L51994f;
case 0x519952:c.instructions+=2;goto B519952;
case 0x519954:c.instructions+=1;goto B519954;
case 0x519956:goto L519956;
case 0x519958:c.instructions+=1;goto B519958;
case 0x51995a:goto L51995a;
case 0x51995b:c.instructions+=3;goto B51995b;
case 0x51995d:c.instructions+=2;goto B51995d;
case 0x51995f:c.instructions+=1;goto B51995f;
case 0x519961:goto L519961;
case 0x519964:c.instructions+=1;goto B519964;
case 0x519966:goto L519966;
case 0x519968:c.instructions+=5;goto B519968;
case 0x519969:c.instructions+=4;goto B519969;
case 0x51996b:c.instructions+=3;goto B51996b;
case 0x51996d:c.instructions+=2;goto B51996d;
case 0x51996f:c.instructions+=1;goto B51996f;
case 0x519971:goto L519971;
case 0x519973:goto L519973;
case 0x519977:goto L519977;
case 0x51997a:c.instructions+=5;goto B51997a;
case 0x51997c:c.instructions+=4;goto B51997c;
case 0x519980:c.instructions+=3;goto B519980;
case 0x519983:c.instructions+=2;goto B519983;
case 0x519985:c.instructions+=1;goto B519985;
case 0x519987:goto L519987;
case 0x51998a:c.instructions+=1;goto B51998a;
case 0x51998c:goto L51998c;
case 0x51998e:c.instructions+=1;goto B51998e;
case 0x519990:goto L519990;
case 0x519991:c.instructions+=1;goto B519991;
case 0x519993:goto L519993;
case 0x519996:c.instructions+=2;goto B519996;
case 0x519998:c.instructions+=1;goto B519998;
case 0x51999a:goto L51999a;
case 0x51999c:c.instructions+=1;goto B51999c;
case 0x51999e:goto L51999e;
case 0x51999f:c.instructions+=3;goto B51999f;
case 0x5199a1:c.instructions+=2;goto B5199a1;
case 0x5199a3:c.instructions+=1;goto B5199a3;
case 0x5199a5:goto L5199a5;
case 0x5199a8:c.instructions+=1;goto B5199a8;
case 0x5199aa:goto L5199aa;
case 0x5199ac:c.instructions+=5;goto B5199ac;
case 0x5199ad:c.instructions+=4;goto B5199ad;
case 0x5199af:c.instructions+=3;goto B5199af;
case 0x5199b1:c.instructions+=2;goto B5199b1;
case 0x5199b3:c.instructions+=1;goto B5199b3;
case 0x5199b5:goto L5199b5;
case 0x5199b7:goto L5199b7;
case 0x5199bb:c.instructions+=11;goto B5199bb;
case 0x5199be:c.instructions+=10;goto B5199be;
case 0x5199c4:c.instructions+=9;goto B5199c4;
case 0x5199c6:c.instructions+=8;goto B5199c6;
case 0x5199c9:c.instructions+=7;goto B5199c9;
case 0x5199cd:c.instructions+=6;goto B5199cd;
case 0x5199d0:c.instructions+=5;goto B5199d0;
case 0x5199d4:c.instructions+=4;goto B5199d4;
case 0x5199d8:c.instructions+=3;goto B5199d8;
case 0x5199d9:c.instructions+=2;goto B5199d9;
case 0x5199db:c.instructions+=1;goto B5199db;
case 0x5199e1:goto L5199e1;
case 0x5199e5:goto L5199e5;
case 0x5199e9:c.instructions+=5;goto B5199e9;
case 0x5199ed:c.instructions+=4;goto B5199ed;
case 0x5199ee:c.instructions+=3;goto B5199ee;
case 0x5199f0:c.instructions+=2;goto B5199f0;
case 0x5199f4:c.instructions+=1;goto B5199f4;
case 0x5199fa:goto L5199fa;
case 0x5199fb:c.instructions+=1;goto B5199fb;
case 0x5199fc:goto L5199fc;
case 0x5199fd:c.instructions+=3;goto B5199fd;
case 0x5199fe:c.instructions+=2;goto B5199fe;
case 0x5199ff:c.instructions+=1;goto B5199ff;
case 0x519a10:goto L519a10;
case 0x519a11:c.instructions+=6;goto B519a11;
case 0x519a13:c.instructions+=5;goto B519a13;
case 0x519a15:c.instructions+=4;goto B519a15;
case 0x519a16:c.instructions+=3;goto B519a16;
case 0x519a1a:c.instructions+=2;goto B519a1a;
case 0x519a1c:c.instructions+=1;goto B519a1c;
case 0x519a22:goto L519a22;
case 0x519a24:c.instructions+=1;goto B519a24;
case 0x519a26:goto L519a26;
case 0x519a29:c.instructions+=2;goto B519a29;
case 0x519a2b:c.instructions+=1;goto B519a2b;
case 0x519a2d:goto L519a2d;
case 0x519a2e:c.instructions+=1;goto B519a2e;
case 0x519a33:goto L519a33;
case 0x519a36:goto L519a36;
case 0x519a37:c.instructions+=4;goto B519a37;
case 0x519a3e:c.instructions+=3;goto B519a3e;
case 0x519a44:c.instructions+=2;goto B519a44;
case 0x519a45:c.instructions+=1;goto B519a45;
case 0x519a48:goto L519a48;
case 0x519a49:c.instructions+=5;goto B519a49;
case 0x519a4d:c.instructions+=4;goto B519a4d;
case 0x519a4e:c.instructions+=3;goto B519a4e;
case 0x519a51:c.instructions+=2;goto B519a51;
case 0x519a52:c.instructions+=1;goto B519a52;
case 0x519a57:goto L519a57;
case 0x519a59:c.instructions+=5;goto B519a59;
case 0x519a5c:c.instructions+=4;goto B519a5c;
case 0x519a5e:c.instructions+=3;goto B519a5e;
case 0x519a60:c.instructions+=2;goto B519a60;
case 0x519a64:c.instructions+=1;goto B519a64;
case 0x519a66:goto L519a66;
case 0x519a68:c.instructions+=3;goto B519a68;
case 0x519a6b:c.instructions+=2;goto B519a6b;
case 0x519a6d:c.instructions+=1;goto B519a6d;
case 0x519a70:goto L519a70;
case 0x519a72:goto L519a72;
case 0x519a74:c.instructions+=1;goto B519a74;
case 0x519a77:goto L519a77;
case 0x519a79:goto L519a79;
case 0x519a7b:goto L519a7b;
case 0x519a7e:c.instructions+=4;goto B519a7e;
case 0x519a81:c.instructions+=3;goto B519a81;
case 0x519a84:c.instructions+=2;goto B519a84;
case 0x519a86:c.instructions+=1;goto B519a86;
case 0x519a89:goto L519a89;
case 0x519a8b:goto L519a8b;
case 0x519a8d:c.instructions+=1;goto B519a8d;
case 0x519a90:goto L519a90;
case 0x519a92:goto L519a92;
case 0x519a94:c.instructions+=10;goto B519a94;
case 0x519a98:c.instructions+=9;goto B519a98;
case 0x519a9a:c.instructions+=8;goto B519a9a;
case 0x519a9c:c.instructions+=7;goto B519a9c;
case 0x519a9f:c.instructions+=6;goto B519a9f;
case 0x519aa2:c.instructions+=5;goto B519aa2;
case 0x519aa5:c.instructions+=4;goto B519aa5;
case 0x519aa8:c.instructions+=3;goto B519aa8;
case 0x519aaa:c.instructions+=2;goto B519aaa;
case 0x519aad:c.instructions+=1;goto B519aad;
case 0x519aaf:goto L519aaf;
case 0x519ab1:goto L519ab1;
case 0x519ab3:c.instructions+=1;goto B519ab3;
case 0x519ab6:goto L519ab6;
case 0x519ab8:goto L519ab8;
case 0x519abb:c.instructions+=2;goto B519abb;
case 0x519abc:c.instructions+=1;goto B519abc;
case 0x519ac1:goto L519ac1;
case 0x519ac5:c.instructions+=5;goto B519ac5;
case 0x519ac8:c.instructions+=4;goto B519ac8;
case 0x519ac9:c.instructions+=3;goto B519ac9;
case 0x519acc:c.instructions+=2;goto B519acc;
case 0x519ace:c.instructions+=1;goto B519ace;
case 0x519acf:goto L519acf;
case 0x519ad0:c.instructions+=2;goto B519ad0;
case 0x519ad1:c.instructions+=1;goto B519ad1;
case 0x519ae0:goto L519ae0;
case 0x519ae2:c.instructions+=6;goto B519ae2;
case 0x519ae3:c.instructions+=5;goto B519ae3;
case 0x519ae5:c.instructions+=4;goto B519ae5;
case 0x519ae8:c.instructions+=3;goto B519ae8;
case 0x519aed:c.instructions+=2;goto B519aed;
case 0x519af4:c.instructions+=1;goto B519af4;
case 0x519afa:goto L519afa;
case 0x519afc:goto L519afc;
case 0x519afe:c.instructions+=2;goto B519afe;
case 0x519aff:c.instructions+=1;goto B519aff;
case 0x519b00:goto L519b00;
case 0x519b03:c.instructions+=28;goto B519b03;
case 0x519b07:c.instructions+=27;goto B519b07;
case 0x519b09:c.instructions+=26;goto B519b09;
case 0x519b0b:c.instructions+=25;goto B519b0b;
case 0x519b0f:c.instructions+=24;goto B519b0f;
case 0x519b12:c.instructions+=23;goto B519b12;
case 0x519b16:c.instructions+=22;goto B519b16;
case 0x519b19:c.instructions+=21;goto B519b19;
case 0x519b1c:c.instructions+=20;goto B519b1c;
case 0x519b20:c.instructions+=19;goto B519b20;
case 0x519b24:c.instructions+=18;goto B519b24;
case 0x519b25:c.instructions+=17;goto B519b25;
case 0x519b29:c.instructions+=16;goto B519b29;
case 0x519b2c:c.instructions+=15;goto B519b2c;
case 0x519b30:c.instructions+=14;goto B519b30;
case 0x519b34:c.instructions+=13;goto B519b34;
case 0x519b37:c.instructions+=12;goto B519b37;
case 0x519b39:c.instructions+=11;goto B519b39;
case 0x519b3d:c.instructions+=10;goto B519b3d;
case 0x519b40:c.instructions+=9;goto B519b40;
case 0x519b42:c.instructions+=8;goto B519b42;
case 0x519b46:c.instructions+=7;goto B519b46;
case 0x519b48:c.instructions+=6;goto B519b48;
case 0x519b4a:c.instructions+=5;goto B519b4a;
case 0x519b50:c.instructions+=4;goto B519b50;
case 0x519b54:c.instructions+=3;goto B519b54;
case 0x519b56:c.instructions+=2;goto B519b56;
case 0x519b59:c.instructions+=1;goto B519b59;
case 0x519b5b:goto L519b5b;
case 0x519b5d:c.instructions+=13;goto B519b5d;
case 0x519b61:c.instructions+=12;goto B519b61;
case 0x519b65:c.instructions+=11;goto B519b65;
case 0x519b67:c.instructions+=10;goto B519b67;
case 0x519b6b:c.instructions+=9;goto B519b6b;
case 0x519b6f:c.instructions+=8;goto B519b6f;
case 0x519b71:c.instructions+=7;goto B519b71;
case 0x519b75:c.instructions+=6;goto B519b75;
case 0x519b79:c.instructions+=5;goto B519b79;
case 0x519b7b:c.instructions+=4;goto B519b7b;
case 0x519b7f:c.instructions+=3;goto B519b7f;
case 0x519b83:c.instructions+=2;goto B519b83;
case 0x519b85:c.instructions+=1;goto B519b85;
case 0x519b89:goto L519b89;
case 0x519b8f:c.instructions+=3;goto B519b8f;
case 0x519b91:c.instructions+=2;goto B519b91;
case 0x519b94:c.instructions+=1;goto B519b94;
case 0x519b9a:goto L519b9a;
case 0x519b9e:c.instructions+=2;goto B519b9e;
case 0x519b9f:c.instructions+=1;goto B519b9f;
case 0x519ba4:goto L519ba4;
case 0x519ba9:c.instructions+=9;goto B519ba9;
case 0x519bab:c.instructions+=8;goto B519bab;
case 0x519bae:c.instructions+=7;goto B519bae;
case 0x519bb2:c.instructions+=6;goto B519bb2;
case 0x519bb6:c.instructions+=5;goto B519bb6;
case 0x519bbc:c.instructions+=4;goto B519bbc;
case 0x519bc0:c.instructions+=3;goto B519bc0;
case 0x519bc4:c.instructions+=2;goto B519bc4;
case 0x519bc5:c.instructions+=1;goto B519bc5;
case 0x519bca:goto L519bca;
case 0x519bce:c.instructions+=5;goto B519bce;
case 0x519bd2:c.instructions+=4;goto B519bd2;
case 0x519bd5:c.instructions+=3;goto B519bd5;
case 0x519bd9:c.instructions+=2;goto B519bd9;
case 0x519bdc:c.instructions+=1;goto B519bdc;
case 0x519be1:goto L519be1;
case 0x519be5:c.instructions+=5;goto B519be5;
case 0x519beb:c.instructions+=4;goto B519beb;
case 0x519bef:c.instructions+=3;goto B519bef;
case 0x519bf3:c.instructions+=2;goto B519bf3;
case 0x519bf6:c.instructions+=1;goto B519bf6;
case 0x519bfb:goto L519bfb;
case 0x519bff:c.instructions+=18;goto B519bff;
case 0x519c03:c.instructions+=17;goto B519c03;
case 0x519c07:c.instructions+=16;goto B519c07;
case 0x519c0b:c.instructions+=15;goto B519c0b;
case 0x519c0f:c.instructions+=14;goto B519c0f;
case 0x519c10:c.instructions+=13;goto B519c10;
case 0x519c11:c.instructions+=12;goto B519c11;
case 0x519c12:c.instructions+=11;goto B519c12;
case 0x519c16:c.instructions+=10;goto B519c16;
case 0x519c1a:c.instructions+=9;goto B519c1a;
case 0x519c1e:c.instructions+=8;goto B519c1e;
case 0x519c22:c.instructions+=7;goto B519c22;
case 0x519c26:c.instructions+=6;goto B519c26;
case 0x519c2a:c.instructions+=5;goto B519c2a;
case 0x519c2e:c.instructions+=4;goto B519c2e;
case 0x519c32:c.instructions+=3;goto B519c32;
case 0x519c36:c.instructions+=2;goto B519c36;
case 0x519c3a:c.instructions+=1;goto B519c3a;
case 0x519c3f:goto L519c3f;
case 0x519c43:c.instructions+=29;goto B519c43;
case 0x519c46:c.instructions+=28;goto B519c46;
case 0x519c48:c.instructions+=27;goto B519c48;
case 0x519c4c:c.instructions+=26;goto B519c4c;
case 0x519c4f:c.instructions+=25;goto B519c4f;
case 0x519c53:c.instructions+=24;goto B519c53;
case 0x519c57:c.instructions+=23;goto B519c57;
case 0x519c5a:c.instructions+=22;goto B519c5a;
case 0x519c5e:c.instructions+=21;goto B519c5e;
case 0x519c62:c.instructions+=20;goto B519c62;
case 0x519c65:c.instructions+=19;goto B519c65;
case 0x519c69:c.instructions+=18;goto B519c69;
case 0x519c6f:c.instructions+=17;goto B519c6f;
case 0x519c73:c.instructions+=16;goto B519c73;
case 0x519c77:c.instructions+=15;goto B519c77;
case 0x519c7b:c.instructions+=14;goto B519c7b;
case 0x519c7f:c.instructions+=13;goto B519c7f;
case 0x519c83:c.instructions+=12;goto B519c83;
case 0x519c87:c.instructions+=11;goto B519c87;
case 0x519c8b:c.instructions+=10;goto B519c8b;
case 0x519c8f:c.instructions+=9;goto B519c8f;
case 0x519c93:c.instructions+=8;goto B519c93;
case 0x519c97:c.instructions+=7;goto B519c97;
case 0x519c9b:c.instructions+=6;goto B519c9b;
case 0x519c9f:c.instructions+=5;goto B519c9f;
case 0x519ca3:c.instructions+=4;goto B519ca3;
case 0x519ca5:c.instructions+=3;goto B519ca5;
case 0x519ca9:c.instructions+=2;goto B519ca9;
case 0x519cad:c.instructions+=1;goto B519cad;
case 0x519caf:goto L519caf;
case 0x519cb3:c.instructions+=6;goto B519cb3;
case 0x519cb4:c.instructions+=5;goto B519cb4;
case 0x519cb5:c.instructions+=4;goto B519cb5;
case 0x519cb6:c.instructions+=3;goto B519cb6;
case 0x519cba:c.instructions+=2;goto B519cba;
case 0x519cbb:c.instructions+=1;goto B519cbb;
case 0x519cc0:goto L519cc0;
case 0x519cc3:c.instructions+=4;goto B519cc3;
case 0x519cc4:c.instructions+=3;goto B519cc4;
case 0x519cc8:c.instructions+=2;goto B519cc8;
case 0x519cc9:c.instructions+=1;goto B519cc9;
case 0x519cce:goto L519cce;
case 0x519ccf:c.instructions+=4;goto B519ccf;
case 0x519cd3:c.instructions+=3;goto B519cd3;
case 0x519cd4:c.instructions+=2;goto B519cd4;
case 0x519cd5:c.instructions+=1;goto B519cd5;
case 0x519cda:goto L519cda;
case 0x519cde:c.instructions+=2;goto B519cde;
case 0x519cdf:c.instructions+=1;goto B519cdf;
case 0x519ce4:goto L519ce4;
case 0x519ce8:c.instructions+=6;goto B519ce8;
case 0x519cec:c.instructions+=5;goto B519cec;
case 0x519cf0:c.instructions+=4;goto B519cf0;
case 0x519cf4:c.instructions+=3;goto B519cf4;
case 0x519cf8:c.instructions+=2;goto B519cf8;
case 0x519cfb:c.instructions+=1;goto B519cfb;
case 0x519cff:goto L519cff;
case 0x519d03:c.instructions+=7;goto B519d03;
case 0x519d07:c.instructions+=6;goto B519d07;
case 0x519d08:c.instructions+=5;goto B519d08;
case 0x519d0c:c.instructions+=4;goto B519d0c;
case 0x519d0d:c.instructions+=3;goto B519d0d;
case 0x519d11:c.instructions+=2;goto B519d11;
case 0x519d15:c.instructions+=1;goto B519d15;
case 0x519d1a:goto L519d1a;
case 0x519d1c:c.instructions+=11;goto B519d1c;
case 0x519d20:c.instructions+=10;goto B519d20;
case 0x519d22:c.instructions+=9;goto B519d22;
case 0x519d25:c.instructions+=8;goto B519d25;
case 0x519d28:c.instructions+=7;goto B519d28;
case 0x519d2b:c.instructions+=6;goto B519d2b;
case 0x519d2e:c.instructions+=5;goto B519d2e;
case 0x519d31:c.instructions+=4;goto B519d31;
case 0x519d34:c.instructions+=3;goto B519d34;
case 0x519d35:c.instructions+=2;goto B519d35;
case 0x519d38:c.instructions+=1;goto B519d38;
case 0x519d40:goto L519d40;
case 0x519d44:c.instructions+=10;goto B519d44;
case 0x519d47:c.instructions+=9;goto B519d47;
case 0x519d48:c.instructions+=8;goto B519d48;
case 0x519d4c:c.instructions+=7;goto B519d4c;
case 0x519d4d:c.instructions+=6;goto B519d4d;
case 0x519d51:c.instructions+=5;goto B519d51;
case 0x519d54:c.instructions+=4;goto B519d54;
case 0x519d57:c.instructions+=3;goto B519d57;
case 0x519d5a:c.instructions+=2;goto B519d5a;
case 0x519d5c:c.instructions+=1;goto B519d5c;
case 0x519d5e:goto L519d5e;
case 0x519d5f:c.instructions+=1;goto B519d5f;
case 0x519d64:goto L519d64;
case 0x519d67:c.instructions+=2;goto B519d67;
case 0x519d69:c.instructions+=1;goto B519d69;
case 0x519d6b:goto L519d6b;
case 0x519d6e:c.instructions+=1;goto B519d6e;
case 0x519d70:goto L519d70;
case 0x519d73:c.instructions+=4;goto B519d73;
case 0x519d77:c.instructions+=3;goto B519d77;
case 0x519d79:c.instructions+=2;goto B519d79;
case 0x519d7c:c.instructions+=1;goto B519d7c;
case 0x519d7f:goto L519d7f;
case 0x519d81:goto L519d81;
case 0x519d83:c.instructions+=1;goto B519d83;
case 0x519d86:goto L519d86;
case 0x519d88:goto L519d88;
case 0x519d89:c.instructions+=2;goto B519d89;
case 0x519d8a:c.instructions+=1;goto B519d8a;
case 0x519d8b:goto L519d8b;
case 0x519d8d:c.instructions+=2;goto B519d8d;
case 0x519d8e:c.instructions+=1;goto B519d8e;
case 0x519d93:goto L519d93;
case 0x519d96:c.instructions+=2;goto B519d96;
case 0x519d98:c.instructions+=1;goto B519d98;
case 0x519d9a:goto L519d9a;
case 0x519d9d:c.instructions+=1;goto B519d9d;
case 0x519d9f:goto L519d9f;
case 0x519da2:c.instructions+=4;goto B519da2;
case 0x519da6:c.instructions+=3;goto B519da6;
case 0x519da8:c.instructions+=2;goto B519da8;
case 0x519dab:c.instructions+=1;goto B519dab;
case 0x519dae:goto L519dae;
case 0x519db0:goto L519db0;
case 0x519db2:c.instructions+=1;goto B519db2;
case 0x519db5:goto L519db5;
case 0x519db7:goto L519db7;
case 0x519db8:c.instructions+=2;goto B519db8;
case 0x519db9:c.instructions+=1;goto B519db9;
case 0x519dc0:goto L519dc0;
case 0x519dc1:c.instructions+=2;goto B519dc1;
case 0x519dc3:c.instructions+=1;goto B519dc3;
case 0x519dc8:goto L519dc8;
case 0x519dcd:c.instructions+=1;goto B519dcd;
case 0x519dcf:goto L519dcf;
case 0x519dd0:c.instructions+=1;goto B519dd0;
case 0x519dd5:goto L519dd5;
case 0x519dd8:goto L519dd8;
case 0x519dda:c.instructions+=2;goto B519dda;
case 0x519ddb:c.instructions+=1;goto B519ddb;
case 0x519de0:goto L519de0;
case 0x519de1:c.instructions+=7;goto B519de1;
case 0x519de2:c.instructions+=6;goto B519de2;
case 0x519de4:c.instructions+=5;goto B519de4;
case 0x519de7:c.instructions+=4;goto B519de7;
case 0x519de9:c.instructions+=3;goto B519de9;
case 0x519deb:c.instructions+=2;goto B519deb;
case 0x519dec:c.instructions+=1;goto B519dec;
case 0x519dee:goto L519dee;
case 0x519def:c.instructions+=1;goto B519def;
case 0x519df4:goto L519df4;
case 0x519df7:c.instructions+=1;goto B519df7;
case 0x519dfa:goto L519dfa;
case 0x519dfe:c.instructions+=2;goto B519dfe;
case 0x519e00:c.instructions+=1;goto B519e00;
case 0x519e02:goto L519e02;
case 0x519e04:c.instructions+=1;goto B519e04;
case 0x519e07:goto L519e07;
case 0x519e09:c.instructions+=3;goto B519e09;
case 0x519e0a:c.instructions+=2;goto B519e0a;
case 0x519e0c:c.instructions+=1;goto B519e0c;
case 0x519e0e:goto L519e0e;
case 0x519e10:c.instructions+=3;goto B519e10;
case 0x519e11:c.instructions+=2;goto B519e11;
case 0x519e12:c.instructions+=1;goto B519e12;
case 0x519e17:goto L519e17;
case 0x519e1a:c.instructions+=3;goto B519e1a;
case 0x519e1c:c.instructions+=2;goto B519e1c;
case 0x519e1f:c.instructions+=1;goto B519e1f;
case 0x519e21:goto L519e21;
case 0x519e23:c.instructions+=1;goto B519e23;
case 0x519e25:goto L519e25;
case 0x519e27:c.instructions+=5;goto B519e27;
case 0x519e28:c.instructions+=4;goto B519e28;
case 0x519e2a:c.instructions+=3;goto B519e2a;
case 0x519e2b:c.instructions+=2;goto B519e2b;
case 0x519e2d:c.instructions+=1;goto B519e2d;
case 0x519e2f:goto L519e2f;
case 0x519e31:goto L519e31;
case 0x519e34:c.instructions+=2;goto B519e34;
case 0x519e35:c.instructions+=1;goto B519e35;
case 0x519e3a:goto L519e3a;
case 0x519e3d:c.instructions+=6;goto B519e3d;
case 0x519e3e:c.instructions+=5;goto B519e3e;
case 0x519e41:c.instructions+=4;goto B519e41;
case 0x519e42:c.instructions+=3;goto B519e42;
case 0x519e44:c.instructions+=2;goto B519e44;
case 0x519e45:c.instructions+=1;goto B519e45;
case 0x519e50:goto L519e50;
case 0x519e51:c.instructions+=7;goto B519e51;
case 0x519e52:c.instructions+=6;goto B519e52;
case 0x519e53:c.instructions+=5;goto B519e53;
case 0x519e54:c.instructions+=4;goto B519e54;
case 0x519e58:c.instructions+=3;goto B519e58;
case 0x519e59:c.instructions+=2;goto B519e59;
case 0x519e5b:c.instructions+=1;goto B519e5b;
case 0x519e60:goto L519e60;
case 0x519e64:c.instructions+=4;goto B519e64;
case 0x519e67:c.instructions+=3;goto B519e67;
case 0x519e69:c.instructions+=2;goto B519e69;
case 0x519e6b:c.instructions+=1;goto B519e6b;
case 0x519e6d:goto L519e6d;
case 0x519e70:goto L519e70;
case 0x519e73:c.instructions+=2;goto B519e73;
case 0x519e75:c.instructions+=1;goto B519e75;
case 0x519e77:goto L519e77;
case 0x519e7a:c.instructions+=1;goto B519e7a;
case 0x519e7c:goto L519e7c;
case 0x519e7d:c.instructions+=2;goto B519e7d;
case 0x519e7e:c.instructions+=1;goto B519e7e;
case 0x519e83:goto L519e83;
case 0x519e86:c.instructions+=2;goto B519e86;
case 0x519e88:c.instructions+=1;goto B519e88;
case 0x519e8a:goto L519e8a;
case 0x519e8c:goto L519e8c;
case 0x519e8e:goto L519e8e;
case 0x519e91:c.instructions+=2;goto B519e91;
case 0x519e93:c.instructions+=1;goto B519e93;
case 0x519e95:goto L519e95;
case 0x519e96:c.instructions+=5;goto B519e96;
case 0x519e97:c.instructions+=4;goto B519e97;
case 0x519e99:c.instructions+=3;goto B519e99;
case 0x519e9a:c.instructions+=2;goto B519e9a;
case 0x519e9b:c.instructions+=1;goto B519e9b;
case 0x519e9e:goto L519e9e;
case 0x519e9f:c.instructions+=5;goto B519e9f;
case 0x519ea1:c.instructions+=4;goto B519ea1;
case 0x519ea2:c.instructions+=3;goto B519ea2;
case 0x519ea3:c.instructions+=2;goto B519ea3;
case 0x519ea4:c.instructions+=1;goto B519ea4;
case 0x519eb0:goto L519eb0;
case 0x519eb1:c.instructions+=4;goto B519eb1;
case 0x519eb2:c.instructions+=3;goto B519eb2;
case 0x519eb4:c.instructions+=2;goto B519eb4;
case 0x519eb6:c.instructions+=1;goto B519eb6;
case 0x519ebb:goto L519ebb;
case 0x519ebd:c.instructions+=3;goto B519ebd;
case 0x519ec0:c.instructions+=2;goto B519ec0;
case 0x519ec2:c.instructions+=1;goto B519ec2;
case 0x519ec4:goto L519ec4;
case 0x519ec9:c.instructions+=9;goto B519ec9;
case 0x519ecc:c.instructions+=8;goto B519ecc;
case 0x519ecf:c.instructions+=7;goto B519ecf;
case 0x519ed2:c.instructions+=6;goto B519ed2;
case 0x519ed5:c.instructions+=5;goto B519ed5;
case 0x519ed8:c.instructions+=4;goto B519ed8;
case 0x519edb:c.instructions+=3;goto B519edb;
case 0x519ede:c.instructions+=2;goto B519ede;
case 0x519ee4:c.instructions+=1;goto B519ee4;
case 0x519ee6:goto L519ee6;
case 0x519eea:c.instructions+=3;goto B519eea;
case 0x519eeb:c.instructions+=2;goto B519eeb;
case 0x519eed:c.instructions+=1;goto B519eed;
case 0x519ef2:goto L519ef2;
case 0x519ef6:c.instructions+=6;goto B519ef6;
case 0x519ef9:c.instructions+=5;goto B519ef9;
case 0x519f00:c.instructions+=4;goto B519f00;
case 0x519f03:c.instructions+=3;goto B519f03;
case 0x519f04:c.instructions+=2;goto B519f04;
case 0x519f06:c.instructions+=1;goto B519f06;
case 0x519f0b:goto L519f0b;
case 0x519f0c:c.instructions+=2;goto B519f0c;
case 0x519f0d:c.instructions+=1;goto B519f0d;
case 0x519f10:goto L519f10;
case 0x519f11:c.instructions+=4;goto B519f11;
case 0x519f14:c.instructions+=3;goto B519f14;
case 0x519f16:c.instructions+=2;goto B519f16;
case 0x519f17:c.instructions+=1;goto B519f17;
case 0x519f19:goto L519f19;
case 0x519f1d:c.instructions+=1;goto B519f1d;
case 0x519f20:goto L519f20;
case 0x519f23:c.instructions+=3;goto B519f23;
case 0x519f24:c.instructions+=2;goto B519f24;
case 0x519f25:c.instructions+=1;goto B519f25;
case 0x519f2a:goto L519f2a;
case 0x519f2d:c.instructions+=2;goto B519f2d;
case 0x519f2f:c.instructions+=1;goto B519f2f;
case 0x519f31:goto L519f31;
case 0x519f34:c.instructions+=2;goto B519f34;
case 0x519f36:c.instructions+=1;goto B519f36;
case 0x519f38:goto L519f38;
case 0x519f39:c.instructions+=3;goto B519f39;
case 0x519f3b:c.instructions+=2;goto B519f3b;
case 0x519f3c:c.instructions+=1;goto B519f3c;
case 0x519f40:goto L519f40;
case 0x519f41:c.instructions+=5;goto B519f41;
case 0x519f43:c.instructions+=4;goto B519f43;
case 0x519f46:c.instructions+=3;goto B519f46;
case 0x519f47:c.instructions+=2;goto B519f47;
case 0x519f48:c.instructions+=1;goto B519f48;
case 0x519f4d:goto L519f4d;
case 0x519f51:c.instructions+=4;goto B519f51;
case 0x519f54:c.instructions+=3;goto B519f54;
case 0x519f56:c.instructions+=2;goto B519f56;
case 0x519f5d:c.instructions+=1;goto B519f5d;
case 0x519f5f:goto L519f5f;
case 0x519f61:c.instructions+=1;goto B519f61;
case 0x519f64:goto L519f64;
case 0x519f66:c.instructions+=3;goto B519f66;
case 0x519f67:c.instructions+=2;goto B519f67;
case 0x519f69:c.instructions+=1;goto B519f69;
case 0x519f6b:goto L519f6b;
case 0x519f6d:c.instructions+=3;goto B519f6d;
case 0x519f6e:c.instructions+=2;goto B519f6e;
case 0x519f6f:c.instructions+=1;goto B519f6f;
case 0x519f74:goto L519f74;
case 0x519f77:c.instructions+=4;goto B519f77;
case 0x519f7a:c.instructions+=3;goto B519f7a;
case 0x519f7c:c.instructions+=2;goto B519f7c;
case 0x519f7e:c.instructions+=1;goto B519f7e;
case 0x519f80:goto L519f80;
case 0x519f82:c.instructions+=5;goto B519f82;
case 0x519f83:c.instructions+=4;goto B519f83;
case 0x519f85:c.instructions+=3;goto B519f85;
case 0x519f86:c.instructions+=2;goto B519f86;
case 0x519f88:c.instructions+=1;goto B519f88;
case 0x519f8a:goto L519f8a;
case 0x519f8d:c.instructions+=2;goto B519f8d;
case 0x519f8e:c.instructions+=1;goto B519f8e;
case 0x519f93:goto L519f93;
case 0x519f96:c.instructions+=7;goto B519f96;
case 0x519f9c:c.instructions+=6;goto B519f9c;
case 0x519f9f:c.instructions+=5;goto B519f9f;
case 0x519fa2:c.instructions+=4;goto B519fa2;
case 0x519fa8:c.instructions+=3;goto B519fa8;
case 0x519fab:c.instructions+=2;goto B519fab;
case 0x519fad:c.instructions+=1;goto B519fad;
case 0x519faf:goto L519faf;
case 0x519fb1:c.instructions+=2;goto B519fb1;
case 0x519fb2:c.instructions+=1;goto B519fb2;
case 0x519fb4:goto L519fb4;
case 0x519fb5:c.instructions+=2;goto B519fb5;
case 0x519fb6:c.instructions+=1;goto B519fb6;
case 0x519fc0:goto L519fc0;
case 0x519fc2:c.instructions+=15;goto B519fc2;
case 0x519fc7:c.instructions+=14;goto B519fc7;
case 0x519fcd:c.instructions+=13;goto B519fcd;
case 0x519fce:c.instructions+=12;goto B519fce;
case 0x519fd5:c.instructions+=11;goto B519fd5;
case 0x519fd8:c.instructions+=10;goto B519fd8;
case 0x519fd9:c.instructions+=9;goto B519fd9;
case 0x519fda:c.instructions+=8;goto B519fda;
case 0x519fdc:c.instructions+=7;goto B519fdc;
case 0x519fe2:c.instructions+=6;goto B519fe2;
case 0x519fe5:c.instructions+=5;goto B519fe5;
case 0x519fe8:c.instructions+=4;goto B519fe8;
case 0x519fe9:c.instructions+=3;goto B519fe9;
case 0x519fea:c.instructions+=2;goto B519fea;
case 0x519fee:c.instructions+=1;goto B519fee;
case 0x519ff0:goto L519ff0;
case 0x519ff5:goto L519ff5;
case 0x519ff7:goto L519ff7;
case 0x519ffc:c.instructions+=2;goto B519ffc;
case 0x519ffe:c.instructions+=1;goto B519ffe;
default:missing_instruction(c.pc);}
B519000:L519000:{c.instructions+=2;NFSU2_TR(0x519000);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B519002:{NFSU2_TR(0x519002);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L51902e;}}
}
B519004:L519004:{c.instructions+=12;NFSU2_TR(0x519004);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519007:{NFSU2_TR(0x519007);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51900d:{NFSU2_TR(0x51900d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B519010:{NFSU2_TR(0x519010);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B519012:{NFSU2_TR(0x519012);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B519015:{NFSU2_TR(0x519015);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B519018:{NFSU2_TR(0x519018);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B51901b:{NFSU2_TR(0x51901b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51901f:{NFSU2_TR(0x51901f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B519020:{NFSU2_TR(0x519020);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B519022:{NFSU2_TR(0x519022);
w4(R+4,u32(0xcull));
}
B519027:{NFSU2_TR(0x519027);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51902a:L51902a:{c.instructions+=1;NFSU2_TR(0x51902a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L51902c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51902au);}goto L51902a;}
}
B51902c:L51902c:{c.instructions+=1;NFSU2_TR(0x51902c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519004u);}goto L519004;}}
}
B51902e:L51902e:{c.instructions+=12;NFSU2_TR(0x51902e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519031:{NFSU2_TR(0x519031);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519035:{NFSU2_TR(0x519035);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B519038:{NFSU2_TR(0x519038);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B51903a:{NFSU2_TR(0x51903a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B51903d:{NFSU2_TR(0x51903d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519043:{NFSU2_TR(0x519043);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B519046:{NFSU2_TR(0x519046);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B51904a:{NFSU2_TR(0x51904a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51904d:{NFSU2_TR(0x51904d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+20)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+20)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51904f:{NFSU2_TR(0x51904f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519052:{NFSU2_TR(0x519052);
if(r1(R+519)){{goto L519059;}}
}
B519054:L519054:{c.instructions+=3;NFSU2_TR(0x519054);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B519055:{NFSU2_TR(0x519055);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519055);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519055);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B519057:{NFSU2_TR(0x519057);
{goto L51906b;}
}
B519059:L519059:{c.instructions+=2;NFSU2_TR(0x519059);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51905c:{NFSU2_TR(0x51905c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L519069;}}
}
B51905e:L51905e:{c.instructions+=6;NFSU2_TR(0x51905e);
w4(R+0,u32(0-u32(r4(R+0))));
}
B519060:{NFSU2_TR(0x519060);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B519061:{NFSU2_TR(0x519061);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519061);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519061);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B519063:{NFSU2_TR(0x519063);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B519065:{NFSU2_TR(0x519065);
__builtin_memmove((R+8),(R+4),4);
}
B519067:{NFSU2_TR(0x519067);
{goto L51906b;}
}
B519069:L519069:{c.instructions+=1;NFSU2_TR(0x519069);
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
B51906b:L51906b:{c.instructions+=7;NFSU2_TR(0x51906b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519071:{NFSU2_TR(0x519071);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519072:{NFSU2_TR(0x519072);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519076:{NFSU2_TR(0x519076);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519077:{NFSU2_TR(0x519077);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519078:{NFSU2_TR(0x519078);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519079:{NFSU2_TR(0x519079);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51907full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51907f:L51907f:{c.instructions+=5;NFSU2_TR(0x51907f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519082:{NFSU2_TR(0x519082);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B519085:{NFSU2_TR(0x519085);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B519086:{NFSU2_TR(0x519086);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B519088:{NFSU2_TR(0x519088);
if(r1(R+512)){TAIL_STATIC(0x518fe0u,518);}
}
B51908e:L51908e:{c.instructions+=6;NFSU2_TR(0x51908e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51908f:{NFSU2_TR(0x51908f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B519090:{NFSU2_TR(0x519090);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B519091:{NFSU2_TR(0x519091);
w1(R+0,u8(0x1ull));
}
B519093:{NFSU2_TR(0x519093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B519094:{NFSU2_TR(0x519094);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519097:L519097:{c.instructions+=2;NFSU2_TR(0x519097);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B51909a:{NFSU2_TR(0x51909a);
if(r1(R+518)){{goto L5196a4;}}
}
B5190a0:L5190a0:{c.instructions+=4;NFSU2_TR(0x5190a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5190a3:{NFSU2_TR(0x5190a3);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5190a5:{NFSU2_TR(0x5190a5);
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
B5190a7:{NFSU2_TR(0x5190a7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5196a4;}}
}
B5190ad:L5190ad:{c.instructions+=1;NFSU2_TR(0x5190ad);
__builtin_memmove((R+4),(R+4),4);
}
B5190b0:L5190b0:{c.instructions+=11;NFSU2_TR(0x5190b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5190b3:{NFSU2_TR(0x5190b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5190b9:{NFSU2_TR(0x5190b9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5190bc:{NFSU2_TR(0x5190bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5190bf:{NFSU2_TR(0x5190bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5190c2:{NFSU2_TR(0x5190c2);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5190c6:{NFSU2_TR(0x5190c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5190ca:{NFSU2_TR(0x5190ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5190ce:{NFSU2_TR(0x5190ce);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5190d0:{NFSU2_TR(0x5190d0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5190d2:{NFSU2_TR(0x5190d2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5190fe;}}
}
B5190d4:L5190d4:{c.instructions+=12;NFSU2_TR(0x5190d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5190d7:{NFSU2_TR(0x5190d7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5190da:{NFSU2_TR(0x5190da);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5190dc:{NFSU2_TR(0x5190dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5190df:{NFSU2_TR(0x5190df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5190e5:{NFSU2_TR(0x5190e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5190e8:{NFSU2_TR(0x5190e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5190eb:{NFSU2_TR(0x5190eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5190ef:{NFSU2_TR(0x5190ef);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5190f0:{NFSU2_TR(0x5190f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B5190f2:{NFSU2_TR(0x5190f2);
w4(R+4,u32(0xcull));
}
B5190f7:{NFSU2_TR(0x5190f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5190fa:L5190fa:{c.instructions+=1;NFSU2_TR(0x5190fa);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5190fc;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5190fau);}goto L5190fa;}
}
B5190fc:L5190fc:{c.instructions+=1;NFSU2_TR(0x5190fc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5190d4u);}goto L5190d4;}}
}
B5190fe:L5190fe:{c.instructions+=16;NFSU2_TR(0x5190fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519101:{NFSU2_TR(0x519101);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B519104:{NFSU2_TR(0x519104);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B519106:{NFSU2_TR(0x519106);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51910c:{NFSU2_TR(0x51910c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B51910f:{NFSU2_TR(0x51910f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519113:{NFSU2_TR(0x519113);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B519116:{NFSU2_TR(0x519116);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B51911a:{NFSU2_TR(0x51911a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51911d:{NFSU2_TR(0x51911d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519120:{NFSU2_TR(0x519120);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519123:{NFSU2_TR(0x519123);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B519125:{NFSU2_TR(0x519125);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519126:{NFSU2_TR(0x519126);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B519128:{NFSU2_TR(0x519128);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519129:{NFSU2_TR(0x519129);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51912eull));
TAIL_STATIC(0x504790u,504);
}
B51912e:L51912e:{c.instructions+=7;NFSU2_TR(0x51912e);
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
B519131:{NFSU2_TR(0x519131);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519132:{NFSU2_TR(0x519132);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519136:{NFSU2_TR(0x519136);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519137:{NFSU2_TR(0x519137);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519138:{NFSU2_TR(0x519138);
__builtin_memmove((R+4),(R+24),4);
}
B51913a:{NFSU2_TR(0x51913a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51913dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51913d:L51913d:{c.instructions+=4;NFSU2_TR(0x51913d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519140:{NFSU2_TR(0x519140);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B519141:{NFSU2_TR(0x519141);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B519143:{NFSU2_TR(0x519143);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5190b0u);}goto L5190b0;}}
}
B519149:L519149:{c.instructions+=6;NFSU2_TR(0x519149);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51914a:{NFSU2_TR(0x51914a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51914b:{NFSU2_TR(0x51914b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51914c:{NFSU2_TR(0x51914c);
w1(R+0,u8(0x1ull));
}
B51914e:{NFSU2_TR(0x51914e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51914f:{NFSU2_TR(0x51914f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519152:L519152:{c.instructions+=2;NFSU2_TR(0x519152);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B519158:{NFSU2_TR(0x519158);
if(r1(R+518)){{goto L519227;}}
}
B51915e:L51915e:{c.instructions+=4;NFSU2_TR(0x51915e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519161:{NFSU2_TR(0x519161);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B519163:{NFSU2_TR(0x519163);
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
B519165:{NFSU2_TR(0x519165);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5196a4;}}
}
B51916b:L51916b:{c.instructions+=1;NFSU2_TR(0x51916b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B519173:L519173:{c.instructions+=9;NFSU2_TR(0x519173);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519176:{NFSU2_TR(0x519176);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51917c:{NFSU2_TR(0x51917c);
__builtin_memmove((R+4),(R+8),4);
}
B51917e:{NFSU2_TR(0x51917e);
u8 U[32];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B519183:{NFSU2_TR(0x519183);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B519187:{NFSU2_TR(0x519187);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B519188:{NFSU2_TR(0x519188);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51918a:{NFSU2_TR(0x51918a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51918e:{NFSU2_TR(0x51918e);
if(r1(R+518)){{goto L5191b4;}}
}
B519190:L519190:{c.instructions+=10;NFSU2_TR(0x519190);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519193:{NFSU2_TR(0x519193);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519199:{NFSU2_TR(0x519199);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B51919c:{NFSU2_TR(0x51919c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B51919e:{NFSU2_TR(0x51919e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5191a1:{NFSU2_TR(0x5191a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5191a4:{NFSU2_TR(0x5191a4);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5191a5:{NFSU2_TR(0x5191a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5191a8:{NFSU2_TR(0x5191a8);
w4(R+4,u32(0xcull));
}
B5191ad:{NFSU2_TR(0x5191ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5191b0:L5191b0:{c.instructions+=1;NFSU2_TR(0x5191b0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5191b2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5191b0u);}goto L5191b0;}
}
B5191b2:L5191b2:{c.instructions+=1;NFSU2_TR(0x5191b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519190u);}goto L519190;}}
}
B5191b4:L5191b4:{c.instructions+=12;NFSU2_TR(0x5191b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5191b7:{NFSU2_TR(0x5191b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5191bb:{NFSU2_TR(0x5191bb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5191be:{NFSU2_TR(0x5191be);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5191c0:{NFSU2_TR(0x5191c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5191c3:{NFSU2_TR(0x5191c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5191c9:{NFSU2_TR(0x5191c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5191cc:{NFSU2_TR(0x5191cc);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5191d0:{NFSU2_TR(0x5191d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5191d3:{NFSU2_TR(0x5191d3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+20)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+20)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5191d5:{NFSU2_TR(0x5191d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5191d8:{NFSU2_TR(0x5191d8);
if(r1(R+519)){{goto L5191df;}}
}
B5191da:L5191da:{c.instructions+=3;NFSU2_TR(0x5191da);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5191db:{NFSU2_TR(0x5191db);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5191db);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5191db);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5191dd:{NFSU2_TR(0x5191dd);
{goto L5191f1;}
}
B5191df:L5191df:{c.instructions+=2;NFSU2_TR(0x5191df);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5191e2:{NFSU2_TR(0x5191e2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5191ef;}}
}
B5191e4:L5191e4:{c.instructions+=6;NFSU2_TR(0x5191e4);
w4(R+0,u32(0-u32(r4(R+0))));
}
B5191e6:{NFSU2_TR(0x5191e6);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5191e7:{NFSU2_TR(0x5191e7);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5191e7);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5191e7);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5191e9:{NFSU2_TR(0x5191e9);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5191eb:{NFSU2_TR(0x5191eb);
__builtin_memmove((R+8),(R+4),4);
}
B5191ed:{NFSU2_TR(0x5191ed);
{goto L5191f1;}
}
B5191ef:L5191ef:{c.instructions+=1;NFSU2_TR(0x5191ef);
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
B5191f1:L5191f1:{c.instructions+=7;NFSU2_TR(0x5191f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5191f7:{NFSU2_TR(0x5191f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5191f8:{NFSU2_TR(0x5191f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5191fb:{NFSU2_TR(0x5191fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5191fc:{NFSU2_TR(0x5191fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5191fd:{NFSU2_TR(0x5191fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5191fe:{NFSU2_TR(0x5191fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519204ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B519204:L519204:{c.instructions+=8;NFSU2_TR(0x519204);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519208:{NFSU2_TR(0x519208);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51920b:{NFSU2_TR(0x51920b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B51920e:{NFSU2_TR(0x51920e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B51920f:{NFSU2_TR(0x51920f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B519212:{NFSU2_TR(0x519212);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B519214:{NFSU2_TR(0x519214);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519218:{NFSU2_TR(0x519218);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519173u);}goto L519173;}}
}
B51921e:L51921e:{c.instructions+=6;NFSU2_TR(0x51921e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51921f:{NFSU2_TR(0x51921f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B519220:{NFSU2_TR(0x519220);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B519221:{NFSU2_TR(0x519221);
w1(R+0,u8(0x1ull));
}
B519223:{NFSU2_TR(0x519223);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B519224:{NFSU2_TR(0x519224);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519227:L519227:{c.instructions+=2;NFSU2_TR(0x519227);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B51922a:{NFSU2_TR(0x51922a);
if(r1(R+518)){{goto L5196a4;}}
}
B519230:L519230:{c.instructions+=4;NFSU2_TR(0x519230);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519233:{NFSU2_TR(0x519233);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B519235:{NFSU2_TR(0x519235);
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
B519237:{NFSU2_TR(0x519237);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5196a4;}}
}
B51923d:L51923d:{c.instructions+=1;NFSU2_TR(0x51923d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B519245:L519245:{c.instructions+=9;NFSU2_TR(0x519245);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519248:{NFSU2_TR(0x519248);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51924e:{NFSU2_TR(0x51924e);
__builtin_memmove((R+4),(R+8),4);
}
B519250:{NFSU2_TR(0x519250);
u8 U[32];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B519255:{NFSU2_TR(0x519255);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B519259:{NFSU2_TR(0x519259);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B51925a:{NFSU2_TR(0x51925a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51925c:{NFSU2_TR(0x51925c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519260:{NFSU2_TR(0x519260);
if(r1(R+518)){{goto L519286;}}
}
B519262:L519262:{c.instructions+=10;NFSU2_TR(0x519262);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519265:{NFSU2_TR(0x519265);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51926b:{NFSU2_TR(0x51926b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B51926e:{NFSU2_TR(0x51926e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B519270:{NFSU2_TR(0x519270);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B519273:{NFSU2_TR(0x519273);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B519276:{NFSU2_TR(0x519276);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B519277:{NFSU2_TR(0x519277);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B51927a:{NFSU2_TR(0x51927a);
w4(R+4,u32(0xcull));
}
B51927f:{NFSU2_TR(0x51927f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B519282:L519282:{c.instructions+=1;NFSU2_TR(0x519282);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L519284;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519282u);}goto L519282;}
}
B519284:L519284:{c.instructions+=1;NFSU2_TR(0x519284);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519262u);}goto L519262;}}
}
B519286:L519286:{c.instructions+=16;NFSU2_TR(0x519286);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519289:{NFSU2_TR(0x519289);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51928d:{NFSU2_TR(0x51928d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B519290:{NFSU2_TR(0x519290);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B519292:{NFSU2_TR(0x519292);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B519295:{NFSU2_TR(0x519295);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51929b:{NFSU2_TR(0x51929b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B51929e:{NFSU2_TR(0x51929e);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5192a2:{NFSU2_TR(0x5192a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5192a5:{NFSU2_TR(0x5192a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5192a8:{NFSU2_TR(0x5192a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5192ab:{NFSU2_TR(0x5192ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5192ad:{NFSU2_TR(0x5192ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5192ae:{NFSU2_TR(0x5192ae);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B5192b0:{NFSU2_TR(0x5192b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5192b1:{NFSU2_TR(0x5192b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5192b6ull));
TAIL_STATIC(0x504790u,504);
}
B5192b6:L5192b6:{c.instructions+=7;NFSU2_TR(0x5192b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5192b9:{NFSU2_TR(0x5192b9);
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
B5192bc:{NFSU2_TR(0x5192bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5192bd:{NFSU2_TR(0x5192bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5192be:{NFSU2_TR(0x5192be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5192bf:{NFSU2_TR(0x5192bf);
__builtin_memmove((R+4),(R+24),4);
}
B5192c1:{NFSU2_TR(0x5192c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5192c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5192c4:L5192c4:{c.instructions+=7;NFSU2_TR(0x5192c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5192c8:{NFSU2_TR(0x5192c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5192cb:{NFSU2_TR(0x5192cb);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5192cc:{NFSU2_TR(0x5192cc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B5192cf:{NFSU2_TR(0x5192cf);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5192d1:{NFSU2_TR(0x5192d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5192d5:{NFSU2_TR(0x5192d5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519245u);}goto L519245;}}
}
B5192db:L5192db:{c.instructions+=6;NFSU2_TR(0x5192db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5192dc:{NFSU2_TR(0x5192dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5192dd:{NFSU2_TR(0x5192dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5192de:{NFSU2_TR(0x5192de);
w1(R+0,u8(0x1ull));
}
B5192e0:{NFSU2_TR(0x5192e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5192e1:{NFSU2_TR(0x5192e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5192e4:L5192e4:{c.instructions+=2;NFSU2_TR(0x5192e4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5192e6:{NFSU2_TR(0x5192e6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5194dd;}}
}
B5192ec:L5192ec:{c.instructions+=9;NFSU2_TR(0x5192ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5192ef:{NFSU2_TR(0x5192ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5192f2:{NFSU2_TR(0x5192f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B5192f5:{NFSU2_TR(0x5192f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5192f9:{NFSU2_TR(0x5192f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5192fc:{NFSU2_TR(0x5192fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5192fd:{NFSU2_TR(0x5192fd);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B519301:{NFSU2_TR(0x519301);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519302:{NFSU2_TR(0x519302);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519307ull));
TAIL_STATIC(0x504790u,504);
}
B519307:L519307:{c.instructions+=5;NFSU2_TR(0x519307);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51930b:{NFSU2_TR(0x51930b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519311:{NFSU2_TR(0x519311);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B519314:{NFSU2_TR(0x519314);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B519316:{NFSU2_TR(0x519316);
if(r1(R+518)){{goto L519402;}}
}
B51931c:L51931c:{c.instructions+=3;NFSU2_TR(0x51931c);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B51931f:{NFSU2_TR(0x51931f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519323:{NFSU2_TR(0x519323);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5196a4;}}
}
B519329:L519329:{c.instructions+=2;NFSU2_TR(0x519329);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51932d:{NFSU2_TR(0x51932d);
__builtin_memmove((R+4),(R+4),4);
}
B519330:L519330:{c.instructions+=8;NFSU2_TR(0x519330);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519334:{NFSU2_TR(0x519334);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51933a:{NFSU2_TR(0x51933a);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B51933e:{NFSU2_TR(0x51933e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519342:{NFSU2_TR(0x519342);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519346:{NFSU2_TR(0x519346);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B519348:{NFSU2_TR(0x519348);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51934a:{NFSU2_TR(0x51934a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L519386;}}
}
B51934c:L51934c:{c.instructions+=1;NFSU2_TR(0x51934c);
__builtin_memmove((R+16),(R+16),4);
}
B519350:L519350:{c.instructions+=17;NFSU2_TR(0x519350);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519353:{NFSU2_TR(0x519353);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B519357:{NFSU2_TR(0x519357);
__builtin_memmove((R+0),(R+24),4);
}
B519359:{NFSU2_TR(0x519359);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B51935c:{NFSU2_TR(0x51935c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B51935e:{NFSU2_TR(0x51935e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B519364:{NFSU2_TR(0x519364);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B519366:{NFSU2_TR(0x519366);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B519369:{NFSU2_TR(0x519369);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B51936c:{NFSU2_TR(0x51936c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B51936f:{NFSU2_TR(0x51936f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519373:{NFSU2_TR(0x519373);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B519376:{NFSU2_TR(0x519376);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B519378:{NFSU2_TR(0x519378);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B51937a:{NFSU2_TR(0x51937a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B51937b:{NFSU2_TR(0x51937b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B51937d:{NFSU2_TR(0x51937d);
w4(R+4,u32(0xcull));
}
B519382:L519382:{c.instructions+=1;NFSU2_TR(0x519382);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L519384;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519382u);}goto L519382;}
}
B519384:L519384:{c.instructions+=1;NFSU2_TR(0x519384);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519350u);}goto L519350;}}
}
B519386:L519386:{c.instructions+=13;NFSU2_TR(0x519386);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519389:{NFSU2_TR(0x519389);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51938d:{NFSU2_TR(0x51938d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B519390:{NFSU2_TR(0x519390);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519396:{NFSU2_TR(0x519396);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B519398:{NFSU2_TR(0x519398);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B51939b:{NFSU2_TR(0x51939b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51939f:{NFSU2_TR(0x51939f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5193a2:{NFSU2_TR(0x5193a2);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5193a6:{NFSU2_TR(0x5193a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5193a9:{NFSU2_TR(0x5193a9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5193ab:{NFSU2_TR(0x5193ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5193ae:{NFSU2_TR(0x5193ae);
if(r1(R+519)){{goto L5193b5;}}
}
B5193b0:L5193b0:{c.instructions+=3;NFSU2_TR(0x5193b0);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5193b1:{NFSU2_TR(0x5193b1);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5193b1);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5193b1);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5193b3:{NFSU2_TR(0x5193b3);
{goto L5193c7;}
}
B5193b5:L5193b5:{c.instructions+=2;NFSU2_TR(0x5193b5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5193b8:{NFSU2_TR(0x5193b8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5193c5;}}
}
B5193ba:L5193ba:{c.instructions+=6;NFSU2_TR(0x5193ba);
w4(R+0,u32(0-u32(r4(R+0))));
}
B5193bc:{NFSU2_TR(0x5193bc);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5193bd:{NFSU2_TR(0x5193bd);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5193bd);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5193bd);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5193bf:{NFSU2_TR(0x5193bf);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5193c1:{NFSU2_TR(0x5193c1);
__builtin_memmove((R+8),(R+4),4);
}
B5193c3:{NFSU2_TR(0x5193c3);
{goto L5193c7;}
}
B5193c5:L5193c5:{c.instructions+=1;NFSU2_TR(0x5193c5);
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
B5193c7:L5193c7:{c.instructions+=7;NFSU2_TR(0x5193c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5193cb:{NFSU2_TR(0x5193cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5193cc:{NFSU2_TR(0x5193cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5193cd:{NFSU2_TR(0x5193cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5193d3:{NFSU2_TR(0x5193d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5193d4:{NFSU2_TR(0x5193d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5193d5:{NFSU2_TR(0x5193d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5193dbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5193db:L5193db:{c.instructions+=9;NFSU2_TR(0x5193db);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5193df:{NFSU2_TR(0x5193df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5193e2:{NFSU2_TR(0x5193e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5193e5:{NFSU2_TR(0x5193e5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5193e6:{NFSU2_TR(0x5193e6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B5193e9:{NFSU2_TR(0x5193e9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5193eb:{NFSU2_TR(0x5193eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5193ef:{NFSU2_TR(0x5193ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5193f3:{NFSU2_TR(0x5193f3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519330u);}goto L519330;}}
}
B5193f9:L5193f9:{c.instructions+=6;NFSU2_TR(0x5193f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5193fa:{NFSU2_TR(0x5193fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5193fb:{NFSU2_TR(0x5193fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5193fc:{NFSU2_TR(0x5193fc);
w1(R+0,u8(0x1ull));
}
B5193fe:{NFSU2_TR(0x5193fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5193ff:{NFSU2_TR(0x5193ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519402:L519402:{c.instructions+=2;NFSU2_TR(0x519402);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B519405:{NFSU2_TR(0x519405);
if(r1(R+518)){{goto L5196a4;}}
}
B51940b:L51940b:{c.instructions+=3;NFSU2_TR(0x51940b);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B51940e:{NFSU2_TR(0x51940e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519412:{NFSU2_TR(0x519412);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5196a4;}}
}
B519418:L519418:{c.instructions+=2;NFSU2_TR(0x519418);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51941c:{NFSU2_TR(0x51941c);
__builtin_memmove((R+16),(R+16),4);
}
B519420:L519420:{c.instructions+=8;NFSU2_TR(0x519420);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519426:{NFSU2_TR(0x519426);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51942a:{NFSU2_TR(0x51942a);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B51942e:{NFSU2_TR(0x51942e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519432:{NFSU2_TR(0x519432);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519436:{NFSU2_TR(0x519436);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B519438:{NFSU2_TR(0x519438);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51943a:{NFSU2_TR(0x51943a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L519476;}}
}
B51943c:L51943c:{c.instructions+=1;NFSU2_TR(0x51943c);
__builtin_memmove((R+16),(R+16),4);
}
B519440:L519440:{c.instructions+=17;NFSU2_TR(0x519440);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519443:{NFSU2_TR(0x519443);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B519447:{NFSU2_TR(0x519447);
__builtin_memmove((R+0),(R+24),4);
}
B519449:{NFSU2_TR(0x519449);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B51944c:{NFSU2_TR(0x51944c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B51944e:{NFSU2_TR(0x51944e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B519454:{NFSU2_TR(0x519454);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B519456:{NFSU2_TR(0x519456);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B519459:{NFSU2_TR(0x519459);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B51945c:{NFSU2_TR(0x51945c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B51945f:{NFSU2_TR(0x51945f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519463:{NFSU2_TR(0x519463);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B519466:{NFSU2_TR(0x519466);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B519468:{NFSU2_TR(0x519468);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B51946a:{NFSU2_TR(0x51946a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B51946b:{NFSU2_TR(0x51946b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B51946d:{NFSU2_TR(0x51946d);
w4(R+4,u32(0xcull));
}
B519472:L519472:{c.instructions+=1;NFSU2_TR(0x519472);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L519474;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519472u);}goto L519472;}
}
B519474:L519474:{c.instructions+=1;NFSU2_TR(0x519474);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519440u);}goto L519440;}}
}
B519476:L519476:{c.instructions+=19;NFSU2_TR(0x519476);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519479:{NFSU2_TR(0x519479);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51947d:{NFSU2_TR(0x51947d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B519480:{NFSU2_TR(0x519480);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519486:{NFSU2_TR(0x519486);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51948a:{NFSU2_TR(0x51948a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B51948c:{NFSU2_TR(0x51948c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B51948f:{NFSU2_TR(0x51948f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B519492:{NFSU2_TR(0x519492);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B519496:{NFSU2_TR(0x519496);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51949a:{NFSU2_TR(0x51949a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51949d:{NFSU2_TR(0x51949d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5194a0:{NFSU2_TR(0x5194a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5194a3:{NFSU2_TR(0x5194a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5194a5:{NFSU2_TR(0x5194a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5194a6:{NFSU2_TR(0x5194a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5194a7:{NFSU2_TR(0x5194a7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B5194a9:{NFSU2_TR(0x5194a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5194aa:{NFSU2_TR(0x5194aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5194afull));
TAIL_STATIC(0x504790u,504);
}
B5194af:L5194af:{c.instructions+=5;NFSU2_TR(0x5194af);
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
B5194b2:{NFSU2_TR(0x5194b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5194b3:{NFSU2_TR(0x5194b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5194b4:{NFSU2_TR(0x5194b4);
__builtin_memmove((R+4),(R+24),4);
}
B5194b6:{NFSU2_TR(0x5194b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5194b9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5194b9:L5194b9:{c.instructions+=8;NFSU2_TR(0x5194b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5194bd:{NFSU2_TR(0x5194bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5194c0:{NFSU2_TR(0x5194c0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5194c1:{NFSU2_TR(0x5194c1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B5194c4:{NFSU2_TR(0x5194c4);
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
B5194c6:{NFSU2_TR(0x5194c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5194ca:{NFSU2_TR(0x5194ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5194ce:{NFSU2_TR(0x5194ce);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519420u);}goto L519420;}}
}
B5194d4:L5194d4:{c.instructions+=6;NFSU2_TR(0x5194d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5194d5:{NFSU2_TR(0x5194d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5194d6:{NFSU2_TR(0x5194d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5194d7:{NFSU2_TR(0x5194d7);
w1(R+0,u8(0x1ull));
}
B5194d9:{NFSU2_TR(0x5194d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5194da:{NFSU2_TR(0x5194da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5194dd:L5194dd:{c.instructions+=2;NFSU2_TR(0x5194dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5194e3:{NFSU2_TR(0x5194e3);
if(r1(R+518)){{goto L5195ce;}}
}
B5194e9:L5194e9:{c.instructions+=4;NFSU2_TR(0x5194e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5194ec:{NFSU2_TR(0x5194ec);
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
B5194ee:{NFSU2_TR(0x5194ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5194f2:{NFSU2_TR(0x5194f2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5196a4;}}
}
B5194f8:L5194f8:{c.instructions+=2;NFSU2_TR(0x5194f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5194fc:{NFSU2_TR(0x5194fc);
__builtin_memmove((R+16),(R+16),4);
}
B519500:L519500:{c.instructions+=12;NFSU2_TR(0x519500);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B519503:{NFSU2_TR(0x519503);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519507:{NFSU2_TR(0x519507);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51950d:{NFSU2_TR(0x51950d);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B51950e:{NFSU2_TR(0x51950e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B519511:{NFSU2_TR(0x519511);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B519513:{NFSU2_TR(0x519513);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B519516:{NFSU2_TR(0x519516);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B519519:{NFSU2_TR(0x519519);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51951b:{NFSU2_TR(0x51951b);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B51951f:{NFSU2_TR(0x51951f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519523:{NFSU2_TR(0x519523);
if(r1(R+518)){{goto L51955d;}}
}
B519525:L519525:{c.instructions+=17;NFSU2_TR(0x519525);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519528:{NFSU2_TR(0x519528);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51952c:{NFSU2_TR(0x51952c);
__builtin_memmove((R+0),(R+24),4);
}
B51952e:{NFSU2_TR(0x51952e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B519531:{NFSU2_TR(0x519531);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B519533:{NFSU2_TR(0x519533);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B519539:{NFSU2_TR(0x519539);
__builtin_memmove((R+8),(R+0),4);
}
B51953b:{NFSU2_TR(0x51953b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B51953d:{NFSU2_TR(0x51953d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B519540:{NFSU2_TR(0x519540);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519546:{NFSU2_TR(0x519546);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B519549:{NFSU2_TR(0x519549);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B51954b:{NFSU2_TR(0x51954b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B51954e:{NFSU2_TR(0x51954e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B519551:{NFSU2_TR(0x519551);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B519553:{NFSU2_TR(0x519553);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B519554:{NFSU2_TR(0x519554);
w4(R+4,u32(0xcull));
}
B519559:L519559:{c.instructions+=1;NFSU2_TR(0x519559);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L51955b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519559u);}goto L519559;}
}
B51955b:L51955b:{c.instructions+=1;NFSU2_TR(0x51955b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519525u);}goto L519525;}}
}
B51955d:L51955d:{c.instructions+=8;NFSU2_TR(0x51955d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519563:{NFSU2_TR(0x519563);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519567:{NFSU2_TR(0x519567);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51956b:{NFSU2_TR(0x51956b);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B51956f:{NFSU2_TR(0x51956f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519572:{NFSU2_TR(0x519572);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+20)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+20)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B519574:{NFSU2_TR(0x519574);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519577:{NFSU2_TR(0x519577);
if(r1(R+519)){{goto L51957e;}}
}
B519579:L519579:{c.instructions+=3;NFSU2_TR(0x519579);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51957a:{NFSU2_TR(0x51957a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51957a);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51957a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B51957c:{NFSU2_TR(0x51957c);
{goto L519590;}
}
B51957e:L51957e:{c.instructions+=2;NFSU2_TR(0x51957e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B519581:{NFSU2_TR(0x519581);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L51958e;}}
}
B519583:L519583:{c.instructions+=6;NFSU2_TR(0x519583);
w4(R+0,u32(0-u32(r4(R+0))));
}
B519585:{NFSU2_TR(0x519585);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B519586:{NFSU2_TR(0x519586);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519586);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519586);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B519588:{NFSU2_TR(0x519588);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51958a:{NFSU2_TR(0x51958a);
__builtin_memmove((R+8),(R+4),4);
}
B51958c:{NFSU2_TR(0x51958c);
{goto L519590;}
}
B51958e:L51958e:{c.instructions+=1;NFSU2_TR(0x51958e);
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
B519590:L519590:{c.instructions+=7;NFSU2_TR(0x519590);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519593:{NFSU2_TR(0x519593);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519599:{NFSU2_TR(0x519599);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51959a:{NFSU2_TR(0x51959a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51959b:{NFSU2_TR(0x51959b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51959c:{NFSU2_TR(0x51959c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51959d:{NFSU2_TR(0x51959d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5195a3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5195a3:L5195a3:{c.instructions+=10;NFSU2_TR(0x5195a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5195a7:{NFSU2_TR(0x5195a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5195ab:{NFSU2_TR(0x5195ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5195ae:{NFSU2_TR(0x5195ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5195b1:{NFSU2_TR(0x5195b1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5195b2:{NFSU2_TR(0x5195b2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B5195b5:{NFSU2_TR(0x5195b5);
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
B5195b7:{NFSU2_TR(0x5195b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5195bb:{NFSU2_TR(0x5195bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5195bf:{NFSU2_TR(0x5195bf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519500u);}goto L519500;}}
}
B5195c5:L5195c5:{c.instructions+=6;NFSU2_TR(0x5195c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5195c6:{NFSU2_TR(0x5195c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5195c7:{NFSU2_TR(0x5195c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5195c8:{NFSU2_TR(0x5195c8);
w1(R+0,u8(0x1ull));
}
B5195ca:{NFSU2_TR(0x5195ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5195cb:{NFSU2_TR(0x5195cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5195ce:L5195ce:{c.instructions+=2;NFSU2_TR(0x5195ce);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5195d1:{NFSU2_TR(0x5195d1);
if(r1(R+518)){{goto L5196a4;}}
}
B5195d7:L5195d7:{c.instructions+=4;NFSU2_TR(0x5195d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5195da:{NFSU2_TR(0x5195da);
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
B5195dc:{NFSU2_TR(0x5195dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5195e0:{NFSU2_TR(0x5195e0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5196a4;}}
}
B5195e6:L5195e6:{c.instructions+=2;NFSU2_TR(0x5195e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5195ea:{NFSU2_TR(0x5195ea);
__builtin_memmove((R+12),(R+12),4);
}
B5195f0:L5195f0:{c.instructions+=12;NFSU2_TR(0x5195f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5195f3:{NFSU2_TR(0x5195f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5195f7:{NFSU2_TR(0x5195f7);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B5195f8:{NFSU2_TR(0x5195f8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5195fb:{NFSU2_TR(0x5195fb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5195fd:{NFSU2_TR(0x5195fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B519600:{NFSU2_TR(0x519600);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519606:{NFSU2_TR(0x519606);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B519609:{NFSU2_TR(0x519609);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51960b:{NFSU2_TR(0x51960b);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B51960f:{NFSU2_TR(0x51960f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519613:{NFSU2_TR(0x519613);
if(r1(R+518)){{goto L51964d;}}
}
B519615:L519615:{c.instructions+=17;NFSU2_TR(0x519615);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519618:{NFSU2_TR(0x519618);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51961c:{NFSU2_TR(0x51961c);
__builtin_memmove((R+0),(R+24),4);
}
B51961e:{NFSU2_TR(0x51961e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B519621:{NFSU2_TR(0x519621);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B519623:{NFSU2_TR(0x519623);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B519629:{NFSU2_TR(0x519629);
__builtin_memmove((R+8),(R+0),4);
}
B51962b:{NFSU2_TR(0x51962b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B51962d:{NFSU2_TR(0x51962d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B519630:{NFSU2_TR(0x519630);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519636:{NFSU2_TR(0x519636);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B519639:{NFSU2_TR(0x519639);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B51963b:{NFSU2_TR(0x51963b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B51963e:{NFSU2_TR(0x51963e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B519641:{NFSU2_TR(0x519641);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B519643:{NFSU2_TR(0x519643);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B519644:{NFSU2_TR(0x519644);
w4(R+4,u32(0xcull));
}
B519649:L519649:{c.instructions+=1;NFSU2_TR(0x519649);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L51964b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519649u);}goto L519649;}
}
B51964b:L51964b:{c.instructions+=1;NFSU2_TR(0x51964b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519615u);}goto L519615;}}
}
B51964d:L51964d:{c.instructions+=13;NFSU2_TR(0x51964d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519653:{NFSU2_TR(0x519653);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519657:{NFSU2_TR(0x519657);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51965b:{NFSU2_TR(0x51965b);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B51965f:{NFSU2_TR(0x51965f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519662:{NFSU2_TR(0x519662);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519665:{NFSU2_TR(0x519665);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519668:{NFSU2_TR(0x519668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51966a:{NFSU2_TR(0x51966a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51966b:{NFSU2_TR(0x51966b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B51966d:{NFSU2_TR(0x51966d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51966e:{NFSU2_TR(0x51966e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519672:{NFSU2_TR(0x519672);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519677ull));
TAIL_STATIC(0x504790u,504);
}
B519677:L519677:{c.instructions+=8;NFSU2_TR(0x519677);
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
B51967a:{NFSU2_TR(0x51967a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51967b:{NFSU2_TR(0x51967b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51967e:{NFSU2_TR(0x51967e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51967f:{NFSU2_TR(0x51967f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519683:{NFSU2_TR(0x519683);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519684:{NFSU2_TR(0x519684);
__builtin_memmove((R+4),(R+24),4);
}
B519686:{NFSU2_TR(0x519686);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519689ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B519689:L519689:{c.instructions+=8;NFSU2_TR(0x519689);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51968d:{NFSU2_TR(0x51968d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519690:{NFSU2_TR(0x519690);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B519691:{NFSU2_TR(0x519691);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B519694:{NFSU2_TR(0x519694);
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
B519696:{NFSU2_TR(0x519696);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51969a:{NFSU2_TR(0x51969a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51969e:{NFSU2_TR(0x51969e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5195f0u);}goto L5195f0;}}
}
B5196a4:L5196a4:{c.instructions+=6;NFSU2_TR(0x5196a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5196a5:{NFSU2_TR(0x5196a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5196a6:{NFSU2_TR(0x5196a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5196a7:{NFSU2_TR(0x5196a7);
w1(R+0,u8(0x1ull));
}
B5196a9:{NFSU2_TR(0x5196a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5196aa:{NFSU2_TR(0x5196aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5196b0:L5196b0:{c.instructions+=14;NFSU2_TR(0x5196b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5196b1:{NFSU2_TR(0x5196b1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5196b5:{NFSU2_TR(0x5196b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5196b9:{NFSU2_TR(0x5196b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5196ba:{NFSU2_TR(0x5196ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5196be:{NFSU2_TR(0x5196be);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5196bf:{NFSU2_TR(0x5196bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5196c3:{NFSU2_TR(0x5196c3);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5196c5:{NFSU2_TR(0x5196c5);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+20))));
}
B5196c7:{NFSU2_TR(0x5196c7);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5196c9:{NFSU2_TR(0x5196c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5196cd:{NFSU2_TR(0x5196cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5196d1:{NFSU2_TR(0x5196d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5196d5:{NFSU2_TR(0x5196d5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5197bb;}}
}
B5196db:L5196db:{c.instructions+=3;NFSU2_TR(0x5196db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5196dc:{NFSU2_TR(0x5196dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5196dd:{NFSU2_TR(0x5196dd);
__builtin_memmove((R+4),(R+4),4);
}
B5196e0:L5196e0:{c.instructions+=2;NFSU2_TR(0x5196e0);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+8))));
}
B5196e4:{NFSU2_TR(0x5196e4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5197a4;}}
}
B5196ea:L5196ea:{c.instructions+=1;NFSU2_TR(0x5196ea);
__builtin_memmove((R+12),(R+12),4);
}
B5196f0:L5196f0:{c.instructions+=5;NFSU2_TR(0x5196f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5196f3:{NFSU2_TR(0x5196f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5196f5:{NFSU2_TR(0x5196f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5196f8:{NFSU2_TR(0x5196f8);
__builtin_memmove((R+8),(R+20),4);
}
B5196fa:{NFSU2_TR(0x5196fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L519706;}}
}
B5196fc:L5196fc:{c.instructions+=2;NFSU2_TR(0x5196fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B519704:{NFSU2_TR(0x519704);
{goto L519737;}
}
B519706:L519706:{c.instructions+=2;NFSU2_TR(0x519706);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B519708:{NFSU2_TR(0x519708);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L51970f;}}
}
B51970a:L51970a:{c.instructions+=3;NFSU2_TR(0x51970a);
__builtin_memmove((R+0),(R+20),4);
}
B51970c:{NFSU2_TR(0x51970c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51970d:{NFSU2_TR(0x51970d);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51970d);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51970d);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B51970f:L51970f:{c.instructions+=3;NFSU2_TR(0x51970f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B519712:{NFSU2_TR(0x519712);
__builtin_memmove((R+0),(R+8),4);
}
B519714:{NFSU2_TR(0x519714);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L51971a;}}
}
B519716:L519716:{c.instructions+=2;NFSU2_TR(0x519716);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B519718:{NFSU2_TR(0x519718);
if(r1(R+519)){{goto L519721;}}
}
B51971a:L51971a:{c.instructions+=4;NFSU2_TR(0x51971a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51971b:{NFSU2_TR(0x51971b);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51971b);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51971b);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B51971d:{NFSU2_TR(0x51971d);
__builtin_memmove((R+0),(R+8),4);
}
B51971f:{NFSU2_TR(0x51971f);
{goto L519733;}
}
B519721:L519721:{c.instructions+=2;NFSU2_TR(0x519721);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B519724:{NFSU2_TR(0x519724);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L519731;}}
}
B519726:L519726:{c.instructions+=6;NFSU2_TR(0x519726);
w4(R+0,u32(0-u32(r4(R+0))));
}
B519728:{NFSU2_TR(0x519728);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B519729:{NFSU2_TR(0x519729);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519729);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519729);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B51972b:{NFSU2_TR(0x51972b);
__builtin_memmove((R+0),(R+24),4);
}
B51972d:{NFSU2_TR(0x51972d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B51972f:{NFSU2_TR(0x51972f);
{goto L519733;}
}
B519731:L519731:{c.instructions+=1;NFSU2_TR(0x519731);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B519733:L519733:{c.instructions+=1;NFSU2_TR(0x519733);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519737:L519737:{c.instructions+=6;NFSU2_TR(0x519737);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51973a:{NFSU2_TR(0x51973a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51973c:{NFSU2_TR(0x51973c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519740:{NFSU2_TR(0x519740);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B519743:{NFSU2_TR(0x519743);
__builtin_memmove((R+8),(R+0),4);
}
B519745:{NFSU2_TR(0x519745);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51974c;}}
}
B519747:L519747:{c.instructions+=2;NFSU2_TR(0x519747);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B51974a:{NFSU2_TR(0x51974a);
{goto L519777;}
}
B51974c:L51974c:{c.instructions+=2;NFSU2_TR(0x51974c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B51974e:{NFSU2_TR(0x51974e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L519753;}}
}
B519750:L519750:{c.instructions+=2;NFSU2_TR(0x519750);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B519751:{NFSU2_TR(0x519751);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519751);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519751);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B519753:L519753:{c.instructions+=3;NFSU2_TR(0x519753);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B519756:{NFSU2_TR(0x519756);
__builtin_memmove((R+0),(R+8),4);
}
B519758:{NFSU2_TR(0x519758);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L51975e;}}
}
B51975a:L51975a:{c.instructions+=2;NFSU2_TR(0x51975a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B51975c:{NFSU2_TR(0x51975c);
if(r1(R+519)){{goto L519765;}}
}
B51975e:L51975e:{c.instructions+=4;NFSU2_TR(0x51975e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51975f:{NFSU2_TR(0x51975f);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51975f);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51975f);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B519761:{NFSU2_TR(0x519761);
__builtin_memmove((R+0),(R+8),4);
}
B519763:{NFSU2_TR(0x519763);
{goto L519777;}
}
B519765:L519765:{c.instructions+=2;NFSU2_TR(0x519765);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B519768:{NFSU2_TR(0x519768);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L519775;}}
}
B51976a:L51976a:{c.instructions+=6;NFSU2_TR(0x51976a);
w4(R+0,u32(0-u32(r4(R+0))));
}
B51976c:{NFSU2_TR(0x51976c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51976d:{NFSU2_TR(0x51976d);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51976d);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51976d);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B51976f:{NFSU2_TR(0x51976f);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B519771:{NFSU2_TR(0x519771);
__builtin_memmove((R+0),(R+28),4);
}
B519773:{NFSU2_TR(0x519773);
{goto L519777;}
}
B519775:L519775:{c.instructions+=1;NFSU2_TR(0x519775);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B519777:L519777:{c.instructions+=12;NFSU2_TR(0x519777);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51977b:{NFSU2_TR(0x51977b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B51977e:{NFSU2_TR(0x51977e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519784:{NFSU2_TR(0x519784);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B519786:{NFSU2_TR(0x519786);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B519789:{NFSU2_TR(0x519789);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51978d:{NFSU2_TR(0x51978d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B519790:{NFSU2_TR(0x519790);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B519793:{NFSU2_TR(0x519793);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519797:{NFSU2_TR(0x519797);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B519798:{NFSU2_TR(0x519798);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B51979a:{NFSU2_TR(0x51979a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5196f0u);}goto L5196f0;}}
}
B5197a0:L5197a0:{c.instructions+=1;NFSU2_TR(0x5197a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5197a4:L5197a4:{c.instructions+=6;NFSU2_TR(0x5197a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5197a8:{NFSU2_TR(0x5197a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5197ac:{NFSU2_TR(0x5197ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5197ad:{NFSU2_TR(0x5197ad);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5197af:{NFSU2_TR(0x5197af);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5197b3:{NFSU2_TR(0x5197b3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5196e0u);}goto L5196e0;}}
}
B5197b9:L5197b9:{c.instructions+=2;NFSU2_TR(0x5197b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5197ba:{NFSU2_TR(0x5197ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5197bb:L5197bb:{c.instructions+=4;NFSU2_TR(0x5197bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5197bc:{NFSU2_TR(0x5197bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5197bd:{NFSU2_TR(0x5197bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5197be:{NFSU2_TR(0x5197be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5197d0:L5197d0:{c.instructions+=14;NFSU2_TR(0x5197d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5197d1:{NFSU2_TR(0x5197d1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5197d5:{NFSU2_TR(0x5197d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5197d9:{NFSU2_TR(0x5197d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5197da:{NFSU2_TR(0x5197da);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5197de:{NFSU2_TR(0x5197de);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5197df:{NFSU2_TR(0x5197df);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5197e3:{NFSU2_TR(0x5197e3);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5197e5:{NFSU2_TR(0x5197e5);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+20))));
}
B5197e7:{NFSU2_TR(0x5197e7);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5197e9:{NFSU2_TR(0x5197e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5197ed:{NFSU2_TR(0x5197ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5197f1:{NFSU2_TR(0x5197f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5197f5:{NFSU2_TR(0x5197f5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5198e6;}}
}
B5197fb:L5197fb:{c.instructions+=3;NFSU2_TR(0x5197fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5197fc:{NFSU2_TR(0x5197fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5197fd:{NFSU2_TR(0x5197fd);
__builtin_memmove((R+4),(R+4),4);
}
B519800:L519800:{c.instructions+=2;NFSU2_TR(0x519800);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+8))));
}
B519804:{NFSU2_TR(0x519804);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5198cf;}}
}
B51980a:L51980a:{c.instructions+=1;NFSU2_TR(0x51980a);
__builtin_memmove((R+12),(R+12),4);
}
B519810:L519810:{c.instructions+=5;NFSU2_TR(0x519810);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B519813:{NFSU2_TR(0x519813);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B519815:{NFSU2_TR(0x519815);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519818:{NFSU2_TR(0x519818);
__builtin_memmove((R+8),(R+20),4);
}
B51981a:{NFSU2_TR(0x51981a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L519826;}}
}
B51981c:L51981c:{c.instructions+=2;NFSU2_TR(0x51981c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B519824:{NFSU2_TR(0x519824);
{goto L519857;}
}
B519826:L519826:{c.instructions+=2;NFSU2_TR(0x519826);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B519828:{NFSU2_TR(0x519828);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L51982f;}}
}
B51982a:L51982a:{c.instructions+=3;NFSU2_TR(0x51982a);
__builtin_memmove((R+0),(R+20),4);
}
B51982c:{NFSU2_TR(0x51982c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51982d:{NFSU2_TR(0x51982d);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51982d);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51982d);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B51982f:L51982f:{c.instructions+=3;NFSU2_TR(0x51982f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B519832:{NFSU2_TR(0x519832);
__builtin_memmove((R+0),(R+8),4);
}
B519834:{NFSU2_TR(0x519834);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L51983a;}}
}
B519836:L519836:{c.instructions+=2;NFSU2_TR(0x519836);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B519838:{NFSU2_TR(0x519838);
if(r1(R+519)){{goto L519841;}}
}
B51983a:L51983a:{c.instructions+=4;NFSU2_TR(0x51983a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51983b:{NFSU2_TR(0x51983b);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51983b);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51983b);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B51983d:{NFSU2_TR(0x51983d);
__builtin_memmove((R+0),(R+8),4);
}
B51983f:{NFSU2_TR(0x51983f);
{goto L519853;}
}
B519841:L519841:{c.instructions+=2;NFSU2_TR(0x519841);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B519844:{NFSU2_TR(0x519844);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L519851;}}
}
B519846:L519846:{c.instructions+=6;NFSU2_TR(0x519846);
w4(R+0,u32(0-u32(r4(R+0))));
}
B519848:{NFSU2_TR(0x519848);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B519849:{NFSU2_TR(0x519849);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519849);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519849);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B51984b:{NFSU2_TR(0x51984b);
__builtin_memmove((R+0),(R+24),4);
}
B51984d:{NFSU2_TR(0x51984d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B51984f:{NFSU2_TR(0x51984f);
{goto L519853;}
}
B519851:L519851:{c.instructions+=1;NFSU2_TR(0x519851);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B519853:L519853:{c.instructions+=1;NFSU2_TR(0x519853);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519857:L519857:{c.instructions+=6;NFSU2_TR(0x519857);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51985a:{NFSU2_TR(0x51985a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51985c:{NFSU2_TR(0x51985c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519860:{NFSU2_TR(0x519860);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B519863:{NFSU2_TR(0x519863);
__builtin_memmove((R+8),(R+0),4);
}
B519865:{NFSU2_TR(0x519865);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51986c;}}
}
B519867:L519867:{c.instructions+=2;NFSU2_TR(0x519867);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B51986a:{NFSU2_TR(0x51986a);
{goto L519897;}
}
B51986c:L51986c:{c.instructions+=2;NFSU2_TR(0x51986c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B51986e:{NFSU2_TR(0x51986e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L519873;}}
}
B519870:L519870:{c.instructions+=2;NFSU2_TR(0x519870);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B519871:{NFSU2_TR(0x519871);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519871);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519871);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B519873:L519873:{c.instructions+=3;NFSU2_TR(0x519873);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B519876:{NFSU2_TR(0x519876);
__builtin_memmove((R+0),(R+8),4);
}
B519878:{NFSU2_TR(0x519878);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L51987e;}}
}
B51987a:L51987a:{c.instructions+=2;NFSU2_TR(0x51987a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B51987c:{NFSU2_TR(0x51987c);
if(r1(R+519)){{goto L519885;}}
}
B51987e:L51987e:{c.instructions+=4;NFSU2_TR(0x51987e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51987f:{NFSU2_TR(0x51987f);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51987f);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51987f);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B519881:{NFSU2_TR(0x519881);
__builtin_memmove((R+0),(R+8),4);
}
B519883:{NFSU2_TR(0x519883);
{goto L519897;}
}
B519885:L519885:{c.instructions+=2;NFSU2_TR(0x519885);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B519888:{NFSU2_TR(0x519888);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L519895;}}
}
B51988a:L51988a:{c.instructions+=6;NFSU2_TR(0x51988a);
w4(R+0,u32(0-u32(r4(R+0))));
}
B51988c:{NFSU2_TR(0x51988c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51988d:{NFSU2_TR(0x51988d);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51988d);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51988d);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B51988f:{NFSU2_TR(0x51988f);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B519891:{NFSU2_TR(0x519891);
__builtin_memmove((R+0),(R+28),4);
}
B519893:{NFSU2_TR(0x519893);
{goto L519897;}
}
B519895:L519895:{c.instructions+=1;NFSU2_TR(0x519895);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B519897:L519897:{c.instructions+=16;NFSU2_TR(0x519897);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51989b:{NFSU2_TR(0x51989b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B51989e:{NFSU2_TR(0x51989e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5198a4:{NFSU2_TR(0x5198a4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B5198a6:{NFSU2_TR(0x5198a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5198a9:{NFSU2_TR(0x5198a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5198ac:{NFSU2_TR(0x5198ac);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5198b0:{NFSU2_TR(0x5198b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5198b4:{NFSU2_TR(0x5198b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5198b6:{NFSU2_TR(0x5198b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5198b8:{NFSU2_TR(0x5198b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5198bb:{NFSU2_TR(0x5198bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5198be:{NFSU2_TR(0x5198be);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5198c2:{NFSU2_TR(0x5198c2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5198c3:{NFSU2_TR(0x5198c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B5198c5:{NFSU2_TR(0x5198c5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519810u);}goto L519810;}}
}
B5198cb:L5198cb:{c.instructions+=1;NFSU2_TR(0x5198cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5198cf:L5198cf:{c.instructions+=6;NFSU2_TR(0x5198cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5198d3:{NFSU2_TR(0x5198d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5198d7:{NFSU2_TR(0x5198d7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5198d8:{NFSU2_TR(0x5198d8);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5198da:{NFSU2_TR(0x5198da);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5198de:{NFSU2_TR(0x5198de);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519800u);}goto L519800;}}
}
B5198e4:L5198e4:{c.instructions+=2;NFSU2_TR(0x5198e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5198e5:{NFSU2_TR(0x5198e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5198e6:L5198e6:{c.instructions+=4;NFSU2_TR(0x5198e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5198e7:{NFSU2_TR(0x5198e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5198e8:{NFSU2_TR(0x5198e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5198e9:{NFSU2_TR(0x5198e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5198f0:L5198f0:{c.instructions+=14;NFSU2_TR(0x5198f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5198f1:{NFSU2_TR(0x5198f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5198f5:{NFSU2_TR(0x5198f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5198f9:{NFSU2_TR(0x5198f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5198fa:{NFSU2_TR(0x5198fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5198fe:{NFSU2_TR(0x5198fe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5198ff:{NFSU2_TR(0x5198ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B519903:{NFSU2_TR(0x519903);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B519905:{NFSU2_TR(0x519905);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+20))));
}
B519907:{NFSU2_TR(0x519907);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B519909:{NFSU2_TR(0x519909);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51990d:{NFSU2_TR(0x51990d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519911:{NFSU2_TR(0x519911);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519915:{NFSU2_TR(0x519915);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5199fc;}}
}
B51991b:L51991b:{c.instructions+=3;NFSU2_TR(0x51991b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51991c:{NFSU2_TR(0x51991c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51991d:{NFSU2_TR(0x51991d);
__builtin_memmove((R+4),(R+4),4);
}
B519920:L519920:{c.instructions+=2;NFSU2_TR(0x519920);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+8))));
}
B519924:{NFSU2_TR(0x519924);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5199e5;}}
}
B51992a:L51992a:{c.instructions+=1;NFSU2_TR(0x51992a);
__builtin_memmove((R+12),(R+12),4);
}
B519930:L519930:{c.instructions+=5;NFSU2_TR(0x519930);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B519933:{NFSU2_TR(0x519933);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B519935:{NFSU2_TR(0x519935);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519938:{NFSU2_TR(0x519938);
__builtin_memmove((R+8),(R+20),4);
}
B51993a:{NFSU2_TR(0x51993a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L519946;}}
}
B51993c:L51993c:{c.instructions+=2;NFSU2_TR(0x51993c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B519944:{NFSU2_TR(0x519944);
{goto L519977;}
}
B519946:L519946:{c.instructions+=2;NFSU2_TR(0x519946);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B519948:{NFSU2_TR(0x519948);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L51994f;}}
}
B51994a:L51994a:{c.instructions+=3;NFSU2_TR(0x51994a);
__builtin_memmove((R+0),(R+20),4);
}
B51994c:{NFSU2_TR(0x51994c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51994d:{NFSU2_TR(0x51994d);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51994d);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51994d);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B51994f:L51994f:{c.instructions+=3;NFSU2_TR(0x51994f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B519952:{NFSU2_TR(0x519952);
__builtin_memmove((R+0),(R+8),4);
}
B519954:{NFSU2_TR(0x519954);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L51995a;}}
}
B519956:L519956:{c.instructions+=2;NFSU2_TR(0x519956);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B519958:{NFSU2_TR(0x519958);
if(r1(R+519)){{goto L519961;}}
}
B51995a:L51995a:{c.instructions+=4;NFSU2_TR(0x51995a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51995b:{NFSU2_TR(0x51995b);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51995b);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51995b);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B51995d:{NFSU2_TR(0x51995d);
__builtin_memmove((R+0),(R+8),4);
}
B51995f:{NFSU2_TR(0x51995f);
{goto L519973;}
}
B519961:L519961:{c.instructions+=2;NFSU2_TR(0x519961);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B519964:{NFSU2_TR(0x519964);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L519971;}}
}
B519966:L519966:{c.instructions+=6;NFSU2_TR(0x519966);
w4(R+0,u32(0-u32(r4(R+0))));
}
B519968:{NFSU2_TR(0x519968);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B519969:{NFSU2_TR(0x519969);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519969);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519969);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B51996b:{NFSU2_TR(0x51996b);
__builtin_memmove((R+0),(R+24),4);
}
B51996d:{NFSU2_TR(0x51996d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B51996f:{NFSU2_TR(0x51996f);
{goto L519973;}
}
B519971:L519971:{c.instructions+=1;NFSU2_TR(0x519971);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B519973:L519973:{c.instructions+=1;NFSU2_TR(0x519973);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519977:L519977:{c.instructions+=6;NFSU2_TR(0x519977);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51997a:{NFSU2_TR(0x51997a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51997c:{NFSU2_TR(0x51997c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519980:{NFSU2_TR(0x519980);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B519983:{NFSU2_TR(0x519983);
__builtin_memmove((R+8),(R+0),4);
}
B519985:{NFSU2_TR(0x519985);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51998c;}}
}
B519987:L519987:{c.instructions+=2;NFSU2_TR(0x519987);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B51998a:{NFSU2_TR(0x51998a);
{goto L5199b7;}
}
B51998c:L51998c:{c.instructions+=2;NFSU2_TR(0x51998c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B51998e:{NFSU2_TR(0x51998e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L519993;}}
}
B519990:L519990:{c.instructions+=2;NFSU2_TR(0x519990);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B519991:{NFSU2_TR(0x519991);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519991);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x519991);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B519993:L519993:{c.instructions+=3;NFSU2_TR(0x519993);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B519996:{NFSU2_TR(0x519996);
__builtin_memmove((R+0),(R+8),4);
}
B519998:{NFSU2_TR(0x519998);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L51999e;}}
}
B51999a:L51999a:{c.instructions+=2;NFSU2_TR(0x51999a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B51999c:{NFSU2_TR(0x51999c);
if(r1(R+519)){{goto L5199a5;}}
}
B51999e:L51999e:{c.instructions+=4;NFSU2_TR(0x51999e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51999f:{NFSU2_TR(0x51999f);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51999f);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x51999f);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5199a1:{NFSU2_TR(0x5199a1);
__builtin_memmove((R+0),(R+8),4);
}
B5199a3:{NFSU2_TR(0x5199a3);
{goto L5199b7;}
}
B5199a5:L5199a5:{c.instructions+=2;NFSU2_TR(0x5199a5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5199a8:{NFSU2_TR(0x5199a8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5199b5;}}
}
B5199aa:L5199aa:{c.instructions+=6;NFSU2_TR(0x5199aa);
w4(R+0,u32(0-u32(r4(R+0))));
}
B5199ac:{NFSU2_TR(0x5199ac);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5199ad:{NFSU2_TR(0x5199ad);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5199ad);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5199ad);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5199af:{NFSU2_TR(0x5199af);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B5199b1:{NFSU2_TR(0x5199b1);
__builtin_memmove((R+0),(R+28),4);
}
B5199b3:{NFSU2_TR(0x5199b3);
{goto L5199b7;}
}
B5199b5:L5199b5:{c.instructions+=1;NFSU2_TR(0x5199b5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5199b7:L5199b7:{c.instructions+=12;NFSU2_TR(0x5199b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5199bb:{NFSU2_TR(0x5199bb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5199be:{NFSU2_TR(0x5199be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5199c4:{NFSU2_TR(0x5199c4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B5199c6:{NFSU2_TR(0x5199c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5199c9:{NFSU2_TR(0x5199c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5199cd:{NFSU2_TR(0x5199cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5199d0:{NFSU2_TR(0x5199d0);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5199d4:{NFSU2_TR(0x5199d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5199d8:{NFSU2_TR(0x5199d8);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5199d9:{NFSU2_TR(0x5199d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B5199db:{NFSU2_TR(0x5199db);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519930u);}goto L519930;}}
}
B5199e1:L5199e1:{c.instructions+=1;NFSU2_TR(0x5199e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5199e5:L5199e5:{c.instructions+=6;NFSU2_TR(0x5199e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5199e9:{NFSU2_TR(0x5199e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5199ed:{NFSU2_TR(0x5199ed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5199ee:{NFSU2_TR(0x5199ee);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5199f0:{NFSU2_TR(0x5199f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5199f4:{NFSU2_TR(0x5199f4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519920u);}goto L519920;}}
}
B5199fa:L5199fa:{c.instructions+=2;NFSU2_TR(0x5199fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5199fb:{NFSU2_TR(0x5199fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5199fc:L5199fc:{c.instructions+=4;NFSU2_TR(0x5199fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5199fd:{NFSU2_TR(0x5199fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5199fe:{NFSU2_TR(0x5199fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5199ff:{NFSU2_TR(0x5199ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519a10:L519a10:{c.instructions+=7;NFSU2_TR(0x519a10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519a11:{NFSU2_TR(0x519a11);
__builtin_memmove((R+12),(R+4),4);
}
B519a13:{NFSU2_TR(0x519a13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B519a15:{NFSU2_TR(0x519a15);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519a16:{NFSU2_TR(0x519a16);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B519a1a:{NFSU2_TR(0x519a1a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B519a1c:{NFSU2_TR(0x519a1c);
if(r1(R+518)){{goto L519acf;}}
}
B519a22:L519a22:{c.instructions+=2;NFSU2_TR(0x519a22);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B519a24:{NFSU2_TR(0x519a24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L519a48;}}
}
B519a26:L519a26:{c.instructions+=3;NFSU2_TR(0x519a26);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519a29:{NFSU2_TR(0x519a29);
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
B519a2b:{NFSU2_TR(0x519a2b);
if(r1(R+518)){{goto L519a36;}}
}
B519a2d:L519a2d:{c.instructions+=2;NFSU2_TR(0x519a2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519a2e:{NFSU2_TR(0x519a2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519a33ull));
TAIL_STATIC(0x575630u,575);
}
B519a33:L519a33:{c.instructions+=1;NFSU2_TR(0x519a33);
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
B519a36:L519a36:{c.instructions+=5;NFSU2_TR(0x519a36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B519a37:{NFSU2_TR(0x519a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B519a3e:{NFSU2_TR(0x519a3e);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B519a44:{NFSU2_TR(0x519a44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B519a45:{NFSU2_TR(0x519a45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519a48:L519a48:{c.instructions+=6;NFSU2_TR(0x519a48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519a49:{NFSU2_TR(0x519a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B519a4d:{NFSU2_TR(0x519a4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519a4e:{NFSU2_TR(0x519a4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B519a51:{NFSU2_TR(0x519a51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519a52:{NFSU2_TR(0x519a52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519a57ull));
TAIL_STATIC(0x575620u,575);
}
B519a57:L519a57:{c.instructions+=6;NFSU2_TR(0x519a57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B519a59:{NFSU2_TR(0x519a59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B519a5c:{NFSU2_TR(0x519a5c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B519a5e:{NFSU2_TR(0x519a5e);
__builtin_memmove((R+28),(R+0),4);
}
B519a60:{NFSU2_TR(0x519a60);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519a64:{NFSU2_TR(0x519a64);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L519a7b;}}
}
B519a66:L519a66:{c.instructions+=4;NFSU2_TR(0x519a66);
__builtin_memmove((R+4),(R+24),4);
}
B519a68:{NFSU2_TR(0x519a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519a6b:{NFSU2_TR(0x519a6b);
__builtin_memmove((R+0),(R+4),4);
}
B519a6d:{NFSU2_TR(0x519a6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B519a70:L519a70:{c.instructions+=1;NFSU2_TR(0x519a70);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L519a72;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519a70u);}goto L519a70;}
}
B519a72:L519a72:{c.instructions+=2;NFSU2_TR(0x519a72);
__builtin_memmove((R+4),(R+0),4);
}
B519a74:{NFSU2_TR(0x519a74);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B519a77:L519a77:{c.instructions+=1;NFSU2_TR(0x519a77);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L519a79;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519a77u);}goto L519a77;}
}
B519a79:L519a79:{c.instructions+=1;NFSU2_TR(0x519a79);
{goto L519ab8;}
}
B519a7b:L519a7b:{c.instructions+=5;NFSU2_TR(0x519a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519a7e:{NFSU2_TR(0x519a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B519a81:{NFSU2_TR(0x519a81);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B519a84:{NFSU2_TR(0x519a84);
__builtin_memmove((R+8),(R+4),4);
}
B519a86:{NFSU2_TR(0x519a86);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B519a89:L519a89:{c.instructions+=1;NFSU2_TR(0x519a89);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L519a8b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519a89u);}goto L519a89;}
}
B519a8b:L519a8b:{c.instructions+=2;NFSU2_TR(0x519a8b);
__builtin_memmove((R+4),(R+8),4);
}
B519a8d:{NFSU2_TR(0x519a8d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B519a90:L519a90:{c.instructions+=1;NFSU2_TR(0x519a90);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L519a92;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519a90u);}goto L519a90;}
}
B519a92:L519a92:{c.instructions+=11;NFSU2_TR(0x519a92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B519a94:{NFSU2_TR(0x519a94);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519a98:{NFSU2_TR(0x519a98);
__builtin_memmove((R+0),(R+20),4);
}
B519a9a:{NFSU2_TR(0x519a9a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B519a9c:{NFSU2_TR(0x519a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B519a9f:{NFSU2_TR(0x519a9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B519aa2:{NFSU2_TR(0x519aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B519aa5:{NFSU2_TR(0x519aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B519aa8:{NFSU2_TR(0x519aa8);
__builtin_memmove((R+8),(R+4),4);
}
B519aaa:{NFSU2_TR(0x519aaa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B519aad:{NFSU2_TR(0x519aad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B519aaf:L519aaf:{c.instructions+=1;NFSU2_TR(0x519aaf);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L519ab1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519aafu);}goto L519aaf;}
}
B519ab1:L519ab1:{c.instructions+=2;NFSU2_TR(0x519ab1);
__builtin_memmove((R+4),(R+8),4);
}
B519ab3:{NFSU2_TR(0x519ab3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B519ab6:L519ab6:{c.instructions+=1;NFSU2_TR(0x519ab6);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L519ab8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519ab6u);}goto L519ab6;}
}
B519ab8:L519ab8:{c.instructions+=3;NFSU2_TR(0x519ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519abb:{NFSU2_TR(0x519abb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519abc:{NFSU2_TR(0x519abc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519ac1ull));
TAIL_STATIC(0x575630u,575);
}
B519ac1:L519ac1:{c.instructions+=6;NFSU2_TR(0x519ac1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519ac5:{NFSU2_TR(0x519ac5);
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
B519ac8:{NFSU2_TR(0x519ac8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B519ac9:{NFSU2_TR(0x519ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519acc:{NFSU2_TR(0x519acc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+12)),r4(U+0));
}
B519ace:{NFSU2_TR(0x519ace);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B519acf:L519acf:{c.instructions+=3;NFSU2_TR(0x519acf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B519ad0:{NFSU2_TR(0x519ad0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B519ad1:{NFSU2_TR(0x519ad1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519ae0:L519ae0:{c.instructions+=7;NFSU2_TR(0x519ae0);
__builtin_memmove((R+8),(R+4),4);
}
B519ae2:{NFSU2_TR(0x519ae2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519ae3:{NFSU2_TR(0x519ae3);
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
B519ae5:{NFSU2_TR(0x519ae5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B519ae8:{NFSU2_TR(0x519ae8);
w4(R+4,u32(0x20ull));
}
B519aed:{NFSU2_TR(0x519aed);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B519af4:{NFSU2_TR(0x519af4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B519afa:L519afa:{c.instructions+=1;NFSU2_TR(0x519afa);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L519afc;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519afau);}goto L519afa;}
}
B519afc:L519afc:{c.instructions+=3;NFSU2_TR(0x519afc);
__builtin_memmove((R+0),(R+8),4);
}
B519afe:{NFSU2_TR(0x519afe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B519aff:{NFSU2_TR(0x519aff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519b00:L519b00:{c.instructions+=29;NFSU2_TR(0x519b00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B519b03:{NFSU2_TR(0x519b03);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519b07:{NFSU2_TR(0x519b07);
__builtin_memmove((R+0),(R+4),4);
}
B519b09:{NFSU2_TR(0x519b09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B519b0b:{NFSU2_TR(0x519b0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519b0f:{NFSU2_TR(0x519b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519b12:{NFSU2_TR(0x519b12);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519b16:{NFSU2_TR(0x519b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519b19:{NFSU2_TR(0x519b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519b1c:{NFSU2_TR(0x519b1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519b20:{NFSU2_TR(0x519b20);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519b24:{NFSU2_TR(0x519b24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519b25:{NFSU2_TR(0x519b25);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519b29:{NFSU2_TR(0x519b29);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B519b2c:{NFSU2_TR(0x519b2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519b30:{NFSU2_TR(0x519b30);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519b34:{NFSU2_TR(0x519b34);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B519b37:{NFSU2_TR(0x519b37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B519b39:{NFSU2_TR(0x519b39);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519b3d:{NFSU2_TR(0x519b3d);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B519b40:{NFSU2_TR(0x519b40);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B519b42:{NFSU2_TR(0x519b42);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519b46:{NFSU2_TR(0x519b46);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B519b48:{NFSU2_TR(0x519b48);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B519b4a:{NFSU2_TR(0x519b4a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B519b50:{NFSU2_TR(0x519b50);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B519b54:{NFSU2_TR(0x519b54);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B519b56:{NFSU2_TR(0x519b56);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B519b59:{NFSU2_TR(0x519b59);
if(r1(R+514)){{goto L519b89;}}
}
B519b5b:L519b5b:{c.instructions+=14;NFSU2_TR(0x519b5b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B519b5d:{NFSU2_TR(0x519b5d);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B519b61:{NFSU2_TR(0x519b61);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519b65:{NFSU2_TR(0x519b65);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B519b67:{NFSU2_TR(0x519b67);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519b6b:{NFSU2_TR(0x519b6b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519b6f:{NFSU2_TR(0x519b6f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B519b71:{NFSU2_TR(0x519b71);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519b75:{NFSU2_TR(0x519b75);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519b79:{NFSU2_TR(0x519b79);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B519b7b:{NFSU2_TR(0x519b7b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519b7f:{NFSU2_TR(0x519b7f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519b83:{NFSU2_TR(0x519b83);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B519b85:{NFSU2_TR(0x519b85);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519b89:L519b89:{c.instructions+=4;NFSU2_TR(0x519b89);
{u32 ea_=u32(u32(7975256u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B519b8f:{NFSU2_TR(0x519b8f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B519b91:{NFSU2_TR(0x519b91);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B519b94:{NFSU2_TR(0x519b94);
if(r1(R+514)){{goto L519caf;}}
}
B519b9a:L519b9a:{c.instructions+=3;NFSU2_TR(0x519b9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519b9e:{NFSU2_TR(0x519b9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519b9f:{NFSU2_TR(0x519b9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519ba4ull));
TAIL_STATIC(0x43c490u,43c);
}
B519ba4:L519ba4:{c.instructions+=10;NFSU2_TR(0x519ba4);
w4(R+8,u32(0x4000ull));
}
B519ba9:{NFSU2_TR(0x519ba9);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B519bab:{NFSU2_TR(0x519bab);
w4(R+0,u32(r2(R+8)));
}
B519bae:{NFSU2_TR(0x519bae);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519bb2:{NFSU2_TR(0x519bb2);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B519bb6:{NFSU2_TR(0x519bb6);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B519bbc:{NFSU2_TR(0x519bbc);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519bc0:{NFSU2_TR(0x519bc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519bc4:{NFSU2_TR(0x519bc4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519bc5:{NFSU2_TR(0x519bc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519bcaull));
TAIL_STATIC(0x43c350u,43c);
}
B519bca:L519bca:{c.instructions+=6;NFSU2_TR(0x519bca);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519bce:{NFSU2_TR(0x519bce);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519bd2:{NFSU2_TR(0x519bd2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B519bd5:{NFSU2_TR(0x519bd5);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B519bd9:{NFSU2_TR(0x519bd9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519bdc:{NFSU2_TR(0x519bdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519be1ull));
TAIL_STATIC(0x43c350u,43c);
}
B519be1:L519be1:{c.instructions+=6;NFSU2_TR(0x519be1);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519be5:{NFSU2_TR(0x519be5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519beb:{NFSU2_TR(0x519beb);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B519bef:{NFSU2_TR(0x519bef);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B519bf3:{NFSU2_TR(0x519bf3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519bf6:{NFSU2_TR(0x519bf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519bfbull));
TAIL_STATIC(0x43c350u,43c);
}
B519bfb:L519bfb:{c.instructions+=19;NFSU2_TR(0x519bfb);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519bff:{NFSU2_TR(0x519bff);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B519c03:{NFSU2_TR(0x519c03);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519c07:{NFSU2_TR(0x519c07);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519c0b:{NFSU2_TR(0x519c0b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B519c0f:{NFSU2_TR(0x519c0f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519c10:{NFSU2_TR(0x519c10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519c11:{NFSU2_TR(0x519c11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519c12:{NFSU2_TR(0x519c12);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519c16:{NFSU2_TR(0x519c16);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519c1a:{NFSU2_TR(0x519c1a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B519c1e:{NFSU2_TR(0x519c1e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519c22:{NFSU2_TR(0x519c22);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519c26:{NFSU2_TR(0x519c26);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B519c2a:{NFSU2_TR(0x519c2a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519c2e:{NFSU2_TR(0x519c2e);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519c32:{NFSU2_TR(0x519c32);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B519c36:{NFSU2_TR(0x519c36);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519c3a:{NFSU2_TR(0x519c3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519c3full));
TAIL_STATIC(0x4fe770u,4fe);
}
B519c3f:L519c3f:{c.instructions+=30;NFSU2_TR(0x519c3f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519c43:{NFSU2_TR(0x519c43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B519c46:{NFSU2_TR(0x519c46);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B519c48:{NFSU2_TR(0x519c48);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519c4c:{NFSU2_TR(0x519c4c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B519c4f:{NFSU2_TR(0x519c4f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519c53:{NFSU2_TR(0x519c53);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519c57:{NFSU2_TR(0x519c57);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B519c5a:{NFSU2_TR(0x519c5a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519c5e:{NFSU2_TR(0x519c5e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519c62:{NFSU2_TR(0x519c62);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B519c65:{NFSU2_TR(0x519c65);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519c69:{NFSU2_TR(0x519c69);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519c6f:{NFSU2_TR(0x519c6f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B519c73:{NFSU2_TR(0x519c73);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519c77:{NFSU2_TR(0x519c77);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B519c7b:{NFSU2_TR(0x519c7b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519c7f:{NFSU2_TR(0x519c7f);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B519c83:{NFSU2_TR(0x519c83);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519c87:{NFSU2_TR(0x519c87);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B519c8b:{NFSU2_TR(0x519c8b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519c8f:{NFSU2_TR(0x519c8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519c93:{NFSU2_TR(0x519c93);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B519c97:{NFSU2_TR(0x519c97);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B519c9b:{NFSU2_TR(0x519c9b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519c9f:{NFSU2_TR(0x519c9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519ca3:{NFSU2_TR(0x519ca3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B519ca5:{NFSU2_TR(0x519ca5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519ca9:{NFSU2_TR(0x519ca9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B519cad:{NFSU2_TR(0x519cad);
{goto L519cff;}
}
B519caf:L519caf:{c.instructions+=7;NFSU2_TR(0x519caf);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519cb3:{NFSU2_TR(0x519cb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519cb4:{NFSU2_TR(0x519cb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519cb5:{NFSU2_TR(0x519cb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519cb6:{NFSU2_TR(0x519cb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B519cba:{NFSU2_TR(0x519cba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519cbb:{NFSU2_TR(0x519cbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519cc0ull));
TAIL_STATIC(0x4fe830u,4fe);
}
B519cc0:L519cc0:{c.instructions+=5;NFSU2_TR(0x519cc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B519cc3:{NFSU2_TR(0x519cc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519cc4:{NFSU2_TR(0x519cc4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B519cc8:{NFSU2_TR(0x519cc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519cc9:{NFSU2_TR(0x519cc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519cceull));
TAIL_STATIC(0x4fe770u,4fe);
}
B519cce:L519cce:{c.instructions+=5;NFSU2_TR(0x519cce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519ccf:{NFSU2_TR(0x519ccf);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B519cd3:{NFSU2_TR(0x519cd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519cd4:{NFSU2_TR(0x519cd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519cd5:{NFSU2_TR(0x519cd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519cdaull));
TAIL_STATIC(0x4fe7d0u,4fe);
}
B519cda:L519cda:{c.instructions+=3;NFSU2_TR(0x519cda);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B519cde:{NFSU2_TR(0x519cde);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519cdf:{NFSU2_TR(0x519cdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519ce4ull));
TAIL_STATIC(0x511c80u,511);
}
B519ce4:L519ce4:{c.instructions+=7;NFSU2_TR(0x519ce4);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519ce8:{NFSU2_TR(0x519ce8);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519cec:{NFSU2_TR(0x519cec);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519cf0:{NFSU2_TR(0x519cf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519cf4:{NFSU2_TR(0x519cf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519cf8:{NFSU2_TR(0x519cf8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B519cfb:{NFSU2_TR(0x519cfb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519cff:L519cff:{c.instructions+=8;NFSU2_TR(0x519cff);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519d03:{NFSU2_TR(0x519d03);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519d07:{NFSU2_TR(0x519d07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519d08:{NFSU2_TR(0x519d08);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B519d0c:{NFSU2_TR(0x519d0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519d0d:{NFSU2_TR(0x519d0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B519d11:{NFSU2_TR(0x519d11);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519d15:{NFSU2_TR(0x519d15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519d1aull));
TAIL_STATIC(0x4fe6b0u,4fe);
}
B519d1a:L519d1a:{c.instructions+=12;NFSU2_TR(0x519d1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B519d1c:{NFSU2_TR(0x519d1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519d20:{NFSU2_TR(0x519d20);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B519d22:{NFSU2_TR(0x519d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519d25:{NFSU2_TR(0x519d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519d28:{NFSU2_TR(0x519d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519d2b:{NFSU2_TR(0x519d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519d2e:{NFSU2_TR(0x519d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519d31:{NFSU2_TR(0x519d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519d34:{NFSU2_TR(0x519d34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B519d35:{NFSU2_TR(0x519d35);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B519d38:{NFSU2_TR(0x519d38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519d40:L519d40:{c.instructions+=11;NFSU2_TR(0x519d40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519d44:{NFSU2_TR(0x519d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519d47:{NFSU2_TR(0x519d47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519d48:{NFSU2_TR(0x519d48);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519d4c:{NFSU2_TR(0x519d4c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519d4d:{NFSU2_TR(0x519d4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B519d51:{NFSU2_TR(0x519d51);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B519d54:{NFSU2_TR(0x519d54);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B519d57:{NFSU2_TR(0x519d57);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B519d5a:{NFSU2_TR(0x519d5a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B519d5c:{NFSU2_TR(0x519d5c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L519d8b;}}
}
B519d5e:L519d5e:{c.instructions+=2;NFSU2_TR(0x519d5e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519d5f:{NFSU2_TR(0x519d5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519d64ull));
TAIL_STATIC(0x505260u,505);
}
B519d64:L519d64:{c.instructions+=3;NFSU2_TR(0x519d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519d67:{NFSU2_TR(0x519d67);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B519d69:{NFSU2_TR(0x519d69);
if(r1(R+518)){{goto L519d9f;}}
}
B519d6b:L519d6b:{c.instructions+=2;NFSU2_TR(0x519d6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B519d6e:{NFSU2_TR(0x519d6e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L519d9f;}}
}
B519d70:L519d70:{c.instructions+=5;NFSU2_TR(0x519d70);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B519d73:{NFSU2_TR(0x519d73);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B519d77:{NFSU2_TR(0x519d77);
__builtin_memmove((R+0),(R+4),4);
}
B519d79:{NFSU2_TR(0x519d79);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B519d7c:{NFSU2_TR(0x519d7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B519d7f:L519d7f:{c.instructions+=1;NFSU2_TR(0x519d7f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L519d81;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519d7fu);}goto L519d7f;}
}
B519d81:L519d81:{c.instructions+=2;NFSU2_TR(0x519d81);
__builtin_memmove((R+4),(R+0),4);
}
B519d83:{NFSU2_TR(0x519d83);
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
B519d86:L519d86:{c.instructions+=1;NFSU2_TR(0x519d86);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L519d88;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519d86u);}goto L519d86;}
}
B519d88:L519d88:{c.instructions+=3;NFSU2_TR(0x519d88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B519d89:{NFSU2_TR(0x519d89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B519d8a:{NFSU2_TR(0x519d8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519d8b:L519d8b:{c.instructions+=3;NFSU2_TR(0x519d8b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B519d8d:{NFSU2_TR(0x519d8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519d8e:{NFSU2_TR(0x519d8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519d93ull));
TAIL_STATIC(0x505260u,505);
}
B519d93:L519d93:{c.instructions+=3;NFSU2_TR(0x519d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B519d96:{NFSU2_TR(0x519d96);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B519d98:{NFSU2_TR(0x519d98);
if(r1(R+518)){{goto L519d9f;}}
}
B519d9a:L519d9a:{c.instructions+=2;NFSU2_TR(0x519d9a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B519d9d:{NFSU2_TR(0x519d9d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519d70u);}goto L519d70;}}
}
B519d9f:L519d9f:{c.instructions+=5;NFSU2_TR(0x519d9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B519da2:{NFSU2_TR(0x519da2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B519da6:{NFSU2_TR(0x519da6);
__builtin_memmove((R+8),(R+4),4);
}
B519da8:{NFSU2_TR(0x519da8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B519dab:{NFSU2_TR(0x519dab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B519dae:L519dae:{c.instructions+=1;NFSU2_TR(0x519dae);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L519db0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519daeu);}goto L519dae;}
}
B519db0:L519db0:{c.instructions+=2;NFSU2_TR(0x519db0);
__builtin_memmove((R+4),(R+8),4);
}
B519db2:{NFSU2_TR(0x519db2);
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
B519db5:L519db5:{c.instructions+=1;NFSU2_TR(0x519db5);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L519db7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519db5u);}goto L519db5;}
}
B519db7:L519db7:{c.instructions+=3;NFSU2_TR(0x519db7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B519db8:{NFSU2_TR(0x519db8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B519db9:{NFSU2_TR(0x519db9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519dc0:L519dc0:{c.instructions+=3;NFSU2_TR(0x519dc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519dc1:{NFSU2_TR(0x519dc1);
__builtin_memmove((R+24),(R+4),4);
}
B519dc3:{NFSU2_TR(0x519dc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519dc8ull));
TAIL_STATIC(0x505350u,505);
}
B519dc8:L519dc8:{c.instructions+=2;NFSU2_TR(0x519dc8);
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
B519dcd:{NFSU2_TR(0x519dcd);
if(r1(R+518)){{goto L519dd8;}}
}
B519dcf:L519dcf:{c.instructions+=2;NFSU2_TR(0x519dcf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519dd0:{NFSU2_TR(0x519dd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519dd5ull));
TAIL_STATIC(0x575630u,575);
}
B519dd5:L519dd5:{c.instructions+=1;NFSU2_TR(0x519dd5);
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
B519dd8:L519dd8:{c.instructions+=3;NFSU2_TR(0x519dd8);
__builtin_memmove((R+0),(R+24),4);
}
B519dda:{NFSU2_TR(0x519dda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B519ddb:{NFSU2_TR(0x519ddb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519de0:L519de0:{c.instructions+=8;NFSU2_TR(0x519de0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519de1:{NFSU2_TR(0x519de1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519de2:{NFSU2_TR(0x519de2);
__builtin_memmove((R+24),(R+4),4);
}
B519de4:{NFSU2_TR(0x519de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519de7:{NFSU2_TR(0x519de7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B519de9:{NFSU2_TR(0x519de9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B519deb:{NFSU2_TR(0x519deb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519dec:{NFSU2_TR(0x519dec);
if(r1(R+518)){{goto L519dfa;}}
}
B519dee:L519dee:{c.instructions+=2;NFSU2_TR(0x519dee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519def:{NFSU2_TR(0x519def);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519df4ull));
TAIL_STATIC(0x575630u,575);
}
B519df4:L519df4:{c.instructions+=2;NFSU2_TR(0x519df4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B519df7:{NFSU2_TR(0x519df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519dfa:L519dfa:{c.instructions+=3;NFSU2_TR(0x519dfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B519dfe:{NFSU2_TR(0x519dfe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B519e00:{NFSU2_TR(0x519e00);
if(r1(R+518)){{goto L519e31;}}
}
B519e02:L519e02:{c.instructions+=2;NFSU2_TR(0x519e02);
__builtin_memmove((R+0),(R+28),4);
}
B519e04:{NFSU2_TR(0x519e04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B519e07:L519e07:{c.instructions+=4;NFSU2_TR(0x519e07);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B519e09:{NFSU2_TR(0x519e09);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B519e0a:{NFSU2_TR(0x519e0a);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B519e0c:{NFSU2_TR(0x519e0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519e07u);}goto L519e07;}}
}
B519e0e:L519e0e:{c.instructions+=4;NFSU2_TR(0x519e0e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B519e10:{NFSU2_TR(0x519e10);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B519e11:{NFSU2_TR(0x519e11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519e12:{NFSU2_TR(0x519e12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519e17ull));
TAIL_STATIC(0x575620u,575);
}
B519e17:L519e17:{c.instructions+=4;NFSU2_TR(0x519e17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B519e1a:{NFSU2_TR(0x519e1a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B519e1c:{NFSU2_TR(0x519e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519e1f:{NFSU2_TR(0x519e1f);
if(r1(R+518)){{goto L519e31;}}
}
B519e21:L519e21:{c.instructions+=2;NFSU2_TR(0x519e21);
__builtin_memmove((R+4),(R+28),4);
}
B519e23:{NFSU2_TR(0x519e23);
__builtin_memmove((R+8),(R+0),4);
}
B519e25:L519e25:{c.instructions+=6;NFSU2_TR(0x519e25);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B519e27:{NFSU2_TR(0x519e27);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B519e28:{NFSU2_TR(0x519e28);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B519e2a:{NFSU2_TR(0x519e2a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B519e2b:{NFSU2_TR(0x519e2b);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B519e2d:{NFSU2_TR(0x519e2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519e25u);}goto L519e25;}}
}
B519e2f:L519e2f:{c.instructions+=1;NFSU2_TR(0x519e2f);
w1(R+12,u8(0x1ull));
}
B519e31:L519e31:{c.instructions+=3;NFSU2_TR(0x519e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519e34:{NFSU2_TR(0x519e34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519e35:{NFSU2_TR(0x519e35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519e3aull));
TAIL_STATIC(0x505450u,505);
}
B519e3a:L519e3a:{c.instructions+=7;NFSU2_TR(0x519e3a);
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
B519e3d:{NFSU2_TR(0x519e3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B519e3e:{NFSU2_TR(0x519e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519e41:{NFSU2_TR(0x519e41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B519e42:{NFSU2_TR(0x519e42);
__builtin_memmove((R+0),(R+12),1);
}
B519e44:{NFSU2_TR(0x519e44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B519e45:{NFSU2_TR(0x519e45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519e50:L519e50:{c.instructions+=8;NFSU2_TR(0x519e50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519e51:{NFSU2_TR(0x519e51);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519e52:{NFSU2_TR(0x519e52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519e53:{NFSU2_TR(0x519e53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519e54:{NFSU2_TR(0x519e54);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B519e58:{NFSU2_TR(0x519e58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519e59:{NFSU2_TR(0x519e59);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B519e5b:{NFSU2_TR(0x519e5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519e60ull));
TAIL_STATIC(0x505450u,505);
}
B519e60:L519e60:{c.instructions+=5;NFSU2_TR(0x519e60);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519e64:{NFSU2_TR(0x519e64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B519e67:{NFSU2_TR(0x519e67);
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
B519e69:{NFSU2_TR(0x519e69);
__builtin_memmove((R+12),(R+0),4);
}
B519e6b:{NFSU2_TR(0x519e6b);
if(r1(R+518)){{goto L519e95;}}
}
B519e6d:L519e6d:{c.instructions+=1;NFSU2_TR(0x519e6d);
__builtin_memmove((R+4),(R+4),4);
}
B519e70:L519e70:{c.instructions+=3;NFSU2_TR(0x519e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519e73:{NFSU2_TR(0x519e73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B519e75:{NFSU2_TR(0x519e75);
if(r1(R+518)){{goto L519e8a;}}
}
B519e77:L519e77:{c.instructions+=2;NFSU2_TR(0x519e77);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B519e7a:{NFSU2_TR(0x519e7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L519e8e;}}
}
B519e7c:L519e7c:{c.instructions+=3;NFSU2_TR(0x519e7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519e7d:{NFSU2_TR(0x519e7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519e7e:{NFSU2_TR(0x519e7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519e83ull));
TAIL_STATIC(0x505310u,505);
}
B519e83:L519e83:{c.instructions+=3;NFSU2_TR(0x519e83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B519e86:{NFSU2_TR(0x519e86);
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
B519e88:{NFSU2_TR(0x519e88);
{goto L519e8c;}
}
B519e8a:L519e8a:{c.instructions+=1;NFSU2_TR(0x519e8a);
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
B519e8c:L519e8c:{c.instructions+=1;NFSU2_TR(0x519e8c);
if(r1(R+518)){{goto L519e9e;}}
}
B519e8e:L519e8e:{c.instructions+=3;NFSU2_TR(0x519e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519e91:{NFSU2_TR(0x519e91);
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
B519e93:{NFSU2_TR(0x519e93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519e70u);}goto L519e70;}}
}
B519e95:L519e95:{c.instructions+=6;NFSU2_TR(0x519e95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B519e96:{NFSU2_TR(0x519e96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B519e97:{NFSU2_TR(0x519e97);
__builtin_memmove((R+0),(R+20),4);
}
B519e99:{NFSU2_TR(0x519e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B519e9a:{NFSU2_TR(0x519e9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B519e9b:{NFSU2_TR(0x519e9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519e9e:L519e9e:{c.instructions+=6;NFSU2_TR(0x519e9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B519e9f:{NFSU2_TR(0x519e9f);
__builtin_memmove((R+0),(R+24),4);
}
B519ea1:{NFSU2_TR(0x519ea1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B519ea2:{NFSU2_TR(0x519ea2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B519ea3:{NFSU2_TR(0x519ea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B519ea4:{NFSU2_TR(0x519ea4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519eb0:L519eb0:{c.instructions+=5;NFSU2_TR(0x519eb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519eb1:{NFSU2_TR(0x519eb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519eb2:{NFSU2_TR(0x519eb2);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519eb4:{NFSU2_TR(0x519eb4);
__builtin_memmove((R+28),(R+4),4);
}
B519eb6:{NFSU2_TR(0x519eb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519ebbull));
TAIL_STATIC(0x575620u,575);
}
B519ebb:L519ebb:{c.instructions+=4;NFSU2_TR(0x519ebb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B519ebd:{NFSU2_TR(0x519ebd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B519ec0:{NFSU2_TR(0x519ec0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B519ec2:{NFSU2_TR(0x519ec2);
if(r1(R+518)){{goto L519ee6;}}
}
B519ec4:L519ec4:{c.instructions+=10;NFSU2_TR(0x519ec4);
w4(R+4,u32(0xabadcafeull));
}
B519ec9:{NFSU2_TR(0x519ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519ecc:{NFSU2_TR(0x519ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519ecf:{NFSU2_TR(0x519ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519ed2:{NFSU2_TR(0x519ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519ed5:{NFSU2_TR(0x519ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519ed8:{NFSU2_TR(0x519ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519edb:{NFSU2_TR(0x519edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519ede:{NFSU2_TR(0x519ede);
u8 U[4];
w4(U+0,u32(0x79b018ull));
s4(u32(r4(R+0)),r4(U+0));
}
B519ee4:{NFSU2_TR(0x519ee4);
__builtin_memmove((R+24),(R+0),4);
}
B519ee6:L519ee6:{c.instructions+=4;NFSU2_TR(0x519ee6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519eea:{NFSU2_TR(0x519eea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519eeb:{NFSU2_TR(0x519eeb);
__builtin_memmove((R+4),(R+24),4);
}
B519eed:{NFSU2_TR(0x519eed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519ef2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519de0u);}goto L519de0;}
}
B519ef2:L519ef2:{c.instructions+=7;NFSU2_TR(0x519ef2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519ef6:{NFSU2_TR(0x519ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519ef9:{NFSU2_TR(0x519ef9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x799320ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B519f00:{NFSU2_TR(0x519f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519f03:{NFSU2_TR(0x519f03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519f04:{NFSU2_TR(0x519f04);
__builtin_memmove((R+4),(R+28),4);
}
B519f06:{NFSU2_TR(0x519f06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519f0bull));
TAIL_STATIC(0x514780u,514);
}
B519f0b:L519f0b:{c.instructions+=3;NFSU2_TR(0x519f0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B519f0c:{NFSU2_TR(0x519f0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B519f0d:{NFSU2_TR(0x519f0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519f10:L519f10:{c.instructions+=5;NFSU2_TR(0x519f10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519f11:{NFSU2_TR(0x519f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519f14:{NFSU2_TR(0x519f14);
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
B519f16:{NFSU2_TR(0x519f16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519f17:{NFSU2_TR(0x519f17);
if(r1(R+518)){{goto L519f38;}}
}
B519f19:L519f19:{c.instructions+=2;NFSU2_TR(0x519f19);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B519f1d:{NFSU2_TR(0x519f1d);
__builtin_memmove((R+4),(R+4),4);
}
B519f20:L519f20:{c.instructions+=4;NFSU2_TR(0x519f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519f23:{NFSU2_TR(0x519f23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519f24:{NFSU2_TR(0x519f24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519f25:{NFSU2_TR(0x519f25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519f2aull));
TAIL_STATIC(0x75dd6fu,75d);
}
B519f2a:L519f2a:{c.instructions+=3;NFSU2_TR(0x519f2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B519f2d:{NFSU2_TR(0x519f2d);
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
B519f2f:{NFSU2_TR(0x519f2f);
if(r1(R+518)){{goto L519f38;}}
}
B519f31:L519f31:{c.instructions+=3;NFSU2_TR(0x519f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B519f34:{NFSU2_TR(0x519f34);
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
B519f36:{NFSU2_TR(0x519f36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519f20u);}goto L519f20;}}
}
B519f38:L519f38:{c.instructions+=4;NFSU2_TR(0x519f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B519f39:{NFSU2_TR(0x519f39);
__builtin_memmove((R+0),(R+24),4);
}
B519f3b:{NFSU2_TR(0x519f3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B519f3c:{NFSU2_TR(0x519f3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519f40:L519f40:{c.instructions+=6;NFSU2_TR(0x519f40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519f41:{NFSU2_TR(0x519f41);
__builtin_memmove((R+24),(R+4),4);
}
B519f43:{NFSU2_TR(0x519f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519f46:{NFSU2_TR(0x519f46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519f47:{NFSU2_TR(0x519f47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519f48:{NFSU2_TR(0x519f48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519f4dull));
TAIL_STATIC(0x575630u,575);
}
B519f4d:L519f4d:{c.instructions+=5;NFSU2_TR(0x519f4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B519f51:{NFSU2_TR(0x519f51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B519f54:{NFSU2_TR(0x519f54);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B519f56:{NFSU2_TR(0x519f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B519f5d:{NFSU2_TR(0x519f5d);
if(r1(R+518)){{goto L519f8a;}}
}
B519f5f:L519f5f:{c.instructions+=2;NFSU2_TR(0x519f5f);
__builtin_memmove((R+0),(R+28),4);
}
B519f61:{NFSU2_TR(0x519f61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B519f64:L519f64:{c.instructions+=4;NFSU2_TR(0x519f64);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B519f66:{NFSU2_TR(0x519f66);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B519f67:{NFSU2_TR(0x519f67);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B519f69:{NFSU2_TR(0x519f69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519f64u);}goto L519f64;}}
}
B519f6b:L519f6b:{c.instructions+=4;NFSU2_TR(0x519f6b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B519f6d:{NFSU2_TR(0x519f6d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B519f6e:{NFSU2_TR(0x519f6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519f6f:{NFSU2_TR(0x519f6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519f74ull));
TAIL_STATIC(0x575620u,575);
}
B519f74:L519f74:{c.instructions+=5;NFSU2_TR(0x519f74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B519f77:{NFSU2_TR(0x519f77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519f7a:{NFSU2_TR(0x519f7a);
__builtin_memmove((R+4),(R+28),4);
}
B519f7c:{NFSU2_TR(0x519f7c);
__builtin_memmove((R+8),(R+0),4);
}
B519f7e:{NFSU2_TR(0x519f7e);
__builtin_memmove((R+28),(R+28),4);
}
B519f80:L519f80:{c.instructions+=6;NFSU2_TR(0x519f80);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B519f82:{NFSU2_TR(0x519f82);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B519f83:{NFSU2_TR(0x519f83);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B519f85:{NFSU2_TR(0x519f85);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B519f86:{NFSU2_TR(0x519f86);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B519f88:{NFSU2_TR(0x519f88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x519f80u);}goto L519f80;}}
}
B519f8a:L519f8a:{c.instructions+=3;NFSU2_TR(0x519f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519f8d:{NFSU2_TR(0x519f8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519f8e:{NFSU2_TR(0x519f8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519f93ull));
TAIL_STATIC(0x505450u,505);
}
B519f93:L519f93:{c.instructions+=8;NFSU2_TR(0x519f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B519f96:{NFSU2_TR(0x519f96);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B519f9c:{NFSU2_TR(0x519f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519f9f:{NFSU2_TR(0x519f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519fa2:{NFSU2_TR(0x519fa2);
__builtin_memmove((R+4),gp(0x838478),4);
}
B519fa8:{NFSU2_TR(0x519fa8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B519fab:{NFSU2_TR(0x519fab);
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
B519fad:{NFSU2_TR(0x519fad);
if(r1(R+518)){{goto L519fb4;}}
}
B519faf:L519faf:{c.instructions+=3;NFSU2_TR(0x519faf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B519fb1:{NFSU2_TR(0x519fb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519fb2:{NFSU2_TR(0x519fb2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519fb4ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B519fb4:L519fb4:{c.instructions+=3;NFSU2_TR(0x519fb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B519fb5:{NFSU2_TR(0x519fb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B519fb6:{NFSU2_TR(0x519fb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B519fc0:L519fc0:{c.instructions+=16;NFSU2_TR(0x519fc0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519fc2:{NFSU2_TR(0x519fc2);
u8 U[4];
w4(U+0,u32(0x7770cbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519fc7:{NFSU2_TR(0x519fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519fcd:{NFSU2_TR(0x519fcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519fce:{NFSU2_TR(0x519fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519fd5:{NFSU2_TR(0x519fd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B519fd8:{NFSU2_TR(0x519fd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519fd9:{NFSU2_TR(0x519fd9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519fda:{NFSU2_TR(0x519fda);
__builtin_memmove((R+20),(R+4),4);
}
B519fdc:{NFSU2_TR(0x519fdc);
__builtin_memmove((R+4),gp(0x838480),4);
}
B519fe2:{NFSU2_TR(0x519fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B519fe5:{NFSU2_TR(0x519fe5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B519fe8:{NFSU2_TR(0x519fe8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519fe9:{NFSU2_TR(0x519fe9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B519fea:{NFSU2_TR(0x519fea);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B519fee:{NFSU2_TR(0x519fee);
if(r1(R+518)){{goto L519ff7;}}
}
B519ff0:L519ff0:{c.instructions+=1;NFSU2_TR(0x519ff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x519ff5ull));
TAIL_STATIC(0x43cdd0u,43c);
}
B519ff5:L519ff5:{c.instructions+=1;NFSU2_TR(0x519ff5);
TAIL_STATIC(0x51a024u,51a);
}
B519ff7:L519ff7:{c.instructions+=3;NFSU2_TR(0x519ff7);
__builtin_memmove((R+0),gp(0x838484),4);
}
B519ffc:{NFSU2_TR(0x519ffc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B519ffe:{NFSU2_TR(0x519ffe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x51a01du,51a);}
TAIL_STATIC(0x51a000u,51a);
}
XIT:NFSU2_TR_EXIT(0x519,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
