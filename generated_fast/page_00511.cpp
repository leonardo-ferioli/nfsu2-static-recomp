#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_46d(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_5cd(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5f7(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_6fe(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x511,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x511,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_511(u8* __restrict R,Cpu& c);
u32 page_511(Cpu& c){return body_511(c.regs.data(),c);}
__attribute__((noinline)) u32 body_511(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x511000:goto L511000;
case 0x511003:c.instructions+=5;goto B511003;
case 0x511004:c.instructions+=4;goto B511004;
case 0x511006:c.instructions+=3;goto B511006;
case 0x511009:c.instructions+=2;goto B511009;
case 0x51100b:c.instructions+=1;goto B51100b;
case 0x51100d:goto L51100d;
case 0x51100f:c.instructions+=1;goto B51100f;
case 0x511014:goto L511014;
case 0x511017:c.instructions+=9;goto B511017;
case 0x51101a:c.instructions+=8;goto B51101a;
case 0x511021:c.instructions+=7;goto B511021;
case 0x511026:c.instructions+=6;goto B511026;
case 0x511029:c.instructions+=5;goto B511029;
case 0x51102b:c.instructions+=4;goto B51102b;
case 0x511033:c.instructions+=3;goto B511033;
case 0x51103b:c.instructions+=2;goto B51103b;
case 0x51103f:c.instructions+=1;goto B51103f;
case 0x511041:goto L511041;
case 0x511047:c.instructions+=2;goto B511047;
case 0x511049:c.instructions+=1;goto B511049;
case 0x51104b:goto L51104b;
case 0x51104e:c.instructions+=2;goto B51104e;
case 0x511050:c.instructions+=1;goto B511050;
case 0x511052:goto L511052;
case 0x511054:c.instructions+=1;goto B511054;
case 0x511059:goto L511059;
case 0x51105d:c.instructions+=3;goto B51105d;
case 0x51105e:c.instructions+=2;goto B51105e;
case 0x511062:c.instructions+=1;goto B511062;
case 0x511064:goto L511064;
case 0x511065:c.instructions+=2;goto B511065;
case 0x511068:c.instructions+=1;goto B511068;
case 0x511069:goto L511069;
case 0x51106e:c.instructions+=5;goto B51106e;
case 0x511070:c.instructions+=4;goto B511070;
case 0x511078:c.instructions+=3;goto B511078;
case 0x511080:c.instructions+=2;goto B511080;
case 0x511088:c.instructions+=1;goto B511088;
case 0x51108a:goto L51108a;
case 0x511090:c.instructions+=2;goto B511090;
case 0x511092:c.instructions+=1;goto B511092;
case 0x511094:goto L511094;
case 0x511097:c.instructions+=2;goto B511097;
case 0x511099:c.instructions+=1;goto B511099;
case 0x51109b:goto L51109b;
case 0x51109d:c.instructions+=1;goto B51109d;
case 0x5110a2:goto L5110a2;
case 0x5110a6:c.instructions+=3;goto B5110a6;
case 0x5110a7:c.instructions+=2;goto B5110a7;
case 0x5110ab:c.instructions+=1;goto B5110ab;
case 0x5110ad:goto L5110ad;
case 0x5110ae:c.instructions+=2;goto B5110ae;
case 0x5110b1:c.instructions+=1;goto B5110b1;
case 0x5110c0:goto L5110c0;
case 0x5110c3:c.instructions+=7;goto B5110c3;
case 0x5110c4:c.instructions+=6;goto B5110c4;
case 0x5110c5:c.instructions+=5;goto B5110c5;
case 0x5110c7:c.instructions+=4;goto B5110c7;
case 0x5110ca:c.instructions+=3;goto B5110ca;
case 0x5110cc:c.instructions+=2;goto B5110cc;
case 0x5110d0:c.instructions+=1;goto B5110d0;
case 0x5110d6:goto L5110d6;
case 0x5110d8:c.instructions+=2;goto B5110d8;
case 0x5110da:c.instructions+=1;goto B5110da;
case 0x5110dc:goto L5110dc;
case 0x5110e1:goto L5110e1;
case 0x5110e4:c.instructions+=5;goto B5110e4;
case 0x5110e6:c.instructions+=4;goto B5110e6;
case 0x5110e8:c.instructions+=3;goto B5110e8;
case 0x5110eb:c.instructions+=2;goto B5110eb;
case 0x5110ee:c.instructions+=1;goto B5110ee;
case 0x5110f0:goto L5110f0;
case 0x5110f5:goto L5110f5;
case 0x5110f8:c.instructions+=4;goto B5110f8;
case 0x5110fa:c.instructions+=3;goto B5110fa;
case 0x5110fc:c.instructions+=2;goto B5110fc;
case 0x5110ff:c.instructions+=1;goto B5110ff;
case 0x511102:goto L511102;
case 0x511106:c.instructions+=7;goto B511106;
case 0x51110a:c.instructions+=6;goto B51110a;
case 0x511111:c.instructions+=5;goto B511111;
case 0x511116:c.instructions+=4;goto B511116;
case 0x511118:c.instructions+=3;goto B511118;
case 0x511120:c.instructions+=2;goto B511120;
case 0x511124:c.instructions+=1;goto B511124;
case 0x51112a:goto L51112a;
case 0x511130:c.instructions+=2;goto B511130;
case 0x511132:c.instructions+=1;goto B511132;
case 0x511138:goto L511138;
case 0x51113b:c.instructions+=2;goto B51113b;
case 0x51113d:c.instructions+=1;goto B51113d;
case 0x511143:goto L511143;
case 0x511145:c.instructions+=1;goto B511145;
case 0x51114a:goto L51114a;
case 0x51114e:c.instructions+=3;goto B51114e;
case 0x51114f:c.instructions+=2;goto B51114f;
case 0x511153:c.instructions+=1;goto B511153;
case 0x511155:goto L511155;
case 0x511156:c.instructions+=3;goto B511156;
case 0x511157:c.instructions+=2;goto B511157;
case 0x51115a:c.instructions+=1;goto B51115a;
case 0x51115d:goto L51115d;
case 0x51115f:c.instructions+=4;goto B51115f;
case 0x511164:c.instructions+=3;goto B511164;
case 0x51116c:c.instructions+=2;goto B51116c;
case 0x511174:c.instructions+=1;goto B511174;
case 0x511176:goto L511176;
case 0x511178:c.instructions+=2;goto B511178;
case 0x511180:c.instructions+=1;goto B511180;
case 0x511182:goto L511182;
case 0x511188:c.instructions+=2;goto B511188;
case 0x51118a:c.instructions+=1;goto B51118a;
case 0x51118c:goto L51118c;
case 0x51118f:c.instructions+=2;goto B51118f;
case 0x511191:c.instructions+=1;goto B511191;
case 0x511193:goto L511193;
case 0x511195:c.instructions+=1;goto B511195;
case 0x51119a:goto L51119a;
case 0x51119e:c.instructions+=3;goto B51119e;
case 0x51119f:c.instructions+=2;goto B51119f;
case 0x5111a3:c.instructions+=1;goto B5111a3;
case 0x5111a5:goto L5111a5;
case 0x5111a9:c.instructions+=4;goto B5111a9;
case 0x5111aa:c.instructions+=3;goto B5111aa;
case 0x5111ab:c.instructions+=2;goto B5111ab;
case 0x5111ae:c.instructions+=1;goto B5111ae;
case 0x5111b1:goto L5111b1;
case 0x5111b3:c.instructions+=2;goto B5111b3;
case 0x5111bb:c.instructions+=1;goto B5111bb;
case 0x5111bd:goto L5111bd;
case 0x5111c3:c.instructions+=2;goto B5111c3;
case 0x5111c5:c.instructions+=1;goto B5111c5;
case 0x5111c7:goto L5111c7;
case 0x5111ca:c.instructions+=2;goto B5111ca;
case 0x5111cc:c.instructions+=1;goto B5111cc;
case 0x5111ce:goto L5111ce;
case 0x5111d0:c.instructions+=1;goto B5111d0;
case 0x5111d5:goto L5111d5;
case 0x5111d9:c.instructions+=3;goto B5111d9;
case 0x5111da:c.instructions+=2;goto B5111da;
case 0x5111de:c.instructions+=1;goto B5111de;
case 0x5111e0:goto L5111e0;
case 0x5111e4:goto L5111e4;
case 0x5111e5:c.instructions+=3;goto B5111e5;
case 0x5111e6:c.instructions+=2;goto B5111e6;
case 0x5111e9:c.instructions+=1;goto B5111e9;
case 0x5111f0:goto L5111f0;
case 0x5111f2:c.instructions+=3;goto B5111f2;
case 0x5111f8:c.instructions+=2;goto B5111f8;
case 0x5111f9:c.instructions+=1;goto B5111f9;
case 0x511200:goto L511200;
case 0x511203:c.instructions+=1;goto B511203;
case 0x511205:goto L511205;
case 0x511206:c.instructions+=3;goto B511206;
case 0x511209:c.instructions+=2;goto B511209;
case 0x51120c:c.instructions+=1;goto B51120c;
case 0x51120e:goto L51120e;
case 0x51120f:c.instructions+=1;goto B51120f;
case 0x511212:goto L511212;
case 0x511216:c.instructions+=11;goto B511216;
case 0x511218:c.instructions+=10;goto B511218;
case 0x51121c:c.instructions+=9;goto B51121c;
case 0x51121f:c.instructions+=8;goto B51121f;
case 0x511223:c.instructions+=7;goto B511223;
case 0x511226:c.instructions+=6;goto B511226;
case 0x511229:c.instructions+=5;goto B511229;
case 0x51122d:c.instructions+=4;goto B51122d;
case 0x511233:c.instructions+=3;goto B511233;
case 0x511239:c.instructions+=2;goto B511239;
case 0x51123a:c.instructions+=1;goto B51123a;
case 0x511240:goto L511240;
case 0x511242:goto L511242;
case 0x511249:c.instructions+=1;goto B511249;
case 0x51124b:goto L51124b;
case 0x51124c:c.instructions+=2;goto B51124c;
case 0x51124f:c.instructions+=1;goto B51124f;
case 0x511251:goto L511251;
case 0x511256:c.instructions+=1;goto B511256;
case 0x511257:goto L511257;
case 0x51125e:c.instructions+=1;goto B51125e;
case 0x511260:goto L511260;
case 0x511262:goto L511262;
case 0x511269:c.instructions+=1;goto B511269;
case 0x51126b:goto L51126b;
case 0x51126c:c.instructions+=2;goto B51126c;
case 0x51126f:c.instructions+=1;goto B51126f;
case 0x511271:goto L511271;
case 0x511276:c.instructions+=1;goto B511276;
case 0x511277:goto L511277;
case 0x51127e:c.instructions+=1;goto B51127e;
case 0x511280:goto L511280;
case 0x511283:c.instructions+=2;goto B511283;
case 0x511285:c.instructions+=1;goto B511285;
case 0x511287:goto L511287;
case 0x51128b:c.instructions+=3;goto B51128b;
case 0x511290:c.instructions+=2;goto B511290;
case 0x511293:c.instructions+=1;goto B511293;
case 0x511298:goto L511298;
case 0x5112a0:goto L5112a0;
case 0x5112a4:c.instructions+=1;goto B5112a4;
case 0x5112b0:goto L5112b0;
case 0x5112b5:c.instructions+=3;goto B5112b5;
case 0x5112b7:c.instructions+=2;goto B5112b7;
case 0x5112b8:c.instructions+=1;goto B5112b8;
case 0x5112ba:goto L5112ba;
case 0x5112bd:c.instructions+=2;goto B5112bd;
case 0x5112bf:c.instructions+=1;goto B5112bf;
case 0x5112c1:goto L5112c1;
case 0x5112c3:c.instructions+=2;goto B5112c3;
case 0x5112c5:c.instructions+=1;goto B5112c5;
case 0x5112ca:goto L5112ca;
case 0x5112cc:c.instructions+=1;goto B5112cc;
case 0x5112ce:goto L5112ce;
case 0x5112d0:c.instructions+=2;goto B5112d0;
case 0x5112d2:c.instructions+=1;goto B5112d2;
case 0x5112d7:goto L5112d7;
case 0x5112d9:c.instructions+=1;goto B5112d9;
case 0x5112db:goto L5112db;
case 0x5112e0:c.instructions+=2;goto B5112e0;
case 0x5112e1:c.instructions+=1;goto B5112e1;
case 0x5112e2:goto L5112e2;
case 0x5112e4:c.instructions+=2;goto B5112e4;
case 0x5112e5:c.instructions+=1;goto B5112e5;
case 0x5112e6:goto L5112e6;
case 0x5112e8:c.instructions+=2;goto B5112e8;
case 0x5112e9:c.instructions+=1;goto B5112e9;
case 0x5112f0:goto L5112f0;
case 0x5112f7:c.instructions+=4;goto B5112f7;
case 0x5112f8:c.instructions+=3;goto B5112f8;
case 0x5112fa:c.instructions+=2;goto B5112fa;
case 0x5112fc:c.instructions+=1;goto B5112fc;
case 0x5112fe:goto L5112fe;
case 0x511302:c.instructions+=1;goto B511302;
case 0x511305:goto L511305;
case 0x511307:c.instructions+=1;goto B511307;
case 0x511309:goto L511309;
case 0x51130a:c.instructions+=3;goto B51130a;
case 0x51130d:c.instructions+=2;goto B51130d;
case 0x51130f:c.instructions+=1;goto B51130f;
case 0x511311:goto L511311;
case 0x511313:c.instructions+=2;goto B511313;
case 0x511314:c.instructions+=1;goto B511314;
case 0x511317:goto L511317;
case 0x511319:c.instructions+=2;goto B511319;
case 0x51131a:c.instructions+=1;goto B51131a;
case 0x511320:goto L511320;
case 0x511321:c.instructions+=4;goto B511321;
case 0x511323:c.instructions+=3;goto B511323;
case 0x511325:c.instructions+=2;goto B511325;
case 0x511327:c.instructions+=1;goto B511327;
case 0x511329:goto L511329;
case 0x51132a:c.instructions+=1;goto B51132a;
case 0x51132f:goto L51132f;
case 0x511332:c.instructions+=1;goto B511332;
case 0x511338:goto L511338;
case 0x511339:c.instructions+=1;goto B511339;
case 0x511340:goto L511340;
case 0x511342:c.instructions+=2;goto B511342;
case 0x511344:c.instructions+=1;goto B511344;
case 0x511346:goto L511346;
case 0x511347:goto L511347;
case 0x51134a:c.instructions+=2;goto B51134a;
case 0x51134f:c.instructions+=1;goto B51134f;
case 0x511351:goto L511351;
case 0x511354:c.instructions+=1;goto B511354;
case 0x511357:goto L511357;
case 0x51135a:c.instructions+=1;goto B51135a;
case 0x511360:goto L511360;
case 0x511363:c.instructions+=1;goto B511363;
case 0x511365:goto L511365;
case 0x511368:c.instructions+=2;goto B511368;
case 0x51136a:c.instructions+=1;goto B51136a;
case 0x51136c:goto L51136c;
case 0x51136f:c.instructions+=2;goto B51136f;
case 0x511371:c.instructions+=1;goto B511371;
case 0x511373:goto L511373;
case 0x511376:c.instructions+=2;goto B511376;
case 0x51137a:c.instructions+=1;goto B51137a;
case 0x51137c:goto L51137c;
case 0x51137f:c.instructions+=3;goto B51137f;
case 0x511382:c.instructions+=2;goto B511382;
case 0x511385:c.instructions+=1;goto B511385;
case 0x511387:goto L511387;
case 0x51138a:c.instructions+=1;goto B51138a;
case 0x51138c:goto L51138c;
case 0x511390:goto L511390;
case 0x511393:c.instructions+=2;goto B511393;
case 0x511397:c.instructions+=1;goto B511397;
case 0x511399:goto L511399;
case 0x51139c:c.instructions+=3;goto B51139c;
case 0x51139f:c.instructions+=2;goto B51139f;
case 0x5113a2:c.instructions+=1;goto B5113a2;
case 0x5113a4:goto L5113a4;
case 0x5113a7:c.instructions+=1;goto B5113a7;
case 0x5113a9:goto L5113a9;
case 0x5113b0:goto L5113b0;
case 0x5113b3:c.instructions+=1;goto B5113b3;
case 0x5113b4:goto L5113b4;
case 0x5113b6:c.instructions+=1;goto B5113b6;
case 0x5113c0:goto L5113c0;
case 0x5113c1:c.instructions+=4;goto B5113c1;
case 0x5113c3:c.instructions+=3;goto B5113c3;
case 0x5113c5:c.instructions+=2;goto B5113c5;
case 0x5113c8:c.instructions+=1;goto B5113c8;
case 0x5113ca:goto L5113ca;
case 0x5113d0:goto L5113d0;
case 0x5113d3:c.instructions+=6;goto B5113d3;
case 0x5113d7:c.instructions+=5;goto B5113d7;
case 0x5113d9:c.instructions+=4;goto B5113d9;
case 0x5113dc:c.instructions+=3;goto B5113dc;
case 0x5113e0:c.instructions+=2;goto B5113e0;
case 0x5113e3:c.instructions+=1;goto B5113e3;
case 0x5113e5:goto L5113e5;
case 0x5113e6:c.instructions+=1;goto B5113e6;
case 0x5113f0:goto L5113f0;
case 0x5113f2:c.instructions+=2;goto B5113f2;
case 0x5113f4:c.instructions+=1;goto B5113f4;
case 0x5113fa:goto L5113fa;
case 0x5113fd:c.instructions+=2;goto B5113fd;
case 0x511402:c.instructions+=1;goto B511402;
case 0x511404:goto L511404;
case 0x511407:c.instructions+=1;goto B511407;
case 0x51140a:goto L51140a;
case 0x51140b:c.instructions+=5;goto B51140b;
case 0x51140c:c.instructions+=4;goto B51140c;
case 0x51140d:c.instructions+=3;goto B51140d;
case 0x511410:c.instructions+=2;goto B511410;
case 0x511412:c.instructions+=1;goto B511412;
case 0x511418:goto L511418;
case 0x51141d:c.instructions+=1;goto B51141d;
case 0x511420:goto L511420;
case 0x511423:c.instructions+=4;goto B511423;
case 0x511425:c.instructions+=3;goto B511425;
case 0x511427:c.instructions+=2;goto B511427;
case 0x51142a:c.instructions+=1;goto B51142a;
case 0x51142c:goto L51142c;
case 0x511430:goto L511430;
case 0x511431:c.instructions+=2;goto B511431;
case 0x511434:c.instructions+=1;goto B511434;
case 0x511436:goto L511436;
case 0x511439:c.instructions+=1;goto B511439;
case 0x51143b:goto L51143b;
case 0x51143f:c.instructions+=1;goto B51143f;
case 0x511441:goto L511441;
case 0x511443:goto L511443;
case 0x511447:c.instructions+=1;goto B511447;
case 0x511449:goto L511449;
case 0x51144b:c.instructions+=1;goto B51144b;
case 0x51144d:goto L51144d;
case 0x511450:c.instructions+=1;goto B511450;
case 0x511452:goto L511452;
case 0x511457:c.instructions+=3;goto B511457;
case 0x51145a:c.instructions+=2;goto B51145a;
case 0x51145d:c.instructions+=1;goto B51145d;
case 0x51145f:goto L51145f;
case 0x511461:c.instructions+=3;goto B511461;
case 0x511463:c.instructions+=2;goto B511463;
case 0x511465:c.instructions+=1;goto B511465;
case 0x511467:goto L511467;
case 0x51146b:c.instructions+=3;goto B51146b;
case 0x51146e:c.instructions+=2;goto B51146e;
case 0x511471:c.instructions+=1;goto B511471;
case 0x511473:goto L511473;
case 0x511476:c.instructions+=1;goto B511476;
case 0x511478:goto L511478;
case 0x51147b:c.instructions+=2;goto B51147b;
case 0x51147d:c.instructions+=1;goto B51147d;
case 0x51147f:goto L51147f;
case 0x511482:c.instructions+=2;goto B511482;
case 0x511484:c.instructions+=1;goto B511484;
case 0x511486:goto L511486;
case 0x511489:c.instructions+=2;goto B511489;
case 0x51148d:c.instructions+=1;goto B51148d;
case 0x51148f:goto L51148f;
case 0x511492:c.instructions+=3;goto B511492;
case 0x511495:c.instructions+=2;goto B511495;
case 0x511498:c.instructions+=1;goto B511498;
case 0x51149a:goto L51149a;
case 0x51149d:c.instructions+=1;goto B51149d;
case 0x51149f:goto L51149f;
case 0x5114a0:goto L5114a0;
case 0x5114a3:c.instructions+=2;goto B5114a3;
case 0x5114a7:c.instructions+=1;goto B5114a7;
case 0x5114a9:goto L5114a9;
case 0x5114ac:c.instructions+=3;goto B5114ac;
case 0x5114af:c.instructions+=2;goto B5114af;
case 0x5114b2:c.instructions+=1;goto B5114b2;
case 0x5114b4:goto L5114b4;
case 0x5114b7:c.instructions+=1;goto B5114b7;
case 0x5114b9:goto L5114b9;
case 0x5114c0:goto L5114c0;
case 0x5114c3:c.instructions+=2;goto B5114c3;
case 0x5114c5:c.instructions+=1;goto B5114c5;
case 0x5114cb:goto L5114cb;
case 0x5114cc:c.instructions+=2;goto B5114cc;
case 0x5114cd:c.instructions+=1;goto B5114cd;
case 0x5114ce:goto L5114ce;
case 0x5114e0:goto L5114e0;
case 0x5114e7:c.instructions+=2;goto B5114e7;
case 0x5114ee:c.instructions+=1;goto B5114ee;
case 0x5114f0:goto L5114f0;
case 0x5114f1:c.instructions+=16;goto B5114f1;
case 0x5114f3:c.instructions+=15;goto B5114f3;
case 0x5114f6:c.instructions+=14;goto B5114f6;
case 0x5114fc:c.instructions+=13;goto B5114fc;
case 0x5114fe:c.instructions+=12;goto B5114fe;
case 0x5114ff:c.instructions+=11;goto B5114ff;
case 0x511500:c.instructions+=10;goto B511500;
case 0x511501:c.instructions+=9;goto B511501;
case 0x511504:c.instructions+=8;goto B511504;
case 0x51150b:c.instructions+=7;goto B51150b;
case 0x51150c:c.instructions+=6;goto B51150c;
case 0x511510:c.instructions+=5;goto B511510;
case 0x511516:c.instructions+=4;goto B511516;
case 0x51151a:c.instructions+=3;goto B51151a;
case 0x51151e:c.instructions+=2;goto B51151e;
case 0x511526:c.instructions+=1;goto B511526;
case 0x511528:goto L511528;
case 0x51152c:c.instructions+=1;goto B51152c;
case 0x511530:goto L511530;
case 0x511532:c.instructions+=2;goto B511532;
case 0x511537:c.instructions+=1;goto B511537;
case 0x51153e:goto L51153e;
case 0x511540:goto L511540;
case 0x511544:c.instructions+=4;goto B511544;
case 0x511548:c.instructions+=3;goto B511548;
case 0x51154a:c.instructions+=2;goto B51154a;
case 0x51154c:c.instructions+=1;goto B51154c;
case 0x51154e:goto L51154e;
case 0x511550:goto L511550;
case 0x511554:c.instructions+=5;goto B511554;
case 0x51155b:c.instructions+=4;goto B51155b;
case 0x511562:c.instructions+=3;goto B511562;
case 0x511565:c.instructions+=2;goto B511565;
case 0x511567:c.instructions+=1;goto B511567;
case 0x511569:goto L511569;
case 0x51156b:c.instructions+=2;goto B51156b;
case 0x51156f:c.instructions+=1;goto B51156f;
case 0x511570:goto L511570;
case 0x511577:c.instructions+=18;goto B511577;
case 0x51157b:c.instructions+=17;goto B51157b;
case 0x51157d:c.instructions+=16;goto B51157d;
case 0x511584:c.instructions+=15;goto B511584;
case 0x511588:c.instructions+=14;goto B511588;
case 0x51158a:c.instructions+=13;goto B51158a;
case 0x511591:c.instructions+=12;goto B511591;
case 0x511595:c.instructions+=11;goto B511595;
case 0x511597:c.instructions+=10;goto B511597;
case 0x51159e:c.instructions+=9;goto B51159e;
case 0x5115a2:c.instructions+=8;goto B5115a2;
case 0x5115a4:c.instructions+=7;goto B5115a4;
case 0x5115ab:c.instructions+=6;goto B5115ab;
case 0x5115ad:c.instructions+=5;goto B5115ad;
case 0x5115b1:c.instructions+=4;goto B5115b1;
case 0x5115b5:c.instructions+=3;goto B5115b5;
case 0x5115b8:c.instructions+=2;goto B5115b8;
case 0x5115bd:c.instructions+=1;goto B5115bd;
case 0x5115bf:goto L5115bf;
case 0x5115c1:c.instructions+=2;goto B5115c1;
case 0x5115c3:c.instructions+=1;goto B5115c3;
case 0x5115c5:goto L5115c5;
case 0x5115c7:c.instructions+=2;goto B5115c7;
case 0x5115c9:c.instructions+=1;goto B5115c9;
case 0x5115d0:goto L5115d0;
case 0x5115d4:c.instructions+=14;goto B5115d4;
case 0x5115d8:c.instructions+=13;goto B5115d8;
case 0x5115da:c.instructions+=12;goto B5115da;
case 0x5115de:c.instructions+=11;goto B5115de;
case 0x5115e1:c.instructions+=10;goto B5115e1;
case 0x5115e4:c.instructions+=9;goto B5115e4;
case 0x5115e8:c.instructions+=8;goto B5115e8;
case 0x5115e9:c.instructions+=7;goto B5115e9;
case 0x5115eb:c.instructions+=6;goto B5115eb;
case 0x5115ef:c.instructions+=5;goto B5115ef;
case 0x5115f1:c.instructions+=4;goto B5115f1;
case 0x5115f2:c.instructions+=3;goto B5115f2;
case 0x5115f5:c.instructions+=2;goto B5115f5;
case 0x5115f7:c.instructions+=1;goto B5115f7;
case 0x5115f9:goto L5115f9;
case 0x5115fd:goto L5115fd;
case 0x5115ff:c.instructions+=8;goto B5115ff;
case 0x511601:c.instructions+=7;goto B511601;
case 0x511603:c.instructions+=6;goto B511603;
case 0x511607:c.instructions+=5;goto B511607;
case 0x511608:c.instructions+=4;goto B511608;
case 0x51160b:c.instructions+=3;goto B51160b;
case 0x51160f:c.instructions+=2;goto B51160f;
case 0x511613:c.instructions+=1;goto B511613;
case 0x511619:goto L511619;
case 0x51161a:c.instructions+=6;goto B51161a;
case 0x51161b:c.instructions+=5;goto B51161b;
case 0x51161c:c.instructions+=4;goto B51161c;
case 0x51161d:c.instructions+=3;goto B51161d;
case 0x51161f:c.instructions+=2;goto B51161f;
case 0x511620:c.instructions+=1;goto B511620;
case 0x511630:goto L511630;
case 0x511634:c.instructions+=2;goto B511634;
case 0x511636:c.instructions+=1;goto B511636;
case 0x511638:goto L511638;
case 0x51163c:c.instructions+=2;goto B51163c;
case 0x51163e:c.instructions+=1;goto B51163e;
case 0x511640:goto L511640;
case 0x511643:c.instructions+=2;goto B511643;
case 0x511646:c.instructions+=1;goto B511646;
case 0x511648:goto L511648;
case 0x51164b:c.instructions+=6;goto B51164b;
case 0x51164e:c.instructions+=5;goto B51164e;
case 0x511650:c.instructions+=4;goto B511650;
case 0x511653:c.instructions+=3;goto B511653;
case 0x511656:c.instructions+=2;goto B511656;
case 0x511659:c.instructions+=1;goto B511659;
case 0x51165b:goto L51165b;
case 0x511660:goto L511660;
case 0x511670:goto L511670;
case 0x511671:c.instructions+=5;goto B511671;
case 0x511673:c.instructions+=4;goto B511673;
case 0x511674:c.instructions+=3;goto B511674;
case 0x511677:c.instructions+=2;goto B511677;
case 0x511679:c.instructions+=1;goto B511679;
case 0x51167b:goto L51167b;
case 0x51167c:c.instructions+=1;goto B51167c;
case 0x511681:goto L511681;
case 0x511683:c.instructions+=2;goto B511683;
case 0x511685:c.instructions+=1;goto B511685;
case 0x511687:goto L511687;
case 0x51168c:c.instructions+=1;goto B51168c;
case 0x511690:goto L511690;
case 0x511692:c.instructions+=1;goto B511692;
case 0x511694:goto L511694;
case 0x511696:c.instructions+=2;goto B511696;
case 0x511698:c.instructions+=1;goto B511698;
case 0x51169a:goto L51169a;
case 0x51169d:c.instructions+=2;goto B51169d;
case 0x51169f:c.instructions+=1;goto B51169f;
case 0x5116a1:goto L5116a1;
case 0x5116a4:c.instructions+=3;goto B5116a4;
case 0x5116a7:c.instructions+=2;goto B5116a7;
case 0x5116aa:c.instructions+=1;goto B5116aa;
case 0x5116ac:goto L5116ac;
case 0x5116af:c.instructions+=1;goto B5116af;
case 0x5116b2:goto L5116b2;
case 0x5116b5:c.instructions+=2;goto B5116b5;
case 0x5116b7:c.instructions+=1;goto B5116b7;
case 0x5116b9:goto L5116b9;
case 0x5116bc:c.instructions+=1;goto B5116bc;
case 0x5116bf:goto L5116bf;
case 0x5116c2:c.instructions+=2;goto B5116c2;
case 0x5116c4:c.instructions+=1;goto B5116c4;
case 0x5116c6:goto L5116c6;
case 0x5116c9:c.instructions+=1;goto B5116c9;
case 0x5116cc:goto L5116cc;
case 0x5116cf:c.instructions+=2;goto B5116cf;
case 0x5116d2:c.instructions+=1;goto B5116d2;
case 0x5116d5:goto L5116d5;
case 0x5116d7:c.instructions+=2;goto B5116d7;
case 0x5116d9:c.instructions+=1;goto B5116d9;
case 0x5116db:goto L5116db;
case 0x5116dc:c.instructions+=2;goto B5116dc;
case 0x5116dd:c.instructions+=1;goto B5116dd;
case 0x5116e0:goto L5116e0;
case 0x5116e7:c.instructions+=37;goto B5116e7;
case 0x5116e8:c.instructions+=36;goto B5116e8;
case 0x5116ea:c.instructions+=35;goto B5116ea;
case 0x5116ed:c.instructions+=34;goto B5116ed;
case 0x5116f0:c.instructions+=33;goto B5116f0;
case 0x5116f3:c.instructions+=32;goto B5116f3;
case 0x5116f6:c.instructions+=31;goto B5116f6;
case 0x5116fa:c.instructions+=30;goto B5116fa;
case 0x5116fe:c.instructions+=29;goto B5116fe;
case 0x511703:c.instructions+=28;goto B511703;
case 0x511706:c.instructions+=27;goto B511706;
case 0x51170b:c.instructions+=26;goto B51170b;
case 0x51170e:c.instructions+=25;goto B51170e;
case 0x511711:c.instructions+=24;goto B511711;
case 0x511717:c.instructions+=23;goto B511717;
case 0x511718:c.instructions+=22;goto B511718;
case 0x51171d:c.instructions+=21;goto B51171d;
case 0x511720:c.instructions+=20;goto B511720;
case 0x511723:c.instructions+=19;goto B511723;
case 0x511724:c.instructions+=18;goto B511724;
case 0x511727:c.instructions+=17;goto B511727;
case 0x51172a:c.instructions+=16;goto B51172a;
case 0x511731:c.instructions+=15;goto B511731;
case 0x511734:c.instructions+=14;goto B511734;
case 0x511737:c.instructions+=13;goto B511737;
case 0x51173a:c.instructions+=12;goto B51173a;
case 0x51173d:c.instructions+=11;goto B51173d;
case 0x511740:c.instructions+=10;goto B511740;
case 0x511743:c.instructions+=9;goto B511743;
case 0x511746:c.instructions+=8;goto B511746;
case 0x511749:c.instructions+=7;goto B511749;
case 0x51174c:c.instructions+=6;goto B51174c;
case 0x51174f:c.instructions+=5;goto B51174f;
case 0x511752:c.instructions+=4;goto B511752;
case 0x511755:c.instructions+=3;goto B511755;
case 0x511758:c.instructions+=2;goto B511758;
case 0x51175d:c.instructions+=1;goto B51175d;
case 0x511760:goto L511760;
case 0x511762:c.instructions+=21;goto B511762;
case 0x511765:c.instructions+=20;goto B511765;
case 0x511768:c.instructions+=19;goto B511768;
case 0x51176b:c.instructions+=18;goto B51176b;
case 0x51176e:c.instructions+=17;goto B51176e;
case 0x511771:c.instructions+=16;goto B511771;
case 0x511774:c.instructions+=15;goto B511774;
case 0x511777:c.instructions+=14;goto B511777;
case 0x51177a:c.instructions+=13;goto B51177a;
case 0x51177d:c.instructions+=12;goto B51177d;
case 0x511784:c.instructions+=11;goto B511784;
case 0x511787:c.instructions+=10;goto B511787;
case 0x51178a:c.instructions+=9;goto B51178a;
case 0x51178d:c.instructions+=8;goto B51178d;
case 0x511790:c.instructions+=7;goto B511790;
case 0x511793:c.instructions+=6;goto B511793;
case 0x511796:c.instructions+=5;goto B511796;
case 0x51179d:c.instructions+=4;goto B51179d;
case 0x5117a0:c.instructions+=3;goto B5117a0;
case 0x5117a3:c.instructions+=2;goto B5117a3;
case 0x5117a4:c.instructions+=1;goto B5117a4;
case 0x5117a6:goto L5117a6;
case 0x5117ab:goto L5117ab;
case 0x5117ac:c.instructions+=4;goto B5117ac;
case 0x5117ad:c.instructions+=3;goto B5117ad;
case 0x5117af:c.instructions+=2;goto B5117af;
case 0x5117b0:c.instructions+=1;goto B5117b0;
case 0x5117c0:goto L5117c0;
case 0x5117c1:c.instructions+=7;goto B5117c1;
case 0x5117c2:c.instructions+=6;goto B5117c2;
case 0x5117c3:c.instructions+=5;goto B5117c3;
case 0x5117c5:c.instructions+=4;goto B5117c5;
case 0x5117c6:c.instructions+=3;goto B5117c6;
case 0x5117c9:c.instructions+=2;goto B5117c9;
case 0x5117ce:c.instructions+=1;goto B5117ce;
case 0x5117d0:goto L5117d0;
case 0x5117d5:c.instructions+=8;goto B5117d5;
case 0x5117d7:c.instructions+=7;goto B5117d7;
case 0x5117da:c.instructions+=6;goto B5117da;
case 0x5117dc:c.instructions+=5;goto B5117dc;
case 0x5117df:c.instructions+=4;goto B5117df;
case 0x5117e1:c.instructions+=3;goto B5117e1;
case 0x5117e2:c.instructions+=2;goto B5117e2;
case 0x5117e5:c.instructions+=1;goto B5117e5;
case 0x5117ea:goto L5117ea;
case 0x5117ef:c.instructions+=5;goto B5117ef;
case 0x5117f1:c.instructions+=4;goto B5117f1;
case 0x5117f3:c.instructions+=3;goto B5117f3;
case 0x5117f6:c.instructions+=2;goto B5117f6;
case 0x5117f7:c.instructions+=1;goto B5117f7;
case 0x5117fc:goto L5117fc;
case 0x511802:c.instructions+=1;goto B511802;
case 0x511807:goto L511807;
case 0x51180d:c.instructions+=2;goto B51180d;
case 0x51180e:c.instructions+=1;goto B51180e;
case 0x511810:goto L511810;
case 0x511811:c.instructions+=5;goto B511811;
case 0x511812:c.instructions+=4;goto B511812;
case 0x511814:c.instructions+=3;goto B511814;
case 0x511815:c.instructions+=2;goto B511815;
case 0x511816:c.instructions+=1;goto B511816;
case 0x511820:goto L511820;
case 0x511822:c.instructions+=15;goto B511822;
case 0x511827:c.instructions+=14;goto B511827;
case 0x51182d:c.instructions+=13;goto B51182d;
case 0x51182e:c.instructions+=12;goto B51182e;
case 0x511835:c.instructions+=11;goto B511835;
case 0x511836:c.instructions+=10;goto B511836;
case 0x511837:c.instructions+=9;goto B511837;
case 0x511839:c.instructions+=8;goto B511839;
case 0x51183d:c.instructions+=7;goto B51183d;
case 0x511842:c.instructions+=6;goto B511842;
case 0x511844:c.instructions+=5;goto B511844;
case 0x511846:c.instructions+=4;goto B511846;
case 0x51184c:c.instructions+=3;goto B51184c;
case 0x51184d:c.instructions+=2;goto B51184d;
case 0x511855:c.instructions+=1;goto B511855;
case 0x51185a:goto L51185a;
case 0x51185f:c.instructions+=6;goto B51185f;
case 0x511861:c.instructions+=5;goto B511861;
case 0x511866:c.instructions+=4;goto B511866;
case 0x51186c:c.instructions+=3;goto B51186c;
case 0x51186d:c.instructions+=2;goto B51186d;
case 0x511872:c.instructions+=1;goto B511872;
case 0x511877:goto L511877;
case 0x51187c:c.instructions+=6;goto B51187c;
case 0x51187e:c.instructions+=5;goto B51187e;
case 0x511883:c.instructions+=4;goto B511883;
case 0x511889:c.instructions+=3;goto B511889;
case 0x51188a:c.instructions+=2;goto B51188a;
case 0x51188f:c.instructions+=1;goto B51188f;
case 0x511894:goto L511894;
case 0x511899:c.instructions+=6;goto B511899;
case 0x51189b:c.instructions+=5;goto B51189b;
case 0x5118a0:c.instructions+=4;goto B5118a0;
case 0x5118a6:c.instructions+=3;goto B5118a6;
case 0x5118a7:c.instructions+=2;goto B5118a7;
case 0x5118ac:c.instructions+=1;goto B5118ac;
case 0x5118b1:goto L5118b1;
case 0x5118b6:c.instructions+=5;goto B5118b6;
case 0x5118b8:c.instructions+=4;goto B5118b8;
case 0x5118ba:c.instructions+=3;goto B5118ba;
case 0x5118bb:c.instructions+=2;goto B5118bb;
case 0x5118c3:c.instructions+=1;goto B5118c3;
case 0x5118c8:goto L5118c8;
case 0x5118cc:c.instructions+=4;goto B5118cc;
case 0x5118cd:c.instructions+=3;goto B5118cd;
case 0x5118d4:c.instructions+=2;goto B5118d4;
case 0x5118d7:c.instructions+=1;goto B5118d7;
case 0x5118e0:goto L5118e0;
case 0x5118e2:c.instructions+=8;goto B5118e2;
case 0x5118e4:c.instructions+=7;goto B5118e4;
case 0x5118e7:c.instructions+=6;goto B5118e7;
case 0x5118ea:c.instructions+=5;goto B5118ea;
case 0x5118ed:c.instructions+=4;goto B5118ed;
case 0x5118f0:c.instructions+=3;goto B5118f0;
case 0x5118f3:c.instructions+=2;goto B5118f3;
case 0x5118f9:c.instructions+=1;goto B5118f9;
case 0x511900:goto L511900;
case 0x511902:c.instructions+=23;goto B511902;
case 0x511906:c.instructions+=22;goto B511906;
case 0x511908:c.instructions+=21;goto B511908;
case 0x51190a:c.instructions+=20;goto B51190a;
case 0x51190d:c.instructions+=19;goto B51190d;
case 0x511910:c.instructions+=18;goto B511910;
case 0x511913:c.instructions+=17;goto B511913;
case 0x511916:c.instructions+=16;goto B511916;
case 0x511919:c.instructions+=15;goto B511919;
case 0x51191c:c.instructions+=14;goto B51191c;
case 0x51191f:c.instructions+=13;goto B51191f;
case 0x511922:c.instructions+=12;goto B511922;
case 0x511925:c.instructions+=11;goto B511925;
case 0x511928:c.instructions+=10;goto B511928;
case 0x51192b:c.instructions+=9;goto B51192b;
case 0x51192c:c.instructions+=8;goto B51192c;
case 0x51192d:c.instructions+=7;goto B51192d;
case 0x511930:c.instructions+=6;goto B511930;
case 0x511932:c.instructions+=5;goto B511932;
case 0x511933:c.instructions+=4;goto B511933;
case 0x511936:c.instructions+=3;goto B511936;
case 0x511938:c.instructions+=2;goto B511938;
case 0x51193d:c.instructions+=1;goto B51193d;
case 0x511940:goto L511940;
case 0x511943:c.instructions+=4;goto B511943;
case 0x511945:c.instructions+=3;goto B511945;
case 0x511948:c.instructions+=2;goto B511948;
case 0x511949:c.instructions+=1;goto B511949;
case 0x51194b:goto L51194b;
case 0x51194e:c.instructions+=1;goto B51194e;
case 0x511953:goto L511953;
case 0x511956:c.instructions+=4;goto B511956;
case 0x511958:c.instructions+=3;goto B511958;
case 0x51195b:c.instructions+=2;goto B51195b;
case 0x51195c:c.instructions+=1;goto B51195c;
case 0x51195e:goto L51195e;
case 0x511964:c.instructions+=66;goto B511964;
case 0x51196a:c.instructions+=65;goto B51196a;
case 0x511970:c.instructions+=64;goto B511970;
case 0x511976:c.instructions+=63;goto B511976;
case 0x51197c:c.instructions+=62;goto B51197c;
case 0x511982:c.instructions+=61;goto B511982;
case 0x511988:c.instructions+=60;goto B511988;
case 0x51198e:c.instructions+=59;goto B51198e;
case 0x511994:c.instructions+=58;goto B511994;
case 0x51199a:c.instructions+=57;goto B51199a;
case 0x5119a0:c.instructions+=56;goto B5119a0;
case 0x5119a6:c.instructions+=55;goto B5119a6;
case 0x5119ac:c.instructions+=54;goto B5119ac;
case 0x5119b2:c.instructions+=53;goto B5119b2;
case 0x5119b8:c.instructions+=52;goto B5119b8;
case 0x5119be:c.instructions+=51;goto B5119be;
case 0x5119c4:c.instructions+=50;goto B5119c4;
case 0x5119ca:c.instructions+=49;goto B5119ca;
case 0x5119d0:c.instructions+=48;goto B5119d0;
case 0x5119d6:c.instructions+=47;goto B5119d6;
case 0x5119dc:c.instructions+=46;goto B5119dc;
case 0x5119e2:c.instructions+=45;goto B5119e2;
case 0x5119e8:c.instructions+=44;goto B5119e8;
case 0x5119ee:c.instructions+=43;goto B5119ee;
case 0x5119f4:c.instructions+=42;goto B5119f4;
case 0x5119fa:c.instructions+=41;goto B5119fa;
case 0x511a00:c.instructions+=40;goto B511a00;
case 0x511a06:c.instructions+=39;goto B511a06;
case 0x511a0c:c.instructions+=38;goto B511a0c;
case 0x511a12:c.instructions+=37;goto B511a12;
case 0x511a18:c.instructions+=36;goto B511a18;
case 0x511a1e:c.instructions+=35;goto B511a1e;
case 0x511a24:c.instructions+=34;goto B511a24;
case 0x511a2a:c.instructions+=33;goto B511a2a;
case 0x511a30:c.instructions+=32;goto B511a30;
case 0x511a36:c.instructions+=31;goto B511a36;
case 0x511a3c:c.instructions+=30;goto B511a3c;
case 0x511a42:c.instructions+=29;goto B511a42;
case 0x511a48:c.instructions+=28;goto B511a48;
case 0x511a4e:c.instructions+=27;goto B511a4e;
case 0x511a54:c.instructions+=26;goto B511a54;
case 0x511a5a:c.instructions+=25;goto B511a5a;
case 0x511a60:c.instructions+=24;goto B511a60;
case 0x511a66:c.instructions+=23;goto B511a66;
case 0x511a6c:c.instructions+=22;goto B511a6c;
case 0x511a72:c.instructions+=21;goto B511a72;
case 0x511a78:c.instructions+=20;goto B511a78;
case 0x511a7e:c.instructions+=19;goto B511a7e;
case 0x511a84:c.instructions+=18;goto B511a84;
case 0x511a8a:c.instructions+=17;goto B511a8a;
case 0x511a90:c.instructions+=16;goto B511a90;
case 0x511a96:c.instructions+=15;goto B511a96;
case 0x511a9c:c.instructions+=14;goto B511a9c;
case 0x511aa2:c.instructions+=13;goto B511aa2;
case 0x511aa8:c.instructions+=12;goto B511aa8;
case 0x511aae:c.instructions+=11;goto B511aae;
case 0x511ab4:c.instructions+=10;goto B511ab4;
case 0x511aba:c.instructions+=9;goto B511aba;
case 0x511ac0:c.instructions+=8;goto B511ac0;
case 0x511ac6:c.instructions+=7;goto B511ac6;
case 0x511acc:c.instructions+=6;goto B511acc;
case 0x511ad2:c.instructions+=5;goto B511ad2;
case 0x511ad8:c.instructions+=4;goto B511ad8;
case 0x511ade:c.instructions+=3;goto B511ade;
case 0x511ae4:c.instructions+=2;goto B511ae4;
case 0x511ae9:c.instructions+=1;goto B511ae9;
case 0x511af0:goto L511af0;
case 0x511af3:c.instructions+=4;goto B511af3;
case 0x511af5:c.instructions+=3;goto B511af5;
case 0x511af8:c.instructions+=2;goto B511af8;
case 0x511af9:c.instructions+=1;goto B511af9;
case 0x511afb:goto L511afb;
case 0x511b01:c.instructions+=1;goto B511b01;
case 0x511b06:goto L511b06;
case 0x511b09:c.instructions+=4;goto B511b09;
case 0x511b0b:c.instructions+=3;goto B511b0b;
case 0x511b0e:c.instructions+=2;goto B511b0e;
case 0x511b0f:c.instructions+=1;goto B511b0f;
case 0x511b11:goto L511b11;
case 0x511b17:c.instructions+=31;goto B511b17;
case 0x511b1d:c.instructions+=30;goto B511b1d;
case 0x511b23:c.instructions+=29;goto B511b23;
case 0x511b29:c.instructions+=28;goto B511b29;
case 0x511b2f:c.instructions+=27;goto B511b2f;
case 0x511b35:c.instructions+=26;goto B511b35;
case 0x511b3b:c.instructions+=25;goto B511b3b;
case 0x511b41:c.instructions+=24;goto B511b41;
case 0x511b47:c.instructions+=23;goto B511b47;
case 0x511b4d:c.instructions+=22;goto B511b4d;
case 0x511b53:c.instructions+=21;goto B511b53;
case 0x511b59:c.instructions+=20;goto B511b59;
case 0x511b5f:c.instructions+=19;goto B511b5f;
case 0x511b65:c.instructions+=18;goto B511b65;
case 0x511b6b:c.instructions+=17;goto B511b6b;
case 0x511b71:c.instructions+=16;goto B511b71;
case 0x511b77:c.instructions+=15;goto B511b77;
case 0x511b7d:c.instructions+=14;goto B511b7d;
case 0x511b83:c.instructions+=13;goto B511b83;
case 0x511b89:c.instructions+=12;goto B511b89;
case 0x511b8f:c.instructions+=11;goto B511b8f;
case 0x511b95:c.instructions+=10;goto B511b95;
case 0x511b9b:c.instructions+=9;goto B511b9b;
case 0x511ba1:c.instructions+=8;goto B511ba1;
case 0x511ba7:c.instructions+=7;goto B511ba7;
case 0x511ba8:c.instructions+=6;goto B511ba8;
case 0x511bae:c.instructions+=5;goto B511bae;
case 0x511bb4:c.instructions+=4;goto B511bb4;
case 0x511bb5:c.instructions+=3;goto B511bb5;
case 0x511bbb:c.instructions+=2;goto B511bbb;
case 0x511bbc:c.instructions+=1;goto B511bbc;
case 0x511bc0:goto L511bc0;
case 0x511bc5:c.instructions+=2;goto B511bc5;
case 0x511bc7:c.instructions+=1;goto B511bc7;
case 0x511bcd:goto L511bcd;
case 0x511bd0:c.instructions+=2;goto B511bd0;
case 0x511bd2:c.instructions+=1;goto B511bd2;
case 0x511bd8:goto L511bd8;
case 0x511bd9:c.instructions+=1;goto B511bd9;
case 0x511bde:goto L511bde;
case 0x511be3:c.instructions+=4;goto B511be3;
case 0x511be5:c.instructions+=3;goto B511be5;
case 0x511bef:c.instructions+=2;goto B511bef;
case 0x511bf1:c.instructions+=1;goto B511bf1;
case 0x511bf3:goto L511bf3;
case 0x511bf4:c.instructions+=5;goto B511bf4;
case 0x511bf7:c.instructions+=4;goto B511bf7;
case 0x511bf9:c.instructions+=3;goto B511bf9;
case 0x511bfa:c.instructions+=2;goto B511bfa;
case 0x511bfd:c.instructions+=1;goto B511bfd;
case 0x511bff:goto L511bff;
case 0x511c01:c.instructions+=1;goto B511c01;
case 0x511c06:goto L511c06;
case 0x511c07:c.instructions+=1;goto B511c07;
case 0x511c0d:goto L511c0d;
case 0x511c10:c.instructions+=1;goto B511c10;
case 0x511c16:goto L511c16;
case 0x511c1b:goto L511c1b;
case 0x511c1c:c.instructions+=1;goto B511c1c;
case 0x511c21:goto L511c21;
case 0x511c24:c.instructions+=2;goto B511c24;
case 0x511c25:c.instructions+=1;goto B511c25;
case 0x511c26:goto L511c26;
case 0x511c2b:c.instructions+=4;goto B511c2b;
case 0x511c2d:c.instructions+=3;goto B511c2d;
case 0x511c37:c.instructions+=2;goto B511c37;
case 0x511c38:c.instructions+=1;goto B511c38;
case 0x511c3a:goto L511c3a;
case 0x511c40:c.instructions+=3;goto B511c40;
case 0x511c42:c.instructions+=2;goto B511c42;
case 0x511c43:c.instructions+=1;goto B511c43;
case 0x511c45:goto L511c45;
case 0x511c4a:goto L511c4a;
case 0x511c4d:c.instructions+=1;goto B511c4d;
case 0x511c4f:goto L511c4f;
case 0x511c54:c.instructions+=1;goto B511c54;
case 0x511c59:goto L511c59;
case 0x511c63:goto L511c63;
case 0x511c68:goto L511c68;
case 0x511c6a:c.instructions+=1;goto B511c6a;
case 0x511c6c:goto L511c6c;
case 0x511c6e:c.instructions+=1;goto B511c6e;
case 0x511c73:goto L511c73;
case 0x511c74:goto L511c74;
case 0x511c80:goto L511c80;
case 0x511c84:c.instructions+=25;goto B511c84;
case 0x511c87:c.instructions+=24;goto B511c87;
case 0x511c8a:c.instructions+=23;goto B511c8a;
case 0x511c8d:c.instructions+=22;goto B511c8d;
case 0x511c8f:c.instructions+=21;goto B511c8f;
case 0x511c91:c.instructions+=20;goto B511c91;
case 0x511c93:c.instructions+=19;goto B511c93;
case 0x511c95:c.instructions+=18;goto B511c95;
case 0x511c97:c.instructions+=17;goto B511c97;
case 0x511c99:c.instructions+=16;goto B511c99;
case 0x511c9b:c.instructions+=15;goto B511c9b;
case 0x511c9d:c.instructions+=14;goto B511c9d;
case 0x511c9f:c.instructions+=13;goto B511c9f;
case 0x511ca1:c.instructions+=12;goto B511ca1;
case 0x511ca3:c.instructions+=11;goto B511ca3;
case 0x511ca5:c.instructions+=10;goto B511ca5;
case 0x511ca7:c.instructions+=9;goto B511ca7;
case 0x511ca9:c.instructions+=8;goto B511ca9;
case 0x511cab:c.instructions+=7;goto B511cab;
case 0x511cad:c.instructions+=6;goto B511cad;
case 0x511caf:c.instructions+=5;goto B511caf;
case 0x511cb5:c.instructions+=4;goto B511cb5;
case 0x511cbb:c.instructions+=3;goto B511cbb;
case 0x511cbd:c.instructions+=2;goto B511cbd;
case 0x511cc0:c.instructions+=1;goto B511cc0;
case 0x511cc2:goto L511cc2;
case 0x511cc4:c.instructions+=11;goto B511cc4;
case 0x511cc6:c.instructions+=10;goto B511cc6;
case 0x511cc8:c.instructions+=9;goto B511cc8;
case 0x511cca:c.instructions+=8;goto B511cca;
case 0x511ccd:c.instructions+=7;goto B511ccd;
case 0x511cd0:c.instructions+=6;goto B511cd0;
case 0x511cd2:c.instructions+=5;goto B511cd2;
case 0x511cd5:c.instructions+=4;goto B511cd5;
case 0x511cd8:c.instructions+=3;goto B511cd8;
case 0x511cdb:c.instructions+=2;goto B511cdb;
case 0x511cde:c.instructions+=1;goto B511cde;
case 0x511cdf:goto L511cdf;
case 0x511ce1:c.instructions+=6;goto B511ce1;
case 0x511ce3:c.instructions+=5;goto B511ce3;
case 0x511ce6:c.instructions+=4;goto B511ce6;
case 0x511ce9:c.instructions+=3;goto B511ce9;
case 0x511ceb:c.instructions+=2;goto B511ceb;
case 0x511cf2:c.instructions+=1;goto B511cf2;
case 0x511d00:goto L511d00;
case 0x511d01:c.instructions+=5;goto B511d01;
case 0x511d02:c.instructions+=4;goto B511d02;
case 0x511d04:c.instructions+=3;goto B511d04;
case 0x511d07:c.instructions+=2;goto B511d07;
case 0x511d09:c.instructions+=1;goto B511d09;
case 0x511d0b:goto L511d0b;
case 0x511d0c:c.instructions+=1;goto B511d0c;
case 0x511d11:goto L511d11;
case 0x511d13:c.instructions+=2;goto B511d13;
case 0x511d15:c.instructions+=1;goto B511d15;
case 0x511d17:goto L511d17;
case 0x511d1c:c.instructions+=1;goto B511d1c;
case 0x511d20:goto L511d20;
case 0x511d22:c.instructions+=1;goto B511d22;
case 0x511d24:goto L511d24;
case 0x511d26:c.instructions+=2;goto B511d26;
case 0x511d28:c.instructions+=1;goto B511d28;
case 0x511d2a:goto L511d2a;
case 0x511d2d:c.instructions+=2;goto B511d2d;
case 0x511d2f:c.instructions+=1;goto B511d2f;
case 0x511d31:goto L511d31;
case 0x511d34:c.instructions+=3;goto B511d34;
case 0x511d37:c.instructions+=2;goto B511d37;
case 0x511d3a:c.instructions+=1;goto B511d3a;
case 0x511d3c:goto L511d3c;
case 0x511d3f:c.instructions+=1;goto B511d3f;
case 0x511d42:goto L511d42;
case 0x511d45:c.instructions+=2;goto B511d45;
case 0x511d47:c.instructions+=1;goto B511d47;
case 0x511d49:goto L511d49;
case 0x511d4c:c.instructions+=1;goto B511d4c;
case 0x511d4f:goto L511d4f;
case 0x511d52:c.instructions+=2;goto B511d52;
case 0x511d54:c.instructions+=1;goto B511d54;
case 0x511d56:goto L511d56;
case 0x511d59:c.instructions+=1;goto B511d59;
case 0x511d5c:goto L511d5c;
case 0x511d5f:c.instructions+=1;goto B511d5f;
case 0x511d62:goto L511d62;
case 0x511d64:c.instructions+=2;goto B511d64;
case 0x511d66:c.instructions+=1;goto B511d66;
case 0x511d68:goto L511d68;
case 0x511d69:c.instructions+=2;goto B511d69;
case 0x511d6a:c.instructions+=1;goto B511d6a;
case 0x511d70:goto L511d70;
case 0x511d72:c.instructions+=15;goto B511d72;
case 0x511d77:c.instructions+=14;goto B511d77;
case 0x511d7a:c.instructions+=13;goto B511d7a;
case 0x511d7d:c.instructions+=12;goto B511d7d;
case 0x511d7f:c.instructions+=11;goto B511d7f;
case 0x511d85:c.instructions+=10;goto B511d85;
case 0x511d88:c.instructions+=9;goto B511d88;
case 0x511d8b:c.instructions+=8;goto B511d8b;
case 0x511d8e:c.instructions+=7;goto B511d8e;
case 0x511d91:c.instructions+=6;goto B511d91;
case 0x511d94:c.instructions+=5;goto B511d94;
case 0x511d97:c.instructions+=4;goto B511d97;
case 0x511d9a:c.instructions+=3;goto B511d9a;
case 0x511d9d:c.instructions+=2;goto B511d9d;
case 0x511da0:c.instructions+=1;goto B511da0;
case 0x511db0:goto L511db0;
case 0x511db1:c.instructions+=4;goto B511db1;
case 0x511db3:c.instructions+=3;goto B511db3;
case 0x511db6:c.instructions+=2;goto B511db6;
case 0x511dbc:c.instructions+=1;goto B511dbc;
case 0x511dc1:goto L511dc1;
case 0x511dc5:c.instructions+=12;goto B511dc5;
case 0x511dc9:c.instructions+=11;goto B511dc9;
case 0x511dcd:c.instructions+=10;goto B511dcd;
case 0x511dd3:c.instructions+=9;goto B511dd3;
case 0x511dd7:c.instructions+=8;goto B511dd7;
case 0x511ddd:c.instructions+=7;goto B511ddd;
case 0x511de1:c.instructions+=6;goto B511de1;
case 0x511de7:c.instructions+=5;goto B511de7;
case 0x511ded:c.instructions+=4;goto B511ded;
case 0x511df3:c.instructions+=3;goto B511df3;
case 0x511df5:c.instructions+=2;goto B511df5;
case 0x511df6:c.instructions+=1;goto B511df6;
case 0x511e00:goto L511e00;
case 0x511e01:c.instructions+=4;goto B511e01;
case 0x511e03:c.instructions+=3;goto B511e03;
case 0x511e09:c.instructions+=2;goto B511e09;
case 0x511e0b:c.instructions+=1;goto B511e0b;
case 0x511e0d:goto L511e0d;
case 0x511e0e:c.instructions+=3;goto B511e0e;
case 0x511e14:c.instructions+=2;goto B511e14;
case 0x511e16:c.instructions+=1;goto B511e16;
case 0x511e18:goto L511e18;
case 0x511e1b:c.instructions+=1;goto B511e1b;
case 0x511e1d:goto L511e1d;
case 0x511e1f:c.instructions+=3;goto B511e1f;
case 0x511e25:c.instructions+=2;goto B511e25;
case 0x511e2b:c.instructions+=1;goto B511e2b;
case 0x511e2d:goto L511e2d;
case 0x511e2f:goto L511e2f;
case 0x511e35:c.instructions+=2;goto B511e35;
case 0x511e36:c.instructions+=1;goto B511e36;
case 0x511e3b:goto L511e3b;
case 0x511e3d:c.instructions+=6;goto B511e3d;
case 0x511e3f:c.instructions+=5;goto B511e3f;
case 0x511e42:c.instructions+=4;goto B511e42;
case 0x511e43:c.instructions+=3;goto B511e43;
case 0x511e44:c.instructions+=2;goto B511e44;
case 0x511e46:c.instructions+=1;goto B511e46;
case 0x511e49:goto L511e49;
case 0x511e50:c.instructions+=1;goto B511e50;
case 0x511e51:goto L511e51;
case 0x511e54:c.instructions+=2;goto B511e54;
case 0x511e55:c.instructions+=1;goto B511e55;
case 0x511e60:goto L511e60;
case 0x511e66:c.instructions+=10;goto B511e66;
case 0x511e6a:c.instructions+=9;goto B511e6a;
case 0x511e6b:c.instructions+=8;goto B511e6b;
case 0x511e6c:c.instructions+=7;goto B511e6c;
case 0x511e6d:c.instructions+=6;goto B511e6d;
case 0x511e71:c.instructions+=5;goto B511e71;
case 0x511e73:c.instructions+=4;goto B511e73;
case 0x511e79:c.instructions+=3;goto B511e79;
case 0x511e7b:c.instructions+=2;goto B511e7b;
case 0x511e7d:c.instructions+=1;goto B511e7d;
case 0x511e83:goto L511e83;
case 0x511e88:goto L511e88;
case 0x511e89:c.instructions+=2;goto B511e89;
case 0x511e8e:c.instructions+=1;goto B511e8e;
case 0x511e93:goto L511e93;
case 0x511e96:c.instructions+=2;goto B511e96;
case 0x511e98:c.instructions+=1;goto B511e98;
case 0x511e9d:goto L511e9d;
case 0x511e9f:c.instructions+=2;goto B511e9f;
case 0x511ea1:c.instructions+=1;goto B511ea1;
case 0x511ea7:goto L511ea7;
case 0x511eac:goto L511eac;
case 0x511eae:c.instructions+=1;goto B511eae;
case 0x511eb0:goto L511eb0;
case 0x511eb3:c.instructions+=1;goto B511eb3;
case 0x511eb9:goto L511eb9;
case 0x511ebe:c.instructions+=2;goto B511ebe;
case 0x511ec0:c.instructions+=1;goto B511ec0;
case 0x511ec2:goto L511ec2;
case 0x511ec7:c.instructions+=2;goto B511ec7;
case 0x511ecc:c.instructions+=1;goto B511ecc;
case 0x511ed1:goto L511ed1;
case 0x511ed4:c.instructions+=5;goto B511ed4;
case 0x511ed5:c.instructions+=4;goto B511ed5;
case 0x511ed7:c.instructions+=3;goto B511ed7;
case 0x511ed8:c.instructions+=2;goto B511ed8;
case 0x511ed9:c.instructions+=1;goto B511ed9;
case 0x511eda:goto L511eda;
case 0x511edd:c.instructions+=1;goto B511edd;
case 0x511edf:goto L511edf;
case 0x511ee2:c.instructions+=1;goto B511ee2;
case 0x511ee4:goto L511ee4;
case 0x511ee9:c.instructions+=2;goto B511ee9;
case 0x511eee:c.instructions+=1;goto B511eee;
case 0x511ef3:goto L511ef3;
case 0x511ef6:c.instructions+=5;goto B511ef6;
case 0x511ef7:c.instructions+=4;goto B511ef7;
case 0x511ef9:c.instructions+=3;goto B511ef9;
case 0x511efa:c.instructions+=2;goto B511efa;
case 0x511efb:c.instructions+=1;goto B511efb;
case 0x511efc:goto L511efc;
case 0x511eff:c.instructions+=1;goto B511eff;
case 0x511f01:goto L511f01;
case 0x511f06:c.instructions+=2;goto B511f06;
case 0x511f0b:c.instructions+=1;goto B511f0b;
case 0x511f10:goto L511f10;
case 0x511f13:c.instructions+=5;goto B511f13;
case 0x511f14:c.instructions+=4;goto B511f14;
case 0x511f16:c.instructions+=3;goto B511f16;
case 0x511f17:c.instructions+=2;goto B511f17;
case 0x511f18:c.instructions+=1;goto B511f18;
case 0x511f19:goto L511f19;
case 0x511f1c:c.instructions+=1;goto B511f1c;
case 0x511f22:goto L511f22;
case 0x511f27:c.instructions+=2;goto B511f27;
case 0x511f2c:c.instructions+=1;goto B511f2c;
case 0x511f31:goto L511f31;
case 0x511f34:c.instructions+=5;goto B511f34;
case 0x511f35:c.instructions+=4;goto B511f35;
case 0x511f37:c.instructions+=3;goto B511f37;
case 0x511f38:c.instructions+=2;goto B511f38;
case 0x511f39:c.instructions+=1;goto B511f39;
case 0x511f3a:goto L511f3a;
case 0x511f3b:c.instructions+=2;goto B511f3b;
case 0x511f40:c.instructions+=1;goto B511f40;
case 0x511f45:goto L511f45;
case 0x511f48:c.instructions+=2;goto B511f48;
case 0x511f4a:c.instructions+=1;goto B511f4a;
case 0x511f4f:goto L511f4f;
case 0x511f51:c.instructions+=2;goto B511f51;
case 0x511f53:c.instructions+=1;goto B511f53;
case 0x511f55:goto L511f55;
case 0x511f58:c.instructions+=1;goto B511f58;
case 0x511f5a:goto L511f5a;
case 0x511f5f:c.instructions+=1;goto B511f5f;
case 0x511f64:goto L511f64;
case 0x511f67:c.instructions+=1;goto B511f67;
case 0x511f6d:goto L511f6d;
case 0x511f72:c.instructions+=1;goto B511f72;
case 0x511f77:goto L511f77;
case 0x511f7c:goto L511f7c;
case 0x511f7e:c.instructions+=1;goto B511f7e;
case 0x511f80:goto L511f80;
case 0x511f83:c.instructions+=1;goto B511f83;
case 0x511f89:goto L511f89;
case 0x511f8c:c.instructions+=1;goto B511f8c;
case 0x511f92:goto L511f92;
case 0x511f95:c.instructions+=1;goto B511f95;
case 0x511f9b:goto L511f9b;
case 0x511fa0:c.instructions+=2;goto B511fa0;
case 0x511fa2:c.instructions+=1;goto B511fa2;
case 0x511fa8:goto L511fa8;
case 0x511fad:c.instructions+=1;goto B511fad;
case 0x511fb2:goto L511fb2;
case 0x511fb5:c.instructions+=1;goto B511fb5;
case 0x511fb7:goto L511fb7;
case 0x511fba:c.instructions+=1;goto B511fba;
case 0x511fbc:goto L511fbc;
case 0x511fbf:c.instructions+=1;goto B511fbf;
case 0x511fc1:goto L511fc1;
case 0x511fc6:c.instructions+=1;goto B511fc6;
case 0x511fc8:goto L511fc8;
case 0x511fcb:c.instructions+=1;goto B511fcb;
case 0x511fcd:goto L511fcd;
case 0x511fd0:c.instructions+=1;goto B511fd0;
case 0x511fd2:goto L511fd2;
case 0x511fd7:c.instructions+=1;goto B511fd7;
case 0x511fd9:goto L511fd9;
case 0x511fdc:c.instructions+=1;goto B511fdc;
case 0x511fde:goto L511fde;
case 0x511fe3:c.instructions+=1;goto B511fe3;
case 0x511fe5:goto L511fe5;
case 0x511fe8:c.instructions+=1;goto B511fe8;
case 0x511fea:goto L511fea;
case 0x511fef:c.instructions+=1;goto B511fef;
case 0x511ff1:goto L511ff1;
case 0x511ff4:c.instructions+=1;goto B511ff4;
case 0x511ff6:goto L511ff6;
case 0x511ff9:c.instructions+=1;goto B511ff9;
case 0x511ffb:goto L511ffb;
default:missing_instruction(c.pc);}
B511000:L511000:{c.instructions+=6;NFSU2_TR(0x511000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B511003:{NFSU2_TR(0x511003);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511004:{NFSU2_TR(0x511004);
__builtin_memmove((R+24),(R+4),4);
}
B511006:{NFSU2_TR(0x511006);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B511009:{NFSU2_TR(0x511009);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51100b:{NFSU2_TR(0x51100b);
if(r1(R+518)){{goto L511069;}}
}
B51100d:L51100d:{c.instructions+=2;NFSU2_TR(0x51100d);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51100f:{NFSU2_TR(0x51100f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511014ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B511014:L511014:{c.instructions+=10;NFSU2_TR(0x511014);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B511017:{NFSU2_TR(0x511017);
w4(R+0,u32(r1(R+0)));
}
B51101a:{NFSU2_TR(0x51101a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7993c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B511021:{NFSU2_TR(0x511021);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B511026:{NFSU2_TR(0x511026);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B511029:{NFSU2_TR(0x511029);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51102b:{NFSU2_TR(0x51102b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x79acf8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B511033:{NFSU2_TR(0x511033);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51103b:{NFSU2_TR(0x51103b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51103f:{NFSU2_TR(0x51103f);
if(r1(R+518)){{goto L5110ad;}}
}
B511041:L511041:{c.instructions+=3;NFSU2_TR(0x511041);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B511047:{NFSU2_TR(0x511047);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511049:{NFSU2_TR(0x511049);
if(r1(R+518)){{goto L5110ad;}}
}
B51104b:L51104b:{c.instructions+=3;NFSU2_TR(0x51104b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51104e:{NFSU2_TR(0x51104e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511050:{NFSU2_TR(0x511050);
if(r1(R+518)){{goto L5110ad;}}
}
B511052:L511052:{c.instructions+=2;NFSU2_TR(0x511052);
__builtin_memmove((R+4),(R+24),4);
}
B511054:{NFSU2_TR(0x511054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511059ull));
TAIL_STATIC(0x45b490u,45b);
}
B511059:L511059:{c.instructions+=4;NFSU2_TR(0x511059);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51105d:{NFSU2_TR(0x51105d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51105e:{NFSU2_TR(0x51105e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B511062:{NFSU2_TR(0x511062);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511064ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B511064:L511064:{c.instructions+=3;NFSU2_TR(0x511064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B511065:{NFSU2_TR(0x511065);
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
B511068:{NFSU2_TR(0x511068);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511069:L511069:{c.instructions+=6;NFSU2_TR(0x511069);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B51106e:{NFSU2_TR(0x51106e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511070:{NFSU2_TR(0x511070);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x79acf8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B511078:{NFSU2_TR(0x511078);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B511080:{NFSU2_TR(0x511080);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x200ull));
s4(u32(r4(U+0)),r4(U+4));
}
B511088:{NFSU2_TR(0x511088);
if(r1(R+518)){{goto L5110ad;}}
}
B51108a:L51108a:{c.instructions+=3;NFSU2_TR(0x51108a);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B511090:{NFSU2_TR(0x511090);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511092:{NFSU2_TR(0x511092);
if(r1(R+518)){{goto L5110ad;}}
}
B511094:L511094:{c.instructions+=3;NFSU2_TR(0x511094);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511097:{NFSU2_TR(0x511097);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511099:{NFSU2_TR(0x511099);
if(r1(R+518)){{goto L5110ad;}}
}
B51109b:L51109b:{c.instructions+=2;NFSU2_TR(0x51109b);
__builtin_memmove((R+4),(R+24),4);
}
B51109d:{NFSU2_TR(0x51109d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5110a2ull));
TAIL_STATIC(0x45b490u,45b);
}
B5110a2:L5110a2:{c.instructions+=4;NFSU2_TR(0x5110a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5110a6:{NFSU2_TR(0x5110a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5110a7:{NFSU2_TR(0x5110a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5110ab:{NFSU2_TR(0x5110ab);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5110adull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5110ad:L5110ad:{c.instructions+=3;NFSU2_TR(0x5110ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5110ae:{NFSU2_TR(0x5110ae);
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
B5110b1:{NFSU2_TR(0x5110b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5110c0:L5110c0:{c.instructions+=8;NFSU2_TR(0x5110c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5110c3:{NFSU2_TR(0x5110c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5110c4:{NFSU2_TR(0x5110c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5110c5:{NFSU2_TR(0x5110c5);
__builtin_memmove((R+28),(R+4),4);
}
B5110c7:{NFSU2_TR(0x5110c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5110ca:{NFSU2_TR(0x5110ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5110cc:{NFSU2_TR(0x5110cc);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5110d0:{NFSU2_TR(0x5110d0);
if(r1(R+518)){{goto L51115d;}}
}
B5110d6:L5110d6:{c.instructions+=3;NFSU2_TR(0x5110d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5110d8:{NFSU2_TR(0x5110d8);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5110da:{NFSU2_TR(0x5110da);
if(r1(R+518)){{goto L5110f0;}}
}
B5110dc:L5110dc:{c.instructions+=1;NFSU2_TR(0x5110dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5110e1ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5110e1:L5110e1:{c.instructions+=6;NFSU2_TR(0x5110e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5110e4:{NFSU2_TR(0x5110e4);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5110e6:{NFSU2_TR(0x5110e6);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5110e8:{NFSU2_TR(0x5110e8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8ull))));
}
B5110eb:{NFSU2_TR(0x5110eb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5110ee:{NFSU2_TR(0x5110ee);
{goto L511102;}
}
B5110f0:L5110f0:{c.instructions+=1;NFSU2_TR(0x5110f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5110f5ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5110f5:L5110f5:{c.instructions+=5;NFSU2_TR(0x5110f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5110f8:{NFSU2_TR(0x5110f8);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5110fa:{NFSU2_TR(0x5110fa);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5110fc:{NFSU2_TR(0x5110fc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B5110ff:{NFSU2_TR(0x5110ff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B511102:L511102:{c.instructions+=8;NFSU2_TR(0x511102);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511106:{NFSU2_TR(0x511106);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B51110a:{NFSU2_TR(0x51110a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7993c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B511111:{NFSU2_TR(0x511111);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B511116:{NFSU2_TR(0x511116);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511118:{NFSU2_TR(0x511118);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x79acf8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B511120:{NFSU2_TR(0x511120);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511124:{NFSU2_TR(0x511124);
if(r1(R+518)){{goto L5111e4;}}
}
B51112a:L51112a:{c.instructions+=3;NFSU2_TR(0x51112a);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B511130:{NFSU2_TR(0x511130);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511132:{NFSU2_TR(0x511132);
if(r1(R+518)){{goto L5111e4;}}
}
B511138:L511138:{c.instructions+=3;NFSU2_TR(0x511138);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51113b:{NFSU2_TR(0x51113b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51113d:{NFSU2_TR(0x51113d);
if(r1(R+518)){{goto L5111e4;}}
}
B511143:L511143:{c.instructions+=2;NFSU2_TR(0x511143);
__builtin_memmove((R+4),(R+24),4);
}
B511145:{NFSU2_TR(0x511145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51114aull));
TAIL_STATIC(0x45b490u,45b);
}
B51114a:L51114a:{c.instructions+=4;NFSU2_TR(0x51114a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51114e:{NFSU2_TR(0x51114e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51114f:{NFSU2_TR(0x51114f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B511153:{NFSU2_TR(0x511153);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511155ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B511155:L511155:{c.instructions+=4;NFSU2_TR(0x511155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B511156:{NFSU2_TR(0x511156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B511157:{NFSU2_TR(0x511157);
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
B51115a:{NFSU2_TR(0x51115a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51115d:L51115d:{c.instructions+=5;NFSU2_TR(0x51115d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51115f:{NFSU2_TR(0x51115f);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B511164:{NFSU2_TR(0x511164);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x200ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51116c:{NFSU2_TR(0x51116c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x79acf8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B511174:{NFSU2_TR(0x511174);
if(r1(R+518)){{goto L5111b1;}}
}
B511176:L511176:{c.instructions+=3;NFSU2_TR(0x511176);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511178:{NFSU2_TR(0x511178);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B511180:{NFSU2_TR(0x511180);
if(r1(R+518)){{goto L5111e0;}}
}
B511182:L511182:{c.instructions+=3;NFSU2_TR(0x511182);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B511188:{NFSU2_TR(0x511188);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51118a:{NFSU2_TR(0x51118a);
if(r1(R+518)){{goto L5111e0;}}
}
B51118c:L51118c:{c.instructions+=3;NFSU2_TR(0x51118c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51118f:{NFSU2_TR(0x51118f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511191:{NFSU2_TR(0x511191);
if(r1(R+518)){{goto L5111e0;}}
}
B511193:L511193:{c.instructions+=2;NFSU2_TR(0x511193);
__builtin_memmove((R+4),(R+24),4);
}
B511195:{NFSU2_TR(0x511195);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51119aull));
TAIL_STATIC(0x45b490u,45b);
}
B51119a:L51119a:{c.instructions+=4;NFSU2_TR(0x51119a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51119e:{NFSU2_TR(0x51119e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51119f:{NFSU2_TR(0x51119f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5111a3:{NFSU2_TR(0x5111a3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5111a5ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5111a5:L5111a5:{c.instructions+=5;NFSU2_TR(0x5111a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5111a9:{NFSU2_TR(0x5111a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5111aa:{NFSU2_TR(0x5111aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5111ab:{NFSU2_TR(0x5111ab);
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
B5111ae:{NFSU2_TR(0x5111ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5111b1:L5111b1:{c.instructions+=3;NFSU2_TR(0x5111b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5111b3:{NFSU2_TR(0x5111b3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5111bb:{NFSU2_TR(0x5111bb);
if(r1(R+518)){{goto L5111e0;}}
}
B5111bd:L5111bd:{c.instructions+=3;NFSU2_TR(0x5111bd);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B5111c3:{NFSU2_TR(0x5111c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5111c5:{NFSU2_TR(0x5111c5);
if(r1(R+518)){{goto L5111e0;}}
}
B5111c7:L5111c7:{c.instructions+=3;NFSU2_TR(0x5111c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5111ca:{NFSU2_TR(0x5111ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5111cc:{NFSU2_TR(0x5111cc);
if(r1(R+518)){{goto L5111e0;}}
}
B5111ce:L5111ce:{c.instructions+=2;NFSU2_TR(0x5111ce);
__builtin_memmove((R+4),(R+24),4);
}
B5111d0:{NFSU2_TR(0x5111d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5111d5ull));
TAIL_STATIC(0x45b490u,45b);
}
B5111d5:L5111d5:{c.instructions+=4;NFSU2_TR(0x5111d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5111d9:{NFSU2_TR(0x5111d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5111da:{NFSU2_TR(0x5111da);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5111de:{NFSU2_TR(0x5111de);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5111e0ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5111e0:L5111e0:{c.instructions+=1;NFSU2_TR(0x5111e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5111e4:L5111e4:{c.instructions+=4;NFSU2_TR(0x5111e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5111e5:{NFSU2_TR(0x5111e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5111e6:{NFSU2_TR(0x5111e6);
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
B5111e9:{NFSU2_TR(0x5111e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5111f0:L5111f0:{c.instructions+=4;NFSU2_TR(0x5111f0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5111f2:{NFSU2_TR(0x5111f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((R+8),(U+0),4);
}
B5111f8:{NFSU2_TR(0x5111f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5111f9:{NFSU2_TR(0x5111f9);
__builtin_memmove((R+16),(R+16),4);
}
B511200:L511200:{c.instructions+=2;NFSU2_TR(0x511200);
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
B511203:{NFSU2_TR(0x511203);
if(r1(R+518)){{goto L511212;}}
}
B511205:L511205:{c.instructions+=4;NFSU2_TR(0x511205);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B511206:{NFSU2_TR(0x511206);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B511209:{NFSU2_TR(0x511209);
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
B51120c:{NFSU2_TR(0x51120c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511200u);}goto L511200;}}
}
B51120e:L51120e:{c.instructions+=2;NFSU2_TR(0x51120e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51120f:{NFSU2_TR(0x51120f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511212:L511212:{c.instructions+=12;NFSU2_TR(0x511212);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511216:{NFSU2_TR(0x511216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B511218:{NFSU2_TR(0x511218);
u8 U[12];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B51121c:{NFSU2_TR(0x51121c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B51121f:{NFSU2_TR(0x51121f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511223:{NFSU2_TR(0x511223);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B511226:{NFSU2_TR(0x511226);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B511229:{NFSU2_TR(0x511229);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51122d:{NFSU2_TR(0x51122d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511233:{NFSU2_TR(0x511233);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511239:{NFSU2_TR(0x511239);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51123a:{NFSU2_TR(0x51123a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511240:L511240:{c.instructions+=1;NFSU2_TR(0x511240);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B511242:L511242:{c.instructions+=2;NFSU2_TR(0x511242);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7fa3f0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+18)));
w4(U+22,u32(u32(r4(R+4))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B511249:{NFSU2_TR(0x511249);
if(r1(R+518)){{goto L511257;}}
}
B51124b:L51124b:{c.instructions+=3;NFSU2_TR(0x51124b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51124c:{NFSU2_TR(0x51124c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51124f:{NFSU2_TR(0x51124f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511242u);}goto L511242;}}
}
B511251:L511251:{c.instructions+=2;NFSU2_TR(0x511251);
w4(R+0,u32(0x10ull));
}
B511256:{NFSU2_TR(0x511256);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511257:L511257:{c.instructions+=2;NFSU2_TR(0x511257);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7fa3f4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B51125e:{NFSU2_TR(0x51125e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511260:L511260:{c.instructions+=1;NFSU2_TR(0x511260);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B511262:L511262:{c.instructions+=2;NFSU2_TR(0x511262);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7fa490ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+18)));
w4(U+22,u32(u32(r4(R+4))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B511269:{NFSU2_TR(0x511269);
if(r1(R+518)){{goto L511277;}}
}
B51126b:L51126b:{c.instructions+=3;NFSU2_TR(0x51126b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51126c:{NFSU2_TR(0x51126c);
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
B51126f:{NFSU2_TR(0x51126f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511262u);}goto L511262;}}
}
B511271:L511271:{c.instructions+=2;NFSU2_TR(0x511271);
w4(R+0,u32(0x1ull));
}
B511276:{NFSU2_TR(0x511276);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511277:L511277:{c.instructions+=2;NFSU2_TR(0x511277);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7fa494ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B51127e:{NFSU2_TR(0x51127e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511280:L511280:{c.instructions+=3;NFSU2_TR(0x511280);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x27ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B511283:{NFSU2_TR(0x511283);
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
B511285:{NFSU2_TR(0x511285);
if(r1(R+518)){{goto L511298;}}
}
B511287:L511287:{c.instructions+=4;NFSU2_TR(0x511287);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x27ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51128b:{NFSU2_TR(0x51128b);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B511290:{NFSU2_TR(0x511290);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B511293:{NFSU2_TR(0x511293);
TAIL_STATIC(0x45b490u,45b);
}
B511298:L511298:{c.instructions+=1;NFSU2_TR(0x511298);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5112a0:L5112a0:{c.instructions+=2;NFSU2_TR(0x5112a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5112a4:{NFSU2_TR(0x5112a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5112b0:L5112b0:{c.instructions+=4;NFSU2_TR(0x5112b0);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B5112b5:{NFSU2_TR(0x5112b5);
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
B5112b7:{NFSU2_TR(0x5112b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5112b8:{NFSU2_TR(0x5112b8);
if(r1(R+518)){{goto L5112e6;}}
}
B5112ba:L5112ba:{c.instructions+=3;NFSU2_TR(0x5112ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5112bd:{NFSU2_TR(0x5112bd);
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
B5112bf:{NFSU2_TR(0x5112bf);
if(r1(R+518)){{goto L5112e6;}}
}
B5112c1:L5112c1:{c.instructions+=3;NFSU2_TR(0x5112c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5112c3:{NFSU2_TR(0x5112c3);
__builtin_memmove((R+4),(R+24),4);
}
B5112c5:{NFSU2_TR(0x5112c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5112caull));
TAIL_STATIC(0x46d100u,46d);
}
B5112ca:L5112ca:{c.instructions+=2;NFSU2_TR(0x5112ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5112cc:{NFSU2_TR(0x5112cc);
if(r1(R+518)){{goto L5112e2;}}
}
B5112ce:L5112ce:{c.instructions+=3;NFSU2_TR(0x5112ce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5112d0:{NFSU2_TR(0x5112d0);
__builtin_memmove((R+4),(R+24),4);
}
B5112d2:{NFSU2_TR(0x5112d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5112d7ull));
TAIL_STATIC(0x46d100u,46d);
}
B5112d7:L5112d7:{c.instructions+=2;NFSU2_TR(0x5112d7);
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
B5112d9:{NFSU2_TR(0x5112d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5112e2;}}
}
B5112db:L5112db:{c.instructions+=3;NFSU2_TR(0x5112db);
w4(R+0,u32(0x1ull));
}
B5112e0:{NFSU2_TR(0x5112e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5112e1:{NFSU2_TR(0x5112e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5112e2:L5112e2:{c.instructions+=3;NFSU2_TR(0x5112e2);
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
B5112e4:{NFSU2_TR(0x5112e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5112e5:{NFSU2_TR(0x5112e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5112e6:L5112e6:{c.instructions+=3;NFSU2_TR(0x5112e6);
w1(R+0,u8(0x1ull));
}
B5112e8:{NFSU2_TR(0x5112e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5112e9:{NFSU2_TR(0x5112e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5112f0:L5112f0:{c.instructions+=5;NFSU2_TR(0x5112f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5112f7:{NFSU2_TR(0x5112f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5112f8:{NFSU2_TR(0x5112f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5112fa:{NFSU2_TR(0x5112fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5112fc:{NFSU2_TR(0x5112fc);
if(r1(R+518)){{goto L511311;}}
}
B5112fe:L5112fe:{c.instructions+=2;NFSU2_TR(0x5112fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511302:{NFSU2_TR(0x511302);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2cull))));
}
B511305:L511305:{c.instructions+=2;NFSU2_TR(0x511305);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B511307:{NFSU2_TR(0x511307);
if(r1(R+518)){{goto L511317;}}
}
B511309:L511309:{c.instructions+=4;NFSU2_TR(0x511309);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51130a:{NFSU2_TR(0x51130a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B51130d:{NFSU2_TR(0x51130d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51130f:{NFSU2_TR(0x51130f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511305u);}goto L511305;}}
}
B511311:L511311:{c.instructions+=3;NFSU2_TR(0x511311);
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
B511313:{NFSU2_TR(0x511313);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B511314:{NFSU2_TR(0x511314);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511317:L511317:{c.instructions+=3;NFSU2_TR(0x511317);
w1(R+0,u8(0x1ull));
}
B511319:{NFSU2_TR(0x511319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51131a:{NFSU2_TR(0x51131a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511320:L511320:{c.instructions+=5;NFSU2_TR(0x511320);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511321:{NFSU2_TR(0x511321);
__builtin_memmove((R+24),(R+4),4);
}
B511323:{NFSU2_TR(0x511323);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B511325:{NFSU2_TR(0x511325);
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
B511327:{NFSU2_TR(0x511327);
if(r1(R+518)){{goto L511338;}}
}
B511329:L511329:{c.instructions+=2;NFSU2_TR(0x511329);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51132a:{NFSU2_TR(0x51132a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51132full));
TAIL_STATIC(0x440540u,440);
}
B51132f:L51132f:{c.instructions+=2;NFSU2_TR(0x51132f);
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
B511332:{NFSU2_TR(0x511332);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B511338:L511338:{c.instructions+=2;NFSU2_TR(0x511338);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B511339:{NFSU2_TR(0x511339);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511340:L511340:{c.instructions+=3;NFSU2_TR(0x511340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B511342:{NFSU2_TR(0x511342);
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
B511344:{NFSU2_TR(0x511344);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511347;}}
}
B511346:L511346:{c.instructions+=1;NFSU2_TR(0x511346);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511347:L511347:{c.instructions+=3;NFSU2_TR(0x511347);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51134a:{NFSU2_TR(0x51134a);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+6),(U+0),2);
w1(R+512,u8((r2(U+6))<(u16(0xfeffull))));
w1(R+523,sborrow<u16>(r2(U+6),u16(0xfeffull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xfeffull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
w2(U+2,u16(u32(r2(U+8))&u32(u16(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r2(U+2)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51134f:{NFSU2_TR(0x51134f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511357;}}
}
B511351:L511351:{c.instructions+=2;NFSU2_TR(0x511351);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x2ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B511354:{NFSU2_TR(0x511354);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511357:L511357:{c.instructions+=2;NFSU2_TR(0x511357);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51135a:{NFSU2_TR(0x51135a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511360:L511360:{c.instructions+=2;NFSU2_TR(0x511360);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B511363:{NFSU2_TR(0x511363);
if(r1(R+518)){{goto L5113b4;}}
}
B511365:L511365:{c.instructions+=3;NFSU2_TR(0x511365);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B511368:{NFSU2_TR(0x511368);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51136a:{NFSU2_TR(0x51136a);
if(r1(R+518)){{goto L5113b4;}}
}
B51136c:L51136c:{c.instructions+=3;NFSU2_TR(0x51136c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51136f:{NFSU2_TR(0x51136f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511371:{NFSU2_TR(0x511371);
if(r1(R+518)){{goto L511387;}}
}
B511373:L511373:{c.instructions+=3;NFSU2_TR(0x511373);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B511376:{NFSU2_TR(0x511376);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B51137a:{NFSU2_TR(0x51137a);
if(r1(R+518)){{goto L511387;}}
}
B51137c:L51137c:{c.instructions+=4;NFSU2_TR(0x51137c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B51137f:{NFSU2_TR(0x51137f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511382:{NFSU2_TR(0x511382);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B511385:{NFSU2_TR(0x511385);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511373u);}goto L511373;}}
}
B511387:L511387:{c.instructions+=2;NFSU2_TR(0x511387);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51138a:{NFSU2_TR(0x51138a);
if(r1(R+518)){{goto L5113a4;}}
}
B51138c:L51138c:{c.instructions+=1;NFSU2_TR(0x51138c);
__builtin_memmove((R+16),(R+16),4);
}
B511390:L511390:{c.instructions+=3;NFSU2_TR(0x511390);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B511393:{NFSU2_TR(0x511393);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B511397:{NFSU2_TR(0x511397);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5113a4;}}
}
B511399:L511399:{c.instructions+=4;NFSU2_TR(0x511399);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B51139c:{NFSU2_TR(0x51139c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51139f:{NFSU2_TR(0x51139f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5113a2:{NFSU2_TR(0x5113a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511390u);}goto L511390;}}
}
B5113a4:L5113a4:{c.instructions+=2;NFSU2_TR(0x5113a4);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5113a7:{NFSU2_TR(0x5113a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5113b0;}}
}
B5113a9:L5113a9:{c.instructions+=1;NFSU2_TR(0x5113a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5113b0:L5113b0:{c.instructions+=2;NFSU2_TR(0x5113b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5113b3:{NFSU2_TR(0x5113b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5113b4:L5113b4:{c.instructions+=2;NFSU2_TR(0x5113b4);
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
B5113b6:{NFSU2_TR(0x5113b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5113c0:L5113c0:{c.instructions+=5;NFSU2_TR(0x5113c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5113c1:{NFSU2_TR(0x5113c1);
__builtin_memmove((R+24),(R+4),4);
}
B5113c3:{NFSU2_TR(0x5113c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5113c5:{NFSU2_TR(0x5113c5);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B5113c8:{NFSU2_TR(0x5113c8);
if(r1(R+518)){{goto L5113e5;}}
}
B5113ca:L5113ca:{c.instructions+=1;NFSU2_TR(0x5113ca);
__builtin_memmove((R+12),(R+12),4);
}
B5113d0:L5113d0:{c.instructions+=7;NFSU2_TR(0x5113d0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+8),(U+0),2);
}
B5113d3:{NFSU2_TR(0x5113d3);
w2(R+4,u16(r1(R+9)));
}
B5113d7:{NFSU2_TR(0x5113d7);
__builtin_memmove((R+5),(R+8),1);
}
B5113d9:{NFSU2_TR(0x5113d9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B5113dc:{NFSU2_TR(0x5113dc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5113e0:{NFSU2_TR(0x5113e0);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B5113e3:{NFSU2_TR(0x5113e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5113d0u);}goto L5113d0;}}
}
B5113e5:L5113e5:{c.instructions+=2;NFSU2_TR(0x5113e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5113e6:{NFSU2_TR(0x5113e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5113f0:L5113f0:{c.instructions+=3;NFSU2_TR(0x5113f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5113f2:{NFSU2_TR(0x5113f2);
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
B5113f4:{NFSU2_TR(0x5113f4);
if(r1(R+518)){{goto L5114ce;}}
}
B5113fa:L5113fa:{c.instructions+=3;NFSU2_TR(0x5113fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5113fd:{NFSU2_TR(0x5113fd);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0xfeffull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B511402:{NFSU2_TR(0x511402);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51140a;}}
}
B511404:L511404:{c.instructions+=2;NFSU2_TR(0x511404);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B511407:{NFSU2_TR(0x511407);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51140a:L51140a:{c.instructions+=6;NFSU2_TR(0x51140a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51140b:{NFSU2_TR(0x51140b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51140c:{NFSU2_TR(0x51140c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51140d:{NFSU2_TR(0x51140d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B511410:{NFSU2_TR(0x511410);
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
B511412:{NFSU2_TR(0x511412);
if(r1(R+518)){{goto L5114cb;}}
}
B511418:L511418:{c.instructions+=2;NFSU2_TR(0x511418);
w4(R+20,u32(0x20ull));
}
B51141d:{NFSU2_TR(0x51141d);
__builtin_memmove((R+4),(R+4),4);
}
B511420:L511420:{c.instructions+=5;NFSU2_TR(0x511420);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+24),(U+0),2);
}
B511423:{NFSU2_TR(0x511423);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B511425:{NFSU2_TR(0x511425);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B511427:{NFSU2_TR(0x511427);
u8 U[2];
w2(U+0,u16(u32(r2(R+24))&u32(r2(R+24))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B51142a:{NFSU2_TR(0x51142a);
if(r1(R+518)){{goto L511473;}}
}
B51142c:L51142c:{c.instructions+=1;NFSU2_TR(0x51142c);
__builtin_memmove((R+16),(R+16),4);
}
B511430:L511430:{c.instructions+=3;NFSU2_TR(0x511430);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B511431:{NFSU2_TR(0x511431);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511434:{NFSU2_TR(0x511434);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L511443;}}
}
B511436:L511436:{c.instructions+=2;NFSU2_TR(0x511436);
u8 U[4];
__builtin_memmove((U+0),(R+20),2);
w2(U+2,u16(u32(r2(R+24))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B511439:{NFSU2_TR(0x511439);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511443;}}
}
B51143b:L51143b:{c.instructions+=2;NFSU2_TR(0x51143b);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+20))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B51143f:{NFSU2_TR(0x51143f);
if(r1(R+518)){{goto L511443;}}
}
B511441:L511441:{c.instructions+=1;NFSU2_TR(0x511441);
__builtin_memmove((R+0),(R+28),4);
}
B511443:L511443:{c.instructions+=2;NFSU2_TR(0x511443);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B511447:{NFSU2_TR(0x511447);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L511467;}}
}
B511449:L511449:{c.instructions+=2;NFSU2_TR(0x511449);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51144b:{NFSU2_TR(0x51144b);
if(r1(R+518)){{goto L511467;}}
}
B51144d:L51144d:{c.instructions+=2;NFSU2_TR(0x51144d);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+20))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B511450:{NFSU2_TR(0x511450);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51145f;}}
}
B511452:L511452:{c.instructions+=4;NFSU2_TR(0x511452);
u8 U[2];
w2(U+0,u16(0x0ull));
s2(u32(r4(R+0)),r2(U+0));
}
B511457:{NFSU2_TR(0x511457);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B51145a:{NFSU2_TR(0x51145a);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+20))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B51145d:{NFSU2_TR(0x51145d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511452u);}goto L511452;}}
}
B51145f:L51145f:{c.instructions+=4;NFSU2_TR(0x51145f);
__builtin_memmove((R+8),(R+28),4);
}
B511461:{NFSU2_TR(0x511461);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B511463:{NFSU2_TR(0x511463);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B511465:{NFSU2_TR(0x511465);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B511467:L511467:{c.instructions+=4;NFSU2_TR(0x511467);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B51146b:{NFSU2_TR(0x51146b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B51146e:{NFSU2_TR(0x51146e);
u8 U[2];
w2(U+0,u16(u32(r2(R+24))&u32(r2(R+24))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B511471:{NFSU2_TR(0x511471);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511430u);}goto L511430;}}
}
B511473:L511473:{c.instructions+=2;NFSU2_TR(0x511473);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
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
B511476:{NFSU2_TR(0x511476);
if(r1(R+518)){{goto L5114cb;}}
}
B511478:L511478:{c.instructions+=3;NFSU2_TR(0x511478);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51147b:{NFSU2_TR(0x51147b);
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
B51147d:{NFSU2_TR(0x51147d);
if(r1(R+518)){{goto L5114cb;}}
}
B51147f:L51147f:{c.instructions+=3;NFSU2_TR(0x51147f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511482:{NFSU2_TR(0x511482);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511484:{NFSU2_TR(0x511484);
if(r1(R+518)){{goto L51149a;}}
}
B511486:L511486:{c.instructions+=3;NFSU2_TR(0x511486);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B511489:{NFSU2_TR(0x511489);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B51148d:{NFSU2_TR(0x51148d);
if(r1(R+518)){{goto L51149a;}}
}
B51148f:L51148f:{c.instructions+=4;NFSU2_TR(0x51148f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B511492:{NFSU2_TR(0x511492);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511495:{NFSU2_TR(0x511495);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B511498:{NFSU2_TR(0x511498);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511486u);}goto L511486;}}
}
B51149a:L51149a:{c.instructions+=2;NFSU2_TR(0x51149a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51149d:{NFSU2_TR(0x51149d);
if(r1(R+518)){{goto L5114b9;}}
}
B51149f:L51149f:{c.instructions+=1;NFSU2_TR(0x51149f);
}
B5114a0:L5114a0:{c.instructions+=3;NFSU2_TR(0x5114a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5114a3:{NFSU2_TR(0x5114a3);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B5114a7:{NFSU2_TR(0x5114a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5114b4;}}
}
B5114a9:L5114a9:{c.instructions+=4;NFSU2_TR(0x5114a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B5114ac:{NFSU2_TR(0x5114ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5114af:{NFSU2_TR(0x5114af);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5114b2:{NFSU2_TR(0x5114b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5114a0u);}goto L5114a0;}}
}
B5114b4:L5114b4:{c.instructions+=2;NFSU2_TR(0x5114b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5114b7:{NFSU2_TR(0x5114b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5114c0;}}
}
B5114b9:L5114b9:{c.instructions+=1;NFSU2_TR(0x5114b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5114c0:L5114c0:{c.instructions+=3;NFSU2_TR(0x5114c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5114c3:{NFSU2_TR(0x5114c3);
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
B5114c5:{NFSU2_TR(0x5114c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511420u);}goto L511420;}}
}
B5114cb:L5114cb:{c.instructions+=3;NFSU2_TR(0x5114cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5114cc:{NFSU2_TR(0x5114cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5114cd:{NFSU2_TR(0x5114cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5114ce:L5114ce:{c.instructions+=1;NFSU2_TR(0x5114ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5114e0:L5114e0:{c.instructions+=3;NFSU2_TR(0x5114e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
w4(U+4,u32(0x79ac34ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5114e7:{NFSU2_TR(0x5114e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0x79ac30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5114ee:{NFSU2_TR(0x5114ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5114f0:L5114f0:{c.instructions+=17;NFSU2_TR(0x5114f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5114f1:{NFSU2_TR(0x5114f1);
__builtin_memmove((R+20),(R+16),4);
}
B5114f3:{NFSU2_TR(0x5114f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5114f6:{NFSU2_TR(0x5114f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x810ull))));
}
B5114fc:{NFSU2_TR(0x5114fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5114fe:{NFSU2_TR(0x5114fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5114ff:{NFSU2_TR(0x5114ff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511500:{NFSU2_TR(0x511500);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511501:{NFSU2_TR(0x511501);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B511504:{NFSU2_TR(0x511504);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B51150b:{NFSU2_TR(0x51150b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51150c:{NFSU2_TR(0x51150c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511510:{NFSU2_TR(0x511510);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2004ull))));
__builtin_memmove((R+12),(U+0),4);
}
B511516:{NFSU2_TR(0x511516);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51151a:{NFSU2_TR(0x51151a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51151e:{NFSU2_TR(0x51151e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B511526:{NFSU2_TR(0x511526);
{goto L511530;}
}
B511528:L511528:{c.instructions+=2;NFSU2_TR(0x511528);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51152c:{NFSU2_TR(0x51152c);
__builtin_memmove((R+16),(R+16),4);
}
B511530:L511530:{c.instructions+=3;NFSU2_TR(0x511530);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B511532:{NFSU2_TR(0x511532);
w4(R+4,u32(0x100ull));
}
B511537:{NFSU2_TR(0x511537);
u8 U[4];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B51153e:L51153e:{c.instructions+=1;NFSU2_TR(0x51153e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L511540;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51153eu);}goto L51153e;}
}
B511540:L511540:{c.instructions+=5;NFSU2_TR(0x511540);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B511544:{NFSU2_TR(0x511544);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B511548:{NFSU2_TR(0x511548);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51154a:{NFSU2_TR(0x51154a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51154c:{NFSU2_TR(0x51154c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L511569;}}
}
B51154e:L51154e:{c.instructions+=1;NFSU2_TR(0x51154e);
__builtin_memmove((R+28),(R+28),4);
}
B511550:L511550:{c.instructions+=6;NFSU2_TR(0x511550);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B511554:{NFSU2_TR(0x511554);
u8 U[16];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))+u32(u32(0x1ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B51155b:{NFSU2_TR(0x51155b);
u8 U[12];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B511562:{NFSU2_TR(0x511562);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B511565:{NFSU2_TR(0x511565);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B511567:{NFSU2_TR(0x511567);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511550u);}goto L511550;}}
}
B511569:L511569:{c.instructions+=3;NFSU2_TR(0x511569);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51156b:{NFSU2_TR(0x51156b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51156f:{NFSU2_TR(0x51156f);
}
B511570:L511570:{c.instructions+=19;NFSU2_TR(0x511570);
u8 U[16];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B511577:{NFSU2_TR(0x511577);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B51157b:{NFSU2_TR(0x51157b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B51157d:{NFSU2_TR(0x51157d);
u8 U[16];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B511584:{NFSU2_TR(0x511584);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B511588:{NFSU2_TR(0x511588);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B51158a:{NFSU2_TR(0x51158a);
u8 U[16];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B511591:{NFSU2_TR(0x511591);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B511595:{NFSU2_TR(0x511595);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B511597:{NFSU2_TR(0x511597);
u8 U[16];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B51159e:{NFSU2_TR(0x51159e);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5115a2:{NFSU2_TR(0x5115a2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B5115a4:{NFSU2_TR(0x5115a4);
u8 U[16];
w4(U+0,u32(u32(u32(0x430ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B5115ab:{NFSU2_TR(0x5115ab);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B5115ad:{NFSU2_TR(0x5115ad);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5115b1:{NFSU2_TR(0x5115b1);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5115b5:{NFSU2_TR(0x5115b5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B5115b8:{NFSU2_TR(0x5115b8);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3fcull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3fcull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5115bd:{NFSU2_TR(0x5115bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511570u);}goto L511570;}}
}
B5115bf:L5115bf:{c.instructions+=3;NFSU2_TR(0x5115bf);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5115c1:{NFSU2_TR(0x5115c1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5115c3:{NFSU2_TR(0x5115c3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5115fd;}}
}
B5115c5:L5115c5:{c.instructions+=3;NFSU2_TR(0x5115c5);
__builtin_memmove((R+0),(R+20),4);
}
B5115c7:{NFSU2_TR(0x5115c7);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+20))));
}
B5115c9:{NFSU2_TR(0x5115c9);
__builtin_memmove((R+16),(R+16),4);
}
B5115d0:L5115d0:{c.instructions+=15;NFSU2_TR(0x5115d0);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B5115d4:{NFSU2_TR(0x5115d4);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5115d8:{NFSU2_TR(0x5115d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5115da:{NFSU2_TR(0x5115da);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5115de:{NFSU2_TR(0x5115de);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+20),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5115e1:{NFSU2_TR(0x5115e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5115e4:{NFSU2_TR(0x5115e4);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5115e8:{NFSU2_TR(0x5115e8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5115e9:{NFSU2_TR(0x5115e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5115eb:{NFSU2_TR(0x5115eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5115ef:{NFSU2_TR(0x5115ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5115f1:{NFSU2_TR(0x5115f1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5115f2:{NFSU2_TR(0x5115f2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5115f5:{NFSU2_TR(0x5115f5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5115f7:{NFSU2_TR(0x5115f7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5115d0u);}goto L5115d0;}}
}
B5115f9:L5115f9:{c.instructions+=1;NFSU2_TR(0x5115f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5115fd:L5115fd:{c.instructions+=9;NFSU2_TR(0x5115fd);
__builtin_memmove((R+0),(R+20),4);
}
B5115ff:{NFSU2_TR(0x5115ff);
__builtin_memmove((R+20),(R+12),4);
}
B511601:{NFSU2_TR(0x511601);
__builtin_memmove((R+12),(R+0),4);
}
B511603:{NFSU2_TR(0x511603);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B511607:{NFSU2_TR(0x511607);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B511608:{NFSU2_TR(0x511608);
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
B51160b:{NFSU2_TR(0x51160b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51160f:{NFSU2_TR(0x51160f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511613:{NFSU2_TR(0x511613);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511528u);}goto L511528;}}
}
B511619:L511619:{c.instructions+=7;NFSU2_TR(0x511619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51161a:{NFSU2_TR(0x51161a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51161b:{NFSU2_TR(0x51161b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51161c:{NFSU2_TR(0x51161c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51161d:{NFSU2_TR(0x51161d);
__builtin_memmove((R+16),(R+20),4);
}
B51161f:{NFSU2_TR(0x51161f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B511620:{NFSU2_TR(0x511620);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511630:L511630:{c.instructions+=3;NFSU2_TR(0x511630);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511634:{NFSU2_TR(0x511634);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B511636:{NFSU2_TR(0x511636);
if(r1(R+518)){{goto L511660;}}
}
B511638:L511638:{c.instructions+=3;NFSU2_TR(0x511638);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51163c:{NFSU2_TR(0x51163c);
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
B51163e:{NFSU2_TR(0x51163e);
if(r1(R+518)){{goto L51165b;}}
}
B511640:L511640:{c.instructions+=3;NFSU2_TR(0x511640);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+0),(U+0),2);
}
B511643:{NFSU2_TR(0x511643);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B511646:{NFSU2_TR(0x511646);
if(r1(R+518)){{goto L51165b;}}
}
B511648:L511648:{c.instructions+=7;NFSU2_TR(0x511648);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+8)),r2(U+0));
}
B51164b:{NFSU2_TR(0x51164b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B51164e:{NFSU2_TR(0x51164e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B511650:{NFSU2_TR(0x511650);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+0),(U+0),2);
}
B511653:{NFSU2_TR(0x511653);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B511656:{NFSU2_TR(0x511656);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B511659:{NFSU2_TR(0x511659);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511648u);}goto L511648;}}
}
B51165b:L51165b:{c.instructions+=1;NFSU2_TR(0x51165b);
u8 U[2];
w2(U+0,u16(0x0ull));
s2(u32(r4(R+8)),r2(U+0));
}
B511660:L511660:{c.instructions+=1;NFSU2_TR(0x511660);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511670:L511670:{c.instructions+=6;NFSU2_TR(0x511670);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511671:{NFSU2_TR(0x511671);
__builtin_memmove((R+24),(R+4),4);
}
B511673:{NFSU2_TR(0x511673);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511674:{NFSU2_TR(0x511674);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B511677:{NFSU2_TR(0x511677);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511679:{NFSU2_TR(0x511679);
if(r1(R+518)){{goto L511681;}}
}
B51167b:L51167b:{c.instructions+=2;NFSU2_TR(0x51167b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51167c:{NFSU2_TR(0x51167c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511681ull));
TAIL_STATIC(0x505400u,505);
}
B511681:L511681:{c.instructions+=3;NFSU2_TR(0x511681);
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
B511683:{NFSU2_TR(0x511683);
__builtin_memmove((R+4),(R+28),4);
}
B511685:{NFSU2_TR(0x511685);
if(r1(R+518)){{goto L5116db;}}
}
B511687:L511687:{c.instructions+=2;NFSU2_TR(0x511687);
w4(R+28,u32(0xabadcafeull));
}
B51168c:{NFSU2_TR(0x51168c);
__builtin_memmove((R+16),(R+16),4);
}
B511690:L511690:{c.instructions+=2;NFSU2_TR(0x511690);
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
B511692:{NFSU2_TR(0x511692);
if(r1(R+518)){{goto L51169a;}}
}
B511694:L511694:{c.instructions+=3;NFSU2_TR(0x511694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B511696:{NFSU2_TR(0x511696);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511698:{NFSU2_TR(0x511698);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51169aull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B51169a:L51169a:{c.instructions+=3;NFSU2_TR(0x51169a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51169d:{NFSU2_TR(0x51169d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51169f:{NFSU2_TR(0x51169f);
if(r1(R+518)){{goto L5116d5;}}
}
B5116a1:L5116a1:{c.instructions+=4;NFSU2_TR(0x5116a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5116a4:{NFSU2_TR(0x5116a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5116a7:{NFSU2_TR(0x5116a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5116aa:{NFSU2_TR(0x5116aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5116b2;}}
}
B5116ac:L5116ac:{c.instructions+=2;NFSU2_TR(0x5116ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5116af:{NFSU2_TR(0x5116af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5116b2:L5116b2:{c.instructions+=3;NFSU2_TR(0x5116b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5116b5:{NFSU2_TR(0x5116b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5116b7:{NFSU2_TR(0x5116b7);
if(r1(R+518)){{goto L5116bf;}}
}
B5116b9:L5116b9:{c.instructions+=2;NFSU2_TR(0x5116b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5116bc:{NFSU2_TR(0x5116bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5116bf:L5116bf:{c.instructions+=3;NFSU2_TR(0x5116bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5116c2:{NFSU2_TR(0x5116c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5116c4:{NFSU2_TR(0x5116c4);
if(r1(R+518)){{goto L5116cc;}}
}
B5116c6:L5116c6:{c.instructions+=2;NFSU2_TR(0x5116c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5116c9:{NFSU2_TR(0x5116c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5116cc:L5116cc:{c.instructions+=3;NFSU2_TR(0x5116cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5116cf:{NFSU2_TR(0x5116cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5116d2:{NFSU2_TR(0x5116d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5116d5:L5116d5:{c.instructions+=3;NFSU2_TR(0x5116d5);
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
B5116d7:{NFSU2_TR(0x5116d7);
__builtin_memmove((R+4),(R+0),4);
}
B5116d9:{NFSU2_TR(0x5116d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511690u);}goto L511690;}}
}
B5116db:L5116db:{c.instructions+=3;NFSU2_TR(0x5116db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5116dc:{NFSU2_TR(0x5116dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5116dd:{NFSU2_TR(0x5116dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5116e0:L5116e0:{c.instructions+=38;NFSU2_TR(0x5116e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5116e7:{NFSU2_TR(0x5116e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5116e8:{NFSU2_TR(0x5116e8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5116ea:{NFSU2_TR(0x5116ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5116ed:{NFSU2_TR(0x5116ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5116f0:{NFSU2_TR(0x5116f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5116f3:{NFSU2_TR(0x5116f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5116f6:{NFSU2_TR(0x5116f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5116fa:{NFSU2_TR(0x5116fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5116fe:{NFSU2_TR(0x5116fe);
w4(R+8,u32(0x1ull));
}
B511703:{NFSU2_TR(0x511703);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B511706:{NFSU2_TR(0x511706);
w4(R+0,u32(0x42ff0000ull));
}
B51170b:{NFSU2_TR(0x51170b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51170e:{NFSU2_TR(0x51170e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511711:{NFSU2_TR(0x511711);
u8 U[8];
__builtin_memmove((U+0),gp(0x7f70d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511717:{NFSU2_TR(0x511717);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511718:{NFSU2_TR(0x511718);
w4(R+24,u32(0x3f800000ull));
}
B51171d:{NFSU2_TR(0x51171d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B511720:{NFSU2_TR(0x511720);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B511723:{NFSU2_TR(0x511723);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511724:{NFSU2_TR(0x511724);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511727:{NFSU2_TR(0x511727);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51172a:{NFSU2_TR(0x51172a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0x3f333333ull));
s4(u32(r4(U+0)),r4(U+4));
}
B511731:{NFSU2_TR(0x511731);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511734:{NFSU2_TR(0x511734);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511737:{NFSU2_TR(0x511737);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51173a:{NFSU2_TR(0x51173a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51173d:{NFSU2_TR(0x51173d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511740:{NFSU2_TR(0x511740);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511743:{NFSU2_TR(0x511743);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511746:{NFSU2_TR(0x511746);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511749:{NFSU2_TR(0x511749);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51174c:{NFSU2_TR(0x51174c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51174f:{NFSU2_TR(0x51174f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511752:{NFSU2_TR(0x511752);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511755:{NFSU2_TR(0x511755);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B511758:{NFSU2_TR(0x511758);
w4(R+28,u32(0x2ull));
}
B51175d:{NFSU2_TR(0x51175d);
__builtin_memmove((R+4),(R+4),4);
}
B511760:L511760:{c.instructions+=22;NFSU2_TR(0x511760);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B511762:{NFSU2_TR(0x511762);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B511765:{NFSU2_TR(0x511765);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B511768:{NFSU2_TR(0x511768);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51176b:{NFSU2_TR(0x51176b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51176e:{NFSU2_TR(0x51176e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B511771:{NFSU2_TR(0x511771);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B511774:{NFSU2_TR(0x511774);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511777:{NFSU2_TR(0x511777);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51177a:{NFSU2_TR(0x51177a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51177d:{NFSU2_TR(0x51177d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B511784:{NFSU2_TR(0x511784);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B511787:{NFSU2_TR(0x511787);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51178a:{NFSU2_TR(0x51178a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51178d:{NFSU2_TR(0x51178d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B511790:{NFSU2_TR(0x511790);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B511793:{NFSU2_TR(0x511793);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511796:{NFSU2_TR(0x511796);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w4(U+4,u32(0x41466666ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51179d:{NFSU2_TR(0x51179d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5117a0:{NFSU2_TR(0x5117a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B5117a3:{NFSU2_TR(0x5117a3);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5117a4:{NFSU2_TR(0x5117a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511760u);}goto L511760;}}
}
B5117a6:L5117a6:{c.instructions+=1;NFSU2_TR(0x5117a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5117abull));
TAIL_STATIC(0x5025b0u,502);
}
B5117ab:L5117ab:{c.instructions+=5;NFSU2_TR(0x5117ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5117ac:{NFSU2_TR(0x5117ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5117ad:{NFSU2_TR(0x5117ad);
__builtin_memmove((R+0),(R+4),4);
}
B5117af:{NFSU2_TR(0x5117af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5117b0:{NFSU2_TR(0x5117b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5117c0:L5117c0:{c.instructions+=8;NFSU2_TR(0x5117c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5117c1:{NFSU2_TR(0x5117c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5117c2:{NFSU2_TR(0x5117c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5117c3:{NFSU2_TR(0x5117c3);
__builtin_memmove((R+20),(R+4),4);
}
B5117c5:{NFSU2_TR(0x5117c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5117c6:{NFSU2_TR(0x5117c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5117c9:{NFSU2_TR(0x5117c9);
w4(R+28,u32(0x6ull));
}
B5117ce:{NFSU2_TR(0x5117ce);
w1(R+512,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5117d0:L5117d0:{c.instructions+=9;NFSU2_TR(0x5117d0);
u8 U[4];
w4(U+0,u32(0x401810ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5117d5:{NFSU2_TR(0x5117d5);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5117d7:{NFSU2_TR(0x5117d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5117da:{NFSU2_TR(0x5117da);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5117dc:{NFSU2_TR(0x5117dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5117df:{NFSU2_TR(0x5117df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5117e1:{NFSU2_TR(0x5117e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5117e2:{NFSU2_TR(0x5117e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5117e5:{NFSU2_TR(0x5117e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5117eaull));
TAIL_STATIC(0x401650u,401);
}
B5117ea:L5117ea:{c.instructions+=6;NFSU2_TR(0x5117ea);
u8 U[4];
w4(U+0,u32(0x401810ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5117ef:{NFSU2_TR(0x5117ef);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5117f1:{NFSU2_TR(0x5117f1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5117f3:{NFSU2_TR(0x5117f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5117f6:{NFSU2_TR(0x5117f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5117f7:{NFSU2_TR(0x5117f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5117fcull));
TAIL_STATIC(0x401650u,401);
}
B5117fc:L5117fc:{c.instructions+=2;NFSU2_TR(0x5117fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B511802:{NFSU2_TR(0x511802);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511807ull));
TAIL_STATIC(0x5f73d0u,5f7);
}
B511807:L511807:{c.instructions+=3;NFSU2_TR(0x511807);
w1(R+512,carry<u32>(r4(R+24),u32(0x224ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x224ull))));
}
B51180d:{NFSU2_TR(0x51180d);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51180e:{NFSU2_TR(0x51180e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5117d0u);}goto L5117d0;}}
}
B511810:L511810:{c.instructions+=6;NFSU2_TR(0x511810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B511811:{NFSU2_TR(0x511811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B511812:{NFSU2_TR(0x511812);
__builtin_memmove((R+0),(R+20),4);
}
B511814:{NFSU2_TR(0x511814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B511815:{NFSU2_TR(0x511815);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B511816:{NFSU2_TR(0x511816);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511820:L511820:{c.instructions+=16;NFSU2_TR(0x511820);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511822:{NFSU2_TR(0x511822);
u8 U[4];
w4(U+0,u32(0x777404ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511827:{NFSU2_TR(0x511827);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51182d:{NFSU2_TR(0x51182d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51182e:{NFSU2_TR(0x51182e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511835:{NFSU2_TR(0x511835);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511836:{NFSU2_TR(0x511836);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511837:{NFSU2_TR(0x511837);
__builtin_memmove((R+24),(R+4),4);
}
B511839:{NFSU2_TR(0x511839);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51183d:{NFSU2_TR(0x51183d);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511842:{NFSU2_TR(0x511842);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511844:{NFSU2_TR(0x511844);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511846:{NFSU2_TR(0x511846);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B51184c:{NFSU2_TR(0x51184c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51184d:{NFSU2_TR(0x51184d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B511855:{NFSU2_TR(0x511855);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51185aull));
TAIL_STATIC(0x75c401u,75c);
}
B51185a:L51185a:{c.instructions+=7;NFSU2_TR(0x51185a);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51185f:{NFSU2_TR(0x51185f);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511861:{NFSU2_TR(0x511861);
u8 U[4];
w4(U+0,u32(0x438ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511866:{NFSU2_TR(0x511866);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8130ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51186c:{NFSU2_TR(0x51186c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51186d:{NFSU2_TR(0x51186d);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B511872:{NFSU2_TR(0x511872);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511877ull));
TAIL_STATIC(0x75c401u,75c);
}
B511877:L511877:{c.instructions+=7;NFSU2_TR(0x511877);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51187c:{NFSU2_TR(0x51187c);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51187e:{NFSU2_TR(0x51187e);
u8 U[4];
w4(U+0,u32(0x7f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511883:{NFSU2_TR(0x511883);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5954ull))));
__builtin_memmove((R+8),(U+0),4);
}
B511889:{NFSU2_TR(0x511889);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51188a:{NFSU2_TR(0x51188a);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51188f:{NFSU2_TR(0x51188f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511894ull));
TAIL_STATIC(0x75c401u,75c);
}
B511894:L511894:{c.instructions+=7;NFSU2_TR(0x511894);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511899:{NFSU2_TR(0x511899);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51189b:{NFSU2_TR(0x51189b);
u8 U[4];
w4(U+0,u32(0x434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5118a0:{NFSU2_TR(0x5118a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x544ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5118a6:{NFSU2_TR(0x5118a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5118a7:{NFSU2_TR(0x5118a7);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5118ac:{NFSU2_TR(0x5118ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5118b1ull));
TAIL_STATIC(0x75c401u,75c);
}
B5118b1:L5118b1:{c.instructions+=6;NFSU2_TR(0x5118b1);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5118b6:{NFSU2_TR(0x5118b6);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5118b8:{NFSU2_TR(0x5118b8);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5118ba:{NFSU2_TR(0x5118ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5118bb:{NFSU2_TR(0x5118bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5118c3:{NFSU2_TR(0x5118c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5118c8ull));
TAIL_STATIC(0x75c401u,75c);
}
B5118c8:L5118c8:{c.instructions+=5;NFSU2_TR(0x5118c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5118cc:{NFSU2_TR(0x5118cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5118cd:{NFSU2_TR(0x5118cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5118d4:{NFSU2_TR(0x5118d4);
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
B5118d7:{NFSU2_TR(0x5118d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5118e0:L5118e0:{c.instructions+=9;NFSU2_TR(0x5118e0);
__builtin_memmove((R+0),(R+4),4);
}
B5118e2:{NFSU2_TR(0x5118e2);
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
B5118e4:{NFSU2_TR(0x5118e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5118e7:{NFSU2_TR(0x5118e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5118ea:{NFSU2_TR(0x5118ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5118ed:{NFSU2_TR(0x5118ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5118f0:{NFSU2_TR(0x5118f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5118f3:{NFSU2_TR(0x5118f3);
u8 U[4];
w4(U+0,u32(0x79ad18ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5118f9:{NFSU2_TR(0x5118f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511900:L511900:{c.instructions+=24;NFSU2_TR(0x511900);
__builtin_memmove((R+0),(R+4),4);
}
B511902:{NFSU2_TR(0x511902);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B511906:{NFSU2_TR(0x511906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B511908:{NFSU2_TR(0x511908);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B51190a:{NFSU2_TR(0x51190a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51190d:{NFSU2_TR(0x51190d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511910:{NFSU2_TR(0x511910);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511913:{NFSU2_TR(0x511913);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511916:{NFSU2_TR(0x511916);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511919:{NFSU2_TR(0x511919);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51191c:{NFSU2_TR(0x51191c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51191f:{NFSU2_TR(0x51191f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511922:{NFSU2_TR(0x511922);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511925:{NFSU2_TR(0x511925);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511928:{NFSU2_TR(0x511928);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51192b:{NFSU2_TR(0x51192b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51192c:{NFSU2_TR(0x51192c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51192d:{NFSU2_TR(0x51192d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511930:{NFSU2_TR(0x511930);
__builtin_memmove((R+8),(R+4),4);
}
B511932:{NFSU2_TR(0x511932);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511933:{NFSU2_TR(0x511933);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((R+24),(U+0),4);
}
B511936:{NFSU2_TR(0x511936);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B511938:{NFSU2_TR(0x511938);
w4(R+28,u32(0x15ull));
}
B51193d:{NFSU2_TR(0x51193d);
__builtin_memmove((R+4),(R+4),4);
}
B511940:L511940:{c.instructions+=5;NFSU2_TR(0x511940);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B511943:{NFSU2_TR(0x511943);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B511945:{NFSU2_TR(0x511945);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B511948:{NFSU2_TR(0x511948);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B511949:{NFSU2_TR(0x511949);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511940u);}goto L511940;}}
}
B51194b:L51194b:{c.instructions+=2;NFSU2_TR(0x51194b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51194e:{NFSU2_TR(0x51194e);
w4(R+28,u32(0x15ull));
}
B511953:L511953:{c.instructions+=5;NFSU2_TR(0x511953);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B511956:{NFSU2_TR(0x511956);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B511958:{NFSU2_TR(0x511958);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B51195b:{NFSU2_TR(0x51195b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B51195c:{NFSU2_TR(0x51195c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511953u);}goto L511953;}}
}
B51195e:L51195e:{c.instructions+=67;NFSU2_TR(0x51195e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511964:{NFSU2_TR(0x511964);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51196a:{NFSU2_TR(0x51196a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511970:{NFSU2_TR(0x511970);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511976:{NFSU2_TR(0x511976);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51197c:{NFSU2_TR(0x51197c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511982:{NFSU2_TR(0x511982);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511988:{NFSU2_TR(0x511988);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51198e:{NFSU2_TR(0x51198e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511994:{NFSU2_TR(0x511994);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51199a:{NFSU2_TR(0x51199a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5119a0:{NFSU2_TR(0x5119a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5119a6:{NFSU2_TR(0x5119a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5119ac:{NFSU2_TR(0x5119ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5119b2:{NFSU2_TR(0x5119b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5119b8:{NFSU2_TR(0x5119b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5119be:{NFSU2_TR(0x5119be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5119c4:{NFSU2_TR(0x5119c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5119ca:{NFSU2_TR(0x5119ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5119d0:{NFSU2_TR(0x5119d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5119d6:{NFSU2_TR(0x5119d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5119dc:{NFSU2_TR(0x5119dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5119e2:{NFSU2_TR(0x5119e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5119e8:{NFSU2_TR(0x5119e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5119ee:{NFSU2_TR(0x5119ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5119f4:{NFSU2_TR(0x5119f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5119fa:{NFSU2_TR(0x5119fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511a00:{NFSU2_TR(0x511a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511a06:{NFSU2_TR(0x511a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511a0c:{NFSU2_TR(0x511a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511a12:{NFSU2_TR(0x511a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511a18:{NFSU2_TR(0x511a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511a1e:{NFSU2_TR(0x511a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511a24:{NFSU2_TR(0x511a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511a2a:{NFSU2_TR(0x511a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511a30:{NFSU2_TR(0x511a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511a36:{NFSU2_TR(0x511a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511a3c:{NFSU2_TR(0x511a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511a42:{NFSU2_TR(0x511a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511a48:{NFSU2_TR(0x511a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511a4e:{NFSU2_TR(0x511a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511a54:{NFSU2_TR(0x511a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511a5a:{NFSU2_TR(0x511a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511a60:{NFSU2_TR(0x511a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511a66:{NFSU2_TR(0x511a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511a6c:{NFSU2_TR(0x511a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511a72:{NFSU2_TR(0x511a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511a78:{NFSU2_TR(0x511a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511a7e:{NFSU2_TR(0x511a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511a84:{NFSU2_TR(0x511a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511a8a:{NFSU2_TR(0x511a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511a90:{NFSU2_TR(0x511a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511a96:{NFSU2_TR(0x511a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511a9c:{NFSU2_TR(0x511a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511aa2:{NFSU2_TR(0x511aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511aa8:{NFSU2_TR(0x511aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511aae:{NFSU2_TR(0x511aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511ab4:{NFSU2_TR(0x511ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511aba:{NFSU2_TR(0x511aba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511ac0:{NFSU2_TR(0x511ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511ac6:{NFSU2_TR(0x511ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511acc:{NFSU2_TR(0x511acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511ad2:{NFSU2_TR(0x511ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511ad8:{NFSU2_TR(0x511ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511ade:{NFSU2_TR(0x511ade);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x144ull))));
__builtin_memmove((R+24),(U+0),4);
}
B511ae4:{NFSU2_TR(0x511ae4);
w4(R+28,u32(0x15ull));
}
B511ae9:{NFSU2_TR(0x511ae9);
__builtin_memmove((R+16),(R+16),4);
}
B511af0:L511af0:{c.instructions+=5;NFSU2_TR(0x511af0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B511af3:{NFSU2_TR(0x511af3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B511af5:{NFSU2_TR(0x511af5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B511af8:{NFSU2_TR(0x511af8);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B511af9:{NFSU2_TR(0x511af9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511af0u);}goto L511af0;}}
}
B511afb:L511afb:{c.instructions+=2;NFSU2_TR(0x511afb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x198ull))));
__builtin_memmove((R+24),(U+0),4);
}
B511b01:{NFSU2_TR(0x511b01);
w4(R+28,u32(0x15ull));
}
B511b06:L511b06:{c.instructions+=5;NFSU2_TR(0x511b06);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B511b09:{NFSU2_TR(0x511b09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B511b0b:{NFSU2_TR(0x511b0b);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B511b0e:{NFSU2_TR(0x511b0e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B511b0f:{NFSU2_TR(0x511b0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511b06u);}goto L511b06;}}
}
B511b11:L511b11:{c.instructions+=32;NFSU2_TR(0x511b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511b17:{NFSU2_TR(0x511b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511b1d:{NFSU2_TR(0x511b1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511b23:{NFSU2_TR(0x511b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511b29:{NFSU2_TR(0x511b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511b2f:{NFSU2_TR(0x511b2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511b35:{NFSU2_TR(0x511b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511b3b:{NFSU2_TR(0x511b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511b41:{NFSU2_TR(0x511b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511b47:{NFSU2_TR(0x511b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511b4d:{NFSU2_TR(0x511b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511b53:{NFSU2_TR(0x511b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511b59:{NFSU2_TR(0x511b59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511b5f:{NFSU2_TR(0x511b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x204ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511b65:{NFSU2_TR(0x511b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511b6b:{NFSU2_TR(0x511b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x208ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511b71:{NFSU2_TR(0x511b71);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511b77:{NFSU2_TR(0x511b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511b7d:{NFSU2_TR(0x511b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511b83:{NFSU2_TR(0x511b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511b89:{NFSU2_TR(0x511b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511b8f:{NFSU2_TR(0x511b8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511b95:{NFSU2_TR(0x511b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511b9b:{NFSU2_TR(0x511b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511ba1:{NFSU2_TR(0x511ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511ba7:{NFSU2_TR(0x511ba7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B511ba8:{NFSU2_TR(0x511ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511bae:{NFSU2_TR(0x511bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B511bb4:{NFSU2_TR(0x511bb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B511bb5:{NFSU2_TR(0x511bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511bbb:{NFSU2_TR(0x511bbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B511bbc:{NFSU2_TR(0x511bbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511bc0:L511bc0:{c.instructions+=3;NFSU2_TR(0x511bc0);
__builtin_memmove((R+0),gp(0x8383a4),4);
}
B511bc5:{NFSU2_TR(0x511bc5);
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
B511bc7:{NFSU2_TR(0x511bc7);
if(r1(R+518)){{goto L511c63;}}
}
B511bcd:L511bcd:{c.instructions+=3;NFSU2_TR(0x511bcd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B511bd0:{NFSU2_TR(0x511bd0);
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
B511bd2:{NFSU2_TR(0x511bd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511c63;}}
}
B511bd8:L511bd8:{c.instructions+=2;NFSU2_TR(0x511bd8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511bd9:{NFSU2_TR(0x511bd9);
if(mod_hook_table[25]){SPILL();c.pc=0x511bd9u;mod_hook_table[25](c);SPILL();if(c.pc!=0x511bd9u){TAIL_DYNAMIC(c.pc);}}
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511bdeull));
TAIL_STATIC(0x4022c0u,402);
}
B511bde:L511bde:{c.instructions+=5;NFSU2_TR(0x511bde);
__builtin_memmove((R+0),gp(0x8383a4),4);
}
B511be3:{NFSU2_TR(0x511be3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511be5:{NFSU2_TR(0x511be5);
s4(0x8383ac,u32(0x0ull));
}
B511bef:{NFSU2_TR(0x511bef);
__builtin_memmove((R+20),(R+0),4);
}
B511bf1:{NFSU2_TR(0x511bf1);
if(r1(R+518)){{goto L511c26;}}
}
B511bf3:L511bf3:{c.instructions+=6;NFSU2_TR(0x511bf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511bf4:{NFSU2_TR(0x511bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511bf7:{NFSU2_TR(0x511bf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511bf9:{NFSU2_TR(0x511bf9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511bfa:{NFSU2_TR(0x511bfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((R+28),(U+0),4);
}
B511bfd:{NFSU2_TR(0x511bfd);
if(r1(R+518)){{goto L511c16;}}
}
B511bff:L511bff:{c.instructions+=2;NFSU2_TR(0x511bff);
__builtin_memmove((R+4),(R+24),4);
}
B511c01:{NFSU2_TR(0x511c01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511c06ull));
TAIL_STATIC(0x6feb46u,6fe);
}
B511c06:L511c06:{c.instructions+=2;NFSU2_TR(0x511c06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511c07:{NFSU2_TR(0x511c07);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511c0dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B511c0d:L511c0d:{c.instructions+=2;NFSU2_TR(0x511c0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B511c10:{NFSU2_TR(0x511c10);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B511c16:L511c16:{c.instructions+=1;NFSU2_TR(0x511c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511c1bull));
TAIL_STATIC(0x5cd1a0u,5cd);
}
B511c1b:L511c1b:{c.instructions+=2;NFSU2_TR(0x511c1b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511c1c:{NFSU2_TR(0x511c1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511c21ull));
TAIL_STATIC(0x575630u,575);
}
B511c21:L511c21:{c.instructions+=3;NFSU2_TR(0x511c21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B511c24:{NFSU2_TR(0x511c24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B511c25:{NFSU2_TR(0x511c25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B511c26:L511c26:{c.instructions+=5;NFSU2_TR(0x511c26);
__builtin_memmove((R+0),gp(0x8383a0),4);
}
B511c2b:{NFSU2_TR(0x511c2b);
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
B511c2d:{NFSU2_TR(0x511c2d);
s4(0x8383a4,u32(0x0ull));
}
B511c37:{NFSU2_TR(0x511c37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B511c38:{NFSU2_TR(0x511c38);
if(r1(R+518)){{goto L511c63;}}
}
B511c3a:L511c3a:{c.instructions+=4;NFSU2_TR(0x511c3a);
__builtin_memmove((R+4),gp(0x88f19c),4);
}
B511c40:{NFSU2_TR(0x511c40);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511c42:{NFSU2_TR(0x511c42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511c43:{NFSU2_TR(0x511c43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511c4f;}}
}
B511c45:L511c45:{c.instructions+=1;NFSU2_TR(0x511c45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511c4aull));
TAIL_STATIC(0x440540u,440);
}
B511c4a:L511c4a:{c.instructions+=2;NFSU2_TR(0x511c4a);
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
B511c4d:{NFSU2_TR(0x511c4d);
{goto L511c59;}
}
B511c4f:L511c4f:{c.instructions+=2;NFSU2_TR(0x511c4f);
w4(R+4,u32(0x88eb00ull));
}
B511c54:{NFSU2_TR(0x511c54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511c59ull));
TAIL_STATIC(0x5d6130u,5d6);
}
B511c59:L511c59:{c.instructions+=1;NFSU2_TR(0x511c59);
s4(0x8383a0,u32(0x0ull));
}
B511c63:L511c63:{c.instructions+=1;NFSU2_TR(0x511c63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511c68ull));
TAIL_STATIC(0x5b7b10u,5b7);
}
B511c68:L511c68:{c.instructions+=2;NFSU2_TR(0x511c68);
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
B511c6a:{NFSU2_TR(0x511c6a);
if(r1(R+518)){{goto L511c74;}}
}
B511c6c:L511c6c:{c.instructions+=2;NFSU2_TR(0x511c6c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511c6e:{NFSU2_TR(0x511c6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511c73ull));
TAIL_STATIC(0x5be1e0u,5be);
}
B511c73:L511c73:{c.instructions+=1;NFSU2_TR(0x511c73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B511c74:L511c74:{c.instructions+=1;NFSU2_TR(0x511c74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511c80:L511c80:{c.instructions+=26;NFSU2_TR(0x511c80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B511c84:{NFSU2_TR(0x511c84);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B511c87:{NFSU2_TR(0x511c87);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B511c8a:{NFSU2_TR(0x511c8a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B511c8d:{NFSU2_TR(0x511c8d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B511c8f:{NFSU2_TR(0x511c8f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B511c91:{NFSU2_TR(0x511c91);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B511c93:{NFSU2_TR(0x511c93);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B511c95:{NFSU2_TR(0x511c95);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B511c97:{NFSU2_TR(0x511c97);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B511c99:{NFSU2_TR(0x511c99);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B511c9b:{NFSU2_TR(0x511c9b);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B511c9d:{NFSU2_TR(0x511c9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B511c9f:{NFSU2_TR(0x511c9f);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B511ca1:{NFSU2_TR(0x511ca1);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B511ca3:{NFSU2_TR(0x511ca3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B511ca5:{NFSU2_TR(0x511ca5);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B511ca7:{NFSU2_TR(0x511ca7);
__asm__ volatile(".byte 0xdd,0xdc":::"memory");
}
B511ca9:{NFSU2_TR(0x511ca9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B511cab:{NFSU2_TR(0x511cab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B511cad:{NFSU2_TR(0x511cad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B511caf:{NFSU2_TR(0x511caf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B511cb5:{NFSU2_TR(0x511cb5);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B511cbb:{NFSU2_TR(0x511cbb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B511cbd:{NFSU2_TR(0x511cbd);
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
B511cc0:{NFSU2_TR(0x511cc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511cdf;}}
}
B511cc2:L511cc2:{c.instructions+=12;NFSU2_TR(0x511cc2);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B511cc4:{NFSU2_TR(0x511cc4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B511cc6:{NFSU2_TR(0x511cc6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B511cc8:{NFSU2_TR(0x511cc8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B511cca:{NFSU2_TR(0x511cca);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B511ccd:{NFSU2_TR(0x511ccd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B511cd0:{NFSU2_TR(0x511cd0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B511cd2:{NFSU2_TR(0x511cd2);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B511cd5:{NFSU2_TR(0x511cd5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B511cd8:{NFSU2_TR(0x511cd8);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B511cdb:{NFSU2_TR(0x511cdb);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B511cde:{NFSU2_TR(0x511cde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511cdf:L511cdf:{c.instructions+=7;NFSU2_TR(0x511cdf);
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
B511ce1:{NFSU2_TR(0x511ce1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B511ce3:{NFSU2_TR(0x511ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511ce6:{NFSU2_TR(0x511ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511ce9:{NFSU2_TR(0x511ce9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B511ceb:{NFSU2_TR(0x511ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B511cf2:{NFSU2_TR(0x511cf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511d00:L511d00:{c.instructions+=6;NFSU2_TR(0x511d00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511d01:{NFSU2_TR(0x511d01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511d02:{NFSU2_TR(0x511d02);
__builtin_memmove((R+28),(R+4),4);
}
B511d04:{NFSU2_TR(0x511d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B511d07:{NFSU2_TR(0x511d07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511d09:{NFSU2_TR(0x511d09);
if(r1(R+518)){{goto L511d11;}}
}
B511d0b:L511d0b:{c.instructions+=2;NFSU2_TR(0x511d0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511d0c:{NFSU2_TR(0x511d0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511d11ull));
TAIL_STATIC(0x5055c0u,505);
}
B511d11:L511d11:{c.instructions+=3;NFSU2_TR(0x511d11);
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
B511d13:{NFSU2_TR(0x511d13);
__builtin_memmove((R+4),(R+24),4);
}
B511d15:{NFSU2_TR(0x511d15);
if(r1(R+518)){{goto L511d68;}}
}
B511d17:L511d17:{c.instructions+=2;NFSU2_TR(0x511d17);
w4(R+24,u32(0xabadcafeull));
}
B511d1c:{NFSU2_TR(0x511d1c);
__builtin_memmove((R+16),(R+16),4);
}
B511d20:L511d20:{c.instructions+=2;NFSU2_TR(0x511d20);
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
B511d22:{NFSU2_TR(0x511d22);
if(r1(R+518)){{goto L511d2a;}}
}
B511d24:L511d24:{c.instructions+=3;NFSU2_TR(0x511d24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B511d26:{NFSU2_TR(0x511d26);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511d28:{NFSU2_TR(0x511d28);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511d2aull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B511d2a:L511d2a:{c.instructions+=3;NFSU2_TR(0x511d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B511d2d:{NFSU2_TR(0x511d2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511d2f:{NFSU2_TR(0x511d2f);
if(r1(R+518)){{goto L511d62;}}
}
B511d31:L511d31:{c.instructions+=4;NFSU2_TR(0x511d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B511d34:{NFSU2_TR(0x511d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511d37:{NFSU2_TR(0x511d37);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B511d3a:{NFSU2_TR(0x511d3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511d42;}}
}
B511d3c:L511d3c:{c.instructions+=2;NFSU2_TR(0x511d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511d3f:{NFSU2_TR(0x511d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511d42:L511d42:{c.instructions+=3;NFSU2_TR(0x511d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B511d45:{NFSU2_TR(0x511d45);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511d47:{NFSU2_TR(0x511d47);
if(r1(R+518)){{goto L511d4f;}}
}
B511d49:L511d49:{c.instructions+=2;NFSU2_TR(0x511d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511d4c:{NFSU2_TR(0x511d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511d4f:L511d4f:{c.instructions+=3;NFSU2_TR(0x511d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B511d52:{NFSU2_TR(0x511d52);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511d54:{NFSU2_TR(0x511d54);
if(r1(R+518)){{goto L511d5c;}}
}
B511d56:L511d56:{c.instructions+=2;NFSU2_TR(0x511d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511d59:{NFSU2_TR(0x511d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511d5c:L511d5c:{c.instructions+=2;NFSU2_TR(0x511d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511d5f:{NFSU2_TR(0x511d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511d62:L511d62:{c.instructions+=3;NFSU2_TR(0x511d62);
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
B511d64:{NFSU2_TR(0x511d64);
__builtin_memmove((R+4),(R+0),4);
}
B511d66:{NFSU2_TR(0x511d66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x511d20u);}goto L511d20;}}
}
B511d68:L511d68:{c.instructions+=3;NFSU2_TR(0x511d68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B511d69:{NFSU2_TR(0x511d69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B511d6a:{NFSU2_TR(0x511d6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511d70:L511d70:{c.instructions+=16;NFSU2_TR(0x511d70);
__builtin_memmove((R+0),(R+4),4);
}
B511d72:{NFSU2_TR(0x511d72);
w4(R+4,u32(0xabadcafeull));
}
B511d77:{NFSU2_TR(0x511d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511d7a:{NFSU2_TR(0x511d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511d7d:{NFSU2_TR(0x511d7d);
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
B511d7f:{NFSU2_TR(0x511d7f);
u8 U[4];
w4(U+0,u32(0x79ad28ull));
s4(u32(r4(R+0)),r4(U+0));
}
B511d85:{NFSU2_TR(0x511d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511d88:{NFSU2_TR(0x511d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511d8b:{NFSU2_TR(0x511d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511d8e:{NFSU2_TR(0x511d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511d91:{NFSU2_TR(0x511d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511d94:{NFSU2_TR(0x511d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511d97:{NFSU2_TR(0x511d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511d9a:{NFSU2_TR(0x511d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511d9d:{NFSU2_TR(0x511d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511da0:{NFSU2_TR(0x511da0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511db0:L511db0:{c.instructions+=5;NFSU2_TR(0x511db0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511db1:{NFSU2_TR(0x511db1);
__builtin_memmove((R+24),(R+4),4);
}
B511db3:{NFSU2_TR(0x511db3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B511db6:{NFSU2_TR(0x511db6);
u8 U[4];
w4(U+0,u32(0x790eacull));
s4(u32(r4(R+24)),r4(U+0));
}
B511dbc:{NFSU2_TR(0x511dbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511dc1ull));
TAIL_STATIC(0x40c910u,40c);
}
B511dc1:L511dc1:{c.instructions+=13;NFSU2_TR(0x511dc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B511dc5:{NFSU2_TR(0x511dc5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B511dc9:{NFSU2_TR(0x511dc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B511dcd:{NFSU2_TR(0x511dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x918ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511dd3:{NFSU2_TR(0x511dd3);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B511dd7:{NFSU2_TR(0x511dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x91cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511ddd:{NFSU2_TR(0x511ddd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B511de1:{NFSU2_TR(0x511de1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B511de7:{NFSU2_TR(0x511de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511ded:{NFSU2_TR(0x511ded);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B511df3:{NFSU2_TR(0x511df3);
__builtin_memmove((R+0),(R+24),4);
}
B511df5:{NFSU2_TR(0x511df5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B511df6:{NFSU2_TR(0x511df6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511e00:L511e00:{c.instructions+=5;NFSU2_TR(0x511e00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511e01:{NFSU2_TR(0x511e01);
__builtin_memmove((R+24),(R+4),4);
}
B511e03:{NFSU2_TR(0x511e03);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B511e09:{NFSU2_TR(0x511e09);
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
B511e0b:{NFSU2_TR(0x511e0b);
if(r1(R+518)){{goto L511e51;}}
}
B511e0d:L511e0d:{c.instructions+=4;NFSU2_TR(0x511e0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511e0e:{NFSU2_TR(0x511e0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B511e14:{NFSU2_TR(0x511e14);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B511e16:{NFSU2_TR(0x511e16);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L511e2d;}}
}
B511e18:L511e18:{c.instructions+=2;NFSU2_TR(0x511e18);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B511e1b:{NFSU2_TR(0x511e1b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L511e2d;}}
}
B511e1d:L511e1d:{c.instructions+=4;NFSU2_TR(0x511e1d);
__builtin_memmove((R+4),(R+28),4);
}
B511e1f:{NFSU2_TR(0x511e1f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B511e25:{NFSU2_TR(0x511e25);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x83ad90ull))));
}
B511e2b:{NFSU2_TR(0x511e2b);
{goto L511e2f;}
}
B511e2d:L511e2d:{c.instructions+=1;NFSU2_TR(0x511e2d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B511e2f:L511e2f:{c.instructions+=3;NFSU2_TR(0x511e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B511e35:{NFSU2_TR(0x511e35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511e36:{NFSU2_TR(0x511e36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511e3bull));
TAIL_STATIC(0x503510u,503);
}
B511e3b:L511e3b:{c.instructions+=7;NFSU2_TR(0x511e3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B511e3d:{NFSU2_TR(0x511e3d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511e3f:{NFSU2_TR(0x511e3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B511e42:{NFSU2_TR(0x511e42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511e43:{NFSU2_TR(0x511e43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511e44:{NFSU2_TR(0x511e44);
__builtin_memmove((R+4),(R+0),4);
}
B511e46:{NFSU2_TR(0x511e46);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511e49ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B511e49:L511e49:{c.instructions+=2;NFSU2_TR(0x511e49);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B511e50:{NFSU2_TR(0x511e50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B511e51:L511e51:{c.instructions+=3;NFSU2_TR(0x511e51);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B511e54:{NFSU2_TR(0x511e54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B511e55:{NFSU2_TR(0x511e55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511e60:L511e60:{c.instructions+=11;NFSU2_TR(0x511e60);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B511e66:{NFSU2_TR(0x511e66);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B511e6a:{NFSU2_TR(0x511e6a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511e6b:{NFSU2_TR(0x511e6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511e6c:{NFSU2_TR(0x511e6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511e6d:{NFSU2_TR(0x511e6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B511e71:{NFSU2_TR(0x511e71);
__builtin_memmove((R+4),(R+28),4);
}
B511e73:{NFSU2_TR(0x511e73);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B511e79:{NFSU2_TR(0x511e79);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B511e7b:{NFSU2_TR(0x511e7b);
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
B511e7d:{NFSU2_TR(0x511e7d);
if(r1(R+518)){{goto L511f3a;}}
}
B511e83:L511e83:{c.instructions+=1;NFSU2_TR(0x511e83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511e88ull));
TAIL_STATIC(0x610170u,610);
}
B511e88:L511e88:{c.instructions+=3;NFSU2_TR(0x511e88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511e89:{NFSU2_TR(0x511e89);
u8 U[4];
w4(U+0,u32(0x79ade0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511e8e:{NFSU2_TR(0x511e8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511e93ull));
TAIL_STATIC(0x50b990u,50b);
}
B511e93:L511e93:{c.instructions+=3;NFSU2_TR(0x511e93);
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
B511e96:{NFSU2_TR(0x511e96);
__builtin_memmove((R+24),(R+0),4);
}
B511e98:{NFSU2_TR(0x511e98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511e9dull));
TAIL_STATIC(0x570a30u,570);
}
B511e9d:L511e9d:{c.instructions+=3;NFSU2_TR(0x511e9d);
__builtin_memmove((R+12),(R+0),4);
}
B511e9f:{NFSU2_TR(0x511e9f);
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
B511ea1:{NFSU2_TR(0x511ea1);
if(r1(R+518)){TAIL_STATIC(0x512044u,512);}
}
B511ea7:L511ea7:{c.instructions+=1;NFSU2_TR(0x511ea7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511eacull));
TAIL_STATIC(0x570a40u,570);
}
B511eac:L511eac:{c.instructions+=2;NFSU2_TR(0x511eac);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B511eae:{NFSU2_TR(0x511eae);
if(r1(R+518)){{goto L511eda;}}
}
B511eb0:L511eb0:{c.instructions+=2;NFSU2_TR(0x511eb0);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B511eb3:{NFSU2_TR(0x511eb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x512044u,512);}
}
B511eb9:L511eb9:{c.instructions+=3;NFSU2_TR(0x511eb9);
__builtin_memmove((R+0),gp(0x7f70d0),4);
}
B511ebe:{NFSU2_TR(0x511ebe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511ec0:{NFSU2_TR(0x511ec0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511f22;}}
}
B511ec2:L511ec2:{c.instructions+=3;NFSU2_TR(0x511ec2);
u8 U[4];
w4(U+0,u32(0x79add4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511ec7:{NFSU2_TR(0x511ec7);
u8 U[4];
w4(U+0,u32(0x79ade0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511ecc:{NFSU2_TR(0x511ecc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511ed1ull));
TAIL_STATIC(0x50b990u,50b);
}
B511ed1:L511ed1:{c.instructions+=6;NFSU2_TR(0x511ed1);
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
B511ed4:{NFSU2_TR(0x511ed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B511ed5:{NFSU2_TR(0x511ed5);
__builtin_memmove((R+24),(R+0),4);
}
B511ed7:{NFSU2_TR(0x511ed7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B511ed8:{NFSU2_TR(0x511ed8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B511ed9:{NFSU2_TR(0x511ed9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511eda:L511eda:{c.instructions+=2;NFSU2_TR(0x511eda);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511edd:{NFSU2_TR(0x511edd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511f19;}}
}
B511edf:L511edf:{c.instructions+=2;NFSU2_TR(0x511edf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511ee2:{NFSU2_TR(0x511ee2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511efc;}}
}
B511ee4:L511ee4:{c.instructions+=3;NFSU2_TR(0x511ee4);
u8 U[4];
w4(U+0,u32(0x79adccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511ee9:{NFSU2_TR(0x511ee9);
u8 U[4];
w4(U+0,u32(0x79ade0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511eee:{NFSU2_TR(0x511eee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511ef3ull));
TAIL_STATIC(0x50b990u,50b);
}
B511ef3:L511ef3:{c.instructions+=6;NFSU2_TR(0x511ef3);
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
B511ef6:{NFSU2_TR(0x511ef6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B511ef7:{NFSU2_TR(0x511ef7);
__builtin_memmove((R+24),(R+0),4);
}
B511ef9:{NFSU2_TR(0x511ef9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B511efa:{NFSU2_TR(0x511efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B511efb:{NFSU2_TR(0x511efb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511efc:L511efc:{c.instructions+=2;NFSU2_TR(0x511efc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511eff:{NFSU2_TR(0x511eff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511f19;}}
}
B511f01:L511f01:{c.instructions+=3;NFSU2_TR(0x511f01);
u8 U[4];
w4(U+0,u32(0x79adc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511f06:{NFSU2_TR(0x511f06);
u8 U[4];
w4(U+0,u32(0x79ade0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511f0b:{NFSU2_TR(0x511f0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511f10ull));
TAIL_STATIC(0x50b990u,50b);
}
B511f10:L511f10:{c.instructions+=6;NFSU2_TR(0x511f10);
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
B511f13:{NFSU2_TR(0x511f13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B511f14:{NFSU2_TR(0x511f14);
__builtin_memmove((R+24),(R+0),4);
}
B511f16:{NFSU2_TR(0x511f16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B511f17:{NFSU2_TR(0x511f17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B511f18:{NFSU2_TR(0x511f18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511f19:L511f19:{c.instructions+=2;NFSU2_TR(0x511f19);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B511f1c:{NFSU2_TR(0x511f1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x512044u,512);}
}
B511f22:L511f22:{c.instructions+=3;NFSU2_TR(0x511f22);
u8 U[4];
w4(U+0,u32(0x79adbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511f27:{NFSU2_TR(0x511f27);
u8 U[4];
w4(U+0,u32(0x79ade0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511f2c:{NFSU2_TR(0x511f2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511f31ull));
TAIL_STATIC(0x50b990u,50b);
}
B511f31:L511f31:{c.instructions+=6;NFSU2_TR(0x511f31);
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
B511f34:{NFSU2_TR(0x511f34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B511f35:{NFSU2_TR(0x511f35);
__builtin_memmove((R+24),(R+0),4);
}
B511f37:{NFSU2_TR(0x511f37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B511f38:{NFSU2_TR(0x511f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B511f39:{NFSU2_TR(0x511f39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B511f3a:L511f3a:{c.instructions+=3;NFSU2_TR(0x511f3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511f3b:{NFSU2_TR(0x511f3b);
u8 U[4];
w4(U+0,u32(0x79ada8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511f40:{NFSU2_TR(0x511f40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511f45ull));
TAIL_STATIC(0x50b990u,50b);
}
B511f45:L511f45:{c.instructions+=3;NFSU2_TR(0x511f45);
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
B511f48:{NFSU2_TR(0x511f48);
__builtin_memmove((R+24),(R+0),4);
}
B511f4a:{NFSU2_TR(0x511f4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511f4full));
TAIL_STATIC(0x570a30u,570);
}
B511f4f:L511f4f:{c.instructions+=3;NFSU2_TR(0x511f4f);
__builtin_memmove((R+12),(R+0),4);
}
B511f51:{NFSU2_TR(0x511f51);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511f53:{NFSU2_TR(0x511f53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511f77;}}
}
B511f55:L511f55:{c.instructions+=2;NFSU2_TR(0x511f55);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511f58:{NFSU2_TR(0x511f58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511f64;}}
}
B511f5a:L511f5a:{c.instructions+=2;NFSU2_TR(0x511f5a);
u8 U[4];
w4(U+0,u32(0x79ada0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511f5f:{NFSU2_TR(0x511f5f);
TAIL_STATIC(0x512035u,512);
}
B511f64:L511f64:{c.instructions+=2;NFSU2_TR(0x511f64);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B511f67:{NFSU2_TR(0x511f67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x512044u,512);}
}
B511f6d:L511f6d:{c.instructions+=2;NFSU2_TR(0x511f6d);
u8 U[4];
w4(U+0,u32(0x79ad98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511f72:{NFSU2_TR(0x511f72);
TAIL_STATIC(0x512035u,512);
}
B511f77:L511f77:{c.instructions+=1;NFSU2_TR(0x511f77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x511f7cull));
TAIL_STATIC(0x570a40u,570);
}
B511f7c:L511f7c:{c.instructions+=2;NFSU2_TR(0x511f7c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B511f7e:{NFSU2_TR(0x511f7e);
if(r1(R+518)){{goto L511fb2;}}
}
B511f80:L511f80:{c.instructions+=2;NFSU2_TR(0x511f80);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511f83:{NFSU2_TR(0x511f83);
if(r1(R+518)){TAIL_STATIC(0x512018u,512);}
}
B511f89:L511f89:{c.instructions+=2;NFSU2_TR(0x511f89);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511f8c:{NFSU2_TR(0x511f8c);
if(r1(R+518)){TAIL_STATIC(0x512024u,512);}
}
B511f92:L511f92:{c.instructions+=2;NFSU2_TR(0x511f92);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B511f95:{NFSU2_TR(0x511f95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x512044u,512);}
}
B511f9b:L511f9b:{c.instructions+=3;NFSU2_TR(0x511f9b);
__builtin_memmove((R+0),gp(0x7f70d0),4);
}
B511fa0:{NFSU2_TR(0x511fa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B511fa2:{NFSU2_TR(0x511fa2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x512030u,512);}
}
B511fa8:L511fa8:{c.instructions+=2;NFSU2_TR(0x511fa8);
u8 U[4];
w4(U+0,u32(0x79ad90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511fad:{NFSU2_TR(0x511fad);
TAIL_STATIC(0x512035u,512);
}
B511fb2:L511fb2:{c.instructions+=2;NFSU2_TR(0x511fb2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511fb5:{NFSU2_TR(0x511fb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511fc8;}}
}
B511fb7:L511fb7:{c.instructions+=2;NFSU2_TR(0x511fb7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511fba:{NFSU2_TR(0x511fba);
if(r1(R+518)){TAIL_STATIC(0x512018u,512);}
}
B511fbc:L511fbc:{c.instructions+=2;NFSU2_TR(0x511fbc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511fbf:{NFSU2_TR(0x511fbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x51202bu,512);}
}
B511fc1:L511fc1:{c.instructions+=2;NFSU2_TR(0x511fc1);
u8 U[4];
w4(U+0,u32(0x79ad88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511fc6:{NFSU2_TR(0x511fc6);
TAIL_STATIC(0x512035u,512);
}
B511fc8:L511fc8:{c.instructions+=2;NFSU2_TR(0x511fc8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511fcb:{NFSU2_TR(0x511fcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x512013u,512);}
}
B511fcd:L511fcd:{c.instructions+=2;NFSU2_TR(0x511fcd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511fd0:{NFSU2_TR(0x511fd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511fd9;}}
}
B511fd2:L511fd2:{c.instructions+=2;NFSU2_TR(0x511fd2);
u8 U[4];
w4(U+0,u32(0x79ad70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511fd7:{NFSU2_TR(0x511fd7);
TAIL_STATIC(0x512035u,512);
}
B511fd9:L511fd9:{c.instructions+=2;NFSU2_TR(0x511fd9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511fdc:{NFSU2_TR(0x511fdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511fe5;}}
}
B511fde:L511fde:{c.instructions+=2;NFSU2_TR(0x511fde);
u8 U[4];
w4(U+0,u32(0x79ad68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511fe3:{NFSU2_TR(0x511fe3);
TAIL_STATIC(0x512035u,512);
}
B511fe5:L511fe5:{c.instructions+=2;NFSU2_TR(0x511fe5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511fe8:{NFSU2_TR(0x511fe8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L511ff1;}}
}
B511fea:L511fea:{c.instructions+=2;NFSU2_TR(0x511fea);
u8 U[4];
w4(U+0,u32(0x79ad60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B511fef:{NFSU2_TR(0x511fef);
TAIL_STATIC(0x512035u,512);
}
B511ff1:L511ff1:{c.instructions+=2;NFSU2_TR(0x511ff1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511ff4:{NFSU2_TR(0x511ff4);
if(r1(R+518)){TAIL_STATIC(0x512024u,512);}
}
B511ff6:L511ff6:{c.instructions+=2;NFSU2_TR(0x511ff6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B511ff9:{NFSU2_TR(0x511ff9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x512002u,512);}
}
B511ffb:L511ffb:{c.instructions+=1;NFSU2_TR(0x511ffb);
u8 U[4];
w4(U+0,u32(0x79ad54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x512000u,512);
}
XIT:NFSU2_TR_EXIT(0x511,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
