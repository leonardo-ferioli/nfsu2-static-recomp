#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_520(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_52f(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_53a(u8* __restrict R,Cpu& c);
u32 body_545(u8* __restrict R,Cpu& c);
u32 body_547(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x546,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x546,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_546(u8* __restrict R,Cpu& c);
u32 page_546(Cpu& c){return body_546(c.regs.data(),c);}
__attribute__((noinline)) u32 body_546(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x546003:goto L546003;
case 0x546005:c.instructions+=3;goto B546005;
case 0x546007:c.instructions+=2;goto B546007;
case 0x54600b:c.instructions+=1;goto B54600b;
case 0x546010:goto L546010;
case 0x546012:c.instructions+=2;goto B546012;
case 0x546019:c.instructions+=1;goto B546019;
case 0x54601e:goto L54601e;
case 0x54601f:c.instructions+=4;goto B54601f;
case 0x546020:c.instructions+=3;goto B546020;
case 0x546021:c.instructions+=2;goto B546021;
case 0x546022:c.instructions+=1;goto B546022;
case 0x546030:goto L546030;
case 0x546031:c.instructions+=5;goto B546031;
case 0x546033:c.instructions+=4;goto B546033;
case 0x546034:c.instructions+=3;goto B546034;
case 0x546037:c.instructions+=2;goto B546037;
case 0x546039:c.instructions+=1;goto B546039;
case 0x54603e:goto L54603e;
case 0x546043:c.instructions+=5;goto B546043;
case 0x546048:c.instructions+=4;goto B546048;
case 0x54604a:c.instructions+=3;goto B54604a;
case 0x54604c:c.instructions+=2;goto B54604c;
case 0x546056:c.instructions+=1;goto B546056;
case 0x54605b:goto L54605b;
case 0x546060:c.instructions+=4;goto B546060;
case 0x546065:c.instructions+=3;goto B546065;
case 0x546067:c.instructions+=2;goto B546067;
case 0x546069:c.instructions+=1;goto B546069;
case 0x54606e:goto L54606e;
case 0x546073:c.instructions+=4;goto B546073;
case 0x546078:c.instructions+=3;goto B546078;
case 0x54607a:c.instructions+=2;goto B54607a;
case 0x54607c:c.instructions+=1;goto B54607c;
case 0x546081:goto L546081;
case 0x546086:c.instructions+=4;goto B546086;
case 0x54608b:c.instructions+=3;goto B54608b;
case 0x54608d:c.instructions+=2;goto B54608d;
case 0x54608f:c.instructions+=1;goto B54608f;
case 0x546094:goto L546094;
case 0x546099:c.instructions+=4;goto B546099;
case 0x54609e:c.instructions+=3;goto B54609e;
case 0x5460a0:c.instructions+=2;goto B5460a0;
case 0x5460a2:c.instructions+=1;goto B5460a2;
case 0x5460a7:goto L5460a7;
case 0x5460ac:c.instructions+=4;goto B5460ac;
case 0x5460b1:c.instructions+=3;goto B5460b1;
case 0x5460b3:c.instructions+=2;goto B5460b3;
case 0x5460b5:c.instructions+=1;goto B5460b5;
case 0x5460ba:goto L5460ba;
case 0x5460bf:c.instructions+=4;goto B5460bf;
case 0x5460c4:c.instructions+=3;goto B5460c4;
case 0x5460c6:c.instructions+=2;goto B5460c6;
case 0x5460c8:c.instructions+=1;goto B5460c8;
case 0x5460cd:goto L5460cd;
case 0x5460d2:c.instructions+=4;goto B5460d2;
case 0x5460d7:c.instructions+=3;goto B5460d7;
case 0x5460d9:c.instructions+=2;goto B5460d9;
case 0x5460db:c.instructions+=1;goto B5460db;
case 0x5460e0:goto L5460e0;
case 0x5460e5:c.instructions+=4;goto B5460e5;
case 0x5460ea:c.instructions+=3;goto B5460ea;
case 0x5460ec:c.instructions+=2;goto B5460ec;
case 0x5460ee:c.instructions+=1;goto B5460ee;
case 0x5460f3:goto L5460f3;
case 0x5460f8:c.instructions+=4;goto B5460f8;
case 0x5460fd:c.instructions+=3;goto B5460fd;
case 0x5460ff:c.instructions+=2;goto B5460ff;
case 0x546101:c.instructions+=1;goto B546101;
case 0x546106:goto L546106;
case 0x54610b:c.instructions+=4;goto B54610b;
case 0x546110:c.instructions+=3;goto B546110;
case 0x546112:c.instructions+=2;goto B546112;
case 0x546114:c.instructions+=1;goto B546114;
case 0x546119:goto L546119;
case 0x54611e:c.instructions+=4;goto B54611e;
case 0x546123:c.instructions+=3;goto B546123;
case 0x546125:c.instructions+=2;goto B546125;
case 0x546127:c.instructions+=1;goto B546127;
case 0x54612c:goto L54612c;
case 0x546131:c.instructions+=4;goto B546131;
case 0x546136:c.instructions+=3;goto B546136;
case 0x546138:c.instructions+=2;goto B546138;
case 0x54613a:c.instructions+=1;goto B54613a;
case 0x54613f:goto L54613f;
case 0x546144:c.instructions+=4;goto B546144;
case 0x546149:c.instructions+=3;goto B546149;
case 0x54614b:c.instructions+=2;goto B54614b;
case 0x54614d:c.instructions+=1;goto B54614d;
case 0x546152:goto L546152;
case 0x546157:c.instructions+=4;goto B546157;
case 0x54615c:c.instructions+=3;goto B54615c;
case 0x54615e:c.instructions+=2;goto B54615e;
case 0x546160:c.instructions+=1;goto B546160;
case 0x546165:goto L546165;
case 0x54616a:c.instructions+=4;goto B54616a;
case 0x54616f:c.instructions+=3;goto B54616f;
case 0x546171:c.instructions+=2;goto B546171;
case 0x546173:c.instructions+=1;goto B546173;
case 0x546178:goto L546178;
case 0x54617d:c.instructions+=4;goto B54617d;
case 0x546182:c.instructions+=3;goto B546182;
case 0x546184:c.instructions+=2;goto B546184;
case 0x546186:c.instructions+=1;goto B546186;
case 0x54618b:goto L54618b;
case 0x546190:c.instructions+=4;goto B546190;
case 0x546195:c.instructions+=3;goto B546195;
case 0x546197:c.instructions+=2;goto B546197;
case 0x546199:c.instructions+=1;goto B546199;
case 0x54619e:goto L54619e;
case 0x5461a3:c.instructions+=4;goto B5461a3;
case 0x5461a8:c.instructions+=3;goto B5461a8;
case 0x5461aa:c.instructions+=2;goto B5461aa;
case 0x5461ac:c.instructions+=1;goto B5461ac;
case 0x5461b1:goto L5461b1;
case 0x5461b6:c.instructions+=4;goto B5461b6;
case 0x5461bb:c.instructions+=3;goto B5461bb;
case 0x5461bd:c.instructions+=2;goto B5461bd;
case 0x5461bf:c.instructions+=1;goto B5461bf;
case 0x5461c4:goto L5461c4;
case 0x5461c9:c.instructions+=4;goto B5461c9;
case 0x5461ce:c.instructions+=3;goto B5461ce;
case 0x5461d0:c.instructions+=2;goto B5461d0;
case 0x5461d2:c.instructions+=1;goto B5461d2;
case 0x5461d7:goto L5461d7;
case 0x5461dc:c.instructions+=4;goto B5461dc;
case 0x5461e1:c.instructions+=3;goto B5461e1;
case 0x5461e3:c.instructions+=2;goto B5461e3;
case 0x5461e5:c.instructions+=1;goto B5461e5;
case 0x5461ea:goto L5461ea;
case 0x5461ef:c.instructions+=4;goto B5461ef;
case 0x5461f4:c.instructions+=3;goto B5461f4;
case 0x5461f6:c.instructions+=2;goto B5461f6;
case 0x5461f8:c.instructions+=1;goto B5461f8;
case 0x5461fd:goto L5461fd;
case 0x546202:c.instructions+=4;goto B546202;
case 0x546207:c.instructions+=3;goto B546207;
case 0x546209:c.instructions+=2;goto B546209;
case 0x54620b:c.instructions+=1;goto B54620b;
case 0x546210:goto L546210;
case 0x546215:c.instructions+=4;goto B546215;
case 0x54621a:c.instructions+=3;goto B54621a;
case 0x54621c:c.instructions+=2;goto B54621c;
case 0x54621e:c.instructions+=1;goto B54621e;
case 0x546223:goto L546223;
case 0x546228:c.instructions+=4;goto B546228;
case 0x54622d:c.instructions+=3;goto B54622d;
case 0x54622f:c.instructions+=2;goto B54622f;
case 0x546231:c.instructions+=1;goto B546231;
case 0x546236:goto L546236;
case 0x54623b:c.instructions+=4;goto B54623b;
case 0x546240:c.instructions+=3;goto B546240;
case 0x546242:c.instructions+=2;goto B546242;
case 0x546244:c.instructions+=1;goto B546244;
case 0x546249:goto L546249;
case 0x54624e:c.instructions+=4;goto B54624e;
case 0x546253:c.instructions+=3;goto B546253;
case 0x546255:c.instructions+=2;goto B546255;
case 0x546257:c.instructions+=1;goto B546257;
case 0x54625c:goto L54625c;
case 0x54625f:c.instructions+=2;goto B54625f;
case 0x546260:c.instructions+=1;goto B546260;
case 0x546265:goto L546265;
case 0x546266:c.instructions+=1;goto B546266;
case 0x54626b:goto L54626b;
case 0x54626e:c.instructions+=2;goto B54626e;
case 0x546270:c.instructions+=1;goto B546270;
case 0x546272:goto L546272;
case 0x546276:c.instructions+=1;goto B546276;
case 0x546278:goto L546278;
case 0x54627e:c.instructions+=4;goto B54627e;
case 0x54627f:c.instructions+=3;goto B54627f;
case 0x546280:c.instructions+=2;goto B546280;
case 0x546285:c.instructions+=1;goto B546285;
case 0x54628a:goto L54628a;
case 0x54628c:c.instructions+=2;goto B54628c;
case 0x54628e:c.instructions+=1;goto B54628e;
case 0x546290:goto L546290;
case 0x546296:c.instructions+=3;goto B546296;
case 0x546297:c.instructions+=2;goto B546297;
case 0x54629c:c.instructions+=1;goto B54629c;
case 0x5462a1:goto L5462a1;
case 0x5462a3:c.instructions+=2;goto B5462a3;
case 0x5462a5:c.instructions+=1;goto B5462a5;
case 0x5462a7:goto L5462a7;
case 0x5462aa:c.instructions+=2;goto B5462aa;
case 0x5462ab:c.instructions+=1;goto B5462ab;
case 0x5462b0:goto L5462b0;
case 0x5462b1:c.instructions+=1;goto B5462b1;
case 0x5462b6:goto L5462b6;
case 0x5462b9:c.instructions+=2;goto B5462b9;
case 0x5462bb:c.instructions+=1;goto B5462bb;
case 0x5462bd:goto L5462bd;
case 0x5462bf:c.instructions+=3;goto B5462bf;
case 0x5462c2:c.instructions+=2;goto B5462c2;
case 0x5462c5:c.instructions+=1;goto B5462c5;
case 0x5462c8:goto L5462c8;
case 0x5462c9:goto L5462c9;
case 0x5462cc:c.instructions+=2;goto B5462cc;
case 0x5462cd:c.instructions+=1;goto B5462cd;
case 0x5462d2:goto L5462d2;
case 0x5462d3:c.instructions+=1;goto B5462d3;
case 0x5462d8:goto L5462d8;
case 0x5462db:c.instructions+=2;goto B5462db;
case 0x5462dd:c.instructions+=1;goto B5462dd;
case 0x5462df:goto L5462df;
case 0x5462e2:c.instructions+=1;goto B5462e2;
case 0x5462e4:goto L5462e4;
case 0x5462e6:goto L5462e6;
case 0x5462e7:c.instructions+=2;goto B5462e7;
case 0x5462e9:c.instructions+=1;goto B5462e9;
case 0x5462ee:goto L5462ee;
case 0x5462f0:c.instructions+=1;goto B5462f0;
case 0x5462f2:goto L5462f2;
case 0x5462f5:c.instructions+=2;goto B5462f5;
case 0x5462f7:c.instructions+=1;goto B5462f7;
case 0x5462f9:goto L5462f9;
case 0x5462fc:c.instructions+=1;goto B5462fc;
case 0x5462fe:goto L5462fe;
case 0x546300:goto L546300;
case 0x546301:c.instructions+=2;goto B546301;
case 0x546303:c.instructions+=1;goto B546303;
case 0x546308:goto L546308;
case 0x54630a:c.instructions+=2;goto B54630a;
case 0x54630d:c.instructions+=1;goto B54630d;
case 0x546312:goto L546312;
case 0x546313:c.instructions+=5;goto B546313;
case 0x54631a:c.instructions+=4;goto B54631a;
case 0x546321:c.instructions+=3;goto B546321;
case 0x546328:c.instructions+=2;goto B546328;
case 0x546329:c.instructions+=1;goto B546329;
case 0x546330:goto L546330;
case 0x546331:c.instructions+=2;goto B546331;
case 0x546333:c.instructions+=1;goto B546333;
case 0x546338:goto L546338;
case 0x54633d:c.instructions+=1;goto B54633d;
case 0x54633f:goto L54633f;
case 0x546340:c.instructions+=1;goto B546340;
case 0x546345:goto L546345;
case 0x546348:goto L546348;
case 0x54634a:c.instructions+=2;goto B54634a;
case 0x54634b:c.instructions+=1;goto B54634b;
case 0x546350:goto L546350;
case 0x546352:c.instructions+=14;goto B546352;
case 0x546357:c.instructions+=13;goto B546357;
case 0x54635d:c.instructions+=12;goto B54635d;
case 0x54635e:c.instructions+=11;goto B54635e;
case 0x546365:c.instructions+=10;goto B546365;
case 0x546366:c.instructions+=9;goto B546366;
case 0x546367:c.instructions+=8;goto B546367;
case 0x546368:c.instructions+=7;goto B546368;
case 0x54636a:c.instructions+=6;goto B54636a;
case 0x54636e:c.instructions+=5;goto B54636e;
case 0x546371:c.instructions+=4;goto B546371;
case 0x546374:c.instructions+=3;goto B546374;
case 0x546376:c.instructions+=2;goto B546376;
case 0x54637e:c.instructions+=1;goto B54637e;
case 0x546380:goto L546380;
case 0x546382:c.instructions+=5;goto B546382;
case 0x546385:c.instructions+=4;goto B546385;
case 0x546387:c.instructions+=3;goto B546387;
case 0x546388:c.instructions+=2;goto B546388;
case 0x54638b:c.instructions+=1;goto B54638b;
case 0x546390:goto L546390;
case 0x546392:c.instructions+=3;goto B546392;
case 0x546395:c.instructions+=2;goto B546395;
case 0x546397:c.instructions+=1;goto B546397;
case 0x546399:goto L546399;
case 0x54639d:c.instructions+=6;goto B54639d;
case 0x5463a3:c.instructions+=5;goto B5463a3;
case 0x5463a4:c.instructions+=4;goto B5463a4;
case 0x5463a5:c.instructions+=3;goto B5463a5;
case 0x5463ac:c.instructions+=2;goto B5463ac;
case 0x5463af:c.instructions+=1;goto B5463af;
case 0x5463b0:goto L5463b0;
case 0x5463b1:c.instructions+=11;goto B5463b1;
case 0x5463b3:c.instructions+=10;goto B5463b3;
case 0x5463b5:c.instructions+=9;goto B5463b5;
case 0x5463ba:c.instructions+=8;goto B5463ba;
case 0x5463c0:c.instructions+=7;goto B5463c0;
case 0x5463c1:c.instructions+=6;goto B5463c1;
case 0x5463c8:c.instructions+=5;goto B5463c8;
case 0x5463cb:c.instructions+=4;goto B5463cb;
case 0x5463cc:c.instructions+=3;goto B5463cc;
case 0x5463ce:c.instructions+=2;goto B5463ce;
case 0x5463d1:c.instructions+=1;goto B5463d1;
case 0x5463d6:goto L5463d6;
case 0x5463d8:c.instructions+=3;goto B5463d8;
case 0x5463db:c.instructions+=2;goto B5463db;
case 0x5463dd:c.instructions+=1;goto B5463dd;
case 0x5463df:goto L5463df;
case 0x5463e2:c.instructions+=7;goto B5463e2;
case 0x5463e5:c.instructions+=6;goto B5463e5;
case 0x5463e6:c.instructions+=5;goto B5463e6;
case 0x5463e9:c.instructions+=4;goto B5463e9;
case 0x5463ea:c.instructions+=3;goto B5463ea;
case 0x5463eb:c.instructions+=2;goto B5463eb;
case 0x5463ed:c.instructions+=1;goto B5463ed;
case 0x5463f2:goto L5463f2;
case 0x5463f5:c.instructions+=1;goto B5463f5;
case 0x5463f7:goto L5463f7;
case 0x5463fa:goto L5463fa;
case 0x5463fb:c.instructions+=8;goto B5463fb;
case 0x5463fe:c.instructions+=7;goto B5463fe;
case 0x546401:c.instructions+=6;goto B546401;
case 0x546402:c.instructions+=5;goto B546402;
case 0x546405:c.instructions+=4;goto B546405;
case 0x546408:c.instructions+=3;goto B546408;
case 0x54640a:c.instructions+=2;goto B54640a;
case 0x54640d:c.instructions+=1;goto B54640d;
case 0x546412:goto L546412;
case 0x546418:c.instructions+=4;goto B546418;
case 0x54641a:c.instructions+=3;goto B54641a;
case 0x54641d:c.instructions+=2;goto B54641d;
case 0x546420:c.instructions+=1;goto B546420;
case 0x546423:goto L546423;
case 0x546425:c.instructions+=6;goto B546425;
case 0x546426:c.instructions+=5;goto B546426;
case 0x546428:c.instructions+=4;goto B546428;
case 0x54642a:c.instructions+=3;goto B54642a;
case 0x54642b:c.instructions+=2;goto B54642b;
case 0x546430:c.instructions+=1;goto B546430;
case 0x546435:goto L546435;
case 0x546437:c.instructions+=2;goto B546437;
case 0x546439:c.instructions+=1;goto B546439;
case 0x54643b:goto L54643b;
case 0x546440:goto L546440;
case 0x546444:c.instructions+=2;goto B546444;
case 0x546447:c.instructions+=1;goto B546447;
case 0x546449:goto L546449;
case 0x54644c:c.instructions+=4;goto B54644c;
case 0x54644d:c.instructions+=3;goto B54644d;
case 0x54644e:c.instructions+=2;goto B54644e;
case 0x54644f:c.instructions+=1;goto B54644f;
case 0x546454:goto L546454;
case 0x546457:c.instructions+=2;goto B546457;
case 0x546459:c.instructions+=1;goto B546459;
case 0x54645b:goto L54645b;
case 0x54645d:c.instructions+=2;goto B54645d;
case 0x54645e:c.instructions+=1;goto B54645e;
case 0x546463:goto L546463;
case 0x546466:c.instructions+=2;goto B546466;
case 0x546468:c.instructions+=1;goto B546468;
case 0x54646a:goto L54646a;
case 0x54646d:c.instructions+=2;goto B54646d;
case 0x546474:c.instructions+=1;goto B546474;
case 0x546476:goto L546476;
case 0x546478:goto L546478;
case 0x54647b:c.instructions+=5;goto B54647b;
case 0x54647d:c.instructions+=4;goto B54647d;
case 0x546480:c.instructions+=3;goto B546480;
case 0x546483:c.instructions+=2;goto B546483;
case 0x546486:c.instructions+=1;goto B546486;
case 0x546488:goto L546488;
case 0x54648a:c.instructions+=6;goto B54648a;
case 0x54648c:c.instructions+=5;goto B54648c;
case 0x54648e:c.instructions+=4;goto B54648e;
case 0x54648f:c.instructions+=3;goto B54648f;
case 0x546490:c.instructions+=2;goto B546490;
case 0x546495:c.instructions+=1;goto B546495;
case 0x54649a:goto L54649a;
case 0x54649c:c.instructions+=2;goto B54649c;
case 0x54649e:c.instructions+=1;goto B54649e;
case 0x5464a0:goto L5464a0;
case 0x5464a3:c.instructions+=4;goto B5464a3;
case 0x5464aa:c.instructions+=3;goto B5464aa;
case 0x5464ab:c.instructions+=2;goto B5464ab;
case 0x5464ac:c.instructions+=1;goto B5464ac;
case 0x5464ae:goto L5464ae;
case 0x5464b2:c.instructions+=1;goto B5464b2;
case 0x5464b4:goto L5464b4;
case 0x5464b6:c.instructions+=2;goto B5464b6;
case 0x5464b9:c.instructions+=1;goto B5464b9;
case 0x5464bc:goto L5464bc;
case 0x5464bf:c.instructions+=4;goto B5464bf;
case 0x5464c2:c.instructions+=3;goto B5464c2;
case 0x5464c5:c.instructions+=2;goto B5464c5;
case 0x5464c6:c.instructions+=1;goto B5464c6;
case 0x5464c9:goto L5464c9;
case 0x5464cb:c.instructions+=2;goto B5464cb;
case 0x5464cc:c.instructions+=1;goto B5464cc;
case 0x5464ce:goto L5464ce;
case 0x5464d1:c.instructions+=2;goto B5464d1;
case 0x5464d4:c.instructions+=1;goto B5464d4;
case 0x5464d6:goto L5464d6;
case 0x5464d9:c.instructions+=1;goto B5464d9;
case 0x5464e0:goto L5464e0;
case 0x5464e3:c.instructions+=4;goto B5464e3;
case 0x5464e6:c.instructions+=3;goto B5464e6;
case 0x5464e8:c.instructions+=2;goto B5464e8;
case 0x5464ef:c.instructions+=1;goto B5464ef;
case 0x5464f1:goto L5464f1;
case 0x5464f3:c.instructions+=6;goto B5464f3;
case 0x5464f5:c.instructions+=5;goto B5464f5;
case 0x5464f8:c.instructions+=4;goto B5464f8;
case 0x5464fa:c.instructions+=3;goto B5464fa;
case 0x5464fb:c.instructions+=2;goto B5464fb;
case 0x5464fe:c.instructions+=1;goto B5464fe;
case 0x546503:goto L546503;
case 0x546506:c.instructions+=4;goto B546506;
case 0x546509:c.instructions+=3;goto B546509;
case 0x54650c:c.instructions+=2;goto B54650c;
case 0x54650e:c.instructions+=1;goto B54650e;
case 0x546510:goto L546510;
case 0x546513:c.instructions+=4;goto B546513;
case 0x54651a:c.instructions+=3;goto B54651a;
case 0x54651c:c.instructions+=2;goto B54651c;
case 0x54651d:c.instructions+=1;goto B54651d;
case 0x546520:goto L546520;
case 0x546521:c.instructions+=7;goto B546521;
case 0x546522:c.instructions+=6;goto B546522;
case 0x546524:c.instructions+=5;goto B546524;
case 0x54652a:c.instructions+=4;goto B54652a;
case 0x54652c:c.instructions+=3;goto B54652c;
case 0x54652d:c.instructions+=2;goto B54652d;
case 0x54652e:c.instructions+=1;goto B54652e;
case 0x546531:goto L546531;
case 0x546537:c.instructions+=2;goto B546537;
case 0x54653d:c.instructions+=1;goto B54653d;
case 0x546543:goto L546543;
case 0x546549:c.instructions+=4;goto B546549;
case 0x54654b:c.instructions+=3;goto B54654b;
case 0x54654e:c.instructions+=2;goto B54654e;
case 0x546550:c.instructions+=1;goto B546550;
case 0x546556:goto L546556;
case 0x54655b:c.instructions+=4;goto B54655b;
case 0x546560:c.instructions+=3;goto B546560;
case 0x546565:c.instructions+=2;goto B546565;
case 0x546567:c.instructions+=1;goto B546567;
case 0x54656c:goto L54656c;
case 0x546571:c.instructions+=4;goto B546571;
case 0x546576:c.instructions+=3;goto B546576;
case 0x54657b:c.instructions+=2;goto B54657b;
case 0x54657d:c.instructions+=1;goto B54657d;
case 0x546582:goto L546582;
case 0x546587:c.instructions+=4;goto B546587;
case 0x54658c:c.instructions+=3;goto B54658c;
case 0x546591:c.instructions+=2;goto B546591;
case 0x546593:c.instructions+=1;goto B546593;
case 0x546598:goto L546598;
case 0x54659d:c.instructions+=4;goto B54659d;
case 0x5465a2:c.instructions+=3;goto B5465a2;
case 0x5465a7:c.instructions+=2;goto B5465a7;
case 0x5465a9:c.instructions+=1;goto B5465a9;
case 0x5465ae:goto L5465ae;
case 0x5465b3:c.instructions+=4;goto B5465b3;
case 0x5465b8:c.instructions+=3;goto B5465b8;
case 0x5465bd:c.instructions+=2;goto B5465bd;
case 0x5465bf:c.instructions+=1;goto B5465bf;
case 0x5465c4:goto L5465c4;
case 0x5465c9:c.instructions+=4;goto B5465c9;
case 0x5465ce:c.instructions+=3;goto B5465ce;
case 0x5465d3:c.instructions+=2;goto B5465d3;
case 0x5465d5:c.instructions+=1;goto B5465d5;
case 0x5465da:goto L5465da;
case 0x5465df:c.instructions+=4;goto B5465df;
case 0x5465e4:c.instructions+=3;goto B5465e4;
case 0x5465e9:c.instructions+=2;goto B5465e9;
case 0x5465eb:c.instructions+=1;goto B5465eb;
case 0x5465f0:goto L5465f0;
case 0x5465f5:c.instructions+=4;goto B5465f5;
case 0x5465fa:c.instructions+=3;goto B5465fa;
case 0x5465ff:c.instructions+=2;goto B5465ff;
case 0x546601:c.instructions+=1;goto B546601;
case 0x546606:goto L546606;
case 0x54660b:c.instructions+=3;goto B54660b;
case 0x546610:c.instructions+=2;goto B546610;
case 0x546615:c.instructions+=1;goto B546615;
case 0x54661a:goto L54661a;
case 0x54661f:c.instructions+=4;goto B54661f;
case 0x546624:c.instructions+=3;goto B546624;
case 0x546629:c.instructions+=2;goto B546629;
case 0x54662b:c.instructions+=1;goto B54662b;
case 0x546630:goto L546630;
case 0x546635:c.instructions+=4;goto B546635;
case 0x54663a:c.instructions+=3;goto B54663a;
case 0x54663f:c.instructions+=2;goto B54663f;
case 0x546641:c.instructions+=1;goto B546641;
case 0x546646:goto L546646;
case 0x54664b:c.instructions+=4;goto B54664b;
case 0x546650:c.instructions+=3;goto B546650;
case 0x546655:c.instructions+=2;goto B546655;
case 0x546657:c.instructions+=1;goto B546657;
case 0x54665c:goto L54665c;
case 0x546661:c.instructions+=4;goto B546661;
case 0x546666:c.instructions+=3;goto B546666;
case 0x54666b:c.instructions+=2;goto B54666b;
case 0x54666d:c.instructions+=1;goto B54666d;
case 0x546672:goto L546672;
case 0x546677:c.instructions+=4;goto B546677;
case 0x54667c:c.instructions+=3;goto B54667c;
case 0x546681:c.instructions+=2;goto B546681;
case 0x546683:c.instructions+=1;goto B546683;
case 0x546688:goto L546688;
case 0x54668d:c.instructions+=4;goto B54668d;
case 0x546692:c.instructions+=3;goto B546692;
case 0x546697:c.instructions+=2;goto B546697;
case 0x546699:c.instructions+=1;goto B546699;
case 0x54669e:goto L54669e;
case 0x5466a3:c.instructions+=4;goto B5466a3;
case 0x5466a8:c.instructions+=3;goto B5466a8;
case 0x5466ad:c.instructions+=2;goto B5466ad;
case 0x5466af:c.instructions+=1;goto B5466af;
case 0x5466b4:goto L5466b4;
case 0x5466b9:c.instructions+=4;goto B5466b9;
case 0x5466be:c.instructions+=3;goto B5466be;
case 0x5466c3:c.instructions+=2;goto B5466c3;
case 0x5466c5:c.instructions+=1;goto B5466c5;
case 0x5466ca:goto L5466ca;
case 0x5466cf:c.instructions+=4;goto B5466cf;
case 0x5466d4:c.instructions+=3;goto B5466d4;
case 0x5466d9:c.instructions+=2;goto B5466d9;
case 0x5466db:c.instructions+=1;goto B5466db;
case 0x5466e0:goto L5466e0;
case 0x5466e5:c.instructions+=4;goto B5466e5;
case 0x5466ea:c.instructions+=3;goto B5466ea;
case 0x5466ef:c.instructions+=2;goto B5466ef;
case 0x5466f1:c.instructions+=1;goto B5466f1;
case 0x5466f6:goto L5466f6;
case 0x5466fb:c.instructions+=4;goto B5466fb;
case 0x546700:c.instructions+=3;goto B546700;
case 0x546705:c.instructions+=2;goto B546705;
case 0x546707:c.instructions+=1;goto B546707;
case 0x54670c:goto L54670c;
case 0x546711:c.instructions+=4;goto B546711;
case 0x546716:c.instructions+=3;goto B546716;
case 0x54671b:c.instructions+=2;goto B54671b;
case 0x54671d:c.instructions+=1;goto B54671d;
case 0x546722:goto L546722;
case 0x546727:c.instructions+=4;goto B546727;
case 0x54672c:c.instructions+=3;goto B54672c;
case 0x546731:c.instructions+=2;goto B546731;
case 0x546733:c.instructions+=1;goto B546733;
case 0x546738:goto L546738;
case 0x54673d:c.instructions+=4;goto B54673d;
case 0x546742:c.instructions+=3;goto B546742;
case 0x546747:c.instructions+=2;goto B546747;
case 0x546749:c.instructions+=1;goto B546749;
case 0x54674e:goto L54674e;
case 0x546753:c.instructions+=2;goto B546753;
case 0x546758:c.instructions+=1;goto B546758;
case 0x54675d:goto L54675d;
case 0x54675f:c.instructions+=1;goto B54675f;
case 0x546764:goto L546764;
case 0x546769:c.instructions+=4;goto B546769;
case 0x54676e:c.instructions+=3;goto B54676e;
case 0x546770:c.instructions+=2;goto B546770;
case 0x546775:c.instructions+=1;goto B546775;
case 0x54677a:goto L54677a;
case 0x54677c:c.instructions+=2;goto B54677c;
case 0x546781:c.instructions+=1;goto B546781;
case 0x546786:goto L546786;
case 0x546788:c.instructions+=2;goto B546788;
case 0x54678a:c.instructions+=1;goto B54678a;
case 0x54678c:goto L54678c;
case 0x54678e:c.instructions+=3;goto B54678e;
case 0x546793:c.instructions+=2;goto B546793;
case 0x546795:c.instructions+=1;goto B546795;
case 0x54679a:goto L54679a;
case 0x54679c:c.instructions+=1;goto B54679c;
case 0x54679e:goto L54679e;
case 0x5467a1:c.instructions+=2;goto B5467a1;
case 0x5467a2:c.instructions+=1;goto B5467a2;
case 0x5467a7:goto L5467a7;
case 0x5467a8:c.instructions+=1;goto B5467a8;
case 0x5467ad:goto L5467ad;
case 0x5467b0:c.instructions+=2;goto B5467b0;
case 0x5467b2:c.instructions+=1;goto B5467b2;
case 0x5467b4:goto L5467b4;
case 0x5467b7:c.instructions+=2;goto B5467b7;
case 0x5467b9:c.instructions+=1;goto B5467b9;
case 0x5467bb:goto L5467bb;
case 0x5467bd:c.instructions+=3;goto B5467bd;
case 0x5467c2:c.instructions+=2;goto B5467c2;
case 0x5467c4:c.instructions+=1;goto B5467c4;
case 0x5467c9:goto L5467c9;
case 0x5467ca:c.instructions+=2;goto B5467ca;
case 0x5467cc:c.instructions+=1;goto B5467cc;
case 0x5467d1:goto L5467d1;
case 0x5467d2:c.instructions+=1;goto B5467d2;
case 0x5467d7:goto L5467d7;
case 0x5467da:c.instructions+=2;goto B5467da;
case 0x5467dc:c.instructions+=1;goto B5467dc;
case 0x5467de:goto L5467de;
case 0x5467e1:goto L5467e1;
case 0x5467e4:c.instructions+=2;goto B5467e4;
case 0x5467e5:c.instructions+=1;goto B5467e5;
case 0x5467ea:goto L5467ea;
case 0x5467eb:c.instructions+=1;goto B5467eb;
case 0x5467f0:goto L5467f0;
case 0x5467f3:c.instructions+=2;goto B5467f3;
case 0x5467f5:c.instructions+=1;goto B5467f5;
case 0x5467fb:goto L5467fb;
case 0x5467fe:c.instructions+=2;goto B5467fe;
case 0x546800:c.instructions+=1;goto B546800;
case 0x546806:goto L546806;
case 0x546809:c.instructions+=2;goto B546809;
case 0x54680c:c.instructions+=1;goto B54680c;
case 0x546814:goto L546814;
case 0x546816:c.instructions+=1;goto B546816;
case 0x546818:goto L546818;
case 0x54681b:c.instructions+=1;goto B54681b;
case 0x54681d:goto L54681d;
case 0x54681f:c.instructions+=1;goto B54681f;
case 0x546820:goto L546820;
case 0x546822:c.instructions+=1;goto B546822;
case 0x546824:goto L546824;
case 0x546827:c.instructions+=1;goto B546827;
case 0x546829:goto L546829;
case 0x54682b:goto L54682b;
case 0x54682d:c.instructions+=1;goto B54682d;
case 0x54682f:goto L54682f;
case 0x546832:c.instructions+=3;goto B546832;
case 0x546835:c.instructions+=2;goto B546835;
case 0x546837:c.instructions+=1;goto B546837;
case 0x546839:goto L546839;
case 0x54683b:c.instructions+=2;goto B54683b;
case 0x54683d:c.instructions+=1;goto B54683d;
case 0x54683f:goto L54683f;
case 0x546840:goto L546840;
case 0x546843:c.instructions+=2;goto B546843;
case 0x546845:c.instructions+=1;goto B546845;
case 0x546847:goto L546847;
case 0x546849:c.instructions+=1;goto B546849;
case 0x54684b:goto L54684b;
case 0x54684d:goto L54684d;
case 0x546850:c.instructions+=5;goto B546850;
case 0x546852:c.instructions+=4;goto B546852;
case 0x546855:c.instructions+=3;goto B546855;
case 0x546856:c.instructions+=2;goto B546856;
case 0x546858:c.instructions+=1;goto B546858;
case 0x54685a:goto L54685a;
case 0x54685b:c.instructions+=1;goto B54685b;
case 0x546860:goto L546860;
case 0x546863:c.instructions+=2;goto B546863;
case 0x546865:c.instructions+=1;goto B546865;
case 0x546867:goto L546867;
case 0x54686a:c.instructions+=1;goto B54686a;
case 0x54686c:goto L54686c;
case 0x54686e:goto L54686e;
case 0x546871:c.instructions+=1;goto B546871;
case 0x546873:goto L546873;
case 0x546877:c.instructions+=4;goto B546877;
case 0x54687a:c.instructions+=3;goto B54687a;
case 0x54687b:c.instructions+=2;goto B54687b;
case 0x54687f:c.instructions+=1;goto B54687f;
case 0x546881:goto L546881;
case 0x546885:c.instructions+=2;goto B546885;
case 0x546886:c.instructions+=1;goto B546886;
case 0x546888:goto L546888;
case 0x54688a:goto L54688a;
case 0x54688d:c.instructions+=2;goto B54688d;
case 0x546890:c.instructions+=1;goto B546890;
case 0x546893:goto L546893;
case 0x546895:c.instructions+=6;goto B546895;
case 0x546896:c.instructions+=5;goto B546896;
case 0x546897:c.instructions+=4;goto B546897;
case 0x546899:c.instructions+=3;goto B546899;
case 0x54689a:c.instructions+=2;goto B54689a;
case 0x54689d:c.instructions+=1;goto B54689d;
case 0x5468a0:goto L5468a0;
case 0x5468a1:c.instructions+=5;goto B5468a1;
case 0x5468a2:c.instructions+=4;goto B5468a2;
case 0x5468a4:c.instructions+=3;goto B5468a4;
case 0x5468a5:c.instructions+=2;goto B5468a5;
case 0x5468ab:c.instructions+=1;goto B5468ab;
case 0x5468b0:goto L5468b0;
case 0x5468b1:c.instructions+=5;goto B5468b1;
case 0x5468b7:c.instructions+=4;goto B5468b7;
case 0x5468b8:c.instructions+=3;goto B5468b8;
case 0x5468ba:c.instructions+=2;goto B5468ba;
case 0x5468c0:c.instructions+=1;goto B5468c0;
case 0x5468c5:goto L5468c5;
case 0x5468c8:c.instructions+=4;goto B5468c8;
case 0x5468cb:c.instructions+=3;goto B5468cb;
case 0x5468ce:c.instructions+=2;goto B5468ce;
case 0x5468d0:c.instructions+=1;goto B5468d0;
case 0x5468d5:goto L5468d5;
case 0x5468da:c.instructions+=3;goto B5468da;
case 0x5468dc:c.instructions+=2;goto B5468dc;
case 0x5468de:c.instructions+=1;goto B5468de;
case 0x5468e3:goto L5468e3;
case 0x5468e5:c.instructions+=1;goto B5468e5;
case 0x5468e7:goto L5468e7;
case 0x5468e9:c.instructions+=3;goto B5468e9;
case 0x5468ee:c.instructions+=2;goto B5468ee;
case 0x5468f0:c.instructions+=1;goto B5468f0;
case 0x5468f5:goto L5468f5;
case 0x5468f7:c.instructions+=1;goto B5468f7;
case 0x5468fc:goto L5468fc;
case 0x5468fe:c.instructions+=1;goto B5468fe;
case 0x546900:goto L546900;
case 0x546905:c.instructions+=1;goto B546905;
case 0x54690a:goto L54690a;
case 0x54690c:goto L54690c;
case 0x546911:c.instructions+=4;goto B546911;
case 0x546912:c.instructions+=3;goto B546912;
case 0x546913:c.instructions+=2;goto B546913;
case 0x546918:c.instructions+=1;goto B546918;
case 0x54691d:goto L54691d;
case 0x546923:c.instructions+=4;goto B546923;
case 0x546924:c.instructions+=3;goto B546924;
case 0x546929:c.instructions+=2;goto B546929;
case 0x54692a:c.instructions+=1;goto B54692a;
case 0x54692f:goto L54692f;
case 0x546935:c.instructions+=4;goto B546935;
case 0x54693b:c.instructions+=3;goto B54693b;
case 0x54693e:c.instructions+=2;goto B54693e;
case 0x546940:c.instructions+=1;goto B546940;
case 0x546946:goto L546946;
case 0x54694c:c.instructions+=4;goto B54694c;
case 0x54694f:c.instructions+=3;goto B54694f;
case 0x546954:c.instructions+=2;goto B546954;
case 0x546956:c.instructions+=1;goto B546956;
case 0x54695b:goto L54695b;
case 0x54695d:c.instructions+=5;goto B54695d;
case 0x546960:c.instructions+=4;goto B546960;
case 0x546962:c.instructions+=3;goto B546962;
case 0x546964:c.instructions+=2;goto B546964;
case 0x546969:c.instructions+=1;goto B546969;
case 0x54696b:goto L54696b;
case 0x546970:goto L546970;
case 0x546973:c.instructions+=5;goto B546973;
case 0x546974:c.instructions+=4;goto B546974;
case 0x546976:c.instructions+=3;goto B546976;
case 0x54697b:c.instructions+=2;goto B54697b;
case 0x54697d:c.instructions+=1;goto B54697d;
case 0x546982:goto L546982;
case 0x546984:goto L546984;
case 0x546989:goto L546989;
case 0x54698c:c.instructions+=3;goto B54698c;
case 0x54698d:c.instructions+=2;goto B54698d;
case 0x54698f:c.instructions+=1;goto B54698f;
case 0x546994:goto L546994;
case 0x546995:c.instructions+=4;goto B546995;
case 0x54699a:c.instructions+=3;goto B54699a;
case 0x54699f:c.instructions+=2;goto B54699f;
case 0x5469a0:c.instructions+=1;goto B5469a0;
case 0x5469a5:goto L5469a5;
case 0x5469aa:c.instructions+=3;goto B5469aa;
case 0x5469ad:c.instructions+=2;goto B5469ad;
case 0x5469b0:c.instructions+=1;goto B5469b0;
case 0x5469b2:goto L5469b2;
case 0x5469b5:c.instructions+=4;goto B5469b5;
case 0x5469b6:c.instructions+=3;goto B5469b6;
case 0x5469b8:c.instructions+=2;goto B5469b8;
case 0x5469bd:c.instructions+=1;goto B5469bd;
case 0x5469c2:goto L5469c2;
case 0x5469c3:c.instructions+=4;goto B5469c3;
case 0x5469c8:c.instructions+=3;goto B5469c8;
case 0x5469cd:c.instructions+=2;goto B5469cd;
case 0x5469ce:c.instructions+=1;goto B5469ce;
case 0x5469d3:goto L5469d3;
case 0x5469d6:c.instructions+=4;goto B5469d6;
case 0x5469d7:c.instructions+=3;goto B5469d7;
case 0x5469d8:c.instructions+=2;goto B5469d8;
case 0x5469d9:c.instructions+=1;goto B5469d9;
case 0x5469da:goto L5469da;
case 0x5469dd:c.instructions+=3;goto B5469dd;
case 0x5469e2:c.instructions+=2;goto B5469e2;
case 0x5469e3:c.instructions+=1;goto B5469e3;
case 0x5469e8:goto L5469e8;
case 0x5469eb:goto L5469eb;
case 0x5469ec:c.instructions+=3;goto B5469ec;
case 0x5469ed:c.instructions+=2;goto B5469ed;
case 0x5469ee:c.instructions+=1;goto B5469ee;
case 0x5469f0:goto L5469f0;
case 0x5469f1:c.instructions+=5;goto B5469f1;
case 0x5469f3:c.instructions+=4;goto B5469f3;
case 0x5469f6:c.instructions+=3;goto B5469f6;
case 0x5469fd:c.instructions+=2;goto B5469fd;
case 0x5469ff:c.instructions+=1;goto B5469ff;
case 0x546a05:goto L546a05;
case 0x546a0b:c.instructions+=2;goto B546a0b;
case 0x546a10:c.instructions+=1;goto B546a10;
case 0x546a16:goto L546a16;
case 0x546a1c:goto L546a1c;
case 0x546a21:c.instructions+=1;goto B546a21;
case 0x546a27:goto L546a27;
case 0x546a2d:goto L546a2d;
case 0x546a30:c.instructions+=1;goto B546a30;
case 0x546a36:goto L546a36;
case 0x546a3b:c.instructions+=1;goto B546a3b;
case 0x546a41:goto L546a41;
case 0x546a42:c.instructions+=1;goto B546a42;
case 0x546a48:goto L546a48;
case 0x546a4d:c.instructions+=5;goto B546a4d;
case 0x546a52:c.instructions+=4;goto B546a52;
case 0x546a54:c.instructions+=3;goto B546a54;
case 0x546a59:c.instructions+=2;goto B546a59;
case 0x546a5b:c.instructions+=1;goto B546a5b;
case 0x546a60:goto L546a60;
case 0x546a65:c.instructions+=5;goto B546a65;
case 0x546a6a:c.instructions+=4;goto B546a6a;
case 0x546a6c:c.instructions+=3;goto B546a6c;
case 0x546a71:c.instructions+=2;goto B546a71;
case 0x546a73:c.instructions+=1;goto B546a73;
case 0x546a78:goto L546a78;
case 0x546a7d:c.instructions+=5;goto B546a7d;
case 0x546a82:c.instructions+=4;goto B546a82;
case 0x546a84:c.instructions+=3;goto B546a84;
case 0x546a89:c.instructions+=2;goto B546a89;
case 0x546a8b:c.instructions+=1;goto B546a8b;
case 0x546a90:goto L546a90;
case 0x546a95:c.instructions+=5;goto B546a95;
case 0x546a9a:c.instructions+=4;goto B546a9a;
case 0x546a9c:c.instructions+=3;goto B546a9c;
case 0x546aa1:c.instructions+=2;goto B546aa1;
case 0x546aa3:c.instructions+=1;goto B546aa3;
case 0x546aa8:goto L546aa8;
case 0x546aad:c.instructions+=5;goto B546aad;
case 0x546ab2:c.instructions+=4;goto B546ab2;
case 0x546ab4:c.instructions+=3;goto B546ab4;
case 0x546ab9:c.instructions+=2;goto B546ab9;
case 0x546abb:c.instructions+=1;goto B546abb;
case 0x546ac0:goto L546ac0;
case 0x546ac5:c.instructions+=4;goto B546ac5;
case 0x546aca:c.instructions+=3;goto B546aca;
case 0x546acc:c.instructions+=2;goto B546acc;
case 0x546ad1:c.instructions+=1;goto B546ad1;
case 0x546ad6:goto L546ad6;
case 0x546adb:c.instructions+=5;goto B546adb;
case 0x546ae0:c.instructions+=4;goto B546ae0;
case 0x546ae2:c.instructions+=3;goto B546ae2;
case 0x546ae4:c.instructions+=2;goto B546ae4;
case 0x546ae6:c.instructions+=1;goto B546ae6;
case 0x546aeb:goto L546aeb;
case 0x546af0:c.instructions+=5;goto B546af0;
case 0x546af5:c.instructions+=4;goto B546af5;
case 0x546af7:c.instructions+=3;goto B546af7;
case 0x546af9:c.instructions+=2;goto B546af9;
case 0x546afb:c.instructions+=1;goto B546afb;
case 0x546b00:goto L546b00;
case 0x546b05:c.instructions+=5;goto B546b05;
case 0x546b0a:c.instructions+=4;goto B546b0a;
case 0x546b0c:c.instructions+=3;goto B546b0c;
case 0x546b0e:c.instructions+=2;goto B546b0e;
case 0x546b10:c.instructions+=1;goto B546b10;
case 0x546b15:goto L546b15;
case 0x546b1a:c.instructions+=5;goto B546b1a;
case 0x546b1f:c.instructions+=4;goto B546b1f;
case 0x546b21:c.instructions+=3;goto B546b21;
case 0x546b23:c.instructions+=2;goto B546b23;
case 0x546b25:c.instructions+=1;goto B546b25;
case 0x546b2a:goto L546b2a;
case 0x546b2f:c.instructions+=5;goto B546b2f;
case 0x546b34:c.instructions+=4;goto B546b34;
case 0x546b36:c.instructions+=3;goto B546b36;
case 0x546b38:c.instructions+=2;goto B546b38;
case 0x546b3a:c.instructions+=1;goto B546b3a;
case 0x546b3f:goto L546b3f;
case 0x546b44:c.instructions+=4;goto B546b44;
case 0x546b49:c.instructions+=3;goto B546b49;
case 0x546b4b:c.instructions+=2;goto B546b4b;
case 0x546b4d:c.instructions+=1;goto B546b4d;
case 0x546b52:goto L546b52;
case 0x546b57:c.instructions+=5;goto B546b57;
case 0x546b5c:c.instructions+=4;goto B546b5c;
case 0x546b5e:c.instructions+=3;goto B546b5e;
case 0x546b60:c.instructions+=2;goto B546b60;
case 0x546b62:c.instructions+=1;goto B546b62;
case 0x546b67:goto L546b67;
case 0x546b6c:c.instructions+=5;goto B546b6c;
case 0x546b71:c.instructions+=4;goto B546b71;
case 0x546b73:c.instructions+=3;goto B546b73;
case 0x546b75:c.instructions+=2;goto B546b75;
case 0x546b77:c.instructions+=1;goto B546b77;
case 0x546b7c:goto L546b7c;
case 0x546b81:c.instructions+=5;goto B546b81;
case 0x546b86:c.instructions+=4;goto B546b86;
case 0x546b88:c.instructions+=3;goto B546b88;
case 0x546b8d:c.instructions+=2;goto B546b8d;
case 0x546b8f:c.instructions+=1;goto B546b8f;
case 0x546b94:goto L546b94;
case 0x546b99:c.instructions+=5;goto B546b99;
case 0x546b9e:c.instructions+=4;goto B546b9e;
case 0x546ba0:c.instructions+=3;goto B546ba0;
case 0x546ba5:c.instructions+=2;goto B546ba5;
case 0x546ba7:c.instructions+=1;goto B546ba7;
case 0x546bac:goto L546bac;
case 0x546bb1:c.instructions+=5;goto B546bb1;
case 0x546bb6:c.instructions+=4;goto B546bb6;
case 0x546bb8:c.instructions+=3;goto B546bb8;
case 0x546bbd:c.instructions+=2;goto B546bbd;
case 0x546bbf:c.instructions+=1;goto B546bbf;
case 0x546bc4:goto L546bc4;
case 0x546bc9:c.instructions+=5;goto B546bc9;
case 0x546bce:c.instructions+=4;goto B546bce;
case 0x546bd0:c.instructions+=3;goto B546bd0;
case 0x546bd5:c.instructions+=2;goto B546bd5;
case 0x546bd7:c.instructions+=1;goto B546bd7;
case 0x546bdc:goto L546bdc;
case 0x546be1:goto L546be1;
case 0x546be6:c.instructions+=5;goto B546be6;
case 0x546beb:c.instructions+=4;goto B546beb;
case 0x546bed:c.instructions+=3;goto B546bed;
case 0x546bf2:c.instructions+=2;goto B546bf2;
case 0x546bf4:c.instructions+=1;goto B546bf4;
case 0x546bf9:goto L546bf9;
case 0x546bfb:c.instructions+=2;goto B546bfb;
case 0x546c00:c.instructions+=1;goto B546c00;
case 0x546c05:goto L546c05;
case 0x546c07:c.instructions+=1;goto B546c07;
case 0x546c09:goto L546c09;
case 0x546c0d:c.instructions+=1;goto B546c0d;
case 0x546c0f:goto L546c0f;
case 0x546c14:c.instructions+=5;goto B546c14;
case 0x546c19:c.instructions+=4;goto B546c19;
case 0x546c1b:c.instructions+=3;goto B546c1b;
case 0x546c20:c.instructions+=2;goto B546c20;
case 0x546c22:c.instructions+=1;goto B546c22;
case 0x546c27:goto L546c27;
case 0x546c2e:c.instructions+=1;goto B546c2e;
case 0x546c33:goto L546c33;
case 0x546c38:c.instructions+=1;goto B546c38;
case 0x546c3a:goto L546c3a;
case 0x546c3b:c.instructions+=1;goto B546c3b;
case 0x546c41:goto L546c41;
case 0x546c46:c.instructions+=5;goto B546c46;
case 0x546c4b:c.instructions+=4;goto B546c4b;
case 0x546c4d:c.instructions+=3;goto B546c4d;
case 0x546c52:c.instructions+=2;goto B546c52;
case 0x546c54:c.instructions+=1;goto B546c54;
case 0x546c59:goto L546c59;
case 0x546c5e:c.instructions+=5;goto B546c5e;
case 0x546c63:c.instructions+=4;goto B546c63;
case 0x546c65:c.instructions+=3;goto B546c65;
case 0x546c6a:c.instructions+=2;goto B546c6a;
case 0x546c6c:c.instructions+=1;goto B546c6c;
case 0x546c71:goto L546c71;
case 0x546c78:c.instructions+=1;goto B546c78;
case 0x546c7d:goto L546c7d;
case 0x546c82:c.instructions+=5;goto B546c82;
case 0x546c87:c.instructions+=4;goto B546c87;
case 0x546c89:c.instructions+=3;goto B546c89;
case 0x546c8e:c.instructions+=2;goto B546c8e;
case 0x546c90:c.instructions+=1;goto B546c90;
case 0x546c95:goto L546c95;
case 0x546c97:c.instructions+=2;goto B546c97;
case 0x546c9c:c.instructions+=1;goto B546c9c;
case 0x546ca1:goto L546ca1;
case 0x546ca3:c.instructions+=1;goto B546ca3;
case 0x546ca5:goto L546ca5;
case 0x546ca9:c.instructions+=1;goto B546ca9;
case 0x546cab:goto L546cab;
case 0x546cb0:c.instructions+=5;goto B546cb0;
case 0x546cb5:c.instructions+=4;goto B546cb5;
case 0x546cb7:c.instructions+=3;goto B546cb7;
case 0x546cbc:c.instructions+=2;goto B546cbc;
case 0x546cbe:c.instructions+=1;goto B546cbe;
case 0x546cc3:goto L546cc3;
case 0x546cca:c.instructions+=1;goto B546cca;
case 0x546ccf:goto L546ccf;
case 0x546cd4:c.instructions+=4;goto B546cd4;
case 0x546cd9:c.instructions+=3;goto B546cd9;
case 0x546cdb:c.instructions+=2;goto B546cdb;
case 0x546ce0:c.instructions+=1;goto B546ce0;
case 0x546ce5:goto L546ce5;
case 0x546cea:c.instructions+=2;goto B546cea;
case 0x546ced:c.instructions+=1;goto B546ced;
case 0x546cf3:goto L546cf3;
case 0x546cfa:goto L546cfa;
case 0x546cff:c.instructions+=5;goto B546cff;
case 0x546d04:c.instructions+=4;goto B546d04;
case 0x546d06:c.instructions+=3;goto B546d06;
case 0x546d0b:c.instructions+=2;goto B546d0b;
case 0x546d0d:c.instructions+=1;goto B546d0d;
case 0x546d12:goto L546d12;
case 0x546d17:c.instructions+=4;goto B546d17;
case 0x546d1c:c.instructions+=3;goto B546d1c;
case 0x546d1e:c.instructions+=2;goto B546d1e;
case 0x546d23:c.instructions+=1;goto B546d23;
case 0x546d28:goto L546d28;
case 0x546d2d:c.instructions+=4;goto B546d2d;
case 0x546d32:c.instructions+=3;goto B546d32;
case 0x546d34:c.instructions+=2;goto B546d34;
case 0x546d39:c.instructions+=1;goto B546d39;
case 0x546d3e:goto L546d3e;
case 0x546d43:c.instructions+=5;goto B546d43;
case 0x546d48:c.instructions+=4;goto B546d48;
case 0x546d4a:c.instructions+=3;goto B546d4a;
case 0x546d4f:c.instructions+=2;goto B546d4f;
case 0x546d51:c.instructions+=1;goto B546d51;
case 0x546d56:goto L546d56;
case 0x546d5b:c.instructions+=4;goto B546d5b;
case 0x546d60:c.instructions+=3;goto B546d60;
case 0x546d62:c.instructions+=2;goto B546d62;
case 0x546d67:c.instructions+=1;goto B546d67;
case 0x546d6c:goto L546d6c;
case 0x546d71:c.instructions+=5;goto B546d71;
case 0x546d76:c.instructions+=4;goto B546d76;
case 0x546d78:c.instructions+=3;goto B546d78;
case 0x546d7a:c.instructions+=2;goto B546d7a;
case 0x546d7c:c.instructions+=1;goto B546d7c;
case 0x546d81:goto L546d81;
case 0x546d86:c.instructions+=5;goto B546d86;
case 0x546d8b:c.instructions+=4;goto B546d8b;
case 0x546d8d:c.instructions+=3;goto B546d8d;
case 0x546d8f:c.instructions+=2;goto B546d8f;
case 0x546d91:c.instructions+=1;goto B546d91;
case 0x546d96:goto L546d96;
case 0x546d9b:c.instructions+=5;goto B546d9b;
case 0x546da0:c.instructions+=4;goto B546da0;
case 0x546da2:c.instructions+=3;goto B546da2;
case 0x546da4:c.instructions+=2;goto B546da4;
case 0x546da6:c.instructions+=1;goto B546da6;
case 0x546dab:goto L546dab;
case 0x546db0:c.instructions+=4;goto B546db0;
case 0x546db5:c.instructions+=3;goto B546db5;
case 0x546db7:c.instructions+=2;goto B546db7;
case 0x546db9:c.instructions+=1;goto B546db9;
case 0x546dbe:goto L546dbe;
case 0x546dc3:c.instructions+=5;goto B546dc3;
case 0x546dc8:c.instructions+=4;goto B546dc8;
case 0x546dca:c.instructions+=3;goto B546dca;
case 0x546dcc:c.instructions+=2;goto B546dcc;
case 0x546dce:c.instructions+=1;goto B546dce;
case 0x546dd3:goto L546dd3;
case 0x546dd8:c.instructions+=5;goto B546dd8;
case 0x546ddd:c.instructions+=4;goto B546ddd;
case 0x546ddf:c.instructions+=3;goto B546ddf;
case 0x546de1:c.instructions+=2;goto B546de1;
case 0x546de3:c.instructions+=1;goto B546de3;
case 0x546de8:goto L546de8;
case 0x546ded:c.instructions+=5;goto B546ded;
case 0x546df2:c.instructions+=4;goto B546df2;
case 0x546df4:c.instructions+=3;goto B546df4;
case 0x546df6:c.instructions+=2;goto B546df6;
case 0x546df8:c.instructions+=1;goto B546df8;
case 0x546dfd:goto L546dfd;
case 0x546e02:c.instructions+=5;goto B546e02;
case 0x546e07:c.instructions+=4;goto B546e07;
case 0x546e09:c.instructions+=3;goto B546e09;
case 0x546e0b:c.instructions+=2;goto B546e0b;
case 0x546e0d:c.instructions+=1;goto B546e0d;
case 0x546e12:goto L546e12;
case 0x546e17:c.instructions+=5;goto B546e17;
case 0x546e1c:c.instructions+=4;goto B546e1c;
case 0x546e1e:c.instructions+=3;goto B546e1e;
case 0x546e20:c.instructions+=2;goto B546e20;
case 0x546e22:c.instructions+=1;goto B546e22;
case 0x546e27:goto L546e27;
case 0x546e2c:c.instructions+=5;goto B546e2c;
case 0x546e31:c.instructions+=4;goto B546e31;
case 0x546e33:c.instructions+=3;goto B546e33;
case 0x546e35:c.instructions+=2;goto B546e35;
case 0x546e37:c.instructions+=1;goto B546e37;
case 0x546e3c:goto L546e3c;
case 0x546e41:c.instructions+=5;goto B546e41;
case 0x546e46:c.instructions+=4;goto B546e46;
case 0x546e48:c.instructions+=3;goto B546e48;
case 0x546e4a:c.instructions+=2;goto B546e4a;
case 0x546e4c:c.instructions+=1;goto B546e4c;
case 0x546e51:goto L546e51;
case 0x546e56:c.instructions+=3;goto B546e56;
case 0x546e5b:c.instructions+=2;goto B546e5b;
case 0x546e5d:c.instructions+=1;goto B546e5d;
case 0x546e5f:goto L546e5f;
case 0x546e61:c.instructions+=1;goto B546e61;
case 0x546e66:goto L546e66;
case 0x546e6d:c.instructions+=7;goto B546e6d;
case 0x546e75:c.instructions+=6;goto B546e75;
case 0x546e78:c.instructions+=5;goto B546e78;
case 0x546e79:c.instructions+=4;goto B546e79;
case 0x546e7c:c.instructions+=3;goto B546e7c;
case 0x546e7d:c.instructions+=2;goto B546e7d;
case 0x546e7f:c.instructions+=1;goto B546e7f;
case 0x546e82:goto L546e82;
case 0x546e89:c.instructions+=2;goto B546e89;
case 0x546e8b:c.instructions+=1;goto B546e8b;
case 0x546e8d:goto L546e8d;
case 0x546e8e:c.instructions+=1;goto B546e8e;
case 0x546e93:goto L546e93;
case 0x546e96:c.instructions+=2;goto B546e96;
case 0x546e9b:c.instructions+=1;goto B546e9b;
case 0x546ea0:goto L546ea0;
case 0x546ea1:c.instructions+=4;goto B546ea1;
case 0x546ea6:c.instructions+=3;goto B546ea6;
case 0x546eab:c.instructions+=2;goto B546eab;
case 0x546eac:c.instructions+=1;goto B546eac;
case 0x546eb1:goto L546eb1;
case 0x546eb4:c.instructions+=2;goto B546eb4;
case 0x546eb5:c.instructions+=1;goto B546eb5;
case 0x546eb7:goto L546eb7;
case 0x546ebc:goto L546ebc;
case 0x546ebe:c.instructions+=2;goto B546ebe;
case 0x546ec0:c.instructions+=1;goto B546ec0;
case 0x546ec3:goto L546ec3;
case 0x546ec6:c.instructions+=2;goto B546ec6;
case 0x546ec8:c.instructions+=1;goto B546ec8;
case 0x546eca:goto L546eca;
case 0x546ecd:c.instructions+=1;goto B546ecd;
case 0x546ecf:goto L546ecf;
case 0x546ed1:goto L546ed1;
case 0x546ed4:c.instructions+=1;goto B546ed4;
case 0x546ed6:goto L546ed6;
case 0x546edc:c.instructions+=2;goto B546edc;
case 0x546edd:c.instructions+=1;goto B546edd;
case 0x546ee2:goto L546ee2;
case 0x546ee5:c.instructions+=3;goto B546ee5;
case 0x546ee6:c.instructions+=2;goto B546ee6;
case 0x546ee7:c.instructions+=1;goto B546ee7;
case 0x546ee8:goto L546ee8;
case 0x546eeb:c.instructions+=2;goto B546eeb;
case 0x546eed:c.instructions+=1;goto B546eed;
case 0x546eef:goto L546eef;
case 0x546ef2:c.instructions+=1;goto B546ef2;
case 0x546ef4:goto L546ef4;
case 0x546ef6:goto L546ef6;
case 0x546ef9:c.instructions+=1;goto B546ef9;
case 0x546efb:goto L546efb;
case 0x546f01:c.instructions+=2;goto B546f01;
case 0x546f02:c.instructions+=1;goto B546f02;
case 0x546f07:goto L546f07;
case 0x546f0a:c.instructions+=3;goto B546f0a;
case 0x546f0b:c.instructions+=2;goto B546f0b;
case 0x546f0c:c.instructions+=1;goto B546f0c;
case 0x546f0d:goto L546f0d;
case 0x546f13:c.instructions+=2;goto B546f13;
case 0x546f14:c.instructions+=1;goto B546f14;
case 0x546f19:goto L546f19;
case 0x546f1f:c.instructions+=2;goto B546f1f;
case 0x546f20:c.instructions+=1;goto B546f20;
case 0x546f25:goto L546f25;
case 0x546f28:c.instructions+=1;goto B546f28;
case 0x546f29:goto L546f29;
case 0x546f2a:c.instructions+=1;goto B546f2a;
case 0x546f40:goto L546f40;
case 0x546f41:c.instructions+=6;goto B546f41;
case 0x546f43:c.instructions+=5;goto B546f43;
case 0x546f46:c.instructions+=4;goto B546f46;
case 0x546f47:c.instructions+=3;goto B546f47;
case 0x546f4a:c.instructions+=2;goto B546f4a;
case 0x546f4d:c.instructions+=1;goto B546f4d;
case 0x546f52:goto L546f52;
case 0x546f58:c.instructions+=5;goto B546f58;
case 0x546f59:c.instructions+=4;goto B546f59;
case 0x546f5a:c.instructions+=3;goto B546f5a;
case 0x546f5c:c.instructions+=2;goto B546f5c;
case 0x546f62:c.instructions+=1;goto B546f62;
case 0x546f67:goto L546f67;
case 0x546f69:c.instructions+=1;goto B546f69;
case 0x546f6f:goto L546f6f;
case 0x546f70:c.instructions+=3;goto B546f70;
case 0x546f75:c.instructions+=2;goto B546f75;
case 0x546f77:c.instructions+=1;goto B546f77;
case 0x546f7c:goto L546f7c;
case 0x546f7e:c.instructions+=3;goto B546f7e;
case 0x546f81:c.instructions+=2;goto B546f81;
case 0x546f83:c.instructions+=1;goto B546f83;
case 0x546f85:goto L546f85;
case 0x546f87:c.instructions+=2;goto B546f87;
case 0x546f8c:c.instructions+=1;goto B546f8c;
case 0x546f91:goto L546f91;
case 0x546f92:c.instructions+=3;goto B546f92;
case 0x546f97:c.instructions+=2;goto B546f97;
case 0x546f98:c.instructions+=1;goto B546f98;
case 0x546f9d:goto L546f9d;
case 0x546f9f:goto L546f9f;
case 0x546fa4:goto L546fa4;
case 0x546fa5:c.instructions+=3;goto B546fa5;
case 0x546faa:c.instructions+=2;goto B546faa;
case 0x546fab:c.instructions+=1;goto B546fab;
case 0x546fb0:goto L546fb0;
case 0x546fb5:c.instructions+=7;goto B546fb5;
case 0x546fb8:c.instructions+=6;goto B546fb8;
case 0x546fbb:c.instructions+=5;goto B546fbb;
case 0x546fbe:c.instructions+=4;goto B546fbe;
case 0x546fbf:c.instructions+=3;goto B546fbf;
case 0x546fc4:c.instructions+=2;goto B546fc4;
case 0x546fc5:c.instructions+=1;goto B546fc5;
case 0x546fc7:goto L546fc7;
case 0x546fcc:goto L546fcc;
case 0x546fcf:c.instructions+=4;goto B546fcf;
case 0x546fd2:c.instructions+=3;goto B546fd2;
case 0x546fd3:c.instructions+=2;goto B546fd3;
case 0x546fd5:c.instructions+=1;goto B546fd5;
case 0x546fda:goto L546fda;
case 0x546fdc:c.instructions+=3;goto B546fdc;
case 0x546fdd:c.instructions+=2;goto B546fdd;
case 0x546fe2:c.instructions+=1;goto B546fe2;
case 0x546fe7:goto L546fe7;
case 0x546fe9:c.instructions+=1;goto B546fe9;
case 0x546feb:goto L546feb;
case 0x546fec:c.instructions+=2;goto B546fec;
case 0x546ff1:c.instructions+=1;goto B546ff1;
case 0x546ff6:goto L546ff6;
case 0x546ff8:c.instructions+=1;goto B546ff8;
case 0x546ffa:goto L546ffa;
case 0x546ffd:c.instructions+=3;goto B546ffd;
case 0x546ffe:c.instructions+=2;goto B546ffe;
case 0x546fff:c.instructions+=1;goto B546fff;
default:missing_instruction(c.pc);}
B546003:L546003:{c.instructions+=4;NFSU2_TR(0x546003);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546005:{NFSU2_TR(0x546005);
__builtin_memmove((R+4),(R+12),4);
}
B546007:{NFSU2_TR(0x546007);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54600b:{NFSU2_TR(0x54600b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546010ull));
TAIL_STATIC(0x52eb90u,52e);
}
B546010:L546010:{c.instructions+=3;NFSU2_TR(0x546010);
__builtin_memmove((R+4),(R+24),4);
}
B546012:{NFSU2_TR(0x546012);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B546019:{NFSU2_TR(0x546019);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54601eull));
TAIL_STATIC(0x545510u,545);
}
B54601e:L54601e:{c.instructions+=5;NFSU2_TR(0x54601e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54601f:{NFSU2_TR(0x54601f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B546020:{NFSU2_TR(0x546020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B546021:{NFSU2_TR(0x546021);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B546022:{NFSU2_TR(0x546022);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B546030:L546030:{c.instructions+=6;NFSU2_TR(0x546030);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546031:{NFSU2_TR(0x546031);
__builtin_memmove((R+24),(R+4),4);
}
B546033:{NFSU2_TR(0x546033);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546034:{NFSU2_TR(0x546034);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B546037:{NFSU2_TR(0x546037);
__builtin_memmove((R+4),(R+28),4);
}
B546039:{NFSU2_TR(0x546039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54603eull));
TAIL_STATIC(0x5385c0u,538);
}
B54603e:L54603e:{c.instructions+=6;NFSU2_TR(0x54603e);
u8 U[4];
w4(U+0,u32(0x4e6ae825ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546043:{NFSU2_TR(0x546043);
u8 U[4];
w4(U+0,u32(0x2075eaf3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546048:{NFSU2_TR(0x546048);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54604a:{NFSU2_TR(0x54604a);
__builtin_memmove((R+4),(R+24),4);
}
B54604c:{NFSU2_TR(0x54604c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B546056:{NFSU2_TR(0x546056);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54605bull));
TAIL_STATIC(0x545920u,545);
}
B54605b:L54605b:{c.instructions+=5;NFSU2_TR(0x54605b);
u8 U[4];
w4(U+0,u32(0xb6d9a479ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546060:{NFSU2_TR(0x546060);
u8 U[4];
w4(U+0,u32(0x695654a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546065:{NFSU2_TR(0x546065);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546067:{NFSU2_TR(0x546067);
__builtin_memmove((R+4),(R+24),4);
}
B546069:{NFSU2_TR(0x546069);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54606eull));
TAIL_STATIC(0x545920u,545);
}
B54606e:L54606e:{c.instructions+=5;NFSU2_TR(0x54606e);
u8 U[4];
w4(U+0,u32(0xff8de430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546073:{NFSU2_TR(0x546073);
u8 U[4];
w4(U+0,u32(0x4c12bc51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546078:{NFSU2_TR(0x546078);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54607a:{NFSU2_TR(0x54607a);
__builtin_memmove((R+4),(R+24),4);
}
B54607c:{NFSU2_TR(0x54607c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546081ull));
TAIL_STATIC(0x545920u,545);
}
B546081:L546081:{c.instructions+=5;NFSU2_TR(0x546081);
u8 U[4];
w4(U+0,u32(0xd2982464ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546086:{NFSU2_TR(0x546086);
u8 U[4];
w4(U+0,u32(0xf7352706ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54608b:{NFSU2_TR(0x54608b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54608d:{NFSU2_TR(0x54608d);
__builtin_memmove((R+4),(R+24),4);
}
B54608f:{NFSU2_TR(0x54608f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546094ull));
TAIL_STATIC(0x545920u,545);
}
B546094:L546094:{c.instructions+=5;NFSU2_TR(0x546094);
u8 U[4];
w4(U+0,u32(0x6e37cdc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546099:{NFSU2_TR(0x546099);
u8 U[4];
w4(U+0,u32(0x6a2c32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54609e:{NFSU2_TR(0x54609e);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5460a0:{NFSU2_TR(0x5460a0);
__builtin_memmove((R+4),(R+24),4);
}
B5460a2:{NFSU2_TR(0x5460a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5460a7ull));
TAIL_STATIC(0x545920u,545);
}
B5460a7:L5460a7:{c.instructions+=5;NFSU2_TR(0x5460a7);
u8 U[4];
w4(U+0,u32(0xd24c5678ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5460ac:{NFSU2_TR(0x5460ac);
u8 U[4];
w4(U+0,u32(0x16b5ce67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5460b1:{NFSU2_TR(0x5460b1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5460b3:{NFSU2_TR(0x5460b3);
__builtin_memmove((R+4),(R+24),4);
}
B5460b5:{NFSU2_TR(0x5460b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5460baull));
TAIL_STATIC(0x545920u,545);
}
B5460ba:L5460ba:{c.instructions+=5;NFSU2_TR(0x5460ba);
u8 U[4];
w4(U+0,u32(0x687f411eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5460bf:{NFSU2_TR(0x5460bf);
u8 U[4];
w4(U+0,u32(0x43a00accull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5460c4:{NFSU2_TR(0x5460c4);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5460c6:{NFSU2_TR(0x5460c6);
__builtin_memmove((R+4),(R+24),4);
}
B5460c8:{NFSU2_TR(0x5460c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5460cdull));
TAIL_STATIC(0x545920u,545);
}
B5460cd:L5460cd:{c.instructions+=5;NFSU2_TR(0x5460cd);
u8 U[4];
w4(U+0,u32(0xc436f812ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5460d2:{NFSU2_TR(0x5460d2);
u8 U[4];
w4(U+0,u32(0x8a07001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5460d7:{NFSU2_TR(0x5460d7);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5460d9:{NFSU2_TR(0x5460d9);
__builtin_memmove((R+4),(R+24),4);
}
B5460db:{NFSU2_TR(0x5460db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5460e0ull));
TAIL_STATIC(0x545920u,545);
}
B5460e0:L5460e0:{c.instructions+=5;NFSU2_TR(0x5460e0);
u8 U[4];
w4(U+0,u32(0x4aa403deull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5460e5:{NFSU2_TR(0x5460e5);
u8 U[4];
w4(U+0,u32(0x4ef4919full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5460ea:{NFSU2_TR(0x5460ea);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5460ec:{NFSU2_TR(0x5460ec);
__builtin_memmove((R+4),(R+24),4);
}
B5460ee:{NFSU2_TR(0x5460ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5460f3ull));
TAIL_STATIC(0x545920u,545);
}
B5460f3:L5460f3:{c.instructions+=5;NFSU2_TR(0x5460f3);
u8 U[4];
w4(U+0,u32(0xb3ab0d65ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5460f8:{NFSU2_TR(0x5460f8);
u8 U[4];
w4(U+0,u32(0xf8148554ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5460fd:{NFSU2_TR(0x5460fd);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5460ff:{NFSU2_TR(0x5460ff);
__builtin_memmove((R+4),(R+24),4);
}
B546101:{NFSU2_TR(0x546101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546106ull));
TAIL_STATIC(0x545920u,545);
}
B546106:L546106:{c.instructions+=5;NFSU2_TR(0x546106);
u8 U[4];
w4(U+0,u32(0xa16b73dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54610b:{NFSU2_TR(0x54610b);
u8 U[4];
w4(U+0,u32(0x8ca7c26bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546110:{NFSU2_TR(0x546110);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546112:{NFSU2_TR(0x546112);
__builtin_memmove((R+4),(R+24),4);
}
B546114:{NFSU2_TR(0x546114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546119ull));
TAIL_STATIC(0x545920u,545);
}
B546119:L546119:{c.instructions+=5;NFSU2_TR(0x546119);
u8 U[4];
w4(U+0,u32(0x588a0a91ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54611e:{NFSU2_TR(0x54611e);
u8 U[4];
w4(U+0,u32(0xf2173020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546123:{NFSU2_TR(0x546123);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546125:{NFSU2_TR(0x546125);
__builtin_memmove((R+4),(R+24),4);
}
B546127:{NFSU2_TR(0x546127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54612cull));
TAIL_STATIC(0x545920u,545);
}
B54612c:L54612c:{c.instructions+=5;NFSU2_TR(0x54612c);
u8 U[4];
w4(U+0,u32(0x7f61feedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546131:{NFSU2_TR(0x546131);
u8 U[4];
w4(U+0,u32(0x36da827bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546136:{NFSU2_TR(0x546136);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546138:{NFSU2_TR(0x546138);
__builtin_memmove((R+4),(R+24),4);
}
B54613a:{NFSU2_TR(0x54613a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54613full));
TAIL_STATIC(0x545920u,545);
}
B54613f:L54613f:{c.instructions+=5;NFSU2_TR(0x54613f);
u8 U[4];
w4(U+0,u32(0xcee2f041ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546144:{NFSU2_TR(0x546144);
u8 U[4];
w4(U+0,u32(0x134c6830ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546149:{NFSU2_TR(0x546149);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54614b:{NFSU2_TR(0x54614b);
__builtin_memmove((R+4),(R+24),4);
}
B54614d:{NFSU2_TR(0x54614d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546152ull));
TAIL_STATIC(0x545920u,545);
}
B546152:L546152:{c.instructions+=5;NFSU2_TR(0x546152);
u8 U[4];
w4(U+0,u32(0x2909a9d3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546157:{NFSU2_TR(0x546157);
u8 U[4];
w4(U+0,u32(0x4eece261ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54615c:{NFSU2_TR(0x54615c);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54615e:{NFSU2_TR(0x54615e);
__builtin_memmove((R+4),(R+24),4);
}
B546160:{NFSU2_TR(0x546160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546165ull));
TAIL_STATIC(0x545920u,545);
}
B546165:L546165:{c.instructions+=5;NFSU2_TR(0x546165);
u8 U[4];
w4(U+0,u32(0xb6d214e7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54616a:{NFSU2_TR(0x54616a);
u8 U[4];
w4(U+0,u32(0x694ec516ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54616f:{NFSU2_TR(0x54616f);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546171:{NFSU2_TR(0x546171);
__builtin_memmove((R+4),(R+24),4);
}
B546173:{NFSU2_TR(0x546173);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546178ull));
TAIL_STATIC(0x545920u,545);
}
B546178:L546178:{c.instructions+=5;NFSU2_TR(0x546178);
u8 U[4];
w4(U+0,u32(0xd55ad357ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54617d:{NFSU2_TR(0x54617d);
u8 U[4];
w4(U+0,u32(0x4bede425ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546182:{NFSU2_TR(0x546182);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546184:{NFSU2_TR(0x546184);
__builtin_memmove((R+4),(R+24),4);
}
B546186:{NFSU2_TR(0x546186);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54618bull));
TAIL_STATIC(0x545920u,545);
}
B54618b:L54618b:{c.instructions+=5;NFSU2_TR(0x54618b);
u8 U[4];
w4(U+0,u32(0xd4c40cebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546190:{NFSU2_TR(0x546190);
u8 U[4];
w4(U+0,u32(0x192d84daull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546195:{NFSU2_TR(0x546195);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546197:{NFSU2_TR(0x546197);
__builtin_memmove((R+4),(R+24),4);
}
B546199:{NFSU2_TR(0x546199);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54619eull));
TAIL_STATIC(0x545920u,545);
}
B54619e:L54619e:{c.instructions+=5;NFSU2_TR(0x54619e);
u8 U[4];
w4(U+0,u32(0x3f6da129ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5461a3:{NFSU2_TR(0x5461a3);
u8 U[4];
w4(U+0,u32(0x31cfc477ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5461a8:{NFSU2_TR(0x5461a8);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5461aa:{NFSU2_TR(0x5461aa);
__builtin_memmove((R+4),(R+24),4);
}
B5461ac:{NFSU2_TR(0x5461ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5461b1ull));
TAIL_STATIC(0x545920u,545);
}
B5461b1:L5461b1:{c.instructions+=5;NFSU2_TR(0x5461b1);
u8 U[4];
w4(U+0,u32(0xb6db5bfdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5461b6:{NFSU2_TR(0x5461b6);
u8 U[4];
w4(U+0,u32(0x69580c2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5461bb:{NFSU2_TR(0x5461bb);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5461bd:{NFSU2_TR(0x5461bd);
__builtin_memmove((R+4),(R+24),4);
}
B5461bf:{NFSU2_TR(0x5461bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5461c4ull));
TAIL_STATIC(0x545920u,545);
}
B5461c4:L5461c4:{c.instructions+=5;NFSU2_TR(0x5461c4);
u8 U[4];
w4(U+0,u32(0x913ac36aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5461c9:{NFSU2_TR(0x5461c9);
u8 U[4];
w4(U+0,u32(0x694fec66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5461ce:{NFSU2_TR(0x5461ce);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5461d0:{NFSU2_TR(0x5461d0);
__builtin_memmove((R+4),(R+24),4);
}
B5461d2:{NFSU2_TR(0x5461d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5461d7ull));
TAIL_STATIC(0x545920u,545);
}
B5461d7:L5461d7:{c.instructions+=5;NFSU2_TR(0x5461d7);
u8 U[4];
w4(U+0,u32(0x64cf99a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5461dc:{NFSU2_TR(0x5461dc);
u8 U[4];
w4(U+0,u32(0xe22eb851ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5461e1:{NFSU2_TR(0x5461e1);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5461e3:{NFSU2_TR(0x5461e3);
__builtin_memmove((R+4),(R+24),4);
}
B5461e5:{NFSU2_TR(0x5461e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5461eaull));
TAIL_STATIC(0x545920u,545);
}
B5461ea:L5461ea:{c.instructions+=5;NFSU2_TR(0x5461ea);
u8 U[4];
w4(U+0,u32(0xb6cff09bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5461ef:{NFSU2_TR(0x5461ef);
u8 U[4];
w4(U+0,u32(0x694ca0caull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5461f4:{NFSU2_TR(0x5461f4);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5461f6:{NFSU2_TR(0x5461f6);
__builtin_memmove((R+4),(R+24),4);
}
B5461f8:{NFSU2_TR(0x5461f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5461fdull));
TAIL_STATIC(0x545920u,545);
}
B5461fd:L5461fd:{c.instructions+=5;NFSU2_TR(0x5461fd);
u8 U[4];
w4(U+0,u32(0xd6d115e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546202:{NFSU2_TR(0x546202);
u8 U[4];
w4(U+0,u32(0x1b3a8dd3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546207:{NFSU2_TR(0x546207);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546209:{NFSU2_TR(0x546209);
__builtin_memmove((R+4),(R+24),4);
}
B54620b:{NFSU2_TR(0x54620b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546210ull));
TAIL_STATIC(0x545920u,545);
}
B546210:L546210:{c.instructions+=5;NFSU2_TR(0x546210);
u8 U[4];
w4(U+0,u32(0x6fd3b71cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546215:{NFSU2_TR(0x546215);
u8 U[4];
w4(U+0,u32(0x960dcabull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54621a:{NFSU2_TR(0x54621a);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54621c:{NFSU2_TR(0x54621c);
__builtin_memmove((R+4),(R+24),4);
}
B54621e:{NFSU2_TR(0x54621e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546223ull));
TAIL_STATIC(0x545920u,545);
}
B546223:L546223:{c.instructions+=5;NFSU2_TR(0x546223);
u8 U[4];
w4(U+0,u32(0x8e076becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546228:{NFSU2_TR(0x546228);
u8 U[4];
w4(U+0,u32(0xdd7673aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54622d:{NFSU2_TR(0x54622d);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54622f:{NFSU2_TR(0x54622f);
__builtin_memmove((R+4),(R+24),4);
}
B546231:{NFSU2_TR(0x546231);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546236ull));
TAIL_STATIC(0x545920u,545);
}
B546236:L546236:{c.instructions+=5;NFSU2_TR(0x546236);
u8 U[4];
w4(U+0,u32(0x4a0c932dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54623b:{NFSU2_TR(0x54623b);
u8 U[4];
w4(U+0,u32(0x1ba508fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546240:{NFSU2_TR(0x546240);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546242:{NFSU2_TR(0x546242);
__builtin_memmove((R+4),(R+24),4);
}
B546244:{NFSU2_TR(0x546244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546249ull));
TAIL_STATIC(0x545920u,545);
}
B546249:L546249:{c.instructions+=5;NFSU2_TR(0x546249);
u8 U[4];
w4(U+0,u32(0x34e6adbaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54624e:{NFSU2_TR(0x54624e);
u8 U[4];
w4(U+0,u32(0x93ec1ce9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546253:{NFSU2_TR(0x546253);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546255:{NFSU2_TR(0x546255);
__builtin_memmove((R+4),(R+24),4);
}
B546257:{NFSU2_TR(0x546257);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54625cull));
TAIL_STATIC(0x545920u,545);
}
B54625c:L54625c:{c.instructions+=3;NFSU2_TR(0x54625c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54625f:{NFSU2_TR(0x54625f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546260:{NFSU2_TR(0x546260);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546265ull));
TAIL_STATIC(0x505450u,505);
}
B546265:L546265:{c.instructions+=2;NFSU2_TR(0x546265);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546266:{NFSU2_TR(0x546266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54626bull));
TAIL_STATIC(0x50b840u,50b);
}
B54626b:L54626b:{c.instructions+=3;NFSU2_TR(0x54626b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54626e:{NFSU2_TR(0x54626e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B546270:{NFSU2_TR(0x546270);
if(r1(R+518)){{goto L5462c9;}}
}
B546272:L546272:{c.instructions+=2;NFSU2_TR(0x546272);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B546276:{NFSU2_TR(0x546276);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5462c9;}}
}
B546278:L546278:{c.instructions+=5;NFSU2_TR(0x546278);
__builtin_memmove((R+4),gp(0x8389a8),4);
}
B54627e:{NFSU2_TR(0x54627e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54627f:{NFSU2_TR(0x54627f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546280:{NFSU2_TR(0x546280);
w4(R+4,u32(0x838980ull));
}
B546285:{NFSU2_TR(0x546285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54628aull));
TAIL_STATIC(0x50efd0u,50e);
}
B54628a:L54628a:{c.instructions+=3;NFSU2_TR(0x54628a);
__builtin_memmove((R+12),(R+0),4);
}
B54628c:{NFSU2_TR(0x54628c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54628e:{NFSU2_TR(0x54628e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5462a7;}}
}
B546290:L546290:{c.instructions+=4;NFSU2_TR(0x546290);
__builtin_memmove((R+8),gp(0x8389a8),4);
}
B546296:{NFSU2_TR(0x546296);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546297:{NFSU2_TR(0x546297);
w4(R+4,u32(0x838980ull));
}
B54629c:{NFSU2_TR(0x54629c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5462a1ull));
TAIL_STATIC(0x521850u,521);
}
B5462a1:L5462a1:{c.instructions+=3;NFSU2_TR(0x5462a1);
__builtin_memmove((R+12),(R+0),4);
}
B5462a3:{NFSU2_TR(0x5462a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5462a5:{NFSU2_TR(0x5462a5);
if(r1(R+518)){{goto L5462c8;}}
}
B5462a7:L5462a7:{c.instructions+=3;NFSU2_TR(0x5462a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5462aa:{NFSU2_TR(0x5462aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5462ab:{NFSU2_TR(0x5462ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5462b0ull));
TAIL_STATIC(0x505450u,505);
}
B5462b0:L5462b0:{c.instructions+=2;NFSU2_TR(0x5462b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5462b1:{NFSU2_TR(0x5462b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5462b6ull));
TAIL_STATIC(0x50b840u,50b);
}
B5462b6:L5462b6:{c.instructions+=3;NFSU2_TR(0x5462b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5462b9:{NFSU2_TR(0x5462b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5462bb:{NFSU2_TR(0x5462bb);
if(r1(R+518)){{goto L5462c8;}}
}
B5462bd:L5462bd:{c.instructions+=4;NFSU2_TR(0x5462bd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5462bf:{NFSU2_TR(0x5462bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5462c2:{NFSU2_TR(0x5462c2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B5462c5:{NFSU2_TR(0x5462c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5462c8:L5462c8:{c.instructions+=1;NFSU2_TR(0x5462c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5462c9:L5462c9:{c.instructions+=3;NFSU2_TR(0x5462c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5462cc:{NFSU2_TR(0x5462cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5462cd:{NFSU2_TR(0x5462cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5462d2ull));
TAIL_STATIC(0x505450u,505);
}
B5462d2:L5462d2:{c.instructions+=2;NFSU2_TR(0x5462d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5462d3:{NFSU2_TR(0x5462d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5462d8ull));
TAIL_STATIC(0x50b840u,50b);
}
B5462d8:L5462d8:{c.instructions+=3;NFSU2_TR(0x5462d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5462db:{NFSU2_TR(0x5462db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5462dd:{NFSU2_TR(0x5462dd);
if(r1(R+518)){{goto L5462e4;}}
}
B5462df:L5462df:{c.instructions+=2;NFSU2_TR(0x5462df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5462e2:{NFSU2_TR(0x5462e2);
{goto L5462e6;}
}
B5462e4:L5462e4:{c.instructions+=1;NFSU2_TR(0x5462e4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5462e6:L5462e6:{c.instructions+=3;NFSU2_TR(0x5462e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5462e7:{NFSU2_TR(0x5462e7);
__builtin_memmove((R+4),(R+28),4);
}
B5462e9:{NFSU2_TR(0x5462e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5462eeull));
TAIL_STATIC(0x51f7a0u,51f);
}
B5462ee:L5462ee:{c.instructions+=2;NFSU2_TR(0x5462ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5462f0:{NFSU2_TR(0x5462f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L546300;}}
}
B5462f2:L5462f2:{c.instructions+=3;NFSU2_TR(0x5462f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5462f5:{NFSU2_TR(0x5462f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5462f7:{NFSU2_TR(0x5462f7);
if(r1(R+518)){{goto L5462fe;}}
}
B5462f9:L5462f9:{c.instructions+=2;NFSU2_TR(0x5462f9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5462fc:{NFSU2_TR(0x5462fc);
{goto L546300;}
}
B5462fe:L5462fe:{c.instructions+=1;NFSU2_TR(0x5462fe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B546300:L546300:{c.instructions+=3;NFSU2_TR(0x546300);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546301:{NFSU2_TR(0x546301);
__builtin_memmove((R+4),(R+28),4);
}
B546303:{NFSU2_TR(0x546303);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546308ull));
TAIL_STATIC(0x5386a0u,538);
}
B546308:L546308:{c.instructions+=3;NFSU2_TR(0x546308);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54630a:{NFSU2_TR(0x54630a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54630d:{NFSU2_TR(0x54630d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546312ull));
TAIL_STATIC(0x43be80u,43b);
}
B546312:L546312:{c.instructions+=6;NFSU2_TR(0x546312);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B546313:{NFSU2_TR(0x546313);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54631a:{NFSU2_TR(0x54631a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B546321:{NFSU2_TR(0x546321);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x6109e4b5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B546328:{NFSU2_TR(0x546328);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B546329:{NFSU2_TR(0x546329);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B546330:L546330:{c.instructions+=3;NFSU2_TR(0x546330);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546331:{NFSU2_TR(0x546331);
__builtin_memmove((R+24),(R+4),4);
}
B546333:{NFSU2_TR(0x546333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546338ull));
{goto L546350;}
}
B546338:L546338:{c.instructions+=2;NFSU2_TR(0x546338);
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
B54633d:{NFSU2_TR(0x54633d);
if(r1(R+518)){{goto L546348;}}
}
B54633f:L54633f:{c.instructions+=2;NFSU2_TR(0x54633f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546340:{NFSU2_TR(0x546340);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546345ull));
TAIL_STATIC(0x575630u,575);
}
B546345:L546345:{c.instructions+=1;NFSU2_TR(0x546345);
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
B546348:L546348:{c.instructions+=3;NFSU2_TR(0x546348);
__builtin_memmove((R+0),(R+24),4);
}
B54634a:{NFSU2_TR(0x54634a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54634b:{NFSU2_TR(0x54634b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B546350:L546350:{c.instructions+=15;NFSU2_TR(0x546350);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546352:{NFSU2_TR(0x546352);
u8 U[4];
w4(U+0,u32(0x7772b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546357:{NFSU2_TR(0x546357);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54635d:{NFSU2_TR(0x54635d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54635e:{NFSU2_TR(0x54635e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B546365:{NFSU2_TR(0x546365);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546366:{NFSU2_TR(0x546366);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546367:{NFSU2_TR(0x546367);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546368:{NFSU2_TR(0x546368);
__builtin_memmove((R+28),(R+4),4);
}
B54636a:{NFSU2_TR(0x54636a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54636e:{NFSU2_TR(0x54636e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B546371:{NFSU2_TR(0x546371);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B546374:{NFSU2_TR(0x546374);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B546376:{NFSU2_TR(0x546376);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54637e:{NFSU2_TR(0x54637e);
if(r1(R+518)){{goto L546399;}}
}
B546380:L546380:{c.instructions+=6;NFSU2_TR(0x546380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B546382:{NFSU2_TR(0x546382);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B546385:{NFSU2_TR(0x546385);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B546387:{NFSU2_TR(0x546387);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546388:{NFSU2_TR(0x546388);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54638b:{NFSU2_TR(0x54638b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546390ull));
TAIL_STATIC(0x575630u,575);
}
B546390:L546390:{c.instructions+=4;NFSU2_TR(0x546390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B546392:{NFSU2_TR(0x546392);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B546395:{NFSU2_TR(0x546395);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B546397:{NFSU2_TR(0x546397);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x546380u);}goto L546380;}}
}
B546399:L546399:{c.instructions+=7;NFSU2_TR(0x546399);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54639d:{NFSU2_TR(0x54639d);
u8 U[4];
w4(U+0,u32(0x79afdcull));
s4(u32(r4(R+28)),r4(U+0));
}
B5463a3:{NFSU2_TR(0x5463a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5463a4:{NFSU2_TR(0x5463a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5463a5:{NFSU2_TR(0x5463a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5463ac:{NFSU2_TR(0x5463ac);
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
B5463af:{NFSU2_TR(0x5463af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5463b0:L5463b0:{c.instructions+=12;NFSU2_TR(0x5463b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5463b1:{NFSU2_TR(0x5463b1);
__builtin_memmove((R+20),(R+16),4);
}
B5463b3:{NFSU2_TR(0x5463b3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5463b5:{NFSU2_TR(0x5463b5);
u8 U[4];
w4(U+0,u32(0x777a38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5463ba:{NFSU2_TR(0x5463ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5463c0:{NFSU2_TR(0x5463c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5463c1:{NFSU2_TR(0x5463c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5463c8:{NFSU2_TR(0x5463c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5463cb:{NFSU2_TR(0x5463cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5463cc:{NFSU2_TR(0x5463cc);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5463ce:{NFSU2_TR(0x5463ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5463d1:{NFSU2_TR(0x5463d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5463d6ull));
TAIL_STATIC(0x575620u,575);
}
B5463d6:L5463d6:{c.instructions+=4;NFSU2_TR(0x5463d6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5463d8:{NFSU2_TR(0x5463d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5463db:{NFSU2_TR(0x5463db);
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
B5463dd:{NFSU2_TR(0x5463dd);
if(r1(R+518)){{goto L5463f7;}}
}
B5463df:L5463df:{c.instructions+=8;NFSU2_TR(0x5463df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5463e2:{NFSU2_TR(0x5463e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5463e5:{NFSU2_TR(0x5463e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5463e6:{NFSU2_TR(0x5463e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5463e9:{NFSU2_TR(0x5463e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5463ea:{NFSU2_TR(0x5463ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5463eb:{NFSU2_TR(0x5463eb);
__builtin_memmove((R+4),(R+0),4);
}
B5463ed:{NFSU2_TR(0x5463ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5463f2ull));
TAIL_STATIC(0x53a6c0u,53a);
}
B5463f2:L5463f2:{c.instructions+=2;NFSU2_TR(0x5463f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5463f5:{NFSU2_TR(0x5463f5);
{goto L5463fa;}
}
B5463f7:L5463f7:{c.instructions+=1;NFSU2_TR(0x5463f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5463fa:L5463fa:{c.instructions+=9;NFSU2_TR(0x5463fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5463fb:{NFSU2_TR(0x5463fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5463fe:{NFSU2_TR(0x5463fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B546401:{NFSU2_TR(0x546401);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546402:{NFSU2_TR(0x546402);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B546405:{NFSU2_TR(0x546405);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B546408:{NFSU2_TR(0x546408);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54640a:{NFSU2_TR(0x54640a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54640d:{NFSU2_TR(0x54640d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546412ull));
TAIL_STATIC(0x60fee0u,60f);
}
B546412:L546412:{c.instructions+=5;NFSU2_TR(0x546412);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B546418:{NFSU2_TR(0x546418);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54641a:{NFSU2_TR(0x54641a);
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
B54641d:{NFSU2_TR(0x54641d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B546420:{NFSU2_TR(0x546420);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546423ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B546423:L546423:{c.instructions+=7;NFSU2_TR(0x546423);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546425:{NFSU2_TR(0x546425);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546426:{NFSU2_TR(0x546426);
__builtin_memmove((R+28),(R+0),4);
}
B546428:{NFSU2_TR(0x546428);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54642a:{NFSU2_TR(0x54642a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54642b:{NFSU2_TR(0x54642b);
w4(R+4,u32(0x8a2b68ull));
}
B546430:{NFSU2_TR(0x546430);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546435ull));
TAIL_STATIC(0x61ba30u,61b);
}
B546435:L546435:{c.instructions+=3;NFSU2_TR(0x546435);
__builtin_memmove((R+24),(R+0),4);
}
B546437:{NFSU2_TR(0x546437);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B546439:{NFSU2_TR(0x546439);
if(r1(R+518)){{goto L5464a0;}}
}
B54643b:L54643b:{c.instructions+=1;NFSU2_TR(0x54643b);
{goto L546440;}
}
B546440:L546440:{c.instructions+=3;NFSU2_TR(0x546440);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B546444:{NFSU2_TR(0x546444);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B546447:{NFSU2_TR(0x546447);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L546488;}}
}
B546449:L546449:{c.instructions+=5;NFSU2_TR(0x546449);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54644c:{NFSU2_TR(0x54644c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54644d:{NFSU2_TR(0x54644d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54644e:{NFSU2_TR(0x54644e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54644f:{NFSU2_TR(0x54644f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546454ull));
TAIL_STATIC(0x539b70u,539);
}
B546454:L546454:{c.instructions+=3;NFSU2_TR(0x546454);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B546457:{NFSU2_TR(0x546457);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B546459:{NFSU2_TR(0x546459);
if(r1(R+518)){{goto L546488;}}
}
B54645b:L54645b:{c.instructions+=3;NFSU2_TR(0x54645b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54645d:{NFSU2_TR(0x54645d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B54645e:{NFSU2_TR(0x54645e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546463ull));
TAIL_STATIC(0x575620u,575);
}
B546463:L546463:{c.instructions+=3;NFSU2_TR(0x546463);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B546466:{NFSU2_TR(0x546466);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B546468:{NFSU2_TR(0x546468);
if(r1(R+518)){{goto L546476;}}
}
B54646a:L54646a:{c.instructions+=3;NFSU2_TR(0x54646a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54646d:{NFSU2_TR(0x54646d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B546474:{NFSU2_TR(0x546474);
{goto L546478;}
}
B546476:L546476:{c.instructions+=1;NFSU2_TR(0x546476);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B546478:L546478:{c.instructions+=6;NFSU2_TR(0x546478);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54647b:{NFSU2_TR(0x54647b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54647d:{NFSU2_TR(0x54647d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B546480:{NFSU2_TR(0x546480);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B546483:{NFSU2_TR(0x546483);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B546486:{NFSU2_TR(0x546486);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B546488:L546488:{c.instructions+=7;NFSU2_TR(0x546488);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54648a:{NFSU2_TR(0x54648a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54648c:{NFSU2_TR(0x54648c);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54648e:{NFSU2_TR(0x54648e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54648f:{NFSU2_TR(0x54648f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546490:{NFSU2_TR(0x546490);
w4(R+4,u32(0x8a2b68ull));
}
B546495:{NFSU2_TR(0x546495);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54649aull));
TAIL_STATIC(0x61ba50u,61b);
}
B54649a:L54649a:{c.instructions+=3;NFSU2_TR(0x54649a);
__builtin_memmove((R+24),(R+0),4);
}
B54649c:{NFSU2_TR(0x54649c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54649e:{NFSU2_TR(0x54649e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x546440u);}goto L546440;}}
}
B5464a0:L5464a0:{c.instructions+=5;NFSU2_TR(0x5464a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5464a3:{NFSU2_TR(0x5464a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3b83203ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5464aa:{NFSU2_TR(0x5464aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5464ab:{NFSU2_TR(0x5464ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5464ac:{NFSU2_TR(0x5464ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5464b4;}}
}
B5464ae:L5464ae:{c.instructions+=2;NFSU2_TR(0x5464ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5464b2:{NFSU2_TR(0x5464b2);
{goto L5464bc;}
}
B5464b4:L5464b4:{c.instructions+=3;NFSU2_TR(0x5464b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5464b6:{NFSU2_TR(0x5464b6);
__builtin_memmove((R+4),(R+518),1);
}
B5464b9:{NFSU2_TR(0x5464b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5464bc:L5464bc:{c.instructions+=5;NFSU2_TR(0x5464bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5464bf:{NFSU2_TR(0x5464bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5464c2:{NFSU2_TR(0x5464c2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x4cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x4cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5464c5:{NFSU2_TR(0x5464c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5464c6:{NFSU2_TR(0x5464c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5464c9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5464c9:L5464c9:{c.instructions+=3;NFSU2_TR(0x5464c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5464cb:{NFSU2_TR(0x5464cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5464cc:{NFSU2_TR(0x5464cc);
if(r1(R+518)){{goto L5464e0;}}
}
B5464ce:L5464ce:{c.instructions+=3;NFSU2_TR(0x5464ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5464d1:{NFSU2_TR(0x5464d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5464d4:{NFSU2_TR(0x5464d4);
if(r1(R+518)){{goto L5464e0;}}
}
B5464d6:L5464d6:{c.instructions+=2;NFSU2_TR(0x5464d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5464d9:{NFSU2_TR(0x5464d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5464e0:L5464e0:{c.instructions+=5;NFSU2_TR(0x5464e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5464e3:{NFSU2_TR(0x5464e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5464e6:{NFSU2_TR(0x5464e6);
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
B5464e8:{NFSU2_TR(0x5464e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5464ef:{NFSU2_TR(0x5464ef);
if(r1(R+518)){{goto L546510;}}
}
B5464f1:L5464f1:{c.instructions+=7;NFSU2_TR(0x5464f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5464f3:{NFSU2_TR(0x5464f3);
__builtin_memmove((R+8),(R+0),4);
}
B5464f5:{NFSU2_TR(0x5464f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5464f8:{NFSU2_TR(0x5464f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5464fa:{NFSU2_TR(0x5464fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5464fb:{NFSU2_TR(0x5464fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5464fe:{NFSU2_TR(0x5464fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546503ull));
TAIL_STATIC(0x575630u,575);
}
B546503:L546503:{c.instructions+=5;NFSU2_TR(0x546503);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B546506:{NFSU2_TR(0x546506);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B546509:{NFSU2_TR(0x546509);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54650c:{NFSU2_TR(0x54650c);
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
B54650e:{NFSU2_TR(0x54650e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5464f1u);}goto L5464f1;}}
}
B546510:L546510:{c.instructions+=5;NFSU2_TR(0x546510);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B546513:{NFSU2_TR(0x546513);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54651a:{NFSU2_TR(0x54651a);
__builtin_memmove((R+16),(R+20),4);
}
B54651c:{NFSU2_TR(0x54651c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54651d:{NFSU2_TR(0x54651d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B546520:L546520:{c.instructions+=8;NFSU2_TR(0x546520);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546521:{NFSU2_TR(0x546521);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546522:{NFSU2_TR(0x546522);
__builtin_memmove((R+12),(R+4),4);
}
B546524:{NFSU2_TR(0x546524);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B54652a:{NFSU2_TR(0x54652a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54652c:{NFSU2_TR(0x54652c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54652d:{NFSU2_TR(0x54652d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54652e:{NFSU2_TR(0x54652e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546531ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B546531:L546531:{c.instructions+=3;NFSU2_TR(0x546531);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B546537:{NFSU2_TR(0x546537);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8a1ccc))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54653d:{NFSU2_TR(0x54653d);
if(r1(R+518)){{goto L54661a;}}
}
B546543:L546543:{c.instructions+=5;NFSU2_TR(0x546543);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B546549:{NFSU2_TR(0x546549);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54654b:{NFSU2_TR(0x54654b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B54654e:{NFSU2_TR(0x54654e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B546550:{NFSU2_TR(0x546550);
if(r1(R+518)){{goto L54661a;}}
}
B546556:L546556:{c.instructions+=5;NFSU2_TR(0x546556);
u8 U[4];
w4(U+0,u32(0xd2e889daull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54655b:{NFSU2_TR(0x54655b);
u8 U[4];
w4(U+0,u32(0x20ef339aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546560:{NFSU2_TR(0x546560);
u8 U[4];
w4(U+0,u32(0x148bbaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546565:{NFSU2_TR(0x546565);
__builtin_memmove((R+4),(R+12),4);
}
B546567:{NFSU2_TR(0x546567);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54656cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B54656c:L54656c:{c.instructions+=5;NFSU2_TR(0x54656c);
u8 U[4];
w4(U+0,u32(0xd2e9a3e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546571:{NFSU2_TR(0x546571);
u8 U[4];
w4(U+0,u32(0x20f04da4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546576:{NFSU2_TR(0x546576);
u8 U[4];
w4(U+0,u32(0x15a5c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54657b:{NFSU2_TR(0x54657b);
__builtin_memmove((R+4),(R+12),4);
}
B54657d:{NFSU2_TR(0x54657d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546582ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B546582:L546582:{c.instructions+=5;NFSU2_TR(0x546582);
u8 U[4];
w4(U+0,u32(0x9d50e640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546587:{NFSU2_TR(0x546587);
u8 U[4];
w4(U+0,u32(0xbe399df3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54658c:{NFSU2_TR(0x54658c);
u8 U[4];
w4(U+0,u32(0xa26ad820ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546591:{NFSU2_TR(0x546591);
__builtin_memmove((R+4),(R+12),4);
}
B546593:{NFSU2_TR(0x546593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546598ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B546598:L546598:{c.instructions+=5;NFSU2_TR(0x546598);
u8 U[4];
w4(U+0,u32(0xbe87ba52ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54659d:{NFSU2_TR(0x54659d);
u8 U[4];
w4(U+0,u32(0x9f4d4412ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5465a2:{NFSU2_TR(0x5465a2);
u8 U[4];
w4(U+0,u32(0xc3a1ac32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5465a7:{NFSU2_TR(0x5465a7);
__builtin_memmove((R+4),(R+12),4);
}
B5465a9:{NFSU2_TR(0x5465a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5465aeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B5465ae:L5465ae:{c.instructions+=5;NFSU2_TR(0x5465ae);
u8 U[4];
w4(U+0,u32(0x3e867905ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5465b3:{NFSU2_TR(0x5465b3);
u8 U[4];
w4(U+0,u32(0x28de92c5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5465b8:{NFSU2_TR(0x5465b8);
u8 U[4];
w4(U+0,u32(0x66ba72e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5465bd:{NFSU2_TR(0x5465bd);
__builtin_memmove((R+4),(R+12),4);
}
B5465bf:{NFSU2_TR(0x5465bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5465c4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B5465c4:L5465c4:{c.instructions+=5;NFSU2_TR(0x5465c4);
u8 U[4];
w4(U+0,u32(0xfb7dfc68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5465c9:{NFSU2_TR(0x5465c9);
u8 U[4];
w4(U+0,u32(0x6c2fa9dbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5465ce:{NFSU2_TR(0x5465ce);
u8 U[4];
w4(U+0,u32(0x648ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5465d3:{NFSU2_TR(0x5465d3);
__builtin_memmove((R+4),(R+12),4);
}
B5465d5:{NFSU2_TR(0x5465d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5465daull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B5465da:L5465da:{c.instructions+=5;NFSU2_TR(0x5465da);
u8 U[4];
w4(U+0,u32(0xd2eddffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5465df:{NFSU2_TR(0x5465df);
u8 U[4];
w4(U+0,u32(0x3f85c14dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5465e4:{NFSU2_TR(0x5465e4);
u8 U[4];
w4(U+0,u32(0x19e1dbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5465e9:{NFSU2_TR(0x5465e9);
__builtin_memmove((R+4),(R+12),4);
}
B5465eb:{NFSU2_TR(0x5465eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5465f0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B5465f0:L5465f0:{c.instructions+=5;NFSU2_TR(0x5465f0);
u8 U[4];
w4(U+0,u32(0x6322f230ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5465f5:{NFSU2_TR(0x5465f5);
u8 U[4];
w4(U+0,u32(0x8b71ebf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5465fa:{NFSU2_TR(0x5465fa);
u8 U[4];
w4(U+0,u32(0x29e75d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5465ff:{NFSU2_TR(0x5465ff);
__builtin_memmove((R+4),(R+12),4);
}
B546601:{NFSU2_TR(0x546601);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546606ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B546606:L546606:{c.instructions+=4;NFSU2_TR(0x546606);
u8 U[4];
w4(U+0,u32(0xc49c11feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54660b:{NFSU2_TR(0x54660b);
u8 U[4];
w4(U+0,u32(0xf6ca43beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546610:{NFSU2_TR(0x546610);
u8 U[4];
w4(U+0,u32(0xbf3608c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546615:{NFSU2_TR(0x546615);
{goto L54675d;}
}
B54661a:L54661a:{c.instructions+=5;NFSU2_TR(0x54661a);
u8 U[4];
w4(U+0,u32(0xcf90ef1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54661f:{NFSU2_TR(0x54661f);
u8 U[4];
w4(U+0,u32(0xf75128b1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546624:{NFSU2_TR(0x546624);
u8 U[4];
w4(U+0,u32(0x352d08d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546629:{NFSU2_TR(0x546629);
__builtin_memmove((R+4),(R+12),4);
}
B54662b:{NFSU2_TR(0x54662b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546630ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B546630:L546630:{c.instructions+=5;NFSU2_TR(0x546630);
u8 U[4];
w4(U+0,u32(0xd2e7035eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546635:{NFSU2_TR(0x546635);
u8 U[4];
w4(U+0,u32(0x20edad1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54663a:{NFSU2_TR(0x54663a);
u8 U[4];
w4(U+0,u32(0x13053eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54663f:{NFSU2_TR(0x54663f);
__builtin_memmove((R+4),(R+12),4);
}
B546641:{NFSU2_TR(0x546641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546646ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B546646:L546646:{c.instructions+=5;NFSU2_TR(0x546646);
u8 U[4];
w4(U+0,u32(0x6b3d4f56ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54664b:{NFSU2_TR(0x54664b);
u8 U[4];
w4(U+0,u32(0xf224ab29ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546650:{NFSU2_TR(0x546650);
u8 U[4];
w4(U+0,u32(0x9536ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546655:{NFSU2_TR(0x546655);
__builtin_memmove((R+4),(R+12),4);
}
B546657:{NFSU2_TR(0x546657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54665cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B54665c:L54665c:{c.instructions+=5;NFSU2_TR(0x54665c);
u8 U[4];
w4(U+0,u32(0x300b420bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546661:{NFSU2_TR(0x546661);
u8 U[4];
w4(U+0,u32(0xe38de9eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546666:{NFSU2_TR(0x546666);
u8 U[4];
w4(U+0,u32(0x2b77febull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54666b:{NFSU2_TR(0x54666b);
__builtin_memmove((R+4),(R+12),4);
}
B54666d:{NFSU2_TR(0x54666d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546672ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B546672:L546672:{c.instructions+=5;NFSU2_TR(0x546672);
u8 U[4];
w4(U+0,u32(0x9d50e640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546677:{NFSU2_TR(0x546677);
u8 U[4];
w4(U+0,u32(0xbe399df3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54667c:{NFSU2_TR(0x54667c);
u8 U[4];
w4(U+0,u32(0xa26ad820ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546681:{NFSU2_TR(0x546681);
__builtin_memmove((R+4),(R+12),4);
}
B546683:{NFSU2_TR(0x546683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546688ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B546688:L546688:{c.instructions+=5;NFSU2_TR(0x546688);
u8 U[4];
w4(U+0,u32(0x30786eb7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54668d:{NFSU2_TR(0x54668d);
u8 U[4];
w4(U+0,u32(0xea60b4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546692:{NFSU2_TR(0x546692);
u8 U[4];
w4(U+0,u32(0x324ac97ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546697:{NFSU2_TR(0x546697);
__builtin_memmove((R+4),(R+12),4);
}
B546699:{NFSU2_TR(0x546699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54669eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B54669e:L54669e:{c.instructions+=5;NFSU2_TR(0x54669e);
u8 U[4];
w4(U+0,u32(0x412bd420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5466a3:{NFSU2_TR(0x5466a3);
u8 U[4];
w4(U+0,u32(0xe50d0313ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5466a8:{NFSU2_TR(0x5466a8);
u8 U[4];
w4(U+0,u32(0x695fce00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5466ad:{NFSU2_TR(0x5466ad);
__builtin_memmove((R+4),(R+12),4);
}
B5466af:{NFSU2_TR(0x5466af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5466b4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B5466b4:L5466b4:{c.instructions+=5;NFSU2_TR(0x5466b4);
u8 U[4];
w4(U+0,u32(0xa08a29b3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5466b9:{NFSU2_TR(0x5466b9);
u8 U[4];
w4(U+0,u32(0x9a00eb73ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5466be:{NFSU2_TR(0x5466be);
u8 U[4];
w4(U+0,u32(0x48e25793ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5466c3:{NFSU2_TR(0x5466c3);
__builtin_memmove((R+4),(R+12),4);
}
B5466c5:{NFSU2_TR(0x5466c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5466caull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B5466ca:L5466ca:{c.instructions+=5;NFSU2_TR(0x5466ca);
u8 U[4];
w4(U+0,u32(0xd2ed7917ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5466cf:{NFSU2_TR(0x5466cf);
u8 U[4];
w4(U+0,u32(0x36c04f4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5466d4:{NFSU2_TR(0x5466d4);
u8 U[4];
w4(U+0,u32(0x197af7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5466d9:{NFSU2_TR(0x5466d9);
__builtin_memmove((R+4),(R+12),4);
}
B5466db:{NFSU2_TR(0x5466db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5466e0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B5466e0:L5466e0:{c.instructions+=5;NFSU2_TR(0x5466e0);
u8 U[4];
w4(U+0,u32(0xfb7dfc68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5466e5:{NFSU2_TR(0x5466e5);
u8 U[4];
w4(U+0,u32(0x6c2fa9dbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5466ea:{NFSU2_TR(0x5466ea);
u8 U[4];
w4(U+0,u32(0x648ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5466ef:{NFSU2_TR(0x5466ef);
__builtin_memmove((R+4),(R+12),4);
}
B5466f1:{NFSU2_TR(0x5466f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5466f6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B5466f6:L5466f6:{c.instructions+=5;NFSU2_TR(0x5466f6);
u8 U[4];
w4(U+0,u32(0xd2eddffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5466fb:{NFSU2_TR(0x5466fb);
u8 U[4];
w4(U+0,u32(0x3f85c14dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546700:{NFSU2_TR(0x546700);
u8 U[4];
w4(U+0,u32(0x19e1dbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546705:{NFSU2_TR(0x546705);
__builtin_memmove((R+4),(R+12),4);
}
B546707:{NFSU2_TR(0x546707);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54670cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B54670c:L54670c:{c.instructions+=5;NFSU2_TR(0x54670c);
u8 U[4];
w4(U+0,u32(0x29f66022ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546711:{NFSU2_TR(0x546711);
u8 U[4];
w4(U+0,u32(0x27ebd095ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546716:{NFSU2_TR(0x546716);
u8 U[4];
w4(U+0,u32(0xdd544a02ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54671b:{NFSU2_TR(0x54671b);
__builtin_memmove((R+4),(R+12),4);
}
B54671d:{NFSU2_TR(0x54671d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546722ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B546722:L546722:{c.instructions+=5;NFSU2_TR(0x546722);
u8 U[4];
w4(U+0,u32(0xd2f037d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546727:{NFSU2_TR(0x546727);
u8 U[4];
w4(U+0,u32(0x20f6e195ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54672c:{NFSU2_TR(0x54672c);
u8 U[4];
w4(U+0,u32(0x1c39b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546731:{NFSU2_TR(0x546731);
__builtin_memmove((R+4),(R+12),4);
}
B546733:{NFSU2_TR(0x546733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546738ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B546738:L546738:{c.instructions+=5;NFSU2_TR(0x546738);
u8 U[4];
w4(U+0,u32(0xd2f2685bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54673d:{NFSU2_TR(0x54673d);
u8 U[4];
w4(U+0,u32(0x20f9121bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546742:{NFSU2_TR(0x546742);
u8 U[4];
w4(U+0,u32(0x1e6a3bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546747:{NFSU2_TR(0x546747);
__builtin_memmove((R+4),(R+12),4);
}
B546749:{NFSU2_TR(0x546749);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54674eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B54674e:L54674e:{c.instructions+=3;NFSU2_TR(0x54674e);
u8 U[4];
w4(U+0,u32(0xd2f2f582ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546753:{NFSU2_TR(0x546753);
u8 U[4];
w4(U+0,u32(0x20f99f42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546758:{NFSU2_TR(0x546758);
u8 U[4];
w4(U+0,u32(0x1ef762ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54675d:L54675d:{c.instructions+=2;NFSU2_TR(0x54675d);
__builtin_memmove((R+4),(R+12),4);
}
B54675f:{NFSU2_TR(0x54675f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546764ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B546764:L546764:{c.instructions+=5;NFSU2_TR(0x546764);
u8 U[4];
w4(U+0,u32(0x310bf423ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546769:{NFSU2_TR(0x546769);
u8 U[4];
w4(U+0,u32(0xf3990b6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54676e:{NFSU2_TR(0x54676e);
__builtin_memmove((R+4),(R+12),4);
}
B546770:{NFSU2_TR(0x546770);
u8 U[4];
w4(U+0,u32(0x3b83203ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546775:{NFSU2_TR(0x546775);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54677aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5463b0u);}goto L5463b0;}
}
B54677a:L54677a:{c.instructions+=3;NFSU2_TR(0x54677a);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54677c:{NFSU2_TR(0x54677c);
w4(R+4,u32(0x8392c0ull));
}
B546781:{NFSU2_TR(0x546781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546786ull));
TAIL_STATIC(0x6102f0u,610);
}
B546786:L546786:{c.instructions+=3;NFSU2_TR(0x546786);
__builtin_memmove((R+28),(R+0),4);
}
B546788:{NFSU2_TR(0x546788);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54678a:{NFSU2_TR(0x54678a);
if(r1(R+518)){{goto L5467e1;}}
}
B54678c:L54678c:{c.instructions+=4;NFSU2_TR(0x54678c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54678e:{NFSU2_TR(0x54678e);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546793:{NFSU2_TR(0x546793);
__builtin_memmove((R+4),(R+28),4);
}
B546795:{NFSU2_TR(0x546795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54679aull));
TAIL_STATIC(0x61b500u,61b);
}
B54679a:L54679a:{c.instructions+=2;NFSU2_TR(0x54679a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54679c:{NFSU2_TR(0x54679c);
if(r1(R+518)){{goto L5467e1;}}
}
B54679e:L54679e:{c.instructions+=3;NFSU2_TR(0x54679e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5467a1:{NFSU2_TR(0x5467a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5467a2:{NFSU2_TR(0x5467a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5467a7ull));
TAIL_STATIC(0x505450u,505);
}
B5467a7:L5467a7:{c.instructions+=2;NFSU2_TR(0x5467a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5467a8:{NFSU2_TR(0x5467a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5467adull));
TAIL_STATIC(0x50b840u,50b);
}
B5467ad:L5467ad:{c.instructions+=3;NFSU2_TR(0x5467ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5467b0:{NFSU2_TR(0x5467b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5467b2:{NFSU2_TR(0x5467b2);
if(r1(R+518)){{goto L5467bb;}}
}
B5467b4:L5467b4:{c.instructions+=3;NFSU2_TR(0x5467b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5467b7:{NFSU2_TR(0x5467b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5467b9:{NFSU2_TR(0x5467b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5467e1;}}
}
B5467bb:L5467bb:{c.instructions+=4;NFSU2_TR(0x5467bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5467bd:{NFSU2_TR(0x5467bd);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5467c2:{NFSU2_TR(0x5467c2);
__builtin_memmove((R+4),(R+28),4);
}
B5467c4:{NFSU2_TR(0x5467c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5467c9ull));
TAIL_STATIC(0x61b500u,61b);
}
B5467c9:L5467c9:{c.instructions+=3;NFSU2_TR(0x5467c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5467ca:{NFSU2_TR(0x5467ca);
__builtin_memmove((R+28),(R+0),4);
}
B5467cc:{NFSU2_TR(0x5467cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5467d1ull));
TAIL_STATIC(0x505450u,505);
}
B5467d1:L5467d1:{c.instructions+=2;NFSU2_TR(0x5467d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5467d2:{NFSU2_TR(0x5467d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5467d7ull));
TAIL_STATIC(0x50b840u,50b);
}
B5467d7:L5467d7:{c.instructions+=3;NFSU2_TR(0x5467d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5467da:{NFSU2_TR(0x5467da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5467dc:{NFSU2_TR(0x5467dc);
if(r1(R+518)){{goto L5467e1;}}
}
B5467de:L5467de:{c.instructions+=1;NFSU2_TR(0x5467de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5467e1:L5467e1:{c.instructions+=3;NFSU2_TR(0x5467e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5467e4:{NFSU2_TR(0x5467e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5467e5:{NFSU2_TR(0x5467e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5467eaull));
TAIL_STATIC(0x505450u,505);
}
B5467ea:L5467ea:{c.instructions+=2;NFSU2_TR(0x5467ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5467eb:{NFSU2_TR(0x5467eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5467f0ull));
TAIL_STATIC(0x50b840u,50b);
}
B5467f0:L5467f0:{c.instructions+=3;NFSU2_TR(0x5467f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5467f3:{NFSU2_TR(0x5467f3);
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
B5467f5:{NFSU2_TR(0x5467f5);
if(r1(R+518)){{goto L546888;}}
}
B5467fb:L5467fb:{c.instructions+=3;NFSU2_TR(0x5467fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5467fe:{NFSU2_TR(0x5467fe);
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
B546800:{NFSU2_TR(0x546800);
if(r1(R+518)){{goto L546888;}}
}
B546806:L546806:{c.instructions+=3;NFSU2_TR(0x546806);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B546809:{NFSU2_TR(0x546809);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54680c:{NFSU2_TR(0x54680c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B546814:L546814:{c.instructions+=2;NFSU2_TR(0x546814);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B546816:{NFSU2_TR(0x546816);
if(r1(R+518)){{goto L54681d;}}
}
B546818:L546818:{c.instructions+=2;NFSU2_TR(0x546818);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B54681b:{NFSU2_TR(0x54681b);
{goto L546820;}
}
B54681d:L54681d:{c.instructions+=2;NFSU2_TR(0x54681d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B54681f:{NFSU2_TR(0x54681f);
}
B546820:L546820:{c.instructions+=2;NFSU2_TR(0x546820);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B546822:{NFSU2_TR(0x546822);
if(r1(R+518)){{goto L546829;}}
}
B546824:L546824:{c.instructions+=2;NFSU2_TR(0x546824);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B546827:{NFSU2_TR(0x546827);
{goto L54682b;}
}
B546829:L546829:{c.instructions+=1;NFSU2_TR(0x546829);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54682b:L54682b:{c.instructions+=2;NFSU2_TR(0x54682b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54682d:{NFSU2_TR(0x54682d);
if(r1(R+518)){{goto L546893;}}
}
B54682f:L54682f:{c.instructions+=4;NFSU2_TR(0x54682f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B546832:{NFSU2_TR(0x546832);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B546835:{NFSU2_TR(0x546835);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B546837:{NFSU2_TR(0x546837);
if(r1(R+518)){{goto L54685a;}}
}
B546839:L546839:{c.instructions+=3;NFSU2_TR(0x546839);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B54683b:{NFSU2_TR(0x54683b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54683d:{NFSU2_TR(0x54683d);
if(r1(R+518)){{goto L54685a;}}
}
B54683f:L54683f:{c.instructions+=1;NFSU2_TR(0x54683f);
}
B546840:L546840:{c.instructions+=3;NFSU2_TR(0x546840);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B546843:{NFSU2_TR(0x546843);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B546845:{NFSU2_TR(0x546845);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54684d;}}
}
B546847:L546847:{c.instructions+=2;NFSU2_TR(0x546847);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B546849:{NFSU2_TR(0x546849);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54684d;}}
}
B54684b:L54684b:{c.instructions+=1;NFSU2_TR(0x54684b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B54684d:L54684d:{c.instructions+=6;NFSU2_TR(0x54684d);
w4(R+0,u32(r1(R+0)));
}
B546850:{NFSU2_TR(0x546850);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B546852:{NFSU2_TR(0x546852);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B546855:{NFSU2_TR(0x546855);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B546856:{NFSU2_TR(0x546856);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B546858:{NFSU2_TR(0x546858);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x546840u);}goto L546840;}}
}
B54685a:L54685a:{c.instructions+=2;NFSU2_TR(0x54685a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54685b:{NFSU2_TR(0x54685b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546860ull));
TAIL_STATIC(0x50b840u,50b);
}
B546860:L546860:{c.instructions+=3;NFSU2_TR(0x546860);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B546863:{NFSU2_TR(0x546863);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B546865:{NFSU2_TR(0x546865);
if(r1(R+518)){{goto L54686c;}}
}
B546867:L546867:{c.instructions+=2;NFSU2_TR(0x546867);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54686a:{NFSU2_TR(0x54686a);
{goto L54686e;}
}
B54686c:L54686c:{c.instructions+=1;NFSU2_TR(0x54686c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54686e:L54686e:{c.instructions+=2;NFSU2_TR(0x54686e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B546871:{NFSU2_TR(0x546871);
if(r1(R+518)){{goto L546881;}}
}
B546873:L546873:{c.instructions+=5;NFSU2_TR(0x546873);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B546877:{NFSU2_TR(0x546877);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54687a:{NFSU2_TR(0x54687a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B54687b:{NFSU2_TR(0x54687b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54687f:{NFSU2_TR(0x54687f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x546814u);}goto L546814;}
}
B546881:L546881:{c.instructions+=3;NFSU2_TR(0x546881);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B546885:{NFSU2_TR(0x546885);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546886:{NFSU2_TR(0x546886);
{goto L54688a;}
}
B546888:L546888:{c.instructions+=1;NFSU2_TR(0x546888);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54688a:L54688a:{c.instructions+=3;NFSU2_TR(0x54688a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54688d:{NFSU2_TR(0x54688d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B546890:{NFSU2_TR(0x546890);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546893ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B546893:L546893:{c.instructions+=7;NFSU2_TR(0x546893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B546895:{NFSU2_TR(0x546895);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B546896:{NFSU2_TR(0x546896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B546897:{NFSU2_TR(0x546897);
__builtin_memmove((R+4),(R+12),4);
}
B546899:{NFSU2_TR(0x546899);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54689a:{NFSU2_TR(0x54689a);
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
B54689d:{NFSU2_TR(0x54689d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5468a0:L5468a0:{c.instructions+=6;NFSU2_TR(0x5468a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5468a1:{NFSU2_TR(0x5468a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5468a2:{NFSU2_TR(0x5468a2);
__builtin_memmove((R+24),(R+4),4);
}
B5468a4:{NFSU2_TR(0x5468a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5468a5:{NFSU2_TR(0x5468a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5468ab:{NFSU2_TR(0x5468ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5468b0ull));
TAIL_STATIC(0x51f7e0u,51f);
}
B5468b0:L5468b0:{c.instructions+=6;NFSU2_TR(0x5468b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5468b1:{NFSU2_TR(0x5468b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5468b7:{NFSU2_TR(0x5468b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5468b8:{NFSU2_TR(0x5468b8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5468ba:{NFSU2_TR(0x5468ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5468c0:{NFSU2_TR(0x5468c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5468c5ull));
TAIL_STATIC(0x538080u,538);
}
B5468c5:L5468c5:{c.instructions+=5;NFSU2_TR(0x5468c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5468c8:{NFSU2_TR(0x5468c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5468cb:{NFSU2_TR(0x5468cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5468ce:{NFSU2_TR(0x5468ce);
__builtin_memmove((R+4),(R+28),4);
}
B5468d0:{NFSU2_TR(0x5468d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5468d5ull));
TAIL_STATIC(0x610000u,610);
}
B5468d5:L5468d5:{c.instructions+=4;NFSU2_TR(0x5468d5);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5468da:{NFSU2_TR(0x5468da);
__builtin_memmove((R+4),(R+28),4);
}
B5468dc:{NFSU2_TR(0x5468dc);
__builtin_memmove((R+12),(R+0),4);
}
B5468de:{NFSU2_TR(0x5468de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5468e3ull));
TAIL_STATIC(0x61b4e0u,61b);
}
B5468e3:L5468e3:{c.instructions+=2;NFSU2_TR(0x5468e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5468e5:{NFSU2_TR(0x5468e5);
if(r1(R+518)){{goto L54690c;}}
}
B5468e7:L5468e7:{c.instructions+=4;NFSU2_TR(0x5468e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5468e9:{NFSU2_TR(0x5468e9);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5468ee:{NFSU2_TR(0x5468ee);
__builtin_memmove((R+4),(R+28),4);
}
B5468f0:{NFSU2_TR(0x5468f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5468f5ull));
TAIL_STATIC(0x61b500u,61b);
}
B5468f5:L5468f5:{c.instructions+=2;NFSU2_TR(0x5468f5);
__builtin_memmove((R+8),(R+0),4);
}
B5468f7:{NFSU2_TR(0x5468f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5468fcull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5468fc:L5468fc:{c.instructions+=2;NFSU2_TR(0x5468fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5468fe:{NFSU2_TR(0x5468fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54690a;}}
}
B546900:L546900:{c.instructions+=2;NFSU2_TR(0x546900);
w4(R+8,u32(0xc01a6f63ull));
}
B546905:{NFSU2_TR(0x546905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54690aull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54690a:L54690a:{c.instructions+=1;NFSU2_TR(0x54690a);
__builtin_memmove((R+12),(R+0),4);
}
B54690c:L54690c:{c.instructions+=5;NFSU2_TR(0x54690c);
__builtin_memmove((R+0),gp(0x839bbc),4);
}
B546911:{NFSU2_TR(0x546911);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546912:{NFSU2_TR(0x546912);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546913:{NFSU2_TR(0x546913);
w4(R+4,u32(0x838980ull));
}
B546918:{NFSU2_TR(0x546918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54691dull));
TAIL_STATIC(0x50e960u,50e);
}
B54691d:L54691d:{c.instructions+=5;NFSU2_TR(0x54691d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B546923:{NFSU2_TR(0x546923);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546924:{NFSU2_TR(0x546924);
u8 U[4];
w4(U+0,u32(0x794fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546929:{NFSU2_TR(0x546929);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54692a:{NFSU2_TR(0x54692a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54692full));
TAIL_STATIC(0x537be0u,537);
}
B54692f:L54692f:{c.instructions+=5;NFSU2_TR(0x54692f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B546935:{NFSU2_TR(0x546935);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((R+0),(U+0),4);
}
B54693b:{NFSU2_TR(0x54693b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54693e:{NFSU2_TR(0x54693e);
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
B546940:{NFSU2_TR(0x546940);
if(r1(R+518)){{goto L5469eb;}}
}
B546946:L546946:{c.instructions+=5;NFSU2_TR(0x546946);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54694c:{NFSU2_TR(0x54694c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54694f:{NFSU2_TR(0x54694f);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546954:{NFSU2_TR(0x546954);
__builtin_memmove((R+4),(R+28),4);
}
B546956:{NFSU2_TR(0x546956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54695bull));
TAIL_STATIC(0x61b4e0u,61b);
}
B54695b:L54695b:{c.instructions+=6;NFSU2_TR(0x54695b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54695d:{NFSU2_TR(0x54695d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B546960:{NFSU2_TR(0x546960);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546962:{NFSU2_TR(0x546962);
__builtin_memmove((R+4),(R+28),4);
}
B546964:{NFSU2_TR(0x546964);
u8 U[4];
w4(U+0,u32(0xeb0101e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546969:{NFSU2_TR(0x546969);
if(r1(R+518)){{goto L546984;}}
}
B54696b:L54696b:{c.instructions+=1;NFSU2_TR(0x54696b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546970ull));
TAIL_STATIC(0x61b500u,61b);
}
B546970:L546970:{c.instructions+=6;NFSU2_TR(0x546970);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B546973:{NFSU2_TR(0x546973);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546974:{NFSU2_TR(0x546974);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546976:{NFSU2_TR(0x546976);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54697b:{NFSU2_TR(0x54697b);
__builtin_memmove((R+4),(R+28),4);
}
B54697d:{NFSU2_TR(0x54697d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546982ull));
TAIL_STATIC(0x61b500u,61b);
}
B546982:L546982:{c.instructions+=1;NFSU2_TR(0x546982);
{goto L546994;}
}
B546984:L546984:{c.instructions+=1;NFSU2_TR(0x546984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546989ull));
TAIL_STATIC(0x61b500u,61b);
}
B546989:L546989:{c.instructions+=4;NFSU2_TR(0x546989);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B54698c:{NFSU2_TR(0x54698c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54698d:{NFSU2_TR(0x54698d);
__builtin_memmove((R+4),(R+28),4);
}
B54698f:{NFSU2_TR(0x54698f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546994ull));
TAIL_STATIC(0x610000u,610);
}
B546994:L546994:{c.instructions+=5;NFSU2_TR(0x546994);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546995:{NFSU2_TR(0x546995);
u8 U[4];
w4(U+0,u32(0x79c1c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54699a:{NFSU2_TR(0x54699a);
u8 U[4];
w4(U+0,u32(0xd28b9316ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54699f:{NFSU2_TR(0x54699f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5469a0:{NFSU2_TR(0x5469a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5469a5ull));
TAIL_STATIC(0x537b80u,537);
}
B5469a5:L5469a5:{c.instructions+=4;NFSU2_TR(0x5469a5);
__builtin_memmove((R+0),gp(0x850078),4);
}
B5469aa:{NFSU2_TR(0x5469aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5469ad:{NFSU2_TR(0x5469ad);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5469b0:{NFSU2_TR(0x5469b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5469da;}}
}
B5469b2:L5469b2:{c.instructions+=5;NFSU2_TR(0x5469b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5469b5:{NFSU2_TR(0x5469b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5469b6:{NFSU2_TR(0x5469b6);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5469b8:{NFSU2_TR(0x5469b8);
w4(R+4,u32(0x85ad40ull));
}
B5469bd:{NFSU2_TR(0x5469bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5469c2ull));
TAIL_STATIC(0x514280u,514);
}
B5469c2:L5469c2:{c.instructions+=5;NFSU2_TR(0x5469c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5469c3:{NFSU2_TR(0x5469c3);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5469c8:{NFSU2_TR(0x5469c8);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5469cd:{NFSU2_TR(0x5469cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5469ce:{NFSU2_TR(0x5469ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5469d3ull));
TAIL_STATIC(0x537b80u,537);
}
B5469d3:L5469d3:{c.instructions+=5;NFSU2_TR(0x5469d3);
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
B5469d6:{NFSU2_TR(0x5469d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5469d7:{NFSU2_TR(0x5469d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5469d8:{NFSU2_TR(0x5469d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5469d9:{NFSU2_TR(0x5469d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5469da:L5469da:{c.instructions+=4;NFSU2_TR(0x5469da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5469dd:{NFSU2_TR(0x5469dd);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5469e2:{NFSU2_TR(0x5469e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5469e3:{NFSU2_TR(0x5469e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5469e8ull));
TAIL_STATIC(0x4954e0u,495);
}
B5469e8:L5469e8:{c.instructions+=1;NFSU2_TR(0x5469e8);
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
B5469eb:L5469eb:{c.instructions+=4;NFSU2_TR(0x5469eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5469ec:{NFSU2_TR(0x5469ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5469ed:{NFSU2_TR(0x5469ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5469ee:{NFSU2_TR(0x5469ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5469f0:L5469f0:{c.instructions+=6;NFSU2_TR(0x5469f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5469f1:{NFSU2_TR(0x5469f1);
__builtin_memmove((R+24),(R+4),4);
}
B5469f3:{NFSU2_TR(0x5469f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5469f6:{NFSU2_TR(0x5469f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xaade3025ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5469fd:{NFSU2_TR(0x5469fd);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+0)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5469ff:{NFSU2_TR(0x5469ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L546f29;}}
}
B546a05:L546a05:{c.instructions+=3;NFSU2_TR(0x546a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B546a0b:{NFSU2_TR(0x546a0b);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x20006ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20006ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B546a10:{NFSU2_TR(0x546a10);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L546ce5;}}
}
B546a16:L546a16:{c.instructions+=1;NFSU2_TR(0x546a16);
if(r1(R+518)){{goto L546ccf;}}
}
B546a1c:L546a1c:{c.instructions+=2;NFSU2_TR(0x546a1c);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10003ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10003ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B546a21:{NFSU2_TR(0x546a21);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L546c33;}}
}
B546a27:L546a27:{c.instructions+=1;NFSU2_TR(0x546a27);
if(r1(R+518)){{goto L546be1;}}
}
B546a2d:L546a2d:{c.instructions+=2;NFSU2_TR(0x546a2d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B546a30:{NFSU2_TR(0x546a30);
if(r1(R+518)){{goto L546b52;}}
}
B546a36:L546a36:{c.instructions+=2;NFSU2_TR(0x546a36);
w1(R+512,u8((r4(R+0))<(u32(0x10001ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x10001ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B546a3b:{NFSU2_TR(0x546a3b);
if(r1(R+518)){{goto L546ad6;}}
}
B546a41:L546a41:{c.instructions+=2;NFSU2_TR(0x546a41);
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
B546a42:{NFSU2_TR(0x546a42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L546e66;}}
}
B546a48:L546a48:{c.instructions+=6;NFSU2_TR(0x546a48);
u8 U[4];
w4(U+0,u32(0x89bb9ceaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546a4d:{NFSU2_TR(0x546a4d);
u8 U[4];
w4(U+0,u32(0x2e40eadbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546a52:{NFSU2_TR(0x546a52);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546a54:{NFSU2_TR(0x546a54);
u8 U[4];
w4(U+0,u32(0x81ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546a59:{NFSU2_TR(0x546a59);
__builtin_memmove((R+4),(R+24),4);
}
B546a5b:{NFSU2_TR(0x546a5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546a60ull));
TAIL_STATIC(0x520ff0u,520);
}
B546a60:L546a60:{c.instructions+=6;NFSU2_TR(0x546a60);
u8 U[4];
w4(U+0,u32(0x89bb9cebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546a65:{NFSU2_TR(0x546a65);
u8 U[4];
w4(U+0,u32(0x2e40eadcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546a6a:{NFSU2_TR(0x546a6a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546a6c:{NFSU2_TR(0x546a6c);
u8 U[4];
w4(U+0,u32(0x82ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546a71:{NFSU2_TR(0x546a71);
__builtin_memmove((R+4),(R+24),4);
}
B546a73:{NFSU2_TR(0x546a73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546a78ull));
TAIL_STATIC(0x520ff0u,520);
}
B546a78:L546a78:{c.instructions+=6;NFSU2_TR(0x546a78);
u8 U[4];
w4(U+0,u32(0x89bb9cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546a7d:{NFSU2_TR(0x546a7d);
u8 U[4];
w4(U+0,u32(0x2e40eaddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546a82:{NFSU2_TR(0x546a82);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546a84:{NFSU2_TR(0x546a84);
u8 U[4];
w4(U+0,u32(0x83ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546a89:{NFSU2_TR(0x546a89);
__builtin_memmove((R+4),(R+24),4);
}
B546a8b:{NFSU2_TR(0x546a8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546a90ull));
TAIL_STATIC(0x520ff0u,520);
}
B546a90:L546a90:{c.instructions+=6;NFSU2_TR(0x546a90);
u8 U[4];
w4(U+0,u32(0x89bb9cedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546a95:{NFSU2_TR(0x546a95);
u8 U[4];
w4(U+0,u32(0x2e40eadeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546a9a:{NFSU2_TR(0x546a9a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546a9c:{NFSU2_TR(0x546a9c);
u8 U[4];
w4(U+0,u32(0x84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546aa1:{NFSU2_TR(0x546aa1);
__builtin_memmove((R+4),(R+24),4);
}
B546aa3:{NFSU2_TR(0x546aa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546aa8ull));
TAIL_STATIC(0x520ff0u,520);
}
B546aa8:L546aa8:{c.instructions+=6;NFSU2_TR(0x546aa8);
u8 U[4];
w4(U+0,u32(0x89bb9ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546aad:{NFSU2_TR(0x546aad);
u8 U[4];
w4(U+0,u32(0x2e40eadfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ab2:{NFSU2_TR(0x546ab2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ab4:{NFSU2_TR(0x546ab4);
u8 U[4];
w4(U+0,u32(0x85ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ab9:{NFSU2_TR(0x546ab9);
__builtin_memmove((R+4),(R+24),4);
}
B546abb:{NFSU2_TR(0x546abb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546ac0ull));
TAIL_STATIC(0x520ff0u,520);
}
B546ac0:L546ac0:{c.instructions+=5;NFSU2_TR(0x546ac0);
u8 U[4];
w4(U+0,u32(0x89bb9cefull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ac5:{NFSU2_TR(0x546ac5);
u8 U[4];
w4(U+0,u32(0x2e40eae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546aca:{NFSU2_TR(0x546aca);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546acc:{NFSU2_TR(0x546acc);
u8 U[4];
w4(U+0,u32(0x86ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ad1:{NFSU2_TR(0x546ad1);
{goto L546e5f;}
}
B546ad6:L546ad6:{c.instructions+=6;NFSU2_TR(0x546ad6);
u8 U[4];
w4(U+0,u32(0x89bb9ceaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546adb:{NFSU2_TR(0x546adb);
u8 U[4];
w4(U+0,u32(0xfe957f48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ae0:{NFSU2_TR(0x546ae0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ae2:{NFSU2_TR(0x546ae2);
u8 U[4];
w4(U+0,u32(0x79ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ae4:{NFSU2_TR(0x546ae4);
__builtin_memmove((R+4),(R+24),4);
}
B546ae6:{NFSU2_TR(0x546ae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546aebull));
TAIL_STATIC(0x520ff0u,520);
}
B546aeb:L546aeb:{c.instructions+=6;NFSU2_TR(0x546aeb);
u8 U[4];
w4(U+0,u32(0x89bb9cebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546af0:{NFSU2_TR(0x546af0);
u8 U[4];
w4(U+0,u32(0xfe957f49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546af5:{NFSU2_TR(0x546af5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546af7:{NFSU2_TR(0x546af7);
u8 U[4];
w4(U+0,u32(0x7aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546af9:{NFSU2_TR(0x546af9);
__builtin_memmove((R+4),(R+24),4);
}
B546afb:{NFSU2_TR(0x546afb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546b00ull));
TAIL_STATIC(0x520ff0u,520);
}
B546b00:L546b00:{c.instructions+=6;NFSU2_TR(0x546b00);
u8 U[4];
w4(U+0,u32(0x89bb9cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b05:{NFSU2_TR(0x546b05);
u8 U[4];
w4(U+0,u32(0xfe957f4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b0a:{NFSU2_TR(0x546b0a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b0c:{NFSU2_TR(0x546b0c);
u8 U[4];
w4(U+0,u32(0x7bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b0e:{NFSU2_TR(0x546b0e);
__builtin_memmove((R+4),(R+24),4);
}
B546b10:{NFSU2_TR(0x546b10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546b15ull));
TAIL_STATIC(0x520ff0u,520);
}
B546b15:L546b15:{c.instructions+=6;NFSU2_TR(0x546b15);
u8 U[4];
w4(U+0,u32(0x89bb9cedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b1a:{NFSU2_TR(0x546b1a);
u8 U[4];
w4(U+0,u32(0xfe957f4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b1f:{NFSU2_TR(0x546b1f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b21:{NFSU2_TR(0x546b21);
u8 U[4];
w4(U+0,u32(0x7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b23:{NFSU2_TR(0x546b23);
__builtin_memmove((R+4),(R+24),4);
}
B546b25:{NFSU2_TR(0x546b25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546b2aull));
TAIL_STATIC(0x520ff0u,520);
}
B546b2a:L546b2a:{c.instructions+=6;NFSU2_TR(0x546b2a);
u8 U[4];
w4(U+0,u32(0x89bb9ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b2f:{NFSU2_TR(0x546b2f);
u8 U[4];
w4(U+0,u32(0xfe957f4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b34:{NFSU2_TR(0x546b34);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b36:{NFSU2_TR(0x546b36);
u8 U[4];
w4(U+0,u32(0x7dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b38:{NFSU2_TR(0x546b38);
__builtin_memmove((R+4),(R+24),4);
}
B546b3a:{NFSU2_TR(0x546b3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546b3full));
TAIL_STATIC(0x520ff0u,520);
}
B546b3f:L546b3f:{c.instructions+=5;NFSU2_TR(0x546b3f);
u8 U[4];
w4(U+0,u32(0x89bb9cefull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b44:{NFSU2_TR(0x546b44);
u8 U[4];
w4(U+0,u32(0xfe957f4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b49:{NFSU2_TR(0x546b49);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b4b:{NFSU2_TR(0x546b4b);
u8 U[4];
w4(U+0,u32(0x7eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b4d:{NFSU2_TR(0x546b4d);
{goto L546e5f;}
}
B546b52:L546b52:{c.instructions+=6;NFSU2_TR(0x546b52);
u8 U[4];
w4(U+0,u32(0x52ded91dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b57:{NFSU2_TR(0x546b57);
u8 U[4];
w4(U+0,u32(0x52ded91dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b5c:{NFSU2_TR(0x546b5c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b5e:{NFSU2_TR(0x546b5e);
u8 U[4];
w4(U+0,u32(0x69ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b60:{NFSU2_TR(0x546b60);
__builtin_memmove((R+4),(R+24),4);
}
B546b62:{NFSU2_TR(0x546b62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546b67ull));
TAIL_STATIC(0x52ff60u,52f);
}
B546b67:L546b67:{c.instructions+=6;NFSU2_TR(0x546b67);
u8 U[4];
w4(U+0,u32(0xac7937b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b6c:{NFSU2_TR(0x546b6c);
u8 U[4];
w4(U+0,u32(0xac7937b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b71:{NFSU2_TR(0x546b71);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b73:{NFSU2_TR(0x546b73);
u8 U[4];
w4(U+0,u32(0x71ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b75:{NFSU2_TR(0x546b75);
__builtin_memmove((R+4),(R+24),4);
}
B546b77:{NFSU2_TR(0x546b77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546b7cull));
TAIL_STATIC(0x52ff60u,52f);
}
B546b7c:L546b7c:{c.instructions+=6;NFSU2_TR(0x546b7c);
u8 U[4];
w4(U+0,u32(0xda88b711ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b81:{NFSU2_TR(0x546b81);
u8 U[4];
w4(U+0,u32(0xda88b711ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b86:{NFSU2_TR(0x546b86);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b88:{NFSU2_TR(0x546b88);
u8 U[4];
w4(U+0,u32(0x10001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b8d:{NFSU2_TR(0x546b8d);
__builtin_memmove((R+4),(R+24),4);
}
B546b8f:{NFSU2_TR(0x546b8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546b94ull));
TAIL_STATIC(0x52ff60u,52f);
}
B546b94:L546b94:{c.instructions+=6;NFSU2_TR(0x546b94);
u8 U[4];
w4(U+0,u32(0xc9a967c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b99:{NFSU2_TR(0x546b99);
u8 U[4];
w4(U+0,u32(0xc9a967c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546b9e:{NFSU2_TR(0x546b9e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ba0:{NFSU2_TR(0x546ba0);
u8 U[4];
w4(U+0,u32(0x10002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ba5:{NFSU2_TR(0x546ba5);
__builtin_memmove((R+4),(R+24),4);
}
B546ba7:{NFSU2_TR(0x546ba7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546bacull));
TAIL_STATIC(0x52ff60u,52f);
}
B546bac:L546bac:{c.instructions+=6;NFSU2_TR(0x546bac);
u8 U[4];
w4(U+0,u32(0x2c710c4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546bb1:{NFSU2_TR(0x546bb1);
u8 U[4];
w4(U+0,u32(0x2c710c4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546bb6:{NFSU2_TR(0x546bb6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546bb8:{NFSU2_TR(0x546bb8);
u8 U[4];
w4(U+0,u32(0x10003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546bbd:{NFSU2_TR(0x546bbd);
__builtin_memmove((R+4),(R+24),4);
}
B546bbf:{NFSU2_TR(0x546bbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546bc4ull));
TAIL_STATIC(0x52ff60u,52f);
}
B546bc4:L546bc4:{c.instructions+=6;NFSU2_TR(0x546bc4);
u8 U[4];
w4(U+0,u32(0xffa7d360ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546bc9:{NFSU2_TR(0x546bc9);
u8 U[4];
w4(U+0,u32(0xffa7d360ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546bce:{NFSU2_TR(0x546bce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546bd0:{NFSU2_TR(0x546bd0);
u8 U[4];
w4(U+0,u32(0x10004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546bd5:{NFSU2_TR(0x546bd5);
__builtin_memmove((R+4),(R+24),4);
}
B546bd7:{NFSU2_TR(0x546bd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546bdcull));
TAIL_STATIC(0x52ff60u,52f);
}
B546bdc:L546bdc:{c.instructions+=1;NFSU2_TR(0x546bdc);
{goto L546e66;}
}
B546be1:L546be1:{c.instructions+=6;NFSU2_TR(0x546be1);
u8 U[4];
w4(U+0,u32(0xb348f286ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546be6:{NFSU2_TR(0x546be6);
u8 U[4];
w4(U+0,u32(0x13ae389cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546beb:{NFSU2_TR(0x546beb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546bed:{NFSU2_TR(0x546bed);
u8 U[4];
w4(U+0,u32(0x20006ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546bf2:{NFSU2_TR(0x546bf2);
__builtin_memmove((R+4),(R+24),4);
}
B546bf4:{NFSU2_TR(0x546bf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546bf9ull));
TAIL_STATIC(0x520ff0u,520);
}
B546bf9:L546bf9:{c.instructions+=3;NFSU2_TR(0x546bf9);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546bfb:{NFSU2_TR(0x546bfb);
w4(R+4,u32(0x8392c0ull));
}
B546c00:{NFSU2_TR(0x546c00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546c05ull));
TAIL_STATIC(0x6102f0u,610);
}
B546c05:L546c05:{c.instructions+=2;NFSU2_TR(0x546c05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B546c07:{NFSU2_TR(0x546c07);
if(r1(R+518)){{goto L546c0f;}}
}
B546c09:L546c09:{c.instructions+=2;NFSU2_TR(0x546c09);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0xe0ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B546c0d:{NFSU2_TR(0x546c0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L546c27;}}
}
B546c0f:L546c0f:{c.instructions+=6;NFSU2_TR(0x546c0f);
u8 U[4];
w4(U+0,u32(0xb348f287ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c14:{NFSU2_TR(0x546c14);
u8 U[4];
w4(U+0,u32(0x13ae389bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c19:{NFSU2_TR(0x546c19);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c1b:{NFSU2_TR(0x546c1b);
u8 U[4];
w4(U+0,u32(0x20007ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c20:{NFSU2_TR(0x546c20);
__builtin_memmove((R+4),(R+24),4);
}
B546c22:{NFSU2_TR(0x546c22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546c27ull));
TAIL_STATIC(0x520ff0u,520);
}
B546c27:L546c27:{c.instructions+=2;NFSU2_TR(0x546c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xb36e7c1eull));
s4(u32(r4(U+0)),r4(U+4));
}
B546c2e:{NFSU2_TR(0x546c2e);
{goto L546e66;}
}
B546c33:L546c33:{c.instructions+=2;NFSU2_TR(0x546c33);
w1(R+512,u8((r4(R+0))<(u32(0x10004ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x10004ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B546c38:{NFSU2_TR(0x546c38);
if(r1(R+518)){{goto L546c7d;}}
}
B546c3a:L546c3a:{c.instructions+=2;NFSU2_TR(0x546c3a);
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
B546c3b:{NFSU2_TR(0x546c3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L546e66;}}
}
B546c41:L546c41:{c.instructions+=6;NFSU2_TR(0x546c41);
u8 U[4];
w4(U+0,u32(0xb348f286ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c46:{NFSU2_TR(0x546c46);
u8 U[4];
w4(U+0,u32(0x154fa42full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c4b:{NFSU2_TR(0x546c4b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c4d:{NFSU2_TR(0x546c4d);
u8 U[4];
w4(U+0,u32(0x2000aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c52:{NFSU2_TR(0x546c52);
__builtin_memmove((R+4),(R+24),4);
}
B546c54:{NFSU2_TR(0x546c54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546c59ull));
TAIL_STATIC(0x520ff0u,520);
}
B546c59:L546c59:{c.instructions+=6;NFSU2_TR(0x546c59);
u8 U[4];
w4(U+0,u32(0xb348f287ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c5e:{NFSU2_TR(0x546c5e);
u8 U[4];
w4(U+0,u32(0x154fa430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c63:{NFSU2_TR(0x546c63);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c65:{NFSU2_TR(0x546c65);
u8 U[4];
w4(U+0,u32(0x2000bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c6a:{NFSU2_TR(0x546c6a);
__builtin_memmove((R+4),(R+24),4);
}
B546c6c:{NFSU2_TR(0x546c6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546c71ull));
TAIL_STATIC(0x520ff0u,520);
}
B546c71:L546c71:{c.instructions+=2;NFSU2_TR(0x546c71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xb36e7c1eull));
s4(u32(r4(U+0)),r4(U+4));
}
B546c78:{NFSU2_TR(0x546c78);
{goto L546e66;}
}
B546c7d:L546c7d:{c.instructions+=6;NFSU2_TR(0x546c7d);
u8 U[4];
w4(U+0,u32(0xb348f286ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c82:{NFSU2_TR(0x546c82);
u8 U[4];
w4(U+0,u32(0x5ced1be2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c87:{NFSU2_TR(0x546c87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c89:{NFSU2_TR(0x546c89);
u8 U[4];
w4(U+0,u32(0x20008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c8e:{NFSU2_TR(0x546c8e);
__builtin_memmove((R+4),(R+24),4);
}
B546c90:{NFSU2_TR(0x546c90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546c95ull));
TAIL_STATIC(0x520ff0u,520);
}
B546c95:L546c95:{c.instructions+=3;NFSU2_TR(0x546c95);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546c97:{NFSU2_TR(0x546c97);
w4(R+4,u32(0x8392c0ull));
}
B546c9c:{NFSU2_TR(0x546c9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546ca1ull));
TAIL_STATIC(0x6102f0u,610);
}
B546ca1:L546ca1:{c.instructions+=2;NFSU2_TR(0x546ca1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B546ca3:{NFSU2_TR(0x546ca3);
if(r1(R+518)){{goto L546cab;}}
}
B546ca5:L546ca5:{c.instructions+=2;NFSU2_TR(0x546ca5);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0xe0ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B546ca9:{NFSU2_TR(0x546ca9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L546cc3;}}
}
B546cab:L546cab:{c.instructions+=6;NFSU2_TR(0x546cab);
u8 U[4];
w4(U+0,u32(0xb348f287ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546cb0:{NFSU2_TR(0x546cb0);
u8 U[4];
w4(U+0,u32(0x5ced1be1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546cb5:{NFSU2_TR(0x546cb5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546cb7:{NFSU2_TR(0x546cb7);
u8 U[4];
w4(U+0,u32(0x20009ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546cbc:{NFSU2_TR(0x546cbc);
__builtin_memmove((R+4),(R+24),4);
}
B546cbe:{NFSU2_TR(0x546cbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546cc3ull));
TAIL_STATIC(0x520ff0u,520);
}
B546cc3:L546cc3:{c.instructions+=2;NFSU2_TR(0x546cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xb36e7c1eull));
s4(u32(r4(U+0)),r4(U+4));
}
B546cca:{NFSU2_TR(0x546cca);
{goto L546e66;}
}
B546ccf:L546ccf:{c.instructions+=5;NFSU2_TR(0x546ccf);
u8 U[4];
w4(U+0,u32(0x89bb9ceaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546cd4:{NFSU2_TR(0x546cd4);
u8 U[4];
w4(U+0,u32(0x13ae389cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546cd9:{NFSU2_TR(0x546cd9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546cdb:{NFSU2_TR(0x546cdb);
u8 U[4];
w4(U+0,u32(0x89ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ce0:{NFSU2_TR(0x546ce0);
{goto L546e5f;}
}
B546ce5:L546ce5:{c.instructions+=3;NFSU2_TR(0x546ce5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x20007ull))));
}
B546cea:{NFSU2_TR(0x546cea);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B546ced:{NFSU2_TR(0x546ced);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L546e66;}}
}
B546cf3:L546cf3:{c.instructions+=1;NFSU2_TR(0x546cf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x546f2cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B546cfa:L546cfa:{c.instructions+=6;NFSU2_TR(0x546cfa);
u8 U[4];
w4(U+0,u32(0x89bb9ceaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546cff:{NFSU2_TR(0x546cff);
u8 U[4];
w4(U+0,u32(0xc813d5bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d04:{NFSU2_TR(0x546d04);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d06:{NFSU2_TR(0x546d06);
u8 U[4];
w4(U+0,u32(0x89ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d0b:{NFSU2_TR(0x546d0b);
__builtin_memmove((R+4),(R+24),4);
}
B546d0d:{NFSU2_TR(0x546d0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546d12ull));
TAIL_STATIC(0x520ff0u,520);
}
B546d12:L546d12:{c.instructions+=5;NFSU2_TR(0x546d12);
u8 U[4];
w4(U+0,u32(0x89bb9cebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d17:{NFSU2_TR(0x546d17);
u8 U[4];
w4(U+0,u32(0xc813d5bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d1c:{NFSU2_TR(0x546d1c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d1e:{NFSU2_TR(0x546d1e);
u8 U[4];
w4(U+0,u32(0x8aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d23:{NFSU2_TR(0x546d23);
{goto L546e5f;}
}
B546d28:L546d28:{c.instructions+=5;NFSU2_TR(0x546d28);
u8 U[4];
w4(U+0,u32(0x89bb9ceaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d2d:{NFSU2_TR(0x546d2d);
u8 U[4];
w4(U+0,u32(0x5ced1be2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d32:{NFSU2_TR(0x546d32);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d34:{NFSU2_TR(0x546d34);
u8 U[4];
w4(U+0,u32(0x91ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d39:{NFSU2_TR(0x546d39);
{goto L546e5f;}
}
B546d3e:L546d3e:{c.instructions+=6;NFSU2_TR(0x546d3e);
u8 U[4];
w4(U+0,u32(0x89bb9ceaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d43:{NFSU2_TR(0x546d43);
u8 U[4];
w4(U+0,u32(0x392f21c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d48:{NFSU2_TR(0x546d48);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d4a:{NFSU2_TR(0x546d4a);
u8 U[4];
w4(U+0,u32(0x91ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d4f:{NFSU2_TR(0x546d4f);
__builtin_memmove((R+4),(R+24),4);
}
B546d51:{NFSU2_TR(0x546d51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546d56ull));
TAIL_STATIC(0x520ff0u,520);
}
B546d56:L546d56:{c.instructions+=5;NFSU2_TR(0x546d56);
u8 U[4];
w4(U+0,u32(0x89bb9cebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d5b:{NFSU2_TR(0x546d5b);
u8 U[4];
w4(U+0,u32(0x392f21c2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d60:{NFSU2_TR(0x546d60);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d62:{NFSU2_TR(0x546d62);
u8 U[4];
w4(U+0,u32(0x92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d67:{NFSU2_TR(0x546d67);
{goto L546e5f;}
}
B546d6c:L546d6c:{c.instructions+=6;NFSU2_TR(0x546d6c);
u8 U[4];
w4(U+0,u32(0x89bb9ceaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d71:{NFSU2_TR(0x546d71);
u8 U[4];
w4(U+0,u32(0xfde2b3cfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d76:{NFSU2_TR(0x546d76);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d78:{NFSU2_TR(0x546d78);
u8 U[4];
w4(U+0,u32(0x61ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d7a:{NFSU2_TR(0x546d7a);
__builtin_memmove((R+4),(R+24),4);
}
B546d7c:{NFSU2_TR(0x546d7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546d81ull));
TAIL_STATIC(0x520ff0u,520);
}
B546d81:L546d81:{c.instructions+=6;NFSU2_TR(0x546d81);
u8 U[4];
w4(U+0,u32(0x89bb9cebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d86:{NFSU2_TR(0x546d86);
u8 U[4];
w4(U+0,u32(0xfde2b3d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d8b:{NFSU2_TR(0x546d8b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d8d:{NFSU2_TR(0x546d8d);
u8 U[4];
w4(U+0,u32(0x62ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d8f:{NFSU2_TR(0x546d8f);
__builtin_memmove((R+4),(R+24),4);
}
B546d91:{NFSU2_TR(0x546d91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546d96ull));
TAIL_STATIC(0x520ff0u,520);
}
B546d96:L546d96:{c.instructions+=6;NFSU2_TR(0x546d96);
u8 U[4];
w4(U+0,u32(0x89bb9cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546d9b:{NFSU2_TR(0x546d9b);
u8 U[4];
w4(U+0,u32(0xfde2b3d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546da0:{NFSU2_TR(0x546da0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546da2:{NFSU2_TR(0x546da2);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546da4:{NFSU2_TR(0x546da4);
__builtin_memmove((R+4),(R+24),4);
}
B546da6:{NFSU2_TR(0x546da6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546dabull));
TAIL_STATIC(0x520ff0u,520);
}
B546dab:L546dab:{c.instructions+=5;NFSU2_TR(0x546dab);
u8 U[4];
w4(U+0,u32(0x89bb9cedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546db0:{NFSU2_TR(0x546db0);
u8 U[4];
w4(U+0,u32(0xfde2b3d2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546db5:{NFSU2_TR(0x546db5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546db7:{NFSU2_TR(0x546db7);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546db9:{NFSU2_TR(0x546db9);
{goto L546e5f;}
}
B546dbe:L546dbe:{c.instructions+=6;NFSU2_TR(0x546dbe);
u8 U[4];
w4(U+0,u32(0x89bb9ceaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546dc3:{NFSU2_TR(0x546dc3);
u8 U[4];
w4(U+0,u32(0x4adcf090ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546dc8:{NFSU2_TR(0x546dc8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546dca:{NFSU2_TR(0x546dca);
u8 U[4];
w4(U+0,u32(0x61ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546dcc:{NFSU2_TR(0x546dcc);
__builtin_memmove((R+4),(R+24),4);
}
B546dce:{NFSU2_TR(0x546dce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546dd3ull));
TAIL_STATIC(0x520ff0u,520);
}
B546dd3:L546dd3:{c.instructions+=6;NFSU2_TR(0x546dd3);
u8 U[4];
w4(U+0,u32(0x89bb9cebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546dd8:{NFSU2_TR(0x546dd8);
u8 U[4];
w4(U+0,u32(0x4adcf091ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ddd:{NFSU2_TR(0x546ddd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ddf:{NFSU2_TR(0x546ddf);
u8 U[4];
w4(U+0,u32(0x62ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546de1:{NFSU2_TR(0x546de1);
__builtin_memmove((R+4),(R+24),4);
}
B546de3:{NFSU2_TR(0x546de3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546de8ull));
TAIL_STATIC(0x520ff0u,520);
}
B546de8:L546de8:{c.instructions+=6;NFSU2_TR(0x546de8);
u8 U[4];
w4(U+0,u32(0x89bb9cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ded:{NFSU2_TR(0x546ded);
u8 U[4];
w4(U+0,u32(0x4adcf092ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546df2:{NFSU2_TR(0x546df2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546df4:{NFSU2_TR(0x546df4);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546df6:{NFSU2_TR(0x546df6);
__builtin_memmove((R+4),(R+24),4);
}
B546df8:{NFSU2_TR(0x546df8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546dfdull));
TAIL_STATIC(0x520ff0u,520);
}
B546dfd:L546dfd:{c.instructions+=6;NFSU2_TR(0x546dfd);
u8 U[4];
w4(U+0,u32(0x89bb9cedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e02:{NFSU2_TR(0x546e02);
u8 U[4];
w4(U+0,u32(0x4adcf093ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e07:{NFSU2_TR(0x546e07);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e09:{NFSU2_TR(0x546e09);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e0b:{NFSU2_TR(0x546e0b);
__builtin_memmove((R+4),(R+24),4);
}
B546e0d:{NFSU2_TR(0x546e0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546e12ull));
TAIL_STATIC(0x520ff0u,520);
}
B546e12:L546e12:{c.instructions+=6;NFSU2_TR(0x546e12);
u8 U[4];
w4(U+0,u32(0x89bb9ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e17:{NFSU2_TR(0x546e17);
u8 U[4];
w4(U+0,u32(0x4adcf094ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e1c:{NFSU2_TR(0x546e1c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e1e:{NFSU2_TR(0x546e1e);
u8 U[4];
w4(U+0,u32(0x65ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e20:{NFSU2_TR(0x546e20);
__builtin_memmove((R+4),(R+24),4);
}
B546e22:{NFSU2_TR(0x546e22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546e27ull));
TAIL_STATIC(0x520ff0u,520);
}
B546e27:L546e27:{c.instructions+=6;NFSU2_TR(0x546e27);
u8 U[4];
w4(U+0,u32(0x89bb9cefull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e2c:{NFSU2_TR(0x546e2c);
u8 U[4];
w4(U+0,u32(0x4adcf095ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e31:{NFSU2_TR(0x546e31);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e33:{NFSU2_TR(0x546e33);
u8 U[4];
w4(U+0,u32(0x66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e35:{NFSU2_TR(0x546e35);
__builtin_memmove((R+4),(R+24),4);
}
B546e37:{NFSU2_TR(0x546e37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546e3cull));
TAIL_STATIC(0x520ff0u,520);
}
B546e3c:L546e3c:{c.instructions+=6;NFSU2_TR(0x546e3c);
u8 U[4];
w4(U+0,u32(0x89bb9cf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e41:{NFSU2_TR(0x546e41);
u8 U[4];
w4(U+0,u32(0x4adcf096ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e46:{NFSU2_TR(0x546e46);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e48:{NFSU2_TR(0x546e48);
u8 U[4];
w4(U+0,u32(0x67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e4a:{NFSU2_TR(0x546e4a);
__builtin_memmove((R+4),(R+24),4);
}
B546e4c:{NFSU2_TR(0x546e4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546e51ull));
TAIL_STATIC(0x520ff0u,520);
}
B546e51:L546e51:{c.instructions+=4;NFSU2_TR(0x546e51);
u8 U[4];
w4(U+0,u32(0x89bb9cf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e56:{NFSU2_TR(0x546e56);
u8 U[4];
w4(U+0,u32(0x4adcf097ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e5b:{NFSU2_TR(0x546e5b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e5d:{NFSU2_TR(0x546e5d);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e5f:L546e5f:{c.instructions+=2;NFSU2_TR(0x546e5f);
__builtin_memmove((R+4),(R+24),4);
}
B546e61:{NFSU2_TR(0x546e61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546e66ull));
TAIL_STATIC(0x520ff0u,520);
}
B546e66:L546e66:{c.instructions+=8;NFSU2_TR(0x546e66);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x156ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B546e6d:{NFSU2_TR(0x546e6d);
u8 U[13];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B546e75:{NFSU2_TR(0x546e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B546e78:{NFSU2_TR(0x546e78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e79:{NFSU2_TR(0x546e79);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B546e7c:{NFSU2_TR(0x546e7c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e7d:{NFSU2_TR(0x546e7d);
__builtin_memmove((R+4),(R+28),4);
}
B546e7f:{NFSU2_TR(0x546e7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546e82ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B546e82:L546e82:{c.instructions+=3;NFSU2_TR(0x546e82);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B546e89:{NFSU2_TR(0x546e89);
__builtin_memmove((R+4),(R+24),4);
}
B546e8b:{NFSU2_TR(0x546e8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L546eb7;}}
}
B546e8d:L546e8d:{c.instructions+=2;NFSU2_TR(0x546e8d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546e8e:{NFSU2_TR(0x546e8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546e93ull));
TAIL_STATIC(0x5453b0u,545);
}
B546e93:L546e93:{c.instructions+=3;NFSU2_TR(0x546e93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B546e96:{NFSU2_TR(0x546e96);
w4(R+4,u32(0x838980ull));
}
B546e9b:{NFSU2_TR(0x546e9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546ea0ull));
TAIL_STATIC(0x521530u,521);
}
B546ea0:L546ea0:{c.instructions+=5;NFSU2_TR(0x546ea0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ea1:{NFSU2_TR(0x546ea1);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ea6:{NFSU2_TR(0x546ea6);
u8 U[4];
w4(U+0,u32(0x2f5e7da3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546eab:{NFSU2_TR(0x546eab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546eac:{NFSU2_TR(0x546eac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546eb1ull));
TAIL_STATIC(0x537b80u,537);
}
B546eb1:L546eb1:{c.instructions+=3;NFSU2_TR(0x546eb1);
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
B546eb4:{NFSU2_TR(0x546eb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B546eb5:{NFSU2_TR(0x546eb5);
{goto L546ebc;}
}
B546eb7:L546eb7:{c.instructions+=1;NFSU2_TR(0x546eb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546ebcull));
TAIL_STATIC(0x545460u,545);
}
B546ebc:L546ebc:{c.instructions+=3;NFSU2_TR(0x546ebc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B546ebe:{NFSU2_TR(0x546ebe);
__builtin_memmove((R+4),(R+24),4);
}
B546ec0:{NFSU2_TR(0x546ec0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546ec3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B546ec3:L546ec3:{c.instructions+=3;NFSU2_TR(0x546ec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B546ec6:{NFSU2_TR(0x546ec6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B546ec8:{NFSU2_TR(0x546ec8);
if(r1(R+518)){{goto L546ecf;}}
}
B546eca:L546eca:{c.instructions+=2;NFSU2_TR(0x546eca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B546ecd:{NFSU2_TR(0x546ecd);
{goto L546ed1;}
}
B546ecf:L546ecf:{c.instructions+=1;NFSU2_TR(0x546ecf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B546ed1:L546ed1:{c.instructions+=2;NFSU2_TR(0x546ed1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B546ed4:{NFSU2_TR(0x546ed4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L546ee8;}}
}
B546ed6:L546ed6:{c.instructions+=3;NFSU2_TR(0x546ed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B546edc:{NFSU2_TR(0x546edc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546edd:{NFSU2_TR(0x546edd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546ee2ull));
TAIL_STATIC(0x50ca00u,50c);
}
B546ee2:L546ee2:{c.instructions+=4;NFSU2_TR(0x546ee2);
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
B546ee5:{NFSU2_TR(0x546ee5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B546ee6:{NFSU2_TR(0x546ee6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B546ee7:{NFSU2_TR(0x546ee7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B546ee8:L546ee8:{c.instructions+=3;NFSU2_TR(0x546ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B546eeb:{NFSU2_TR(0x546eeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B546eed:{NFSU2_TR(0x546eed);
if(r1(R+518)){{goto L546ef4;}}
}
B546eef:L546eef:{c.instructions+=2;NFSU2_TR(0x546eef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B546ef2:{NFSU2_TR(0x546ef2);
{goto L546ef6;}
}
B546ef4:L546ef4:{c.instructions+=1;NFSU2_TR(0x546ef4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B546ef6:L546ef6:{c.instructions+=2;NFSU2_TR(0x546ef6);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B546ef9:{NFSU2_TR(0x546ef9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L546f0d;}}
}
B546efb:L546efb:{c.instructions+=3;NFSU2_TR(0x546efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B546f01:{NFSU2_TR(0x546f01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546f02:{NFSU2_TR(0x546f02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546f07ull));
TAIL_STATIC(0x50ca00u,50c);
}
B546f07:L546f07:{c.instructions+=4;NFSU2_TR(0x546f07);
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
B546f0a:{NFSU2_TR(0x546f0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B546f0b:{NFSU2_TR(0x546f0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B546f0c:{NFSU2_TR(0x546f0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B546f0d:L546f0d:{c.instructions+=3;NFSU2_TR(0x546f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B546f13:{NFSU2_TR(0x546f13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546f14:{NFSU2_TR(0x546f14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546f19ull));
TAIL_STATIC(0x50ca50u,50c);
}
B546f19:L546f19:{c.instructions+=3;NFSU2_TR(0x546f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B546f1f:{NFSU2_TR(0x546f1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546f20:{NFSU2_TR(0x546f20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546f25ull));
TAIL_STATIC(0x50ca50u,50c);
}
B546f25:L546f25:{c.instructions+=2;NFSU2_TR(0x546f25);
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
B546f28:{NFSU2_TR(0x546f28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B546f29:L546f29:{c.instructions+=2;NFSU2_TR(0x546f29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B546f2a:{NFSU2_TR(0x546f2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B546f40:L546f40:{c.instructions+=7;NFSU2_TR(0x546f40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546f41:{NFSU2_TR(0x546f41);
__builtin_memmove((R+24),(R+4),4);
}
B546f43:{NFSU2_TR(0x546f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B546f46:{NFSU2_TR(0x546f46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546f47:{NFSU2_TR(0x546f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B546f4a:{NFSU2_TR(0x546f4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B546f4d:{NFSU2_TR(0x546f4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546f52ull));
TAIL_STATIC(0x51f7e0u,51f);
}
B546f52:L546f52:{c.instructions+=6;NFSU2_TR(0x546f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B546f58:{NFSU2_TR(0x546f58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546f59:{NFSU2_TR(0x546f59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546f5a:{NFSU2_TR(0x546f5a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546f5c:{NFSU2_TR(0x546f5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B546f62:{NFSU2_TR(0x546f62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546f67ull));
TAIL_STATIC(0x538080u,538);
}
B546f67:L546f67:{c.instructions+=2;NFSU2_TR(0x546f67);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B546f69:{NFSU2_TR(0x546f69);
if(r1(R+518)){TAIL_STATIC(0x547041u,547);}
}
B546f6f:L546f6f:{c.instructions+=4;NFSU2_TR(0x546f6f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546f70:{NFSU2_TR(0x546f70);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546f75:{NFSU2_TR(0x546f75);
__builtin_memmove((R+4),(R+28),4);
}
B546f77:{NFSU2_TR(0x546f77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546f7cull));
TAIL_STATIC(0x61b4e0u,61b);
}
B546f7c:L546f7c:{c.instructions+=4;NFSU2_TR(0x546f7c);
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
B546f7e:{NFSU2_TR(0x546f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B546f81:{NFSU2_TR(0x546f81);
__builtin_memmove((R+4),(R+28),4);
}
B546f83:{NFSU2_TR(0x546f83);
if(r1(R+518)){{goto L546f9f;}}
}
B546f85:L546f85:{c.instructions+=3;NFSU2_TR(0x546f85);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546f87:{NFSU2_TR(0x546f87);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546f8c:{NFSU2_TR(0x546f8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546f91ull));
TAIL_STATIC(0x61b500u,61b);
}
B546f91:L546f91:{c.instructions+=4;NFSU2_TR(0x546f91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546f92:{NFSU2_TR(0x546f92);
u8 U[4];
w4(U+0,u32(0xd28b9316ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546f97:{NFSU2_TR(0x546f97);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546f98:{NFSU2_TR(0x546f98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546f9dull));
TAIL_STATIC(0x495460u,495);
}
B546f9d:L546f9d:{c.instructions+=1;NFSU2_TR(0x546f9d);
{goto L546fb0;}
}
B546f9f:L546f9f:{c.instructions+=1;NFSU2_TR(0x546f9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546fa4ull));
TAIL_STATIC(0x610000u,610);
}
B546fa4:L546fa4:{c.instructions+=4;NFSU2_TR(0x546fa4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546fa5:{NFSU2_TR(0x546fa5);
u8 U[4];
w4(U+0,u32(0xd28b9316ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546faa:{NFSU2_TR(0x546faa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546fab:{NFSU2_TR(0x546fab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546fb0ull));
TAIL_STATIC(0x537b80u,537);
}
B546fb0:L546fb0:{c.instructions+=8;NFSU2_TR(0x546fb0);
__builtin_memmove((R+0),gp(0x850078),4);
}
B546fb5:{NFSU2_TR(0x546fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B546fb8:{NFSU2_TR(0x546fb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B546fbb:{NFSU2_TR(0x546fbb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B546fbe:{NFSU2_TR(0x546fbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B546fbf:{NFSU2_TR(0x546fbf);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546fc4:{NFSU2_TR(0x546fc4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546fc5:{NFSU2_TR(0x546fc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x547037u,547);}
}
B546fc7:L546fc7:{c.instructions+=1;NFSU2_TR(0x546fc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546fccull));
TAIL_STATIC(0x495520u,495);
}
B546fcc:L546fcc:{c.instructions+=5;NFSU2_TR(0x546fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B546fcf:{NFSU2_TR(0x546fcf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B546fd2:{NFSU2_TR(0x546fd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546fd3:{NFSU2_TR(0x546fd3);
__builtin_memmove((R+4),(R+24),4);
}
B546fd5:{NFSU2_TR(0x546fd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546fdaull));
TAIL_STATIC(0x50e5a0u,50e);
}
B546fda:L546fda:{c.instructions+=4;NFSU2_TR(0x546fda);
__builtin_memmove((R+28),(R+0),4);
}
B546fdc:{NFSU2_TR(0x546fdc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546fdd:{NFSU2_TR(0x546fdd);
w4(R+4,u32(0x838980ull));
}
B546fe2:{NFSU2_TR(0x546fe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546fe7ull));
TAIL_STATIC(0x5214d0u,521);
}
B546fe7:L546fe7:{c.instructions+=2;NFSU2_TR(0x546fe7);
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
B546fe9:{NFSU2_TR(0x546fe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L546ffa;}}
}
B546feb:L546feb:{c.instructions+=3;NFSU2_TR(0x546feb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546fec:{NFSU2_TR(0x546fec);
w4(R+4,u32(0x8392c0ull));
}
B546ff1:{NFSU2_TR(0x546ff1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546ff6ull));
TAIL_STATIC(0x6102f0u,610);
}
B546ff6:L546ff6:{c.instructions+=2;NFSU2_TR(0x546ff6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B546ff8:{NFSU2_TR(0x546ff8);
if(r1(R+518)){TAIL_STATIC(0x54701fu,547);}
}
B546ffa:L546ffa:{c.instructions+=4;NFSU2_TR(0x546ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B546ffd:{NFSU2_TR(0x546ffd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546ffe:{NFSU2_TR(0x546ffe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B546fff:{NFSU2_TR(0x546fff);
w4(R+4,u32(0x85ad40ull));
TAIL_STATIC(0x547004u,547);
}
XIT:NFSU2_TR_EXIT(0x546,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
