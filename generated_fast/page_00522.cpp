#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_523(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 body_5b2(u8* __restrict R,Cpu& c);
u32 body_5b3(u8* __restrict R,Cpu& c);
u32 body_5b4(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f7(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x522,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x522,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_522(u8* __restrict R,Cpu& c);
u32 page_522(Cpu& c){return body_522(c.regs.data(),c);}
__attribute__((noinline)) u32 body_522(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x522001:goto L522001;
case 0x522004:c.instructions+=21;goto B522004;
case 0x522006:c.instructions+=20;goto B522006;
case 0x522009:c.instructions+=19;goto B522009;
case 0x52200e:c.instructions+=18;goto B52200e;
case 0x522011:c.instructions+=17;goto B522011;
case 0x522014:c.instructions+=16;goto B522014;
case 0x522017:c.instructions+=15;goto B522017;
case 0x52201a:c.instructions+=14;goto B52201a;
case 0x52201d:c.instructions+=13;goto B52201d;
case 0x522020:c.instructions+=12;goto B522020;
case 0x522023:c.instructions+=11;goto B522023;
case 0x522026:c.instructions+=10;goto B522026;
case 0x52202a:c.instructions+=9;goto B52202a;
case 0x52202d:c.instructions+=8;goto B52202d;
case 0x522031:c.instructions+=7;goto B522031;
case 0x522035:c.instructions+=6;goto B522035;
case 0x522039:c.instructions+=5;goto B522039;
case 0x52203f:c.instructions+=4;goto B52203f;
case 0x522042:c.instructions+=3;goto B522042;
case 0x522046:c.instructions+=2;goto B522046;
case 0x522049:c.instructions+=1;goto B522049;
case 0x522050:goto L522050;
case 0x522051:c.instructions+=3;goto B522051;
case 0x522053:c.instructions+=2;goto B522053;
case 0x52205a:c.instructions+=1;goto B52205a;
case 0x52205c:goto L52205c;
case 0x52205f:c.instructions+=3;goto B52205f;
case 0x522064:c.instructions+=2;goto B522064;
case 0x522067:c.instructions+=1;goto B522067;
case 0x52206d:goto L52206d;
case 0x52206e:c.instructions+=1;goto B52206e;
case 0x522080:goto L522080;
case 0x522082:c.instructions+=24;goto B522082;
case 0x522086:c.instructions+=23;goto B522086;
case 0x522089:c.instructions+=22;goto B522089;
case 0x52208b:c.instructions+=21;goto B52208b;
case 0x52208e:c.instructions+=20;goto B52208e;
case 0x522091:c.instructions+=19;goto B522091;
case 0x522094:c.instructions+=18;goto B522094;
case 0x522097:c.instructions+=17;goto B522097;
case 0x52209a:c.instructions+=16;goto B52209a;
case 0x52209d:c.instructions+=15;goto B52209d;
case 0x5220a1:c.instructions+=14;goto B5220a1;
case 0x5220a4:c.instructions+=13;goto B5220a4;
case 0x5220a8:c.instructions+=12;goto B5220a8;
case 0x5220aa:c.instructions+=11;goto B5220aa;
case 0x5220ad:c.instructions+=10;goto B5220ad;
case 0x5220b2:c.instructions+=9;goto B5220b2;
case 0x5220b5:c.instructions+=8;goto B5220b5;
case 0x5220b8:c.instructions+=7;goto B5220b8;
case 0x5220bb:c.instructions+=6;goto B5220bb;
case 0x5220be:c.instructions+=5;goto B5220be;
case 0x5220c1:c.instructions+=4;goto B5220c1;
case 0x5220c4:c.instructions+=3;goto B5220c4;
case 0x5220ca:c.instructions+=2;goto B5220ca;
case 0x5220cd:c.instructions+=1;goto B5220cd;
case 0x5220d0:goto L5220d0;
case 0x5220d2:c.instructions+=26;goto B5220d2;
case 0x5220d6:c.instructions+=25;goto B5220d6;
case 0x5220d9:c.instructions+=24;goto B5220d9;
case 0x5220db:c.instructions+=23;goto B5220db;
case 0x5220de:c.instructions+=22;goto B5220de;
case 0x5220e1:c.instructions+=21;goto B5220e1;
case 0x5220e4:c.instructions+=20;goto B5220e4;
case 0x5220e7:c.instructions+=19;goto B5220e7;
case 0x5220ea:c.instructions+=18;goto B5220ea;
case 0x5220ed:c.instructions+=17;goto B5220ed;
case 0x5220f1:c.instructions+=16;goto B5220f1;
case 0x5220f4:c.instructions+=15;goto B5220f4;
case 0x5220f8:c.instructions+=14;goto B5220f8;
case 0x5220fb:c.instructions+=13;goto B5220fb;
case 0x522100:c.instructions+=12;goto B522100;
case 0x522102:c.instructions+=11;goto B522102;
case 0x522105:c.instructions+=10;goto B522105;
case 0x522108:c.instructions+=9;goto B522108;
case 0x52210b:c.instructions+=8;goto B52210b;
case 0x52210e:c.instructions+=7;goto B52210e;
case 0x522112:c.instructions+=6;goto B522112;
case 0x522115:c.instructions+=5;goto B522115;
case 0x522118:c.instructions+=4;goto B522118;
case 0x52211e:c.instructions+=3;goto B52211e;
case 0x522121:c.instructions+=2;goto B522121;
case 0x522124:c.instructions+=1;goto B522124;
case 0x522130:goto L522130;
case 0x522131:c.instructions+=7;goto B522131;
case 0x522133:c.instructions+=6;goto B522133;
case 0x522134:c.instructions+=5;goto B522134;
case 0x522135:c.instructions+=4;goto B522135;
case 0x522138:c.instructions+=3;goto B522138;
case 0x52213b:c.instructions+=2;goto B52213b;
case 0x52213d:c.instructions+=1;goto B52213d;
case 0x522143:goto L522143;
case 0x522146:c.instructions+=1;goto B522146;
case 0x52214c:goto L52214c;
case 0x52214d:c.instructions+=2;goto B52214d;
case 0x522152:c.instructions+=1;goto B522152;
case 0x522157:goto L522157;
case 0x522159:c.instructions+=1;goto B522159;
case 0x52215f:goto L52215f;
case 0x522164:c.instructions+=2;goto B522164;
case 0x522169:c.instructions+=1;goto B522169;
case 0x52216e:goto L52216e;
case 0x522170:c.instructions+=1;goto B522170;
case 0x522172:goto L522172;
case 0x522177:c.instructions+=1;goto B522177;
case 0x52217c:goto L52217c;
case 0x52217e:c.instructions+=1;goto B52217e;
case 0x522180:goto L522180;
case 0x522182:c.instructions+=3;goto B522182;
case 0x522183:c.instructions+=2;goto B522183;
case 0x522188:c.instructions+=1;goto B522188;
case 0x52218d:goto L52218d;
case 0x52218f:c.instructions+=2;goto B52218f;
case 0x522190:c.instructions+=1;goto B522190;
case 0x522192:goto L522192;
case 0x522197:c.instructions+=1;goto B522197;
case 0x52219c:goto L52219c;
case 0x52219e:c.instructions+=1;goto B52219e;
case 0x5221a0:goto L5221a0;
case 0x5221a4:c.instructions+=3;goto B5221a4;
case 0x5221a7:c.instructions+=2;goto B5221a7;
case 0x5221a8:c.instructions+=1;goto B5221a8;
case 0x5221ad:goto L5221ad;
case 0x5221b0:c.instructions+=2;goto B5221b0;
case 0x5221b2:c.instructions+=1;goto B5221b2;
case 0x5221b4:goto L5221b4;
case 0x5221b9:c.instructions+=1;goto B5221b9;
case 0x5221be:goto L5221be;
case 0x5221c0:c.instructions+=1;goto B5221c0;
case 0x5221c2:goto L5221c2;
case 0x5221c3:c.instructions+=2;goto B5221c3;
case 0x5221c8:c.instructions+=1;goto B5221c8;
case 0x5221cd:goto L5221cd;
case 0x5221cf:c.instructions+=1;goto B5221cf;
case 0x5221d1:goto L5221d1;
case 0x5221d2:c.instructions+=2;goto B5221d2;
case 0x5221d7:c.instructions+=1;goto B5221d7;
case 0x5221dc:goto L5221dc;
case 0x5221de:c.instructions+=1;goto B5221de;
case 0x5221e0:goto L5221e0;
case 0x5221e2:c.instructions+=4;goto B5221e2;
case 0x5221e5:c.instructions+=3;goto B5221e5;
case 0x5221e8:c.instructions+=2;goto B5221e8;
case 0x5221e9:c.instructions+=1;goto B5221e9;
case 0x5221ee:goto L5221ee;
case 0x5221f1:c.instructions+=2;goto B5221f1;
case 0x5221f3:c.instructions+=1;goto B5221f3;
case 0x5221f5:goto L5221f5;
case 0x5221fa:c.instructions+=1;goto B5221fa;
case 0x5221fc:goto L5221fc;
case 0x5221ff:goto L5221ff;
case 0x522201:c.instructions+=1;goto B522201;
case 0x522206:goto L522206;
case 0x522209:c.instructions+=2;goto B522209;
case 0x52220b:c.instructions+=1;goto B52220b;
case 0x52220d:goto L52220d;
case 0x522210:c.instructions+=6;goto B522210;
case 0x522212:c.instructions+=5;goto B522212;
case 0x522213:c.instructions+=4;goto B522213;
case 0x522214:c.instructions+=3;goto B522214;
case 0x522215:c.instructions+=2;goto B522215;
case 0x522217:c.instructions+=1;goto B522217;
case 0x52221c:goto L52221c;
case 0x52221e:c.instructions+=3;goto B52221e;
case 0x52221f:c.instructions+=2;goto B52221f;
case 0x522221:c.instructions+=1;goto B522221;
case 0x522224:goto L522224;
case 0x522225:c.instructions+=4;goto B522225;
case 0x522226:c.instructions+=3;goto B522226;
case 0x522227:c.instructions+=2;goto B522227;
case 0x522228:c.instructions+=1;goto B522228;
case 0x52222b:goto L52222b;
case 0x52222d:c.instructions+=4;goto B52222d;
case 0x52222f:c.instructions+=3;goto B52222f;
case 0x522230:c.instructions+=2;goto B522230;
case 0x522232:c.instructions+=1;goto B522232;
case 0x522235:goto L522235;
case 0x522236:goto L522236;
case 0x522237:c.instructions+=3;goto B522237;
case 0x522238:c.instructions+=2;goto B522238;
case 0x522239:c.instructions+=1;goto B522239;
case 0x522240:goto L522240;
case 0x522241:c.instructions+=6;goto B522241;
case 0x522242:c.instructions+=5;goto B522242;
case 0x522244:c.instructions+=4;goto B522244;
case 0x52224a:c.instructions+=3;goto B52224a;
case 0x522250:c.instructions+=2;goto B522250;
case 0x522252:c.instructions+=1;goto B522252;
case 0x522258:goto L522258;
case 0x52225e:c.instructions+=5;goto B52225e;
case 0x52225f:c.instructions+=4;goto B52225f;
case 0x522260:c.instructions+=3;goto B522260;
case 0x522261:c.instructions+=2;goto B522261;
case 0x522263:c.instructions+=1;goto B522263;
case 0x522268:goto L522268;
case 0x52226a:c.instructions+=4;goto B52226a;
case 0x52226e:c.instructions+=3;goto B52226e;
case 0x52226f:c.instructions+=2;goto B52226f;
case 0x522274:c.instructions+=1;goto B522274;
case 0x522276:goto L522276;
case 0x52227c:c.instructions+=5;goto B52227c;
case 0x52227e:c.instructions+=4;goto B52227e;
case 0x52227f:c.instructions+=3;goto B52227f;
case 0x522281:c.instructions+=2;goto B522281;
case 0x522283:c.instructions+=1;goto B522283;
case 0x522285:goto L522285;
case 0x52228b:c.instructions+=6;goto B52228b;
case 0x52228d:c.instructions+=5;goto B52228d;
case 0x52228e:c.instructions+=4;goto B52228e;
case 0x522290:c.instructions+=3;goto B522290;
case 0x522292:c.instructions+=2;goto B522292;
case 0x522294:c.instructions+=1;goto B522294;
case 0x522296:goto L522296;
case 0x52229c:c.instructions+=6;goto B52229c;
case 0x52229d:c.instructions+=5;goto B52229d;
case 0x52229e:c.instructions+=4;goto B52229e;
case 0x5222a4:c.instructions+=3;goto B5222a4;
case 0x5222a5:c.instructions+=2;goto B5222a5;
case 0x5222a6:c.instructions+=1;goto B5222a6;
case 0x5222a9:goto L5222a9;
case 0x5222ad:c.instructions+=1;goto B5222ad;
case 0x5222ae:goto L5222ae;
case 0x5222b0:c.instructions+=1;goto B5222b0;
case 0x5222b5:goto L5222b5;
case 0x5222b7:c.instructions+=1;goto B5222b7;
case 0x5222b9:goto L5222b9;
case 0x5222ba:c.instructions+=5;goto B5222ba;
case 0x5222bb:c.instructions+=4;goto B5222bb;
case 0x5222c1:c.instructions+=3;goto B5222c1;
case 0x5222c2:c.instructions+=2;goto B5222c2;
case 0x5222c3:c.instructions+=1;goto B5222c3;
case 0x5222c6:goto L5222c6;
case 0x5222cc:c.instructions+=2;goto B5222cc;
case 0x5222ce:c.instructions+=1;goto B5222ce;
case 0x5222d0:goto L5222d0;
case 0x5222d3:c.instructions+=6;goto B5222d3;
case 0x5222d4:c.instructions+=5;goto B5222d4;
case 0x5222d5:c.instructions+=4;goto B5222d5;
case 0x5222db:c.instructions+=3;goto B5222db;
case 0x5222dc:c.instructions+=2;goto B5222dc;
case 0x5222dd:c.instructions+=1;goto B5222dd;
case 0x5222e0:goto L5222e0;
case 0x5222e5:c.instructions+=1;goto B5222e5;
case 0x5222e7:goto L5222e7;
case 0x5222ed:c.instructions+=3;goto B5222ed;
case 0x5222f3:c.instructions+=2;goto B5222f3;
case 0x5222f9:c.instructions+=1;goto B5222f9;
case 0x5222fb:goto L5222fb;
case 0x522301:c.instructions+=5;goto B522301;
case 0x522303:c.instructions+=4;goto B522303;
case 0x522304:c.instructions+=3;goto B522304;
case 0x522306:c.instructions+=2;goto B522306;
case 0x522308:c.instructions+=1;goto B522308;
case 0x52230a:goto L52230a;
case 0x52230c:c.instructions+=2;goto B52230c;
case 0x52230d:c.instructions+=1;goto B52230d;
case 0x52230f:goto L52230f;
case 0x522311:c.instructions+=2;goto B522311;
case 0x522312:c.instructions+=1;goto B522312;
case 0x522314:goto L522314;
case 0x522317:c.instructions+=4;goto B522317;
case 0x522318:c.instructions+=3;goto B522318;
case 0x52231a:c.instructions+=2;goto B52231a;
case 0x52231c:c.instructions+=1;goto B52231c;
case 0x52231e:goto L52231e;
case 0x522320:c.instructions+=3;goto B522320;
case 0x522321:c.instructions+=2;goto B522321;
case 0x522322:c.instructions+=1;goto B522322;
case 0x522324:goto L522324;
case 0x522327:c.instructions+=1;goto B522327;
case 0x52232d:goto L52232d;
case 0x52232e:c.instructions+=1;goto B52232e;
case 0x52232f:goto L52232f;
case 0x522330:c.instructions+=2;goto B522330;
case 0x522331:c.instructions+=1;goto B522331;
case 0x522340:goto L522340;
case 0x522341:c.instructions+=6;goto B522341;
case 0x522342:c.instructions+=5;goto B522342;
case 0x522344:c.instructions+=4;goto B522344;
case 0x52234a:c.instructions+=3;goto B52234a;
case 0x522350:c.instructions+=2;goto B522350;
case 0x522352:c.instructions+=1;goto B522352;
case 0x522358:goto L522358;
case 0x52235e:c.instructions+=2;goto B52235e;
case 0x522364:c.instructions+=1;goto B522364;
case 0x52236a:goto L52236a;
case 0x522370:c.instructions+=5;goto B522370;
case 0x522371:c.instructions+=4;goto B522371;
case 0x522372:c.instructions+=3;goto B522372;
case 0x522373:c.instructions+=2;goto B522373;
case 0x522375:c.instructions+=1;goto B522375;
case 0x52237a:goto L52237a;
case 0x52237c:c.instructions+=4;goto B52237c;
case 0x522380:c.instructions+=3;goto B522380;
case 0x522381:c.instructions+=2;goto B522381;
case 0x522386:c.instructions+=1;goto B522386;
case 0x522388:goto L522388;
case 0x52238e:c.instructions+=2;goto B52238e;
case 0x522390:c.instructions+=1;goto B522390;
case 0x522392:goto L522392;
case 0x522398:c.instructions+=8;goto B522398;
case 0x52239a:c.instructions+=7;goto B52239a;
case 0x52239b:c.instructions+=6;goto B52239b;
case 0x52239d:c.instructions+=5;goto B52239d;
case 0x52239f:c.instructions+=4;goto B52239f;
case 0x5223a1:c.instructions+=3;goto B5223a1;
case 0x5223a3:c.instructions+=2;goto B5223a3;
case 0x5223a5:c.instructions+=1;goto B5223a5;
case 0x5223a7:goto L5223a7;
case 0x5223a9:c.instructions+=1;goto B5223a9;
case 0x5223ab:goto L5223ab;
case 0x5223ad:c.instructions+=2;goto B5223ad;
case 0x5223ae:c.instructions+=1;goto B5223ae;
case 0x5223b0:goto L5223b0;
case 0x5223b5:c.instructions+=1;goto B5223b5;
case 0x5223b7:goto L5223b7;
case 0x5223bd:c.instructions+=5;goto B5223bd;
case 0x5223c3:c.instructions+=4;goto B5223c3;
case 0x5223c5:c.instructions+=3;goto B5223c5;
case 0x5223c7:c.instructions+=2;goto B5223c7;
case 0x5223c9:c.instructions+=1;goto B5223c9;
case 0x5223cb:goto L5223cb;
case 0x5223cd:c.instructions+=5;goto B5223cd;
case 0x5223ce:c.instructions+=4;goto B5223ce;
case 0x5223d0:c.instructions+=3;goto B5223d0;
case 0x5223d2:c.instructions+=2;goto B5223d2;
case 0x5223d4:c.instructions+=1;goto B5223d4;
case 0x5223d6:goto L5223d6;
case 0x5223d8:goto L5223d8;
case 0x5223d9:c.instructions+=1;goto B5223d9;
case 0x5223db:goto L5223db;
case 0x5223de:goto L5223de;
case 0x5223df:goto L5223df;
case 0x5223e1:c.instructions+=1;goto B5223e1;
case 0x5223e6:goto L5223e6;
case 0x5223e8:c.instructions+=1;goto B5223e8;
case 0x5223ea:goto L5223ea;
case 0x5223f0:goto L5223f0;
case 0x5223f1:c.instructions+=1;goto B5223f1;
case 0x5223f2:goto L5223f2;
case 0x5223f3:c.instructions+=2;goto B5223f3;
case 0x5223f4:c.instructions+=1;goto B5223f4;
case 0x522400:goto L522400;
case 0x522402:c.instructions+=15;goto B522402;
case 0x522407:c.instructions+=14;goto B522407;
case 0x52240d:c.instructions+=13;goto B52240d;
case 0x52240e:c.instructions+=12;goto B52240e;
case 0x522415:c.instructions+=11;goto B522415;
case 0x522418:c.instructions+=10;goto B522418;
case 0x522419:c.instructions+=9;goto B522419;
case 0x52241a:c.instructions+=8;goto B52241a;
case 0x52241c:c.instructions+=7;goto B52241c;
case 0x52241d:c.instructions+=6;goto B52241d;
case 0x52241f:c.instructions+=5;goto B52241f;
case 0x522420:c.instructions+=4;goto B522420;
case 0x522423:c.instructions+=3;goto B522423;
case 0x522427:c.instructions+=2;goto B522427;
case 0x52242a:c.instructions+=1;goto B52242a;
case 0x52242f:goto L52242f;
case 0x522433:c.instructions+=3;goto B522433;
case 0x522439:c.instructions+=2;goto B522439;
case 0x52243f:c.instructions+=1;goto B52243f;
case 0x522444:goto L522444;
case 0x522446:c.instructions+=1;goto B522446;
case 0x52244b:goto L52244b;
case 0x52244e:c.instructions+=2;goto B52244e;
case 0x52244f:c.instructions+=1;goto B52244f;
case 0x522451:goto L522451;
case 0x522457:c.instructions+=1;goto B522457;
case 0x52245c:goto L52245c;
case 0x522466:c.instructions+=8;goto B522466;
case 0x52246c:c.instructions+=7;goto B52246c;
case 0x522472:c.instructions+=6;goto B522472;
case 0x522477:c.instructions+=5;goto B522477;
case 0x52247d:c.instructions+=4;goto B52247d;
case 0x522483:c.instructions+=3;goto B522483;
case 0x522489:c.instructions+=2;goto B522489;
case 0x52248f:c.instructions+=1;goto B52248f;
case 0x522497:goto L522497;
case 0x522499:c.instructions+=1;goto B522499;
case 0x52249e:goto L52249e;
case 0x5224a0:c.instructions+=6;goto B5224a0;
case 0x5224a3:c.instructions+=5;goto B5224a3;
case 0x5224a6:c.instructions+=4;goto B5224a6;
case 0x5224a9:c.instructions+=3;goto B5224a9;
case 0x5224ac:c.instructions+=2;goto B5224ac;
case 0x5224af:c.instructions+=1;goto B5224af;
case 0x5224b4:goto L5224b4;
case 0x5224b6:c.instructions+=2;goto B5224b6;
case 0x5224b9:c.instructions+=1;goto B5224b9;
case 0x5224be:goto L5224be;
case 0x5224c0:goto L5224c0;
case 0x5224c4:c.instructions+=4;goto B5224c4;
case 0x5224c7:c.instructions+=3;goto B5224c7;
case 0x5224c8:c.instructions+=2;goto B5224c8;
case 0x5224cc:c.instructions+=1;goto B5224cc;
case 0x5224ce:goto L5224ce;
case 0x5224d4:c.instructions+=11;goto B5224d4;
case 0x5224da:c.instructions+=10;goto B5224da;
case 0x5224db:c.instructions+=9;goto B5224db;
case 0x5224e1:c.instructions+=8;goto B5224e1;
case 0x5224e5:c.instructions+=7;goto B5224e5;
case 0x5224e6:c.instructions+=6;goto B5224e6;
case 0x5224e8:c.instructions+=5;goto B5224e8;
case 0x5224e9:c.instructions+=4;goto B5224e9;
case 0x5224ea:c.instructions+=3;goto B5224ea;
case 0x5224f1:c.instructions+=2;goto B5224f1;
case 0x5224f4:c.instructions+=1;goto B5224f4;
case 0x522500:goto L522500;
case 0x522501:c.instructions+=6;goto B522501;
case 0x522502:c.instructions+=5;goto B522502;
case 0x522506:c.instructions+=4;goto B522506;
case 0x522508:c.instructions+=3;goto B522508;
case 0x52250e:c.instructions+=2;goto B52250e;
case 0x52250f:c.instructions+=1;goto B52250f;
case 0x522514:goto L522514;
case 0x522516:c.instructions+=1;goto B522516;
case 0x522518:goto L522518;
case 0x52251c:c.instructions+=3;goto B52251c;
case 0x52251f:c.instructions+=2;goto B52251f;
case 0x522521:c.instructions+=1;goto B522521;
case 0x522523:goto L522523;
case 0x522529:c.instructions+=5;goto B522529;
case 0x52252a:c.instructions+=4;goto B52252a;
case 0x52252e:c.instructions+=3;goto B52252e;
case 0x52252f:c.instructions+=2;goto B52252f;
case 0x522530:c.instructions+=1;goto B522530;
case 0x522535:goto L522535;
case 0x522536:c.instructions+=2;goto B522536;
case 0x522537:c.instructions+=1;goto B522537;
case 0x52253a:goto L52253a;
case 0x52253e:c.instructions+=5;goto B52253e;
case 0x522540:c.instructions+=4;goto B522540;
case 0x522541:c.instructions+=3;goto B522541;
case 0x522542:c.instructions+=2;goto B522542;
case 0x522548:c.instructions+=1;goto B522548;
case 0x52254d:goto L52254d;
case 0x52254e:c.instructions+=2;goto B52254e;
case 0x52254f:c.instructions+=1;goto B52254f;
case 0x522560:goto L522560;
case 0x522561:c.instructions+=7;goto B522561;
case 0x522562:c.instructions+=6;goto B522562;
case 0x522563:c.instructions+=5;goto B522563;
case 0x522567:c.instructions+=4;goto B522567;
case 0x522569:c.instructions+=3;goto B522569;
case 0x52256f:c.instructions+=2;goto B52256f;
case 0x522570:c.instructions+=1;goto B522570;
case 0x522575:goto L522575;
case 0x522577:c.instructions+=1;goto B522577;
case 0x522579:goto L522579;
case 0x52257b:c.instructions+=8;goto B52257b;
case 0x52257d:c.instructions+=7;goto B52257d;
case 0x522581:c.instructions+=6;goto B522581;
case 0x522582:c.instructions+=5;goto B522582;
case 0x522586:c.instructions+=4;goto B522586;
case 0x522587:c.instructions+=3;goto B522587;
case 0x52258d:c.instructions+=2;goto B52258d;
case 0x52258e:c.instructions+=1;goto B52258e;
case 0x522593:goto L522593;
case 0x522597:c.instructions+=6;goto B522597;
case 0x52259b:c.instructions+=5;goto B52259b;
case 0x52259c:c.instructions+=4;goto B52259c;
case 0x52259d:c.instructions+=3;goto B52259d;
case 0x5225a3:c.instructions+=2;goto B5225a3;
case 0x5225a4:c.instructions+=1;goto B5225a4;
case 0x5225a7:goto L5225a7;
case 0x5225ad:c.instructions+=4;goto B5225ad;
case 0x5225ae:c.instructions+=3;goto B5225ae;
case 0x5225af:c.instructions+=2;goto B5225af;
case 0x5225b0:c.instructions+=1;goto B5225b0;
case 0x5225c0:goto L5225c0;
case 0x5225c4:c.instructions+=5;goto B5225c4;
case 0x5225c7:c.instructions+=4;goto B5225c7;
case 0x5225c8:c.instructions+=3;goto B5225c8;
case 0x5225c9:c.instructions+=2;goto B5225c9;
case 0x5225cb:c.instructions+=1;goto B5225cb;
case 0x5225d1:goto L5225d1;
case 0x5225d8:goto L5225d8;
case 0x5225da:c.instructions+=1;goto B5225da;
case 0x5225e0:goto L5225e0;
case 0x5225e6:c.instructions+=2;goto B5225e6;
case 0x5225e7:c.instructions+=1;goto B5225e7;
case 0x5225ec:goto L5225ec;
case 0x5225ee:c.instructions+=1;goto B5225ee;
case 0x5225f4:goto L5225f4;
case 0x5225f5:c.instructions+=2;goto B5225f5;
case 0x5225f8:c.instructions+=1;goto B5225f8;
case 0x5225fa:goto L5225fa;
case 0x5225fb:c.instructions+=2;goto B5225fb;
case 0x5225fc:c.instructions+=1;goto B5225fc;
case 0x5225ff:goto L5225ff;
case 0x522604:goto L522604;
case 0x52260a:c.instructions+=2;goto B52260a;
case 0x52260b:c.instructions+=1;goto B52260b;
case 0x522610:goto L522610;
case 0x522612:c.instructions+=1;goto B522612;
case 0x522614:goto L522614;
case 0x522615:c.instructions+=2;goto B522615;
case 0x522618:c.instructions+=1;goto B522618;
case 0x52261a:goto L52261a;
case 0x52261b:c.instructions+=2;goto B52261b;
case 0x52261c:c.instructions+=1;goto B52261c;
case 0x52261f:goto L52261f;
case 0x522624:goto L522624;
case 0x52262a:c.instructions+=2;goto B52262a;
case 0x52262b:c.instructions+=1;goto B52262b;
case 0x522630:goto L522630;
case 0x522632:c.instructions+=1;goto B522632;
case 0x522634:goto L522634;
case 0x522635:c.instructions+=2;goto B522635;
case 0x522638:c.instructions+=1;goto B522638;
case 0x52263a:goto L52263a;
case 0x52263b:c.instructions+=2;goto B52263b;
case 0x52263c:c.instructions+=1;goto B52263c;
case 0x52263f:goto L52263f;
case 0x522644:goto L522644;
case 0x52264a:c.instructions+=2;goto B52264a;
case 0x52264b:c.instructions+=1;goto B52264b;
case 0x522650:goto L522650;
case 0x522652:c.instructions+=1;goto B522652;
case 0x522654:goto L522654;
case 0x522655:c.instructions+=2;goto B522655;
case 0x522658:c.instructions+=1;goto B522658;
case 0x52265a:goto L52265a;
case 0x52265b:c.instructions+=2;goto B52265b;
case 0x52265c:c.instructions+=1;goto B52265c;
case 0x52265f:goto L52265f;
case 0x522661:c.instructions+=1;goto B522661;
case 0x522663:goto L522663;
case 0x522665:goto L522665;
case 0x52266b:c.instructions+=1;goto B52266b;
case 0x522670:goto L522670;
case 0x522672:c.instructions+=1;goto B522672;
case 0x522674:goto L522674;
case 0x522675:c.instructions+=3;goto B522675;
case 0x522677:c.instructions+=2;goto B522677;
case 0x522678:c.instructions+=1;goto B522678;
case 0x52267b:goto L52267b;
case 0x522680:goto L522680;
case 0x522686:c.instructions+=2;goto B522686;
case 0x522687:c.instructions+=1;goto B522687;
case 0x52268c:goto L52268c;
case 0x52268e:c.instructions+=1;goto B52268e;
case 0x522690:goto L522690;
case 0x522691:c.instructions+=2;goto B522691;
case 0x522694:c.instructions+=1;goto B522694;
case 0x522696:goto L522696;
case 0x522697:c.instructions+=3;goto B522697;
case 0x522699:c.instructions+=2;goto B522699;
case 0x52269a:c.instructions+=1;goto B52269a;
case 0x5226c0:goto L5226c0;
case 0x5226c2:c.instructions+=24;goto B5226c2;
case 0x5226c6:c.instructions+=23;goto B5226c6;
case 0x5226c9:c.instructions+=22;goto B5226c9;
case 0x5226cb:c.instructions+=21;goto B5226cb;
case 0x5226ce:c.instructions+=20;goto B5226ce;
case 0x5226d1:c.instructions+=19;goto B5226d1;
case 0x5226d4:c.instructions+=18;goto B5226d4;
case 0x5226d7:c.instructions+=17;goto B5226d7;
case 0x5226da:c.instructions+=16;goto B5226da;
case 0x5226dd:c.instructions+=15;goto B5226dd;
case 0x5226e1:c.instructions+=14;goto B5226e1;
case 0x5226e4:c.instructions+=13;goto B5226e4;
case 0x5226e8:c.instructions+=12;goto B5226e8;
case 0x5226ea:c.instructions+=11;goto B5226ea;
case 0x5226ed:c.instructions+=10;goto B5226ed;
case 0x5226f2:c.instructions+=9;goto B5226f2;
case 0x5226f5:c.instructions+=8;goto B5226f5;
case 0x5226f8:c.instructions+=7;goto B5226f8;
case 0x5226fb:c.instructions+=6;goto B5226fb;
case 0x5226fe:c.instructions+=5;goto B5226fe;
case 0x522701:c.instructions+=4;goto B522701;
case 0x522704:c.instructions+=3;goto B522704;
case 0x52270a:c.instructions+=2;goto B52270a;
case 0x52270d:c.instructions+=1;goto B52270d;
case 0x522710:goto L522710;
case 0x522711:c.instructions+=36;goto B522711;
case 0x522713:c.instructions+=35;goto B522713;
case 0x522715:c.instructions+=34;goto B522715;
case 0x52271a:c.instructions+=33;goto B52271a;
case 0x522720:c.instructions+=32;goto B522720;
case 0x522721:c.instructions+=31;goto B522721;
case 0x522728:c.instructions+=30;goto B522728;
case 0x522729:c.instructions+=29;goto B522729;
case 0x52272c:c.instructions+=28;goto B52272c;
case 0x52272d:c.instructions+=27;goto B52272d;
case 0x52272f:c.instructions+=26;goto B52272f;
case 0x522732:c.instructions+=25;goto B522732;
case 0x522735:c.instructions+=24;goto B522735;
case 0x522737:c.instructions+=23;goto B522737;
case 0x52273a:c.instructions+=22;goto B52273a;
case 0x52273d:c.instructions+=21;goto B52273d;
case 0x52273f:c.instructions+=20;goto B52273f;
case 0x522742:c.instructions+=19;goto B522742;
case 0x522747:c.instructions+=18;goto B522747;
case 0x52274a:c.instructions+=17;goto B52274a;
case 0x52274d:c.instructions+=16;goto B52274d;
case 0x522750:c.instructions+=15;goto B522750;
case 0x522753:c.instructions+=14;goto B522753;
case 0x522756:c.instructions+=13;goto B522756;
case 0x522759:c.instructions+=12;goto B522759;
case 0x52275c:c.instructions+=11;goto B52275c;
case 0x52275f:c.instructions+=10;goto B52275f;
case 0x522762:c.instructions+=9;goto B522762;
case 0x522765:c.instructions+=8;goto B522765;
case 0x522768:c.instructions+=7;goto B522768;
case 0x52276b:c.instructions+=6;goto B52276b;
case 0x52276e:c.instructions+=5;goto B52276e;
case 0x522771:c.instructions+=4;goto B522771;
case 0x522777:c.instructions+=3;goto B522777;
case 0x52277d:c.instructions+=2;goto B52277d;
case 0x522780:c.instructions+=1;goto B522780;
case 0x522782:goto L522782;
case 0x522788:c.instructions+=2;goto B522788;
case 0x52278a:c.instructions+=1;goto B52278a;
case 0x52278c:goto L52278c;
case 0x522791:c.instructions+=2;goto B522791;
case 0x522796:c.instructions+=1;goto B522796;
case 0x522798:goto L522798;
case 0x52279b:c.instructions+=4;goto B52279b;
case 0x5227a0:c.instructions+=3;goto B5227a0;
case 0x5227a1:c.instructions+=2;goto B5227a1;
case 0x5227a4:c.instructions+=1;goto B5227a4;
case 0x5227a9:goto L5227a9;
case 0x5227ab:c.instructions+=10;goto B5227ab;
case 0x5227ad:c.instructions+=9;goto B5227ad;
case 0x5227af:c.instructions+=8;goto B5227af;
case 0x5227b2:c.instructions+=7;goto B5227b2;
case 0x5227b4:c.instructions+=6;goto B5227b4;
case 0x5227b5:c.instructions+=5;goto B5227b5;
case 0x5227b8:c.instructions+=4;goto B5227b8;
case 0x5227bf:c.instructions+=3;goto B5227bf;
case 0x5227c1:c.instructions+=2;goto B5227c1;
case 0x5227c2:c.instructions+=1;goto B5227c2;
case 0x5227c5:goto L5227c5;
case 0x5227c8:c.instructions+=7;goto B5227c8;
case 0x5227cb:c.instructions+=6;goto B5227cb;
case 0x5227cd:c.instructions+=5;goto B5227cd;
case 0x5227ce:c.instructions+=4;goto B5227ce;
case 0x5227d5:c.instructions+=3;goto B5227d5;
case 0x5227d7:c.instructions+=2;goto B5227d7;
case 0x5227d8:c.instructions+=1;goto B5227d8;
case 0x5227e0:goto L5227e0;
case 0x5227e2:c.instructions+=11;goto B5227e2;
case 0x5227e7:c.instructions+=10;goto B5227e7;
case 0x5227ed:c.instructions+=9;goto B5227ed;
case 0x5227ee:c.instructions+=8;goto B5227ee;
case 0x5227f5:c.instructions+=7;goto B5227f5;
case 0x5227f6:c.instructions+=6;goto B5227f6;
case 0x5227f7:c.instructions+=5;goto B5227f7;
case 0x5227f8:c.instructions+=4;goto B5227f8;
case 0x5227f9:c.instructions+=3;goto B5227f9;
case 0x5227fb:c.instructions+=2;goto B5227fb;
case 0x5227fd:c.instructions+=1;goto B5227fd;
case 0x522802:goto L522802;
case 0x522804:c.instructions+=4;goto B522804;
case 0x522807:c.instructions+=3;goto B522807;
case 0x522809:c.instructions+=2;goto B522809;
case 0x52280e:c.instructions+=1;goto B52280e;
case 0x522810:goto L522810;
case 0x522817:c.instructions+=17;goto B522817;
case 0x52281a:c.instructions+=16;goto B52281a;
case 0x52281d:c.instructions+=15;goto B52281d;
case 0x522820:c.instructions+=14;goto B522820;
case 0x522823:c.instructions+=13;goto B522823;
case 0x522827:c.instructions+=12;goto B522827;
case 0x52282a:c.instructions+=11;goto B52282a;
case 0x52282d:c.instructions+=10;goto B52282d;
case 0x522834:c.instructions+=9;goto B522834;
case 0x522837:c.instructions+=8;goto B522837;
case 0x52283a:c.instructions+=7;goto B52283a;
case 0x52283d:c.instructions+=6;goto B52283d;
case 0x522840:c.instructions+=5;goto B522840;
case 0x522843:c.instructions+=4;goto B522843;
case 0x522847:c.instructions+=3;goto B522847;
case 0x52284a:c.instructions+=2;goto B52284a;
case 0x522850:c.instructions+=1;goto B522850;
case 0x522852:goto L522852;
case 0x522854:goto L522854;
case 0x522856:c.instructions+=3;goto B522856;
case 0x522857:c.instructions+=2;goto B522857;
case 0x522859:c.instructions+=1;goto B522859;
case 0x52285c:goto L52285c;
case 0x52285e:c.instructions+=1;goto B52285e;
case 0x522863:goto L522863;
case 0x522866:c.instructions+=2;goto B522866;
case 0x522868:c.instructions+=1;goto B522868;
case 0x52286a:goto L52286a;
case 0x522871:c.instructions+=17;goto B522871;
case 0x522874:c.instructions+=16;goto B522874;
case 0x522877:c.instructions+=15;goto B522877;
case 0x52287a:c.instructions+=14;goto B52287a;
case 0x52287d:c.instructions+=13;goto B52287d;
case 0x522881:c.instructions+=12;goto B522881;
case 0x522884:c.instructions+=11;goto B522884;
case 0x522887:c.instructions+=10;goto B522887;
case 0x52288e:c.instructions+=9;goto B52288e;
case 0x522891:c.instructions+=8;goto B522891;
case 0x522894:c.instructions+=7;goto B522894;
case 0x522897:c.instructions+=6;goto B522897;
case 0x52289a:c.instructions+=5;goto B52289a;
case 0x52289d:c.instructions+=4;goto B52289d;
case 0x5228a1:c.instructions+=3;goto B5228a1;
case 0x5228a4:c.instructions+=2;goto B5228a4;
case 0x5228aa:c.instructions+=1;goto B5228aa;
case 0x5228ac:goto L5228ac;
case 0x5228ae:goto L5228ae;
case 0x5228b0:c.instructions+=3;goto B5228b0;
case 0x5228b1:c.instructions+=2;goto B5228b1;
case 0x5228b3:c.instructions+=1;goto B5228b3;
case 0x5228b6:goto L5228b6;
case 0x5228b8:c.instructions+=1;goto B5228b8;
case 0x5228bd:goto L5228bd;
case 0x5228c0:c.instructions+=2;goto B5228c0;
case 0x5228c2:c.instructions+=1;goto B5228c2;
case 0x5228c4:goto L5228c4;
case 0x5228cb:c.instructions+=17;goto B5228cb;
case 0x5228ce:c.instructions+=16;goto B5228ce;
case 0x5228d1:c.instructions+=15;goto B5228d1;
case 0x5228d4:c.instructions+=14;goto B5228d4;
case 0x5228d7:c.instructions+=13;goto B5228d7;
case 0x5228db:c.instructions+=12;goto B5228db;
case 0x5228de:c.instructions+=11;goto B5228de;
case 0x5228e1:c.instructions+=10;goto B5228e1;
case 0x5228e8:c.instructions+=9;goto B5228e8;
case 0x5228eb:c.instructions+=8;goto B5228eb;
case 0x5228ee:c.instructions+=7;goto B5228ee;
case 0x5228f1:c.instructions+=6;goto B5228f1;
case 0x5228f4:c.instructions+=5;goto B5228f4;
case 0x5228f7:c.instructions+=4;goto B5228f7;
case 0x5228fb:c.instructions+=3;goto B5228fb;
case 0x5228fe:c.instructions+=2;goto B5228fe;
case 0x522904:c.instructions+=1;goto B522904;
case 0x522906:goto L522906;
case 0x522908:goto L522908;
case 0x52290a:c.instructions+=3;goto B52290a;
case 0x52290b:c.instructions+=2;goto B52290b;
case 0x52290d:c.instructions+=1;goto B52290d;
case 0x522910:goto L522910;
case 0x522912:c.instructions+=1;goto B522912;
case 0x522917:goto L522917;
case 0x52291a:c.instructions+=4;goto B52291a;
case 0x52291e:c.instructions+=3;goto B52291e;
case 0x522920:c.instructions+=2;goto B522920;
case 0x522924:c.instructions+=1;goto B522924;
case 0x522926:goto L522926;
case 0x522927:c.instructions+=4;goto B522927;
case 0x52292c:c.instructions+=3;goto B52292c;
case 0x522931:c.instructions+=2;goto B522931;
case 0x522933:c.instructions+=1;goto B522933;
case 0x522938:goto L522938;
case 0x52293a:goto L52293a;
case 0x52293c:goto L52293c;
case 0x52293e:c.instructions+=4;goto B52293e;
case 0x52293f:c.instructions+=3;goto B52293f;
case 0x522941:c.instructions+=2;goto B522941;
case 0x522949:c.instructions+=1;goto B522949;
case 0x52294c:goto L52294c;
case 0x522951:c.instructions+=1;goto B522951;
case 0x522956:goto L522956;
case 0x522958:c.instructions+=1;goto B522958;
case 0x52295a:goto L52295a;
case 0x52295c:c.instructions+=1;goto B52295c;
case 0x522961:goto L522961;
case 0x522964:c.instructions+=2;goto B522964;
case 0x522966:c.instructions+=1;goto B522966;
case 0x522968:goto L522968;
case 0x522969:c.instructions+=4;goto B522969;
case 0x52296e:c.instructions+=3;goto B52296e;
case 0x522973:c.instructions+=2;goto B522973;
case 0x522975:c.instructions+=1;goto B522975;
case 0x52297a:goto L52297a;
case 0x52297c:goto L52297c;
case 0x52297e:goto L52297e;
case 0x522980:c.instructions+=3;goto B522980;
case 0x522981:c.instructions+=2;goto B522981;
case 0x522983:c.instructions+=1;goto B522983;
case 0x522986:goto L522986;
case 0x522988:c.instructions+=1;goto B522988;
case 0x52298d:goto L52298d;
case 0x522990:c.instructions+=2;goto B522990;
case 0x522992:c.instructions+=1;goto B522992;
case 0x522994:goto L522994;
case 0x52299b:c.instructions+=17;goto B52299b;
case 0x52299e:c.instructions+=16;goto B52299e;
case 0x5229a1:c.instructions+=15;goto B5229a1;
case 0x5229a4:c.instructions+=14;goto B5229a4;
case 0x5229a7:c.instructions+=13;goto B5229a7;
case 0x5229ab:c.instructions+=12;goto B5229ab;
case 0x5229ae:c.instructions+=11;goto B5229ae;
case 0x5229b1:c.instructions+=10;goto B5229b1;
case 0x5229b8:c.instructions+=9;goto B5229b8;
case 0x5229bb:c.instructions+=8;goto B5229bb;
case 0x5229be:c.instructions+=7;goto B5229be;
case 0x5229c1:c.instructions+=6;goto B5229c1;
case 0x5229c4:c.instructions+=5;goto B5229c4;
case 0x5229c7:c.instructions+=4;goto B5229c7;
case 0x5229cb:c.instructions+=3;goto B5229cb;
case 0x5229d1:c.instructions+=2;goto B5229d1;
case 0x5229d5:c.instructions+=1;goto B5229d5;
case 0x5229d7:goto L5229d7;
case 0x5229d9:goto L5229d9;
case 0x5229db:c.instructions+=3;goto B5229db;
case 0x5229dc:c.instructions+=2;goto B5229dc;
case 0x5229de:c.instructions+=1;goto B5229de;
case 0x5229e1:goto L5229e1;
case 0x5229e5:c.instructions+=6;goto B5229e5;
case 0x5229e6:c.instructions+=5;goto B5229e6;
case 0x5229e7:c.instructions+=4;goto B5229e7;
case 0x5229e8:c.instructions+=3;goto B5229e8;
case 0x5229ef:c.instructions+=2;goto B5229ef;
case 0x5229f2:c.instructions+=1;goto B5229f2;
case 0x522a00:goto L522a00;
case 0x522a02:c.instructions+=28;goto B522a02;
case 0x522a06:c.instructions+=27;goto B522a06;
case 0x522a09:c.instructions+=26;goto B522a09;
case 0x522a0d:c.instructions+=25;goto B522a0d;
case 0x522a10:c.instructions+=24;goto B522a10;
case 0x522a14:c.instructions+=23;goto B522a14;
case 0x522a17:c.instructions+=22;goto B522a17;
case 0x522a1c:c.instructions+=21;goto B522a1c;
case 0x522a1f:c.instructions+=20;goto B522a1f;
case 0x522a22:c.instructions+=19;goto B522a22;
case 0x522a25:c.instructions+=18;goto B522a25;
case 0x522a28:c.instructions+=17;goto B522a28;
case 0x522a2c:c.instructions+=16;goto B522a2c;
case 0x522a2f:c.instructions+=15;goto B522a2f;
case 0x522a33:c.instructions+=14;goto B522a33;
case 0x522a35:c.instructions+=13;goto B522a35;
case 0x522a37:c.instructions+=12;goto B522a37;
case 0x522a3a:c.instructions+=11;goto B522a3a;
case 0x522a41:c.instructions+=10;goto B522a41;
case 0x522a48:c.instructions+=9;goto B522a48;
case 0x522a4f:c.instructions+=8;goto B522a4f;
case 0x522a52:c.instructions+=7;goto B522a52;
case 0x522a55:c.instructions+=6;goto B522a55;
case 0x522a5b:c.instructions+=5;goto B522a5b;
case 0x522a5e:c.instructions+=4;goto B522a5e;
case 0x522a61:c.instructions+=3;goto B522a61;
case 0x522a64:c.instructions+=2;goto B522a64;
case 0x522a67:c.instructions+=1;goto B522a67;
case 0x522a70:goto L522a70;
case 0x522a71:c.instructions+=12;goto B522a71;
case 0x522a73:c.instructions+=11;goto B522a73;
case 0x522a75:c.instructions+=10;goto B522a75;
case 0x522a7a:c.instructions+=9;goto B522a7a;
case 0x522a80:c.instructions+=8;goto B522a80;
case 0x522a81:c.instructions+=7;goto B522a81;
case 0x522a88:c.instructions+=6;goto B522a88;
case 0x522a89:c.instructions+=5;goto B522a89;
case 0x522a8a:c.instructions+=4;goto B522a8a;
case 0x522a8b:c.instructions+=3;goto B522a8b;
case 0x522a8d:c.instructions+=2;goto B522a8d;
case 0x522a8f:c.instructions+=1;goto B522a8f;
case 0x522a94:goto L522a94;
case 0x522a96:c.instructions+=6;goto B522a96;
case 0x522a99:c.instructions+=5;goto B522a99;
case 0x522a9c:c.instructions+=4;goto B522a9c;
case 0x522a9e:c.instructions+=3;goto B522a9e;
case 0x522aa0:c.instructions+=2;goto B522aa0;
case 0x522aa3:c.instructions+=1;goto B522aa3;
case 0x522aa5:goto L522aa5;
case 0x522aa6:c.instructions+=4;goto B522aa6;
case 0x522aa9:c.instructions+=3;goto B522aa9;
case 0x522aaa:c.instructions+=2;goto B522aaa;
case 0x522aaf:c.instructions+=1;goto B522aaf;
case 0x522ab4:goto L522ab4;
case 0x522ab7:c.instructions+=8;goto B522ab7;
case 0x522ab8:c.instructions+=7;goto B522ab8;
case 0x522abb:c.instructions+=6;goto B522abb;
case 0x522abd:c.instructions+=5;goto B522abd;
case 0x522abe:c.instructions+=4;goto B522abe;
case 0x522abf:c.instructions+=3;goto B522abf;
case 0x522ac0:c.instructions+=2;goto B522ac0;
case 0x522ac2:c.instructions+=1;goto B522ac2;
case 0x522ac7:goto L522ac7;
case 0x522ac8:goto L522ac8;
case 0x522aca:c.instructions+=4;goto B522aca;
case 0x522acb:c.instructions+=3;goto B522acb;
case 0x522acd:c.instructions+=2;goto B522acd;
case 0x522ad4:c.instructions+=1;goto B522ad4;
case 0x522ad7:goto L522ad7;
case 0x522ada:c.instructions+=6;goto B522ada;
case 0x522adb:c.instructions+=5;goto B522adb;
case 0x522adc:c.instructions+=4;goto B522adc;
case 0x522ae3:c.instructions+=3;goto B522ae3;
case 0x522ae5:c.instructions+=2;goto B522ae5;
case 0x522ae6:c.instructions+=1;goto B522ae6;
case 0x522af0:goto L522af0;
case 0x522af4:c.instructions+=13;goto B522af4;
case 0x522af8:c.instructions+=12;goto B522af8;
case 0x522af9:c.instructions+=11;goto B522af9;
case 0x522afa:c.instructions+=10;goto B522afa;
case 0x522afe:c.instructions+=9;goto B522afe;
case 0x522b00:c.instructions+=8;goto B522b00;
case 0x522b04:c.instructions+=7;goto B522b04;
case 0x522b05:c.instructions+=6;goto B522b05;
case 0x522b09:c.instructions+=5;goto B522b09;
case 0x522b0a:c.instructions+=4;goto B522b0a;
case 0x522b0b:c.instructions+=3;goto B522b0b;
case 0x522b0c:c.instructions+=2;goto B522b0c;
case 0x522b0e:c.instructions+=1;goto B522b0e;
case 0x522b13:goto L522b13;
case 0x522b17:c.instructions+=34;goto B522b17;
case 0x522b1b:c.instructions+=33;goto B522b1b;
case 0x522b1e:c.instructions+=32;goto B522b1e;
case 0x522b22:c.instructions+=31;goto B522b22;
case 0x522b24:c.instructions+=30;goto B522b24;
case 0x522b27:c.instructions+=29;goto B522b27;
case 0x522b2a:c.instructions+=28;goto B522b2a;
case 0x522b2d:c.instructions+=27;goto B522b2d;
case 0x522b31:c.instructions+=26;goto B522b31;
case 0x522b34:c.instructions+=25;goto B522b34;
case 0x522b3a:c.instructions+=24;goto B522b3a;
case 0x522b3d:c.instructions+=23;goto B522b3d;
case 0x522b40:c.instructions+=22;goto B522b40;
case 0x522b43:c.instructions+=21;goto B522b43;
case 0x522b49:c.instructions+=20;goto B522b49;
case 0x522b4f:c.instructions+=19;goto B522b4f;
case 0x522b55:c.instructions+=18;goto B522b55;
case 0x522b5b:c.instructions+=17;goto B522b5b;
case 0x522b61:c.instructions+=16;goto B522b61;
case 0x522b67:c.instructions+=15;goto B522b67;
case 0x522b6d:c.instructions+=14;goto B522b6d;
case 0x522b73:c.instructions+=13;goto B522b73;
case 0x522b79:c.instructions+=12;goto B522b79;
case 0x522b7f:c.instructions+=11;goto B522b7f;
case 0x522b85:c.instructions+=10;goto B522b85;
case 0x522b88:c.instructions+=9;goto B522b88;
case 0x522b8e:c.instructions+=8;goto B522b8e;
case 0x522b95:c.instructions+=7;goto B522b95;
case 0x522b9f:c.instructions+=6;goto B522b9f;
case 0x522ba6:c.instructions+=5;goto B522ba6;
case 0x522ba9:c.instructions+=4;goto B522ba9;
case 0x522baf:c.instructions+=3;goto B522baf;
case 0x522bb1:c.instructions+=2;goto B522bb1;
case 0x522bb2:c.instructions+=1;goto B522bb2;
case 0x522bc0:goto L522bc0;
case 0x522bc2:c.instructions+=3;goto B522bc2;
case 0x522bc5:c.instructions+=2;goto B522bc5;
case 0x522bc6:c.instructions+=1;goto B522bc6;
case 0x522bcb:goto L522bcb;
case 0x522bce:c.instructions+=2;goto B522bce;
case 0x522bcf:c.instructions+=1;goto B522bcf;
case 0x522bd4:goto L522bd4;
case 0x522bd7:c.instructions+=2;goto B522bd7;
case 0x522bd8:c.instructions+=1;goto B522bd8;
case 0x522bdd:goto L522bdd;
case 0x522be0:c.instructions+=2;goto B522be0;
case 0x522be1:c.instructions+=1;goto B522be1;
case 0x522be6:goto L522be6;
case 0x522be9:c.instructions+=3;goto B522be9;
case 0x522bec:c.instructions+=2;goto B522bec;
case 0x522bee:c.instructions+=1;goto B522bee;
case 0x522bf0:goto L522bf0;
case 0x522bf1:c.instructions+=1;goto B522bf1;
case 0x522bf6:goto L522bf6;
case 0x522bf9:goto L522bf9;
case 0x522bfc:c.instructions+=2;goto B522bfc;
case 0x522bfd:c.instructions+=1;goto B522bfd;
case 0x522c02:goto L522c02;
case 0x522c05:c.instructions+=2;goto B522c05;
case 0x522c06:c.instructions+=1;goto B522c06;
case 0x522c0b:goto L522c0b;
case 0x522c0e:c.instructions+=3;goto B522c0e;
case 0x522c11:c.instructions+=2;goto B522c11;
case 0x522c13:c.instructions+=1;goto B522c13;
case 0x522c15:goto L522c15;
case 0x522c16:c.instructions+=1;goto B522c16;
case 0x522c1b:goto L522c1b;
case 0x522c1e:goto L522c1e;
case 0x522c21:c.instructions+=3;goto B522c21;
case 0x522c23:c.instructions+=2;goto B522c23;
case 0x522c25:c.instructions+=1;goto B522c25;
case 0x522c28:goto L522c28;
case 0x522c30:goto L522c30;
case 0x522c32:c.instructions+=3;goto B522c32;
case 0x522c35:c.instructions+=2;goto B522c35;
case 0x522c36:c.instructions+=1;goto B522c36;
case 0x522c3b:goto L522c3b;
case 0x522c3e:c.instructions+=2;goto B522c3e;
case 0x522c3f:c.instructions+=1;goto B522c3f;
case 0x522c44:goto L522c44;
case 0x522c47:c.instructions+=2;goto B522c47;
case 0x522c48:c.instructions+=1;goto B522c48;
case 0x522c4d:goto L522c4d;
case 0x522c50:c.instructions+=2;goto B522c50;
case 0x522c51:c.instructions+=1;goto B522c51;
case 0x522c56:goto L522c56;
case 0x522c59:c.instructions+=3;goto B522c59;
case 0x522c5c:c.instructions+=2;goto B522c5c;
case 0x522c5e:c.instructions+=1;goto B522c5e;
case 0x522c60:goto L522c60;
case 0x522c61:c.instructions+=1;goto B522c61;
case 0x522c66:goto L522c66;
case 0x522c69:goto L522c69;
case 0x522c6c:c.instructions+=2;goto B522c6c;
case 0x522c6d:c.instructions+=1;goto B522c6d;
case 0x522c72:goto L522c72;
case 0x522c75:c.instructions+=2;goto B522c75;
case 0x522c76:c.instructions+=1;goto B522c76;
case 0x522c7b:goto L522c7b;
case 0x522c7e:c.instructions+=3;goto B522c7e;
case 0x522c81:c.instructions+=2;goto B522c81;
case 0x522c83:c.instructions+=1;goto B522c83;
case 0x522c85:goto L522c85;
case 0x522c86:c.instructions+=1;goto B522c86;
case 0x522c8b:goto L522c8b;
case 0x522c8e:goto L522c8e;
case 0x522c91:c.instructions+=3;goto B522c91;
case 0x522c93:c.instructions+=2;goto B522c93;
case 0x522c95:c.instructions+=1;goto B522c95;
case 0x522c98:goto L522c98;
case 0x522ca0:goto L522ca0;
case 0x522ca1:c.instructions+=5;goto B522ca1;
case 0x522ca2:c.instructions+=4;goto B522ca2;
case 0x522ca3:c.instructions+=3;goto B522ca3;
case 0x522ca4:c.instructions+=2;goto B522ca4;
case 0x522ca6:c.instructions+=1;goto B522ca6;
case 0x522cab:goto L522cab;
case 0x522cae:c.instructions+=2;goto B522cae;
case 0x522cb1:c.instructions+=1;goto B522cb1;
case 0x522cb4:goto L522cb4;
case 0x522cb7:c.instructions+=3;goto B522cb7;
case 0x522cb9:c.instructions+=2;goto B522cb9;
case 0x522cbb:c.instructions+=1;goto B522cbb;
case 0x522cbd:goto L522cbd;
case 0x522cc0:c.instructions+=2;goto B522cc0;
case 0x522cc2:c.instructions+=1;goto B522cc2;
case 0x522cc4:goto L522cc4;
case 0x522cc9:c.instructions+=1;goto B522cc9;
case 0x522cce:goto L522cce;
case 0x522cd1:c.instructions+=3;goto B522cd1;
case 0x522cd4:c.instructions+=2;goto B522cd4;
case 0x522cd6:c.instructions+=1;goto B522cd6;
case 0x522cd8:goto L522cd8;
case 0x522cdb:c.instructions+=2;goto B522cdb;
case 0x522cdd:c.instructions+=1;goto B522cdd;
case 0x522cdf:goto L522cdf;
case 0x522ce1:goto L522ce1;
case 0x522ce3:c.instructions+=1;goto B522ce3;
case 0x522ce5:goto L522ce5;
case 0x522ce8:c.instructions+=1;goto B522ce8;
case 0x522cea:goto L522cea;
case 0x522cec:c.instructions+=2;goto B522cec;
case 0x522cef:c.instructions+=1;goto B522cef;
case 0x522cf4:goto L522cf4;
case 0x522cf7:c.instructions+=1;goto B522cf7;
case 0x522cfa:goto L522cfa;
case 0x522cfd:goto L522cfd;
case 0x522d00:c.instructions+=2;goto B522d00;
case 0x522d02:c.instructions+=1;goto B522d02;
case 0x522d04:goto L522d04;
case 0x522d07:c.instructions+=2;goto B522d07;
case 0x522d09:c.instructions+=1;goto B522d09;
case 0x522d0b:goto L522d0b;
case 0x522d10:goto L522d10;
case 0x522d15:c.instructions+=1;goto B522d15;
case 0x522d1a:goto L522d1a;
case 0x522d1d:c.instructions+=3;goto B522d1d;
case 0x522d20:c.instructions+=2;goto B522d20;
case 0x522d22:c.instructions+=1;goto B522d22;
case 0x522d24:goto L522d24;
case 0x522d27:c.instructions+=2;goto B522d27;
case 0x522d29:c.instructions+=1;goto B522d29;
case 0x522d2b:goto L522d2b;
case 0x522d2d:goto L522d2d;
case 0x522d2f:c.instructions+=1;goto B522d2f;
case 0x522d31:goto L522d31;
case 0x522d34:c.instructions+=1;goto B522d34;
case 0x522d36:goto L522d36;
case 0x522d38:c.instructions+=2;goto B522d38;
case 0x522d3b:c.instructions+=1;goto B522d3b;
case 0x522d40:goto L522d40;
case 0x522d43:c.instructions+=1;goto B522d43;
case 0x522d46:goto L522d46;
case 0x522d49:goto L522d49;
case 0x522d4c:c.instructions+=6;goto B522d4c;
case 0x522d4d:c.instructions+=5;goto B522d4d;
case 0x522d4e:c.instructions+=4;goto B522d4e;
case 0x522d50:c.instructions+=3;goto B522d50;
case 0x522d51:c.instructions+=2;goto B522d51;
case 0x522d52:c.instructions+=1;goto B522d52;
case 0x522d54:goto L522d54;
case 0x522d56:c.instructions+=3;goto B522d56;
case 0x522d5b:c.instructions+=2;goto B522d5b;
case 0x522d5c:c.instructions+=1;goto B522d5c;
case 0x522d61:goto L522d61;
case 0x522d64:goto L522d64;
case 0x522d70:goto L522d70;
case 0x522d71:c.instructions+=3;goto B522d71;
case 0x522d74:c.instructions+=2;goto B522d74;
case 0x522d76:c.instructions+=1;goto B522d76;
case 0x522d78:goto L522d78;
case 0x522d79:c.instructions+=3;goto B522d79;
case 0x522d7c:c.instructions+=2;goto B522d7c;
case 0x522d7e:c.instructions+=1;goto B522d7e;
case 0x522d80:goto L522d80;
case 0x522d85:c.instructions+=1;goto B522d85;
case 0x522d8a:goto L522d8a;
case 0x522d8d:c.instructions+=3;goto B522d8d;
case 0x522d90:c.instructions+=2;goto B522d90;
case 0x522d92:c.instructions+=1;goto B522d92;
case 0x522d94:goto L522d94;
case 0x522d97:c.instructions+=2;goto B522d97;
case 0x522d99:c.instructions+=1;goto B522d99;
case 0x522d9b:goto L522d9b;
case 0x522d9c:c.instructions+=2;goto B522d9c;
case 0x522d9d:c.instructions+=1;goto B522d9d;
case 0x522d9e:goto L522d9e;
case 0x522da0:c.instructions+=1;goto B522da0;
case 0x522da2:goto L522da2;
case 0x522da5:c.instructions+=1;goto B522da5;
case 0x522da7:goto L522da7;
case 0x522da9:c.instructions+=2;goto B522da9;
case 0x522dac:c.instructions+=1;goto B522dac;
case 0x522db1:goto L522db1;
case 0x522db4:c.instructions+=1;goto B522db4;
case 0x522dbb:goto L522dbb;
case 0x522dc2:goto L522dc2;
case 0x522dc3:goto L522dc3;
case 0x522dc4:c.instructions+=1;goto B522dc4;
case 0x522dd0:goto L522dd0;
case 0x522dd1:c.instructions+=3;goto B522dd1;
case 0x522dd4:c.instructions+=2;goto B522dd4;
case 0x522dd6:c.instructions+=1;goto B522dd6;
case 0x522dd8:goto L522dd8;
case 0x522dd9:c.instructions+=3;goto B522dd9;
case 0x522ddc:c.instructions+=2;goto B522ddc;
case 0x522dde:c.instructions+=1;goto B522dde;
case 0x522de0:goto L522de0;
case 0x522de5:c.instructions+=1;goto B522de5;
case 0x522dea:goto L522dea;
case 0x522ded:c.instructions+=3;goto B522ded;
case 0x522df0:c.instructions+=2;goto B522df0;
case 0x522df2:c.instructions+=1;goto B522df2;
case 0x522df4:goto L522df4;
case 0x522df7:c.instructions+=2;goto B522df7;
case 0x522df9:c.instructions+=1;goto B522df9;
case 0x522dfb:goto L522dfb;
case 0x522dfc:c.instructions+=2;goto B522dfc;
case 0x522dfd:c.instructions+=1;goto B522dfd;
case 0x522dfe:goto L522dfe;
case 0x522e00:c.instructions+=1;goto B522e00;
case 0x522e02:goto L522e02;
case 0x522e05:c.instructions+=1;goto B522e05;
case 0x522e07:goto L522e07;
case 0x522e09:c.instructions+=2;goto B522e09;
case 0x522e0c:c.instructions+=1;goto B522e0c;
case 0x522e11:goto L522e11;
case 0x522e14:c.instructions+=1;goto B522e14;
case 0x522e1b:goto L522e1b;
case 0x522e22:goto L522e22;
case 0x522e23:goto L522e23;
case 0x522e24:c.instructions+=1;goto B522e24;
case 0x522e30:goto L522e30;
case 0x522e31:c.instructions+=6;goto B522e31;
case 0x522e34:c.instructions+=5;goto B522e34;
case 0x522e35:c.instructions+=4;goto B522e35;
case 0x522e37:c.instructions+=3;goto B522e37;
case 0x522e39:c.instructions+=2;goto B522e39;
case 0x522e3d:c.instructions+=1;goto B522e3d;
case 0x522e3f:goto L522e3f;
case 0x522e40:c.instructions+=2;goto B522e40;
case 0x522e41:c.instructions+=1;goto B522e41;
case 0x522e43:goto L522e43;
case 0x522e47:c.instructions+=1;goto B522e47;
case 0x522e50:goto L522e50;
case 0x522e53:c.instructions+=5;goto B522e53;
case 0x522e56:c.instructions+=4;goto B522e56;
case 0x522e5c:c.instructions+=3;goto B522e5c;
case 0x522e5d:c.instructions+=2;goto B522e5d;
case 0x522e5e:c.instructions+=1;goto B522e5e;
case 0x522e63:goto L522e63;
case 0x522e65:c.instructions+=1;goto B522e65;
case 0x522e67:goto L522e67;
case 0x522e6a:c.instructions+=3;goto B522e6a;
case 0x522e70:c.instructions+=2;goto B522e70;
case 0x522e72:c.instructions+=1;goto B522e72;
case 0x522e74:goto L522e74;
case 0x522e75:c.instructions+=2;goto B522e75;
case 0x522e76:c.instructions+=1;goto B522e76;
case 0x522e7b:goto L522e7b;
case 0x522e7d:goto L522e7d;
case 0x522e7f:c.instructions+=2;goto B522e7f;
case 0x522e80:c.instructions+=1;goto B522e80;
case 0x522e85:goto L522e85;
case 0x522e87:goto L522e87;
case 0x522e8d:goto L522e8d;
case 0x522e91:c.instructions+=5;goto B522e91;
case 0x522e94:c.instructions+=4;goto B522e94;
case 0x522e96:c.instructions+=3;goto B522e96;
case 0x522e99:c.instructions+=2;goto B522e99;
case 0x522e9b:c.instructions+=1;goto B522e9b;
case 0x522e9d:goto L522e9d;
case 0x522e9e:c.instructions+=1;goto B522e9e;
case 0x522e9f:goto L522e9f;
case 0x522ea0:c.instructions+=2;goto B522ea0;
case 0x522ea1:c.instructions+=1;goto B522ea1;
case 0x522eb0:goto L522eb0;
case 0x522eb1:c.instructions+=5;goto B522eb1;
case 0x522eb3:c.instructions+=4;goto B522eb3;
case 0x522eb6:c.instructions+=3;goto B522eb6;
case 0x522eb9:c.instructions+=2;goto B522eb9;
case 0x522ebb:c.instructions+=1;goto B522ebb;
case 0x522ebd:goto L522ebd;
case 0x522ec1:c.instructions+=3;goto B522ec1;
case 0x522ec4:c.instructions+=2;goto B522ec4;
case 0x522ec7:c.instructions+=1;goto B522ec7;
case 0x522ec9:goto L522ec9;
case 0x522ecb:c.instructions+=2;goto B522ecb;
case 0x522ecd:c.instructions+=1;goto B522ecd;
case 0x522ecf:goto L522ecf;
case 0x522ed1:c.instructions+=1;goto B522ed1;
case 0x522ed3:goto L522ed3;
case 0x522ed6:c.instructions+=1;goto B522ed6;
case 0x522ed8:goto L522ed8;
case 0x522edb:c.instructions+=2;goto B522edb;
case 0x522edd:c.instructions+=1;goto B522edd;
case 0x522edf:goto L522edf;
case 0x522ee2:goto L522ee2;
case 0x522ee5:goto L522ee5;
case 0x522ee8:c.instructions+=1;goto B522ee8;
case 0x522eea:goto L522eea;
case 0x522eed:c.instructions+=1;goto B522eed;
case 0x522ef2:goto L522ef2;
case 0x522ef5:c.instructions+=2;goto B522ef5;
case 0x522ef8:c.instructions+=1;goto B522ef8;
case 0x522efd:goto L522efd;
case 0x522eff:c.instructions+=2;goto B522eff;
case 0x522f00:c.instructions+=1;goto B522f00;
case 0x522f03:goto L522f03;
case 0x522f05:c.instructions+=2;goto B522f05;
case 0x522f06:c.instructions+=1;goto B522f06;
case 0x522f10:goto L522f10;
case 0x522f11:c.instructions+=7;goto B522f11;
case 0x522f13:c.instructions+=6;goto B522f13;
case 0x522f14:c.instructions+=5;goto B522f14;
case 0x522f16:c.instructions+=4;goto B522f16;
case 0x522f19:c.instructions+=3;goto B522f19;
case 0x522f1c:c.instructions+=2;goto B522f1c;
case 0x522f1e:c.instructions+=1;goto B522f1e;
case 0x522f20:goto L522f20;
case 0x522f23:c.instructions+=2;goto B522f23;
case 0x522f26:c.instructions+=1;goto B522f26;
case 0x522f28:goto L522f28;
case 0x522f2b:c.instructions+=2;goto B522f2b;
case 0x522f2e:c.instructions+=1;goto B522f2e;
case 0x522f33:goto L522f33;
case 0x522f35:goto L522f35;
case 0x522f38:c.instructions+=1;goto B522f38;
case 0x522f3a:goto L522f3a;
case 0x522f3d:c.instructions+=2;goto B522f3d;
case 0x522f40:c.instructions+=1;goto B522f40;
case 0x522f45:goto L522f45;
case 0x522f47:c.instructions+=1;goto B522f47;
case 0x522f49:goto L522f49;
case 0x522f4c:c.instructions+=10;goto B522f4c;
case 0x522f4f:c.instructions+=9;goto B522f4f;
case 0x522f52:c.instructions+=8;goto B522f52;
case 0x522f55:c.instructions+=7;goto B522f55;
case 0x522f56:c.instructions+=6;goto B522f56;
case 0x522f57:c.instructions+=5;goto B522f57;
case 0x522f58:c.instructions+=4;goto B522f58;
case 0x522f5b:c.instructions+=3;goto B522f5b;
case 0x522f5c:c.instructions+=2;goto B522f5c;
case 0x522f61:c.instructions+=1;goto B522f61;
case 0x522f66:goto L522f66;
case 0x522f68:c.instructions+=2;goto B522f68;
case 0x522f6a:c.instructions+=1;goto B522f6a;
case 0x522f6d:goto L522f6d;
case 0x522f6f:c.instructions+=2;goto B522f6f;
case 0x522f71:c.instructions+=1;goto B522f71;
case 0x522f74:goto L522f74;
case 0x522f76:c.instructions+=3;goto B522f76;
case 0x522f77:c.instructions+=2;goto B522f77;
case 0x522f78:c.instructions+=1;goto B522f78;
case 0x522f7b:goto L522f7b;
case 0x522f7d:c.instructions+=3;goto B522f7d;
case 0x522f7e:c.instructions+=2;goto B522f7e;
case 0x522f7f:c.instructions+=1;goto B522f7f;
case 0x522f90:goto L522f90;
case 0x522f93:c.instructions+=8;goto B522f93;
case 0x522f99:c.instructions+=7;goto B522f99;
case 0x522f9a:c.instructions+=6;goto B522f9a;
case 0x522f9b:c.instructions+=5;goto B522f9b;
case 0x522f9d:c.instructions+=4;goto B522f9d;
case 0x522fa0:c.instructions+=3;goto B522fa0;
case 0x522fa2:c.instructions+=2;goto B522fa2;
case 0x522fa6:c.instructions+=1;goto B522fa6;
case 0x522fa8:goto L522fa8;
case 0x522fae:c.instructions+=3;goto B522fae;
case 0x522fb4:c.instructions+=2;goto B522fb4;
case 0x522fb8:c.instructions+=1;goto B522fb8;
case 0x522fc0:goto L522fc0;
case 0x522fc3:c.instructions+=6;goto B522fc3;
case 0x522fc6:c.instructions+=5;goto B522fc6;
case 0x522fca:c.instructions+=4;goto B522fca;
case 0x522fcc:c.instructions+=3;goto B522fcc;
case 0x522fce:c.instructions+=2;goto B522fce;
case 0x522fd1:c.instructions+=1;goto B522fd1;
case 0x522fd3:goto L522fd3;
case 0x522fd5:c.instructions+=7;goto B522fd5;
case 0x522fd7:c.instructions+=6;goto B522fd7;
case 0x522fdb:c.instructions+=5;goto B522fdb;
case 0x522fdd:c.instructions+=4;goto B522fdd;
case 0x522fdf:c.instructions+=3;goto B522fdf;
case 0x522fe1:c.instructions+=2;goto B522fe1;
case 0x522fe4:c.instructions+=1;goto B522fe4;
case 0x522fe6:goto L522fe6;
case 0x522fe9:c.instructions+=1;goto B522fe9;
case 0x522feb:goto L522feb;
case 0x522fed:c.instructions+=2;goto B522fed;
case 0x522fef:c.instructions+=1;goto B522fef;
case 0x522ff2:goto L522ff2;
case 0x522ff4:c.instructions+=3;goto B522ff4;
case 0x522ff6:c.instructions+=2;goto B522ff6;
case 0x522ff9:c.instructions+=1;goto B522ff9;
case 0x522ffc:goto L522ffc;
default:missing_instruction(c.pc);}
B522001:L522001:{c.instructions+=22;NFSU2_TR(0x522001);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522004:{NFSU2_TR(0x522004);
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
B522006:{NFSU2_TR(0x522006);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522009:{NFSU2_TR(0x522009);
w4(R+8,u32(0x3f800000ull));
}
B52200e:{NFSU2_TR(0x52200e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522011:{NFSU2_TR(0x522011);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522014:{NFSU2_TR(0x522014);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522017:{NFSU2_TR(0x522017);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52201a:{NFSU2_TR(0x52201a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52201d:{NFSU2_TR(0x52201d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522020:{NFSU2_TR(0x522020);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522023:{NFSU2_TR(0x522023);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522026:{NFSU2_TR(0x522026);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B52202a:{NFSU2_TR(0x52202a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52202d:{NFSU2_TR(0x52202d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522031:{NFSU2_TR(0x522031);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B522035:{NFSU2_TR(0x522035);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B522039:{NFSU2_TR(0x522039);
u8 U[4];
w4(U+0,u32(0x79b604ull));
s4(u32(r4(R+0)),r4(U+0));
}
B52203f:{NFSU2_TR(0x52203f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522042:{NFSU2_TR(0x522042);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B522046:{NFSU2_TR(0x522046);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522049:{NFSU2_TR(0x522049);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522050:L522050:{c.instructions+=4;NFSU2_TR(0x522050);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522051:{NFSU2_TR(0x522051);
__builtin_memmove((R+20),(R+16),4);
}
B522053:{NFSU2_TR(0x522053);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B52205a:{NFSU2_TR(0x52205a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52206d;}}
}
B52205c:L52205c:{c.instructions+=4;NFSU2_TR(0x52205c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52205f:{NFSU2_TR(0x52205f);
__builtin_memmove(gp(0x83899c),(R+0),4);
}
B522064:{NFSU2_TR(0x522064);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522067:{NFSU2_TR(0x522067);
__builtin_memmove(gp(0x8389a0),(R+4),4);
}
B52206d:L52206d:{c.instructions+=2;NFSU2_TR(0x52206d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52206e:{NFSU2_TR(0x52206e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522080:L522080:{c.instructions+=25;NFSU2_TR(0x522080);
__builtin_memmove((R+0),(R+4),4);
}
B522082:{NFSU2_TR(0x522082);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522086:{NFSU2_TR(0x522086);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522089:{NFSU2_TR(0x522089);
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
B52208b:{NFSU2_TR(0x52208b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52208e:{NFSU2_TR(0x52208e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522091:{NFSU2_TR(0x522091);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522094:{NFSU2_TR(0x522094);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522097:{NFSU2_TR(0x522097);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52209a:{NFSU2_TR(0x52209a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52209d:{NFSU2_TR(0x52209d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5220a1:{NFSU2_TR(0x5220a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5220a4:{NFSU2_TR(0x5220a4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5220a8:{NFSU2_TR(0x5220a8);
w1(R+8,u8(0x1ull));
}
B5220aa:{NFSU2_TR(0x5220aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5220ad:{NFSU2_TR(0x5220ad);
w4(R+4,u32(0x3f800000ull));
}
B5220b2:{NFSU2_TR(0x5220b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5220b5:{NFSU2_TR(0x5220b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5220b8:{NFSU2_TR(0x5220b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5220bb:{NFSU2_TR(0x5220bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5220be:{NFSU2_TR(0x5220be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5220c1:{NFSU2_TR(0x5220c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5220c4:{NFSU2_TR(0x5220c4);
u8 U[4];
w4(U+0,u32(0x79b6ecull));
s4(u32(r4(R+0)),r4(U+0));
}
B5220ca:{NFSU2_TR(0x5220ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5220cd:{NFSU2_TR(0x5220cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5220d0:L5220d0:{c.instructions+=27;NFSU2_TR(0x5220d0);
__builtin_memmove((R+0),(R+4),4);
}
B5220d2:{NFSU2_TR(0x5220d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5220d6:{NFSU2_TR(0x5220d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5220d9:{NFSU2_TR(0x5220d9);
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
B5220db:{NFSU2_TR(0x5220db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5220de:{NFSU2_TR(0x5220de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5220e1:{NFSU2_TR(0x5220e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5220e4:{NFSU2_TR(0x5220e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5220e7:{NFSU2_TR(0x5220e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5220ea:{NFSU2_TR(0x5220ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5220ed:{NFSU2_TR(0x5220ed);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5220f1:{NFSU2_TR(0x5220f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5220f4:{NFSU2_TR(0x5220f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5220f8:{NFSU2_TR(0x5220f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5220fb:{NFSU2_TR(0x5220fb);
w4(R+4,u32(0x3f800000ull));
}
B522100:{NFSU2_TR(0x522100);
w1(R+8,u8(0x1ull));
}
B522102:{NFSU2_TR(0x522102);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522105:{NFSU2_TR(0x522105);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522108:{NFSU2_TR(0x522108);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52210b:{NFSU2_TR(0x52210b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52210e:{NFSU2_TR(0x52210e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522112:{NFSU2_TR(0x522112);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522115:{NFSU2_TR(0x522115);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522118:{NFSU2_TR(0x522118);
u8 U[4];
w4(U+0,u32(0x79b6f4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B52211e:{NFSU2_TR(0x52211e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522121:{NFSU2_TR(0x522121);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522124:{NFSU2_TR(0x522124);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522130:L522130:{c.instructions+=8;NFSU2_TR(0x522130);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522131:{NFSU2_TR(0x522131);
__builtin_memmove((R+20),(R+16),4);
}
B522133:{NFSU2_TR(0x522133);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522134:{NFSU2_TR(0x522134);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522135:{NFSU2_TR(0x522135);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B522138:{NFSU2_TR(0x522138);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52213b:{NFSU2_TR(0x52213b);
__builtin_memmove((R+12),(R+4),4);
}
B52213d:{NFSU2_TR(0x52213d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L522236;}}
}
B522143:L522143:{c.instructions+=2;NFSU2_TR(0x522143);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B522146:{NFSU2_TR(0x522146);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L522236;}}
}
B52214c:L52214c:{c.instructions+=3;NFSU2_TR(0x52214c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52214d:{NFSU2_TR(0x52214d);
w4(R+4,u32(0x838980ull));
}
B522152:{NFSU2_TR(0x522152);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522157ull));
TAIL_STATIC(0x521580u,521);
}
B522157:L522157:{c.instructions+=2;NFSU2_TR(0x522157);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B522159:{NFSU2_TR(0x522159);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5221f5;}}
}
B52215f:L52215f:{c.instructions+=3;NFSU2_TR(0x52215f);
u8 U[4];
w4(U+0,u32(0xa9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522164:{NFSU2_TR(0x522164);
w4(R+4,u32(0x838980ull));
}
B522169:{NFSU2_TR(0x522169);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52216eull));
TAIL_STATIC(0x50ee90u,50e);
}
B52216e:L52216e:{c.instructions+=2;NFSU2_TR(0x52216e);
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
B522170:{NFSU2_TR(0x522170);
if(r1(R+518)){{goto L522180;}}
}
B522172:L522172:{c.instructions+=2;NFSU2_TR(0x522172);
w4(R+4,u32(0x838980ull));
}
B522177:{NFSU2_TR(0x522177);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52217cull));
TAIL_STATIC(0x50ef10u,50e);
}
B52217c:L52217c:{c.instructions+=2;NFSU2_TR(0x52217c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52217e:{NFSU2_TR(0x52217e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5221f5;}}
}
B522180:L522180:{c.instructions+=4;NFSU2_TR(0x522180);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522182:{NFSU2_TR(0x522182);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522183:{NFSU2_TR(0x522183);
w4(R+4,u32(0x838980ull));
}
B522188:{NFSU2_TR(0x522188);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52218dull));
TAIL_STATIC(0x521670u,521);
}
B52218d:L52218d:{c.instructions+=3;NFSU2_TR(0x52218d);
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
B52218f:{NFSU2_TR(0x52218f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522190:{NFSU2_TR(0x522190);
if(r1(R+518)){{goto L5221b4;}}
}
B522192:L522192:{c.instructions+=2;NFSU2_TR(0x522192);
w4(R+4,u32(0x838980ull));
}
B522197:{NFSU2_TR(0x522197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52219cull));
TAIL_STATIC(0x521850u,521);
}
B52219c:L52219c:{c.instructions+=2;NFSU2_TR(0x52219c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52219e:{NFSU2_TR(0x52219e);
if(r1(R+518)){{goto L5221fc;}}
}
B5221a0:L5221a0:{c.instructions+=4;NFSU2_TR(0x5221a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5221a4:{NFSU2_TR(0x5221a4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B5221a7:{NFSU2_TR(0x5221a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5221a8:{NFSU2_TR(0x5221a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5221adull));
TAIL_STATIC(0x50e190u,50e);
}
B5221ad:L5221ad:{c.instructions+=3;NFSU2_TR(0x5221ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5221b0:{NFSU2_TR(0x5221b0);
__builtin_memmove((R+28),(R+0),4);
}
B5221b2:{NFSU2_TR(0x5221b2);
{goto L5221ff;}
}
B5221b4:L5221b4:{c.instructions+=2;NFSU2_TR(0x5221b4);
w4(R+4,u32(0x8392c0ull));
}
B5221b9:{NFSU2_TR(0x5221b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5221beull));
TAIL_STATIC(0x6102f0u,610);
}
B5221be:L5221be:{c.instructions+=2;NFSU2_TR(0x5221be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5221c0:{NFSU2_TR(0x5221c0);
if(r1(R+518)){{goto L5221fc;}}
}
B5221c2:L5221c2:{c.instructions+=3;NFSU2_TR(0x5221c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5221c3:{NFSU2_TR(0x5221c3);
w4(R+4,u32(0x838980ull));
}
B5221c8:{NFSU2_TR(0x5221c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5221cdull));
TAIL_STATIC(0x50ee90u,50e);
}
B5221cd:L5221cd:{c.instructions+=2;NFSU2_TR(0x5221cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5221cf:{NFSU2_TR(0x5221cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5221fc;}}
}
B5221d1:L5221d1:{c.instructions+=3;NFSU2_TR(0x5221d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5221d2:{NFSU2_TR(0x5221d2);
w4(R+4,u32(0x838980ull));
}
B5221d7:{NFSU2_TR(0x5221d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5221dcull));
TAIL_STATIC(0x50efd0u,50e);
}
B5221dc:L5221dc:{c.instructions+=2;NFSU2_TR(0x5221dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5221de:{NFSU2_TR(0x5221de);
if(r1(R+518)){{goto L5221fc;}}
}
B5221e0:L5221e0:{c.instructions+=5;NFSU2_TR(0x5221e0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5221e2:{NFSU2_TR(0x5221e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5221e5:{NFSU2_TR(0x5221e5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B5221e8:{NFSU2_TR(0x5221e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5221e9:{NFSU2_TR(0x5221e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5221eeull));
TAIL_STATIC(0x50e190u,50e);
}
B5221ee:L5221ee:{c.instructions+=3;NFSU2_TR(0x5221ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5221f1:{NFSU2_TR(0x5221f1);
__builtin_memmove((R+28),(R+0),4);
}
B5221f3:{NFSU2_TR(0x5221f3);
{goto L5221ff;}
}
B5221f5:L5221f5:{c.instructions+=2;NFSU2_TR(0x5221f5);
w4(R+28,u32(0x1b3a8dd3ull));
}
B5221fa:{NFSU2_TR(0x5221fa);
{goto L5221ff;}
}
B5221fc:L5221fc:{c.instructions+=1;NFSU2_TR(0x5221fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5221ff:L5221ff:{c.instructions+=2;NFSU2_TR(0x5221ff);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522201:{NFSU2_TR(0x522201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522206ull));
TAIL_STATIC(0x575620u,575);
}
B522206:L522206:{c.instructions+=3;NFSU2_TR(0x522206);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B522209:{NFSU2_TR(0x522209);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52220b:{NFSU2_TR(0x52220b);
if(r1(R+518)){{goto L52222b;}}
}
B52220d:L52220d:{c.instructions+=7;NFSU2_TR(0x52220d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B522210:{NFSU2_TR(0x522210);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522212:{NFSU2_TR(0x522212);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522213:{NFSU2_TR(0x522213);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522214:{NFSU2_TR(0x522214);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522215:{NFSU2_TR(0x522215);
__builtin_memmove((R+4),(R+0),4);
}
B522217:{NFSU2_TR(0x522217);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52221cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5220d0u);}goto L5220d0;}
}
B52221c:L52221c:{c.instructions+=4;NFSU2_TR(0x52221c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52221e:{NFSU2_TR(0x52221e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52221f:{NFSU2_TR(0x52221f);
__builtin_memmove((R+4),(R+12),4);
}
B522221:{NFSU2_TR(0x522221);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522224ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B522224:L522224:{c.instructions+=5;NFSU2_TR(0x522224);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B522225:{NFSU2_TR(0x522225);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522226:{NFSU2_TR(0x522226);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B522227:{NFSU2_TR(0x522227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B522228:{NFSU2_TR(0x522228);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52222b:L52222b:{c.instructions+=5;NFSU2_TR(0x52222b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52222d:{NFSU2_TR(0x52222d);
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
B52222f:{NFSU2_TR(0x52222f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522230:{NFSU2_TR(0x522230);
__builtin_memmove((R+4),(R+12),4);
}
B522232:{NFSU2_TR(0x522232);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522235ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B522235:L522235:{c.instructions+=1;NFSU2_TR(0x522235);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B522236:L522236:{c.instructions+=4;NFSU2_TR(0x522236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522237:{NFSU2_TR(0x522237);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B522238:{NFSU2_TR(0x522238);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B522239:{NFSU2_TR(0x522239);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522240:L522240:{c.instructions+=7;NFSU2_TR(0x522240);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522241:{NFSU2_TR(0x522241);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522242:{NFSU2_TR(0x522242);
__builtin_memmove((R+24),(R+4),4);
}
B522244:{NFSU2_TR(0x522244);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52224a:{NFSU2_TR(0x52224a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((R+12),(U+0),4);
}
B522250:{NFSU2_TR(0x522250);
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
B522252:{NFSU2_TR(0x522252);
if(r1(R+518)){{goto L52232f;}}
}
B522258:L522258:{c.instructions+=6;NFSU2_TR(0x522258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52225e:{NFSU2_TR(0x52225e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52225f:{NFSU2_TR(0x52225f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522260:{NFSU2_TR(0x522260);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522261:{NFSU2_TR(0x522261);
__builtin_memmove((R+4),(R+12),4);
}
B522263:{NFSU2_TR(0x522263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522268ull));
TAIL_STATIC(0x43be80u,43b);
}
B522268:L522268:{c.instructions+=5;NFSU2_TR(0x522268);
__builtin_memmove((R+4),(R+0),4);
}
B52226a:{NFSU2_TR(0x52226a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52226e:{NFSU2_TR(0x52226e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B52226f:{NFSU2_TR(0x52226f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B522274:{NFSU2_TR(0x522274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5222e0;}}
}
B522276:L522276:{c.instructions+=6;NFSU2_TR(0x522276);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52227c:{NFSU2_TR(0x52227c);
__builtin_memmove((R+0),(R+4),4);
}
B52227e:{NFSU2_TR(0x52227e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B52227f:{NFSU2_TR(0x52227f);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x52227f);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x52227f);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B522281:{NFSU2_TR(0x522281);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B522283:{NFSU2_TR(0x522283);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5222c6;}}
}
B522285:L522285:{c.instructions+=7;NFSU2_TR(0x522285);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52228b:{NFSU2_TR(0x52228b);
__builtin_memmove((R+0),(R+28),4);
}
B52228d:{NFSU2_TR(0x52228d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B52228e:{NFSU2_TR(0x52228e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x52228e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x52228e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B522290:{NFSU2_TR(0x522290);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B522292:{NFSU2_TR(0x522292);
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
B522294:{NFSU2_TR(0x522294);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5222a9;}}
}
B522296:L522296:{c.instructions+=7;NFSU2_TR(0x522296);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52229c:{NFSU2_TR(0x52229c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52229d:{NFSU2_TR(0x52229d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52229e:{NFSU2_TR(0x52229e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5222a4:{NFSU2_TR(0x5222a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5222a5:{NFSU2_TR(0x5222a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5222a6:{NFSU2_TR(0x5222a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5222a9:L5222a9:{c.instructions+=2;NFSU2_TR(0x5222a9);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5222ad:{NFSU2_TR(0x5222ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5222ae:L5222ae:{c.instructions+=2;NFSU2_TR(0x5222ae);
__builtin_memmove((R+4),(R+12),4);
}
B5222b0:{NFSU2_TR(0x5222b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5222b5ull));
TAIL_STATIC(0x43be60u,43b);
}
B5222b5:L5222b5:{c.instructions+=2;NFSU2_TR(0x5222b5);
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
B5222b7:{NFSU2_TR(0x5222b7);
if(r1(R+518)){{goto L52232d;}}
}
B5222b9:L5222b9:{c.instructions+=6;NFSU2_TR(0x5222b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5222ba:{NFSU2_TR(0x5222ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5222bb:{NFSU2_TR(0x5222bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5222c1:{NFSU2_TR(0x5222c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5222c2:{NFSU2_TR(0x5222c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5222c3:{NFSU2_TR(0x5222c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5222c6:L5222c6:{c.instructions+=3;NFSU2_TR(0x5222c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5222cc:{NFSU2_TR(0x5222cc);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+10)));
w4(U+14,u32(u32(r4(R+0))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5222ce:{NFSU2_TR(0x5222ce);
if(r1(R+518)){{goto L52232d;}}
}
B5222d0:L5222d0:{c.instructions+=7;NFSU2_TR(0x5222d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5222d3:{NFSU2_TR(0x5222d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5222d4:{NFSU2_TR(0x5222d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5222d5:{NFSU2_TR(0x5222d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5222db:{NFSU2_TR(0x5222db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5222dc:{NFSU2_TR(0x5222dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5222dd:{NFSU2_TR(0x5222dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5222e0:L5222e0:{c.instructions+=2;NFSU2_TR(0x5222e0);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5222e5:{NFSU2_TR(0x5222e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52232d;}}
}
B5222e7:L5222e7:{c.instructions+=4;NFSU2_TR(0x5222e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5222ed:{NFSU2_TR(0x5222ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5222f3:{NFSU2_TR(0x5222f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5222f9:{NFSU2_TR(0x5222f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L522314;}}
}
B5222fb:L5222fb:{c.instructions+=6;NFSU2_TR(0x5222fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522301:{NFSU2_TR(0x522301);
__builtin_memmove((R+0),(R+4),4);
}
B522303:{NFSU2_TR(0x522303);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B522304:{NFSU2_TR(0x522304);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x522304);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x522304);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B522306:{NFSU2_TR(0x522306);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B522308:{NFSU2_TR(0x522308);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52230f;}}
}
B52230a:L52230a:{c.instructions+=3;NFSU2_TR(0x52230a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B52230c:{NFSU2_TR(0x52230c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52230d:{NFSU2_TR(0x52230d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5222aeu);}goto L5222ae;}
}
B52230f:L52230f:{c.instructions+=3;NFSU2_TR(0x52230f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B522311:{NFSU2_TR(0x522311);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522312:{NFSU2_TR(0x522312);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5222aeu);}goto L5222ae;}
}
B522314:L522314:{c.instructions+=5;NFSU2_TR(0x522314);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B522317:{NFSU2_TR(0x522317);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B522318:{NFSU2_TR(0x522318);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x522318);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x522318);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B52231a:{NFSU2_TR(0x52231a);
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
B52231c:{NFSU2_TR(0x52231c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L522324;}}
}
B52231e:L52231e:{c.instructions+=4;NFSU2_TR(0x52231e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B522320:{NFSU2_TR(0x522320);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B522321:{NFSU2_TR(0x522321);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522322:{NFSU2_TR(0x522322);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5222aeu);}goto L5222ae;}
}
B522324:L522324:{c.instructions+=2;NFSU2_TR(0x522324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B522327:{NFSU2_TR(0x522327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52232d:L52232d:{c.instructions+=2;NFSU2_TR(0x52232d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52232e:{NFSU2_TR(0x52232e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52232f:L52232f:{c.instructions+=3;NFSU2_TR(0x52232f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522330:{NFSU2_TR(0x522330);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B522331:{NFSU2_TR(0x522331);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522340:L522340:{c.instructions+=7;NFSU2_TR(0x522340);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522341:{NFSU2_TR(0x522341);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522342:{NFSU2_TR(0x522342);
__builtin_memmove((R+24),(R+4),4);
}
B522344:{NFSU2_TR(0x522344);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52234a:{NFSU2_TR(0x52234a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((R+20),(U+0),4);
}
B522350:{NFSU2_TR(0x522350);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B522352:{NFSU2_TR(0x522352);
if(r1(R+518)){{goto L5223f2;}}
}
B522358:L522358:{c.instructions+=3;NFSU2_TR(0x522358);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52235e:{NFSU2_TR(0x52235e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
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
B522364:{NFSU2_TR(0x522364);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5223f2;}}
}
B52236a:L52236a:{c.instructions+=6;NFSU2_TR(0x52236a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522370:{NFSU2_TR(0x522370);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522371:{NFSU2_TR(0x522371);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522372:{NFSU2_TR(0x522372);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522373:{NFSU2_TR(0x522373);
__builtin_memmove((R+4),(R+20),4);
}
B522375:{NFSU2_TR(0x522375);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52237aull));
TAIL_STATIC(0x43be80u,43b);
}
B52237a:L52237a:{c.instructions+=5;NFSU2_TR(0x52237a);
__builtin_memmove((R+4),(R+0),4);
}
B52237c:{NFSU2_TR(0x52237c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522380:{NFSU2_TR(0x522380);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B522381:{NFSU2_TR(0x522381);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B522386:{NFSU2_TR(0x522386);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5223b0;}}
}
B522388:L522388:{c.instructions+=3;NFSU2_TR(0x522388);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52238e:{NFSU2_TR(0x52238e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B522390:{NFSU2_TR(0x522390);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5223ab;}}
}
B522392:L522392:{c.instructions+=9;NFSU2_TR(0x522392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B522398:{NFSU2_TR(0x522398);
__builtin_memmove((R+0),(R+28),4);
}
B52239a:{NFSU2_TR(0x52239a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B52239b:{NFSU2_TR(0x52239b);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x52239b);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x52239b);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B52239d:{NFSU2_TR(0x52239d);
__builtin_memmove((R+0),(R+28),4);
}
B52239f:{NFSU2_TR(0x52239f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5223a1:{NFSU2_TR(0x5223a1);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5223a3:{NFSU2_TR(0x5223a3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5223a5:{NFSU2_TR(0x5223a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5223de;}}
}
B5223a7:L5223a7:{c.instructions+=2;NFSU2_TR(0x5223a7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B5223a9:{NFSU2_TR(0x5223a9);
{goto L5223de;}
}
B5223ab:L5223ab:{c.instructions+=3;NFSU2_TR(0x5223ab);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B5223ad:{NFSU2_TR(0x5223ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5223ae:{NFSU2_TR(0x5223ae);
{goto L5223df;}
}
B5223b0:L5223b0:{c.instructions+=2;NFSU2_TR(0x5223b0);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911c0a4bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5223b5:{NFSU2_TR(0x5223b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5223f0;}}
}
B5223b7:L5223b7:{c.instructions+=6;NFSU2_TR(0x5223b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5223bd:{NFSU2_TR(0x5223bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5223c3:{NFSU2_TR(0x5223c3);
__builtin_memmove((R+8),(R+12),4);
}
B5223c5:{NFSU2_TR(0x5223c5);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B5223c7:{NFSU2_TR(0x5223c7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5223c9:{NFSU2_TR(0x5223c9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5223db;}}
}
B5223cb:L5223cb:{c.instructions+=6;NFSU2_TR(0x5223cb);
__builtin_memmove((R+0),(R+12),4);
}
B5223cd:{NFSU2_TR(0x5223cd);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5223ce:{NFSU2_TR(0x5223ce);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5223ce);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5223ce);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5223d0:{NFSU2_TR(0x5223d0);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B5223d2:{NFSU2_TR(0x5223d2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B5223d4:{NFSU2_TR(0x5223d4);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5223d8;}}
}
B5223d6:L5223d6:{c.instructions+=1;NFSU2_TR(0x5223d6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B5223d8:L5223d8:{c.instructions+=2;NFSU2_TR(0x5223d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5223d9:{NFSU2_TR(0x5223d9);
{goto L5223df;}
}
B5223db:L5223db:{c.instructions+=1;NFSU2_TR(0x5223db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5223de:L5223de:{c.instructions+=1;NFSU2_TR(0x5223de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5223df:L5223df:{c.instructions+=2;NFSU2_TR(0x5223df);
__builtin_memmove((R+4),(R+20),4);
}
B5223e1:{NFSU2_TR(0x5223e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5223e6ull));
TAIL_STATIC(0x43be60u,43b);
}
B5223e6:L5223e6:{c.instructions+=2;NFSU2_TR(0x5223e6);
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
B5223e8:{NFSU2_TR(0x5223e8);
if(r1(R+518)){{goto L5223f0;}}
}
B5223ea:L5223ea:{c.instructions+=1;NFSU2_TR(0x5223ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5223f0:L5223f0:{c.instructions+=2;NFSU2_TR(0x5223f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5223f1:{NFSU2_TR(0x5223f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5223f2:L5223f2:{c.instructions+=3;NFSU2_TR(0x5223f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5223f3:{NFSU2_TR(0x5223f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5223f4:{NFSU2_TR(0x5223f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522400:L522400:{c.instructions+=16;NFSU2_TR(0x522400);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522402:{NFSU2_TR(0x522402);
u8 U[4];
w4(U+0,u32(0x77729bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522407:{NFSU2_TR(0x522407);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52240d:{NFSU2_TR(0x52240d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52240e:{NFSU2_TR(0x52240e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522415:{NFSU2_TR(0x522415);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B522418:{NFSU2_TR(0x522418);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522419:{NFSU2_TR(0x522419);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52241a:{NFSU2_TR(0x52241a);
__builtin_memmove((R+20),(R+4),4);
}
B52241c:{NFSU2_TR(0x52241c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52241d:{NFSU2_TR(0x52241d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B52241f:{NFSU2_TR(0x52241f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522420:{NFSU2_TR(0x522420);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B522423:{NFSU2_TR(0x522423);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522427:{NFSU2_TR(0x522427);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+20)),r4(U+0));
}
B52242a:{NFSU2_TR(0x52242a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52242full));
TAIL_STATIC(0x40c910u,40c);
}
B52242f:L52242f:{c.instructions+=4;NFSU2_TR(0x52242f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522433:{NFSU2_TR(0x522433);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x900ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522439:{NFSU2_TR(0x522439);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x904ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52243f:{NFSU2_TR(0x52243f);
w4(R+28,u32(0x5ull));
}
B522444:L522444:{c.instructions+=2;NFSU2_TR(0x522444);
__builtin_memmove((R+4),(R+24),4);
}
B522446:{NFSU2_TR(0x522446);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52244bull));
TAIL_STATIC(0x5a7930u,5a7);
}
B52244b:L52244b:{c.instructions+=3;NFSU2_TR(0x52244b);
w1(R+512,carry<u32>(r4(R+24),u32(0x29ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x29ull))));
}
B52244e:{NFSU2_TR(0x52244e);
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
B52244f:{NFSU2_TR(0x52244f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522444u);}goto L522444;}}
}
B522451:L522451:{c.instructions+=2;NFSU2_TR(0x522451);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9d1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B522457:{NFSU2_TR(0x522457);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52245cull));
TAIL_STATIC(0x5a7930u,5a7);
}
B52245c:L52245c:{c.instructions+=9;NFSU2_TR(0x52245c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9fcull))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B522466:{NFSU2_TR(0x522466);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa00ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52246c:{NFSU2_TR(0x52246c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa04ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522472:{NFSU2_TR(0x522472);
__builtin_memmove((R+0),gp(0x7fa21c),4);
}
B522477:{NFSU2_TR(0x522477);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52247d:{NFSU2_TR(0x52247d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa14ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522483:{NFSU2_TR(0x522483);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa15ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522489:{NFSU2_TR(0x522489);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa1cull))));
__builtin_memmove((R+24),(U+0),4);
}
B52248f:{NFSU2_TR(0x52248f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B522497:L522497:{c.instructions+=2;NFSU2_TR(0x522497);
__builtin_memmove((R+4),(R+24),4);
}
B522499:{NFSU2_TR(0x522499);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52249eull));
TAIL_STATIC(0x5f73d0u,5f7);
}
B52249e:L52249e:{c.instructions+=7;NFSU2_TR(0x52249e);
__builtin_memmove((R+4),(R+24),4);
}
B5224a0:{NFSU2_TR(0x5224a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5224a3:{NFSU2_TR(0x5224a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5224a6:{NFSU2_TR(0x5224a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5224a9:{NFSU2_TR(0x5224a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5224ac:{NFSU2_TR(0x5224ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5224af:{NFSU2_TR(0x5224af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5224b4ull));
TAIL_STATIC(0x5ede10u,5ed);
}
B5224b4:L5224b4:{c.instructions+=3;NFSU2_TR(0x5224b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5224b6:{NFSU2_TR(0x5224b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5224b9:{NFSU2_TR(0x5224b9);
w4(R+4,u32(0x9ull));
}
B5224be:L5224be:{c.instructions+=1;NFSU2_TR(0x5224be);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5224c0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5224beu);}goto L5224be;}
}
B5224c0:L5224c0:{c.instructions+=5;NFSU2_TR(0x5224c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5224c4:{NFSU2_TR(0x5224c4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6cull))));
}
B5224c7:{NFSU2_TR(0x5224c7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5224c8:{NFSU2_TR(0x5224c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5224cc:{NFSU2_TR(0x5224cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522497u);}goto L522497;}}
}
B5224ce:L5224ce:{c.instructions+=12;NFSU2_TR(0x5224ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5224d4:{NFSU2_TR(0x5224d4);
__builtin_memmove((R+4),gp(0x83a9d8),4);
}
B5224da:{NFSU2_TR(0x5224da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5224db:{NFSU2_TR(0x5224db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5224e1:{NFSU2_TR(0x5224e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5224e5:{NFSU2_TR(0x5224e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5224e6:{NFSU2_TR(0x5224e6);
__builtin_memmove((R+0),(R+20),4);
}
B5224e8:{NFSU2_TR(0x5224e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5224e9:{NFSU2_TR(0x5224e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5224ea:{NFSU2_TR(0x5224ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5224f1:{NFSU2_TR(0x5224f1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5224f4:{NFSU2_TR(0x5224f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522500:L522500:{c.instructions+=7;NFSU2_TR(0x522500);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522501:{NFSU2_TR(0x522501);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522502:{NFSU2_TR(0x522502);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B522506:{NFSU2_TR(0x522506);
__builtin_memmove((R+24),(R+4),4);
}
B522508:{NFSU2_TR(0x522508);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52250e:{NFSU2_TR(0x52250e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52250f:{NFSU2_TR(0x52250f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522514ull));
TAIL_STATIC(0x59b080u,59b);
}
B522514:L522514:{c.instructions+=2;NFSU2_TR(0x522514);
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
B522516:{NFSU2_TR(0x522516);
if(r1(R+518)){{goto L52254d;}}
}
B522518:L522518:{c.instructions+=4;NFSU2_TR(0x522518);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52251c:{NFSU2_TR(0x52251c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52251f:{NFSU2_TR(0x52251f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522521:{NFSU2_TR(0x522521);
if(r1(R+518)){{goto L52253a;}}
}
B522523:L522523:{c.instructions+=6;NFSU2_TR(0x522523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522529:{NFSU2_TR(0x522529);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52252a:{NFSU2_TR(0x52252a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52252e:{NFSU2_TR(0x52252e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52252f:{NFSU2_TR(0x52252f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522530:{NFSU2_TR(0x522530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522535ull));
TAIL_STATIC(0x5b4670u,5b4);
}
B522535:L522535:{c.instructions+=3;NFSU2_TR(0x522535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B522536:{NFSU2_TR(0x522536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522537:{NFSU2_TR(0x522537);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52253a:L52253a:{c.instructions+=6;NFSU2_TR(0x52253a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52253e:{NFSU2_TR(0x52253e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522540:{NFSU2_TR(0x522540);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522541:{NFSU2_TR(0x522541);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522542:{NFSU2_TR(0x522542);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522548:{NFSU2_TR(0x522548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52254dull));
TAIL_STATIC(0x5b4670u,5b4);
}
B52254d:L52254d:{c.instructions+=3;NFSU2_TR(0x52254d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52254e:{NFSU2_TR(0x52254e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52254f:{NFSU2_TR(0x52254f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522560:L522560:{c.instructions+=8;NFSU2_TR(0x522560);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522561:{NFSU2_TR(0x522561);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522562:{NFSU2_TR(0x522562);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522563:{NFSU2_TR(0x522563);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B522567:{NFSU2_TR(0x522567);
__builtin_memmove((R+24),(R+4),4);
}
B522569:{NFSU2_TR(0x522569);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52256f:{NFSU2_TR(0x52256f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522570:{NFSU2_TR(0x522570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522575ull));
TAIL_STATIC(0x59b080u,59b);
}
B522575:L522575:{c.instructions+=2;NFSU2_TR(0x522575);
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
B522577:{NFSU2_TR(0x522577);
if(r1(R+518)){{goto L5225a7;}}
}
B522579:L522579:{c.instructions+=9;NFSU2_TR(0x522579);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52257b:{NFSU2_TR(0x52257b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52257d:{NFSU2_TR(0x52257d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B522581:{NFSU2_TR(0x522581);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522582:{NFSU2_TR(0x522582);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B522586:{NFSU2_TR(0x522586);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522587:{NFSU2_TR(0x522587);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52258d:{NFSU2_TR(0x52258d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52258e:{NFSU2_TR(0x52258e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522593ull));
TAIL_STATIC(0x5b2980u,5b2);
}
B522593:L522593:{c.instructions+=7;NFSU2_TR(0x522593);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B522597:{NFSU2_TR(0x522597);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52259b:{NFSU2_TR(0x52259b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52259c:{NFSU2_TR(0x52259c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52259d:{NFSU2_TR(0x52259d);
{u32 ea_=u32(u32(7890016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5225a3:{NFSU2_TR(0x5225a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5225a4:{NFSU2_TR(0x5225a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5225a7:L5225a7:{c.instructions+=5;NFSU2_TR(0x5225a7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5225ad:{NFSU2_TR(0x5225ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5225ae:{NFSU2_TR(0x5225ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5225af:{NFSU2_TR(0x5225af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5225b0:{NFSU2_TR(0x5225b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5225c0:L5225c0:{c.instructions+=6;NFSU2_TR(0x5225c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5225c4:{NFSU2_TR(0x5225c4);
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
B5225c7:{NFSU2_TR(0x5225c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5225c8:{NFSU2_TR(0x5225c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5225c9:{NFSU2_TR(0x5225c9);
__builtin_memmove((R+28),(R+4),4);
}
B5225cb:{NFSU2_TR(0x5225cb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L522696;}}
}
B5225d1:L5225d1:{c.instructions+=1;NFSU2_TR(0x5225d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5226a0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5225d8:L5225d8:{c.instructions+=2;NFSU2_TR(0x5225d8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5225da:{NFSU2_TR(0x5225da);
__builtin_memmove((R+12),(R+12),4);
}
B5225e0:L5225e0:{c.instructions+=3;NFSU2_TR(0x5225e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5225e6:{NFSU2_TR(0x5225e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5225e7:{NFSU2_TR(0x5225e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5225ecull));
TAIL_STATIC(0x59b080u,59b);
}
B5225ec:L5225ec:{c.instructions+=2;NFSU2_TR(0x5225ec);
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
B5225ee:{NFSU2_TR(0x5225ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L522674;}}
}
B5225f4:L5225f4:{c.instructions+=3;NFSU2_TR(0x5225f4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5225f5:{NFSU2_TR(0x5225f5);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5225f8:{NFSU2_TR(0x5225f8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5225e0u);}goto L5225e0;}}
}
B5225fa:L5225fa:{c.instructions+=3;NFSU2_TR(0x5225fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5225fb:{NFSU2_TR(0x5225fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5225fc:{NFSU2_TR(0x5225fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5225ff:L5225ff:{c.instructions+=1;NFSU2_TR(0x5225ff);
w4(R+24,u32(0x9ull));
}
B522604:L522604:{c.instructions+=3;NFSU2_TR(0x522604);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52260a:{NFSU2_TR(0x52260a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52260b:{NFSU2_TR(0x52260b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522610ull));
TAIL_STATIC(0x59b080u,59b);
}
B522610:L522610:{c.instructions+=2;NFSU2_TR(0x522610);
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
B522612:{NFSU2_TR(0x522612);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L522674;}}
}
B522614:L522614:{c.instructions+=3;NFSU2_TR(0x522614);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B522615:{NFSU2_TR(0x522615);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B522618:{NFSU2_TR(0x522618);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522604u);}goto L522604;}}
}
B52261a:L52261a:{c.instructions+=3;NFSU2_TR(0x52261a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52261b:{NFSU2_TR(0x52261b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52261c:{NFSU2_TR(0x52261c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52261f:L52261f:{c.instructions+=1;NFSU2_TR(0x52261f);
w4(R+24,u32(0x15ull));
}
B522624:L522624:{c.instructions+=3;NFSU2_TR(0x522624);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52262a:{NFSU2_TR(0x52262a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52262b:{NFSU2_TR(0x52262b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522630ull));
TAIL_STATIC(0x59b080u,59b);
}
B522630:L522630:{c.instructions+=2;NFSU2_TR(0x522630);
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
B522632:{NFSU2_TR(0x522632);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L522674;}}
}
B522634:L522634:{c.instructions+=3;NFSU2_TR(0x522634);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B522635:{NFSU2_TR(0x522635);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x16ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x16ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B522638:{NFSU2_TR(0x522638);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522624u);}goto L522624;}}
}
B52263a:L52263a:{c.instructions+=3;NFSU2_TR(0x52263a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52263b:{NFSU2_TR(0x52263b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52263c:{NFSU2_TR(0x52263c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52263f:L52263f:{c.instructions+=1;NFSU2_TR(0x52263f);
w4(R+24,u32(0x12ull));
}
B522644:L522644:{c.instructions+=3;NFSU2_TR(0x522644);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52264a:{NFSU2_TR(0x52264a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52264b:{NFSU2_TR(0x52264b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522650ull));
TAIL_STATIC(0x59b080u,59b);
}
B522650:L522650:{c.instructions+=2;NFSU2_TR(0x522650);
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
B522652:{NFSU2_TR(0x522652);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L522674;}}
}
B522654:L522654:{c.instructions+=3;NFSU2_TR(0x522654);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B522655:{NFSU2_TR(0x522655);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B522658:{NFSU2_TR(0x522658);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522644u);}goto L522644;}}
}
B52265a:L52265a:{c.instructions+=3;NFSU2_TR(0x52265a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52265b:{NFSU2_TR(0x52265b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52265c:{NFSU2_TR(0x52265c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52265f:L52265f:{c.instructions+=2;NFSU2_TR(0x52265f);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522661:{NFSU2_TR(0x522661);
{goto L522665;}
}
B522663:L522663:{c.instructions+=1;NFSU2_TR(0x522663);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522665:L522665:{c.instructions+=2;NFSU2_TR(0x522665);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52266b:{NFSU2_TR(0x52266b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522670ull));
TAIL_STATIC(0x59b080u,59b);
}
B522670:L522670:{c.instructions+=2;NFSU2_TR(0x522670);
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
B522672:{NFSU2_TR(0x522672);
if(r1(R+518)){{goto L522696;}}
}
B522674:L522674:{c.instructions+=4;NFSU2_TR(0x522674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B522675:{NFSU2_TR(0x522675);
w1(R+0,u8(0x1ull));
}
B522677:{NFSU2_TR(0x522677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522678:{NFSU2_TR(0x522678);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52267b:L52267b:{c.instructions+=1;NFSU2_TR(0x52267b);
w4(R+24,u32(0x10ull));
}
B522680:L522680:{c.instructions+=3;NFSU2_TR(0x522680);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522686:{NFSU2_TR(0x522686);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522687:{NFSU2_TR(0x522687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52268cull));
TAIL_STATIC(0x59b080u,59b);
}
B52268c:L52268c:{c.instructions+=2;NFSU2_TR(0x52268c);
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
B52268e:{NFSU2_TR(0x52268e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522674u);}goto L522674;}}
}
B522690:L522690:{c.instructions+=3;NFSU2_TR(0x522690);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B522691:{NFSU2_TR(0x522691);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x11ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522694:{NFSU2_TR(0x522694);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522680u);}goto L522680;}}
}
B522696:L522696:{c.instructions+=4;NFSU2_TR(0x522696);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B522697:{NFSU2_TR(0x522697);
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
B522699:{NFSU2_TR(0x522699);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52269a:{NFSU2_TR(0x52269a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5226c0:L5226c0:{c.instructions+=25;NFSU2_TR(0x5226c0);
__builtin_memmove((R+0),(R+4),4);
}
B5226c2:{NFSU2_TR(0x5226c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5226c6:{NFSU2_TR(0x5226c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5226c9:{NFSU2_TR(0x5226c9);
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
B5226cb:{NFSU2_TR(0x5226cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5226ce:{NFSU2_TR(0x5226ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5226d1:{NFSU2_TR(0x5226d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5226d4:{NFSU2_TR(0x5226d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5226d7:{NFSU2_TR(0x5226d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5226da:{NFSU2_TR(0x5226da);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5226dd:{NFSU2_TR(0x5226dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5226e1:{NFSU2_TR(0x5226e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5226e4:{NFSU2_TR(0x5226e4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5226e8:{NFSU2_TR(0x5226e8);
w1(R+8,u8(0x1ull));
}
B5226ea:{NFSU2_TR(0x5226ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5226ed:{NFSU2_TR(0x5226ed);
w4(R+4,u32(0x3f800000ull));
}
B5226f2:{NFSU2_TR(0x5226f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5226f5:{NFSU2_TR(0x5226f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5226f8:{NFSU2_TR(0x5226f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5226fb:{NFSU2_TR(0x5226fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5226fe:{NFSU2_TR(0x5226fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522701:{NFSU2_TR(0x522701);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522704:{NFSU2_TR(0x522704);
u8 U[4];
w4(U+0,u32(0x79b758ull));
s4(u32(r4(R+0)),r4(U+0));
}
B52270a:{NFSU2_TR(0x52270a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52270d:{NFSU2_TR(0x52270d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522710:L522710:{c.instructions+=37;NFSU2_TR(0x522710);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522711:{NFSU2_TR(0x522711);
__builtin_memmove((R+20),(R+16),4);
}
B522713:{NFSU2_TR(0x522713);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522715:{NFSU2_TR(0x522715);
u8 U[4];
w4(U+0,u32(0x7772b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52271a:{NFSU2_TR(0x52271a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522720:{NFSU2_TR(0x522720);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522721:{NFSU2_TR(0x522721);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522728:{NFSU2_TR(0x522728);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522729:{NFSU2_TR(0x522729);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52272c:{NFSU2_TR(0x52272c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52272d:{NFSU2_TR(0x52272d);
__builtin_memmove((R+24),(R+4),4);
}
B52272f:{NFSU2_TR(0x52272f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522732:{NFSU2_TR(0x522732);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522735:{NFSU2_TR(0x522735);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B522737:{NFSU2_TR(0x522737);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52273a:{NFSU2_TR(0x52273a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52273d:{NFSU2_TR(0x52273d);
w1(R+8,u8(0x1ull));
}
B52273f:{NFSU2_TR(0x52273f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522742:{NFSU2_TR(0x522742);
w4(R+0,u32(0x3f800000ull));
}
B522747:{NFSU2_TR(0x522747);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52274a:{NFSU2_TR(0x52274a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52274d:{NFSU2_TR(0x52274d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522750:{NFSU2_TR(0x522750);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522753:{NFSU2_TR(0x522753);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522756:{NFSU2_TR(0x522756);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522759:{NFSU2_TR(0x522759);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52275c:{NFSU2_TR(0x52275c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52275f:{NFSU2_TR(0x52275f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522762:{NFSU2_TR(0x522762);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522765:{NFSU2_TR(0x522765);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522768:{NFSU2_TR(0x522768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52276b:{NFSU2_TR(0x52276b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52276e:{NFSU2_TR(0x52276e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522771:{NFSU2_TR(0x522771);
u8 U[4];
w4(U+0,u32(0x79b768ull));
s4(u32(r4(R+24)),r4(U+0));
}
B522777:{NFSU2_TR(0x522777);
u8 U[14];
__builtin_memmove((U+6),gp(0x839c40),4);
w1(R+512,u8((r4(U+6))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+4)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52277d:{NFSU2_TR(0x52277d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522780:{NFSU2_TR(0x522780);
if(r1(R+518)){{goto L5227c5;}}
}
B522782:L522782:{c.instructions+=3;NFSU2_TR(0x522782);
__builtin_memmove((R+8),gp(0x83a540),4);
}
B522788:{NFSU2_TR(0x522788);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B52278a:{NFSU2_TR(0x52278a);
if(r1(R+518)){{goto L5227c5;}}
}
B52278c:L52278c:{c.instructions+=3;NFSU2_TR(0x52278c);
__builtin_memmove((R+0),gp(0x83a63c),4);
}
B522791:{NFSU2_TR(0x522791);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B522796:{NFSU2_TR(0x522796);
if(r1(R+518)){{goto L5227c5;}}
}
B522798:L522798:{c.instructions+=5;NFSU2_TR(0x522798);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x29ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B52279b:{NFSU2_TR(0x52279b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x83a544ull))));
}
B5227a0:{NFSU2_TR(0x5227a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5227a1:{NFSU2_TR(0x5227a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5227a4:{NFSU2_TR(0x5227a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5227a9ull));
TAIL_STATIC(0x59ae90u,59a);
}
B5227a9:L5227a9:{c.instructions+=11;NFSU2_TR(0x5227a9);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B5227ab:{NFSU2_TR(0x5227ab);
u8 U[3];
__builtin_memmove((U+0),(R+512),1);
w1(R+512,u8((r1(R+0))<(r1(R+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(U+2,u8((r1(U+1))<(r1(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+2))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B5227ad:{NFSU2_TR(0x5227ad);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+0),u8(0x1ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5227af:{NFSU2_TR(0x5227af);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5227b2:{NFSU2_TR(0x5227b2);
__builtin_memmove((R+0),(R+24),4);
}
B5227b4:{NFSU2_TR(0x5227b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5227b5:{NFSU2_TR(0x5227b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5227b8:{NFSU2_TR(0x5227b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5227bf:{NFSU2_TR(0x5227bf);
__builtin_memmove((R+16),(R+20),4);
}
B5227c1:{NFSU2_TR(0x5227c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5227c2:{NFSU2_TR(0x5227c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5227c5:L5227c5:{c.instructions+=8;NFSU2_TR(0x5227c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5227c8:{NFSU2_TR(0x5227c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5227cb:{NFSU2_TR(0x5227cb);
__builtin_memmove((R+0),(R+24),4);
}
B5227cd:{NFSU2_TR(0x5227cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5227ce:{NFSU2_TR(0x5227ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5227d5:{NFSU2_TR(0x5227d5);
__builtin_memmove((R+16),(R+20),4);
}
B5227d7:{NFSU2_TR(0x5227d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5227d8:{NFSU2_TR(0x5227d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5227e0:L5227e0:{c.instructions+=12;NFSU2_TR(0x5227e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5227e2:{NFSU2_TR(0x5227e2);
u8 U[4];
w4(U+0,u32(0x7772e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5227e7:{NFSU2_TR(0x5227e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5227ed:{NFSU2_TR(0x5227ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5227ee:{NFSU2_TR(0x5227ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5227f5:{NFSU2_TR(0x5227f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5227f6:{NFSU2_TR(0x5227f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5227f7:{NFSU2_TR(0x5227f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5227f8:{NFSU2_TR(0x5227f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5227f9:{NFSU2_TR(0x5227f9);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5227fb:{NFSU2_TR(0x5227fb);
__builtin_memmove((R+24),(R+4),4);
}
B5227fd:{NFSU2_TR(0x5227fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522802ull));
TAIL_STATIC(0x575620u,575);
}
B522802:L522802:{c.instructions+=5;NFSU2_TR(0x522802);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B522804:{NFSU2_TR(0x522804);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B522807:{NFSU2_TR(0x522807);
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
B522809:{NFSU2_TR(0x522809);
w4(R+28,u32(0x3f800000ull));
}
B52280e:{NFSU2_TR(0x52280e);
if(r1(R+518)){{goto L522852;}}
}
B522810:L522810:{c.instructions+=18;NFSU2_TR(0x522810);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0xd4060fc4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B522817:{NFSU2_TR(0x522817);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52281a:{NFSU2_TR(0x52281a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52281d:{NFSU2_TR(0x52281d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522820:{NFSU2_TR(0x522820);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522823:{NFSU2_TR(0x522823);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B522827:{NFSU2_TR(0x522827);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52282a:{NFSU2_TR(0x52282a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52282d:{NFSU2_TR(0x52282d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0xa34e13bdull));
s4(u32(r4(U+0)),r4(U+4));
}
B522834:{NFSU2_TR(0x522834);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522837:{NFSU2_TR(0x522837);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52283a:{NFSU2_TR(0x52283a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52283d:{NFSU2_TR(0x52283d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522840:{NFSU2_TR(0x522840);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522843:{NFSU2_TR(0x522843);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B522847:{NFSU2_TR(0x522847);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52284a:{NFSU2_TR(0x52284a);
u8 U[4];
w4(U+0,u32(0x79b748ull));
s4(u32(r4(R+0)),r4(U+0));
}
B522850:{NFSU2_TR(0x522850);
{goto L522854;}
}
B522852:L522852:{c.instructions+=1;NFSU2_TR(0x522852);
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
B522854:L522854:{c.instructions+=4;NFSU2_TR(0x522854);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B522856:{NFSU2_TR(0x522856);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522857:{NFSU2_TR(0x522857);
__builtin_memmove((R+4),(R+24),4);
}
B522859:{NFSU2_TR(0x522859);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52285cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52285c:L52285c:{c.instructions+=2;NFSU2_TR(0x52285c);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52285e:{NFSU2_TR(0x52285e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522863ull));
TAIL_STATIC(0x575620u,575);
}
B522863:L522863:{c.instructions+=3;NFSU2_TR(0x522863);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B522866:{NFSU2_TR(0x522866);
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
B522868:{NFSU2_TR(0x522868);
if(r1(R+518)){{goto L5228ac;}}
}
B52286a:L52286a:{c.instructions+=18;NFSU2_TR(0x52286a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0xf188098cull));
s4(u32(r4(U+0)),r4(U+4));
}
B522871:{NFSU2_TR(0x522871);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522874:{NFSU2_TR(0x522874);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522877:{NFSU2_TR(0x522877);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52287a:{NFSU2_TR(0x52287a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52287d:{NFSU2_TR(0x52287d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B522881:{NFSU2_TR(0x522881);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522884:{NFSU2_TR(0x522884);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522887:{NFSU2_TR(0x522887);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0xf62234efull));
s4(u32(r4(U+0)),r4(U+4));
}
B52288e:{NFSU2_TR(0x52288e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522891:{NFSU2_TR(0x522891);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522894:{NFSU2_TR(0x522894);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522897:{NFSU2_TR(0x522897);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52289a:{NFSU2_TR(0x52289a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52289d:{NFSU2_TR(0x52289d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5228a1:{NFSU2_TR(0x5228a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5228a4:{NFSU2_TR(0x5228a4);
u8 U[4];
w4(U+0,u32(0x79b750ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5228aa:{NFSU2_TR(0x5228aa);
{goto L5228ae;}
}
B5228ac:L5228ac:{c.instructions+=1;NFSU2_TR(0x5228ac);
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
B5228ae:L5228ae:{c.instructions+=4;NFSU2_TR(0x5228ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5228b0:{NFSU2_TR(0x5228b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5228b1:{NFSU2_TR(0x5228b1);
__builtin_memmove((R+4),(R+24),4);
}
B5228b3:{NFSU2_TR(0x5228b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5228b6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5228b6:L5228b6:{c.instructions+=2;NFSU2_TR(0x5228b6);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5228b8:{NFSU2_TR(0x5228b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5228bdull));
TAIL_STATIC(0x575620u,575);
}
B5228bd:L5228bd:{c.instructions+=3;NFSU2_TR(0x5228bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5228c0:{NFSU2_TR(0x5228c0);
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
B5228c2:{NFSU2_TR(0x5228c2);
if(r1(R+518)){{goto L522906;}}
}
B5228c4:L5228c4:{c.instructions+=18;NFSU2_TR(0x5228c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0xfe1e723eull));
s4(u32(r4(U+0)),r4(U+4));
}
B5228cb:{NFSU2_TR(0x5228cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5228ce:{NFSU2_TR(0x5228ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5228d1:{NFSU2_TR(0x5228d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5228d4:{NFSU2_TR(0x5228d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5228d7:{NFSU2_TR(0x5228d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5228db:{NFSU2_TR(0x5228db);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5228de:{NFSU2_TR(0x5228de);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5228e1:{NFSU2_TR(0x5228e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x436c91d4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5228e8:{NFSU2_TR(0x5228e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5228eb:{NFSU2_TR(0x5228eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5228ee:{NFSU2_TR(0x5228ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5228f1:{NFSU2_TR(0x5228f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5228f4:{NFSU2_TR(0x5228f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5228f7:{NFSU2_TR(0x5228f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5228fb:{NFSU2_TR(0x5228fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5228fe:{NFSU2_TR(0x5228fe);
u8 U[4];
w4(U+0,u32(0x79b730ull));
s4(u32(r4(R+0)),r4(U+0));
}
B522904:{NFSU2_TR(0x522904);
{goto L522908;}
}
B522906:L522906:{c.instructions+=1;NFSU2_TR(0x522906);
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
B522908:L522908:{c.instructions+=4;NFSU2_TR(0x522908);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52290a:{NFSU2_TR(0x52290a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52290b:{NFSU2_TR(0x52290b);
__builtin_memmove((R+4),(R+24),4);
}
B52290d:{NFSU2_TR(0x52290d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522910ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B522910:L522910:{c.instructions+=2;NFSU2_TR(0x522910);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522912:{NFSU2_TR(0x522912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522917ull));
TAIL_STATIC(0x575620u,575);
}
B522917:L522917:{c.instructions+=5;NFSU2_TR(0x522917);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52291a:{NFSU2_TR(0x52291a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52291e:{NFSU2_TR(0x52291e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522920:{NFSU2_TR(0x522920);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522924:{NFSU2_TR(0x522924);
if(r1(R+518)){{goto L52293a;}}
}
B522926:L522926:{c.instructions+=5;NFSU2_TR(0x522926);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522927:{NFSU2_TR(0x522927);
u8 U[4];
w4(U+0,u32(0xffe08459ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52292c:{NFSU2_TR(0x52292c);
u8 U[4];
w4(U+0,u32(0xc2b2829cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522931:{NFSU2_TR(0x522931);
__builtin_memmove((R+4),(R+0),4);
}
B522933:{NFSU2_TR(0x522933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522938ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522710u);}goto L522710;}
}
B522938:L522938:{c.instructions+=1;NFSU2_TR(0x522938);
{goto L52293c;}
}
B52293a:L52293a:{c.instructions+=1;NFSU2_TR(0x52293a);
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
B52293c:L52293c:{c.instructions+=5;NFSU2_TR(0x52293c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52293e:{NFSU2_TR(0x52293e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52293f:{NFSU2_TR(0x52293f);
__builtin_memmove((R+4),(R+24),4);
}
B522941:{NFSU2_TR(0x522941);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B522949:{NFSU2_TR(0x522949);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52294cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52294c:L52294c:{c.instructions+=2;NFSU2_TR(0x52294c);
w4(R+4,u32(0x839c40ull));
}
B522951:{NFSU2_TR(0x522951);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522956ull));
TAIL_STATIC(0x50fd10u,50f);
}
B522956:L522956:{c.instructions+=2;NFSU2_TR(0x522956);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B522958:{NFSU2_TR(0x522958);
if(r1(R+518)){{goto L522986;}}
}
B52295a:L52295a:{c.instructions+=2;NFSU2_TR(0x52295a);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52295c:{NFSU2_TR(0x52295c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522961ull));
TAIL_STATIC(0x575620u,575);
}
B522961:L522961:{c.instructions+=3;NFSU2_TR(0x522961);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B522964:{NFSU2_TR(0x522964);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522966:{NFSU2_TR(0x522966);
if(r1(R+518)){{goto L52297c;}}
}
B522968:L522968:{c.instructions+=5;NFSU2_TR(0x522968);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522969:{NFSU2_TR(0x522969);
u8 U[4];
w4(U+0,u32(0x410258c3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52296e:{NFSU2_TR(0x52296e);
u8 U[4];
w4(U+0,u32(0x73fe99b7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522973:{NFSU2_TR(0x522973);
__builtin_memmove((R+4),(R+0),4);
}
B522975:{NFSU2_TR(0x522975);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52297aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5226c0u);}goto L5226c0;}
}
B52297a:L52297a:{c.instructions+=1;NFSU2_TR(0x52297a);
{goto L52297e;}
}
B52297c:L52297c:{c.instructions+=1;NFSU2_TR(0x52297c);
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
B52297e:L52297e:{c.instructions+=4;NFSU2_TR(0x52297e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B522980:{NFSU2_TR(0x522980);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522981:{NFSU2_TR(0x522981);
__builtin_memmove((R+4),(R+24),4);
}
B522983:{NFSU2_TR(0x522983);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522986ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B522986:L522986:{c.instructions+=2;NFSU2_TR(0x522986);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522988:{NFSU2_TR(0x522988);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52298dull));
TAIL_STATIC(0x575620u,575);
}
B52298d:L52298d:{c.instructions+=3;NFSU2_TR(0x52298d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B522990:{NFSU2_TR(0x522990);
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
B522992:{NFSU2_TR(0x522992);
if(r1(R+518)){{goto L5229d7;}}
}
B522994:L522994:{c.instructions+=18;NFSU2_TR(0x522994);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x4c9e34e6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52299b:{NFSU2_TR(0x52299b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52299e:{NFSU2_TR(0x52299e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5229a1:{NFSU2_TR(0x5229a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5229a4:{NFSU2_TR(0x5229a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5229a7:{NFSU2_TR(0x5229a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5229ab:{NFSU2_TR(0x5229ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5229ae:{NFSU2_TR(0x5229ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5229b1:{NFSU2_TR(0x5229b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0xde5cdfb2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5229b8:{NFSU2_TR(0x5229b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5229bb:{NFSU2_TR(0x5229bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5229be:{NFSU2_TR(0x5229be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5229c1:{NFSU2_TR(0x5229c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5229c4:{NFSU2_TR(0x5229c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5229c7:{NFSU2_TR(0x5229c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5229cb:{NFSU2_TR(0x5229cb);
u8 U[4];
w4(U+0,u32(0x79b760ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5229d1:{NFSU2_TR(0x5229d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5229d5:{NFSU2_TR(0x5229d5);
{goto L5229d9;}
}
B5229d7:L5229d7:{c.instructions+=1;NFSU2_TR(0x5229d7);
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
B5229d9:L5229d9:{c.instructions+=4;NFSU2_TR(0x5229d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5229db:{NFSU2_TR(0x5229db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5229dc:{NFSU2_TR(0x5229dc);
__builtin_memmove((R+4),(R+24),4);
}
B5229de:{NFSU2_TR(0x5229de);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5229e1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5229e1:L5229e1:{c.instructions+=7;NFSU2_TR(0x5229e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5229e5:{NFSU2_TR(0x5229e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5229e6:{NFSU2_TR(0x5229e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5229e7:{NFSU2_TR(0x5229e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5229e8:{NFSU2_TR(0x5229e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5229ef:{NFSU2_TR(0x5229ef);
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
B5229f2:{NFSU2_TR(0x5229f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522a00:L522a00:{c.instructions+=29;NFSU2_TR(0x522a00);
__builtin_memmove((R+0),(R+4),4);
}
B522a02:{NFSU2_TR(0x522a02);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522a06:{NFSU2_TR(0x522a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522a09:{NFSU2_TR(0x522a09);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522a0d:{NFSU2_TR(0x522a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522a10:{NFSU2_TR(0x522a10);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522a14:{NFSU2_TR(0x522a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522a17:{NFSU2_TR(0x522a17);
w4(R+4,u32(0x3f800000ull));
}
B522a1c:{NFSU2_TR(0x522a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522a1f:{NFSU2_TR(0x522a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522a22:{NFSU2_TR(0x522a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522a25:{NFSU2_TR(0x522a25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522a28:{NFSU2_TR(0x522a28);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522a2c:{NFSU2_TR(0x522a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522a2f:{NFSU2_TR(0x522a2f);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B522a33:{NFSU2_TR(0x522a33);
w1(R+8,u8(0x1ull));
}
B522a35:{NFSU2_TR(0x522a35);
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
B522a37:{NFSU2_TR(0x522a37);
__builtin_memmove((R+4),(R+518),1);
}
B522a3a:{NFSU2_TR(0x522a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B522a41:{NFSU2_TR(0x522a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B522a48:{NFSU2_TR(0x522a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B522a4f:{NFSU2_TR(0x522a4f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522a52:{NFSU2_TR(0x522a52);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522a55:{NFSU2_TR(0x522a55);
u8 U[4];
w4(U+0,u32(0x79b78cull));
s4(u32(r4(R+0)),r4(U+0));
}
B522a5b:{NFSU2_TR(0x522a5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522a5e:{NFSU2_TR(0x522a5e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522a61:{NFSU2_TR(0x522a61);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522a64:{NFSU2_TR(0x522a64);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522a67:{NFSU2_TR(0x522a67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522a70:L522a70:{c.instructions+=13;NFSU2_TR(0x522a70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522a71:{NFSU2_TR(0x522a71);
__builtin_memmove((R+20),(R+16),4);
}
B522a73:{NFSU2_TR(0x522a73);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522a75:{NFSU2_TR(0x522a75);
u8 U[4];
w4(U+0,u32(0x777304ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522a7a:{NFSU2_TR(0x522a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522a80:{NFSU2_TR(0x522a80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522a81:{NFSU2_TR(0x522a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522a88:{NFSU2_TR(0x522a88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522a89:{NFSU2_TR(0x522a89);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522a8a:{NFSU2_TR(0x522a8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522a8b:{NFSU2_TR(0x522a8b);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522a8d:{NFSU2_TR(0x522a8d);
__builtin_memmove((R+12),(R+4),4);
}
B522a8f:{NFSU2_TR(0x522a8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522a94ull));
TAIL_STATIC(0x575620u,575);
}
B522a94:L522a94:{c.instructions+=7;NFSU2_TR(0x522a94);
__builtin_memmove((R+24),(R+0),4);
}
B522a96:{NFSU2_TR(0x522a96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B522a99:{NFSU2_TR(0x522a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522a9c:{NFSU2_TR(0x522a9c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B522a9e:{NFSU2_TR(0x522a9e);
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
B522aa0:{NFSU2_TR(0x522aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522aa3:{NFSU2_TR(0x522aa3);
if(r1(R+518)){{goto L522ac8;}}
}
B522aa5:L522aa5:{c.instructions+=5;NFSU2_TR(0x522aa5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522aa6:{NFSU2_TR(0x522aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B522aa9:{NFSU2_TR(0x522aa9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522aaa:{NFSU2_TR(0x522aaa);
w4(R+4,u32(0x839c40ull));
}
B522aaf:{NFSU2_TR(0x522aaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522ab4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5225c0u);}goto L5225c0;}
}
B522ab4:L522ab4:{c.instructions+=9;NFSU2_TR(0x522ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522ab7:{NFSU2_TR(0x522ab7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522ab8:{NFSU2_TR(0x522ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522abb:{NFSU2_TR(0x522abb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522abd:{NFSU2_TR(0x522abd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522abe:{NFSU2_TR(0x522abe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522abf:{NFSU2_TR(0x522abf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522ac0:{NFSU2_TR(0x522ac0);
__builtin_memmove((R+4),(R+24),4);
}
B522ac2:{NFSU2_TR(0x522ac2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522ac7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522a00u);}goto L522a00;}
}
B522ac7:L522ac7:{c.instructions+=1;NFSU2_TR(0x522ac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B522ac8:L522ac8:{c.instructions+=5;NFSU2_TR(0x522ac8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B522aca:{NFSU2_TR(0x522aca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522acb:{NFSU2_TR(0x522acb);
__builtin_memmove((R+4),(R+12),4);
}
B522acd:{NFSU2_TR(0x522acd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B522ad4:{NFSU2_TR(0x522ad4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522ad7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B522ad7:L522ad7:{c.instructions+=7;NFSU2_TR(0x522ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522ada:{NFSU2_TR(0x522ada);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522adb:{NFSU2_TR(0x522adb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B522adc:{NFSU2_TR(0x522adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522ae3:{NFSU2_TR(0x522ae3);
__builtin_memmove((R+16),(R+20),4);
}
B522ae5:{NFSU2_TR(0x522ae5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B522ae6:{NFSU2_TR(0x522ae6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522af0:L522af0:{c.instructions+=14;NFSU2_TR(0x522af0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522af4:{NFSU2_TR(0x522af4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B522af8:{NFSU2_TR(0x522af8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522af9:{NFSU2_TR(0x522af9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522afa:{NFSU2_TR(0x522afa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522afe:{NFSU2_TR(0x522afe);
__builtin_memmove((R+24),(R+4),4);
}
B522b00:{NFSU2_TR(0x522b00);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522b04:{NFSU2_TR(0x522b04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522b05:{NFSU2_TR(0x522b05);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522b09:{NFSU2_TR(0x522b09);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522b0a:{NFSU2_TR(0x522b0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522b0b:{NFSU2_TR(0x522b0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522b0c:{NFSU2_TR(0x522b0c);
__builtin_memmove((R+4),(R+24),4);
}
B522b0e:{NFSU2_TR(0x522b0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522b13ull));
TAIL_STATIC(0x51e1b0u,51e);
}
B522b13:L522b13:{c.instructions+=35;NFSU2_TR(0x522b13);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B522b17:{NFSU2_TR(0x522b17);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522b1b:{NFSU2_TR(0x522b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b1e:{NFSU2_TR(0x522b1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B522b22:{NFSU2_TR(0x522b22);
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
B522b24:{NFSU2_TR(0x522b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b27:{NFSU2_TR(0x522b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b2a:{NFSU2_TR(0x522b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b2d:{NFSU2_TR(0x522b2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522b31:{NFSU2_TR(0x522b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b34:{NFSU2_TR(0x522b34);
u8 U[4];
w4(U+0,u32(0x79b7b0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B522b3a:{NFSU2_TR(0x522b3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b3d:{NFSU2_TR(0x522b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b40:{NFSU2_TR(0x522b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b43:{NFSU2_TR(0x522b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b49:{NFSU2_TR(0x522b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b4f:{NFSU2_TR(0x522b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b55:{NFSU2_TR(0x522b55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b5b:{NFSU2_TR(0x522b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b61:{NFSU2_TR(0x522b61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b67:{NFSU2_TR(0x522b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b6d:{NFSU2_TR(0x522b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b73:{NFSU2_TR(0x522b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b79:{NFSU2_TR(0x522b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b7f:{NFSU2_TR(0x522b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b85:{NFSU2_TR(0x522b85);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B522b88:{NFSU2_TR(0x522b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522b8e:{NFSU2_TR(0x522b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w4(U+4,u32(0x783fe5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B522b95:{NFSU2_TR(0x522b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
w4(U+4,u32(0x42380000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B522b9f:{NFSU2_TR(0x522b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w4(U+4,u32(0x79ae54ull));
s4(u32(r4(U+0)),r4(U+4));
}
B522ba6:{NFSU2_TR(0x522ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522ba9:{NFSU2_TR(0x522ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522baf:{NFSU2_TR(0x522baf);
__builtin_memmove((R+0),(R+24),4);
}
B522bb1:{NFSU2_TR(0x522bb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522bb2:{NFSU2_TR(0x522bb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522bc0:L522bc0:{c.instructions+=4;NFSU2_TR(0x522bc0);
__builtin_memmove((R+8),(R+4),4);
}
B522bc2:{NFSU2_TR(0x522bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522bc5:{NFSU2_TR(0x522bc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522bc6:{NFSU2_TR(0x522bc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522bcbull));
TAIL_STATIC(0x50ca00u,50c);
}
B522bcb:L522bcb:{c.instructions+=3;NFSU2_TR(0x522bcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522bce:{NFSU2_TR(0x522bce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522bcf:{NFSU2_TR(0x522bcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522bd4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B522bd4:L522bd4:{c.instructions+=3;NFSU2_TR(0x522bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522bd7:{NFSU2_TR(0x522bd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522bd8:{NFSU2_TR(0x522bd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522bddull));
TAIL_STATIC(0x50ca00u,50c);
}
B522bdd:L522bdd:{c.instructions+=3;NFSU2_TR(0x522bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522be0:{NFSU2_TR(0x522be0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522be1:{NFSU2_TR(0x522be1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522be6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B522be6:L522be6:{c.instructions+=4;NFSU2_TR(0x522be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522be9:{NFSU2_TR(0x522be9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B522bec:{NFSU2_TR(0x522bec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B522bee:{NFSU2_TR(0x522bee);
if(r1(R+518)){{goto L522bf9;}}
}
B522bf0:L522bf0:{c.instructions+=2;NFSU2_TR(0x522bf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522bf1:{NFSU2_TR(0x522bf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522bf6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B522bf6:L522bf6:{c.instructions+=1;NFSU2_TR(0x522bf6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B522bf9:L522bf9:{c.instructions+=3;NFSU2_TR(0x522bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522bfc:{NFSU2_TR(0x522bfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522bfd:{NFSU2_TR(0x522bfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522c02ull));
TAIL_STATIC(0x50ca00u,50c);
}
B522c02:L522c02:{c.instructions+=3;NFSU2_TR(0x522c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522c05:{NFSU2_TR(0x522c05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522c06:{NFSU2_TR(0x522c06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522c0bull));
TAIL_STATIC(0x50ca00u,50c);
}
B522c0b:L522c0b:{c.instructions+=4;NFSU2_TR(0x522c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522c0e:{NFSU2_TR(0x522c0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B522c11:{NFSU2_TR(0x522c11);
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
B522c13:{NFSU2_TR(0x522c13);
if(r1(R+518)){{goto L522c1e;}}
}
B522c15:L522c15:{c.instructions+=2;NFSU2_TR(0x522c15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522c16:{NFSU2_TR(0x522c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522c1bull));
TAIL_STATIC(0x50ca00u,50c);
}
B522c1b:L522c1b:{c.instructions+=1;NFSU2_TR(0x522c1b);
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
B522c1e:L522c1e:{c.instructions+=4;NFSU2_TR(0x522c1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B522c21:{NFSU2_TR(0x522c21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B522c23:{NFSU2_TR(0x522c23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522c25:{NFSU2_TR(0x522c25);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522c28ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B522c28:L522c28:{c.instructions+=1;NFSU2_TR(0x522c28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522c30:L522c30:{c.instructions+=4;NFSU2_TR(0x522c30);
__builtin_memmove((R+8),(R+4),4);
}
B522c32:{NFSU2_TR(0x522c32);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522c35:{NFSU2_TR(0x522c35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522c36:{NFSU2_TR(0x522c36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522c3bull));
TAIL_STATIC(0x50ca50u,50c);
}
B522c3b:L522c3b:{c.instructions+=3;NFSU2_TR(0x522c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522c3e:{NFSU2_TR(0x522c3e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522c3f:{NFSU2_TR(0x522c3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522c44ull));
TAIL_STATIC(0x50ca50u,50c);
}
B522c44:L522c44:{c.instructions+=3;NFSU2_TR(0x522c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522c47:{NFSU2_TR(0x522c47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522c48:{NFSU2_TR(0x522c48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522c4dull));
TAIL_STATIC(0x50ca50u,50c);
}
B522c4d:L522c4d:{c.instructions+=3;NFSU2_TR(0x522c4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522c50:{NFSU2_TR(0x522c50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522c51:{NFSU2_TR(0x522c51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522c56ull));
TAIL_STATIC(0x50ca50u,50c);
}
B522c56:L522c56:{c.instructions+=4;NFSU2_TR(0x522c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522c59:{NFSU2_TR(0x522c59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B522c5c:{NFSU2_TR(0x522c5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B522c5e:{NFSU2_TR(0x522c5e);
if(r1(R+518)){{goto L522c69;}}
}
B522c60:L522c60:{c.instructions+=2;NFSU2_TR(0x522c60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522c61:{NFSU2_TR(0x522c61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522c66ull));
TAIL_STATIC(0x50ca50u,50c);
}
B522c66:L522c66:{c.instructions+=1;NFSU2_TR(0x522c66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B522c69:L522c69:{c.instructions+=3;NFSU2_TR(0x522c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522c6c:{NFSU2_TR(0x522c6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522c6d:{NFSU2_TR(0x522c6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522c72ull));
TAIL_STATIC(0x50ca50u,50c);
}
B522c72:L522c72:{c.instructions+=3;NFSU2_TR(0x522c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522c75:{NFSU2_TR(0x522c75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522c76:{NFSU2_TR(0x522c76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522c7bull));
TAIL_STATIC(0x50ca50u,50c);
}
B522c7b:L522c7b:{c.instructions+=4;NFSU2_TR(0x522c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522c7e:{NFSU2_TR(0x522c7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B522c81:{NFSU2_TR(0x522c81);
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
B522c83:{NFSU2_TR(0x522c83);
if(r1(R+518)){{goto L522c8e;}}
}
B522c85:L522c85:{c.instructions+=2;NFSU2_TR(0x522c85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522c86:{NFSU2_TR(0x522c86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522c8bull));
TAIL_STATIC(0x50ca50u,50c);
}
B522c8b:L522c8b:{c.instructions+=1;NFSU2_TR(0x522c8b);
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
B522c8e:L522c8e:{c.instructions+=4;NFSU2_TR(0x522c8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B522c91:{NFSU2_TR(0x522c91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B522c93:{NFSU2_TR(0x522c93);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522c95:{NFSU2_TR(0x522c95);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522c98ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B522c98:L522c98:{c.instructions+=1;NFSU2_TR(0x522c98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522ca0:L522ca0:{c.instructions+=6;NFSU2_TR(0x522ca0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522ca1:{NFSU2_TR(0x522ca1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522ca2:{NFSU2_TR(0x522ca2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522ca3:{NFSU2_TR(0x522ca3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522ca4:{NFSU2_TR(0x522ca4);
__builtin_memmove((R+12),(R+4),4);
}
B522ca6:{NFSU2_TR(0x522ca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522cabull));
TAIL_STATIC(0x51e550u,51e);
}
B522cab:L522cab:{c.instructions+=3;NFSU2_TR(0x522cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522cae:{NFSU2_TR(0x522cae);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B522cb1:{NFSU2_TR(0x522cb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522cb4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B522cb4:L522cb4:{c.instructions+=4;NFSU2_TR(0x522cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B522cb7:{NFSU2_TR(0x522cb7);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B522cb9:{NFSU2_TR(0x522cb9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522cbb:{NFSU2_TR(0x522cbb);
if(r1(R+518)){{goto L522cfd;}}
}
B522cbd:L522cbd:{c.instructions+=3;NFSU2_TR(0x522cbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B522cc0:{NFSU2_TR(0x522cc0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522cc2:{NFSU2_TR(0x522cc2);
if(r1(R+518)){{goto L522cfd;}}
}
B522cc4:L522cc4:{c.instructions+=2;NFSU2_TR(0x522cc4);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522cc9:{NFSU2_TR(0x522cc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522cceull));
TAIL_STATIC(0x505450u,505);
}
B522cce:L522cce:{c.instructions+=4;NFSU2_TR(0x522cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522cd1:{NFSU2_TR(0x522cd1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B522cd4:{NFSU2_TR(0x522cd4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522cd6:{NFSU2_TR(0x522cd6);
if(r1(R+518)){{goto L522ce1;}}
}
B522cd8:L522cd8:{c.instructions+=3;NFSU2_TR(0x522cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B522cdb:{NFSU2_TR(0x522cdb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522cdd:{NFSU2_TR(0x522cdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522cc4u);}goto L522cc4;}}
}
B522cdf:L522cdf:{c.instructions+=1;NFSU2_TR(0x522cdf);
{goto L522cfd;}
}
B522ce1:L522ce1:{c.instructions+=2;NFSU2_TR(0x522ce1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522ce3:{NFSU2_TR(0x522ce3);
if(r1(R+518)){{goto L522cfd;}}
}
B522ce5:L522ce5:{c.instructions+=2;NFSU2_TR(0x522ce5);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B522ce8:{NFSU2_TR(0x522ce8);
if(r1(R+518)){{goto L522cfa;}}
}
B522cea:L522cea:{c.instructions+=3;NFSU2_TR(0x522cea);
__builtin_memmove((R+4),(R+28),4);
}
B522cec:{NFSU2_TR(0x522cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522cef:{NFSU2_TR(0x522cef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522cf4ull));
TAIL_STATIC(0x517720u,517);
}
B522cf4:L522cf4:{c.instructions+=2;NFSU2_TR(0x522cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522cf7:{NFSU2_TR(0x522cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522cfa:L522cfa:{c.instructions+=1;NFSU2_TR(0x522cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522cfd:L522cfd:{c.instructions+=3;NFSU2_TR(0x522cfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B522d00:{NFSU2_TR(0x522d00);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522d02:{NFSU2_TR(0x522d02);
if(r1(R+518)){{goto L522d49;}}
}
B522d04:L522d04:{c.instructions+=3;NFSU2_TR(0x522d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B522d07:{NFSU2_TR(0x522d07);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522d09:{NFSU2_TR(0x522d09);
if(r1(R+518)){{goto L522d49;}}
}
B522d0b:L522d0b:{c.instructions+=1;NFSU2_TR(0x522d0b);
{goto L522d10;}
}
B522d10:L522d10:{c.instructions+=2;NFSU2_TR(0x522d10);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522d15:{NFSU2_TR(0x522d15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522d1aull));
TAIL_STATIC(0x505450u,505);
}
B522d1a:L522d1a:{c.instructions+=4;NFSU2_TR(0x522d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522d1d:{NFSU2_TR(0x522d1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B522d20:{NFSU2_TR(0x522d20);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522d22:{NFSU2_TR(0x522d22);
if(r1(R+518)){{goto L522d2d;}}
}
B522d24:L522d24:{c.instructions+=3;NFSU2_TR(0x522d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B522d27:{NFSU2_TR(0x522d27);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522d29:{NFSU2_TR(0x522d29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522d10u);}goto L522d10;}}
}
B522d2b:L522d2b:{c.instructions+=1;NFSU2_TR(0x522d2b);
{goto L522d49;}
}
B522d2d:L522d2d:{c.instructions+=2;NFSU2_TR(0x522d2d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522d2f:{NFSU2_TR(0x522d2f);
if(r1(R+518)){{goto L522d49;}}
}
B522d31:L522d31:{c.instructions+=2;NFSU2_TR(0x522d31);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B522d34:{NFSU2_TR(0x522d34);
if(r1(R+518)){{goto L522d46;}}
}
B522d36:L522d36:{c.instructions+=3;NFSU2_TR(0x522d36);
__builtin_memmove((R+4),(R+28),4);
}
B522d38:{NFSU2_TR(0x522d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522d3b:{NFSU2_TR(0x522d3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522d40ull));
TAIL_STATIC(0x517720u,517);
}
B522d40:L522d40:{c.instructions+=2;NFSU2_TR(0x522d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B522d43:{NFSU2_TR(0x522d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522d46:L522d46:{c.instructions+=1;NFSU2_TR(0x522d46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522d49:L522d49:{c.instructions+=7;NFSU2_TR(0x522d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522d4c:{NFSU2_TR(0x522d4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B522d4d:{NFSU2_TR(0x522d4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522d4e:{NFSU2_TR(0x522d4e);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B522d50:{NFSU2_TR(0x522d50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B522d51:{NFSU2_TR(0x522d51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B522d52:{NFSU2_TR(0x522d52);
if(r1(R+518)){{goto L522d64;}}
}
B522d54:L522d54:{c.instructions+=4;NFSU2_TR(0x522d54);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522d56:{NFSU2_TR(0x522d56);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522d5b:{NFSU2_TR(0x522d5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522d5c:{NFSU2_TR(0x522d5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522d61ull));
TAIL_STATIC(0x51cf70u,51c);
}
B522d61:L522d61:{c.instructions+=1;NFSU2_TR(0x522d61);
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
B522d64:L522d64:{c.instructions+=1;NFSU2_TR(0x522d64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522d70:L522d70:{c.instructions+=4;NFSU2_TR(0x522d70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522d71:{NFSU2_TR(0x522d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B522d74:{NFSU2_TR(0x522d74);
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
B522d76:{NFSU2_TR(0x522d76);
if(r1(R+518)){{goto L522dc3;}}
}
B522d78:L522d78:{c.instructions+=4;NFSU2_TR(0x522d78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522d79:{NFSU2_TR(0x522d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B522d7c:{NFSU2_TR(0x522d7c);
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
B522d7e:{NFSU2_TR(0x522d7e);
if(r1(R+518)){{goto L522dc2;}}
}
B522d80:L522d80:{c.instructions+=2;NFSU2_TR(0x522d80);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522d85:{NFSU2_TR(0x522d85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522d8aull));
TAIL_STATIC(0x505450u,505);
}
B522d8a:L522d8a:{c.instructions+=4;NFSU2_TR(0x522d8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522d8d:{NFSU2_TR(0x522d8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B522d90:{NFSU2_TR(0x522d90);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522d92:{NFSU2_TR(0x522d92);
if(r1(R+518)){{goto L522d9e;}}
}
B522d94:L522d94:{c.instructions+=3;NFSU2_TR(0x522d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B522d97:{NFSU2_TR(0x522d97);
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
B522d99:{NFSU2_TR(0x522d99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522d80u);}goto L522d80;}}
}
B522d9b:L522d9b:{c.instructions+=3;NFSU2_TR(0x522d9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522d9c:{NFSU2_TR(0x522d9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B522d9d:{NFSU2_TR(0x522d9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522d9e:L522d9e:{c.instructions+=2;NFSU2_TR(0x522d9e);
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
B522da0:{NFSU2_TR(0x522da0);
if(r1(R+518)){{goto L522dc2;}}
}
B522da2:L522da2:{c.instructions+=2;NFSU2_TR(0x522da2);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B522da5:{NFSU2_TR(0x522da5);
if(r1(R+518)){{goto L522dbb;}}
}
B522da7:L522da7:{c.instructions+=3;NFSU2_TR(0x522da7);
__builtin_memmove((R+4),(R+28),4);
}
B522da9:{NFSU2_TR(0x522da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522dac:{NFSU2_TR(0x522dac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522db1ull));
TAIL_STATIC(0x517720u,517);
}
B522db1:L522db1:{c.instructions+=2;NFSU2_TR(0x522db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522db4:{NFSU2_TR(0x522db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B522dbb:L522dbb:{c.instructions+=1;NFSU2_TR(0x522dbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B522dc2:L522dc2:{c.instructions+=1;NFSU2_TR(0x522dc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522dc3:L522dc3:{c.instructions+=2;NFSU2_TR(0x522dc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B522dc4:{NFSU2_TR(0x522dc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522dd0:L522dd0:{c.instructions+=4;NFSU2_TR(0x522dd0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522dd1:{NFSU2_TR(0x522dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B522dd4:{NFSU2_TR(0x522dd4);
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
B522dd6:{NFSU2_TR(0x522dd6);
if(r1(R+518)){{goto L522e23;}}
}
B522dd8:L522dd8:{c.instructions+=4;NFSU2_TR(0x522dd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522dd9:{NFSU2_TR(0x522dd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B522ddc:{NFSU2_TR(0x522ddc);
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
B522dde:{NFSU2_TR(0x522dde);
if(r1(R+518)){{goto L522e22;}}
}
B522de0:L522de0:{c.instructions+=2;NFSU2_TR(0x522de0);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522de5:{NFSU2_TR(0x522de5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522deaull));
TAIL_STATIC(0x505450u,505);
}
B522dea:L522dea:{c.instructions+=4;NFSU2_TR(0x522dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522ded:{NFSU2_TR(0x522ded);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B522df0:{NFSU2_TR(0x522df0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522df2:{NFSU2_TR(0x522df2);
if(r1(R+518)){{goto L522dfe;}}
}
B522df4:L522df4:{c.instructions+=3;NFSU2_TR(0x522df4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B522df7:{NFSU2_TR(0x522df7);
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
B522df9:{NFSU2_TR(0x522df9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522de0u);}goto L522de0;}}
}
B522dfb:L522dfb:{c.instructions+=3;NFSU2_TR(0x522dfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522dfc:{NFSU2_TR(0x522dfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B522dfd:{NFSU2_TR(0x522dfd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522dfe:L522dfe:{c.instructions+=2;NFSU2_TR(0x522dfe);
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
B522e00:{NFSU2_TR(0x522e00);
if(r1(R+518)){{goto L522e22;}}
}
B522e02:L522e02:{c.instructions+=2;NFSU2_TR(0x522e02);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B522e05:{NFSU2_TR(0x522e05);
if(r1(R+518)){{goto L522e1b;}}
}
B522e07:L522e07:{c.instructions+=3;NFSU2_TR(0x522e07);
__builtin_memmove((R+4),(R+28),4);
}
B522e09:{NFSU2_TR(0x522e09);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522e0c:{NFSU2_TR(0x522e0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522e11ull));
TAIL_STATIC(0x517720u,517);
}
B522e11:L522e11:{c.instructions+=2;NFSU2_TR(0x522e11);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522e14:{NFSU2_TR(0x522e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B522e1b:L522e1b:{c.instructions+=1;NFSU2_TR(0x522e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B522e22:L522e22:{c.instructions+=1;NFSU2_TR(0x522e22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522e23:L522e23:{c.instructions+=2;NFSU2_TR(0x522e23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B522e24:{NFSU2_TR(0x522e24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522e30:L522e30:{c.instructions+=7;NFSU2_TR(0x522e30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522e31:{NFSU2_TR(0x522e31);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B522e34:{NFSU2_TR(0x522e34);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522e35:{NFSU2_TR(0x522e35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B522e37:{NFSU2_TR(0x522e37);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B522e39:{NFSU2_TR(0x522e39);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522e3d:{NFSU2_TR(0x522e3d);
if(r1(R+518)){{goto L522e9f;}}
}
B522e3f:L522e3f:{c.instructions+=3;NFSU2_TR(0x522e3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522e40:{NFSU2_TR(0x522e40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522e41:{NFSU2_TR(0x522e41);
{goto L522e50;}
}
B522e43:L522e43:{c.instructions+=2;NFSU2_TR(0x522e43);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522e47:{NFSU2_TR(0x522e47);
{goto L522e50;}
}
B522e50:L522e50:{c.instructions+=6;NFSU2_TR(0x522e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B522e53:{NFSU2_TR(0x522e53);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B522e56:{NFSU2_TR(0x522e56);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B522e5c:{NFSU2_TR(0x522e5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522e5d:{NFSU2_TR(0x522e5d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B522e5e:{NFSU2_TR(0x522e5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522e63ull));
TAIL_STATIC(0x59b080u,59b);
}
B522e63:L522e63:{c.instructions+=2;NFSU2_TR(0x522e63);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B522e65:{NFSU2_TR(0x522e65);
if(r1(R+518)){{goto L522e87;}}
}
B522e67:L522e67:{c.instructions+=4;NFSU2_TR(0x522e67);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522e6a:{NFSU2_TR(0x522e6a);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B522e70:{NFSU2_TR(0x522e70);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522e72:{NFSU2_TR(0x522e72);
if(r1(R+518)){{goto L522e7d;}}
}
B522e74:L522e74:{c.instructions+=3;NFSU2_TR(0x522e74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522e75:{NFSU2_TR(0x522e75);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522e76:{NFSU2_TR(0x522e76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522e7bull));
TAIL_STATIC(0x5b3e40u,5b3);
}
B522e7b:L522e7b:{c.instructions+=1;NFSU2_TR(0x522e7b);
{goto L522e8d;}
}
B522e7d:L522e7d:{c.instructions+=3;NFSU2_TR(0x522e7d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522e7f:{NFSU2_TR(0x522e7f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522e80:{NFSU2_TR(0x522e80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522e85ull));
TAIL_STATIC(0x5b3e40u,5b3);
}
B522e85:L522e85:{c.instructions+=1;NFSU2_TR(0x522e85);
{goto L522e8d;}
}
B522e87:L522e87:{c.instructions+=1;NFSU2_TR(0x522e87);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B522e8d:L522e8d:{c.instructions+=6;NFSU2_TR(0x522e8d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522e91:{NFSU2_TR(0x522e91);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B522e94:{NFSU2_TR(0x522e94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B522e96:{NFSU2_TR(0x522e96);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B522e99:{NFSU2_TR(0x522e99);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B522e9b:{NFSU2_TR(0x522e9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522e43u);}goto L522e43;}}
}
B522e9d:L522e9d:{c.instructions+=2;NFSU2_TR(0x522e9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B522e9e:{NFSU2_TR(0x522e9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522e9f:L522e9f:{c.instructions+=3;NFSU2_TR(0x522e9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B522ea0:{NFSU2_TR(0x522ea0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B522ea1:{NFSU2_TR(0x522ea1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522eb0:L522eb0:{c.instructions+=6;NFSU2_TR(0x522eb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522eb1:{NFSU2_TR(0x522eb1);
__builtin_memmove((R+24),(R+4),4);
}
B522eb3:{NFSU2_TR(0x522eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522eb6:{NFSU2_TR(0x522eb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B522eb9:{NFSU2_TR(0x522eb9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522ebb:{NFSU2_TR(0x522ebb);
if(r1(R+518)){{goto L522f03;}}
}
B522ebd:L522ebd:{c.instructions+=4;NFSU2_TR(0x522ebd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B522ec1:{NFSU2_TR(0x522ec1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522ec4:{NFSU2_TR(0x522ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522ec7:{NFSU2_TR(0x522ec7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L522ed3;}}
}
B522ec9:L522ec9:{c.instructions+=3;NFSU2_TR(0x522ec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B522ecb:{NFSU2_TR(0x522ecb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522ecd:{NFSU2_TR(0x522ecd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L522ee2;}}
}
B522ecf:L522ecf:{c.instructions+=2;NFSU2_TR(0x522ecf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B522ed1:{NFSU2_TR(0x522ed1);
{goto L522ee2;}
}
B522ed3:L522ed3:{c.instructions+=2;NFSU2_TR(0x522ed3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522ed6:{NFSU2_TR(0x522ed6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L522ee5;}}
}
B522ed8:L522ed8:{c.instructions+=3;NFSU2_TR(0x522ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B522edb:{NFSU2_TR(0x522edb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522edd:{NFSU2_TR(0x522edd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L522ee2;}}
}
B522edf:L522edf:{c.instructions+=1;NFSU2_TR(0x522edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B522ee2:L522ee2:{c.instructions+=1;NFSU2_TR(0x522ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522ee5:L522ee5:{c.instructions+=2;NFSU2_TR(0x522ee5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B522ee8:{NFSU2_TR(0x522ee8);
if(r1(R+518)){{goto L522f03;}}
}
B522eea:L522eea:{c.instructions+=2;NFSU2_TR(0x522eea);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24ull))));
}
B522eed:{NFSU2_TR(0x522eed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522ef2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522dd0u);}goto L522dd0;}
}
B522ef2:L522ef2:{c.instructions+=3;NFSU2_TR(0x522ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522ef5:{NFSU2_TR(0x522ef5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24ull))));
}
B522ef8:{NFSU2_TR(0x522ef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522efdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522d70u);}goto L522d70;}
}
B522efd:L522efd:{c.instructions+=3;NFSU2_TR(0x522efd);
w1(R+0,u8(0x1ull));
}
B522eff:{NFSU2_TR(0x522eff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522f00:{NFSU2_TR(0x522f00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522f03:L522f03:{c.instructions+=3;NFSU2_TR(0x522f03);
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
B522f05:{NFSU2_TR(0x522f05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522f06:{NFSU2_TR(0x522f06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522f10:L522f10:{c.instructions+=8;NFSU2_TR(0x522f10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522f11:{NFSU2_TR(0x522f11);
__builtin_memmove((R+20),(R+16),4);
}
B522f13:{NFSU2_TR(0x522f13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522f14:{NFSU2_TR(0x522f14);
__builtin_memmove((R+24),(R+4),4);
}
B522f16:{NFSU2_TR(0x522f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522f19:{NFSU2_TR(0x522f19);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B522f1c:{NFSU2_TR(0x522f1c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522f1e:{NFSU2_TR(0x522f1e);
if(r1(R+518)){{goto L522f7b;}}
}
B522f20:L522f20:{c.instructions+=3;NFSU2_TR(0x522f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522f23:{NFSU2_TR(0x522f23);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522f26:{NFSU2_TR(0x522f26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L522f35;}}
}
B522f28:L522f28:{c.instructions+=3;NFSU2_TR(0x522f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522f2b:{NFSU2_TR(0x522f2b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B522f2e:{NFSU2_TR(0x522f2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522f33ull));
TAIL_STATIC(0x5101e0u,510);
}
B522f33:L522f33:{c.instructions+=1;NFSU2_TR(0x522f33);
{goto L522f45;}
}
B522f35:L522f35:{c.instructions+=2;NFSU2_TR(0x522f35);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B522f38:{NFSU2_TR(0x522f38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L522f7b;}}
}
B522f3a:L522f3a:{c.instructions+=3;NFSU2_TR(0x522f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522f3d:{NFSU2_TR(0x522f3d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B522f40:{NFSU2_TR(0x522f40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522f45ull));
TAIL_STATIC(0x510240u,510);
}
B522f45:L522f45:{c.instructions+=2;NFSU2_TR(0x522f45);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B522f47:{NFSU2_TR(0x522f47);
if(r1(R+518)){{goto L522f7b;}}
}
B522f49:L522f49:{c.instructions+=11;NFSU2_TR(0x522f49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B522f4c:{NFSU2_TR(0x522f4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B522f4f:{NFSU2_TR(0x522f4f);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B522f52:{NFSU2_TR(0x522f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B522f55:{NFSU2_TR(0x522f55);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B522f56:{NFSU2_TR(0x522f56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522f57:{NFSU2_TR(0x522f57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522f58:{NFSU2_TR(0x522f58);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B522f5b:{NFSU2_TR(0x522f5b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522f5c:{NFSU2_TR(0x522f5c);
w4(R+4,u32(0x839c40ull));
}
B522f61:{NFSU2_TR(0x522f61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522f66ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x522500u);}goto L522500;}
}
B522f66:L522f66:{c.instructions+=3;NFSU2_TR(0x522f66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B522f68:{NFSU2_TR(0x522f68);
__builtin_memmove((R+4),(R+24),4);
}
B522f6a:{NFSU2_TR(0x522f6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522f6dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B522f6d:L522f6d:{c.instructions+=3;NFSU2_TR(0x522f6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B522f6f:{NFSU2_TR(0x522f6f);
__builtin_memmove((R+4),(R+24),4);
}
B522f71:{NFSU2_TR(0x522f71);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522f74ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B522f74:L522f74:{c.instructions+=4;NFSU2_TR(0x522f74);
w1(R+0,u8(0x1ull));
}
B522f76:{NFSU2_TR(0x522f76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522f77:{NFSU2_TR(0x522f77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B522f78:{NFSU2_TR(0x522f78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522f7b:L522f7b:{c.instructions+=4;NFSU2_TR(0x522f7b);
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
B522f7d:{NFSU2_TR(0x522f7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B522f7e:{NFSU2_TR(0x522f7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B522f7f:{NFSU2_TR(0x522f7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B522f90:L522f90:{c.instructions+=9;NFSU2_TR(0x522f90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B522f93:{NFSU2_TR(0x522f93);
{u32 ea_=u32(u32(8872940u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B522f99:{NFSU2_TR(0x522f99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522f9a:{NFSU2_TR(0x522f9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B522f9b:{NFSU2_TR(0x522f9b);
__builtin_memmove((R+28),(R+4),4);
}
B522f9d:{NFSU2_TR(0x522f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B522fa0:{NFSU2_TR(0x522fa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B522fa2:{NFSU2_TR(0x522fa2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B522fa6:{NFSU2_TR(0x522fa6);
if(r1(R+518)){{goto L522ffc;}}
}
B522fa8:L522fa8:{c.instructions+=4;NFSU2_TR(0x522fa8);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B522fae:{NFSU2_TR(0x522fae);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B522fb4:{NFSU2_TR(0x522fb4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B522fb8:{NFSU2_TR(0x522fb8);
{goto L522fc0;}
}
B522fc0:L522fc0:{c.instructions+=7;NFSU2_TR(0x522fc0);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B522fc3:{NFSU2_TR(0x522fc3);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B522fc6:{NFSU2_TR(0x522fc6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B522fca:{NFSU2_TR(0x522fca);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B522fcc:{NFSU2_TR(0x522fcc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B522fce:{NFSU2_TR(0x522fce);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B522fd1:{NFSU2_TR(0x522fd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x52301cu,523);}
}
B522fd3:L522fd3:{c.instructions+=8;NFSU2_TR(0x522fd3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B522fd5:{NFSU2_TR(0x522fd5);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B522fd7:{NFSU2_TR(0x522fd7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B522fdb:{NFSU2_TR(0x522fdb);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B522fdd:{NFSU2_TR(0x522fdd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B522fdf:{NFSU2_TR(0x522fdf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B522fe1:{NFSU2_TR(0x522fe1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B522fe4:{NFSU2_TR(0x522fe4);
if(r1(R+514)){TAIL_STATIC(0x523020u,523);}
}
B522fe6:L522fe6:{c.instructions+=2;NFSU2_TR(0x522fe6);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B522fe9:{NFSU2_TR(0x522fe9);
if(r1(R+518)){TAIL_STATIC(0x523020u,523);}
}
B522feb:L522feb:{c.instructions+=3;NFSU2_TR(0x522feb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B522fed:{NFSU2_TR(0x522fed);
__builtin_memmove((R+4),(R+28),4);
}
B522fef:{NFSU2_TR(0x522fef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522ff2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B522ff2:L522ff2:{c.instructions+=4;NFSU2_TR(0x522ff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B522ff4:{NFSU2_TR(0x522ff4);
__builtin_memmove((R+4),(R+28),4);
}
B522ff6:{NFSU2_TR(0x522ff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B522ff9:{NFSU2_TR(0x522ff9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x522ffcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B522ffc:L522ffc:{c.instructions+=1;NFSU2_TR(0x522ffc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x523000u,523);
}
XIT:NFSU2_TR_EXIT(0x522,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
