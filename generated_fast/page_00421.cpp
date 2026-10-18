#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_415(u8* __restrict R,Cpu& c);
u32 body_418(u8* __restrict R,Cpu& c);
u32 body_41d(u8* __restrict R,Cpu& c);
u32 body_41e(u8* __restrict R,Cpu& c);
u32 body_422(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x421,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x421,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_421(u8* __restrict R,Cpu& c);
u32 page_421(Cpu& c){return body_421(c.regs.data(),c);}
__attribute__((noinline)) u32 body_421(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x421000:goto L421000;
case 0x421002:goto L421002;
case 0x421004:c.instructions+=2;goto B421004;
case 0x421006:c.instructions+=1;goto B421006;
case 0x421008:goto L421008;
case 0x42100a:c.instructions+=3;goto B42100a;
case 0x421011:c.instructions+=2;goto B421011;
case 0x421019:c.instructions+=1;goto B421019;
case 0x42101e:goto L42101e;
case 0x421022:c.instructions+=4;goto B421022;
case 0x421023:c.instructions+=3;goto B421023;
case 0x42102a:c.instructions+=2;goto B42102a;
case 0x42102d:c.instructions+=1;goto B42102d;
case 0x421030:goto L421030;
case 0x421033:c.instructions+=9;goto B421033;
case 0x421037:c.instructions+=8;goto B421037;
case 0x421038:c.instructions+=7;goto B421038;
case 0x42103e:c.instructions+=6;goto B42103e;
case 0x421040:c.instructions+=5;goto B421040;
case 0x421048:c.instructions+=4;goto B421048;
case 0x421050:c.instructions+=3;goto B421050;
case 0x421052:c.instructions+=2;goto B421052;
case 0x421055:c.instructions+=1;goto B421055;
case 0x421057:goto L421057;
case 0x42105b:c.instructions+=2;goto B42105b;
case 0x42105f:c.instructions+=1;goto B42105f;
case 0x421061:goto L421061;
case 0x421069:goto L421069;
case 0x421070:c.instructions+=11;goto B421070;
case 0x421076:c.instructions+=10;goto B421076;
case 0x42107c:c.instructions+=9;goto B42107c;
case 0x421080:c.instructions+=8;goto B421080;
case 0x421084:c.instructions+=7;goto B421084;
case 0x421088:c.instructions+=6;goto B421088;
case 0x42108e:c.instructions+=5;goto B42108e;
case 0x421092:c.instructions+=4;goto B421092;
case 0x421098:c.instructions+=3;goto B421098;
case 0x42109a:c.instructions+=2;goto B42109a;
case 0x42109d:c.instructions+=1;goto B42109d;
case 0x42109f:goto L42109f;
case 0x4210a3:c.instructions+=2;goto B4210a3;
case 0x4210a9:c.instructions+=1;goto B4210a9;
case 0x4210ad:goto L4210ad;
case 0x4210b3:c.instructions+=4;goto B4210b3;
case 0x4210b9:c.instructions+=3;goto B4210b9;
case 0x4210bb:c.instructions+=2;goto B4210bb;
case 0x4210be:c.instructions+=1;goto B4210be;
case 0x4210c0:goto L4210c0;
case 0x4210c4:c.instructions+=2;goto B4210c4;
case 0x4210c6:c.instructions+=1;goto B4210c6;
case 0x4210ca:goto L4210ca;
case 0x4210cb:c.instructions+=4;goto B4210cb;
case 0x4210cc:c.instructions+=3;goto B4210cc;
case 0x4210cd:c.instructions+=2;goto B4210cd;
case 0x4210cf:c.instructions+=1;goto B4210cf;
case 0x4210d4:goto L4210d4;
case 0x4210d6:c.instructions+=3;goto B4210d6;
case 0x4210da:c.instructions+=2;goto B4210da;
case 0x4210dc:c.instructions+=1;goto B4210dc;
case 0x4210e0:goto L4210e0;
case 0x4210e6:c.instructions+=3;goto B4210e6;
case 0x4210ed:c.instructions+=2;goto B4210ed;
case 0x4210ef:c.instructions+=1;goto B4210ef;
case 0x4210f1:goto L4210f1;
case 0x4210f4:c.instructions+=1;goto B4210f4;
case 0x4210f6:goto L4210f6;
case 0x4210f8:goto L4210f8;
case 0x4210f9:c.instructions+=2;goto B4210f9;
case 0x4210fc:c.instructions+=1;goto B4210fc;
case 0x421101:goto L421101;
case 0x421103:c.instructions+=1;goto B421103;
case 0x421105:goto L421105;
case 0x42110a:goto L42110a;
case 0x42110b:c.instructions+=2;goto B42110b;
case 0x42110e:c.instructions+=1;goto B42110e;
case 0x421110:goto L421110;
case 0x421116:c.instructions+=4;goto B421116;
case 0x421119:c.instructions+=3;goto B421119;
case 0x42111b:c.instructions+=2;goto B42111b;
case 0x42111c:c.instructions+=1;goto B42111c;
case 0x421122:goto L421122;
case 0x421125:c.instructions+=1;goto B421125;
case 0x42112b:goto L42112b;
case 0x42112c:c.instructions+=1;goto B42112c;
case 0x42112e:goto L42112e;
case 0x421136:goto L421136;
case 0x42113b:goto L42113b;
case 0x421141:c.instructions+=8;goto B421141;
case 0x421144:c.instructions+=7;goto B421144;
case 0x421148:c.instructions+=6;goto B421148;
case 0x42114d:c.instructions+=5;goto B42114d;
case 0x421153:c.instructions+=4;goto B421153;
case 0x421159:c.instructions+=3;goto B421159;
case 0x42115b:c.instructions+=2;goto B42115b;
case 0x42115e:c.instructions+=1;goto B42115e;
case 0x421160:goto L421160;
case 0x421168:goto L421168;
case 0x42116e:c.instructions+=2;goto B42116e;
case 0x421170:c.instructions+=1;goto B421170;
case 0x421172:goto L421172;
case 0x42117a:goto L42117a;
case 0x42117e:c.instructions+=7;goto B42117e;
case 0x42117f:c.instructions+=6;goto B42117f;
case 0x421183:c.instructions+=5;goto B421183;
case 0x421184:c.instructions+=4;goto B421184;
case 0x421188:c.instructions+=3;goto B421188;
case 0x421189:c.instructions+=2;goto B421189;
case 0x42118b:c.instructions+=1;goto B42118b;
case 0x421190:goto L421190;
case 0x421196:c.instructions+=2;goto B421196;
case 0x421197:c.instructions+=1;goto B421197;
case 0x421199:goto L421199;
case 0x42119a:c.instructions+=1;goto B42119a;
case 0x42119c:goto L42119c;
case 0x42119e:c.instructions+=2;goto B42119e;
case 0x4211a0:c.instructions+=1;goto B4211a0;
case 0x4211a3:goto L4211a3;
case 0x4211a5:goto L4211a5;
case 0x4211ad:c.instructions+=2;goto B4211ad;
case 0x4211b2:c.instructions+=1;goto B4211b2;
case 0x4211b4:goto L4211b4;
case 0x4211b7:c.instructions+=8;goto B4211b7;
case 0x4211b9:c.instructions+=7;goto B4211b9;
case 0x4211bc:c.instructions+=6;goto B4211bc;
case 0x4211bf:c.instructions+=5;goto B4211bf;
case 0x4211c0:c.instructions+=4;goto B4211c0;
case 0x4211c3:c.instructions+=3;goto B4211c3;
case 0x4211c6:c.instructions+=2;goto B4211c6;
case 0x4211ca:c.instructions+=1;goto B4211ca;
case 0x4211d0:goto L4211d0;
case 0x4211d3:c.instructions+=1;goto B4211d3;
case 0x4211d9:goto L4211d9;
case 0x4211de:c.instructions+=1;goto B4211de;
case 0x4211e3:goto L4211e3;
case 0x4211eb:c.instructions+=2;goto B4211eb;
case 0x4211f0:c.instructions+=1;goto B4211f0;
case 0x4211f5:goto L4211f5;
case 0x4211f7:c.instructions+=2;goto B4211f7;
case 0x4211f9:c.instructions+=1;goto B4211f9;
case 0x4211fc:goto L4211fc;
case 0x421206:goto L421206;
case 0x421208:c.instructions+=2;goto B421208;
case 0x42120c:c.instructions+=1;goto B42120c;
case 0x421212:goto L421212;
case 0x421218:c.instructions+=12;goto B421218;
case 0x42121c:c.instructions+=11;goto B42121c;
case 0x42121f:c.instructions+=10;goto B42121f;
case 0x421222:c.instructions+=9;goto B421222;
case 0x421224:c.instructions+=8;goto B421224;
case 0x421228:c.instructions+=7;goto B421228;
case 0x42122c:c.instructions+=6;goto B42122c;
case 0x42122d:c.instructions+=5;goto B42122d;
case 0x42122e:c.instructions+=4;goto B42122e;
case 0x42122f:c.instructions+=3;goto B42122f;
case 0x421235:c.instructions+=2;goto B421235;
case 0x42123f:c.instructions+=1;goto B42123f;
case 0x421244:goto L421244;
case 0x421248:c.instructions+=6;goto B421248;
case 0x42124e:c.instructions+=5;goto B42124e;
case 0x421250:c.instructions+=4;goto B421250;
case 0x421251:c.instructions+=3;goto B421251;
case 0x421252:c.instructions+=2;goto B421252;
case 0x421253:c.instructions+=1;goto B421253;
case 0x421258:goto L421258;
case 0x42125c:c.instructions+=6;goto B42125c;
case 0x421262:c.instructions+=5;goto B421262;
case 0x421264:c.instructions+=4;goto B421264;
case 0x421265:c.instructions+=3;goto B421265;
case 0x421266:c.instructions+=2;goto B421266;
case 0x421267:c.instructions+=1;goto B421267;
case 0x42126c:goto L42126c;
case 0x42126e:c.instructions+=1;goto B42126e;
case 0x421270:goto L421270;
case 0x42127a:goto L42127a;
case 0x421280:c.instructions+=12;goto B421280;
case 0x421286:c.instructions+=11;goto B421286;
case 0x421289:c.instructions+=10;goto B421289;
case 0x42128f:c.instructions+=9;goto B42128f;
case 0x421295:c.instructions+=8;goto B421295;
case 0x421298:c.instructions+=7;goto B421298;
case 0x42129c:c.instructions+=6;goto B42129c;
case 0x4212a0:c.instructions+=5;goto B4212a0;
case 0x4212a2:c.instructions+=4;goto B4212a2;
case 0x4212a8:c.instructions+=3;goto B4212a8;
case 0x4212aa:c.instructions+=2;goto B4212aa;
case 0x4212ad:c.instructions+=1;goto B4212ad;
case 0x4212af:goto L4212af;
case 0x4212b1:c.instructions+=5;goto B4212b1;
case 0x4212b3:c.instructions+=4;goto B4212b3;
case 0x4212b5:c.instructions+=3;goto B4212b5;
case 0x4212bb:c.instructions+=2;goto B4212bb;
case 0x4212c1:c.instructions+=1;goto B4212c1;
case 0x4212c3:goto L4212c3;
case 0x4212c5:c.instructions+=12;goto B4212c5;
case 0x4212c7:c.instructions+=11;goto B4212c7;
case 0x4212cb:c.instructions+=10;goto B4212cb;
case 0x4212cd:c.instructions+=9;goto B4212cd;
case 0x4212d1:c.instructions+=8;goto B4212d1;
case 0x4212d5:c.instructions+=7;goto B4212d5;
case 0x4212d9:c.instructions+=6;goto B4212d9;
case 0x4212dd:c.instructions+=5;goto B4212dd;
case 0x4212e1:c.instructions+=4;goto B4212e1;
case 0x4212e7:c.instructions+=3;goto B4212e7;
case 0x4212e9:c.instructions+=2;goto B4212e9;
case 0x4212ec:c.instructions+=1;goto B4212ec;
case 0x4212ee:goto L4212ee;
case 0x4212f0:c.instructions+=7;goto B4212f0;
case 0x4212f2:c.instructions+=6;goto B4212f2;
case 0x4212f8:c.instructions+=5;goto B4212f8;
case 0x4212fc:c.instructions+=4;goto B4212fc;
case 0x421300:c.instructions+=3;goto B421300;
case 0x421304:c.instructions+=2;goto B421304;
case 0x421308:c.instructions+=1;goto B421308;
case 0x42130c:goto L42130c;
case 0x42130f:c.instructions+=8;goto B42130f;
case 0x421311:c.instructions+=7;goto B421311;
case 0x421313:c.instructions+=6;goto B421313;
case 0x421316:c.instructions+=5;goto B421316;
case 0x421318:c.instructions+=4;goto B421318;
case 0x42131b:c.instructions+=3;goto B42131b;
case 0x42131d:c.instructions+=2;goto B42131d;
case 0x421321:c.instructions+=1;goto B421321;
case 0x421323:goto L421323;
case 0x421326:c.instructions+=7;goto B421326;
case 0x421329:c.instructions+=6;goto B421329;
case 0x42132d:c.instructions+=5;goto B42132d;
case 0x421331:c.instructions+=4;goto B421331;
case 0x421334:c.instructions+=3;goto B421334;
case 0x421337:c.instructions+=2;goto B421337;
case 0x421339:c.instructions+=1;goto B421339;
case 0x42133b:goto L42133b;
case 0x421341:goto L421341;
case 0x421344:c.instructions+=2;goto B421344;
case 0x421346:c.instructions+=1;goto B421346;
case 0x421348:goto L421348;
case 0x42134b:c.instructions+=7;goto B42134b;
case 0x42134e:c.instructions+=6;goto B42134e;
case 0x421352:c.instructions+=5;goto B421352;
case 0x421356:c.instructions+=4;goto B421356;
case 0x421359:c.instructions+=3;goto B421359;
case 0x42135c:c.instructions+=2;goto B42135c;
case 0x42135e:c.instructions+=1;goto B42135e;
case 0x421360:goto L421360;
case 0x421366:goto L421366;
case 0x421368:c.instructions+=19;goto B421368;
case 0x42136a:c.instructions+=18;goto B42136a;
case 0x42136c:c.instructions+=17;goto B42136c;
case 0x42136e:c.instructions+=16;goto B42136e;
case 0x421372:c.instructions+=15;goto B421372;
case 0x421375:c.instructions+=14;goto B421375;
case 0x421377:c.instructions+=13;goto B421377;
case 0x42137a:c.instructions+=12;goto B42137a;
case 0x42137c:c.instructions+=11;goto B42137c;
case 0x42137e:c.instructions+=10;goto B42137e;
case 0x421382:c.instructions+=9;goto B421382;
case 0x421384:c.instructions+=8;goto B421384;
case 0x421386:c.instructions+=7;goto B421386;
case 0x42138c:c.instructions+=6;goto B42138c;
case 0x42138e:c.instructions+=5;goto B42138e;
case 0x421392:c.instructions+=4;goto B421392;
case 0x421394:c.instructions+=3;goto B421394;
case 0x421396:c.instructions+=2;goto B421396;
case 0x421399:c.instructions+=1;goto B421399;
case 0x42139b:goto L42139b;
case 0x42139d:c.instructions+=1;goto B42139d;
case 0x4213a1:goto L4213a1;
case 0x4213a7:c.instructions+=4;goto B4213a7;
case 0x4213a9:c.instructions+=3;goto B4213a9;
case 0x4213ab:c.instructions+=2;goto B4213ab;
case 0x4213ae:c.instructions+=1;goto B4213ae;
case 0x4213b0:goto L4213b0;
case 0x4213b6:c.instructions+=3;goto B4213b6;
case 0x4213b8:c.instructions+=2;goto B4213b8;
case 0x4213bc:c.instructions+=1;goto B4213bc;
case 0x4213be:goto L4213be;
case 0x4213c2:goto L4213c2;
case 0x4213c8:c.instructions+=6;goto B4213c8;
case 0x4213ca:c.instructions+=5;goto B4213ca;
case 0x4213ce:c.instructions+=4;goto B4213ce;
case 0x4213d0:c.instructions+=3;goto B4213d0;
case 0x4213d2:c.instructions+=2;goto B4213d2;
case 0x4213d5:c.instructions+=1;goto B4213d5;
case 0x4213d7:goto L4213d7;
case 0x4213d9:c.instructions+=1;goto B4213d9;
case 0x4213dd:goto L4213dd;
case 0x4213e3:c.instructions+=4;goto B4213e3;
case 0x4213e5:c.instructions+=3;goto B4213e5;
case 0x4213e7:c.instructions+=2;goto B4213e7;
case 0x4213ea:c.instructions+=1;goto B4213ea;
case 0x4213ec:goto L4213ec;
case 0x4213f2:c.instructions+=3;goto B4213f2;
case 0x4213f4:c.instructions+=2;goto B4213f4;
case 0x4213f8:c.instructions+=1;goto B4213f8;
case 0x4213fa:goto L4213fa;
case 0x4213fe:goto L4213fe;
case 0x421402:c.instructions+=2;goto B421402;
case 0x421404:c.instructions+=1;goto B421404;
case 0x42140a:goto L42140a;
case 0x42140e:c.instructions+=2;goto B42140e;
case 0x421410:c.instructions+=1;goto B421410;
case 0x421416:goto L421416;
case 0x42141a:c.instructions+=2;goto B42141a;
case 0x42141d:c.instructions+=1;goto B42141d;
case 0x421423:goto L421423;
case 0x421427:c.instructions+=10;goto B421427;
case 0x42142d:c.instructions+=9;goto B42142d;
case 0x421431:c.instructions+=8;goto B421431;
case 0x421437:c.instructions+=7;goto B421437;
case 0x42143b:c.instructions+=6;goto B42143b;
case 0x421441:c.instructions+=5;goto B421441;
case 0x421445:c.instructions+=4;goto B421445;
case 0x421447:c.instructions+=3;goto B421447;
case 0x421449:c.instructions+=2;goto B421449;
case 0x42144c:c.instructions+=1;goto B42144c;
case 0x42144e:goto L42144e;
case 0x421450:goto L421450;
case 0x421454:c.instructions+=8;goto B421454;
case 0x421459:c.instructions+=7;goto B421459;
case 0x42145d:c.instructions+=6;goto B42145d;
case 0x421463:c.instructions+=5;goto B421463;
case 0x421465:c.instructions+=4;goto B421465;
case 0x421469:c.instructions+=3;goto B421469;
case 0x42146d:c.instructions+=2;goto B42146d;
case 0x42146e:c.instructions+=1;goto B42146e;
case 0x421473:goto L421473;
case 0x421475:c.instructions+=20;goto B421475;
case 0x421479:c.instructions+=19;goto B421479;
case 0x42147e:c.instructions+=18;goto B42147e;
case 0x421484:c.instructions+=17;goto B421484;
case 0x421486:c.instructions+=16;goto B421486;
case 0x42148c:c.instructions+=15;goto B42148c;
case 0x42148e:c.instructions+=14;goto B42148e;
case 0x421492:c.instructions+=13;goto B421492;
case 0x421494:c.instructions+=12;goto B421494;
case 0x42149a:c.instructions+=11;goto B42149a;
case 0x42149e:c.instructions+=10;goto B42149e;
case 0x4214a0:c.instructions+=9;goto B4214a0;
case 0x4214a6:c.instructions+=8;goto B4214a6;
case 0x4214ac:c.instructions+=7;goto B4214ac;
case 0x4214b2:c.instructions+=6;goto B4214b2;
case 0x4214b8:c.instructions+=5;goto B4214b8;
case 0x4214ba:c.instructions+=4;goto B4214ba;
case 0x4214c0:c.instructions+=3;goto B4214c0;
case 0x4214c6:c.instructions+=2;goto B4214c6;
case 0x4214ca:c.instructions+=1;goto B4214ca;
case 0x4214d0:goto L4214d0;
case 0x4214d3:c.instructions+=4;goto B4214d3;
case 0x4214d9:c.instructions+=3;goto B4214d9;
case 0x4214db:c.instructions+=2;goto B4214db;
case 0x4214e1:c.instructions+=1;goto B4214e1;
case 0x4214e3:goto L4214e3;
case 0x4214e9:c.instructions+=15;goto B4214e9;
case 0x4214ef:c.instructions+=14;goto B4214ef;
case 0x4214f4:c.instructions+=13;goto B4214f4;
case 0x4214fa:c.instructions+=12;goto B4214fa;
case 0x421500:c.instructions+=11;goto B421500;
case 0x421506:c.instructions+=10;goto B421506;
case 0x42150c:c.instructions+=9;goto B42150c;
case 0x421512:c.instructions+=8;goto B421512;
case 0x421517:c.instructions+=7;goto B421517;
case 0x42151a:c.instructions+=6;goto B42151a;
case 0x421520:c.instructions+=5;goto B421520;
case 0x421523:c.instructions+=4;goto B421523;
case 0x421529:c.instructions+=3;goto B421529;
case 0x42152c:c.instructions+=2;goto B42152c;
case 0x421531:c.instructions+=1;goto B421531;
case 0x421536:goto L421536;
case 0x42153c:c.instructions+=15;goto B42153c;
case 0x421542:c.instructions+=14;goto B421542;
case 0x421547:c.instructions+=13;goto B421547;
case 0x42154d:c.instructions+=12;goto B42154d;
case 0x421553:c.instructions+=11;goto B421553;
case 0x421559:c.instructions+=10;goto B421559;
case 0x42155f:c.instructions+=9;goto B42155f;
case 0x421565:c.instructions+=8;goto B421565;
case 0x42156a:c.instructions+=7;goto B42156a;
case 0x42156d:c.instructions+=6;goto B42156d;
case 0x421573:c.instructions+=5;goto B421573;
case 0x421576:c.instructions+=4;goto B421576;
case 0x42157c:c.instructions+=3;goto B42157c;
case 0x42157f:c.instructions+=2;goto B42157f;
case 0x421584:c.instructions+=1;goto B421584;
case 0x421589:goto L421589;
case 0x42158e:c.instructions+=1;goto B42158e;
case 0x421593:goto L421593;
case 0x421595:c.instructions+=2;goto B421595;
case 0x42159b:c.instructions+=1;goto B42159b;
case 0x42159d:goto L42159d;
case 0x4215a3:c.instructions+=15;goto B4215a3;
case 0x4215a9:c.instructions+=14;goto B4215a9;
case 0x4215ae:c.instructions+=13;goto B4215ae;
case 0x4215b4:c.instructions+=12;goto B4215b4;
case 0x4215ba:c.instructions+=11;goto B4215ba;
case 0x4215c0:c.instructions+=10;goto B4215c0;
case 0x4215c6:c.instructions+=9;goto B4215c6;
case 0x4215cc:c.instructions+=8;goto B4215cc;
case 0x4215d1:c.instructions+=7;goto B4215d1;
case 0x4215d4:c.instructions+=6;goto B4215d4;
case 0x4215da:c.instructions+=5;goto B4215da;
case 0x4215dd:c.instructions+=4;goto B4215dd;
case 0x4215e3:c.instructions+=3;goto B4215e3;
case 0x4215e6:c.instructions+=2;goto B4215e6;
case 0x4215eb:c.instructions+=1;goto B4215eb;
case 0x4215ed:goto L4215ed;
case 0x4215f3:c.instructions+=14;goto B4215f3;
case 0x4215f9:c.instructions+=13;goto B4215f9;
case 0x4215fe:c.instructions+=12;goto B4215fe;
case 0x421604:c.instructions+=11;goto B421604;
case 0x42160a:c.instructions+=10;goto B42160a;
case 0x421610:c.instructions+=9;goto B421610;
case 0x421616:c.instructions+=8;goto B421616;
case 0x42161c:c.instructions+=7;goto B42161c;
case 0x421621:c.instructions+=6;goto B421621;
case 0x421624:c.instructions+=5;goto B421624;
case 0x42162a:c.instructions+=4;goto B42162a;
case 0x42162d:c.instructions+=3;goto B42162d;
case 0x421633:c.instructions+=2;goto B421633;
case 0x421636:c.instructions+=1;goto B421636;
case 0x42163b:goto L42163b;
case 0x42163f:c.instructions+=8;goto B42163f;
case 0x421642:c.instructions+=7;goto B421642;
case 0x421648:c.instructions+=6;goto B421648;
case 0x42164b:c.instructions+=5;goto B42164b;
case 0x42164c:c.instructions+=4;goto B42164c;
case 0x421651:c.instructions+=3;goto B421651;
case 0x421655:c.instructions+=2;goto B421655;
case 0x421658:c.instructions+=1;goto B421658;
case 0x42165d:goto L42165d;
case 0x421661:c.instructions+=7;goto B421661;
case 0x421666:c.instructions+=6;goto B421666;
case 0x421667:c.instructions+=5;goto B421667;
case 0x42166b:c.instructions+=4;goto B42166b;
case 0x42166f:c.instructions+=3;goto B42166f;
case 0x421670:c.instructions+=2;goto B421670;
case 0x421672:c.instructions+=1;goto B421672;
case 0x421677:goto L421677;
case 0x42167d:c.instructions+=5;goto B42167d;
case 0x421683:c.instructions+=4;goto B421683;
case 0x421689:c.instructions+=3;goto B421689;
case 0x42168b:c.instructions+=2;goto B42168b;
case 0x42168e:c.instructions+=1;goto B42168e;
case 0x421690:goto L421690;
case 0x421694:c.instructions+=3;goto B421694;
case 0x421695:c.instructions+=2;goto B421695;
case 0x42169a:c.instructions+=1;goto B42169a;
case 0x42169f:goto L42169f;
case 0x4216a3:c.instructions+=3;goto B4216a3;
case 0x4216a4:c.instructions+=2;goto B4216a4;
case 0x4216a9:c.instructions+=1;goto B4216a9;
case 0x4216ae:goto L4216ae;
case 0x4216b2:c.instructions+=2;goto B4216b2;
case 0x4216b7:c.instructions+=1;goto B4216b7;
case 0x4216bc:goto L4216bc;
case 0x4216be:c.instructions+=1;goto B4216be;
case 0x4216c0:goto L4216c0;
case 0x4216c6:c.instructions+=4;goto B4216c6;
case 0x4216c9:c.instructions+=3;goto B4216c9;
case 0x4216cb:c.instructions+=2;goto B4216cb;
case 0x4216d0:c.instructions+=1;goto B4216d0;
case 0x4216d2:goto L4216d2;
case 0x4216d7:goto L4216d7;
case 0x4216d8:c.instructions+=1;goto B4216d8;
case 0x4216dd:goto L4216dd;
case 0x4216e1:c.instructions+=4;goto B4216e1;
case 0x4216e5:c.instructions+=3;goto B4216e5;
case 0x4216eb:c.instructions+=2;goto B4216eb;
case 0x4216f1:c.instructions+=1;goto B4216f1;
case 0x4216f7:goto L4216f7;
case 0x4216f9:c.instructions+=1;goto B4216f9;
case 0x4216fe:goto L4216fe;
case 0x421702:c.instructions+=4;goto B421702;
case 0x421704:c.instructions+=3;goto B421704;
case 0x421706:c.instructions+=2;goto B421706;
case 0x421708:c.instructions+=1;goto B421708;
case 0x42170b:goto L42170b;
case 0x421711:c.instructions+=3;goto B421711;
case 0x421713:c.instructions+=2;goto B421713;
case 0x421716:c.instructions+=1;goto B421716;
case 0x421718:goto L421718;
case 0x42171e:c.instructions+=3;goto B42171e;
case 0x421722:c.instructions+=2;goto B421722;
case 0x421726:c.instructions+=1;goto B421726;
case 0x421728:goto L421728;
case 0x42172c:goto L42172c;
case 0x421733:c.instructions+=10;goto B421733;
case 0x421737:c.instructions+=9;goto B421737;
case 0x421739:c.instructions+=8;goto B421739;
case 0x421740:c.instructions+=7;goto B421740;
case 0x421744:c.instructions+=6;goto B421744;
case 0x421746:c.instructions+=5;goto B421746;
case 0x42174d:c.instructions+=4;goto B42174d;
case 0x421751:c.instructions+=3;goto B421751;
case 0x421753:c.instructions+=2;goto B421753;
case 0x421757:c.instructions+=1;goto B421757;
case 0x421759:goto L421759;
case 0x42175d:goto L42175d;
case 0x421763:c.instructions+=5;goto B421763;
case 0x421766:c.instructions+=4;goto B421766;
case 0x421769:c.instructions+=3;goto B421769;
case 0x42176b:c.instructions+=2;goto B42176b;
case 0x42176d:c.instructions+=1;goto B42176d;
case 0x421773:goto L421773;
case 0x421775:goto L421775;
case 0x421776:c.instructions+=2;goto B421776;
case 0x421778:c.instructions+=1;goto B421778;
case 0x42177d:goto L42177d;
case 0x42177f:c.instructions+=17;goto B42177f;
case 0x421784:c.instructions+=16;goto B421784;
case 0x421787:c.instructions+=15;goto B421787;
case 0x421789:c.instructions+=14;goto B421789;
case 0x42178b:c.instructions+=13;goto B42178b;
case 0x42178e:c.instructions+=12;goto B42178e;
case 0x421792:c.instructions+=11;goto B421792;
case 0x421796:c.instructions+=10;goto B421796;
case 0x421798:c.instructions+=9;goto B421798;
case 0x42179c:c.instructions+=8;goto B42179c;
case 0x4217a2:c.instructions+=7;goto B4217a2;
case 0x4217a6:c.instructions+=6;goto B4217a6;
case 0x4217aa:c.instructions+=5;goto B4217aa;
case 0x4217b0:c.instructions+=4;goto B4217b0;
case 0x4217b6:c.instructions+=3;goto B4217b6;
case 0x4217b8:c.instructions+=2;goto B4217b8;
case 0x4217bb:c.instructions+=1;goto B4217bb;
case 0x4217c1:goto L4217c1;
case 0x4217c5:c.instructions+=4;goto B4217c5;
case 0x4217cb:c.instructions+=3;goto B4217cb;
case 0x4217cd:c.instructions+=2;goto B4217cd;
case 0x4217d0:c.instructions+=1;goto B4217d0;
case 0x4217d6:goto L4217d6;
case 0x4217d8:c.instructions+=1;goto B4217d8;
case 0x4217dd:goto L4217dd;
case 0x4217df:c.instructions+=1;goto B4217df;
case 0x4217e5:goto L4217e5;
case 0x4217e7:c.instructions+=8;goto B4217e7;
case 0x4217eb:c.instructions+=7;goto B4217eb;
case 0x4217ef:c.instructions+=6;goto B4217ef;
case 0x4217f3:c.instructions+=5;goto B4217f3;
case 0x4217f4:c.instructions+=4;goto B4217f4;
case 0x4217f8:c.instructions+=3;goto B4217f8;
case 0x4217f9:c.instructions+=2;goto B4217f9;
case 0x4217fb:c.instructions+=1;goto B4217fb;
case 0x421800:goto L421800;
case 0x421804:c.instructions+=2;goto B421804;
case 0x42180a:c.instructions+=1;goto B42180a;
case 0x42180c:goto L42180c;
case 0x421810:goto L421810;
case 0x421816:c.instructions+=6;goto B421816;
case 0x42181c:c.instructions+=5;goto B42181c;
case 0x421822:c.instructions+=4;goto B421822;
case 0x421824:c.instructions+=3;goto B421824;
case 0x421826:c.instructions+=2;goto B421826;
case 0x421829:c.instructions+=1;goto B421829;
case 0x42182b:goto L42182b;
case 0x421831:c.instructions+=6;goto B421831;
case 0x421834:c.instructions+=5;goto B421834;
case 0x421835:c.instructions+=4;goto B421835;
case 0x421839:c.instructions+=3;goto B421839;
case 0x42183a:c.instructions+=2;goto B42183a;
case 0x42183d:c.instructions+=1;goto B42183d;
case 0x421842:goto L421842;
case 0x421846:c.instructions+=3;goto B421846;
case 0x421847:c.instructions+=2;goto B421847;
case 0x42184c:c.instructions+=1;goto B42184c;
case 0x421851:goto L421851;
case 0x421857:c.instructions+=7;goto B421857;
case 0x42185b:c.instructions+=6;goto B42185b;
case 0x421861:c.instructions+=5;goto B421861;
case 0x421867:c.instructions+=4;goto B421867;
case 0x42186d:c.instructions+=3;goto B42186d;
case 0x42186f:c.instructions+=2;goto B42186f;
case 0x421872:c.instructions+=1;goto B421872;
case 0x421874:goto L421874;
case 0x421876:c.instructions+=1;goto B421876;
case 0x42187c:goto L42187c;
case 0x42187e:c.instructions+=5;goto B42187e;
case 0x421882:c.instructions+=4;goto B421882;
case 0x421888:c.instructions+=3;goto B421888;
case 0x42188a:c.instructions+=2;goto B42188a;
case 0x42188d:c.instructions+=1;goto B42188d;
case 0x42188f:goto L42188f;
case 0x421891:c.instructions+=1;goto B421891;
case 0x421893:goto L421893;
case 0x421895:c.instructions+=1;goto B421895;
case 0x42189a:goto L42189a;
case 0x42189c:c.instructions+=1;goto B42189c;
case 0x42189e:goto L42189e;
case 0x4218a2:c.instructions+=3;goto B4218a2;
case 0x4218a3:c.instructions+=2;goto B4218a3;
case 0x4218a5:c.instructions+=1;goto B4218a5;
case 0x4218ab:goto L4218ab;
case 0x4218af:goto L4218af;
case 0x4218b5:c.instructions+=3;goto B4218b5;
case 0x4218b7:c.instructions+=2;goto B4218b7;
case 0x4218ba:c.instructions+=1;goto B4218ba;
case 0x4218c0:goto L4218c0;
case 0x4218c4:c.instructions+=6;goto B4218c4;
case 0x4218ca:c.instructions+=5;goto B4218ca;
case 0x4218cc:c.instructions+=4;goto B4218cc;
case 0x4218ce:c.instructions+=3;goto B4218ce;
case 0x4218d0:c.instructions+=2;goto B4218d0;
case 0x4218d3:c.instructions+=1;goto B4218d3;
case 0x4218d9:goto L4218d9;
case 0x4218df:c.instructions+=1;goto B4218df;
case 0x4218e4:goto L4218e4;
case 0x4218ea:c.instructions+=2;goto B4218ea;
case 0x4218ec:c.instructions+=1;goto B4218ec;
case 0x4218ee:goto L4218ee;
case 0x4218f3:c.instructions+=1;goto B4218f3;
case 0x4218f5:goto L4218f5;
case 0x4218fb:c.instructions+=1;goto B4218fb;
case 0x421901:goto L421901;
case 0x421907:c.instructions+=10;goto B421907;
case 0x421911:c.instructions+=9;goto B421911;
case 0x421916:c.instructions+=8;goto B421916;
case 0x421918:c.instructions+=7;goto B421918;
case 0x42191c:c.instructions+=6;goto B42191c;
case 0x421920:c.instructions+=5;goto B421920;
case 0x421926:c.instructions+=4;goto B421926;
case 0x42192c:c.instructions+=3;goto B42192c;
case 0x42192e:c.instructions+=2;goto B42192e;
case 0x421931:c.instructions+=1;goto B421931;
case 0x421933:goto L421933;
case 0x421939:c.instructions+=2;goto B421939;
case 0x42193c:c.instructions+=1;goto B42193c;
case 0x421941:goto L421941;
case 0x421943:c.instructions+=3;goto B421943;
case 0x421949:c.instructions+=2;goto B421949;
case 0x42194d:c.instructions+=1;goto B42194d;
case 0x421953:goto L421953;
case 0x421959:c.instructions+=9;goto B421959;
case 0x42195f:c.instructions+=8;goto B42195f;
case 0x421963:c.instructions+=7;goto B421963;
case 0x421969:c.instructions+=6;goto B421969;
case 0x42196f:c.instructions+=5;goto B42196f;
case 0x421973:c.instructions+=4;goto B421973;
case 0x421977:c.instructions+=3;goto B421977;
case 0x421979:c.instructions+=2;goto B421979;
case 0x42197c:c.instructions+=1;goto B42197c;
case 0x42197e:goto L42197e;
case 0x421980:c.instructions+=1;goto B421980;
case 0x421984:goto L421984;
case 0x421988:c.instructions+=4;goto B421988;
case 0x42198a:c.instructions+=3;goto B42198a;
case 0x42198c:c.instructions+=2;goto B42198c;
case 0x42198f:c.instructions+=1;goto B42198f;
case 0x421991:goto L421991;
case 0x421993:c.instructions+=2;goto B421993;
case 0x421997:c.instructions+=1;goto B421997;
case 0x421999:goto L421999;
case 0x4219a0:c.instructions+=7;goto B4219a0;
case 0x4219a4:c.instructions+=6;goto B4219a4;
case 0x4219a8:c.instructions+=5;goto B4219a8;
case 0x4219ae:c.instructions+=4;goto B4219ae;
case 0x4219b4:c.instructions+=3;goto B4219b4;
case 0x4219b6:c.instructions+=2;goto B4219b6;
case 0x4219b9:c.instructions+=1;goto B4219b9;
case 0x4219bb:goto L4219bb;
case 0x4219c1:c.instructions+=1;goto B4219c1;
case 0x4219c3:goto L4219c3;
case 0x4219c9:c.instructions+=3;goto B4219c9;
case 0x4219cb:c.instructions+=2;goto B4219cb;
case 0x4219ce:c.instructions+=1;goto B4219ce;
case 0x4219d0:goto L4219d0;
case 0x4219d6:goto L4219d6;
case 0x4219dc:c.instructions+=3;goto B4219dc;
case 0x4219e0:c.instructions+=2;goto B4219e0;
case 0x4219e8:c.instructions+=1;goto B4219e8;
case 0x4219ea:goto L4219ea;
case 0x4219ed:c.instructions+=3;goto B4219ed;
case 0x4219f3:c.instructions+=2;goto B4219f3;
case 0x4219f5:c.instructions+=1;goto B4219f5;
case 0x4219f7:goto L4219f7;
case 0x4219fd:c.instructions+=5;goto B4219fd;
case 0x421a03:c.instructions+=4;goto B421a03;
case 0x421a09:c.instructions+=3;goto B421a09;
case 0x421a0d:c.instructions+=2;goto B421a0d;
case 0x421a11:c.instructions+=1;goto B421a11;
case 0x421a13:goto L421a13;
case 0x421a18:c.instructions+=5;goto B421a18;
case 0x421a1e:c.instructions+=4;goto B421a1e;
case 0x421a24:c.instructions+=3;goto B421a24;
case 0x421a28:c.instructions+=2;goto B421a28;
case 0x421a2c:c.instructions+=1;goto B421a2c;
case 0x421a2e:goto L421a2e;
case 0x421a34:c.instructions+=4;goto B421a34;
case 0x421a3a:c.instructions+=3;goto B421a3a;
case 0x421a3f:c.instructions+=2;goto B421a3f;
case 0x421a43:c.instructions+=1;goto B421a43;
case 0x421a47:goto L421a47;
case 0x421a4d:c.instructions+=5;goto B421a4d;
case 0x421a51:c.instructions+=4;goto B421a51;
case 0x421a53:c.instructions+=3;goto B421a53;
case 0x421a55:c.instructions+=2;goto B421a55;
case 0x421a58:c.instructions+=1;goto B421a58;
case 0x421a5a:goto L421a5a;
case 0x421a5c:c.instructions+=1;goto B421a5c;
case 0x421a60:goto L421a60;
case 0x421a66:c.instructions+=5;goto B421a66;
case 0x421a6c:c.instructions+=4;goto B421a6c;
case 0x421a70:c.instructions+=3;goto B421a70;
case 0x421a72:c.instructions+=2;goto B421a72;
case 0x421a75:c.instructions+=1;goto B421a75;
case 0x421a77:goto L421a77;
case 0x421a79:c.instructions+=1;goto B421a79;
case 0x421a7d:goto L421a7d;
case 0x421a83:c.instructions+=5;goto B421a83;
case 0x421a89:c.instructions+=4;goto B421a89;
case 0x421a8d:c.instructions+=3;goto B421a8d;
case 0x421a8f:c.instructions+=2;goto B421a8f;
case 0x421a92:c.instructions+=1;goto B421a92;
case 0x421a94:goto L421a94;
case 0x421a96:c.instructions+=1;goto B421a96;
case 0x421a9a:goto L421a9a;
case 0x421aa0:c.instructions+=1;goto B421aa0;
case 0x421aa5:goto L421aa5;
case 0x421aa7:c.instructions+=2;goto B421aa7;
case 0x421aad:c.instructions+=1;goto B421aad;
case 0x421aaf:goto L421aaf;
case 0x421ab3:goto L421ab3;
case 0x421ab9:c.instructions+=9;goto B421ab9;
case 0x421abd:c.instructions+=8;goto B421abd;
case 0x421ac3:c.instructions+=7;goto B421ac3;
case 0x421ac7:c.instructions+=6;goto B421ac7;
case 0x421aca:c.instructions+=5;goto B421aca;
case 0x421ad0:c.instructions+=4;goto B421ad0;
case 0x421ad2:c.instructions+=3;goto B421ad2;
case 0x421ad8:c.instructions+=2;goto B421ad8;
case 0x421adc:c.instructions+=1;goto B421adc;
case 0x421ade:goto L421ade;
case 0x421ae0:c.instructions+=2;goto B421ae0;
case 0x421ae2:c.instructions+=1;goto B421ae2;
case 0x421ae5:goto L421ae5;
case 0x421aef:goto L421aef;
case 0x421af3:c.instructions+=7;goto B421af3;
case 0x421af7:c.instructions+=6;goto B421af7;
case 0x421afd:c.instructions+=5;goto B421afd;
case 0x421aff:c.instructions+=4;goto B421aff;
case 0x421b01:c.instructions+=3;goto B421b01;
case 0x421b02:c.instructions+=2;goto B421b02;
case 0x421b03:c.instructions+=1;goto B421b03;
case 0x421b08:goto L421b08;
case 0x421b09:c.instructions+=2;goto B421b09;
case 0x421b0b:c.instructions+=1;goto B421b0b;
case 0x421b10:goto L421b10;
case 0x421b14:c.instructions+=3;goto B421b14;
case 0x421b16:c.instructions+=2;goto B421b16;
case 0x421b1c:c.instructions+=1;goto B421b1c;
case 0x421b1e:goto L421b1e;
case 0x421b24:c.instructions+=7;goto B421b24;
case 0x421b2a:c.instructions+=6;goto B421b2a;
case 0x421b2e:c.instructions+=5;goto B421b2e;
case 0x421b31:c.instructions+=4;goto B421b31;
case 0x421b33:c.instructions+=3;goto B421b33;
case 0x421b36:c.instructions+=2;goto B421b36;
case 0x421b3e:c.instructions+=1;goto B421b3e;
case 0x421b41:goto L421b41;
case 0x421b44:c.instructions+=1;goto B421b44;
case 0x421b46:goto L421b46;
case 0x421b4c:c.instructions+=1;goto B421b4c;
case 0x421b50:goto L421b50;
case 0x421b52:c.instructions+=2;goto B421b52;
case 0x421b54:c.instructions+=1;goto B421b54;
case 0x421b57:goto L421b57;
case 0x421b5c:goto L421b5c;
case 0x421b62:c.instructions+=5;goto B421b62;
case 0x421b64:c.instructions+=4;goto B421b64;
case 0x421b6a:c.instructions+=3;goto B421b6a;
case 0x421b6c:c.instructions+=2;goto B421b6c;
case 0x421b6f:c.instructions+=1;goto B421b6f;
case 0x421b71:goto L421b71;
case 0x421b75:c.instructions+=5;goto B421b75;
case 0x421b7d:c.instructions+=4;goto B421b7d;
case 0x421b7f:c.instructions+=3;goto B421b7f;
case 0x421b85:c.instructions+=2;goto B421b85;
case 0x421b87:c.instructions+=1;goto B421b87;
case 0x421b89:goto L421b89;
case 0x421b8f:c.instructions+=6;goto B421b8f;
case 0x421b95:c.instructions+=5;goto B421b95;
case 0x421b9b:c.instructions+=4;goto B421b9b;
case 0x421ba1:c.instructions+=3;goto B421ba1;
case 0x421ba3:c.instructions+=2;goto B421ba3;
case 0x421ba6:c.instructions+=1;goto B421ba6;
case 0x421bac:goto L421bac;
case 0x421bae:c.instructions+=4;goto B421bae;
case 0x421bb2:c.instructions+=3;goto B421bb2;
case 0x421bb4:c.instructions+=2;goto B421bb4;
case 0x421bb7:c.instructions+=1;goto B421bb7;
case 0x421bb9:goto L421bb9;
case 0x421bc0:c.instructions+=1;goto B421bc0;
case 0x421bc2:goto L421bc2;
case 0x421bc6:c.instructions+=4;goto B421bc6;
case 0x421bcc:c.instructions+=3;goto B421bcc;
case 0x421bce:c.instructions+=2;goto B421bce;
case 0x421bd1:c.instructions+=1;goto B421bd1;
case 0x421bd3:goto L421bd3;
case 0x421bda:goto L421bda;
case 0x421be0:c.instructions+=2;goto B421be0;
case 0x421be2:c.instructions+=1;goto B421be2;
case 0x421be8:goto L421be8;
case 0x421bea:c.instructions+=2;goto B421bea;
case 0x421bec:c.instructions+=1;goto B421bec;
case 0x421bef:goto L421bef;
case 0x421bf3:c.instructions+=2;goto B421bf3;
case 0x421bf5:c.instructions+=1;goto B421bf5;
case 0x421bf9:goto L421bf9;
case 0x421c01:goto L421c01;
case 0x421c09:c.instructions+=1;goto B421c09;
case 0x421c0c:goto L421c0c;
case 0x421c0e:c.instructions+=1;goto B421c0e;
case 0x421c10:goto L421c10;
case 0x421c14:c.instructions+=8;goto B421c14;
case 0x421c15:c.instructions+=7;goto B421c15;
case 0x421c16:c.instructions+=6;goto B421c16;
case 0x421c1a:c.instructions+=5;goto B421c1a;
case 0x421c1b:c.instructions+=4;goto B421c1b;
case 0x421c1f:c.instructions+=3;goto B421c1f;
case 0x421c20:c.instructions+=2;goto B421c20;
case 0x421c22:c.instructions+=1;goto B421c22;
case 0x421c27:goto L421c27;
case 0x421c2b:c.instructions+=3;goto B421c2b;
case 0x421c2d:c.instructions+=2;goto B421c2d;
case 0x421c35:c.instructions+=1;goto B421c35;
case 0x421c37:goto L421c37;
case 0x421c3c:c.instructions+=2;goto B421c3c;
case 0x421c3e:c.instructions+=1;goto B421c3e;
case 0x421c40:goto L421c40;
case 0x421c45:c.instructions+=2;goto B421c45;
case 0x421c47:c.instructions+=1;goto B421c47;
case 0x421c49:goto L421c49;
case 0x421c4e:c.instructions+=2;goto B421c4e;
case 0x421c50:c.instructions+=1;goto B421c50;
case 0x421c52:goto L421c52;
case 0x421c57:c.instructions+=2;goto B421c57;
case 0x421c59:c.instructions+=1;goto B421c59;
case 0x421c5b:goto L421c5b;
case 0x421c60:c.instructions+=2;goto B421c60;
case 0x421c62:c.instructions+=1;goto B421c62;
case 0x421c64:goto L421c64;
case 0x421c68:c.instructions+=3;goto B421c68;
case 0x421c69:c.instructions+=2;goto B421c69;
case 0x421c6e:c.instructions+=1;goto B421c6e;
case 0x421c73:goto L421c73;
case 0x421c79:c.instructions+=5;goto B421c79;
case 0x421c7d:c.instructions+=4;goto B421c7d;
case 0x421c83:c.instructions+=3;goto B421c83;
case 0x421c85:c.instructions+=2;goto B421c85;
case 0x421c88:c.instructions+=1;goto B421c88;
case 0x421c8e:goto L421c8e;
case 0x421c92:c.instructions+=5;goto B421c92;
case 0x421c98:c.instructions+=4;goto B421c98;
case 0x421c9c:c.instructions+=3;goto B421c9c;
case 0x421c9e:c.instructions+=2;goto B421c9e;
case 0x421ca1:c.instructions+=1;goto B421ca1;
case 0x421ca3:goto L421ca3;
case 0x421ca5:c.instructions+=1;goto B421ca5;
case 0x421cab:goto L421cab;
case 0x421caf:goto L421caf;
case 0x421cb3:c.instructions+=11;goto B421cb3;
case 0x421cb9:c.instructions+=10;goto B421cb9;
case 0x421cbd:c.instructions+=9;goto B421cbd;
case 0x421cc1:c.instructions+=8;goto B421cc1;
case 0x421cc5:c.instructions+=7;goto B421cc5;
case 0x421cc9:c.instructions+=6;goto B421cc9;
case 0x421ccd:c.instructions+=5;goto B421ccd;
case 0x421cd1:c.instructions+=4;goto B421cd1;
case 0x421cd7:c.instructions+=3;goto B421cd7;
case 0x421cd9:c.instructions+=2;goto B421cd9;
case 0x421cdc:c.instructions+=1;goto B421cdc;
case 0x421ce2:goto L421ce2;
case 0x421ce6:c.instructions+=5;goto B421ce6;
case 0x421cec:c.instructions+=4;goto B421cec;
case 0x421cf0:c.instructions+=3;goto B421cf0;
case 0x421cf2:c.instructions+=2;goto B421cf2;
case 0x421cf5:c.instructions+=1;goto B421cf5;
case 0x421cf7:goto L421cf7;
case 0x421cf9:c.instructions+=2;goto B421cf9;
case 0x421d01:c.instructions+=1;goto B421d01;
case 0x421d03:goto L421d03;
case 0x421d06:c.instructions+=1;goto B421d06;
case 0x421d0b:goto L421d0b;
case 0x421d0f:c.instructions+=3;goto B421d0f;
case 0x421d11:c.instructions+=2;goto B421d11;
case 0x421d14:c.instructions+=1;goto B421d14;
case 0x421d16:goto L421d16;
case 0x421d1d:c.instructions+=1;goto B421d1d;
case 0x421d1f:goto L421d1f;
case 0x421d23:c.instructions+=4;goto B421d23;
case 0x421d29:c.instructions+=3;goto B421d29;
case 0x421d2b:c.instructions+=2;goto B421d2b;
case 0x421d2e:c.instructions+=1;goto B421d2e;
case 0x421d30:goto L421d30;
case 0x421d37:goto L421d37;
case 0x421d3d:c.instructions+=2;goto B421d3d;
case 0x421d3f:c.instructions+=1;goto B421d3f;
case 0x421d41:goto L421d41;
case 0x421d43:c.instructions+=2;goto B421d43;
case 0x421d45:c.instructions+=1;goto B421d45;
case 0x421d48:goto L421d48;
case 0x421d4d:goto L421d4d;
case 0x421d51:c.instructions+=4;goto B421d51;
case 0x421d53:c.instructions+=3;goto B421d53;
case 0x421d55:c.instructions+=2;goto B421d55;
case 0x421d59:c.instructions+=1;goto B421d59;
case 0x421d5e:goto L421d5e;
case 0x421d64:c.instructions+=1;goto B421d64;
case 0x421d69:goto L421d69;
case 0x421d6f:goto L421d6f;
case 0x421d73:goto L421d73;
case 0x421d75:c.instructions+=4;goto B421d75;
case 0x421d79:c.instructions+=3;goto B421d79;
case 0x421d7d:c.instructions+=2;goto B421d7d;
case 0x421d81:c.instructions+=1;goto B421d81;
case 0x421d83:goto L421d83;
case 0x421d89:c.instructions+=8;goto B421d89;
case 0x421d8d:c.instructions+=7;goto B421d8d;
case 0x421d91:c.instructions+=6;goto B421d91;
case 0x421d93:c.instructions+=5;goto B421d93;
case 0x421d97:c.instructions+=4;goto B421d97;
case 0x421d99:c.instructions+=3;goto B421d99;
case 0x421d9b:c.instructions+=2;goto B421d9b;
case 0x421d9e:c.instructions+=1;goto B421d9e;
case 0x421da0:goto L421da0;
case 0x421da2:c.instructions+=1;goto B421da2;
case 0x421da6:goto L421da6;
case 0x421daa:c.instructions+=4;goto B421daa;
case 0x421dac:c.instructions+=3;goto B421dac;
case 0x421dae:c.instructions+=2;goto B421dae;
case 0x421db1:c.instructions+=1;goto B421db1;
case 0x421db7:goto L421db7;
case 0x421db9:c.instructions+=2;goto B421db9;
case 0x421dbd:c.instructions+=1;goto B421dbd;
case 0x421dc2:goto L421dc2;
case 0x421dc6:c.instructions+=6;goto B421dc6;
case 0x421dc7:c.instructions+=5;goto B421dc7;
case 0x421dcd:c.instructions+=4;goto B421dcd;
case 0x421dd2:c.instructions+=3;goto B421dd2;
case 0x421dd4:c.instructions+=2;goto B421dd4;
case 0x421dd7:c.instructions+=1;goto B421dd7;
case 0x421ddc:goto L421ddc;
case 0x421de0:c.instructions+=4;goto B421de0;
case 0x421de4:c.instructions+=3;goto B421de4;
case 0x421de5:c.instructions+=2;goto B421de5;
case 0x421dea:c.instructions+=1;goto B421dea;
case 0x421def:goto L421def;
case 0x421df3:c.instructions+=6;goto B421df3;
case 0x421df9:c.instructions+=5;goto B421df9;
case 0x421dfd:c.instructions+=4;goto B421dfd;
case 0x421e03:c.instructions+=3;goto B421e03;
case 0x421e05:c.instructions+=2;goto B421e05;
case 0x421e08:c.instructions+=1;goto B421e08;
case 0x421e0a:goto L421e0a;
case 0x421e0e:c.instructions+=4;goto B421e0e;
case 0x421e12:c.instructions+=3;goto B421e12;
case 0x421e14:c.instructions+=2;goto B421e14;
case 0x421e17:c.instructions+=1;goto B421e17;
case 0x421e19:goto L421e19;
case 0x421e1d:c.instructions+=4;goto B421e1d;
case 0x421e23:c.instructions+=3;goto B421e23;
case 0x421e25:c.instructions+=2;goto B421e25;
case 0x421e28:c.instructions+=1;goto B421e28;
case 0x421e2a:goto L421e2a;
case 0x421e2e:c.instructions+=4;goto B421e2e;
case 0x421e32:c.instructions+=3;goto B421e32;
case 0x421e34:c.instructions+=2;goto B421e34;
case 0x421e37:c.instructions+=1;goto B421e37;
case 0x421e39:goto L421e39;
case 0x421e3f:goto L421e3f;
case 0x421e43:c.instructions+=7;goto B421e43;
case 0x421e47:c.instructions+=6;goto B421e47;
case 0x421e49:c.instructions+=5;goto B421e49;
case 0x421e4d:c.instructions+=4;goto B421e4d;
case 0x421e4f:c.instructions+=3;goto B421e4f;
case 0x421e51:c.instructions+=2;goto B421e51;
case 0x421e54:c.instructions+=1;goto B421e54;
case 0x421e56:goto L421e56;
case 0x421e58:c.instructions+=1;goto B421e58;
case 0x421e5c:goto L421e5c;
case 0x421e60:c.instructions+=4;goto B421e60;
case 0x421e62:c.instructions+=3;goto B421e62;
case 0x421e64:c.instructions+=2;goto B421e64;
case 0x421e67:c.instructions+=1;goto B421e67;
case 0x421e69:goto L421e69;
case 0x421e6b:c.instructions+=1;goto B421e6b;
case 0x421e6f:goto L421e6f;
case 0x421e71:c.instructions+=4;goto B421e71;
case 0x421e75:c.instructions+=3;goto B421e75;
case 0x421e79:c.instructions+=2;goto B421e79;
case 0x421e7d:c.instructions+=1;goto B421e7d;
case 0x421e7f:goto L421e7f;
case 0x421e85:c.instructions+=4;goto B421e85;
case 0x421e89:c.instructions+=3;goto B421e89;
case 0x421e8c:c.instructions+=2;goto B421e8c;
case 0x421e92:c.instructions+=1;goto B421e92;
case 0x421e96:goto L421e96;
case 0x421e9c:c.instructions+=6;goto B421e9c;
case 0x421ea0:c.instructions+=5;goto B421ea0;
case 0x421ea6:c.instructions+=4;goto B421ea6;
case 0x421eac:c.instructions+=3;goto B421eac;
case 0x421eae:c.instructions+=2;goto B421eae;
case 0x421eb1:c.instructions+=1;goto B421eb1;
case 0x421eb3:goto L421eb3;
case 0x421eb5:c.instructions+=1;goto B421eb5;
case 0x421ebb:goto L421ebb;
case 0x421ec1:c.instructions+=4;goto B421ec1;
case 0x421ec7:c.instructions+=3;goto B421ec7;
case 0x421eca:c.instructions+=2;goto B421eca;
case 0x421ecc:c.instructions+=1;goto B421ecc;
case 0x421ece:goto L421ece;
case 0x421ed3:c.instructions+=2;goto B421ed3;
case 0x421ed8:c.instructions+=1;goto B421ed8;
case 0x421edd:goto L421edd;
case 0x421ee3:c.instructions+=3;goto B421ee3;
case 0x421ee6:c.instructions+=2;goto B421ee6;
case 0x421ee9:c.instructions+=1;goto B421ee9;
case 0x421eeb:goto L421eeb;
case 0x421eee:c.instructions+=1;goto B421eee;
case 0x421ef0:goto L421ef0;
case 0x421ef3:c.instructions+=1;goto B421ef3;
case 0x421ef5:goto L421ef5;
case 0x421ef8:c.instructions+=2;goto B421ef8;
case 0x421efa:c.instructions+=1;goto B421efa;
case 0x421efd:goto L421efd;
case 0x421f03:c.instructions+=2;goto B421f03;
case 0x421f05:c.instructions+=1;goto B421f05;
case 0x421f0a:goto L421f0a;
case 0x421f0c:c.instructions+=3;goto B421f0c;
case 0x421f11:c.instructions+=2;goto B421f11;
case 0x421f13:c.instructions+=1;goto B421f13;
case 0x421f18:goto L421f18;
case 0x421f1a:goto L421f1a;
case 0x421f20:c.instructions+=2;goto B421f20;
case 0x421f22:c.instructions+=1;goto B421f22;
case 0x421f24:goto L421f24;
case 0x421f28:c.instructions+=2;goto B421f28;
case 0x421f29:c.instructions+=1;goto B421f29;
case 0x421f2e:goto L421f2e;
case 0x421f32:c.instructions+=2;goto B421f32;
case 0x421f33:c.instructions+=1;goto B421f33;
case 0x421f35:goto L421f35;
case 0x421f37:c.instructions+=1;goto B421f37;
case 0x421f3c:goto L421f3c;
case 0x421f3e:goto L421f3e;
case 0x421f40:c.instructions+=1;goto B421f40;
case 0x421f45:goto L421f45;
case 0x421f4b:c.instructions+=2;goto B421f4b;
case 0x421f4e:c.instructions+=1;goto B421f4e;
case 0x421f53:goto L421f53;
case 0x421f55:c.instructions+=1;goto B421f55;
case 0x421f57:goto L421f57;
case 0x421f5d:c.instructions+=2;goto B421f5d;
case 0x421f5f:c.instructions+=1;goto B421f5f;
case 0x421f61:goto L421f61;
case 0x421f68:goto L421f68;
case 0x421f6e:c.instructions+=2;goto B421f6e;
case 0x421f70:c.instructions+=1;goto B421f70;
case 0x421f72:goto L421f72;
case 0x421f77:c.instructions+=2;goto B421f77;
case 0x421f79:c.instructions+=1;goto B421f79;
case 0x421f7b:goto L421f7b;
case 0x421f80:c.instructions+=2;goto B421f80;
case 0x421f82:c.instructions+=1;goto B421f82;
case 0x421f84:goto L421f84;
case 0x421f8a:c.instructions+=4;goto B421f8a;
case 0x421f90:c.instructions+=3;goto B421f90;
case 0x421f92:c.instructions+=2;goto B421f92;
case 0x421f95:c.instructions+=1;goto B421f95;
case 0x421f97:goto L421f97;
case 0x421f9d:c.instructions+=3;goto B421f9d;
case 0x421f9e:c.instructions+=2;goto B421f9e;
case 0x421fa0:c.instructions+=1;goto B421fa0;
case 0x421fa5:goto L421fa5;
case 0x421fa7:c.instructions+=2;goto B421fa7;
case 0x421fa9:c.instructions+=1;goto B421fa9;
case 0x421fae:goto L421fae;
case 0x421fb0:goto L421fb0;
case 0x421fb7:goto L421fb7;
case 0x421fbd:c.instructions+=8;goto B421fbd;
case 0x421fc3:c.instructions+=7;goto B421fc3;
case 0x421fc7:c.instructions+=6;goto B421fc7;
case 0x421fcd:c.instructions+=5;goto B421fcd;
case 0x421fd3:c.instructions+=4;goto B421fd3;
case 0x421fd9:c.instructions+=3;goto B421fd9;
case 0x421fdb:c.instructions+=2;goto B421fdb;
case 0x421fde:c.instructions+=1;goto B421fde;
case 0x421fe0:goto L421fe0;
case 0x421fe4:c.instructions+=5;goto B421fe4;
case 0x421fe6:c.instructions+=4;goto B421fe6;
case 0x421fec:c.instructions+=3;goto B421fec;
case 0x421fee:c.instructions+=2;goto B421fee;
case 0x421ff1:c.instructions+=1;goto B421ff1;
case 0x421ff3:goto L421ff3;
case 0x421ff5:c.instructions+=2;goto B421ff5;
case 0x421ff7:c.instructions+=1;goto B421ff7;
case 0x421ffc:goto L421ffc;
default:missing_instruction(c.pc);}
B421000:L421000:{c.instructions+=1;NFSU2_TR(0x421000);
if(r1(R+518)){{goto L421008;}}
}
B421002:L421002:{c.instructions+=3;NFSU2_TR(0x421002);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B421004:{NFSU2_TR(0x421004);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421006:{NFSU2_TR(0x421006);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421008ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B421008:L421008:{c.instructions+=4;NFSU2_TR(0x421008);
__builtin_memmove((R+4),(R+24),4);
}
B42100a:{NFSU2_TR(0x42100a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B421011:{NFSU2_TR(0x421011);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B421019:{NFSU2_TR(0x421019);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42101eull));
TAIL_STATIC(0x41e480u,41e);
}
B42101e:L42101e:{c.instructions+=5;NFSU2_TR(0x42101e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421022:{NFSU2_TR(0x421022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B421023:{NFSU2_TR(0x421023);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42102a:{NFSU2_TR(0x42102a);
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
B42102d:{NFSU2_TR(0x42102d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B421030:L421030:{c.instructions+=10;NFSU2_TR(0x421030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B421033:{NFSU2_TR(0x421033);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421037:{NFSU2_TR(0x421037);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421038:{NFSU2_TR(0x421038);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42103e:{NFSU2_TR(0x42103e);
__builtin_memmove((R+24),(R+4),4);
}
B421040:{NFSU2_TR(0x421040);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B421048:{NFSU2_TR(0x421048);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B421050:{NFSU2_TR(0x421050);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421052:{NFSU2_TR(0x421052);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421055:{NFSU2_TR(0x421055);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421061;}}
}
B421057:L421057:{c.instructions+=3;NFSU2_TR(0x421057);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42105b:{NFSU2_TR(0x42105b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42105f:{NFSU2_TR(0x42105f);
{goto L421069;}
}
B421061:L421061:{c.instructions+=1;NFSU2_TR(0x421061);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x38d1b717ull));
s4(u32(r4(U+0)),r4(U+4));
}
B421069:L421069:{c.instructions+=12;NFSU2_TR(0x421069);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B421070:{NFSU2_TR(0x421070);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421076:{NFSU2_TR(0x421076);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42107c:{NFSU2_TR(0x42107c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421080:{NFSU2_TR(0x421080);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421084:{NFSU2_TR(0x421084);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B421088:{NFSU2_TR(0x421088);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42108e:{NFSU2_TR(0x42108e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B421092:{NFSU2_TR(0x421092);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421098:{NFSU2_TR(0x421098);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42109a:{NFSU2_TR(0x42109a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42109d:{NFSU2_TR(0x42109d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4210ad;}}
}
B42109f:L42109f:{c.instructions+=3;NFSU2_TR(0x42109f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4210a3:{NFSU2_TR(0x4210a3);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4210a9:{NFSU2_TR(0x4210a9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4210ad:L4210ad:{c.instructions+=5;NFSU2_TR(0x4210ad);
{u32 ea_=u32(r4(R+4)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4210b3:{NFSU2_TR(0x4210b3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4210b9:{NFSU2_TR(0x4210b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4210bb:{NFSU2_TR(0x4210bb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4210be:{NFSU2_TR(0x4210be);
if(r1(R+514)){{goto L4210ca;}}
}
B4210c0:L4210c0:{c.instructions+=3;NFSU2_TR(0x4210c0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4210c4:{NFSU2_TR(0x4210c4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4210c6:{NFSU2_TR(0x4210c6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4210ca:L4210ca:{c.instructions+=5;NFSU2_TR(0x4210ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4210cb:{NFSU2_TR(0x4210cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4210cc:{NFSU2_TR(0x4210cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4210cd:{NFSU2_TR(0x4210cd);
__builtin_memmove((R+4),(R+24),4);
}
B4210cf:{NFSU2_TR(0x4210cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4210d4ull));
TAIL_STATIC(0x415f80u,415);
}
B4210d4:L4210d4:{c.instructions+=4;NFSU2_TR(0x4210d4);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4210d6:{NFSU2_TR(0x4210d6);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4210da:{NFSU2_TR(0x4210da);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4210dc:{NFSU2_TR(0x4210dc);
__builtin_memmove((R+16),(R+16),4);
}
B4210e0:L4210e0:{c.instructions+=4;NFSU2_TR(0x4210e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4210e6:{NFSU2_TR(0x4210e6);
u8 U[13];
w4(U+0,u32(u32(u32(0x390ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B4210ed:{NFSU2_TR(0x4210ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4210ef:{NFSU2_TR(0x4210ef);
if(r1(R+518)){{goto L42110a;}}
}
B4210f1:L4210f1:{c.instructions+=2;NFSU2_TR(0x4210f1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4210f4:{NFSU2_TR(0x4210f4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4210f8;}}
}
B4210f6:L4210f6:{c.instructions+=1;NFSU2_TR(0x4210f6);
w1(R+12,u8(0x1ull));
}
B4210f8:L4210f8:{c.instructions+=3;NFSU2_TR(0x4210f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4210f9:{NFSU2_TR(0x4210f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4210fc:{NFSU2_TR(0x4210fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421101ull));
TAIL_STATIC(0x592870u,592);
}
B421101:L421101:{c.instructions+=2;NFSU2_TR(0x421101);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B421103:{NFSU2_TR(0x421103);
if(r1(R+518)){{goto L42110a;}}
}
B421105:L421105:{c.instructions+=1;NFSU2_TR(0x421105);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42110a:L42110a:{c.instructions+=3;NFSU2_TR(0x42110a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B42110b:{NFSU2_TR(0x42110b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42110e:{NFSU2_TR(0x42110e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4210e0u);}goto L4210e0;}}
}
B421110:L421110:{c.instructions+=5;NFSU2_TR(0x421110);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421116:{NFSU2_TR(0x421116);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B421119:{NFSU2_TR(0x421119);
__builtin_memmove((R+0),(R+8),4);
}
B42111b:{NFSU2_TR(0x42111b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B42111c:{NFSU2_TR(0x42111c);
if(r1(R+518)){{goto L4211e3;}}
}
B421122:L421122:{c.instructions+=2;NFSU2_TR(0x421122);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B421125:{NFSU2_TR(0x421125);
if(r1(R+518)){{goto L4211b4;}}
}
B42112b:L42112b:{c.instructions+=2;NFSU2_TR(0x42112b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B42112c:{NFSU2_TR(0x42112c);
if(r1(R+518)){{goto L4211a5;}}
}
B42112e:L42112e:{c.instructions+=1;NFSU2_TR(0x42112e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B421136:L421136:{c.instructions+=1;NFSU2_TR(0x421136);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42113b:L42113b:{c.instructions+=9;NFSU2_TR(0x42113b);
{u32 ea_=u32(r4(R+24)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421141:{NFSU2_TR(0x421141);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B421144:{NFSU2_TR(0x421144);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B421148:{NFSU2_TR(0x421148);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42114d:{NFSU2_TR(0x42114d);
{u32 ea_=u32(r4(R+24)+u32(584u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B421153:{NFSU2_TR(0x421153);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421159:{NFSU2_TR(0x421159);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42115b:{NFSU2_TR(0x42115b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42115e:{NFSU2_TR(0x42115e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421168;}}
}
B421160:L421160:{c.instructions+=1;NFSU2_TR(0x421160);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B421168:L421168:{c.instructions+=3;NFSU2_TR(0x421168);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42116e:{NFSU2_TR(0x42116e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421170:{NFSU2_TR(0x421170);
if(r1(R+518)){{goto L42117a;}}
}
B421172:L421172:{c.instructions+=1;NFSU2_TR(0x421172);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42117a:L42117a:{c.instructions+=8;NFSU2_TR(0x42117a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42117e:{NFSU2_TR(0x42117e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42117f:{NFSU2_TR(0x42117f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B421183:{NFSU2_TR(0x421183);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421184:{NFSU2_TR(0x421184);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B421188:{NFSU2_TR(0x421188);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421189:{NFSU2_TR(0x421189);
__builtin_memmove((R+4),(R+24),4);
}
B42118b:{NFSU2_TR(0x42118b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421190ull));
TAIL_STATIC(0x4054d0u,405);
}
B421190:L421190:{c.instructions+=3;NFSU2_TR(0x421190);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B421196:{NFSU2_TR(0x421196);
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
B421197:{NFSU2_TR(0x421197);
if(r1(R+518)){{goto L4211f5;}}
}
B421199:L421199:{c.instructions+=2;NFSU2_TR(0x421199);
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
B42119a:{NFSU2_TR(0x42119a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421206;}}
}
B42119c:L42119c:{c.instructions+=3;NFSU2_TR(0x42119c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42119e:{NFSU2_TR(0x42119e);
__builtin_memmove((R+4),(R+24),4);
}
B4211a0:{NFSU2_TR(0x4211a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4211a3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4211a3:L4211a3:{c.instructions+=1;NFSU2_TR(0x4211a3);
{goto L4211fc;}
}
B4211a5:L4211a5:{c.instructions+=3;NFSU2_TR(0x4211a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4211ad:{NFSU2_TR(0x4211ad);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4211b2:{NFSU2_TR(0x4211b2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42113bu);}goto L42113b;}
}
B4211b4:L4211b4:{c.instructions+=9;NFSU2_TR(0x4211b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4211b7:{NFSU2_TR(0x4211b7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4211b9:{NFSU2_TR(0x4211b9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4211bc:{NFSU2_TR(0x4211bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4211bf:{NFSU2_TR(0x4211bf);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4211c0:{NFSU2_TR(0x4211c0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
}
B4211c3:{NFSU2_TR(0x4211c3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4211c6:{NFSU2_TR(0x4211c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4211ca:{NFSU2_TR(0x4211ca);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x421136u);}goto L421136;}}
}
B4211d0:L4211d0:{c.instructions+=2;NFSU2_TR(0x4211d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4211d3:{NFSU2_TR(0x4211d3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x421136u);}goto L421136;}}
}
B4211d9:L4211d9:{c.instructions+=2;NFSU2_TR(0x4211d9);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4211de:{NFSU2_TR(0x4211de);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42113bu);}goto L42113b;}
}
B4211e3:L4211e3:{c.instructions+=3;NFSU2_TR(0x4211e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4211eb:{NFSU2_TR(0x4211eb);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4211f0:{NFSU2_TR(0x4211f0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42113bu);}goto L42113b;}
}
B4211f5:L4211f5:{c.instructions+=3;NFSU2_TR(0x4211f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4211f7:{NFSU2_TR(0x4211f7);
__builtin_memmove((R+4),(R+24),4);
}
B4211f9:{NFSU2_TR(0x4211f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4211fcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4211fc:L4211fc:{c.instructions+=1;NFSU2_TR(0x4211fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B421206:L421206:{c.instructions+=3;NFSU2_TR(0x421206);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421208:{NFSU2_TR(0x421208);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42120c:{NFSU2_TR(0x42120c);
if(r1(R+518)){{goto L4218e4;}}
}
B421212:L421212:{c.instructions+=13;NFSU2_TR(0x421212);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B421218:{NFSU2_TR(0x421218);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42121c:{NFSU2_TR(0x42121c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42121f:{NFSU2_TR(0x42121f);
__builtin_memmove((R+12),(R+518),1);
}
B421222:{NFSU2_TR(0x421222);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421224:{NFSU2_TR(0x421224);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B421228:{NFSU2_TR(0x421228);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42122c:{NFSU2_TR(0x42122c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42122d:{NFSU2_TR(0x42122d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42122e:{NFSU2_TR(0x42122e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42122f:{NFSU2_TR(0x42122f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421235:{NFSU2_TR(0x421235);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x258ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42123f:{NFSU2_TR(0x42123f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421244ull));
TAIL_STATIC(0x576bb0u,576);
}
B421244:L421244:{c.instructions+=7;NFSU2_TR(0x421244);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B421248:{NFSU2_TR(0x421248);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42124e:{NFSU2_TR(0x42124e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421250:{NFSU2_TR(0x421250);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421251:{NFSU2_TR(0x421251);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421252:{NFSU2_TR(0x421252);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421253:{NFSU2_TR(0x421253);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421258ull));
TAIL_STATIC(0x576bb0u,576);
}
B421258:L421258:{c.instructions+=7;NFSU2_TR(0x421258);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42125c:{NFSU2_TR(0x42125c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421262:{NFSU2_TR(0x421262);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421264:{NFSU2_TR(0x421264);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421265:{NFSU2_TR(0x421265);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421266:{NFSU2_TR(0x421266);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421267:{NFSU2_TR(0x421267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42126cull));
TAIL_STATIC(0x576bb0u,576);
}
B42126c:L42126c:{c.instructions+=2;NFSU2_TR(0x42126c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42126e:{NFSU2_TR(0x42126e);
if(r1(R+518)){{goto L42127a;}}
}
B421270:L421270:{c.instructions+=1;NFSU2_TR(0x421270);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42127a:L42127a:{c.instructions+=13;NFSU2_TR(0x42127a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421280:{NFSU2_TR(0x421280);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421286:{NFSU2_TR(0x421286);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B421289:{NFSU2_TR(0x421289);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42128f:{NFSU2_TR(0x42128f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B421295:{NFSU2_TR(0x421295);
{u32 ea_=u32(r4(R+8)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421298:{NFSU2_TR(0x421298);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42129c:{NFSU2_TR(0x42129c);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4212a0:{NFSU2_TR(0x4212a0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4212a2:{NFSU2_TR(0x4212a2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4212a8:{NFSU2_TR(0x4212a8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4212aa:{NFSU2_TR(0x4212aa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4212ad:{NFSU2_TR(0x4212ad);
if(r1(R+514)){{goto L4212c3;}}
}
B4212af:L4212af:{c.instructions+=6;NFSU2_TR(0x4212af);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4212b1:{NFSU2_TR(0x4212b1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4212b3:{NFSU2_TR(0x4212b3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4212b5:{NFSU2_TR(0x4212b5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4212bb:{NFSU2_TR(0x4212bb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4212c1:{NFSU2_TR(0x4212c1);
{goto L42130c;}
}
B4212c3:L4212c3:{c.instructions+=13;NFSU2_TR(0x4212c3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4212c5:{NFSU2_TR(0x4212c5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4212c7:{NFSU2_TR(0x4212c7);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4212cb:{NFSU2_TR(0x4212cb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4212cd:{NFSU2_TR(0x4212cd);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4212d1:{NFSU2_TR(0x4212d1);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4212d5:{NFSU2_TR(0x4212d5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4212d9:{NFSU2_TR(0x4212d9);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4212dd:{NFSU2_TR(0x4212dd);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4212e1:{NFSU2_TR(0x4212e1);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4212e7:{NFSU2_TR(0x4212e7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4212e9:{NFSU2_TR(0x4212e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4212ec:{NFSU2_TR(0x4212ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42130c;}}
}
B4212ee:L4212ee:{c.instructions+=8;NFSU2_TR(0x4212ee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4212f0:{NFSU2_TR(0x4212f0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4212f2:{NFSU2_TR(0x4212f2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4212f8:{NFSU2_TR(0x4212f8);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4212fc:{NFSU2_TR(0x4212fc);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B421300:{NFSU2_TR(0x421300);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421304:{NFSU2_TR(0x421304);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421308:{NFSU2_TR(0x421308);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42130c:L42130c:{c.instructions+=9;NFSU2_TR(0x42130c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42130f:{NFSU2_TR(0x42130f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B421311:{NFSU2_TR(0x421311);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421313:{NFSU2_TR(0x421313);
{u32 ea_=u32(r4(R+4)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421316:{NFSU2_TR(0x421316);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B421318:{NFSU2_TR(0x421318);
{u32 ea_=u32(r4(R+8)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42131b:{NFSU2_TR(0x42131b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B42131d:{NFSU2_TR(0x42131d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421321:{NFSU2_TR(0x421321);
if(r1(R+518)){{goto L42133b;}}
}
B421323:L421323:{c.instructions+=8;NFSU2_TR(0x421323);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421326:{NFSU2_TR(0x421326);
w4(R+0,u32(r1(R+0)));
}
B421329:{NFSU2_TR(0x421329);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42132d:{NFSU2_TR(0x42132d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B421331:{NFSU2_TR(0x421331);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421334:{NFSU2_TR(0x421334);
{u32 ea_=u32(r4(R+8)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421337:{NFSU2_TR(0x421337);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B421339:{NFSU2_TR(0x421339);
{goto L421341;}
}
B42133b:L42133b:{c.instructions+=1;NFSU2_TR(0x42133b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421341:L421341:{c.instructions+=3;NFSU2_TR(0x421341);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B421344:{NFSU2_TR(0x421344);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421346:{NFSU2_TR(0x421346);
if(r1(R+518)){{goto L421360;}}
}
B421348:L421348:{c.instructions+=8;NFSU2_TR(0x421348);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42134b:{NFSU2_TR(0x42134b);
w4(R+0,u32(r1(R+0)));
}
B42134e:{NFSU2_TR(0x42134e);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421352:{NFSU2_TR(0x421352);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B421356:{NFSU2_TR(0x421356);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421359:{NFSU2_TR(0x421359);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42135c:{NFSU2_TR(0x42135c);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B42135e:{NFSU2_TR(0x42135e);
{goto L421366;}
}
B421360:L421360:{c.instructions+=1;NFSU2_TR(0x421360);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421366:L421366:{c.instructions+=20;NFSU2_TR(0x421366);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B421368:{NFSU2_TR(0x421368);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B42136a:{NFSU2_TR(0x42136a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B42136c:{NFSU2_TR(0x42136c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B42136e:{NFSU2_TR(0x42136e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421372:{NFSU2_TR(0x421372);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421375:{NFSU2_TR(0x421375);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B421377:{NFSU2_TR(0x421377);
{u32 ea_=u32(r4(R+8)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42137a:{NFSU2_TR(0x42137a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B42137c:{NFSU2_TR(0x42137c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B42137e:{NFSU2_TR(0x42137e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421382:{NFSU2_TR(0x421382);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421384:{NFSU2_TR(0x421384);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421386:{NFSU2_TR(0x421386);
{u32 ea_=u32(u32(8512940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42138c:{NFSU2_TR(0x42138c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B42138e:{NFSU2_TR(0x42138e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421392:{NFSU2_TR(0x421392);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B421394:{NFSU2_TR(0x421394);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421396:{NFSU2_TR(0x421396);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421399:{NFSU2_TR(0x421399);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4213a1;}}
}
B42139b:L42139b:{c.instructions+=2;NFSU2_TR(0x42139b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42139d:{NFSU2_TR(0x42139d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4213a1:L4213a1:{c.instructions+=5;NFSU2_TR(0x4213a1);
{u32 ea_=u32(u32(8512940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4213a7:{NFSU2_TR(0x4213a7);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4213a9:{NFSU2_TR(0x4213a9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4213ab:{NFSU2_TR(0x4213ab);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4213ae:{NFSU2_TR(0x4213ae);
if(r1(R+514)){{goto L4213be;}}
}
B4213b0:L4213b0:{c.instructions+=4;NFSU2_TR(0x4213b0);
__builtin_memmove((R+4),gp(0x81e5ac),4);
}
B4213b6:{NFSU2_TR(0x4213b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4213b8:{NFSU2_TR(0x4213b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4213bc:{NFSU2_TR(0x4213bc);
{goto L4213c2;}
}
B4213be:L4213be:{c.instructions+=1;NFSU2_TR(0x4213be);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4213c2:L4213c2:{c.instructions+=7;NFSU2_TR(0x4213c2);
{u32 ea_=u32(u32(7878964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4213c8:{NFSU2_TR(0x4213c8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4213ca:{NFSU2_TR(0x4213ca);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4213ce:{NFSU2_TR(0x4213ce);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4213d0:{NFSU2_TR(0x4213d0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4213d2:{NFSU2_TR(0x4213d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4213d5:{NFSU2_TR(0x4213d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4213dd;}}
}
B4213d7:L4213d7:{c.instructions+=2;NFSU2_TR(0x4213d7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4213d9:{NFSU2_TR(0x4213d9);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4213dd:L4213dd:{c.instructions+=5;NFSU2_TR(0x4213dd);
{u32 ea_=u32(u32(7878964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4213e3:{NFSU2_TR(0x4213e3);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4213e5:{NFSU2_TR(0x4213e5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4213e7:{NFSU2_TR(0x4213e7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4213ea:{NFSU2_TR(0x4213ea);
if(r1(R+514)){{goto L4213fa;}}
}
B4213ec:L4213ec:{c.instructions+=4;NFSU2_TR(0x4213ec);
__builtin_memmove((R+8),gp(0x783934),4);
}
B4213f2:{NFSU2_TR(0x4213f2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4213f4:{NFSU2_TR(0x4213f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4213f8:{NFSU2_TR(0x4213f8);
{goto L4213fe;}
}
B4213fa:L4213fa:{c.instructions+=1;NFSU2_TR(0x4213fa);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4213fe:L4213fe:{c.instructions+=3;NFSU2_TR(0x4213fe);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B421402:{NFSU2_TR(0x421402);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421404:{NFSU2_TR(0x421404);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421728;}}
}
B42140a:L42140a:{c.instructions+=3;NFSU2_TR(0x42140a);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42140e:{NFSU2_TR(0x42140e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421410:{NFSU2_TR(0x421410);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421728;}}
}
B421416:L421416:{c.instructions+=3;NFSU2_TR(0x421416);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42141a:{NFSU2_TR(0x42141a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42141d:{NFSU2_TR(0x42141d);
if(r1(R+518)){{goto L42172c;}}
}
B421423:L421423:{c.instructions+=11;NFSU2_TR(0x421423);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421427:{NFSU2_TR(0x421427);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42142d:{NFSU2_TR(0x42142d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421431:{NFSU2_TR(0x421431);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421437:{NFSU2_TR(0x421437);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42143b:{NFSU2_TR(0x42143b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421441:{NFSU2_TR(0x421441);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421445:{NFSU2_TR(0x421445);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B421447:{NFSU2_TR(0x421447);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421449:{NFSU2_TR(0x421449);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42144c:{NFSU2_TR(0x42144c);
if(r1(R+518)){{goto L421450;}}
}
B42144e:L42144e:{c.instructions+=1;NFSU2_TR(0x42144e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B421450:L421450:{c.instructions+=9;NFSU2_TR(0x421450);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421454:{NFSU2_TR(0x421454);
w4(R+4,u32(0x827a18ull));
}
B421459:{NFSU2_TR(0x421459);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42145d:{NFSU2_TR(0x42145d);
{u32 ea_=u32(u32(7881292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421463:{NFSU2_TR(0x421463);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B421465:{NFSU2_TR(0x421465);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421469:{NFSU2_TR(0x421469);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42146d:{NFSU2_TR(0x42146d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42146e:{NFSU2_TR(0x42146e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421473ull));
TAIL_STATIC(0x576790u,576);
}
B421473:L421473:{c.instructions+=21;NFSU2_TR(0x421473);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421475:{NFSU2_TR(0x421475);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421479:{NFSU2_TR(0x421479);
__builtin_memmove((R+0),gp(0x7838e0),4);
}
B42147e:{NFSU2_TR(0x42147e);
__builtin_memmove((R+8),gp(0x783828),4);
}
B421484:{NFSU2_TR(0x421484);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B421486:{NFSU2_TR(0x421486);
{u32 ea_=u32(r4(R+24)+u32(808u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42148c:{NFSU2_TR(0x42148c);
__builtin_memmove((R+4),(R+0),4);
}
B42148e:{NFSU2_TR(0x42148e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421492:{NFSU2_TR(0x421492);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B421494:{NFSU2_TR(0x421494);
{u32 ea_=u32(r4(R+24)+u32(812u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42149a:{NFSU2_TR(0x42149a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42149e:{NFSU2_TR(0x42149e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4214a0:{NFSU2_TR(0x4214a0);
{u32 ea_=u32(r4(R+24)+u32(816u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4214a6:{NFSU2_TR(0x4214a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4214ac:{NFSU2_TR(0x4214ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4214b2:{NFSU2_TR(0x4214b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4214b8:{NFSU2_TR(0x4214b8);
__builtin_memmove((R+8),(R+0),4);
}
B4214ba:{NFSU2_TR(0x4214ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4214c0:{NFSU2_TR(0x4214c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4214c6:{NFSU2_TR(0x4214c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4214ca:{NFSU2_TR(0x4214ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421589;}}
}
B4214d0:L4214d0:{c.instructions+=5;NFSU2_TR(0x4214d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4214d3:{NFSU2_TR(0x4214d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4214d9:{NFSU2_TR(0x4214d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4214db:{NFSU2_TR(0x4214db);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4214e1:{NFSU2_TR(0x4214e1);
if(r1(R+518)){{goto L421536;}}
}
B4214e3:L4214e3:{c.instructions+=16;NFSU2_TR(0x4214e3);
__builtin_memmove((R+4),gp(0x78388c),4);
}
B4214e9:{NFSU2_TR(0x4214e9);
__builtin_memmove((R+8),gp(0x783890),4);
}
B4214ef:{NFSU2_TR(0x4214ef);
__builtin_memmove((R+0),gp(0x783894),4);
}
B4214f4:{NFSU2_TR(0x4214f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4214fa:{NFSU2_TR(0x4214fa);
__builtin_memmove((R+4),gp(0x78389c),4);
}
B421500:{NFSU2_TR(0x421500);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421506:{NFSU2_TR(0x421506);
__builtin_memmove((R+8),gp(0x783898),4);
}
B42150c:{NFSU2_TR(0x42150c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421512:{NFSU2_TR(0x421512);
__builtin_memmove((R+0),gp(0x7838a4),4);
}
B421517:{NFSU2_TR(0x421517);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42151a:{NFSU2_TR(0x42151a);
__builtin_memmove((R+4),gp(0x7838a0),4);
}
B421520:{NFSU2_TR(0x421520);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421523:{NFSU2_TR(0x421523);
__builtin_memmove((R+8),gp(0x7838ac),4);
}
B421529:{NFSU2_TR(0x421529);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42152c:{NFSU2_TR(0x42152c);
__builtin_memmove((R+0),gp(0x7838a8),4);
}
B421531:{NFSU2_TR(0x421531);
{goto L42163b;}
}
B421536:L421536:{c.instructions+=16;NFSU2_TR(0x421536);
__builtin_memmove((R+4),gp(0x78385c),4);
}
B42153c:{NFSU2_TR(0x42153c);
__builtin_memmove((R+8),gp(0x783860),4);
}
B421542:{NFSU2_TR(0x421542);
__builtin_memmove((R+0),gp(0x783864),4);
}
B421547:{NFSU2_TR(0x421547);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42154d:{NFSU2_TR(0x42154d);
__builtin_memmove((R+4),gp(0x78386c),4);
}
B421553:{NFSU2_TR(0x421553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421559:{NFSU2_TR(0x421559);
__builtin_memmove((R+8),gp(0x783868),4);
}
B42155f:{NFSU2_TR(0x42155f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421565:{NFSU2_TR(0x421565);
__builtin_memmove((R+0),gp(0x783874),4);
}
B42156a:{NFSU2_TR(0x42156a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42156d:{NFSU2_TR(0x42156d);
__builtin_memmove((R+4),gp(0x783870),4);
}
B421573:{NFSU2_TR(0x421573);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421576:{NFSU2_TR(0x421576);
__builtin_memmove((R+8),gp(0x78387c),4);
}
B42157c:{NFSU2_TR(0x42157c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42157f:{NFSU2_TR(0x42157f);
__builtin_memmove((R+0),gp(0x783878),4);
}
B421584:{NFSU2_TR(0x421584);
{goto L42163b;}
}
B421589:L421589:{c.instructions+=2;NFSU2_TR(0x421589);
w4(R+4,u32(0x89e7a0ull));
}
B42158e:{NFSU2_TR(0x42158e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421593ull));
TAIL_STATIC(0x401930u,401);
}
B421593:L421593:{c.instructions+=3;NFSU2_TR(0x421593);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421595:{NFSU2_TR(0x421595);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42159b:{NFSU2_TR(0x42159b);
if(r1(R+518)){{goto L4215ed;}}
}
B42159d:L42159d:{c.instructions+=16;NFSU2_TR(0x42159d);
__builtin_memmove((R+4),gp(0x7838bc),4);
}
B4215a3:{NFSU2_TR(0x4215a3);
__builtin_memmove((R+8),gp(0x7838c0),4);
}
B4215a9:{NFSU2_TR(0x4215a9);
__builtin_memmove((R+0),gp(0x7838c4),4);
}
B4215ae:{NFSU2_TR(0x4215ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4215b4:{NFSU2_TR(0x4215b4);
__builtin_memmove((R+4),gp(0x7838cc),4);
}
B4215ba:{NFSU2_TR(0x4215ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4215c0:{NFSU2_TR(0x4215c0);
__builtin_memmove((R+8),gp(0x7838c8),4);
}
B4215c6:{NFSU2_TR(0x4215c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4215cc:{NFSU2_TR(0x4215cc);
__builtin_memmove((R+0),gp(0x7838d4),4);
}
B4215d1:{NFSU2_TR(0x4215d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4215d4:{NFSU2_TR(0x4215d4);
__builtin_memmove((R+4),gp(0x7838d0),4);
}
B4215da:{NFSU2_TR(0x4215da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4215dd:{NFSU2_TR(0x4215dd);
__builtin_memmove((R+8),gp(0x7838dc),4);
}
B4215e3:{NFSU2_TR(0x4215e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4215e6:{NFSU2_TR(0x4215e6);
__builtin_memmove((R+0),gp(0x7838d8),4);
}
B4215eb:{NFSU2_TR(0x4215eb);
{goto L42163b;}
}
B4215ed:L4215ed:{c.instructions+=15;NFSU2_TR(0x4215ed);
__builtin_memmove((R+4),gp(0x78382c),4);
}
B4215f3:{NFSU2_TR(0x4215f3);
__builtin_memmove((R+8),gp(0x783830),4);
}
B4215f9:{NFSU2_TR(0x4215f9);
__builtin_memmove((R+0),gp(0x783834),4);
}
B4215fe:{NFSU2_TR(0x4215fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421604:{NFSU2_TR(0x421604);
__builtin_memmove((R+4),gp(0x78383c),4);
}
B42160a:{NFSU2_TR(0x42160a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421610:{NFSU2_TR(0x421610);
__builtin_memmove((R+8),gp(0x783838),4);
}
B421616:{NFSU2_TR(0x421616);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42161c:{NFSU2_TR(0x42161c);
__builtin_memmove((R+0),gp(0x783844),4);
}
B421621:{NFSU2_TR(0x421621);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421624:{NFSU2_TR(0x421624);
__builtin_memmove((R+4),gp(0x783840),4);
}
B42162a:{NFSU2_TR(0x42162a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42162d:{NFSU2_TR(0x42162d);
__builtin_memmove((R+8),gp(0x78384c),4);
}
B421633:{NFSU2_TR(0x421633);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421636:{NFSU2_TR(0x421636);
__builtin_memmove((R+0),gp(0x783848),4);
}
B42163b:L42163b:{c.instructions+=9;NFSU2_TR(0x42163b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42163f:{NFSU2_TR(0x42163f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421642:{NFSU2_TR(0x421642);
{u32 ea_=u32(u32(7881292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421648:{NFSU2_TR(0x421648);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42164b:{NFSU2_TR(0x42164b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42164c:{NFSU2_TR(0x42164c);
w4(R+4,u32(0x827a18ull));
}
B421651:{NFSU2_TR(0x421651);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421655:{NFSU2_TR(0x421655);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421658:{NFSU2_TR(0x421658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42165dull));
TAIL_STATIC(0x576790u,576);
}
B42165d:L42165d:{c.instructions+=8;NFSU2_TR(0x42165d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B421661:{NFSU2_TR(0x421661);
u8 U[4];
w4(U+0,u32(0xc7c34f80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421666:{NFSU2_TR(0x421666);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421667:{NFSU2_TR(0x421667);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42166b:{NFSU2_TR(0x42166b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42166f:{NFSU2_TR(0x42166f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421670:{NFSU2_TR(0x421670);
__builtin_memmove((R+4),(R+28),4);
}
B421672:{NFSU2_TR(0x421672);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421677ull));
TAIL_STATIC(0x4182c0u,418);
}
B421677:L421677:{c.instructions+=6;NFSU2_TR(0x421677);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42167d:{NFSU2_TR(0x42167d);
{u32 ea_=u32(r4(R+8)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421683:{NFSU2_TR(0x421683);
{u32 ea_=u32(u32(7878884u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421689:{NFSU2_TR(0x421689);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42168b:{NFSU2_TR(0x42168b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42168e:{NFSU2_TR(0x42168e);
if(r1(R+514)){{goto L4216f7;}}
}
B421690:L421690:{c.instructions+=4;NFSU2_TR(0x421690);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B421694:{NFSU2_TR(0x421694);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421695:{NFSU2_TR(0x421695);
w4(R+4,u32(0x7e9d44ull));
}
B42169a:{NFSU2_TR(0x42169a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42169full));
TAIL_STATIC(0x5764d0u,576);
}
B42169f:L42169f:{c.instructions+=4;NFSU2_TR(0x42169f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4216a3:{NFSU2_TR(0x4216a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4216a4:{NFSU2_TR(0x4216a4);
w4(R+4,u32(0x7e9d80ull));
}
B4216a9:{NFSU2_TR(0x4216a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4216aeull));
TAIL_STATIC(0x5764d0u,576);
}
B4216ae:L4216ae:{c.instructions+=3;NFSU2_TR(0x4216ae);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4216b2:{NFSU2_TR(0x4216b2);
w4(R+4,u32(0x89e7a0ull));
}
B4216b7:{NFSU2_TR(0x4216b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4216bcull));
TAIL_STATIC(0x4018f0u,401);
}
B4216bc:L4216bc:{c.instructions+=2;NFSU2_TR(0x4216bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4216be:{NFSU2_TR(0x4216be);
if(r1(R+518)){{goto L4216d2;}}
}
B4216c0:L4216c0:{c.instructions+=5;NFSU2_TR(0x4216c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4216c6:{NFSU2_TR(0x4216c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4216c9:{NFSU2_TR(0x4216c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4216cb:{NFSU2_TR(0x4216cb);
w4(R+4,u32(0x7e9d6cull));
}
B4216d0:{NFSU2_TR(0x4216d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4216d7;}}
}
B4216d2:L4216d2:{c.instructions+=1;NFSU2_TR(0x4216d2);
w4(R+4,u32(0x7e9d58ull));
}
B4216d7:L4216d7:{c.instructions+=2;NFSU2_TR(0x4216d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4216d8:{NFSU2_TR(0x4216d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4216ddull));
TAIL_STATIC(0x5764d0u,576);
}
B4216dd:L4216dd:{c.instructions+=5;NFSU2_TR(0x4216dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4216e1:{NFSU2_TR(0x4216e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4216e5:{NFSU2_TR(0x4216e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4216eb:{NFSU2_TR(0x4216eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4216f1:{NFSU2_TR(0x4216f1);
{u32 ea_=u32(r4(R+24)+u32(736u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4216f7:L4216f7:{c.instructions+=2;NFSU2_TR(0x4216f7);
__builtin_memmove((R+4),(R+28),4);
}
B4216f9:{NFSU2_TR(0x4216f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4216feull));
TAIL_STATIC(0x409da0u,409);
}
B4216fe:L4216fe:{c.instructions+=5;NFSU2_TR(0x4216fe);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421702:{NFSU2_TR(0x421702);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B421704:{NFSU2_TR(0x421704);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421706:{NFSU2_TR(0x421706);
__builtin_memmove((R+4),(R+28),4);
}
B421708:{NFSU2_TR(0x421708);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42170bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42170b:L42170b:{c.instructions+=4;NFSU2_TR(0x42170b);
{u32 ea_=u32(u32(7878896u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421711:{NFSU2_TR(0x421711);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421713:{NFSU2_TR(0x421713);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421716:{NFSU2_TR(0x421716);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421759;}}
}
B421718:L421718:{c.instructions+=4;NFSU2_TR(0x421718);
{u32 ea_=u32(u32(7878900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42171e:{NFSU2_TR(0x42171e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421722:{NFSU2_TR(0x421722);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B421726:{NFSU2_TR(0x421726);
{goto L42175d;}
}
B421728:L421728:{c.instructions+=1;NFSU2_TR(0x421728);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42172c:L42172c:{c.instructions+=11;NFSU2_TR(0x42172c);
{u32 ea_=u32((r4(R+0)*4u)+u32(7879004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421733:{NFSU2_TR(0x421733);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421737:{NFSU2_TR(0x421737);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B421739:{NFSU2_TR(0x421739);
{u32 ea_=u32((r4(R+0)*4u)+u32(7879060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421740:{NFSU2_TR(0x421740);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421744:{NFSU2_TR(0x421744);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B421746:{NFSU2_TR(0x421746);
{u32 ea_=u32((r4(R+0)*4u)+u32(7879032u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42174d:{NFSU2_TR(0x42174d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421751:{NFSU2_TR(0x421751);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B421753:{NFSU2_TR(0x421753);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B421757:{NFSU2_TR(0x421757);
{goto L42175d;}
}
B421759:L421759:{c.instructions+=1;NFSU2_TR(0x421759);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42175d:L42175d:{c.instructions+=6;NFSU2_TR(0x42175d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421763:{NFSU2_TR(0x421763);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B421766:{NFSU2_TR(0x421766);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B421769:{NFSU2_TR(0x421769);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B42176b:{NFSU2_TR(0x42176b);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42176d:{NFSU2_TR(0x42176d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4218af;}}
}
B421773:L421773:{c.instructions+=1;NFSU2_TR(0x421773);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421775:L421775:{c.instructions+=3;NFSU2_TR(0x421775);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421776:{NFSU2_TR(0x421776);
__builtin_memmove((R+4),(R+20),4);
}
B421778:{NFSU2_TR(0x421778);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42177dull));
TAIL_STATIC(0x5a0820u,5a0);
}
B42177d:L42177d:{c.instructions+=18;NFSU2_TR(0x42177d);
__builtin_memmove((R+28),(R+0),4);
}
B42177f:{NFSU2_TR(0x42177f);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B421784:{NFSU2_TR(0x421784);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421787:{NFSU2_TR(0x421787);
__builtin_memmove((R+8),(R+0),4);
}
B421789:{NFSU2_TR(0x421789);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B42178b:{NFSU2_TR(0x42178b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42178e:{NFSU2_TR(0x42178e);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421792:{NFSU2_TR(0x421792);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B421796:{NFSU2_TR(0x421796);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B421798:{NFSU2_TR(0x421798);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42179c:{NFSU2_TR(0x42179c);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4217a2:{NFSU2_TR(0x4217a2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4217a6:{NFSU2_TR(0x4217a6);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4217aa:{NFSU2_TR(0x4217aa);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4217b0:{NFSU2_TR(0x4217b0);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4217b6:{NFSU2_TR(0x4217b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4217b8:{NFSU2_TR(0x4217b8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4217bb:{NFSU2_TR(0x4217bb);
if(r1(R+514)){{goto L42189e;}}
}
B4217c1:L4217c1:{c.instructions+=5;NFSU2_TR(0x4217c1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4217c5:{NFSU2_TR(0x4217c5);
{u32 ea_=u32(u32(7878980u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4217cb:{NFSU2_TR(0x4217cb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4217cd:{NFSU2_TR(0x4217cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4217d0:{NFSU2_TR(0x4217d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42189e;}}
}
B4217d6:L4217d6:{c.instructions+=2;NFSU2_TR(0x4217d6);
__builtin_memmove((R+4),(R+28),4);
}
B4217d8:{NFSU2_TR(0x4217d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4217ddull));
TAIL_STATIC(0x592c60u,592);
}
B4217dd:L4217dd:{c.instructions+=2;NFSU2_TR(0x4217dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4217df:{NFSU2_TR(0x4217df);
if(r1(R+518)){{goto L421893;}}
}
B4217e5:L4217e5:{c.instructions+=9;NFSU2_TR(0x4217e5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4217e7:{NFSU2_TR(0x4217e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4217eb:{NFSU2_TR(0x4217eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4217ef:{NFSU2_TR(0x4217ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4217f3:{NFSU2_TR(0x4217f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4217f4:{NFSU2_TR(0x4217f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4217f8:{NFSU2_TR(0x4217f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4217f9:{NFSU2_TR(0x4217f9);
__builtin_memmove((R+4),(R+28),4);
}
B4217fb:{NFSU2_TR(0x4217fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421800ull));
TAIL_STATIC(0x592c90u,592);
}
B421800:L421800:{c.instructions+=3;NFSU2_TR(0x421800);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B421804:{NFSU2_TR(0x421804);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42180a:{NFSU2_TR(0x42180a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421810;}}
}
B42180c:L42180c:{c.instructions+=1;NFSU2_TR(0x42180c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B421810:L421810:{c.instructions+=7;NFSU2_TR(0x421810);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421816:{NFSU2_TR(0x421816);
{u32 ea_=u32(u32(7878976u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42181c:{NFSU2_TR(0x42181c);
{u32 ea_=u32(u32(7881384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421822:{NFSU2_TR(0x421822);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B421824:{NFSU2_TR(0x421824);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421826:{NFSU2_TR(0x421826);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421829:{NFSU2_TR(0x421829);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42189e;}}
}
B42182b:L42182b:{c.instructions+=7;NFSU2_TR(0x42182b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421831:{NFSU2_TR(0x421831);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B421834:{NFSU2_TR(0x421834);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421835:{NFSU2_TR(0x421835);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B421839:{NFSU2_TR(0x421839);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42183a:{NFSU2_TR(0x42183a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B42183d:{NFSU2_TR(0x42183d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421842ull));
TAIL_STATIC(0x591fc0u,591);
}
B421842:L421842:{c.instructions+=4;NFSU2_TR(0x421842);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421846:{NFSU2_TR(0x421846);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421847:{NFSU2_TR(0x421847);
w4(R+4,u32(0x7e9e0cull));
}
B42184c:{NFSU2_TR(0x42184c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421851ull));
TAIL_STATIC(0x5764d0u,576);
}
B421851:L421851:{c.instructions+=8;NFSU2_TR(0x421851);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421857:{NFSU2_TR(0x421857);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42185b:{NFSU2_TR(0x42185b);
{u32 ea_=u32(u32(7878980u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B421861:{NFSU2_TR(0x421861);
{u32 ea_=u32(u32(7878984u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B421867:{NFSU2_TR(0x421867);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B42186d:{NFSU2_TR(0x42186d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42186f:{NFSU2_TR(0x42186f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B421872:{NFSU2_TR(0x421872);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42187c;}}
}
B421874:L421874:{c.instructions+=2;NFSU2_TR(0x421874);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421876:{NFSU2_TR(0x421876);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42187c:L42187c:{c.instructions+=6;NFSU2_TR(0x42187c);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B42187e:{NFSU2_TR(0x42187e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421882:{NFSU2_TR(0x421882);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421888:{NFSU2_TR(0x421888);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42188a:{NFSU2_TR(0x42188a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42188d:{NFSU2_TR(0x42188d);
if(r1(R+518)){{goto L4218af;}}
}
B42188f:L42188f:{c.instructions+=2;NFSU2_TR(0x42188f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B421891:{NFSU2_TR(0x421891);
{goto L4218af;}
}
B421893:L421893:{c.instructions+=2;NFSU2_TR(0x421893);
__builtin_memmove((R+4),(R+28),4);
}
B421895:{NFSU2_TR(0x421895);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42189aull));
TAIL_STATIC(0x5a0160u,5a0);
}
B42189a:L42189a:{c.instructions+=2;NFSU2_TR(0x42189a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42189c:{NFSU2_TR(0x42189c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42182bu);}goto L42182b;}}
}
B42189e:L42189e:{c.instructions+=4;NFSU2_TR(0x42189e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4218a2:{NFSU2_TR(0x4218a2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4218a3:{NFSU2_TR(0x4218a3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4218a5:{NFSU2_TR(0x4218a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x421775u);}goto L421775;}}
}
B4218ab:L4218ab:{c.instructions+=1;NFSU2_TR(0x4218ab);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4218af:L4218af:{c.instructions+=4;NFSU2_TR(0x4218af);
{u32 ea_=u32(u32(7881888u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4218b5:{NFSU2_TR(0x4218b5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4218b7:{NFSU2_TR(0x4218b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4218ba:{NFSU2_TR(0x4218ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421aa5;}}
}
B4218c0:L4218c0:{c.instructions+=7;NFSU2_TR(0x4218c0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4218c4:{NFSU2_TR(0x4218c4);
{u32 ea_=u32(u32(7881884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4218ca:{NFSU2_TR(0x4218ca);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4218cc:{NFSU2_TR(0x4218cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4218ce:{NFSU2_TR(0x4218ce);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4218d0:{NFSU2_TR(0x4218d0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4218d3:{NFSU2_TR(0x4218d3);
if(r1(R+514)){{goto L421aaf;}}
}
B4218d9:L4218d9:{c.instructions+=2;NFSU2_TR(0x4218d9);
{u32 ea_=u32(u32(7881884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4218df:{NFSU2_TR(0x4218df);
{goto L421ab3;}
}
B4218e4:L4218e4:{c.instructions+=3;NFSU2_TR(0x4218e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x258ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4218ea:{NFSU2_TR(0x4218ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4218ec:{NFSU2_TR(0x4218ec);
if(r1(R+518)){{goto L4218f5;}}
}
B4218ee:L4218ee:{c.instructions+=2;NFSU2_TR(0x4218ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4218f3:{NFSU2_TR(0x4218f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421901;}}
}
B4218f5:L4218f5:{c.instructions+=2;NFSU2_TR(0x4218f5);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B4218fb:{NFSU2_TR(0x4218fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x258ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421901:L421901:{c.instructions+=11;NFSU2_TR(0x421901);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x258ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421907:{NFSU2_TR(0x421907);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B421911:{NFSU2_TR(0x421911);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B421916:{NFSU2_TR(0x421916);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B421918:{NFSU2_TR(0x421918);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42191c:{NFSU2_TR(0x42191c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B421920:{NFSU2_TR(0x421920);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421926:{NFSU2_TR(0x421926);
{u32 ea_=u32(u32(7879000u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42192c:{NFSU2_TR(0x42192c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42192e:{NFSU2_TR(0x42192e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421931:{NFSU2_TR(0x421931);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421999;}}
}
B421933:L421933:{c.instructions+=3;NFSU2_TR(0x421933);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421939:{NFSU2_TR(0x421939);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B42193c:{NFSU2_TR(0x42193c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421941ull));
TAIL_STATIC(0x59fa10u,59f);
}
B421941:L421941:{c.instructions+=4;NFSU2_TR(0x421941);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B421943:{NFSU2_TR(0x421943);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421949:{NFSU2_TR(0x421949);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42194d:{NFSU2_TR(0x42194d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4219d6;}}
}
B421953:L421953:{c.instructions+=10;NFSU2_TR(0x421953);
{u32 ea_=u32(u32(7878972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421959:{NFSU2_TR(0x421959);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42195f:{NFSU2_TR(0x42195f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421963:{NFSU2_TR(0x421963);
{u32 ea_=u32(u32(7878972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421969:{NFSU2_TR(0x421969);
{u32 ea_=u32(u32(7884600u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42196f:{NFSU2_TR(0x42196f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421973:{NFSU2_TR(0x421973);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B421977:{NFSU2_TR(0x421977);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421979:{NFSU2_TR(0x421979);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42197c:{NFSU2_TR(0x42197c);
if(r1(R+518)){{goto L421984;}}
}
B42197e:L42197e:{c.instructions+=2;NFSU2_TR(0x42197e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421980:{NFSU2_TR(0x421980);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421984:L421984:{c.instructions+=5;NFSU2_TR(0x421984);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421988:{NFSU2_TR(0x421988);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B42198a:{NFSU2_TR(0x42198a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42198c:{NFSU2_TR(0x42198c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42198f:{NFSU2_TR(0x42198f);
if(r1(R+514)){{goto L4219d6;}}
}
B421991:L421991:{c.instructions+=3;NFSU2_TR(0x421991);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421993:{NFSU2_TR(0x421993);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421997:{NFSU2_TR(0x421997);
{goto L4219d6;}
}
B421999:L421999:{c.instructions+=8;NFSU2_TR(0x421999);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B4219a0:{NFSU2_TR(0x4219a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4219a4:{NFSU2_TR(0x4219a4);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4219a8:{NFSU2_TR(0x4219a8);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4219ae:{NFSU2_TR(0x4219ae);
{u32 ea_=u32(u32(7881872u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4219b4:{NFSU2_TR(0x4219b4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4219b6:{NFSU2_TR(0x4219b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4219b9:{NFSU2_TR(0x4219b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4219c3;}}
}
B4219bb:L4219bb:{c.instructions+=2;NFSU2_TR(0x4219bb);
{u32 ea_=u32(u32(7881868u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4219c1:{NFSU2_TR(0x4219c1);
{goto L4219d6;}
}
B4219c3:L4219c3:{c.instructions+=4;NFSU2_TR(0x4219c3);
{u32 ea_=u32(u32(7881876u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4219c9:{NFSU2_TR(0x4219c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4219cb:{NFSU2_TR(0x4219cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4219ce:{NFSU2_TR(0x4219ce);
if(r1(R+514)){{goto L4219d6;}}
}
B4219d0:L4219d0:{c.instructions+=1;NFSU2_TR(0x4219d0);
{u32 ea_=u32(u32(7881868u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4219d6:L4219d6:{c.instructions+=4;NFSU2_TR(0x4219d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4219dc:{NFSU2_TR(0x4219dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4219e0:{NFSU2_TR(0x4219e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4219e8:{NFSU2_TR(0x4219e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421a2e;}}
}
B4219ea:L4219ea:{c.instructions+=4;NFSU2_TR(0x4219ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4219ed:{NFSU2_TR(0x4219ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4219f3:{NFSU2_TR(0x4219f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4219f5:{NFSU2_TR(0x4219f5);
if(r1(R+518)){{goto L421a13;}}
}
B4219f7:L4219f7:{c.instructions+=6;NFSU2_TR(0x4219f7);
__builtin_memmove((R+4),gp(0x7838b4),4);
}
B4219fd:{NFSU2_TR(0x4219fd);
{u32 ea_=u32(u32(7878832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421a03:{NFSU2_TR(0x421a03);
__builtin_memmove((R+8),gp(0x7838b8),4);
}
B421a09:{NFSU2_TR(0x421a09);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421a0d:{NFSU2_TR(0x421a0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421a11:{NFSU2_TR(0x421a11);
{goto L421a47;}
}
B421a13:L421a13:{c.instructions+=6;NFSU2_TR(0x421a13);
__builtin_memmove((R+0),gp(0x783884),4);
}
B421a18:{NFSU2_TR(0x421a18);
{u32 ea_=u32(u32(7878784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421a1e:{NFSU2_TR(0x421a1e);
__builtin_memmove((R+4),gp(0x783888),4);
}
B421a24:{NFSU2_TR(0x421a24);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421a28:{NFSU2_TR(0x421a28);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421a2c:{NFSU2_TR(0x421a2c);
{goto L421a47;}
}
B421a2e:L421a2e:{c.instructions+=5;NFSU2_TR(0x421a2e);
__builtin_memmove((R+8),gp(0x783854),4);
}
B421a34:{NFSU2_TR(0x421a34);
{u32 ea_=u32(u32(7878736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421a3a:{NFSU2_TR(0x421a3a);
__builtin_memmove((R+0),gp(0x783858),4);
}
B421a3f:{NFSU2_TR(0x421a3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421a43:{NFSU2_TR(0x421a43);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421a47:L421a47:{c.instructions+=6;NFSU2_TR(0x421a47);
{u32 ea_=u32(r4(R+24)+u32(728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421a4d:{NFSU2_TR(0x421a4d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B421a51:{NFSU2_TR(0x421a51);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B421a53:{NFSU2_TR(0x421a53);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421a55:{NFSU2_TR(0x421a55);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B421a58:{NFSU2_TR(0x421a58);
if(r1(R+514)){{goto L421a60;}}
}
B421a5a:L421a5a:{c.instructions+=2;NFSU2_TR(0x421a5a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421a5c:{NFSU2_TR(0x421a5c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421a60:L421a60:{c.instructions+=6;NFSU2_TR(0x421a60);
{u32 ea_=u32(r4(R+24)+u32(728u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421a66:{NFSU2_TR(0x421a66);
{u32 ea_=u32(r4(R+24)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421a6c:{NFSU2_TR(0x421a6c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B421a70:{NFSU2_TR(0x421a70);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421a72:{NFSU2_TR(0x421a72);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B421a75:{NFSU2_TR(0x421a75);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L421a7d;}}
}
B421a77:L421a77:{c.instructions+=2;NFSU2_TR(0x421a77);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421a79:{NFSU2_TR(0x421a79);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421a7d:L421a7d:{c.instructions+=6;NFSU2_TR(0x421a7d);
{u32 ea_=u32(r4(R+24)+u32(732u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421a83:{NFSU2_TR(0x421a83);
{u32 ea_=u32(r4(R+24)+u32(736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421a89:{NFSU2_TR(0x421a89);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B421a8d:{NFSU2_TR(0x421a8d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421a8f:{NFSU2_TR(0x421a8f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B421a92:{NFSU2_TR(0x421a92);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L421a9a;}}
}
B421a94:L421a94:{c.instructions+=2;NFSU2_TR(0x421a94);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421a96:{NFSU2_TR(0x421a96);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421a9a:L421a9a:{c.instructions+=2;NFSU2_TR(0x421a9a);
{u32 ea_=u32(r4(R+24)+u32(736u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421aa0:{NFSU2_TR(0x421aa0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4218afu);}goto L4218af;}
}
B421aa5:L421aa5:{c.instructions+=3;NFSU2_TR(0x421aa5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421aa7:{NFSU2_TR(0x421aa7);
{u32 ea_=u32(u32(7881888u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421aad:{NFSU2_TR(0x421aad);
{goto L421ab3;}
}
B421aaf:L421aaf:{c.instructions+=1;NFSU2_TR(0x421aaf);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421ab3:L421ab3:{c.instructions+=10;NFSU2_TR(0x421ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421ab9:{NFSU2_TR(0x421ab9);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B421abd:{NFSU2_TR(0x421abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B421ac3:{NFSU2_TR(0x421ac3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421ac7:{NFSU2_TR(0x421ac7);
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
B421aca:{NFSU2_TR(0x421aca);
{u32 ea_=u32(r4(R+24)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421ad0:{NFSU2_TR(0x421ad0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B421ad2:{NFSU2_TR(0x421ad2);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B421ad8:{NFSU2_TR(0x421ad8);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421adc:{NFSU2_TR(0x421adc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421aef;}}
}
B421ade:L421ade:{c.instructions+=3;NFSU2_TR(0x421ade);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B421ae0:{NFSU2_TR(0x421ae0);
__builtin_memmove((R+4),(R+24),4);
}
B421ae2:{NFSU2_TR(0x421ae2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421ae5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B421ae5:L421ae5:{c.instructions+=1;NFSU2_TR(0x421ae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B421aef:L421aef:{c.instructions+=8;NFSU2_TR(0x421aef);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B421af3:{NFSU2_TR(0x421af3);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B421af7:{NFSU2_TR(0x421af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421afd:{NFSU2_TR(0x421afd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421aff:{NFSU2_TR(0x421aff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421b01:{NFSU2_TR(0x421b01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421b02:{NFSU2_TR(0x421b02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421b03:{NFSU2_TR(0x421b03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421b08ull));
TAIL_STATIC(0x576bb0u,576);
}
B421b08:L421b08:{c.instructions+=3;NFSU2_TR(0x421b08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421b09:{NFSU2_TR(0x421b09);
__builtin_memmove((R+4),(R+24),4);
}
B421b0b:{NFSU2_TR(0x421b0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421b10ull));
TAIL_STATIC(0x4057c0u,405);
}
B421b10:L421b10:{c.instructions+=4;NFSU2_TR(0x421b10);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B421b14:{NFSU2_TR(0x421b14);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421b16:{NFSU2_TR(0x421b16);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B421b1c:{NFSU2_TR(0x421b1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421b5c;}}
}
B421b1e:L421b1e:{c.instructions+=8;NFSU2_TR(0x421b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421b24:{NFSU2_TR(0x421b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B421b2a:{NFSU2_TR(0x421b2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421b2e:{NFSU2_TR(0x421b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421b31:{NFSU2_TR(0x421b31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B421b33:{NFSU2_TR(0x421b33);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B421b36:{NFSU2_TR(0x421b36);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B421b3e:{NFSU2_TR(0x421b3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421b41ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B421b41:L421b41:{c.instructions+=2;NFSU2_TR(0x421b41);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B421b44:{NFSU2_TR(0x421b44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421b50;}}
}
B421b46:L421b46:{c.instructions+=2;NFSU2_TR(0x421b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421b4c:{NFSU2_TR(0x421b4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421b50:L421b50:{c.instructions+=3;NFSU2_TR(0x421b50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B421b52:{NFSU2_TR(0x421b52);
__builtin_memmove((R+4),(R+24),4);
}
B421b54:{NFSU2_TR(0x421b54);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421b57ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B421b57:L421b57:{c.instructions+=1;NFSU2_TR(0x421b57);
{goto L421c0c;}
}
B421b5c:L421b5c:{c.instructions+=6;NFSU2_TR(0x421b5c);
{u32 ea_=u32(r4(R+24)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421b62:{NFSU2_TR(0x421b62);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B421b64:{NFSU2_TR(0x421b64);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421b6a:{NFSU2_TR(0x421b6a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421b6c:{NFSU2_TR(0x421b6c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B421b6f:{NFSU2_TR(0x421b6f);
if(r1(R+514)){{goto L421b89;}}
}
B421b71:L421b71:{c.instructions+=6;NFSU2_TR(0x421b71);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421b75:{NFSU2_TR(0x421b75);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B421b7d:{NFSU2_TR(0x421b7d);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B421b7f:{NFSU2_TR(0x421b7f);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421b85:{NFSU2_TR(0x421b85);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421b87:{NFSU2_TR(0x421b87);
{goto L421c01;}
}
B421b89:L421b89:{c.instructions+=7;NFSU2_TR(0x421b89);
{u32 ea_=u32(r4(R+24)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421b8f:{NFSU2_TR(0x421b8f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421b95:{NFSU2_TR(0x421b95);
{u32 ea_=u32(u32(7879204u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421b9b:{NFSU2_TR(0x421b9b);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B421ba1:{NFSU2_TR(0x421ba1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421ba3:{NFSU2_TR(0x421ba3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421ba6:{NFSU2_TR(0x421ba6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421d0b;}}
}
B421bac:L421bac:{c.instructions+=5;NFSU2_TR(0x421bac);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B421bae:{NFSU2_TR(0x421bae);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421bb2:{NFSU2_TR(0x421bb2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421bb4:{NFSU2_TR(0x421bb4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421bb7:{NFSU2_TR(0x421bb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421bc2;}}
}
B421bb9:L421bb9:{c.instructions+=2;NFSU2_TR(0x421bb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B421bc0:{NFSU2_TR(0x421bc0);
{goto L421bda;}
}
B421bc2:L421bc2:{c.instructions+=5;NFSU2_TR(0x421bc2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421bc6:{NFSU2_TR(0x421bc6);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421bcc:{NFSU2_TR(0x421bcc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421bce:{NFSU2_TR(0x421bce);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421bd1:{NFSU2_TR(0x421bd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421bda;}}
}
B421bd3:L421bd3:{c.instructions+=1;NFSU2_TR(0x421bd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B421bda:L421bda:{c.instructions+=3;NFSU2_TR(0x421bda);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B421be0:{NFSU2_TR(0x421be0);
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
B421be2:{NFSU2_TR(0x421be2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421d03;}}
}
B421be8:L421be8:{c.instructions+=3;NFSU2_TR(0x421be8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B421bea:{NFSU2_TR(0x421bea);
__builtin_memmove((R+4),(R+24),4);
}
B421bec:{NFSU2_TR(0x421bec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421befull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B421bef:L421bef:{c.instructions+=3;NFSU2_TR(0x421bef);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421bf3:{NFSU2_TR(0x421bf3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B421bf5:{NFSU2_TR(0x421bf5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421bf9:L421bf9:{c.instructions+=1;NFSU2_TR(0x421bf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f666666ull));
s4(u32(r4(U+0)),r4(U+4));
}
B421c01:L421c01:{c.instructions+=2;NFSU2_TR(0x421c01);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B421c09:{NFSU2_TR(0x421c09);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B421c0c:L421c0c:{c.instructions+=2;NFSU2_TR(0x421c0c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421c0e:{NFSU2_TR(0x421c0e);
if(r1(R+518)){{goto L421c27;}}
}
B421c10:L421c10:{c.instructions+=9;NFSU2_TR(0x421c10);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B421c14:{NFSU2_TR(0x421c14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421c15:{NFSU2_TR(0x421c15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421c16:{NFSU2_TR(0x421c16);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B421c1a:{NFSU2_TR(0x421c1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421c1b:{NFSU2_TR(0x421c1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B421c1f:{NFSU2_TR(0x421c1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421c20:{NFSU2_TR(0x421c20);
__builtin_memmove((R+4),(R+24),4);
}
B421c22:{NFSU2_TR(0x421c22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421c27ull));
TAIL_STATIC(0x41d8d0u,41d);
}
B421c27:L421c27:{c.instructions+=4;NFSU2_TR(0x421c27);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B421c2b:{NFSU2_TR(0x421c2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421c2d:{NFSU2_TR(0x421c2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x42340000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B421c35:{NFSU2_TR(0x421c35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421c64;}}
}
B421c37:L421c37:{c.instructions+=3;NFSU2_TR(0x421c37);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B421c3c:{NFSU2_TR(0x421c3c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421c3e:{NFSU2_TR(0x421c3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421c64;}}
}
B421c40:L421c40:{c.instructions+=3;NFSU2_TR(0x421c40);
__builtin_memmove((R+0),gp(0x890108),4);
}
B421c45:{NFSU2_TR(0x421c45);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B421c47:{NFSU2_TR(0x421c47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421c64;}}
}
B421c49:L421c49:{c.instructions+=3;NFSU2_TR(0x421c49);
__builtin_memmove((R+0),gp(0x890114),4);
}
B421c4e:{NFSU2_TR(0x421c4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B421c50:{NFSU2_TR(0x421c50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421caf;}}
}
B421c52:L421c52:{c.instructions+=3;NFSU2_TR(0x421c52);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B421c57:{NFSU2_TR(0x421c57);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421c59:{NFSU2_TR(0x421c59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421caf;}}
}
B421c5b:L421c5b:{c.instructions+=3;NFSU2_TR(0x421c5b);
__builtin_memmove((R+0),gp(0x890104),4);
}
B421c60:{NFSU2_TR(0x421c60);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B421c62:{NFSU2_TR(0x421c62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421caf;}}
}
B421c64:L421c64:{c.instructions+=4;NFSU2_TR(0x421c64);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B421c68:{NFSU2_TR(0x421c68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421c69:{NFSU2_TR(0x421c69);
w4(R+4,u32(0x7e9e0cull));
}
B421c6e:{NFSU2_TR(0x421c6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421c73ull));
TAIL_STATIC(0x5764d0u,576);
}
B421c73:L421c73:{c.instructions+=6;NFSU2_TR(0x421c73);
{u32 ea_=u32(u32(7879188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421c79:{NFSU2_TR(0x421c79);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B421c7d:{NFSU2_TR(0x421c7d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421c83:{NFSU2_TR(0x421c83);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421c85:{NFSU2_TR(0x421c85);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421c88:{NFSU2_TR(0x421c88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421d5e;}}
}
B421c8e:L421c8e:{c.instructions+=6;NFSU2_TR(0x421c8e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421c92:{NFSU2_TR(0x421c92);
{u32 ea_=u32(u32(7881940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421c98:{NFSU2_TR(0x421c98);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421c9c:{NFSU2_TR(0x421c9c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421c9e:{NFSU2_TR(0x421c9e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B421ca1:{NFSU2_TR(0x421ca1);
if(r1(R+514)){{goto L421cab;}}
}
B421ca3:L421ca3:{c.instructions+=2;NFSU2_TR(0x421ca3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421ca5:{NFSU2_TR(0x421ca5);
{u32 ea_=u32(u32(7881940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421cab:L421cab:{c.instructions+=1;NFSU2_TR(0x421cab);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421caf:L421caf:{c.instructions+=12;NFSU2_TR(0x421caf);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421cb3:{NFSU2_TR(0x421cb3);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421cb9:{NFSU2_TR(0x421cb9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B421cbd:{NFSU2_TR(0x421cbd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421cc1:{NFSU2_TR(0x421cc1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421cc5:{NFSU2_TR(0x421cc5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B421cc9:{NFSU2_TR(0x421cc9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421ccd:{NFSU2_TR(0x421ccd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421cd1:{NFSU2_TR(0x421cd1);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421cd7:{NFSU2_TR(0x421cd7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421cd9:{NFSU2_TR(0x421cd9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421cdc:{NFSU2_TR(0x421cdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421d69;}}
}
B421ce2:L421ce2:{c.instructions+=6;NFSU2_TR(0x421ce2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421ce6:{NFSU2_TR(0x421ce6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421cec:{NFSU2_TR(0x421cec);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421cf0:{NFSU2_TR(0x421cf0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421cf2:{NFSU2_TR(0x421cf2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B421cf5:{NFSU2_TR(0x421cf5);
if(r1(R+514)){{goto L421d6f;}}
}
B421cf7:L421cf7:{c.instructions+=3;NFSU2_TR(0x421cf7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421cf9:{NFSU2_TR(0x421cf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B421d01:{NFSU2_TR(0x421d01);
{goto L421d73;}
}
B421d03:L421d03:{c.instructions+=2;NFSU2_TR(0x421d03);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B421d06:{NFSU2_TR(0x421d06);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x421c10u);}goto L421c10;}
}
B421d0b:L421d0b:{c.instructions+=4;NFSU2_TR(0x421d0b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421d0f:{NFSU2_TR(0x421d0f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421d11:{NFSU2_TR(0x421d11);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B421d14:{NFSU2_TR(0x421d14);
if(r1(R+514)){{goto L421d1f;}}
}
B421d16:L421d16:{c.instructions+=2;NFSU2_TR(0x421d16);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B421d1d:{NFSU2_TR(0x421d1d);
{goto L421d37;}
}
B421d1f:L421d1f:{c.instructions+=5;NFSU2_TR(0x421d1f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421d23:{NFSU2_TR(0x421d23);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421d29:{NFSU2_TR(0x421d29);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421d2b:{NFSU2_TR(0x421d2b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B421d2e:{NFSU2_TR(0x421d2e);
if(r1(R+514)){{goto L421d37;}}
}
B421d30:L421d30:{c.instructions+=1;NFSU2_TR(0x421d30);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B421d37:L421d37:{c.instructions+=3;NFSU2_TR(0x421d37);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B421d3d:{NFSU2_TR(0x421d3d);
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
B421d3f:{NFSU2_TR(0x421d3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421d4d;}}
}
B421d41:L421d41:{c.instructions+=3;NFSU2_TR(0x421d41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B421d43:{NFSU2_TR(0x421d43);
__builtin_memmove((R+4),(R+24),4);
}
B421d45:{NFSU2_TR(0x421d45);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421d48ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B421d48:L421d48:{c.instructions+=1;NFSU2_TR(0x421d48);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x421bf9u);}goto L421bf9;}
}
B421d4d:L421d4d:{c.instructions+=5;NFSU2_TR(0x421d4d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421d51:{NFSU2_TR(0x421d51);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B421d53:{NFSU2_TR(0x421d53);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B421d55:{NFSU2_TR(0x421d55);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421d59:{NFSU2_TR(0x421d59);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x421c10u);}goto L421c10;}
}
B421d5e:L421d5e:{c.instructions+=2;NFSU2_TR(0x421d5e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421d64:{NFSU2_TR(0x421d64);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x421cabu);}goto L421cab;}
}
B421d69:L421d69:{c.instructions+=1;NFSU2_TR(0x421d69);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421d6f:L421d6f:{c.instructions+=1;NFSU2_TR(0x421d6f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421d73:L421d73:{c.instructions+=5;NFSU2_TR(0x421d73);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421d75:{NFSU2_TR(0x421d75);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421d79:{NFSU2_TR(0x421d79);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B421d7d:{NFSU2_TR(0x421d7d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421d81:{NFSU2_TR(0x421d81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421dc2;}}
}
B421d83:L421d83:{c.instructions+=9;NFSU2_TR(0x421d83);
{u32 ea_=u32(u32(7879200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421d89:{NFSU2_TR(0x421d89);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421d8d:{NFSU2_TR(0x421d8d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B421d91:{NFSU2_TR(0x421d91);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B421d93:{NFSU2_TR(0x421d93);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421d97:{NFSU2_TR(0x421d97);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B421d99:{NFSU2_TR(0x421d99);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421d9b:{NFSU2_TR(0x421d9b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421d9e:{NFSU2_TR(0x421d9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421da6;}}
}
B421da0:L421da0:{c.instructions+=2;NFSU2_TR(0x421da0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421da2:{NFSU2_TR(0x421da2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421da6:L421da6:{c.instructions+=5;NFSU2_TR(0x421da6);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421daa:{NFSU2_TR(0x421daa);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B421dac:{NFSU2_TR(0x421dac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421dae:{NFSU2_TR(0x421dae);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B421db1:{NFSU2_TR(0x421db1);
if(r1(R+514)){{goto L421e6f;}}
}
B421db7:L421db7:{c.instructions+=3;NFSU2_TR(0x421db7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421db9:{NFSU2_TR(0x421db9);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421dbd:{NFSU2_TR(0x421dbd);
{goto L421e6f;}
}
B421dc2:L421dc2:{c.instructions+=7;NFSU2_TR(0x421dc2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421dc6:{NFSU2_TR(0x421dc6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421dc7:{NFSU2_TR(0x421dc7);
{u32 ea_=u32(u32(7881292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421dcd:{NFSU2_TR(0x421dcd);
w4(R+4,u32(0x7e9e34ull));
}
B421dd2:{NFSU2_TR(0x421dd2);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B421dd4:{NFSU2_TR(0x421dd4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421dd7:{NFSU2_TR(0x421dd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421ddcull));
TAIL_STATIC(0x5764d0u,576);
}
B421ddc:L421ddc:{c.instructions+=5;NFSU2_TR(0x421ddc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421de0:{NFSU2_TR(0x421de0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421de4:{NFSU2_TR(0x421de4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421de5:{NFSU2_TR(0x421de5);
w4(R+4,u32(0x7e9e20ull));
}
B421dea:{NFSU2_TR(0x421dea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421defull));
TAIL_STATIC(0x5764d0u,576);
}
B421def:L421def:{c.instructions+=7;NFSU2_TR(0x421def);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421df3:{NFSU2_TR(0x421df3);
{u32 ea_=u32(u32(7879192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421df9:{NFSU2_TR(0x421df9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421dfd:{NFSU2_TR(0x421dfd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421e03:{NFSU2_TR(0x421e03);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421e05:{NFSU2_TR(0x421e05);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421e08:{NFSU2_TR(0x421e08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421e19;}}
}
B421e0a:L421e0a:{c.instructions+=5;NFSU2_TR(0x421e0a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421e0e:{NFSU2_TR(0x421e0e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421e12:{NFSU2_TR(0x421e12);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421e14:{NFSU2_TR(0x421e14);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421e17:{NFSU2_TR(0x421e17);
if(r1(R+518)){{goto L421e39;}}
}
B421e19:L421e19:{c.instructions+=5;NFSU2_TR(0x421e19);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421e1d:{NFSU2_TR(0x421e1d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421e23:{NFSU2_TR(0x421e23);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421e25:{NFSU2_TR(0x421e25);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B421e28:{NFSU2_TR(0x421e28);
if(r1(R+514)){{goto L421e3f;}}
}
B421e2a:L421e2a:{c.instructions+=5;NFSU2_TR(0x421e2a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421e2e:{NFSU2_TR(0x421e2e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421e32:{NFSU2_TR(0x421e32);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421e34:{NFSU2_TR(0x421e34);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B421e37:{NFSU2_TR(0x421e37);
if(r1(R+514)){{goto L421e3f;}}
}
B421e39:L421e39:{c.instructions+=1;NFSU2_TR(0x421e39);
{u32 ea_=u32(u32(7879196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421e3f:L421e3f:{c.instructions+=8;NFSU2_TR(0x421e3f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421e43:{NFSU2_TR(0x421e43);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B421e47:{NFSU2_TR(0x421e47);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B421e49:{NFSU2_TR(0x421e49);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421e4d:{NFSU2_TR(0x421e4d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B421e4f:{NFSU2_TR(0x421e4f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421e51:{NFSU2_TR(0x421e51);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421e54:{NFSU2_TR(0x421e54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421e5c;}}
}
B421e56:L421e56:{c.instructions+=2;NFSU2_TR(0x421e56);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421e58:{NFSU2_TR(0x421e58);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421e5c:L421e5c:{c.instructions+=5;NFSU2_TR(0x421e5c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421e60:{NFSU2_TR(0x421e60);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B421e62:{NFSU2_TR(0x421e62);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421e64:{NFSU2_TR(0x421e64);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B421e67:{NFSU2_TR(0x421e67);
if(r1(R+514)){{goto L421e6f;}}
}
B421e69:L421e69:{c.instructions+=2;NFSU2_TR(0x421e69);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421e6b:{NFSU2_TR(0x421e6b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421e6f:L421e6f:{c.instructions+=5;NFSU2_TR(0x421e6f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421e71:{NFSU2_TR(0x421e71);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B421e75:{NFSU2_TR(0x421e75);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421e79:{NFSU2_TR(0x421e79);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421e7d:{NFSU2_TR(0x421e7d);
if(r1(R+518)){{goto L421e96;}}
}
B421e7f:L421e7f:{c.instructions+=5;NFSU2_TR(0x421e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B421e85:{NFSU2_TR(0x421e85);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421e89:{NFSU2_TR(0x421e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B421e8c:{NFSU2_TR(0x421e8c);
{u32 ea_=u32(r4(R+0)+u32(624u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B421e92:{NFSU2_TR(0x421e92);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421e96:L421e96:{c.instructions+=7;NFSU2_TR(0x421e96);
{u32 ea_=u32(r4(R+24)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421e9c:{NFSU2_TR(0x421e9c);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B421ea0:{NFSU2_TR(0x421ea0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B421ea6:{NFSU2_TR(0x421ea6);
{u32 ea_=u32(r4(R+24)+u32(564u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B421eac:{NFSU2_TR(0x421eac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421eae:{NFSU2_TR(0x421eae);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421eb1:{NFSU2_TR(0x421eb1);
if(r1(R+518)){{goto L421ebb;}}
}
B421eb3:L421eb3:{c.instructions+=2;NFSU2_TR(0x421eb3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421eb5:{NFSU2_TR(0x421eb5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421ebb:L421ebb:{c.instructions+=5;NFSU2_TR(0x421ebb);
{u32 ea_=u32(r4(R+24)+u32(564u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B421ec1:{NFSU2_TR(0x421ec1);
__builtin_memmove((R+4),gp(0x890118),4);
}
B421ec7:{NFSU2_TR(0x421ec7);
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
B421eca:{NFSU2_TR(0x421eca);
__builtin_memmove((R+4),(R+24),4);
}
B421ecc:{NFSU2_TR(0x421ecc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421f1a;}}
}
B421ece:L421ece:{c.instructions+=3;NFSU2_TR(0x421ece);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421ed3:{NFSU2_TR(0x421ed3);
w4(R+20,u32(0x1ull));
}
B421ed8:{NFSU2_TR(0x421ed8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421eddull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B421edd:L421edd:{c.instructions+=4;NFSU2_TR(0x421edd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421ee3:{NFSU2_TR(0x421ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B421ee6:{NFSU2_TR(0x421ee6);
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
B421ee9:{NFSU2_TR(0x421ee9);
if(r1(R+518)){{goto L421ef5;}}
}
B421eeb:L421eeb:{c.instructions+=2;NFSU2_TR(0x421eeb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B421eee:{NFSU2_TR(0x421eee);
if(r1(R+518)){{goto L421ef5;}}
}
B421ef0:L421ef0:{c.instructions+=2;NFSU2_TR(0x421ef0);
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
B421ef3:{NFSU2_TR(0x421ef3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421efd;}}
}
B421ef5:L421ef5:{c.instructions+=3;NFSU2_TR(0x421ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421ef8:{NFSU2_TR(0x421ef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B421efa:{NFSU2_TR(0x421efa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421efdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B421efd:L421efd:{c.instructions+=3;NFSU2_TR(0x421efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421f03:{NFSU2_TR(0x421f03);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421f05:{NFSU2_TR(0x421f05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421f0aull));
TAIL_STATIC(0x5ecd30u,5ec);
}
B421f0a:L421f0a:{c.instructions+=4;NFSU2_TR(0x421f0a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B421f0c:{NFSU2_TR(0x421f0c);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421f11:{NFSU2_TR(0x421f11);
__builtin_memmove((R+4),(R+24),4);
}
B421f13:{NFSU2_TR(0x421f13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421f18ull));
TAIL_STATIC(0x5eb910u,5eb);
}
B421f18:L421f18:{c.instructions+=1;NFSU2_TR(0x421f18);
{goto L421f45;}
}
B421f1a:L421f1a:{c.instructions+=3;NFSU2_TR(0x421f1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B421f20:{NFSU2_TR(0x421f20);
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
B421f22:{NFSU2_TR(0x421f22);
if(r1(R+518)){{goto L421f35;}}
}
B421f24:L421f24:{c.instructions+=3;NFSU2_TR(0x421f24);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B421f28:{NFSU2_TR(0x421f28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421f29:{NFSU2_TR(0x421f29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421f2eull));
TAIL_STATIC(0x5eb910u,5eb);
}
B421f2e:L421f2e:{c.instructions+=3;NFSU2_TR(0x421f2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421f32:{NFSU2_TR(0x421f32);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421f33:{NFSU2_TR(0x421f33);
{goto L421f3e;}
}
B421f35:L421f35:{c.instructions+=2;NFSU2_TR(0x421f35);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421f37:{NFSU2_TR(0x421f37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421f3cull));
TAIL_STATIC(0x5eb910u,5eb);
}
B421f3c:L421f3c:{c.instructions+=1;NFSU2_TR(0x421f3c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421f3e:L421f3e:{c.instructions+=2;NFSU2_TR(0x421f3e);
__builtin_memmove((R+4),(R+24),4);
}
B421f40:{NFSU2_TR(0x421f40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421f45ull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B421f45:L421f45:{c.instructions+=3;NFSU2_TR(0x421f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B421f4b:{NFSU2_TR(0x421f4b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B421f4e:{NFSU2_TR(0x421f4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421f53ull));
TAIL_STATIC(0x59fa30u,59f);
}
B421f53:L421f53:{c.instructions+=2;NFSU2_TR(0x421f53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B421f55:{NFSU2_TR(0x421f55);
if(r1(R+518)){{goto L421f68;}}
}
B421f57:L421f57:{c.instructions+=3;NFSU2_TR(0x421f57);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B421f5d:{NFSU2_TR(0x421f5d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421f5f:{NFSU2_TR(0x421f5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421f72;}}
}
B421f61:L421f61:{c.instructions+=1;NFSU2_TR(0x421f61);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B421f68:L421f68:{c.instructions+=3;NFSU2_TR(0x421f68);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B421f6e:{NFSU2_TR(0x421f6e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421f70:{NFSU2_TR(0x421f70);
if(r1(R+518)){{goto L421fb7;}}
}
B421f72:L421f72:{c.instructions+=3;NFSU2_TR(0x421f72);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B421f77:{NFSU2_TR(0x421f77);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B421f79:{NFSU2_TR(0x421f79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421fb0;}}
}
B421f7b:L421f7b:{c.instructions+=3;NFSU2_TR(0x421f7b);
__builtin_memmove((R+0),gp(0x890108),4);
}
B421f80:{NFSU2_TR(0x421f80);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B421f82:{NFSU2_TR(0x421f82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421fb0;}}
}
B421f84:L421f84:{c.instructions+=5;NFSU2_TR(0x421f84);
{u32 ea_=u32(r4(R+24)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421f8a:{NFSU2_TR(0x421f8a);
{u32 ea_=u32(r4(R+24)+u32(608u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421f90:{NFSU2_TR(0x421f90);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421f92:{NFSU2_TR(0x421f92);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B421f95:{NFSU2_TR(0x421f95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L421fb0;}}
}
B421f97:L421f97:{c.instructions+=4;NFSU2_TR(0x421f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B421f9d:{NFSU2_TR(0x421f9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421f9e:{NFSU2_TR(0x421f9e);
__builtin_memmove((R+4),(R+24),4);
}
B421fa0:{NFSU2_TR(0x421fa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421fa5ull));
TAIL_STATIC(0x5eb910u,5eb);
}
B421fa5:L421fa5:{c.instructions+=3;NFSU2_TR(0x421fa5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421fa7:{NFSU2_TR(0x421fa7);
__builtin_memmove((R+4),(R+24),4);
}
B421fa9:{NFSU2_TR(0x421fa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421faeull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B421fae:L421fae:{c.instructions+=1;NFSU2_TR(0x421fae);
{goto L421fb7;}
}
B421fb0:L421fb0:{c.instructions+=1;NFSU2_TR(0x421fb0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B421fb7:L421fb7:{c.instructions+=9;NFSU2_TR(0x421fb7);
{u32 ea_=u32(r4(R+24)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421fbd:{NFSU2_TR(0x421fbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B421fc3:{NFSU2_TR(0x421fc3);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B421fc7:{NFSU2_TR(0x421fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x260ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B421fcd:{NFSU2_TR(0x421fcd);
{u32 ea_=u32(r4(R+24)+u32(576u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B421fd3:{NFSU2_TR(0x421fd3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421fd9:{NFSU2_TR(0x421fd9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421fdb:{NFSU2_TR(0x421fdb);
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
B421fde:{NFSU2_TR(0x421fde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x422013u,422);}
}
B421fe0:L421fe0:{c.instructions+=6;NFSU2_TR(0x421fe0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B421fe4:{NFSU2_TR(0x421fe4);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B421fe6:{NFSU2_TR(0x421fe6);
{u32 ea_=u32(u32(7882088u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B421fec:{NFSU2_TR(0x421fec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B421fee:{NFSU2_TR(0x421fee);
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
B421ff1:{NFSU2_TR(0x421ff1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x422013u,422);}
}
B421ff3:L421ff3:{c.instructions+=3;NFSU2_TR(0x421ff3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B421ff5:{NFSU2_TR(0x421ff5);
__builtin_memmove((R+4),(R+24),4);
}
B421ff7:{NFSU2_TR(0x421ff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x421ffcull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B421ffc:L421ffc:{c.instructions+=1;NFSU2_TR(0x421ffc);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x422001u,422);
}
XIT:NFSU2_TR_EXIT(0x421,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
