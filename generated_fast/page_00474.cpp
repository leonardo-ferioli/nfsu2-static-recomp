#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_45e(u8* __restrict R,Cpu& c);
u32 body_461(u8* __restrict R,Cpu& c);
u32 body_466(u8* __restrict R,Cpu& c);
u32 body_467(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_473(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x474,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x474,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_474(u8* __restrict R,Cpu& c);
u32 page_474(Cpu& c){return body_474(c.regs.data(),c);}
__attribute__((noinline)) u32 body_474(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x474002:goto L474002;
case 0x474008:c.instructions+=2;goto B474008;
case 0x47400b:c.instructions+=1;goto B47400b;
case 0x474010:goto L474010;
case 0x474014:c.instructions+=6;goto B474014;
case 0x474018:c.instructions+=5;goto B474018;
case 0x47401e:c.instructions+=4;goto B47401e;
case 0x474024:c.instructions+=3;goto B474024;
case 0x474025:c.instructions+=2;goto B474025;
case 0x474028:c.instructions+=1;goto B474028;
case 0x474030:goto L474030;
case 0x474033:c.instructions+=5;goto B474033;
case 0x474034:c.instructions+=4;goto B474034;
case 0x474036:c.instructions+=3;goto B474036;
case 0x47403c:c.instructions+=2;goto B47403c;
case 0x47403e:c.instructions+=1;goto B47403e;
case 0x474044:goto L474044;
case 0x474046:c.instructions+=2;goto B474046;
case 0x474048:c.instructions+=1;goto B474048;
case 0x47404b:goto L47404b;
case 0x474051:c.instructions+=13;goto B474051;
case 0x474057:c.instructions+=12;goto B474057;
case 0x47405d:c.instructions+=11;goto B47405d;
case 0x474063:c.instructions+=10;goto B474063;
case 0x474065:c.instructions+=9;goto B474065;
case 0x47406b:c.instructions+=8;goto B47406b;
case 0x47406e:c.instructions+=7;goto B47406e;
case 0x474072:c.instructions+=6;goto B474072;
case 0x474075:c.instructions+=5;goto B474075;
case 0x474077:c.instructions+=4;goto B474077;
case 0x47407a:c.instructions+=3;goto B47407a;
case 0x47407e:c.instructions+=2;goto B47407e;
case 0x474086:c.instructions+=1;goto B474086;
case 0x474088:goto L474088;
case 0x47408e:c.instructions+=4;goto B47408e;
case 0x474094:c.instructions+=3;goto B474094;
case 0x47409a:c.instructions+=2;goto B47409a;
case 0x47409e:c.instructions+=1;goto B47409e;
case 0x4740a2:goto L4740a2;
case 0x4740a3:c.instructions+=6;goto B4740a3;
case 0x4740a9:c.instructions+=5;goto B4740a9;
case 0x4740ac:c.instructions+=4;goto B4740ac;
case 0x4740ae:c.instructions+=3;goto B4740ae;
case 0x4740af:c.instructions+=2;goto B4740af;
case 0x4740b0:c.instructions+=1;goto B4740b0;
case 0x4740b2:goto L4740b2;
case 0x4740b4:c.instructions+=1;goto B4740b4;
case 0x4740b6:goto L4740b6;
case 0x4740b9:c.instructions+=1;goto B4740b9;
case 0x4740bb:goto L4740bb;
case 0x4740c0:goto L4740c0;
case 0x4740c2:c.instructions+=4;goto B4740c2;
case 0x4740c5:c.instructions+=3;goto B4740c5;
case 0x4740c7:c.instructions+=2;goto B4740c7;
case 0x4740cd:c.instructions+=1;goto B4740cd;
case 0x4740cf:goto L4740cf;
case 0x4740d1:c.instructions+=1;goto B4740d1;
case 0x4740d3:goto L4740d3;
case 0x4740d6:c.instructions+=1;goto B4740d6;
case 0x4740d8:goto L4740d8;
case 0x4740dd:goto L4740dd;
case 0x4740e3:c.instructions+=5;goto B4740e3;
case 0x4740e9:c.instructions+=4;goto B4740e9;
case 0x4740ec:c.instructions+=3;goto B4740ec;
case 0x4740ef:c.instructions+=2;goto B4740ef;
case 0x4740f1:c.instructions+=1;goto B4740f1;
case 0x4740f3:goto L4740f3;
case 0x4740f5:c.instructions+=1;goto B4740f5;
case 0x4740f7:goto L4740f7;
case 0x4740fa:c.instructions+=1;goto B4740fa;
case 0x4740fc:goto L4740fc;
case 0x474101:goto L474101;
case 0x474106:goto L474106;
case 0x47410c:c.instructions+=4;goto B47410c;
case 0x474112:c.instructions+=3;goto B474112;
case 0x474113:c.instructions+=2;goto B474113;
case 0x474114:c.instructions+=1;goto B474114;
case 0x474119:goto L474119;
case 0x47411b:c.instructions+=5;goto B47411b;
case 0x47411e:c.instructions+=4;goto B47411e;
case 0x474120:c.instructions+=3;goto B474120;
case 0x474122:c.instructions+=2;goto B474122;
case 0x474124:c.instructions+=1;goto B474124;
case 0x474127:goto L474127;
case 0x47412d:c.instructions+=3;goto B47412d;
case 0x47412e:c.instructions+=2;goto B47412e;
case 0x47412f:c.instructions+=1;goto B47412f;
case 0x474134:goto L474134;
case 0x474138:c.instructions+=3;goto B474138;
case 0x47413e:c.instructions+=2;goto B47413e;
case 0x474144:c.instructions+=1;goto B474144;
case 0x474149:goto L474149;
case 0x47414f:c.instructions+=3;goto B47414f;
case 0x474150:c.instructions+=2;goto B474150;
case 0x474151:c.instructions+=1;goto B474151;
case 0x474156:goto L474156;
case 0x47415c:c.instructions+=2;goto B47415c;
case 0x474162:c.instructions+=1;goto B474162;
case 0x474167:goto L474167;
case 0x47416d:c.instructions+=3;goto B47416d;
case 0x47416e:c.instructions+=2;goto B47416e;
case 0x47416f:c.instructions+=1;goto B47416f;
case 0x474174:goto L474174;
case 0x47417a:c.instructions+=3;goto B47417a;
case 0x47417b:c.instructions+=2;goto B47417b;
case 0x47417c:c.instructions+=1;goto B47417c;
case 0x474181:goto L474181;
case 0x474187:c.instructions+=4;goto B474187;
case 0x474188:c.instructions+=3;goto B474188;
case 0x47418a:c.instructions+=2;goto B47418a;
case 0x47418b:c.instructions+=1;goto B47418b;
case 0x474190:goto L474190;
case 0x474194:c.instructions+=5;goto B474194;
case 0x47419a:c.instructions+=4;goto B47419a;
case 0x47419d:c.instructions+=3;goto B47419d;
case 0x4741a2:c.instructions+=2;goto B4741a2;
case 0x4741a3:c.instructions+=1;goto B4741a3;
case 0x4741a8:goto L4741a8;
case 0x4741ae:c.instructions+=4;goto B4741ae;
case 0x4741b1:c.instructions+=3;goto B4741b1;
case 0x4741b3:c.instructions+=2;goto B4741b3;
case 0x4741b7:c.instructions+=1;goto B4741b7;
case 0x4741b9:goto L4741b9;
case 0x4741bf:c.instructions+=1;goto B4741bf;
case 0x4741c1:goto L4741c1;
case 0x4741c5:c.instructions+=7;goto B4741c5;
case 0x4741c6:c.instructions+=6;goto B4741c6;
case 0x4741c9:c.instructions+=5;goto B4741c9;
case 0x4741cd:c.instructions+=4;goto B4741cd;
case 0x4741d0:c.instructions+=3;goto B4741d0;
case 0x4741d6:c.instructions+=2;goto B4741d6;
case 0x4741d9:c.instructions+=1;goto B4741d9;
case 0x4741de:goto L4741de;
case 0x4741e2:goto L4741e2;
case 0x4741e6:c.instructions+=11;goto B4741e6;
case 0x4741ec:c.instructions+=10;goto B4741ec;
case 0x4741f2:c.instructions+=9;goto B4741f2;
case 0x4741f8:c.instructions+=8;goto B4741f8;
case 0x4741fe:c.instructions+=7;goto B4741fe;
case 0x474202:c.instructions+=6;goto B474202;
case 0x474208:c.instructions+=5;goto B474208;
case 0x47420b:c.instructions+=4;goto B47420b;
case 0x47420e:c.instructions+=3;goto B47420e;
case 0x474211:c.instructions+=2;goto B474211;
case 0x474213:c.instructions+=1;goto B474213;
case 0x474215:goto L474215;
case 0x474217:c.instructions+=1;goto B474217;
case 0x474219:goto L474219;
case 0x47421c:c.instructions+=1;goto B47421c;
case 0x47421e:goto L47421e;
case 0x474223:goto L474223;
case 0x474226:c.instructions+=3;goto B474226;
case 0x474228:c.instructions+=2;goto B474228;
case 0x47422e:c.instructions+=1;goto B47422e;
case 0x474230:goto L474230;
case 0x474232:c.instructions+=1;goto B474232;
case 0x474234:goto L474234;
case 0x474237:c.instructions+=1;goto B474237;
case 0x474239:goto L474239;
case 0x47423e:goto L47423e;
case 0x474244:c.instructions+=5;goto B474244;
case 0x47424a:c.instructions+=4;goto B47424a;
case 0x47424d:c.instructions+=3;goto B47424d;
case 0x474250:c.instructions+=2;goto B474250;
case 0x474252:c.instructions+=1;goto B474252;
case 0x474254:goto L474254;
case 0x474256:c.instructions+=1;goto B474256;
case 0x474258:goto L474258;
case 0x47425b:c.instructions+=1;goto B47425b;
case 0x47425d:goto L47425d;
case 0x474262:goto L474262;
case 0x474268:c.instructions+=3;goto B474268;
case 0x474269:c.instructions+=2;goto B474269;
case 0x47426a:c.instructions+=1;goto B47426a;
case 0x47426f:goto L47426f;
case 0x474271:c.instructions+=5;goto B474271;
case 0x474274:c.instructions+=4;goto B474274;
case 0x474276:c.instructions+=3;goto B474276;
case 0x474278:c.instructions+=2;goto B474278;
case 0x47427a:c.instructions+=1;goto B47427a;
case 0x47427d:goto L47427d;
case 0x474283:c.instructions+=3;goto B474283;
case 0x474284:c.instructions+=2;goto B474284;
case 0x474285:c.instructions+=1;goto B474285;
case 0x47428a:goto L47428a;
case 0x47428e:c.instructions+=3;goto B47428e;
case 0x474294:c.instructions+=2;goto B474294;
case 0x47429a:c.instructions+=1;goto B47429a;
case 0x47429f:goto L47429f;
case 0x4742a5:c.instructions+=3;goto B4742a5;
case 0x4742a6:c.instructions+=2;goto B4742a6;
case 0x4742a7:c.instructions+=1;goto B4742a7;
case 0x4742ac:goto L4742ac;
case 0x4742b2:c.instructions+=2;goto B4742b2;
case 0x4742b8:c.instructions+=1;goto B4742b8;
case 0x4742bd:goto L4742bd;
case 0x4742c3:c.instructions+=3;goto B4742c3;
case 0x4742c4:c.instructions+=2;goto B4742c4;
case 0x4742c5:c.instructions+=1;goto B4742c5;
case 0x4742ca:goto L4742ca;
case 0x4742d0:c.instructions+=3;goto B4742d0;
case 0x4742d1:c.instructions+=2;goto B4742d1;
case 0x4742d2:c.instructions+=1;goto B4742d2;
case 0x4742d7:goto L4742d7;
case 0x4742dd:c.instructions+=4;goto B4742dd;
case 0x4742de:c.instructions+=3;goto B4742de;
case 0x4742e0:c.instructions+=2;goto B4742e0;
case 0x4742e1:c.instructions+=1;goto B4742e1;
case 0x4742e6:goto L4742e6;
case 0x4742ec:c.instructions+=4;goto B4742ec;
case 0x4742ef:c.instructions+=3;goto B4742ef;
case 0x4742f4:c.instructions+=2;goto B4742f4;
case 0x4742f5:c.instructions+=1;goto B4742f5;
case 0x4742fa:goto L4742fa;
case 0x4742fb:c.instructions+=5;goto B4742fb;
case 0x4742fc:c.instructions+=4;goto B4742fc;
case 0x4742fd:c.instructions+=3;goto B4742fd;
case 0x4742fe:c.instructions+=2;goto B4742fe;
case 0x474301:c.instructions+=1;goto B474301;
case 0x474306:goto L474306;
case 0x474307:c.instructions+=2;goto B474307;
case 0x47430a:c.instructions+=1;goto B47430a;
case 0x474310:goto L474310;
case 0x474311:c.instructions+=11;goto B474311;
case 0x474312:c.instructions+=10;goto B474312;
case 0x474314:c.instructions+=9;goto B474314;
case 0x47431a:c.instructions+=8;goto B47431a;
case 0x474320:c.instructions+=7;goto B474320;
case 0x474326:c.instructions+=6;goto B474326;
case 0x47432c:c.instructions+=5;goto B47432c;
case 0x474336:c.instructions+=4;goto B474336;
case 0x474339:c.instructions+=3;goto B474339;
case 0x47433b:c.instructions+=2;goto B47433b;
case 0x47433d:c.instructions+=1;goto B47433d;
case 0x47433f:goto L47433f;
case 0x474344:goto L474344;
case 0x474346:goto L474346;
case 0x47434b:goto L47434b;
case 0x474351:c.instructions+=2;goto B474351;
case 0x474353:c.instructions+=1;goto B474353;
case 0x474359:goto L474359;
case 0x47435b:c.instructions+=5;goto B47435b;
case 0x47435c:c.instructions+=4;goto B47435c;
case 0x47435d:c.instructions+=3;goto B47435d;
case 0x47435f:c.instructions+=2;goto B47435f;
case 0x474361:c.instructions+=1;goto B474361;
case 0x474364:goto L474364;
case 0x47436a:c.instructions+=13;goto B47436a;
case 0x47436d:c.instructions+=12;goto B47436d;
case 0x474373:c.instructions+=11;goto B474373;
case 0x474376:c.instructions+=10;goto B474376;
case 0x47437c:c.instructions+=9;goto B47437c;
case 0x47437f:c.instructions+=8;goto B47437f;
case 0x474385:c.instructions+=7;goto B474385;
case 0x474388:c.instructions+=6;goto B474388;
case 0x47438c:c.instructions+=5;goto B47438c;
case 0x474392:c.instructions+=4;goto B474392;
case 0x474394:c.instructions+=3;goto B474394;
case 0x474397:c.instructions+=2;goto B474397;
case 0x47439d:c.instructions+=1;goto B47439d;
case 0x47439f:goto L47439f;
case 0x4743a4:c.instructions+=1;goto B4743a4;
case 0x4743a6:goto L4743a6;
case 0x4743a8:c.instructions+=1;goto B4743a8;
case 0x4743aa:goto L4743aa;
case 0x4743ac:goto L4743ac;
case 0x4743af:c.instructions+=4;goto B4743af;
case 0x4743b1:c.instructions+=3;goto B4743b1;
case 0x4743b7:c.instructions+=2;goto B4743b7;
case 0x4743bd:c.instructions+=1;goto B4743bd;
case 0x4743bf:goto L4743bf;
case 0x4743c4:c.instructions+=1;goto B4743c4;
case 0x4743c6:goto L4743c6;
case 0x4743c8:c.instructions+=1;goto B4743c8;
case 0x4743ca:goto L4743ca;
case 0x4743cc:goto L4743cc;
case 0x4743cf:c.instructions+=7;goto B4743cf;
case 0x4743d5:c.instructions+=6;goto B4743d5;
case 0x4743db:c.instructions+=5;goto B4743db;
case 0x4743de:c.instructions+=4;goto B4743de;
case 0x4743e4:c.instructions+=3;goto B4743e4;
case 0x4743e7:c.instructions+=2;goto B4743e7;
case 0x4743e9:c.instructions+=1;goto B4743e9;
case 0x4743eb:goto L4743eb;
case 0x4743ed:c.instructions+=1;goto B4743ed;
case 0x4743ef:goto L4743ef;
case 0x4743f5:c.instructions+=1;goto B4743f5;
case 0x4743f7:goto L4743f7;
case 0x4743fc:goto L4743fc;
case 0x4743ff:c.instructions+=2;goto B4743ff;
case 0x474405:c.instructions+=1;goto B474405;
case 0x47440a:goto L47440a;
case 0x47440c:c.instructions+=2;goto B47440c;
case 0x474412:c.instructions+=1;goto B474412;
case 0x474414:goto L474414;
case 0x474416:c.instructions+=1;goto B474416;
case 0x474418:goto L474418;
case 0x47441d:c.instructions+=1;goto B47441d;
case 0x47441f:goto L47441f;
case 0x474424:goto L474424;
case 0x474427:c.instructions+=3;goto B474427;
case 0x47442d:c.instructions+=2;goto B47442d;
case 0x474433:c.instructions+=1;goto B474433;
case 0x474438:goto L474438;
case 0x47443d:c.instructions+=4;goto B47443d;
case 0x47443f:c.instructions+=3;goto B47443f;
case 0x474445:c.instructions+=2;goto B474445;
case 0x47444b:c.instructions+=1;goto B47444b;
case 0x47444d:goto L47444d;
case 0x474452:c.instructions+=1;goto B474452;
case 0x474454:goto L474454;
case 0x47445a:c.instructions+=1;goto B47445a;
case 0x47445c:goto L47445c;
case 0x474461:goto L474461;
case 0x474464:c.instructions+=3;goto B474464;
case 0x47446a:c.instructions+=2;goto B47446a;
case 0x47446c:c.instructions+=1;goto B47446c;
case 0x47446f:goto L47446f;
case 0x474475:c.instructions+=1;goto B474475;
case 0x47447a:goto L47447a;
case 0x47447c:c.instructions+=2;goto B47447c;
case 0x474482:c.instructions+=1;goto B474482;
case 0x474484:goto L474484;
case 0x474486:c.instructions+=1;goto B474486;
case 0x474488:goto L474488;
case 0x47448d:c.instructions+=1;goto B47448d;
case 0x47448f:goto L47448f;
case 0x474494:goto L474494;
case 0x474497:c.instructions+=5;goto B474497;
case 0x47449d:c.instructions+=4;goto B47449d;
case 0x4744a3:c.instructions+=3;goto B4744a3;
case 0x4744a5:c.instructions+=2;goto B4744a5;
case 0x4744ab:c.instructions+=1;goto B4744ab;
case 0x4744ad:goto L4744ad;
case 0x4744af:c.instructions+=1;goto B4744af;
case 0x4744b1:goto L4744b1;
case 0x4744b6:c.instructions+=1;goto B4744b6;
case 0x4744b8:goto L4744b8;
case 0x4744bd:goto L4744bd;
case 0x4744c0:c.instructions+=4;goto B4744c0;
case 0x4744c2:c.instructions+=3;goto B4744c2;
case 0x4744c4:c.instructions+=2;goto B4744c4;
case 0x4744c6:c.instructions+=1;goto B4744c6;
case 0x4744c9:goto L4744c9;
case 0x4744cb:c.instructions+=2;goto B4744cb;
case 0x4744d1:c.instructions+=1;goto B4744d1;
case 0x4744d3:goto L4744d3;
case 0x4744d5:c.instructions+=1;goto B4744d5;
case 0x4744d7:goto L4744d7;
case 0x4744dc:c.instructions+=1;goto B4744dc;
case 0x4744de:goto L4744de;
case 0x4744e3:goto L4744e3;
case 0x4744e6:c.instructions+=5;goto B4744e6;
case 0x4744ea:c.instructions+=4;goto B4744ea;
case 0x4744f0:c.instructions+=3;goto B4744f0;
case 0x4744f5:c.instructions+=2;goto B4744f5;
case 0x4744fa:c.instructions+=1;goto B4744fa;
case 0x4744fc:goto L4744fc;
case 0x474501:c.instructions+=1;goto B474501;
case 0x474503:goto L474503;
case 0x474505:c.instructions+=1;goto B474505;
case 0x474507:goto L474507;
case 0x474509:goto L474509;
case 0x47450b:c.instructions+=4;goto B47450b;
case 0x47450e:c.instructions+=3;goto B47450e;
case 0x474514:c.instructions+=2;goto B474514;
case 0x474516:c.instructions+=1;goto B474516;
case 0x474518:goto L474518;
case 0x47451a:c.instructions+=1;goto B47451a;
case 0x47451c:goto L47451c;
case 0x474522:c.instructions+=1;goto B474522;
case 0x474524:goto L474524;
case 0x474529:goto L474529;
case 0x47452c:c.instructions+=7;goto B47452c;
case 0x474532:c.instructions+=6;goto B474532;
case 0x474538:c.instructions+=5;goto B474538;
case 0x47453a:c.instructions+=4;goto B47453a;
case 0x474540:c.instructions+=3;goto B474540;
case 0x474541:c.instructions+=2;goto B474541;
case 0x474542:c.instructions+=1;goto B474542;
case 0x474544:goto L474544;
case 0x474546:c.instructions+=1;goto B474546;
case 0x474548:goto L474548;
case 0x47454d:c.instructions+=1;goto B47454d;
case 0x47454f:goto L47454f;
case 0x474554:goto L474554;
case 0x474557:c.instructions+=5;goto B474557;
case 0x47455d:c.instructions+=4;goto B47455d;
case 0x474563:c.instructions+=3;goto B474563;
case 0x474565:c.instructions+=2;goto B474565;
case 0x47456b:c.instructions+=1;goto B47456b;
case 0x47456d:goto L47456d;
case 0x474574:c.instructions+=1;goto B474574;
case 0x474576:goto L474576;
case 0x47457d:goto L47457d;
case 0x474583:c.instructions+=5;goto B474583;
case 0x47458a:c.instructions+=4;goto B47458a;
case 0x474590:c.instructions+=3;goto B474590;
case 0x474592:c.instructions+=2;goto B474592;
case 0x474594:c.instructions+=1;goto B474594;
case 0x474596:goto L474596;
case 0x474599:c.instructions+=2;goto B474599;
case 0x47459a:c.instructions+=1;goto B47459a;
case 0x47459f:goto L47459f;
case 0x4745a0:c.instructions+=2;goto B4745a0;
case 0x4745a1:c.instructions+=1;goto B4745a1;
case 0x4745b0:goto L4745b0;
case 0x4745b1:c.instructions+=2;goto B4745b1;
case 0x4745b3:c.instructions+=1;goto B4745b3;
case 0x4745b8:goto L4745b8;
case 0x4745ba:c.instructions+=8;goto B4745ba;
case 0x4745c0:c.instructions+=7;goto B4745c0;
case 0x4745c6:c.instructions+=6;goto B4745c6;
case 0x4745cc:c.instructions+=5;goto B4745cc;
case 0x4745d2:c.instructions+=4;goto B4745d2;
case 0x4745d6:c.instructions+=3;goto B4745d6;
case 0x4745dc:c.instructions+=2;goto B4745dc;
case 0x4745e2:c.instructions+=1;goto B4745e2;
case 0x4745e7:goto L4745e7;
case 0x4745ea:c.instructions+=6;goto B4745ea;
case 0x4745ec:c.instructions+=5;goto B4745ec;
case 0x4745ef:c.instructions+=4;goto B4745ef;
case 0x4745f2:c.instructions+=3;goto B4745f2;
case 0x4745f5:c.instructions+=2;goto B4745f5;
case 0x4745f6:c.instructions+=1;goto B4745f6;
case 0x4745f8:goto L4745f8;
case 0x4745fe:c.instructions+=3;goto B4745fe;
case 0x474600:c.instructions+=2;goto B474600;
case 0x474601:c.instructions+=1;goto B474601;
case 0x474610:goto L474610;
case 0x474611:c.instructions+=6;goto B474611;
case 0x474615:c.instructions+=5;goto B474615;
case 0x474617:c.instructions+=4;goto B474617;
case 0x474618:c.instructions+=3;goto B474618;
case 0x47461a:c.instructions+=2;goto B47461a;
case 0x47461c:c.instructions+=1;goto B47461c;
case 0x47461f:goto L47461f;
case 0x474621:c.instructions+=4;goto B474621;
case 0x474624:c.instructions+=3;goto B474624;
case 0x474629:c.instructions+=2;goto B474629;
case 0x47462a:c.instructions+=1;goto B47462a;
case 0x47462c:goto L47462c;
case 0x47462f:c.instructions+=1;goto B47462f;
case 0x474631:goto L474631;
case 0x474636:c.instructions+=2;goto B474636;
case 0x474638:c.instructions+=1;goto B474638;
case 0x47463d:goto L47463d;
case 0x474640:c.instructions+=3;goto B474640;
case 0x474641:c.instructions+=2;goto B474641;
case 0x474642:c.instructions+=1;goto B474642;
case 0x474645:goto L474645;
case 0x47464b:c.instructions+=3;goto B47464b;
case 0x47464c:c.instructions+=2;goto B47464c;
case 0x47464d:c.instructions+=1;goto B47464d;
case 0x474650:goto L474650;
case 0x474656:c.instructions+=3;goto B474656;
case 0x474657:c.instructions+=2;goto B474657;
case 0x474658:c.instructions+=1;goto B474658;
case 0x474660:goto L474660;
case 0x474661:c.instructions+=9;goto B474661;
case 0x474665:c.instructions+=8;goto B474665;
case 0x474666:c.instructions+=7;goto B474666;
case 0x474668:c.instructions+=6;goto B474668;
case 0x47466f:c.instructions+=5;goto B47466f;
case 0x474670:c.instructions+=4;goto B474670;
case 0x474677:c.instructions+=3;goto B474677;
case 0x474679:c.instructions+=2;goto B474679;
case 0x474680:c.instructions+=1;goto B474680;
case 0x474682:goto L474682;
case 0x474684:c.instructions+=2;goto B474684;
case 0x474686:c.instructions+=1;goto B474686;
case 0x474688:goto L474688;
case 0x47468d:goto L47468d;
case 0x474691:c.instructions+=2;goto B474691;
case 0x474692:c.instructions+=1;goto B474692;
case 0x474697:goto L474697;
case 0x47469a:c.instructions+=1;goto B47469a;
case 0x47469f:goto L47469f;
case 0x4746a3:c.instructions+=4;goto B4746a3;
case 0x4746a5:c.instructions+=3;goto B4746a5;
case 0x4746a7:c.instructions+=2;goto B4746a7;
case 0x4746a8:c.instructions+=1;goto B4746a8;
case 0x4746ab:goto L4746ab;
case 0x4746b0:goto L4746b0;
case 0x4746bb:goto L4746bb;
case 0x4746bc:c.instructions+=3;goto B4746bc;
case 0x4746bd:c.instructions+=2;goto B4746bd;
case 0x4746be:c.instructions+=1;goto B4746be;
case 0x4746d0:goto L4746d0;
case 0x4746d1:c.instructions+=2;goto B4746d1;
case 0x4746d3:c.instructions+=1;goto B4746d3;
case 0x4746d8:goto L4746d8;
case 0x4746da:c.instructions+=14;goto B4746da;
case 0x4746e0:c.instructions+=13;goto B4746e0;
case 0x4746e6:c.instructions+=12;goto B4746e6;
case 0x4746ec:c.instructions+=11;goto B4746ec;
case 0x4746f2:c.instructions+=10;goto B4746f2;
case 0x4746f8:c.instructions+=9;goto B4746f8;
case 0x4746fe:c.instructions+=8;goto B4746fe;
case 0x474704:c.instructions+=7;goto B474704;
case 0x47470a:c.instructions+=6;goto B47470a;
case 0x474710:c.instructions+=5;goto B474710;
case 0x474714:c.instructions+=4;goto B474714;
case 0x47471a:c.instructions+=3;goto B47471a;
case 0x47471c:c.instructions+=2;goto B47471c;
case 0x47471d:c.instructions+=1;goto B47471d;
case 0x474720:goto L474720;
case 0x474721:c.instructions+=8;goto B474721;
case 0x474722:c.instructions+=7;goto B474722;
case 0x474723:c.instructions+=6;goto B474723;
case 0x474725:c.instructions+=5;goto B474725;
case 0x474726:c.instructions+=4;goto B474726;
case 0x47472c:c.instructions+=3;goto B47472c;
case 0x47472e:c.instructions+=2;goto B47472e;
case 0x474730:c.instructions+=1;goto B474730;
case 0x474732:goto L474732;
case 0x474734:c.instructions+=2;goto B474734;
case 0x474736:c.instructions+=1;goto B474736;
case 0x474738:goto L474738;
case 0x47473d:goto L47473d;
case 0x474741:c.instructions+=2;goto B474741;
case 0x474742:c.instructions+=1;goto B474742;
case 0x474747:goto L474747;
case 0x47474a:c.instructions+=1;goto B47474a;
case 0x47474f:goto L47474f;
case 0x474753:c.instructions+=4;goto B474753;
case 0x474755:c.instructions+=3;goto B474755;
case 0x474756:c.instructions+=2;goto B474756;
case 0x474757:c.instructions+=1;goto B474757;
case 0x47475a:goto L47475a;
case 0x47475f:goto L47475f;
case 0x474760:c.instructions+=6;goto B474760;
case 0x474766:c.instructions+=5;goto B474766;
case 0x47476c:c.instructions+=4;goto B47476c;
case 0x47476d:c.instructions+=3;goto B47476d;
case 0x47476e:c.instructions+=2;goto B47476e;
case 0x47476f:c.instructions+=1;goto B47476f;
case 0x474770:goto L474770;
case 0x474771:c.instructions+=5;goto B474771;
case 0x474776:c.instructions+=4;goto B474776;
case 0x474777:c.instructions+=3;goto B474777;
case 0x474779:c.instructions+=2;goto B474779;
case 0x47477c:c.instructions+=1;goto B47477c;
case 0x474782:goto L474782;
case 0x474784:c.instructions+=1;goto B474784;
case 0x474789:goto L474789;
case 0x47478c:c.instructions+=2;goto B47478c;
case 0x47478e:c.instructions+=1;goto B47478e;
case 0x474794:goto L474794;
case 0x47479a:c.instructions+=11;goto B47479a;
case 0x4747a0:c.instructions+=10;goto B4747a0;
case 0x4747a3:c.instructions+=9;goto B4747a3;
case 0x4747a9:c.instructions+=8;goto B4747a9;
case 0x4747af:c.instructions+=7;goto B4747af;
case 0x4747b2:c.instructions+=6;goto B4747b2;
case 0x4747b8:c.instructions+=5;goto B4747b8;
case 0x4747be:c.instructions+=4;goto B4747be;
case 0x4747c0:c.instructions+=3;goto B4747c0;
case 0x4747c3:c.instructions+=2;goto B4747c3;
case 0x4747c9:c.instructions+=1;goto B4747c9;
case 0x4747cb:goto L4747cb;
case 0x4747cd:c.instructions+=1;goto B4747cd;
case 0x4747cf:goto L4747cf;
case 0x4747d1:c.instructions+=1;goto B4747d1;
case 0x4747d6:goto L4747d6;
case 0x4747d8:goto L4747d8;
case 0x4747da:c.instructions+=1;goto B4747da;
case 0x4747dc:goto L4747dc;
case 0x4747e2:c.instructions+=2;goto B4747e2;
case 0x4747e4:c.instructions+=1;goto B4747e4;
case 0x4747e6:goto L4747e6;
case 0x4747e8:c.instructions+=1;goto B4747e8;
case 0x4747ed:goto L4747ed;
case 0x4747f1:c.instructions+=9;goto B4747f1;
case 0x4747f7:c.instructions+=8;goto B4747f7;
case 0x4747fb:c.instructions+=7;goto B4747fb;
case 0x474801:c.instructions+=6;goto B474801;
case 0x474805:c.instructions+=5;goto B474805;
case 0x47480b:c.instructions+=4;goto B47480b;
case 0x474811:c.instructions+=3;goto B474811;
case 0x474813:c.instructions+=2;goto B474813;
case 0x474816:c.instructions+=1;goto B474816;
case 0x47481c:goto L47481c;
case 0x474821:c.instructions+=2;goto B474821;
case 0x474823:c.instructions+=1;goto B474823;
case 0x474829:goto L474829;
case 0x47482e:c.instructions+=2;goto B47482e;
case 0x474830:c.instructions+=1;goto B474830;
case 0x474836:goto L474836;
case 0x47483a:c.instructions+=4;goto B47483a;
case 0x474840:c.instructions+=3;goto B474840;
case 0x474842:c.instructions+=2;goto B474842;
case 0x474845:c.instructions+=1;goto B474845;
case 0x47484b:goto L47484b;
case 0x474851:c.instructions+=2;goto B474851;
case 0x474853:c.instructions+=1;goto B474853;
case 0x474855:goto L474855;
case 0x47485b:c.instructions+=3;goto B47485b;
case 0x474861:c.instructions+=2;goto B474861;
case 0x474864:c.instructions+=1;goto B474864;
case 0x474869:goto L474869;
case 0x47486b:c.instructions+=1;goto B47486b;
case 0x474871:goto L474871;
case 0x474878:c.instructions+=1;goto B474878;
case 0x47487a:goto L47487a;
case 0x474881:goto L474881;
case 0x474883:c.instructions+=2;goto B474883;
case 0x474885:c.instructions+=1;goto B474885;
case 0x474888:goto L474888;
case 0x47488a:c.instructions+=1;goto B47488a;
case 0x47488f:goto L47488f;
case 0x474892:c.instructions+=4;goto B474892;
case 0x474894:c.instructions+=3;goto B474894;
case 0x474898:c.instructions+=2;goto B474898;
case 0x47489c:c.instructions+=1;goto B47489c;
case 0x47489e:goto L47489e;
case 0x4748a4:goto L4748a4;
case 0x4748aa:c.instructions+=5;goto B4748aa;
case 0x4748b0:c.instructions+=4;goto B4748b0;
case 0x4748b1:c.instructions+=3;goto B4748b1;
case 0x4748b7:c.instructions+=2;goto B4748b7;
case 0x4748bd:c.instructions+=1;goto B4748bd;
case 0x4748bf:goto L4748bf;
case 0x4748c0:c.instructions+=3;goto B4748c0;
case 0x4748c3:c.instructions+=2;goto B4748c3;
case 0x4748c9:c.instructions+=1;goto B4748c9;
case 0x4748cb:goto L4748cb;
case 0x4748d5:c.instructions+=1;goto B4748d5;
case 0x4748d7:goto L4748d7;
case 0x4748dd:c.instructions+=2;goto B4748dd;
case 0x4748df:c.instructions+=1;goto B4748df;
case 0x4748e1:goto L4748e1;
case 0x4748e7:c.instructions+=2;goto B4748e7;
case 0x4748e9:c.instructions+=1;goto B4748e9;
case 0x4748eb:goto L4748eb;
case 0x4748ed:c.instructions+=1;goto B4748ed;
case 0x4748f2:goto L4748f2;
case 0x4748f8:c.instructions+=2;goto B4748f8;
case 0x4748fa:c.instructions+=1;goto B4748fa;
case 0x4748fc:goto L4748fc;
case 0x474902:c.instructions+=6;goto B474902;
case 0x474906:c.instructions+=5;goto B474906;
case 0x47490c:c.instructions+=4;goto B47490c;
case 0x474912:c.instructions+=3;goto B474912;
case 0x474914:c.instructions+=2;goto B474914;
case 0x474917:c.instructions+=1;goto B474917;
case 0x474919:goto L474919;
case 0x47491b:c.instructions+=2;goto B47491b;
case 0x47491d:c.instructions+=1;goto B47491d;
case 0x474920:goto L474920;
case 0x474921:c.instructions+=2;goto B474921;
case 0x474922:c.instructions+=1;goto B474922;
case 0x474930:goto L474930;
case 0x474931:c.instructions+=4;goto B474931;
case 0x474932:c.instructions+=3;goto B474932;
case 0x474933:c.instructions+=2;goto B474933;
case 0x474935:c.instructions+=1;goto B474935;
case 0x47493a:goto L47493a;
case 0x47493c:c.instructions+=10;goto B47493c;
case 0x474942:c.instructions+=9;goto B474942;
case 0x474948:c.instructions+=8;goto B474948;
case 0x47494e:c.instructions+=7;goto B47494e;
case 0x474954:c.instructions+=6;goto B474954;
case 0x474958:c.instructions+=5;goto B474958;
case 0x47495e:c.instructions+=4;goto B47495e;
case 0x474964:c.instructions+=3;goto B474964;
case 0x474969:c.instructions+=2;goto B474969;
case 0x47496e:c.instructions+=1;goto B47496e;
case 0x474973:goto L474973;
case 0x474976:c.instructions+=7;goto B474976;
case 0x474979:c.instructions+=6;goto B474979;
case 0x47497b:c.instructions+=5;goto B47497b;
case 0x47497e:c.instructions+=4;goto B47497e;
case 0x474981:c.instructions+=3;goto B474981;
case 0x474984:c.instructions+=2;goto B474984;
case 0x474985:c.instructions+=1;goto B474985;
case 0x474987:goto L474987;
case 0x47498d:c.instructions+=1;goto B47498d;
case 0x474992:goto L474992;
case 0x474995:c.instructions+=7;goto B474995;
case 0x474998:c.instructions+=6;goto B474998;
case 0x47499a:c.instructions+=5;goto B47499a;
case 0x47499d:c.instructions+=4;goto B47499d;
case 0x4749a0:c.instructions+=3;goto B4749a0;
case 0x4749a3:c.instructions+=2;goto B4749a3;
case 0x4749a4:c.instructions+=1;goto B4749a4;
case 0x4749a6:goto L4749a6;
case 0x4749ac:c.instructions+=2;goto B4749ac;
case 0x4749b2:c.instructions+=1;goto B4749b2;
case 0x4749b7:goto L4749b7;
case 0x4749ba:c.instructions+=4;goto B4749ba;
case 0x4749bc:c.instructions+=3;goto B4749bc;
case 0x4749bf:c.instructions+=2;goto B4749bf;
case 0x4749c0:c.instructions+=1;goto B4749c0;
case 0x4749c2:goto L4749c2;
case 0x4749c3:c.instructions+=4;goto B4749c3;
case 0x4749c5:c.instructions+=3;goto B4749c5;
case 0x4749c6:c.instructions+=2;goto B4749c6;
case 0x4749c7:c.instructions+=1;goto B4749c7;
case 0x4749d0:goto L4749d0;
case 0x4749d2:c.instructions+=11;goto B4749d2;
case 0x4749d7:c.instructions+=10;goto B4749d7;
case 0x4749dd:c.instructions+=9;goto B4749dd;
case 0x4749de:c.instructions+=8;goto B4749de;
case 0x4749e5:c.instructions+=7;goto B4749e5;
case 0x4749e6:c.instructions+=6;goto B4749e6;
case 0x4749e7:c.instructions+=5;goto B4749e7;
case 0x4749e9:c.instructions+=4;goto B4749e9;
case 0x4749ed:c.instructions+=3;goto B4749ed;
case 0x4749f3:c.instructions+=2;goto B4749f3;
case 0x4749fb:c.instructions+=1;goto B4749fb;
case 0x474a00:goto L474a00;
case 0x474a04:c.instructions+=5;goto B474a04;
case 0x474a0a:c.instructions+=4;goto B474a0a;
case 0x474a0b:c.instructions+=3;goto B474a0b;
case 0x474a12:c.instructions+=2;goto B474a12;
case 0x474a15:c.instructions+=1;goto B474a15;
case 0x474a20:goto L474a20;
case 0x474a21:c.instructions+=9;goto B474a21;
case 0x474a22:c.instructions+=8;goto B474a22;
case 0x474a23:c.instructions+=7;goto B474a23;
case 0x474a24:c.instructions+=6;goto B474a24;
case 0x474a26:c.instructions+=5;goto B474a26;
case 0x474a2c:c.instructions+=4;goto B474a2c;
case 0x474a2f:c.instructions+=3;goto B474a2f;
case 0x474a31:c.instructions+=2;goto B474a31;
case 0x474a32:c.instructions+=1;goto B474a32;
case 0x474a38:goto L474a38;
case 0x474a3e:c.instructions+=3;goto B474a3e;
case 0x474a40:c.instructions+=2;goto B474a40;
case 0x474a42:c.instructions+=1;goto B474a42;
case 0x474a44:goto L474a44;
case 0x474a4a:c.instructions+=3;goto B474a4a;
case 0x474a4c:c.instructions+=2;goto B474a4c;
case 0x474a51:c.instructions+=1;goto B474a51;
case 0x474a57:goto L474a57;
case 0x474a5a:c.instructions+=5;goto B474a5a;
case 0x474a60:c.instructions+=4;goto B474a60;
case 0x474a63:c.instructions+=3;goto B474a63;
case 0x474a69:c.instructions+=2;goto B474a69;
case 0x474a6e:c.instructions+=1;goto B474a6e;
case 0x474a70:goto L474a70;
case 0x474a75:c.instructions+=4;goto B474a75;
case 0x474a76:c.instructions+=3;goto B474a76;
case 0x474a78:c.instructions+=2;goto B474a78;
case 0x474a7a:c.instructions+=1;goto B474a7a;
case 0x474a7f:goto L474a7f;
case 0x474a84:c.instructions+=6;goto B474a84;
case 0x474a86:c.instructions+=5;goto B474a86;
case 0x474a89:c.instructions+=4;goto B474a89;
case 0x474a8b:c.instructions+=3;goto B474a8b;
case 0x474a8c:c.instructions+=2;goto B474a8c;
case 0x474a92:c.instructions+=1;goto B474a92;
case 0x474a94:goto L474a94;
case 0x474a99:c.instructions+=4;goto B474a99;
case 0x474a9a:c.instructions+=3;goto B474a9a;
case 0x474a9c:c.instructions+=2;goto B474a9c;
case 0x474a9e:c.instructions+=1;goto B474a9e;
case 0x474aa3:goto L474aa3;
case 0x474aa8:c.instructions+=5;goto B474aa8;
case 0x474aaa:c.instructions+=4;goto B474aaa;
case 0x474aad:c.instructions+=3;goto B474aad;
case 0x474aaf:c.instructions+=2;goto B474aaf;
case 0x474ab0:c.instructions+=1;goto B474ab0;
case 0x474ab6:goto L474ab6;
case 0x474abb:c.instructions+=4;goto B474abb;
case 0x474ac1:c.instructions+=3;goto B474ac1;
case 0x474ac2:c.instructions+=2;goto B474ac2;
case 0x474ac5:c.instructions+=1;goto B474ac5;
case 0x474aca:goto L474aca;
case 0x474acd:c.instructions+=8;goto B474acd;
case 0x474ad0:c.instructions+=7;goto B474ad0;
case 0x474ad3:c.instructions+=6;goto B474ad3;
case 0x474ad5:c.instructions+=5;goto B474ad5;
case 0x474adb:c.instructions+=4;goto B474adb;
case 0x474ae1:c.instructions+=3;goto B474ae1;
case 0x474ae7:c.instructions+=2;goto B474ae7;
case 0x474ae8:c.instructions+=1;goto B474ae8;
case 0x474aed:goto L474aed;
case 0x474af0:c.instructions+=2;goto B474af0;
case 0x474af5:c.instructions+=1;goto B474af5;
case 0x474af7:goto L474af7;
case 0x474afc:c.instructions+=5;goto B474afc;
case 0x474aff:c.instructions+=4;goto B474aff;
case 0x474b04:c.instructions+=3;goto B474b04;
case 0x474b05:c.instructions+=2;goto B474b05;
case 0x474b07:c.instructions+=1;goto B474b07;
case 0x474b0c:goto L474b0c;
case 0x474b0f:c.instructions+=2;goto B474b0f;
case 0x474b11:c.instructions+=1;goto B474b11;
case 0x474b13:goto L474b13;
case 0x474b14:c.instructions+=2;goto B474b14;
case 0x474b16:c.instructions+=1;goto B474b16;
case 0x474b1b:goto L474b1b;
case 0x474b1d:goto L474b1d;
case 0x474b1f:goto L474b1f;
case 0x474b25:c.instructions+=4;goto B474b25;
case 0x474b26:c.instructions+=3;goto B474b26;
case 0x474b28:c.instructions+=2;goto B474b28;
case 0x474b2f:c.instructions+=1;goto B474b2f;
case 0x474b34:goto L474b34;
case 0x474b3b:c.instructions+=2;goto B474b3b;
case 0x474b41:c.instructions+=1;goto B474b41;
case 0x474b48:goto L474b48;
case 0x474b4e:c.instructions+=3;goto B474b4e;
case 0x474b54:c.instructions+=2;goto B474b54;
case 0x474b56:c.instructions+=1;goto B474b56;
case 0x474b5c:goto L474b5c;
case 0x474b62:c.instructions+=3;goto B474b62;
case 0x474b64:c.instructions+=2;goto B474b64;
case 0x474b66:c.instructions+=1;goto B474b66;
case 0x474b68:goto L474b68;
case 0x474b6e:c.instructions+=3;goto B474b6e;
case 0x474b70:c.instructions+=2;goto B474b70;
case 0x474b75:c.instructions+=1;goto B474b75;
case 0x474b7b:goto L474b7b;
case 0x474b80:c.instructions+=7;goto B474b80;
case 0x474b86:c.instructions+=6;goto B474b86;
case 0x474b87:c.instructions+=5;goto B474b87;
case 0x474b8d:c.instructions+=4;goto B474b8d;
case 0x474b92:c.instructions+=3;goto B474b92;
case 0x474b94:c.instructions+=2;goto B474b94;
case 0x474b96:c.instructions+=1;goto B474b96;
case 0x474b9b:goto L474b9b;
case 0x474ba0:c.instructions+=14;goto B474ba0;
case 0x474ba2:c.instructions+=13;goto B474ba2;
case 0x474ba6:c.instructions+=12;goto B474ba6;
case 0x474ba8:c.instructions+=11;goto B474ba8;
case 0x474ba9:c.instructions+=10;goto B474ba9;
case 0x474bac:c.instructions+=9;goto B474bac;
case 0x474bb2:c.instructions+=8;goto B474bb2;
case 0x474bb5:c.instructions+=7;goto B474bb5;
case 0x474bbb:c.instructions+=6;goto B474bbb;
case 0x474bc1:c.instructions+=5;goto B474bc1;
case 0x474bc7:c.instructions+=4;goto B474bc7;
case 0x474bcd:c.instructions+=3;goto B474bcd;
case 0x474bce:c.instructions+=2;goto B474bce;
case 0x474bd1:c.instructions+=1;goto B474bd1;
case 0x474bd6:goto L474bd6;
case 0x474bd9:c.instructions+=7;goto B474bd9;
case 0x474bdd:c.instructions+=6;goto B474bdd;
case 0x474be4:c.instructions+=5;goto B474be4;
case 0x474bee:c.instructions+=4;goto B474bee;
case 0x474bf4:c.instructions+=3;goto B474bf4;
case 0x474bf5:c.instructions+=2;goto B474bf5;
case 0x474bf9:c.instructions+=1;goto B474bf9;
case 0x474bfe:goto L474bfe;
case 0x474c01:c.instructions+=2;goto B474c01;
case 0x474c06:c.instructions+=1;goto B474c06;
case 0x474c08:goto L474c08;
case 0x474c0d:c.instructions+=5;goto B474c0d;
case 0x474c10:c.instructions+=4;goto B474c10;
case 0x474c15:c.instructions+=3;goto B474c15;
case 0x474c16:c.instructions+=2;goto B474c16;
case 0x474c18:c.instructions+=1;goto B474c18;
case 0x474c1d:goto L474c1d;
case 0x474c20:c.instructions+=2;goto B474c20;
case 0x474c22:c.instructions+=1;goto B474c22;
case 0x474c24:goto L474c24;
case 0x474c28:c.instructions+=3;goto B474c28;
case 0x474c29:c.instructions+=2;goto B474c29;
case 0x474c2b:c.instructions+=1;goto B474c2b;
case 0x474c30:goto L474c30;
case 0x474c32:goto L474c32;
case 0x474c34:goto L474c34;
case 0x474c35:c.instructions+=3;goto B474c35;
case 0x474c37:c.instructions+=2;goto B474c37;
case 0x474c3e:c.instructions+=1;goto B474c3e;
case 0x474c43:goto L474c43;
case 0x474c4a:c.instructions+=2;goto B474c4a;
case 0x474c50:c.instructions+=1;goto B474c50;
case 0x474c57:goto L474c57;
case 0x474c58:c.instructions+=5;goto B474c58;
case 0x474c59:c.instructions+=4;goto B474c59;
case 0x474c5a:c.instructions+=3;goto B474c5a;
case 0x474c5b:c.instructions+=2;goto B474c5b;
case 0x474c5c:c.instructions+=1;goto B474c5c;
case 0x474c60:goto L474c60;
case 0x474c61:c.instructions+=2;goto B474c61;
case 0x474c63:c.instructions+=1;goto B474c63;
case 0x474c68:goto L474c68;
case 0x474c6a:c.instructions+=16;goto B474c6a;
case 0x474c70:c.instructions+=15;goto B474c70;
case 0x474c76:c.instructions+=14;goto B474c76;
case 0x474c7c:c.instructions+=13;goto B474c7c;
case 0x474c82:c.instructions+=12;goto B474c82;
case 0x474c86:c.instructions+=11;goto B474c86;
case 0x474c8c:c.instructions+=10;goto B474c8c;
case 0x474c92:c.instructions+=9;goto B474c92;
case 0x474c98:c.instructions+=8;goto B474c98;
case 0x474c9e:c.instructions+=7;goto B474c9e;
case 0x474ca4:c.instructions+=6;goto B474ca4;
case 0x474caa:c.instructions+=5;goto B474caa;
case 0x474cb0:c.instructions+=4;goto B474cb0;
case 0x474cb6:c.instructions+=3;goto B474cb6;
case 0x474cb8:c.instructions+=2;goto B474cb8;
case 0x474cb9:c.instructions+=1;goto B474cb9;
case 0x474cc0:goto L474cc0;
case 0x474cc1:c.instructions+=6;goto B474cc1;
case 0x474cc5:c.instructions+=5;goto B474cc5;
case 0x474cc7:c.instructions+=4;goto B474cc7;
case 0x474cc8:c.instructions+=3;goto B474cc8;
case 0x474cca:c.instructions+=2;goto B474cca;
case 0x474ccc:c.instructions+=1;goto B474ccc;
case 0x474ccf:goto L474ccf;
case 0x474cd1:c.instructions+=4;goto B474cd1;
case 0x474cd4:c.instructions+=3;goto B474cd4;
case 0x474cd9:c.instructions+=2;goto B474cd9;
case 0x474cdc:c.instructions+=1;goto B474cdc;
case 0x474cde:goto L474cde;
case 0x474cdf:c.instructions+=1;goto B474cdf;
case 0x474ce1:goto L474ce1;
case 0x474ce6:c.instructions+=2;goto B474ce6;
case 0x474ce8:c.instructions+=1;goto B474ce8;
case 0x474ced:goto L474ced;
case 0x474cf0:c.instructions+=3;goto B474cf0;
case 0x474cf1:c.instructions+=2;goto B474cf1;
case 0x474cf2:c.instructions+=1;goto B474cf2;
case 0x474cf5:goto L474cf5;
case 0x474cfb:c.instructions+=3;goto B474cfb;
case 0x474cfc:c.instructions+=2;goto B474cfc;
case 0x474cfd:c.instructions+=1;goto B474cfd;
case 0x474d00:goto L474d00;
case 0x474d06:c.instructions+=3;goto B474d06;
case 0x474d07:c.instructions+=2;goto B474d07;
case 0x474d08:c.instructions+=1;goto B474d08;
case 0x474d10:goto L474d10;
case 0x474d11:c.instructions+=2;goto B474d11;
case 0x474d13:c.instructions+=1;goto B474d13;
case 0x474d18:goto L474d18;
case 0x474d1a:c.instructions+=17;goto B474d1a;
case 0x474d20:c.instructions+=16;goto B474d20;
case 0x474d26:c.instructions+=15;goto B474d26;
case 0x474d2c:c.instructions+=14;goto B474d2c;
case 0x474d32:c.instructions+=13;goto B474d32;
case 0x474d36:c.instructions+=12;goto B474d36;
case 0x474d3c:c.instructions+=11;goto B474d3c;
case 0x474d42:c.instructions+=10;goto B474d42;
case 0x474d48:c.instructions+=9;goto B474d48;
case 0x474d4e:c.instructions+=8;goto B474d4e;
case 0x474d58:c.instructions+=7;goto B474d58;
case 0x474d62:c.instructions+=6;goto B474d62;
case 0x474d68:c.instructions+=5;goto B474d68;
case 0x474d6e:c.instructions+=4;goto B474d6e;
case 0x474d74:c.instructions+=3;goto B474d74;
case 0x474d76:c.instructions+=2;goto B474d76;
case 0x474d77:c.instructions+=1;goto B474d77;
case 0x474d80:goto L474d80;
case 0x474d82:c.instructions+=13;goto B474d82;
case 0x474d87:c.instructions+=12;goto B474d87;
case 0x474d8d:c.instructions+=11;goto B474d8d;
case 0x474d8e:c.instructions+=10;goto B474d8e;
case 0x474d95:c.instructions+=9;goto B474d95;
case 0x474d96:c.instructions+=8;goto B474d96;
case 0x474d97:c.instructions+=7;goto B474d97;
case 0x474d99:c.instructions+=6;goto B474d99;
case 0x474d9d:c.instructions+=5;goto B474d9d;
case 0x474da3:c.instructions+=4;goto B474da3;
case 0x474da9:c.instructions+=3;goto B474da9;
case 0x474dab:c.instructions+=2;goto B474dab;
case 0x474db3:c.instructions+=1;goto B474db3;
case 0x474db5:goto L474db5;
case 0x474db7:c.instructions+=2;goto B474db7;
case 0x474db9:c.instructions+=1;goto B474db9;
case 0x474dbb:goto L474dbb;
case 0x474dbf:c.instructions+=6;goto B474dbf;
case 0x474dc9:c.instructions+=5;goto B474dc9;
case 0x474dcf:c.instructions+=4;goto B474dcf;
case 0x474dd0:c.instructions+=3;goto B474dd0;
case 0x474dd7:c.instructions+=2;goto B474dd7;
case 0x474dda:c.instructions+=1;goto B474dda;
case 0x474de0:goto L474de0;
case 0x474de1:c.instructions+=8;goto B474de1;
case 0x474de2:c.instructions+=7;goto B474de2;
case 0x474de4:c.instructions+=6;goto B474de4;
case 0x474dea:c.instructions+=5;goto B474dea;
case 0x474ded:c.instructions+=4;goto B474ded;
case 0x474df3:c.instructions+=3;goto B474df3;
case 0x474df4:c.instructions+=2;goto B474df4;
case 0x474df9:c.instructions+=1;goto B474df9;
case 0x474dfe:goto L474dfe;
case 0x474e04:c.instructions+=6;goto B474e04;
case 0x474e08:c.instructions+=5;goto B474e08;
case 0x474e0c:c.instructions+=4;goto B474e0c;
case 0x474e12:c.instructions+=3;goto B474e12;
case 0x474e14:c.instructions+=2;goto B474e14;
case 0x474e17:c.instructions+=1;goto B474e17;
case 0x474e19:goto L474e19;
case 0x474e1d:c.instructions+=5;goto B474e1d;
case 0x474e23:c.instructions+=4;goto B474e23;
case 0x474e27:c.instructions+=3;goto B474e27;
case 0x474e29:c.instructions+=2;goto B474e29;
case 0x474e2c:c.instructions+=1;goto B474e2c;
case 0x474e2e:goto L474e2e;
case 0x474e30:c.instructions+=1;goto B474e30;
case 0x474e36:goto L474e36;
case 0x474e3c:c.instructions+=5;goto B474e3c;
case 0x474e40:c.instructions+=4;goto B474e40;
case 0x474e46:c.instructions+=3;goto B474e46;
case 0x474e48:c.instructions+=2;goto B474e48;
case 0x474e4b:c.instructions+=1;goto B474e4b;
case 0x474e4d:goto L474e4d;
case 0x474e51:c.instructions+=5;goto B474e51;
case 0x474e57:c.instructions+=4;goto B474e57;
case 0x474e5b:c.instructions+=3;goto B474e5b;
case 0x474e5d:c.instructions+=2;goto B474e5d;
case 0x474e60:c.instructions+=1;goto B474e60;
case 0x474e62:goto L474e62;
case 0x474e64:c.instructions+=2;goto B474e64;
case 0x474e6c:c.instructions+=1;goto B474e6c;
case 0x474e6e:goto L474e6e;
case 0x474e74:c.instructions+=1;goto B474e74;
case 0x474e76:goto L474e76;
case 0x474e7c:goto L474e7c;
case 0x474e80:goto L474e80;
case 0x474e86:c.instructions+=4;goto B474e86;
case 0x474e89:c.instructions+=3;goto B474e89;
case 0x474e8c:c.instructions+=2;goto B474e8c;
case 0x474e8f:c.instructions+=1;goto B474e8f;
case 0x474e91:goto L474e91;
case 0x474e98:c.instructions+=1;goto B474e98;
case 0x474e9f:goto L474e9f;
case 0x474ea4:c.instructions+=7;goto B474ea4;
case 0x474ea8:c.instructions+=6;goto B474ea8;
case 0x474ea9:c.instructions+=5;goto B474ea9;
case 0x474eaf:c.instructions+=4;goto B474eaf;
case 0x474eb4:c.instructions+=3;goto B474eb4;
case 0x474eb6:c.instructions+=2;goto B474eb6;
case 0x474eb8:c.instructions+=1;goto B474eb8;
case 0x474ebd:goto L474ebd;
case 0x474ec0:c.instructions+=7;goto B474ec0;
case 0x474ec2:c.instructions+=6;goto B474ec2;
case 0x474ec4:c.instructions+=5;goto B474ec4;
case 0x474ec6:c.instructions+=4;goto B474ec6;
case 0x474ec9:c.instructions+=3;goto B474ec9;
case 0x474eca:c.instructions+=2;goto B474eca;
case 0x474ed0:c.instructions+=1;goto B474ed0;
case 0x474ed2:goto L474ed2;
case 0x474ed7:c.instructions+=7;goto B474ed7;
case 0x474edb:c.instructions+=6;goto B474edb;
case 0x474edc:c.instructions+=5;goto B474edc;
case 0x474ee2:c.instructions+=4;goto B474ee2;
case 0x474ee7:c.instructions+=3;goto B474ee7;
case 0x474ee9:c.instructions+=2;goto B474ee9;
case 0x474eeb:c.instructions+=1;goto B474eeb;
case 0x474ef0:goto L474ef0;
case 0x474ef3:c.instructions+=6;goto B474ef3;
case 0x474ef5:c.instructions+=5;goto B474ef5;
case 0x474ef7:c.instructions+=4;goto B474ef7;
case 0x474ef9:c.instructions+=3;goto B474ef9;
case 0x474efc:c.instructions+=2;goto B474efc;
case 0x474efd:c.instructions+=1;goto B474efd;
case 0x474f03:goto L474f03;
case 0x474f09:c.instructions+=4;goto B474f09;
case 0x474f0f:c.instructions+=3;goto B474f0f;
case 0x474f10:c.instructions+=2;goto B474f10;
case 0x474f13:c.instructions+=1;goto B474f13;
case 0x474f18:goto L474f18;
case 0x474f1b:c.instructions+=7;goto B474f1b;
case 0x474f21:c.instructions+=6;goto B474f21;
case 0x474f2b:c.instructions+=5;goto B474f2b;
case 0x474f35:c.instructions+=4;goto B474f35;
case 0x474f3f:c.instructions+=3;goto B474f3f;
case 0x474f44:c.instructions+=2;goto B474f44;
case 0x474f45:c.instructions+=1;goto B474f45;
case 0x474f4a:goto L474f4a;
case 0x474f4d:c.instructions+=2;goto B474f4d;
case 0x474f52:c.instructions+=1;goto B474f52;
case 0x474f54:goto L474f54;
case 0x474f5a:c.instructions+=5;goto B474f5a;
case 0x474f5d:c.instructions+=4;goto B474f5d;
case 0x474f63:c.instructions+=3;goto B474f63;
case 0x474f64:c.instructions+=2;goto B474f64;
case 0x474f66:c.instructions+=1;goto B474f66;
case 0x474f6b:goto L474f6b;
case 0x474f6e:c.instructions+=2;goto B474f6e;
case 0x474f70:c.instructions+=1;goto B474f70;
case 0x474f72:goto L474f72;
case 0x474f78:c.instructions+=3;goto B474f78;
case 0x474f79:c.instructions+=2;goto B474f79;
case 0x474f7b:c.instructions+=1;goto B474f7b;
case 0x474f80:goto L474f80;
case 0x474f82:goto L474f82;
case 0x474f84:goto L474f84;
case 0x474f8a:c.instructions+=4;goto B474f8a;
case 0x474f8b:c.instructions+=3;goto B474f8b;
case 0x474f8d:c.instructions+=2;goto B474f8d;
case 0x474f93:c.instructions+=1;goto B474f93;
case 0x474f98:goto L474f98;
case 0x474f9c:c.instructions+=2;goto B474f9c;
case 0x474fa3:c.instructions+=1;goto B474fa3;
case 0x474fa8:goto L474fa8;
case 0x474fab:c.instructions+=2;goto B474fab;
case 0x474fad:c.instructions+=1;goto B474fad;
case 0x474faf:goto L474faf;
case 0x474fb4:c.instructions+=2;goto B474fb4;
case 0x474fb6:c.instructions+=1;goto B474fb6;
case 0x474fb8:goto L474fb8;
case 0x474fbd:goto L474fbd;
case 0x474fc3:c.instructions+=4;goto B474fc3;
case 0x474fc9:c.instructions+=3;goto B474fc9;
case 0x474fcc:c.instructions+=2;goto B474fcc;
case 0x474fce:c.instructions+=1;goto B474fce;
case 0x474fd0:goto L474fd0;
case 0x474fd2:c.instructions+=3;goto B474fd2;
case 0x474fd5:c.instructions+=2;goto B474fd5;
case 0x474fd7:c.instructions+=1;goto B474fd7;
case 0x474fdd:goto L474fdd;
case 0x474fe2:goto L474fe2;
case 0x474fe5:c.instructions+=6;goto B474fe5;
case 0x474fe8:c.instructions+=5;goto B474fe8;
case 0x474feb:c.instructions+=4;goto B474feb;
case 0x474fec:c.instructions+=3;goto B474fec;
case 0x474fed:c.instructions+=2;goto B474fed;
case 0x474fee:c.instructions+=1;goto B474fee;
case 0x474fef:goto L474fef;
case 0x474ff1:c.instructions+=1;goto B474ff1;
default:missing_instruction(c.pc);}
B474002:L474002:{c.instructions+=3;NFSU2_TR(0x474002);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B474008:{NFSU2_TR(0x474008);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47400b:{NFSU2_TR(0x47400b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474010ull));
TAIL_STATIC(0x4669d0u,466);
}
B474010:L474010:{c.instructions+=7;NFSU2_TR(0x474010);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B474014:{NFSU2_TR(0x474014);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B474018:{NFSU2_TR(0x474018);
{u32 ea_=u32(u32(7909248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47401e:{NFSU2_TR(0x47401e);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B474024:{NFSU2_TR(0x474024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B474025:{NFSU2_TR(0x474025);
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
B474028:{NFSU2_TR(0x474028);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474030:L474030:{c.instructions+=6;NFSU2_TR(0x474030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B474033:{NFSU2_TR(0x474033);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474034:{NFSU2_TR(0x474034);
__builtin_memmove((R+24),(R+4),4);
}
B474036:{NFSU2_TR(0x474036);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47403c:{NFSU2_TR(0x47403c);
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
B47403e:{NFSU2_TR(0x47403e);
if(r1(R+518)){{goto L474306;}}
}
B474044:L474044:{c.instructions+=3;NFSU2_TR(0x474044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B474046:{NFSU2_TR(0x474046);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474048:{NFSU2_TR(0x474048);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47404bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47404b:L47404b:{c.instructions+=14;NFSU2_TR(0x47404b);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474051:{NFSU2_TR(0x474051);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474057:{NFSU2_TR(0x474057);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47405d:{NFSU2_TR(0x47405d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474063:{NFSU2_TR(0x474063);
__builtin_memmove((R+8),(R+0),4);
}
B474065:{NFSU2_TR(0x474065);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47406b:{NFSU2_TR(0x47406b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B47406e:{NFSU2_TR(0x47406e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474072:{NFSU2_TR(0x474072);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B474075:{NFSU2_TR(0x474075);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B474077:{NFSU2_TR(0x474077);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47407a:{NFSU2_TR(0x47407a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47407e:{NFSU2_TR(0x47407e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B474086:{NFSU2_TR(0x474086);
if(r1(R+514)){{goto L4740a2;}}
}
B474088:L474088:{c.instructions+=5;NFSU2_TR(0x474088);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47408e:{NFSU2_TR(0x47408e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474094:{NFSU2_TR(0x474094);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B47409a:{NFSU2_TR(0x47409a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47409e:{NFSU2_TR(0x47409e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4740a2:L4740a2:{c.instructions+=7;NFSU2_TR(0x4740a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4740a3:{NFSU2_TR(0x4740a3);
__builtin_memmove((R+12),gp(0x82a998),4);
}
B4740a9:{NFSU2_TR(0x4740a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B4740ac:{NFSU2_TR(0x4740ac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4740ae:{NFSU2_TR(0x4740ae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4740af:{NFSU2_TR(0x4740af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4740b0:{NFSU2_TR(0x4740b0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4740b6;}}
}
B4740b2:L4740b2:{c.instructions+=2;NFSU2_TR(0x4740b2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4740b4:{NFSU2_TR(0x4740b4);
{goto L4740c0;}
}
B4740b6:L4740b6:{c.instructions+=2;NFSU2_TR(0x4740b6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4740b9:{NFSU2_TR(0x4740b9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4740c0;}}
}
B4740bb:L4740bb:{c.instructions+=1;NFSU2_TR(0x4740bb);
w4(R+12,u32(0x7full));
}
B4740c0:L4740c0:{c.instructions+=5;NFSU2_TR(0x4740c0);
__builtin_memmove((R+0),(R+4),4);
}
B4740c2:{NFSU2_TR(0x4740c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B4740c5:{NFSU2_TR(0x4740c5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4740c7:{NFSU2_TR(0x4740c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4740cd:{NFSU2_TR(0x4740cd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4740d3;}}
}
B4740cf:L4740cf:{c.instructions+=2;NFSU2_TR(0x4740cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4740d1:{NFSU2_TR(0x4740d1);
{goto L4740dd;}
}
B4740d3:L4740d3:{c.instructions+=2;NFSU2_TR(0x4740d3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4740d6:{NFSU2_TR(0x4740d6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4740dd;}}
}
B4740d8:L4740d8:{c.instructions+=1;NFSU2_TR(0x4740d8);
w4(R+0,u32(0x7full));
}
B4740dd:L4740dd:{c.instructions+=6;NFSU2_TR(0x4740dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4740e3:{NFSU2_TR(0x4740e3);
__builtin_memmove((R+28),gp(0x82b078),4);
}
B4740e9:{NFSU2_TR(0x4740e9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B4740ec:{NFSU2_TR(0x4740ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B4740ef:{NFSU2_TR(0x4740ef);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4740f1:{NFSU2_TR(0x4740f1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4740f7;}}
}
B4740f3:L4740f3:{c.instructions+=2;NFSU2_TR(0x4740f3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4740f5:{NFSU2_TR(0x4740f5);
{goto L474101;}
}
B4740f7:L4740f7:{c.instructions+=2;NFSU2_TR(0x4740f7);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x7full))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7full)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4740fa:{NFSU2_TR(0x4740fa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L474101;}}
}
B4740fc:L4740fc:{c.instructions+=1;NFSU2_TR(0x4740fc);
w4(R+28,u32(0x7full));
}
B474101:L474101:{c.instructions+=1;NFSU2_TR(0x474101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474106ull));
TAIL_STATIC(0x721f99u,721);
}
B474106:L474106:{c.instructions+=5;NFSU2_TR(0x474106);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47410c:{NFSU2_TR(0x47410c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B474112:{NFSU2_TR(0x474112);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474113:{NFSU2_TR(0x474113);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474114:{NFSU2_TR(0x474114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474119ull));
TAIL_STATIC(0x72412au,724);
}
B474119:L474119:{c.instructions+=6;NFSU2_TR(0x474119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47411b:{NFSU2_TR(0x47411b);
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
B47411e:{NFSU2_TR(0x47411e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474120:{NFSU2_TR(0x474120);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474122:{NFSU2_TR(0x474122);
__builtin_memmove((R+4),(R+24),4);
}
B474124:{NFSU2_TR(0x474124);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474127ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B474127:L474127:{c.instructions+=4;NFSU2_TR(0x474127);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47412d:{NFSU2_TR(0x47412d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47412e:{NFSU2_TR(0x47412e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47412f:{NFSU2_TR(0x47412f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474134ull));
TAIL_STATIC(0x724093u,724);
}
B474134:L474134:{c.instructions+=4;NFSU2_TR(0x474134);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474138:{NFSU2_TR(0x474138);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47413e:{NFSU2_TR(0x47413e);
{u32 ea_=u32(u32(7906016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B474144:{NFSU2_TR(0x474144);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474149ull));
TAIL_STATIC(0x75bed4u,75b);
}
B474149:L474149:{c.instructions+=4;NFSU2_TR(0x474149);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47414f:{NFSU2_TR(0x47414f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474150:{NFSU2_TR(0x474150);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474151:{NFSU2_TR(0x474151);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474156ull));
TAIL_STATIC(0x723d9bu,723);
}
B474156:L474156:{c.instructions+=3;NFSU2_TR(0x474156);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47415c:{NFSU2_TR(0x47415c);
{u32 ea_=u32(r4(R+0)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474162:{NFSU2_TR(0x474162);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474167ull));
TAIL_STATIC(0x75bed4u,75b);
}
B474167:L474167:{c.instructions+=4;NFSU2_TR(0x474167);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47416d:{NFSU2_TR(0x47416d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47416e:{NFSU2_TR(0x47416e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47416f:{NFSU2_TR(0x47416f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474174ull));
TAIL_STATIC(0x72403eu,724);
}
B474174:L474174:{c.instructions+=4;NFSU2_TR(0x474174);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47417a:{NFSU2_TR(0x47417a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47417b:{NFSU2_TR(0x47417b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47417c:{NFSU2_TR(0x47417c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474181ull));
TAIL_STATIC(0x723c41u,723);
}
B474181:L474181:{c.instructions+=5;NFSU2_TR(0x474181);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474187:{NFSU2_TR(0x474187);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474188:{NFSU2_TR(0x474188);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47418a:{NFSU2_TR(0x47418a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47418b:{NFSU2_TR(0x47418b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474190ull));
TAIL_STATIC(0x723bc1u,723);
}
B474190:L474190:{c.instructions+=6;NFSU2_TR(0x474190);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B474194:{NFSU2_TR(0x474194);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47419a:{NFSU2_TR(0x47419a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B47419d:{NFSU2_TR(0x47419d);
u8 U[4];
w4(U+0,u32(0x42700000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4741a2:{NFSU2_TR(0x4741a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4741a3:{NFSU2_TR(0x4741a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4741a8ull));
TAIL_STATIC(0x467230u,467);
}
B4741a8:L4741a8:{c.instructions+=5;NFSU2_TR(0x4741a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4741ae:{NFSU2_TR(0x4741ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4741b1:{NFSU2_TR(0x4741b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4741b3:{NFSU2_TR(0x4741b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4741b7:{NFSU2_TR(0x4741b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4741c1;}}
}
B4741b9:L4741b9:{c.instructions+=2;NFSU2_TR(0x4741b9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4741bf:{NFSU2_TR(0x4741bf);
{goto L4741e2;}
}
B4741c1:L4741c1:{c.instructions+=8;NFSU2_TR(0x4741c1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4741c5:{NFSU2_TR(0x4741c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4741c6:{NFSU2_TR(0x4741c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4741c9:{NFSU2_TR(0x4741c9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4741cd:{NFSU2_TR(0x4741cd);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4741d0:{NFSU2_TR(0x4741d0);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4741d6:{NFSU2_TR(0x4741d6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4741d9:{NFSU2_TR(0x4741d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4741deull));
TAIL_STATIC(0x4669d0u,466);
}
B4741de:L4741de:{c.instructions+=1;NFSU2_TR(0x4741de);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B4741e2:L4741e2:{c.instructions+=12;NFSU2_TR(0x4741e2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4741e6:{NFSU2_TR(0x4741e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4741ec:{NFSU2_TR(0x4741ec);
{u32 ea_=u32(u32(7909248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4741f2:{NFSU2_TR(0x4741f2);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4741f8:{NFSU2_TR(0x4741f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4741fe:{NFSU2_TR(0x4741fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474202:{NFSU2_TR(0x474202);
__builtin_memmove((R+12),gp(0x82a998),4);
}
B474208:{NFSU2_TR(0x474208);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B47420b:{NFSU2_TR(0x47420b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B47420e:{NFSU2_TR(0x47420e);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B474211:{NFSU2_TR(0x474211);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B474213:{NFSU2_TR(0x474213);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L474219;}}
}
B474215:L474215:{c.instructions+=2;NFSU2_TR(0x474215);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B474217:{NFSU2_TR(0x474217);
{goto L474223;}
}
B474219:L474219:{c.instructions+=2;NFSU2_TR(0x474219);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47421c:{NFSU2_TR(0x47421c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L474223;}}
}
B47421e:L47421e:{c.instructions+=1;NFSU2_TR(0x47421e);
w4(R+12,u32(0x7full));
}
B474223:L474223:{c.instructions+=4;NFSU2_TR(0x474223);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B474226:{NFSU2_TR(0x474226);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B474228:{NFSU2_TR(0x474228);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47422e:{NFSU2_TR(0x47422e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L474234;}}
}
B474230:L474230:{c.instructions+=2;NFSU2_TR(0x474230);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B474232:{NFSU2_TR(0x474232);
{goto L47423e;}
}
B474234:L474234:{c.instructions+=2;NFSU2_TR(0x474234);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B474237:{NFSU2_TR(0x474237);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47423e;}}
}
B474239:L474239:{c.instructions+=1;NFSU2_TR(0x474239);
w4(R+0,u32(0x7full));
}
B47423e:L47423e:{c.instructions+=6;NFSU2_TR(0x47423e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474244:{NFSU2_TR(0x474244);
__builtin_memmove((R+28),gp(0x82b078),4);
}
B47424a:{NFSU2_TR(0x47424a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B47424d:{NFSU2_TR(0x47424d);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B474250:{NFSU2_TR(0x474250);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B474252:{NFSU2_TR(0x474252);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L474258;}}
}
B474254:L474254:{c.instructions+=2;NFSU2_TR(0x474254);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B474256:{NFSU2_TR(0x474256);
{goto L474262;}
}
B474258:L474258:{c.instructions+=2;NFSU2_TR(0x474258);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47425b:{NFSU2_TR(0x47425b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L474262;}}
}
B47425d:L47425d:{c.instructions+=1;NFSU2_TR(0x47425d);
w4(R+28,u32(0x7full));
}
B474262:L474262:{c.instructions+=4;NFSU2_TR(0x474262);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B474268:{NFSU2_TR(0x474268);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474269:{NFSU2_TR(0x474269);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47426a:{NFSU2_TR(0x47426a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47426full));
TAIL_STATIC(0x72412au,724);
}
B47426f:L47426f:{c.instructions+=6;NFSU2_TR(0x47426f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B474271:{NFSU2_TR(0x474271);
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
B474274:{NFSU2_TR(0x474274);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474276:{NFSU2_TR(0x474276);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474278:{NFSU2_TR(0x474278);
__builtin_memmove((R+4),(R+24),4);
}
B47427a:{NFSU2_TR(0x47427a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47427dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47427d:L47427d:{c.instructions+=4;NFSU2_TR(0x47427d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474283:{NFSU2_TR(0x474283);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474284:{NFSU2_TR(0x474284);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474285:{NFSU2_TR(0x474285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47428aull));
TAIL_STATIC(0x724093u,724);
}
B47428a:L47428a:{c.instructions+=4;NFSU2_TR(0x47428a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47428e:{NFSU2_TR(0x47428e);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B474294:{NFSU2_TR(0x474294);
{u32 ea_=u32(u32(7906016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47429a:{NFSU2_TR(0x47429a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47429full));
TAIL_STATIC(0x75bed4u,75b);
}
B47429f:L47429f:{c.instructions+=4;NFSU2_TR(0x47429f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4742a5:{NFSU2_TR(0x4742a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4742a6:{NFSU2_TR(0x4742a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4742a7:{NFSU2_TR(0x4742a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4742acull));
TAIL_STATIC(0x723d9bu,723);
}
B4742ac:L4742ac:{c.instructions+=3;NFSU2_TR(0x4742ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4742b2:{NFSU2_TR(0x4742b2);
{u32 ea_=u32(r4(R+0)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4742b8:{NFSU2_TR(0x4742b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4742bdull));
TAIL_STATIC(0x75bed4u,75b);
}
B4742bd:L4742bd:{c.instructions+=4;NFSU2_TR(0x4742bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4742c3:{NFSU2_TR(0x4742c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4742c4:{NFSU2_TR(0x4742c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4742c5:{NFSU2_TR(0x4742c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4742caull));
TAIL_STATIC(0x72403eu,724);
}
B4742ca:L4742ca:{c.instructions+=4;NFSU2_TR(0x4742ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4742d0:{NFSU2_TR(0x4742d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4742d1:{NFSU2_TR(0x4742d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4742d2:{NFSU2_TR(0x4742d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4742d7ull));
TAIL_STATIC(0x723c41u,723);
}
B4742d7:L4742d7:{c.instructions+=5;NFSU2_TR(0x4742d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4742dd:{NFSU2_TR(0x4742dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4742de:{NFSU2_TR(0x4742de);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4742e0:{NFSU2_TR(0x4742e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4742e1:{NFSU2_TR(0x4742e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4742e6ull));
TAIL_STATIC(0x723bc1u,723);
}
B4742e6:L4742e6:{c.instructions+=5;NFSU2_TR(0x4742e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4742ec:{NFSU2_TR(0x4742ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4742ef:{NFSU2_TR(0x4742ef);
u8 U[4];
w4(U+0,u32(0x42700000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4742f4:{NFSU2_TR(0x4742f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4742f5:{NFSU2_TR(0x4742f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4742faull));
TAIL_STATIC(0x467230u,467);
}
B4742fa:L4742fa:{c.instructions+=6;NFSU2_TR(0x4742fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4742fb:{NFSU2_TR(0x4742fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4742fc:{NFSU2_TR(0x4742fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4742fd:{NFSU2_TR(0x4742fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4742fe:{NFSU2_TR(0x4742fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B474301:{NFSU2_TR(0x474301);
TAIL_STATIC(0x721fa7u,721);
}
B474306:L474306:{c.instructions+=3;NFSU2_TR(0x474306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B474307:{NFSU2_TR(0x474307);
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
B47430a:{NFSU2_TR(0x47430a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474310:L474310:{c.instructions+=12;NFSU2_TR(0x474310);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474311:{NFSU2_TR(0x474311);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474312:{NFSU2_TR(0x474312);
__builtin_memmove((R+24),(R+4),4);
}
B474314:{NFSU2_TR(0x474314);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47431a:{NFSU2_TR(0x47431a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474320:{NFSU2_TR(0x474320);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B474326:{NFSU2_TR(0x474326);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47432c:{NFSU2_TR(0x47432c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B474336:{NFSU2_TR(0x474336);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474339:{NFSU2_TR(0x474339);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47433b:{NFSU2_TR(0x47433b);
__builtin_memmove((R+4),(R+24),4);
}
B47433d:{NFSU2_TR(0x47433d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L474346;}}
}
B47433f:L47433f:{c.instructions+=1;NFSU2_TR(0x47433f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474344ull));
TAIL_STATIC(0x473e60u,473);
}
B474344:L474344:{c.instructions+=1;NFSU2_TR(0x474344);
{goto L47434b;}
}
B474346:L474346:{c.instructions+=1;NFSU2_TR(0x474346);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47434bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x474030u);}goto L474030;}
}
B47434b:L47434b:{c.instructions+=3;NFSU2_TR(0x47434b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474351:{NFSU2_TR(0x474351);
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
B474353:{NFSU2_TR(0x474353);
if(r1(R+518)){{goto L47459f;}}
}
B474359:L474359:{c.instructions+=6;NFSU2_TR(0x474359);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47435b:{NFSU2_TR(0x47435b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47435c:{NFSU2_TR(0x47435c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47435d:{NFSU2_TR(0x47435d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47435f:{NFSU2_TR(0x47435f);
__builtin_memmove((R+4),(R+24),4);
}
B474361:{NFSU2_TR(0x474361);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474364ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B474364:L474364:{c.instructions+=14;NFSU2_TR(0x474364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47436a:{NFSU2_TR(0x47436a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47436d:{NFSU2_TR(0x47436d);
__builtin_memmove((R+20),gp(0x82b070),4);
}
B474373:{NFSU2_TR(0x474373);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B474376:{NFSU2_TR(0x474376);
__builtin_memmove((R+8),gp(0x82b880),4);
}
B47437c:{NFSU2_TR(0x47437c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B47437f:{NFSU2_TR(0x47437f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B474385:{NFSU2_TR(0x474385);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B474388:{NFSU2_TR(0x474388);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47438c:{NFSU2_TR(0x47438c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffff8001ull))));
__builtin_memmove((R+8),(U+0),4);
}
B474392:{NFSU2_TR(0x474392);
__builtin_memmove((R+4),(R+8),4);
}
B474394:{NFSU2_TR(0x474394);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,sar<u32>(r4(R+20),u64(r4(U+0))));
}
B474397:{NFSU2_TR(0x474397);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffff8001ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffff8001ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47439d:{NFSU2_TR(0x47439d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4743a6;}}
}
B47439f:L47439f:{c.instructions+=2;NFSU2_TR(0x47439f);
w4(R+4,u32(0xffff8001ull));
}
B4743a4:{NFSU2_TR(0x4743a4);
{goto L4743ac;}
}
B4743a6:L4743a6:{c.instructions+=2;NFSU2_TR(0x4743a6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4743a8:{NFSU2_TR(0x4743a8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4743ac;}}
}
B4743aa:L4743aa:{c.instructions+=1;NFSU2_TR(0x4743aa);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4743ac:L4743ac:{c.instructions+=5;NFSU2_TR(0x4743ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4743af:{NFSU2_TR(0x4743af);
__builtin_memmove((R+4),(R+8),4);
}
B4743b1:{NFSU2_TR(0x4743b1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffff8001ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffff8001ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4743b7:{NFSU2_TR(0x4743b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4743bd:{NFSU2_TR(0x4743bd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4743c6;}}
}
B4743bf:L4743bf:{c.instructions+=2;NFSU2_TR(0x4743bf);
w4(R+4,u32(0xffff8001ull));
}
B4743c4:{NFSU2_TR(0x4743c4);
{goto L4743cc;}
}
B4743c6:L4743c6:{c.instructions+=2;NFSU2_TR(0x4743c6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4743c8:{NFSU2_TR(0x4743c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4743cc;}}
}
B4743ca:L4743ca:{c.instructions+=1;NFSU2_TR(0x4743ca);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4743cc:L4743cc:{c.instructions+=8;NFSU2_TR(0x4743cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4743cf:{NFSU2_TR(0x4743cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4743d5:{NFSU2_TR(0x4743d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4743db:{NFSU2_TR(0x4743db);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4743de:{NFSU2_TR(0x4743de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4743e4:{NFSU2_TR(0x4743e4);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B4743e7:{NFSU2_TR(0x4743e7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4743e9:{NFSU2_TR(0x4743e9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4743ef;}}
}
B4743eb:L4743eb:{c.instructions+=2;NFSU2_TR(0x4743eb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4743ed:{NFSU2_TR(0x4743ed);
{goto L4743fc;}
}
B4743ef:L4743ef:{c.instructions+=2;NFSU2_TR(0x4743ef);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4743f5:{NFSU2_TR(0x4743f5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4743fc;}}
}
B4743f7:L4743f7:{c.instructions+=1;NFSU2_TR(0x4743f7);
w4(R+4,u32(0x7fffull));
}
B4743fc:L4743fc:{c.instructions+=3;NFSU2_TR(0x4743fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4743ff:{NFSU2_TR(0x4743ff);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474405:{NFSU2_TR(0x474405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47440aull));
TAIL_STATIC(0x75bed4u,75b);
}
B47440a:L47440a:{c.instructions+=3;NFSU2_TR(0x47440a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47440c:{NFSU2_TR(0x47440c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474412:{NFSU2_TR(0x474412);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L474418;}}
}
B474414:L474414:{c.instructions+=2;NFSU2_TR(0x474414);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B474416:{NFSU2_TR(0x474416);
{goto L474424;}
}
B474418:L474418:{c.instructions+=2;NFSU2_TR(0x474418);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2710ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2710ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47441d:{NFSU2_TR(0x47441d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L474424;}}
}
B47441f:L47441f:{c.instructions+=1;NFSU2_TR(0x47441f);
w4(R+0,u32(0x2710ull));
}
B474424:L474424:{c.instructions+=4;NFSU2_TR(0x474424);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474427:{NFSU2_TR(0x474427);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47442d:{NFSU2_TR(0x47442d);
{u32 ea_=u32(u32(7909252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B474433:{NFSU2_TR(0x474433);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474438ull));
TAIL_STATIC(0x75bed4u,75b);
}
B474438:L474438:{c.instructions+=5;NFSU2_TR(0x474438);
w4(R+4,u32(0xffffc001ull));
}
B47443d:{NFSU2_TR(0x47443d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B47443f:{NFSU2_TR(0x47443f);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffc001ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffc001ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffc001ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B474445:{NFSU2_TR(0x474445);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47444b:{NFSU2_TR(0x47444b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L474454;}}
}
B47444d:L47444d:{c.instructions+=2;NFSU2_TR(0x47444d);
w4(R+4,u32(0xffffc001ull));
}
B474452:{NFSU2_TR(0x474452);
{goto L474461;}
}
B474454:L474454:{c.instructions+=2;NFSU2_TR(0x474454);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x3fffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3fffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3fffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47445a:{NFSU2_TR(0x47445a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L474461;}}
}
B47445c:L47445c:{c.instructions+=1;NFSU2_TR(0x47445c);
w4(R+4,u32(0x3fffull));
}
B474461:L474461:{c.instructions+=4;NFSU2_TR(0x474461);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474464:{NFSU2_TR(0x474464);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47446a:{NFSU2_TR(0x47446a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47446c:{NFSU2_TR(0x47446c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47446full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47446f:L47446f:{c.instructions+=2;NFSU2_TR(0x47446f);
{u32 ea_=u32(u32(7905736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B474475:{NFSU2_TR(0x474475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47447aull));
TAIL_STATIC(0x75bed4u,75b);
}
B47447a:L47447a:{c.instructions+=3;NFSU2_TR(0x47447a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47447c:{NFSU2_TR(0x47447c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474482:{NFSU2_TR(0x474482);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L474488;}}
}
B474484:L474484:{c.instructions+=2;NFSU2_TR(0x474484);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B474486:{NFSU2_TR(0x474486);
{goto L474494;}
}
B474488:L474488:{c.instructions+=2;NFSU2_TR(0x474488);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47448d:{NFSU2_TR(0x47448d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L474494;}}
}
B47448f:L47448f:{c.instructions+=1;NFSU2_TR(0x47448f);
w4(R+0,u32(0x400ull));
}
B474494:L474494:{c.instructions+=6;NFSU2_TR(0x474494);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474497:{NFSU2_TR(0x474497);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47449d:{NFSU2_TR(0x47449d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4744a3:{NFSU2_TR(0x4744a3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4744a5:{NFSU2_TR(0x4744a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4744ab:{NFSU2_TR(0x4744ab);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4744b1;}}
}
B4744ad:L4744ad:{c.instructions+=2;NFSU2_TR(0x4744ad);
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
B4744af:{NFSU2_TR(0x4744af);
{goto L4744bd;}
}
B4744b1:L4744b1:{c.instructions+=2;NFSU2_TR(0x4744b1);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x400ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4744b6:{NFSU2_TR(0x4744b6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4744bd;}}
}
B4744b8:L4744b8:{c.instructions+=1;NFSU2_TR(0x4744b8);
w4(R+0,u32(0x400ull));
}
B4744bd:L4744bd:{c.instructions+=5;NFSU2_TR(0x4744bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4744c0:{NFSU2_TR(0x4744c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4744c2:{NFSU2_TR(0x4744c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4744c4:{NFSU2_TR(0x4744c4);
__builtin_memmove((R+4),(R+24),4);
}
B4744c6:{NFSU2_TR(0x4744c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4744c9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4744c9:L4744c9:{c.instructions+=3;NFSU2_TR(0x4744c9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4744cb:{NFSU2_TR(0x4744cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4744d1:{NFSU2_TR(0x4744d1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4744d7;}}
}
B4744d3:L4744d3:{c.instructions+=2;NFSU2_TR(0x4744d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4744d5:{NFSU2_TR(0x4744d5);
{goto L4744e3;}
}
B4744d7:L4744d7:{c.instructions+=2;NFSU2_TR(0x4744d7);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4744dc:{NFSU2_TR(0x4744dc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4744e3;}}
}
B4744de:L4744de:{c.instructions+=1;NFSU2_TR(0x4744de);
w4(R+0,u32(0x10000ull));
}
B4744e3:L4744e3:{c.instructions+=6;NFSU2_TR(0x4744e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4744e6:{NFSU2_TR(0x4744e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4744ea:{NFSU2_TR(0x4744ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4744f0:{NFSU2_TR(0x4744f0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffff8001ull))));
}
B4744f5:{NFSU2_TR(0x4744f5);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffff8001ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff8001ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4744fa:{NFSU2_TR(0x4744fa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L474503;}}
}
B4744fc:L4744fc:{c.instructions+=2;NFSU2_TR(0x4744fc);
w4(R+0,u32(0xffff8001ull));
}
B474501:{NFSU2_TR(0x474501);
{goto L474509;}
}
B474503:L474503:{c.instructions+=2;NFSU2_TR(0x474503);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B474505:{NFSU2_TR(0x474505);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L474509;}}
}
B474507:L474507:{c.instructions+=1;NFSU2_TR(0x474507);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B474509:L474509:{c.instructions+=5;NFSU2_TR(0x474509);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47450b:{NFSU2_TR(0x47450b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47450e:{NFSU2_TR(0x47450e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474514:{NFSU2_TR(0x474514);
__builtin_memmove((R+0),(R+20),4);
}
B474516:{NFSU2_TR(0x474516);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47451c;}}
}
B474518:L474518:{c.instructions+=2;NFSU2_TR(0x474518);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47451a:{NFSU2_TR(0x47451a);
{goto L474529;}
}
B47451c:L47451c:{c.instructions+=2;NFSU2_TR(0x47451c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B474522:{NFSU2_TR(0x474522);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L474529;}}
}
B474524:L474524:{c.instructions+=1;NFSU2_TR(0x474524);
w4(R+0,u32(0x7fffull));
}
B474529:L474529:{c.instructions+=8;NFSU2_TR(0x474529);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47452c:{NFSU2_TR(0x47452c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474532:{NFSU2_TR(0x474532);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474538:{NFSU2_TR(0x474538);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47453a:{NFSU2_TR(0x47453a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474540:{NFSU2_TR(0x474540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B474541:{NFSU2_TR(0x474541);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B474542:{NFSU2_TR(0x474542);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L474548;}}
}
B474544:L474544:{c.instructions+=2;NFSU2_TR(0x474544);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B474546:{NFSU2_TR(0x474546);
{goto L474554;}
}
B474548:L474548:{c.instructions+=2;NFSU2_TR(0x474548);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x61a8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61a8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47454d:{NFSU2_TR(0x47454d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L474554;}}
}
B47454f:L47454f:{c.instructions+=1;NFSU2_TR(0x47454f);
w4(R+0,u32(0x61a8ull));
}
B474554:L474554:{c.instructions+=6;NFSU2_TR(0x474554);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474557:{NFSU2_TR(0x474557);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47455d:{NFSU2_TR(0x47455d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B474563:{NFSU2_TR(0x474563);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B474565:{NFSU2_TR(0x474565);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47456b:{NFSU2_TR(0x47456b);
if(r1(R+518)){{goto L474576;}}
}
B47456d:L47456d:{c.instructions+=2;NFSU2_TR(0x47456d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
w4(U+4,u32(0x2af8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B474574:{NFSU2_TR(0x474574);
{goto L47457d;}
}
B474576:L474576:{c.instructions+=1;NFSU2_TR(0x474576);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47457d:L47457d:{c.instructions+=6;NFSU2_TR(0x47457d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474583:{NFSU2_TR(0x474583);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47458a:{NFSU2_TR(0x47458a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B474590:{NFSU2_TR(0x474590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B474592:{NFSU2_TR(0x474592);
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
B474594:{NFSU2_TR(0x474594);
if(r1(R+518)){{goto L47459f;}}
}
B474596:L474596:{c.instructions+=3;NFSU2_TR(0x474596);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B474599:{NFSU2_TR(0x474599);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47459a:{NFSU2_TR(0x47459a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47459full));
TAIL_STATIC(0x735580u,735);
}
B47459f:L47459f:{c.instructions+=3;NFSU2_TR(0x47459f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4745a0:{NFSU2_TR(0x4745a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4745a1:{NFSU2_TR(0x4745a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4745b0:L4745b0:{c.instructions+=3;NFSU2_TR(0x4745b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4745b1:{NFSU2_TR(0x4745b1);
__builtin_memmove((R+24),(R+4),4);
}
B4745b3:{NFSU2_TR(0x4745b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4745b8ull));
TAIL_STATIC(0x45e350u,45e);
}
B4745b8:L4745b8:{c.instructions+=9;NFSU2_TR(0x4745b8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4745ba:{NFSU2_TR(0x4745ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4745c0:{NFSU2_TR(0x4745c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4745c6:{NFSU2_TR(0x4745c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4745cc:{NFSU2_TR(0x4745cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4745d2:{NFSU2_TR(0x4745d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4745d6:{NFSU2_TR(0x4745d6);
u8 U[4];
w4(U+0,u32(0x78af88ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4745dc:{NFSU2_TR(0x4745dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4745e2:{NFSU2_TR(0x4745e2);
w4(R+8,u32(0x4ull));
}
B4745e7:L4745e7:{c.instructions+=7;NFSU2_TR(0x4745e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4745ea:{NFSU2_TR(0x4745ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4745ec:{NFSU2_TR(0x4745ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4745ef:{NFSU2_TR(0x4745ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4745f2:{NFSU2_TR(0x4745f2);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4745f5:{NFSU2_TR(0x4745f5);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4745f6:{NFSU2_TR(0x4745f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4745e7u);}goto L4745e7;}}
}
B4745f8:L4745f8:{c.instructions+=4;NFSU2_TR(0x4745f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4745fe:{NFSU2_TR(0x4745fe);
__builtin_memmove((R+0),(R+24),4);
}
B474600:{NFSU2_TR(0x474600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B474601:{NFSU2_TR(0x474601);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474610:L474610:{c.instructions+=7;NFSU2_TR(0x474610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474611:{NFSU2_TR(0x474611);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B474615:{NFSU2_TR(0x474615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B474617:{NFSU2_TR(0x474617);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474618:{NFSU2_TR(0x474618);
__builtin_memmove((R+28),(R+4),4);
}
B47461a:{NFSU2_TR(0x47461a);
__builtin_memmove((R+4),(R+24),4);
}
B47461c:{NFSU2_TR(0x47461c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47461full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47461f:L47461f:{c.instructions+=5;NFSU2_TR(0x47461f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B474621:{NFSU2_TR(0x474621);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B474624:{NFSU2_TR(0x474624);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B474629:{NFSU2_TR(0x474629);
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
B47462a:{NFSU2_TR(0x47462a);
if(r1(R+518)){{goto L474650;}}
}
B47462c:L47462c:{c.instructions+=2;NFSU2_TR(0x47462c);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47462f:{NFSU2_TR(0x47462f);
if(r1(R+518)){{goto L474645;}}
}
B474631:L474631:{c.instructions+=3;NFSU2_TR(0x474631);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474636:{NFSU2_TR(0x474636);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474638:{NFSU2_TR(0x474638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47463dull));
TAIL_STATIC(0x4691c0u,469);
}
B47463d:L47463d:{c.instructions+=4;NFSU2_TR(0x47463d);
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
B474640:{NFSU2_TR(0x474640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B474641:{NFSU2_TR(0x474641);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B474642:{NFSU2_TR(0x474642);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474645:L474645:{c.instructions+=4;NFSU2_TR(0x474645);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47464b:{NFSU2_TR(0x47464b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47464c:{NFSU2_TR(0x47464c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47464d:{NFSU2_TR(0x47464d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474650:L474650:{c.instructions+=4;NFSU2_TR(0x474650);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474656:{NFSU2_TR(0x474656);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B474657:{NFSU2_TR(0x474657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B474658:{NFSU2_TR(0x474658);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474660:L474660:{c.instructions+=10;NFSU2_TR(0x474660);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474661:{NFSU2_TR(0x474661);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B474665:{NFSU2_TR(0x474665);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474666:{NFSU2_TR(0x474666);
__builtin_memmove((R+24),(R+4),4);
}
B474668:{NFSU2_TR(0x474668);
u8 U[16];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B47466f:{NFSU2_TR(0x47466f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474670:{NFSU2_TR(0x474670);
u8 U[16];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B474677:{NFSU2_TR(0x474677);
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
B474679:{NFSU2_TR(0x474679);
u8 U[16];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B474680:{NFSU2_TR(0x474680);
if(r1(R+518)){{goto L4746bb;}}
}
B474682:L474682:{c.instructions+=3;NFSU2_TR(0x474682);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B474684:{NFSU2_TR(0x474684);
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
B474686:{NFSU2_TR(0x474686);
if(r1(R+518)){{goto L47468d;}}
}
B474688:L474688:{c.instructions+=1;NFSU2_TR(0x474688);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47468dull));
TAIL_STATIC(0x735550u,735);
}
B47468d:L47468d:{c.instructions+=3;NFSU2_TR(0x47468d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B474691:{NFSU2_TR(0x474691);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474692:{NFSU2_TR(0x474692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474697ull));
TAIL_STATIC(0x734df0u,734);
}
B474697:L474697:{c.instructions+=2;NFSU2_TR(0x474697);
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
B47469a:{NFSU2_TR(0x47469a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47469full));
TAIL_STATIC(0x734e40u,734);
}
B47469f:L47469f:{c.instructions+=5;NFSU2_TR(0x47469f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4746a3:{NFSU2_TR(0x4746a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4746a5:{NFSU2_TR(0x4746a5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4746a7:{NFSU2_TR(0x4746a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4746a8:{NFSU2_TR(0x4746a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4746abull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4746ab:L4746ab:{c.instructions+=1;NFSU2_TR(0x4746ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4746b0ull));
TAIL_STATIC(0x734e60u,734);
}
B4746b0:L4746b0:{c.instructions+=1;NFSU2_TR(0x4746b0);
u8 U[16];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B4746bb:L4746bb:{c.instructions+=4;NFSU2_TR(0x4746bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4746bc:{NFSU2_TR(0x4746bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4746bd:{NFSU2_TR(0x4746bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4746be:{NFSU2_TR(0x4746be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4746d0:L4746d0:{c.instructions+=3;NFSU2_TR(0x4746d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4746d1:{NFSU2_TR(0x4746d1);
__builtin_memmove((R+24),(R+4),4);
}
B4746d3:{NFSU2_TR(0x4746d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4746d8ull));
TAIL_STATIC(0x45e350u,45e);
}
B4746d8:L4746d8:{c.instructions+=15;NFSU2_TR(0x4746d8);
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
B4746da:{NFSU2_TR(0x4746da);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4746e0:{NFSU2_TR(0x4746e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4746e6:{NFSU2_TR(0x4746e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4746ec:{NFSU2_TR(0x4746ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4746f2:{NFSU2_TR(0x4746f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4746f8:{NFSU2_TR(0x4746f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4746fe:{NFSU2_TR(0x4746fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474704:{NFSU2_TR(0x474704);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47470a:{NFSU2_TR(0x47470a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474710:{NFSU2_TR(0x474710);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B474714:{NFSU2_TR(0x474714);
u8 U[4];
w4(U+0,u32(0x78afd0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47471a:{NFSU2_TR(0x47471a);
__builtin_memmove((R+0),(R+24),4);
}
B47471c:{NFSU2_TR(0x47471c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47471d:{NFSU2_TR(0x47471d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474720:L474720:{c.instructions+=9;NFSU2_TR(0x474720);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474721:{NFSU2_TR(0x474721);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474722:{NFSU2_TR(0x474722);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474723:{NFSU2_TR(0x474723);
__builtin_memmove((R+24),(R+4),4);
}
B474725:{NFSU2_TR(0x474725);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474726:{NFSU2_TR(0x474726);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47472c:{NFSU2_TR(0x47472c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47472e:{NFSU2_TR(0x47472e);
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
B474730:{NFSU2_TR(0x474730);
if(r1(R+518)){{goto L47475f;}}
}
B474732:L474732:{c.instructions+=3;NFSU2_TR(0x474732);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B474734:{NFSU2_TR(0x474734);
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
B474736:{NFSU2_TR(0x474736);
if(r1(R+518)){{goto L47473d;}}
}
B474738:L474738:{c.instructions+=1;NFSU2_TR(0x474738);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47473dull));
TAIL_STATIC(0x735550u,735);
}
B47473d:L47473d:{c.instructions+=3;NFSU2_TR(0x47473d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B474741:{NFSU2_TR(0x474741);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474742:{NFSU2_TR(0x474742);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474747ull));
TAIL_STATIC(0x734df0u,734);
}
B474747:L474747:{c.instructions+=2;NFSU2_TR(0x474747);
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
B47474a:{NFSU2_TR(0x47474a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47474full));
TAIL_STATIC(0x734e40u,734);
}
B47474f:L47474f:{c.instructions+=5;NFSU2_TR(0x47474f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474753:{NFSU2_TR(0x474753);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B474755:{NFSU2_TR(0x474755);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474756:{NFSU2_TR(0x474756);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474757:{NFSU2_TR(0x474757);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47475aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47475a:L47475a:{c.instructions+=1;NFSU2_TR(0x47475a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47475full));
TAIL_STATIC(0x734e60u,734);
}
B47475f:L47475f:{c.instructions+=7;NFSU2_TR(0x47475f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B474760:{NFSU2_TR(0x474760);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474766:{NFSU2_TR(0x474766);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47476c:{NFSU2_TR(0x47476c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47476d:{NFSU2_TR(0x47476d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47476e:{NFSU2_TR(0x47476e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47476f:{NFSU2_TR(0x47476f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474770:L474770:{c.instructions+=6;NFSU2_TR(0x474770);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474771:{NFSU2_TR(0x474771);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B474776:{NFSU2_TR(0x474776);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474777:{NFSU2_TR(0x474777);
__builtin_memmove((R+24),(R+4),4);
}
B474779:{NFSU2_TR(0x474779);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
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
B47477c:{NFSU2_TR(0x47477c);
if(r1(R+518)){{goto L474920;}}
}
B474782:L474782:{c.instructions+=2;NFSU2_TR(0x474782);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474784:{NFSU2_TR(0x474784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474789ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B474789:L474789:{c.instructions+=3;NFSU2_TR(0x474789);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47478c:{NFSU2_TR(0x47478c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47478e:{NFSU2_TR(0x47478e);
if(r1(R+518)){{goto L4748d7;}}
}
B474794:L474794:{c.instructions+=12;NFSU2_TR(0x474794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47479a:{NFSU2_TR(0x47479a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4747a0:{NFSU2_TR(0x4747a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4747a3:{NFSU2_TR(0x4747a3);
{u32 ea_=u32(r4(R+8)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4747a9:{NFSU2_TR(0x4747a9);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4747af:{NFSU2_TR(0x4747af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4747b2:{NFSU2_TR(0x4747b2);
{u32 ea_=u32(r4(R+0)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4747b8:{NFSU2_TR(0x4747b8);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4747be:{NFSU2_TR(0x4747be);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4747c0:{NFSU2_TR(0x4747c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4747c3:{NFSU2_TR(0x4747c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4747c9:{NFSU2_TR(0x4747c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4747d8;}}
}
B4747cb:L4747cb:{c.instructions+=2;NFSU2_TR(0x4747cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4747cd:{NFSU2_TR(0x4747cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4747ed;}}
}
B4747cf:L4747cf:{c.instructions+=2;NFSU2_TR(0x4747cf);
__builtin_memmove((R+4),(R+24),4);
}
B4747d1:{NFSU2_TR(0x4747d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4747d6ull));
TAIL_STATIC(0x461750u,461);
}
B4747d6:L4747d6:{c.instructions+=1;NFSU2_TR(0x4747d6);
{goto L4747ed;}
}
B4747d8:L4747d8:{c.instructions+=2;NFSU2_TR(0x4747d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4747da:{NFSU2_TR(0x4747da);
if(r1(R+518)){{goto L4747ed;}}
}
B4747dc:L4747dc:{c.instructions+=3;NFSU2_TR(0x4747dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4747e2:{NFSU2_TR(0x4747e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4747e4:{NFSU2_TR(0x4747e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4747ed;}}
}
B4747e6:L4747e6:{c.instructions+=2;NFSU2_TR(0x4747e6);
__builtin_memmove((R+4),(R+24),4);
}
B4747e8:{NFSU2_TR(0x4747e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4747edull));
TAIL_STATIC(0x461840u,461);
}
B4747ed:L4747ed:{c.instructions+=10;NFSU2_TR(0x4747ed);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4747f1:{NFSU2_TR(0x4747f1);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4747f7:{NFSU2_TR(0x4747f7);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4747fb:{NFSU2_TR(0x4747fb);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474801:{NFSU2_TR(0x474801);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474805:{NFSU2_TR(0x474805);
{u32 ea_=u32(u32(7909408u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B47480b:{NFSU2_TR(0x47480b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474811:{NFSU2_TR(0x474811);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B474813:{NFSU2_TR(0x474813);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B474816:{NFSU2_TR(0x474816);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4748f2;}}
}
B47481c:L47481c:{c.instructions+=3;NFSU2_TR(0x47481c);
__builtin_memmove((R+0),gp(0x8a329c),4);
}
B474821:{NFSU2_TR(0x474821);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B474823:{NFSU2_TR(0x474823);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4748f2;}}
}
B474829:L474829:{c.instructions+=3;NFSU2_TR(0x474829);
__builtin_memmove((R+0),gp(0x88ec68),4);
}
B47482e:{NFSU2_TR(0x47482e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B474830:{NFSU2_TR(0x474830);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4748f2;}}
}
B474836:L474836:{c.instructions+=5;NFSU2_TR(0x474836);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47483a:{NFSU2_TR(0x47483a);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B474840:{NFSU2_TR(0x474840);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B474842:{NFSU2_TR(0x474842);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B474845:{NFSU2_TR(0x474845);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4748f2;}}
}
B47484b:L47484b:{c.instructions+=3;NFSU2_TR(0x47484b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474851:{NFSU2_TR(0x474851);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B474853:{NFSU2_TR(0x474853);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4748bf;}}
}
B474855:L474855:{c.instructions+=4;NFSU2_TR(0x474855);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47485b:{NFSU2_TR(0x47485b);
__builtin_memmove((R+8),gp(0x82ba30),4);
}
B474861:{NFSU2_TR(0x474861);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474864:{NFSU2_TR(0x474864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474869ull));
TAIL_STATIC(0x46c9a0u,46c);
}
B474869:L474869:{c.instructions+=2;NFSU2_TR(0x474869);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47486b:{NFSU2_TR(0x47486b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4748f2;}}
}
B474871:L474871:{c.instructions+=2;NFSU2_TR(0x474871);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B474878:{NFSU2_TR(0x474878);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L474881;}}
}
B47487a:L47487a:{c.instructions+=1;NFSU2_TR(0x47487a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B474881:L474881:{c.instructions+=3;NFSU2_TR(0x474881);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B474883:{NFSU2_TR(0x474883);
__builtin_memmove((R+4),(R+24),4);
}
B474885:{NFSU2_TR(0x474885);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474888ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B474888:L474888:{c.instructions+=2;NFSU2_TR(0x474888);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47488a:{NFSU2_TR(0x47488a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47488full));
TAIL_STATIC(0x43c1c0u,43c);
}
B47488f:L47488f:{c.instructions+=5;NFSU2_TR(0x47488f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B474892:{NFSU2_TR(0x474892);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B474894:{NFSU2_TR(0x474894);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474898:{NFSU2_TR(0x474898);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47489c:{NFSU2_TR(0x47489c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4748a4;}}
}
B47489e:L47489e:{c.instructions+=1;NFSU2_TR(0x47489e);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4748a4:L4748a4:{c.instructions+=6;NFSU2_TR(0x4748a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4748aa:{NFSU2_TR(0x4748aa);
{u32 ea_=u32(u32(7909400u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4748b0:{NFSU2_TR(0x4748b0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4748b1:{NFSU2_TR(0x4748b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4748b7:{NFSU2_TR(0x4748b7);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4748bd:{NFSU2_TR(0x4748bd);
{goto L4748f2;}
}
B4748bf:L4748bf:{c.instructions+=4;NFSU2_TR(0x4748bf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4748c0:{NFSU2_TR(0x4748c0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4748c3:{NFSU2_TR(0x4748c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4748c9:{NFSU2_TR(0x4748c9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4748f2;}}
}
B4748cb:L4748cb:{c.instructions+=2;NFSU2_TR(0x4748cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4748d5:{NFSU2_TR(0x4748d5);
{goto L4748f2;}
}
B4748d7:L4748d7:{c.instructions+=3;NFSU2_TR(0x4748d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4748dd:{NFSU2_TR(0x4748dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4748df:{NFSU2_TR(0x4748df);
if(r1(R+518)){{goto L4748f2;}}
}
B4748e1:L4748e1:{c.instructions+=3;NFSU2_TR(0x4748e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4748e7:{NFSU2_TR(0x4748e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4748e9:{NFSU2_TR(0x4748e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4748fc;}}
}
B4748eb:L4748eb:{c.instructions+=2;NFSU2_TR(0x4748eb);
__builtin_memmove((R+4),(R+24),4);
}
B4748ed:{NFSU2_TR(0x4748ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4748f2ull));
TAIL_STATIC(0x461840u,461);
}
B4748f2:L4748f2:{c.instructions+=3;NFSU2_TR(0x4748f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4748f8:{NFSU2_TR(0x4748f8);
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
B4748fa:{NFSU2_TR(0x4748fa);
if(r1(R+518)){{goto L474920;}}
}
B4748fc:L4748fc:{c.instructions+=7;NFSU2_TR(0x4748fc);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474902:{NFSU2_TR(0x474902);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B474906:{NFSU2_TR(0x474906);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B47490c:{NFSU2_TR(0x47490c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B474912:{NFSU2_TR(0x474912);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B474914:{NFSU2_TR(0x474914);
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
B474917:{NFSU2_TR(0x474917);
if(r1(R+514)){{goto L474920;}}
}
B474919:L474919:{c.instructions+=3;NFSU2_TR(0x474919);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47491b:{NFSU2_TR(0x47491b);
__builtin_memmove((R+4),(R+24),4);
}
B47491d:{NFSU2_TR(0x47491d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474920ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B474920:L474920:{c.instructions+=3;NFSU2_TR(0x474920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B474921:{NFSU2_TR(0x474921);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B474922:{NFSU2_TR(0x474922);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474930:L474930:{c.instructions+=5;NFSU2_TR(0x474930);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474931:{NFSU2_TR(0x474931);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474932:{NFSU2_TR(0x474932);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474933:{NFSU2_TR(0x474933);
__builtin_memmove((R+24),(R+4),4);
}
B474935:{NFSU2_TR(0x474935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47493aull));
TAIL_STATIC(0x45e350u,45e);
}
B47493a:L47493a:{c.instructions+=11;NFSU2_TR(0x47493a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B47493c:{NFSU2_TR(0x47493c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B474942:{NFSU2_TR(0x474942);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474948:{NFSU2_TR(0x474948);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47494e:{NFSU2_TR(0x47494e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474954:{NFSU2_TR(0x474954);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B474958:{NFSU2_TR(0x474958);
u8 U[4];
w4(U+0,u32(0x78b028ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47495e:{NFSU2_TR(0x47495e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B474964:{NFSU2_TR(0x474964);
w4(R+8,u32(0x2ull));
}
B474969:{NFSU2_TR(0x474969);
w4(R+12,u32(0x7fffull));
}
B47496e:{NFSU2_TR(0x47496e);
w4(R+28,u32(0x1000ull));
}
B474973:L474973:{c.instructions+=8;NFSU2_TR(0x474973);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474976:{NFSU2_TR(0x474976);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474979:{NFSU2_TR(0x474979);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B47497b:{NFSU2_TR(0x47497b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47497e:{NFSU2_TR(0x47497e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474981:{NFSU2_TR(0x474981);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B474984:{NFSU2_TR(0x474984);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B474985:{NFSU2_TR(0x474985);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x474973u);}goto L474973;}}
}
B474987:L474987:{c.instructions+=2;NFSU2_TR(0x474987);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((R+0),(U+0),4);
}
B47498d:{NFSU2_TR(0x47498d);
w4(R+8,u32(0x2ull));
}
B474992:L474992:{c.instructions+=8;NFSU2_TR(0x474992);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474995:{NFSU2_TR(0x474995);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474998:{NFSU2_TR(0x474998);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B47499a:{NFSU2_TR(0x47499a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47499d:{NFSU2_TR(0x47499d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4749a0:{NFSU2_TR(0x4749a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B4749a3:{NFSU2_TR(0x4749a3);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4749a4:{NFSU2_TR(0x4749a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x474992u);}goto L474992;}}
}
B4749a6:L4749a6:{c.instructions+=3;NFSU2_TR(0x4749a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4749ac:{NFSU2_TR(0x4749ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4749b2:{NFSU2_TR(0x4749b2);
w4(R+8,u32(0x2ull));
}
B4749b7:L4749b7:{c.instructions+=5;NFSU2_TR(0x4749b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4749ba:{NFSU2_TR(0x4749ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4749bc:{NFSU2_TR(0x4749bc);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4749bf:{NFSU2_TR(0x4749bf);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4749c0:{NFSU2_TR(0x4749c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4749b7u);}goto L4749b7;}}
}
B4749c2:L4749c2:{c.instructions+=5;NFSU2_TR(0x4749c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4749c3:{NFSU2_TR(0x4749c3);
__builtin_memmove((R+0),(R+24),4);
}
B4749c5:{NFSU2_TR(0x4749c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4749c6:{NFSU2_TR(0x4749c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4749c7:{NFSU2_TR(0x4749c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4749d0:L4749d0:{c.instructions+=12;NFSU2_TR(0x4749d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4749d2:{NFSU2_TR(0x4749d2);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4749d7:{NFSU2_TR(0x4749d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4749dd:{NFSU2_TR(0x4749dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4749de:{NFSU2_TR(0x4749de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4749e5:{NFSU2_TR(0x4749e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4749e6:{NFSU2_TR(0x4749e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4749e7:{NFSU2_TR(0x4749e7);
__builtin_memmove((R+24),(R+4),4);
}
B4749e9:{NFSU2_TR(0x4749e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4749ed:{NFSU2_TR(0x4749ed);
u8 U[4];
w4(U+0,u32(0x78b028ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4749f3:{NFSU2_TR(0x4749f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4749fb:{NFSU2_TR(0x4749fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474a00ull));
TAIL_STATIC(0x461a20u,461);
}
B474a00:L474a00:{c.instructions+=6;NFSU2_TR(0x474a00);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474a04:{NFSU2_TR(0x474a04);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B474a0a:{NFSU2_TR(0x474a0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B474a0b:{NFSU2_TR(0x474a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474a12:{NFSU2_TR(0x474a12);
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
B474a15:{NFSU2_TR(0x474a15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474a20:L474a20:{c.instructions+=10;NFSU2_TR(0x474a20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474a21:{NFSU2_TR(0x474a21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474a22:{NFSU2_TR(0x474a22);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474a23:{NFSU2_TR(0x474a23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474a24:{NFSU2_TR(0x474a24);
__builtin_memmove((R+24),(R+4),4);
}
B474a26:{NFSU2_TR(0x474a26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474a2c:{NFSU2_TR(0x474a2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B474a2f:{NFSU2_TR(0x474a2f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B474a31:{NFSU2_TR(0x474a31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474a32:{NFSU2_TR(0x474a32);
if(r1(R+518)){{goto L474b48;}}
}
B474a38:L474a38:{c.instructions+=4;NFSU2_TR(0x474a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474a3e:{NFSU2_TR(0x474a3e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B474a40:{NFSU2_TR(0x474a40);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B474a42:{NFSU2_TR(0x474a42);
if(r1(R+518)){{goto L474a57;}}
}
B474a44:L474a44:{c.instructions+=4;NFSU2_TR(0x474a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474a4a:{NFSU2_TR(0x474a4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B474a4c:{NFSU2_TR(0x474a4c);
w4(R+12,u32(0x1ull));
}
B474a51:{NFSU2_TR(0x474a51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L474b48;}}
}
B474a57:L474a57:{c.instructions+=6;NFSU2_TR(0x474a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474a5a:{NFSU2_TR(0x474a5a);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474a60:{NFSU2_TR(0x474a60);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B474a63:{NFSU2_TR(0x474a63);
{u32 ea_=u32(u32(7909488u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B474a69:{NFSU2_TR(0x474a69);
w4(R+28,u32(0x3ull));
}
B474a6e:{NFSU2_TR(0x474a6e);
if(r1(R+518)){{goto L474a94;}}
}
B474a70:L474a70:{c.instructions+=5;NFSU2_TR(0x474a70);
__builtin_memmove((R+0),gp(0x82cb58),4);
}
B474a75:{NFSU2_TR(0x474a75);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B474a76:{NFSU2_TR(0x474a76);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x474a76);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x474a76);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B474a78:{NFSU2_TR(0x474a78);
__builtin_memmove((R+28),(R+8),4);
}
B474a7a:{NFSU2_TR(0x474a7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474a7full));
TAIL_STATIC(0x75bed4u,75b);
}
B474a7f:L474a7f:{c.instructions+=7;NFSU2_TR(0x474a7f);
w4(R+4,u32(0xfull));
}
B474a84:{NFSU2_TR(0x474a84);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B474a86:{NFSU2_TR(0x474a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B474a89:{NFSU2_TR(0x474a89);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B474a8b:{NFSU2_TR(0x474a8b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B474a8c:{NFSU2_TR(0x474a8c);
__builtin_memmove(gp(0x82cb58),(R+28),4);
}
B474a92:{NFSU2_TR(0x474a92);
{goto L474ab6;}
}
B474a94:L474a94:{c.instructions+=5;NFSU2_TR(0x474a94);
__builtin_memmove((R+0),gp(0x82cb54),4);
}
B474a99:{NFSU2_TR(0x474a99);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B474a9a:{NFSU2_TR(0x474a9a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x474a9a);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x474a9a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B474a9c:{NFSU2_TR(0x474a9c);
__builtin_memmove((R+28),(R+8),4);
}
B474a9e:{NFSU2_TR(0x474a9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474aa3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B474aa3:L474aa3:{c.instructions+=6;NFSU2_TR(0x474aa3);
w4(R+4,u32(0xfull));
}
B474aa8:{NFSU2_TR(0x474aa8);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B474aaa:{NFSU2_TR(0x474aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B474aad:{NFSU2_TR(0x474aad);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B474aaf:{NFSU2_TR(0x474aaf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B474ab0:{NFSU2_TR(0x474ab0);
__builtin_memmove(gp(0x82cb54),(R+28),4);
}
B474ab6:L474ab6:{c.instructions+=5;NFSU2_TR(0x474ab6);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B474abb:{NFSU2_TR(0x474abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474ac1:{NFSU2_TR(0x474ac1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474ac2:{NFSU2_TR(0x474ac2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B474ac5:{NFSU2_TR(0x474ac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474acaull));
TAIL_STATIC(0x43be60u,43b);
}
B474aca:L474aca:{c.instructions+=9;NFSU2_TR(0x474aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B474acd:{NFSU2_TR(0x474acd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B474ad0:{NFSU2_TR(0x474ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B474ad3:{NFSU2_TR(0x474ad3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B474ad5:{NFSU2_TR(0x474ad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474adb:{NFSU2_TR(0x474adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474ae1:{NFSU2_TR(0x474ae1);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B474ae7:{NFSU2_TR(0x474ae7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474ae8:{NFSU2_TR(0x474ae8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474aedull));
TAIL_STATIC(0x43e910u,43e);
}
B474aed:L474aed:{c.instructions+=3;NFSU2_TR(0x474aed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B474af0:{NFSU2_TR(0x474af0);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x45cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x45cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B474af5:{NFSU2_TR(0x474af5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L474b1d;}}
}
B474af7:L474af7:{c.instructions+=6;NFSU2_TR(0x474af7);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B474afc:{NFSU2_TR(0x474afc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B474aff:{NFSU2_TR(0x474aff);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B474b04:{NFSU2_TR(0x474b04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474b05:{NFSU2_TR(0x474b05);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474b07:{NFSU2_TR(0x474b07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474b0cull));
TAIL_STATIC(0x440820u,440);
}
B474b0c:L474b0c:{c.instructions+=3;NFSU2_TR(0x474b0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B474b0f:{NFSU2_TR(0x474b0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B474b11:{NFSU2_TR(0x474b11);
if(r1(R+518)){{goto L474b1d;}}
}
B474b13:L474b13:{c.instructions+=3;NFSU2_TR(0x474b13);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474b14:{NFSU2_TR(0x474b14);
__builtin_memmove((R+4),(R+0),4);
}
B474b16:{NFSU2_TR(0x474b16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474b1bull));
TAIL_STATIC(0x45b1f0u,45b);
}
B474b1b:L474b1b:{c.instructions+=1;NFSU2_TR(0x474b1b);
{goto L474b1f;}
}
B474b1d:L474b1d:{c.instructions+=1;NFSU2_TR(0x474b1d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B474b1f:L474b1f:{c.instructions+=5;NFSU2_TR(0x474b1f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xbcull))));
}
B474b25:{NFSU2_TR(0x474b25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474b26:{NFSU2_TR(0x474b26);
__builtin_memmove((R+4),(R+0),4);
}
B474b28:{NFSU2_TR(0x474b28);
u8 U[16];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B474b2f:{NFSU2_TR(0x474b2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474b34ull));
TAIL_STATIC(0x46cdd0u,46c);
}
B474b34:L474b34:{c.instructions+=3;NFSU2_TR(0x474b34);
u8 U[16];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B474b3b:{NFSU2_TR(0x474b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474b41:{NFSU2_TR(0x474b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B474b48:L474b48:{c.instructions+=4;NFSU2_TR(0x474b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474b4e:{NFSU2_TR(0x474b4e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B474b54:{NFSU2_TR(0x474b54);
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
B474b56:{NFSU2_TR(0x474b56);
if(r1(R+518)){{goto L474c57;}}
}
B474b5c:L474b5c:{c.instructions+=4;NFSU2_TR(0x474b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474b62:{NFSU2_TR(0x474b62);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B474b64:{NFSU2_TR(0x474b64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B474b66:{NFSU2_TR(0x474b66);
if(r1(R+518)){{goto L474b7b;}}
}
B474b68:L474b68:{c.instructions+=4;NFSU2_TR(0x474b68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474b6e:{NFSU2_TR(0x474b6e);
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
B474b70:{NFSU2_TR(0x474b70);
w4(R+28,u32(0x1ull));
}
B474b75:{NFSU2_TR(0x474b75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L474c57;}}
}
B474b7b:L474b7b:{c.instructions+=8;NFSU2_TR(0x474b7b);
__builtin_memmove((R+0),gp(0x82cb50),4);
}
B474b80:{NFSU2_TR(0x474b80);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474b86:{NFSU2_TR(0x474b86);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B474b87:{NFSU2_TR(0x474b87);
{u32 ea_=u32(u32(7909484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B474b8d:{NFSU2_TR(0x474b8d);
w4(R+12,u32(0x3ull));
}
B474b92:{NFSU2_TR(0x474b92);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x474b92);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x474b92);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B474b94:{NFSU2_TR(0x474b94);
__builtin_memmove((R+20),(R+8),4);
}
B474b96:{NFSU2_TR(0x474b96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474b9bull));
TAIL_STATIC(0x75bed4u,75b);
}
B474b9b:L474b9b:{c.instructions+=15;NFSU2_TR(0x474b9b);
w4(R+4,u32(0x12ull));
}
B474ba0:{NFSU2_TR(0x474ba0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B474ba2:{NFSU2_TR(0x474ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B474ba6:{NFSU2_TR(0x474ba6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B474ba8:{NFSU2_TR(0x474ba8);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B474ba9:{NFSU2_TR(0x474ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B474bac:{NFSU2_TR(0x474bac);
__builtin_memmove(gp(0x82cb50),(R+20),4);
}
B474bb2:{NFSU2_TR(0x474bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B474bb5:{NFSU2_TR(0x474bb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xecull))));
__builtin_memmove((R+12),(U+0),4);
}
B474bbb:{NFSU2_TR(0x474bbb);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+12)),r4(U+0));
}
B474bc1:{NFSU2_TR(0x474bc1);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B474bc7:{NFSU2_TR(0x474bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474bcd:{NFSU2_TR(0x474bcd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474bce:{NFSU2_TR(0x474bce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B474bd1:{NFSU2_TR(0x474bd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474bd6ull));
TAIL_STATIC(0x43be60u,43b);
}
B474bd6:L474bd6:{c.instructions+=8;NFSU2_TR(0x474bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474bd9:{NFSU2_TR(0x474bd9);
u8 U[12];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B474bdd:{NFSU2_TR(0x474bdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B474be4:{NFSU2_TR(0x474be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xf4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B474bee:{NFSU2_TR(0x474bee);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B474bf4:{NFSU2_TR(0x474bf4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474bf5:{NFSU2_TR(0x474bf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474bf9:{NFSU2_TR(0x474bf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474bfeull));
TAIL_STATIC(0x43e910u,43e);
}
B474bfe:L474bfe:{c.instructions+=3;NFSU2_TR(0x474bfe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B474c01:{NFSU2_TR(0x474c01);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x45cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x45cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B474c06:{NFSU2_TR(0x474c06);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L474c32;}}
}
B474c08:L474c08:{c.instructions+=6;NFSU2_TR(0x474c08);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B474c0d:{NFSU2_TR(0x474c0d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B474c10:{NFSU2_TR(0x474c10);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B474c15:{NFSU2_TR(0x474c15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474c16:{NFSU2_TR(0x474c16);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474c18:{NFSU2_TR(0x474c18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474c1dull));
TAIL_STATIC(0x440820u,440);
}
B474c1d:L474c1d:{c.instructions+=3;NFSU2_TR(0x474c1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B474c20:{NFSU2_TR(0x474c20);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B474c22:{NFSU2_TR(0x474c22);
if(r1(R+518)){{goto L474c32;}}
}
B474c24:L474c24:{c.instructions+=4;NFSU2_TR(0x474c24);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474c28:{NFSU2_TR(0x474c28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474c29:{NFSU2_TR(0x474c29);
__builtin_memmove((R+4),(R+0),4);
}
B474c2b:{NFSU2_TR(0x474c2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474c30ull));
TAIL_STATIC(0x45b1f0u,45b);
}
B474c30:L474c30:{c.instructions+=1;NFSU2_TR(0x474c30);
{goto L474c34;}
}
B474c32:L474c32:{c.instructions+=1;NFSU2_TR(0x474c32);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B474c34:L474c34:{c.instructions+=4;NFSU2_TR(0x474c34);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474c35:{NFSU2_TR(0x474c35);
__builtin_memmove((R+4),(R+0),4);
}
B474c37:{NFSU2_TR(0x474c37);
u8 U[16];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B474c3e:{NFSU2_TR(0x474c3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474c43ull));
TAIL_STATIC(0x46cdd0u,46c);
}
B474c43:L474c43:{c.instructions+=3;NFSU2_TR(0x474c43);
u8 U[16];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B474c4a:{NFSU2_TR(0x474c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474c50:{NFSU2_TR(0x474c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B474c57:L474c57:{c.instructions+=6;NFSU2_TR(0x474c57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B474c58:{NFSU2_TR(0x474c58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B474c59:{NFSU2_TR(0x474c59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B474c5a:{NFSU2_TR(0x474c5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B474c5b:{NFSU2_TR(0x474c5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B474c5c:{NFSU2_TR(0x474c5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474c60:L474c60:{c.instructions+=3;NFSU2_TR(0x474c60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474c61:{NFSU2_TR(0x474c61);
__builtin_memmove((R+24),(R+4),4);
}
B474c63:{NFSU2_TR(0x474c63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474c68ull));
TAIL_STATIC(0x45e350u,45e);
}
B474c68:L474c68:{c.instructions+=17;NFSU2_TR(0x474c68);
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
B474c6a:{NFSU2_TR(0x474c6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B474c70:{NFSU2_TR(0x474c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474c76:{NFSU2_TR(0x474c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474c7c:{NFSU2_TR(0x474c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474c82:{NFSU2_TR(0x474c82);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B474c86:{NFSU2_TR(0x474c86);
u8 U[4];
w4(U+0,u32(0x78b078ull));
s4(u32(r4(R+24)),r4(U+0));
}
B474c8c:{NFSU2_TR(0x474c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474c92:{NFSU2_TR(0x474c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474c98:{NFSU2_TR(0x474c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474c9e:{NFSU2_TR(0x474c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474ca4:{NFSU2_TR(0x474ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474caa:{NFSU2_TR(0x474caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474cb0:{NFSU2_TR(0x474cb0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B474cb6:{NFSU2_TR(0x474cb6);
__builtin_memmove((R+0),(R+24),4);
}
B474cb8:{NFSU2_TR(0x474cb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B474cb9:{NFSU2_TR(0x474cb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474cc0:L474cc0:{c.instructions+=7;NFSU2_TR(0x474cc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474cc1:{NFSU2_TR(0x474cc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B474cc5:{NFSU2_TR(0x474cc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B474cc7:{NFSU2_TR(0x474cc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474cc8:{NFSU2_TR(0x474cc8);
__builtin_memmove((R+28),(R+4),4);
}
B474cca:{NFSU2_TR(0x474cca);
__builtin_memmove((R+4),(R+24),4);
}
B474ccc:{NFSU2_TR(0x474ccc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474ccfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B474ccf:L474ccf:{c.instructions+=5;NFSU2_TR(0x474ccf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B474cd1:{NFSU2_TR(0x474cd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B474cd4:{NFSU2_TR(0x474cd4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B474cd9:{NFSU2_TR(0x474cd9);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B474cdc:{NFSU2_TR(0x474cdc);
if(r1(R+518)){{goto L474d00;}}
}
B474cde:L474cde:{c.instructions+=2;NFSU2_TR(0x474cde);
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
B474cdf:{NFSU2_TR(0x474cdf);
if(r1(R+518)){{goto L474cf5;}}
}
B474ce1:L474ce1:{c.instructions+=3;NFSU2_TR(0x474ce1);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474ce6:{NFSU2_TR(0x474ce6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474ce8:{NFSU2_TR(0x474ce8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474cedull));
TAIL_STATIC(0x4691c0u,469);
}
B474ced:L474ced:{c.instructions+=4;NFSU2_TR(0x474ced);
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
B474cf0:{NFSU2_TR(0x474cf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B474cf1:{NFSU2_TR(0x474cf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B474cf2:{NFSU2_TR(0x474cf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474cf5:L474cf5:{c.instructions+=4;NFSU2_TR(0x474cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474cfb:{NFSU2_TR(0x474cfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B474cfc:{NFSU2_TR(0x474cfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B474cfd:{NFSU2_TR(0x474cfd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474d00:L474d00:{c.instructions+=4;NFSU2_TR(0x474d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474d06:{NFSU2_TR(0x474d06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B474d07:{NFSU2_TR(0x474d07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B474d08:{NFSU2_TR(0x474d08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474d10:L474d10:{c.instructions+=3;NFSU2_TR(0x474d10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474d11:{NFSU2_TR(0x474d11);
__builtin_memmove((R+24),(R+4),4);
}
B474d13:{NFSU2_TR(0x474d13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474d18ull));
TAIL_STATIC(0x45e350u,45e);
}
B474d18:L474d18:{c.instructions+=18;NFSU2_TR(0x474d18);
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
B474d1a:{NFSU2_TR(0x474d1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B474d20:{NFSU2_TR(0x474d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474d26:{NFSU2_TR(0x474d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474d2c:{NFSU2_TR(0x474d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474d32:{NFSU2_TR(0x474d32);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B474d36:{NFSU2_TR(0x474d36);
u8 U[4];
w4(U+0,u32(0x78b0c0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B474d3c:{NFSU2_TR(0x474d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474d42:{NFSU2_TR(0x474d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474d48:{NFSU2_TR(0x474d48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474d4e:{NFSU2_TR(0x474d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
w4(U+4,u32(0x7fffull));
s4(u32(r4(U+0)),r4(U+4));
}
B474d58:{NFSU2_TR(0x474d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B474d62:{NFSU2_TR(0x474d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474d68:{NFSU2_TR(0x474d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474d6e:{NFSU2_TR(0x474d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474d74:{NFSU2_TR(0x474d74);
__builtin_memmove((R+0),(R+24),4);
}
B474d76:{NFSU2_TR(0x474d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B474d77:{NFSU2_TR(0x474d77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474d80:L474d80:{c.instructions+=14;NFSU2_TR(0x474d80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474d82:{NFSU2_TR(0x474d82);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474d87:{NFSU2_TR(0x474d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474d8d:{NFSU2_TR(0x474d8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474d8e:{NFSU2_TR(0x474d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474d95:{NFSU2_TR(0x474d95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474d96:{NFSU2_TR(0x474d96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474d97:{NFSU2_TR(0x474d97);
__builtin_memmove((R+24),(R+4),4);
}
B474d99:{NFSU2_TR(0x474d99);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474d9d:{NFSU2_TR(0x474d9d);
u8 U[4];
w4(U+0,u32(0x78b0c0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B474da3:{NFSU2_TR(0x474da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474da9:{NFSU2_TR(0x474da9);
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
B474dab:{NFSU2_TR(0x474dab);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B474db3:{NFSU2_TR(0x474db3);
if(r1(R+518)){{goto L474dbb;}}
}
B474db5:L474db5:{c.instructions+=3;NFSU2_TR(0x474db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B474db7:{NFSU2_TR(0x474db7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474db9:{NFSU2_TR(0x474db9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474dbbull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B474dbb:L474dbb:{c.instructions+=7;NFSU2_TR(0x474dbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474dbf:{NFSU2_TR(0x474dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B474dc9:{NFSU2_TR(0x474dc9);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B474dcf:{NFSU2_TR(0x474dcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B474dd0:{NFSU2_TR(0x474dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474dd7:{NFSU2_TR(0x474dd7);
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
B474dda:{NFSU2_TR(0x474dda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474de0:L474de0:{c.instructions+=9;NFSU2_TR(0x474de0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474de1:{NFSU2_TR(0x474de1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474de2:{NFSU2_TR(0x474de2);
__builtin_memmove((R+24),(R+4),4);
}
B474de4:{NFSU2_TR(0x474de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474dea:{NFSU2_TR(0x474dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474ded:{NFSU2_TR(0x474ded);
__builtin_memmove(gp(0x7f0b50),(R+4),4);
}
B474df3:{NFSU2_TR(0x474df3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474df4:{NFSU2_TR(0x474df4);
w4(R+4,u32(0x7f0b40ull));
}
B474df9:{NFSU2_TR(0x474df9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474dfeull));
TAIL_STATIC(0x4599e0u,459);
}
B474dfe:L474dfe:{c.instructions+=7;NFSU2_TR(0x474dfe);
__builtin_memmove((R+8),gp(0x7f0b54),4);
}
B474e04:{NFSU2_TR(0x474e04);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474e08:{NFSU2_TR(0x474e08);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474e0c:{NFSU2_TR(0x474e0c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B474e12:{NFSU2_TR(0x474e12);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B474e14:{NFSU2_TR(0x474e14);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B474e17:{NFSU2_TR(0x474e17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L474e6e;}}
}
B474e19:L474e19:{c.instructions+=6;NFSU2_TR(0x474e19);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474e1d:{NFSU2_TR(0x474e1d);
{u32 ea_=u32(u32(7909640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474e23:{NFSU2_TR(0x474e23);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B474e27:{NFSU2_TR(0x474e27);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B474e29:{NFSU2_TR(0x474e29);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B474e2c:{NFSU2_TR(0x474e2c);
if(r1(R+514)){{goto L474e36;}}
}
B474e2e:L474e2e:{c.instructions+=2;NFSU2_TR(0x474e2e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B474e30:{NFSU2_TR(0x474e30);
{u32 ea_=u32(u32(7909640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474e36:L474e36:{c.instructions+=6;NFSU2_TR(0x474e36);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B474e3c:{NFSU2_TR(0x474e3c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B474e40:{NFSU2_TR(0x474e40);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B474e46:{NFSU2_TR(0x474e46);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B474e48:{NFSU2_TR(0x474e48);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B474e4b:{NFSU2_TR(0x474e4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L474e76;}}
}
B474e4d:L474e4d:{c.instructions+=6;NFSU2_TR(0x474e4d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474e51:{NFSU2_TR(0x474e51);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474e57:{NFSU2_TR(0x474e57);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B474e5b:{NFSU2_TR(0x474e5b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B474e5d:{NFSU2_TR(0x474e5d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B474e60:{NFSU2_TR(0x474e60);
if(r1(R+514)){{goto L474e7c;}}
}
B474e62:L474e62:{c.instructions+=3;NFSU2_TR(0x474e62);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B474e64:{NFSU2_TR(0x474e64);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x42fe0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B474e6c:{NFSU2_TR(0x474e6c);
{goto L474e80;}
}
B474e6e:L474e6e:{c.instructions+=2;NFSU2_TR(0x474e6e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474e74:{NFSU2_TR(0x474e74);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x474e36u);}goto L474e36;}
}
B474e76:L474e76:{c.instructions+=1;NFSU2_TR(0x474e76);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474e7c:L474e7c:{c.instructions+=1;NFSU2_TR(0x474e7c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B474e80:L474e80:{c.instructions+=5;NFSU2_TR(0x474e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474e86:{NFSU2_TR(0x474e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474e89:{NFSU2_TR(0x474e89);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B474e8c:{NFSU2_TR(0x474e8c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B474e8f:{NFSU2_TR(0x474e8f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L474ed2;}}
}
B474e91:L474e91:{c.instructions+=2;NFSU2_TR(0x474e91);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x474ffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B474e98:{NFSU2_TR(0x474e98);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x474ff4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B474e9f:L474e9f:{c.instructions+=8;NFSU2_TR(0x474e9f);
__builtin_memmove((R+0),gp(0x82cb60),4);
}
B474ea4:{NFSU2_TR(0x474ea4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474ea8:{NFSU2_TR(0x474ea8);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B474ea9:{NFSU2_TR(0x474ea9);
{u32 ea_=u32(u32(7909488u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B474eaf:{NFSU2_TR(0x474eaf);
w4(R+4,u32(0x6ull));
}
B474eb4:{NFSU2_TR(0x474eb4);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x474eb4);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x474eb4);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B474eb6:{NFSU2_TR(0x474eb6);
__builtin_memmove((R+28),(R+8),4);
}
B474eb8:{NFSU2_TR(0x474eb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474ebdull));
TAIL_STATIC(0x75bed4u,75b);
}
B474ebd:L474ebd:{c.instructions+=8;NFSU2_TR(0x474ebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B474ec0:{NFSU2_TR(0x474ec0);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B474ec2:{NFSU2_TR(0x474ec2);
__builtin_memmove((R+0),(R+28),4);
}
B474ec4:{NFSU2_TR(0x474ec4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B474ec6:{NFSU2_TR(0x474ec6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
}
B474ec9:{NFSU2_TR(0x474ec9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B474eca:{NFSU2_TR(0x474eca);
__builtin_memmove(gp(0x82cb60),(R+28),4);
}
B474ed0:{NFSU2_TR(0x474ed0);
{goto L474f03;}
}
B474ed2:L474ed2:{c.instructions+=8;NFSU2_TR(0x474ed2);
__builtin_memmove((R+0),gp(0x82cb5c),4);
}
B474ed7:{NFSU2_TR(0x474ed7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474edb:{NFSU2_TR(0x474edb);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B474edc:{NFSU2_TR(0x474edc);
{u32 ea_=u32(u32(7909488u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B474ee2:{NFSU2_TR(0x474ee2);
w4(R+4,u32(0x6ull));
}
B474ee7:{NFSU2_TR(0x474ee7);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x474ee7);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x474ee7);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B474ee9:{NFSU2_TR(0x474ee9);
__builtin_memmove((R+28),(R+8),4);
}
B474eeb:{NFSU2_TR(0x474eeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474ef0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B474ef0:L474ef0:{c.instructions+=7;NFSU2_TR(0x474ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B474ef3:{NFSU2_TR(0x474ef3);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B474ef5:{NFSU2_TR(0x474ef5);
__builtin_memmove((R+0),(R+28),4);
}
B474ef7:{NFSU2_TR(0x474ef7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B474ef9:{NFSU2_TR(0x474ef9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1bull))));
}
B474efc:{NFSU2_TR(0x474efc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B474efd:{NFSU2_TR(0x474efd);
__builtin_memmove(gp(0x82cb5c),(R+28),4);
}
B474f03:L474f03:{c.instructions+=5;NFSU2_TR(0x474f03);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B474f09:{NFSU2_TR(0x474f09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B474f0f:{NFSU2_TR(0x474f0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474f10:{NFSU2_TR(0x474f10);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B474f13:{NFSU2_TR(0x474f13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474f18ull));
TAIL_STATIC(0x43be60u,43b);
}
B474f18:L474f18:{c.instructions+=8;NFSU2_TR(0x474f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B474f1b:{NFSU2_TR(0x474f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474f21:{NFSU2_TR(0x474f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B474f2b:{NFSU2_TR(0x474f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B474f35:{NFSU2_TR(0x474f35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B474f3f:{NFSU2_TR(0x474f3f);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B474f44:{NFSU2_TR(0x474f44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474f45:{NFSU2_TR(0x474f45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474f4aull));
TAIL_STATIC(0x43e910u,43e);
}
B474f4a:L474f4a:{c.instructions+=3;NFSU2_TR(0x474f4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B474f4d:{NFSU2_TR(0x474f4d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x45cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x45cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B474f52:{NFSU2_TR(0x474f52);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L474f82;}}
}
B474f54:L474f54:{c.instructions+=6;NFSU2_TR(0x474f54);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B474f5a:{NFSU2_TR(0x474f5a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B474f5d:{NFSU2_TR(0x474f5d);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B474f63:{NFSU2_TR(0x474f63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474f64:{NFSU2_TR(0x474f64);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474f66:{NFSU2_TR(0x474f66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474f6bull));
TAIL_STATIC(0x440820u,440);
}
B474f6b:L474f6b:{c.instructions+=3;NFSU2_TR(0x474f6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B474f6e:{NFSU2_TR(0x474f6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B474f70:{NFSU2_TR(0x474f70);
if(r1(R+518)){{goto L474f82;}}
}
B474f72:L474f72:{c.instructions+=4;NFSU2_TR(0x474f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B474f78:{NFSU2_TR(0x474f78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474f79:{NFSU2_TR(0x474f79);
__builtin_memmove((R+4),(R+0),4);
}
B474f7b:{NFSU2_TR(0x474f7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474f80ull));
TAIL_STATIC(0x45b1f0u,45b);
}
B474f80:L474f80:{c.instructions+=1;NFSU2_TR(0x474f80);
{goto L474f84;}
}
B474f82:L474f82:{c.instructions+=1;NFSU2_TR(0x474f82);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B474f84:L474f84:{c.instructions+=5;NFSU2_TR(0x474f84);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B474f8a:{NFSU2_TR(0x474f8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B474f8b:{NFSU2_TR(0x474f8b);
__builtin_memmove((R+4),(R+0),4);
}
B474f8d:{NFSU2_TR(0x474f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474f93:{NFSU2_TR(0x474f93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474f98ull));
TAIL_STATIC(0x46cdd0u,46c);
}
B474f98:L474f98:{c.instructions+=3;NFSU2_TR(0x474f98);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474f9c:{NFSU2_TR(0x474f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B474fa3:{NFSU2_TR(0x474fa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474fa8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B474fa8:L474fa8:{c.instructions+=3;NFSU2_TR(0x474fa8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B474fab:{NFSU2_TR(0x474fab);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B474fad:{NFSU2_TR(0x474fad);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L474fef;}}
}
B474faf:L474faf:{c.instructions+=3;NFSU2_TR(0x474faf);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B474fb4:{NFSU2_TR(0x474fb4);
__builtin_memmove((R+28),(R+0),4);
}
B474fb6:{NFSU2_TR(0x474fb6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L474fbd;}}
}
B474fb8:L474fb8:{c.instructions+=1;NFSU2_TR(0x474fb8);
w4(R+28,u32(0x7fffull));
}
B474fbd:L474fbd:{c.instructions+=5;NFSU2_TR(0x474fbd);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B474fc3:{NFSU2_TR(0x474fc3);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474fc9:{NFSU2_TR(0x474fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B474fcc:{NFSU2_TR(0x474fcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B474fce:{NFSU2_TR(0x474fce);
if(r1(R+518)){{goto L474fdd;}}
}
B474fd0:L474fd0:{c.instructions+=4;NFSU2_TR(0x474fd0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B474fd2:{NFSU2_TR(0x474fd2);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B474fd5:{NFSU2_TR(0x474fd5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B474fd7:{NFSU2_TR(0x474fd7);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B474fdd:L474fdd:{c.instructions+=1;NFSU2_TR(0x474fdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x474fe2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B474fe2:L474fe2:{c.instructions+=7;NFSU2_TR(0x474fe2);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(s64(s32(r4(R+0)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+28)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B474fe5:{NFSU2_TR(0x474fe5);
u8 U[47];
w4(U+39,u32(u32(u32(0xfull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+28),4);
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B474fe8:{NFSU2_TR(0x474fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B474feb:{NFSU2_TR(0x474feb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B474fec:{NFSU2_TR(0x474fec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B474fed:{NFSU2_TR(0x474fed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B474fee:{NFSU2_TR(0x474fee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B474fef:L474fef:{c.instructions+=2;NFSU2_TR(0x474fef);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B474ff1:{NFSU2_TR(0x474ff1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x474fbdu);}goto L474fbd;}
}
XIT:NFSU2_TR_EXIT(0x474,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
