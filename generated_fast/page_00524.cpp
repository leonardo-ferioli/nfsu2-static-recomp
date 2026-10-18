#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_523(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x524,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x524,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_524(u8* __restrict R,Cpu& c);
u32 page_524(Cpu& c){return body_524(c.regs.data(),c);}
__attribute__((noinline)) u32 body_524(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x524005:goto L524005;
case 0x524008:c.instructions+=3;goto B524008;
case 0x52400a:c.instructions+=2;goto B52400a;
case 0x52400c:c.instructions+=1;goto B52400c;
case 0x524012:goto L524012;
case 0x524019:c.instructions+=1;goto B524019;
case 0x52401b:goto L52401b;
case 0x52401c:c.instructions+=2;goto B52401c;
case 0x52401e:c.instructions+=1;goto B52401e;
case 0x524020:goto L524020;
case 0x524025:goto L524025;
case 0x52402c:c.instructions+=2;goto B52402c;
case 0x52402e:c.instructions+=1;goto B52402e;
case 0x524034:goto L524034;
case 0x524038:c.instructions+=1;goto B524038;
case 0x52403e:goto L52403e;
case 0x524040:c.instructions+=1;goto B524040;
case 0x524045:goto L524045;
case 0x524047:c.instructions+=5;goto B524047;
case 0x52404a:c.instructions+=4;goto B52404a;
case 0x52404e:c.instructions+=3;goto B52404e;
case 0x524050:c.instructions+=2;goto B524050;
case 0x524054:c.instructions+=1;goto B524054;
case 0x524056:goto L524056;
case 0x524059:c.instructions+=3;goto B524059;
case 0x52405a:c.instructions+=2;goto B52405a;
case 0x52405f:c.instructions+=1;goto B52405f;
case 0x524064:goto L524064;
case 0x524068:c.instructions+=22;goto B524068;
case 0x52406c:c.instructions+=21;goto B52406c;
case 0x52406f:c.instructions+=20;goto B52406f;
case 0x524074:c.instructions+=19;goto B524074;
case 0x524077:c.instructions+=18;goto B524077;
case 0x52407a:c.instructions+=17;goto B52407a;
case 0x52407d:c.instructions+=16;goto B52407d;
case 0x524080:c.instructions+=15;goto B524080;
case 0x524083:c.instructions+=14;goto B524083;
case 0x524086:c.instructions+=13;goto B524086;
case 0x52408a:c.instructions+=12;goto B52408a;
case 0x52408d:c.instructions+=11;goto B52408d;
case 0x524090:c.instructions+=10;goto B524090;
case 0x524093:c.instructions+=9;goto B524093;
case 0x524096:c.instructions+=8;goto B524096;
case 0x524099:c.instructions+=7;goto B524099;
case 0x52409c:c.instructions+=6;goto B52409c;
case 0x52409f:c.instructions+=5;goto B52409f;
case 0x5240a3:c.instructions+=4;goto B5240a3;
case 0x5240a6:c.instructions+=3;goto B5240a6;
case 0x5240ac:c.instructions+=2;goto B5240ac;
case 0x5240af:c.instructions+=1;goto B5240af;
case 0x5240b1:goto L5240b1;
case 0x5240b3:goto L5240b3;
case 0x5240b7:c.instructions+=4;goto B5240b7;
case 0x5240b9:c.instructions+=3;goto B5240b9;
case 0x5240ba:c.instructions+=2;goto B5240ba;
case 0x5240c2:c.instructions+=1;goto B5240c2;
case 0x5240c5:goto L5240c5;
case 0x5240c9:goto L5240c9;
case 0x5240cd:c.instructions+=7;goto B5240cd;
case 0x5240d2:c.instructions+=6;goto B5240d2;
case 0x5240d3:c.instructions+=5;goto B5240d3;
case 0x5240d6:c.instructions+=4;goto B5240d6;
case 0x5240d8:c.instructions+=3;goto B5240d8;
case 0x5240dc:c.instructions+=2;goto B5240dc;
case 0x5240e0:c.instructions+=1;goto B5240e0;
case 0x5240e6:goto L5240e6;
case 0x5240e7:c.instructions+=6;goto B5240e7;
case 0x5240eb:c.instructions+=5;goto B5240eb;
case 0x5240ec:c.instructions+=4;goto B5240ec;
case 0x5240ed:c.instructions+=3;goto B5240ed;
case 0x5240f4:c.instructions+=2;goto B5240f4;
case 0x5240f7:c.instructions+=1;goto B5240f7;
case 0x524100:goto L524100;
case 0x524101:c.instructions+=2;goto B524101;
case 0x524103:c.instructions+=1;goto B524103;
case 0x524108:goto L524108;
case 0x52410d:c.instructions+=1;goto B52410d;
case 0x52410f:goto L52410f;
case 0x524110:c.instructions+=1;goto B524110;
case 0x524115:goto L524115;
case 0x524118:goto L524118;
case 0x52411a:c.instructions+=2;goto B52411a;
case 0x52411b:c.instructions+=1;goto B52411b;
case 0x524120:goto L524120;
case 0x524127:c.instructions+=2;goto B524127;
case 0x52412a:c.instructions+=1;goto B52412a;
case 0x52412c:goto L52412c;
case 0x52412d:c.instructions+=1;goto B52412d;
case 0x52412f:goto L52412f;
case 0x524131:c.instructions+=4;goto B524131;
case 0x524132:c.instructions+=3;goto B524132;
case 0x524138:c.instructions+=2;goto B524138;
case 0x524139:c.instructions+=1;goto B524139;
case 0x52413e:goto L52413e;
case 0x524141:c.instructions+=1;goto B524141;
case 0x524142:goto L524142;
case 0x524147:c.instructions+=4;goto B524147;
case 0x524148:c.instructions+=3;goto B524148;
case 0x52414e:c.instructions+=2;goto B52414e;
case 0x52414f:c.instructions+=1;goto B52414f;
case 0x524154:goto L524154;
case 0x524157:c.instructions+=1;goto B524157;
case 0x524158:goto L524158;
case 0x52415d:c.instructions+=4;goto B52415d;
case 0x52415e:c.instructions+=3;goto B52415e;
case 0x524164:c.instructions+=2;goto B524164;
case 0x524165:c.instructions+=1;goto B524165;
case 0x52416a:goto L52416a;
case 0x52416d:c.instructions+=1;goto B52416d;
case 0x524170:goto L524170;
case 0x524172:c.instructions+=3;goto B524172;
case 0x524175:c.instructions+=2;goto B524175;
case 0x524177:c.instructions+=1;goto B524177;
case 0x524179:goto L524179;
case 0x52417c:c.instructions+=1;goto B52417c;
case 0x52417e:goto L52417e;
case 0x524180:goto L524180;
case 0x524183:c.instructions+=1;goto B524183;
case 0x524185:goto L524185;
case 0x52418b:c.instructions+=2;goto B52418b;
case 0x52418c:c.instructions+=1;goto B52418c;
case 0x524191:goto L524191;
case 0x524193:goto L524193;
case 0x524199:c.instructions+=2;goto B524199;
case 0x52419a:c.instructions+=1;goto B52419a;
case 0x52419f:goto L52419f;
case 0x5241a2:c.instructions+=3;goto B5241a2;
case 0x5241a5:c.instructions+=2;goto B5241a5;
case 0x5241a7:c.instructions+=1;goto B5241a7;
case 0x5241a9:goto L5241a9;
case 0x5241ac:c.instructions+=1;goto B5241ac;
case 0x5241ae:goto L5241ae;
case 0x5241b0:goto L5241b0;
case 0x5241b3:c.instructions+=1;goto B5241b3;
case 0x5241b5:goto L5241b5;
case 0x5241bb:c.instructions+=2;goto B5241bb;
case 0x5241bc:c.instructions+=1;goto B5241bc;
case 0x5241c1:goto L5241c1;
case 0x5241c4:c.instructions+=1;goto B5241c4;
case 0x5241c5:goto L5241c5;
case 0x5241cb:c.instructions+=2;goto B5241cb;
case 0x5241cc:c.instructions+=1;goto B5241cc;
case 0x5241d1:goto L5241d1;
case 0x5241d2:c.instructions+=1;goto B5241d2;
case 0x5241e0:goto L5241e0;
case 0x5241e4:c.instructions+=6;goto B5241e4;
case 0x5241e9:c.instructions+=5;goto B5241e9;
case 0x5241ea:c.instructions+=4;goto B5241ea;
case 0x5241f0:c.instructions+=3;goto B5241f0;
case 0x5241f1:c.instructions+=2;goto B5241f1;
case 0x5241f3:c.instructions+=1;goto B5241f3;
case 0x5241f5:goto L5241f5;
case 0x5241fc:c.instructions+=1;goto B5241fc;
case 0x5241fe:goto L5241fe;
case 0x524203:c.instructions+=1;goto B524203;
case 0x524205:goto L524205;
case 0x52420c:goto L52420c;
case 0x52420f:c.instructions+=1;goto B52420f;
case 0x524211:goto L524211;
case 0x524217:c.instructions+=2;goto B524217;
case 0x524218:c.instructions+=1;goto B524218;
case 0x52421d:goto L52421d;
case 0x52421f:c.instructions+=5;goto B52421f;
case 0x524221:c.instructions+=4;goto B524221;
case 0x524224:c.instructions+=3;goto B524224;
case 0x524226:c.instructions+=2;goto B524226;
case 0x52422b:c.instructions+=1;goto B52422b;
case 0x524230:goto L524230;
case 0x524236:c.instructions+=1;goto B524236;
case 0x52423b:goto L52423b;
case 0x52423c:c.instructions+=2;goto B52423c;
case 0x52423d:c.instructions+=1;goto B52423d;
case 0x524240:goto L524240;
case 0x524244:c.instructions+=4;goto B524244;
case 0x524245:c.instructions+=3;goto B524245;
case 0x524247:c.instructions+=2;goto B524247;
case 0x52424e:c.instructions+=1;goto B52424e;
case 0x524250:goto L524250;
case 0x524251:c.instructions+=4;goto B524251;
case 0x524257:c.instructions+=3;goto B524257;
case 0x524259:c.instructions+=2;goto B524259;
case 0x52425b:c.instructions+=1;goto B52425b;
case 0x524260:goto L524260;
case 0x524263:c.instructions+=1;goto B524263;
case 0x524265:goto L524265;
case 0x524266:c.instructions+=3;goto B524266;
case 0x524269:c.instructions+=2;goto B524269;
case 0x52426c:c.instructions+=1;goto B52426c;
case 0x52426e:goto L52426e;
case 0x524270:c.instructions+=6;goto B524270;
case 0x524272:c.instructions+=5;goto B524272;
case 0x524276:c.instructions+=4;goto B524276;
case 0x524277:c.instructions+=3;goto B524277;
case 0x524279:c.instructions+=2;goto B524279;
case 0x524281:c.instructions+=1;goto B524281;
case 0x524286:goto L524286;
case 0x524288:c.instructions+=3;goto B524288;
case 0x52428a:c.instructions+=2;goto B52428a;
case 0x52428b:c.instructions+=1;goto B52428b;
case 0x524290:goto L524290;
case 0x524293:c.instructions+=1;goto B524293;
case 0x524295:goto L524295;
case 0x524296:c.instructions+=3;goto B524296;
case 0x524299:c.instructions+=2;goto B524299;
case 0x52429c:c.instructions+=1;goto B52429c;
case 0x52429e:goto L52429e;
case 0x5242a0:c.instructions+=6;goto B5242a0;
case 0x5242a2:c.instructions+=5;goto B5242a2;
case 0x5242a6:c.instructions+=4;goto B5242a6;
case 0x5242a7:c.instructions+=3;goto B5242a7;
case 0x5242a9:c.instructions+=2;goto B5242a9;
case 0x5242b1:c.instructions+=1;goto B5242b1;
case 0x5242b6:goto L5242b6;
case 0x5242b7:c.instructions+=1;goto B5242b7;
case 0x5242c0:goto L5242c0;
case 0x5242c1:c.instructions+=8;goto B5242c1;
case 0x5242c3:c.instructions+=7;goto B5242c3;
case 0x5242c4:c.instructions+=6;goto B5242c4;
case 0x5242c5:c.instructions+=5;goto B5242c5;
case 0x5242c8:c.instructions+=4;goto B5242c8;
case 0x5242cb:c.instructions+=3;goto B5242cb;
case 0x5242d0:c.instructions+=2;goto B5242d0;
case 0x5242d2:c.instructions+=1;goto B5242d2;
case 0x5242d4:goto L5242d4;
case 0x5242d9:c.instructions+=1;goto B5242d9;
case 0x5242db:goto L5242db;
case 0x5242e0:c.instructions+=1;goto B5242e0;
case 0x5242e2:goto L5242e2;
case 0x5242e4:c.instructions+=2;goto B5242e4;
case 0x5242ea:c.instructions+=1;goto B5242ea;
case 0x5242f0:goto L5242f0;
case 0x5242f3:c.instructions+=1;goto B5242f3;
case 0x5242f5:goto L5242f5;
case 0x5242f6:c.instructions+=3;goto B5242f6;
case 0x5242f9:c.instructions+=2;goto B5242f9;
case 0x5242fc:c.instructions+=1;goto B5242fc;
case 0x5242fe:goto L5242fe;
case 0x524304:c.instructions+=3;goto B524304;
case 0x52430a:c.instructions+=2;goto B52430a;
case 0x524310:c.instructions+=1;goto B524310;
case 0x524315:goto L524315;
case 0x524317:c.instructions+=6;goto B524317;
case 0x52431a:c.instructions+=5;goto B52431a;
case 0x52431c:c.instructions+=4;goto B52431c;
case 0x52431f:c.instructions+=3;goto B52431f;
case 0x524320:c.instructions+=2;goto B524320;
case 0x524322:c.instructions+=1;goto B524322;
case 0x524327:goto L524327;
case 0x524329:goto L524329;
case 0x52432e:c.instructions+=1;goto B52432e;
case 0x524330:goto L524330;
case 0x524337:c.instructions+=1;goto B524337;
case 0x52433b:goto L52433b;
case 0x52433e:c.instructions+=2;goto B52433e;
case 0x524340:c.instructions+=1;goto B524340;
case 0x524346:goto L524346;
case 0x524349:c.instructions+=2;goto B524349;
case 0x52434b:c.instructions+=1;goto B52434b;
case 0x52434d:goto L52434d;
case 0x524350:c.instructions+=2;goto B524350;
case 0x524352:c.instructions+=1;goto B524352;
case 0x524354:goto L524354;
case 0x524358:c.instructions+=1;goto B524358;
case 0x52435a:goto L52435a;
case 0x524360:c.instructions+=3;goto B524360;
case 0x524366:c.instructions+=2;goto B524366;
case 0x52436c:c.instructions+=1;goto B52436c;
case 0x524371:goto L524371;
case 0x524373:c.instructions+=6;goto B524373;
case 0x524375:c.instructions+=5;goto B524375;
case 0x524378:c.instructions+=4;goto B524378;
case 0x524379:c.instructions+=3;goto B524379;
case 0x52437b:c.instructions+=2;goto B52437b;
case 0x52437e:c.instructions+=1;goto B52437e;
case 0x524383:goto L524383;
case 0x524386:c.instructions+=6;goto B524386;
case 0x524389:c.instructions+=5;goto B524389;
case 0x52438f:c.instructions+=4;goto B52438f;
case 0x524395:c.instructions+=3;goto B524395;
case 0x524398:c.instructions+=2;goto B524398;
case 0x52439b:c.instructions+=1;goto B52439b;
case 0x52439d:goto L52439d;
case 0x52439f:c.instructions+=1;goto B52439f;
case 0x5243a1:goto L5243a1;
case 0x5243a7:c.instructions+=3;goto B5243a7;
case 0x5243ad:c.instructions+=2;goto B5243ad;
case 0x5243b3:c.instructions+=1;goto B5243b3;
case 0x5243b8:goto L5243b8;
case 0x5243ba:c.instructions+=6;goto B5243ba;
case 0x5243bd:c.instructions+=5;goto B5243bd;
case 0x5243bf:c.instructions+=4;goto B5243bf;
case 0x5243c2:c.instructions+=3;goto B5243c2;
case 0x5243c3:c.instructions+=2;goto B5243c3;
case 0x5243c5:c.instructions+=1;goto B5243c5;
case 0x5243ca:goto L5243ca;
case 0x5243cb:c.instructions+=3;goto B5243cb;
case 0x5243cc:c.instructions+=2;goto B5243cc;
case 0x5243cd:c.instructions+=1;goto B5243cd;
case 0x5243d0:goto L5243d0;
case 0x5243d1:c.instructions+=10;goto B5243d1;
case 0x5243d3:c.instructions+=9;goto B5243d3;
case 0x5243d9:c.instructions+=8;goto B5243d9;
case 0x5243de:c.instructions+=7;goto B5243de;
case 0x5243df:c.instructions+=6;goto B5243df;
case 0x5243e0:c.instructions+=5;goto B5243e0;
case 0x5243e5:c.instructions+=4;goto B5243e5;
case 0x5243e7:c.instructions+=3;goto B5243e7;
case 0x5243e9:c.instructions+=2;goto B5243e9;
case 0x5243ec:c.instructions+=1;goto B5243ec;
case 0x5243ee:goto L5243ee;
case 0x5243ef:c.instructions+=5;goto B5243ef;
case 0x5243f1:c.instructions+=4;goto B5243f1;
case 0x5243f2:c.instructions+=3;goto B5243f2;
case 0x5243f4:c.instructions+=2;goto B5243f4;
case 0x5243f5:c.instructions+=1;goto B5243f5;
case 0x5243f8:goto L5243f8;
case 0x5243f9:c.instructions+=3;goto B5243f9;
case 0x5243fc:c.instructions+=2;goto B5243fc;
case 0x5243ff:c.instructions+=1;goto B5243ff;
case 0x524401:goto L524401;
case 0x524407:goto L524407;
case 0x52440c:c.instructions+=2;goto B52440c;
case 0x52440e:c.instructions+=1;goto B52440e;
case 0x524410:goto L524410;
case 0x524415:c.instructions+=2;goto B524415;
case 0x524417:c.instructions+=1;goto B524417;
case 0x524419:goto L524419;
case 0x52441c:c.instructions+=5;goto B52441c;
case 0x52441f:c.instructions+=4;goto B52441f;
case 0x524421:c.instructions+=3;goto B524421;
case 0x524428:c.instructions+=2;goto B524428;
case 0x52442e:c.instructions+=1;goto B52442e;
case 0x524430:goto L524430;
case 0x524432:c.instructions+=1;goto B524432;
case 0x524434:goto L524434;
case 0x524436:goto L524436;
case 0x52443b:c.instructions+=2;goto B52443b;
case 0x52443d:c.instructions+=1;goto B52443d;
case 0x52443f:goto L52443f;
case 0x524441:c.instructions+=1;goto B524441;
case 0x524443:goto L524443;
case 0x524446:c.instructions+=1;goto B524446;
case 0x524448:goto L524448;
case 0x52444b:c.instructions+=1;goto B52444b;
case 0x52444d:goto L52444d;
case 0x524452:c.instructions+=1;goto B524452;
case 0x524457:goto L524457;
case 0x52445a:c.instructions+=1;goto B52445a;
case 0x52445c:goto L52445c;
case 0x52445f:c.instructions+=2;goto B52445f;
case 0x524461:c.instructions+=1;goto B524461;
case 0x524467:goto L524467;
case 0x52446a:c.instructions+=6;goto B52446a;
case 0x52446f:c.instructions+=5;goto B52446f;
case 0x524471:c.instructions+=4;goto B524471;
case 0x524478:c.instructions+=3;goto B524478;
case 0x52447f:c.instructions+=2;goto B52447f;
case 0x524486:c.instructions+=1;goto B524486;
case 0x524488:goto L524488;
case 0x52448e:c.instructions+=2;goto B52448e;
case 0x524490:c.instructions+=1;goto B524490;
case 0x524492:goto L524492;
case 0x524495:c.instructions+=2;goto B524495;
case 0x524497:c.instructions+=1;goto B524497;
case 0x524499:goto L524499;
case 0x52449a:c.instructions+=2;goto B52449a;
case 0x52449d:c.instructions+=1;goto B52449d;
case 0x5244a3:goto L5244a3;
case 0x5244a9:c.instructions+=3;goto B5244a9;
case 0x5244af:c.instructions+=2;goto B5244af;
case 0x5244b5:c.instructions+=1;goto B5244b5;
case 0x5244ba:goto L5244ba;
case 0x5244bc:c.instructions+=6;goto B5244bc;
case 0x5244bf:c.instructions+=5;goto B5244bf;
case 0x5244c1:c.instructions+=4;goto B5244c1;
case 0x5244c4:c.instructions+=3;goto B5244c4;
case 0x5244c5:c.instructions+=2;goto B5244c5;
case 0x5244c7:c.instructions+=1;goto B5244c7;
case 0x5244cc:goto L5244cc;
case 0x5244cd:c.instructions+=6;goto B5244cd;
case 0x5244ce:c.instructions+=5;goto B5244ce;
case 0x5244d0:c.instructions+=4;goto B5244d0;
case 0x5244d1:c.instructions+=3;goto B5244d1;
case 0x5244d3:c.instructions+=2;goto B5244d3;
case 0x5244d4:c.instructions+=1;goto B5244d4;
case 0x5244d7:goto L5244d7;
case 0x5244da:c.instructions+=1;goto B5244da;
case 0x5244e0:goto L5244e0;
case 0x5244e3:c.instructions+=2;goto B5244e3;
case 0x5244e5:c.instructions+=1;goto B5244e5;
case 0x5244eb:goto L5244eb;
case 0x5244ee:c.instructions+=6;goto B5244ee;
case 0x5244f3:c.instructions+=5;goto B5244f3;
case 0x5244f5:c.instructions+=4;goto B5244f5;
case 0x5244fc:c.instructions+=3;goto B5244fc;
case 0x524503:c.instructions+=2;goto B524503;
case 0x52450a:c.instructions+=1;goto B52450a;
case 0x52450c:goto L52450c;
case 0x524512:c.instructions+=2;goto B524512;
case 0x524514:c.instructions+=1;goto B524514;
case 0x524516:goto L524516;
case 0x524519:c.instructions+=2;goto B524519;
case 0x52451b:c.instructions+=1;goto B52451b;
case 0x52451d:goto L52451d;
case 0x52451e:c.instructions+=2;goto B52451e;
case 0x524521:c.instructions+=1;goto B524521;
case 0x524527:goto L524527;
case 0x52452d:c.instructions+=3;goto B52452d;
case 0x524533:c.instructions+=2;goto B524533;
case 0x524539:c.instructions+=1;goto B524539;
case 0x52453e:goto L52453e;
case 0x524540:c.instructions+=6;goto B524540;
case 0x524542:c.instructions+=5;goto B524542;
case 0x524545:c.instructions+=4;goto B524545;
case 0x524546:c.instructions+=3;goto B524546;
case 0x524548:c.instructions+=2;goto B524548;
case 0x52454b:c.instructions+=1;goto B52454b;
case 0x524550:goto L524550;
case 0x524552:c.instructions+=6;goto B524552;
case 0x524554:c.instructions+=5;goto B524554;
case 0x524557:c.instructions+=4;goto B524557;
case 0x524558:c.instructions+=3;goto B524558;
case 0x52455a:c.instructions+=2;goto B52455a;
case 0x524561:c.instructions+=1;goto B524561;
case 0x524566:goto L524566;
case 0x524567:c.instructions+=6;goto B524567;
case 0x524568:c.instructions+=5;goto B524568;
case 0x52456a:c.instructions+=4;goto B52456a;
case 0x52456b:c.instructions+=3;goto B52456b;
case 0x52456d:c.instructions+=2;goto B52456d;
case 0x52456e:c.instructions+=1;goto B52456e;
case 0x524571:goto L524571;
case 0x524574:c.instructions+=1;goto B524574;
case 0x524576:goto L524576;
case 0x524579:goto L524579;
case 0x52457c:c.instructions+=5;goto B52457c;
case 0x524583:c.instructions+=4;goto B524583;
case 0x524585:c.instructions+=3;goto B524585;
case 0x524587:c.instructions+=2;goto B524587;
case 0x52458b:c.instructions+=1;goto B52458b;
case 0x52458d:goto L52458d;
case 0x524592:c.instructions+=1;goto B524592;
case 0x524594:goto L524594;
case 0x52459a:c.instructions+=3;goto B52459a;
case 0x5245a0:c.instructions+=2;goto B5245a0;
case 0x5245a6:c.instructions+=1;goto B5245a6;
case 0x5245ab:goto L5245ab;
case 0x5245ae:c.instructions+=4;goto B5245ae;
case 0x5245b4:c.instructions+=3;goto B5245b4;
case 0x5245b6:c.instructions+=2;goto B5245b6;
case 0x5245b8:c.instructions+=1;goto B5245b8;
case 0x5245be:goto L5245be;
case 0x5245c1:c.instructions+=2;goto B5245c1;
case 0x5245c4:c.instructions+=1;goto B5245c4;
case 0x5245ca:goto L5245ca;
case 0x5245d1:goto L5245d1;
case 0x5245d6:c.instructions+=6;goto B5245d6;
case 0x5245dc:c.instructions+=5;goto B5245dc;
case 0x5245e2:c.instructions+=4;goto B5245e2;
case 0x5245e7:c.instructions+=3;goto B5245e7;
case 0x5245e9:c.instructions+=2;goto B5245e9;
case 0x5245f3:c.instructions+=1;goto B5245f3;
case 0x5245f9:goto L5245f9;
case 0x5245ff:c.instructions+=2;goto B5245ff;
case 0x524601:c.instructions+=1;goto B524601;
case 0x524607:goto L524607;
case 0x52460a:c.instructions+=2;goto B52460a;
case 0x52460c:c.instructions+=1;goto B52460c;
case 0x524612:goto L524612;
case 0x524614:c.instructions+=1;goto B524614;
case 0x524619:goto L524619;
case 0x52461f:c.instructions+=2;goto B52461f;
case 0x524625:c.instructions+=1;goto B524625;
case 0x52462a:goto L52462a;
case 0x52462c:c.instructions+=1;goto B52462c;
case 0x524631:goto L524631;
case 0x524633:c.instructions+=2;goto B524633;
case 0x524638:c.instructions+=1;goto B524638;
case 0x52463a:goto L52463a;
case 0x52463c:c.instructions+=4;goto B52463c;
case 0x524646:c.instructions+=3;goto B524646;
case 0x524650:c.instructions+=2;goto B524650;
case 0x52465a:c.instructions+=1;goto B52465a;
case 0x524660:goto L524660;
case 0x524666:c.instructions+=2;goto B524666;
case 0x524668:c.instructions+=1;goto B524668;
case 0x52466e:goto L52466e;
case 0x524671:c.instructions+=2;goto B524671;
case 0x524673:c.instructions+=1;goto B524673;
case 0x524679:goto L524679;
case 0x52467b:c.instructions+=1;goto B52467b;
case 0x524680:goto L524680;
case 0x524686:c.instructions+=3;goto B524686;
case 0x524687:c.instructions+=2;goto B524687;
case 0x52468d:c.instructions+=1;goto B52468d;
case 0x52468f:goto L52468f;
case 0x524694:goto L524694;
case 0x524696:c.instructions+=4;goto B524696;
case 0x52469d:c.instructions+=3;goto B52469d;
case 0x5246a0:c.instructions+=2;goto B5246a0;
case 0x5246a7:c.instructions+=1;goto B5246a7;
case 0x5246ad:goto L5246ad;
case 0x5246b3:c.instructions+=2;goto B5246b3;
case 0x5246b5:c.instructions+=1;goto B5246b5;
case 0x5246bb:goto L5246bb;
case 0x5246be:c.instructions+=2;goto B5246be;
case 0x5246c0:c.instructions+=1;goto B5246c0;
case 0x5246c6:goto L5246c6;
case 0x5246c8:c.instructions+=1;goto B5246c8;
case 0x5246cd:goto L5246cd;
case 0x5246d0:c.instructions+=2;goto B5246d0;
case 0x5246d3:c.instructions+=1;goto B5246d3;
case 0x5246d8:goto L5246d8;
case 0x5246da:c.instructions+=1;goto B5246da;
case 0x5246df:goto L5246df;
case 0x5246e1:c.instructions+=2;goto B5246e1;
case 0x5246e6:c.instructions+=1;goto B5246e6;
case 0x5246e8:goto L5246e8;
case 0x5246ea:c.instructions+=4;goto B5246ea;
case 0x5246f4:c.instructions+=3;goto B5246f4;
case 0x5246fe:c.instructions+=2;goto B5246fe;
case 0x524708:c.instructions+=1;goto B524708;
case 0x52470e:goto L52470e;
case 0x524714:c.instructions+=2;goto B524714;
case 0x524716:c.instructions+=1;goto B524716;
case 0x52471c:goto L52471c;
case 0x52471f:c.instructions+=2;goto B52471f;
case 0x524721:c.instructions+=1;goto B524721;
case 0x524727:goto L524727;
case 0x524729:c.instructions+=1;goto B524729;
case 0x52472e:goto L52472e;
case 0x524734:c.instructions+=3;goto B524734;
case 0x524735:c.instructions+=2;goto B524735;
case 0x52473b:c.instructions+=1;goto B52473b;
case 0x52473d:goto L52473d;
case 0x524742:goto L524742;
case 0x524744:c.instructions+=4;goto B524744;
case 0x52474b:c.instructions+=3;goto B52474b;
case 0x52474e:c.instructions+=2;goto B52474e;
case 0x524755:c.instructions+=1;goto B524755;
case 0x52475b:goto L52475b;
case 0x524761:c.instructions+=2;goto B524761;
case 0x524763:c.instructions+=1;goto B524763;
case 0x524769:goto L524769;
case 0x52476c:c.instructions+=2;goto B52476c;
case 0x52476e:c.instructions+=1;goto B52476e;
case 0x524774:goto L524774;
case 0x524776:c.instructions+=1;goto B524776;
case 0x52477b:goto L52477b;
case 0x52477e:c.instructions+=2;goto B52477e;
case 0x524781:c.instructions+=1;goto B524781;
case 0x524786:goto L524786;
case 0x52478b:c.instructions+=5;goto B52478b;
case 0x52478d:c.instructions+=4;goto B52478d;
case 0x524797:c.instructions+=3;goto B524797;
case 0x5247a1:c.instructions+=2;goto B5247a1;
case 0x5247ab:c.instructions+=1;goto B5247ab;
case 0x5247b1:goto L5247b1;
case 0x5247b7:c.instructions+=2;goto B5247b7;
case 0x5247b9:c.instructions+=1;goto B5247b9;
case 0x5247bf:goto L5247bf;
case 0x5247c2:c.instructions+=2;goto B5247c2;
case 0x5247c4:c.instructions+=1;goto B5247c4;
case 0x5247ca:goto L5247ca;
case 0x5247cc:c.instructions+=1;goto B5247cc;
case 0x5247d1:goto L5247d1;
case 0x5247d7:c.instructions+=3;goto B5247d7;
case 0x5247d8:c.instructions+=2;goto B5247d8;
case 0x5247de:c.instructions+=1;goto B5247de;
case 0x5247e0:goto L5247e0;
case 0x5247e5:goto L5247e5;
case 0x5247ea:c.instructions+=5;goto B5247ea;
case 0x5247ec:c.instructions+=4;goto B5247ec;
case 0x5247f3:c.instructions+=3;goto B5247f3;
case 0x5247f6:c.instructions+=2;goto B5247f6;
case 0x5247fd:c.instructions+=1;goto B5247fd;
case 0x524803:goto L524803;
case 0x524809:c.instructions+=2;goto B524809;
case 0x52480b:c.instructions+=1;goto B52480b;
case 0x524811:goto L524811;
case 0x524814:c.instructions+=2;goto B524814;
case 0x524816:c.instructions+=1;goto B524816;
case 0x52481c:goto L52481c;
case 0x52481e:c.instructions+=1;goto B52481e;
case 0x524823:goto L524823;
case 0x524826:c.instructions+=2;goto B524826;
case 0x524829:c.instructions+=1;goto B524829;
case 0x52482e:goto L52482e;
case 0x524833:c.instructions+=5;goto B524833;
case 0x524835:c.instructions+=4;goto B524835;
case 0x52483f:c.instructions+=3;goto B52483f;
case 0x524849:c.instructions+=2;goto B524849;
case 0x524853:c.instructions+=1;goto B524853;
case 0x524859:goto L524859;
case 0x52485f:c.instructions+=2;goto B52485f;
case 0x524861:c.instructions+=1;goto B524861;
case 0x524867:goto L524867;
case 0x52486a:c.instructions+=2;goto B52486a;
case 0x52486c:c.instructions+=1;goto B52486c;
case 0x524872:goto L524872;
case 0x524874:c.instructions+=1;goto B524874;
case 0x524879:goto L524879;
case 0x52487f:c.instructions+=3;goto B52487f;
case 0x524880:c.instructions+=2;goto B524880;
case 0x524886:c.instructions+=1;goto B524886;
case 0x524888:goto L524888;
case 0x52488d:goto L52488d;
case 0x524892:c.instructions+=5;goto B524892;
case 0x524894:c.instructions+=4;goto B524894;
case 0x52489b:c.instructions+=3;goto B52489b;
case 0x5248a2:c.instructions+=2;goto B5248a2;
case 0x5248a9:c.instructions+=1;goto B5248a9;
case 0x5248af:goto L5248af;
case 0x5248b5:c.instructions+=2;goto B5248b5;
case 0x5248b7:c.instructions+=1;goto B5248b7;
case 0x5248bd:goto L5248bd;
case 0x5248c0:c.instructions+=2;goto B5248c0;
case 0x5248c2:c.instructions+=1;goto B5248c2;
case 0x5248c8:goto L5248c8;
case 0x5248ca:c.instructions+=1;goto B5248ca;
case 0x5248cf:goto L5248cf;
case 0x5248d2:c.instructions+=2;goto B5248d2;
case 0x5248d5:c.instructions+=1;goto B5248d5;
case 0x5248da:goto L5248da;
case 0x5248df:c.instructions+=5;goto B5248df;
case 0x5248e1:c.instructions+=4;goto B5248e1;
case 0x5248eb:c.instructions+=3;goto B5248eb;
case 0x5248f5:c.instructions+=2;goto B5248f5;
case 0x5248ff:c.instructions+=1;goto B5248ff;
case 0x524905:goto L524905;
case 0x52490b:c.instructions+=2;goto B52490b;
case 0x52490d:c.instructions+=1;goto B52490d;
case 0x524913:goto L524913;
case 0x524916:c.instructions+=2;goto B524916;
case 0x524918:c.instructions+=1;goto B524918;
case 0x52491e:goto L52491e;
case 0x524920:c.instructions+=1;goto B524920;
case 0x524925:goto L524925;
case 0x52492b:c.instructions+=3;goto B52492b;
case 0x52492c:c.instructions+=2;goto B52492c;
case 0x524932:c.instructions+=1;goto B524932;
case 0x524934:goto L524934;
case 0x524939:goto L524939;
case 0x52493e:c.instructions+=6;goto B52493e;
case 0x524944:c.instructions+=5;goto B524944;
case 0x52494a:c.instructions+=4;goto B52494a;
case 0x52494f:c.instructions+=3;goto B52494f;
case 0x524951:c.instructions+=2;goto B524951;
case 0x52495b:c.instructions+=1;goto B52495b;
case 0x524961:goto L524961;
case 0x524967:c.instructions+=2;goto B524967;
case 0x524969:c.instructions+=1;goto B524969;
case 0x52496f:goto L52496f;
case 0x524972:c.instructions+=2;goto B524972;
case 0x524974:c.instructions+=1;goto B524974;
case 0x52497a:goto L52497a;
case 0x52497c:c.instructions+=1;goto B52497c;
case 0x524981:goto L524981;
case 0x524987:c.instructions+=2;goto B524987;
case 0x52498d:c.instructions+=1;goto B52498d;
case 0x524992:goto L524992;
case 0x524997:c.instructions+=5;goto B524997;
case 0x524999:c.instructions+=4;goto B524999;
case 0x5249a3:c.instructions+=3;goto B5249a3;
case 0x5249ad:c.instructions+=2;goto B5249ad;
case 0x5249b7:c.instructions+=1;goto B5249b7;
case 0x5249bd:goto L5249bd;
case 0x5249c3:c.instructions+=2;goto B5249c3;
case 0x5249c5:c.instructions+=1;goto B5249c5;
case 0x5249cb:goto L5249cb;
case 0x5249ce:c.instructions+=2;goto B5249ce;
case 0x5249d0:c.instructions+=1;goto B5249d0;
case 0x5249d6:goto L5249d6;
case 0x5249d8:c.instructions+=1;goto B5249d8;
case 0x5249dd:goto L5249dd;
case 0x5249e3:c.instructions+=3;goto B5249e3;
case 0x5249e4:c.instructions+=2;goto B5249e4;
case 0x5249ea:c.instructions+=1;goto B5249ea;
case 0x5249ec:goto L5249ec;
case 0x5249f1:goto L5249f1;
case 0x5249f6:c.instructions+=5;goto B5249f6;
case 0x5249f8:c.instructions+=4;goto B5249f8;
case 0x524a02:c.instructions+=3;goto B524a02;
case 0x524a0c:c.instructions+=2;goto B524a0c;
case 0x524a16:c.instructions+=1;goto B524a16;
case 0x524a1c:goto L524a1c;
case 0x524a22:c.instructions+=2;goto B524a22;
case 0x524a24:c.instructions+=1;goto B524a24;
case 0x524a2a:goto L524a2a;
case 0x524a2d:c.instructions+=2;goto B524a2d;
case 0x524a2f:c.instructions+=1;goto B524a2f;
case 0x524a35:goto L524a35;
case 0x524a37:c.instructions+=1;goto B524a37;
case 0x524a3c:goto L524a3c;
case 0x524a42:c.instructions+=2;goto B524a42;
case 0x524a48:c.instructions+=1;goto B524a48;
case 0x524a4d:goto L524a4d;
case 0x524a52:c.instructions+=5;goto B524a52;
case 0x524a54:c.instructions+=4;goto B524a54;
case 0x524a5b:c.instructions+=3;goto B524a5b;
case 0x524a62:c.instructions+=2;goto B524a62;
case 0x524a69:c.instructions+=1;goto B524a69;
case 0x524a6f:goto L524a6f;
case 0x524a75:c.instructions+=2;goto B524a75;
case 0x524a77:c.instructions+=1;goto B524a77;
case 0x524a7d:goto L524a7d;
case 0x524a80:c.instructions+=2;goto B524a80;
case 0x524a82:c.instructions+=1;goto B524a82;
case 0x524a88:goto L524a88;
case 0x524a8a:c.instructions+=1;goto B524a8a;
case 0x524a8f:goto L524a8f;
case 0x524a92:c.instructions+=3;goto B524a92;
case 0x524a93:c.instructions+=2;goto B524a93;
case 0x524a96:c.instructions+=1;goto B524a96;
case 0x524a98:goto L524a98;
case 0x524a9d:goto L524a9d;
case 0x524aa2:c.instructions+=5;goto B524aa2;
case 0x524aa4:c.instructions+=4;goto B524aa4;
case 0x524aae:c.instructions+=3;goto B524aae;
case 0x524ab8:c.instructions+=2;goto B524ab8;
case 0x524ac2:c.instructions+=1;goto B524ac2;
case 0x524ac8:goto L524ac8;
case 0x524ace:c.instructions+=2;goto B524ace;
case 0x524ad0:c.instructions+=1;goto B524ad0;
case 0x524ad6:goto L524ad6;
case 0x524ad9:c.instructions+=2;goto B524ad9;
case 0x524adb:c.instructions+=1;goto B524adb;
case 0x524ae1:goto L524ae1;
case 0x524ae3:c.instructions+=1;goto B524ae3;
case 0x524ae8:goto L524ae8;
case 0x524aee:c.instructions+=2;goto B524aee;
case 0x524af4:c.instructions+=1;goto B524af4;
case 0x524af9:goto L524af9;
case 0x524afe:c.instructions+=5;goto B524afe;
case 0x524b00:c.instructions+=4;goto B524b00;
case 0x524b07:c.instructions+=3;goto B524b07;
case 0x524b0e:c.instructions+=2;goto B524b0e;
case 0x524b15:c.instructions+=1;goto B524b15;
case 0x524b1b:goto L524b1b;
case 0x524b21:c.instructions+=2;goto B524b21;
case 0x524b23:c.instructions+=1;goto B524b23;
case 0x524b29:goto L524b29;
case 0x524b2c:c.instructions+=2;goto B524b2c;
case 0x524b2e:c.instructions+=1;goto B524b2e;
case 0x524b34:goto L524b34;
case 0x524b36:c.instructions+=1;goto B524b36;
case 0x524b3b:goto L524b3b;
case 0x524b3e:c.instructions+=3;goto B524b3e;
case 0x524b3f:c.instructions+=2;goto B524b3f;
case 0x524b42:c.instructions+=1;goto B524b42;
case 0x524b44:goto L524b44;
case 0x524b49:goto L524b49;
case 0x524b4e:c.instructions+=5;goto B524b4e;
case 0x524b50:c.instructions+=4;goto B524b50;
case 0x524b57:c.instructions+=3;goto B524b57;
case 0x524b5e:c.instructions+=2;goto B524b5e;
case 0x524b65:c.instructions+=1;goto B524b65;
case 0x524b6b:goto L524b6b;
case 0x524b71:c.instructions+=2;goto B524b71;
case 0x524b73:c.instructions+=1;goto B524b73;
case 0x524b79:goto L524b79;
case 0x524b7c:c.instructions+=2;goto B524b7c;
case 0x524b7e:c.instructions+=1;goto B524b7e;
case 0x524b84:goto L524b84;
case 0x524b86:c.instructions+=1;goto B524b86;
case 0x524b8b:goto L524b8b;
case 0x524b8e:c.instructions+=2;goto B524b8e;
case 0x524b91:c.instructions+=1;goto B524b91;
case 0x524b96:goto L524b96;
case 0x524b9b:c.instructions+=5;goto B524b9b;
case 0x524b9d:c.instructions+=4;goto B524b9d;
case 0x524ba4:c.instructions+=3;goto B524ba4;
case 0x524bab:c.instructions+=2;goto B524bab;
case 0x524bb2:c.instructions+=1;goto B524bb2;
case 0x524bb8:goto L524bb8;
case 0x524bbe:c.instructions+=2;goto B524bbe;
case 0x524bc0:c.instructions+=1;goto B524bc0;
case 0x524bc6:goto L524bc6;
case 0x524bc9:c.instructions+=2;goto B524bc9;
case 0x524bcb:c.instructions+=1;goto B524bcb;
case 0x524bd1:goto L524bd1;
case 0x524bd3:c.instructions+=1;goto B524bd3;
case 0x524bd8:goto L524bd8;
case 0x524bdb:c.instructions+=3;goto B524bdb;
case 0x524bdc:c.instructions+=2;goto B524bdc;
case 0x524bdf:c.instructions+=1;goto B524bdf;
case 0x524be1:goto L524be1;
case 0x524be6:goto L524be6;
case 0x524beb:c.instructions+=5;goto B524beb;
case 0x524bed:c.instructions+=4;goto B524bed;
case 0x524bf4:c.instructions+=3;goto B524bf4;
case 0x524bfb:c.instructions+=2;goto B524bfb;
case 0x524c02:c.instructions+=1;goto B524c02;
case 0x524c08:goto L524c08;
case 0x524c0e:c.instructions+=2;goto B524c0e;
case 0x524c10:c.instructions+=1;goto B524c10;
case 0x524c16:goto L524c16;
case 0x524c19:c.instructions+=2;goto B524c19;
case 0x524c1b:c.instructions+=1;goto B524c1b;
case 0x524c21:goto L524c21;
case 0x524c23:c.instructions+=1;goto B524c23;
case 0x524c28:goto L524c28;
case 0x524c2b:c.instructions+=2;goto B524c2b;
case 0x524c2e:c.instructions+=1;goto B524c2e;
case 0x524c33:goto L524c33;
case 0x524c38:c.instructions+=5;goto B524c38;
case 0x524c3a:c.instructions+=4;goto B524c3a;
case 0x524c44:c.instructions+=3;goto B524c44;
case 0x524c4e:c.instructions+=2;goto B524c4e;
case 0x524c55:c.instructions+=1;goto B524c55;
case 0x524c5b:goto L524c5b;
case 0x524c61:c.instructions+=2;goto B524c61;
case 0x524c63:c.instructions+=1;goto B524c63;
case 0x524c69:goto L524c69;
case 0x524c6c:c.instructions+=2;goto B524c6c;
case 0x524c6e:c.instructions+=1;goto B524c6e;
case 0x524c74:goto L524c74;
case 0x524c76:c.instructions+=1;goto B524c76;
case 0x524c7b:goto L524c7b;
case 0x524c81:c.instructions+=3;goto B524c81;
case 0x524c82:c.instructions+=2;goto B524c82;
case 0x524c88:c.instructions+=1;goto B524c88;
case 0x524c8a:goto L524c8a;
case 0x524c8f:goto L524c8f;
case 0x524c94:c.instructions+=5;goto B524c94;
case 0x524c96:c.instructions+=4;goto B524c96;
case 0x524ca0:c.instructions+=3;goto B524ca0;
case 0x524caa:c.instructions+=2;goto B524caa;
case 0x524cb4:c.instructions+=1;goto B524cb4;
case 0x524cba:goto L524cba;
case 0x524cc0:c.instructions+=2;goto B524cc0;
case 0x524cc2:c.instructions+=1;goto B524cc2;
case 0x524cc8:goto L524cc8;
case 0x524ccb:c.instructions+=2;goto B524ccb;
case 0x524ccd:c.instructions+=1;goto B524ccd;
case 0x524cd3:goto L524cd3;
case 0x524cd5:c.instructions+=1;goto B524cd5;
case 0x524cda:goto L524cda;
case 0x524ce0:c.instructions+=2;goto B524ce0;
case 0x524ce6:c.instructions+=1;goto B524ce6;
case 0x524ceb:goto L524ceb;
case 0x524cf0:c.instructions+=5;goto B524cf0;
case 0x524cf2:c.instructions+=4;goto B524cf2;
case 0x524cfc:c.instructions+=3;goto B524cfc;
case 0x524d06:c.instructions+=2;goto B524d06;
case 0x524d10:c.instructions+=1;goto B524d10;
case 0x524d16:goto L524d16;
case 0x524d1c:c.instructions+=2;goto B524d1c;
case 0x524d1e:c.instructions+=1;goto B524d1e;
case 0x524d24:goto L524d24;
case 0x524d27:c.instructions+=2;goto B524d27;
case 0x524d29:c.instructions+=1;goto B524d29;
case 0x524d2f:goto L524d2f;
case 0x524d31:c.instructions+=1;goto B524d31;
case 0x524d36:goto L524d36;
case 0x524d3c:c.instructions+=3;goto B524d3c;
case 0x524d3d:c.instructions+=2;goto B524d3d;
case 0x524d43:c.instructions+=1;goto B524d43;
case 0x524d45:goto L524d45;
case 0x524d4a:goto L524d4a;
case 0x524d4f:c.instructions+=5;goto B524d4f;
case 0x524d51:c.instructions+=4;goto B524d51;
case 0x524d5b:c.instructions+=3;goto B524d5b;
case 0x524d65:c.instructions+=2;goto B524d65;
case 0x524d6f:c.instructions+=1;goto B524d6f;
case 0x524d75:goto L524d75;
case 0x524d7b:c.instructions+=2;goto B524d7b;
case 0x524d7d:c.instructions+=1;goto B524d7d;
case 0x524d83:goto L524d83;
case 0x524d86:c.instructions+=2;goto B524d86;
case 0x524d88:c.instructions+=1;goto B524d88;
case 0x524d8e:goto L524d8e;
case 0x524d90:c.instructions+=1;goto B524d90;
case 0x524d95:goto L524d95;
case 0x524d9b:c.instructions+=2;goto B524d9b;
case 0x524da1:c.instructions+=1;goto B524da1;
case 0x524da6:goto L524da6;
case 0x524dab:c.instructions+=5;goto B524dab;
case 0x524dad:c.instructions+=4;goto B524dad;
case 0x524db7:c.instructions+=3;goto B524db7;
case 0x524dc1:c.instructions+=2;goto B524dc1;
case 0x524dcb:c.instructions+=1;goto B524dcb;
case 0x524dd1:goto L524dd1;
case 0x524dd7:c.instructions+=2;goto B524dd7;
case 0x524dd9:c.instructions+=1;goto B524dd9;
case 0x524ddf:goto L524ddf;
case 0x524de2:c.instructions+=2;goto B524de2;
case 0x524de4:c.instructions+=1;goto B524de4;
case 0x524dea:goto L524dea;
case 0x524dec:c.instructions+=1;goto B524dec;
case 0x524df1:goto L524df1;
case 0x524df7:c.instructions+=3;goto B524df7;
case 0x524df8:c.instructions+=2;goto B524df8;
case 0x524dfe:c.instructions+=1;goto B524dfe;
case 0x524e00:goto L524e00;
case 0x524e05:goto L524e05;
case 0x524e0a:c.instructions+=5;goto B524e0a;
case 0x524e0c:c.instructions+=4;goto B524e0c;
case 0x524e16:c.instructions+=3;goto B524e16;
case 0x524e20:c.instructions+=2;goto B524e20;
case 0x524e2a:c.instructions+=1;goto B524e2a;
case 0x524e30:goto L524e30;
case 0x524e36:c.instructions+=2;goto B524e36;
case 0x524e38:c.instructions+=1;goto B524e38;
case 0x524e3e:goto L524e3e;
case 0x524e41:c.instructions+=2;goto B524e41;
case 0x524e43:c.instructions+=1;goto B524e43;
case 0x524e49:goto L524e49;
case 0x524e4b:c.instructions+=1;goto B524e4b;
case 0x524e50:goto L524e50;
case 0x524e56:c.instructions+=2;goto B524e56;
case 0x524e5c:c.instructions+=1;goto B524e5c;
case 0x524e61:goto L524e61;
case 0x524e66:c.instructions+=5;goto B524e66;
case 0x524e68:c.instructions+=4;goto B524e68;
case 0x524e72:c.instructions+=3;goto B524e72;
case 0x524e7c:c.instructions+=2;goto B524e7c;
case 0x524e86:c.instructions+=1;goto B524e86;
case 0x524e8c:goto L524e8c;
case 0x524e92:c.instructions+=2;goto B524e92;
case 0x524e94:c.instructions+=1;goto B524e94;
case 0x524e9a:goto L524e9a;
case 0x524e9d:c.instructions+=2;goto B524e9d;
case 0x524e9f:c.instructions+=1;goto B524e9f;
case 0x524ea5:goto L524ea5;
case 0x524ea7:c.instructions+=1;goto B524ea7;
case 0x524eac:goto L524eac;
case 0x524eb2:c.instructions+=3;goto B524eb2;
case 0x524eb3:c.instructions+=2;goto B524eb3;
case 0x524eb9:c.instructions+=1;goto B524eb9;
case 0x524ebb:goto L524ebb;
case 0x524ec0:goto L524ec0;
case 0x524ec5:c.instructions+=5;goto B524ec5;
case 0x524ec7:c.instructions+=4;goto B524ec7;
case 0x524ed1:c.instructions+=3;goto B524ed1;
case 0x524edb:c.instructions+=2;goto B524edb;
case 0x524ee5:c.instructions+=1;goto B524ee5;
case 0x524eeb:goto L524eeb;
case 0x524ef1:c.instructions+=2;goto B524ef1;
case 0x524ef3:c.instructions+=1;goto B524ef3;
case 0x524ef9:goto L524ef9;
case 0x524efc:c.instructions+=2;goto B524efc;
case 0x524efe:c.instructions+=1;goto B524efe;
case 0x524f04:goto L524f04;
case 0x524f06:c.instructions+=1;goto B524f06;
case 0x524f0b:goto L524f0b;
case 0x524f11:c.instructions+=2;goto B524f11;
case 0x524f17:c.instructions+=1;goto B524f17;
case 0x524f1c:goto L524f1c;
case 0x524f21:c.instructions+=5;goto B524f21;
case 0x524f23:c.instructions+=4;goto B524f23;
case 0x524f2d:c.instructions+=3;goto B524f2d;
case 0x524f37:c.instructions+=2;goto B524f37;
case 0x524f41:c.instructions+=1;goto B524f41;
case 0x524f43:goto L524f43;
case 0x524f49:c.instructions+=2;goto B524f49;
case 0x524f4b:c.instructions+=1;goto B524f4b;
case 0x524f4d:goto L524f4d;
case 0x524f50:c.instructions+=2;goto B524f50;
case 0x524f52:c.instructions+=1;goto B524f52;
case 0x524f54:goto L524f54;
case 0x524f56:c.instructions+=1;goto B524f56;
case 0x524f5b:goto L524f5b;
case 0x524f61:c.instructions+=3;goto B524f61;
case 0x524f62:c.instructions+=2;goto B524f62;
case 0x524f68:c.instructions+=1;goto B524f68;
case 0x524f6a:goto L524f6a;
case 0x524f6c:goto L524f6c;
case 0x524f71:c.instructions+=5;goto B524f71;
case 0x524f73:c.instructions+=4;goto B524f73;
case 0x524f7a:c.instructions+=3;goto B524f7a;
case 0x524f81:c.instructions+=2;goto B524f81;
case 0x524f88:c.instructions+=1;goto B524f88;
case 0x524f8a:goto L524f8a;
case 0x524f90:c.instructions+=2;goto B524f90;
case 0x524f92:c.instructions+=1;goto B524f92;
case 0x524f94:goto L524f94;
case 0x524f97:c.instructions+=2;goto B524f97;
case 0x524f99:c.instructions+=1;goto B524f99;
case 0x524f9b:goto L524f9b;
case 0x524f9d:c.instructions+=1;goto B524f9d;
case 0x524fa2:goto L524fa2;
case 0x524fa5:c.instructions+=1;goto B524fa5;
case 0x524fa8:goto L524fa8;
case 0x524fa9:c.instructions+=1;goto B524fa9;
case 0x524fab:goto L524fab;
case 0x524fae:c.instructions+=2;goto B524fae;
case 0x524fb4:c.instructions+=1;goto B524fb4;
case 0x524fb6:goto L524fb6;
case 0x524fb9:c.instructions+=6;goto B524fb9;
case 0x524fba:c.instructions+=5;goto B524fba;
case 0x524fbb:c.instructions+=4;goto B524fbb;
case 0x524fbc:c.instructions+=3;goto B524fbc;
case 0x524fbe:c.instructions+=2;goto B524fbe;
case 0x524fbf:c.instructions+=1;goto B524fbf;
default:missing_instruction(c.pc);}
B524005:L524005:{c.instructions+=4;NFSU2_TR(0x524005);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B524008:{NFSU2_TR(0x524008);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52400a:{NFSU2_TR(0x52400a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52400c:{NFSU2_TR(0x52400c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5240c9;}}
}
B524012:L524012:{c.instructions+=2;NFSU2_TR(0x524012);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B524019:{NFSU2_TR(0x524019);
if(r1(R+518)){{goto L524025;}}
}
B52401b:L52401b:{c.instructions+=3;NFSU2_TR(0x52401b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52401c:{NFSU2_TR(0x52401c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52401e:{NFSU2_TR(0x52401e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x524012u);}goto L524012;}}
}
B524020:L524020:{c.instructions+=1;NFSU2_TR(0x524020);
{goto L5240c9;}
}
B524025:L524025:{c.instructions+=3;NFSU2_TR(0x524025);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B52402c:{NFSU2_TR(0x52402c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52402e:{NFSU2_TR(0x52402e);
if(r1(R+518)){{goto L5240c9;}}
}
B524034:L524034:{c.instructions+=2;NFSU2_TR(0x524034);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B524038:{NFSU2_TR(0x524038);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5240c9;}}
}
B52403e:L52403e:{c.instructions+=2;NFSU2_TR(0x52403e);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524040:{NFSU2_TR(0x524040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524045ull));
TAIL_STATIC(0x575620u,575);
}
B524045:L524045:{c.instructions+=6;NFSU2_TR(0x524045);
__builtin_memmove((R+24),(R+0),4);
}
B524047:{NFSU2_TR(0x524047);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52404a:{NFSU2_TR(0x52404a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52404e:{NFSU2_TR(0x52404e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B524050:{NFSU2_TR(0x524050);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B524054:{NFSU2_TR(0x524054);
if(r1(R+518)){{goto L5240b1;}}
}
B524056:L524056:{c.instructions+=4;NFSU2_TR(0x524056);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524059:{NFSU2_TR(0x524059);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52405a:{NFSU2_TR(0x52405a);
u8 U[4];
w4(U+0,u32(0x79b858ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52405f:{NFSU2_TR(0x52405f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524064ull));
TAIL_STATIC(0x43db80u,43d);
}
B524064:L524064:{c.instructions+=23;NFSU2_TR(0x524064);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B524068:{NFSU2_TR(0x524068);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52406c:{NFSU2_TR(0x52406c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52406f:{NFSU2_TR(0x52406f);
w4(R+0,u32(0x3f800000ull));
}
B524074:{NFSU2_TR(0x524074);
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
B524077:{NFSU2_TR(0x524077);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52407a:{NFSU2_TR(0x52407a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52407d:{NFSU2_TR(0x52407d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B524080:{NFSU2_TR(0x524080);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B524083:{NFSU2_TR(0x524083);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B524086:{NFSU2_TR(0x524086);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52408a:{NFSU2_TR(0x52408a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52408d:{NFSU2_TR(0x52408d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B524090:{NFSU2_TR(0x524090);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B524093:{NFSU2_TR(0x524093);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B524096:{NFSU2_TR(0x524096);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B524099:{NFSU2_TR(0x524099);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52409c:{NFSU2_TR(0x52409c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52409f:{NFSU2_TR(0x52409f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5240a3:{NFSU2_TR(0x5240a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5240a6:{NFSU2_TR(0x5240a6);
u8 U[4];
w4(U+0,u32(0x79b840ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5240ac:{NFSU2_TR(0x5240ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5240af:{NFSU2_TR(0x5240af);
{goto L5240b3;}
}
B5240b1:L5240b1:{c.instructions+=1;NFSU2_TR(0x5240b1);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5240b3:L5240b3:{c.instructions+=5;NFSU2_TR(0x5240b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5240b7:{NFSU2_TR(0x5240b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5240b9:{NFSU2_TR(0x5240b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5240ba:{NFSU2_TR(0x5240ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5240c2:{NFSU2_TR(0x5240c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5240c5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5240c5:L5240c5:{c.instructions+=1;NFSU2_TR(0x5240c5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5240c9:L5240c9:{c.instructions+=8;NFSU2_TR(0x5240c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5240cd:{NFSU2_TR(0x5240cd);
__builtin_memmove((R+0),gp(0x838408),4);
}
B5240d2:{NFSU2_TR(0x5240d2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5240d3:{NFSU2_TR(0x5240d3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B5240d6:{NFSU2_TR(0x5240d6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5240d8:{NFSU2_TR(0x5240d8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5240dc:{NFSU2_TR(0x5240dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5240e0:{NFSU2_TR(0x5240e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x523fb4u,523);}
}
B5240e6:L5240e6:{c.instructions+=7;NFSU2_TR(0x5240e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5240e7:{NFSU2_TR(0x5240e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5240eb:{NFSU2_TR(0x5240eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5240ec:{NFSU2_TR(0x5240ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5240ed:{NFSU2_TR(0x5240ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5240f4:{NFSU2_TR(0x5240f4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5240f7:{NFSU2_TR(0x5240f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B524100:L524100:{c.instructions+=3;NFSU2_TR(0x524100);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524101:{NFSU2_TR(0x524101);
__builtin_memmove((R+24),(R+4),4);
}
B524103:{NFSU2_TR(0x524103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524108ull));
TAIL_STATIC(0x510e50u,510);
}
B524108:L524108:{c.instructions+=2;NFSU2_TR(0x524108);
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
B52410d:{NFSU2_TR(0x52410d);
if(r1(R+518)){{goto L524118;}}
}
B52410f:L52410f:{c.instructions+=2;NFSU2_TR(0x52410f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524110:{NFSU2_TR(0x524110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524115ull));
TAIL_STATIC(0x575630u,575);
}
B524115:L524115:{c.instructions+=1;NFSU2_TR(0x524115);
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
B524118:L524118:{c.instructions+=3;NFSU2_TR(0x524118);
__builtin_memmove((R+0),(R+24),4);
}
B52411a:{NFSU2_TR(0x52411a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52411b:{NFSU2_TR(0x52411b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B524120:L524120:{c.instructions+=3;NFSU2_TR(0x524120);
w4(R+0,u32(m1(0x83aa58)));
}
B524127:{NFSU2_TR(0x524127);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52412a:{NFSU2_TR(0x52412a);
if(r1(R+518)){{goto L524158;}}
}
B52412c:L52412c:{c.instructions+=2;NFSU2_TR(0x52412c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52412d:{NFSU2_TR(0x52412d);
if(r1(R+518)){{goto L524142;}}
}
B52412f:L52412f:{c.instructions+=5;NFSU2_TR(0x52412f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B524131:{NFSU2_TR(0x524131);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524132:{NFSU2_TR(0x524132);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524138:{NFSU2_TR(0x524138);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524139:{NFSU2_TR(0x524139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52413eull));
TAIL_STATIC(0x50c900u,50c);
}
B52413e:L52413e:{c.instructions+=2;NFSU2_TR(0x52413e);
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
B524141:{NFSU2_TR(0x524141);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B524142:L524142:{c.instructions+=5;NFSU2_TR(0x524142);
w4(R+0,u32(0xa9c9c8f7ull));
}
B524147:{NFSU2_TR(0x524147);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524148:{NFSU2_TR(0x524148);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52414e:{NFSU2_TR(0x52414e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52414f:{NFSU2_TR(0x52414f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524154ull));
TAIL_STATIC(0x50c900u,50c);
}
B524154:L524154:{c.instructions+=2;NFSU2_TR(0x524154);
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
B524157:{NFSU2_TR(0x524157);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B524158:L524158:{c.instructions+=5;NFSU2_TR(0x524158);
w4(R+0,u32(0x4ca36b89ull));
}
B52415d:{NFSU2_TR(0x52415d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52415e:{NFSU2_TR(0x52415e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524164:{NFSU2_TR(0x524164);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524165:{NFSU2_TR(0x524165);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52416aull));
TAIL_STATIC(0x50c900u,50c);
}
B52416a:L52416a:{c.instructions+=2;NFSU2_TR(0x52416a);
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
B52416d:{NFSU2_TR(0x52416d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B524170:L524170:{c.instructions+=4;NFSU2_TR(0x524170);
__builtin_memmove((R+8),(R+4),4);
}
B524172:{NFSU2_TR(0x524172);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524175:{NFSU2_TR(0x524175);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B524177:{NFSU2_TR(0x524177);
if(r1(R+518)){{goto L52417e;}}
}
B524179:L524179:{c.instructions+=2;NFSU2_TR(0x524179);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B52417c:{NFSU2_TR(0x52417c);
{goto L524180;}
}
B52417e:L52417e:{c.instructions+=1;NFSU2_TR(0x52417e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B524180:L524180:{c.instructions+=2;NFSU2_TR(0x524180);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B524183:{NFSU2_TR(0x524183);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L524193;}}
}
B524185:L524185:{c.instructions+=3;NFSU2_TR(0x524185);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52418b:{NFSU2_TR(0x52418b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52418c:{NFSU2_TR(0x52418c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524191ull));
TAIL_STATIC(0x50ca00u,50c);
}
B524191:L524191:{c.instructions+=1;NFSU2_TR(0x524191);
{goto L52419f;}
}
B524193:L524193:{c.instructions+=3;NFSU2_TR(0x524193);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B524199:{NFSU2_TR(0x524199);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52419a:{NFSU2_TR(0x52419a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52419full));
TAIL_STATIC(0x50ca50u,50c);
}
B52419f:L52419f:{c.instructions+=4;NFSU2_TR(0x52419f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5241a2:{NFSU2_TR(0x5241a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5241a5:{NFSU2_TR(0x5241a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5241a7:{NFSU2_TR(0x5241a7);
if(r1(R+518)){{goto L5241ae;}}
}
B5241a9:L5241a9:{c.instructions+=2;NFSU2_TR(0x5241a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5241ac:{NFSU2_TR(0x5241ac);
{goto L5241b0;}
}
B5241ae:L5241ae:{c.instructions+=1;NFSU2_TR(0x5241ae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5241b0:L5241b0:{c.instructions+=2;NFSU2_TR(0x5241b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5241b3:{NFSU2_TR(0x5241b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5241c5;}}
}
B5241b5:L5241b5:{c.instructions+=3;NFSU2_TR(0x5241b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5241bb:{NFSU2_TR(0x5241bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5241bc:{NFSU2_TR(0x5241bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5241c1ull));
TAIL_STATIC(0x50ca00u,50c);
}
B5241c1:L5241c1:{c.instructions+=2;NFSU2_TR(0x5241c1);
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
B5241c4:{NFSU2_TR(0x5241c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5241c5:L5241c5:{c.instructions+=3;NFSU2_TR(0x5241c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5241cb:{NFSU2_TR(0x5241cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5241cc:{NFSU2_TR(0x5241cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5241d1ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5241d1:L5241d1:{c.instructions+=2;NFSU2_TR(0x5241d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5241d2:{NFSU2_TR(0x5241d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5241e0:L5241e0:{c.instructions+=7;NFSU2_TR(0x5241e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5241e4:{NFSU2_TR(0x5241e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5073ef13ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5241e9:{NFSU2_TR(0x5241e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5241ea:{NFSU2_TR(0x5241ea);
__builtin_memmove((R+12),gp(0x83aa58),1);
}
B5241f0:{NFSU2_TR(0x5241f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5241f1:{NFSU2_TR(0x5241f1);
__builtin_memmove((R+24),(R+4),4);
}
B5241f3:{NFSU2_TR(0x5241f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5241fe;}}
}
B5241f5:L5241f5:{c.instructions+=2;NFSU2_TR(0x5241f5);
w4(R+0,u32(s32(s8(m1(0x8381ab)))));
}
B5241fc:{NFSU2_TR(0x5241fc);
{goto L52420c;}
}
B5241fe:L5241fe:{c.instructions+=2;NFSU2_TR(0x5241fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd9feec59ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B524203:{NFSU2_TR(0x524203);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52421d;}}
}
B524205:L524205:{c.instructions+=1;NFSU2_TR(0x524205);
w4(R+0,u32(s32(s8(m1(0x8381c6)))));
}
B52420c:L52420c:{c.instructions+=2;NFSU2_TR(0x52420c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52420f:{NFSU2_TR(0x52420f);
if(r1(R+518)){{goto L52421d;}}
}
B524211:L524211:{c.instructions+=3;NFSU2_TR(0x524211);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B524217:{NFSU2_TR(0x524217);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524218:{NFSU2_TR(0x524218);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52421dull));
TAIL_STATIC(0x458520u,458);
}
B52421d:L52421d:{c.instructions+=6;NFSU2_TR(0x52421d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52421f:{NFSU2_TR(0x52421f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B524221:{NFSU2_TR(0x524221);
__builtin_memmove((R+0),(R+518),1);
}
B524224:{NFSU2_TR(0x524224);
__builtin_memmove((R+4),(R+24),4);
}
B524226:{NFSU2_TR(0x524226);
__builtin_memmove(gp(0x83aa58),(R+0),4);
}
B52422b:{NFSU2_TR(0x52422b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524230ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x524120u);}goto L524120;}
}
B524230:L524230:{c.instructions+=2;NFSU2_TR(0x524230);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B524236:{NFSU2_TR(0x524236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52423bull));
TAIL_STATIC(0x479220u,479);
}
B52423b:L52423b:{c.instructions+=3;NFSU2_TR(0x52423b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52423c:{NFSU2_TR(0x52423c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52423d:{NFSU2_TR(0x52423d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B524240:L524240:{c.instructions+=5;NFSU2_TR(0x524240);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524244:{NFSU2_TR(0x524244);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524245:{NFSU2_TR(0x524245);
__builtin_memmove((R+28),(R+4),4);
}
B524247:{NFSU2_TR(0x524247);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xdd60e402ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xdd60e402ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xdd60e402ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B52424e:{NFSU2_TR(0x52424e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5242b6;}}
}
B524250:L524250:{c.instructions+=5;NFSU2_TR(0x524250);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524251:{NFSU2_TR(0x524251);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xacull))));
__builtin_memmove((R+24),(U+0),4);
}
B524257:{NFSU2_TR(0x524257);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B524259:{NFSU2_TR(0x524259);
__builtin_memmove((R+4),(R+24),4);
}
B52425b:{NFSU2_TR(0x52425b);
{goto L524260;}
}
B524260:L524260:{c.instructions+=2;NFSU2_TR(0x524260);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B524263:{NFSU2_TR(0x524263);
if(r1(R+518)){{goto L524286;}}
}
B524265:L524265:{c.instructions+=4;NFSU2_TR(0x524265);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B524266:{NFSU2_TR(0x524266);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B524269:{NFSU2_TR(0x524269);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52426c:{NFSU2_TR(0x52426c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x524260u);}goto L524260;}}
}
B52426e:L52426e:{c.instructions+=7;NFSU2_TR(0x52426e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524270:{NFSU2_TR(0x524270);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524272:{NFSU2_TR(0x524272);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B524276:{NFSU2_TR(0x524276);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524277:{NFSU2_TR(0x524277);
__builtin_memmove((R+4),(R+28),4);
}
B524279:{NFSU2_TR(0x524279);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xea60ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524281:{NFSU2_TR(0x524281);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524286ull));
TAIL_STATIC(0x5111f0u,511);
}
B524286:L524286:{c.instructions+=4;NFSU2_TR(0x524286);
__builtin_memmove((R+4),(R+24),4);
}
B524288:{NFSU2_TR(0x524288);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52428a:{NFSU2_TR(0x52428a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52428b:{NFSU2_TR(0x52428b);
{goto L524290;}
}
B524290:L524290:{c.instructions+=2;NFSU2_TR(0x524290);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x3ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B524293:{NFSU2_TR(0x524293);
if(r1(R+518)){{goto L5242b6;}}
}
B524295:L524295:{c.instructions+=4;NFSU2_TR(0x524295);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B524296:{NFSU2_TR(0x524296);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B524299:{NFSU2_TR(0x524299);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52429c:{NFSU2_TR(0x52429c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x524290u);}goto L524290;}}
}
B52429e:L52429e:{c.instructions+=7;NFSU2_TR(0x52429e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5242a0:{NFSU2_TR(0x5242a0);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5242a2:{NFSU2_TR(0x5242a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5242a6:{NFSU2_TR(0x5242a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5242a7:{NFSU2_TR(0x5242a7);
__builtin_memmove((R+4),(R+28),4);
}
B5242a9:{NFSU2_TR(0x5242a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x27100ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5242b1:{NFSU2_TR(0x5242b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5242b6ull));
TAIL_STATIC(0x5111f0u,511);
}
B5242b6:L5242b6:{c.instructions+=2;NFSU2_TR(0x5242b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5242b7:{NFSU2_TR(0x5242b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5242c0:L5242c0:{c.instructions+=9;NFSU2_TR(0x5242c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5242c1:{NFSU2_TR(0x5242c1);
__builtin_memmove((R+20),(R+16),4);
}
B5242c3:{NFSU2_TR(0x5242c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5242c4:{NFSU2_TR(0x5242c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5242c5:{NFSU2_TR(0x5242c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5242c8:{NFSU2_TR(0x5242c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5242cb:{NFSU2_TR(0x5242cb);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xca207584ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xca207584ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5242d0:{NFSU2_TR(0x5242d0);
__builtin_memmove((R+24),(R+4),4);
}
B5242d2:{NFSU2_TR(0x5242d2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L524329;}}
}
B5242d4:L5242d4:{c.instructions+=2;NFSU2_TR(0x5242d4);
w1(R+512,u8((r4(R+0))<(u32(0xca207583ull))));
}
B5242d9:{NFSU2_TR(0x5242d9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5242e2;}}
}
B5242db:L5242db:{c.instructions+=2;NFSU2_TR(0x5242db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1bcb7ab0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5242e0:{NFSU2_TR(0x5242e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52433b;}}
}
B5242e2:L5242e2:{c.instructions+=3;NFSU2_TR(0x5242e2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5242e4:{NFSU2_TR(0x5242e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((R+4),(U+0),4);
}
B5242ea:{NFSU2_TR(0x5242ea);
__builtin_memmove((R+12),(R+12),4);
}
B5242f0:L5242f0:{c.instructions+=2;NFSU2_TR(0x5242f0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5242f3:{NFSU2_TR(0x5242f3);
if(r1(R+518)){{goto L52433b;}}
}
B5242f5:L5242f5:{c.instructions+=4;NFSU2_TR(0x5242f5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5242f6:{NFSU2_TR(0x5242f6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B5242f9:{NFSU2_TR(0x5242f9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5242fc:{NFSU2_TR(0x5242fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5242f0u);}goto L5242f0;}}
}
B5242fe:L5242fe:{c.instructions+=4;NFSU2_TR(0x5242fe);
{u32 ea_=u32(u32(7967668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B524304:{NFSU2_TR(0x524304);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52430a:{NFSU2_TR(0x52430a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B524310:{NFSU2_TR(0x524310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524315ull));
TAIL_STATIC(0x75bed4u,75b);
}
B524315:L524315:{c.instructions+=7;NFSU2_TR(0x524315);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524317:{NFSU2_TR(0x524317);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52431a:{NFSU2_TR(0x52431a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52431c:{NFSU2_TR(0x52431c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52431f:{NFSU2_TR(0x52431f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524320:{NFSU2_TR(0x524320);
__builtin_memmove((R+4),(R+24),4);
}
B524322:{NFSU2_TR(0x524322);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524327ull));
TAIL_STATIC(0x5111f0u,511);
}
B524327:L524327:{c.instructions+=1;NFSU2_TR(0x524327);
{goto L52433b;}
}
B524329:L524329:{c.instructions+=2;NFSU2_TR(0x524329);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xdd60e402ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52432e:{NFSU2_TR(0x52432e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52433b;}}
}
B524330:L524330:{c.instructions+=2;NFSU2_TR(0x524330);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524337:{NFSU2_TR(0x524337);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52433b:L52433b:{c.instructions+=3;NFSU2_TR(0x52433b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52433e:{NFSU2_TR(0x52433e);
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
B524340:{NFSU2_TR(0x524340);
if(r1(R+518)){{goto L5243ca;}}
}
B524346:L524346:{c.instructions+=3;NFSU2_TR(0x524346);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B524349:{NFSU2_TR(0x524349);
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
B52434b:{NFSU2_TR(0x52434b);
if(r1(R+518)){{goto L5243ca;}}
}
B52434d:L52434d:{c.instructions+=3;NFSU2_TR(0x52434d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B524350:{NFSU2_TR(0x524350);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B524352:{NFSU2_TR(0x524352);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L524383;}}
}
B524354:L524354:{c.instructions+=2;NFSU2_TR(0x524354);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B524358:{NFSU2_TR(0x524358);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L524383;}}
}
B52435a:L52435a:{c.instructions+=4;NFSU2_TR(0x52435a);
{u32 ea_=u32(u32(7967668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B524360:{NFSU2_TR(0x524360);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B524366:{NFSU2_TR(0x524366);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52436c:{NFSU2_TR(0x52436c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524371ull));
TAIL_STATIC(0x75bed4u,75b);
}
B524371:L524371:{c.instructions+=7;NFSU2_TR(0x524371);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524373:{NFSU2_TR(0x524373);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524375:{NFSU2_TR(0x524375);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B524378:{NFSU2_TR(0x524378);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524379:{NFSU2_TR(0x524379);
__builtin_memmove((R+4),(R+24),4);
}
B52437b:{NFSU2_TR(0x52437b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52437e:{NFSU2_TR(0x52437e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524383ull));
TAIL_STATIC(0x5111f0u,511);
}
B524383:L524383:{c.instructions+=7;NFSU2_TR(0x524383);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B524386:{NFSU2_TR(0x524386);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B524389:{NFSU2_TR(0x524389);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B52438f:{NFSU2_TR(0x52438f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x862118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B524395:{NFSU2_TR(0x524395);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B524398:{NFSU2_TR(0x524398);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B52439b:{NFSU2_TR(0x52439b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5243ca;}}
}
B52439d:L52439d:{c.instructions+=2;NFSU2_TR(0x52439d);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x5ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52439f:{NFSU2_TR(0x52439f);
if(r1(R+518)){{goto L5243ca;}}
}
B5243a1:L5243a1:{c.instructions+=4;NFSU2_TR(0x5243a1);
{u32 ea_=u32(u32(7967668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5243a7:{NFSU2_TR(0x5243a7);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5243ad:{NFSU2_TR(0x5243ad);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5243b3:{NFSU2_TR(0x5243b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5243b8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5243b8:L5243b8:{c.instructions+=7;NFSU2_TR(0x5243b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5243ba:{NFSU2_TR(0x5243ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5243bd:{NFSU2_TR(0x5243bd);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5243bf:{NFSU2_TR(0x5243bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5243c2:{NFSU2_TR(0x5243c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5243c3:{NFSU2_TR(0x5243c3);
__builtin_memmove((R+4),(R+24),4);
}
B5243c5:{NFSU2_TR(0x5243c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5243caull));
TAIL_STATIC(0x5111f0u,511);
}
B5243ca:L5243ca:{c.instructions+=4;NFSU2_TR(0x5243ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5243cb:{NFSU2_TR(0x5243cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5243cc:{NFSU2_TR(0x5243cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5243cd:{NFSU2_TR(0x5243cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5243d0:L5243d0:{c.instructions+=11;NFSU2_TR(0x5243d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5243d1:{NFSU2_TR(0x5243d1);
__builtin_memmove((R+20),(R+16),4);
}
B5243d3:{NFSU2_TR(0x5243d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x160ull))));
}
B5243d9:{NFSU2_TR(0x5243d9);
__builtin_memmove((R+0),gp(0x850078),4);
}
B5243de:{NFSU2_TR(0x5243de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5243df:{NFSU2_TR(0x5243df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5243e0:{NFSU2_TR(0x5243e0);
w4(R+12,u32(0x1ull));
}
B5243e5:{NFSU2_TR(0x5243e5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5243e7:{NFSU2_TR(0x5243e7);
__builtin_memmove((R+28),(R+4),4);
}
B5243e9:{NFSU2_TR(0x5243e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5243ec:{NFSU2_TR(0x5243ec);
if(r1(R+518)){{goto L5243f8;}}
}
B5243ee:L5243ee:{c.instructions+=6;NFSU2_TR(0x5243ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5243ef:{NFSU2_TR(0x5243ef);
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
B5243f1:{NFSU2_TR(0x5243f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5243f2:{NFSU2_TR(0x5243f2);
__builtin_memmove((R+16),(R+20),4);
}
B5243f4:{NFSU2_TR(0x5243f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5243f5:{NFSU2_TR(0x5243f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5243f8:L5243f8:{c.instructions+=4;NFSU2_TR(0x5243f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5243f9:{NFSU2_TR(0x5243f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5243fc:{NFSU2_TR(0x5243fc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5243ff:{NFSU2_TR(0x5243ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L524407;}}
}
B524401:L524401:{c.instructions+=1;NFSU2_TR(0x524401);
__builtin_memmove(gp(0x8641f8),(R+12),1);
}
B524407:L524407:{c.instructions+=3;NFSU2_TR(0x524407);
__builtin_memmove((R+0),gp(0x863444),4);
}
B52440c:{NFSU2_TR(0x52440c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52440e:{NFSU2_TR(0x52440e);
if(r1(R+518)){{goto L524436;}}
}
B524410:L524410:{c.instructions+=3;NFSU2_TR(0x524410);
__builtin_memmove((R+0),gp(0x86344c),4);
}
B524415:{NFSU2_TR(0x524415);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B524417:{NFSU2_TR(0x524417);
if(r1(R+518)){{goto L524436;}}
}
B524419:L524419:{c.instructions+=6;NFSU2_TR(0x524419);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B52441c:{NFSU2_TR(0x52441c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52441f:{NFSU2_TR(0x52441f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B524421:{NFSU2_TR(0x524421);
__builtin_memmove(gp(0x8641f8),(R+518),1);
}
B524428:{NFSU2_TR(0x524428);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fc8d0d0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52442e:{NFSU2_TR(0x52442e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L524436;}}
}
B524430:L524430:{c.instructions+=2;NFSU2_TR(0x524430);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B524432:{NFSU2_TR(0x524432);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L524436;}}
}
B524434:L524434:{c.instructions+=1;NFSU2_TR(0x524434);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B524436:L524436:{c.instructions+=3;NFSU2_TR(0x524436);
__builtin_memmove((R+0),gp(0x8641f8),1);
}
B52443b:{NFSU2_TR(0x52443b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52443d:{NFSU2_TR(0x52443d);
if(r1(R+518)){{goto L524457;}}
}
B52443f:L52443f:{c.instructions+=2;NFSU2_TR(0x52443f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B524441:{NFSU2_TR(0x524441);
if(r1(R+518)){{goto L52444d;}}
}
B524443:L524443:{c.instructions+=2;NFSU2_TR(0x524443);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B524446:{NFSU2_TR(0x524446);
if(r1(R+518)){{goto L52444d;}}
}
B524448:L524448:{c.instructions+=2;NFSU2_TR(0x524448);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52444b:{NFSU2_TR(0x52444b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L524457;}}
}
B52444d:L52444d:{c.instructions+=2;NFSU2_TR(0x52444d);
w4(R+24,u32(0x11ull));
}
B524452:{NFSU2_TR(0x524452);
{goto L5244e0;}
}
B524457:L524457:{c.instructions+=2;NFSU2_TR(0x524457);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52445a:{NFSU2_TR(0x52445a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5244d7;}}
}
B52445c:L52445c:{c.instructions+=3;NFSU2_TR(0x52445c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52445f:{NFSU2_TR(0x52445f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B524461:{NFSU2_TR(0x524461);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L524579;}}
}
B524467:L524467:{c.instructions+=7;NFSU2_TR(0x524467);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52446a:{NFSU2_TR(0x52446a);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B52446f:{NFSU2_TR(0x52446f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B524471:{NFSU2_TR(0x524471);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524478:{NFSU2_TR(0x524478);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52447f:{NFSU2_TR(0x52447f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524486:{NFSU2_TR(0x524486);
if(r1(R+518)){{goto L5244a3;}}
}
B524488:L524488:{c.instructions+=3;NFSU2_TR(0x524488);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B52448e:{NFSU2_TR(0x52448e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B524490:{NFSU2_TR(0x524490);
if(r1(R+518)){{goto L5244a3;}}
}
B524492:L524492:{c.instructions+=3;NFSU2_TR(0x524492);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524495:{NFSU2_TR(0x524495);
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
B524497:{NFSU2_TR(0x524497);
if(r1(R+518)){{goto L5244a3;}}
}
B524499:L524499:{c.instructions+=3;NFSU2_TR(0x524499);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52449a:{NFSU2_TR(0x52449a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52449d:{NFSU2_TR(0x52449d);
u8 U[4];
__builtin_memmove((U+0),gp(0x79ad00),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5244a3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5244a3:L5244a3:{c.instructions+=4;NFSU2_TR(0x5244a3);
{u32 ea_=u32(u32(7967668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5244a9:{NFSU2_TR(0x5244a9);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5244af:{NFSU2_TR(0x5244af);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5244b5:{NFSU2_TR(0x5244b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5244baull));
TAIL_STATIC(0x75bed4u,75b);
}
B5244ba:L5244ba:{c.instructions+=7;NFSU2_TR(0x5244ba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5244bc:{NFSU2_TR(0x5244bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5244bf:{NFSU2_TR(0x5244bf);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5244c1:{NFSU2_TR(0x5244c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5244c4:{NFSU2_TR(0x5244c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5244c5:{NFSU2_TR(0x5244c5);
__builtin_memmove((R+4),(R+28),4);
}
B5244c7:{NFSU2_TR(0x5244c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5244ccull));
TAIL_STATIC(0x5111f0u,511);
}
B5244cc:L5244cc:{c.instructions+=7;NFSU2_TR(0x5244cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5244cd:{NFSU2_TR(0x5244cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5244ce:{NFSU2_TR(0x5244ce);
__builtin_memmove((R+0),(R+12),1);
}
B5244d0:{NFSU2_TR(0x5244d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5244d1:{NFSU2_TR(0x5244d1);
__builtin_memmove((R+16),(R+20),4);
}
B5244d3:{NFSU2_TR(0x5244d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5244d4:{NFSU2_TR(0x5244d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5244d7:L5244d7:{c.instructions+=2;NFSU2_TR(0x5244d7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5244da:{NFSU2_TR(0x5244da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L524571;}}
}
B5244e0:L5244e0:{c.instructions+=3;NFSU2_TR(0x5244e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5244e3:{NFSU2_TR(0x5244e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5244e5:{NFSU2_TR(0x5244e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L524579;}}
}
B5244eb:L5244eb:{c.instructions+=7;NFSU2_TR(0x5244eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5244ee:{NFSU2_TR(0x5244ee);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B5244f3:{NFSU2_TR(0x5244f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5244f5:{NFSU2_TR(0x5244f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5244fc:{NFSU2_TR(0x5244fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x100000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524503:{NFSU2_TR(0x524503);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52450a:{NFSU2_TR(0x52450a);
if(r1(R+518)){{goto L524527;}}
}
B52450c:L52450c:{c.instructions+=3;NFSU2_TR(0x52450c);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524512:{NFSU2_TR(0x524512);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B524514:{NFSU2_TR(0x524514);
if(r1(R+518)){{goto L524527;}}
}
B524516:L524516:{c.instructions+=3;NFSU2_TR(0x524516);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524519:{NFSU2_TR(0x524519);
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
B52451b:{NFSU2_TR(0x52451b);
if(r1(R+518)){{goto L524527;}}
}
B52451d:L52451d:{c.instructions+=3;NFSU2_TR(0x52451d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52451e:{NFSU2_TR(0x52451e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524521:{NFSU2_TR(0x524521);
u8 U[4];
__builtin_memmove((U+0),gp(0x79ad00),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524527ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B524527:L524527:{c.instructions+=4;NFSU2_TR(0x524527);
{u32 ea_=u32(u32(7967668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52452d:{NFSU2_TR(0x52452d);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B524533:{NFSU2_TR(0x524533);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B524539:{NFSU2_TR(0x524539);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52453eull));
TAIL_STATIC(0x75bed4u,75b);
}
B52453e:L52453e:{c.instructions+=7;NFSU2_TR(0x52453e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524540:{NFSU2_TR(0x524540);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524542:{NFSU2_TR(0x524542);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524545:{NFSU2_TR(0x524545);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524546:{NFSU2_TR(0x524546);
__builtin_memmove((R+4),(R+28),4);
}
B524548:{NFSU2_TR(0x524548);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52454b:{NFSU2_TR(0x52454b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524550ull));
TAIL_STATIC(0x5111f0u,511);
}
B524550:L524550:{c.instructions+=7;NFSU2_TR(0x524550);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524552:{NFSU2_TR(0x524552);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524554:{NFSU2_TR(0x524554);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B524557:{NFSU2_TR(0x524557);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524558:{NFSU2_TR(0x524558);
__builtin_memmove((R+4),(R+28),4);
}
B52455a:{NFSU2_TR(0x52455a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1d4c0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524561:{NFSU2_TR(0x524561);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524566ull));
TAIL_STATIC(0x5111f0u,511);
}
B524566:L524566:{c.instructions+=7;NFSU2_TR(0x524566);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B524567:{NFSU2_TR(0x524567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B524568:{NFSU2_TR(0x524568);
__builtin_memmove((R+0),(R+12),1);
}
B52456a:{NFSU2_TR(0x52456a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52456b:{NFSU2_TR(0x52456b);
__builtin_memmove((R+16),(R+20),4);
}
B52456d:{NFSU2_TR(0x52456d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52456e:{NFSU2_TR(0x52456e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B524571:L524571:{c.instructions+=2;NFSU2_TR(0x524571);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B524574:{NFSU2_TR(0x524574);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L524579;}}
}
B524576:L524576:{c.instructions+=1;NFSU2_TR(0x524576);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B524579:L524579:{c.instructions+=6;NFSU2_TR(0x524579);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52457c:{NFSU2_TR(0x52457c);
u8 U[12];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B524583:{NFSU2_TR(0x524583);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B524585:{NFSU2_TR(0x524585);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B524587:{NFSU2_TR(0x524587);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52458b:{NFSU2_TR(0x52458b);
if(r1(R+518)){{goto L5245be;}}
}
B52458d:L52458d:{c.instructions+=2;NFSU2_TR(0x52458d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B524592:{NFSU2_TR(0x524592);
if(r1(R+518)){{goto L5245be;}}
}
B524594:L524594:{c.instructions+=4;NFSU2_TR(0x524594);
{u32 ea_=u32(u32(7967676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52459a:{NFSU2_TR(0x52459a);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5245a0:{NFSU2_TR(0x5245a0);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5245a6:{NFSU2_TR(0x5245a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5245abull));
TAIL_STATIC(0x75bed4u,75b);
}
B5245ab:L5245ab:{c.instructions+=5;NFSU2_TR(0x5245ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5245ae:{NFSU2_TR(0x5245ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5245b4:{NFSU2_TR(0x5245b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+0))));
}
B5245b6:{NFSU2_TR(0x5245b6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5245b8:{NFSU2_TR(0x5245b8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L524fb6;}}
}
B5245be:L5245be:{c.instructions+=3;NFSU2_TR(0x5245be);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x1bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5245c1:{NFSU2_TR(0x5245c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5245c4:{NFSU2_TR(0x5245c4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L524fab;}}
}
B5245ca:L5245ca:{c.instructions+=1;NFSU2_TR(0x5245ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x524fc4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5245d1:L5245d1:{c.instructions+=7;NFSU2_TR(0x5245d1);
w4(R+0,u32(0x20ull));
}
B5245d6:{NFSU2_TR(0x5245d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5245dc:{NFSU2_TR(0x5245dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5245e2:{NFSU2_TR(0x5245e2);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B5245e7:{NFSU2_TR(0x5245e7);
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
B5245e9:{NFSU2_TR(0x5245e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5245f3:{NFSU2_TR(0x5245f3);
if(r1(R+518)){{goto L524fab;}}
}
B5245f9:L5245f9:{c.instructions+=3;NFSU2_TR(0x5245f9);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B5245ff:{NFSU2_TR(0x5245ff);
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
B524601:{NFSU2_TR(0x524601);
if(r1(R+518)){{goto L524fab;}}
}
B524607:L524607:{c.instructions+=3;NFSU2_TR(0x524607);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52460a:{NFSU2_TR(0x52460a);
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
B52460c:{NFSU2_TR(0x52460c);
if(r1(R+518)){{goto L524fab;}}
}
B524612:L524612:{c.instructions+=2;NFSU2_TR(0x524612);
__builtin_memmove((R+4),(R+24),4);
}
B524614:{NFSU2_TR(0x524614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524619ull));
TAIL_STATIC(0x45b490u,45b);
}
B524619:L524619:{c.instructions+=3;NFSU2_TR(0x524619);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52461f:{NFSU2_TR(0x52461f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524625:{NFSU2_TR(0x524625);
{goto L524fa8;}
}
B52462a:L52462a:{c.instructions+=2;NFSU2_TR(0x52462a);
__builtin_memmove((R+4),(R+28),4);
}
B52462c:{NFSU2_TR(0x52462c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524631ull));
TAIL_STATIC(0x401820u,401);
}
B524631:L524631:{c.instructions+=3;NFSU2_TR(0x524631);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B524633:{NFSU2_TR(0x524633);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524638:{NFSU2_TR(0x524638);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L524694;}}
}
B52463a:L52463a:{c.instructions+=5;NFSU2_TR(0x52463a);
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
B52463c:{NFSU2_TR(0x52463c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea0ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524646:{NFSU2_TR(0x524646);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea4ull))));
w4(U+4,u32(0x400000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524650:{NFSU2_TR(0x524650);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea8ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52465a:{NFSU2_TR(0x52465a);
if(r1(R+518)){{goto L524fab;}}
}
B524660:L524660:{c.instructions+=3;NFSU2_TR(0x524660);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524666:{NFSU2_TR(0x524666);
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
B524668:{NFSU2_TR(0x524668);
if(r1(R+518)){{goto L524fab;}}
}
B52466e:L52466e:{c.instructions+=3;NFSU2_TR(0x52466e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524671:{NFSU2_TR(0x524671);
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
B524673:{NFSU2_TR(0x524673);
if(r1(R+518)){{goto L524fab;}}
}
B524679:L524679:{c.instructions+=2;NFSU2_TR(0x524679);
__builtin_memmove((R+4),(R+24),4);
}
B52467b:{NFSU2_TR(0x52467b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524680ull));
TAIL_STATIC(0x45b490u,45b);
}
B524680:L524680:{c.instructions+=4;NFSU2_TR(0x524680);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B524686:{NFSU2_TR(0x524686);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524687:{NFSU2_TR(0x524687);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52468d:{NFSU2_TR(0x52468d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52468full));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B52468f:L52468f:{c.instructions+=1;NFSU2_TR(0x52468f);
{goto L524fab;}
}
B524694:L524694:{c.instructions+=5;NFSU2_TR(0x524694);
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
B524696:{NFSU2_TR(0x524696);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52469d:{NFSU2_TR(0x52469d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5246a0:{NFSU2_TR(0x5246a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5246a7:{NFSU2_TR(0x5246a7);
if(r1(R+518)){{goto L524fab;}}
}
B5246ad:L5246ad:{c.instructions+=3;NFSU2_TR(0x5246ad);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B5246b3:{NFSU2_TR(0x5246b3);
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
B5246b5:{NFSU2_TR(0x5246b5);
if(r1(R+518)){{goto L524fab;}}
}
B5246bb:L5246bb:{c.instructions+=3;NFSU2_TR(0x5246bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5246be:{NFSU2_TR(0x5246be);
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
B5246c0:{NFSU2_TR(0x5246c0);
if(r1(R+518)){{goto L524fab;}}
}
B5246c6:L5246c6:{c.instructions+=2;NFSU2_TR(0x5246c6);
__builtin_memmove((R+4),(R+24),4);
}
B5246c8:{NFSU2_TR(0x5246c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5246cdull));
TAIL_STATIC(0x45b490u,45b);
}
B5246cd:L5246cd:{c.instructions+=3;NFSU2_TR(0x5246cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5246d0:{NFSU2_TR(0x5246d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+4),(U+0),4);
}
B5246d3:{NFSU2_TR(0x5246d3);
{goto L524fa8;}
}
B5246d8:L5246d8:{c.instructions+=2;NFSU2_TR(0x5246d8);
__builtin_memmove((R+4),(R+28),4);
}
B5246da:{NFSU2_TR(0x5246da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5246dfull));
TAIL_STATIC(0x401820u,401);
}
B5246df:L5246df:{c.instructions+=3;NFSU2_TR(0x5246df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5246e1:{NFSU2_TR(0x5246e1);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B5246e6:{NFSU2_TR(0x5246e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L524742;}}
}
B5246e8:L5246e8:{c.instructions+=5;NFSU2_TR(0x5246e8);
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
B5246ea:{NFSU2_TR(0x5246ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec4ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5246f4:{NFSU2_TR(0x5246f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec8ull))));
w4(U+4,u32(0x800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5246fe:{NFSU2_TR(0x5246fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeccull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524708:{NFSU2_TR(0x524708);
if(r1(R+518)){{goto L524fab;}}
}
B52470e:L52470e:{c.instructions+=3;NFSU2_TR(0x52470e);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524714:{NFSU2_TR(0x524714);
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
B524716:{NFSU2_TR(0x524716);
if(r1(R+518)){{goto L524fab;}}
}
B52471c:L52471c:{c.instructions+=3;NFSU2_TR(0x52471c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52471f:{NFSU2_TR(0x52471f);
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
B524721:{NFSU2_TR(0x524721);
if(r1(R+518)){{goto L524fab;}}
}
B524727:L524727:{c.instructions+=2;NFSU2_TR(0x524727);
__builtin_memmove((R+4),(R+24),4);
}
B524729:{NFSU2_TR(0x524729);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52472eull));
TAIL_STATIC(0x45b490u,45b);
}
B52472e:L52472e:{c.instructions+=4;NFSU2_TR(0x52472e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B524734:{NFSU2_TR(0x524734);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524735:{NFSU2_TR(0x524735);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52473b:{NFSU2_TR(0x52473b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52473dull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B52473d:L52473d:{c.instructions+=1;NFSU2_TR(0x52473d);
{goto L524fab;}
}
B524742:L524742:{c.instructions+=5;NFSU2_TR(0x524742);
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
B524744:{NFSU2_TR(0x524744);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52474b:{NFSU2_TR(0x52474b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52474e:{NFSU2_TR(0x52474e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524755:{NFSU2_TR(0x524755);
if(r1(R+518)){{goto L524fab;}}
}
B52475b:L52475b:{c.instructions+=3;NFSU2_TR(0x52475b);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524761:{NFSU2_TR(0x524761);
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
B524763:{NFSU2_TR(0x524763);
if(r1(R+518)){{goto L524fab;}}
}
B524769:L524769:{c.instructions+=3;NFSU2_TR(0x524769);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52476c:{NFSU2_TR(0x52476c);
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
B52476e:{NFSU2_TR(0x52476e);
if(r1(R+518)){{goto L524fab;}}
}
B524774:L524774:{c.instructions+=2;NFSU2_TR(0x524774);
__builtin_memmove((R+4),(R+24),4);
}
B524776:{NFSU2_TR(0x524776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52477bull));
TAIL_STATIC(0x45b490u,45b);
}
B52477b:L52477b:{c.instructions+=3;NFSU2_TR(0x52477b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52477e:{NFSU2_TR(0x52477e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524781:{NFSU2_TR(0x524781);
{goto L524fa8;}
}
B524786:L524786:{c.instructions+=6;NFSU2_TR(0x524786);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B52478b:{NFSU2_TR(0x52478b);
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
B52478d:{NFSU2_TR(0x52478d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff24ull))));
w4(U+4,u32(0x79ad04ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524797:{NFSU2_TR(0x524797);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
w4(U+4,u32(0x100ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5247a1:{NFSU2_TR(0x5247a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff2cull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5247ab:{NFSU2_TR(0x5247ab);
if(r1(R+518)){{goto L524fab;}}
}
B5247b1:L5247b1:{c.instructions+=3;NFSU2_TR(0x5247b1);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B5247b7:{NFSU2_TR(0x5247b7);
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
B5247b9:{NFSU2_TR(0x5247b9);
if(r1(R+518)){{goto L524fab;}}
}
B5247bf:L5247bf:{c.instructions+=3;NFSU2_TR(0x5247bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5247c2:{NFSU2_TR(0x5247c2);
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
B5247c4:{NFSU2_TR(0x5247c4);
if(r1(R+518)){{goto L524fab;}}
}
B5247ca:L5247ca:{c.instructions+=2;NFSU2_TR(0x5247ca);
__builtin_memmove((R+4),(R+24),4);
}
B5247cc:{NFSU2_TR(0x5247cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5247d1ull));
TAIL_STATIC(0x45b490u,45b);
}
B5247d1:L5247d1:{c.instructions+=4;NFSU2_TR(0x5247d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5247d7:{NFSU2_TR(0x5247d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5247d8:{NFSU2_TR(0x5247d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5247de:{NFSU2_TR(0x5247de);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5247e0ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5247e0:L5247e0:{c.instructions+=1;NFSU2_TR(0x5247e0);
{goto L524fab;}
}
B5247e5:L5247e5:{c.instructions+=6;NFSU2_TR(0x5247e5);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B5247ea:{NFSU2_TR(0x5247ea);
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
B5247ec:{NFSU2_TR(0x5247ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
w4(U+4,u32(0x79ad04ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5247f3:{NFSU2_TR(0x5247f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5247f6:{NFSU2_TR(0x5247f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5247fd:{NFSU2_TR(0x5247fd);
if(r1(R+518)){{goto L524fab;}}
}
B524803:L524803:{c.instructions+=3;NFSU2_TR(0x524803);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524809:{NFSU2_TR(0x524809);
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
B52480b:{NFSU2_TR(0x52480b);
if(r1(R+518)){{goto L524fab;}}
}
B524811:L524811:{c.instructions+=3;NFSU2_TR(0x524811);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524814:{NFSU2_TR(0x524814);
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
B524816:{NFSU2_TR(0x524816);
if(r1(R+518)){{goto L524fab;}}
}
B52481c:L52481c:{c.instructions+=2;NFSU2_TR(0x52481c);
__builtin_memmove((R+4),(R+24),4);
}
B52481e:{NFSU2_TR(0x52481e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524823ull));
TAIL_STATIC(0x45b490u,45b);
}
B524823:L524823:{c.instructions+=3;NFSU2_TR(0x524823);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524826:{NFSU2_TR(0x524826);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+4),(U+0),4);
}
B524829:{NFSU2_TR(0x524829);
{goto L524fa8;}
}
B52482e:L52482e:{c.instructions+=6;NFSU2_TR(0x52482e);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524833:{NFSU2_TR(0x524833);
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
B524835:{NFSU2_TR(0x524835);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffedcull))));
w4(U+4,u32(0x79ad04ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52483f:{NFSU2_TR(0x52483f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524849:{NFSU2_TR(0x524849);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee4ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524853:{NFSU2_TR(0x524853);
if(r1(R+518)){{goto L524fab;}}
}
B524859:L524859:{c.instructions+=3;NFSU2_TR(0x524859);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B52485f:{NFSU2_TR(0x52485f);
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
B524861:{NFSU2_TR(0x524861);
if(r1(R+518)){{goto L524fab;}}
}
B524867:L524867:{c.instructions+=3;NFSU2_TR(0x524867);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52486a:{NFSU2_TR(0x52486a);
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
B52486c:{NFSU2_TR(0x52486c);
if(r1(R+518)){{goto L524fab;}}
}
B524872:L524872:{c.instructions+=2;NFSU2_TR(0x524872);
__builtin_memmove((R+4),(R+24),4);
}
B524874:{NFSU2_TR(0x524874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524879ull));
TAIL_STATIC(0x45b490u,45b);
}
B524879:L524879:{c.instructions+=4;NFSU2_TR(0x524879);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffedcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52487f:{NFSU2_TR(0x52487f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524880:{NFSU2_TR(0x524880);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffedcull))));
__builtin_memmove((R+4),(U+0),4);
}
B524886:{NFSU2_TR(0x524886);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524888ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B524888:L524888:{c.instructions+=1;NFSU2_TR(0x524888);
{goto L524fab;}
}
B52488d:L52488d:{c.instructions+=6;NFSU2_TR(0x52488d);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524892:{NFSU2_TR(0x524892);
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
B524894:{NFSU2_TR(0x524894);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
w4(U+4,u32(0x79ad04ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52489b:{NFSU2_TR(0x52489b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5248a2:{NFSU2_TR(0x5248a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5248a9:{NFSU2_TR(0x5248a9);
if(r1(R+518)){{goto L524fab;}}
}
B5248af:L5248af:{c.instructions+=3;NFSU2_TR(0x5248af);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B5248b5:{NFSU2_TR(0x5248b5);
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
B5248b7:{NFSU2_TR(0x5248b7);
if(r1(R+518)){{goto L524fab;}}
}
B5248bd:L5248bd:{c.instructions+=3;NFSU2_TR(0x5248bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5248c0:{NFSU2_TR(0x5248c0);
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
B5248c2:{NFSU2_TR(0x5248c2);
if(r1(R+518)){{goto L524fab;}}
}
B5248c8:L5248c8:{c.instructions+=2;NFSU2_TR(0x5248c8);
__builtin_memmove((R+4),(R+24),4);
}
B5248ca:{NFSU2_TR(0x5248ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5248cfull));
TAIL_STATIC(0x45b490u,45b);
}
B5248cf:L5248cf:{c.instructions+=3;NFSU2_TR(0x5248cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5248d2:{NFSU2_TR(0x5248d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5248d5:{NFSU2_TR(0x5248d5);
{goto L524fa8;}
}
B5248da:L5248da:{c.instructions+=6;NFSU2_TR(0x5248da);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B5248df:{NFSU2_TR(0x5248df);
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
B5248e1:{NFSU2_TR(0x5248e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff0cull))));
w4(U+4,u32(0x79ad04ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5248eb:{NFSU2_TR(0x5248eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5248f5:{NFSU2_TR(0x5248f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5248ff:{NFSU2_TR(0x5248ff);
if(r1(R+518)){{goto L524fab;}}
}
B524905:L524905:{c.instructions+=3;NFSU2_TR(0x524905);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B52490b:{NFSU2_TR(0x52490b);
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
B52490d:{NFSU2_TR(0x52490d);
if(r1(R+518)){{goto L524fab;}}
}
B524913:L524913:{c.instructions+=3;NFSU2_TR(0x524913);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524916:{NFSU2_TR(0x524916);
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
B524918:{NFSU2_TR(0x524918);
if(r1(R+518)){{goto L524fab;}}
}
B52491e:L52491e:{c.instructions+=2;NFSU2_TR(0x52491e);
__builtin_memmove((R+4),(R+24),4);
}
B524920:{NFSU2_TR(0x524920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524925ull));
TAIL_STATIC(0x45b490u,45b);
}
B524925:L524925:{c.instructions+=4;NFSU2_TR(0x524925);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff0cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52492b:{NFSU2_TR(0x52492b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52492c:{NFSU2_TR(0x52492c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff0cull))));
__builtin_memmove((R+4),(U+0),4);
}
B524932:{NFSU2_TR(0x524932);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524934ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B524934:L524934:{c.instructions+=1;NFSU2_TR(0x524934);
{goto L524fab;}
}
B524939:L524939:{c.instructions+=7;NFSU2_TR(0x524939);
w4(R+0,u32(0x10ull));
}
B52493e:{NFSU2_TR(0x52493e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B524944:{NFSU2_TR(0x524944);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52494a:{NFSU2_TR(0x52494a);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B52494f:{NFSU2_TR(0x52494f);
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
B524951:{NFSU2_TR(0x524951);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
w4(U+4,u32(0x79ad04ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52495b:{NFSU2_TR(0x52495b);
if(r1(R+518)){{goto L524fab;}}
}
B524961:L524961:{c.instructions+=3;NFSU2_TR(0x524961);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524967:{NFSU2_TR(0x524967);
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
B524969:{NFSU2_TR(0x524969);
if(r1(R+518)){{goto L524fab;}}
}
B52496f:L52496f:{c.instructions+=3;NFSU2_TR(0x52496f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524972:{NFSU2_TR(0x524972);
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
B524974:{NFSU2_TR(0x524974);
if(r1(R+518)){{goto L524fab;}}
}
B52497a:L52497a:{c.instructions+=2;NFSU2_TR(0x52497a);
__builtin_memmove((R+4),(R+24),4);
}
B52497c:{NFSU2_TR(0x52497c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524981ull));
TAIL_STATIC(0x45b490u,45b);
}
B524981:L524981:{c.instructions+=3;NFSU2_TR(0x524981);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524987:{NFSU2_TR(0x524987);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B52498d:{NFSU2_TR(0x52498d);
{goto L524fa8;}
}
B524992:L524992:{c.instructions+=6;NFSU2_TR(0x524992);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524997:{NFSU2_TR(0x524997);
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
B524999:{NFSU2_TR(0x524999);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeacull))));
w4(U+4,u32(0x79ad04ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5249a3:{NFSU2_TR(0x5249a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb0ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5249ad:{NFSU2_TR(0x5249ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb4ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5249b7:{NFSU2_TR(0x5249b7);
if(r1(R+518)){{goto L524fab;}}
}
B5249bd:L5249bd:{c.instructions+=3;NFSU2_TR(0x5249bd);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B5249c3:{NFSU2_TR(0x5249c3);
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
B5249c5:{NFSU2_TR(0x5249c5);
if(r1(R+518)){{goto L524fab;}}
}
B5249cb:L5249cb:{c.instructions+=3;NFSU2_TR(0x5249cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5249ce:{NFSU2_TR(0x5249ce);
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
B5249d0:{NFSU2_TR(0x5249d0);
if(r1(R+518)){{goto L524fab;}}
}
B5249d6:L5249d6:{c.instructions+=2;NFSU2_TR(0x5249d6);
__builtin_memmove((R+4),(R+24),4);
}
B5249d8:{NFSU2_TR(0x5249d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5249ddull));
TAIL_STATIC(0x45b490u,45b);
}
B5249dd:L5249dd:{c.instructions+=4;NFSU2_TR(0x5249dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5249e3:{NFSU2_TR(0x5249e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5249e4:{NFSU2_TR(0x5249e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeacull))));
__builtin_memmove((R+4),(U+0),4);
}
B5249ea:{NFSU2_TR(0x5249ea);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5249ecull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5249ec:L5249ec:{c.instructions+=1;NFSU2_TR(0x5249ec);
{goto L524fab;}
}
B5249f1:L5249f1:{c.instructions+=6;NFSU2_TR(0x5249f1);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B5249f6:{NFSU2_TR(0x5249f6);
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
B5249f8:{NFSU2_TR(0x5249f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
w4(U+4,u32(0x79ad04ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524a02:{NFSU2_TR(0x524a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524a0c:{NFSU2_TR(0x524a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524a16:{NFSU2_TR(0x524a16);
if(r1(R+518)){{goto L524fab;}}
}
B524a1c:L524a1c:{c.instructions+=3;NFSU2_TR(0x524a1c);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524a22:{NFSU2_TR(0x524a22);
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
B524a24:{NFSU2_TR(0x524a24);
if(r1(R+518)){{goto L524fab;}}
}
B524a2a:L524a2a:{c.instructions+=3;NFSU2_TR(0x524a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524a2d:{NFSU2_TR(0x524a2d);
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
B524a2f:{NFSU2_TR(0x524a2f);
if(r1(R+518)){{goto L524fab;}}
}
B524a35:L524a35:{c.instructions+=2;NFSU2_TR(0x524a35);
__builtin_memmove((R+4),(R+24),4);
}
B524a37:{NFSU2_TR(0x524a37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524a3cull));
TAIL_STATIC(0x45b490u,45b);
}
B524a3c:L524a3c:{c.instructions+=3;NFSU2_TR(0x524a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524a42:{NFSU2_TR(0x524a42);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524a48:{NFSU2_TR(0x524a48);
{goto L524fa8;}
}
B524a4d:L524a4d:{c.instructions+=6;NFSU2_TR(0x524a4d);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524a52:{NFSU2_TR(0x524a52);
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
B524a54:{NFSU2_TR(0x524a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x79ad04ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524a5b:{NFSU2_TR(0x524a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524a62:{NFSU2_TR(0x524a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524a69:{NFSU2_TR(0x524a69);
if(r1(R+518)){{goto L524fab;}}
}
B524a6f:L524a6f:{c.instructions+=3;NFSU2_TR(0x524a6f);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524a75:{NFSU2_TR(0x524a75);
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
B524a77:{NFSU2_TR(0x524a77);
if(r1(R+518)){{goto L524fab;}}
}
B524a7d:L524a7d:{c.instructions+=3;NFSU2_TR(0x524a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524a80:{NFSU2_TR(0x524a80);
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
B524a82:{NFSU2_TR(0x524a82);
if(r1(R+518)){{goto L524fab;}}
}
B524a88:L524a88:{c.instructions+=2;NFSU2_TR(0x524a88);
__builtin_memmove((R+4),(R+24),4);
}
B524a8a:{NFSU2_TR(0x524a8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524a8full));
TAIL_STATIC(0x45b490u,45b);
}
B524a8f:L524a8f:{c.instructions+=4;NFSU2_TR(0x524a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B524a92:{NFSU2_TR(0x524a92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524a93:{NFSU2_TR(0x524a93);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524a96:{NFSU2_TR(0x524a96);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524a98ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B524a98:L524a98:{c.instructions+=1;NFSU2_TR(0x524a98);
{goto L524fab;}
}
B524a9d:L524a9d:{c.instructions+=6;NFSU2_TR(0x524a9d);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524aa2:{NFSU2_TR(0x524aa2);
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
B524aa4:{NFSU2_TR(0x524aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff3cull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524aae:{NFSU2_TR(0x524aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524ab8:{NFSU2_TR(0x524ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524ac2:{NFSU2_TR(0x524ac2);
if(r1(R+518)){{goto L524fab;}}
}
B524ac8:L524ac8:{c.instructions+=3;NFSU2_TR(0x524ac8);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524ace:{NFSU2_TR(0x524ace);
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
B524ad0:{NFSU2_TR(0x524ad0);
if(r1(R+518)){{goto L524fab;}}
}
B524ad6:L524ad6:{c.instructions+=3;NFSU2_TR(0x524ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524ad9:{NFSU2_TR(0x524ad9);
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
B524adb:{NFSU2_TR(0x524adb);
if(r1(R+518)){{goto L524fab;}}
}
B524ae1:L524ae1:{c.instructions+=2;NFSU2_TR(0x524ae1);
__builtin_memmove((R+4),(R+24),4);
}
B524ae3:{NFSU2_TR(0x524ae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524ae8ull));
TAIL_STATIC(0x45b490u,45b);
}
B524ae8:L524ae8:{c.instructions+=3;NFSU2_TR(0x524ae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524aee:{NFSU2_TR(0x524aee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B524af4:{NFSU2_TR(0x524af4);
{goto L524fa8;}
}
B524af9:L524af9:{c.instructions+=6;NFSU2_TR(0x524af9);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524afe:{NFSU2_TR(0x524afe);
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
B524b00:{NFSU2_TR(0x524b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524b07:{NFSU2_TR(0x524b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524b0e:{NFSU2_TR(0x524b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524b15:{NFSU2_TR(0x524b15);
if(r1(R+518)){{goto L524fab;}}
}
B524b1b:L524b1b:{c.instructions+=3;NFSU2_TR(0x524b1b);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524b21:{NFSU2_TR(0x524b21);
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
B524b23:{NFSU2_TR(0x524b23);
if(r1(R+518)){{goto L524fab;}}
}
B524b29:L524b29:{c.instructions+=3;NFSU2_TR(0x524b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524b2c:{NFSU2_TR(0x524b2c);
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
B524b2e:{NFSU2_TR(0x524b2e);
if(r1(R+518)){{goto L524fab;}}
}
B524b34:L524b34:{c.instructions+=2;NFSU2_TR(0x524b34);
__builtin_memmove((R+4),(R+24),4);
}
B524b36:{NFSU2_TR(0x524b36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524b3bull));
TAIL_STATIC(0x45b490u,45b);
}
B524b3b:L524b3b:{c.instructions+=4;NFSU2_TR(0x524b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B524b3e:{NFSU2_TR(0x524b3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524b3f:{NFSU2_TR(0x524b3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524b42:{NFSU2_TR(0x524b42);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524b44ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B524b44:L524b44:{c.instructions+=1;NFSU2_TR(0x524b44);
{goto L524fab;}
}
B524b49:L524b49:{c.instructions+=6;NFSU2_TR(0x524b49);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524b4e:{NFSU2_TR(0x524b4e);
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
B524b50:{NFSU2_TR(0x524b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524b57:{NFSU2_TR(0x524b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524b5e:{NFSU2_TR(0x524b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524b65:{NFSU2_TR(0x524b65);
if(r1(R+518)){{goto L524fab;}}
}
B524b6b:L524b6b:{c.instructions+=3;NFSU2_TR(0x524b6b);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524b71:{NFSU2_TR(0x524b71);
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
B524b73:{NFSU2_TR(0x524b73);
if(r1(R+518)){{goto L524fab;}}
}
B524b79:L524b79:{c.instructions+=3;NFSU2_TR(0x524b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524b7c:{NFSU2_TR(0x524b7c);
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
B524b7e:{NFSU2_TR(0x524b7e);
if(r1(R+518)){{goto L524fab;}}
}
B524b84:L524b84:{c.instructions+=2;NFSU2_TR(0x524b84);
__builtin_memmove((R+4),(R+24),4);
}
B524b86:{NFSU2_TR(0x524b86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524b8bull));
TAIL_STATIC(0x45b490u,45b);
}
B524b8b:L524b8b:{c.instructions+=3;NFSU2_TR(0x524b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524b8e:{NFSU2_TR(0x524b8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524b91:{NFSU2_TR(0x524b91);
{goto L524fa8;}
}
B524b96:L524b96:{c.instructions+=6;NFSU2_TR(0x524b96);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524b9b:{NFSU2_TR(0x524b9b);
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
B524b9d:{NFSU2_TR(0x524b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524ba4:{NFSU2_TR(0x524ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
w4(U+4,u32(0x100ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524bab:{NFSU2_TR(0x524bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524bb2:{NFSU2_TR(0x524bb2);
if(r1(R+518)){{goto L524fab;}}
}
B524bb8:L524bb8:{c.instructions+=3;NFSU2_TR(0x524bb8);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524bbe:{NFSU2_TR(0x524bbe);
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
B524bc0:{NFSU2_TR(0x524bc0);
if(r1(R+518)){{goto L524fab;}}
}
B524bc6:L524bc6:{c.instructions+=3;NFSU2_TR(0x524bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524bc9:{NFSU2_TR(0x524bc9);
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
B524bcb:{NFSU2_TR(0x524bcb);
if(r1(R+518)){{goto L524fab;}}
}
B524bd1:L524bd1:{c.instructions+=2;NFSU2_TR(0x524bd1);
__builtin_memmove((R+4),(R+24),4);
}
B524bd3:{NFSU2_TR(0x524bd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524bd8ull));
TAIL_STATIC(0x45b490u,45b);
}
B524bd8:L524bd8:{c.instructions+=4;NFSU2_TR(0x524bd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B524bdb:{NFSU2_TR(0x524bdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524bdc:{NFSU2_TR(0x524bdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524bdf:{NFSU2_TR(0x524bdf);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524be1ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B524be1:L524be1:{c.instructions+=1;NFSU2_TR(0x524be1);
{goto L524fab;}
}
B524be6:L524be6:{c.instructions+=6;NFSU2_TR(0x524be6);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524beb:{NFSU2_TR(0x524beb);
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
B524bed:{NFSU2_TR(0x524bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524bf4:{NFSU2_TR(0x524bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
w4(U+4,u32(0x800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524bfb:{NFSU2_TR(0x524bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524c02:{NFSU2_TR(0x524c02);
if(r1(R+518)){{goto L524fab;}}
}
B524c08:L524c08:{c.instructions+=3;NFSU2_TR(0x524c08);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524c0e:{NFSU2_TR(0x524c0e);
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
B524c10:{NFSU2_TR(0x524c10);
if(r1(R+518)){{goto L524fab;}}
}
B524c16:L524c16:{c.instructions+=3;NFSU2_TR(0x524c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524c19:{NFSU2_TR(0x524c19);
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
B524c1b:{NFSU2_TR(0x524c1b);
if(r1(R+518)){{goto L524fab;}}
}
B524c21:L524c21:{c.instructions+=2;NFSU2_TR(0x524c21);
__builtin_memmove((R+4),(R+24),4);
}
B524c23:{NFSU2_TR(0x524c23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524c28ull));
TAIL_STATIC(0x45b490u,45b);
}
B524c28:L524c28:{c.instructions+=3;NFSU2_TR(0x524c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524c2b:{NFSU2_TR(0x524c2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524c2e:{NFSU2_TR(0x524c2e);
{goto L524fa8;}
}
B524c33:L524c33:{c.instructions+=6;NFSU2_TR(0x524c33);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524c38:{NFSU2_TR(0x524c38);
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
B524c3a:{NFSU2_TR(0x524c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524c44:{NFSU2_TR(0x524c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
w4(U+4,u32(0x2000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524c4e:{NFSU2_TR(0x524c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524c55:{NFSU2_TR(0x524c55);
if(r1(R+518)){{goto L524fab;}}
}
B524c5b:L524c5b:{c.instructions+=3;NFSU2_TR(0x524c5b);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524c61:{NFSU2_TR(0x524c61);
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
B524c63:{NFSU2_TR(0x524c63);
if(r1(R+518)){{goto L524fab;}}
}
B524c69:L524c69:{c.instructions+=3;NFSU2_TR(0x524c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524c6c:{NFSU2_TR(0x524c6c);
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
B524c6e:{NFSU2_TR(0x524c6e);
if(r1(R+518)){{goto L524fab;}}
}
B524c74:L524c74:{c.instructions+=2;NFSU2_TR(0x524c74);
__builtin_memmove((R+4),(R+24),4);
}
B524c76:{NFSU2_TR(0x524c76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524c7bull));
TAIL_STATIC(0x45b490u,45b);
}
B524c7b:L524c7b:{c.instructions+=4;NFSU2_TR(0x524c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B524c81:{NFSU2_TR(0x524c81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524c82:{NFSU2_TR(0x524c82);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524c88:{NFSU2_TR(0x524c88);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524c8aull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B524c8a:L524c8a:{c.instructions+=1;NFSU2_TR(0x524c8a);
{goto L524fab;}
}
B524c8f:L524c8f:{c.instructions+=6;NFSU2_TR(0x524c8f);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524c94:{NFSU2_TR(0x524c94);
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
B524c96:{NFSU2_TR(0x524c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524ca0:{NFSU2_TR(0x524ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
w4(U+4,u32(0x4000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524caa:{NFSU2_TR(0x524caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524cb4:{NFSU2_TR(0x524cb4);
if(r1(R+518)){{goto L524fab;}}
}
B524cba:L524cba:{c.instructions+=3;NFSU2_TR(0x524cba);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524cc0:{NFSU2_TR(0x524cc0);
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
B524cc2:{NFSU2_TR(0x524cc2);
if(r1(R+518)){{goto L524fab;}}
}
B524cc8:L524cc8:{c.instructions+=3;NFSU2_TR(0x524cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524ccb:{NFSU2_TR(0x524ccb);
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
B524ccd:{NFSU2_TR(0x524ccd);
if(r1(R+518)){{goto L524fab;}}
}
B524cd3:L524cd3:{c.instructions+=2;NFSU2_TR(0x524cd3);
__builtin_memmove((R+4),(R+24),4);
}
B524cd5:{NFSU2_TR(0x524cd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524cdaull));
TAIL_STATIC(0x45b490u,45b);
}
B524cda:L524cda:{c.instructions+=3;NFSU2_TR(0x524cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524ce0:{NFSU2_TR(0x524ce0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524ce6:{NFSU2_TR(0x524ce6);
{goto L524fa8;}
}
B524ceb:L524ceb:{c.instructions+=6;NFSU2_TR(0x524ceb);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524cf0:{NFSU2_TR(0x524cf0);
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
B524cf2:{NFSU2_TR(0x524cf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524cfc:{NFSU2_TR(0x524cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
w4(U+4,u32(0x8000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524d06:{NFSU2_TR(0x524d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524d10:{NFSU2_TR(0x524d10);
if(r1(R+518)){{goto L524fab;}}
}
B524d16:L524d16:{c.instructions+=3;NFSU2_TR(0x524d16);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524d1c:{NFSU2_TR(0x524d1c);
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
B524d1e:{NFSU2_TR(0x524d1e);
if(r1(R+518)){{goto L524fab;}}
}
B524d24:L524d24:{c.instructions+=3;NFSU2_TR(0x524d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524d27:{NFSU2_TR(0x524d27);
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
B524d29:{NFSU2_TR(0x524d29);
if(r1(R+518)){{goto L524fab;}}
}
B524d2f:L524d2f:{c.instructions+=2;NFSU2_TR(0x524d2f);
__builtin_memmove((R+4),(R+24),4);
}
B524d31:{NFSU2_TR(0x524d31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524d36ull));
TAIL_STATIC(0x45b490u,45b);
}
B524d36:L524d36:{c.instructions+=4;NFSU2_TR(0x524d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B524d3c:{NFSU2_TR(0x524d3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524d3d:{NFSU2_TR(0x524d3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524d43:{NFSU2_TR(0x524d43);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524d45ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B524d45:L524d45:{c.instructions+=1;NFSU2_TR(0x524d45);
{goto L524fab;}
}
B524d4a:L524d4a:{c.instructions+=6;NFSU2_TR(0x524d4a);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524d4f:{NFSU2_TR(0x524d4f);
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
B524d51:{NFSU2_TR(0x524d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524d5b:{NFSU2_TR(0x524d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
w4(U+4,u32(0x10000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524d65:{NFSU2_TR(0x524d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff38ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524d6f:{NFSU2_TR(0x524d6f);
if(r1(R+518)){{goto L524fab;}}
}
B524d75:L524d75:{c.instructions+=3;NFSU2_TR(0x524d75);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524d7b:{NFSU2_TR(0x524d7b);
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
B524d7d:{NFSU2_TR(0x524d7d);
if(r1(R+518)){{goto L524fab;}}
}
B524d83:L524d83:{c.instructions+=3;NFSU2_TR(0x524d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524d86:{NFSU2_TR(0x524d86);
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
B524d88:{NFSU2_TR(0x524d88);
if(r1(R+518)){{goto L524fab;}}
}
B524d8e:L524d8e:{c.instructions+=2;NFSU2_TR(0x524d8e);
__builtin_memmove((R+4),(R+24),4);
}
B524d90:{NFSU2_TR(0x524d90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524d95ull));
TAIL_STATIC(0x45b490u,45b);
}
B524d95:L524d95:{c.instructions+=3;NFSU2_TR(0x524d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524d9b:{NFSU2_TR(0x524d9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524da1:{NFSU2_TR(0x524da1);
{goto L524fa8;}
}
B524da6:L524da6:{c.instructions+=6;NFSU2_TR(0x524da6);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524dab:{NFSU2_TR(0x524dab);
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
B524dad:{NFSU2_TR(0x524dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524db7:{NFSU2_TR(0x524db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
w4(U+4,u32(0x80000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524dc1:{NFSU2_TR(0x524dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524dcb:{NFSU2_TR(0x524dcb);
if(r1(R+518)){{goto L524fab;}}
}
B524dd1:L524dd1:{c.instructions+=3;NFSU2_TR(0x524dd1);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524dd7:{NFSU2_TR(0x524dd7);
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
B524dd9:{NFSU2_TR(0x524dd9);
if(r1(R+518)){{goto L524fab;}}
}
B524ddf:L524ddf:{c.instructions+=3;NFSU2_TR(0x524ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524de2:{NFSU2_TR(0x524de2);
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
B524de4:{NFSU2_TR(0x524de4);
if(r1(R+518)){{goto L524fab;}}
}
B524dea:L524dea:{c.instructions+=2;NFSU2_TR(0x524dea);
__builtin_memmove((R+4),(R+24),4);
}
B524dec:{NFSU2_TR(0x524dec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524df1ull));
TAIL_STATIC(0x45b490u,45b);
}
B524df1:L524df1:{c.instructions+=4;NFSU2_TR(0x524df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B524df7:{NFSU2_TR(0x524df7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524df8:{NFSU2_TR(0x524df8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524dfe:{NFSU2_TR(0x524dfe);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524e00ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B524e00:L524e00:{c.instructions+=1;NFSU2_TR(0x524e00);
{goto L524fab;}
}
B524e05:L524e05:{c.instructions+=6;NFSU2_TR(0x524e05);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524e0a:{NFSU2_TR(0x524e0a);
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
B524e0c:{NFSU2_TR(0x524e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524e16:{NFSU2_TR(0x524e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524e20:{NFSU2_TR(0x524e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524e2a:{NFSU2_TR(0x524e2a);
if(r1(R+518)){{goto L524fab;}}
}
B524e30:L524e30:{c.instructions+=3;NFSU2_TR(0x524e30);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524e36:{NFSU2_TR(0x524e36);
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
B524e38:{NFSU2_TR(0x524e38);
if(r1(R+518)){{goto L524fab;}}
}
B524e3e:L524e3e:{c.instructions+=3;NFSU2_TR(0x524e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524e41:{NFSU2_TR(0x524e41);
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
B524e43:{NFSU2_TR(0x524e43);
if(r1(R+518)){{goto L524fab;}}
}
B524e49:L524e49:{c.instructions+=2;NFSU2_TR(0x524e49);
__builtin_memmove((R+4),(R+24),4);
}
B524e4b:{NFSU2_TR(0x524e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524e50ull));
TAIL_STATIC(0x45b490u,45b);
}
B524e50:L524e50:{c.instructions+=3;NFSU2_TR(0x524e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524e56:{NFSU2_TR(0x524e56);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524e5c:{NFSU2_TR(0x524e5c);
{goto L524fa8;}
}
B524e61:L524e61:{c.instructions+=6;NFSU2_TR(0x524e61);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524e66:{NFSU2_TR(0x524e66);
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
B524e68:{NFSU2_TR(0x524e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524e72:{NFSU2_TR(0x524e72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeecull))));
w4(U+4,u32(0x400ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524e7c:{NFSU2_TR(0x524e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524e86:{NFSU2_TR(0x524e86);
if(r1(R+518)){{goto L524fab;}}
}
B524e8c:L524e8c:{c.instructions+=3;NFSU2_TR(0x524e8c);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524e92:{NFSU2_TR(0x524e92);
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
B524e94:{NFSU2_TR(0x524e94);
if(r1(R+518)){{goto L524fab;}}
}
B524e9a:L524e9a:{c.instructions+=3;NFSU2_TR(0x524e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524e9d:{NFSU2_TR(0x524e9d);
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
B524e9f:{NFSU2_TR(0x524e9f);
if(r1(R+518)){{goto L524fab;}}
}
B524ea5:L524ea5:{c.instructions+=2;NFSU2_TR(0x524ea5);
__builtin_memmove((R+4),(R+24),4);
}
B524ea7:{NFSU2_TR(0x524ea7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524eacull));
TAIL_STATIC(0x45b490u,45b);
}
B524eac:L524eac:{c.instructions+=4;NFSU2_TR(0x524eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B524eb2:{NFSU2_TR(0x524eb2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524eb3:{NFSU2_TR(0x524eb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524eb9:{NFSU2_TR(0x524eb9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524ebbull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B524ebb:L524ebb:{c.instructions+=1;NFSU2_TR(0x524ebb);
{goto L524fab;}
}
B524ec0:L524ec0:{c.instructions+=6;NFSU2_TR(0x524ec0);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524ec5:{NFSU2_TR(0x524ec5);
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
B524ec7:{NFSU2_TR(0x524ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed0ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524ed1:{NFSU2_TR(0x524ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed4ull))));
w4(U+4,u32(0x20000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524edb:{NFSU2_TR(0x524edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed8ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524ee5:{NFSU2_TR(0x524ee5);
if(r1(R+518)){{goto L524fab;}}
}
B524eeb:L524eeb:{c.instructions+=3;NFSU2_TR(0x524eeb);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524ef1:{NFSU2_TR(0x524ef1);
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
B524ef3:{NFSU2_TR(0x524ef3);
if(r1(R+518)){{goto L524fab;}}
}
B524ef9:L524ef9:{c.instructions+=3;NFSU2_TR(0x524ef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524efc:{NFSU2_TR(0x524efc);
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
B524efe:{NFSU2_TR(0x524efe);
if(r1(R+518)){{goto L524fab;}}
}
B524f04:L524f04:{c.instructions+=2;NFSU2_TR(0x524f04);
__builtin_memmove((R+4),(R+24),4);
}
B524f06:{NFSU2_TR(0x524f06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524f0bull));
TAIL_STATIC(0x45b490u,45b);
}
B524f0b:L524f0b:{c.instructions+=3;NFSU2_TR(0x524f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524f11:{NFSU2_TR(0x524f11);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524f17:{NFSU2_TR(0x524f17);
{goto L524fa8;}
}
B524f1c:L524f1c:{c.instructions+=6;NFSU2_TR(0x524f1c);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524f21:{NFSU2_TR(0x524f21);
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
B524f23:{NFSU2_TR(0x524f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb8ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524f2d:{NFSU2_TR(0x524f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffebcull))));
w4(U+4,u32(0x40000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524f37:{NFSU2_TR(0x524f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec0ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524f41:{NFSU2_TR(0x524f41);
if(r1(R+518)){{goto L524fab;}}
}
B524f43:L524f43:{c.instructions+=3;NFSU2_TR(0x524f43);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524f49:{NFSU2_TR(0x524f49);
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
B524f4b:{NFSU2_TR(0x524f4b);
if(r1(R+518)){{goto L524fab;}}
}
B524f4d:L524f4d:{c.instructions+=3;NFSU2_TR(0x524f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524f50:{NFSU2_TR(0x524f50);
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
B524f52:{NFSU2_TR(0x524f52);
if(r1(R+518)){{goto L524fab;}}
}
B524f54:L524f54:{c.instructions+=2;NFSU2_TR(0x524f54);
__builtin_memmove((R+4),(R+24),4);
}
B524f56:{NFSU2_TR(0x524f56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524f5bull));
TAIL_STATIC(0x45b490u,45b);
}
B524f5b:L524f5b:{c.instructions+=4;NFSU2_TR(0x524f5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B524f61:{NFSU2_TR(0x524f61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524f62:{NFSU2_TR(0x524f62);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524f68:{NFSU2_TR(0x524f68);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524f6aull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B524f6a:L524f6a:{c.instructions+=1;NFSU2_TR(0x524f6a);
{goto L524fab;}
}
B524f6c:L524f6c:{c.instructions+=6;NFSU2_TR(0x524f6c);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B524f71:{NFSU2_TR(0x524f71);
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
B524f73:{NFSU2_TR(0x524f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x79ad00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524f7a:{NFSU2_TR(0x524f7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x2000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524f81:{NFSU2_TR(0x524f81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B524f88:{NFSU2_TR(0x524f88);
if(r1(R+518)){{goto L524fab;}}
}
B524f8a:L524f8a:{c.instructions+=3;NFSU2_TR(0x524f8a);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B524f90:{NFSU2_TR(0x524f90);
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
B524f92:{NFSU2_TR(0x524f92);
if(r1(R+518)){{goto L524fab;}}
}
B524f94:L524f94:{c.instructions+=3;NFSU2_TR(0x524f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B524f97:{NFSU2_TR(0x524f97);
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
B524f99:{NFSU2_TR(0x524f99);
if(r1(R+518)){{goto L524fab;}}
}
B524f9b:L524f9b:{c.instructions+=2;NFSU2_TR(0x524f9b);
__builtin_memmove((R+4),(R+24),4);
}
B524f9d:{NFSU2_TR(0x524f9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524fa2ull));
TAIL_STATIC(0x45b490u,45b);
}
B524fa2:L524fa2:{c.instructions+=2;NFSU2_TR(0x524fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B524fa5:{NFSU2_TR(0x524fa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B524fa8:L524fa8:{c.instructions+=2;NFSU2_TR(0x524fa8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B524fa9:{NFSU2_TR(0x524fa9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x524fabull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B524fab:L524fab:{c.instructions+=3;NFSU2_TR(0x524fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B524fae:{NFSU2_TR(0x524fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B524fb4:{NFSU2_TR(0x524fb4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B524fb6:L524fb6:{c.instructions+=7;NFSU2_TR(0x524fb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B524fb9:{NFSU2_TR(0x524fb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B524fba:{NFSU2_TR(0x524fba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B524fbb:{NFSU2_TR(0x524fbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B524fbc:{NFSU2_TR(0x524fbc);
__builtin_memmove((R+16),(R+20),4);
}
B524fbe:{NFSU2_TR(0x524fbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B524fbf:{NFSU2_TR(0x524fbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x524,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
