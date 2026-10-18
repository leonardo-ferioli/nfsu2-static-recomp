#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_4a8(u8* __restrict R,Cpu& c);
u32 body_4b2(u8* __restrict R,Cpu& c);
u32 body_4d9(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_526(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54c(u8* __restrict R,Cpu& c);
u32 body_54d(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_559(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x558,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x558,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_558(u8* __restrict R,Cpu& c);
u32 page_558(Cpu& c){return body_558(c.regs.data(),c);}
__attribute__((noinline)) u32 body_558(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x558000:goto L558000;
case 0x558005:goto L558005;
case 0x558008:c.instructions+=3;goto B558008;
case 0x55800a:c.instructions+=2;goto B55800a;
case 0x55800b:c.instructions+=1;goto B55800b;
case 0x558010:goto L558010;
case 0x558016:c.instructions+=1;goto B558016;
case 0x558020:goto L558020;
case 0x558023:c.instructions+=3;goto B558023;
case 0x558024:c.instructions+=2;goto B558024;
case 0x558029:c.instructions+=1;goto B558029;
case 0x55802e:goto L55802e;
case 0x558032:c.instructions+=3;goto B558032;
case 0x558033:c.instructions+=2;goto B558033;
case 0x558038:c.instructions+=1;goto B558038;
case 0x55803d:goto L55803d;
case 0x558042:c.instructions+=3;goto B558042;
case 0x558045:c.instructions+=2;goto B558045;
case 0x558047:c.instructions+=1;goto B558047;
case 0x558049:goto L558049;
case 0x55804a:c.instructions+=2;goto B55804a;
case 0x55804f:c.instructions+=1;goto B55804f;
case 0x558054:goto L558054;
case 0x558057:c.instructions+=4;goto B558057;
case 0x558059:c.instructions+=3;goto B558059;
case 0x55805a:c.instructions+=2;goto B55805a;
case 0x55805d:c.instructions+=1;goto B55805d;
case 0x55805e:goto L55805e;
case 0x55805f:c.instructions+=4;goto B55805f;
case 0x558060:c.instructions+=3;goto B558060;
case 0x558061:c.instructions+=2;goto B558061;
case 0x558062:c.instructions+=1;goto B558062;
case 0x558067:goto L558067;
case 0x55806d:c.instructions+=7;goto B55806d;
case 0x558074:c.instructions+=6;goto B558074;
case 0x55807e:c.instructions+=5;goto B55807e;
case 0x558083:c.instructions+=4;goto B558083;
case 0x558086:c.instructions+=3;goto B558086;
case 0x558088:c.instructions+=2;goto B558088;
case 0x55808d:c.instructions+=1;goto B55808d;
case 0x558093:goto L558093;
case 0x558094:c.instructions+=2;goto B558094;
case 0x558099:c.instructions+=1;goto B558099;
case 0x55809e:goto L55809e;
case 0x5580a3:c.instructions+=2;goto B5580a3;
case 0x5580a8:c.instructions+=1;goto B5580a8;
case 0x5580ad:goto L5580ad;
case 0x5580b2:c.instructions+=3;goto B5580b2;
case 0x5580b5:c.instructions+=2;goto B5580b5;
case 0x5580b7:c.instructions+=1;goto B5580b7;
case 0x5580b9:goto L5580b9;
case 0x5580bf:c.instructions+=4;goto B5580bf;
case 0x5580c0:c.instructions+=3;goto B5580c0;
case 0x5580c1:c.instructions+=2;goto B5580c1;
case 0x5580c6:c.instructions+=1;goto B5580c6;
case 0x5580cb:goto L5580cb;
case 0x5580d1:c.instructions+=6;goto B5580d1;
case 0x5580d6:c.instructions+=5;goto B5580d6;
case 0x5580d9:c.instructions+=4;goto B5580d9;
case 0x5580da:c.instructions+=3;goto B5580da;
case 0x5580db:c.instructions+=2;goto B5580db;
case 0x5580e0:c.instructions+=1;goto B5580e0;
case 0x5580e5:goto L5580e5;
case 0x5580eb:c.instructions+=2;goto B5580eb;
case 0x5580f1:c.instructions+=1;goto B5580f1;
case 0x5580f3:goto L5580f3;
case 0x5580f5:c.instructions+=3;goto B5580f5;
case 0x5580f7:c.instructions+=2;goto B5580f7;
case 0x5580f9:c.instructions+=1;goto B5580f9;
case 0x5580fb:goto L5580fb;
case 0x5580fd:c.instructions+=1;goto B5580fd;
case 0x5580ff:goto L5580ff;
case 0x558102:c.instructions+=3;goto B558102;
case 0x558104:c.instructions+=2;goto B558104;
case 0x558107:c.instructions+=1;goto B558107;
case 0x558109:goto L558109;
case 0x55810c:c.instructions+=3;goto B55810c;
case 0x55810f:c.instructions+=2;goto B55810f;
case 0x558111:c.instructions+=1;goto B558111;
case 0x558113:goto L558113;
case 0x558115:c.instructions+=1;goto B558115;
case 0x558117:goto L558117;
case 0x558119:c.instructions+=1;goto B558119;
case 0x55811c:goto L55811c;
case 0x55811e:c.instructions+=1;goto B55811e;
case 0x558120:goto L558120;
case 0x558125:c.instructions+=6;goto B558125;
case 0x55812b:c.instructions+=5;goto B55812b;
case 0x55812c:c.instructions+=4;goto B55812c;
case 0x55812d:c.instructions+=3;goto B55812d;
case 0x55812e:c.instructions+=2;goto B55812e;
case 0x558133:c.instructions+=1;goto B558133;
case 0x558138:goto L558138;
case 0x55813e:c.instructions+=3;goto B55813e;
case 0x558144:c.instructions+=2;goto B558144;
case 0x55814a:c.instructions+=1;goto B55814a;
case 0x55814d:goto L55814d;
case 0x55814e:c.instructions+=1;goto B55814e;
case 0x558153:goto L558153;
case 0x558156:c.instructions+=2;goto B558156;
case 0x558158:c.instructions+=1;goto B558158;
case 0x55815a:goto L55815a;
case 0x55815d:goto L55815d;
case 0x558162:c.instructions+=2;goto B558162;
case 0x558163:c.instructions+=1;goto B558163;
case 0x558168:goto L558168;
case 0x55816b:c.instructions+=1;goto B55816b;
case 0x55816d:goto L55816d;
case 0x558173:c.instructions+=2;goto B558173;
case 0x558174:c.instructions+=1;goto B558174;
case 0x558179:goto L558179;
case 0x55817c:c.instructions+=2;goto B55817c;
case 0x55817e:c.instructions+=1;goto B55817e;
case 0x558184:goto L558184;
case 0x558187:goto L558187;
case 0x558189:c.instructions+=1;goto B558189;
case 0x55818f:goto L55818f;
case 0x558194:c.instructions+=1;goto B558194;
case 0x558199:goto L558199;
case 0x55819e:c.instructions+=1;goto B55819e;
case 0x5581a3:goto L5581a3;
case 0x5581a8:c.instructions+=2;goto B5581a8;
case 0x5581ac:c.instructions+=1;goto B5581ac;
case 0x5581b1:goto L5581b1;
case 0x5581b6:c.instructions+=2;goto B5581b6;
case 0x5581ba:c.instructions+=1;goto B5581ba;
case 0x5581bf:goto L5581bf;
case 0x5581c4:c.instructions+=2;goto B5581c4;
case 0x5581c8:c.instructions+=1;goto B5581c8;
case 0x5581cd:goto L5581cd;
case 0x5581d1:c.instructions+=4;goto B5581d1;
case 0x5581d3:c.instructions+=3;goto B5581d3;
case 0x5581d4:c.instructions+=2;goto B5581d4;
case 0x5581d8:c.instructions+=1;goto B5581d8;
case 0x5581dd:goto L5581dd;
case 0x5581df:c.instructions+=2;goto B5581df;
case 0x5581e0:c.instructions+=1;goto B5581e0;
case 0x5581e5:goto L5581e5;
case 0x5581e8:c.instructions+=2;goto B5581e8;
case 0x5581ea:c.instructions+=1;goto B5581ea;
case 0x5581ec:goto L5581ec;
case 0x5581ef:c.instructions+=4;goto B5581ef;
case 0x5581f0:c.instructions+=3;goto B5581f0;
case 0x5581f1:c.instructions+=2;goto B5581f1;
case 0x5581f6:c.instructions+=1;goto B5581f6;
case 0x5581fb:goto L5581fb;
case 0x5581fe:c.instructions+=2;goto B5581fe;
case 0x558200:c.instructions+=1;goto B558200;
case 0x558202:goto L558202;
case 0x558207:c.instructions+=1;goto B558207;
case 0x558209:goto L558209;
case 0x55820e:goto L55820e;
case 0x558213:goto L558213;
case 0x558216:c.instructions+=1;goto B558216;
case 0x55821b:goto L55821b;
case 0x558220:c.instructions+=3;goto B558220;
case 0x558225:c.instructions+=2;goto B558225;
case 0x558227:c.instructions+=1;goto B558227;
case 0x55822c:goto L55822c;
case 0x55822e:goto L55822e;
case 0x558233:c.instructions+=6;goto B558233;
case 0x558234:c.instructions+=5;goto B558234;
case 0x558239:c.instructions+=4;goto B558239;
case 0x55823e:c.instructions+=3;goto B55823e;
case 0x558243:c.instructions+=2;goto B558243;
case 0x558244:c.instructions+=1;goto B558244;
case 0x558249:goto L558249;
case 0x55824f:c.instructions+=3;goto B55824f;
case 0x558252:c.instructions+=2;goto B558252;
case 0x558254:c.instructions+=1;goto B558254;
case 0x558256:goto L558256;
case 0x55825c:c.instructions+=7;goto B55825c;
case 0x558261:c.instructions+=6;goto B558261;
case 0x558266:c.instructions+=5;goto B558266;
case 0x558267:c.instructions+=4;goto B558267;
case 0x558268:c.instructions+=3;goto B558268;
case 0x558269:c.instructions+=2;goto B558269;
case 0x55826b:c.instructions+=1;goto B55826b;
case 0x558270:goto L558270;
case 0x558276:c.instructions+=4;goto B558276;
case 0x558277:c.instructions+=3;goto B558277;
case 0x558278:c.instructions+=2;goto B558278;
case 0x55827d:c.instructions+=1;goto B55827d;
case 0x558282:goto L558282;
case 0x558287:c.instructions+=1;goto B558287;
case 0x55828c:goto L55828c;
case 0x558291:c.instructions+=7;goto B558291;
case 0x558294:c.instructions+=6;goto B558294;
case 0x558295:c.instructions+=5;goto B558295;
case 0x558296:c.instructions+=4;goto B558296;
case 0x558297:c.instructions+=3;goto B558297;
case 0x558298:c.instructions+=2;goto B558298;
case 0x55829b:c.instructions+=1;goto B55829b;
case 0x5582a0:goto L5582a0;
case 0x5582a6:c.instructions+=2;goto B5582a6;
case 0x5582aa:c.instructions+=1;goto B5582aa;
case 0x5582af:goto L5582af;
case 0x5582b6:c.instructions+=6;goto B5582b6;
case 0x5582bd:c.instructions+=5;goto B5582bd;
case 0x5582be:c.instructions+=4;goto B5582be;
case 0x5582bf:c.instructions+=3;goto B5582bf;
case 0x5582c3:c.instructions+=2;goto B5582c3;
case 0x5582c4:c.instructions+=1;goto B5582c4;
case 0x5582c9:goto L5582c9;
case 0x5582d0:c.instructions+=9;goto B5582d0;
case 0x5582d7:c.instructions+=8;goto B5582d7;
case 0x5582d9:c.instructions+=7;goto B5582d9;
case 0x5582e0:c.instructions+=6;goto B5582e0;
case 0x5582e7:c.instructions+=5;goto B5582e7;
case 0x5582eb:c.instructions+=4;goto B5582eb;
case 0x5582ec:c.instructions+=3;goto B5582ec;
case 0x5582f3:c.instructions+=2;goto B5582f3;
case 0x5582fa:c.instructions+=1;goto B5582fa;
case 0x5582ff:goto L5582ff;
case 0x558305:c.instructions+=1;goto B558305;
case 0x558310:goto L558310;
case 0x558314:c.instructions+=8;goto B558314;
case 0x558318:c.instructions+=7;goto B558318;
case 0x55831c:c.instructions+=6;goto B55831c;
case 0x55831d:c.instructions+=5;goto B55831d;
case 0x558321:c.instructions+=4;goto B558321;
case 0x558322:c.instructions+=3;goto B558322;
case 0x558323:c.instructions+=2;goto B558323;
case 0x558324:c.instructions+=1;goto B558324;
case 0x558329:goto L558329;
case 0x55832c:c.instructions+=1;goto B55832c;
case 0x558330:goto L558330;
case 0x558334:c.instructions+=2;goto B558334;
case 0x55833a:c.instructions+=1;goto B55833a;
case 0x55833f:goto L55833f;
case 0x558341:c.instructions+=1;goto B558341;
case 0x558343:goto L558343;
case 0x558348:c.instructions+=1;goto B558348;
case 0x55834d:goto L55834d;
case 0x558352:c.instructions+=4;goto B558352;
case 0x558353:c.instructions+=3;goto B558353;
case 0x558357:c.instructions+=2;goto B558357;
case 0x558358:c.instructions+=1;goto B558358;
case 0x55835d:goto L55835d;
case 0x558364:c.instructions+=8;goto B558364;
case 0x55836b:c.instructions+=7;goto B55836b;
case 0x55836c:c.instructions+=6;goto B55836c;
case 0x558373:c.instructions+=5;goto B558373;
case 0x558377:c.instructions+=4;goto B558377;
case 0x558378:c.instructions+=3;goto B558378;
case 0x558379:c.instructions+=2;goto B558379;
case 0x55837a:c.instructions+=1;goto B55837a;
case 0x55837f:goto L55837f;
case 0x558385:c.instructions+=1;goto B558385;
case 0x558390:goto L558390;
case 0x558396:c.instructions+=2;goto B558396;
case 0x55839a:c.instructions+=1;goto B55839a;
case 0x55839f:goto L55839f;
case 0x5583a6:c.instructions+=6;goto B5583a6;
case 0x5583ad:c.instructions+=5;goto B5583ad;
case 0x5583ae:c.instructions+=4;goto B5583ae;
case 0x5583af:c.instructions+=3;goto B5583af;
case 0x5583b3:c.instructions+=2;goto B5583b3;
case 0x5583b4:c.instructions+=1;goto B5583b4;
case 0x5583b9:goto L5583b9;
case 0x5583c0:c.instructions+=13;goto B5583c0;
case 0x5583c7:c.instructions+=12;goto B5583c7;
case 0x5583cc:c.instructions+=11;goto B5583cc;
case 0x5583d3:c.instructions+=10;goto B5583d3;
case 0x5583da:c.instructions+=9;goto B5583da;
case 0x5583de:c.instructions+=8;goto B5583de;
case 0x5583df:c.instructions+=7;goto B5583df;
case 0x5583ea:c.instructions+=6;goto B5583ea;
case 0x5583f5:c.instructions+=5;goto B5583f5;
case 0x558400:c.instructions+=4;goto B558400;
case 0x55840b:c.instructions+=3;goto B55840b;
case 0x558412:c.instructions+=2;goto B558412;
case 0x558419:c.instructions+=1;goto B558419;
case 0x55841e:goto L55841e;
case 0x558424:c.instructions+=1;goto B558424;
case 0x558430:goto L558430;
case 0x558434:c.instructions+=2;goto B558434;
case 0x55843a:c.instructions+=1;goto B55843a;
case 0x55843f:goto L55843f;
case 0x558441:c.instructions+=1;goto B558441;
case 0x558443:goto L558443;
case 0x558448:c.instructions+=1;goto B558448;
case 0x55844d:goto L55844d;
case 0x558452:c.instructions+=4;goto B558452;
case 0x558453:c.instructions+=3;goto B558453;
case 0x558457:c.instructions+=2;goto B558457;
case 0x558458:c.instructions+=1;goto B558458;
case 0x55845d:goto L55845d;
case 0x558464:c.instructions+=8;goto B558464;
case 0x55846b:c.instructions+=7;goto B55846b;
case 0x55846c:c.instructions+=6;goto B55846c;
case 0x558473:c.instructions+=5;goto B558473;
case 0x558477:c.instructions+=4;goto B558477;
case 0x558478:c.instructions+=3;goto B558478;
case 0x558479:c.instructions+=2;goto B558479;
case 0x55847a:c.instructions+=1;goto B55847a;
case 0x55847f:goto L55847f;
case 0x558485:c.instructions+=1;goto B558485;
case 0x558490:goto L558490;
case 0x558496:c.instructions+=2;goto B558496;
case 0x55849a:c.instructions+=1;goto B55849a;
case 0x55849f:goto L55849f;
case 0x5584a6:c.instructions+=6;goto B5584a6;
case 0x5584ad:c.instructions+=5;goto B5584ad;
case 0x5584ae:c.instructions+=4;goto B5584ae;
case 0x5584af:c.instructions+=3;goto B5584af;
case 0x5584b3:c.instructions+=2;goto B5584b3;
case 0x5584b4:c.instructions+=1;goto B5584b4;
case 0x5584b9:goto L5584b9;
case 0x5584c0:c.instructions+=16;goto B5584c0;
case 0x5584c7:c.instructions+=15;goto B5584c7;
case 0x5584ce:c.instructions+=14;goto B5584ce;
case 0x5584d5:c.instructions+=13;goto B5584d5;
case 0x5584dc:c.instructions+=12;goto B5584dc;
case 0x5584e3:c.instructions+=11;goto B5584e3;
case 0x5584ea:c.instructions+=10;goto B5584ea;
case 0x5584f1:c.instructions+=9;goto B5584f1;
case 0x5584f8:c.instructions+=8;goto B5584f8;
case 0x5584ff:c.instructions+=7;goto B5584ff;
case 0x558503:c.instructions+=6;goto B558503;
case 0x558504:c.instructions+=5;goto B558504;
case 0x55850f:c.instructions+=4;goto B55850f;
case 0x55851a:c.instructions+=3;goto B55851a;
case 0x558521:c.instructions+=2;goto B558521;
case 0x558528:c.instructions+=1;goto B558528;
case 0x55852d:goto L55852d;
case 0x558533:c.instructions+=1;goto B558533;
case 0x558540:goto L558540;
case 0x558544:c.instructions+=15;goto B558544;
case 0x558548:c.instructions+=14;goto B558548;
case 0x55854c:c.instructions+=13;goto B55854c;
case 0x55854d:c.instructions+=12;goto B55854d;
case 0x558551:c.instructions+=11;goto B558551;
case 0x558552:c.instructions+=10;goto B558552;
case 0x558556:c.instructions+=9;goto B558556;
case 0x558558:c.instructions+=8;goto B558558;
case 0x558559:c.instructions+=7;goto B558559;
case 0x55855d:c.instructions+=6;goto B55855d;
case 0x55855e:c.instructions+=5;goto B55855e;
case 0x558562:c.instructions+=4;goto B558562;
case 0x558563:c.instructions+=3;goto B558563;
case 0x558564:c.instructions+=2;goto B558564;
case 0x558565:c.instructions+=1;goto B558565;
case 0x55856a:goto L55856a;
case 0x55856d:c.instructions+=1;goto B55856d;
case 0x558570:goto L558570;
case 0x558574:c.instructions+=2;goto B558574;
case 0x55857a:c.instructions+=1;goto B55857a;
case 0x55857f:goto L55857f;
case 0x558581:c.instructions+=1;goto B558581;
case 0x558583:goto L558583;
case 0x558588:c.instructions+=1;goto B558588;
case 0x55858d:goto L55858d;
case 0x558592:c.instructions+=4;goto B558592;
case 0x558593:c.instructions+=3;goto B558593;
case 0x558597:c.instructions+=2;goto B558597;
case 0x558598:c.instructions+=1;goto B558598;
case 0x55859d:goto L55859d;
case 0x5585a4:c.instructions+=15;goto B5585a4;
case 0x5585ab:c.instructions+=14;goto B5585ab;
case 0x5585ac:c.instructions+=13;goto B5585ac;
case 0x5585b3:c.instructions+=12;goto B5585b3;
case 0x5585b7:c.instructions+=11;goto B5585b7;
case 0x5585b8:c.instructions+=10;goto B5585b8;
case 0x5585bf:c.instructions+=9;goto B5585bf;
case 0x5585c1:c.instructions+=8;goto B5585c1;
case 0x5585c2:c.instructions+=7;goto B5585c2;
case 0x5585c9:c.instructions+=6;goto B5585c9;
case 0x5585ca:c.instructions+=5;goto B5585ca;
case 0x5585d1:c.instructions+=4;goto B5585d1;
case 0x5585d2:c.instructions+=3;goto B5585d2;
case 0x5585d3:c.instructions+=2;goto B5585d3;
case 0x5585d4:c.instructions+=1;goto B5585d4;
case 0x5585d9:goto L5585d9;
case 0x5585df:c.instructions+=1;goto B5585df;
case 0x5585e0:goto L5585e0;
case 0x5585e4:c.instructions+=14;goto B5585e4;
case 0x5585e8:c.instructions+=13;goto B5585e8;
case 0x5585ec:c.instructions+=12;goto B5585ec;
case 0x5585ed:c.instructions+=11;goto B5585ed;
case 0x5585f1:c.instructions+=10;goto B5585f1;
case 0x5585f2:c.instructions+=9;goto B5585f2;
case 0x5585f6:c.instructions+=8;goto B5585f6;
case 0x5585f8:c.instructions+=7;goto B5585f8;
case 0x5585fa:c.instructions+=6;goto B5585fa;
case 0x5585fb:c.instructions+=5;goto B5585fb;
case 0x5585ff:c.instructions+=4;goto B5585ff;
case 0x558600:c.instructions+=3;goto B558600;
case 0x558601:c.instructions+=2;goto B558601;
case 0x558602:c.instructions+=1;goto B558602;
case 0x558607:goto L558607;
case 0x55860a:c.instructions+=1;goto B55860a;
case 0x558610:goto L558610;
case 0x558614:c.instructions+=2;goto B558614;
case 0x55861a:c.instructions+=1;goto B55861a;
case 0x55861f:goto L55861f;
case 0x558621:c.instructions+=1;goto B558621;
case 0x558623:goto L558623;
case 0x558628:c.instructions+=1;goto B558628;
case 0x55862d:goto L55862d;
case 0x558632:c.instructions+=4;goto B558632;
case 0x558633:c.instructions+=3;goto B558633;
case 0x558637:c.instructions+=2;goto B558637;
case 0x558638:c.instructions+=1;goto B558638;
case 0x55863d:goto L55863d;
case 0x558644:c.instructions+=14;goto B558644;
case 0x55864b:c.instructions+=13;goto B55864b;
case 0x55864c:c.instructions+=12;goto B55864c;
case 0x558653:c.instructions+=11;goto B558653;
case 0x558657:c.instructions+=10;goto B558657;
case 0x558658:c.instructions+=9;goto B558658;
case 0x55865f:c.instructions+=8;goto B55865f;
case 0x558661:c.instructions+=7;goto B558661;
case 0x558663:c.instructions+=6;goto B558663;
case 0x558664:c.instructions+=5;goto B558664;
case 0x55866b:c.instructions+=4;goto B55866b;
case 0x55866c:c.instructions+=3;goto B55866c;
case 0x55866d:c.instructions+=2;goto B55866d;
case 0x55866e:c.instructions+=1;goto B55866e;
case 0x558673:goto L558673;
case 0x558679:c.instructions+=1;goto B558679;
case 0x558680:goto L558680;
case 0x558686:c.instructions+=2;goto B558686;
case 0x55868a:c.instructions+=1;goto B55868a;
case 0x55868f:goto L55868f;
case 0x558696:c.instructions+=6;goto B558696;
case 0x55869d:c.instructions+=5;goto B55869d;
case 0x55869e:c.instructions+=4;goto B55869e;
case 0x55869f:c.instructions+=3;goto B55869f;
case 0x5586a3:c.instructions+=2;goto B5586a3;
case 0x5586a4:c.instructions+=1;goto B5586a4;
case 0x5586a9:goto L5586a9;
case 0x5586b0:c.instructions+=21;goto B5586b0;
case 0x5586b7:c.instructions+=20;goto B5586b7;
case 0x5586be:c.instructions+=19;goto B5586be;
case 0x5586c5:c.instructions+=18;goto B5586c5;
case 0x5586cc:c.instructions+=17;goto B5586cc;
case 0x5586d3:c.instructions+=16;goto B5586d3;
case 0x5586da:c.instructions+=15;goto B5586da;
case 0x5586e1:c.instructions+=14;goto B5586e1;
case 0x5586e8:c.instructions+=13;goto B5586e8;
case 0x5586ef:c.instructions+=12;goto B5586ef;
case 0x5586f6:c.instructions+=11;goto B5586f6;
case 0x5586fd:c.instructions+=10;goto B5586fd;
case 0x558704:c.instructions+=9;goto B558704;
case 0x55870b:c.instructions+=8;goto B55870b;
case 0x558712:c.instructions+=7;goto B558712;
case 0x558719:c.instructions+=6;goto B558719;
case 0x55871d:c.instructions+=5;goto B55871d;
case 0x55871e:c.instructions+=4;goto B55871e;
case 0x558729:c.instructions+=3;goto B558729;
case 0x558730:c.instructions+=2;goto B558730;
case 0x558737:c.instructions+=1;goto B558737;
case 0x55873c:goto L55873c;
case 0x558742:c.instructions+=1;goto B558742;
case 0x558750:goto L558750;
case 0x558754:c.instructions+=21;goto B558754;
case 0x558758:c.instructions+=20;goto B558758;
case 0x55875c:c.instructions+=19;goto B55875c;
case 0x55875d:c.instructions+=18;goto B55875d;
case 0x558761:c.instructions+=17;goto B558761;
case 0x558762:c.instructions+=16;goto B558762;
case 0x558766:c.instructions+=15;goto B558766;
case 0x558767:c.instructions+=14;goto B558767;
case 0x55876b:c.instructions+=13;goto B55876b;
case 0x55876d:c.instructions+=12;goto B55876d;
case 0x55876e:c.instructions+=11;goto B55876e;
case 0x558772:c.instructions+=10;goto B558772;
case 0x558773:c.instructions+=9;goto B558773;
case 0x558777:c.instructions+=8;goto B558777;
case 0x558778:c.instructions+=7;goto B558778;
case 0x55877c:c.instructions+=6;goto B55877c;
case 0x55877d:c.instructions+=5;goto B55877d;
case 0x558781:c.instructions+=4;goto B558781;
case 0x558782:c.instructions+=3;goto B558782;
case 0x558783:c.instructions+=2;goto B558783;
case 0x558784:c.instructions+=1;goto B558784;
case 0x558789:goto L558789;
case 0x55878c:c.instructions+=1;goto B55878c;
case 0x558790:goto L558790;
case 0x558794:c.instructions+=2;goto B558794;
case 0x55879a:c.instructions+=1;goto B55879a;
case 0x55879f:goto L55879f;
case 0x5587a1:c.instructions+=1;goto B5587a1;
case 0x5587a3:goto L5587a3;
case 0x5587a8:c.instructions+=1;goto B5587a8;
case 0x5587ad:goto L5587ad;
case 0x5587b2:c.instructions+=4;goto B5587b2;
case 0x5587b3:c.instructions+=3;goto B5587b3;
case 0x5587b7:c.instructions+=2;goto B5587b7;
case 0x5587b8:c.instructions+=1;goto B5587b8;
case 0x5587bd:goto L5587bd;
case 0x5587c4:c.instructions+=21;goto B5587c4;
case 0x5587cb:c.instructions+=20;goto B5587cb;
case 0x5587cc:c.instructions+=19;goto B5587cc;
case 0x5587d3:c.instructions+=18;goto B5587d3;
case 0x5587d7:c.instructions+=17;goto B5587d7;
case 0x5587d8:c.instructions+=16;goto B5587d8;
case 0x5587df:c.instructions+=15;goto B5587df;
case 0x5587e0:c.instructions+=14;goto B5587e0;
case 0x5587e7:c.instructions+=13;goto B5587e7;
case 0x5587e9:c.instructions+=12;goto B5587e9;
case 0x5587ea:c.instructions+=11;goto B5587ea;
case 0x5587f1:c.instructions+=10;goto B5587f1;
case 0x5587f2:c.instructions+=9;goto B5587f2;
case 0x5587f9:c.instructions+=8;goto B5587f9;
case 0x5587fa:c.instructions+=7;goto B5587fa;
case 0x558801:c.instructions+=6;goto B558801;
case 0x558802:c.instructions+=5;goto B558802;
case 0x558809:c.instructions+=4;goto B558809;
case 0x55880a:c.instructions+=3;goto B55880a;
case 0x55880b:c.instructions+=2;goto B55880b;
case 0x55880c:c.instructions+=1;goto B55880c;
case 0x558811:goto L558811;
case 0x558817:c.instructions+=1;goto B558817;
case 0x558820:goto L558820;
case 0x558824:c.instructions+=20;goto B558824;
case 0x558828:c.instructions+=19;goto B558828;
case 0x55882c:c.instructions+=18;goto B55882c;
case 0x55882d:c.instructions+=17;goto B55882d;
case 0x558831:c.instructions+=16;goto B558831;
case 0x558832:c.instructions+=15;goto B558832;
case 0x558836:c.instructions+=14;goto B558836;
case 0x558837:c.instructions+=13;goto B558837;
case 0x55883b:c.instructions+=12;goto B55883b;
case 0x55883d:c.instructions+=11;goto B55883d;
case 0x55883f:c.instructions+=10;goto B55883f;
case 0x558840:c.instructions+=9;goto B558840;
case 0x558844:c.instructions+=8;goto B558844;
case 0x558845:c.instructions+=7;goto B558845;
case 0x558849:c.instructions+=6;goto B558849;
case 0x55884a:c.instructions+=5;goto B55884a;
case 0x55884e:c.instructions+=4;goto B55884e;
case 0x55884f:c.instructions+=3;goto B55884f;
case 0x558850:c.instructions+=2;goto B558850;
case 0x558851:c.instructions+=1;goto B558851;
case 0x558856:goto L558856;
case 0x558859:c.instructions+=1;goto B558859;
case 0x558860:goto L558860;
case 0x558864:c.instructions+=2;goto B558864;
case 0x55886a:c.instructions+=1;goto B55886a;
case 0x55886f:goto L55886f;
case 0x558871:c.instructions+=1;goto B558871;
case 0x558873:goto L558873;
case 0x558878:c.instructions+=1;goto B558878;
case 0x55887d:goto L55887d;
case 0x558882:c.instructions+=4;goto B558882;
case 0x558883:c.instructions+=3;goto B558883;
case 0x558887:c.instructions+=2;goto B558887;
case 0x558888:c.instructions+=1;goto B558888;
case 0x55888d:goto L55888d;
case 0x558894:c.instructions+=20;goto B558894;
case 0x55889b:c.instructions+=19;goto B55889b;
case 0x55889c:c.instructions+=18;goto B55889c;
case 0x5588a3:c.instructions+=17;goto B5588a3;
case 0x5588a7:c.instructions+=16;goto B5588a7;
case 0x5588a8:c.instructions+=15;goto B5588a8;
case 0x5588af:c.instructions+=14;goto B5588af;
case 0x5588b0:c.instructions+=13;goto B5588b0;
case 0x5588b7:c.instructions+=12;goto B5588b7;
case 0x5588b9:c.instructions+=11;goto B5588b9;
case 0x5588bb:c.instructions+=10;goto B5588bb;
case 0x5588bc:c.instructions+=9;goto B5588bc;
case 0x5588c3:c.instructions+=8;goto B5588c3;
case 0x5588c4:c.instructions+=7;goto B5588c4;
case 0x5588cb:c.instructions+=6;goto B5588cb;
case 0x5588cc:c.instructions+=5;goto B5588cc;
case 0x5588d3:c.instructions+=4;goto B5588d3;
case 0x5588d4:c.instructions+=3;goto B5588d4;
case 0x5588d5:c.instructions+=2;goto B5588d5;
case 0x5588d6:c.instructions+=1;goto B5588d6;
case 0x5588db:goto L5588db;
case 0x5588e1:c.instructions+=1;goto B5588e1;
case 0x5588f0:goto L5588f0;
case 0x5588f6:c.instructions+=2;goto B5588f6;
case 0x5588fa:c.instructions+=1;goto B5588fa;
case 0x5588ff:goto L5588ff;
case 0x558906:c.instructions+=6;goto B558906;
case 0x55890d:c.instructions+=5;goto B55890d;
case 0x55890e:c.instructions+=4;goto B55890e;
case 0x55890f:c.instructions+=3;goto B55890f;
case 0x558913:c.instructions+=2;goto B558913;
case 0x558914:c.instructions+=1;goto B558914;
case 0x558919:goto L558919;
case 0x558920:c.instructions+=24;goto B558920;
case 0x558927:c.instructions+=23;goto B558927;
case 0x55892e:c.instructions+=22;goto B55892e;
case 0x558935:c.instructions+=21;goto B558935;
case 0x55893c:c.instructions+=20;goto B55893c;
case 0x558943:c.instructions+=19;goto B558943;
case 0x55894a:c.instructions+=18;goto B55894a;
case 0x558951:c.instructions+=17;goto B558951;
case 0x558958:c.instructions+=16;goto B558958;
case 0x55895f:c.instructions+=15;goto B55895f;
case 0x558966:c.instructions+=14;goto B558966;
case 0x55896d:c.instructions+=13;goto B55896d;
case 0x558974:c.instructions+=12;goto B558974;
case 0x55897b:c.instructions+=11;goto B55897b;
case 0x558982:c.instructions+=10;goto B558982;
case 0x558989:c.instructions+=9;goto B558989;
case 0x558990:c.instructions+=8;goto B558990;
case 0x558997:c.instructions+=7;goto B558997;
case 0x55899b:c.instructions+=6;goto B55899b;
case 0x55899c:c.instructions+=5;goto B55899c;
case 0x5589a7:c.instructions+=4;goto B5589a7;
case 0x5589ae:c.instructions+=3;goto B5589ae;
case 0x5589b5:c.instructions+=2;goto B5589b5;
case 0x5589bd:c.instructions+=1;goto B5589bd;
case 0x5589c2:goto L5589c2;
case 0x5589c8:c.instructions+=1;goto B5589c8;
case 0x5589d0:goto L5589d0;
case 0x5589d4:c.instructions+=24;goto B5589d4;
case 0x5589d8:c.instructions+=23;goto B5589d8;
case 0x5589dc:c.instructions+=22;goto B5589dc;
case 0x5589dd:c.instructions+=21;goto B5589dd;
case 0x5589e1:c.instructions+=20;goto B5589e1;
case 0x5589e2:c.instructions+=19;goto B5589e2;
case 0x5589e6:c.instructions+=18;goto B5589e6;
case 0x5589e7:c.instructions+=17;goto B5589e7;
case 0x5589eb:c.instructions+=16;goto B5589eb;
case 0x5589ec:c.instructions+=15;goto B5589ec;
case 0x5589f0:c.instructions+=14;goto B5589f0;
case 0x5589f1:c.instructions+=13;goto B5589f1;
case 0x5589f5:c.instructions+=12;goto B5589f5;
case 0x5589f6:c.instructions+=11;goto B5589f6;
case 0x5589fa:c.instructions+=10;goto B5589fa;
case 0x5589fb:c.instructions+=9;goto B5589fb;
case 0x5589ff:c.instructions+=8;goto B5589ff;
case 0x558a00:c.instructions+=7;goto B558a00;
case 0x558a04:c.instructions+=6;goto B558a04;
case 0x558a05:c.instructions+=5;goto B558a05;
case 0x558a09:c.instructions+=4;goto B558a09;
case 0x558a0a:c.instructions+=3;goto B558a0a;
case 0x558a0b:c.instructions+=2;goto B558a0b;
case 0x558a0c:c.instructions+=1;goto B558a0c;
case 0x558a11:goto L558a11;
case 0x558a14:c.instructions+=1;goto B558a14;
case 0x558a20:goto L558a20;
case 0x558a24:c.instructions+=2;goto B558a24;
case 0x558a2a:c.instructions+=1;goto B558a2a;
case 0x558a2f:goto L558a2f;
case 0x558a31:c.instructions+=1;goto B558a31;
case 0x558a33:goto L558a33;
case 0x558a38:c.instructions+=1;goto B558a38;
case 0x558a3d:goto L558a3d;
case 0x558a42:c.instructions+=4;goto B558a42;
case 0x558a43:c.instructions+=3;goto B558a43;
case 0x558a47:c.instructions+=2;goto B558a47;
case 0x558a48:c.instructions+=1;goto B558a48;
case 0x558a4d:goto L558a4d;
case 0x558a54:c.instructions+=24;goto B558a54;
case 0x558a5b:c.instructions+=23;goto B558a5b;
case 0x558a5c:c.instructions+=22;goto B558a5c;
case 0x558a63:c.instructions+=21;goto B558a63;
case 0x558a67:c.instructions+=20;goto B558a67;
case 0x558a68:c.instructions+=19;goto B558a68;
case 0x558a6f:c.instructions+=18;goto B558a6f;
case 0x558a70:c.instructions+=17;goto B558a70;
case 0x558a77:c.instructions+=16;goto B558a77;
case 0x558a78:c.instructions+=15;goto B558a78;
case 0x558a7f:c.instructions+=14;goto B558a7f;
case 0x558a80:c.instructions+=13;goto B558a80;
case 0x558a87:c.instructions+=12;goto B558a87;
case 0x558a88:c.instructions+=11;goto B558a88;
case 0x558a8f:c.instructions+=10;goto B558a8f;
case 0x558a90:c.instructions+=9;goto B558a90;
case 0x558a97:c.instructions+=8;goto B558a97;
case 0x558a98:c.instructions+=7;goto B558a98;
case 0x558a9f:c.instructions+=6;goto B558a9f;
case 0x558aa0:c.instructions+=5;goto B558aa0;
case 0x558aa7:c.instructions+=4;goto B558aa7;
case 0x558aa8:c.instructions+=3;goto B558aa8;
case 0x558aa9:c.instructions+=2;goto B558aa9;
case 0x558aaa:c.instructions+=1;goto B558aaa;
case 0x558aaf:goto L558aaf;
case 0x558ab5:c.instructions+=1;goto B558ab5;
case 0x558ac0:goto L558ac0;
case 0x558ac6:c.instructions+=2;goto B558ac6;
case 0x558aca:c.instructions+=1;goto B558aca;
case 0x558acf:goto L558acf;
case 0x558ad6:c.instructions+=1;goto B558ad6;
case 0x558adb:goto L558adb;
case 0x558add:c.instructions+=1;goto B558add;
case 0x558adf:goto L558adf;
case 0x558ae4:c.instructions+=1;goto B558ae4;
case 0x558ae9:goto L558ae9;
case 0x558aee:c.instructions+=4;goto B558aee;
case 0x558aef:c.instructions+=3;goto B558aef;
case 0x558af3:c.instructions+=2;goto B558af3;
case 0x558af4:c.instructions+=1;goto B558af4;
case 0x558af9:goto L558af9;
case 0x558b00:c.instructions+=14;goto B558b00;
case 0x558b07:c.instructions+=13;goto B558b07;
case 0x558b0c:c.instructions+=12;goto B558b0c;
case 0x558b13:c.instructions+=11;goto B558b13;
case 0x558b1a:c.instructions+=10;goto B558b1a;
case 0x558b21:c.instructions+=9;goto B558b21;
case 0x558b25:c.instructions+=8;goto B558b25;
case 0x558b26:c.instructions+=7;goto B558b26;
case 0x558b31:c.instructions+=6;goto B558b31;
case 0x558b3c:c.instructions+=5;goto B558b3c;
case 0x558b47:c.instructions+=4;goto B558b47;
case 0x558b52:c.instructions+=3;goto B558b52;
case 0x558b59:c.instructions+=2;goto B558b59;
case 0x558b60:c.instructions+=1;goto B558b60;
case 0x558b65:goto L558b65;
case 0x558b6b:c.instructions+=1;goto B558b6b;
case 0x558b70:goto L558b70;
case 0x558b74:c.instructions+=4;goto B558b74;
case 0x558b75:c.instructions+=3;goto B558b75;
case 0x558b77:c.instructions+=2;goto B558b77;
case 0x558b7a:c.instructions+=1;goto B558b7a;
case 0x558b7c:goto L558b7c;
case 0x558b7f:c.instructions+=1;goto B558b7f;
case 0x558b81:goto L558b81;
case 0x558b86:goto L558b86;
case 0x558b87:c.instructions+=1;goto B558b87;
case 0x558b8c:goto L558b8c;
case 0x558b8f:c.instructions+=2;goto B558b8f;
case 0x558b91:c.instructions+=1;goto B558b91;
case 0x558b93:goto L558b93;
case 0x558b96:goto L558b96;
case 0x558b9b:goto L558b9b;
case 0x558b9d:c.instructions+=1;goto B558b9d;
case 0x558b9f:goto L558b9f;
case 0x558ba4:c.instructions+=2;goto B558ba4;
case 0x558ba7:c.instructions+=1;goto B558ba7;
case 0x558ba9:goto L558ba9;
case 0x558bac:c.instructions+=1;goto B558bac;
case 0x558bae:goto L558bae;
case 0x558bb3:c.instructions+=1;goto B558bb3;
case 0x558bb8:goto L558bb8;
case 0x558bba:c.instructions+=1;goto B558bba;
case 0x558bbc:goto L558bbc;
case 0x558bbe:c.instructions+=1;goto B558bbe;
case 0x558bc0:goto L558bc0;
case 0x558bc5:c.instructions+=8;goto B558bc5;
case 0x558bc7:c.instructions+=7;goto B558bc7;
case 0x558bcc:c.instructions+=6;goto B558bcc;
case 0x558bd1:c.instructions+=5;goto B558bd1;
case 0x558bd6:c.instructions+=4;goto B558bd6;
case 0x558bdb:c.instructions+=3;goto B558bdb;
case 0x558be0:c.instructions+=2;goto B558be0;
case 0x558be5:c.instructions+=1;goto B558be5;
case 0x558bea:goto L558bea;
case 0x558beb:c.instructions+=1;goto B558beb;
case 0x558bf0:goto L558bf0;
case 0x558bf3:goto L558bf3;
case 0x558bf4:c.instructions+=1;goto B558bf4;
case 0x558c00:goto L558c00;
case 0x558c03:c.instructions+=5;goto B558c03;
case 0x558c04:c.instructions+=4;goto B558c04;
case 0x558c06:c.instructions+=3;goto B558c06;
case 0x558c0c:c.instructions+=2;goto B558c0c;
case 0x558c0e:c.instructions+=1;goto B558c0e;
case 0x558c10:goto L558c10;
case 0x558c16:c.instructions+=2;goto B558c16;
case 0x558c18:c.instructions+=1;goto B558c18;
case 0x558c1b:goto L558c1b;
case 0x558c1f:c.instructions+=4;goto B558c1f;
case 0x558c20:c.instructions+=3;goto B558c20;
case 0x558c21:c.instructions+=2;goto B558c21;
case 0x558c22:c.instructions+=1;goto B558c22;
case 0x558c28:goto L558c28;
case 0x558c2b:c.instructions+=2;goto B558c2b;
case 0x558c2d:c.instructions+=1;goto B558c2d;
case 0x558c33:goto L558c33;
case 0x558c36:c.instructions+=4;goto B558c36;
case 0x558c38:c.instructions+=3;goto B558c38;
case 0x558c3a:c.instructions+=2;goto B558c3a;
case 0x558c3d:c.instructions+=1;goto B558c3d;
case 0x558c3f:goto L558c3f;
case 0x558c45:c.instructions+=4;goto B558c45;
case 0x558c47:c.instructions+=3;goto B558c47;
case 0x558c4b:c.instructions+=2;goto B558c4b;
case 0x558c4c:c.instructions+=1;goto B558c4c;
case 0x558c4f:goto L558c4f;
case 0x558c53:c.instructions+=5;goto B558c53;
case 0x558c54:c.instructions+=4;goto B558c54;
case 0x558c58:c.instructions+=3;goto B558c58;
case 0x558c59:c.instructions+=2;goto B558c59;
case 0x558c5c:c.instructions+=1;goto B558c5c;
case 0x558c61:goto L558c61;
case 0x558c63:goto L558c63;
case 0x558c67:goto L558c67;
case 0x558c6d:c.instructions+=4;goto B558c6d;
case 0x558c6f:c.instructions+=3;goto B558c6f;
case 0x558c71:c.instructions+=2;goto B558c71;
case 0x558c75:c.instructions+=1;goto B558c75;
case 0x558c77:goto L558c77;
case 0x558c80:goto L558c80;
case 0x558c86:c.instructions+=5;goto B558c86;
case 0x558c8a:c.instructions+=4;goto B558c8a;
case 0x558c8c:c.instructions+=3;goto B558c8c;
case 0x558c8d:c.instructions+=2;goto B558c8d;
case 0x558c8e:c.instructions+=1;goto B558c8e;
case 0x558c91:goto L558c91;
case 0x558c94:c.instructions+=5;goto B558c94;
case 0x558c96:c.instructions+=4;goto B558c96;
case 0x558c9c:c.instructions+=3;goto B558c9c;
case 0x558c9d:c.instructions+=2;goto B558c9d;
case 0x558c9f:c.instructions+=1;goto B558c9f;
case 0x558ca4:goto L558ca4;
case 0x558caa:c.instructions+=5;goto B558caa;
case 0x558cac:c.instructions+=4;goto B558cac;
case 0x558caf:c.instructions+=3;goto B558caf;
case 0x558cb1:c.instructions+=2;goto B558cb1;
case 0x558cb5:c.instructions+=1;goto B558cb5;
case 0x558cb7:goto L558cb7;
case 0x558cbd:c.instructions+=2;goto B558cbd;
case 0x558cbf:c.instructions+=1;goto B558cbf;
case 0x558cc1:goto L558cc1;
case 0x558cc2:c.instructions+=2;goto B558cc2;
case 0x558cc4:c.instructions+=1;goto B558cc4;
case 0x558cc9:goto L558cc9;
case 0x558ccc:c.instructions+=2;goto B558ccc;
case 0x558cce:c.instructions+=1;goto B558cce;
case 0x558cd0:goto L558cd0;
case 0x558cd1:c.instructions+=2;goto B558cd1;
case 0x558cd3:c.instructions+=1;goto B558cd3;
case 0x558cd8:goto L558cd8;
case 0x558cdb:c.instructions+=2;goto B558cdb;
case 0x558cdd:c.instructions+=1;goto B558cdd;
case 0x558cdf:goto L558cdf;
case 0x558ce4:c.instructions+=3;goto B558ce4;
case 0x558ce7:c.instructions+=2;goto B558ce7;
case 0x558cef:c.instructions+=1;goto B558cef;
case 0x558cf0:goto L558cf0;
case 0x558cf3:c.instructions+=1;goto B558cf3;
case 0x558cf5:goto L558cf5;
case 0x558cfb:c.instructions+=3;goto B558cfb;
case 0x558cfd:c.instructions+=2;goto B558cfd;
case 0x558d02:c.instructions+=1;goto B558d02;
case 0x558d04:goto L558d04;
case 0x558d06:c.instructions+=1;goto B558d06;
case 0x558d10:goto L558d10;
case 0x558d13:c.instructions+=5;goto B558d13;
case 0x558d19:c.instructions+=4;goto B558d19;
case 0x558d1b:c.instructions+=3;goto B558d1b;
case 0x558d1d:c.instructions+=2;goto B558d1d;
case 0x558d1f:c.instructions+=1;goto B558d1f;
case 0x558d22:goto L558d22;
case 0x558d27:c.instructions+=3;goto B558d27;
case 0x558d29:c.instructions+=2;goto B558d29;
case 0x558d2b:c.instructions+=1;goto B558d2b;
case 0x558d2d:goto L558d2d;
case 0x558d2f:c.instructions+=2;goto B558d2f;
case 0x558d31:c.instructions+=1;goto B558d31;
case 0x558d33:goto L558d33;
case 0x558d35:c.instructions+=2;goto B558d35;
case 0x558d37:c.instructions+=1;goto B558d37;
case 0x558d39:goto L558d39;
case 0x558d3f:goto L558d3f;
case 0x558d40:c.instructions+=3;goto B558d40;
case 0x558d43:c.instructions+=2;goto B558d43;
case 0x558d46:c.instructions+=1;goto B558d46;
case 0x558d48:goto L558d48;
case 0x558d4c:c.instructions+=6;goto B558d4c;
case 0x558d52:c.instructions+=5;goto B558d52;
case 0x558d54:c.instructions+=4;goto B558d54;
case 0x558d58:c.instructions+=3;goto B558d58;
case 0x558d5b:c.instructions+=2;goto B558d5b;
case 0x558d5d:c.instructions+=1;goto B558d5d;
case 0x558d5f:goto L558d5f;
case 0x558d63:c.instructions+=6;goto B558d63;
case 0x558d69:c.instructions+=5;goto B558d69;
case 0x558d6b:c.instructions+=4;goto B558d6b;
case 0x558d6e:c.instructions+=3;goto B558d6e;
case 0x558d6f:c.instructions+=2;goto B558d6f;
case 0x558d73:c.instructions+=1;goto B558d73;
case 0x558d79:goto L558d79;
case 0x558d7c:c.instructions+=1;goto B558d7c;
case 0x558d7f:goto L558d7f;
case 0x558d83:c.instructions+=1;goto B558d83;
case 0x558d89:goto L558d89;
case 0x558d8d:c.instructions+=1;goto B558d8d;
case 0x558d91:goto L558d91;
case 0x558d95:c.instructions+=3;goto B558d95;
case 0x558d97:c.instructions+=2;goto B558d97;
case 0x558d99:c.instructions+=1;goto B558d99;
case 0x558d9b:goto L558d9b;
case 0x558d9e:c.instructions+=1;goto B558d9e;
case 0x558da0:goto L558da0;
case 0x558da5:goto L558da5;
case 0x558dab:c.instructions+=8;goto B558dab;
case 0x558dad:c.instructions+=7;goto B558dad;
case 0x558daf:c.instructions+=6;goto B558daf;
case 0x558db2:c.instructions+=5;goto B558db2;
case 0x558db3:c.instructions+=4;goto B558db3;
case 0x558db9:c.instructions+=3;goto B558db9;
case 0x558dbf:c.instructions+=2;goto B558dbf;
case 0x558dc1:c.instructions+=1;goto B558dc1;
case 0x558dc3:goto L558dc3;
case 0x558dc6:c.instructions+=6;goto B558dc6;
case 0x558dc8:c.instructions+=5;goto B558dc8;
case 0x558dcb:c.instructions+=4;goto B558dcb;
case 0x558dcf:c.instructions+=3;goto B558dcf;
case 0x558dd2:c.instructions+=2;goto B558dd2;
case 0x558dd5:c.instructions+=1;goto B558dd5;
case 0x558dd7:goto L558dd7;
case 0x558dd8:c.instructions+=3;goto B558dd8;
case 0x558dd9:c.instructions+=2;goto B558dd9;
case 0x558ddb:c.instructions+=1;goto B558ddb;
case 0x558de0:goto L558de0;
case 0x558de3:c.instructions+=2;goto B558de3;
case 0x558de5:c.instructions+=1;goto B558de5;
case 0x558de7:goto L558de7;
case 0x558deb:goto L558deb;
case 0x558ded:c.instructions+=2;goto B558ded;
case 0x558def:c.instructions+=1;goto B558def;
case 0x558df1:goto L558df1;
case 0x558df5:goto L558df5;
case 0x558df7:c.instructions+=1;goto B558df7;
case 0x558dfc:goto L558dfc;
case 0x558dfe:c.instructions+=1;goto B558dfe;
case 0x558e03:goto L558e03;
case 0x558e09:c.instructions+=2;goto B558e09;
case 0x558e0b:c.instructions+=1;goto B558e0b;
case 0x558e0d:goto L558e0d;
case 0x558e0f:c.instructions+=1;goto B558e0f;
case 0x558e14:goto L558e14;
case 0x558e16:c.instructions+=3;goto B558e16;
case 0x558e1a:c.instructions+=2;goto B558e1a;
case 0x558e21:c.instructions+=1;goto B558e21;
case 0x558e27:goto L558e27;
case 0x558e29:goto L558e29;
case 0x558e2f:c.instructions+=2;goto B558e2f;
case 0x558e31:c.instructions+=1;goto B558e31;
case 0x558e33:goto L558e33;
case 0x558e36:c.instructions+=5;goto B558e36;
case 0x558e38:c.instructions+=4;goto B558e38;
case 0x558e3c:c.instructions+=3;goto B558e3c;
case 0x558e3f:c.instructions+=2;goto B558e3f;
case 0x558e42:c.instructions+=1;goto B558e42;
case 0x558e44:goto L558e44;
case 0x558e45:c.instructions+=3;goto B558e45;
case 0x558e46:c.instructions+=2;goto B558e46;
case 0x558e48:c.instructions+=1;goto B558e48;
case 0x558e4d:goto L558e4d;
case 0x558e50:c.instructions+=2;goto B558e50;
case 0x558e52:c.instructions+=1;goto B558e52;
case 0x558e54:goto L558e54;
case 0x558e57:c.instructions+=2;goto B558e57;
case 0x558e59:c.instructions+=1;goto B558e59;
case 0x558e5b:goto L558e5b;
case 0x558e61:c.instructions+=5;goto B558e61;
case 0x558e63:c.instructions+=4;goto B558e63;
case 0x558e64:c.instructions+=3;goto B558e64;
case 0x558e65:c.instructions+=2;goto B558e65;
case 0x558e66:c.instructions+=1;goto B558e66;
case 0x558e68:goto L558e68;
case 0x558e6e:c.instructions+=2;goto B558e6e;
case 0x558e70:c.instructions+=1;goto B558e70;
case 0x558e73:goto L558e73;
case 0x558e74:c.instructions+=2;goto B558e74;
case 0x558e77:c.instructions+=1;goto B558e77;
case 0x558e80:goto L558e80;
case 0x558e85:c.instructions+=4;goto B558e85;
case 0x558e87:c.instructions+=3;goto B558e87;
case 0x558e91:c.instructions+=2;goto B558e91;
case 0x558e9b:c.instructions+=1;goto B558e9b;
case 0x558e9d:goto L558e9d;
case 0x558ea2:goto L558ea2;
case 0x558eac:goto L558eac;
case 0x558eb2:c.instructions+=2;goto B558eb2;
case 0x558eb4:c.instructions+=1;goto B558eb4;
case 0x558eb6:goto L558eb6;
case 0x558ebb:c.instructions+=6;goto B558ebb;
case 0x558ebd:c.instructions+=5;goto B558ebd;
case 0x558ec2:c.instructions+=4;goto B558ec2;
case 0x558ec4:c.instructions+=3;goto B558ec4;
case 0x558ec5:c.instructions+=2;goto B558ec5;
case 0x558ec7:c.instructions+=1;goto B558ec7;
case 0x558ecc:goto L558ecc;
case 0x558ed2:c.instructions+=1;goto B558ed2;
case 0x558ed7:goto L558ed7;
case 0x558ee0:goto L558ee0;
case 0x558ee5:c.instructions+=2;goto B558ee5;
case 0x558ee7:c.instructions+=1;goto B558ee7;
case 0x558ee9:goto L558ee9;
case 0x558eec:c.instructions+=3;goto B558eec;
case 0x558eee:c.instructions+=2;goto B558eee;
case 0x558ef0:c.instructions+=1;goto B558ef0;
case 0x558ef5:goto L558ef5;
case 0x558f00:goto L558f00;
case 0x558f05:c.instructions+=2;goto B558f05;
case 0x558f07:c.instructions+=1;goto B558f07;
case 0x558f09:goto L558f09;
case 0x558f0c:c.instructions+=3;goto B558f0c;
case 0x558f0e:c.instructions+=2;goto B558f0e;
case 0x558f10:c.instructions+=1;goto B558f10;
case 0x558f15:goto L558f15;
case 0x558f1b:c.instructions+=2;goto B558f1b;
case 0x558f1d:c.instructions+=1;goto B558f1d;
case 0x558f1f:goto L558f1f;
case 0x558f23:c.instructions+=2;goto B558f23;
case 0x558f25:c.instructions+=1;goto B558f25;
case 0x558f27:goto L558f27;
case 0x558f28:c.instructions+=1;goto B558f28;
case 0x558f2d:goto L558f2d;
case 0x558f33:c.instructions+=1;goto B558f33;
case 0x558f38:goto L558f38;
case 0x558f3a:c.instructions+=2;goto B558f3a;
case 0x558f3f:c.instructions+=1;goto B558f3f;
case 0x558f44:goto L558f44;
case 0x558f4a:c.instructions+=1;goto B558f4a;
case 0x558f4f:goto L558f4f;
case 0x558f50:goto L558f50;
case 0x558f55:c.instructions+=5;goto B558f55;
case 0x558f56:c.instructions+=4;goto B558f56;
case 0x558f58:c.instructions+=3;goto B558f58;
case 0x558f5a:c.instructions+=2;goto B558f5a;
case 0x558f5b:c.instructions+=1;goto B558f5b;
case 0x558f5d:goto L558f5d;
case 0x558f5e:c.instructions+=1;goto B558f5e;
case 0x558f63:goto L558f63;
case 0x558f66:c.instructions+=1;goto B558f66;
case 0x558f6c:goto L558f6c;
case 0x558f71:c.instructions+=2;goto B558f71;
case 0x558f76:c.instructions+=1;goto B558f76;
case 0x558f7b:goto L558f7b;
case 0x558f7f:c.instructions+=3;goto B558f7f;
case 0x558f82:c.instructions+=2;goto B558f82;
case 0x558f84:c.instructions+=1;goto B558f84;
case 0x558f86:goto L558f86;
case 0x558f89:c.instructions+=3;goto B558f89;
case 0x558f8a:c.instructions+=2;goto B558f8a;
case 0x558f8f:c.instructions+=1;goto B558f8f;
case 0x558f94:goto L558f94;
case 0x558f97:goto L558f97;
case 0x558f9b:c.instructions+=2;goto B558f9b;
case 0x558f9e:c.instructions+=1;goto B558f9e;
case 0x558fa0:goto L558fa0;
case 0x558fa6:c.instructions+=4;goto B558fa6;
case 0x558fa7:c.instructions+=3;goto B558fa7;
case 0x558fac:c.instructions+=2;goto B558fac;
case 0x558fb1:c.instructions+=1;goto B558fb1;
case 0x558fb6:goto L558fb6;
case 0x558fb9:c.instructions+=3;goto B558fb9;
case 0x558fba:c.instructions+=2;goto B558fba;
case 0x558fbb:c.instructions+=1;goto B558fbb;
case 0x558fc0:goto L558fc0;
case 0x558fc3:c.instructions+=2;goto B558fc3;
case 0x558fc5:c.instructions+=1;goto B558fc5;
case 0x558fca:goto L558fca;
case 0x558fd4:c.instructions+=1;goto B558fd4;
case 0x558fd9:goto L558fd9;
case 0x558fdf:c.instructions+=2;goto B558fdf;
case 0x558fe1:c.instructions+=1;goto B558fe1;
case 0x558fe7:goto L558fe7;
case 0x558fed:c.instructions+=4;goto B558fed;
case 0x558fee:c.instructions+=3;goto B558fee;
case 0x558fef:c.instructions+=2;goto B558fef;
case 0x558ff4:c.instructions+=1;goto B558ff4;
case 0x558ff9:goto L558ff9;
case 0x558ffe:goto L558ffe;
case 0x558fff:c.instructions+=1;goto B558fff;
default:missing_instruction(c.pc);}
B558000:L558000:{c.instructions+=1;NFSU2_TR(0x558000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558005ull));
TAIL_STATIC(0x575630u,575);
}
B558005:L558005:{c.instructions+=4;NFSU2_TR(0x558005);
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
B558008:{NFSU2_TR(0x558008);
__builtin_memmove((R+0),(R+24),4);
}
B55800a:{NFSU2_TR(0x55800a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55800b:{NFSU2_TR(0x55800b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558010:L558010:{c.instructions+=2;NFSU2_TR(0x558010);
u8 U[4];
w4(U+0,u32(0x79ce04ull));
s4(u32(r4(R+4)),r4(U+0));
}
B558016:{NFSU2_TR(0x558016);
TAIL_STATIC(0x4defb0u,4de);
}
B558020:L558020:{c.instructions+=4;NFSU2_TR(0x558020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B558023:{NFSU2_TR(0x558023);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558024:{NFSU2_TR(0x558024);
u8 U[4];
w4(U+0,u32(0x79d160ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558029:{NFSU2_TR(0x558029);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55802eull));
TAIL_STATIC(0x50d510u,50d);
}
B55802e:L55802e:{c.instructions+=4;NFSU2_TR(0x55802e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B558032:{NFSU2_TR(0x558032);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558033:{NFSU2_TR(0x558033);
u8 U[4];
w4(U+0,u32(0x79d148ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558038:{NFSU2_TR(0x558038);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55803dull));
TAIL_STATIC(0x50d510u,50d);
}
B55803d:L55803d:{c.instructions+=4;NFSU2_TR(0x55803d);
__builtin_memmove((R+0),gp(0x8383b4),1);
}
B558042:{NFSU2_TR(0x558042);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B558045:{NFSU2_TR(0x558045);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B558047:{NFSU2_TR(0x558047);
if(r1(R+518)){{goto L55805e;}}
}
B558049:L558049:{c.instructions+=3;NFSU2_TR(0x558049);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55804a:{NFSU2_TR(0x55804a);
u8 U[4];
w4(U+0,u32(0x79d0a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55804f:{NFSU2_TR(0x55804f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558054ull));
TAIL_STATIC(0x50d510u,50d);
}
B558054:L558054:{c.instructions+=5;NFSU2_TR(0x558054);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B558057:{NFSU2_TR(0x558057);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B558059:{NFSU2_TR(0x558059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55805a:{NFSU2_TR(0x55805a);
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
B55805d:{NFSU2_TR(0x55805d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55805e:L55805e:{c.instructions+=5;NFSU2_TR(0x55805e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55805f:{NFSU2_TR(0x55805f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558060:{NFSU2_TR(0x558060);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558061:{NFSU2_TR(0x558061);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558062:{NFSU2_TR(0x558062);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558067ull));
TAIL_STATIC(0x526c40u,526);
}
B558067:L558067:{c.instructions+=8;NFSU2_TR(0x558067);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x324ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55806d:{NFSU2_TR(0x55806d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x32full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B558074:{NFSU2_TR(0x558074);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x330ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55807e:{NFSU2_TR(0x55807e);
__builtin_memmove((R+0),gp(0x838974),4);
}
B558083:{NFSU2_TR(0x558083);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B558086:{NFSU2_TR(0x558086);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558088:{NFSU2_TR(0x558088);
w4(R+12,u32(0xffull));
}
B55808d:{NFSU2_TR(0x55808d);
if(r1(R+518)){{goto L55816d;}}
}
B558093:L558093:{c.instructions+=3;NFSU2_TR(0x558093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558094:{NFSU2_TR(0x558094);
u8 U[4];
w4(U+0,u32(0x79d06cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558099:{NFSU2_TR(0x558099);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55809eull));
TAIL_STATIC(0x50d510u,50d);
}
B55809e:L55809e:{c.instructions+=3;NFSU2_TR(0x55809e);
u8 U[4];
w4(U+0,u32(0x838640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5580a3:{NFSU2_TR(0x5580a3);
u8 U[4];
w4(U+0,u32(0x79d148ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5580a8:{NFSU2_TR(0x5580a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5580adull));
TAIL_STATIC(0x50d510u,50d);
}
B5580ad:L5580ad:{c.instructions+=4;NFSU2_TR(0x5580ad);
__builtin_memmove((R+0),gp(0x838970),4);
}
B5580b2:{NFSU2_TR(0x5580b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5580b5:{NFSU2_TR(0x5580b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5580b7:{NFSU2_TR(0x5580b7);
if(r1(R+518)){{goto L5580e5;}}
}
B5580b9:L5580b9:{c.instructions+=5;NFSU2_TR(0x5580b9);
__builtin_memmove((R+4),gp(0x838960),4);
}
B5580bf:{NFSU2_TR(0x5580bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5580c0:{NFSU2_TR(0x5580c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5580c1:{NFSU2_TR(0x5580c1);
u8 U[4];
w4(U+0,u32(0x79d020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5580c6:{NFSU2_TR(0x5580c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5580cbull));
TAIL_STATIC(0x50d510u,50d);
}
B5580cb:L5580cb:{c.instructions+=7;NFSU2_TR(0x5580cb);
__builtin_memmove((R+8),gp(0x838970),4);
}
B5580d1:{NFSU2_TR(0x5580d1);
__builtin_memmove((R+0),gp(0x838960),4);
}
B5580d6:{NFSU2_TR(0x5580d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5580d9:{NFSU2_TR(0x5580d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5580da:{NFSU2_TR(0x5580da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5580db:{NFSU2_TR(0x5580db);
w4(R+4,u32(0x8637b0ull));
}
B5580e0:{NFSU2_TR(0x5580e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5580e5ull));
TAIL_STATIC(0x55dc20u,55d);
}
B5580e5:L5580e5:{c.instructions+=3;NFSU2_TR(0x5580e5);
__builtin_memmove((R+28),gp(0x838964),4);
}
B5580eb:{NFSU2_TR(0x5580eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x320ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5580f1:{NFSU2_TR(0x5580f1);
__builtin_memmove((R+24),(R+28),4);
}
B5580f3:L5580f3:{c.instructions+=4;NFSU2_TR(0x5580f3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B5580f5:{NFSU2_TR(0x5580f5);
__builtin_memmove((R+4),(R+8),1);
}
B5580f7:{NFSU2_TR(0x5580f7);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5580f9:{NFSU2_TR(0x5580f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L558117;}}
}
B5580fb:L5580fb:{c.instructions+=2;NFSU2_TR(0x5580fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5580fd:{NFSU2_TR(0x5580fd);
if(r1(R+518)){{goto L558113;}}
}
B5580ff:L5580ff:{c.instructions+=4;NFSU2_TR(0x5580ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B558102:{NFSU2_TR(0x558102);
__builtin_memmove((R+4),(R+8),1);
}
B558104:{NFSU2_TR(0x558104);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B558107:{NFSU2_TR(0x558107);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L558117;}}
}
B558109:L558109:{c.instructions+=4;NFSU2_TR(0x558109);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B55810c:{NFSU2_TR(0x55810c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B55810f:{NFSU2_TR(0x55810f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B558111:{NFSU2_TR(0x558111);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5580f3u);}goto L5580f3;}}
}
B558113:L558113:{c.instructions+=2;NFSU2_TR(0x558113);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B558115:{NFSU2_TR(0x558115);
{goto L55811c;}
}
B558117:L558117:{c.instructions+=2;NFSU2_TR(0x558117);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B558119:{NFSU2_TR(0x558119);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B55811c:L55811c:{c.instructions+=2;NFSU2_TR(0x55811c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55811e:{NFSU2_TR(0x55811e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55814d;}}
}
B558120:L558120:{c.instructions+=7;NFSU2_TR(0x558120);
__builtin_memmove((R+0),gp(0x838960),4);
}
B558125:{NFSU2_TR(0x558125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x324ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55812b:{NFSU2_TR(0x55812b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55812c:{NFSU2_TR(0x55812c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55812d:{NFSU2_TR(0x55812d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55812e:{NFSU2_TR(0x55812e);
u8 U[4];
w4(U+0,u32(0x79cf90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558133:{NFSU2_TR(0x558133);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558138ull));
TAIL_STATIC(0x50d510u,50d);
}
B558138:L558138:{c.instructions+=4;NFSU2_TR(0x558138);
__builtin_memmove((R+8),gp(0x838960),4);
}
B55813e:{NFSU2_TR(0x55813e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x320ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558144:{NFSU2_TR(0x558144);
__builtin_memmove((R+28),gp(0x838964),4);
}
B55814a:{NFSU2_TR(0x55814a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55814d:L55814d:{c.instructions+=2;NFSU2_TR(0x55814d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55814e:{NFSU2_TR(0x55814e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558153ull));
TAIL_STATIC(0x52cef0u,52c);
}
B558153:L558153:{c.instructions+=3;NFSU2_TR(0x558153);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B558156:{NFSU2_TR(0x558156);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558158:{NFSU2_TR(0x558158);
if(r1(R+518)){{goto L55815d;}}
}
B55815a:L55815a:{c.instructions+=1;NFSU2_TR(0x55815a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55815d:L55815d:{c.instructions+=3;NFSU2_TR(0x55815d);
__builtin_memmove((R+0),gp(0x838974),4);
}
B558162:{NFSU2_TR(0x558162);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558163:{NFSU2_TR(0x558163);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558168ull));
TAIL_STATIC(0x540a60u,540);
}
B558168:L558168:{c.instructions+=2;NFSU2_TR(0x558168);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55816b:{NFSU2_TR(0x55816b);
{goto L558187;}
}
B55816d:L55816d:{c.instructions+=3;NFSU2_TR(0x55816d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x320ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558173:{NFSU2_TR(0x558173);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558174:{NFSU2_TR(0x558174);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558179ull));
TAIL_STATIC(0x52cef0u,52c);
}
B558179:L558179:{c.instructions+=3;NFSU2_TR(0x558179);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55817c:{NFSU2_TR(0x55817c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55817e:{NFSU2_TR(0x55817e);
if(r1(R+518)){{goto L55821b;}}
}
B558184:L558184:{c.instructions+=1;NFSU2_TR(0x558184);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B558187:L558187:{c.instructions+=2;NFSU2_TR(0x558187);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558189:{NFSU2_TR(0x558189);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55821b;}}
}
B55818f:L55818f:{c.instructions+=2;NFSU2_TR(0x55818f);
u8 U[4];
w4(U+0,u32(0x79cf28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558194:{NFSU2_TR(0x558194);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558199ull));
TAIL_STATIC(0x50d510u,50d);
}
B558199:L558199:{c.instructions+=2;NFSU2_TR(0x558199);
u8 U[4];
w4(U+0,u32(0x790024ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55819e:{NFSU2_TR(0x55819e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5581a3ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B5581a3:L5581a3:{c.instructions+=3;NFSU2_TR(0x5581a3);
u8 U[4];
w4(U+0,u32(0x790014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5581a8:{NFSU2_TR(0x5581a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5581ac:{NFSU2_TR(0x5581ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5581b1ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B5581b1:L5581b1:{c.instructions+=3;NFSU2_TR(0x5581b1);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5581b6:{NFSU2_TR(0x5581b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5581ba:{NFSU2_TR(0x5581ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5581bfull));
TAIL_STATIC(0x50b9c0u,50b);
}
B5581bf:L5581bf:{c.instructions+=3;NFSU2_TR(0x5581bf);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5581c4:{NFSU2_TR(0x5581c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5581c8:{NFSU2_TR(0x5581c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5581cdull));
TAIL_STATIC(0x50b9c0u,50b);
}
B5581cd:L5581cd:{c.instructions+=5;NFSU2_TR(0x5581cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5581d1:{NFSU2_TR(0x5581d1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5581d3:{NFSU2_TR(0x5581d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5581d4:{NFSU2_TR(0x5581d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5581d8:{NFSU2_TR(0x5581d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5581ddull));
TAIL_STATIC(0x50ce30u,50c);
}
B5581dd:L5581dd:{c.instructions+=3;NFSU2_TR(0x5581dd);
__builtin_memmove((R+24),(R+0),4);
}
B5581df:{NFSU2_TR(0x5581df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5581e0:{NFSU2_TR(0x5581e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5581e5ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5581e5:L5581e5:{c.instructions+=3;NFSU2_TR(0x5581e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5581e8:{NFSU2_TR(0x5581e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5581ea:{NFSU2_TR(0x5581ea);
if(r1(R+518)){{goto L558209;}}
}
B5581ec:L5581ec:{c.instructions+=5;NFSU2_TR(0x5581ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5581ef:{NFSU2_TR(0x5581ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5581f0:{NFSU2_TR(0x5581f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5581f1:{NFSU2_TR(0x5581f1);
u8 U[4];
w4(U+0,u32(0x79cef8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5581f6:{NFSU2_TR(0x5581f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5581fbull));
TAIL_STATIC(0x50d510u,50d);
}
B5581fb:L5581fb:{c.instructions+=3;NFSU2_TR(0x5581fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5581fe:{NFSU2_TR(0x5581fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558200:{NFSU2_TR(0x558200);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55821b;}}
}
B558202:L558202:{c.instructions+=2;NFSU2_TR(0x558202);
u8 U[4];
w4(U+0,u32(0x79cec0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558207:{NFSU2_TR(0x558207);
{goto L55820e;}
}
B558209:L558209:{c.instructions+=1;NFSU2_TR(0x558209);
u8 U[4];
w4(U+0,u32(0x79ce8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55820e:L55820e:{c.instructions+=1;NFSU2_TR(0x55820e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558213ull));
TAIL_STATIC(0x50d510u,50d);
}
B558213:L558213:{c.instructions+=2;NFSU2_TR(0x558213);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B558216:{NFSU2_TR(0x558216);
w4(R+12,u32(0xffull));
}
B55821b:L55821b:{c.instructions+=4;NFSU2_TR(0x55821b);
__builtin_memmove((R+0),gp(0x7f6de0),4);
}
B558220:{NFSU2_TR(0x558220);
w4(R+4,u32(0xceull));
}
B558225:{NFSU2_TR(0x558225);
__builtin_memmove((R+24),(R+20),4);
}
B558227:{NFSU2_TR(0x558227);
w4(R+28,u32(0x838640ull));
}
B55822c:L55822c:{c.instructions+=1;NFSU2_TR(0x55822c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L55822e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55822cu);}goto L55822c;}
}
B55822e:L55822e:{c.instructions+=7;NFSU2_TR(0x55822e);
__builtin_memmove(gp(0x838974),(R+0),4);
}
B558233:{NFSU2_TR(0x558233);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B558234:{NFSU2_TR(0x558234);
__builtin_memmove(gp(0x7f6de0),(R+0),4);
}
B558239:{NFSU2_TR(0x558239);
__builtin_memmove((R+0),gp(0x838964),4);
}
B55823e:{NFSU2_TR(0x55823e);
u8 U[4];
w4(U+0,u32(0x5542a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558243:{NFSU2_TR(0x558243);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558244:{NFSU2_TR(0x558244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558249ull));
TAIL_STATIC(0x50b8e0u,50b);
}
B558249:L558249:{c.instructions+=4;NFSU2_TR(0x558249);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55824f:{NFSU2_TR(0x55824f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B558252:{NFSU2_TR(0x558252);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558254:{NFSU2_TR(0x558254);
if(r1(R+518)){{goto L558270;}}
}
B558256:L558256:{c.instructions+=8;NFSU2_TR(0x558256);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x320ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55825c:{NFSU2_TR(0x55825c);
__builtin_memmove((R+0),gp(0x838964),4);
}
B558261:{NFSU2_TR(0x558261);
u8 U[4];
w4(U+0,u32(0x838640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558266:{NFSU2_TR(0x558266);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558267:{NFSU2_TR(0x558267);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558268:{NFSU2_TR(0x558268);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558269:{NFSU2_TR(0x558269);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55826b:{NFSU2_TR(0x55826b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558270ull));
TAIL_STATIC(0x555d00u,555);
}
B558270:L558270:{c.instructions+=5;NFSU2_TR(0x558270);
__builtin_memmove((R+4),gp(0x838974),4);
}
B558276:{NFSU2_TR(0x558276);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558277:{NFSU2_TR(0x558277);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558278:{NFSU2_TR(0x558278);
u8 U[4];
w4(U+0,u32(0x79ce58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55827d:{NFSU2_TR(0x55827d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558282ull));
TAIL_STATIC(0x50d510u,50d);
}
B558282:L558282:{c.instructions+=2;NFSU2_TR(0x558282);
u8 U[4];
w4(U+0,u32(0x79ce20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558287:{NFSU2_TR(0x558287);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55828cull));
TAIL_STATIC(0x50d510u,50d);
}
B55828c:L55828c:{c.instructions+=8;NFSU2_TR(0x55828c);
__builtin_memmove((R+0),gp(0x838974),4);
}
B558291:{NFSU2_TR(0x558291);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B558294:{NFSU2_TR(0x558294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B558295:{NFSU2_TR(0x558295);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B558296:{NFSU2_TR(0x558296);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B558297:{NFSU2_TR(0x558297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B558298:{NFSU2_TR(0x558298);
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
B55829b:{NFSU2_TR(0x55829b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5582a0:L5582a0:{c.instructions+=3;NFSU2_TR(0x5582a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x338ull))));
}
B5582a6:{NFSU2_TR(0x5582a6);
__builtin_memmove((R+4),(R+16),4);
}
B5582aa:{NFSU2_TR(0x5582aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5582afull));
TAIL_STATIC(0x4ff250u,4ff);
}
B5582af:L5582af:{c.instructions+=7;NFSU2_TR(0x5582af);
u8 U[8];
w4(U+0,u32(u32(u32(0x348ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5582b6:{NFSU2_TR(0x5582b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x344ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5582bd:{NFSU2_TR(0x5582bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5582be:{NFSU2_TR(0x5582be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5582bf:{NFSU2_TR(0x5582bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5582c3:{NFSU2_TR(0x5582c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5582c4:{NFSU2_TR(0x5582c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5582c9ull));
TAIL_STATIC(0x43fbc0u,43f);
}
B5582c9:L5582c9:{c.instructions+=10;NFSU2_TR(0x5582c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x348ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5582d0:{NFSU2_TR(0x5582d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5582d7:{NFSU2_TR(0x5582d7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5582d9:{NFSU2_TR(0x5582d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x334ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5582e0:{NFSU2_TR(0x5582e0);
u8 U[5];
w4(U+0,u32(u32(u32(0x338ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5582e7:{NFSU2_TR(0x5582e7);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5582eb:{NFSU2_TR(0x5582eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5582ec:{NFSU2_TR(0x5582ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x330ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5582f3:{NFSU2_TR(0x5582f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x334ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5582fa:{NFSU2_TR(0x5582fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5582ffull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558020u);}goto L558020;}
}
B5582ff:L5582ff:{c.instructions+=2;NFSU2_TR(0x5582ff);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x348ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x348ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x348ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B558305:{NFSU2_TR(0x558305);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558310:L558310:{c.instructions+=9;NFSU2_TR(0x558310);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558314:{NFSU2_TR(0x558314);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558318:{NFSU2_TR(0x558318);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B55831c:{NFSU2_TR(0x55831c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55831d:{NFSU2_TR(0x55831d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558321:{NFSU2_TR(0x558321);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558322:{NFSU2_TR(0x558322);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558323:{NFSU2_TR(0x558323);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558324:{NFSU2_TR(0x558324);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558329ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5582a0u);}goto L5582a0;}
}
B558329:L558329:{c.instructions+=2;NFSU2_TR(0x558329);
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
B55832c:{NFSU2_TR(0x55832c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558330:L558330:{c.instructions+=3;NFSU2_TR(0x558330);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558334:{NFSU2_TR(0x558334);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x200ull))));
}
B55833a:{NFSU2_TR(0x55833a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55833full));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B55833f:L55833f:{c.instructions+=2;NFSU2_TR(0x55833f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558341:{NFSU2_TR(0x558341);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55834d;}}
}
B558343:L558343:{c.instructions+=2;NFSU2_TR(0x558343);
w4(R+8,u32(0xc01a6f63ull));
}
B558348:{NFSU2_TR(0x558348);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55834dull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B55834d:L55834d:{c.instructions+=5;NFSU2_TR(0x55834d);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558352:{NFSU2_TR(0x558352);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558353:{NFSU2_TR(0x558353);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B558357:{NFSU2_TR(0x558357);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558358:{NFSU2_TR(0x558358);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55835dull));
TAIL_STATIC(0x43dc00u,43d);
}
B55835d:L55835d:{c.instructions+=9;NFSU2_TR(0x55835d);
u8 U[8];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558364:{NFSU2_TR(0x558364);
u8 U[4];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B55836b:{NFSU2_TR(0x55836b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55836c:{NFSU2_TR(0x55836c);
u8 U[8];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558373:{NFSU2_TR(0x558373);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B558377:{NFSU2_TR(0x558377);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558378:{NFSU2_TR(0x558378);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558379:{NFSU2_TR(0x558379);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55837a:{NFSU2_TR(0x55837a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55837full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5582a0u);}goto L5582a0;}
}
B55837f:L55837f:{c.instructions+=2;NFSU2_TR(0x55837f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x21cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x21cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x21cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B558385:{NFSU2_TR(0x558385);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558390:L558390:{c.instructions+=3;NFSU2_TR(0x558390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x338ull))));
}
B558396:{NFSU2_TR(0x558396);
__builtin_memmove((R+4),(R+16),4);
}
B55839a:{NFSU2_TR(0x55839a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55839full));
TAIL_STATIC(0x4ff250u,4ff);
}
B55839f:L55839f:{c.instructions+=7;NFSU2_TR(0x55839f);
u8 U[8];
w4(U+0,u32(u32(u32(0x348ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5583a6:{NFSU2_TR(0x5583a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x344ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5583ad:{NFSU2_TR(0x5583ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5583ae:{NFSU2_TR(0x5583ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5583af:{NFSU2_TR(0x5583af);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5583b3:{NFSU2_TR(0x5583b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5583b4:{NFSU2_TR(0x5583b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5583b9ull));
TAIL_STATIC(0x43fbc0u,43f);
}
B5583b9:L5583b9:{c.instructions+=14;NFSU2_TR(0x5583b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x348ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5583c0:{NFSU2_TR(0x5583c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5583c7:{NFSU2_TR(0x5583c7);
w4(R+0,u32(0x1ull));
}
B5583cc:{NFSU2_TR(0x5583cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x334ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5583d3:{NFSU2_TR(0x5583d3);
u8 U[5];
w4(U+0,u32(u32(u32(0x338ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5583da:{NFSU2_TR(0x5583da);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5583de:{NFSU2_TR(0x5583de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5583df:{NFSU2_TR(0x5583df);
u8 U[8];
w4(U+0,u32(u32(u32(0x320ull))+u32(r4(R+16))));
w4(U+4,u32(0x639ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5583ea:{NFSU2_TR(0x5583ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+16))));
w4(U+4,u32(0x34dc1becull));
s4(u32(r4(U+0)),r4(U+4));
}
B5583f5:{NFSU2_TR(0x5583f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x328ull))+u32(r4(R+16))));
w4(U+4,u32(0xb4edeb6dull));
s4(u32(r4(U+0)),r4(U+4));
}
B558400:{NFSU2_TR(0x558400);
u8 U[8];
w4(U+0,u32(u32(u32(0x32cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55840b:{NFSU2_TR(0x55840b);
u8 U[8];
w4(U+0,u32(u32(u32(0x330ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558412:{NFSU2_TR(0x558412);
u8 U[8];
w4(U+0,u32(u32(u32(0x334ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558419:{NFSU2_TR(0x558419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55841eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558020u);}goto L558020;}
}
B55841e:L55841e:{c.instructions+=2;NFSU2_TR(0x55841e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x348ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x348ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x348ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B558424:{NFSU2_TR(0x558424);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558430:L558430:{c.instructions+=3;NFSU2_TR(0x558430);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558434:{NFSU2_TR(0x558434);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x200ull))));
}
B55843a:{NFSU2_TR(0x55843a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55843full));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B55843f:L55843f:{c.instructions+=2;NFSU2_TR(0x55843f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558441:{NFSU2_TR(0x558441);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55844d;}}
}
B558443:L558443:{c.instructions+=2;NFSU2_TR(0x558443);
w4(R+8,u32(0xc01a6f63ull));
}
B558448:{NFSU2_TR(0x558448);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55844dull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B55844d:L55844d:{c.instructions+=5;NFSU2_TR(0x55844d);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558452:{NFSU2_TR(0x558452);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558453:{NFSU2_TR(0x558453);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B558457:{NFSU2_TR(0x558457);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558458:{NFSU2_TR(0x558458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55845dull));
TAIL_STATIC(0x43dc00u,43d);
}
B55845d:L55845d:{c.instructions+=9;NFSU2_TR(0x55845d);
u8 U[8];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558464:{NFSU2_TR(0x558464);
u8 U[4];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B55846b:{NFSU2_TR(0x55846b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55846c:{NFSU2_TR(0x55846c);
u8 U[8];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558473:{NFSU2_TR(0x558473);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B558477:{NFSU2_TR(0x558477);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558478:{NFSU2_TR(0x558478);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558479:{NFSU2_TR(0x558479);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55847a:{NFSU2_TR(0x55847a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55847full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558390u);}goto L558390;}
}
B55847f:L55847f:{c.instructions+=2;NFSU2_TR(0x55847f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x21cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x21cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x21cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B558485:{NFSU2_TR(0x558485);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558490:L558490:{c.instructions+=3;NFSU2_TR(0x558490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x338ull))));
}
B558496:{NFSU2_TR(0x558496);
__builtin_memmove((R+4),(R+16),4);
}
B55849a:{NFSU2_TR(0x55849a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55849full));
TAIL_STATIC(0x4ff250u,4ff);
}
B55849f:L55849f:{c.instructions+=7;NFSU2_TR(0x55849f);
u8 U[8];
w4(U+0,u32(u32(u32(0x358ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5584a6:{NFSU2_TR(0x5584a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x354ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5584ad:{NFSU2_TR(0x5584ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5584ae:{NFSU2_TR(0x5584ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5584af:{NFSU2_TR(0x5584af);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5584b3:{NFSU2_TR(0x5584b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5584b4:{NFSU2_TR(0x5584b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5584b9ull));
TAIL_STATIC(0x43fbc0u,43f);
}
B5584b9:L5584b9:{c.instructions+=17;NFSU2_TR(0x5584b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5584c0:{NFSU2_TR(0x5584c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x358ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5584c7:{NFSU2_TR(0x5584c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x354ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5584ce:{NFSU2_TR(0x5584ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x31cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5584d5:{NFSU2_TR(0x5584d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x348ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5584dc:{NFSU2_TR(0x5584dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x32cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5584e3:{NFSU2_TR(0x5584e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x320ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5584ea:{NFSU2_TR(0x5584ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x34cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5584f1:{NFSU2_TR(0x5584f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5584f8:{NFSU2_TR(0x5584f8);
u8 U[5];
w4(U+0,u32(u32(u32(0x35cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5584ff:{NFSU2_TR(0x5584ff);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B558503:{NFSU2_TR(0x558503);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558504:{NFSU2_TR(0x558504);
u8 U[8];
w4(U+0,u32(u32(u32(0x338ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55850f:{NFSU2_TR(0x55850f);
u8 U[8];
w4(U+0,u32(u32(u32(0x32cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55851a:{NFSU2_TR(0x55851a);
u8 U[8];
w4(U+0,u32(u32(u32(0x334ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558521:{NFSU2_TR(0x558521);
u8 U[5];
w4(U+0,u32(u32(u32(0x33cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B558528:{NFSU2_TR(0x558528);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55852dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558020u);}goto L558020;}
}
B55852d:L55852d:{c.instructions+=2;NFSU2_TR(0x55852d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x348ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x348ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x348ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B558533:{NFSU2_TR(0x558533);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558540:L558540:{c.instructions+=16;NFSU2_TR(0x558540);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558544:{NFSU2_TR(0x558544);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558548:{NFSU2_TR(0x558548);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B55854c:{NFSU2_TR(0x55854c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55854d:{NFSU2_TR(0x55854d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558551:{NFSU2_TR(0x558551);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558552:{NFSU2_TR(0x558552);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558556:{NFSU2_TR(0x558556);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558558:{NFSU2_TR(0x558558);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558559:{NFSU2_TR(0x558559);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55855d:{NFSU2_TR(0x55855d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55855e:{NFSU2_TR(0x55855e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558562:{NFSU2_TR(0x558562);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558563:{NFSU2_TR(0x558563);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558564:{NFSU2_TR(0x558564);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558565:{NFSU2_TR(0x558565);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55856aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558490u);}goto L558490;}
}
B55856a:L55856a:{c.instructions+=2;NFSU2_TR(0x55856a);
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
B55856d:{NFSU2_TR(0x55856d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558570:L558570:{c.instructions+=3;NFSU2_TR(0x558570);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558574:{NFSU2_TR(0x558574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x200ull))));
}
B55857a:{NFSU2_TR(0x55857a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55857full));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B55857f:L55857f:{c.instructions+=2;NFSU2_TR(0x55857f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558581:{NFSU2_TR(0x558581);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55858d;}}
}
B558583:L558583:{c.instructions+=2;NFSU2_TR(0x558583);
w4(R+8,u32(0xc01a6f63ull));
}
B558588:{NFSU2_TR(0x558588);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55858dull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B55858d:L55858d:{c.instructions+=5;NFSU2_TR(0x55858d);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558592:{NFSU2_TR(0x558592);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558593:{NFSU2_TR(0x558593);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B558597:{NFSU2_TR(0x558597);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558598:{NFSU2_TR(0x558598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55859dull));
TAIL_STATIC(0x43dc00u,43d);
}
B55859d:L55859d:{c.instructions+=16;NFSU2_TR(0x55859d);
u8 U[8];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5585a4:{NFSU2_TR(0x5585a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5585ab:{NFSU2_TR(0x5585ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5585ac:{NFSU2_TR(0x5585ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5585b3:{NFSU2_TR(0x5585b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5585b7:{NFSU2_TR(0x5585b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5585b8:{NFSU2_TR(0x5585b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5585bf:{NFSU2_TR(0x5585bf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5585c1:{NFSU2_TR(0x5585c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5585c2:{NFSU2_TR(0x5585c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5585c9:{NFSU2_TR(0x5585c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5585ca:{NFSU2_TR(0x5585ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5585d1:{NFSU2_TR(0x5585d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5585d2:{NFSU2_TR(0x5585d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5585d3:{NFSU2_TR(0x5585d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5585d4:{NFSU2_TR(0x5585d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5585d9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558490u);}goto L558490;}
}
B5585d9:L5585d9:{c.instructions+=2;NFSU2_TR(0x5585d9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x22cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x22cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x22cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5585df:{NFSU2_TR(0x5585df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5585e0:L5585e0:{c.instructions+=15;NFSU2_TR(0x5585e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5585e4:{NFSU2_TR(0x5585e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5585e8:{NFSU2_TR(0x5585e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5585ec:{NFSU2_TR(0x5585ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5585ed:{NFSU2_TR(0x5585ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5585f1:{NFSU2_TR(0x5585f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5585f2:{NFSU2_TR(0x5585f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5585f6:{NFSU2_TR(0x5585f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5585f8:{NFSU2_TR(0x5585f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5585fa:{NFSU2_TR(0x5585fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5585fb:{NFSU2_TR(0x5585fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5585ff:{NFSU2_TR(0x5585ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558600:{NFSU2_TR(0x558600);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558601:{NFSU2_TR(0x558601);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558602:{NFSU2_TR(0x558602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558607ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558490u);}goto L558490;}
}
B558607:L558607:{c.instructions+=2;NFSU2_TR(0x558607);
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
B55860a:{NFSU2_TR(0x55860a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558610:L558610:{c.instructions+=3;NFSU2_TR(0x558610);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558614:{NFSU2_TR(0x558614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x200ull))));
}
B55861a:{NFSU2_TR(0x55861a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55861full));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B55861f:L55861f:{c.instructions+=2;NFSU2_TR(0x55861f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558621:{NFSU2_TR(0x558621);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55862d;}}
}
B558623:L558623:{c.instructions+=2;NFSU2_TR(0x558623);
w4(R+8,u32(0xc01a6f63ull));
}
B558628:{NFSU2_TR(0x558628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55862dull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B55862d:L55862d:{c.instructions+=5;NFSU2_TR(0x55862d);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558632:{NFSU2_TR(0x558632);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558633:{NFSU2_TR(0x558633);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B558637:{NFSU2_TR(0x558637);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558638:{NFSU2_TR(0x558638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55863dull));
TAIL_STATIC(0x43dc00u,43d);
}
B55863d:L55863d:{c.instructions+=15;NFSU2_TR(0x55863d);
u8 U[8];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558644:{NFSU2_TR(0x558644);
u8 U[4];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B55864b:{NFSU2_TR(0x55864b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55864c:{NFSU2_TR(0x55864c);
u8 U[8];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558653:{NFSU2_TR(0x558653);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B558657:{NFSU2_TR(0x558657);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558658:{NFSU2_TR(0x558658);
u8 U[8];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55865f:{NFSU2_TR(0x55865f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558661:{NFSU2_TR(0x558661);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558663:{NFSU2_TR(0x558663);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558664:{NFSU2_TR(0x558664);
u8 U[8];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55866b:{NFSU2_TR(0x55866b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55866c:{NFSU2_TR(0x55866c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55866d:{NFSU2_TR(0x55866d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55866e:{NFSU2_TR(0x55866e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558673ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558490u);}goto L558490;}
}
B558673:L558673:{c.instructions+=2;NFSU2_TR(0x558673);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x22cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x22cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x22cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B558679:{NFSU2_TR(0x558679);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558680:L558680:{c.instructions+=3;NFSU2_TR(0x558680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x338ull))));
}
B558686:{NFSU2_TR(0x558686);
__builtin_memmove((R+4),(R+16),4);
}
B55868a:{NFSU2_TR(0x55868a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55868full));
TAIL_STATIC(0x4ff250u,4ff);
}
B55868f:L55868f:{c.instructions+=7;NFSU2_TR(0x55868f);
u8 U[8];
w4(U+0,u32(u32(u32(0x364ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558696:{NFSU2_TR(0x558696);
u8 U[8];
w4(U+0,u32(u32(u32(0x360ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55869d:{NFSU2_TR(0x55869d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55869e:{NFSU2_TR(0x55869e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55869f:{NFSU2_TR(0x55869f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5586a3:{NFSU2_TR(0x5586a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5586a4:{NFSU2_TR(0x5586a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5586a9ull));
TAIL_STATIC(0x43fbc0u,43f);
}
B5586a9:L5586a9:{c.instructions+=22;NFSU2_TR(0x5586a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5586b0:{NFSU2_TR(0x5586b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x358ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5586b7:{NFSU2_TR(0x5586b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x354ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5586be:{NFSU2_TR(0x5586be);
u8 U[8];
w4(U+0,u32(u32(u32(0x30cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5586c5:{NFSU2_TR(0x5586c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x35cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5586cc:{NFSU2_TR(0x5586cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x318ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5586d3:{NFSU2_TR(0x5586d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x348ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5586da:{NFSU2_TR(0x5586da);
u8 U[8];
w4(U+0,u32(u32(u32(0x310ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5586e1:{NFSU2_TR(0x5586e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x360ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5586e8:{NFSU2_TR(0x5586e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x314ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5586ef:{NFSU2_TR(0x5586ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x368ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5586f6:{NFSU2_TR(0x5586f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x32cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5586fd:{NFSU2_TR(0x5586fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558704:{NFSU2_TR(0x558704);
u8 U[8];
w4(U+0,u32(u32(u32(0x34cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55870b:{NFSU2_TR(0x55870b);
u8 U[8];
w4(U+0,u32(u32(u32(0x328ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558712:{NFSU2_TR(0x558712);
u8 U[5];
w4(U+0,u32(u32(u32(0x364ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B558719:{NFSU2_TR(0x558719);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B55871d:{NFSU2_TR(0x55871d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55871e:{NFSU2_TR(0x55871e);
u8 U[8];
w4(U+0,u32(u32(u32(0x338ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B558729:{NFSU2_TR(0x558729);
u8 U[8];
w4(U+0,u32(u32(u32(0x334ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558730:{NFSU2_TR(0x558730);
u8 U[5];
w4(U+0,u32(u32(u32(0x33cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B558737:{NFSU2_TR(0x558737);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55873cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558020u);}goto L558020;}
}
B55873c:L55873c:{c.instructions+=2;NFSU2_TR(0x55873c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x348ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x348ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x348ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B558742:{NFSU2_TR(0x558742);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558750:L558750:{c.instructions+=22;NFSU2_TR(0x558750);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558754:{NFSU2_TR(0x558754);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558758:{NFSU2_TR(0x558758);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B55875c:{NFSU2_TR(0x55875c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55875d:{NFSU2_TR(0x55875d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558761:{NFSU2_TR(0x558761);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558762:{NFSU2_TR(0x558762);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558766:{NFSU2_TR(0x558766);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558767:{NFSU2_TR(0x558767);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55876b:{NFSU2_TR(0x55876b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55876d:{NFSU2_TR(0x55876d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55876e:{NFSU2_TR(0x55876e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558772:{NFSU2_TR(0x558772);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558773:{NFSU2_TR(0x558773);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558777:{NFSU2_TR(0x558777);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558778:{NFSU2_TR(0x558778);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55877c:{NFSU2_TR(0x55877c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55877d:{NFSU2_TR(0x55877d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558781:{NFSU2_TR(0x558781);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558782:{NFSU2_TR(0x558782);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558783:{NFSU2_TR(0x558783);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558784:{NFSU2_TR(0x558784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558789ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558680u);}goto L558680;}
}
B558789:L558789:{c.instructions+=2;NFSU2_TR(0x558789);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55878c:{NFSU2_TR(0x55878c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558790:L558790:{c.instructions+=3;NFSU2_TR(0x558790);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558794:{NFSU2_TR(0x558794);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x200ull))));
}
B55879a:{NFSU2_TR(0x55879a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55879full));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B55879f:L55879f:{c.instructions+=2;NFSU2_TR(0x55879f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5587a1:{NFSU2_TR(0x5587a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5587ad;}}
}
B5587a3:L5587a3:{c.instructions+=2;NFSU2_TR(0x5587a3);
w4(R+8,u32(0xc01a6f63ull));
}
B5587a8:{NFSU2_TR(0x5587a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5587adull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5587ad:L5587ad:{c.instructions+=5;NFSU2_TR(0x5587ad);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5587b2:{NFSU2_TR(0x5587b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5587b3:{NFSU2_TR(0x5587b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5587b7:{NFSU2_TR(0x5587b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5587b8:{NFSU2_TR(0x5587b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5587bdull));
TAIL_STATIC(0x43dc00u,43d);
}
B5587bd:L5587bd:{c.instructions+=22;NFSU2_TR(0x5587bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5587c4:{NFSU2_TR(0x5587c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5587cb:{NFSU2_TR(0x5587cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5587cc:{NFSU2_TR(0x5587cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5587d3:{NFSU2_TR(0x5587d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5587d7:{NFSU2_TR(0x5587d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5587d8:{NFSU2_TR(0x5587d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5587df:{NFSU2_TR(0x5587df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5587e0:{NFSU2_TR(0x5587e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5587e7:{NFSU2_TR(0x5587e7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5587e9:{NFSU2_TR(0x5587e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5587ea:{NFSU2_TR(0x5587ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5587f1:{NFSU2_TR(0x5587f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5587f2:{NFSU2_TR(0x5587f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5587f9:{NFSU2_TR(0x5587f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5587fa:{NFSU2_TR(0x5587fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558801:{NFSU2_TR(0x558801);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558802:{NFSU2_TR(0x558802);
u8 U[8];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558809:{NFSU2_TR(0x558809);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55880a:{NFSU2_TR(0x55880a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55880b:{NFSU2_TR(0x55880b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55880c:{NFSU2_TR(0x55880c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558811ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558680u);}goto L558680;}
}
B558811:L558811:{c.instructions+=2;NFSU2_TR(0x558811);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x238ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x238ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x238ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B558817:{NFSU2_TR(0x558817);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558820:L558820:{c.instructions+=21;NFSU2_TR(0x558820);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558824:{NFSU2_TR(0x558824);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558828:{NFSU2_TR(0x558828);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B55882c:{NFSU2_TR(0x55882c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55882d:{NFSU2_TR(0x55882d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558831:{NFSU2_TR(0x558831);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558832:{NFSU2_TR(0x558832);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558836:{NFSU2_TR(0x558836);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558837:{NFSU2_TR(0x558837);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55883b:{NFSU2_TR(0x55883b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55883d:{NFSU2_TR(0x55883d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55883f:{NFSU2_TR(0x55883f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558840:{NFSU2_TR(0x558840);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558844:{NFSU2_TR(0x558844);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558845:{NFSU2_TR(0x558845);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558849:{NFSU2_TR(0x558849);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55884a:{NFSU2_TR(0x55884a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55884e:{NFSU2_TR(0x55884e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55884f:{NFSU2_TR(0x55884f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558850:{NFSU2_TR(0x558850);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558851:{NFSU2_TR(0x558851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558856ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558680u);}goto L558680;}
}
B558856:L558856:{c.instructions+=2;NFSU2_TR(0x558856);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B558859:{NFSU2_TR(0x558859);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558860:L558860:{c.instructions+=3;NFSU2_TR(0x558860);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558864:{NFSU2_TR(0x558864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x200ull))));
}
B55886a:{NFSU2_TR(0x55886a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55886full));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B55886f:L55886f:{c.instructions+=2;NFSU2_TR(0x55886f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558871:{NFSU2_TR(0x558871);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55887d;}}
}
B558873:L558873:{c.instructions+=2;NFSU2_TR(0x558873);
w4(R+8,u32(0xc01a6f63ull));
}
B558878:{NFSU2_TR(0x558878);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55887dull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B55887d:L55887d:{c.instructions+=5;NFSU2_TR(0x55887d);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558882:{NFSU2_TR(0x558882);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558883:{NFSU2_TR(0x558883);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B558887:{NFSU2_TR(0x558887);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558888:{NFSU2_TR(0x558888);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55888dull));
TAIL_STATIC(0x43dc00u,43d);
}
B55888d:L55888d:{c.instructions+=21;NFSU2_TR(0x55888d);
u8 U[8];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558894:{NFSU2_TR(0x558894);
u8 U[4];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B55889b:{NFSU2_TR(0x55889b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55889c:{NFSU2_TR(0x55889c);
u8 U[8];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5588a3:{NFSU2_TR(0x5588a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5588a7:{NFSU2_TR(0x5588a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5588a8:{NFSU2_TR(0x5588a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5588af:{NFSU2_TR(0x5588af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5588b0:{NFSU2_TR(0x5588b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5588b7:{NFSU2_TR(0x5588b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5588b9:{NFSU2_TR(0x5588b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5588bb:{NFSU2_TR(0x5588bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5588bc:{NFSU2_TR(0x5588bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5588c3:{NFSU2_TR(0x5588c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5588c4:{NFSU2_TR(0x5588c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5588cb:{NFSU2_TR(0x5588cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5588cc:{NFSU2_TR(0x5588cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5588d3:{NFSU2_TR(0x5588d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5588d4:{NFSU2_TR(0x5588d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5588d5:{NFSU2_TR(0x5588d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5588d6:{NFSU2_TR(0x5588d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5588dbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558680u);}goto L558680;}
}
B5588db:L5588db:{c.instructions+=2;NFSU2_TR(0x5588db);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x238ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x238ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x238ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5588e1:{NFSU2_TR(0x5588e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5588f0:L5588f0:{c.instructions+=3;NFSU2_TR(0x5588f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x338ull))));
}
B5588f6:{NFSU2_TR(0x5588f6);
__builtin_memmove((R+4),(R+16),4);
}
B5588fa:{NFSU2_TR(0x5588fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5588ffull));
TAIL_STATIC(0x4ff250u,4ff);
}
B5588ff:L5588ff:{c.instructions+=7;NFSU2_TR(0x5588ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x368ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558906:{NFSU2_TR(0x558906);
u8 U[8];
w4(U+0,u32(u32(u32(0x364ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55890d:{NFSU2_TR(0x55890d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55890e:{NFSU2_TR(0x55890e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55890f:{NFSU2_TR(0x55890f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B558913:{NFSU2_TR(0x558913);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558914:{NFSU2_TR(0x558914);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558919ull));
TAIL_STATIC(0x43fbc0u,43f);
}
B558919:L558919:{c.instructions+=25;NFSU2_TR(0x558919);
u8 U[8];
w4(U+0,u32(u32(u32(0x35cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558920:{NFSU2_TR(0x558920);
u8 U[8];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558927:{NFSU2_TR(0x558927);
u8 U[8];
w4(U+0,u32(u32(u32(0x354ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55892e:{NFSU2_TR(0x55892e);
u8 U[8];
w4(U+0,u32(u32(u32(0x310ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558935:{NFSU2_TR(0x558935);
u8 U[8];
w4(U+0,u32(u32(u32(0x358ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55893c:{NFSU2_TR(0x55893c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558943:{NFSU2_TR(0x558943);
u8 U[8];
w4(U+0,u32(u32(u32(0x360ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55894a:{NFSU2_TR(0x55894a);
u8 U[8];
w4(U+0,u32(u32(u32(0x31cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558951:{NFSU2_TR(0x558951);
u8 U[8];
w4(U+0,u32(u32(u32(0x36cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558958:{NFSU2_TR(0x558958);
u8 U[8];
w4(U+0,u32(u32(u32(0x314ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55895f:{NFSU2_TR(0x55895f);
u8 U[8];
w4(U+0,u32(u32(u32(0x364ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558966:{NFSU2_TR(0x558966);
u8 U[8];
w4(U+0,u32(u32(u32(0x318ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55896d:{NFSU2_TR(0x55896d);
u8 U[8];
w4(U+0,u32(u32(u32(0x368ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558974:{NFSU2_TR(0x558974);
u8 U[8];
w4(U+0,u32(u32(u32(0x328ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55897b:{NFSU2_TR(0x55897b);
u8 U[8];
w4(U+0,u32(u32(u32(0x320ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558982:{NFSU2_TR(0x558982);
u8 U[8];
w4(U+0,u32(u32(u32(0x348ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558989:{NFSU2_TR(0x558989);
u8 U[8];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558990:{NFSU2_TR(0x558990);
u8 U[8];
w4(U+0,u32(u32(u32(0x34cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558997:{NFSU2_TR(0x558997);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B55899b:{NFSU2_TR(0x55899b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55899c:{NFSU2_TR(0x55899c);
u8 U[8];
w4(U+0,u32(u32(u32(0x338ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5589a7:{NFSU2_TR(0x5589a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x330ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5589ae:{NFSU2_TR(0x5589ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x334ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5589b5:{NFSU2_TR(0x5589b5);
u8 U[5];
w4(U+0,u32(u32(u32(0x33cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5589bd:{NFSU2_TR(0x5589bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5589c2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558020u);}goto L558020;}
}
B5589c2:L5589c2:{c.instructions+=2;NFSU2_TR(0x5589c2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x348ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x348ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x348ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5589c8:{NFSU2_TR(0x5589c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5589d0:L5589d0:{c.instructions+=25;NFSU2_TR(0x5589d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5589d4:{NFSU2_TR(0x5589d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5589d8:{NFSU2_TR(0x5589d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5589dc:{NFSU2_TR(0x5589dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5589dd:{NFSU2_TR(0x5589dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5589e1:{NFSU2_TR(0x5589e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5589e2:{NFSU2_TR(0x5589e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5589e6:{NFSU2_TR(0x5589e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5589e7:{NFSU2_TR(0x5589e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5589eb:{NFSU2_TR(0x5589eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5589ec:{NFSU2_TR(0x5589ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5589f0:{NFSU2_TR(0x5589f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5589f1:{NFSU2_TR(0x5589f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5589f5:{NFSU2_TR(0x5589f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5589f6:{NFSU2_TR(0x5589f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5589fa:{NFSU2_TR(0x5589fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5589fb:{NFSU2_TR(0x5589fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5589ff:{NFSU2_TR(0x5589ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558a00:{NFSU2_TR(0x558a00);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558a04:{NFSU2_TR(0x558a04);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558a05:{NFSU2_TR(0x558a05);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558a09:{NFSU2_TR(0x558a09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558a0a:{NFSU2_TR(0x558a0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558a0b:{NFSU2_TR(0x558a0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558a0c:{NFSU2_TR(0x558a0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558a11ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5588f0u);}goto L5588f0;}
}
B558a11:L558a11:{c.instructions+=2;NFSU2_TR(0x558a11);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B558a14:{NFSU2_TR(0x558a14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558a20:L558a20:{c.instructions+=3;NFSU2_TR(0x558a20);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558a24:{NFSU2_TR(0x558a24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x200ull))));
}
B558a2a:{NFSU2_TR(0x558a2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558a2full));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B558a2f:L558a2f:{c.instructions+=2;NFSU2_TR(0x558a2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558a31:{NFSU2_TR(0x558a31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L558a3d;}}
}
B558a33:L558a33:{c.instructions+=2;NFSU2_TR(0x558a33);
w4(R+8,u32(0xc01a6f63ull));
}
B558a38:{NFSU2_TR(0x558a38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558a3dull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B558a3d:L558a3d:{c.instructions+=5;NFSU2_TR(0x558a3d);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558a42:{NFSU2_TR(0x558a42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558a43:{NFSU2_TR(0x558a43);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B558a47:{NFSU2_TR(0x558a47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558a48:{NFSU2_TR(0x558a48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558a4dull));
TAIL_STATIC(0x43dc00u,43d);
}
B558a4d:L558a4d:{c.instructions+=25;NFSU2_TR(0x558a4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558a54:{NFSU2_TR(0x558a54);
u8 U[4];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B558a5b:{NFSU2_TR(0x558a5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558a5c:{NFSU2_TR(0x558a5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558a63:{NFSU2_TR(0x558a63);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B558a67:{NFSU2_TR(0x558a67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558a68:{NFSU2_TR(0x558a68);
u8 U[8];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558a6f:{NFSU2_TR(0x558a6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558a70:{NFSU2_TR(0x558a70);
u8 U[8];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558a77:{NFSU2_TR(0x558a77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558a78:{NFSU2_TR(0x558a78);
u8 U[8];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558a7f:{NFSU2_TR(0x558a7f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558a80:{NFSU2_TR(0x558a80);
u8 U[8];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558a87:{NFSU2_TR(0x558a87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558a88:{NFSU2_TR(0x558a88);
u8 U[8];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558a8f:{NFSU2_TR(0x558a8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558a90:{NFSU2_TR(0x558a90);
u8 U[8];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558a97:{NFSU2_TR(0x558a97);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558a98:{NFSU2_TR(0x558a98);
u8 U[8];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558a9f:{NFSU2_TR(0x558a9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558aa0:{NFSU2_TR(0x558aa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558aa7:{NFSU2_TR(0x558aa7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558aa8:{NFSU2_TR(0x558aa8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558aa9:{NFSU2_TR(0x558aa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558aaa:{NFSU2_TR(0x558aaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558aafull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5588f0u);}goto L5588f0;}
}
B558aaf:L558aaf:{c.instructions+=2;NFSU2_TR(0x558aaf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x23cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x23cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x23cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B558ab5:{NFSU2_TR(0x558ab5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558ac0:L558ac0:{c.instructions+=3;NFSU2_TR(0x558ac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x338ull))));
}
B558ac6:{NFSU2_TR(0x558ac6);
__builtin_memmove((R+4),(R+16),4);
}
B558aca:{NFSU2_TR(0x558aca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558acfull));
TAIL_STATIC(0x4ff250u,4ff);
}
B558acf:L558acf:{c.instructions+=2;NFSU2_TR(0x558acf);
u8 U[8];
w4(U+0,u32(u32(u32(0x344ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558ad6:{NFSU2_TR(0x558ad6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558adbull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B558adb:L558adb:{c.instructions+=2;NFSU2_TR(0x558adb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558add:{NFSU2_TR(0x558add);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L558ae9;}}
}
B558adf:L558adf:{c.instructions+=2;NFSU2_TR(0x558adf);
w4(R+8,u32(0xc01a6f63ull));
}
B558ae4:{NFSU2_TR(0x558ae4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558ae9ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B558ae9:L558ae9:{c.instructions+=5;NFSU2_TR(0x558ae9);
u8 U[4];
w4(U+0,u32(0x300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558aee:{NFSU2_TR(0x558aee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558aef:{NFSU2_TR(0x558aef);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B558af3:{NFSU2_TR(0x558af3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558af4:{NFSU2_TR(0x558af4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558af9ull));
TAIL_STATIC(0x43dc00u,43d);
}
B558af9:L558af9:{c.instructions+=15;NFSU2_TR(0x558af9);
u8 U[8];
w4(U+0,u32(u32(u32(0x348ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558b00:{NFSU2_TR(0x558b00);
u8 U[8];
w4(U+0,u32(u32(u32(0x34cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558b07:{NFSU2_TR(0x558b07);
w4(R+0,u32(0x1ull));
}
B558b0c:{NFSU2_TR(0x558b0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x334ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558b13:{NFSU2_TR(0x558b13);
u8 U[5];
w4(U+0,u32(u32(u32(0x338ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B558b1a:{NFSU2_TR(0x558b1a);
u8 U[5];
w4(U+0,u32(u32(u32(0x339ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B558b21:{NFSU2_TR(0x558b21);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B558b25:{NFSU2_TR(0x558b25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558b26:{NFSU2_TR(0x558b26);
u8 U[8];
w4(U+0,u32(u32(u32(0x310ull))+u32(r4(R+16))));
w4(U+4,u32(0x639ull));
s4(u32(r4(U+0)),r4(U+4));
}
B558b31:{NFSU2_TR(0x558b31);
u8 U[8];
w4(U+0,u32(u32(u32(0x314ull))+u32(r4(R+16))));
w4(U+4,u32(0x34dc1becull));
s4(u32(r4(U+0)),r4(U+4));
}
B558b3c:{NFSU2_TR(0x558b3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x328ull))+u32(r4(R+16))));
w4(U+4,u32(0xb4edeb6dull));
s4(u32(r4(U+0)),r4(U+4));
}
B558b47:{NFSU2_TR(0x558b47);
u8 U[8];
w4(U+0,u32(u32(u32(0x32cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B558b52:{NFSU2_TR(0x558b52);
u8 U[8];
w4(U+0,u32(u32(u32(0x330ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558b59:{NFSU2_TR(0x558b59);
u8 U[8];
w4(U+0,u32(u32(u32(0x334ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558b60:{NFSU2_TR(0x558b60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558b65ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558020u);}goto L558020;}
}
B558b65:L558b65:{c.instructions+=2;NFSU2_TR(0x558b65);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x348ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x348ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x348ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B558b6b:{NFSU2_TR(0x558b6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558b70:L558b70:{c.instructions+=5;NFSU2_TR(0x558b70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558b74:{NFSU2_TR(0x558b74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558b75:{NFSU2_TR(0x558b75);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B558b77:{NFSU2_TR(0x558b77);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x51ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x51ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x51ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B558b7a:{NFSU2_TR(0x558b7a);
if(r1(R+518)){{goto L558b81;}}
}
B558b7c:L558b7c:{c.instructions+=2;NFSU2_TR(0x558b7c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x71ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x71ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x71ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B558b7f:{NFSU2_TR(0x558b7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L558bf3;}}
}
B558b81:L558b81:{c.instructions+=1;NFSU2_TR(0x558b81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558b86ull));
TAIL_STATIC(0x50cea0u,50c);
}
B558b86:L558b86:{c.instructions+=2;NFSU2_TR(0x558b86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558b87:{NFSU2_TR(0x558b87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558b8cull));
TAIL_STATIC(0x52cef0u,52c);
}
B558b8c:L558b8c:{c.instructions+=3;NFSU2_TR(0x558b8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B558b8f:{NFSU2_TR(0x558b8f);
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
B558b91:{NFSU2_TR(0x558b91);
if(r1(R+518)){{goto L558b96;}}
}
B558b93:L558b93:{c.instructions+=1;NFSU2_TR(0x558b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B558b96:L558b96:{c.instructions+=1;NFSU2_TR(0x558b96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558b9bull));
TAIL_STATIC(0x4a8c50u,4a8);
}
B558b9b:L558b9b:{c.instructions+=2;NFSU2_TR(0x558b9b);
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
B558b9d:{NFSU2_TR(0x558b9d);
if(r1(R+518)){{goto L558bf3;}}
}
B558b9f:L558b9f:{c.instructions+=3;NFSU2_TR(0x558b9f);
__builtin_memmove((R+0),gp(0x8654a4),4);
}
B558ba4:{NFSU2_TR(0x558ba4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B558ba7:{NFSU2_TR(0x558ba7);
if(r1(R+518)){{goto L558bbc;}}
}
B558ba9:L558ba9:{c.instructions+=2;NFSU2_TR(0x558ba9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B558bac:{NFSU2_TR(0x558bac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L558bf3;}}
}
B558bae:L558bae:{c.instructions+=2;NFSU2_TR(0x558bae);
w4(R+4,u32(0x865480ull));
}
B558bb3:{NFSU2_TR(0x558bb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558bb8ull));
TAIL_STATIC(0x571250u,571);
}
B558bb8:L558bb8:{c.instructions+=2;NFSU2_TR(0x558bb8);
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
B558bba:{NFSU2_TR(0x558bba);
if(r1(R+518)){{goto L558bf3;}}
}
B558bbc:L558bbc:{c.instructions+=2;NFSU2_TR(0x558bbc);
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
B558bbe:{NFSU2_TR(0x558bbe);
if(r1(R+518)){{goto L558bf3;}}
}
B558bc0:L558bc0:{c.instructions+=9;NFSU2_TR(0x558bc0);
u8 U[4];
w4(U+0,u32(0x9de6b485ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558bc5:{NFSU2_TR(0x558bc5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558bc7:{NFSU2_TR(0x558bc7);
u8 U[4];
w4(U+0,u32(0x42ca53fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558bcc:{NFSU2_TR(0x558bcc);
u8 U[4];
w4(U+0,u32(0x42ca53fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558bd1:{NFSU2_TR(0x558bd1);
u8 U[4];
w4(U+0,u32(0x919b1dd9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558bd6:{NFSU2_TR(0x558bd6);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558bdb:{NFSU2_TR(0x558bdb);
u8 U[4];
w4(U+0,u32(0x1c101778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558be0:{NFSU2_TR(0x558be0);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558be5:{NFSU2_TR(0x558be5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558beaull));
TAIL_STATIC(0x50cea0u,50c);
}
B558bea:L558bea:{c.instructions+=2;NFSU2_TR(0x558bea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558beb:{NFSU2_TR(0x558beb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558bf0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558790u);}goto L558790;}
}
B558bf0:L558bf0:{c.instructions+=1;NFSU2_TR(0x558bf0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B558bf3:L558bf3:{c.instructions+=2;NFSU2_TR(0x558bf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B558bf4:{NFSU2_TR(0x558bf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558c00:L558c00:{c.instructions+=6;NFSU2_TR(0x558c00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B558c03:{NFSU2_TR(0x558c03);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558c04:{NFSU2_TR(0x558c04);
__builtin_memmove((R+20),(R+4),4);
}
B558c06:{NFSU2_TR(0x558c06);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5251ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B558c0c:{NFSU2_TR(0x558c0c);
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
B558c0e:{NFSU2_TR(0x558c0e);
if(r1(R+518)){{goto L558c1b;}}
}
B558c10:L558c10:{c.instructions+=3;NFSU2_TR(0x558c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558c16:{NFSU2_TR(0x558c16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B558c18:{NFSU2_TR(0x558c18);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558c1bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B558c1b:L558c1b:{c.instructions+=5;NFSU2_TR(0x558c1b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B558c1f:{NFSU2_TR(0x558c1f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558c20:{NFSU2_TR(0x558c20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558c21:{NFSU2_TR(0x558c21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558c22:{NFSU2_TR(0x558c22);
if(r1(R+518)){{goto L558e29;}}
}
B558c28:L558c28:{c.instructions+=3;NFSU2_TR(0x558c28);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B558c2b:{NFSU2_TR(0x558c2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B558c2d:{NFSU2_TR(0x558c2d);
if(r1(R+518)){{goto L558d7f;}}
}
B558c33:L558c33:{c.instructions+=5;NFSU2_TR(0x558c33);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B558c36:{NFSU2_TR(0x558c36);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B558c38:{NFSU2_TR(0x558c38);
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
B558c3a:{NFSU2_TR(0x558c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558c3d:{NFSU2_TR(0x558c3d);
if(r1(R+518)){{goto L558c63;}}
}
B558c3f:L558c3f:{c.instructions+=5;NFSU2_TR(0x558c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558c45:{NFSU2_TR(0x558c45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B558c47:{NFSU2_TR(0x558c47);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B558c4b:{NFSU2_TR(0x558c4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558c4c:{NFSU2_TR(0x558c4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558c4full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B558c4f:L558c4f:{c.instructions+=6;NFSU2_TR(0x558c4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B558c53:{NFSU2_TR(0x558c53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558c54:{NFSU2_TR(0x558c54);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B558c58:{NFSU2_TR(0x558c58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558c59:{NFSU2_TR(0x558c59);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B558c5c:{NFSU2_TR(0x558c5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558c61ull));
TAIL_STATIC(0x50b0c0u,50b);
}
B558c61:L558c61:{c.instructions+=1;NFSU2_TR(0x558c61);
{goto L558c67;}
}
B558c63:L558c63:{c.instructions+=1;NFSU2_TR(0x558c63);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B558c67:L558c67:{c.instructions+=5;NFSU2_TR(0x558c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558c6d:{NFSU2_TR(0x558c6d);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B558c6f:{NFSU2_TR(0x558c6f);
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
B558c71:{NFSU2_TR(0x558c71);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B558c75:{NFSU2_TR(0x558c75);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L558cb7;}}
}
B558c77:L558c77:{c.instructions+=1;NFSU2_TR(0x558c77);
{goto L558c80;}
}
B558c80:L558c80:{c.instructions+=6;NFSU2_TR(0x558c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558c86:{NFSU2_TR(0x558c86);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558c8a:{NFSU2_TR(0x558c8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B558c8c:{NFSU2_TR(0x558c8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558c8d:{NFSU2_TR(0x558c8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558c8e:{NFSU2_TR(0x558c8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558c91ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B558c91:L558c91:{c.instructions+=6;NFSU2_TR(0x558c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B558c94:{NFSU2_TR(0x558c94);
__builtin_memmove((R+4),(R+24),4);
}
B558c96:{NFSU2_TR(0x558c96);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B558c9c:{NFSU2_TR(0x558c9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558c9d:{NFSU2_TR(0x558c9d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B558c9f:{NFSU2_TR(0x558c9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558ca4ull));
TAIL_STATIC(0x504fa0u,504);
}
B558ca4:L558ca4:{c.instructions+=6;NFSU2_TR(0x558ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558caa:{NFSU2_TR(0x558caa);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B558cac:{NFSU2_TR(0x558cac);
w4(R+24,u32(r1(R+12)));
}
B558caf:{NFSU2_TR(0x558caf);
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
B558cb1:{NFSU2_TR(0x558cb1);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B558cb5:{NFSU2_TR(0x558cb5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558c80u);}goto L558c80;}}
}
B558cb7:L558cb7:{c.instructions+=3;NFSU2_TR(0x558cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B558cbd:{NFSU2_TR(0x558cbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558cbf:{NFSU2_TR(0x558cbf);
if(r1(R+518)){{goto L558cdf;}}
}
B558cc1:L558cc1:{c.instructions+=3;NFSU2_TR(0x558cc1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558cc2:{NFSU2_TR(0x558cc2);
__builtin_memmove((R+4),(R+20),4);
}
B558cc4:{NFSU2_TR(0x558cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558cc9ull));
TAIL_STATIC(0x54d4b0u,54d);
}
B558cc9:L558cc9:{c.instructions+=3;NFSU2_TR(0x558cc9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B558ccc:{NFSU2_TR(0x558ccc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B558cce:{NFSU2_TR(0x558cce);
if(r1(R+518)){{goto L558cd8;}}
}
B558cd0:L558cd0:{c.instructions+=3;NFSU2_TR(0x558cd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558cd1:{NFSU2_TR(0x558cd1);
__builtin_memmove((R+4),(R+20),4);
}
B558cd3:{NFSU2_TR(0x558cd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558cd8ull));
TAIL_STATIC(0x54e020u,54e);
}
B558cd8:L558cd8:{c.instructions+=3;NFSU2_TR(0x558cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B558cdb:{NFSU2_TR(0x558cdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558cdd:{NFSU2_TR(0x558cdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558cc1u);}goto L558cc1;}}
}
B558cdf:L558cdf:{c.instructions+=4;NFSU2_TR(0x558cdf);
w4(R+12,u32(0x1ull));
}
B558ce4:{NFSU2_TR(0x558ce4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((R+28),(U+0),4);
}
B558ce7:{NFSU2_TR(0x558ce7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B558cef:{NFSU2_TR(0x558cef);
}
B558cf0:L558cf0:{c.instructions+=2;NFSU2_TR(0x558cf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B558cf3:{NFSU2_TR(0x558cf3);
if(r1(R+518)){{goto L558d5f;}}
}
B558cf5:L558cf5:{c.instructions+=4;NFSU2_TR(0x558cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558cfb:{NFSU2_TR(0x558cfb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558cfd:{NFSU2_TR(0x558cfd);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B558d02:{NFSU2_TR(0x558d02);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L558d5f;}}
}
B558d04:L558d04:{c.instructions+=2;NFSU2_TR(0x558d04);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B558d06:{NFSU2_TR(0x558d06);
{goto L558d10;}
}
B558d10:L558d10:{c.instructions+=6;NFSU2_TR(0x558d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558d13:{NFSU2_TR(0x558d13);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B558d19:{NFSU2_TR(0x558d19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B558d1b:{NFSU2_TR(0x558d1b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B558d1d:{NFSU2_TR(0x558d1d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B558d1f:{NFSU2_TR(0x558d1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B558d22:L558d22:{c.instructions+=4;NFSU2_TR(0x558d22);
w4(R+0,u32(0x1ull));
}
B558d27:{NFSU2_TR(0x558d27);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B558d29:{NFSU2_TR(0x558d29);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558d2b:{NFSU2_TR(0x558d2b);
if(r1(R+518)){{goto L558d3f;}}
}
B558d2d:L558d2d:{c.instructions+=3;NFSU2_TR(0x558d2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B558d2f:{NFSU2_TR(0x558d2f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B558d31:{NFSU2_TR(0x558d31);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L558d39;}}
}
B558d33:L558d33:{c.instructions+=3;NFSU2_TR(0x558d33);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B558d35:{NFSU2_TR(0x558d35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B558d37:{NFSU2_TR(0x558d37);
{goto L558d3f;}
}
B558d39:L558d39:{c.instructions+=1;NFSU2_TR(0x558d39);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B558d3f:L558d3f:{c.instructions+=4;NFSU2_TR(0x558d3f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B558d40:{NFSU2_TR(0x558d40);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B558d43:{NFSU2_TR(0x558d43);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B558d46:{NFSU2_TR(0x558d46);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558d22u);}goto L558d22;}}
}
B558d48:L558d48:{c.instructions+=7;NFSU2_TR(0x558d48);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B558d4c:{NFSU2_TR(0x558d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558d52:{NFSU2_TR(0x558d52);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B558d54:{NFSU2_TR(0x558d54);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B558d58:{NFSU2_TR(0x558d58);
w4(R+0,u32(r1(R+0)));
}
B558d5b:{NFSU2_TR(0x558d5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B558d5d:{NFSU2_TR(0x558d5d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558d10u);}goto L558d10;}}
}
B558d5f:L558d5f:{c.instructions+=7;NFSU2_TR(0x558d5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558d63:{NFSU2_TR(0x558d63);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B558d69:{NFSU2_TR(0x558d69);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B558d6b:{NFSU2_TR(0x558d6b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B558d6e:{NFSU2_TR(0x558d6e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B558d6f:{NFSU2_TR(0x558d6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558d73:{NFSU2_TR(0x558d73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558cf0u);}goto L558cf0;}}
}
B558d79:L558d79:{c.instructions+=2;NFSU2_TR(0x558d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558d7c:{NFSU2_TR(0x558d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558d7f:L558d7f:{c.instructions+=2;NFSU2_TR(0x558d7f);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B558d83:{NFSU2_TR(0x558d83);
if(r1(R+518)){{goto L558e29;}}
}
B558d89:L558d89:{c.instructions+=2;NFSU2_TR(0x558d89);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B558d8d:{NFSU2_TR(0x558d8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558d91:L558d91:{c.instructions+=4;NFSU2_TR(0x558d91);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558d95:{NFSU2_TR(0x558d95);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558d97:{NFSU2_TR(0x558d97);
__builtin_memmove((R+12),(R+24),4);
}
B558d99:{NFSU2_TR(0x558d99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L558da5;}}
}
B558d9b:L558d9b:{c.instructions+=2;NFSU2_TR(0x558d9b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x14ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B558d9e:{NFSU2_TR(0x558d9e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L558da5;}}
}
B558da0:L558da0:{c.instructions+=1;NFSU2_TR(0x558da0);
w4(R+12,u32(0x14ull));
}
B558da5:L558da5:{c.instructions+=9;NFSU2_TR(0x558da5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B558dab:{NFSU2_TR(0x558dab);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B558dad:{NFSU2_TR(0x558dad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B558daf:{NFSU2_TR(0x558daf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B558db2:{NFSU2_TR(0x558db2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B558db3:{NFSU2_TR(0x558db3);
__builtin_memmove(gp(0x7f7c8c),(R+8),4);
}
B558db9:{NFSU2_TR(0x558db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B558dbf:{NFSU2_TR(0x558dbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558dc1:{NFSU2_TR(0x558dc1);
if(r1(R+518)){{goto L558df5;}}
}
B558dc3:L558dc3:{c.instructions+=7;NFSU2_TR(0x558dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B558dc6:{NFSU2_TR(0x558dc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558dc8:{NFSU2_TR(0x558dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558dcb:{NFSU2_TR(0x558dcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558dcf:{NFSU2_TR(0x558dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558dd2:{NFSU2_TR(0x558dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558dd5:{NFSU2_TR(0x558dd5);
if(r1(R+518)){{goto L558deb;}}
}
B558dd7:L558dd7:{c.instructions+=4;NFSU2_TR(0x558dd7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558dd8:{NFSU2_TR(0x558dd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558dd9:{NFSU2_TR(0x558dd9);
__builtin_memmove((R+4),(R+28),4);
}
B558ddb:{NFSU2_TR(0x558ddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558de0ull));
TAIL_STATIC(0x54ce60u,54c);
}
B558de0:L558de0:{c.instructions+=3;NFSU2_TR(0x558de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B558de3:{NFSU2_TR(0x558de3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558de5:{NFSU2_TR(0x558de5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558dd7u);}goto L558dd7;}}
}
B558de7:L558de7:{c.instructions+=1;NFSU2_TR(0x558de7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558deb:L558deb:{c.instructions+=3;NFSU2_TR(0x558deb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558ded:{NFSU2_TR(0x558ded);
__builtin_memmove((R+28),(R+0),4);
}
B558def:{NFSU2_TR(0x558def);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558dc3u);}goto L558dc3;}}
}
B558df1:L558df1:{c.instructions+=1;NFSU2_TR(0x558df1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B558df5:L558df5:{c.instructions+=2;NFSU2_TR(0x558df5);
__builtin_memmove((R+4),(R+20),4);
}
B558df7:{NFSU2_TR(0x558df7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558dfcull));
TAIL_STATIC(0x541fc0u,541);
}
B558dfc:L558dfc:{c.instructions+=2;NFSU2_TR(0x558dfc);
__builtin_memmove((R+4),(R+20),4);
}
B558dfe:{NFSU2_TR(0x558dfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558e03ull));
TAIL_STATIC(0x5559c0u,555);
}
B558e03:L558e03:{c.instructions+=3;NFSU2_TR(0x558e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x411cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558e09:{NFSU2_TR(0x558e09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558e0b:{NFSU2_TR(0x558e0b);
if(r1(R+518)){{goto L558e14;}}
}
B558e0d:L558e0d:{c.instructions+=2;NFSU2_TR(0x558e0d);
__builtin_memmove((R+4),(R+20),4);
}
B558e0f:{NFSU2_TR(0x558e0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558e14ull));
TAIL_STATIC(0x541fc0u,541);
}
B558e14:L558e14:{c.instructions+=4;NFSU2_TR(0x558e14);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B558e16:{NFSU2_TR(0x558e16);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558e1a:{NFSU2_TR(0x558e1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5250ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B558e21:{NFSU2_TR(0x558e21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558d91u);}goto L558d91;}}
}
B558e27:L558e27:{c.instructions+=1;NFSU2_TR(0x558e27);
{goto L558e5b;}
}
B558e29:L558e29:{c.instructions+=3;NFSU2_TR(0x558e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B558e2f:{NFSU2_TR(0x558e2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558e31:{NFSU2_TR(0x558e31);
if(r1(R+518)){{goto L558e5b;}}
}
B558e33:L558e33:{c.instructions+=6;NFSU2_TR(0x558e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B558e36:{NFSU2_TR(0x558e36);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558e38:{NFSU2_TR(0x558e38);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B558e3c:{NFSU2_TR(0x558e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558e3f:{NFSU2_TR(0x558e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B558e42:{NFSU2_TR(0x558e42);
if(r1(R+518)){{goto L558e54;}}
}
B558e44:L558e44:{c.instructions+=4;NFSU2_TR(0x558e44);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558e45:{NFSU2_TR(0x558e45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558e46:{NFSU2_TR(0x558e46);
__builtin_memmove((R+4),(R+28),4);
}
B558e48:{NFSU2_TR(0x558e48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558e4dull));
TAIL_STATIC(0x54ce60u,54c);
}
B558e4d:L558e4d:{c.instructions+=3;NFSU2_TR(0x558e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B558e50:{NFSU2_TR(0x558e50);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558e52:{NFSU2_TR(0x558e52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558e44u);}goto L558e44;}}
}
B558e54:L558e54:{c.instructions+=3;NFSU2_TR(0x558e54);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B558e57:{NFSU2_TR(0x558e57);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558e59:{NFSU2_TR(0x558e59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558e33u);}goto L558e33;}}
}
B558e5b:L558e5b:{c.instructions+=6;NFSU2_TR(0x558e5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5251ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B558e61:{NFSU2_TR(0x558e61);
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
B558e63:{NFSU2_TR(0x558e63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B558e64:{NFSU2_TR(0x558e64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B558e65:{NFSU2_TR(0x558e65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B558e66:{NFSU2_TR(0x558e66);
if(r1(R+518)){{goto L558e73;}}
}
B558e68:L558e68:{c.instructions+=3;NFSU2_TR(0x558e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558e6e:{NFSU2_TR(0x558e6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B558e70:{NFSU2_TR(0x558e70);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558e73ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B558e73:L558e73:{c.instructions+=3;NFSU2_TR(0x558e73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B558e74:{NFSU2_TR(0x558e74);
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
B558e77:{NFSU2_TR(0x558e77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558e80:L558e80:{c.instructions+=5;NFSU2_TR(0x558e80);
__builtin_memmove((R+0),gp(0x7f9428),4);
}
B558e85:{NFSU2_TR(0x558e85);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558e87:{NFSU2_TR(0x558e87);
s4(0x83a9c8,u32(0x0ull));
}
B558e91:{NFSU2_TR(0x558e91);
s4(0x8637c8,u32(0x0ull));
}
B558e9b:{NFSU2_TR(0x558e9b);
if(r1(R+518)){{goto L558eac;}}
}
B558e9d:L558e9d:{c.instructions+=1;NFSU2_TR(0x558e9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558ea2ull));
TAIL_STATIC(0x4d9730u,4d9);
}
B558ea2:L558ea2:{c.instructions+=1;NFSU2_TR(0x558ea2);
s4(0x7f9428,u32(0x0ull));
}
B558eac:L558eac:{c.instructions+=3;NFSU2_TR(0x558eac);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B558eb2:{NFSU2_TR(0x558eb2);
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
B558eb4:{NFSU2_TR(0x558eb4);
if(r1(R+518)){{goto L558ed7;}}
}
B558eb6:L558eb6:{c.instructions+=7;NFSU2_TR(0x558eb6);
__builtin_memmove((R+0),gp(0x8384c8),4);
}
B558ebb:{NFSU2_TR(0x558ebb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558ebd:{NFSU2_TR(0x558ebd);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558ec2:{NFSU2_TR(0x558ec2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558ec4:{NFSU2_TR(0x558ec4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558ec5:{NFSU2_TR(0x558ec5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558ec7:{NFSU2_TR(0x558ec7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558eccull));
TAIL_STATIC(0x555d00u,555);
}
B558ecc:L558ecc:{c.instructions+=2;NFSU2_TR(0x558ecc);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B558ed2:{NFSU2_TR(0x558ed2);
TAIL_STATIC(0x52cdd0u,52c);
}
B558ed7:L558ed7:{c.instructions+=1;NFSU2_TR(0x558ed7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558ee0:L558ee0:{c.instructions+=3;NFSU2_TR(0x558ee0);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B558ee5:{NFSU2_TR(0x558ee5);
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
B558ee7:{NFSU2_TR(0x558ee7);
if(r1(R+518)){{goto L558ef5;}}
}
B558ee9:L558ee9:{c.instructions+=4;NFSU2_TR(0x558ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558eec:{NFSU2_TR(0x558eec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558eee:{NFSU2_TR(0x558eee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558ef0:{NFSU2_TR(0x558ef0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558ef5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558c00u);}goto L558c00;}
}
B558ef5:L558ef5:{c.instructions+=1;NFSU2_TR(0x558ef5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558f00:L558f00:{c.instructions+=3;NFSU2_TR(0x558f00);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B558f05:{NFSU2_TR(0x558f05);
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
B558f07:{NFSU2_TR(0x558f07);
if(r1(R+518)){{goto L558f4f;}}
}
B558f09:L558f09:{c.instructions+=4;NFSU2_TR(0x558f09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B558f0c:{NFSU2_TR(0x558f0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558f0e:{NFSU2_TR(0x558f0e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558f10:{NFSU2_TR(0x558f10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558f15ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x558c00u);}goto L558c00;}
}
B558f15:L558f15:{c.instructions+=3;NFSU2_TR(0x558f15);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B558f1b:{NFSU2_TR(0x558f1b);
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
B558f1d:{NFSU2_TR(0x558f1d);
if(r1(R+518)){{goto L558f4f;}}
}
B558f1f:L558f1f:{c.instructions+=3;NFSU2_TR(0x558f1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558f23:{NFSU2_TR(0x558f23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B558f25:{NFSU2_TR(0x558f25);
if(r1(R+518)){{goto L558f38;}}
}
B558f27:L558f27:{c.instructions+=2;NFSU2_TR(0x558f27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558f28:{NFSU2_TR(0x558f28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558f2dull));
TAIL_STATIC(0x5376f0u,537);
}
B558f2d:L558f2d:{c.instructions+=2;NFSU2_TR(0x558f2d);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B558f33:{NFSU2_TR(0x558f33);
TAIL_STATIC(0x50c680u,50c);
}
B558f38:L558f38:{c.instructions+=3;NFSU2_TR(0x558f38);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558f3a:{NFSU2_TR(0x558f3a);
w4(R+4,u32(0x8637b0ull));
}
B558f3f:{NFSU2_TR(0x558f3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558f44ull));
TAIL_STATIC(0x542390u,542);
}
B558f44:L558f44:{c.instructions+=2;NFSU2_TR(0x558f44);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B558f4a:{NFSU2_TR(0x558f4a);
TAIL_STATIC(0x50c680u,50c);
}
B558f4f:L558f4f:{c.instructions+=1;NFSU2_TR(0x558f4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B558f50:L558f50:{c.instructions+=6;NFSU2_TR(0x558f50);
__builtin_memmove((R+0),gp(0x83852c),4);
}
B558f55:{NFSU2_TR(0x558f55);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558f56:{NFSU2_TR(0x558f56);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B558f58:{NFSU2_TR(0x558f58);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B558f5a:{NFSU2_TR(0x558f5a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558f5b:{NFSU2_TR(0x558f5b);
if(r1(R+518)){{goto L558f6c;}}
}
B558f5d:L558f5d:{c.instructions+=2;NFSU2_TR(0x558f5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558f5e:{NFSU2_TR(0x558f5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558f63ull));
TAIL_STATIC(0x540a60u,540);
}
B558f63:L558f63:{c.instructions+=2;NFSU2_TR(0x558f63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B558f66:{NFSU2_TR(0x558f66);
__builtin_memmove(gp(0x83852c),(R+12),4);
}
B558f6c:L558f6c:{c.instructions+=3;NFSU2_TR(0x558f6c);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558f71:{NFSU2_TR(0x558f71);
u8 U[4];
w4(U+0,u32(0x79d23cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558f76:{NFSU2_TR(0x558f76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558f7bull));
TAIL_STATIC(0x50d510u,50d);
}
B558f7b:L558f7b:{c.instructions+=4;NFSU2_TR(0x558f7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558f7f:{NFSU2_TR(0x558f7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B558f82:{NFSU2_TR(0x558f82);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B558f84:{NFSU2_TR(0x558f84);
if(r1(R+518)){{goto L558f97;}}
}
B558f86:L558f86:{c.instructions+=4;NFSU2_TR(0x558f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B558f89:{NFSU2_TR(0x558f89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558f8a:{NFSU2_TR(0x558f8a);
u8 U[4];
w4(U+0,u32(0x79d200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558f8f:{NFSU2_TR(0x558f8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558f94ull));
TAIL_STATIC(0x50d510u,50d);
}
B558f94:L558f94:{c.instructions+=1;NFSU2_TR(0x558f94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B558f97:L558f97:{c.instructions+=3;NFSU2_TR(0x558f97);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B558f9b:{NFSU2_TR(0x558f9b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B558f9e:{NFSU2_TR(0x558f9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L558ffe;}}
}
B558fa0:L558fa0:{c.instructions+=5;NFSU2_TR(0x558fa0);
__builtin_memmove((R+4),gp(0x7f44fc),4);
}
B558fa6:{NFSU2_TR(0x558fa6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558fa7:{NFSU2_TR(0x558fa7);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558fac:{NFSU2_TR(0x558fac);
u8 U[4];
w4(U+0,u32(0x79d1c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558fb1:{NFSU2_TR(0x558fb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558fb6ull));
TAIL_STATIC(0x50d510u,50d);
}
B558fb6:L558fb6:{c.instructions+=4;NFSU2_TR(0x558fb6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B558fb9:{NFSU2_TR(0x558fb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558fba:{NFSU2_TR(0x558fba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558fbb:{NFSU2_TR(0x558fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558fc0ull));
TAIL_STATIC(0x58f740u,58f);
}
B558fc0:L558fc0:{c.instructions+=3;NFSU2_TR(0x558fc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B558fc3:{NFSU2_TR(0x558fc3);
__builtin_memmove((R+4),(R+0),4);
}
B558fc5:{NFSU2_TR(0x558fc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558fcaull));
TAIL_STATIC(0x58ad20u,58a);
}
B558fca:L558fca:{c.instructions+=2;NFSU2_TR(0x558fca);
s4(0x850084,u32(0x1ull));
}
B558fd4:{NFSU2_TR(0x558fd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558fd9ull));
TAIL_STATIC(0x4b2940u,4b2);
}
B558fd9:L558fd9:{c.instructions+=3;NFSU2_TR(0x558fd9);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B558fdf:{NFSU2_TR(0x558fdf);
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
B558fe1:{NFSU2_TR(0x558fe1);
if(r1(R+518)){TAIL_STATIC(0x5591bcu,559);}
}
B558fe7:L558fe7:{c.instructions+=5;NFSU2_TR(0x558fe7);
__builtin_memmove((R+8),gp(0x7f44fc),4);
}
B558fed:{NFSU2_TR(0x558fed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558fee:{NFSU2_TR(0x558fee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558fef:{NFSU2_TR(0x558fef);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558ff4:{NFSU2_TR(0x558ff4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x558ff9ull));
TAIL_STATIC(0x5377a0u,537);
}
B558ff9:L558ff9:{c.instructions+=1;NFSU2_TR(0x558ff9);
TAIL_STATIC(0x5591bcu,559);
}
B558ffe:L558ffe:{c.instructions+=2;NFSU2_TR(0x558ffe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B558fff:{NFSU2_TR(0x558fff);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x559004u,559);
}
XIT:NFSU2_TR_EXIT(0x558,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
